# common WinSystems u-boot-fio settings

SRC_URI:append:imx8mq-itx-p-c444 = " \
    file://imx8mq-itx-p-c444.cfg \
    file://imx8mq-itx-p-c444.dts \
    file://imx8mq-itx-p-c444-u-boot.dtsi \
    file://0001-Add-itx_p_c444-device-tree.patch \
    file://0002-add-ITX-P-C444-board-specific-code.patch \
    file://0003-adding-c444-include-configs-header-files.patch \
    file://0004-Adding-ITX_P_C444-defconfig.patch \
    file://0005-Update-memory-timing.patch \
    file://0006-Update-memory-timing.patch \
    file://0007-Add-DRAM-banks.patch \
    file://0008-Configure-target-itx-p-c444.patch \
    file://0009-Correct-naming-typo.patch \
    file://0010-Fix-define-warnings.patch \
    file://0011-Chaging-vendor-to-correct-path-issue-in-Yocto.patch \
    file://0012-Fix-entern-declarations.patch \
"

S = "${WORKDIR}/git"

do_configure:prepend:imx8mq-itx-p-c444() {
    cp ${WORKDIR}/imx8mq-itx-p-c444.dts ${S}/arch/arm/dts/
    cp ${WORKDIR}/imx8mq-itx-p-c444-u-boot.dtsi ${S}/arch/arm/dts/
}
