#include <limits.h>
#include <our_model.h>
#include "gtest/gtest.h"

TEST(halil, bir_gonder_iki_al) {
  EXPECT_EQ(2, halil(1));
}

TEST(halil, dort_gonder_alti_al) {
  EXPECT_EQ(6, halil(4));
}

TEST(halil, uc_gonder_dort_al) {
  EXPECT_EQ(4, halil(3));
}