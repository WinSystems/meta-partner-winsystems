FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:"

SRC_URI:append:imx8mq-itx-p-c444 = " \
    file://0001-Adding-support-for-SN65DSI83-bridge.patch \
    file://0001-Set-bpc-to-8.patch \
    file://imx8mq-itx-p-c444.cfg \
    file://0001-Fix-for-rts-during-RS485.patch \
    file://0002-recipes-kernel-update-eth-retries.patch \
    file://0003-Set-connector-and-BUS-format.patch \
"
