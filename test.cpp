#include "pch.h"
#include "..\ProgTech_Grebnyv_SummerPract\solution.c"

TEST(validTest1,correct)
{
	EXPECT_EQ(valid(05,0006),1);
	EXPECT_EQ(valid(3,04),1);
	EXPECT_EQ(valid(000023,00012),1);
	EXPECT_EQ(valid(23,59),1);
	EXPECT_EQ(valid(12,52),1);
	EXPECT_EQ(valid(00,00),1);
}

TEST(validTest2,ncorrect)
{
	EXPECT_EQ(valid(0010000000,012000000),-1);
	EXPECT_EQ(valid(23,61),-1);
	EXPECT_EQ(valid(-2,12),-1);
	EXPECT_EQ(valid(46,12),-1);
	EXPECT_EQ(valid(24,01),-1);
	EXPECT_EQ(valid(55555555,12),-1);
}
