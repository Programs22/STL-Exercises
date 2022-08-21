#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main()
{
    deque<int> D;
    D.push_front(1);
    D.push_back(2);
    D.push_back(3);
    D.push_back(4);
    D.push_back(5);
    cout << "Print deque:" << endl;
    for(int i=0;i<(int)D.size();i++)
        cout << D.at(i) << " ";
    cout << endl;
    vector<int> V;
    V.push_back(D.at(4));
    V.push_back(D.at(3));
    V.push_back(D.at(2));
    V.push_back(D.at(1));
    V.push_back(D.at(0));
    cout << "Print vector:" << endl;
    for(int i=0;i<(int)V.size();i++)
        cout << V[i] << " ";
    cout << endl;
    return 0;
}
