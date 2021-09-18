def compareTriplets(a, b):
    list1 = []
    alice = 0
    bob = 0
    for i in range(len(a)):
        if a[i] > b[i]:
            alice += 1
        if a[i] < b[i]:
            bob += 1
    list1.append(alice)
    list1.append(bob)
    print(list1)


a = [5, 6, 7]
b = [3, 6, 10]
compareTriplets(a, b)
