#include <iostream>
using namespace std;
class Hacker{
    public:
    Hacker();
    Hacker(string hn, int hl);

    void setHackerName(string hackerN);
    void setHackerLevel(int hackerL);

    string getHackerName();
    int getHackerLevel();

    private:
    string hackerName;
    int hackerLevel;
};