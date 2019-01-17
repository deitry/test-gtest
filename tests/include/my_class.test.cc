#include "../../include/my_class.cc"
#include "../../include/mock/my_class3_mock.h"

#include <gtest/gtest.h>
#include <gmock/gmock.h>

TEST(myclass_test_case, myclass_test)
{
    auto a = MyClass();
    a.doSomething();
    EXPECT_EQ(a.value, 1);
}

TEST(myclass3_test_case, myclass3_test)
{
    // MyClass3 a;
    MyClass3Mock a;

    for (int i = 0; i < 3; i++)
        a.doAnotherSomething();

    EXPECT_CALL(a, value()).WillOnce(::testing::Return(-1));

    EXPECT_EQ(a.value(), -1);
}
