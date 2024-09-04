#include <iostream>
using namespace std;
// For n elements we get sorted array in n-1 iteration
int main(){
    int n;
    cout << "Enter the size of array : ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements : ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int count = 1;
    while (count < n ){
        for (int i = 0; i < n - count; i++){
            if (arr[i] > arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        count++;
    }
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    
}