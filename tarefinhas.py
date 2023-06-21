#Problema 1
Idade = int(input("De sua idade"))

if Idade > 18:
    print("Maior de idade")
else:
    print("Menor de idade")
#Problema 2
Nota1 = float(input("Sua nota"))
Nota2 = float(input("Sua nota"))

Nota = (Nota1+Nota2)/2

if Nota >= 6:
    print("aprovado")
else:
    print("reprovado")
#Problema 3
from math import sqrt
A = int(input("Numero"))
B = int(input("Numero"))
C = int(input("Numero"))

delta = b**2 - 4*A*C
if delta < 0:
    print("Delta Negativo")
else:
    raiz_delta = sqrt(delta)
    x1 = (-B + raiz_delta)/2*A
    x2 = (-B - raiz_delta)/2*A

    print("As raiz", x1,"e", x2)
#Problema 4

#equação de 2 grau

