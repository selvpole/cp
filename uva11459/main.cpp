#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <map>

#define FileIn(file) freopen("input.txt", "r", stdin)
#define FileOut(file) freopen("output.txt", "w", stdout)
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

int main() {
    __FastIO;
//    FileIn(input);
    //FileOut(output);
    /*********************START************************/
    map<int, int> snakeOrLadder;
    int numOfPlayer, numOfCases, numOfSnakeOrLadder, numOfRoll, entrance, exit, resultOfRoll, pos;
    cin >> numOfCases;
    while(numOfCases--) {

        cin >> numOfPlayer >> numOfSnakeOrLadder >> numOfRoll;

        if(numOfPlayer>0) {
            vector<int> positionOfPlayer(numOfPlayer, 1);
            int posOfPlayer=0;

            while(numOfSnakeOrLadder!=0 && numOfSnakeOrLadder--) {
                cin >> entrance >> exit;
                snakeOrLadder.insert(pair<int, int>(entrance, exit));
            }

            while(numOfRoll--) {
                cin >> resultOfRoll;

                pos = positionOfPlayer.at(posOfPlayer) + resultOfRoll;

                if(snakeOrLadder.find(pos)!=snakeOrLadder.end()) {
                    pos = snakeOrLadder.find(pos)->second;
                    positionOfPlayer.at(posOfPlayer) = pos;
                } else
                    positionOfPlayer.at(posOfPlayer) = pos;

                if(pos>=100) {
                    positionOfPlayer.at(posOfPlayer) = 100;
                    while(numOfRoll>0) {
                        cin >> resultOfRoll;
                        numOfRoll--;
                    }
                } else {
                    if(posOfPlayer==numOfPlayer-1) posOfPlayer=0;
                    else posOfPlayer++;
                }
            }

            for(int i=0; i<positionOfPlayer.size(); i++) {
                int num = i+1;
                cout << "Position of player " << num <<" is " << positionOfPlayer.at(i) << "." << "\n";
            }

        } else {

            while(numOfSnakeOrLadder!=0 && numOfSnakeOrLadder>0) {
                cin >> entrance >> exit;
                numOfSnakeOrLadder--;
            }

            while(numOfRoll>0) {
                cin >> resultOfRoll;
                numOfRoll--;
            }
        }
        snakeOrLadder.clear();
    }
    /*********************END**************************/
//    fclose(stdin);
    //fclose(stdout);
    return 0;
}