class student:
    def __init__(self,name,branch,grade):
        self.name=name
        self.branch=branch
        self.grade=grade
    def display(self):
        print(f"name : {self.name} \nBranch: {self.branch} \nGrade: {self.grade}") 
    def update(self,updated):
        self.name=updated

stu=student("bhaskar","ECE","A")
stu.display()
stu.update("Bhaskar")
stu.display()
