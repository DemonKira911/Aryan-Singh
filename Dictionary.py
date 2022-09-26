employees = {}
max_length = 3
while len(employees)<max_length:
    name = input("Enter employee's name: ")
    salary = input("Enter employee's salary: ")

    if name not in employees:
        employees[name] = salary

print(employees)