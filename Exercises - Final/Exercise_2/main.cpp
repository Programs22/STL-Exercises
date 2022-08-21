#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include <numeric>

using namespace std;

class Inventory{
private:
    int ID;
    int amount;
    double price;
public:
    Inventory(int id=0, int a=0, double p=0.0){
        ID=id;
        amount=a;
        price=p;
    }
    friend double operator+(double sum, Inventory &I){
        sum+=I.price*I.amount;
        return sum;
    }
    void print()const{
        cout << "ID of article: " << ID << endl;
        cout << "Number of articles in the inventory: " << amount << endl;
        cout << "Price of the article: " << price << endl;
    }
    int getAmount()const{
        return amount;
    }
};

int main()
{
    ofstream out("Inventory.dat",ios::out);
    try{
        if(!out)
            throw true;
    }catch(bool){
        cout << "The file didn't open properly" << endl;
        exit(-1);
    }
    int ID, amount;
    double price;
    cout << "Enter the ID, amount and price of the article" << endl;
    while(cin >> ID >> amount >> price){
        out << ID << " " << amount << " " << " " << price << endl;
        cout << "Enter the ID, amount and price of the article, enter EOF to stop" << endl;
    }
    out.close();
    vector<Inventory> V;
    ifstream in("Inventory.dat",ios::in);
    try{
        if(!in)
            throw true;
    }catch(bool){
        cout << "The file didn't open properly" << endl;
        exit(-1);
    }
    while(in >> ID >> amount >> price){
        V.push_back(Inventory(ID,amount,price));
    }
    double totalPrice=accumulate(V.begin(),V.end(),0.0);
    cout << "The total price of all the articles is: " << totalPrice << endl;
    vector<Inventory>::const_iterator Iterator=V.begin();
    cout << "Information about all the articles that have an amount smaller than 10 in the inventory" << endl;
    while(Iterator!=V.end()){
        if(Iterator->getAmount()<10)
            Iterator->print();
        Iterator++;
    }
    in.close();
    return 0;
}
