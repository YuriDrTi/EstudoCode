#função enumerate

lista = ["abc","cba","bca","acb"]

for i in range(len(lista)):
    print(i, lista[i])

for i, nome in enumerate(lista):
    print(i, nome)
#função map

def dobro(x):
    return x*2

valor = [1,2,3,4,5]
print(map(dobro, valor))

valor_d = map(dobro, valor)

valor_d = list(valor_d)
print(valor_d)

#função reduce
from functools import reduce
def soma(x,y):
   return x+y

soma = reduce(soma, valor)
print(soma)

from functools import reduce
def soma(x,y):
   return x+y

soma = reduce(soma, lista)
print(soma)#funciona para string!!

#função zip
Teste = [5,2.8,3.5,"sei lá"]

for numero, letra, Teste in zip(lista, valor, Teste):
    print(numero, letra, Teste)

