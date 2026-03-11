fruits={"apple","banana","cherry","apple"}
print(fruits)

fruits.add("orange")
print("after adding element: ",fruits)

fruits.remove("apple")
print("after removing element: ",fruits)

fruits.discard("cherry")
print("after discard elements are: ",fruits)

# pop(): Remove and return an arbitrary element
popped_fruit = fruits.pop()
print("Popped Fruit:", popped_fruit)
print("After pop:", fruits)

# union(): Combine two sets
more_fruits = {"mango", "grape"}
all_fruits = fruits.union(more_fruits)
print("Union of sets:", all_fruits)

# intersection(): Common elements between two sets
common_fruits = fruits.intersection({"cherry", "mango"})
print("Intersection of sets:", common_fruits)

# difference(): Elements in one set but not in another
unique_fruits = fruits.difference({"cherry", "mango"})
print("Difference of sets:", unique_fruits)

# clear(): Remove all elements
fruits.clear()
print("After clear:", fruits)

