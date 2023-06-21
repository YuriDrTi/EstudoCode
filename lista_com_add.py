animais = []#lista
resposta = 's'
while resposta == 's' or resposta == 'S':
    resposta = input('Deseja adicionar um animal à lista (s/n)? ')
    if (resposta == 's' or resposta == 'S'):
        animal = input('Digite o nome do animal: ')
        animais.append(animal)#Função".append"adiciona a lista
print(animais)

animal = input('Digite o animal a ser deletado da lista: ')
animais.remove(animal)#função".remove"
print(animais)