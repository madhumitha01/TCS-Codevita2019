h,N = 0,int(input().strip())
for i in range(N):
  st1 = list(map(str,map(lambda x:10*(x+1+h),range(N-i))))
  st2 = list(map(str,map(lambda x:10*((N+1)*N-x-h),range(N-i-1,-1,-1))))
  h = h + (N-i) 
  print((2*i)*'*',*st1,*st2[:-1],*st2[-1][:-1],sep='')
