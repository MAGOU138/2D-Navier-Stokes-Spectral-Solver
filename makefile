CC = mpic++
CFLAGS = -Wall -Wextra -std=c++11

TARGET = program

all: $(TARGET)

$(TARGET): main.cpp
	$(CC) $(CFLAGS) $< -o $@

.PHONY: clean
clean:
	rm -f $(TARGET)
