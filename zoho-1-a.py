#-------------------------------------------------------------------------------
# Name:        module1
# Purpose:
#
# Author:      SEETHALAKSHMI
#
# Created:     27-07-2018
# Copyright:   (c) SEETHALAKSHMI 2018
# Licence:     <your licence>
#-------------------------------------------------------------------------------
import math
def generate(word):
	n=len(word)
	j=n-1
	l=[["  " for i in range(n)] for j in range(n)]
	for i in range(n):
		l[i][i]=word[i]
		l[i][j]=word[j]
		j-=1
	for i in range(n):
		for j in range(n):
				print(l[i][j],end=" ")
		print()

def main():
    word=input()
    generate(word)

if __name__ == '__main__':
    main()
