cmake_minimum_required(VERSION 3.10)

project(CameraPlaygroud)

add_subdirectory(CameraSandbox)

add_executable(CameraPlaygroud "Program.cpp")

target_link_libraries(CameraPlaygroud PUBLIC CameraSandbox)

target_include_directories(CameraPlaygroud PUBLIC
                            "${PROJECT_BINARY_DIR}"
                            "${PROJECT_SOURCE_DIR}/CameraSandbox"
                        )