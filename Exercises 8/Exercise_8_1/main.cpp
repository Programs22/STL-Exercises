#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <string>

#define point_value 1000

using namespace std;

class Employee{
private:
    string Name;
    int points;
public:
    Employee(string n="", int p=0){
        Name=n;
        points=p;
    }
    void print()const{
        cout << "Name of employee: " << Name << endl;
        cout << "Number of points: " << points << endl;
    }
    int getWage(){
        return points*point_value;
    }
    friend bool operator<(Employee &E1, Employee &E2){
        if(E1.points<E2.points)
            return true;
        else
            return false;
    }
    friend int operator+(int sum, Employee E){
        sum+=E.getWage();
        return sum;
    }
};

int main()
{
    Employee E[5]={Employee("Aleksandar",20),Employee("Lora",25),Employee("Marija",15),Employee("Petar",18),Employee("Elena",10)};
    vector<Employee> V(E,E+5);
    sort(V.begin(),V.end());
    vector<Employee>::const_iterator Iterator=V.begin();
    int sum=accumulate(V.begin(),V.end(),0);
    while(Iterator!=V.end()){
        Iterator->print();
        Iterator++;
    }
    cout << "The total monthly wage is: " << sum << endl;
    return 0;
}
