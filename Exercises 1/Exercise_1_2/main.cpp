#include <iostream>

using namespace std;

template<class T>
void printArray(T *array, int size){
    for(int i=0;i<size;i++)
        cout << array[i] << " ";
    cout << endl;
}

template<class T>
int printArray(T *array, int size, int lowSub, int highSub){
    if(lowSub>=size||highSub>=size)
        return 0;
    else{
        int count=0;
        for(int i=lowSub;i<=highSub;i++){
            cout << array[i] << " ";
            count++;
        }
        cout << endl;
        return count;
    }
}

int main()
{
    const int aCount=5, bCount=7, cCount=6;
    int a[aCount]={1,2,3,4,5};
    double b[bCount]={1.1,2.2,3.3,4.4,5.5,6.6,7.7};
    char c[cCount]="HELLO";
    printArray(a,aCount);
    printArray(b,bCount);
    printArray(c,cCount);
    int check=printArray(a,aCount,2,4);
    cout << check << " elements were printed" << endl;
    check=printArray(b,bCount,3,9);
    cout << check << " elements were printed" << endl;
    check=printArray(c,cCount,1,3);
    cout << check << " elements were printed" << endl;
    return 0;
}
