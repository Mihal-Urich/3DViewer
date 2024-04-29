#ifndef FACE_SEARCH_H_
#define FACE_SEARCH_H_
#include <sstream>

#include "interface_search.h"

namespace s21 {

class FaceSearch : public ISearch {
 public:
  void Reading(std::string str) override {
    std::vector<int> numbers;
    if (str.find("/") != std::string::npos) {
      bool fl = true;
      std::string buffer;
      for (size_t i = 1; i < str.size(); ++i) {
        if (str[i] == ' ') {
          fl = true;
        }
        if (fl) {
          if ((str[i] == '/') || (str[i] == '\n')) {
            numbers.push_back(std::stoi(buffer));
            buffer.clear();
            fl = false;
          } else {
            buffer.push_back(str[i]);
          }
        }
      }
    } else {
      std::istringstream iss(str);
      int number = 0;
      iss.ignore();
      while (iss >> number) {
        numbers.push_back(number);
      }
    }

    Data &data = Data::GetData();
    auto &faces = data.GetFaces();
    auto &points = data.GetPoints();
    size_t point_counter = points.size();
    for (size_t i = 0; i < numbers.size(); ++i) {
      if (numbers[i] < 0) {
        numbers[i] = (point_counter / 3) + numbers[i] + 1;
      }
      if (i > 0) {
        faces.push_back(numbers[i - 1] - 1);
        faces.push_back(numbers[i] - 1);
      }
    }
    faces.push_back(numbers[numbers.size() - 1] - 1);
    faces.push_back(numbers[0] - 1);
  }
};

}  // namespace s21

#endif  // FACE_SEARCH_H_
