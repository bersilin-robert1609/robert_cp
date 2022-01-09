def add_numbers(a, b) : 
    return a+b

def say_hi(name) :
    print("Hello, "+ name +"!")

name_input = input("Enter your name: ")

say_hi(name_input)

num1 = float(input("Enter a number: "))
num2 = float(input("Enter another number: "))

sum = add_numbers(num1, num2)

print(sum)
