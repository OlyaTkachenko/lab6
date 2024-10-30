#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
   	 double y, x, x1, x2, h;
   	 cout << "Enter [x1; x2] and a step h:\n";
   	 cin >> x1 >> x2 >> h;
   	 cout << "*************DO_WHILE************\n";
   	 x = x1;
    	    do {
     	       y = ((pow(x, 8)) + 5 * (pow(x, 2)) - 5);
      	      cout << setw(20) <<left << x << setw(10) << right<<y << endl;
      	      x = x + 0.2;
            } while (x <= 3 + h / 2);
        cout << "*************WHILE************\n";
            x = x1;
            while (x <= 3 + h / 2) {
                y = ((pow(x, 8)) + 5 * (pow(x, 2)) - 5);
                cout << setw(20) << left << x << setw(10) << right << y << endl;
                x = x + 0.2;
            } 
