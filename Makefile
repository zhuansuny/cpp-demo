# 定义编译器和编译选项
CC := g++
CFLAGS := -g -O2 -std=c++11 -Wall -I include

# 查找当前目录及其子目录下的所有.cpp文件
# SOURCES := $(shell find . -name "*.cpp")
# SOURCES := $(shell find . -path ./build -prune -o -name "*.cpp" -print)
SOURCES := $(shell find ./src -type f -name "*.cpp" ! -path "*/build/*" -print)

# 从源文件生成对象文件名称
OBJECTS := $(patsubst %.cpp, %.o, $(SOURCES))

# 假设你的可执行文件名为 main
EXECUTABLE := bin/main

# 默认目标：编译所有文件并链接生成可执行文件
all: $(EXECUTABLE)

# 规则：如何从.cpp文件生成.o文件
%.o: %.cpp
	$(CC) $(CFLAGS) -I. -c $< -o $@

# 链接目标文件到可执行文件
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^;

# 清理规则
clean:
	rm -f $(EXECUTABLE) $(OBJECTS)

# 清理规则
cleano:
	rm -f $(OBJECTS)

# 可选：重新构建，先清理后构建
rebuild: clean all

build: all cleano
