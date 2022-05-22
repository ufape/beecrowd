#include "../Unity/src/unity.h"
#include "./bee_1113.h"

void setUp(){};

void tearDown(){};

void test_function_check_increasing()
{
  TEST_ASSERT_FALSE(check_increasing(13, 22));
  TEST_ASSERT_TRUE(check_increasing(25, 22));
  TEST_ASSERT_EQUAL(0, check_increasing(0, 0));
  TEST_ASSERT_EQUAL(0, check_increasing(5, 5));
}

int main(void)
{
  UNITY_BEGIN();
  RUN_TEST(test_function_check_increasing);
  return UNITY_END();
}