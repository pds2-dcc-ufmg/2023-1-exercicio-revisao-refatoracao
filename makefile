CXX = g++
CXXFLAGS = -std=c++11 -Wall -Iinclude
BUILD_DIR = ./build
SRC_DIR = ./src

vpl_exec: $(BUILD_DIR)/main.o $(BUILD_DIR)/Streaming.o $(BUILD_DIR)/Video.o $(BUILD_DIR)/Filme.o $(BUILD_DIR)/Serie.o
	$(CXX) $(CXXFLAGS) $^ -o $@

$(BUILD_DIR)/main.o: $(SRC_DIR)/main.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR)/Streaming.o: $(SRC_DIR)/entidades/Streaming.cpp include/Streaming.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR)/Video.o: $(SRC_DIR)/entidades/Video.cpp include/Video.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR)/Filme.o: $(SRC_DIR)/entidades/Filme.cpp include/Filme.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR)/Serie.o: $(SRC_DIR)/entidades/Serie.cpp include/Serie.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@