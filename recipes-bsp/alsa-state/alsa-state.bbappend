# Don't use /var for ostree-based distro to store/look for
# "asound.state" NXP shipped file which is required for some sound
# systems (i.e. wm8960 on imx8mp-evk) to work properly.
# Instead, use /usr -> "/usr/lib/alsa/asound.state"

# NOTE: This also changes alsa-state-init script and post-install
# package script, managed in the parent recipe.

python __anonymous() {
    if bb.utils.contains('IMAGE_CLASSES', 'image_types_ostree', True, False, d):
        d.setVar("localstatedir", d.getVar("prefix"))
}
