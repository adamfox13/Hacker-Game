#include <iostream>
#include <fstream>
#include "player.h"
using namespace std;
Player::Player(){
    playerName="";
    frustrationLevel=0;
    dogeCoin=200;
    comp=1;
}
Player::Player(string p, int f, int d, int c){
    playerName=p;
    frustrationLevel=f;
    dogeCoin=d;
    comp=c;
}
void Player::setplayerName(string p){
    playerName=p;
}
string Player::getplayerName(){
    return playerName;
}
void Player::setfl(int f){
    frustrationLevel=f;
}
int Player::getfl(){
    return frustrationLevel;
}
void Player::setdogeCoin(int d){
    dogeCoin+=d;
}
int Player::getdogeCoin(){
    return dogeCoin;
}
void Player::setcomp(int c){
    comp=c;
}
int Player::getcomp(){
    return comp;
}