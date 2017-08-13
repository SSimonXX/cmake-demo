#include <iostream>
#include "gtest/gtest.h"

#include "util.h"

class FooTest : public testing::Test {
protected:
	
	FooTest() {
		//initial

	}

	virtual ~FooTest() {
		//release resource which will not thow an exception

	}

	//execute after constructor 
	virtual void SetUp() {
		//intitial

	}

	//execute before destructor
	virtual void TearDown() {
		//release resource

	}

	//object to test

};

TEST_F(FooTest, OnInput){
	int res = minus(4, 4);
	EXPECT_EQ(0 , res);
}

TEST(add, ResetsToZero){
	int res = add(1, 3);
	EXPECT_EQ(4,res);
}


