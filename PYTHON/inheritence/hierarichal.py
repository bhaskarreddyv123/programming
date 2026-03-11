class student():
    def name(self,name):
        self.name=name
    def stu_print(self):
        print(self.name)


class branch(student):
    def branch(self,branch):
        self.branch=branch
    def b_print(self):
        print(self.name)
        print(self.branch)


class sport(student):
    def sport(self,sport):
        self.sport=sport
    def print(self):
        print(self.name)
        print(self.sport)

obj=branch()
obj1=sport()
obj.name("bhaskar")
obj.branch("ECE")
obj1.name("reddy")
obj1.sport("cricket")
#obj.stu_print()
obj.b_print()
#obj1.stu_print()
obj1.print()
