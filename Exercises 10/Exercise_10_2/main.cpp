#include <iostream>
#include <stdexcept>

using namespace std;

class Garage{
private:
    string NameAuto; // Name of the automobile
    bool problemMotor;
public:
    Garage(string n, bool p){
        NameAuto=n;
        if(p==true)
            throw true;
        problemMotor=p;
    }
    void print(){
        cout << "Name of the automobile: " << NameAuto << endl;
        if(!problemMotor)
            cout << "The automobile is drivable" << endl;
    }
};

int main()
{
    int count=0;
    try{
        Garage G1("Fiat Punto",false);
        count++;
        G1.print();
        Garage G2("Honda Civic",false);
        count++;
        G2.print();
        Garage G3("Peugeot 207",true);
        G3.print();
        Garage G4("Ford Fiesta",false);
        count++;
        G4.print();
    }catch(bool){
        cout << "Problem with the motor, automobile is not drivable" << endl;
    }
    cout << "There were " << count << " cars found that are drivable before finding the first car with a problem" << endl;
    return 0;
}
