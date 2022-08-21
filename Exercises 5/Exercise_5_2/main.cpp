#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main()
{
    string array1[]={"aleksandar.cvetanov@gmail.com","lora.zaharievska@gmail.com"};
    string array2[]={"elena.cvetanova@gmail.com","aleksandar.cvetanov@gmail.com"};
    string array3[]={"marija.zaharievska@gmail.com","lora.zaharievska@gmail.com"};
    list<string> L1;
    list<string> L2;
    list<string> L3;
    L1.insert(L1.begin(),array1,array1+2);
    L2.insert(L2.begin(),array2,array2+2);
    L3.insert(L3.begin(),array3,array3+2);
    L1.sort();
    L2.sort();
    L3.sort();
    L1.merge(L2);
    L1.merge(L3);
    typename std::list<string>::const_iterator Iterator;
    Iterator=L1.begin();
    cout << "The list before function unique" << endl;
    while(Iterator!=L1.end()){
        cout << *Iterator << endl;
        Iterator++;
    }
    L1.unique();
    Iterator=L1.begin();
    cout << "The list after function unique" << endl;
    while(Iterator!=L1.end()){
        cout << *Iterator << endl;
        Iterator++;
    }
    return 0;
}
