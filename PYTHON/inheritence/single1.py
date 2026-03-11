class animal():
    def type(self,name):
        #self.name=name
        print("animal name is",name)
class sound(animal):
    def barking(self,bark):
        print("it sounds like",bark)

obj=sound()
obj.type("dog")
obj.barking("bow bow")
