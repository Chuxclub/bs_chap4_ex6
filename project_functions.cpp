//
// Created by florian on 25/05/18.
//

#include "project_functions.h"
#include "std_lib_facilities.h"

void convert_digit(int a)
{
    vector<string> numbers_dictionary;
    numbers_dictionary = {"zero","one","two", "three", "four", "five",
                          "six", "seven", "eight", "nine"};

    if(a >= 0 && a <= 9)
        cout << " => " << numbers_dictionary[a] << "\n\n";

    else
        cout << "Wrong input, please enter any digit from 0 to 9: ";
}

int convert_spelling(string a)
{
    vector<string> numbers_dictionary;
    numbers_dictionary = {"zero","one","two", "three", "four", "five",
                          "six", "seven", "eight", "nine"};
    bool wrong_input = false;

    for(int i = 0; i < 10; i++)
    {
        if(numbers_dictionary[i] == a)
        {
            cout << "=> " << i << "\n\n";
            return i;
        }

        else
            wrong_input = true;

    }

    if(wrong_input == 1)
        cout << "Wrong input, please check spelling and try again: ";
}

int convert_string(string a)
{
    vector<string> digits_dictionary;
    digits_dictionary = {"0","1","2", "3", "4", "5",
                         "6", "7", "8", "9"};

    for(int i = 0; i < 10; i++)
    {
        if (digits_dictionary[i] == a)
            return i;
    }
}

void help()
{
    cout << "\n\n";
    cout << "Type 'digit' to convert from spelled out numbers to digits..." << '\n';
    cout << "Type 'spelling' to convert from digits to spelled out numbers. " << '\n';
    cout << "Type 'stop' when in 'digit' or 'spelling' to return to main selection." << '\n';
    cout << "Type 'quit' to end this program." << '\n';
    cout << "Only numbers from 0 to 9 are currently accepted. " << "\n\n";
}
