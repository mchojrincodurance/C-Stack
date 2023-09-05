//
// Created by mauro on 5/09/23.
//

#ifndef STACK_EMPTYSTACKEXCEPTION_H
#define STACK_EMPTYSTACKEXCEPTION_H

#include <exception>
using namespace std;

class EmptyStackException: public std::exception {
public: char * what();
};


#endif //STACK_EMPTYSTACKEXCEPTION_H
