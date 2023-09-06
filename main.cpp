#include "gtest/gtest.h"
#include "stack.h"
#include "EmptyStackException.h"
#include <exception>

using namespace std;

TEST(StackShould, throw_exception_if_popped_when_empty) {
    auto stack = new Stack<const char *>();
    const char * popped;

    EXPECT_THROW(popped = stack->pop(), EmptyStackException);
}

TEST(StackShould, pop_the_last_element_pushed) {
    auto stack = new Stack<const char *>();

    const auto firstElement = "FIRST ELEMENT";
    stack->push(firstElement);
    const auto secondElement = "SECOND ELEMENT";
    stack->push(secondElement);

    EXPECT_EQ(stack->pop(), secondElement) << "Expected to get the second element";
    EXPECT_EQ(stack->pop(), firstElement) << "Expected to get the first element";
}