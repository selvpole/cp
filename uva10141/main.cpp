#include <iostream>
#include <cstdio>
#include <string>
#include <tuple>

#define FileIn(file) freopen("input.txt", "r", stdin)

using namespace std;

int main() {
    FileIn(input);

    int numberOfProposal, totalRequirement, c=1;
    string nameOfProposal, req;

    while(scanf("%d %d", &totalRequirement, &numberOfProposal)==2) {

        if(totalRequirement == 0) {
          break;
        } else if(c>1) {
          cout << '\n';
        }

        /* dispose of terminator */
        getchar();

        // compliance, price, name of proposal
        tuple<float, float, string> selectedProposal;
        float price, numberOfRequirement, complianceRate;

        for(int i=0; i<totalRequirement; i++)
          getline(cin, req);

        while(numberOfProposal) {

          getline(cin, nameOfProposal);
          scanf("%f %f", &price, &numberOfRequirement);

          /* dispose of terminator */
          getchar();

          complianceRate = numberOfRequirement / totalRequirement;

          if(complianceRate > get<0>(selectedProposal)) {
            get<0>(selectedProposal) = complianceRate;
            get<1>(selectedProposal) = price;
            get<2>(selectedProposal) = nameOfProposal;
          } else if (complianceRate == get<0>(selectedProposal) && price < get<1>(selectedProposal)) {
            get<0>(selectedProposal) = complianceRate;
            get<1>(selectedProposal) = price;
            get<2>(selectedProposal) = nameOfProposal;
          }

          numberOfProposal--;

          for(int i=0; i<numberOfRequirement; i++)
            getline(cin, req);

        }
        cout << "RFP #" << c++ << '\n';
        cout << get<2>(selectedProposal) << '\n';
    }

    fclose(stdin);
    return 0;
}