
#ifndef __BASE_H__
#define __BASE_H__

#include "class.h"
#include <gtest/gtest.h> 

class FooEnvironment:public testing::Environment{
    public:
        virtual void SetUp();
        virtual void TearDown();
};

class FooTest:public testing::Test {
    protected:
        static void SetUpTestCase();
        static void TearDownTestCase();
        static int* shared_resource_;
};

class FooCalcTest:public testing::Test{
    protected:
        virtual void SetUp();
        virtual void TearDown();
        A m_foo;
};

class IsPrimeParamTest : public::testing::TestWithParam<int>
{
};

template <typename T>
class TypeTest : public testing::Test {
};

#endif //__BASE_H__
