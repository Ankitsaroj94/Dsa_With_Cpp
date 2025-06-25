#include<iostream>
using namespace std;
void min_of_two(double a, double b){
    cout<<"Enter two numbers: ";
    cin>> a >> b;
    switch(a < b){
        case true:
            cout << "The minimum of the two numbers is: " << a << endl;
            break;
        case false:
            cout << "The minimum of the two numbers is: " << b << endl;
            break;
    }
}

int main() {
    min_of_two(0, 0);
    return 0;
}