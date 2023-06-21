DadosCity={
'Nome':'Rio',
'Estado':'Rio',
'area':'10000',
}
print(type(DadosCity))
print(DadosCity)

DadosCity['pais']='Brasil'
print(DadosCity)

DadosCity2=DadosCity.copy#copiar

DadosCity3={
    'Nome':'SP',
    'População':'200000',
}

DadosCity.update(DadosCity3)#atualização
print(DadosCity)

print(DadosCity.keys())#lista de chaves
print(DadosCity.values())#lista de valores
print(DadosCity.items())#Lista de (chave,valor)
