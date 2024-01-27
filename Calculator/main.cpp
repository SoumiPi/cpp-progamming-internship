#include <iostream>

using namespace std;

int main(){

    cout << "This is a simple calculator, you have to two numbers and choose the operation you want." << endl;
    while (true){
        int number1, number2;
        float result;
        char operation;

        cout << "\nEnter the first number:" << endl;
        cin >> number1;
        cout << "Enter the second number:" << endl;
        cin >> number2;

        cout << "Choose your operator:" << endl;
        cout << "+ for addition." << endl;
        cout << "* for multiplication." << endl;
        cout << "- for soustraction." << endl;
        cout << "/ for division." << endl;

        cout << "Enter the choice (+|-|*|/):" << endl;
        cin >> operation;
        if ((operation != '+') && (operation != '*') && (operation !='/') && (operation != '-')){
            cout << "Enter a correct operation:" << endl;
            cin >> operation;
        }

        switch(operation){
            case '+' :
                result = number1 + number2;
                cout << "The result is :\n" << result << endl;
                break;
            case '*' :
                result = number1 * number2;
                cout << "The result is :\n" << result << endl;
                break;
            case '-' :
                result = number1 - number2;
                cout << "The result is :\n" << result << endl;
                break;
            case '/':
                if (number2 !=0){
                    result = number1 / number2;
                    cout << "The result is :\n" << result << endl;
                }
                else
                    cout << "Not possible divide by 0" << endl;
                break;

        }
    }


}
