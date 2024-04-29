#ifndef DATA_H_
#define DATA_H_

#include <iostream>
#include <vector>

#include "extreme_values.h"
#include "point.h"

namespace s21 {

class Data {
 public:
  static Data &GetData() {
    static Data main_obj;
    return main_obj;
  }
  std::vector<double> &GetPoints() { return points_; }
  std::vector<unsigned int> &GetFaces() { return faces_; }
  ExtremeValues &GetExtremeValues() { return min_max_; }
  void Clear() {
    points_.clear();
    faces_.clear();
  }
  bool EmptyObj() { return (points_.empty()); }

 private:
  ExtremeValues min_max_;
  std::vector<double> points_;
  std::vector<unsigned int> faces_;
};

}  // namespace s21

#endif  // DATA_H_
