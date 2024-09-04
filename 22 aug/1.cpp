#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int arr[size];
    cout << "Enter " << size << " elements : ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int sum = 0;
    for(int i = 0; i < size; i++){
        sum += arr[i];
    }
    cout << "The sum of array is : " << sum;
}