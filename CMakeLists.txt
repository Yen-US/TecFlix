cmake_minimum_required(VERSION 3.14)
project(TecFlix)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -lcurl")
set(SOURCE_FILES main.cpp)
option(BUILD_DOC "Build documentation" ON)
find_package(Doxygen)
if(DOXYGEN_FOUND)

    set(DOXYGEN_INPUT ${SOURCE_FILES}/tecFlix)
    set(DOXYGEN_OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile)

    add_custom_command(
            OUTPUT ${DOXYGEN_OUTPUT}
            COMMAND ${CMAKE_COMMAND} -E echo_append "Building API Documentation..."
            COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_INPUT}
            COMMAND ${CMAKE_COMMAND} -E echo "Done."
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
            DEPENDS ${DOXYGEN_INPUT}
    )

    add_custom_target(apidoc ALL DEPENDS ${DOXYGEN_OUTPUT})

    add_custom_target(apidoc_forced
            COMMAND ${CMAKE_COMMAND} -E echo_append "Building API Documentation..."
            COMMAND ${DOXYGEN_EXECUTABLE} ${DOXYGEN_INPUT}
            COMMAND ${CMAKE_COMMAND} -E echo "Done."
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
            )

endif(DOXYGEN_FOUND)

find_package(Qt5Widgets REQUIRED)
find_package( Qt5Core REQUIRED )
find_package( Qt5Gui REQUIRED )
add_executable(TecFlix main.cpp Clases/pelicula.cpp Clases/pelicula.h Lista/list.cpp Lista/list.h Lista/node.cpp Lista/node.h DesdeIMdB/leerIMdB.cpp DesdeIMdB/leerIMdB.h Paginacion/Pagina.cpp Paginacion/Pagina.h Grafica/ventana.h Grafica/ventana.cpp DesdeIMdB/descarga.cpp DesdeIMdB/descarga.h Grafica/ventana2.cpp Grafica/ventana2.h)

add_executable(doxygen_test ${SOURCE_FILES})
target_link_libraries(TecFlix Qt5::Widgets Qt5::Core Qt5::Gui )

target_link_libraries(TecFlix curl)
qt5_use_modules( TecFlix Core Widgets Gui )