FILESEXTRAPATHS_prepend := "${THISDIR}/${PN}:"

SRC_URI_append_imx8mq-itx-p-c444 = " \
    file://0001-Adding-support-for-sn65dsi83-mipi-to-LVDS-bridge.patch \
    file://imx8mq-itx-p-c444.cfg \
"
