#pragma once

class MyClass3
{
public:
    virtual ~MyClass3() {}

    void doAnotherSomething() { m_value -= 1; }
    virtual int value() const { return this->m_value; }

private:
    int m_value = 0;
};
