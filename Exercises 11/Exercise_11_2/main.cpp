#include <iostream>
#include <cstdlib>
#include <fstream>

using namespace std;

int main()
{
    ofstream out("Words.dat",ios::out);
    if(!out){
        cout << "The file Words.dat didn't open properly" << endl;
        exit(-1);
    }
    cout << "Enter words in the file, enter EOF to stop" << endl;
    string word;
    while(cin>>word){
        out << word << " ";
    }
    out.close();
    ifstream in("Words.dat",ios::in);
    if(!in){
        cout << "The file Words.dat didn't open properly" << endl;
        exit(-1);
    }
    ofstream out2("New.dat",ios::out);
    if(!out2){
        cout << "The file New.dat didn't open properly" << endl;
        exit(-1);
    }
    while(in>>word){
        if(word.length()<10)
            out2 << word << " ";
    }
    in.close();
    out2.close();
    ifstream in2("New.dat",ios::in);
    if(!in2){
        cout << "The file New.dat didn't open properly" << endl;
        exit(-1);
    }
    cout << "All the words that meet the criteria are:" << endl;
    while(in2>>word){
        cout << word << ", ";
    }
    cout << endl;
    in2.close();
    return 0;
}
