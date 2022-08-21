#include <iostream>

using namespace std;

template<class T>
class Array{
private:
    T *array;
    int size;
public:
    Array(int s=10){
        array=new T[s];
        size=s;
    }
    void putElement(int i, T element){
        array[i]=element;
    }
    T popElement(int i){
        return array[i];
    }
    ~Array(){
        delete [] array;
    }
};

int main()
{
    Array<int> A(5);
    for(int i=0;i<5;i++){
        A.putElement(i,i+1);
    }
    for(int i=0;i<5;i++){
        int element=A.popElement(i);
        cout << element << " ";
    }
    cout << endl;
    Array<double> B(7);
    double value=1.1;
    for(int i=0;i<7;i++){
        B.putElement(i,value);
        value+=1.1;
    }
    for(int i=0;i<7;i++){
        double element=B.popElement(i);
        cout << element << " ";
    }
    cout << endl;
    return 0;
}
