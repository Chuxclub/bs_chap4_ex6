#include <iostream>
#include "std_lib_facilities.h"

void convert_digit(int a);
int convert_spelling(string a);

/* ~~~~~~~~~ Digits to spelling & spelling to digits converter ~~~~~~~~~ */

int main() //If the user inputs a digit, main() converts it into its spelling and vice-versa
{
    int user_digit = 0;
    string user_string, user_choice;

    cout << "\n\n" << "Welcome to digit to words converter!" << "\n\n";
    cout << "Type 'help' for a list of available commands" << "\n\n";

    /* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Input loop ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    while(true)
    {
        cout << "What's your selection? ";
        cin >> user_choice;
        cout << "\n\n";

        if (user_choice == "digit") //digits to spelling selection
        {
            cout << "Now input any number from 0 to 9 written with digits: ";

            while(cin >> user_digit)
            {
                    cout << "\n\n";
                    convert_digit(user_digit);
            }
        }

        else if (user_choice == "spelling") //spelling to digits selection
        {
            cout << "Now input any spelled out number from zero to nine: ";

            while(cin >> user_string)
            {
                cout << "\n\n";
                convert_spelling(user_string);

                if(user_string == "stop")
                    break;
            }

        }

        else if (user_choice == "quit") //program exit
            break;

        else if (user_choice == "help") //List of input commands always accessible
        {
            cout << "Type 'digit' to convert from spelled out numbers to digits..." << '\n';
            cout << "Type 'spelling' to convert from digits to spelled out numbers. " << '\n';
            cout << "Type 'stop' when in 'digit' or 'spelling' to return to main selection." << '\n';
            cout << "Type 'quit' to end this program." << '\n';
            cout << "Only numbers from 0 to 9 are currently accepted. " << "\n\n";
        }

        else
            cout << "Wrong input" << "\n\n"; //Wrong input value case
    }

    return 0;
}

/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Functions used ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
void convert_digit(int a)
{
    vector<string> numbers_dictionary;
    numbers_dictionary = {"zero","one","two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if(a >= 0 && a <= 9)
        cout << numbers_dictionary[a] << "\n\n";

    else
        cout << "Wrong input";
}

int convert_spelling(string a)
{
    vector<string> numbers_dictionary;
    numbers_dictionary = {"zero","one","two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for(int i = 0; i < 10; i++)
    {
        if(numbers_dictionary[i] == a)
        {
            cout << i << "\n\n";
            return i;
        }
    }
}