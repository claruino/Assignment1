#include <iostream>
using namespace std;

int maxRegWorkHours; //regular work hours
int numHoursWorked; //true work hours
double grossPay; //pay before taxes
double pay; //true pay
double overtimeRate = 16*1.5; //overtime rate
double socSecTax; //social security tax
double fedIncTax; //federal income tax
double stateIncTax; //state income tax
double medIns; //medical insurance deduction
double totalDed; //total deduction from taxes

int main(int argc, char **argv){
  cout << "Please enter your normal weekly work hours: " << endl;
  cin >> maxRegWorkHours;

  cout << "Please enter the number of hours you worked in a week: " << endl;
  cin >> numHoursWorked;

  if(numHoursWorked <= maxRegWorkHours){
    grossPay = 16 * numHoursWorked;
  } else {
    grossPay = (16 * maxRegWorkHours) + ((numHoursWorked - maxRegWorkHours)*overtimeRate);
  }

  socSecTax = grossPay * 0.06;
  fedIncTax = grossPay * 0.15;
  stateIncTax = grossPay * 0.05;
  medIns = 10.0;
  totalDed = socSecTax + fedIncTax + stateIncTax + medIns;
  pay = grossPay - totalDed;

  cout << "Your gross pay is: " << grossPay << endl;
  cout << "Your social security tax is: " << socSecTax << endl;
  cout << "Your federal income tax is: " << fedIncTax << endl;
  cout << "Your state income tax is: " << stateIncTax << endl;
  cout << "Your medical insurance deduction is: " << medIns << endl;
  cout << "Your take home pay is: " << pay << endl;

  return 0;
}
