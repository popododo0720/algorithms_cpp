project(bit-manipulation)

file(GLOB SOURCES *.cc)

# bit_manipulation 폴더에 대한 빌드를 설정
add_library(${PROJECT_NAME} STATIC ${SOURCES})

# 헤더 파일 경로를 설정
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR}/include)
