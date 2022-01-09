friends  = ["Tom", "John", "Markian", "Toby", "Oscar"] #lists are 0-indexed

print(friends)
print(friends[0])
print(friends[-1])
print(friends[1:4:2])  #[start_index: end_index+1: step] 
print(friends[-1:-3:-1])

lucky_numbers = [4, 7, 6, 23, 12, 15]

#list functions

print(lucky_numbers)

#  friends.extend(lucky_numbers)
#  print(friends)

friends.append("Creed")
print(friends)

friends.insert(1, "Kelly")
print(friends)

friends.remove("Oscar")
print(friends)

#  friends.clear()
#  print(friends)

print(friends.index("Creed"))

friends.insert(3, "Tom")
print(friends.count("Tom"))

friends.sort()
print(friends)

lucky_numbers.sort()
print(lucky_numbers)

lucky_numbers.reverse()
print(lucky_numbers)

friends2 = friends.copy()