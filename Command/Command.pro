TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
        remotecontrol.cpp

HEADERS += \
  ICommand.hpp \
  Light.hpp \
  LightCommand.hpp \
  MacroCommand.hpp \
  Music.hpp \
  MusicCommand.hpp \
  Switch.hpp \
  ToggleLight.hpp \
  Tv.hpp \
  TvCommand.hpp \
  remotecontrol.hpp
