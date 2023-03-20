# Don't use /var for ostree-based distro to store/look for "asound.state"
# file which is required for some sound systems (i.e. wm8960 on imx8mp-evk)
# to work properly.

python __anonymous() {
    if bb.utils.contains('IMAGE_CLASSES', 'image_types_ostree', True, False, d):
        d.setVar("localstatedir", d.getVar("prefix"))
}

EXTRA_OECONF:append = " --with-asound-state-dir=${localstatedir}/lib/alsa"
EXTRA_OEMAKE:append = " SYS_ASOUND_DIR=${localstatedir}/lib/alsa"
