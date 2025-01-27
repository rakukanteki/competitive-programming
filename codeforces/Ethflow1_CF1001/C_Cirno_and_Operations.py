def solution():
    n = int(input())  # Read the size of the array
    a = list(map(int, input().split()))  # Read the array elements

    # Case when n == 1
    if n == 1:
        print(a[0])
        return

    # Case when n == 2
    if n == 2:
        if a[0] < 0 or a[1] < 0:
            a.reverse()
            ans = abs(a[0] - a[1])
            print(ans)
            return
        else:
            print(a[0] + a[1])
            return

    maxSum = sum(a)  

    for i in range(1, n):
        temp = a.copy()

        for j in range(i):
            if len(temp) == 1:
                break

            if temp[0] > temp[-1]:
                temp.reverse()

            diff = [temp[k + 1] - temp[k] for k in range(len(temp) - 1)]
            temp = diff

        currSum = sum(temp)
        if currSum > maxSum:
            maxSum = currSum

    print(maxSum)


def main():
    t = int(input())
    for _ in range(t):
        solution()


if __name__ == "__main__":
    main()
