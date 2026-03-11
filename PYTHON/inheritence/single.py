class parent:
    def __init__(self,name):
        self.name=name
    def greet(self):
        print(f"hello {self.name}")
class child(parent):
    def __init__(self,name,age):
        #super().__init__(name)
        self.name=name
        self.age=age
    def display(self):
        self.greet()
        super().greet()
        print(f"i am {self.name} and age is {self.age}")
        print("i am "+self.name+" age is "+ str(self.age))
        print("i am",self.name," age is",self.age)


obj=child("bhaskar",20)
#obj.greet()
obj.display()
