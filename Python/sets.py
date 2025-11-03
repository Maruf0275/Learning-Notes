collection = {1,2,2,3,"Hello","World"} #Repeated elements stored only at once
print(collection)
print(type(collection))
print(len(collection)) #total number of items

collection = set() #empty sets;syntex
print(type(collection))
collection.add(1) #use for adding in sets
collection.add(2)
collection.add("Helloworld")#string passing in sets
collection.add((1,2,3)) #tuple passing in sets
collection.remove(2)
print(collection)
collection.clear()
print(collection)

sets = {"hello","maruf","coding","apnacollege","python"}
sets.pop()
print(sets)

set1 = {1,2,3}
set2 = {3,4,5}

print(set1.union(set2)) #combine both set value and return new set
print(set1.intersection(set2)) #combines common value and return new set