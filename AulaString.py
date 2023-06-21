empresa = "google"

empresa = 'google'
print(empresa[2])#1,2 letras
print(empresa[:3])#1,2,3 letras

NomesCidade="são,Rio,Mg,bra"
NomesCidade=NomesCidade.split(',')
print(NomesCidade)

NomeCity = "rIo De janeiro"

print(NomeCity.title())#primeira depois do espaço
print(NomeCity.capitalize())#primeira letra
print(NomeCity.lower())#Tudo em minusculo
print(NomeCity.upper())#tudo em caixa alta

Comprimento="Olá"
NomeP="joão"
print(Comprimento+NomeP)

print(NomeP * 5)

Idade=25
Filho=2
print(NomeP +'idade'+ str(Idade) +'e filhos'+ str(Filho))

print('Nome{}tem{}Filhos'.format(NomeP,Idade,Filho))#metodo".format"

PrecoGas=5.681
print('O preço esta{:.2f}'.format(PrecoGas))