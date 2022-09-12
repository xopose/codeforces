n, k = map(int, input().split())
a = [i for i in map(int, input().split())]
last_k = k
k = a[k - 1]
if k < 1:
    k = 0
    for i in range(len(a) - (len(a)-last_k)):
        if a[i] > 0:
            k += 1
    print(k)
else:
    print(len(a) - a[::-1].index(k))
