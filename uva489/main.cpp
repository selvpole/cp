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
//    FileOut(output);
    /*********************START************************/

    string guess, answer, newGuess, newAnswer;
    int numOfRound, error_count;
    map<char, int> ans,ges;

    while(cin>>numOfRound, numOfRound!=-1) {
      cin >> answer >> guess;
      error_count=0;

      for(int i=0; i<guess.size();i++) {
        auto it = ges.find(guess.at(i));
        if(it==ges.end()) {
          ges.insert(pair<char, int>(guess[i], 1));
          newGuess += guess[i];
        }
      }

      for(int i=0; i<answer.size();i++) {
        auto it = ans.find(answer.at(i));
        if(it==ans.end()) {
          ans.insert(pair<char, int>(answer[i], 1));
          newAnswer += answer[i];
        }
      }

      for(int i=0; i<newGuess.size();i++) {
        if(newAnswer.size()==0) break;
        auto it = ans.find(newGuess.at(i));
        if(it==ans.end()) {
          error_count++;
        } else {
          newAnswer.erase(newAnswer.find_first_of(it->first), 1);
        }
      }

      cout << "Round " << numOfRound << "\n";
      if(error_count>=7) {
        cout << "You lose." << "\n";
      } else if (newAnswer.size()==0) {
        cout << "You win." << "\n";
      } else {
        cout << "You chickened out." << "\n";
      }

      ans.clear();
      ges.clear();
      newAnswer.clear();
      newGuess.clear();
    }
    /*********************END**************************/
//    fclose(stdin);
//    fclose(stdout);
    return 0;
}