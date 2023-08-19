#include <iostream>
#include <fstream>
#include <vector>
#include "bestbuy.h"
using namespace std;
BestBuy::BestBuy(){
    CPU=0;
    GPU=0;
    powerSupUnit=0;
    compCase=0;
    intCard=0;
    keyAndMouse=0;
    antisoft=0;
    vpn=1;
    intprovider=1;
}
double BestBuy::gettotalprice(){
    double tot=0;
    for (int x=0;x<cart.size();x++){
        tot+=cart[x];
    }
    return tot;
}
void BestBuy::addCPU(int cp){
    CPU+=cp;
}
void BestBuy::subCPU(int cp){
    CPU-=cp;
}
int BestBuy::getCPU(){
    return CPU;
}
void BestBuy::addGPU(int gp){
    GPU+=gp;
}
int BestBuy::getGPU(){
    return GPU;
}
void BestBuy::addpowerSupUnit(int psu){
    powerSupUnit+=psu;
}
int BestBuy::getpowerSupUnit(){
    return powerSupUnit;
}
void BestBuy::addcompCase(int cc){
    compCase+=cc;
}
int BestBuy::getcompCase(){
    return compCase;
}
void BestBuy::addintCard(int ic){
    intCard+=ic;
}
int BestBuy::getintCard(){
    return intCard;
}
void BestBuy::addkeyAndMouse(int km){
    keyAndMouse+=km;
}
int BestBuy::getkeyAndMouse(){
    return keyAndMouse;
}
void BestBuy::addantisoft(int as){
    antisoft+=as;
}
int BestBuy::getantisoft(){
    return antisoft;
}
void BestBuy::addvpn(int vp){
    vpn+=vp;
}
int BestBuy::getvpn(){
    return vpn;
}
int BestBuy::addintProvider(int ip){
    intprovider+=ip;
}
int BestBuy::getintProvider(){
    return intprovider;
}
void BestBuy::addpCart(double p){
    cart.push_back(p);
}
void BestBuy::resetCart(){
    for (int x=0;x<cart.size();x++){
        cart[x]=0;
    }
}