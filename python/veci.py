i = list(input())
def function(array):
    val = array[-1]
    for i in range(-1, -len(array)-1, -1):
        if val > array[i]:
            return len(array) + i
        else:
            val = array[i]
    return -1


# def nextBiggest(num):
#     num.sort()
#     last = num[0]
#     for i in len(num):
#         if num[i] > last:
#             num[0]

def newNum(arr, n):
    arr = list(map(int, arr))
    n = int(n)
    arr2 = []
    max = 9999999
    for x in range(len(arr)):
        if n < arr[x] < max:
            max = arr[x]
    arr2.append(max)
    arr.remove(max)
    while len(arr) > 0:
        min = 9999999
        index = -1
        for x in range(len(arr)):
            if arr[x] < min:
                min = arr[x]
                index = x
        arr2.append(arr[index])
        arr.remove(min)
    return arr2

n = function(i)
if n >= 0:
    arr2 = []
    arr = i
    for x in range(n):
        print(arr[x], end="")
    for x in range(n, len(arr)):
        arr2.append(arr[x])
    print("".join(list(map(str,(newNum(arr2, arr[n]))))))
else:
    print(0) 