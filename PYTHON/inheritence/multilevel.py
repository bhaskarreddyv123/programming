class student():
    def name(self,name):
        self.name=name
    def stu_print(self):
        print(self.name)


class branch(student):
    def branch(self,branch):
        self.branch=branch
    def b_print(self):
        print(self.branch)


class sport(branch):
    def sport(self,sport):
        self.sport=sport
    def print(self):
        #super().stu_print()
        #print(self.name)
        super().b_print()
        print(self.sport)


obj=sport()
obj.name("bhaskar")
obj.branch("ECE")
obj.sport("cricket")
obj.print()
