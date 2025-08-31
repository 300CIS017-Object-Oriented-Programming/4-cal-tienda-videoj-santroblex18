cmake_minimum_required(VERSION 3.22)
project(GameStore)

set(CMAKE_CXX_STANDARD 17)

add_executable(GameStore
    main.cpp
    catalogo.cpp
    carrito.cpp
    descuentos.cpp
    utilidades.cpp
)
