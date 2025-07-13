#include <iostream>
using namespace std;

void checkUniqueELement(int arr[],int size){
    for (int i = 0; i < size; i++) //traversing the array
    {
        bool isUnique = true; //defining there exist a unique variable
        for (int j = 0; j < size; j++) //traversing the array
        {
            if (i != j && arr[i]==arr[j]) //checking if two elements at different index have same values
            {
                isUnique = false; //if present then eliminate them
                break; //break the if condition
            }
        }
        if (isUnique) //if not found duplicate
        {
            cout << arr[i] << endl; //print the unique elements
        }
        
    }
    
}

int main()
{
    int arr[] = {1, 2, 3, 4, 2, 3, 1, 0, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    checkUniqueELement(arr, size);
}