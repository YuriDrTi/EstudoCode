NomeCity=['são','lon','to','pari']
for Nome in NomeCity:
 print(Nome)

City={
    'Nome':'Rio','Estado':'Rio'
}
for Chave in City:
    print(City[Chave])

for Pos in range(len(NomeCity)):
    NomeCity[Pos]='são'
print(NomeCity)

print(list(range(10)))#0,1,2,3,4,5,6,7,8,9
print(list(range(2,10)))#2,3,4,5,6,7,8,9,
print(list(range(2,10,2)))#2,4,6,8