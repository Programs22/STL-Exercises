#include <iostream>

using namespace std;

template<class T>
void sortArray(T *array, int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(array[i]>array[j]){
                T temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}

int main()
{
    int arrayInt[5];
    double arrayDouble[5];
    for(int i=0;i<5;i++){
        cout << "Enter an element in the array" << endl;
        cin >> arrayInt[i];
    }
    for(int i=0;i<5;i++){
        cout << "Enter an element in the array" << endl;
        cin >> arrayDouble[i];
    }
    cout << "Array of integers:" << endl;
    for(int i=0;i<5;i++)
        cout << arrayInt[i] << " ";
    cout << "\nArray of floating point doubles:" << endl;
    for(int i=0;i<5;i++)
        cout << arrayDouble[i] << " ";
    cout << endl;
    sortArray(arrayInt,5);
    sortArray(arrayDouble,5);
    cout << "Array of integers:" << endl;
    for(int i=0;i<5;i++)
        cout << arrayInt[i] << " ";
    cout << "\nArray of floating point doubles:" << endl;
    for(int i=0;i<5;i++)
        cout << arrayDouble[i] << " ";
    cout << endl;
    return 0;
}
