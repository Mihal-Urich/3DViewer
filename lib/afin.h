#ifndef AFIN_H
#define AFIN_H

#include <cmath>

#include "data.h"

namespace s21 {
class affin {
 public:
  void Rotate(double x, double y, double z) {
    unsigned int psize = (*points_).size();
    double sin_x = sin(ToDeg(x));
    double cos_x = cos(ToDeg(x));
    double sin_y = sin(ToDeg(y));
    double cos_y = cos(ToDeg(y));
    double sin_z = sin(ToDeg(z));
    double cos_z = cos(ToDeg(z));
    for (unsigned int i = 0; i <= psize; i += 3) {
      double x = (*points_)[i];
      double y = (*points_)[i + 1];
      double z = (*points_)[i + 2];
      double temp_x, temp_y, temp_z;
      temp_y = cos_x * y - sin_x * z;
      temp_z = sin_x * y + cos_x * z;
      temp_x = cos_y * x + sin_y * temp_z;
      temp_z = -sin_y * x + cos_y * temp_z;
      (*points_)[i] = cos_z * temp_x - sin_z * temp_y;
      (*points_)[i + 1] = sin_z * temp_x + cos_z * temp_y;
      (*points_)[i + 2] = temp_z;
    }
  }

  void Move(double x, double y, double z) {
    unsigned int psize = (*points_).size();
    double deg_x = ToDeg(x);
    double deg_y = ToDeg(y);
    double deg_z = ToDeg(z);
    static double diff_x = 0;
    static double diff_y = 0;
    static double diff_z = 0;
    for (unsigned int i = 0; i <= psize; i += 3) {
      (*points_)[i] += deg_x - diff_x;
    }
    diff_x = deg_x;
    for (unsigned int i = 0; i <= psize; i += 3) {
      (*points_)[i + 1] += deg_y - diff_y;
    }
    diff_y = deg_y;

    for (unsigned int i = 0; i <= psize; i += 3) {
      (*points_)[i + 2] += deg_z - diff_z;
    }
    diff_z = deg_z;
  }

  double ToDeg(double angle) { return angle * M_PI / 180.0; }

  void Scale(double scale) {
    unsigned int psize = (*points_).size();
    if (scale == 0.0) return;
    for (unsigned int i = 0; i < psize; ++i) {
      (*points_)[i] *= scale;
    }
  }

 private:
  Data* data_ = &Data::GetData();
  std::vector<double>* points_ = &data_->GetPoints();
};
}  // namespace s21
#endif  // AFIN_H
