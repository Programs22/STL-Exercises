#include <iostream>

using namespace std;

class Square{
private:
    int side;
public:
    Square(int s=1){
        side=s;
    }
    Square(Square &S){
        side=S.side;
    }
    int getArea(){
        return side*side;
    }
    void print(){
        cout << "Square with side=" << side << endl;
    }
    Square operator=(Square &S){
        side=S.side;
        return *this;
    }
};

class Rectangle{
private:
    int length;
    int height;
public:
    Rectangle(int l=1, int h=1){
        length=l;
        height=h;
    }
    Rectangle(Rectangle &R){
        length=R.length;
        height=R.height;
    }
    int getArea(){
        return length*height;
    }
    void print(){
        cout << "Rectangle with length=" << length << " and height=" << height << endl;
    }
    Rectangle operator=(Rectangle &R){
        length=R.length;
        height=R.height;
        return *this;
    }
};

template<class T>
void SortArray(T *array, int size){
    for(int i=0;i<size-1;i++){
        for(int j=i;j<size;j++){
            if(array[i].getArea()>array[j].getArea()){
                if(array[i].getArea()>array[j].getArea()){
                    T temp=array[i];
                    array[i]=array[j];
                    array[j]=temp;
                }
            }
        }
    }
}

template<class T>
void printArray(T *array, int size){
    for(int i=0;i<size;i++)
        array[i].print();
}

int main()
{
    Square S[3]={Square(5),Square(3),Square(4)};
    cout << "Information about the squares before sorting" << endl;
    printArray(S,3);
    SortArray(S,3);
    cout << "Information about the squares after sorting" << endl;
    printArray(S,3);
    Rectangle R[3]={Rectangle(4,5),Rectangle(3,4),Rectangle(5,7)};
    cout << "Information about the rectangles before sorting" << endl;
    printArray(R,3);
    SortArray(R,3);
    cout << "Information about the rectangles after sorting" << endl;
    printArray(R,3);
    return 0;
}
