#ifndef VERTICES_SEARCH_H_
#define VERTICES_SEARCH_H_
#include <sstream>

#include "interface_search.h"

namespace s21 {

class VerticesSearch : public ISearch {
 public:
  void Reading(std::string str) override {
    std::istringstream iss(str);
    std::vector<double> numbers;
    double number;

    iss.ignore();
    while (iss >> number) {
      numbers.push_back(number);
    }

    if (numbers.size() != 3) {
      std::cout << "Error points" << std::endl;
    } else {
      Data &data = Data::GetData();
      auto &points = data.GetPoints();
      auto &extreme = data.GetExtremeValues();
      points.push_back(numbers[0]);
      points.push_back(numbers[1]);
      points.push_back(numbers[2]);
      FindExtreme(points, extreme);
    }
  }

 private:
  void FindExtreme(std::vector<double> &points, ExtremeValues &extreme) {
    if (points.size() == 3) {
      extreme.x_max = extreme.x_min = points[0];
      extreme.y_max = extreme.y_min = points[1];
      extreme.z_max = extreme.z_min = points[2];
    } else {
      extreme.x_max = std::max(extreme.x_max, points[points.size() - 3]);
      extreme.y_max = std::max(extreme.y_max, points[points.size() - 2]);
      extreme.z_max = std::max(extreme.z_max, points[points.size() - 1]);
      extreme.x_min = std::min(extreme.x_min, points[points.size() - 3]);
      extreme.y_min = std::min(extreme.y_min, points[points.size() - 2]);
      extreme.z_min = std::min(extreme.z_min, points[points.size() - 1]);
    }
  }
};

}  // namespace s21

#endif  // VERTICES_SEARCH_H_
