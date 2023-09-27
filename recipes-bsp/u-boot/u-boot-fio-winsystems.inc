# common WinSystems u-boot-fio settings

SRC_URI:append:imx8mq-itx-p-c444 = " \
    file://imx8mq-itx-p-c444.cfg \
    file://imx8mq-itx-p-c444.dts \
    file://imx8mq-itx-p-c444-u-boot.dtsi \
    file://0001-Adding-support-for-C444-Memory.patch \
    file://0001-Adding-DTS-to-Makefile-for-C444.patch \
    file://0001-imx8mq-itx-p-c444-adjust-ethernet-phy.patch \
    file://0002-Memory-Size-Fix.patch \
"

# TJS REMOVED FOR DEBUG
# SRC_URI:append:imx8mq-itx-p-c444-ebbr = " \
#     file://0001-LF-3892-5-imx8mn_evk-update-defconfig-and-code-for-S.patch \
#     file://0002-LF-4200-imx8m-soc-drop-phy-reset-gpios-for-fec.patch \
# "
# 


S = "${WORKDIR}/git"

do_configure:prepend:imx8mq-itx-p-c444() {
    cp ${WORKDIR}/imx8mq-itx-p-c444.dts ${S}/arch/arm/dts/
    cp ${WORKDIR}/imx8mq-itx-p-c444-u-boot.dtsi ${S}/arch/arm/dts/
}
