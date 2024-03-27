word = list(str(input()))

if list(word[::-1]) == word:
    print(1)
else:
    print(0)