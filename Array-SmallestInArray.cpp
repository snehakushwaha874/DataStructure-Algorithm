// INT16_MAX = -infinity
// INT16_MIN = +infinity
#include <iostream>
using namespace std;
int main(){
    int arr[]={10,2,22,8,-1};
    int size = 5;
    int smallest = INT16_MAX;
    int largest = INT16_MIN;
    for (int i = 0; i < size; i++)
    {
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
    }

    cout << "Smallest : " << smallest<<endl;
    cout << "Largest : " << largest;
}