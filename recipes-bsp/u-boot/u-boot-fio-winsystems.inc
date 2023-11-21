# common WinSystems u-boot-fio settings

SRC_URI:append:imx8mq-itx-p-c444 = " \
    file://imx8mq-itx-p-c444.cfg \
    file://imx8mq-itx-p-c444.dts \
    file://imx8mq-itx-p-c444-u-boot.dtsi \
    file://0001-Add-Suppoprt-for-C444-Board.patch \ 
"

S = "${WORKDIR}/git"

do_configure:prepend:imx8mq-itx-p-c444() {
    cp ${WORKDIR}/imx8mq-itx-p-c444.dts ${S}/arch/arm/dts/
    cp ${WORKDIR}/imx8mq-itx-p-c444-u-boot.dtsi ${S}/arch/arm/dts/
}
