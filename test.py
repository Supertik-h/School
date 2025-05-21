plik = open("trojki.txt")
t = plik.readlines()

for i in range(len(t)):
    t[i] = t[i].rstrip()
    t[i] = t[i].split()

def rozdziel(liczba):
    return list(str(liczba))


sum = 0
for x in t:
    
    rozdzielona1 = rozdziel(int(x[0]))
    for y in rozdzielona1:
        sum += int(y)
    print(sum)
    rozdzielona2 = rozdziel(int(x[1]))
    for z in rozdzielona1:
        sum += int(y)
    print(sum)

    print(x[0], x[1], sum, int(x[2]))
    if sum == int(x[2]):
        print(x)

    sum = 0

