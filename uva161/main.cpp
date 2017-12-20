#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <sstream>

#define FileIn(file) freopen("input.txt", "r", stdin)
#define FileOut(file) freopen("output.txt", "w", stdout)
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

typedef multimap<int, pair<int,int>> trafficLight;

int main() {
    __FastIO;
//    FileIn(input);
//    FileOut(output);
    /*********************START************************/
    int input, start, end, time , min, count=0, sstart, eend, theMinEndTime;
    stringstream s,m,h;
    // traffic lights
    trafficLight tls;
    while(cin>>input) {

        if(input==0)  {

            theMinEndTime = tls.begin()->second.second;

            for(auto it = tls.begin(); it!=tls.end();it++)
                if(it->second.second < theMinEndTime)
                    theMinEndTime = it->second.second;

            time = theMinEndTime+1;

            while(time<6*60*60) {

              for(auto i=tls.begin(); i!=tls.end(); i++) {

                  /**
                    * 先判斷time 是否在此紅綠燈的區間，若是的話 更新此紅綠燈下次綠燈的時間，並且count++
                    * 若time不在此紅綠燈的區間，則沒事發生
                   */

                  // 綠燈的起始時間
                  sstart = i->second.first;

                  // 綠燈的結束時間
                  eend = i-> second.second;

                  if(time >= sstart && eend >= time )
                      count++;
                  else if( time >= eend ) {
                      // 若動態時間已經大於此區間的最大值，則更新此紅綠燈下一個可能綠燈的區間
                      i->second.first = i->second.first + (i->first)*2;
                      i->second.second = i->second.second + (i->first)*2;
                  }

              }

              /*
               * 若count == tls.size() 表示，在這個Time時刻，全部都是綠燈，則跳出while這個環圈
               */
              if(count==tls.size())break;

              count = 0;

              time++;
            }

            // 將time轉成正確的時間輸出格式

            int hour, minute, sec;
            string hh,mm,ss;

            sec = time%60;
            minute = (time/60)%60;
            hour = time/(60*60);

            if ( hour >= 5) {
                if(hour==5 && minute==0 && sec==0 ) cout << "05:00:00" << "\n";
                else cout << "Signals fail to synchronise in 5 hours" << "\n";
            } else {
                m << minute;
                s << sec;
                h << hour;

                m >> mm; s >> ss; h >> hh;

                if(minute>=0 && minute <=9)
                    mm = "0"+ mm;
                else
                    mm = mm;

                if(hour>=0 && hour <=9)
                    hh = "0"+ hh;
                else
                    hh = hh;

                if(sec>=0 && sec <=9)
                    ss = "0"+ ss;
                else
                    ss = ss;

                cout << hh << ":" << mm << ":" << ss << "\n";
            }

            if((cin >> ws).peek()== char_traits<char>::to_int_type('0')) {
                cin >> input >> input >> input;
                break;
            }

            // 初始化
            tls.clear();
            s.str("");s.clear();
            m.str("");m.clear();
            h.str("");h.clear();

            min=0;
            count=0;
            continue;
        } else {
            start = 0;
            end = input -1 -5;
            tls.insert(make_pair(input, make_pair(start, end)));
        }

    }
    /*********************END**************************/
//    fclose(stdin);
//    fclose(stdout);
    return 0;
}
