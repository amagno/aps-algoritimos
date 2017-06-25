CFLAGS = -Wall -g
SRC=$(wildcard *.c)
SRC_OBJECTS=$(SRC:.c=.o)
HEADERS=$(wildcard *.h)
NAME=aps

$(NAME): $(SRC_OBJECTS) 
	gcc -o $@ $^ $(CFLAGS)

%.o: %.c $(HEADERS)
	gcc -o $@ -c $< $(CFLAGS)

clean:
	rm *.o
	rm $(NAME)