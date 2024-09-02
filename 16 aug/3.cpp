#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter number : ";
    cin >> n;
    cout << "MUltiplication table of " << n << "is : ";
    for (int i = 0; i <= 10; ++i){
        cout << n << " x " << i << " = " << n * i << endl;
    }
}