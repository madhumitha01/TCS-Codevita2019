N  = int(input().strip())
st = input().strip()

Q  = int(input().strip())
qrs = []
for _ in range(Q):
  qrs.append( (_,int(input().strip())) )
qrs.sort(key=lambda x:(st[x[1]-1],x[1]))

psnt_c,psnt_indx,psnt_val = False,-1,0

res = []
for indx,q in qrs:
  c = st[q-1]
  if c!=psnt_c:
    psnt_c = c
    psnt_val  = st[:q-1].count(c)
    psnt_indx = q-1
  else:
    psnt_val += st[psnt_indx:q-1].count(c)
    psnt_indx = q-1
  res.append((indx,psnt_val))
  
print(*(x[1] for x in sorted(res,key=lambda x:x[0])),sep='\n',end='\n')
