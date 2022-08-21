#include <iostream>
#include <vector>

using namespace std;

template<class T>
bool palindrome(const std::vector<T> v){
    typename std::vector<T>::const_iterator Iterator;
    typename std::vector<T>::const_iterator Reverse;
    Iterator=v.begin();
    Reverse=v.end();
    Reverse--;
    while(Iterator!=Reverse){
        if(*Iterator!=*Reverse)
            return false;
        Iterator++;
        Reverse--;
    }
    return true;
}

int main()
{
    int array[5]={1,2,3,2,1};
    vector<int> V1(array,array+5);
    cout << "Print the vector:" << endl;
    for(int i=0;i<(int)V1.size();i++)
        cout << V1[i] << " ";
    cout << endl;
    if(palindrome(V1))
        cout << "The vector's elements are a palindrome" << endl;
    else
        cout << "The vector's elements are not a palindrome" << endl;
    string s="deified";
    vector<char> V2;
    for(int i=0;i<(int)s.size();i++)
        V2.push_back(s[i]);
    cout << "Print the vector:" << endl;
    for(int i=0;i<(int)V2.size();i++)
        cout << V2[i] << " ";
    cout << endl;
    if(palindrome(V2))
        cout << "The vector's elements are a palindrome" << endl;
    else
        cout << "The vector's elements are not a palindrome" << endl;
    return 0;
}
