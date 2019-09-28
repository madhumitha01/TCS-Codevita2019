
ln = list(int(x) for x in input().strip().split())[0]

arr = list(int(x) for x in input().strip().split())

buf = []; arr.sort()
visible_count = 0

for i in range(ln):
  flag = True
  for j in range(len(buf)):
    if arr[i] > buf[j]:
      buf[j] = arr[i]
      flag = False
      break
  if flag==True:
    buf.append( arr[i] )
    visible_count += 1

print( visible_count )
