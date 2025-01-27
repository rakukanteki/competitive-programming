def solve():
    n, m = map(int, input().split())
    last_card = -1
    is_valid = True

    cards = []
    smallest_card = []
    sequence = []
    
    for i in range(n):
        card = list(map(int, input().split()))
        card.sort()
        cards.append(card)
        smallest_card.append(card[0])
        sequence.append(i + 1)

    for i in range(n):
        for j in range(i + 1, n):
            if smallest_card[i] > smallest_card[j]:
                smallest_card[i], smallest_card[j] = smallest_card[j], smallest_card[i]
                sequence[i], sequence[j] = sequence[j], sequence[i]

    for r in range(m):
        for i in range(n):
            cow = sequence[i] - 1
            played = False

            for j in range(m):
                if cards[cow][j] > last_card:
                    last_card = cards[cow][j]
                    cards[cow][j] = -1
                    played = True
                    break

            if not played:
                is_valid = False
                break

    if is_valid:
        print(" ".join(map(str, sequence)))
    else:
        print(-1)

if __name__ == "__main__":
    t = int(input())  
    for _ in range(t):
        solve()
