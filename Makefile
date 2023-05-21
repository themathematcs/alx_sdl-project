CC = gcc
CFLAGS = -Wall -Wextra -std=c99
LDFLAGS = -lSDL2

SRC = main.c innit.c
OBJ = $(SRC:.c=.o)
EXECUTABLE = output

all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJ)
	$(CC) $(OBJ) $(LDFLAGS) -o $@

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(EXECUTABLE)
