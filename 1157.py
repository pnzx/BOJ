word = input().upper()
a = list(set(word))

arr = []
for i in a:
  count = word.count
  arr.append(count(i))

if arr.count(max(arr)) > 1:
  print("?")

else:
  print(a[(arr.index(max(arr)))])