info = {
    "name" : "Maruf",           # [key : value] here name is keyword and it's value is "maruf"
    "age" : 22,
    "gender" : "male",
    "subject" : ["Physics","Chemistry","Biology"],
    "marks" : (75,89,55)
}

#print(info) #printting all at once

print(info["name"]) #printing individually
print(info["age"])

info["name"] = "nibir" #mutable possible in dictionary
print(info["name"])

#nested dictionay
student = {
    "name" : "Maruf",
    "subject" : {
        "physics" : 89,
        "chemistry" : 76,
        "math" : 66,
    }
}
print(student)
print(student["subject"]["chemistry"])

print(list(student.keys())) #Return all keys & type casting
print(list(student.values())) #return all values and here list means type casting
print(list(student.items()))
pairs =(list(student.items()))
print(pairs[0]) #Return all pairs as tuple

up_dic = {"city":"Dhaka","age":21} #update the dictionary
student.update(up_dic)
print(student)
