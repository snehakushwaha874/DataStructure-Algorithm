//Time complexity - O(n)
#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int tgt)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == tgt)
        {
            return i; // Found value
        }
    }
    return -1; // returns negative integer position when the target is not found
}

int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = (sizeof(arr)) / (sizeof(arr[0]));
    int tgt = 99;
    cout << "Element found at index : " << linearSearch(arr, size, tgt) << endl;
    return 0;
}