#include <iostream>
using namespace std;
int main() {
  int y, a, b, c, d, e, f, easter;
  cout << "Enter a year: ";
  cin >> y;
  a = y%19;
  b = y%4;
  c = y%7;
  d = ((a * 19)+24)%30;
  e = (2*b + 4*c + 6*d + 5)%7;
  f = d + e;
  if (f < 10){
    easter = d + e + 22;
    cout << "March " << easter;
  }else {
    easter = d + e - 9;
    cout << "April " << easter;
  }
}