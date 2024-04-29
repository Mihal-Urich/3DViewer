#ifndef CONTROLLER_H
#define CONTROLLER_H

#include <qstring.h>

#include "afin.h"
#include "work_search.h"

namespace s21 {
class Controller {
 public:
  Controller(affin* af, WorkSearch* ws, Data* data)
      : af_(af), ws_(ws), data_(data) {}
  void ContrRot(double x, double y, double z) { af_->Rotate(x, y, z); }

  void ContrMov(double x, double y, double z) { af_->Move(x, y, z); }

  void ContrFile(std::string& std_path) { ws_->WorkFile(std_path); }

  void ContrScale(double angle) { af_->Scale(angle); }

  Data* GetData() { return data_; }

 private:
  affin* af_;
  WorkSearch* ws_;
  Data* data_;
};
}  // namespace s21

#endif  // CONTROLLER_H
