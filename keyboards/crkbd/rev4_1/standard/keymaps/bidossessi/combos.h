// Combo declarations
const uint16_t PROGMEM l1_combo[] = {KC_B, KC_N, COMBO_END};
const uint16_t PROGMEM l3_combo_l[] = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM l3_combo_r[] = {KC_Y, KC_U, COMBO_END};
const uint16_t PROGMEM esc_combo[]  = {KC_SPC, KC_TAB, COMBO_END};
const uint16_t PROGMEM del_combo[] = {KC_ENTER, KC_BSPC, COMBO_END};
const uint16_t PROGMEM l_boot_combo[] = {KC_R, KC_E, KC_W, KC_Q, COMBO_END};
const uint16_t PROGMEM r_boot_combo[] = {KC_P, KC_O, KC_I, KC_U, COMBO_END};

combo_t key_combos[] = {
    COMBO(l1_combo, TG(_GAMING_1)),
    COMBO(l3_combo_l, MO(_SHORTCUTS)),
    COMBO(l3_combo_r, MO(_SHORTCUTS)),
    COMBO(esc_combo, KC_ESC),
    COMBO(del_combo, KC_DEL),
    COMBO(l_boot_combo, QK_BOOTLOADER),
    COMBO(r_boot_combo, QK_BOOTLOADER)
};
