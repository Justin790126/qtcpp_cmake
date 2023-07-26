project(QTCPP_TEMPLATE)
cmake_minimum_required(VERSION 3.1.0)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")



find_package(Qt5 REQUIRED COMPONENTS Widgets)



add_executable(${PROJECT_NAME}
    main.cpp
        mainwindow.cpp)

target_link_libraries(${PROJECT_NAME}
    Qt5::Widgets)