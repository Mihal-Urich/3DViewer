QT  += core gui openglwidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../QtGifImage/src/gifimage/qgifimage.cpp \
    ../QtGifImage/src/3rdParty/giflib/dgif_lib.c \
    ../QtGifImage/src/3rdParty/giflib/egif_lib.c \
    ../QtGifImage/src/3rdParty/giflib/gif_err.c \
    ../QtGifImage/src/3rdParty/giflib/gif_font.c \
    ../QtGifImage/src/3rdParty/giflib/gif_hash.c \
    ../QtGifImage/src/3rdParty/giflib/gifalloc.c \
    ../QtGifImage/src/3rdParty/giflib/quantize.c \
    ../ccfile/handle_file.cc \
    main.cc \
    mainwindow.cc \
    scene.cc

HEADERS += \
    ../Search/face_search.h \
    ../Search/interface_search.h \
    ../Search/vertices_search.h \
    ../QtGifImage/src/gifimage/qgifglobal.h \
    ../QtGifImage/src/gifimage/qgifimage.h \
    ../QtGifImage/src/gifimage/qgifimage_p.h \
    ../QtGifImage/src/3rdParty/giflib/gif_hash.h \
    ../QtGifImage/src/3rdParty/giflib/gif_lib.h \
    ../QtGifImage/src/3rdParty/giflib/gif_lib_private.h \
    ../lib/afin.h \
    ../lib/controller.h \
    ../lib/data.h \
    ../lib/data_reader.h \
    ../lib/extreme_values.h \
    ../lib/flow_work.h \
    ../lib/handle_file.h \
    ../lib/read_file.h \
    ../lib/work_search.h \
    mainwindow.h \
    scene.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    ../QtGifImage/CMakeLists.txt \
    ../QtGifImage/CMakeLists.txt.user
