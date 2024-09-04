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

    int countEven = 0, countOdd = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            countEven++;
        }
        else{
            countOdd++;
        }
    }
    cout << "Number of even elements : " << countEven << endl;
    cout << "Number of odd elements : " << countOdd ;
}