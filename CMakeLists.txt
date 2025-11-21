cmake_minimum_required(VERSION 3.10)
project(dooz)

set(CMAKE_CXX_STANDARD 17)

add_executable(dooz
    main.cc
    Dooz.cc
    Player.cc
    Board.cc
)