#include <iostream>
#include "gtest/gtest.h"

#include "project1.h"
#include "util.h"

TEST(add, ResetsToZero){
	int res = add(1, 3);
	EXPECT_EQ(4,res);
}


