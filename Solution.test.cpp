#include "Solution"

#include <gtest/gtest.h>

TEST(gcdOfStrings, NoramlTestCase) {
  EXPECT_EQ(gcdOfStrings("ABCABC", "ABC"), "ABC");
}