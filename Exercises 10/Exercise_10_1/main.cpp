#include <iostream>
#include <memory>

using namespace std;

class Square{
private:
    int side;
public:
    Square(int x){
        cout << "Constructing object Square with side=" << x << endl;
        side=x;
    }
    int getArea(){
        return side*side;
    }
    ~Square(){
        cout << "Destructing object Square with side=" << side << endl;
    }
};

int main()
{
    Square S(5);
    {
        Square *ptr=&S;
        cout << "The area of the square, accessed by pointer, is: " << ptr->getArea() << endl;
    }
    cout << "Pointer doesn't exist anymore, the object still does" << endl;
    cout << "The area of the square, accessed by the object, is: " << S.getArea() << endl;
    return 0;
}
