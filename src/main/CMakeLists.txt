#SET(SRC_LIST "main.cpp")
AUX_SOURCE_DIRECTORY(${CMAKE_CURRENT_SOURCE_DIR} SRC_LIST)
SET(BIN_NAME "app")
SET(LIB_DEP "util")

INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR})
SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

#program name, source file
ADD_EXECUTABLE(${BIN_NAME} ${SRC_LIST})
TARGET_LINK_LIBRARIES(${BIN_NAME} ${LIB_DEP})
