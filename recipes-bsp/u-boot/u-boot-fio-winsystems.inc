# common WinSystems u-boot-fio settings

SRC_URI:append:imx8mq-itx-p-c444 = " \
    file://imx8mq-itx-p-c444.cfg \
    file://imx8mq-itx-p-c444.dts \
    file://imx8mq-itx-p-c444-u-boot.dtsi \
    file://0001-Adding-DTS-to-Makefile-for-C444.patch \
    file://0002-Adding-support-for-C444-Memory.patch \
    file://0003-imx8mq-itx-p-c444-adjust-ethernet-phy.patch \
    file://0004-Ram-size-fix-when-optee-region-does-not-overlap.patch \
    file://0005-Ram-size-fix-read-size-from-fuse.patch \
"

S = "${WORKDIR}/git"

do_configure:prepend:imx8mq-itx-p-c444() {
    cp ${WORKDIR}/imx8mq-itx-p-c444.dts ${S}/arch/arm/dts/
    cp ${WORKDIR}/imx8mq-itx-p-c444-u-boot.dtsi ${S}/arch/arm/dts/
}
