import API
url='https://www.alphavantage.co/query?'
req= requests.get(url)
print(req.status_code)

dados= req.json()
print(dados)
