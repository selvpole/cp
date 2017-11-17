#include <iostream>
#include <cstdio>
#include <cmath>

#define FileIn(file) freopen("input.txt", "r", stdin)
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

int main() {
    __FastIO;
//    FileIn(input);

    string in;
    while(cin>>in && in.length()<1000) {
      int flag=0;
      for(int i=0; i<floor(in.length()/2);i++) {
          if(in[i]!=in[in.length()-1-i]) {
            flag++;
            break;
          }
      }
      cout << (flag ? "no" : "yes") << "\n";
    }
//    fclose(stdin);
    return 0;
}