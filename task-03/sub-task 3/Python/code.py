n = int(input())
for i in range((n + 1) // 2):
    print(" " * ((n // 2) - i) + "*" * (2 * i + 1))
for i in range((n // 2) - 1, -1, -1):
    print(" " * ((n // 2) - i) + "*" * (2 * i + 1))

