config:
	$(MAKE) -C ./buildroot qemu_riscv32_virt_defconfig
	echo 'BR2_PACKAGE_SIMPLE_DEBUGGER=y' >> ./buildroot/.config
qemu: config
	$(MAKE) -C ./buildroot -j$(shell nproc)
qemu-run: qemu
	./buildroot/output/images/start-qemu.sh
clean:
	$(MAKE) -C ./buildroot clean
