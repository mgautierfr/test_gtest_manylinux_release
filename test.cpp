

#include "gtest/gtest.h"

template<typename T>
class ClassTest: public testing::Test {
  
};

TYPED_TEST_SUITE(ClassTest, int);

TYPED_TEST(ClassTest, foo) {
  ASSERT_EQ(5, 5);
}
