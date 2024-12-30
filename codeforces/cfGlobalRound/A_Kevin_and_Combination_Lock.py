def canUnlock(t, test_cases):
    results = []
    for x in test_cases:
        isUnlocked = False
        while x>0:
            s = str(x)
            if "33" in s:
                pos = s.find("33")
                s = s[:pos] + s[pos+2:]
                if not s:
                    x = 0
                else:
                    x = int(s)
            elif x>=33:
                x -= 33
            else:
                isUnlocked = False
                break
        
        if x==0:
            isUnlocked = True
        
        results.append("YES" if isUnlocked else "NO")
    
    return results

t = int(input())
testCase = [int(input()) for _ in range(t)]

results = canUnlock(t, testCase)
print("\n".join(results))