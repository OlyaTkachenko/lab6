#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double s, t, g, x;
	cout << "Enter s, t, g:\n";
	cin >> s >> t >> g;
	x = (int) g / t ;
	cout << setw(10) << "x = " << x << endl;
}
