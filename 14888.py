import sys

input = sys.stdin.readline

N = int(input())
num = list(map(int, input().split()))
opr = list(map(int, input().split()))

maximum = -1000000000
minimum = 1000000000

def dfs(depth, plus, minus, mult, div, total):
    global maximum, minimum
    if depth == N:
        maximum = max(total, maximum)
        minimum = min(total, minimum)
        return
    
    if plus:
        dfs(depth + 1, plus -1, minus, mult, div, total + num[depth])
    if minus:
        dfs(depth + 1, plus, minus - 1 , mult, div, total - num[depth])
    if mult:
        dfs(depth + 1, plus, minus, mult - 1, div, total * num[depth])
    if div:
        dfs(depth + 1, plus, minus, mult, div - 1, int(total / num[depth]))

dfs(1, opr[0], opr[1], opr[2], opr[3], num[0])

print(maximum)
print(minimum)