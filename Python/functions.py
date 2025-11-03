#function defination
def calc_sum(a,b): #function perameter
    sum = a+b
    print(sum)

calc_sum(2,4) #function call

#calculate avarage of three number
def calc_avg(a,b,c):
    sum = a+b+c
    avg = sum/3
    print(avg)
    return avg

calc_avg(1,2,3)

cities = ["dhaka","khulna","chattagram","bagura"]
heroes = ["ironman","thor","captain america","superman","batman"]

def print_len(list):
    print(len(list))

def print_list(list):
    for item in list:
        print(item,end=" ")

print_len(cities)
print_len(heroes)

#print factorial of numbers using facntion
def calc_fact(n):
    fact = 1
    for i in range(1,n+1):
        fact *=i
    print(fact)

a = int(input("Enter any integer number:"))
calc_fact(a)

#odd and even using function
def numbers(a):
    if(a %2==0):
        print("EVEN")
    else:
        print("ODD")

n = int(input("Enter any integer number:"))
numbers(n)