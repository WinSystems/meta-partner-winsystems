setenv fdt_file imx8mq-itx-p-c444.dtb
fatload mmc ${emmc_dev}:1 ${loadaddr} /uEnv.txt
env import -t ${loadaddr} ${filesize}
run bootcmd
