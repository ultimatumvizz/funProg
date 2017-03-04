mod = 10**9 + 7
def coinChange():
        coins = [2,5,10,20,50,100,200]
        liz = [1 for i in range(10**5+1)]
        for coin in coins :
                for i in range(coin,len(liz)):
                        liz[i]+=liz[i-coin]
        return liz
liza = coinChange()
test = input()
for i in range(test):
        num = input()
        print liza[num]%mod
