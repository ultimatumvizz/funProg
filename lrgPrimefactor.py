import math
def primeFactorizationMaxi(num):
        while num%2 == 0:
                num/=2
                #print 2
        maxi = 2
        if num == 1 :
                return 2
        for i in range(3,int(math.sqrt(num))+1,2):
                while num%i == 0 :
                        num/=i
                        maxi = i
                        #print i
        if num > 2 :
                return num
        return maxi
test = input()
for i in range(test):
        print primeFactorizationMaxi(input())
