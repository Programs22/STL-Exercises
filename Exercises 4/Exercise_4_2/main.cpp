#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    vector<char> word1;
    vector<char> word2;
    string s1, s2;
    cout << "Enter the first word" << endl;
    cin >> s1;
    cout << "Enter the second word" << endl;
    cin >> s2;
    for(int i=0;i<(int)s1.size();i++)
        word1.push_back(s1[i]);
    for(int i=0;i<(int)s2.size();i++)
        word2.push_back(s2[i]);
    int i;
    if(word1.size()!=word2.size())
        cout << "The words aren't anagrams" << endl;
    else{
        for(i=0;i<(int)word1.size();i++){
            bool flag=false;
            for(int j=0;j<(int)word2.size();j++){
                if(word1[i]==word2[j])
                    flag=true;
            }
            if(!flag){
                cout << "The words aren't anagrams" << endl;
                break;
            }
        }
        for(i=0;i<(int)word2.size();i++){
            bool flag=false;
            for(int j=0;j<(int)word1.size();j++){
                if(word2[i]==word1[j])
                    flag=true;
            }
            if(!flag){
                cout << "The words aren't anagrams" << endl;
                break;
            }
        }
        if(i==(int)word1.size())
            cout << "The words are anagrams" << endl;
    }
    return 0;
}
