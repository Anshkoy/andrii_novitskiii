import random
import string
from words import words

def guess(x):   
    number_to_guess = random.randint(1, x)
    guess = 0
    while guess != number_to_guess:
        guess = int(input("Enter number between 1 and {}: ".format(x)))
        if guess < number_to_guess:
            print("The number is higher")
        elif guess > number_to_guess:
            print("The number is lower")
    
    print("Yay, conggrats. you have guessed the number {}".format(number_to_guess))



def computer_guess(x):
    low = 1
    high = x
    feedback = ''
   
    while feedback != 'c':

        guess = random.randint(low, high)
        feedback = input(f"Is {guess} too high (H), too low(L), or correct(C): ").lower()
        if feedback == 'h':
            high = int(guess) - 1
        elif feedback == 'l':
            low = int(guess) + 1
        
        
           
    print("I won!The number is {}".format(guess))


def rock_paper_scisors():
    while True:
        user_input = input("'r' for rock 's' for scissors 'p' for paper: ").lower()
        user_choice = ""
        computer_number = random.randint(1, 3)
        computer_choice = ""
        match computer_number:
            case 1:
                computer_choice = "paper"
            case 2:
                computer_choice = "rock"
            case 3:
                computer_choice = "scissors"
        match user_input:
            case 'r':
                user_choice = "rock"
            case 'p':
                user_choice = "paper"
            case 's':
                user_choice = "scissors"        
        print(F"Your choice {user_choice}, computer choice {computer_choice}")
        if user_choice == computer_choice:
            print("DRAW!!!!")
        elif user_choice == "paper" and computer_choice == "scissors":
            print("You lose!!!")
        elif user_choice == "paper" and computer_choice == "rock":
            print("You won!!!")
        elif user_choice == "scissors" and computer_choice == "rock":
            print("You lose!!!")
        elif user_choice == "scissors" and computer_choice == "paper":
            print("You won!!!")
        elif user_choice == "rock" and computer_choice == "paper":
            print("You lose!!!")
        elif user_choice == "rock" and computer_choice == "scissors":
            print("You won!!!")


#hangman
def get_valid_word():
    chosen_word = random.choice(words)
    while ' ' in chosen_word or '-' in chosen_word:
        chosen_word = random.choice(words)
    return chosen_word.upper()

def hang_man():
    word = get_valid_word()
    word_letter = set(word)
    alpabet = set(string.ascii_uppercase)
    used_letters = set()
    while len(word_letter) > 0:

        word_list = [letter if letter in used_letters else "-" for letter in word]
        print("Current word: ", " ".join(word_list))



        user_input = input(" Guess: ").upper()
        if user_input in alpabet - used_letters:
            used_letters.add(user_input)
            if user_input in word_letter:
                word_letter.remove(user_input)
        elif user_input in used_letters:
            print("You have already used this letter")
        else:
            print("invalid charcter")

    print("The word is", word)
     
    
    
hang_man()
