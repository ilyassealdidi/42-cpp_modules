#include "Span.hpp"
#include <iostream>

int main() {
    // Test 1
    std::cout << "` Testing with less than 2 numbers" << std::endl;
    try {
        Span mySpan(1);
        mySpan.addNumber(5);
        std::cout << "Shortest Span: " << mySpan.shortestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    // Test 2
    std::cout << "` Exceeding the container size" << std::endl;
    try {
        Span mySpan(1);
        mySpan.addNumber(5);
        mySpan.addNumber(6);
        std::cout << "Shortest Span: " << mySpan.shortestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    // Test 3
    std::cout << "` Normal human test" << std::endl;
    try {
        Span mySpan(5);
        mySpan.addNumber(1);
        mySpan.addNumber(4);
        mySpan.addNumber(8);
        mySpan.addNumber(6);
        mySpan.addNumber(5);

        std::cout << "Shortest Span: " << mySpan.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << mySpan.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    // Test 4
    std::cout << "` Testing with equal numbers" << std::endl;
    try {
        Span mySpan(3);
        mySpan.addNumber(1);
        mySpan.addNumber(1);
        mySpan.addNumber(1);

        std::cout << "Shortest Span: " << mySpan.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << mySpan.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    // Test 5
    std::cout << "` Testing with a huge number of elements" << std::endl;
    try {
        Span mySpan(10000);
        std::srand(static_cast<unsigned int>(time(NULL)));
        for (int i = 0; i < 10000; i++) {
            mySpan.addNumber(std::rand());
        }
        std::cout << "Shortest Span: " << mySpan.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << mySpan.longestSpan() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    std::cout << std::endl;
    return 0;
}