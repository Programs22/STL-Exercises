#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Person{
private:
    string Name;
    string Phone;
public:
    Person(string n, string p){
        Name=n;
        Phone=p;
    }
    void print(){
        cout << "Name: " << Name << endl;
        cout << "Telephone number: " << Phone << endl;
    }
    friend bool operator<(Person &P1, Person &P2){
        if(P1.Name.compare(P2.Name)<0)
            return true;
        else
            return false;
    }
};

int main()
{
    vector<Person> Directory;
    int n; // How many people in the directory
    cout << "Enter how many people will be in the directory" << endl;
    cin >> n;
    for(int i=0;i<n;i++){
        string n, p;
        cout << "Enter the name of the person and the telephone number" << endl;
        cin >> n >> p;
        Person P(n,p);
        Directory.push_back(P);
    }
    for(int i=0;i<n;i++)
        Directory[i].print();
    sort(Directory.begin(),Directory.end());
    for(int i=0;i<n;i++)
        Directory[i].print();
    return 0;
}
