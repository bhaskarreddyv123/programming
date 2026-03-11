student={'name':'bhaskar','age':20,'grade':'A'}
print(student)

print("keys are:",student.keys())

print("values are:",student.values())

print("Items are:",student.items())

age=student.get("age")
print("Age: ",age);

student.update({"branch":"ECE"})
print("after updating dixtionary are:",student)

rm_grade=student.pop("grade")
print("removed grade is:",rm_grade)
print(student)


rm_lastele=student.popitem()
print("last ele is: ",rm_lastele);
print(student)

student.setdefault("city","HYD")
print("after setting default value is:",student)

student.clear()
print("after clearing:",student)
