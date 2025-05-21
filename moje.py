'''
liczba = input("Podaj liczbe")
podstawa = int(input("Podaj podstawe"))
w = 0

for x in liczba:
    w = w*podstawa + int(x)

print(w)
''' 
'''
# z dowolnego systemu na dziesietny

liczba = input("Podaj liczbe")
podstawa = int(input("Podaj podstawe"))
w = 0

s = {'0': 0, '1': 1, '2': 2, '3':3, '4':4, '5':5, '6':6,'7':7,'8':8,'9':9,'A': 10, 'B':11, 'C':12, 'D':13, 'E':14, 'F':15,}


for x in liczba:
    w = w*podstawa + int(s[x])

print(w)
'''
'''
liczba = input("Podaj liczbe")
podstawa = int(input("Podaj podstawe"))

def sys_na_d(liczba, podstawa):
    w = 0

    s = {'0': 0, '1': 1, '2': 2, '3':3, '4':4, '5':5, '6':6,'7':7,'8':8,'9':9,'A': 10, 'B':11, 'C':12, 'D':13, 'E':14, 'F':15,}


    for x in liczba:
        w = w*podstawa + int(s[x])
    return(w)

print(sys_na_d(liczba, 2))

'''













#Z dziesietnego na dowolny

s = "0123456789ABCDEF"  # Mapa cyfr dla różnych systemów liczbowych

liczba = int(input('x= '))  # Liczba w systemie dziesiętnym
p = int(input('podstawa= '))  # Podstawa docelowa

a = []

while liczba > 0:
    a.append(s[liczba % p])  # Pobieramy odpowiedni symbol z mapy `s`
    liczba = liczba // p

a.reverse()  # Odwracamy, by liczba miała poprawną kolejność
b = "".join(a)
print(b) 
print(a)




#Zamiana czworkowego na dwojkowy
#'''
''' 

S = {'0':'00', '1':'01', '2':'10', '3':'11'}
n = int(input("n= "))
k = 1

if n < 0:
    k = -1
    n = -n
w = ''
for x in str(n):
    w = w + S[x]

n = int(w)
w = k * w
print(w)
'''

#Zamiana z osemkowego na dwojkowy
'''
S = {'0':'000', '1':'001', '2':'010', '3':'011', '4':'100', '5':'101', '6':'110','7':'111'}
n = int(input("n= "))
k = 1

if n < 0:
    k = -1
    n = -n
w = ''
for x in str(n):
    w = w + S[x]

n = int(w)
w = k * w
print(w)'
'''