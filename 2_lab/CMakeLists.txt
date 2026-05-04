cmake_minimum_required(VERSION 3.16)

project(2_lab LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(2_lab main.cpp
    work_type.h
    work_record.h
    employee.h
    salary_system.h)

include(GNUInstallDirs)
install(TARGETS 2_lab
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
