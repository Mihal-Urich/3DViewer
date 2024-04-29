#include "mainwindow.h"

#include "ui_mainwindow.h"
MainWindow::MainWindow(s21::Controller* cntr, QWidget* parent)
    : QMainWindow(parent), cntr_(cntr), ui_(new Ui::MainWindow) {
  setWindowTitle("3DViewer");
  ui_->setupUi(this);
  this->setFixedSize(this->size());
  ui_->sliderLineThick->setRange(1, 40);
  time = 0.0;
  record_time = new QTimer(this);
  is_recording = false;
  connect(record_time, &QTimer::timeout, this, &MainWindow::Recording);
  ui_->sceneWidget->Init(cntr);
}

MainWindow::~MainWindow() {
  delete ui_;
  ui_->sceneWidget->FreeMem();
}

void MainWindow::on_btnOpenFile_clicked() {
  qpath_file =
      QFileDialog::getOpenFileName(0, "Open File .obj", "/Users/", "*.obj");
  if (!qpath_file.isEmpty()) {
    std::string path_file = qpath_file.toStdString();
    ui_->sceneWidget->ReadFile(path_file);
    ui_->sceneWidget->update();
    ui_->labelFileName_2->setText(qpath_file.section("/", -1, -1));
    ui_->labelCountOfFacets_2->setText(
        QString::number(ui_->sceneWidget->GetFace()));
    ui_->labelCountOfVertex_2->setText(
        QString::number(ui_->sceneWidget->GetVert()));
  } else {
    ui_->sceneWidget->update();
  }
}

void MainWindow::on_cumBoxLineColor_activated(int index) {
  ui_->sceneWidget->SetLineColor(index);
  ui_->sceneWidget->update();
}

void MainWindow::on_radioBtnLineSolid_clicked() {
  ui_->sceneWidget->SetLineStyle(1);
  ui_->sceneWidget->update();
}

void MainWindow::on_radioBtnLineDash_clicked() {
  ui_->sceneWidget->SetLineStyle(0);
  ui_->sceneWidget->update();
}

void MainWindow::on_sliderLineThick_valueChanged(int value) {
  ui_->sceneWidget->SetLineWidth(value);
  ui_->sceneWidget->update();
}

void MainWindow::on_cumBoxVertexColor_activated(int index) {
  ui_->sceneWidget->SetVertexColor(index);
  ui_->sceneWidget->update();
}

void MainWindow::on_radioBtnVertexCircle_clicked() {
  ui_->sceneWidget->SetVertexStyle(1);
  ui_->sceneWidget->update();
}

void MainWindow::on_radioBtnVertexNo_clicked() {
  ui_->sceneWidget->SetVertexStyle(0);
  ui_->sceneWidget->update();
}

void MainWindow::on_radioBtnVertexSquare_clicked() {
  ui_->sceneWidget->SetVertexStyle(2);
  ui_->sceneWidget->update();
}

void MainWindow::on_sliderVertexThick_valueChanged(int value) {
  ui_->sceneWidget->SetVertexWidth(value);
  ui_->sceneWidget->update();
}

void MainWindow::on_btnBackground_clicked() {
  QColor color = QColorDialog::getColor(Qt::white).toRgb();
  ui_->sceneWidget->SetBackgroundColor(color);
  ui_->sceneWidget->update();
}

void MainWindow::on_btnScale_clicked() {
  if (!ui_->sceneWidget->EmptyObj()) {
    double scale = ui_->doubleSBScale->value();
    cntr_->ContrScale(scale);
    ui_->sceneWidget->update();
  }
}

void MainWindow::on_actionInfo_triggered() {
  QString a = QString::number(ui_->sceneWidget->GetVert());
  QString b = QString::number(ui_->sceneWidget->GetFace());
  QString info = "Name: " + qpath_file + '\n' + "Vertex: " + a + '\n' +
                 "Facets: " + b + '\n';

  QMessageBox::information(this, tr("Info"), info);
}

void MainWindow::on_actionSol_triggered() {
  if (ui_->sceneWidget->GetProj()) {
    ui_->sceneWidget->SetProj(0);
  } else {
    ui_->sceneWidget->SetProj(1);
  }
  ui_->sceneWidget->update();
}

void MainWindow::on_actionSaveSettings_triggered() {
  ui_->sceneWidget->SaveSetting();
}

void MainWindow::on_actionLoadSettings_triggered() {
  ui_->sceneWidget->LoadSetting();
  ui_->sceneWidget->update();
}

void MainWindow::on_actionJpeg_triggered() {
  QString path = (QDir::homePath() + "/save_config/");
  QDir dir(path);
  if (!dir.exists()) dir.mkpath(path);
  ui_->sceneWidget->grab().save(path + "file.jpeg");
}

void MainWindow::on_actionBmp_triggered() {
  QString path = (QDir::homePath() + "/save_config/");
  QDir dir(path);
  if (!dir.exists()) dir.mkpath(path);
  ui_->sceneWidget->grab().save(path + "file.bmp");
}

void MainWindow::on_actionGif_triggered() {
  if (!is_recording) {
    is_recording = true;
    record_time->start(100);
  }
}

void MainWindow::Recording() {
  if (is_recording && time <= 5.0) {
    GIF.push_back(ui_->sceneWidget->grab().toImage());
    time += 0.1;
  } else {
    SaveGif();
    record_time->stop();
  }
}

void MainWindow::SaveGif() {
  QString str = QFileDialog::getSaveFileName(
      this, tr("Save GIF"), QDir::homePath(), tr("GIF (*.gif)"));
  if (str != "") {
    QGifImage gif(QSize(1582, 1322));

    gif.setDefaultTransparentColor(Qt::black);
    gif.setDefaultDelay(100);

    for (QVector<QImage>::Iterator frame = GIF.begin(); frame != GIF.end();
         frame++) {
      gif.addFrame(*frame);
    }
    gif.save(str);
    GIF.clear();
  }
  time = 0.0;
  is_recording = false;
}

void MainWindow::on_btnRotate_clicked() {
  if (!ui_->sceneWidget->EmptyObj()) {
    double x = ui_->doubleSBRotateX->value();
    double y = ui_->doubleSBRotateY->value();
    double z = ui_->doubleSBRotateZ->value();
    cntr_->ContrRot(x, y, z);
    ui_->sceneWidget->update();
  }
}

void MainWindow::on_btnMove_clicked() {
  if (!ui_->sceneWidget->EmptyObj()) {
    double x = ui_->doubleSBMoveX->value();
    double y = ui_->doubleSBMoveY->value();
    double z = ui_->doubleSBMoveZ->value();
    cntr_->ContrMov(x, y, z);
    ui_->sceneWidget->update();
  }
}
