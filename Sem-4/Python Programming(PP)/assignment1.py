# declare variable
a = 3
print(a)
print(type(a))
b = 3.5
print(type(b))
print(b)
c = "Hello"
print(c)
print(type(c))

a = 5
b = 6
print(a + b)

a = 10
b = 45 
c = a + b
print (c)

a = input("Enter First Name:")
b = input("Enter Last Name:")
print(a + b)

x = int(input("Enter the first number:"))
y = int(input("Enter the second number:"))
z = x + y 
print("Sum is:", z)


x = float(input("Enter the first number:"))
y = float(input("Enter the second number:"))
z = x + y 
print("Sum is:", z)

name, age, score = input("Enter student's name, age and score seperated by space:").split()
print("Student Name:", name)
print("Student Age:", age)
print("Student Score:", score)

a = 45
b = 65
if (a == b):
    print("equal")
else:
    print("not equal")
