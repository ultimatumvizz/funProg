import math
def isPrime(num):
        for i in range(2,int(math.sqrt(num))+1):
                if num%i == 0 :
                        return False
        return True
liz = []
count = 0
i = 2
while count <= 10001:
        if isPrime(i):
                liz.append(i)
                count+=1
        i+=1
test = input()
for i in range(test):
        number = input()
        print liz[number-1]
