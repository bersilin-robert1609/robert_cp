num1 = float(input("Enter the first number: "))
num2 = float(input("Enter the second number: "))

print("Type in the next prompt\n+ for addition\n- for subtraction\n* for multiplication\n/ for division\n% for remainder.")

op = input("Enter the operator:")

if op == "+":
    print(num1+num2)
elif op == "-":
    print(num1-num2)
elif op == "*":
    print(num1*num2)
elif op == "/":
    print(num1/num2)
elif op == "%":
    print(num1%num2)
else:
    print("Invalid Operator")

