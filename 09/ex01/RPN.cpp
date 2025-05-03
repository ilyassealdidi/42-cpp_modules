#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN& obj) {
    *this = obj;
}

RPN& RPN::operator=(const RPN& obj) {
    return *this;
}

RPN::~RPN() {}

int RPN::calculate(const std::string& expression) {
    std::stack<int> stack;
    std::istringstream iss(expression);
    std::string token;

    while (iss >> token) {
        if (token.length() != 1) {
            throw std::runtime_error("Error: Invalid token");
        }
        if (isdigit(token[0])) {
            stack.push(std::atoi(token.c_str()));
        } else {
            if (stack.size() < 2) {
                throw std::runtime_error("Error: Invalid expression");
            }
            int b = stack.top();
            stack.pop();
            int a = stack.top();
            stack.pop();
            switch (token[0]) {
                case '+':
                    stack.push(a + b);
                    break;
                case '-':
                    stack.push(a - b);
                    break;
                case '*':
                    stack.push(a * b);
                    break;
                case '/':
                    if (b == 0) {
                        throw std::runtime_error("Error: Division by zero");
                    }
                    stack.push(a / b);
                    break;
                default:
                    throw std::runtime_error("Error: Invalid operator");
            }
        }
    }
    if (stack.size() != 1) {
        throw std::runtime_error("Error: Invalid expression");
    }
    return stack.top();
}
