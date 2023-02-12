def sumOfSeries(n):
	sum=0;
	i=1;
	while i<=n:
		sum=sum+i*(i+1)*(i+2)
		i=i+1
	return sum
n = int(input())
print(sumOfSeries(n))

