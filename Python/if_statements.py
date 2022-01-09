#  is_male = True
#  is_tall = True

"""
if is_male and is_tall: 
    print("You are a male and you are tall!")
elif is_male and not is_tall: 
    print("You are a male but short")
elif not is_male and is_tall:
    print("You are not a male but you are tall")
else :
    print("You are neither a male nor tall")
"""
def maximum(a, b, c):
    if a >= b and a >= c : 
        return a
    elif b >= c and b >= a :
        return b
    else :
        return c


print(maximum(32, 1234, 1234))
