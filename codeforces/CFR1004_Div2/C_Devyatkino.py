import sys

def does_contain_7(value):
    while value > 0:
        if value % 10 == 7:
            return True
        value //= 10
    return False

def min_operations(n, r):
    a = n - r
    digits = []
    
    if a == 0:
        digits.append(0)
    else:
        while a > 0:
            digits.append(a % 10)
            a //= 10
    
    length = max(len(digits), 12)
    max_carry = 40
    dp = [[0] * 42 for _ in range(32)]
    next_dp = [[0] * 42 for _ in range(32)]
    dp[r][0] = 1
    
    for pos in range(length):
        for i in range(r + 1):
            for j in range(max_carry):
                next_dp[i][j] = 0
                
        d = digits[pos] if pos < len(digits) else 0
        
        for rem in range(r + 1):
            for carry in range(max_carry):
                mask = dp[rem][carry]
                if mask == 0:
                    continue
                
                for add in range(rem + 1):
                    total = d + carry + add
                    new_digit = total % 10
                    new_carry = total // 10
                    if new_carry >= max_carry:
                        continue
                    new_rem = rem - add
                    new_mask = mask
                    if new_digit == 7:
                        new_mask |= 2
                    next_dp[new_rem][new_carry] |= new_mask
        
        for i in range(r + 1):
            for j in range(max_carry):
                dp[i][j] = next_dp[i][j]
    
    return (dp[0][0] & 2) != 0

def solution():
    n = int(input().strip())
    if does_contain_7(n):
        print(0)
        return
    
    ans = -1
    for r in range(1, 31):
        if min_operations(n, r):
            ans = r
            break
    
    print(ans)

def main():
    sys.stdin = open(0)
    t = int(input().strip())
    for _ in range(t):
        solution()

if __name__ == "__main__":
    main()
