/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_not_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Not a palindrome");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_simple_palindrome_ignore_case)
{
    Practice obj;
    bool actual = obj.isPalindrome("raceCaR");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, symbols_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("[;");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, empty_string_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, sort_descending_123)
{
    Practice obj;
    int a = 1, b = 2, c = 3;
    obj.sortDescending(a,b,c);
    ASSERT_EQ(3,a);
    ASSERT_EQ(2,b);
    ASSERT_EQ(1,c);
}

TEST(PracticeTest, sort_descending_213)
{
    Practice obj;
    int a = 2, b = 1, c = 3;
    obj.sortDescending(a,b,c);
    ASSERT_EQ(3,a);
    ASSERT_EQ(2,b);
    ASSERT_EQ(1,c);
}

TEST(PracticeTest, sort_descending_132)
{
    Practice obj;
    int a = 1, b = 3, c = 2;
    obj.sortDescending(a,b,c);
    ASSERT_EQ(3,a);
    ASSERT_EQ(2,b);
    ASSERT_EQ(1,c);
}

TEST(PracticeTest, sort_descending_312)
{
    Practice obj;
    int a = 3, b = 1, c = 2;
    obj.sortDescending(a,b,c);
    ASSERT_EQ(3,a);
    ASSERT_EQ(2,b);
    ASSERT_EQ(1,c);
}

TEST(PracticeTest, sort_descending_321)
{
    Practice obj;
    int a = 3, b = 2, c = 1;
    obj.sortDescending(a,b,c);
    ASSERT_EQ(3,a);
    ASSERT_EQ(2,b);
    ASSERT_EQ(1,c);
}

TEST(PracticeTest, sort_descending_all_same)
{
    Practice obj;
    int a = 3, b = 3, c = 3;
    obj.sortDescending(a,b,c);
    ASSERT_EQ(3,a);
    ASSERT_EQ(3,b);
    ASSERT_EQ(3,c);
}

TEST(PracticeTest, sort_descending_331)
{
    Practice obj;
    int a = 3, b = 3, c = 1;
    obj.sortDescending(a,b,c);
    ASSERT_EQ(3,a);
    ASSERT_EQ(3,b);
    ASSERT_EQ(1,c);
}

TEST(PracticeTest, sort_descending_311)
{
    Practice obj;
    int a = 3, b = 1, c = 1;
    obj.sortDescending(a,b,c);
    ASSERT_EQ(3,a);
    ASSERT_EQ(1,b);
    ASSERT_EQ(1,c);
}

TEST(PracticeTest, sort_descending_313)
{
    Practice obj;
    int a = 3, b = 1, c = 3;
    obj.sortDescending(a,b,c);
    ASSERT_EQ(3,a);
    ASSERT_EQ(3,b);
    ASSERT_EQ(1,c);
}

TEST(PracticeTest, sort_descending_133)
{
    Practice obj;
    int a = 1, b = 3, c = 3;
    obj.sortDescending(a,b,c);
    ASSERT_EQ(3,a);
    ASSERT_EQ(3,b);
    ASSERT_EQ(1,c);
}
