#WHILE LOOP
count = 1
while count<=5 :
    print(count, "My name is MARUF")
    count += 1

n = int (input("Enter integer number:"))
i = 1
while i<=10 :
    print(n*i)
    i+=1

nums = (1,4,9,16,25,36,49,64,81,100)
i = 0
x = 64
while i < len(nums) :
    if(nums[i] == x):
        print("Found at index:",i)
        break
    else:
        print("Finding")
    i+=1

#FOR LOOP
list = [1,2,3,4,5]
for val in list:
    print(val)

nums = [1,2,3,4,5,6,6]
x = 6
idx = 0
for el in nums:
    if(el == x):
        print("Element found at index",idx)
    idx +=1
    
for i in range(10): #range(stop)
    print(i)
for i in range(2,10): #range(start,stop)
    print(i)
for i in range(2,10,2): #range(start,stop,step)
    print(i)

n = int (input("Enter an integer number:"))
for i in range(1,11):
    print(n*i)

n = int (input("Enter any value:"))
for i in range(1,n):
    print("Maruf")

#sum of n number using for loop
n = int (input("Enter any integer number:"))
sum = 0
for i in range(1,n+1):
    sum += i
print("Total Sum is:",sum)

#factorial of n number using loop
n = int (input("Enter any integer number:"))
fact = 1
for i in range(1,n+1):
    fact *= i
print("Factorial of",n,"is:",fact)

#practice set
list = ["Harry","Soham","Sachin","Rahul"]

for name in list:
    if(name.startswith("S")):
        print(f"Hello{name}")
