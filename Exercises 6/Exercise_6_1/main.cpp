#include <iostream>
#include <map>

using namespace std;

class Payment{
private:
    string Name;
    int payment;
public:
    Payment(string n, int p){
        Name=n;
        payment=p;
    }
    void print()const{
        cout << "Name of person making the payment: " << Name << endl;
        cout << "Amount: " << payment << endl;
    }
};

typedef multimap<int,Payment,std::less<int>> mMap;

int main()
{
    mMap System;
    int choice;
    cout << "Enter a choice from the menu" << endl;
    cout << "1 - Enter a payment in the system" << endl;
    cout << "2 - Print the payments in the system of a given person" << endl;
    cout << "3 - End of program" << endl;
    cin >> choice;
    while(choice>0&&choice<3){
        if(choice==1){
            string n;
            int p;
            cout << "Enter the name of the person making a payment" << endl;
            cin >> n;
            cout << "Enter the amount of the payment" << endl;
            cin >> p;
            Payment P(n,p);
            int code;
            cout << "Enter the code for the payment" << endl;
            cin >> code;
            typedef pair<int,Payment> payment;
            System.insert(payment(code,P));
        }
        else{
            int code;
            cout << "Enter the code of the payment you want to see the information about" << endl;
            cin >> code;
            mMap::const_iterator Iterator=System.begin();
            while(Iterator!=System.end()){
                if(Iterator->first==code)
                    Iterator->second.print();
                Iterator++;
            }
        }
        cout << "Enter a choice from the menu" << endl;
        cout << "1 - Enter a payment in the system" << endl;
        cout << "2 - Print the payments in the system of a given person" << endl;
        cout << "3 - End of program" << endl;
        cin >> choice;
    }
    cout << "End of program" << endl;
    return 0;
}
