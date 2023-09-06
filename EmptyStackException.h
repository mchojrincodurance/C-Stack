//
// Created by mauro on 6/09/23.
//

#ifndef STACK_EMPTYSTACKEXCEPTION_H
#define STACK_EMPTYSTACKEXCEPTION_H

#include <exception>

class EmptyStackException : public std::exception {
public:
    const char *what() {
        return "The stack is empty";
    }
};

#endif //STACK_EMPTYSTACKEXCEPTION_H
