#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
double circle(doble x, double h);
int main()
{
   	 double y, x, x1, x2, h;
   	 cout << "Enter [x1; x2] and a step h:\n";
   	 cin >> x1 >> x2 >> h;
   	 cout << "*************DO_WHILE************\n";
   	 x = x1;
     double m = circle(x, h);
     cout << m << endl;
         }
     }
     double circle( doble x, double h) {
         do {
             double y = ((pow(x, 8)) + 5 * (pow(x, 2)) - 5);
             cout << setw(20) << left << x << setw(10) << right << y << endl;
             double x = x + 0.2;
         } while (x <= 3 + h / 2);
         while (x <= 3 + h / 2) {
             y = ((pow(x, 8)) + 5 * (pow(x, 2)) - 5);
             cout << setw(20) << left << x << setw(10) << right << y << endl;
             double x = x + 0.2;
         }