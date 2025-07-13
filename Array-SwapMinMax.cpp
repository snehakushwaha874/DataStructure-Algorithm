#include <iostream>
using namespace std;
void swapMaxMin(int arr[],int size){
    int largest = INT16_MIN, smallest=INT16_MAX;
    int smallestIndex = 0, largestIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<smallest)
        {
            smallest = arr[i];
            smallestIndex = i;
        }
        if (arr[i]>largest)
        {
            largest = arr[i];
            largestIndex = i;
        }
          
    }
    swap(arr[smallestIndex], arr[largestIndex]);
    
}

int main(){
    int arr[] = {1, 56, 34, 98, 2, 0};
    int size = 6;
    swapMaxMin(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}