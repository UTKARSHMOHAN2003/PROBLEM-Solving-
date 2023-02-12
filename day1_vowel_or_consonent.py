def check_vowel_or_consonant(char):
    vowels = "AEIOUaeiou"
    if len(char) == 1:
        if char in vowels:
            return "Vowel"
        else:
            return "Consonant"
    else:
        return "Error: Please enter a single character."

char = input("Enter an alphabet: ")
result = check_vowel_or_consonant(char)
print(result)
