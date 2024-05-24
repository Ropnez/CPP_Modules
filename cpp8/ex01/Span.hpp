#pragma once

#include <vector>
#include <iostream>

class Span {
    public:
        Span(unsigned int N);
        ~Span();
        Span(const Span& other);
        Span &operator=(const Span& other);
        void addNumber(int num);
        int shortestSpan();
        int longestSpan();
    private:
        Span();
        std::vector<int> vec;
        unsigned int maxSize;
};
