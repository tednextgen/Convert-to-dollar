#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double dollars;
   int quarters;
   int dimes;
   int nickels;
   cin >> nickels;
   cin >> dimes;
   cin >> quarters;
   dollars = (nickels * 0.05)+(dimes * 0.10)+(quarters * 0.25);
   cout << "Amount: $" << fixed << setprecision(2) << dollars << endl;
   
   return 0;
}
