#include <iostream>
#include <cctype>
#include <string>

bool isPalindrome(const std::string &str)
{
    int i = 0;
    int j = str.length() - 1;

    while (i < j)
    {
        char left = str[i];
        char right = str[j];

        if (!std::isalnum(left))
        {
            i++;
            continue;
        }
        if (!std::isalnum(right))
        {
            j--;
            continue;
        }

        // Compare characters in a case-insensitive manner
        if (std::tolower(left) != std::tolower(right))
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    std::string input;
    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    if (isPalindrome(input))
    {
        std::cout << "The string is a palindrome." << std::endl;
    }
    else
    {
        std::cout << "The string is not a palindrome." << std::endl;
    }

    return 0;
}