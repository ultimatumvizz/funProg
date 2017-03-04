def func(string,consc):
        product = 1
        for element in string[:consc] :
                product*=int(element)
        maxi = product
        for i in range(consc,len(string)):
                if string[i-consc] == "0" :
                        product = 1
                        for element in string[i-consc+1:i]:
                                product*=int(element)
                else :
                        product /= int(string[i-consc])
                product *= int(string[i])
                if product > maxi :
                        maxi = product
        return maxi
test = input()
for i in range(test):
        tot,consc= [int(i) for i in raw_input().split()]
        string = raw_input()
        print func(string,consc)
