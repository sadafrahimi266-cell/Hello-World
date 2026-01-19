#include <iostream>
using namespace std;

int main() {

cout << "welcome to the Amusement Park Ride Eligibility Checker!" << endl; 
  
int age;
  int height;

  cout <<"Please enter your age: ";
  cin >> age;
  
  cout <<"please enter your height (in cm) : ";
  cin >> height;
 if (age >= 13 && height >= 150) {
    cout << "you are eligible to ride! Have fun!" << endl;
  } else {
    cout << "sorry, you are not eligible to ride." << endl;
  }
  return 0;
}
