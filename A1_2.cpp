#include <iostream>
using namespace std;

int maxNum; //maximum capacity
int currNum; //current capacity
int numSub; //amount to subtract if over populated
int numAdd; //amount available to add if under poulated

int main(int argc, char **argv){
  cout << "Please enter the maximum capacity of the room: " << endl;
  cin >> maxNum;

  cout << "Please enter the current number of individuals in the room: " << endl;
  cin >> currNum;


  if(currNum <= maxNum){ //if current capacity is under maximum
    cout << "It is legal to hold the meeting." << endl;
    numAdd = maxNum - currNum;
    cout << "You can add " << numAdd << " more people to the room." << endl;
  } else{ //if current capacity is over maximum
    cout << "There are too many people in the room." << endl;
    numSub = currNum - maxNum;
    cout << "Subtract " << numSub << " people to hold the meeting in the room." << endl;
  }

  return 0;
}
