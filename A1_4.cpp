#include <iostream>
using namespace std;

double costOfItem; 
int numYears;
double inflationPercent;
double inflation;

main(int argc, char **argv){
  cout << "Please enter the cost of the item: " << endl;
  cin >> costOfItem;

  cout << "Please enter the number of years from now the item will be purchased: " << endl;
  cin >> numYears;

  cout << "Please enter the rate of inflation as a percent: " << endl;
  cin >> inflationPercent;
  inflation = inflationPercent / 100;

  for(int i = 0; i < numYears; ++i){
    costOfItem = costOfItem * (inflation + 1);
  }

  cout << "The cost of the item will be: " << costOfItem << endl;

  return 0;
}
