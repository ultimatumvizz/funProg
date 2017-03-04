import math
test = input()
for i in range(test):
        n = input()
        e3 = int(math.ceil(n/3.0-1))
        e5 = int(math.ceil(n/5.0-1))
        e15 = int(math.ceil(n/15.0-1))
        print (3*e3*(e3+1) + 5*e5*(e5+1) - 15*e15*(e15+1))/2
