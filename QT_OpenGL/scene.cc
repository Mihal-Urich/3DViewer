#include "scene.h"

s21::Scene::Scene(QWidget* parent) : QOpenGLWidget(parent) {
  settings = new QSettings(QDir::homePath() + "/save_config/settings.conf",
                           QSettings::IniFormat);
}

void s21::Scene::FreeMem() {
  qcount_facets_ = 0;
  qcount_vert_ = 0;
}

void s21::Scene::ReadFile(std::string& path_file) {
  FreeMem();
  cntr_->ContrFile(path_file);
  qcount_vert_ = cntr_->GetData()->GetPoints().size();
  qcount_facets_ = cntr_->GetData()->GetFaces().size();
}

void s21::Scene::initializeGL() { glEnable(GL_DEPTH_TEST); }

void s21::Scene::resizeGL(int w, int h) { glViewport(0, 0, w, h); }

void s21::Scene::paintGL() {
  Projection(proj_);
  glClearColor(back_red_ / 255.0f, back_green_ / 255.0f, back_blue_ / 255.0f,
               back_alpha_ / 255.0f);
  if (qcount_facets_ > 3) {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0, 0, -3);
    glRotatef(x_rot_, 1, 0, 0);
    glRotatef(y_rot_, 0, 1, 0);
    glRotatef(z_rot_, 0, 0, 1);
    Draw();
  }
}

void s21::Scene::Draw() {
  if (qcount_facets_ > 3) {
    glVertexPointer(3, GL_DOUBLE, 0, cntr_->GetData()->GetPoints().data());
    glEnableClientState(GL_VERTEX_ARRAY);
    VertexStyle(v_s_);
    VertexColor(v_c_);
    if (v_s_ != 0) {
      glPointSize(v_w_);
      glDrawArrays(GL_POINTS, 0, qcount_vert_ / 3);
    }
    LineColor(l_c_);
    LineStyle(l_s_);
    glDrawElements(GL_LINES, qcount_facets_, GL_UNSIGNED_INT,
                   cntr_->GetData()->GetFaces().data());
    glLineWidth(l_w_);
    glDisableClientState(GL_VERTEX_ARRAY);
  }
}

void s21::Scene::LineColor(int l_c) {
  if (l_c == 0) {
    glColor3f(1, 1, 1);
  } else if (l_c == 1) {
    glColor3f(0, 0, 0.2);
  } else if (l_c == 2) {
    glColor3f(0.5, 0, 0);
  } else if (l_c == 3) {
    glColor3f(0.1, 1, 0.7);
  } else if (l_c == 4) {
    glColor3f(0.1, 0, 1);
  }
}

void s21::Scene::LineStyle(int l_s) {
  if (l_s == 1) {
    glDisable(GL_LINE_STIPPLE);
    glEnable(GL_LINE);
  } else if (l_s == 0) {
    glLineStipple(1, 0x00ff);
    glEnable(GL_LINE_STIPPLE);
  }
}

void s21::Scene::VertexColor(int w_c) {
  if (w_c == 0) {
    glColor3f(1, 1, 1);
  } else if (w_c == 1) {
    glColor3f(0, 0, 0.2);
  } else if (w_c == 2) {
    glColor3f(0.5, 0, 0);
  } else if (w_c == 3) {
    glColor3f(0.1, 1, 0.7);
  } else if (w_c == 4) {
    glColor3f(0.1, 0, 1);
  }
}

void s21::Scene::VertexStyle(int v_s) {
  if (v_s == 1) {
    glEnable(GL_POINT_SMOOTH);
  } else if (v_s == 2) {
    glDisable(GL_POINT_SMOOTH);
    glEnable(GL_POINT);
  }
}

void s21::Scene::Projection(int proj) {
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  if (proj) {
    glFrustum(-1, 1, -1, 1, 1, 99999);
  } else {
    glOrtho(-1, 1, -1, 1, -1, 99999);
  }
}

void s21::Scene::mousePressEvent(QMouseEvent* mouse) {
  switch (mouse->button()) {
    case Qt::LeftButton:
      moving_ = true;
      break;
    default:
      moving_ = false;
      break;
  }
  start_x_ = mouse->pos().x();
  start_y_ = mouse->pos().y();
}

void s21::Scene::mouseMoveEvent(QMouseEvent* mouse) {
  if (moving_) {
    y_rot_ = y_rot_ + (mouse->pos().x() - start_x_);
    x_rot_ = x_rot_ + (mouse->pos().y() - start_y_);
  }
  start_x_ = mouse->pos().x();
  start_y_ = mouse->pos().y();
  update();
}

void s21::Scene::SaveSetting() {
  settings->setValue("l_c", l_c_);
  settings->setValue("l_s", l_s_);
  settings->setValue("l_w", l_w_);
  settings->setValue("v_c", v_c_);
  settings->setValue("v_s", v_s_);
  settings->setValue("v_w", v_w_);
  settings->setValue("l_c", l_c_);
  settings->setValue("proj", proj_);
  settings->setValue("back_red", back_red_);
  settings->setValue("back_green", back_green_);
  settings->setValue("back_blue", back_blue_);
  settings->setValue("back_alpha", back_alpha_);
}

void s21::Scene::LoadSetting() {
  l_c_ = settings->value("l_c", 0).toInt();
  l_s_ = settings->value("l_s", 0).toInt();
  l_w_ = settings->value("l_w", 0).toInt();
  v_c_ = settings->value("v_c", 0).toInt();
  v_s_ = settings->value("v_s", 0).toInt();
  v_w_ = settings->value("v_w", 0).toInt();
  proj_ = settings->value("proj", proj_).toInt();
  back_red_ = settings->value("back_red", back_red_).toFloat();
  back_green_ = settings->value("back_green", back_green_).toFloat();
  back_blue_ = settings->value("back_blue", back_blue_).toFloat();
  back_alpha_ = settings->value("back_alpha", back_alpha_).toFloat();
}
