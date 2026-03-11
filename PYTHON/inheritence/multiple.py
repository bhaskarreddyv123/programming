class student():
    def name(self,name):
        self.name=name
    def stu_print(self):
        print(self.name)
class Branch():
    def branch(self,branch):
        self.branch=branch
    def bran_print(self):
        print(self.branch)

class sport(student,Branch):
    def sport(self,sport):
        self.sport=sport
    def print(self):
        super().stu_print()
        super().bran_print()
        print(self.sport)

obj=sport()
obj.name("bhaskar")
obj.branch("ECE")
obj.sport("cricket")
#obj.stu_print()
obj.print()
