#include <iostream>
#include <vector>
#include <cstring>
#include <cctype>

using namespace std;

class Letter{
private:
    char character;
    bool guess;
public:
    Letter(char c, bool g){
        character=c;
        guess=g;
    }
    void changeGuess(){
        guess=true;
    }
    char getCharacter(){
        return character;
    }
    bool getGuess(){
        return guess;
    }
};

int main()
{
    int tries;
    cout << "Enter how many tries you have to guess the word" << endl;
    cin >> tries;
    Letter L[9]={Letter('a',false),Letter('v',false),Letter('a',false),Letter('l',false),Letter('a',false),Letter('n',false),Letter('c',false),Letter('h',false),Letter('e',false)};
    vector<Letter> Word(L,L+9);
    while(tries>0){
        cout << "Enter a word with lowercase letters to play the game" << endl;
        string word;
        cin >> word;
        try{
            for(int i=0;i<(int)word.length();i++)
                if(isupper(word[i]))
                    throw true;
        }catch(bool){
            cout << "Invalid word" << endl;
            exit(-1);
        }
        int count=0;
        vector<Letter>::iterator Iterator=Word.begin();
        for(int i=0;i<(int)word.length()&&Iterator!=Word.end();i++,Iterator++){
            char c=Iterator->getCharacter();
            bool flag=Iterator->getGuess();
            if(flag){
                count++;
                cout << c;
            }
            else{
                if(c==word[i]){
                    cout << c;
                    Iterator->changeGuess();
                    count++;
                }
                else
                    cout << "-";
            }
        }
        while(Iterator!=Word.end()){
            cout << "-";
            Iterator++;
        }
        cout << endl;
        if(count==(int)word.length()){
            cout << "You have won the game!" << endl;
            return 0;
        }
        tries--;
        cout << "You have " << tries << " tries remaining" << endl;
    }
    cout << "You have lost the game!" << endl;
    return 0;
}
