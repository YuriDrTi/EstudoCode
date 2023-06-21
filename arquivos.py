
#r leitura
#w escrita e apaga
#a, r+ leitura e escrita


#listas e dicinarios
Mlista1 = ["ler","escrever","publicar"]
Mlista2 = [1,2,3,4,5,6,]
Mlista3 = ["valor",1.5,1,5,True]

print(Mlista1)
print(Mlista2)
print(Mlista3)
print(Mlista3[3])
for item in Mlista3:
    print(item)

Mlista3.append(False)
print(Mlista3)

if 1.5 in Mlista3:
    print("1.5 esta na lista")
#del remove itens

del Mlista3[5]
print(Mlista3)

#criar lista em branco
Mliesta4 = []
Mliesta4.append(3)
print(Mliesta4)

Mlista2.sort(reverse=True)
print(Mlista2)
Mlista2.reverse()
print(Mlista2)


