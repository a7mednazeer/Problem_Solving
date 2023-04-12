#include<iostream>
#include<stack>
#include<string>
using namespace std;


bool IsNumericDigit(char character) {
	if(character >= '0' && character <= '9') {
        return true;
    }
	return false;
}

bool IsOperator(char character) {
	if(character == '+' || character == '-' || character == '*' || character == '/') {
		return true;
    }
	return false;
}

int Calculation(char operation, int operand_1, int operand_2) {
	if(operation == '+') {
        return operand_1 + operand_2;
    }
	else if(operation == '-') {
        return operand_1 - operand_2;
    }
	else if(operation == '*') {
        return operand_1 * operand_2;
    }
	else if(operation == '/') {
        return operand_1 / operand_2;
    }
	else {
        cout << "Error" << '\n';
	    return -1;
    }
}

int EvaluatePostfix(string expression) {

	stack <int> Stack;

	for(int i = 0; i < expression.length(); i++) {

		if(expression[i] == ' ' || expression[i] == ',') {
            continue;
        }
		else if(IsOperator(expression[i])) {
			int operand_2 = Stack.top(); Stack.pop();
			int operand_1 = Stack.top(); Stack.pop();
			int result = Calculation(expression[i], operand_1, operand_2);
			Stack.push(result);
		}
		else if(IsNumericDigit(expression[i])) {
			int operand = 0; 
			while(i < expression.length() && IsNumericDigit(expression[i])) {
				operand = (operand * 10) + (expression[i] - '0'); 
				i++;
			} 
			i--; 
			Stack.push(operand);
		}
	}
	return Stack.top();
}



main() {
	string expression;

	cout<<"Enter Postfix Expression" << '\n';
	getline(cin,expression);

	int result = EvaluatePostfix(expression);

	cout<<"Result = "<< result << '\n';
}
