QT       += core gui
QT       += sql
QT       += svg



greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11


# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    dlg_ammoevid.cpp \
    dlg_ars_slct.cpp \
    dlg_arsenal_addweapon.cpp \
    dlg_arsenal_maintenance.cpp \
    dlg_arsenal_weapon_attachment.cpp \
    dlg_ask.cpp \
    dlg_attachment.cpp \
    dlg_shooting_gun.cpp \
    dlg_shooting_range.cpp \
    dlg_warning.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    dlg_ammoevid.h \
    dlg_ars_slct.h \
    dlg_arsenal_addweapon.h \
    dlg_arsenal_maintenance.h \
    dlg_arsenal_weapon_attachment.h \
    dlg_ask.h \
    dlg_attachment.h \
    dlg_shooting_gun.h \
    dlg_shooting_range.h \
    dlg_warning.h \
    mainwindow.h

FORMS += \
    dlg_ammoevid.ui \
    dlg_ars_slct.ui \
    dlg_arsenal_addweapon.ui \
    dlg_arsenal_maintenance.ui \
    dlg_arsenal_weapon_attachment.ui \
    dlg_ask.ui \
    dlg_attachment.ui \
    dlg_shooting_gun.ui \
    dlg_shooting_range.ui \
    dlg_warning.ui \
    mainwindow.ui \
    reserve.ui

TRANSLATIONS += \
    ShooTracker_cs_CZ.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
