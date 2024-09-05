#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string Revstr(int &str){
    string revstr = str;
    reverse(revstr.begin(), revstr.end());
    return revstr;
}

int main(){
    string inputstr;
    cout << "Enter a string : ";
    getline(cin, inputstr);
    string revstr = Revstr(inputstr);
    
    string Revstr = revstr(inputstr);
    cout << "Reversed String : " << revstr << endl;
    


    // // Call the function to reverse the string
    // std::string reversedString = reverseString(inputString);

    // // Output the reversed string
    // std::cout << "Reversed string: " << reversedString << std::endl;

}