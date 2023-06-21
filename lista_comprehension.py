#list comprehension

x = [1,2,3,4,5,6]
y = []

for i in x:
    y.append(i**2)

print(x)
print(y)

q = [2,4,5,6,7,8]
w = [z**2 for z in q]

print(q)
print(w)

a = [1,2,3,4,5,6,7,8,9]
s = [d**2 for d in a]
z = [i for i in a if i%2==1]

print(s)



