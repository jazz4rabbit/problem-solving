CXX := clang++
CXXFLAGS := -std=c++17
TARGET := a.out
OBJECTS := main.o

all : $(TARGET)

$(TARGET) : $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean :
	rm *.o $(TARGET)
