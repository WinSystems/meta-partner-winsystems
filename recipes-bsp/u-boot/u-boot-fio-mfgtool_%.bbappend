FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:${THISDIR}/u-boot-fio:"

TOOLCHAIN_OPTIONS:append = ' -mbranch-protection=none'

include u-boot-fio-winsystems.inc
