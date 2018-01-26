#include "BufferTest.h"
#include <ObjectPool.h>

BufferTest::BufferTest()
{
}

BufferTest::~BufferTest()
{
}

void BufferTest::SetUp(){}
void BufferTest::TearDown(){}

TEST_F(BufferTest, TestConstructor)
{
	Buffer buffer(10, 21);
	
	EXPECT_EQ(10, buffer.Size());
	EXPECT_EQ(21, buffer.Id());
}
