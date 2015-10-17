
#include "class.h"
#include "func.h"
#include "base.h"
#include <gtest/gtest.h>


/*
TEST(FooTest, TestHandler){
    EXPECT_ANY_THROW(Func(10, 0));
    EXPECT_THROW(Func(0, 5), const char*);
    EXPECT_EQ(2, Func(4, 10));
    EXPECT_EQ("aaa","aaa");
    EXPECT_EQ(6, Func(30, 18));
    ASSERT_EQ(6, Func(30, 18));
    ASSERT_TRUE(true);
    ASSERT_FALSE(false);
    ASSERT_STREQ("bbb", "bbb");
    SUCCEED();
    //FAIL();
    //ADD_FAILURE();
}

bool MutuallyPrime(int m, int n){
    return Func(m , n) > 1;
}

TEST(PredicateAssertionTest, Demo){
    int m = 5, n = 6;
    EXPECT_PRED2(MutuallyPrime, m, n);
}
*/

TEST_F(FooCalcTest, HandleNoneZeroInput){
    EXPECT_EQ(4, m_foo.Calc(12, 16));
}

TEST_F(FooCalcTest, HandleNoneZeroInput_Error){
    EXPECT_EQ(5, m_foo.Calc(12, 16));
}

TEST_F(FooTest, Test1){
    EXPECT_ANY_THROW(Func(10, 0));
    EXPECT_THROW(Func(0, 5), const char*);
    EXPECT_EQ(2, Func(4, 10));
    EXPECT_EQ("aaa","aaa");
    EXPECT_EQ(6, Func(30, 18));
    ASSERT_EQ(6, Func(30, 18));
    ASSERT_TRUE(true);
    ASSERT_FALSE(false);
    ASSERT_STREQ("bbb", "bbb");
    SUCCEED();
    //FAIL();
    //ADD_FAILURE();
}

TEST_F(FooTest, Test2){
    EXPECT_ANY_THROW(Func(10, 0));
    EXPECT_THROW(Func(0, 5), const char*);
    EXPECT_EQ(2, Func(4, 10));
    EXPECT_EQ("aaa","aaa");
    EXPECT_EQ(6, Func(30, 18));
    ASSERT_EQ(6, Func(30, 18));
    ASSERT_TRUE(true);
    ASSERT_FALSE(false);
    ASSERT_STREQ("bbb", "bbb");
    SUCCEED();
}          

/*
TEST(IsPrimeTest, HandleTrueReturn){
    EXPECT_TRUE(IsPrime(3));
    EXPECT_TRUE(IsPrime(5));
    EXPECT_TRUE(IsPrime(11));
    EXPECT_TRUE(IsPrime(23));
    EXPECT_TRUE(IsPrime(17));
}
*/

/* 参数化 */
TEST_P(IsPrimeParamTest, HandleTrueReturn){
    int n = GetParam();
    EXPECT_TRUE(IsPrime(n));
}

INSTANTIATE_TEST_CASE_P(TrueReturn, IsPrimeParamTest, testing::Values(3, 5, 11, 23, 17));


/* 类型参数化 */
TYPED_TEST_CASE_P(TypeTest);

TYPED_TEST_P(TypeTest, DoesBlah) {
}

TYPED_TEST_P(TypeTest, HasPropertyA) {
}

REGISTER_TYPED_TEST_CASE_P(TypeTest, DoesBlah, HasPropertyA);
typedef testing::Types<char, int, unsigned int> MyTypes;
INSTANTIATE_TYPED_TEST_CASE_P(My, TypeTest, MyTypes);

TEST(FooDeathTest, Demo){
    EXPECT_DEATH(Die(), "");
}

