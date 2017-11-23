#include <iostream>
#include <cstdio>
#include <vector>
#include <string>

#define FileIn(file) freopen("input.txt", "r", stdin)
#define FileOut(file) freopen("output.txt", "w", stdout)
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

int main() {
    __FastIO;
//    FileIn(input);
    //FileOut(output);
    /*********************START************************/

    int tn, c=1;
    cin >> tn;
    while(tn--) {
        string card;
        int y=0;
        vector<string> cards;
        for(int i=0; i<27;i++) {
            cin >> card;
            cards.push_back(card);
        }

        for(int i=0; i<3;i++) {

            string temp_card;
            int value=0, numOfRemove=0;
            temp_card = cards.back();
            cards.pop_back();

            if(temp_card[0] == 'A' || temp_card[0] == 'K' || temp_card[0] == 'Q' || temp_card[0] == 'J' || temp_card[0] == 'T') {
                value = 10;
            } else {
                value = (int)temp_card[0] - 48;
            }

            y+=value;
            numOfRemove = 10-value;

            for(int i=0; i<numOfRemove;i++) {
                cards.pop_back();
            }
        }

        for(int i=0; i<25;i++) {
            cin >> card;
            cards.push_back(card);
        }

        cout << "Case" << " " << c++ << ": " << cards[y-1] << '\n';
    }
    /*********************END**************************/
//    fclose(stdin);
    //fclose(stdout);
    return 0;
}