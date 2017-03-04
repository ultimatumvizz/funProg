test = input()
for i in xrange(test):
    a = input()
    stringA = bin(a)[2:]
    count = 0
    val = 1
    j = len(stringA) - 1
    while j != -1:
        if stringA[j] == "0":
            count += val
        val *= 2
        j -= 1
    print count
