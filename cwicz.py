# z dowolnego na 10

#liczba = input("podaj liczbe ")
#podstawa = int(input("Podaj podstawe "))


def sys_na_d(liczba, podstawa):
    s = {'0': 0, '1': 1, '2': 2, '3':3, '4':4, '5':5, '6':6,'7':7,'8':8,'9':9,'A': 10, 'B':11, 'C':12, 'D':13, 'E':14, 'F':15,}
    w = 0

    for x in liczba:
        w = w*podstawa +s[x]

    return(w)


#print(sys_na_d(liczba, 2))

t = ["101", "111", "100"]

for x in t:
    dzies = sys_na_d(x, 2)
    if dzies%2 == 0:
        print(x)









'''      
# z dziesietnego na dowolny

liczba = int(input("Podaj liczbe"))
podstawa = int(input("Podaj podstawe"))

s = "0123456789ABCDEF"
a = []

while liczba > 0:
    a.append(s[liczba%podstawa])
    liczba = liczba//podstawa

a.reverse()

print("".join(a))'
'''
'''
#Zamiana czworkowego na dwojkowy
S = {'0':'00', '1':'01', '2':'10', '3':'11'}

n = int(input("n= "))

k = 1
w = ''

if n < 0:
    k = -1
    print("ujemna")
    n = -n

for x in str(n):
    w = w + S[x]

n = int(w)
w = k * w
print(w, n*k)'
'''