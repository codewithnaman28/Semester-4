employees = {}
while True:
    print("1. Add Employee")
    print("2. Employee Salary")
    print("3. Show Employees")
    print("4. Quit")
    
    option = int(input("Enter option: "))
    
    if option == 1:
        name = input("Enter Name: ")
        age = int(input("Enter Age: "))
        position = input("Enter Position: ")
        employees[name] = {"age": age, "position": position}
    elif option == 4:
        Empployee_Salary = int(input("Enter the Employee Salary: "))
    elif option == 3:
        for name, details in employees.items():
            print(f"{name}: {details}")
    elif option == 4: 
        break
    else:
        print("Invalid option try again!")
