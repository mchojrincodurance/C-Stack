#include "Stack.h"
#include "EmptyStackException.h"

void Stack::pop() {
    throw EmptyStackException();
}
