students =['bhaskar','syam','harish','bhargavi','bhaskar']
#students =list(('bhaskar','syam','harish','bhargavi','bhaskar')) #can declare like this also and inside braces we can use (,{,[
#students =list('bhaskar','syam','harish','bhargavi','bhaskar') #we can't write like this
print("students are : ",students)

students.append('chandrika')
print("after append list is:",students)

students.extend(['raju','kaju'])
print("after extending list is:",students)

students.insert(3,'ntr')
print("after inserting list is:",students)

students.remove('bhaskar')
print("after removing list is:",students)

last_element=students.pop()
print("last element:",last_element)
print("after pop list is:",students)

index_bhaskar=students.index('bhaskar')
print("index of bhaskar is:",index_bhaskar)

count=students.count('bhaskar')
print("count of bhaskar:",count)

print("length of list is:",len(students))

students.sort()
print("after sorting list is:",students)

students.reverse()
print("after reversing list is:",students)

list2=students.copy()
print("after copying list2 is:",list2)


list2.clear()
print("after clearing list is :",list2)

