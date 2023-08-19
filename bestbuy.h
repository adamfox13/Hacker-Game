#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
//inventory of items purchased from best buy
class BestBuy{
    private:
    int CPU;
    int GPU;
    int powerSupUnit;
    int compCase;
    int intCard;
    int keyAndMouse;
    int antisoft;
    int vpn;
    int intprovider;
    vector<double> cart;

    public:
    BestBuy();
    double gettotalprice();

    void addCPU(int cp);
    void subCPU(int cp);
    int getCPU();
    void addGPU(int gp);
    int getGPU();
    void addpowerSupUnit(int psu);
    int getpowerSupUnit();
    void addcompCase(int cc);
    int getcompCase();
    void addintCard(int ic);
    int getintCard();
    void addkeyAndMouse(int km);
    int getkeyAndMouse();
    void addantisoft(int as);
    int getantisoft();
    void addvpn(int vp);
    int getvpn();
    int addintProvider(int ip);
    int getintProvider();
    void addpCart(double p);
    void resetCart();
};