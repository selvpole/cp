#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>
#include <cmath>

#define FileIn(file) freopen("input.txt", "r", stdin)
#define FileOut(file) freopen("output.txt", "w", stdout)
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

int main() {
  __FastIO;
//    FileIn(input);
  //FileOut(output);
  /*********************START************************/
  string input , newInput;
  double sq;
  int c=1;
  int numOfTest;
  cin >> numOfTest;
  cin.ignore(256, '\n');

  while(numOfTest--) {

    getline(cin, input);

    bool isP = true;
    newInput = "";
    for(int i=0; i<input.size() ; i++) {
      if( ((int)input[i] != 32) &&
          ((int)input[i]!=33 )  &&
          ((int)input[i]!=46 )  &&
          ((int)input[i]!=63 )  &&
          ((int)input[i]!=44 ) &&
          ((int)input[i]!=40 ) &&
          ((int)input[i]!=41 )
              )
        newInput+=input[i];
    }

    transform(newInput.begin(), newInput.end(), newInput.begin(), ::tolower);

    for(int i=0; i<(newInput.size()/2); i++) {
      if(newInput[i] != newInput[newInput.size()-i-1]) {
        isP = false;
      }
    }

    cout << "Case #" << c++ << ":" << '\n';
    if(isP) {
      sq = sqrt(newInput.size());
      if(ceil(sq)==floor(sq)) {
        cout << (int)sq << "\n";
      } else {
        cout << "No magic :(" << "\n";
      }
    }
    else
      cout << "No magic :(" << "\n";

  }
  /*********************END**************************/
//    fclose(stdin);
//  fclose(stdout);
  return 0;
}