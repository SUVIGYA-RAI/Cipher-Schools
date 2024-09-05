// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter a number : ";
//     cin >> n;
//     if(n%2==0) cout << "Even";
//     else cout << "Odd";
// }

#include <iostream>
using namespace std;
void checkEvenOdd(int n){
    if(n%2==0) cout << "Even";
    else cout << "Odd";
}

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;
    checkEvenOdd(n);
}