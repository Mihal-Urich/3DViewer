#ifndef POINT_H_
#define POINT_H_

namespace s21 {

struct Point {
  Point(double x1, double y1, double z1) : x(x1), y(y1), z(z1) {}
  double x;
  double y;
  double z;
};

}  // namespace s21

#endif  // POINT_H_
