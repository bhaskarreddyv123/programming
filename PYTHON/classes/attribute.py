class dog:
    species="canis family"  #class attribute

    def __init__(self,name):
        self.name=name      #instance attribute

d1=dog("puppy")
d2=dog("max")
print(d1.name)
print(d1.species)
print(d2.name)
print(d2.species)
