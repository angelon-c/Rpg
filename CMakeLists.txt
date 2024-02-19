cmake_minimum_required(VERSION 3.26)
project(Rpg)

set(CMAKE_CXX_STANDARD 17)

add_executable(Rpg main.cpp
        Character/Character.cpp
        Character/Character.h
        Enemy/Enemy.cpp
        Enemy/Enemy.h
        Player/Player.cpp
        Player/Player.h
        CombatSystem/CombatSystem.cpp
        CombatSystem/CombatSystem.h)
