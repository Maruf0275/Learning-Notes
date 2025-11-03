#arithmetic operator
a=10
b=20
print("Addition:",a+b)

# #bitwise operator
print("a:", bin(a), "b:", bin(b), "a&b:", bin(a&b))
print("Bitwise OR:",a|b)
print("Bitwise NOT:",~a)
print("Bitwise XOR:",a^b)
print("Bitwise Left Shift:",a<<2)
print("Bitwise Right Shift:",a>>2)

# logical operator
print(a>10 and a<30)
print(a>10 or a<30)
print(not(a>5 and a<30))

# membership operator
sent= 'hello maruf'
print('hello' in sent)
print('galib' not in sent)

# #indentity operator
a = 10
b = 10
c=0
print(a is b)
print (a is not c)

#string 
name = 'maruf hasan'
print(name[1])
print(name[-1])
print(name[0:5])

#conditional statement
age = int(input('Enter your age:'))
if age > 18:
    print('you are adult')
else:
    print('you are not adult')

#match case statement
x = int(input("Enter any number: "))
match x:
    case 1:
        print("one")
    case 2:
        print("two")
    case 3:
        print("three")
    case _:
        print("other")

#while loop
count = 0
while count <=10:
    print('count: ',count)
    count +=1
print('loop ended')

#break and continue
i = 0
while i<10:
    i +=1
    if i==5:
        continue
    print(i)

#for loop
fruits = ['mango','banana','orange']
for fruit in fruits:
    print(fruit)

#calculate total sum of n number
n = int(input("Enter any integer number:"))
sum = 0 
for  i in range (1,n+1):
    sum = sum + i
print ("Total sum is:",sum)

#list
name = ['maruf','hasan','galib']
print(name[1])
name.append('rakib')
print(name)
name.remove('hasan')
print(name)
name.sort()
print(name)
name.insert(1,'tamim')
print(name)
name.pop(2)
print(name)
name.insert(1,'maruf')
print(name)
name.pop()
print(name)

#tuple 
animals = ('tiger','lion','elephant')
print(animals)
print(type(animals))

#operator in list
animals = ['tiger','lion','elephant']
print(animals + ['cat',50])
print(animals * 3)

#set
animals = {'tiger','lion','elephant','tiger'}
print(animals)
print(type(animals))
animals.add('cat')
print(animals)
animals.remove('tiger')
print(animals)
animals.pop()
print(animals)
animals.update(['dog','rat'])
print(animals)
print(len(animals))

#dictionary
student = {'name':'maruf','age':22,'cgpa':3.5}
print(student)
print(student['name'])
student['age'] = 23
print(student)
student['dept']= 'CSE'
print(student)
print(student.keys())
del student['cgpa']
print(student)
student['cgpa']=3.75
print(student)

#range in loop
for i in range(1,10):
    print(i)
for i in range(2,5):
    print(i)
for i in range(1,10,2):
    print(i)

#function
def hello():
    print('hello world')
hello()

def numbers(n):
    if n%2==0:
        print("EVEN")
    else:
        print("ODD")
num =int(input("Enter any integer number:"))
numbers(num)

def sum(a,b):
    print('The sum of two number is: ',a+b)
num1 = int(input("Enter number 1 : "))
num2 = int(input("Enter number 2 : "))
sum(num1,num2)

#lambda function
sum = lambda a,b : a+b
print('the sum of two number is: ',sum(2,4))

#iterator
animals = ['tiger','lion','elephant']
name = iter(animals)
print(next(name))
print(next(name))
print(next(name))

#generator
def animals():
    pets = ['tiger','lion','elephant']
    for i in pets:
        yield i

x = animals()
print(next(x))
print(next(x))
print(next(x))

def numbers(n):
    for i in range(1,n+1):
        yield i
a = int(input("Enter any integer number: "))
num = numbers(a)
print(next(num))
print(next(num))
print(next(num))

#problem solving
dict = {}
while(1):
    name = str(input("Enter name: "))
    if(name == "stop"):
        break
    score = int(input("Enter score: "))

    dict[name] = score

print(dict)

#problem solving
list = []
while(1):
    name = str(input("Enter name: "))
    if(name == "stop"):
        break
    list.append(name)
print(list)
