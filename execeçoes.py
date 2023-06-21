a = 0
b = 0

a=int(input("de um valor "))
b=int(input("outro valor "))

try:
    print(a/b)
except:
    print("erro")
try:
    print(a*b)
except:
    print("está forçando")
try:
    print(a+b)
except:
    print("está errando")
