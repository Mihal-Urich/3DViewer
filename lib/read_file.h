#ifndef READ_FILE_H_
#define READ_FILE_H_

#include "data_reader.h"
#include "handle_file.h"

namespace s21 {

class ReadFile {
 public:
  ReadFile() {}

  void Search() {
    std::string buffer = "";
    auto &data = Data::GetData();
    data.Clear();
    auto &extreme = data.GetExtremeValues();
    auto &points = data.GetPoints();
    while (file_.GetLine(buffer)) {
      if ((buffer[0] == 'v') && (buffer[1] == ' ')) {
        s21::VerticesSearch vert;
        s21::DataReader DR;
        DR.SetMode(&vert);
        DR.RunMode(buffer);
      } else if ((buffer[0] == 'f') && (buffer[1] == ' ')) {
        s21::FaceSearch face;
        s21::DataReader DR;
        DR.SetMode(&face);
        DR.RunMode(buffer);
      }
      buffer = "";
    }
    Centering(points, extreme);
  }

  void Centering(std::vector<double> &points, ExtremeValues &extreme) {
    double center_x, center_y, center_z;
    double dmax, coefficient;
    center_x = extreme.x_min + ((extreme.x_max - extreme.x_min) / 2);
    center_y = extreme.y_min + ((extreme.y_max - extreme.y_min) / 2);
    center_z = extreme.z_min + ((extreme.z_max - extreme.z_min) / 2);
    double delta_x = extreme.x_max - extreme.x_min;
    double delta_y = extreme.y_max - extreme.y_min;
    double delta_z = extreme.z_max - extreme.z_min;
    dmax = std::max(delta_x, std::max(delta_y, delta_z));
    coefficient = (1 - (1 * (-1))) / dmax;
    for (size_t i = 0; i < points.size(); i += 3) {
      points[i] -= center_x;
      points[i] *= coefficient;
      points[i + 1] -= center_y;
      points[i + 1] *= coefficient;
      points[i + 2] -= center_z;
      points[i + 2] *= coefficient;
    }
  }

 private:
  HandleFile &file_ = s21::HandleFile::GetHandleFile();
};

}  // namespace s21

#endif  // READ_FILE_H_
