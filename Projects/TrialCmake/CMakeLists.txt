CMAKE_MINIMUM_REQUIRED(VERSION 3.27.4)

PROJECT(SimpleApplication)

ADD_EXECUTABLE(SimpleApplication Application.cpp)

configure_file(Config.h.in Config.h)

OPTION(USE_MATHLIB "A library for simple math functions" ON)

IF(USE_MATHLIB)
    ADD_SUBDIRECTORY(MathLib)
    TARGET_INCLUDE_DIRECTORIES(SimpleApplication PUBLIC MathLib)
    TARGET_LINK_DIRECTORIES(SimpleApplication PUBLIC MathLib)
    TARGET_LINK_LIBRARIES(SimpleApplication PUBLIC MathLib)
ENDIF()



ADD_SUBDIRECTORY(external/glfw)

ADD_SUBDIRECTORY(People)

ADD_SUBDIRECTORY(Shape)

TARGET_INCLUDE_DIRECTORIES(SimpleApplication 
#PUBLIC MathLib
PUBLIC external/glfw/include
PUBLIC People
PUBLIC Shape
)

TARGET_LINK_DIRECTORIES(SimpleApplication 
#PUBLIC MathLib
PUBLIC external/glfw/src
PUBLIC People
PUBLIC Shape
)

TARGET_LINK_LIBRARIES(SimpleApplication 
#PUBLIC MathLib
PUBLIC glfw
PUBLIC PEOPLE
PUBLIC SHAPES
)