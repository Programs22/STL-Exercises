#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    int n, m;
    cout << "Enter a number" << endl;
    cin >> n;
    cout << "Enter a value for the width of the rows" << endl;
    cin >> m;
    for(int i=1;i<=n;i++){
        cout << left << setw(13) << i << setw(m) << i*i << setw(m) << setprecision(4) << sqrt(i) << setw(m) << setprecision(4) << pow(i,(float)1/3) << endl;
    }
    return 0;
}
