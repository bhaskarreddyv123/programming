
def add_numbers(*numbers):
    total=0
    for i in numbers:
        total=total+i;
    print("Total:", total)

def name(*ch):
    print(ch)
    for i in ch:
        print(i)
#add_numbers(1, 2, 3, 4)  # Output: Total: 10
"""num_list=[1, 2, 3, 4]  
add_numbers(*num_list) """
num_set={1, 2, 3, 4}  
add_numbers(*num_set)

name("Hello Bhaskar")



