#ifndef STACK_STRINGSTACK_H
#define STACK_STRINGSTACK_H


#include <gtest/gtest.h>
#include "Stack.h"

using namespace std;

class StringStack : public ::testing::Test {
protected:
    Stack<string> * stack;

    void SetUp() override {
        stack = new Stack<string >;
    }

    void TearDown() override {
        delete stack;
    }
};


#endif //STACK_STRINGSTACK_H
