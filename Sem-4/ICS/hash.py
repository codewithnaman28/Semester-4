# Hashing Alogorithm

import hashlib

input1 = input("Enter text/image:: ")
output1 = hashlib.md5(input1.encode())  # encode string into bytes
print("The hashing value is: ", end="")
print(output1.hexdigest())

input2 = input("Enter text/image you want to check for tampering:: ")
output2 = hashlib.md5(input2.encode())  # encode string into bytes
print("The hashing value is : ", end="")
print(output2.hexdigest())

if output1.hexdigest() == output2.hexdigest():
    print("Text/Image not tampered")
else:
    print("Text/Image is tampered")
