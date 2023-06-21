import csv
from os import write
with open('Textos/brasil_covid.csv','r', encoding='utf-8') as arquivo_csv:
    leitor=csv.reader(arquivo_csv)
    header = next(leitor)
    for linha in leitor:
        if float(linha[2]) > 1:
          print(linha) 

with open('Textos/brasil_covid.csv','r', encoding='utf-8') as csv_file:
    linha = csv_file.read()
    linha = linha.split('\n')
    for linha in linha:
        Linha = linha.split(',')
    print(linha)

header=['Nome','numero']
Dado=[]
opt = input('1-Cadastro\n0-Fechar\n')
while opt !='0':
    Nome=input('Nome:')
    Numero=input('Numero:')
    Dado.append([Nome,Numero])
    opt=input('Vai contunuar?\n1-Continua\n0-Fecha\n')
print(Dado)

with open('Textos/User.csv','w',newline='') as Arquivo_User:
    writer = csv.reader(Arquivo_User)
    writer.writerow(header)
    writer.writerows(Dado)
with open('Textos/User.csv','r') as csv_file:
    csv_reader = csv.reader(csv_file,delimiter=',')
    for row in csv_file:
        print(row)