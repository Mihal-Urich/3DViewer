#include "../lib/handle_file.h"

namespace s21 {

void HandleFile::OpenFile(std::string& path) {
  CloseFile();
  file_.open(path);
  if (!file_.is_open()) {
    throw std::invalid_argument("Пидорас! Пидорасина!");
  }
}

void HandleFile::CloseFile() { file_.close(); }

bool HandleFile::GetLine(std::string& buffer) {
  if (file_.is_open()) {
    std::getline(file_, buffer);
  }
  return file_.is_open() && !file_.eof();
}

}  // namespace s21
