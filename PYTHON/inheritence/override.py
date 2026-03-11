#when child class provides a specific implementation of a method that already present in parent class is called method overriding



class parent():
    def greet(self):
        print("i am parent")
class child(parent):
    def greet(self):
        #super().greet()
        print("i am child")

parent=parent()
child=child()
parent.greet()
child.greet()

