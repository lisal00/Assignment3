#include "infix.h"
#include <sstream>
#include <cctype>

using namespace std;
using std::stack;
using std::string;
using std::istringstream;
using std::isdigit;

/**Evaluate a postfix expression
     * @param expression The expression to be evaluated
     * @return The value of the expression
     * @throws Syntax_Error if a syntax error is found
    */
    int infix::eval(const string& expression){
        while (!operand_stack.empty())
            operand_stack.pop();
    }

/**Evaluates current operator. Pops 2 opearnds off operand stack
     * and applies the operator 
     * @param op A char representing operator
     * @throws Syntax_Error if top is done on empty stack
    */
    int infix::eval_operator(char op){

    }
