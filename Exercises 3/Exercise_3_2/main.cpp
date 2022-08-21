#include <iostream>
#include <cstring>

using namespace std;

template<class T>
class Set{
private:
    int counter;
    int size;
    T *array;
public:
    Set(int s=1, int c=0){
        size=s;
        counter=c;
        array=new T[s];
    }
    void enterElement(T e){
        if(counter<size)
            array[counter++]=e;
        else
            cout << "No more place in this set" << endl;
    }
    void printElements(){
        for(int i=0;i<counter;i++)
            cout << array[i] << " " ;
        cout << endl;
    }
    T max(){
        T max=array[0];
        for(int i=1;i<counter;i++){
            if(max<array[i])
                max=array[i];
        }
        return max;
    }
    string max(int){
        string max=array[0];
        for(int i=1;i<counter;i++){
            if(max.compare(array[i])<0)
                max=array[i];
        }
        return max;
    }
    int numberOfElements(){
        return counter;
    }
    ~Set(){
        delete [] array;
    }
};

int main()
{
    Set<int> A(5);
    Set<double> B(5);
    Set<string> C(5);
    int choice;
    cout << "Enter a choice from the menu" << endl;
    cout << "1 - Enter an element in set A" << endl;
    cout << "2 - Enter an element in set B" << endl;
    cout << "3 - Enter an element in set C" << endl;
    cout << "4 - Print elements of set A" << endl;
    cout << "5 - Print elements of set B" << endl;
    cout << "6 - Print elements of set C" << endl;
    cout << "7 - Show the maximum element of all the sets" << endl;
    cout << "8 - Show the number of elements in each set" << endl;
    cout << "9 - End of program" << endl;
    cin >> choice;
    while(choice>=1&&choice<=8){
        switch(choice){
        case 1:{
            int e;
            cout << "Enter an element for set A" << endl;
            cin >> e;
            A.enterElement(e);
            break;
        }
        case 2:{
            double e;
            cout << "Enter an element for set B" << endl;
            cin >> e;
            B.enterElement(e);
            break;
        }
        case 3:{
            string e;
            cout << "Enter an element for set C" << endl;
            cin >> e;
            C.enterElement(e);
            break;
        }
        case 4: A.printElements(); break;
        case 5: B.printElements(); break;
        case 6: C.printElements(); break;
        case 7:{
            int max_A=A.max();
            cout << "The maximum element of set A is: " << max_A << endl;
            double max_B=B.max();
            cout << "The maximum element of set B is: " << max_B << endl;
            string max_C;
            max_C=C.max(0);
            cout << "The maximum element of set C is: " << max_C << endl;
            break;
        }
        case 8:{
            cout << "Set A has " << A.numberOfElements() << " elements" << endl;
            cout << "Set B has " << B.numberOfElements() << " elements" << endl;
            cout << "Set C has " << C.numberOfElements() << " elements" << endl;
            break;
        }
        }
        cout << "Enter a choice from the menu" << endl;
        cout << "1 - Enter an element in set A" << endl;
        cout << "2 - Enter an element in set B" << endl;
        cout << "3 - Enter an element in set C" << endl;
        cout << "4 - Print elements of set A" << endl;
        cout << "5 - Print elements of set B" << endl;
        cout << "6 - Print elements of set C" << endl;
        cout << "7 - Show the maximum element of all the sets" << endl;
        cout << "8 - Show the number of elements in each set" << endl;
        cout << "9 - End of program" << endl;
        cin >> choice;
    }
    cout << "End of program" << endl;
    return 0;
}
