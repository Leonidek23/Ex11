// Copyright Leonidek23 2021
#include <string>
#include "train.h"

TEST(TrainTest, test1) {
Train train(9);
EXPECT_EQ(9, train.getlen());
}

TEST(TrainTest, test2) {
Train train(1206);
EXPECT_EQ(1206, train.getlen());
}

TEST(TrainTest, test3) {
Train train(10322);
EXPECT_EQ(10322, train.getlen());
}

