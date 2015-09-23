/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "rando.h"

/*  
	FUNCTIONS WE NEED TO TEST:

	bool shouldWorry(bool,bool,bool);
	bool isDivisbleBy(int,int);
	bool isPrime(int);
	int nearestToZero(int,int);
*/
 
class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(RandoTest, allChildrenSmile)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(true,true,true) );
}

TEST(RandoTest, twoChildrenSmile)
{
        Rando rando;
        ASSERT_TRUE( rando.shouldWorry(true,false,true) );
}

TEST(RandoTest, oneChildSmile)
{
        Rando rando;
        ASSERT_TRUE( rando.shouldWorry(false,true,false) );
}
TEST(RandoTest, notAllChildrenSmile)
{
        Rando rando;
        ASSERT_TRUE( rando.shouldWorry(false,false,false) );
}

TEST(RandoTest, evenNumbers)
{
        Rando rando;
        ASSERT_TRUE( rando.isDivisbleBy(4,2) );
}

TEST(RandoTest, oddNumbers)
{
        Rando rando;
        ASSERT_TRUE( rando.isDivisbleBy(7,5) );
}


TEST(RandoTest, primeNumbers)
{
        Rando rando;
        ASSERT_TRUE( rando.isPrime(7) );
}


