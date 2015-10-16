
#include <gtest/gtest.h> 
#include "base.h"

void FooEnvironment::SetUp(){
    std::cout << "----------------------- Foo FooEnvironment SetUP -----------------------" << std::endl;
}

void FooEnvironment::TearDown(){
    std::cout << "----------------------- Foo FooEnvironment TearDown ----------------------" << std::endl;
}

int* FooTest::shared_resource_ = NULL;

void FooTest::SetUpTestCase() {
    std::cout << "----------------------- FooTestSuit SetUP -----------------------" << std::endl;
    shared_resource_ = new int(1);
}

void FooTest::TearDownTestCase() {
    std::cout << "----------------------- FooTestSuit SetUP -----------------------" << std::endl;
    delete shared_resource_;
    shared_resource_ = NULL;
}

void FooCalcTest::SetUp(){
    m_foo.Init();
}

void FooCalcTest::TearDown(){
    m_foo.Finalize();
}
