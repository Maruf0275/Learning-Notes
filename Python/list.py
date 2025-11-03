#print of a list
student = [3,4,6,5.3,"maruf"] #multiple data type in one list
print(student)
print(type(student))
print(student[0])
print(student[1])
student[0] = "nibir"
print(student)

#slicing
marks = [22,44,66,33,55]
print(marks[1 : 4])

#list function
list = [4,7,3,2]
list.append(6) #adds one element at the end
print(list)
list.sort() #sort in ascending order
print(list)
list.sort(reverse = True) #sort in descending order
print(list)
list.reverse() #Reverse list
print(list)
list.insert(0,1) #insert element at index
print(list)
list.remove(7) #Removes the first occurence of index
print(list)
list.pop(4) #Removes elements at index
print(list)