#Basic oop concept
class student:
    name = "Maruf"

s1 = student()
print(s1.name)

#Constructor
class student:
    #default constructors
    def __init__(self):
        pass
    #perameterized constructors
    def __init__(self,name,marks):
        self.name = name
        self.marks = marks
        print("Adding new student in detabase...")
    def hello(slef): #methods
        print("Wellcome student")

s1 = student("Maruf",90.34)
print(s1.name)
print(s1.marks)
s1.hello()
s2 = student("Mahedi",92.34)
print(s2.name)
print(s2.marks)

#create student class that takes name and marks of 3 subjects as argument in constructor. then create a method to print the average
class student:
    def __init__(self,name,marks):
        self.name = name
        self.marks = marks
    def get_avg(self):
        sum = 0
        for val in self.marks:
            sum += val
        print("HI",self.name,"Your average score is :",sum/3)
    
s1 = student("Maruf",[70,34,50])
s1.get_avg()
