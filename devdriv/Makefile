obj-m :=simple_char_device.o


all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules 
	gcc simple_char_test.c -o simple_char_test

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
