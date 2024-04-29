#ifndef DATA_READER_H_
#define DATA_READER_H_

#include "../Search/face_search.h"
#include "../Search/vertices_search.h"

namespace s21 {

class DataReader {
 public:
  DataReader() : mode_(nullptr) {}
  void SetMode(ISearch *mode) { mode_ = mode; }
  void RunMode(std::string str) {
    if (mode_) {
      mode_->Reading(str);
    }
  }

 private:
  ISearch *mode_;
};

}  // namespace s21

#endif  // DATA_READER_H_
