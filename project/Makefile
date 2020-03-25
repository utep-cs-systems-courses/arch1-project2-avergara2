COMMON_OBJECTS	=
CPU	= msp430g2553
CFLAGS	= -mmcu=${CPU} -I../h
LDFLAGS	= -L/opt/ti/msp430_gcc/include

CC	= msp430-elf-gcc
AS	= msp430-elf-as

main.elf: ${COMMON_OBJECTS} main.o
	${CC} ${CFLAGS} ${LDFLAGS} -o main.elf main.o

load: main.elf
	msp430loader.sh main.elf

clean:
	rm -f *.o main.elf
