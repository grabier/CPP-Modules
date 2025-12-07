#include "../RPN.hpp"

RPN::RPN(void){}

RPN::RPN(const RPN& other) : _stack(other._stack){}

RPN& RPN::operator=(const RPN& other){
	if (this != &other)
		_stack = other._stack;
	return *this;
}

RPN::~RPN(void){}

bool RPN::_isOperator(const std::string& token) const{
	return (token.length() == 1 && 
			(token[0] == '+' || token[0] == '-' || 
			 token[0] == '*' || token[0] == '/'));
}

bool RPN::_isNumber(const std::string& token) const{
	if (token.empty())
		return false;
	if (token.length() == 1 && std::isdigit(static_cast<unsigned char>(token[0])))
		return true;
	
	return false;
}

int RPN::_performOperation(int a, int b, char op) const{
	switch (op){
		case '+':
			return a + b;
		case '-':
			return a - b;
		case '*':
			return a * b;
		case '/':
			if (b == 0)
				throw std::runtime_error("Error: cannot divide by 0");
			return a / b;
		default:
			throw std::runtime_error("Error: cannot perform operation");
	}
}

int RPN::evaluate(const std::string& expression){
	//stack cleaning
	while (!_stack.empty())
		_stack.pop();
	
	std::istringstream iss(expression);//allow to separate by spaces(split)
	std::string token;
	
	while (iss >> token){
		if (_isNumber(token))
			_stack.push(std::atoi(token.c_str()));
		else if (_isOperator(token)){
			if (_stack.size() < 2)
				throw std::runtime_error("Error: there must be at least 2 elements in the stack");
			int b = _stack.top();
			_stack.pop();
			int a = _stack.top();
			_stack.pop();
			
			int result = _performOperation(a, b, token[0]);
			_stack.push(result);
		}
		else
			throw std::runtime_error("Error: invalid token");
	}
	
	if (_stack.size() != 1)
		throw std::runtime_error("Error");
	
	return _stack.top();
}