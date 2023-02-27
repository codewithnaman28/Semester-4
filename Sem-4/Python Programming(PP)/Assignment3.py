
############### TUPLES ################

# t1 = (1,2,3)
# print(type(t1))

# t2 =(10)
# print(type(t2))

# t3 = ("naman")
# print(type(t3))

# my_tuple = (1, 2, 3)

# my_tuple = my_tuple + (4, 5, 6)     # add new elements
# print(my_tuple)

# my_tuple = (1,2,3,['hindi', 'python'])
# my_tuple[3][0] = 'english'
# print(my_tuple)

# print(my_tuple.count(2))
# print(my_tuple.index(['english','python']))

# my_tuple = (1,2,3,'SYBTECH')    #access elements
#  for x in my_tuple:
#     print(x)

# print(my_tuple)
# print(my_tuple[0])
# print(my_tuple[:])
# print(my_tuple[3][4])

############### DICTIONARY ################

# my_dict = {}    #empty dictionary
# print(my_dict)

# my_dict = {1:'python', 2:'java'}        #dictionary with elements
# print(my_dict)

# my_dict = {'First':'Python', 'Second':'Java'}       #dictionary with elements
# print(my_dict)
# my_dict['Second'] = 'C++'      #Changing Elements
# print(my_dict)
# my_dict['Third'] = 'Java'   #adding key-value pair
# print(my_dict)
# print(my_dict.values())

# my_dict = {'First':'Python', 'Second':'Java', 'Third': 'C++'}
# a = my_dict.pop('Third')    # pop element
# print('Value:', a)
# print('Dictionary:', my_dict)

# b = my_dict.popitem()   #pop the key-value pair
# print('Key,value pair:',b)
# print('Dictionary:', my_dict)

# my_dict.clear()         #empty Dictionary
# print('n', my_dict)

#################### Dictionary Problem Statements #####################

# 1. Assign 5 elements in dictionary named my_dict.
# This dictionary contains student's information Add and delete student information from my_dict.
# Display Student information.

my_dict = {'Student Name': ['Naman', 'Krish', 'Parth', 'Shiv'], 'Roll No': [11, 12, 13, 14]}
print(my_dict)
my_dict['Student Name'] = 'satyam'
print(my_dict)
