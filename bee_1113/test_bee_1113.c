#include "../Unity/src/unity.h"
#include "./bee_1113.h"

void setUp(){};

void tearDown(){};

void test_function_check_bigger()
{
  TEST_ASSERT_FALSE(check_bigger(13, 22));
  TEST_ASSERT_TRUE(check_bigger(25, 22));
  TEST_ASSERT_EQUAL(0, check_bigger(0, 0));
  TEST_ASSERT_EQUAL(0, check_bigger(5, 5));
}

int main(void)
{
  UNITY_BEGIN();
  RUN_TEST(test_function_check_bigger);
  return UNITY_END();
}