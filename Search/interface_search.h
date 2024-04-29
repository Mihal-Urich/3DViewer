#ifndef INTERFACE_SEARCH_H_
#define INTERFACE_SEARCH_H_

#include <iostream>
#include <string>

#include "../lib/data.h"

namespace s21 {

class ISearch {
 public:
  void virtual Reading(std::string str) = 0;
};

}  // namespace s21

#endif  // INTERFACE_SEARCH_H_
