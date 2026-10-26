#include <iostream>
#include <string>
using namespace std;

void loop(string arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        // cout << arr[i] << endl;

        if ((arr[i][0]) == 'B')
        {
            cout << arr[i] << endl;
        }
    }
}

int main()
{

    string ar1[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    int size = sizeof(ar1) / sizeof(ar1[0]);

    loop(ar1, size);
}