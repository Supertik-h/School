#Wszystkie cyfry nieparzyste z liczby (w tablicy 15 elementowej)
#o każdej cyfry w liczbie dodajesz 1 i wypisujesz długość tej nowej liczby

def rozdziel(liczba):
    return list(str(liczba))

 
licz = int(input("Podaj liczbe "))

lista = rozdziel(licz)
''' 

for i in range(len(lista)):
    if int(lista[i])%2 == 1:
        print(lista[i])
'''
dl = 0
slowo = ''
for i in range(len(lista)):
    if int(lista[i]) == 9:
        dl += 1
    zm = int(lista[i]) + 1

    lista[i] = zm
    slowo += str(lista[i])
    
print(slowo, len(slowo))
print(lista)