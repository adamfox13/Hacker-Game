#include <iostream>
#include <fstream>
#include "player.h"
#include "bestbuy.h"
#include "npc.h"
#include "hacker.h"
#include "Room.h"
//Parteners: Mateusz Muszynski and Adam Fox
using namespace std;
int main(){
    Player player;
    BestBuy bestbuy;
    player=Player();
    bestbuy.setvpn(2);
    bestbuy.setintProvider(3);
    cout<<"Player name: "<<player.getplayerName()<<endl;
    cout<<"Frustrtation level: "<<player.getfl()<<endl;
    cout<<"Doge coin: "<<player.getdogeCoin()<<endl;
    cout<<"Computer: "<<player.getcomp()<<endl;
    cout<<"Internet provider: "<<bestbuy.getintProvider()<<endl;
    cout<<"VPN: "<<bestbuy.getvpn()<<endl;
    player=Player("James",3,250,3);
    cout<<"Player name: "<<player.getplayerName()<<endl;
    cout<<"Frustrtation level: "<<player.getfl()<<endl;
    cout<<"Doge coin: "<<player.getdogeCoin()<<endl;
    cout<<"Computer: "<<player.getcomp()<<endl;
    cout<<"Internet provider: "<<bestbuy.getintProvider()<<endl;
    cout<<"VPN: "<<bestbuy.getvpn()<<endl;
    player=Player();
    player.setplayerName("Adam");
    player.setfl(3);
    player.setdogeCoin(197);
    player.setcomp(1);
    cout<<"Player name: "<<player.getplayerName()<<endl;
    cout<<"Frustrtation level: "<<player.getfl()<<endl;
    cout<<"Doge coin: "<<player.getdogeCoin()<<endl;
    cout<<"Computer: "<<player.getcomp()<<endl;
    cout<<"Internet provider: "<<bestbuy.getintProvider()<<endl;
    cout<<"VPN: "<<bestbuy.getvpn()<<endl;
    bestbuy.setCPU(3);
    bestbuy.setGPU(2);
    bestbuy.setpowerSupUnit(5);
    bestbuy.setcompCase(4);
    bestbuy.setintCard(1);
    bestbuy.setkeyAndMouse(1);
    bestbuy.setantisoft(1);
    bestbuy.setvpn(2);
    bestbuy.setintProvider(3);
    bestbuy.addpCart(20);
    bestbuy.addpCart(10);
    cout<<"CPU: "<<bestbuy.getCPU()<<endl;
    cout<<"GPU: "<<bestbuy.getGPU()<<endl;
    cout<<"Power supply unit: "<<bestbuy.getpowerSupUnit()<<endl;
    cout<<"Computer case: "<<bestbuy.getcompCase()<<endl;
    cout<<"Internet card: "<<bestbuy.getintCard()<<endl;
    cout<<"Key and Mouse: "<<bestbuy.getkeyAndMouse()<<endl;
    cout<<"Anti viruse software: "<<bestbuy.getantisoft()<<endl;
    cout<<"VPN: "<<bestbuy.getvpn()<<endl;
    cout<<"Internet provider: "<<bestbuy.getintProvider()<<endl;
    cout<<"Total price: $"<<bestbuy.gettotalprice()<<endl;
    bestbuy = BestBuy();
    bestbuy.resetCart();
    cout<<"CPU: "<<bestbuy.getCPU()<<endl;
    cout<<"GPU: "<<bestbuy.getGPU()<<endl;
    cout<<"Power supply unit: "<<bestbuy.getpowerSupUnit()<<endl;
    cout<<"Computer case: "<<bestbuy.getcompCase()<<endl;
    cout<<"Internet card: "<<bestbuy.getintCard()<<endl;
    cout<<"Key and Mouse: "<<bestbuy.getkeyAndMouse()<<endl;
    cout<<"Anti viruse software: "<<bestbuy.getantisoft()<<endl;
    cout<<"VPN: "<<bestbuy.getvpn()<<endl;
    cout<<"Internet provider: "<<bestbuy.getintProvider()<<endl;
    cout<<"Total price: $"<<bestbuy.gettotalprice()<<endl;
    Room room;
    room = Room();
    room.setRoomName("Turing Room");
    room.setNumHackers(3);
    room.setCompPartsAvail(player.getcomp());
    room.setCarmensProgress(45);
    room.setFrustration(player.getfl());
    room.setHackersDefeated(2);
    room.setComputerMaintanceLevel(80);
    room.setInternetProviderLevel(bestbuy.getintProvider());
    room.setPlayerDogeCoin(player.getdogeCoin());
    room.setViruses(5);
    room.setVPNsAvail(bestbuy.getvpn());
    room.setAntiVirusUSBs(2);
    cout << "Room Name: " << room.getRoomName() << endl;
    cout << "Number of hackers in the " << room.getRoomName() << " : " << room.getNumHackers() << endl;
    cout << "Number of computer parts available: " << room.getComputerPartsAvailable() << endl;
    cout << "Watch out Carmen is currently at: " << room.getCarmenProgress() << endl;
    cout << "The Player's current frustration is at: " << room.getFrustration() << endl;
    cout << "The Player has currently defeated " << room.getHackersDefeated() << " hackers in the room." << endl;
    cout << "The computer maintance level in the room is " << room.getCompMaintanceLvl() << endl;
    cout << "The internet provider level within the room is " << room.getIPL() << endl;
    cout << "The Player has " << room.getDogePlayer() << " Doge coins." << endl;
    cout << "There are currenlty " << room.getVirsuses() << " hackers within the room!" << endl;
    cout << "You have " << room.getVPNsAvail() << " to fight off the viruses" << endl;
    cout <<"However you can utilize your " << room.getAntiVirusUSB() << " to clear the viruses within the room." << endl;
    Hacker hacker; 
    hacker = Hacker("hansolo1337", 1);
    cout << "The hackers current level is: " << hacker.getHackerLevel() << endl;
    cout << "The hackers name is: " << hacker.getHackerName() << endl;
    NPC npc;
    npc = NPC();
    npc.setFriendly(true);
    cout << "Is the NPC an enemy? ";
    if(npc.getEnemy() == false){
        cout << "No." << endl;
    }
    else{
        cout << "Yes!" << endl;
    }
    cout << "Is the NPC neutral towards the player? ";
    if(npc.getNeutral() == false){
        cout << "No." << endl;
    }
    else{
        cout << "Yes!" << endl;
    }
    cout << "Is the NPC a friend? ";
    if(npc.getFriendly() == false){
        cout << "No." << endl;
    }
    else{
        cout << "Yes!" << endl;
    }
    char userInput;
    cout << "Would you like to attempt the puzzle? Enter 'Y' for yes or 'N' for no" << endl;
    cin >> userInput;
    if(userInput == 'Y'){
        npc.setPuzzle(true);
    }
    else{
        npc.setPuzzle(false);
    }
    if(npc.attemptedPuzzle() == true){
        cout << "Good luck on your puzzle attempt!" << endl;
    }
    else{
        cout << "Maybe you should've done the puzzle.." << endl;
        npc.setFriendly(false);
        npc.setEnemy(true);
        cout << "Is the NPC still your friend? ";
        if(npc.getFriendly() == false){
            cout << "No." << endl;
        }
        else{
            cout << "Yes!" << endl;
        }
        cout << "Is the NPC now your enemy?? ";
        if(npc.getEnemy() == false){
            cout << "No." << endl;
        }
        else{
            cout << "Yes!" << endl;
        }
    }

}