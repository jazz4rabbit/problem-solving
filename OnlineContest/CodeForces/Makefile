CXX := clang++
CXXFLAGS := -std=c++17
TARGET := $(name).out
OBJECTS := $(name).o

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean :
	rm *.o $(TARGET)
