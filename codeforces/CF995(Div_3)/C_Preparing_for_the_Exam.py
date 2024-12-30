def main():
    import sys
    input = sys.stdin.read
    data = input().split()

    t = int(data[0])
    index = 1
    results = []

    for _ in range(t):
        n, m, k = map(int, data[index:index+3])
        index += 3

        a = list(map(int, data[index:index+m]))
        index += m

        known_questions = set(map(int, data[index:index+k]))
        index += k

        result = []

        for missing in a:
            can_pass = all(
                q in known_questions
                for q in range(1, n + 1)
                if q != missing
            )
            result.append('1' if can_pass else '0')

        results.append(''.join(result))

    sys.stdout.write('\n'.join(results) + '\n')

if __name__ == "__main__":
    main()