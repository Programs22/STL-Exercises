#include <iostream>
#include <cstring>

using namespace std;

template<class T>
class Person{
private:
    char *NameSurname;
    char *IDnumber;
    int age;
    char *address;
    T code;
public:
    Person(char *n=(char *)"", char *id=(char *)"", int a=0, char *add=(char *)"", T c=NULL){
        NameSurname=new char[strlen(n)];
        strcpy(NameSurname,n);
        IDnumber=new char[strlen(id)];
        strcpy(IDnumber,id);
        age=a;
        address=new char[strlen(add)];
        strcpy(address,add);
        code=c;
    }
    void print(){
        cout << "Name and surname: " << NameSurname << endl;
        cout << "ID number and address: " << IDnumber << " " << address << endl;
        cout << "Age: " << age << endl;
        cout << "Code: " << code << endl;
    }
};

template<class T>
void printArray(T *array, int size){
    for(int i=0;i<size;i++)
        array[i].print();
}

int main()
{
    Person<int> Employees[5];
    Person<char> Clients[5];
    int choice;
    cout << "Enter a choice from the menu" << endl;
    cout << "1 - Enter information about the employee" << endl;
    cout << "2 - Enter information about the client" << endl;
    cout << "3 - Print infromation about the employees" << endl;
    cout << "4 - Print information about the clients" << endl;
    cout << "5 - End of program" << endl;
    cin >> choice;
    int e=0, c=0;
    while(choice>=1&&choice<=4){
        switch(choice){
        case 1:{
            char n[40], add[20], id[10];
            int age, code;
            cin.ignore();
            cout << "Enter the name and surname of the employee" << endl;
            gets(n);
            cout << "Enter the address of the employee" << endl;
            gets(add);
            cout << "Enter the ID of the employee" << endl;
            cin >> id;
            cout << "Enter the age and the code of the employee" << endl;
            cin >> age >> code;
            Employees[e++]=Person(n,id,age,add,code);
            break;
        }
        case 2:{
            char n[40], add[20], id[10], code;
            int age;
            cin.ignore();
            cout << "Enter the name and surname of the client" << endl;
            gets(n);
            cout << "Enter the address of the client" << endl;
            gets(add);
            cout << "Enter the ID of the client" << endl;
            cin >> id;
            cout << "Enter the age and the code of the client" << endl;
            cin >> age >> code;
            Clients[c++]=Person(n,id,age,add,code);
            break;
        }
        case 3:{
            printArray(Employees,e);
            break;
        }
        case 4:{
            printArray(Clients,c);
            break;
        }
        }
        cout << "Enter a choice from the menu" << endl;
        cout << "1 - Enter information about the employee" << endl;
        cout << "2 - Enter information about the client" << endl;
        cout << "3 - Print infromation about the employees" << endl;
        cout << "4 - Print information about the clients" << endl;
        cout << "5 - End of program" << endl;
        cin >> choice;
    }
    cout << "End of program" << endl;
    return 0;
}
