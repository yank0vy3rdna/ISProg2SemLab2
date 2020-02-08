#include <iostream>
#include <string>
#include "Menu.h"
#include "Action.h"

using namespace std;

int main(){
    Action act("lol");
    Menu::PrintHelp();
    Menu::ParseActions(act);

}