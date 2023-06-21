arquivo = open('Textos/dom_casmurro_cap1.txt','r',encoding='utf-8')
texto = arquivo.read()#abre arquivo
print(texto)
arquivo.close

arquivo = open('Textos/dom_casmurro_cap1.txt','r',encoding='utf-8')
linha = arquivo.readline()
while linha !='':#metodo while
    print(linha,end='')
    linha = arquivo.readline()
arquivo.close

arquivo = open('Textos/dom_casmurro_cap1.txt','r',encoding='utf-8')
for linha in arquivo:#metodo for
    print(linha,end='')

arquivo.close#OBS: sempre fechar
#abaixo fecha ao final do código
with open('Textos/dom_casmurro_cap1.txt','r',encoding='utf-8') as arquivo:
    texto = arquivo.read()
    print(texto)

with open('Textos/Dados.txt','w',encoding='utf-8') as Dados:
    Dados.write('Algo novo\n')#"w"escreve porém apaga o texto anterior
    Dados.write('Pode ser estranho mas e python\n')

with open('Textos/Dados.txt','r',encoding='utf-8') as Dados:
    print(Dados.read(), end='')#leitura

with open('Textos/Dados.txt','a',encoding='utf-8') as Dados:
    Dados.write('mais algo\n')#"a" adiciona mais linha sem apagar
    Dados.write('Pode ser escrito\n')

with open('Textos/Dados.txt','r',encoding='utf-8') as Dados:
    print(Dados.read(), end='')#leitura

#read	r	lê um arquivo existente
#write	w	cria um novo arquivo
#append	a	abre um arquivo existente para adicionar informações ao seu final
#update	+	ao ser combinado com outros modos, permite alteração de arquivo já existente
#(ex: r+ abre um arquivo existente e permite modificá-lo)