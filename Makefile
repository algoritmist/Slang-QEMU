config:
	$(MAKE) -C ./buildroot qemu_riscv32_virt_defconfig
qemu: config
	$(MAKE) -C ./buildroot -j$(shell nproc)
qemu-run: qemu
	./output/images/start-qemu.sh
clean:
	$(MAKE) -C ./buildroot clean
