#ifndef HANDLE_FILE_H_
#define HANDLE_FILE_H_

#include <fstream>
#include <iostream>
#include <string>

namespace s21 {

class HandleFile {
 public:
  static HandleFile& GetHandleFile() {
    static HandleFile main_obj;
    return main_obj;
  }
  void OpenFile(std::string& path);
  void CloseFile();
  bool GetLine(std::string& buffer);

 private:
  HandleFile() {}
  HandleFile(const HandleFile&) {}
  HandleFile(HandleFile&&) {}
  HandleFile& operator=(HandleFile&) { return *this; }
  HandleFile& operator=(HandleFile&&) { return *this; }
  ~HandleFile() { CloseFile(); };

  std::ifstream file_;
};

}  // namespace s21

#endif  // HANDLE_FILE_H_
