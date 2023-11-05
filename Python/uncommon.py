def non_common_letters_in_strings(s1, s2):
    """ Determines letters that are not common in the two strings.
    
    Args:
        s1: The first string.
        s2: The second string.

    Returns:
        A list of the letters that are not common in both strings.
    """
    non_common_letters = []
    
    # Check for letters in s1 that are not in s2
    for letter in s1:
        if letter not in s2 and letter not in non_common_letters:
            non_common_letters.append(letter)

    # Check for letters in s2 that are not in s1
    for letter in s2:
        if letter not in s1 and letter not in non_common_letters:
            non_common_letters.append(letter)
            
    return non_common_letters

s1 = "LOS ANGELESO"
s2 = "LAS VEGAS"

non_common_letters = non_common_letters_in_strings(s1, s2)

print(non_common_letters)

