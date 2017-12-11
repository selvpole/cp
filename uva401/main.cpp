#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <map>
#include <cmath>
#define FileIn(file) freopen("input.txt", "r", stdin)
#define FileOut(file) freopen("output.txt", "w", stdout)
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

int main() {
    __FastIO;
//    FileIn(input);
//    FileOut(output);
    /*********************START************************/

    map<char, char> dic;
    string input;

    dic.insert(pair<char, char>('E', '3'));
    dic.insert(pair<char, char>('3', 'E'));
    dic.insert(pair<char, char>('J', 'L'));
    dic.insert(pair<char, char>('L', 'J'));
    dic.insert(pair<char, char>('O', 'O'));
    dic.insert(pair<char, char>('2', 'S'));
    dic.insert(pair<char, char>('S', '2'));
    dic.insert(pair<char, char>('Z', '5'));
    dic.insert(pair<char, char>('5', 'Z'));
    dic.insert(pair<char, char>('A', 'A'));
    dic.insert(pair<char, char>('H', 'H'));
    dic.insert(pair<char, char>('I', 'I'));
    dic.insert(pair<char, char>('M', 'M'));
    dic.insert(pair<char, char>('T', 'T'));
    dic.insert(pair<char, char>('U', 'U'));
    dic.insert(pair<char, char>('V', 'V'));
    dic.insert(pair<char, char>('W', 'W'));
    dic.insert(pair<char, char>('X', 'X'));
    dic.insert(pair<char, char>('Y', 'Y'));
    dic.insert(pair<char, char>('1', '1'));
    dic.insert(pair<char, char>('8', '8'));

    while(getline(cin, input)) {

        bool isP=true, isM=true;
        float size = input.size();

        for(int i=0; i<ceil((size/2)); i++)
            if(input[i]!=input[input.size()-1-i])
                isP = false;

        for(int i=0; i<(ceil(size/2)); i++) {
            if(dic.find(input[i])!=dic.end()) {
                if(input[i] != dic.find(input[input.size()-1-i])->second) {
                    isM = false;
                    break;
                }
            } else {
                isM = false;
                break;
            }
        }

        if( isP && isM) {
            cout << input << " -- is a mirrored palindrome." <<"\n";
        } else if(isP || isM) {
            if(isP)
                cout << input << " -- is a regular palindrome." <<"\n";
            if(isM)
                cout << input << " -- is a mirrored string." << "\n";
        } else {
            cout << input << " -- is not a palindrome." << "\n";
        }
        cout << "\n";
    }

    /*********************END**************************/
//    fclose(stdin);
//    fclose(stdout);
    return 0;
}