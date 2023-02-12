def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)
def sum_of_first_n_terms(n):
    result = 0
    for i in range(1, n+1):
        result += factorial(i)
    return result
n = int(input())
print(sum_of_first_n_terms(n))
