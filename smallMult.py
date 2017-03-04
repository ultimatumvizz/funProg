def multiples(value,num):
        temp = num
        while   True  :
                if num > value :
                        return num/temp
                else :
                        num*=temp

def func(value):
        liz = [2,3,5,7,11,13,17,19,23,29,31,37]
        product = 1
        for i in range(len(liz)):
                product*=multiples(value,liz[i])
        return product
test = input()
for i in range(test):
        print func(input())
