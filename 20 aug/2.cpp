#include <iostream>
using namespace std;

class complex{
    private:
    double real; 
    double img;

    public:
    complex (double r = 0, double i = 0) : real(r) , img(i) {}

    complex operator + (const complex& other) {
        return complex(real + other.real, img + other.img);
    }
    complex operator - (const complex& other) {
        return complex(real - other.real, img - other.img);
 
    }
    void print() const {
    cout << real << "+" << img << "i" << endl;
}
};



int main(){
    complex num1(3,4);
    complex num2(1,2);
    complex sum = num1 + num2;
    complex difference = num1 - num2;


    cout << "Complex Number 1 : ";
    num1.print();

    cout << "Complex Number 2 : ";
    num2.print();

    cout << "Sum : ";
    sum.print();

    cout << "Difference : ";
    difference.print();

    return 0;
}