
#include "base.h"
#include <gtest/gtest.h>

int main(int argc, char* argv[]){
    ::testing::FLAGS_gtest_death_test_style = "threadsafe";
    testing::AddGlobalTestEnvironment(new FooEnvironment);
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

