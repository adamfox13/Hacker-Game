#include <iostream>
#include <fstream>
using namespace std;
class Player{
    private:
    string playerName;
    int frustrationLevel;
    int dogeCoin;
    int comp;

    public:
    Player();
    Player(string, int, int, int);

    void setplayerName(string);
    string getplayerName();
    void setfl(int);
    int getfl();
    void setdogeCoin(int);
    int getdogeCoin();
    void setcomp(int);
    int getcomp();
};