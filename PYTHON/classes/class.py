class Myclass:
    def __init__(self,name,age):
        self.name=name
        self.age=age
    def greet(self):
        print(f"my name is {self.name} and age is {self.age}")

p=Myclass("bhaskar",22)
p.greet()
