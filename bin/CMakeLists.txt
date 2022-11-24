add_executable(${PROJECT_NAME} main.cpp  Parser.cpp Parser.hpp )

target_link_libraries(${PROJECT_NAME} PRIVATE additor)
target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_SOURCE_DIR})