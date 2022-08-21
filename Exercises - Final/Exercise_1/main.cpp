#include <iostream>
#include <cstring>

using namespace std;

template<class T>
class Array{
public:
    T *array;
    int n;
    Array(int N){
        n=N;
        array=new T[N];
    }
    void enterElements(){
        for(int i=0;i<n;i++){
            cout << "Enter an element in the array" << endl;
            cin >> array[i];
        }
    }
};

template<class T>
T max(Array<T> A){
    T max=A.array[0];
    for(int i=1;i<A.n;i++){
        if(max<A.array[i])
            max=A.array[i];
    }
    return max;
}

string max(Array<string> A){
    string max=A.array[0];
    for(int i=1;i<A.n;i++){
        if(max.compare(A.array[i])<0)
            max=A.array[i];
    }
    return max;
}

int main()
{
    Array<int> Int(5);
    Array<char> Char(5);
    Array<string> String(5);
    cout << "Enter the array of integers" << endl;
    Int.enterElements();
    cout << "Enter the array of characters" << endl;
    Char.enterElements();
    cout << "Enter the array of strings" << endl;
    String.enterElements();
    cout << "The maximum element of the array of integers is: " << max(Int) << endl;
    cout << "The maximum element of the array of characters is: " << max(Char) << endl;
    cout << "The maximum element of the array of strings is: " << max(String) << endl;
    return 0;
}
