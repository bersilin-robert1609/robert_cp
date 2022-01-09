
secret_word = "giraffe"
guessed_word = ""

guessed_word = input("Guess the word.. :")

guess_count = 1

guess_limit = 3

while guessed_word != secret_word and guess_count < guess_limit:
    guessed_word = input("Guess the word.. :")
    guess_count += 1

if guess_count < guess_limit : 
    print("Good Guess!")
else :
    print("Sorry, Try Next time")