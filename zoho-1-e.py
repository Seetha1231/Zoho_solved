li=[["luke","shaw"],["wayne","rooney"],["rooney","ronaldo"],["shaw","rooney"]]
l=[[1,2],[3,4],[4,5],[2,4]]
d={}
for i in li:
	if i[1] not in d:
		d[i[1]]=[i[0]]
	else:
		d[i[1]].append(i[0])
print(d)

print(len(d),d["ronaldo"])

for i in d:
	for j in d[i]:
		if j in d:
			print(i,'has grandchilds ',len(d[j]))