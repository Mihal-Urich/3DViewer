#include <QApplication>

#include "mainwindow.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  s21::affin af;
  s21::WorkSearch ws;
  s21::Data &data = s21::Data::GetData();
  s21::Controller cntr(&af, &ws, &data);
  MainWindow w(&cntr);
  w.show();
  return a.exec();
}
