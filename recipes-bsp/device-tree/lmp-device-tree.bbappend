FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI_append_imx8mq-itx-p-c444 = " \
        file://freescale_imx8mq-itx-p-c444.dts \
        file://freescale_imx8mq-itx-p-c444-lvds-auo.dts \
"

COMPATIBLE_MACHINE_imx8mq-itx-p-c444 = ".*"

