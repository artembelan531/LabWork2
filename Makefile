CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Iinclude
GTEST_LIBS = -lgtest -lgtest_main -lpthread

SRC_DIR = src
SRC = $(wildcard $(SRC_DIR)/*.cpp)
OBJ = $(SRC:.cpp=.o)
EXEC = roguelike

TEST_DIR = tests
TEST_SRC = $(wildcard $(TEST_DIR)/*.cpp)
TEST_OBJ = $(filter-out $(SRC_DIR)/main.o, $(OBJ)) $(TEST_SRC:.cpp=.o)
TEST_EXEC = roguelike_tests

all: $(EXEC) tests

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

tests: $(TEST_EXEC)

$(TEST_EXEC): $(TEST_OBJ)
	$(CXX) $(CXXFLAGS) $^ $(GTEST_LIBS) -o $@
	./$@

clean:
	rm -f $(OBJ) $(EXEC) $(TEST_OBJ) $(TEST_EXEC)

.PHONY: all tests clean
