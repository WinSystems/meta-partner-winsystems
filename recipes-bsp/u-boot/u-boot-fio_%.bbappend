FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI_append_imx8mq-itx-p-c444 = " \
    file://imx8mq-itx-p-c444.cfg \
    file://0001-Adding-support-for-C444-Memory.patch \
    file://0001-Adding-DTS-for-C444.patch \
"

