#include "gtest/gtest.h"

#include <Eigen/Dense>

TEST (Eigen, dotProduct) {
  Eigen::Vector3d v {0.1, 0.2, 0.3};
  double expected = sqrt(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
  ASSERT_EQ(v.norm(), expected);
}
