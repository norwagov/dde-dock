# Install script for directory: /home/norwagovmain/Documents/Desktop-Environment/dde-dock/plugins/dcc-dock-plugin

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "0")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dcc-dock-plugin/translations" TYPE FILE FILES
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_az.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_bo.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_ca.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_cs.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_de.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_el.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_en_US.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_es.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_fi.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_fr.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_hr.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_hu.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_it.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_ms.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_nl.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_pl.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_pt.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_pt_BR.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_ru.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_sq.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_tr.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_ug.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_uk.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_zh_CN.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_zh_HK.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/dcc-dock-plugin_zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/share/dsg/configs/org.deepin.dde.control-center/org.deepin.dde.dock.plugin.json")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  file(INSTALL DESTINATION "/usr/local/share/dsg/configs/org.deepin.dde.control-center" TYPE FILE FILES "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/plugins/dcc-dock-plugin/org.deepin.dde.dock.plugin.json")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/dde-control-center/modules/libdcc-dock-plugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/dde-control-center/modules/libdcc-dock-plugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/dde-control-center/modules/libdcc-dock-plugin.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/dde-control-center/modules" TYPE SHARED_LIBRARY FILES "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/dcc-dock-plugin/libdcc-dock-plugin.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/dde-control-center/modules/libdcc-dock-plugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/dde-control-center/modules/libdcc-dock-plugin.so")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/dde-control-center/modules/libdcc-dock-plugin.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

