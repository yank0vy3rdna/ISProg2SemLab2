//
// Created by el_Toton on 08.02.2020.
//

#include "Action.h"
#include <fstream>
#include <stdlib.h>

Action::Action(char* FileName) {
    Action::FileName = FileName;
    Action::fout = ofstream(FileName);
}
Action::Action(Action & action) {
    Action::fout= dynamic_cast<basic_ofstream<char> &&>(action.fout);
    Action::FileName=action.FileName;
}

void Action::OpenFile(){
    fout.open(FileName);
}
void Action::CloseFIle(){
    fout.close();
}
char* Action::GetFileName(){
    return FileName;
}
bool Action::IsFileOpen(){
    return fout.is_open();
}
void Action::SetStringToFile(string someStr){
    fout << someStr << endl;
}
void Action::SetIntToFile(int someInt){
    char* chr;
    itoa(someInt, chr, 10);
    fout.write(chr, 10);
}
void Action::SetFloatToFile(float someFloat){
    fout << someFloat << endl;
}