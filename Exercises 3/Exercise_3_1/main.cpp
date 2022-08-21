#include <iostream>

using namespace std;

template<class T>
class Record{
private:
    T x, y, z;
public:
    Record(T X, T Y, T Z){
        x=X;
        y=Y;
        z=Z;
    }
    void print(){
        cout << "x=" << x << endl;
        cout << "y=" << y << endl;
        cout << "z=" << z << endl;
    }
    T Sum(){
        return x+y+z;
    }
};

template<class T>
bool check(Record<T> R){
    if(R.Sum()>10000)
        return false;
    return true;
}

int main()
{
    Record<int> R1(1000,2000,3000);
    Record<double> R2(2500.5,3900.5,4700);
    R1.print();
    R2.print();
    if(check(R1))
        cout << "The sum of the variables in this record meet the requirements" << endl;
    else
        cout << "The sum of the variables in this record don't meet the requirements" << endl;
    if(check(R2))
        cout << "The sum of the variables in this record meet the requirements" << endl;
    else
        cout << "The sum of the variables in this record don't meet the requirements" << endl;
    return 0;
}
