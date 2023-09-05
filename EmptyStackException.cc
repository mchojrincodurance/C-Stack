//
// Created by mauro on 5/09/23.
//

#include "EmptyStackException.h"

char *EmptyStackException::what() {
    return "The stack is empty";
}
