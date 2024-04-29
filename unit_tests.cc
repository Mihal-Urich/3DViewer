#include <gtest/gtest.h>

#include "lib/afin.h"
#include "lib/work_search.h"

class ViewerTests : public ::testing::Test {
 protected:
  s21::WorkSearch viewer_test;
  s21::Data data;
  s21::affin af;
};

TEST_F(ViewerTests, Points) {
  std::string str = "obj/cube.obj";
  viewer_test.WorkFile(str);
  auto& points = data.GetPoints();
  std::vector<double> check = {-1, -1, 1,  1, -1, 1,  1, 1, 1,  -1, 1, 1,
                               -1, -1, -1, 1, -1, -1, 1, 1, -1, -1, 1, -1};
  for (size_t i = 0; i < points.size(); ++i) {
    EXPECT_DOUBLE_EQ(points[i], check[i]);
  }
}

TEST_F(ViewerTests, Faces) {
  std::string str = "obj/cube.obj";
  viewer_test.WorkFile(str);
  auto& faces = data.GetFaces();
  std::vector<unsigned int> check = {
      0, 1, 1, 3, 3, 0, 1, 2, 2, 3, 3, 1, 1, 5, 5, 2, 2, 1, 5, 6, 6, 2, 2, 5,
      5, 4, 4, 6, 6, 5, 4, 7, 7, 6, 6, 4, 4, 0, 0, 7, 7, 4, 0, 3, 3, 7, 7, 0,
      4, 1, 1, 0, 0, 4, 4, 5, 5, 1, 1, 4, 3, 2, 2, 6, 6, 3, 6, 7, 7, 3, 3, 6};
  for (size_t i = 0; i < faces.size(); ++i) {
    EXPECT_EQ(faces[i], check[i]);
  }
}

TEST_F(ViewerTests, FailOpen) {
  std::string str = "obj/nofile.obj";
  ASSERT_ANY_THROW(viewer_test.WorkFile(str));
}

TEST_F(ViewerTests, Move) {
  std::string str = "obj/cube.obj";
  viewer_test.WorkFile(str);
  af.Move(15.3, -15.3, 0.3);
  auto& points = data.GetPoints();
  std::vector<double> check = {
      -0.732965, -1.26704, 1.00524,   1.26704,   -1.26704, 1.00524,
      1.26704,   0.732965, 1.00524,   -0.732965, 0.732965, 1.00524,
      -0.732965, -1.26704, -0.994764, 1.26704,   -1.26704, -0.994764,
      1.26704,   0.732965, -0.994764, -0.732965, 0.732965, -0.994764};
  for (size_t i = 0; i < points.size(); ++i) {
    EXPECT_DOUBLE_EQ(points[i], check[i]);
  }
}

TEST_F(ViewerTests, Rotate) {
  std::string str = "obj/cube.obj";
  viewer_test.WorkFile(str);
  af.Rotate(13.2, 0.99, -180);
  auto& points = data.GetPoints();
  std::vector<double> check = {
      0.986975,  1.20193,   0.762395,  -1.01273,  1.20193,   0.727839,
      -1.02062,  -0.745228, 1.18447,   0.979084,  -0.745228, 1.21903,
      1.02062,   0.745228,  -1.18447,  -0.979084, 0.745228,  -1.21903,
      -0.986975, -1.20193,  -0.762395, 1.01273,   -1.20193,  -0.727839};
  for (size_t i = 0; i < points.size(); ++i) {
    EXPECT_DOUBLE_EQ(points[i], check[i]);
  }
}

TEST_F(ViewerTests, Scale) {
  std::string str = "obj/cube.obj";
  viewer_test.WorkFile(str);
  af.Scale(13.2);
  auto& points = data.GetPoints();
  std::vector<double> check = {-13.2, -13.2, 13.2,  13.2,  -13.2, 13.2,
                               13.2,  13.2,  13.2,  -13.2, 13.2,  13.2,
                               -13.2, -13.2, -13.2, 13.2,  -13.2, -13.2,
                               13.2,  13.2,  -13.2, -13.2, 13.2,  -13.2};
  for (size_t i = 0; i < points.size(); ++i) {
    EXPECT_DOUBLE_EQ(points[i], check[i]);
  }
}

int main(int argc, char** argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
