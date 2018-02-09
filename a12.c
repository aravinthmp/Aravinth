a=int(raw_input())
def prime(x):
for i in range(2,x):
		if(x%i<>0):
			return("prime")
		else:
			return("not a prime")
c=prime(a)
print(c)
