
#Wpisać liczbę całkowita zamienić cyfry parzyste na 0 podać dlugosc tej liczby 
#I stworzyć losowa tablice i wypisać z niej liczby których suma cyfr jest podzielna przez 3

import random

def rozdziel(liczba):
    return list(str(liczba))

''' 
licz = int(input("Podaj liczbe "))

lista = rozdziel(licz)
''' 
'''  
for i in range(len(lista)):
    if int(lista[i]) % 2 == 0:
        lista[i] = '0'

print(lista, len(lista))
'''
t = [random.randint(1,50) for i in range(10)]

print(t)

for i in range(len(t)):
    sum = 0
    lista = rozdziel(t[i])
    for j in range(len(lista)):
        sum += int(lista[j])
    if sum % 3 == 0:
        print(t[i])
    