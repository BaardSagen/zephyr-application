cmake_minimum_required(VERSION 3.20.0)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})

project(app2 LANGUAGES C)

target_sources(app2 PRIVATE src/main.c)