# According to NXP optee cannot be placed at the end of 4G so
# tell optee there is only 3G and u-boot / linux will add the
# rest
EXTRA_OEMAKE_append_imx8mq-itx-p-c444 = " \
    CFG_DDR_SIZE=0xc0000000 \
"
