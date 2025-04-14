#include <iostream>
using namespace std;

class Calculator {
public:
    double a, b;

    Calculator(double a, double b) {
        this->a = a;
        this->b = b;
    }

    double calculate(string op) {
        if (op == "add"){
            return a + b;
        }
        else if (op == "sub"){
             return a - b;
        }
        else if (op == "mul") {
            return a * b;
        }
        else if (op == "div"){
            if(b==0){
                cout<<"Invalid Number"<<endl;
            }
            return a / b ;  
        }
        else throw runtime_error("Invalid operation");
    }
};

int main() {
    double a, b;
    string op;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter operation (add/sub/mul/div): ";
    cin >> op;
    
    Calculator cal(a, b);
    cout<<"Result: "<<cal.calculate(op);
    return 0;
}
