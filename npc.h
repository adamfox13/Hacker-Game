#include <iostream>
using namespace std;

class NPC{
    public:
    NPC();
    NPC(bool n, bool f, bool e, bool ap);
    void setEnemy(bool e);
    void setFriendly(bool f);
    void setNeutral(bool n);
    void setPuzzle(bool p);

    bool getEnemy();
    bool getFriendly();
    bool getNeutral();
    bool attemptedPuzzle();
    

    private:
    bool enemy;
    bool friendly;
    bool neutral;
    bool attemptPuzzle;
};