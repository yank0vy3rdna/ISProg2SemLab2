//
// Created by el_Toton on 08.02.2020.
//

#include "Menu.h"
#include "Action.h"

void Menu::ParseActions(Action action){

    int num;
    string s_inp;
    while(true){
        cin >> num;
        switch (num){
            case 1:
                action.OpenFile();
                break;
            case 2:
                action.CloseFIle();
                break;
            case 3:
                cout << action.GetFileName();
                break;
            case 4:
                cout << action.IsFileOpen();
                break;
            case 5:
                cin >> s_inp;
                action.SetStringToFile(s_inp);
                break;
            case 6:
                int i_inp;
                cin >> i_inp;
                action.SetIntToFile(i_inp);
                break;
            case 7:
                float f_inp;
                cin >> f_inp;
                action.SetFloatToFile(f_inp);
                break;
            default:
                cout << "You wrote wrong number." << endl;
        }
    }
}
void Menu::PrintHelp(){
    cout << "Press number to:" << endl;
    cout << "1 - Open file" << endl;
    cout << "2 - Close file" << endl;
    cout << "3 - Get name of file" << endl;
    cout << "4 - Check is file open" << endl;
    cout << "5 - Write string in file" << endl;
    cout << "6 - Write int in file" << endl;
    cout << "7 - Write float in file" << endl;
}

