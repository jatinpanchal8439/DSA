#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec;
    vec.push_back(89);
    cout << "size =" << vec.size() << endl;


    vec.pop_back();
    for (int val : vec)
    {
        cout << val << endl;
    }
    return 0;
}