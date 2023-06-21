import random

Lista = [50,80,54,5,2,4,6,8,7,3,10,45,236,654,852]
#valor aleatorio de finido
numero = random.randint(0,100)
print(numero)
#valor de uma lista
numb = random.choice(Lista)
print(numb)

mlista = []
for i  in  range(0,10):
    numb = random.choice(Lista)
    mlista.append(numb)

print(mlista)
mlista.sort()
print(mlista)
mlista.reverse()
print(mlista)


