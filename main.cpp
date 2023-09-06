#include "gtest/gtest.h"
#include "EmptyStackException.h"
#include <exception>
#include "StringStack.h"

using namespace std;

const auto firstElement = (string)"FIRST ELEMENT";
const auto secondElement = (string)"SECOND ELEMENT";

TEST_F(StringStack, throw_exception_if_popped_when_empty) {
    string popped;

    EXPECT_THROW(popped = stack->pop(), EmptyStackException);
}

TEST_F(StringStack, pop_the_last_element_pushed) {
    stack->push(firstElement);
    stack->push(secondElement);

    EXPECT_EQ(stack->pop(), secondElement) << "Expected to get the second element";
}

TEST_F(StringStack, pop_elements_in_the_reverse_order_they_were_pushed) {
    stack->push(firstElement);
    stack->push(secondElement);

    EXPECT_EQ(stack->pop(), secondElement) << "Expected to get the second element first";
    EXPECT_EQ(stack->pop(), firstElement) << "Expected to get the first element second";
}