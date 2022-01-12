# According to NXP optee cannot be placed at the end of 4G so
# tell optee there is only 3G and u-boot / linux will add the
# rest
EXTRA_OEMAKE_append_imx8mq-itx-p-c444 = " \
    CFG_DDR_SIZE=0xc0000000 \
"

# TEMP: Fix access to memory > 3G (Revert w/ move to 3.15)
EXTRA_OEMAKE_append_imx8mq-itx-p-c444 = " \
    CFG_CORE_DYN_SHM=n \
"
