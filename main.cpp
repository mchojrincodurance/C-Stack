#include "gtest/gtest.h"
#include "EmptyStackException.h"
#include "Stack.h"

TEST(StackShould, throw_exception_if_popped_when_empty)
{
    Stack * stack = new Stack();

    EXPECT_THROW(stack->pop(), EmptyStackException);
}