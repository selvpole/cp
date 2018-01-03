#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <cctype>
#include <utility>
#include <cmath>
#include <cstdlib>

#define FileIn(file) freopen("input.txt", "r", stdin)
#define FileOut(file) freopen("output.txt", "w", stdout)
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

int main() {
    __FastIO;
//    FileIn(input);
//    FileOut(output);
    /*********************START************************/

    string command;
    map<char, vector<vector<char>>> charTable;

    charTable.insert(pair<char, vector<vector<char>>>('A', { {'.', '*', '*', '*', '.', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '*', '*', '*', '*', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},}));

    charTable.insert(pair<char, vector<vector<char>>>('B', { {'*', '*', '*', '*', '.', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '*', '*', '*', '.', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '*', '*', '*', '.', '.'},}));

    charTable.insert(pair<char, vector<vector<char>>>('C', { {'.', '*', '*', '*', '*', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '.', '.', '.', '.', '.'},
                                                             {'*', '.', '.', '.', '.', '.'},
                                                             {'.', '*', '*', '*', '*', '.'},}));

    charTable.insert(pair<char, vector<vector<char>>>('D', { {'*', '*', '*', '*', '.', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '*', '*', '*', '.', '.'},}));

    charTable.insert(pair<char, vector<vector<char>>>('E', { {'*', '*', '*', '*', '*', '.'},
                                                             {'*', '.', '.', '.', '.', '.'},
                                                             {'*', '*', '*', '.', '.', '.'},
                                                             {'*', '.', '.', '.', '.', '.'},
                                                             {'*', '*', '*', '*', '*', '.'},}));

    charTable.insert(pair<char, vector<vector<char>>>('F', { {'*', '*', '*', '*', '*', '.'},
                                                             {'*', '.', '.', '.', '.', '.'},
                                                             {'*', '*', '*', '.', '.', '.'},
                                                             {'*', '.', '.', '.', '.', '.'},
                                                             {'*', '.', '.', '.', '.', '.'},}));

    charTable.insert(pair<char, vector<vector<char>>>('G', { {'.', '*', '*', '*', '*', '.'},
                                                             {'*', '.', '.', '.', '.', '.'},
                                                             {'*', '.', '.', '*', '*', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},
                                                             {'.', '*', '*', '*', '.', '.'},}));

    charTable.insert(pair<char, vector<vector<char>>>('H', { {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '*', '*', '*', '*', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},}));

    charTable.insert(pair<char, vector<vector<char>>>('I', { {'*', '*', '*', '*', '*', '.'},
                                                             {'.', '.', '*', '.', '.', '.'},
                                                             {'.', '.', '*', '.', '.', '.'},
                                                             {'.', '.', '*', '.', '.', '.'},
                                                             {'*', '*', '*', '*', '*', '.'},}));

    charTable.insert(pair<char, vector<vector<char>>>('J', { {'.', '.', '*', '*', '*', '.'},
                                                             {'.', '.', '.', '*', '.', '.'},
                                                             {'.', '.', '.', '*', '.', '.'},
                                                             {'*', '.', '.', '*', '.', '.'},
                                                             {'.', '*', '*', '.', '.', '.'},}));

    charTable.insert(pair<char, vector<vector<char>>>('K', { {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '.', '.', '*', '.', '.'},
                                                             {'*', '*', '*', '.', '.', '.'},
                                                             {'*', '.', '.', '*', '.', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},}));

    charTable.insert(pair<char, vector<vector<char>>>('L', { {'*', '.', '.', '.', '.', '.'},
                                                             {'*', '.', '.', '.', '.', '.'},
                                                             {'*', '.', '.', '.', '.', '.'},
                                                             {'*', '.', '.', '.', '.', '.'},
                                                             {'*', '*', '*', '*', '*', '.'},}));

    charTable.insert(pair<char, vector<vector<char>>>('M', { {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '*', '.', '*', '*', '.'},
                                                             {'*', '.', '*', '.', '*', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},}));

    charTable.insert(pair<char, vector<vector<char>>>('N', { {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '*', '.', '.', '*', '.'},
                                                             {'*', '.', '*', '.', '*', '.'},
                                                             {'*', '.', '.', '*', '*', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},}));

    charTable.insert(pair<char, vector<vector<char>>>('O', { {'.', '*', '*', '*', '.', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},
                                                             {'.', '*', '*', '*', '.', '.'},}));

    charTable.insert(pair<char, vector<vector<char>>>('P', { {'*', '*', '*', '*', '.', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '*', '*', '*', '.', '.'},
                                                             {'*', '.', '.', '.', '.', '.'},
                                                             {'*', '.', '.', '.', '.', '.'},}));

    charTable.insert(pair<char, vector<vector<char>>>('Q', { {'.', '*', '*', '*', '.', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '.', '.', '*', '*', '.'},
                                                             {'.', '*', '*', '*', '*', '.'},}));

    charTable.insert(pair<char, vector<vector<char>>>('R', { {'*', '*', '*', '*', '.', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '*', '*', '*', '.', '.'},
                                                             {'*', '.', '.', '*', '.', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},}));

    charTable.insert(pair<char, vector<vector<char>>>('S', { {'.', '*', '*', '*', '*', '.'},
                                                             {'*', '.', '.', '.', '.', '.'},
                                                             {'.', '*', '*', '*', '.', '.'},
                                                             {'.', '.', '.', '.', '*', '.'},
                                                             {'*', '*', '*', '*', '.', '.'},}));

    charTable.insert(pair<char, vector<vector<char>>>('T', { {'*', '*', '*', '*', '*', '.'},
                                                             {'*', '.', '*', '.', '*', '.'},
                                                             {'.', '.', '*', '.', '.', '.'},
                                                             {'.', '.', '*', '.', '.', '.'},
                                                             {'.', '*', '*', '*', '.', '.'},}));

    charTable.insert(pair<char, vector<vector<char>>>('U', { {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},
                                                             {'.', '*', '*', '*', '.', '.'},}));

    charTable.insert(pair<char, vector<vector<char>>>('V', { {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},
                                                             {'.', '*', '.', '*', '.', '.'},
                                                             {'.', '*', '.', '*', '.', '.'},
                                                             {'.', '.', '*', '.', '.', '.'},}));

    charTable.insert(pair<char, vector<vector<char>>>('W', { {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},
                                                             {'*', '.', '*', '.', '*', '.'},
                                                             {'*', '*', '.', '*', '*', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},}));

    charTable.insert(pair<char, vector<vector<char>>>('X', { {'*', '.', '.', '.', '*', '.'},
                                                             {'.', '*', '.', '*', '.', '.'},
                                                             {'.', '.', '*', '.', '.', '.'},
                                                             {'.', '*', '.', '*', '.', '.'},
                                                             {'*', '.', '.', '.', '*', '.'},}));

    charTable.insert(pair<char, vector<vector<char>>>('Y', { {'*', '.', '.', '.', '*', '.'},
                                                             {'.', '*', '.', '*', '.', '.'},
                                                             {'.', '.', '*', '.', '.', '.'},
                                                             {'.', '.', '*', '.', '.', '.'},
                                                             {'.', '.', '*', '.', '.', '.'},}));


    charTable.insert(pair<char, vector<vector<char>>>('Z', { {'*', '*', '*', '*', '*', '.'},
                                                             {'.', '.', '.', '*', '.', '.'},
                                                             {'.', '.', '*', '.', '.', '.'},
                                                             {'.', '*', '.', '.', '.', '.'},
                                                             {'*', '*', '*', '*', '*', '.'},}));

    charTable.insert(pair<char, vector<vector<char>>>('.', { {'.', '.', '.', '.', '.', '.'},
                                                                 {'.', '.', '.', '.', '.', '.'},
                                                                 {'.', '.', '.', '.', '.', '.'},
                                                                 {'.', '.', '.', '.', '.', '.'},
                                                                 {'.', '.', '.', '.', '.', '.'},}));


    vector<vector<char>> output(60, vector<char>(60, '.'));

    int isFirst=0;
    while(getline(cin, command)) {
        if(command != ".EOP") {
            char operation, buffer[2],c;

            string content = "";

            size_t first, last, mid ;
            int row, col, center;

            first = command.find_first_of('|');
            last = command.find_last_of('|');

            content = command.substr(first+1, last-first-1);

            operation = command[1];

            center = content.size() / 2;

            if( command[7] == ' ' ) {
                buffer[0] = '0';
                buffer[1] = command[6];
                row = atoi(buffer) - 1;
            } else {
                buffer[0] = command[6];
                buffer[1] = command[7];
                row = atoi(buffer) - 1;
            }

            if(operation=='P') {
              if(command[7] == ' ') {
                  if( command[9] == ' ' ) {
                    buffer[0] = '0';
                    buffer[1] = command[8];
                    col = atoi(buffer) - 1;
                  } else {
                    buffer[0] = command[8];
                    buffer[1] = command[9];
                    col = atoi(buffer) - 1;
                  }
              } else if( command[10] == ' ' ) {
                    buffer[0] = '0';
                    buffer[1] = command[9];
                    col = atoi(buffer) - 1;
                } else {
                    buffer[0] = command[9];
                    buffer[1] = command[10];
                    col = atoi(buffer) - 1;
                }
            }

            switch (operation) {
                case 'C':
                    if(command[4]=='1') {

                        output.at(row).at(30) = content[center];

                        for(int i = center-1; i>=0 ; i--) {
                            if((int)content[i]!=32)
                              output.at(row).at(30-(center-i)) = content[i];
                        }

                        for(int i = center+1; i<content.size(); i++) {
                            if((int)content[i]!=32)
                              output.at(row).at(30+(i-center)) = content[i];
                        }
                    }

                if(command[4]=='5') {

                    int realLength = 0 , marginLeft =0, startColInCharTable;

                    realLength = content.size() * 6;

                    if(content.size()>=10) {
                        marginLeft = (realLength - 60) / 2;
                        for(int coll = 0; coll < 60; coll++ ) {
                            startColInCharTable = marginLeft % 6;
                            c = content[marginLeft/6];
                            if(c ==' ') c='.';
                            for(int roww = row; roww < row+5; roww++) {
                              if(roww>=60) break;
                              if(charTable.find(c)->second[roww-row][startColInCharTable]!='.')
                                output.at(roww).at(coll) = charTable.find(c)->second[roww-row][startColInCharTable];
                            }
                            marginLeft++;
                        }
                    } else {
                        marginLeft = (60 - realLength) / 2;
                        for(int i=0; i<content.size(); i++) {
                            c = content[i];
                            if(c ==' ') c='.';
                            for( int y=row ; y< row+5  ; y++ ) {
                              if(y>=60) break;
                              for( int x= marginLeft ; x < marginLeft + 6; x++ ) {
                                if(charTable.find(c)->second[y-row][x-marginLeft]!='.')
                                  output.at(y).at(x) = charTable.find(c)->second[y-row][x-marginLeft];
                              }
                            }
                            marginLeft+=6;
                        }
                    }
                }
                break;
                case 'P':

                    if(command[4]=='1') {

                        int contentLeng= content.size();

                        for (int x = col; x < col+content.size(); x++) {
                            if(x<60) {
                                if((int)content[x-col]!=32)
                                  output.at(row).at(x) = content[x - col];
                            } else
                                break;
                        }

                    }


                    if(command[4]=='5') {
                      int circle=0;
                      for( int y=row ; y< row+5 ; y++ ) {
                          if(y>=60) break;
                          for( int x= col ; x < content.size()*6 + col ; x++ ) {
                              if(x>=60) break;
                              else {
                                    c = content[(x-col)/6];
                                    if(c==' ') c='.';
                                    if(circle>=6) circle=0;

                                    if(charTable.find(c)->second[y-row][circle]!='.')
                                      output.at(y).at(x) = charTable.find(c)->second[y-row][circle++];
                                    else
                                        circle++;
                              }
                          }
                          circle=0;
                      }
                    }
                    break;
                case 'L':
                    if(command[4]=='1') {

                        int contentLeng= content.size(), index=0;

                        for (int x = 0; x < contentLeng; x++) {
                            if(index<contentLeng) {
                                if((int)content[x]!=32)
                                  output.at(row).at(x) = content[x];
                                index++;
                            } else
                                break;
                        }

                    }

                if(command[4]=='5') {
                    int circle=0;
                    for( int y=row ; y< row+5 ; y++ ) {
                        if(y>=60) break;
                        for( int x= 0 ; x < content.size()*6 ; x++ ) {
                            if(x>=60) break;
                            else {
                                    c = content[x/6];
                                    if(c==' ') c='.';
                                    if(circle>=6) circle=0;
                                    if(charTable.find(c)->second[y-row][circle]!='.')
                                      output.at(y).at(x) = charTable.find(c)->second[y-row][circle++];
                                    else
                                        circle++;
                            }
                        }
                        circle=0;
                    }
                }
                    break;
                case 'R':
                    if(command[4]=='1') {

                        int contentLeng= content.size(), index=0;

                        for (int x = 59; x >=0; x--) {

                            if(index<contentLeng) {
                                if((int)content[content.size()-(60-x)]!=32)
                                  output.at(row).at(x) = content[content.size()-(60-x)];
                                index++;
                            } else
                                break;
                        }
                    }

                if(command[4]=='5') {
                    int circle=5, limit=0;
                    for( int y=row ; y< row+5 ; y++ ) {
                        if(y>=60) break;
                        for( int x= 59 ; x>=0; x-- ) {
                              if(59-x == content.size()*6) break;
                              limit = content.size()-((59-x)/6)-1;
                              if(limit <0) limit = 0;
                              c = content[limit];
                              if(c==' ') c='.';
                              if(circle<0) circle=5;
                              if(charTable.find(c)->second[y-row][circle]!='.')
                                output.at(y).at(x) = charTable.find(c)->second[y-row][circle--];
                              else
                                circle--;
                        }
                        circle=5;
                    }
                }
                break;
            }
        } else {

            if(isFirst!=0) cout<< "\n";

            isFirst++;

            for( int y=0 ; y<60 ; y++ ) {
                for( int x=0 ; x<60 ; x++ ) {
                    cout << output[y][x];
                }
                cout << "\n";
            }

            cout << "\n";

            for(int i=0; i<60; i++)
                cout <<"-";

            cout << "\n" ;



            for( int y=0 ; y< 60 ; y++ ) {
              for( int x=0 ; x <60 ; x++ ) {
                  output.at(y).at(x) = '.';
              }
            }
        }
    }
    cout << "\n";
    /*********************END**************************/
//    fclose(stdin);
//    fclose(stdout);
    return 0;
}