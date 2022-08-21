#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<string> sentence;
    string word;
    cout << "Enter the sentence word by word, enter . to stop" << endl;
    cin >> word;
    while(word!="."){
        sentence.push_back(word);
        cout << "Enter the sentence word by word, enter . to stop" << endl;
        cin >> word;
    }
    sort(sentence.begin(),sentence.end());
    cout << "All of the words in the sentence sorted are:" << endl;
    for(int i=0;i<(int)sentence.size();i++){
        cout << sentence[i] << endl;
        if(sentence[i].compare(sentence[i+1])==0)
            i++;
    }
    return 0;
}
