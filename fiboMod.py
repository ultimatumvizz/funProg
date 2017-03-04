string = raw_input()
liz = [ int(element) for element in string.split() ]
t1 = liz[0]
t2 = liz[1]
temp = 0
for i in range(3,liz[2]+1):
        temp = t1 + t2**2
        t1 = t2
        t2 = temp
print t2
