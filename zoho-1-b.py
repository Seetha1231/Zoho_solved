import math

def isPerfectSquare(n):
	v=int(math.sqrt(n))
	return n==(v*v)

def ismul4div6(n):
	return (n%4==0 and n%6==0)

def main():
	word=list(map(int,input().split()))
	val={}
	for i in word:
	 	if(isPerfectSquare(i)):
	 		val[i]=5
	 	elif ismul4div6(i):
	 		val[i]=4
	 	elif i%2==0:
	 		val[i]=3
	print(val)
	n=len(val)
	for i in range(n):
		p=val[i].key
		for j in range(i+1,n):
			if val[i].key<val[j].key:
				p=val[j].key
		if val[i].key!=p:
			t=val[i].key
			val[i].key=val[p].key
			val[p].key=t
	print(val)





if __name__ == '__main__':
    main()