#include <iostream>
#include <vector>
#include <cmath>
#include "player.cpp"
#include "Room.cpp"
#include "Map.cpp"
#include "bestbuy.cpp"
#include <iostream>
#include <fstream>
using namespace std;
void bestbuy(string file, BestBuy invent, BestBuy bestbuy, int dogeCoin){
    cout<<"Would you like to purchase anything in bestbuy? (1)=Yes or (2)=No.";
    int a;
    cin>>a;
    if (a==1){
        cout<<"What do you want to purchase? (1)=Computer parts, (2)=Antivirus software, (3)=VPN or (4)=Internet provider";
        int b;
        cin>>b;
        if (b==1){
            cout<<"What do you want to purchase? (1)=A CPU, (2)=A GPU, (3)=A Power Supply Unit, (4)=A Computer Case, (5)=An internet card (6)=A keyboard and mouse (7)=A premade computer"<<endl;
            int c;
            cin>>c;
            if (c==1){
                cout<<"How many CPU's will you like to purchase?(Max: 3)";
                int d;
                cin>>d;
                bestbuy.addCPU(d);
                if (bestbuy.getCPU()<=3 and bestbuy.getCPU()>0){
                    cout<<"You now have "<<bestbuy.getCPU()<<" CPU's in your inventory.";
                }
                else{
                    bestbuy.subCPU(d);
                    cout<<"Error in input.";
                }
            }
            if (c==2){
                cout<<"How many GPU's will you like to purchase?(Max: 3)";
                int d;
                cin>>d;
                if (bestbuy.getGPU()<=3 and bestbuy.getGPU()>0){
                    bestbuy.addGPU(d);
                }
                else{
                    cout<<"Error in input.";
                }
            }
            if (c==3){
                cout<<"How many power supply units will you like to purchase?(Max: 3)";
                int d;
                cin>>d;
                if (bestbuy.getpowerSupUnit()<=3 and bestbuy.getpowerSupUnit()>0){
                    bestbuy.addpowerSupUnit(d);
                }
                else{
                    cout<<"Error in input.";
                }
            }
            if (c==4){
                cout<<"How many computer cases will you like to purchase?(Max: 3)";
                int d;
                cin>>d;
                if (bestbuy.getcompCase()<=3 and bestbuy.getcompCase()>0){
                    bestbuy.addcompCase(d);
                }
                else{
                    cout<<"Error in input.";
                }
            }
            if (c==5){
                cout<<"How many internet cards will you like to purchase?(Max: 3)";
                int d;
                cin>>d;
                if (bestbuy.getintCard()<=3 and bestbuy.getintCard()>0){
                    bestbuy.addintCard(d);
                }
                else{
                    cout<<"Error in input.";
                }
            }
            if (c==6){
                cout<<"How many power supply units will you like to purchase?(Max: 3)";
                int d;
                cin>>d;
                if (bestbuy.addpowerSupUnit()<=3 and bestbuy.addpowerSupUnit()>0){
                    bestbuy.addpowerSupUnit(d);
                }
                else{
                    cout<<"Error in input.";
                }
            }
            if (c==7){
                cout<<"How many power supply units will you like to purchase?(Max: 3)";
                int d;
                cin>>d;
                if (bestbuy.getpowerSupUnit()<=3 and bestbuy.getpowerSupUnit()>0){
                    bestbuy.addpowerSupUnit(d);
                }
                else{
                    cout<<"Error in input.";
                }
            }
        }
    }
}
int main(){
    string n;
    cout<<"Hello player! Please enter your name: ";
    cin>>n;
    Player p;
    p=Player();
    ifstream file("best_buy_info.txt");
    if (file.is_open()){
        cout<<file.rdbuf();
    }
    Map m;
    BestBuy invent;
    m.spawnNPC(3, 2);
    m.spawnBestBuy(4, 3);
    m.spawnHacker(2, 4);
    m.displayMap();
    bestbuy(file,invent, bestbuy, dogeCoin);
}



"****FIND THE ERROR****\nThis code works perfectly except for one pesky bug. Enter the number of \nthe line on which the error appears to win this puzzle.\n1. #include <iostream>\n2. using namespace std;\n3.\n4. double frobenius(double arr1[][3], double arr2[][3]);\n5.\n6. int main() {\n7. double arr1[3][3];\n8. double arr2[3][3];\n9.\n10. for(int i = 0; i < 3; i++){\n11. for(int j = 0; j < 3; j++) {\n12. arr1[i][j] = i + j;\n13. arr2[i][j] = i * j;\n14. }\n15. }\n16.\n17. cout << frobenius(arr1, arr2) << endl;\n18. return 0;\n19. }\n20.\n21. double frobenius(arr1[][3], arr2[][3])\n22. double innerProduct = 0;\n23. for(int i = 0; i < 3; i++){\n24. for(int j = 0; j < 3; j++){\n25. innerProduct += arr1[i][j] * arr2[i][j];\n26. }\n27. }\n28. return innerProduct;\n29. }"




"****FIND THE ERROR****\nThis code works perfectly except for one pesky bug. Enter the number of \nthe line on which the error appears to win this puzzle.\n1. #include <iostream>\n2. #include <fstream>\n3.\n4. using namespace std;\n5.\n6. int main() {\n7. string fileName = 'fake_file.txt';\n8. fstream infile(fileName);\n9.\n10. if(infile.is_open()){\n11. string line;\n12. int lineNum = 0;\n13. while(getline(line, infile)){\n14. lineNum++;\n15. cout << 'Line ' << lineNum << ': ' << line << endl;\n16. }\n17. }else{\n18. cout << ÒFailed to open file.Ó << endl;\n19. }\n20. return 0;\n21.<<endl";

"Consider the following snippet of code. How many times will the sentence \ninside of the for loop be printed?\n#include <iostream>\nusing namespace std;\nint main(){\nint begin = 5;\nint end = 20;\nfor (int i = begin; i <= end; i+=2){\ncout << "This code does nothing important" << endl;\n}\nreturn 0;\n}\nA) 15\nB) 8\nC) 7\nD) 10"

"To defeat a hacker you need to use a brute force attack on his account. To \ndo this, you are using a text file that holds words, numbers and other \npotential password combinations. Sometimes you come up with new word \ncombinations you would like to add to the list. Which of the following \nstreams should you use to both read and write from this file?\nA) iofstream\nB) ofstream\nC) ifstream\nD) fstream"



