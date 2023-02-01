# doio/kb38

QMK for Megalodon DOIO Triple Knob 38% with OLED Screen. 

* Keyboard Maintainer: [Katrina](https://github.com/PepperKats)
* Hardware Supported: Megalodon DOIO Triple Knob 38%
* Hardware Availability: https://www.keebmonkey.com/products/megalodon-doio-triple-knob-38-keyboard-with-oled-screen

Make example for this keyboard (after setting up your build environment):

    make doio/kb38:vial

Flashing example for this keyboard:

    make doio/kb38:vial:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## OLED UI

OLED design and animation created by ScruffyTheDeer.

![OLED animation](https://user-images.githubusercontent.com/15955749/216161689-a770444f-3760-4557-829a-07241765f935.gif)

## Bootloader

Enter the bootloader in 3 ways:

* **Physical reset button**: Briefly press the button on the back of the PCB
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
