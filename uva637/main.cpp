#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <cctype>
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
    double pages;

    while(cin >> pages && pages!=0) {

        double max = 0;
        double sheets = 0;
        double diff=0;
        string direction="";

        if(pages <= 2) {
            if(pages==1) {
                sheets=0.5;
                max = 100;
            }
            else {
                sheets=1;
                max = 100;
            }
        } else {
          sheets = ceil( pages / 4.0);
          max = 4*sheets + 1;
        }

        cout << "Printing order for "<<pages<<" pages:"<<"\n";

        for(float i=0; i < sheets*2 ; i++ ) {

            direction = ((int)i%2) ? "back " : "front";

            if(((int)i%2)==0) {
                if((max-(i+1))<=pages) {
                    diff = max-(i+1);
                    cout << "Sheet " << (floor(i/2)+1) << ", "<< direction <<": " << diff  << ", "<< i+1 << "\n";
                } else {
                    cout << "Sheet " << (floor(i/2)+1) << ", "<< direction <<": " << "Blank"  << ", "<< i+1 << "\n";
                }
            } else {
                if((max-(i+1))<=pages) {
                    diff = max-(i+1);
                    cout << "Sheet " << (floor(i/2)+1) << ", "<< direction <<": " << i+1  << ", "<< diff << "\n";
                } else {
                    cout << "Sheet " << (floor(i/2)+1) << ", "<< direction <<": " << i+1  << ", "<< "Blank" << "\n";
                }
            }
        }
    }
    /*********************END**************************/
//    fclose(stdin);
//    fclose(stdout);
    return 0;
}