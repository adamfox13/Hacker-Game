#include <iostream>
#include <fstream>
#include "hacker.h"
using namespace std;

Hacker::Hacker(){
    hackerName = "";
    hackerLevel = 0;
}
Hacker::Hacker(string hn, int hl){
    hackerName = hn;
    hackerLevel = hl;
}
void Hacker::setHackerName(string hackerN){
    hackerName = hackerN;
}
void Hacker::setHackerLevel(int hackerL){
    hackerLevel = hackerL;
}
string Hacker::getHackerName(){
    return hackerName;
}
int Hacker::getHackerLevel(){
    return hackerLevel;
}