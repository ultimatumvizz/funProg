# Enter your code here. Read input from STDIN. Print output to STDOUT
num = input()
string = bin(num)[2:]
current = 1
cumulative = 1
if num == 0 :
        print 1
else :
        for i in range(1,len(string)) :
                if string[i] == "0" :
                        current = cumulative + current
                if string[i] == "1" :
                        cumulative = cumulative + current
print current
