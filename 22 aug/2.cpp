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

    int Evensum = 0, Oddsum = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            Evensum += arr[i];
        }
        else{
            Oddsum += arr[i];
        }
    }
    cout << "The sum of Even elements of array is : " << Evensum << endl;
    cout << "The sum of Odd elements of array is : " << Oddsum;
}