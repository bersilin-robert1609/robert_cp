phrase = "Indian Institute of Technology"
print("Indian Institute of \"Technology\", Madras")
print(phrase)
phrase += ", Madras"
print(phrase)
print(phrase.lower()) #returns String
print(phrase.upper())

print(phrase.isupper()) #returns BOOL
print(phrase.islower())
print(phrase.upper().isupper()) #concatenate functions

print(len(phrase)) #length of string

print(phrase[0]) #index (0 indexed)
print(phrase.index("Tech")) #returns start of substring error if not found

print(phrase.replace("Indian", "American")) #replace doesnt change the string

print(phrase)