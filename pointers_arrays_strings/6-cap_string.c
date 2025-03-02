#include "main.h"

/**
 *cap_string - capitalizes each word
 *
 *@str: pointer to a string
 *Return: pointer
*/

char *cap_string(char *str)
{
    char *x = str;
    int is_new_word = 1;  // Flag to indicate whether the next character is the start of a new word

    while (*x != '\0')
    {
        // Check if the character is a delimiter (whitespace or punctuation)
        if (*x == ' ' || *x == '\t' || *x == '\n' || *x == ',' || *x == ';' || *x == '.' || *x == '!' || *x == '"' || *x == '(' || *x == ')' || *x == '{' || *x == '}')
        {
            is_new_word = 1;  // Next character is the start of a new word
        }
        else
        {
            // If it's a letter and we're at the start of a new word, capitalize it
            if (is_new_word && *x >= 'a' && *x <= 'z')
            {
                *x = *x - 32;  // Capitalize the letter
                is_new_word = 0;  // Reset flag because we're now processing a word
            }
            else
            {
                is_new_word = 0;  // Continue processing subsequent letters in the word
            }
        }

        x++;  // Move to the next character
    }

    return str;
}
