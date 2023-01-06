FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:${THISDIR}/u-boot-fio:"

SRC_URI:append:imx8mq-itx-p-c444 = " \
    file://lmp-ebbr.cfg \
"

include u-boot-fio-winsystems.inc
