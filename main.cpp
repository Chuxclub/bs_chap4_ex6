#include <iostream>
#include "std_lib_facilities.h"

void convert_digit(int a);
void help();
int convert_spelling(string a);
int convert_string(string a);


/* ############ DIGITS TO SPELLING & SPELLING TO DIGITS CONVERTER ############ */

//If the user inputs a digit, main() converts it into its spelling
//Likewise, if the user inputs a spelled out number, main() converts it into its digit

int main()
{
    string user_digit, user_string, user_choice;

    cout << "\n\n" << "Welcome to digit to words converter!" << "\n\n";
    cout << "Type 'help' for a list of available commands";

    /* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ Input loop ~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */
    while(1)
    {
        cout << "\n\n";
        cout << "What's your selection? ";
        cin >> user_choice;

        //DIGITS to spelling selection
        if (user_choice == "digit")
        {
            cout << '\n' << "Now input any number from 0 to 9 written with digits: ";

            while(cin >> user_digit)
            {
                if(user_digit == "stop")
                    break;

                else if(user_digit == "help")
                {
                    help();
                    cout << '\n' << "Now input any number from 0 to 9 written with digits: ";
                }

                else
                    convert_digit(convert_string(user_digit));
            }
        }

        //SPELLING to digits selection
        else if (user_choice == "spelling")
        {
            cout << '\n' << "Now input any spelled out number from zero to nine: ";

            while(cin >> user_string)
            {
                if(user_string == "stop")
                    break;

                else if(user_string == "help")
                {
                    help();
                    cout << '\n' << "Now input any spelled out number from zero to nine: ";
                }

                else
                    convert_spelling(user_string);
            }

        }

        //List of input commands always accessible to user
        else if (user_choice == "help")
            help();

        //Program exit
        else if (user_choice == "quit")
            break;

        //Error handling
        else
            cout << endl << "Wrong input" << endl; //Wrong input value case
    }

    return 0;
}


/* ######################## Functions used ########################  */
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