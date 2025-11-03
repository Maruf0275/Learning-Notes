light = input("light:")
if(light=="red"):
    print("Stop")
elif(light=="green"):
    print("Go")
elif(light=="yellow"):
    print("Look")
else:
    print("Light is broken")

#single line conditional statement
age = int(input("Age:"))
print("vote") if age>=18 else print("UnderAge")
#clever if statement
age = int(input("Age:"))
vote = ("No","Yes") [age>=18]
print(vote)

#Nesting
age = int(input("age is: "))

if(age>=18):
    if(age>=80):
        print("Cannot Drive")
    else:
        print("Can Drive")
else:
    print("Cannot Drive")

#greatest of 3 number entered by the user
a = int(input("Enter first number: "))
b = int(input("Enter second number: "))
c = int(input("Enter third number: "))

if(a>b and a>c):
    print("Greatest number: ",a)
elif(b>a and b>c):
    print("Greatest number: ",b)
else:
    print("Greatest number: ",c)

#even or odd number
num = int(input("Enter the value: "))

if(num%2==0):
    print("Even")
else:
    print("Odd")