/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

#include "scene.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow {
 public:
  QAction *actionInfo;
  QAction *actionSol;
  QAction *actionSaveSettings;
  QAction *actionLoadSettings;
  QAction *actionJpeg;
  QAction *actionBmp;
  QAction *actionGif;
  QWidget *centralwidget;
  s21::Scene *sceneWidget;
  QPushButton *btnOpenFile;
  QLabel *label;
  QLabel *label_2;
  QLabel *label_4;
  QComboBox *cumBoxLineColor;
  QLabel *label_6;
  QLabel *label_8;
  QLabel *label_9;
  QComboBox *cumBoxVertexColor;
  QSlider *sliderLineThick;
  QSlider *sliderVertexThick;
  QPushButton *btnBackground;
  QDoubleSpinBox *doubleSBScale;
  QPushButton *btnScale;
  QWidget *layoutWidget;
  QFormLayout *formLayout_2;
  QLabel *label_20;
  QLabel *labelFileName_2;
  QSpacerItem *verticalSpacer_5;
  QLabel *label_21;
  QLabel *labelCountOfVertex_2;
  QSpacerItem *verticalSpacer_6;
  QLabel *label_22;
  QLabel *labelCountOfFacets_2;
  QSpacerItem *verticalSpacer_8;
  QSpacerItem *verticalSpacer_7;
  QPushButton *btnRotate;
  QWidget *gridLayoutWidget;
  QGridLayout *gridLayout_line;
  QRadioButton *radioBtnLineSolid;
  QRadioButton *radioBtnLineDash;
  QWidget *gridLayoutWidget_2;
  QGridLayout *gridLayout_vertex;
  QRadioButton *radioBtnVertexCircle;
  QRadioButton *radioBtnVertexNo;
  QRadioButton *radioBtnVertexSquare;
  QWidget *gridLayoutWidget_3;
  QGridLayout *gridLayout_move;
  QDoubleSpinBox *doubleSBMoveZ;
  QDoubleSpinBox *doubleSBMoveX;
  QDoubleSpinBox *doubleSBMoveY;
  QLabel *labelMoveX;
  QLabel *labelMoveZ;
  QLabel *labelMoveY;
  QPushButton *btnMove;
  QWidget *gridLayoutWidget_4;
  QGridLayout *gridLayout_rotate;
  QDoubleSpinBox *doubleSBRotateX;
  QDoubleSpinBox *doubleSBRotateY;
  QDoubleSpinBox *doubleSBRotateZ;
  QLabel *labelRotateX;
  QLabel *labelRotateY;
  QLabel *labelRotateZ;
  QMenuBar *menubar;
  QMenu *menuTolls;
  QMenu *menuSave_img;

  void setupUi(QMainWindow *MainWindow) {
    if (MainWindow->objectName().isEmpty())
      MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
    MainWindow->resize(1093, 791);
    actionInfo = new QAction(MainWindow);
    actionInfo->setObjectName(QString::fromUtf8("actionInfo"));
    actionSol = new QAction(MainWindow);
    actionSol->setObjectName(QString::fromUtf8("actionSol"));
    actionSaveSettings = new QAction(MainWindow);
    actionSaveSettings->setObjectName(QString::fromUtf8("actionSaveSettings"));
    actionLoadSettings = new QAction(MainWindow);
    actionLoadSettings->setObjectName(QString::fromUtf8("actionLoadSettings"));
    actionJpeg = new QAction(MainWindow);
    actionJpeg->setObjectName(QString::fromUtf8("actionJpeg"));
    actionBmp = new QAction(MainWindow);
    actionBmp->setObjectName(QString::fromUtf8("actionBmp"));
    actionGif = new QAction(MainWindow);
    actionGif->setObjectName(QString::fromUtf8("actionGif"));
    centralwidget = new QWidget(MainWindow);
    centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
    sceneWidget = new s21::Scene(centralwidget);
    sceneWidget->setObjectName(QString::fromUtf8("sceneWidget"));
    sceneWidget->setGeometry(QRect(10, 19, 811, 661));
    sceneWidget->setStyleSheet(QString::fromUtf8(""));
    btnOpenFile = new QPushButton(centralwidget);
    btnOpenFile->setObjectName(QString::fromUtf8("btnOpenFile"));
    btnOpenFile->setGeometry(QRect(860, 501, 221, 41));
    btnOpenFile->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "color: black;\n"
                          "	background-color: rgb(255, 255, 171);\n"
                          "border-radius: 20px;\n"
                          "  border: 1px solid black;\n"
                          "}\n"
                          "\n"
                          "QPushButton:pressed {\n"
                          "border: 2px solid black;\n"
                          "            background-color: qlineargradient(x1: "
                          "0, y1: 0, x2: 0, y2: 1,\n"
                          "                                      stop: 0 "
                          "#CA6C00, stop: 1 #F58C14);\n"
                          "}\n"
                          "\n"
                          ""));
    label = new QLabel(centralwidget);
    label->setObjectName(QString::fromUtf8("label"));
    label->setGeometry(QRect(980, 30, 91, 16));
    label_2 = new QLabel(centralwidget);
    label_2->setObjectName(QString::fromUtf8("label_2"));
    label_2->setGeometry(QRect(960, 210, 111, 16));
    label_4 = new QLabel(centralwidget);
    label_4->setObjectName(QString::fromUtf8("label_4"));
    label_4->setGeometry(QRect(930, 60, 41, 20));
    cumBoxLineColor = new QComboBox(centralwidget);
    cumBoxLineColor->addItem(QString());
    cumBoxLineColor->addItem(QString());
    cumBoxLineColor->addItem(QString());
    cumBoxLineColor->addItem(QString());
    cumBoxLineColor->addItem(QString());
    cumBoxLineColor->setObjectName(QString::fromUtf8("cumBoxLineColor"));
    cumBoxLineColor->setGeometry(QRect(970, 60, 103, 20));
    label_6 = new QLabel(centralwidget);
    label_6->setObjectName(QString::fromUtf8("label_6"));
    label_6->setGeometry(QRect(890, 170, 41, 16));
    label_8 = new QLabel(centralwidget);
    label_8->setObjectName(QString::fromUtf8("label_8"));
    label_8->setGeometry(QRect(910, 250, 41, 20));
    label_9 = new QLabel(centralwidget);
    label_9->setObjectName(QString::fromUtf8("label_9"));
    label_9->setGeometry(QRect(890, 350, 41, 16));
    cumBoxVertexColor = new QComboBox(centralwidget);
    cumBoxVertexColor->addItem(QString());
    cumBoxVertexColor->addItem(QString());
    cumBoxVertexColor->addItem(QString());
    cumBoxVertexColor->addItem(QString());
    cumBoxVertexColor->addItem(QString());
    cumBoxVertexColor->setObjectName(QString::fromUtf8("cumBoxVertexColor"));
    cumBoxVertexColor->setGeometry(QRect(950, 250, 119, 20));
    cumBoxVertexColor->setStyleSheet(QString::fromUtf8(""));
    sliderLineThick = new QSlider(centralwidget);
    sliderLineThick->setObjectName(QString::fromUtf8("sliderLineThick"));
    sliderLineThick->setGeometry(QRect(930, 170, 141, 25));
    sliderLineThick->setMinimum(1);
    sliderLineThick->setMaximum(40);
    sliderLineThick->setOrientation(Qt::Horizontal);
    sliderVertexThick = new QSlider(centralwidget);
    sliderVertexThick->setObjectName(QString::fromUtf8("sliderVertexThick"));
    sliderVertexThick->setGeometry(QRect(930, 350, 141, 25));
    sliderVertexThick->setMinimum(1);
    sliderVertexThick->setMaximum(40);
    sliderVertexThick->setOrientation(Qt::Horizontal);
    btnBackground = new QPushButton(centralwidget);
    btnBackground->setObjectName(QString::fromUtf8("btnBackground"));
    btnBackground->setGeometry(QRect(860, 420, 221, 41));
    btnBackground->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "color: black;\n"
                          "	background-color: rgb(255, 255, 171);\n"
                          "border-radius: 20px;\n"
                          "  border: 1px solid black;\n"
                          "}\n"
                          "\n"
                          "QPushButton:pressed {\n"
                          "border: 2px solid black;\n"
                          "            background-color: qlineargradient(x1: "
                          "0, y1: 0, x2: 0, y2: 1,\n"
                          "                                      stop: 0 "
                          "#CA6C00, stop: 1 #F58C14);\n"
                          "}\n"
                          ""));
    doubleSBScale = new QDoubleSpinBox(centralwidget);
    doubleSBScale->setObjectName(QString::fromUtf8("doubleSBScale"));
    doubleSBScale->setGeometry(QRect(770, 719, 51, 21));
    doubleSBScale->setDecimals(1);
    doubleSBScale->setMinimum(0.100000000000000);
    doubleSBScale->setMaximum(2.000000000000000);
    doubleSBScale->setSingleStep(0.100000000000000);
    doubleSBScale->setValue(1.000000000000000);
    btnScale = new QPushButton(centralwidget);
    btnScale->setObjectName(QString::fromUtf8("btnScale"));
    btnScale->setGeometry(QRect(690, 710, 71, 31));
    btnScale->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "color: black;\n"
                          "	background-color: rgb(255, 255, 171);\n"
                          "border-radius: 15px;\n"
                          "  border: 1px solid black;\n"
                          "}\n"
                          "\n"
                          "QPushButton:pressed {\n"
                          "border: 2px solid black;\n"
                          "            background-color: qlineargradient(x1: "
                          "0, y1: 0, x2: 0, y2: 1,\n"
                          "                                      stop: 0 "
                          "#CA6C00, stop: 1 #F58C14);\n"
                          "}\n"
                          "\n"
                          ""));
    layoutWidget = new QWidget(centralwidget);
    layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
    layoutWidget->setGeometry(QRect(840, 550, 241, 191));
    formLayout_2 = new QFormLayout(layoutWidget);
    formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
    formLayout_2->setLabelAlignment(Qt::AlignLeading | Qt::AlignLeft |
                                    Qt::AlignVCenter);
    formLayout_2->setVerticalSpacing(6);
    formLayout_2->setContentsMargins(0, 0, 0, 0);
    label_20 = new QLabel(layoutWidget);
    label_20->setObjectName(QString::fromUtf8("label_20"));

    formLayout_2->setWidget(3, QFormLayout::LabelRole, label_20);

    labelFileName_2 = new QLabel(layoutWidget);
    labelFileName_2->setObjectName(QString::fromUtf8("labelFileName_2"));

    formLayout_2->setWidget(3, QFormLayout::FieldRole, labelFileName_2);

    verticalSpacer_5 =
        new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    formLayout_2->setItem(4, QFormLayout::LabelRole, verticalSpacer_5);

    label_21 = new QLabel(layoutWidget);
    label_21->setObjectName(QString::fromUtf8("label_21"));

    formLayout_2->setWidget(5, QFormLayout::LabelRole, label_21);

    labelCountOfVertex_2 = new QLabel(layoutWidget);
    labelCountOfVertex_2->setObjectName(
        QString::fromUtf8("labelCountOfVertex_2"));

    formLayout_2->setWidget(5, QFormLayout::FieldRole, labelCountOfVertex_2);

    verticalSpacer_6 =
        new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    formLayout_2->setItem(6, QFormLayout::LabelRole, verticalSpacer_6);

    label_22 = new QLabel(layoutWidget);
    label_22->setObjectName(QString::fromUtf8("label_22"));

    formLayout_2->setWidget(7, QFormLayout::LabelRole, label_22);

    labelCountOfFacets_2 = new QLabel(layoutWidget);
    labelCountOfFacets_2->setObjectName(
        QString::fromUtf8("labelCountOfFacets_2"));

    formLayout_2->setWidget(7, QFormLayout::FieldRole, labelCountOfFacets_2);

    verticalSpacer_8 =
        new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    formLayout_2->setItem(8, QFormLayout::LabelRole, verticalSpacer_8);

    verticalSpacer_7 =
        new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

    formLayout_2->setItem(2, QFormLayout::LabelRole, verticalSpacer_7);

    btnRotate = new QPushButton(centralwidget);
    btnRotate->setObjectName(QString::fromUtf8("btnRotate"));
    btnRotate->setGeometry(QRect(350, 710, 80, 30));
    btnRotate->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "color: black;\n"
                          "	background-color: rgb(255, 255, 171);\n"
                          "border-radius: 15px;\n"
                          "  border: 1px solid black;\n"
                          "}\n"
                          "\n"
                          "QPushButton:pressed {\n"
                          "border: 2px solid black;\n"
                          "            background-color: qlineargradient(x1: "
                          "0, y1: 0, x2: 0, y2: 1,\n"
                          "                                      stop: 0 "
                          "#CA6C00, stop: 1 #F58C14);\n"
                          "}\n"
                          "\n"
                          ""));
    gridLayoutWidget = new QWidget(centralwidget);
    gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
    gridLayoutWidget->setGeometry(QRect(910, 120, 161, 41));
    gridLayout_line = new QGridLayout(gridLayoutWidget);
    gridLayout_line->setObjectName(QString::fromUtf8("gridLayout_line"));
    gridLayout_line->setContentsMargins(0, 0, 0, 0);
    radioBtnLineSolid = new QRadioButton(gridLayoutWidget);
    radioBtnLineSolid->setObjectName(QString::fromUtf8("radioBtnLineSolid"));

    gridLayout_line->addWidget(radioBtnLineSolid, 0, 0, 1, 1);

    radioBtnLineDash = new QRadioButton(gridLayoutWidget);
    radioBtnLineDash->setObjectName(QString::fromUtf8("radioBtnLineDash"));

    gridLayout_line->addWidget(radioBtnLineDash, 0, 1, 1, 1);

    gridLayoutWidget_2 = new QWidget(centralwidget);
    gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
    gridLayoutWidget_2->setGeometry(QRect(860, 300, 211, 31));
    gridLayout_vertex = new QGridLayout(gridLayoutWidget_2);
    gridLayout_vertex->setObjectName(QString::fromUtf8("gridLayout_vertex"));
    gridLayout_vertex->setContentsMargins(0, 0, 0, 0);
    radioBtnVertexCircle = new QRadioButton(gridLayoutWidget_2);
    radioBtnVertexCircle->setObjectName(
        QString::fromUtf8("radioBtnVertexCircle"));

    gridLayout_vertex->addWidget(radioBtnVertexCircle, 0, 0, 1, 1);

    radioBtnVertexNo = new QRadioButton(gridLayoutWidget_2);
    radioBtnVertexNo->setObjectName(QString::fromUtf8("radioBtnVertexNo"));

    gridLayout_vertex->addWidget(radioBtnVertexNo, 0, 1, 1, 1);

    radioBtnVertexSquare = new QRadioButton(gridLayoutWidget_2);
    radioBtnVertexSquare->setObjectName(
        QString::fromUtf8("radioBtnVertexSquare"));

    gridLayout_vertex->addWidget(radioBtnVertexSquare, 0, 2, 1, 1);

    gridLayoutWidget_3 = new QWidget(centralwidget);
    gridLayoutWidget_3->setObjectName(QString::fromUtf8("gridLayoutWidget_3"));
    gridLayoutWidget_3->setGeometry(QRect(90, 690, 211, 51));
    gridLayout_move = new QGridLayout(gridLayoutWidget_3);
    gridLayout_move->setObjectName(QString::fromUtf8("gridLayout_move"));
    gridLayout_move->setSizeConstraint(QLayout::SetDefaultConstraint);
    gridLayout_move->setContentsMargins(1, 1, 1, 1);
    doubleSBMoveZ = new QDoubleSpinBox(gridLayoutWidget_3);
    doubleSBMoveZ->setObjectName(QString::fromUtf8("doubleSBMoveZ"));
    doubleSBMoveZ->setDecimals(1);
    doubleSBMoveZ->setMinimum(-100.000000000000000);

    gridLayout_move->addWidget(doubleSBMoveZ, 1, 3, 1, 1);

    doubleSBMoveX = new QDoubleSpinBox(gridLayoutWidget_3);
    doubleSBMoveX->setObjectName(QString::fromUtf8("doubleSBMoveX"));
    doubleSBMoveX->setDecimals(1);
    doubleSBMoveX->setMinimum(-100.000000000000000);

    gridLayout_move->addWidget(doubleSBMoveX, 1, 1, 1, 1);

    doubleSBMoveY = new QDoubleSpinBox(gridLayoutWidget_3);
    doubleSBMoveY->setObjectName(QString::fromUtf8("doubleSBMoveY"));
    doubleSBMoveY->setDecimals(1);
    doubleSBMoveY->setMinimum(-100.000000000000000);

    gridLayout_move->addWidget(doubleSBMoveY, 1, 2, 1, 1);

    labelMoveX = new QLabel(gridLayoutWidget_3);
    labelMoveX->setObjectName(QString::fromUtf8("labelMoveX"));
    labelMoveX->setAlignment(Qt::AlignCenter);

    gridLayout_move->addWidget(labelMoveX, 0, 1, 1, 1);

    labelMoveZ = new QLabel(gridLayoutWidget_3);
    labelMoveZ->setObjectName(QString::fromUtf8("labelMoveZ"));
    labelMoveZ->setAlignment(Qt::AlignCenter);

    gridLayout_move->addWidget(labelMoveZ, 0, 3, 1, 1);

    labelMoveY = new QLabel(gridLayoutWidget_3);
    labelMoveY->setObjectName(QString::fromUtf8("labelMoveY"));
    labelMoveY->setAlignment(Qt::AlignCenter);

    gridLayout_move->addWidget(labelMoveY, 0, 2, 1, 1);

    btnMove = new QPushButton(centralwidget);
    btnMove->setObjectName(QString::fromUtf8("btnMove"));
    btnMove->setGeometry(QRect(10, 710, 71, 31));
    btnMove->setStyleSheet(
        QString::fromUtf8("QPushButton {\n"
                          "color: black;\n"
                          "	background-color: rgb(255, 255, 171);\n"
                          "border-radius: 15px;\n"
                          "  border: 1px solid black;\n"
                          "}\n"
                          "\n"
                          "QPushButton:pressed {\n"
                          "border: 2px solid black;\n"
                          "            background-color: qlineargradient(x1: "
                          "0, y1: 0, x2: 0, y2: 1,\n"
                          "                                      stop: 0 "
                          "#CA6C00, stop: 1 #F58C14);\n"
                          "}\n"
                          "\n"
                          ""));
    gridLayoutWidget_4 = new QWidget(centralwidget);
    gridLayoutWidget_4->setObjectName(QString::fromUtf8("gridLayoutWidget_4"));
    gridLayoutWidget_4->setGeometry(QRect(440, 690, 211, 51));
    gridLayout_rotate = new QGridLayout(gridLayoutWidget_4);
    gridLayout_rotate->setObjectName(QString::fromUtf8("gridLayout_rotate"));
    gridLayout_rotate->setContentsMargins(1, 1, 1, 1);
    doubleSBRotateX = new QDoubleSpinBox(gridLayoutWidget_4);
    doubleSBRotateX->setObjectName(QString::fromUtf8("doubleSBRotateX"));
    doubleSBRotateX->setDecimals(1);
    doubleSBRotateX->setMinimum(-10.000000000000000);
    doubleSBRotateX->setMaximum(10.000000000000000);
    doubleSBRotateX->setSingleStep(0.100000000000000);
    doubleSBRotateX->setStepType(QAbstractSpinBox::DefaultStepType);
    doubleSBRotateX->setValue(0.000000000000000);

    gridLayout_rotate->addWidget(doubleSBRotateX, 1, 0, 1, 1);

    doubleSBRotateY = new QDoubleSpinBox(gridLayoutWidget_4);
    doubleSBRotateY->setObjectName(QString::fromUtf8("doubleSBRotateY"));
    doubleSBRotateY->setDecimals(1);
    doubleSBRotateY->setMinimum(-10.000000000000000);
    doubleSBRotateY->setMaximum(10.000000000000000);
    doubleSBRotateY->setSingleStep(0.100000000000000);
    doubleSBRotateY->setValue(0.000000000000000);

    gridLayout_rotate->addWidget(doubleSBRotateY, 1, 1, 1, 1);

    doubleSBRotateZ = new QDoubleSpinBox(gridLayoutWidget_4);
    doubleSBRotateZ->setObjectName(QString::fromUtf8("doubleSBRotateZ"));
    doubleSBRotateZ->setDecimals(1);
    doubleSBRotateZ->setMinimum(-10.000000000000000);
    doubleSBRotateZ->setMaximum(10.000000000000000);
    doubleSBRotateZ->setSingleStep(0.100000000000000);
    doubleSBRotateZ->setValue(0.000000000000000);

    gridLayout_rotate->addWidget(doubleSBRotateZ, 1, 2, 1, 1);

    labelRotateX = new QLabel(gridLayoutWidget_4);
    labelRotateX->setObjectName(QString::fromUtf8("labelRotateX"));
    labelRotateX->setAlignment(Qt::AlignCenter);

    gridLayout_rotate->addWidget(labelRotateX, 0, 0, 1, 1);

    labelRotateY = new QLabel(gridLayoutWidget_4);
    labelRotateY->setObjectName(QString::fromUtf8("labelRotateY"));
    labelRotateY->setAlignment(Qt::AlignCenter);

    gridLayout_rotate->addWidget(labelRotateY, 0, 1, 1, 1);

    labelRotateZ = new QLabel(gridLayoutWidget_4);
    labelRotateZ->setObjectName(QString::fromUtf8("labelRotateZ"));
    labelRotateZ->setAlignment(Qt::AlignCenter);

    gridLayout_rotate->addWidget(labelRotateZ, 0, 2, 1, 1);

    MainWindow->setCentralWidget(centralwidget);
    menubar = new QMenuBar(MainWindow);
    menubar->setObjectName(QString::fromUtf8("menubar"));
    menubar->setGeometry(QRect(0, 0, 1093, 24));
    menuTolls = new QMenu(menubar);
    menuTolls->setObjectName(QString::fromUtf8("menuTolls"));
    menuSave_img = new QMenu(menuTolls);
    menuSave_img->setObjectName(QString::fromUtf8("menuSave_img"));
    MainWindow->setMenuBar(menubar);

    menubar->addAction(menuTolls->menuAction());
    menuTolls->addAction(actionSol);
    menuTolls->addSeparator();
    menuTolls->addAction(actionSaveSettings);
    menuTolls->addAction(actionLoadSettings);
    menuTolls->addSeparator();
    menuTolls->addAction(menuSave_img->menuAction());
    menuTolls->addAction(actionGif);
    menuTolls->addAction(actionInfo);
    menuSave_img->addAction(actionJpeg);
    menuSave_img->addAction(actionBmp);

    retranslateUi(MainWindow);

    QMetaObject::connectSlotsByName(MainWindow);
  }  // setupUi

  void retranslateUi(QMainWindow *MainWindow) {
    MainWindow->setWindowTitle(
        QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
    actionInfo->setText(
        QCoreApplication::translate("MainWindow", "Info", nullptr));
    actionSol->setText(
        QCoreApplication::translate("MainWindow", "Projection", nullptr));
    actionSaveSettings->setText(
        QCoreApplication::translate("MainWindow", "Save settings", nullptr));
    actionLoadSettings->setText(
        QCoreApplication::translate("MainWindow", "Load settings", nullptr));
    actionJpeg->setText(
        QCoreApplication::translate("MainWindow", "jpeg", nullptr));
    actionBmp->setText(
        QCoreApplication::translate("MainWindow", "bmp", nullptr));
    actionGif->setText(
        QCoreApplication::translate("MainWindow", "Gif", nullptr));
    btnOpenFile->setText(
        QCoreApplication::translate("MainWindow", "Open file", nullptr));
    label->setText(
        QCoreApplication::translate("MainWindow", "LINE SETTING", nullptr));
    label_2->setText(
        QCoreApplication::translate("MainWindow", "VERTEX SETTING", nullptr));
    label_4->setText(
        QCoreApplication::translate("MainWindow", "color", nullptr));
    cumBoxLineColor->setItemText(
        0, QCoreApplication::translate("MainWindow", "White", nullptr));
    cumBoxLineColor->setItemText(
        1, QCoreApplication::translate("MainWindow", "Black", nullptr));
    cumBoxLineColor->setItemText(
        2, QCoreApplication::translate("MainWindow", "Red", nullptr));
    cumBoxLineColor->setItemText(
        3, QCoreApplication::translate("MainWindow", "Green", nullptr));
    cumBoxLineColor->setItemText(
        4, QCoreApplication::translate("MainWindow", "Blue", nullptr));

    label_6->setText(
        QCoreApplication::translate("MainWindow", "thick", nullptr));
    label_8->setText(
        QCoreApplication::translate("MainWindow", "color", nullptr));
    label_9->setText(
        QCoreApplication::translate("MainWindow", "thick", nullptr));
    cumBoxVertexColor->setItemText(
        0, QCoreApplication::translate("MainWindow", "White", nullptr));
    cumBoxVertexColor->setItemText(
        1, QCoreApplication::translate("MainWindow", "Black", nullptr));
    cumBoxVertexColor->setItemText(
        2, QCoreApplication::translate("MainWindow", "Red", nullptr));
    cumBoxVertexColor->setItemText(
        3, QCoreApplication::translate("MainWindow", "Green", nullptr));
    cumBoxVertexColor->setItemText(
        4, QCoreApplication::translate("MainWindow", "Blue", nullptr));

    btnBackground->setText(QCoreApplication::translate(
        "MainWindow", "BACKGROUND SETTING", nullptr));
    btnScale->setText(
        QCoreApplication::translate("MainWindow", "ZOOM", nullptr));
    label_20->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\230\320\274\321\217 \321\204\320\260\320\271\320\273\320\260:",
        nullptr));
    labelFileName_2->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\275\320\265\321\202 \321\204\320\260\320\271\320\273\320\260",
        nullptr));
    label_21->setText(
        QCoreApplication::translate("MainWindow",
                                    "\320\232\320\276\320\273-\320\262\320\276 "
                                    "\321\202\320\276\321\207\320\265\320\272:",
                                    nullptr));
    labelCountOfVertex_2->setText(
        QCoreApplication::translate("MainWindow", "0", nullptr));
    label_22->setText(QCoreApplication::translate(
        "MainWindow",
        "\320\232\320\276\320\273-\320\262\320\276 "
        "\321\201\320\262\321\217\320\267\320\265\320\271:",
        nullptr));
    labelCountOfFacets_2->setText(
        QCoreApplication::translate("MainWindow", "0", nullptr));
    btnRotate->setText(
        QCoreApplication::translate("MainWindow", "ROTATE", nullptr));
    radioBtnLineSolid->setText(
        QCoreApplication::translate("MainWindow", "solid", nullptr));
    radioBtnLineDash->setText(
        QCoreApplication::translate("MainWindow", "dashed", nullptr));
    radioBtnVertexCircle->setText(
        QCoreApplication::translate("MainWindow", "circle", nullptr));
    radioBtnVertexNo->setText(
        QCoreApplication::translate("MainWindow", "no", nullptr));
    radioBtnVertexSquare->setText(
        QCoreApplication::translate("MainWindow", "square", nullptr));
    labelMoveX->setText(
        QCoreApplication::translate("MainWindow", "X", nullptr));
    labelMoveZ->setText(
        QCoreApplication::translate("MainWindow", "Z", nullptr));
    labelMoveY->setText(
        QCoreApplication::translate("MainWindow", "Y", nullptr));
    btnMove->setText(
        QCoreApplication::translate("MainWindow", "MOVE", nullptr));
    labelRotateX->setText(
        QCoreApplication::translate("MainWindow", "X", nullptr));
    labelRotateY->setText(
        QCoreApplication::translate("MainWindow", "Y", nullptr));
    labelRotateZ->setText(
        QCoreApplication::translate("MainWindow", "Z", nullptr));
    menuTolls->setTitle(
        QCoreApplication::translate("MainWindow", "\342\230\260", nullptr));
    menuSave_img->setTitle(
        QCoreApplication::translate("MainWindow", "Save img", nullptr));
  }  // retranslateUi
};

namespace Ui {
class MainWindow : public Ui_MainWindow {};
}  // namespace Ui

QT_END_NAMESPACE

#endif  // UI_MAINWINDOW_H
