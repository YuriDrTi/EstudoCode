#string = variaves de text
Avariavel = "nome"
BVariavel = "Sobrenome"

Concatenar = Avariavel +" "+ BVariavel
print(Concatenar)

tamanho = len(Concatenar) # len da o tamanho da string com espaço
print(tamanho)
Tamanho = len(Concatenar) -1 # len da o tamanho da string sem usando o -1
print(Tamanho)
print(Avariavel[3]) #posição espqcifica da string[Valor]
print(BVariavel[5])
print(Concatenar[11])
print(Concatenar[0:6]) #contidade especifica

#metodo aplicado em string
print(Concatenar.lower())#tudo minusculo
print(Concatenar.upper())#tudo maiusculo
newconcatenar = Concatenar.upper()
print(newconcatenar)
print(Concatenar.strip())#tira caracter especial e espaço
print(newconcatenar.split())#separa por espaço

busca = newconcatenar.find()#find busca
Concatenar.replace()#troca de valor(anterio,novo)
print(busca)