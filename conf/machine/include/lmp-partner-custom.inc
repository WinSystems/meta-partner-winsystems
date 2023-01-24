# LMP partner specific customizations (either replace or extend options as defined by meta-lmp)

# Use mmcblk1p2 as root (SD card)
OSTREE_KERNEL_ARGS:imx8mq-itx-p-c444-sd ?= "console=tty1 console=ttymxc0,115200 earlycon=ec_imx6q,0x30860000,115200 root=/dev/mmcblk1p2 rootfstype=ext4"

# SystemReady settings
UBOOT_SIGN_ENABLE:sota:imx8mq-itx-p-c444-ebbr = ""
KERNEL_IMAGETYPE:sota:imx8mq-itx-p-c444-ebbr ?= "Image"
KERNEL_CLASSES:sota:imx8mq-itx-p-c444-ebbr ?= ""
EFI_PROVIDER:imx8mq-itx-p-c444-ebbr ?= "grub-efi"
OSTREE_BOOTLOADER:imx8mq-itx-p-c444-ebbr ?= "grub"
IMAGE_EFI_BOOT_FILES:sota:imx8mq-itx-p-c444-ebbr ?= "${@make_efi_dtb_boot_files(d)}"
WKS_FILE:sota:imx8mq-itx-p-c444_imx8mq-itx-p-c444-ebbr = "efidisk-sota.wks"

# Use imx-boot + u-boot.itb WIC file
WKS_FILE:imx8mq-itx-p-c444 ?= "sdimage-imx8m-spl-fit.wks.in"
WKS_FILE:sota:imx8mq-itx-p-c444 ?= "sdimage-imx8m-spl-fit-sota.wks.in"
