
employee_file = open("D:\Coding\Python Intro\employees.txt", 'r')

for employee in employee_file.readlines():
    print(employee)

employee_file.close()