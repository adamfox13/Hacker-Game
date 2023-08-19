#include <iostream>
#include <fstream>
using namespace std;
class Room{
    public: 
    Room();
    Room(string name, int hackers);
    void setRoomName(string rn);
    void setNumHackers(int h);
    void setComputerMaintanceLevel(int cml);
    void setViruses(int v);
    void setCompPartsAvail(int cpa);
    void setAntiVirusUSBs(int usb);
    void setVPNsAvail(int vpns);
    void setInternetProviderLevel(int ipl);
    void setPlayerDogeCoin(int dc);
    void setCarmensProgress(int carmenprog);
    void setHackersDefeated(int hd);
    void setFrustration(int f);
    
    string getRoomName();
    int getNumHackers();
    int getCompMaintanceLvl();
    int getVirsuses();
    int getComputerPartsAvailable();
    int getAntiVirusUSB();
    int getVPNsAvail();
    int getIPL();
    int getDogePlayer();
    int getFrustration();
    int getCarmenProgress();
    int getHackersDefeated();

    private:
    string roomName; 
    int numHackers;
    int computerMaintanceLevel;
    int viruses;
    int computerPartsAvailable;
    int antiVirusUSBs; 
    int vpnsAvail;
    int interenetProviderLevel;
    int dogeCoinPlayer;
    int playerFrustration;
    int carmensProgress;
    int hackersDefeated;
};