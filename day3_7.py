import math
def sum_of_series(n):
    result = 0
    for i in range(1, n+1):
        result += ((-1)**(i+1))*(i)/math.factorial(2*i-1)
    return result
n = int(input())
print(sum_of_series(n))
