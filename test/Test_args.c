// std libs
#include <stdbool.h>

// test libs
#include "unity.h"

// module under test
#include "args.h"

void setUp(void)
{
  // nothing
}

void tearDown(void)
{
  // nothing
}

void test_tautology(void)
{
  TEST_ASSERT_TRUE(1);
}

int main(void)
{
  UNITY_BEGIN();
  RUN_TEST(test_tautology);
  return UNITY_END();
}
