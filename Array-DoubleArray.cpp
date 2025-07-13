//Pass by Reference - makes the changes in the original array rather than creating a copy in the main body. It passes the address of the first element of the array from the function to the main.
#include <iostream>
using namespace std;

void changeArray(int arr[], int size)
{
    cout << "in function" << endl;
    for (int i = 0; i < size; i++)
    {
        arr[i] = 2 * arr[i];
    }
}

int main()
{
    int arr[] = {1, 2, 3};
    changeArray(arr, 3);
    cout << "in main" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}