def exponent(a, b):
    result = 1
    for index in range(b):
        result *= a
    return result

print(exponent(2, 3)) 