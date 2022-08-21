#include <iostream>
#include <map>

using namespace std;

typedef map<int,int,greater<int>> Map;

int main()
{
    Map Priorities;
    Priorities.insert(Map::value_type(4,1000)); // The first parameter is the priority of the process, the second is the process ID
    Priorities.insert(Map::value_type(9,2000));
    Priorities.insert(Map::value_type(3,3000));
    Priorities.insert(Map::value_type(5,4000));
    Priorities.insert(Map::value_type(2,5000));
    Priorities.insert(Map::value_type(7,6000));
    Priorities.insert(Map::value_type(10,7000));
    Priorities.insert(Map::value_type(1,8000));
    Map::const_iterator Iterator=Priorities.begin();
    while(Iterator!=Priorities.end()){
        cout << "Priority of process: " << Iterator->first << endl;
        cout << "Process ID: " << Iterator->second << endl;
        Iterator++;
    }
    return 0;
}
