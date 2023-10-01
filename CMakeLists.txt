cmake_minimum_required(VERSION 3.26)
project(TheBasicSynthesisOfComputerScienceMajor_DataStructureCode C)

set(CMAKE_C_STANDARD 90)

add_executable(TheBasicSynthesisOfComputerScienceMajor_DataStructureCode main.c
        "00 Definition.h"
        "01 SequentialList 顺序表.h"
        "02 SingleLinkdedList 单链表.h")
