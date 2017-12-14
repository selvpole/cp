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

bool compare(char prevI, char backI) {
    char lowerC1 = tolower(prevI);
    char lowerC2 = tolower(backI);
    if(lowerC1==lowerC2) {
       return  prevI < backI;
    } else {
       return lowerC1 < lowerC2;
    }
}

int main() {
    __FastIO;
    FileIn(input);
    //FileOut(output);
    /*********************START************************/
    int numOfTestcase;
    string input;
    cin >> numOfTestcase;

    while(numOfTestcase--) {
        cin >> input;
        sort(input.begin(), input.end(), compare);
        do {
            cout << input << "\n";
        } while(next_permutation(input.begin(), input.end(), compare));
    }
    /*********************END**************************/
//    fclose(stdin);
//    fclose(stdout);
    return 0;
}
