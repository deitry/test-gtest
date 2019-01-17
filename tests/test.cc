#include <gtest/gtest.h>

#include "include/my_class.test.cc"

TEST(myclass1_test_case, myclass1_test)
{
    auto a = MyClass();
    a.doSomething();
    EXPECT_EQ(a.value, 1);
}

TEST(sample1_test_case, sample1_test)
{
    EXPECT_EQ(1, 1);
}

int main(int argc, char** argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
