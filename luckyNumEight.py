def zeroCorrection(string,W,P,Z):
    if string == "2" or string == "6" :
                 W += Z
    if string == "8" :
                 P += Z
    return W,P
mod = 10**9 + 7
length = input()
string = raw_input()
Table = [[4,8],[2,6],[8,4],[6,2]]
Wait = 0
Pass = 1
Box = 0
W = 0
P = 0
Zeroes = 0
DoubleZeroes = 0
ZeroCount    = 0
ZeroEight    = 0
Array = [0,0,0,0,0]
for i in range(length-1,-1,-1):
    if string[i] == "0" :
            ZeroCount += ZeroCount + Box + DoubleZeroes + P + ZeroEight
            DoubleZeroes += Zeroes
            ZeroEight    += Array[4]
            W +=  Array[2] 
            Zeroes += 1
    else :
            if int(string[i]) % 2 == 1 :
                        Box +=  Box + W + ZeroCount
            else :
                        Box +=  Box + P + DoubleZeroes + ZeroCount + ZeroEight
                        W, P = zeroCorrection(string[i], W, P, Zeroes)
            Bit = int(string[i]) % 4
            W += Array[Table[Bit][Wait]/2]
            P += Array[Table[Bit][Pass]/2]
            if int(string[i]) % 2 == 0 :
                Array[int(string[i])/2]  += 1
Box += P + Array[4] + Zeroes + DoubleZeroes + ZeroCount + ZeroEight
print Box % mod
