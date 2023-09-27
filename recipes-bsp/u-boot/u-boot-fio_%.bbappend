FILESEXTRAPATHS:prepend := "${THISDIR}/${PN}:"

include u-boot-fio-winsystems.inc
SRC_URI += "file://0004-Ram-size-fix-when-optee-region-does-not-overlap.patch file://0005-Ram-size-fix-read-size-from-fuse.patch"

