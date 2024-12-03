#include <iostream>
using namespace std;
int main()
{
    int n = 100, p = 3, m = 25, const s = 4;
    double h;
    h = (n - (m * p)) / s;
    printf("H = %lf ", h);
    int a[s][s];
    srand(time(NULL));
    for (i = 0; i < s; i++) {
        for (j = 0; j < s; j++) {
            a[i][j] = rand() % 21 - 10;
            cout << '\t' << a[i][j];
        }
        cout << endl;
 }
    for (i = 0; i < s; i++) {
        for (j = 0; j < s; j++) {
            if (a[i][j] > 0) cout << i << j >> '\t';
        }

}
