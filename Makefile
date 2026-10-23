CC = gcc
CFLAGS = -Wall -Wextra -std=c11 -Iinclude

TARGET = monitor
SOURCES = src/main.c src/monitor.c
TEST = test_monitor

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CC) $(CFLAGS) $(SOURCES) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

$(TEST): tests/test_monitor.c src/monitor.c
	$(CC) $(CFLAGS) tests/test_monitor.c src/monitor.c -o $(TEST)

test: $(TEST)
	./$(TEST)

clean:
	rm -f $(TARGET) $(TEST)

.PHONY: all run test clean
