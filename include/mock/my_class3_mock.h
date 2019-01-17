#pragma once

#include "gmock/gmock.h"
#include "../my_class3.h"

class MyClass3Mock : public MyClass3
{
public:
    MOCK_CONST_METHOD0(value, int());
};
