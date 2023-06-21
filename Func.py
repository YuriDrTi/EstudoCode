def hello():
    print('olá')
hello()

def CalculaMedia(Valor1,Valor2,Valor3):
 Soma = Valor1+Valor2+Valor3
 Media= Soma/3
 return Media

Resulatado = CalculaMedia(9,10,8)
print(Resulatado)

print('ola',end='')
print(',Pedro')

Resulatado = CalculaMedia(5,6,4)
print(Resulatado)

def CalculaMedia(*args,margem):
    Somas = sum(args)
    Media = Somas/len(args)
    return Media + margem

CalculaMedia(10,8,9,margem=0.3)

def PrintInf(**Kwargs):
    print(Kwargs,type(Kwargs))

PrintInf(nome='pedro',sobrenome='gru')