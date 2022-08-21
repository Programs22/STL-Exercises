#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <fstream>

using namespace std;

class Rectangle{
private:
    double length;
    double height;
public:
    Rectangle(double l, double h){
        length=l;
        height=h;
    }
    void print(){
        cout << "Rectangle with length=" << length << " and height=" << height << endl;
    }
    double Area(){
        return length*height;
    }
    friend double operator+(double sum, Rectangle &R){
        sum+=R.Area();
        return sum;
    }
};

class Square{
private:
    double side;
public:
    Square(double s){
        side=s;
    }
    void print(){
        cout << "Square with side=" << side << endl;
    }
    double Area(){
        return side*side;
    }
    friend double operator+(double sum, Square &S){
        sum+=S.Area();
        return sum;
    }
};

int main()
{
    ofstream out1("File1.dat",ios::out);
    if(!out1){
        cout << "File \"File1.dat\" didn't open properly" << endl;
        exit(-1);
    }
    ofstream out2("File2.dat",ios::out);
    if(!out2){
        cout << "File \"File2.dat\" didn't open properly" << endl;
        exit(-1);
    }
    int ID1, ID2; // Number to identify whether it is a rectangle or a square
    double length, height;
    double side;
    cout << "Enter the documentation in the first file" << endl;
    cout << "Enter the ID number of the figure" << endl;
    cin >> ID1;
    while(ID1!=-1){
        out1 << ID1 << " ";
        if(ID1==1){
            cout << "Enter the length and height of the rectangle" << endl;
            cin >> length >> height;
            out1 << length << " " << height << endl;
        }
        else if(ID1==2){
            cout << "Enter the side of the square" << endl;
            cin >> side;
            out1 << side << endl;
        }
        cout << "Enter the ID number of the figure, enter -1 to stop" << endl;
        cin >> ID1;
    }
    out1.close();
    cout << "Enter the documentation in the second file" << endl;
    cout << "Enter the ID number of the figure" << endl;
    while(cin >> ID2){
        out2 << ID2 << " ";
        if(ID2==1){
            cout << "Enter the length and height of the rectangle" << endl;
            cin >> length >> height;
            out2 << length << " " << height << endl;
        }
        else if(ID2==2){
            cout << "Enter the side of the square" << endl;
            cin >> side;
            out2 << side << endl;
        }
        cout << "Enter the ID number of the figure, enter EOF to stop" << endl;
    }
    out2.close();
    ifstream in1("File1.dat",ios::in);
    if(!in1){
        cout << "File \"File1.dat\" didn't open properly" << endl;
        exit(-1);
    }
    ifstream in2("File2.dat",ios::in);
    if(!in2){
        cout << "File \"File2.dat\" didn't open properly" << endl;
        exit(-1);
    }
    vector<Rectangle> V1;
    vector<Square> V2;
    while(in1 >> ID1){
        try{
            if(ID1==1){
                in1 >> length >> height;
                V1.push_back(Rectangle(length,height));
            }
            else if(ID1==2){
                in1 >> side;
                V2.push_back(Square(side));
            }
            else
                throw false;
        }catch(bool){
            cout << "Invalid figure ID" << endl;
            exit(-1);
        }
    }
    while(in2 >> ID2){
        try{
            if(ID2==1){
                in2 >> length >> height;
                V1.push_back(Rectangle(length,height));
            }
            else if(ID2==2){
                in2 >> side;
                V2.push_back(Square(side));
            }
            else
                throw false;
        }catch(bool){
            cout << "Invalid figure ID" << endl;
            exit(-1);
        }
    }
    double UnionRectangle=accumulate(V1.begin(),V1.end(),0.0); // Union is calculated as the sum of the areas of all rectangles
    double UnionSquare=accumulate(V2.begin(),V2.end(),0.0); // Union is calculated as the sum of the areas of all squares
    double IntersectionRectangle=UnionRectangle/V1.size(); // Intersection is calculated as the union divided by the number of rectangles
    double IntersectionSquare=UnionSquare/V2.size(); // Intersection is calculated as the union divided by the number of squares
    cout << "The union of all the rectangles is " << UnionRectangle << endl;
    cout << "The union of all the squares is " << UnionSquare << endl;
    cout << "The intersection of all the rectangles is " << IntersectionRectangle << endl;
    cout << "The intersection of all the squares is " << IntersectionSquare << endl;
    in1.close();
    in2.close();
    return 0;
}
