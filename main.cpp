#include <iostream>
using namespace std;

int main()
{
    const int size = 15;
    int c[size]{0};
    int x;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the number[" << i << "]: " << endl;
        cin >> c[i];
    }
    cout << " Multiples of 3 and 11 " << endl;
    for (int i = 0; i < size; i++)
    {
        if (c[i] % 3 == 0)
        {
            cout << " cells of numbers that are multiples of 3:   " << i << endl;
        }
    }

    for (int i = 0; i < size; i++)
    {
        if (c[i] % 11 == 0)
        {
            cout << " cells of numbers that are multiples of 11:   " << i << endl;
        }
    }
    return 0;
}
