def factor(num):
	liz = []
	for i in range(1,27):
		if num % i == 0 :
			liz.append([i,num/i])
	return liz

string = raw_input()	
liz = [0]*27
for char in string :
	liz[ord(char)-96] += 1
for i in range(input()):
	num = input()
	liza = factor(num)
	flag = 0
	for i in range(len(liza)):
		if liza[i][1] <= liz[liza[i][0]] :
			print "Yes"
			flag = 1
			break
	if flag == 0 :
		print "No"
