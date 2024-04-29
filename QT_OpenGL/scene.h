#ifndef SCENE_H
#define SCENE_H

#include <QMessageBox>
#include <QOpenGLShaderProgram>
#include <QOpenGLWidget>
#include <QWidget>
#include <QtOpenGL>

#include "../lib/afin.h"
#include "../lib/controller.h"
#include "../lib/data.h"
#include "../lib/data_reader.h"
#include "../lib/extreme_values.h"
#include "../lib/point.h"
#include "../lib/work_search.h"

#define GL_SILENCE_DEPRECATION

namespace s21 {

class Scene : public QOpenGLWidget {
 private slots:

  QSettings *settings;
  QPoint mPos;

  void mousePressEvent(QMouseEvent *) override;
  void mouseMoveEvent(QMouseEvent *) override;

  void initializeGL() override;
  void resizeGL(int w, int h) override;
  void paintGL() override;

  void LineColor(int l_c);
  void LineStyle(int l_s);
  void VertexColor(int w_c);
  void VertexStyle(int v_s);
  void Projection(int proj);
  void Draw();

 public:
  void SaveSetting();
  void LoadSetting();
  void FreeMem();
  void ReadFile(std::string &path);
  bool EmptyObj() { return cntr_->GetData()->EmptyObj(); }
  void Init(s21::Controller *cntr) { cntr_ = cntr; }

  void SetLineStyle(int s) { l_s_ = s; };
  void SetLineColor(int c) { l_c_ = c; };
  void SetLineWidth(int w) { l_w_ = w; };
  void SetVertexStyle(int s) { v_s_ = s; };
  void SetVertexColor(int c) { v_c_ = c; };
  void SetVertexWidth(int w) { v_w_ = w; };
  unsigned int GetVert() { return qcount_vert_; };
  unsigned int GetFace() { return qcount_facets_; };
  void SetProj(int p) { proj_ = p; };
  int GetProj() { return proj_; };
  void SetBackgroundColor(QColor color) {
    back_red_ = color.red();
    back_green_ = color.green();
    back_blue_ = color.blue();
    back_alpha_ = color.alpha();
  };

  Scene(QWidget *parent = 0);

 private:
  double back_red_, back_green_, back_blue_, back_alpha_;
  unsigned int qcount_vert_ = 0, qcount_facets_ = 0;
  int l_s_ = 1, l_c_ = 0, l_w_ = 1, v_c_ = 0, v_s_ = 0, v_w_ = 1, proj_ = 0;
  s21::Controller *cntr_;
  double x_rot_, y_rot_, z_rot_, start_y_, start_x_;
  bool moving_;
};
}  // namespace s21
#endif  // SCENE_H
