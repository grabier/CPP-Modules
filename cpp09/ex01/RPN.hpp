#pragma once

# include <stack>
# include <string>
# include <iostream>
# include <sstream>
# include <cstdlib>
# include <cctype>
# include <stdexcept>

class RPN{
	private:
		std::stack<int>	_stack;
		
		public:
		RPN(void);
		RPN(const RPN& other);
		RPN& operator=(const RPN& other);
		~RPN(void);
		bool	_isOperator(const std::string& token) const;
		bool	_isNumber(const std::string& token) const;
		int		_performOperation(int a, int b, char op) const;
		
		int		evaluate(const std::string& expression);
};
