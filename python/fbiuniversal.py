cases = int(input())
for case in range(1, cases+1):
    line = input().split()[1]
    swapdict = {"B": "8", "G": "C", "O": "0", "I": "1", "Q":"0", "S": "5", "U": "V", "Y":"V", "Z":"2"}
    for x, y in swapdict.items():
        line = line.replace(x, y)
    str = line[:-1]
    checkdigit = line[-1]
    total = 0
    array = [2, 4, 5, 7, 8, 10, 11, 13]
    d = {"0": 0, "1": 1, "2": 2, "3": 3, "4": 4, "5": 5, "6": 6, "7": 7, "8": 8, "9": 9,
         "A": 10, "C": 11, "D": 12, "E": 13, "F": 14, "H": 15, "J": 16, "K": 17, "L": 18,
         "M": 19, "N": 20, "P": 21, "R": 22, "T": 23, "V": 24, "W": 25, "X": 26}
    for i in range(-1, -(len(str)+1), -1):
        total += (d[str[i]] * (27 ** -(i+1)))
    checkval = 0
    for i in range(len(array)):
        checkval += array[i] * d[str[i]]
    checkval %= 27
    if checkval == d[checkdigit]:
        print("{0} {1}".format(case, total))
    else:
        print("{0} Invalid".format(case))

