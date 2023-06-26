# ICS Assignment 5 #

Write a program to implement integrity of message using MD5 or SHA

## Objective ##

To check whether the message is tempered or not.

## ALgorithm ##

- The diges is someitmes called as the 'hash' or 'fingerprint' of the input.
- Hash value is used to check the integrity of the message.

        - Step 1: Padding 
        - Step 2: append length 
        - Step 3: divide the input tino 512 bits blocks
        - Step 4: Initialize chaining variables (4 variables: MD-5/5 variables: SHA-1)
        - Step 5: Process blocks

## input/output ##

- Enter the original image/text/audio/video
- Calculate hash value: x
- Enter the new image/text/audio/video you want to check for tampering
- Calculate hash value: y

## Hasing Algorithm ##

    import hashlib
    input1=input("Enter the original image/text/audio/video: ")
    output1=hashlib.md5(input1.encode())    # encode() is used to convert string to bytes
    print ("the hasing value is: ", end ="")
    print(output1.hexdigest())
    input2=input("Enter the new image/text/audio/video you want to check for tampering: ")
    output2=hashlib.md5(input2.encode())   # encode() is used to convert string to bytes
    print ("the hasing value is: ", end ="")
    print (output2.hexdigest())
    if(output1.hexdigest()==output2.hexdigest()):
        print("The message is not tempered")
    else:
        print("The message is tempered")
