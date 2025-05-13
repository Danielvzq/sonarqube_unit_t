#include <gtest/gtest.h>
#include "multiply.h"

TEST(MultiplyTest, HandlesPositiveInput)
{
    int result = multiply(4, 3);
    EXPECT_EQ(result, 12);
}

TEST(MultiplyTest, HandlesNegativeInput)
{
    int result = multiply(-4, 3);
    EXPECT_EQ(result, -12);
}

TEST(MultiplyTest, HandlesZeroInput)
{
    int result = multiply(4, 0);
    EXPECT_EQ(result, 0);
}
