CXX = g++
CXXFLAGS = -std=c++17 -Wall

TARGET = main
# SRC = $(shell find . name "*.cpp")
SRC = main
OBJ = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CXX) $(OBJ) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

rebuild: clean all