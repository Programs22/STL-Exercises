#include <iostream>
#include <cstdlib>
#include <exception>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL));
    vector<int> V1((rand()%1000)+1);
    vector<int> V2((rand()%1000)+1);
    for(int i=0;i<(int)V2.size();i++)
        V2[i]=i;
    cout << "Vector 1 size:" << V1.size() << endl;
    cout << "Vector 2 size:" << V2.size() << endl;
    try{
        if(V1.size()<V2.size())
            throw -1;
        copy(V2.begin(),V2.end(),V1.begin());
        vector<int>::const_iterator Iterator=V1.begin();
        while(Iterator!=V1.end()){
            cout << *Iterator << " ";
            Iterator++;
        }
        cout << endl;
    }catch (int){
        cout << "Vector sizes are incompatible" << endl;
    }
    return 0;
}
