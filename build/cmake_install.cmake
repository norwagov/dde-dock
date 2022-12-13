# Install script for directory: /home/norwagovmain/Documents/Desktop-Environment/dde-dock

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/dde-dock/translations" TYPE FILE FILES
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_af.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_ak.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_am_ET.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_ar.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_ast.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_az.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_bg.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_bn.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_bo.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_ca.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_cs.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_da.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_de.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_el.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_en_AU.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_en_GB.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_en_US.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_eo.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_es.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_es_419.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_et.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_fa.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_fi.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_fr.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_gl.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_gl_ES.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_he.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_hi.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_hi_IN.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_hr.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_hu.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_hy.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_id.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_it.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_ja.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_kn_IN.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_ko.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_ku_IQ.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_lo.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_lt.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_ml.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_mn.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_ms.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_nb.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_ne.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_nl.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_pa.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_pam.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_pl.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_pt.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_pt_BR.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_ro.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_ru.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_si.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_sk.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_sl.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_sq.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_sr.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_sv.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_sw.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_ta.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_tr.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_ug.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_uk.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_ur.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_vi.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_zh_CN.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_zh_HK.qm"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/translations/dde-dock_zh_TW.qm"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/dde-dock" TYPE FILE FILES
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/interfaces/constants.h"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/interfaces/pluginproxyinterface.h"
    "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/interfaces/pluginsiteminterface.h"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/dde-dock.pc")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/cmake/DdeDock" TYPE FILE FILES "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/cmake/DdeDock/DdeDockConfig.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/glib-2.0/schemas" TYPE FILE FILES "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/gschema/com.deepin.dde.dock.module.gschema.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/frame/cmake_install.cmake")
  include("/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/plugins/cmake_install.cmake")
  include("/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/tests/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/norwagovmain/Documents/Desktop-Environment/dde-dock/build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
