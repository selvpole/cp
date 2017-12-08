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

    // 分析

    // 機率較低的情況
    // 1. 全倒 2.沒打中半球 3. 如果在第10局得到strike 則可以再補兩球 如果得到spare，則可以再補上一球

    // 虛擬code
     /* cin >> string
     * string 拆成 char 分別處理
     * 如果進來的這個char本身是
     * 1. 數字 : 則接下來吃到的char 會有2種狀況
     *    a. 還是數字 則把數字加上前一個放到sum裡面
     *    b. / (spare) 則取下一個字元加到sum裡面 若此字元是數字，則就是加此數字，若是星號，則+10
     * 2. 星號 : 則取下兩個數字，加總結案
     * 處理完後直接 erase掉 當下這個字元
     */

    string rawInput, input;

    while(getline(cin, rawInput) && rawInput!="Game Over") {
        int sum = 0, round=0;

        input= "";

        for(int i=0; i<rawInput.size(); i++) {
            if((int)rawInput[i]!=32)
                input+=rawInput[i];
        }

        for(int i=0; input.size()!=0;) {

            if((input[i]>=48 && input[i]<=57)) {

                if(input[i+1]>=48 && input[i+1]<=57) {
                    sum = sum + (int)input[i] + (int)input[i+1] - 96;
                } else {
                    if(input[i+2]=='X') {
                        sum = sum  + 10 + 10;
                    } else {
                        sum = sum  + 10 + (int)input[i+2] -48 ;
                    }
                }

                input.erase(0, 2);
                round++;

            } else {

                sum+=10;
                round++;

                if(input[i+1]=='X') {
                    sum+=10;
                    if(input[i+2]=='X') {
                        sum+=10;
                    } else {
                        sum = sum + (int)input[i+2] - 48;
                    }
                } else {
                    if(input[i+2]=='/')
                      sum = sum + 10;
                    else
                      sum = sum + (int)input[i+1] + (int)input[i+2] - 96;
                }

                input.erase(0, 1);
            }

            if(round==10) break;

        }
        cout << sum <<"\n";
    }


    /*********************END**************************/
//    fclose(stdin);
    //fclose(stdout);
    return 0;
}

