#copyright : Ahmed

CC=arm-none-eabi-
CFLAGS= -g -mcpu=arm926ej-s
INCS=-I .
LIBS=
SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)
AS = $(wildcard *.s)
ASOBJ = $(AS:.s=.o)
project_name=learn-in-depth

all: $(project_name).bin
	@echo "====Build is done===="

startup.o: startup.s
	$(CC)as.exe $(CFLAGS) $< -o $@
	
%.o: %.c
	$(CC)gcc.exe -c $(INCS) $(CFLAGS) $< -o $@
	
	
$(project_name).elf: $(OBJ) $(ASOBJ)
	$(CC)ld.exe -T linker_script.ld $(LIBS) $(OBJ) -o $@
	
$(project_name).bin: $(project_name).elf
	$(CC)objcopy.exe -O binary $< $@
	
clean_all:
	rm *.o *.elf *.bin
	
clean:
	rm *.elf *.bin