#ifndef WORK_SEARCH_H_
#define WORK_SEARCH_H_

#include "handle_file.h"
#include "read_file.h"

namespace s21 {

class WorkSearch {
 public:
  void WorkFile(std::string& path) {
    HF.OpenFile(path);
    RF.Search();
  }

 private:
  s21::HandleFile& HF = s21::HandleFile::GetHandleFile();
  s21::ReadFile RF;
};

}  // namespace s21

#endif  // WORK_SEARCH_H_
