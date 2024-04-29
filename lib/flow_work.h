#ifndef FLOW_WORK_H_
#define FLOW_WORK_H_

#include <vector>

#include "work_search.h"

namespace s21 {

class FlowWork {
 public:
  void ToWork(std::string str) { obj.WorkFile(str); }

 private:
  WorkSearch obj;
};

}  // namespace s21

#endif  // FLOW_WORK_H_
