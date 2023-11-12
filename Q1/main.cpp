#include <iostream>
#include "balanced.h"
#include "infix.h"

using namespace std;

int main(){
    infix infix;
    cout << "Enter an expression. \n";
    string expression; 
    
    while (getline(cin, expression) && (expression != "")){
        cout << expression;
        if (is_balanced(expression)){
            cout << " is balanced.\n";
            cout << "\nInfix to postfix: " << infix.convert(expression) << endl;
        } else{
            cout << " is not balanced. Invalid. \n";
        }
        cout << "\nEnter another expression: ";
    }
    return 0;
}