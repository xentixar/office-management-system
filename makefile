CC = clang

CFLAGS  = -g -Wall
  
LFLAGS =
  
TARGET = main
  
all: $(TARGET)

run: $(TARGET)
	./build/$(TARGET)
  
$(TARGET): src/$(TARGET).c
	$(CC) $(CFLAGS) -o build/$(TARGET) src/$(TARGET).c