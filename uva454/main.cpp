#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
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

    int numOftest,c;
    string input, formattedInput;
    cin >> numOftest;
    multimap<string, string> dic, ana;
    // kill the '\n' that left in the cin buffer
    cin.ignore(256, '\n');

    // kill the black line
    cin.ignore(256, '\n');

    while(numOftest--) {

        while(getline(cin, input)) {

            if(input.empty()) break;

            formattedInput = "";

            for(int i=0; i<input.size(); i++) {
                if((int)input[i]!=32)
                    formattedInput+=input[i];
            }

            sort(formattedInput.begin(), formattedInput.end());

            dic.insert(pair<string, string>(input, formattedInput));

        }

        for(auto it = dic.begin(); it!=dic.end(); it++) {
            for(auto itt = next(it, 1); itt!=dic.end(); itt++) {
                if(it->second == itt->second)
                    ana.insert(pair<string, string>(it->first, itt->first));
            }
        }

        for(auto i = ana.begin(); i!= ana.end(); i++)
            cout << i->first << " = " << i->second << "\n";

        if(numOftest!=0) cout << "\n";

        ana.clear();
        dic.clear();

    }
    /*********************END**************************/
//    fclose(stdin);
//    fclose(stdout);
    return 0;
}
