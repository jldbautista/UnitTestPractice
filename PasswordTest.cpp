/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include "Password.h"

class PasswordTest : public ::testing::Test
{
	protected:
		PasswordTest(){} //constructor runs before each test
		virtual ~PasswordTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, single_letter_password)
{
	Password my_password;
	ASSERT_EQ(1, my_password.count_leading_characters("Z"));
}
TEST(PasswordTest, two_leading_letters)
{
	Password my_password;
	ASSERT_EQ(2, my_password.count_leading_characters("aab"));
}
TEST(PasswordTest, same_long_string)
{
	Password my_password;
	ASSERT_EQ(9, my_password.count_leading_characters("aaaaaaaaa"));
}
TEST(PasswordTest, capital_letters)
{
	Password my_password;
	ASSERT_EQ(1, my_password.count_leading_characters("ZzZzzWwW"));
}
TEST(PasswordTest, special_characters)
{
	Password my_password;
	ASSERT_EQ(2, my_password.count_leading_characters("$$ex$$"));
}
TEST(PasswordTest, empty_string)
{
	Password my_password;
	ASSERT_EQ(0, my_password.count_leading_characters(""));
}
TEST(PasswordTest, upper_case_letters)
{
	Password my_password;
	ASSERT_EQ(3, my_password.count_leading_characters("ZZZ"));
}