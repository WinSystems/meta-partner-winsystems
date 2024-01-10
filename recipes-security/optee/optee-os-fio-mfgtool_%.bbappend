# According to NXP optee cannot be placed at the end of 4G so
# position optee earlier in memory to work on both 2G and 4G systems
EXTRA_OEMAKE:append:imx8mq-itx-p-c444 = " \
    CFG_TZDRAM_START=0x56000000 \
"
