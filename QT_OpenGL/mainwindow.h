#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QColorDialog>
#include <QFileDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QSettings>
#include <QTimer>
#include <QUrl>

#include "../QtGifImage/src/gifimage/qgifimage.h"
#include "../lib/afin.h"
#include "../lib/controller.h"
#include "scene.h"

QT_BEGIN_NAMESPACE

namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

 public:
  MainWindow(s21::Controller *cntr, QWidget *parent = nullptr);
  ~MainWindow();

  float time;
  QVector<QImage> GIF;
  QTimer *record_time;
  QString qpath_file;
  bool is_recording;

 private slots:

  void on_btnOpenFile_clicked();

  void on_cumBoxLineColor_activated(int index);

  void on_radioBtnLineSolid_clicked();

  void on_radioBtnLineDash_clicked();

  void on_sliderLineThick_valueChanged(int value);

  void on_cumBoxVertexColor_activated(int index);

  void on_radioBtnVertexCircle_clicked();

  void on_radioBtnVertexNo_clicked();

  void on_radioBtnVertexSquare_clicked();

  void on_sliderVertexThick_valueChanged(int value);

  void on_btnBackground_clicked();

  void on_actionInfo_triggered();

  void on_btnScale_clicked();

  void on_actionSol_triggered();

  void on_actionSaveSettings_triggered();

  void on_actionLoadSettings_triggered();

  void on_actionBmp_triggered();

  void on_actionJpeg_triggered();

  void on_actionGif_triggered();

  void Recording();

  void SaveGif();

  void on_btnRotate_clicked();

  void on_btnMove_clicked();

 private:
  s21::Controller *cntr_;
  Ui::MainWindow *ui_;
};
#endif  // MAINWINDOW_H
