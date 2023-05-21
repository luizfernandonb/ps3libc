CFLAGS = -Wall \
		 -Wextra \
		 -Wa,-mcell \
		 -O3 \
		 -g0 \
		 -std=gnu11 \
		 -nostdlib \
		 -nostdinc \
		 -nostartfiles \
		 -ffreestanding \
		 -mregnames \
		 -c \
		 -D__ASSEMBLY__
		 -Isrc/include \
		 $(shell find src/ -type f -name "*.c" -exec sh -c 'echo {} -o build/ppu/{}.o | sed -e "s|\( -o [^[:space:]]*/\)src/|\1|" -e "s|.c.o|.o|g"' \;)

CC = ppu-lv2-gcc

all:
	$(CC) $(CFLAGS)
