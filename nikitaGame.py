def checkSum(liz):
	A = sum(liz)/2
	for i in xrange(len(liz)):
		if sum(liz[0:i]) == A :
			return i
	return -1
	
def checkPoint(liz):
	if sum(liz)==0:
		return len(liz)-1
	if len(liz) == 1 :
		return 0
	if sum(liz)%2==1 :
		return 0
	i = checkSum(liz)
	if i!=-1:
		return  1 + max(checkPoint(liz[0:i]),checkPoint(liz[i:]))
	else :
		return 0

n = input()
for i in xrange(n):
	temp = input()
	print checkPoint([int(num) for num in raw_input().split()])
