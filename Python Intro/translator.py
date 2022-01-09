#Giraffe Language
# vowels -> g

def translate(word):
    translation = ""
    for letter in word:
        if letter.lower() in "aeiou":
            if letter.islower():
                translation += 'g'
            else:
                translation += 'G'
        else:
            translation += letter
    return translation

#word = input("Enter the word to translate: ")
#print(translate(word))
