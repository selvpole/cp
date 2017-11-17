#include <iostream>
#include <cstdio>

#define FileIn(file) freopen("input.txt", "r", stdin)
#define __FastIO ios_base::sync_with_stdio(false); cin.tie(0)

using namespace std;

int main() {
    __FastIO;
//    FileIn(input);

    int day;
    float initialHeight, DistanceClimbed, HeightAfterClimbing, HeightAfterSliding;
    float HeightOfWell, DistanceSliding, FatigueFactor, climbUp;
    while(scanf("%f %f %f %f", &HeightOfWell, &DistanceClimbed, &DistanceSliding, &FatigueFactor)==4, HeightOfWell!=0) {
      day=0, initialHeight=0, HeightAfterClimbing=0, HeightAfterSliding=0;
      while(HeightAfterClimbing <= HeightOfWell && HeightAfterSliding >=0) {
        day++;
        climbUp = DistanceClimbed*(1-(day-1)*FatigueFactor/100);
        if(climbUp<=0) {
          climbUp = 0;
        }
        HeightAfterClimbing = initialHeight + climbUp;
        HeightAfterSliding = HeightAfterClimbing - DistanceSliding;
        initialHeight = HeightAfterSliding;
      }
      if(HeightAfterClimbing>=HeightOfWell) {
        printf("success on day %d\n", day);
      } else if(HeightAfterSliding<=0) {
        printf("failure on day %d\n", day);
      }
    }
//    fclose(stdin);
    return 0;
}
