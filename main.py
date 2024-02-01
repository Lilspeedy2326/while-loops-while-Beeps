import winsound
import random


choice = "asdfsadf"
while choice != "q":
        winsound.Beep(random.randrange(200, 1000),500) #usually this is a print statement
        choice = input("type q to quit:")
            
print()

num = 6
while num <= 36:
    print(num, end = " ")
    num+=3
    
print()


