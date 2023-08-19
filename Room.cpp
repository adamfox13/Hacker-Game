#include <iostream>
#include <fstream>
#include "Room.h"

Room::Room(){
    roomName = "";
    numHackers = 0;
}
Room::Room(string name, int hackers){
    roomName = name;
    numHackers = hackers;
}
void Room::setRoomName(string rn){
    roomName = rn;
}
void Room::setNumHackers(int h){
    numHackers = h;
}
void Room::setComputerMaintanceLevel(int cml){
    computerMaintanceLevel = cml;
}
void Room::setViruses(int v){
    viruses = v;
}
void Room::setCompPartsAvail(int cpa){
    computerPartsAvailable = cpa;
}
void Room::setAntiVirusUSBs(int usb){
    antiVirusUSBs = usb;
}
void Room::setVPNsAvail(int vpns){
    vpnsAvail = vpns;
}
void Room::setInternetProviderLevel(int ipl){
    interenetProviderLevel=ipl;
}
void Room::setPlayerDogeCoin(int dc){
    dogeCoinPlayer = dc;
}
void Room::setCarmensProgress(int carmenprog){
    carmensProgress = carmenprog;
}
void Room::setHackersDefeated(int hd){
    hackersDefeated = hd;
}
void Room::setFrustration(int f){
    playerFrustration = f;
}

string Room::getRoomName(){
    return roomName;
}
int Room::getNumHackers(){
    return numHackers;
}
int Room::getCompMaintanceLvl(){
    return computerMaintanceLevel;
}
int Room::getVirsuses(){
    return viruses;
}
int Room::getComputerPartsAvailable(){
    return computerPartsAvailable;
}
int Room::getAntiVirusUSB(){
    return antiVirusUSBs;
}
int Room::getVPNsAvail(){
    return vpnsAvail;
}
int Room::getIPL(){
    return interenetProviderLevel;
}
int Room::getDogePlayer(){
    return dogeCoinPlayer;
}
int Room::getFrustration(){
    return playerFrustration;
}
int Room::getCarmenProgress(){
    return carmensProgress;
}
int Room::getHackersDefeated(){
    return hackersDefeated;
}