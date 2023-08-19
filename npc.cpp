#include <iostream>
#include <fstream>
#include "Room.h"
#include "hacker.h"
#include "player.h"
#include "npc.h"
using namespace std;

NPC::NPC(){
    enemy = false;
    friendly = false;
    neutral = false;
    attemptPuzzle = false;
}
NPC::NPC(bool n, bool f, bool e, bool ap){
    neutral = n;
    friendly = f;
    enemy = e;
    attemptPuzzle = ap;
}

void NPC::setPuzzle(bool p){
    attemptPuzzle = p;
}
void NPC::setEnemy(bool e){
    enemy = e;
}
void NPC::setFriendly(bool f){
    friendly = f;
}
void NPC::setNeutral(bool n){
    neutral = n;
}

bool NPC::getEnemy(){
    return enemy;
}
bool NPC::getFriendly(){
    return friendly;
}
bool NPC::getNeutral(){
    return neutral;
}
bool NPC::attemptedPuzzle(){
    return attemptPuzzle;
}