#include <iostream>
using namespace std;

double weightOunce; //weight in ounces
double weightMetTon; //weight in metric tons
double numBoxes; //number of boxes

int main(int argc, char **argv){
  cout << "Please enter the weight of a package of breakfast cereal in ounces: " << endl;
  cin >> weightOunce; 

  weightMetTon = weightOunce *  35,273.92;
  cout << "Your package is: " << weightMetTon << " metric tons." << endl;

  numBoxes = 35,273.92 / weightOunce;
  cout << "You need: " << numBoxes << " boxes to yield one metric ton of cereal." << endl;

  return 0;
}
