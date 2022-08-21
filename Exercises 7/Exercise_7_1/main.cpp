#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

bool even(int n){
    return n%2==0;
}

bool smallerThan2000(int n){
    return n<2000;
}

bool between2000and4000(int n){
    return n>=2000&&n<4000;
}

bool between4000and6000(int n){
    return n>=4000&&n<6000;
}

bool between6000and8000(int n){
    return n>=6000&&n<8000;
}

bool between8000and10000(int n){
    return n>=8000&&n<10000;
}

int main()
{
    srand(time(NULL));
    int array[10000];
    for(int i=0;i<10000;i++){
        array[i]=(rand()%10000);
    }
    vector<int> V(array,array+10000);
    int result=count_if(V.begin(),V.end(),even);
    cout << "There are " << result << " even numbers in the vector" << endl;
    result=count_if(V.begin(),V.end(),smallerThan2000);
    cout << "There are " << result << " numbers smaller than 2000" << endl;
    result=count_if(V.begin(),V.end(),between2000and4000);
    cout << "There are " << result << " numbers between 2000 and 4000" << endl;
    result=count_if(V.begin(),V.end(),between4000and6000);
    cout << "There are " << result << " numbers between 4000 and 6000" << endl;
    result=count_if(V.begin(),V.end(),between6000and8000);
    cout << "There are " << result << " numbers between 6000 and 8000" << endl;
    result=count_if(V.begin(),V.end(),between8000and10000);
    cout << "There are " << result << " numbers between 8000 and 10000" << endl;
    int sum=accumulate(V.begin(),V.end(),0);
    float average=(float)sum/10000;
    cout << "The average value of all the elements is: " << average << endl;
    return 0;
}
