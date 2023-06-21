# dicionarios em python

#Em Python, dicionários são arrays
#associativos, ou seja, um determinado
#valor passa a ser vinculado a uma chave. Exemplo:
dicionario_sites = {"Diego": "diegomariano.com"}

#No dicionário acima, a chave "Diego"
#foi vinculado ao valor "diegomariano.com". Assim,
#para imprimir o valor chame:
print(dicionario_sites['Diego'])
# Sera impresso "diegomariano.com

#Se o dicionário tiver vários elementos,
#você pode usar laços para imprimi-los:
# dicionarios em python
dicionario_sites = {"Diego": "diegomariano.com", "Google": "google.com", "Udemy": "udemy.com"}

for chave in dicionario_sites:
    print(dicionario_sites[chave])

#dicionario e aberto entre chaves

meu_dici = {"A":"Aberto","b":"Fechado","C":"entreaberto"}

for chave in meu_dici:
    print(chave+"="+meu_dici[chave])
for i in meu_dici.items():#chaves e valor
    print(i)
for e in meu_dici.values():#valor apenas
    print(e)
for CH in meu_dici.keys():#chaves apenas
    print(CH)

