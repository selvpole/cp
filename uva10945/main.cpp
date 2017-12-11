#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

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

    while(getline(cin, input) && input != "DONE") {

      bool isP = true;
      newInput = "";
      for(int i=0; i<input.size() ; i++) {
        if( ((int)input[i] != 32) && ((int)input[i]!=33 ) && ((int)input[i]!=46 ) && ((int)input[i]!=63 )&& ((int)input[i]!=44 ))
          newInput+=input[i];
      }

      transform(newInput.begin(), newInput.end(), newInput.begin(), ::tolower);

      for(int i=0; i<(newInput.size()/2); i++) {
        if(newInput[i] != newInput[newInput.size()-i-1]) {
          isP = false;
        }
      }

      if(isP)
        cout << "You won't be eaten!" << "\n";
      else
        cout << "Uh oh.." << "\n";

    }
    /*********************END**************************/
//    fclose(stdin);
    //fclose(stdout);
    return 0;
}