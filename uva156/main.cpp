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

    string input,inputL;
    map<string, string> dic, anana;
    vector<string> ana;

    while(cin >> input && input!="#") {
        inputL = input;

        transform(inputL.begin(), inputL.end(), inputL.begin(), ::tolower);

        sort(inputL.begin(), inputL.end());

        if(dic.find(inputL)==dic.end() && anana.find(inputL)==anana.end())
            dic.insert(pair<string, string>(inputL, input));
        else {
            dic.erase(inputL);
            anana.insert(pair<string, string>(inputL, input));
        }
    }

    for(auto it = dic.begin(); it!=dic.end(); ++it) {
      ana.push_back(it->second);
    }

    sort(ana.begin(), ana.end());

    for (int i = 0; i < ana.size(); ++i) {
        cout << ana[i] << "\n";
    }

    /*********************END**************************/
//    fclose(stdin);
//    fclose(stdout);
    return 0;
}