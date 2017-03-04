string = raw_input()
temp = len(string)
i = 0
while  i+1 != len(string) :
	if string == "" :
		break 
	if string[i] == string[i+1] :
		string = string[:i] + string[i+2:]
		i=0
	else : 
		i+=1
if string == "" :
	print "Empty String"
else :
	print string
