#include <lib/Additor.hpp>
#include <gtest/gtest.h>

TEST(ArgParserTestSuite, EmptyTest) {
    ASSERT_EQ(Add({30, 70}), 100);
}