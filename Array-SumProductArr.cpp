#include <iostream>
using namespace std;

void calculateSumProduct(int arr[], int size)
{
    int product = 1;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
        sum += arr[i];
    }
    cout << "Sum : " << sum << endl;
    cout << "Product : " << product << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = 5;
    calculateSumProduct(arr, size);
    return 0;
}
