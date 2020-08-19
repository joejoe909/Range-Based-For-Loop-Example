//Using a range base for loop to sequentially access items in the STL container array<> type and an elemental array.
//C++11
#include <iostream>
#include <array>

using namespace std;

int main()
{
    array<int, 7> temp {65,68,75,77,76,73,80};
    int val[7]{10,11,12,13,14,15,16};

    for(const int&i :temp)
    {
     cout << i << endl; 
    }

    cout << "end of first for loop" << endl;

    for(const int j: val)
    {
        cout << j << endl;
    }

    return 0;
}

/*
 * output:
 * 65
68
75
77
76
73
80
end of first for loop
10
11
12
13
14
15
16
Press <RETURN> to close this window...
*/
