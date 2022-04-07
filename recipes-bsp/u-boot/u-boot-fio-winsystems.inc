# common WinSystems u-boot-fio settings

SRC_URI_append_imx8mq-itx-p-c444 = " \
    file://imx8mq-itx-p-c444.cfg \
    file://imx8mq-itx-p-c444.dts \
    file://imx8mq-itx-p-c444-u-boot.dtsi \
    file://0001-Adding-support-for-C444-Memory.patch \
    file://0001-Adding-DTS-to-Makefile-for-C444.patch \
"

SRC_URI_append_imx8mq-itx-p-c444-ebbr = " \
    file://0001-LF-3892-5-imx8mn_evk-update-defconfig-and-code-for-S.patch \
    file://0002-LF-4200-imx8m-soc-drop-phy-reset-gpios-for-fec.patch \
"

S = "${WORKDIR}/git"

do_configure_prepend_imx8mq-itx-p-c444() {
    cp ${WORKDIR}/imx8mq-itx-p-c444.dts ${S}/arch/arm/dts/
    cp ${WORKDIR}/imx8mq-itx-p-c444-u-boot.dtsi ${S}/arch/arm/dts/
}
