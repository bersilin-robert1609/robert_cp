coordinates = (12.233, 90.2112)
print(coordinates)
print(coordinates[0], coordinates[1])

#  coordinates[1] = 10 
#  gives an error (tuples are immutable)

list_of_tuples = [(1, 2), (45, 23), (21, 67)]
list_of_tuples[2] = 90 #is not an error
#  list_of_tuples[2][1] = 90 is an error
print(list_of_tuples)