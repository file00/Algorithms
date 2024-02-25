# Fibonacci Term (Recursive)
# Finding the n-th Fibonacci Term (Recursive)
def fib(n):
    if (n <= 1):
        return n
    else:
        return fib(n - 1) + fib(n - 2)

for i in range(11):
    print(fib(i), end = " ")

# -> It is inefficient because the high-burden function call operation must be repeated several times.
# -> Algorithms always have to think about whether they are efficient or not.

# How to improve the inefficiency of the above algorithm?
# -> Make sure you don't count the same values recursively
# -> Values in Fibonacci terms that have not yet been calculated need to be calculated
# -> Store values of Fibonacci terms already calculated in the list
# -> Fibonacci terms that have already been calculated and stored can be taken out and used when needed.    

# Finding the n-th Fibonacci Term (Iterative)
#def fib2(n):
#    f = [0] * (n + 1)
#    if (n > 0):
#        f[1] = 1
#        for i in range(2, n + 1):
#            f[i] = f[i - 1] + f[i - 2]
#    return f[n]

#for i in range(11):
#    print(fib2(i), end = " ")
