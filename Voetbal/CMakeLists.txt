cmake_minimum_required(VERSION 3.15)
project(OO-Voetbal)

set(CMAKE_CXX_STANDARD 14)

add_executable(OO-Voetbal main.cpp Actie.cpp Actie.h loopActie.cpp loopActie.h pasActie.cpp pasActie.h schietActie.cpp schietActie.h vangActie.cpp vangActie.h voorzetActie.cpp voorzetActie.h tackleActie.cpp tackleActie.h Speler.cpp Speler.h Aanvaller.cpp Aanvaller.h Middenvelder.cpp Middenvelder.h Verdediger.cpp Verdediger.h Keeper.cpp Keeper.h Team.cpp Team.h)