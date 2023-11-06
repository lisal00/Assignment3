#ifndef INFIX_H_
#define INFIX_H_

#include <stack>
#include <string>
using namespace std;

class infix{
    public:
        /**Evaluate a postfix expression
         * @param expression The expression to be evaluated
         * @return The value of the expression
         * @throws Syntax_Error if a syntax error is found
        */
        int eval(const string& expression);

        const string OPERATORS = "+-/%*";
    private:
        /**Evaluates current operator. Pops 2 opearnds off operand stack
         * and applies the operator 
         * @param op A char representing operator
         * @throws Syntax_Error if top is done on empty stack
        */
       int eval_operator(char op);

       /**Determines if char is an operator
        * @param ch The char to be tested
        * @return true if the char is operator
       */
      bool is_operator(char ch) const{
        return OPERATORS.find(ch) != string::npos;
      }
};

#endif