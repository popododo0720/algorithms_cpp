# Makefile

# 컴파일러 설정
CXX = g++
CXXFLAGS = -std=c++17 -Wall

# 출력 실행 파일 이름
TARGET = main

# 빌드된 오브젝트 파일을 저장할 디렉토리
BUILD_DIR = build

# 소스 파일 목록: 현재 디렉토리와 하위 디렉토리에서 모든 .cpp 파일을 자동으로 찾음
SRC = $(wildcard *.cpp) $(foreach dir, $(wildcard */), $(wildcard $(dir)*.cpp))

# 오브젝트 파일 목록: .cpp 파일을 .o 파일로 변환하고 build 디렉토리로 경로 지정
OBJ = $(patsubst %.cpp,$(BUILD_DIR)/%.o,$(SRC))

# 기본 타겟
all: $(TARGET)

# 실행 파일 생성
$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

# .cpp 파일을 .o 파일로 변환하는 규칙
$(BUILD_DIR)/%.o: %.cpp
	mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# 클린 규칙 (빌드 파일을 삭제)
clean:
	rm -f $(TARGET)
	rm -f $(OBJ)

# .cpp 파일이 변경되었을 때 자동으로 클린 후 재빌드
re: clean all

# 실행 파일 실행
run: $(TARGET)
	./$(TARGET)

rerun: clean all
	./$(TARGET)
