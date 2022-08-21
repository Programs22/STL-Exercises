#include <iostream>

using namespace std;

class Square{
private:
    int x;
public:
    Square(int X=1){
        x=X;
    }
    Square(Square &S){
        x=S.x;
    }
    void print(){
        cout << "Square with side x=" << x << endl;
    }
    int getArea(){
        return x*x;
    }
    Square operator=(Square &S){
        x=S.x;
        return *this;
    }
};

class Rectangle{
private:
    int x, y;
public:
    Rectangle(int X=1, int Y=1){
        x=X;
        y=Y;
    }
    Rectangle(Rectangle &R){
        x=R.x;
        y=R.y;
    }
    void print(){
        cout << "Rectangle with length x=" << x << " and height y=" << y << endl;
    }
    int getArea(){
        return x*y;
    }
    Rectangle operator=(Rectangle &R){
        x=R.x;
        y=R.y;
        return *this;
    }
};

class Circle{
private:
    int radius;
public:
    Circle(int r=1){
        radius=r;
    }
    Circle(Circle &C){
        radius=C.radius;
    }
    void print(){
        cout << "Circle with radius r=" << radius << endl;
    }
    float getArea(){
        return radius*radius*3.14;
    }
    Circle operator=(Circle &C){
        radius=C.radius;
        return *this;
    }
};

template<class T>
class Set{
private:
    int size;
    int count;
    T *array;
public:
    Set(int s){
        size=s;
        count=0;
        array=new T[s];
    }
    void enterElement(T e){
        array[count++]=e;
    }
    void showElement(int i){
        array[i].print();
    }
    T maxElement(){
        T max=array[0];
        for(int i=1;i<count;i++){
            float m=max.getArea();
            float n=array[i].getArea();
            if(m<n)
                max=array[i];
        }
        return max;
    }
    int getCount(){
        return count;
    }
};

template<class T>
void printSet(Set<T> S){
    for(int i=0;i<S.getCount();i++)
        S.showElement(i);
}

int main()
{
    Set<Square> Squares(5);
    Set<Rectangle> Rectangles(5);
    Set<Circle> Circles(5);
    int choice;
    cout << "Enter a choice from the menu" << endl;
    cout << "1 - Enter an element in set Squares" << endl;
    cout << "2 - Enter an element in set Rectangles" << endl;
    cout << "3 - Enter an element in set Circles" << endl;
    cout << "4 - Print all the elements in set Squares" << endl;
    cout << "5 - Print all elements in set Rectangles" << endl;
    cout << "6 - Print all elements in set Circles" << endl;
    cout << "7 - Print the maximum elements of all the sets" << endl;
    cout << "8 - Print the number of elements in each set" << endl;
    cout << "9 - End of program" << endl;
    cin >> choice;
    while(choice>=1&&choice<=8){
        switch(choice){
        case 1:{
            int side;
            cout << "Enter the side of the square" << endl;
            cin >> side;
            Square S(side);
            Squares.enterElement(S);
            break;
        }
        case 2:{
            int length, height;
            cout << "Enter the length and height of the rectangle" << endl;
            cin >> length >> height;
            Rectangle R(length,height);
            Rectangles.enterElement(R);
            break;
        }
        case 3:{
            int radius;
            cout << "Enter the radius of the circle" << endl;
            cin >> radius;
            Circle C(radius);
            Circles.enterElement(C);
            break;
        }
        case 4: printSet(Squares); break;
        case 5: printSet(Rectangles); break;
        case 6: printSet(Circles); break;
        case 7:{
            cout << "Information about the square with the biggest area:" << endl;
            Square S=Squares.maxElement();
            S.print();
            cout << "Information about the rectangle with the biggest area:" << endl;
            Rectangle R=Rectangles.maxElement();
            R.print();
            cout << "Information about the circle with the biggest area:" << endl;
            Circle C=Circles.maxElement();
            C.print();
            break;
        }
        case 8:{
            cout << "There are " << Squares.getCount() << " elements in set Squares" << endl;
            cout << "There are " << Rectangles.getCount() << " elements in set Rectangles" << endl;
            cout << "There are " << Circles.getCount() << " elements in set Circles" << endl;
            break;
        }
        }
        cout << "Enter a choice from the menu" << endl;
        cout << "1 - Enter an element in set Squares" << endl;
        cout << "2 - Enter an element in set Rectangles" << endl;
        cout << "3 - Enter an element in set Circles" << endl;
        cout << "4 - Print all the elements in set Squares" << endl;
        cout << "5 - Print all elements in set Rectangles" << endl;
        cout << "6 - Print all elements in set Circles" << endl;
        cout << "7 - Print the maximum elements of all the sets" << endl;
        cout << "8 - Print the number of elements in each set" << endl;
        cout << "9 - End of program" << endl;
        cin >> choice;
    }
    cout << "End of program" << endl;
    return 0;
}
