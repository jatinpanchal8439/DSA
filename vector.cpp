#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //     vector<int> vec(6, 0);
    //      for (int i : vec)
    //     {
    //         cout << i << endl;
    //     }

    vector <char> vec = {'a', 'b', 'v', 'r', 'o'};


    cout<< "size ="<< vec.size() << endl;
    for (char i : vec)   // for each loop

    {
        cout << i << endl;
    }
    return 0;
}