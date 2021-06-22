#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;
/* pseudobatch.h contains a batch file-like command string
   that will be executed upon activation. */
#include "main.hpp"

/* Hi! Welcome to the source code! Do you like looking at source code? Here it is! 
Do you like screwing around with source code? It's here!

Just sign this EULA agreeing to certain terms, i.e. you can't...
Nah, just kidding. Go nuts.

But not literally. I hope. */

int main(int argc, char* argv[])
{
    #ifdef _WIN32
    #else
    /* Doesn't make sense for a supposed BAT to EXE compiler to run on anything but Windows. */
    cout << "E: unsupported operating system" << endl;
    return 0;
    #endif
    if (argc > 1)
    {
        /* If "/nocls" was specified on the command line,
           then don't clear the screen. */
        if (!strcmp(argv[1], "/nocls"))
        {
            /* Do nothing */
        } 
        else { system("cls"); }
    } 
    else { system("cls"); }
    cout << "This program has been compiled with an unlicenced compiler." << endl;
    cout << "Upgrade to PRO to distribute EXE files." << endl;
    cout << "If you have a registration key, type 'register' and enter it.\n\n" << endl;
    cout << "BatCC ADVANCED BAT to EXE Compiler (C) 2012-2021 BatchPlus Solutions Ltd." << endl;
    cout << "This program is shareware. Please purchase the PRO version for continued usage.\n\n" << endl;
    cout << "> ";
    string leave; getline(cin, leave);
    if ((leave == "no") || (leave == "No"))
    {
        cout << "\nThis program was compiled with an unregistered shareware compiler." << endl;
        cout << "By circumventing this, you are breaking copyright law." << endl;
        system("pause");
    }
    else
    if ((leave == "register") || (leave == "Register"))
    {
        string key;
        string rightkey = string(CorrectKey);
        int tries = 0;
        while (key != rightkey)
        {
            tries++;
            if (tries > 3)
            {
                cout << "Tries exceeded -- Please register your copy of BatCC ADVANCED BAT to EXE Compiler\nVisit https://bit.ly/BatchPlus for more information." << endl;
                return 0;
            }
            cout << "Please enter your registration key in the format XXXXX-XXXXX-XXXXX-XXXXX-XXXXX: ";
            getline(cin, key);
            if (key == "") { tries--; } else { if (key != rightkey) { cout << "Incorrect registration key.\n" << endl; } }
        }
        cout << "Registration successful." << endl;
        cout << "Run batch file now? (Y/n)" << endl;
        string runNow; getline(cin, runNow);
        if (!(runNow == "n")||!(runNow == "N"))
        {
            system("cls");
            cout << "Program compiled with BatCC ADVANCED BAT to EXE Compiler registered version. (C) BatchPlus Solutions Ltd." << endl;
            cout << "Visit https://bit.ly/BatchPlus for more information.\n" << endl;
            runBatchFile();
        }
    }
    return 0;
}