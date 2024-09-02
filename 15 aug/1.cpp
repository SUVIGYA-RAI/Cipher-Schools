#include <iostream>
using namespace std;

int main(){
    int n1,n2,n3;
    cout << "Enter first number : ";
    cin >> n1;
    cout << "Enter second number : ";
    cin >> n2;
    cout << "Enter third number : ";
    cin >> n3;

    int largest;
    if(n1 >= n2 && n1 >= n3){
        largest = n1;
    }
    else if(n2 >= n1 && n2 >= n3){
        largest = n2;
    }
    else{
        largest = n3;
    }

    cout << "The largest number is : " << largest << endl; 
}