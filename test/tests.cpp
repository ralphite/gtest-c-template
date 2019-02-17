#include "gtest/gtest.h"

#include "../src/strlen.c"


TEST(TestFtLib, test_strlen){
   EXPECT_EQ(3, strlen("abc"));
}

int main(int argc, char ** argv){
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
