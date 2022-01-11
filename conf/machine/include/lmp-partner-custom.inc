# LMP partner specific customizations (either replace or extend options as defined by meta-lmp)

# Use mmcblk1p2 as root (SD card)
OSTREE_KERNEL_ARGS_imx8mq-itx-p-c444-sd ?= "console=tty1 console=ttymxc0,115200 earlycon=ec_imx6q,0x30860000,115200 root=/dev/mmcblk1p2 rootfstype=ext4"
