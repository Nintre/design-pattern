import json
from urllib.parse import uses_relative
import urllib.request
import ssl
ssl._create_default_https_context = ssl._create_unverified_context

from  sqlalchemy import create_engine,Column,Integer,String,Float,DECIMAL
from sqlalchemy.ext.declarative import declarative_base
from sqlalchemy.orm import sessionmaker

import requests



api_key='8cdb4b49540e0f720cbdd79e'
currency_list1={"CNY", "USD", "EUR", "GBP", "JPY", "CAD", "BRL", "MXN", "TRY", "SEK", "PLN", "INR", "AUD", "SGD", "AED", "SAR"}

currency_list=["CNY", "USD", "EUR", "GBP", "JPY", "CAD", "BRL", "MXN", "TRY", "SEK", "PLN", "INR", "AUD", "SGD", "AED", "SAR"]

url_api = 'https://v6.exchangerate-api.com/v6/{}/latest/{}'

for currency in currency_list:
    url=url_api.format(api_key,currency)
    print(url)

url=url_api.format(api_key,currency_list[0])

response = requests.get(url)
request_json = response.json()

#只提取了rates
res=request_json['conversion_rates']
print(res)

#提取需要的货币及汇率
def extract_currency(res):
    res1={key:value for key,value in res.items() if key in currency_list1}

res={key:value for key,value in res.items() if key in currency_list1}
print(res)


HOSTNAME='127.0.0.1'
PORT="3306"
#DATABASE='currency_exchanges' #连接到了表
DATABASE='seller'
USERNAME="root"
PASSWORD="hu306415"
DB_URL="mysql+pymysql://{username}:{password}@{host}:{port}/{db}?charset=utf8".format(username=USERNAME,password=PASSWORD,host=HOSTNAME,port=PORT,db=DATABASE)
engine=create_engine(DB_URL)
#判断是否连接成功
conn=engine.connect()
result=conn.execute("select 1")
print(result)
Base=declarative_base(engine)
session=sessionmaker(engine)()

class CurrencyRate(Base):
    __tablename__="currency_rates"
    id=Column(Integer,primary_key=True,autoincrement=True)
    from_currency=Column(String(191))
    to_currency=Column(String(191))
    exchange_rate=Column(Float(11, 2))


first=res

for r in res:
    if(res[r]==1):
        first=r
        cb=CurrencyRate(from_currency=r,to_currency=r,exchange_rate=res[r])
        session.add(cb)
        session.commit()
        continue
    ca=CurrencyRate(from_currency=first,to_currency=r,exchange_rate=res[r])
    session.add(ca)
    session.commit()
session.close()
print("插入成功")
