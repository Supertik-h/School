#Zamiana liczby z arabskiej na rzymska
'''    
R = {1000:'M', 900:'CM', 500:'D', 400:'CD', 100:'C', 90:'XC', 50:'L', 40:'XL', 10:'X', 9:'IX', 5:'V', 4:'IV', 1:'I'}
'''
''' 
n = int(input("n= "))
w = ''

Rz = list(R.keys())
Rz.sort(reverse=True)
print(Rz)

for x in Rz:
    while x <= n:
        w += R[x]
        n -= x
print(w)
'''


'''
A = {1000:'M', 900:'CM', 500:'D', 400:'CD', 100:'C', 90:'XC', 50:'L', 40:'XL', 10:'X', 9:'IX', 5:'V', 4:'IV', 1:'I'}
A = dict(zip(A.values(), A.keys()))
print(A)
n = input("n= ")
w = 0
i = 0
while i < len(n):
    if i != len(n)-1 and n[i]+n[i+1] in A:
        w += A[n[i]+n[i+1]]
        i += 2
    else:
        w += A[n[i]]
        i += 1
print(w)

'''
#WIEOLOMIANY SCHEMAT HORNERA
'''
print('Podaj wsp. wiel')
w = []
a = 0
while a != 'k':
    a = input('wspolczynnik ')
    if a!='k': w.append(int(a))


x = int(input('x= '))
a = 0

for i in range(len(w)):
    a = a*x + w[i]
print(a)
'''

#Zamiana dowolnego systemu liczbowego
''' 
w = []
a = 0
l = input("podaj liczbe ")
for i in l:
    w.append(int(i)) #liczba


x = int(input('x= ')) #podstawa systemu
a = 0

for i in range(len(w)):
    a = a*x + w[i]
print(a)

'''

#Robi to samo ALE DALCZEGO ???????????????????????????
#s = {'0': 0, '1': 1, '2': 2, '3':3, '4':4, '5':5, '6':6,'7':7,'8':8,'9':9,'A': 10, 'B':11, 'C':12, 'D':13, 'E':14, 'F':15,}

n = input('n= ')
p = int(input('podstawa= '))

w = 0
for x in n:
    w = w*p + int(x)
print(w)

''' 
#NIE DZIALA Z 10 na dowolny system mniejszy od 10
s = {'0': 0, '1': 1, '2': 2, '3':3, '4':4, '5':5, '6':6,'7':7,'8':8,'9':9,'A': 10, 'B':11, 'C':12, 'D':13, 'E':14, 'F':15,}
x = int(input('x= '))
p = int(input('podstawa= '))
a = []

while x > 0:
    print(x)
    a.append(x%p)
    print(x%p)
    x = x // p


a.reverse()
print(a)
''' 