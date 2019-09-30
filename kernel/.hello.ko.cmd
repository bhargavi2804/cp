cmd_/home/student/kernel/hello.ko := ld -r -m elf_i386 -T ./scripts/module-common.lds --build-id  -o /home/student/kernel/hello.ko /home/student/kernel/hello.o /home/student/kernel/hello.mod.o
