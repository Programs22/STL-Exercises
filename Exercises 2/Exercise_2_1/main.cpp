#include <iostream>

using namespace std;

template<class T>
T function(T *array, int start, int finish, T sum=T()){
    sum=array[start]+array[finish];
    return sum;
}

int main()
{
    int array[]={1,2,3,4,5};
    int sum=function(array,1,3);
    cout << "The sum of the second and fourth element in the array is: " << sum << endl;
    return 0;
}
