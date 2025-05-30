enum layer_names
{
    _BASE,
    _GAMING_1,
    _GAMING_2,
    _SHORTCUTS,
    _NAV,
    _MOUSE,
    _MEDIA,
    _NUMBERS,
    _SYMBOLS,
    _FUN
};

layer_state_t layer_state_set_user(layer_state_t state)
{
    switch (get_highest_layer(state))
    {
    case _FUN:
        rgb_matrix_sethsv_noeeprom(HSV_MAGENTA);
        rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
        break;
    case _SYMBOLS:
        rgb_matrix_sethsv_noeeprom(HSV_BLUE);
        rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
        break;
    case _NUMBERS:
        rgb_matrix_sethsv_noeeprom(HSV_RED);
        rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
        break;
    case _MEDIA:
        rgb_matrix_sethsv_noeeprom(HSV_YELLOW);
        rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
        break;
    case _MOUSE:
        rgb_matrix_sethsv_noeeprom(HSV_CYAN);
        rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
        break;
    case _NAV:
        rgb_matrix_sethsv_noeeprom(HSV_GREEN);
        rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
        break;
    case _SHORTCUTS:
        rgb_matrix_sethsv_noeeprom(HSV_WHITE);
        rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
        break;
    case _GAMING_2:
        rgb_matrix_sethsv_noeeprom(HSV_RED);
        break;
    case _GAMING_1:
        rgb_matrix_mode_noeeprom(RGB_MATRIX_CYCLE_LEFT_RIGHT);
        break;
    default:
        rgb_matrix_sethsv_noeeprom(HSV_RED);
        rgb_matrix_mode_noeeprom(RGB_MATRIX_DIGITAL_RAIN);
        break;
    }
    return state;
}

void keyboard_post_init_user(void) {
    rgb_matrix_mode_noeeprom(RGB_MATRIX_DIGITAL_RAIN);
}
