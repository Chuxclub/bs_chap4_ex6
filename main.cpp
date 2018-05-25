#include <iostream>
#include "std_lib_facilities.h"
#include "project_functions.h"

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
