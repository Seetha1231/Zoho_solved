import math
word=input()
length=len(word)
n=int(math.sqrt(length))
if n*n!=length:
	n+=1
l=[[" " for i in range(n) ] for j in range(n)]
k=0
for i in range(n):
	for j in range(n):
		if k<length:
			l[i][j]=word[k]
			k+=1
		print(l[i][j],end=" ")
	print()
search=input()
ls=len(search)
f=0
for i in range(n):
	k,m=0,0
	for j in range(n):
		while l[i][j]==search[k] and k<ls:
			m+=1
			print(i,j)
			j+=1
			k+=1
			if m==ls:
				f=1
				break
		if f==1:
			break
	if f==1:
		break
print(f) 