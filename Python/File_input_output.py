#for read a file
f = open("demo.txt","r")
data = f.read()
print(data)
print(type(data))
f.close()

#for write a file
f = open("demo.txt","r+") #for read and overwrite
f.write("abc")
print(f.read())
f.close()


with open("sample.txt","a") as a:
    pass

#for delete a file
import os
os.remove("sample.txt")