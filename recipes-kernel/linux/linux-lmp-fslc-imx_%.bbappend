FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI_append_imx8mq-itx-p-c444 = " \
    file://0001-Adding-support-for-SN65DSI83-bridge.patch \
    file://imx8mq-itx-p-c444.cfg \
    file://0001-Fix-for-rts-during-RS485.patch \
"
