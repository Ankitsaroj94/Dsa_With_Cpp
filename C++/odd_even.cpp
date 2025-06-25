#include<iostream>
using namespace std;

class OddEven {
public:
    static void checkOddEven(int a){
        switch (a % 2==0) {
            case 0:
                cout << "Number is even " << a << endl;
                break;
            case 1:
                cout << "Number is odd " << a << endl;
                break;
        }
    }
};

int main(){
    int num;
    cout << "Enter The Number: ";
    cin >> num;
    OddEven::checkOddEven(num);
    return 0;
}