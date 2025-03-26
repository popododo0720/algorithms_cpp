cmake_minimum_required(VERSION 3.10)

# 프로젝트 이름 설정
project(algorithms_cpp)

# C++ 표준
set(CMAKE_CXX_STANDARD 17)

# 디렉토리 추가
add_subdirectory(bit-manipulation)

# include 디렉토리 경로를 설정
include_directories(${CMAKE_SOURCE_DIR}/include)

# 변수 설정
set(LIBRARIES bit-manipulation)

foreach(LIBRARY ${LIBRARIES})
    set(LIB_OBJS ${LIB_OBJS} $<TARGET_OBJECTS:${LIBRARY}>)
endforeach()

# 라이브러리로 빌드
# add_library(${PROJECT_NAME} STATIC ${LIB_OBJS})

# 실행 파일 생성
add_executable(${PROJECT_NAME} main.cc ${LIB_OBJS})

# 커스텀 타겟 추가 - 빌드 클린
add_custom_target(clear
    COMMAND ${CMAKE_COMMAND} -P ${CMAKE_SOURCE_DIR}/clean.cmake
)
