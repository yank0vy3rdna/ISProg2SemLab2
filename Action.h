//
// Created by el_Toton on 08.02.2020.
//

#ifndef LAB2_ACTIONS_H
#define LAB2_ACTIONS_H


#pragma once

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Action{
private:
    ofstream fout;
    char* FileName;
public:
    Action(Action & action);
    explicit Action(char* FileName);
    void OpenFile();
    void CloseFIle();
    char* GetFileName();
    bool IsFileOpen();
    void SetStringToFile(string someStr);
    void SetIntToFile(int someInt);
    void SetFloatToFile(float someFloat);
};

#endif //LAB2_ACTIONS_H
