cmake_minimum_required(VERSION 3.10)
project(DriverAssistant VERSION 0.1.0)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_CXX_STANDART 11)
set(CMAKE_CXX_STANDART_REQUIRED True)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pthread")

include_directories(
${PROJECT_SOURCE_DIR}/src
${PROJECT_SOURCE_DIR}/include
)
include_directories(${OpenCV_INCLUDE_DIRS})

find_package( OpenCV REQUIRED )
find_package( Qt5 COMPONENTS Widgets REQUIRED )

add_executable(DriverAssistant
src/main.cpp
src/mainContainer.cpp
src/opencvImageWidget.cpp
src/rightSideContainer.cpp
src/bottomSideContainer.cpp
src/cameraController.cpp
include/mainContainer.h
include/opencvImageWidget.h
include/rightSideContainer.h
include/bottomSideContainer.h
include/cameraController.h
)

target_link_libraries( DriverAssistant Qt5::Widgets )
target_link_libraries( DriverAssistant ${OpenCV_LIBS} )
#[[target_link_libraries(DriverAssistant -lQt5Widgets -lQt5Gui -lQt5Core)]]
