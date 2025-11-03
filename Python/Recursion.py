def show(n):
    if(n == 0):
        return
    print(n)
    show(n-1)

show(5)

#factorial using recursion
def fact(n):
    if(n == 0 or n==1):
        return 1
    else:
        return n * fact(n - 1)

a = int(input("Enter any integer number:"))
print(fact(a))
