#include <bits/stdc++.h>

#define FileIn(file) freopen("input.txt", "r", stdin)
#define FileOut(file) freopen("output.txt", "w", stdout)
#define mp make_pair
#define ll long long
#define PII pair<int, int>
#define PLL pair<ll, ll>
#define Rep(x, a, b) for(int x=a; x<=b; x++)
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

int main() {
    __FastIO;
//    FileIn(input);
    //FileOut(output);
    /*********************START************************/
    int c=0;
    ll s=0,s1=0,s2=0,num,flag=0;

    cin >> c;

    Rep(i, 0, 3*c-3) {
        cin >> num;
        if(i<=c-1) s+=num;
        if(i>=c&&i<(2*c-1)) s1+=num;
        if(i>=(2*c-1)&&i<3*c-3) s2+=num;
    }

    cout << s-s1 << "\n" << s1-s2;


    /*********************END**************************/
//    fclose(stdin);
    //fclose(stdout);
    return 0;
}