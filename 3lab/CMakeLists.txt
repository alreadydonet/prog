cmake_minimum_required(VERSION 3.16)

project(3lab LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(3lab main.cpp
    except.h
    bonus_strat.h
    percent_strat.h
    work_type.h
    payroll.h)

include(GNUInstallDirs)
install(TARGETS 3lab
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
