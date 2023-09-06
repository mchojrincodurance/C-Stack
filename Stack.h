#ifndef STACK_STACK_H
#define STACK_STACK_H

#include <vector>
#include "EmptyStackException.h"

using namespace std;

template<typename E>
class Stack {

public:
    Stack();

    E pop();

    void push(const E &newElement);

    vector<E> *elements;
};

template<typename E>
Stack<E>::Stack() {
    elements = new vector<E>();
}

template<typename E>
void Stack<E>::push(const E &newElement) {
    elements->push_back(newElement);
}

template<typename E>
E Stack<E>::pop() {
    if (elements->empty()) {
        throw EmptyStackException();
    }

    E toReturn = elements->back();
    elements->pop_back();

    return toReturn;
}

#endif //STACK_STACK_H
