
// Tap Dance declarations
enum {
    TD_VS_FIND,
    TD_VS_REPLACE,
    TD_VS_P,
    TD_VS_CMT,
};

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    [TD_VS_FIND] = ACTION_TAP_DANCE_DOUBLE(LCTL(KC_F),  LSFT(LCTL(KC_F))),
    [TD_VS_REPLACE] = ACTION_TAP_DANCE_DOUBLE(LCTL(KC_H),  LSFT(LCTL(KC_H))),
    [TD_VS_P] = ACTION_TAP_DANCE_DOUBLE(LCTL(KC_P), LSFT(LCTL(KC_P))),
    [TD_VS_CMT] = ACTION_TAP_DANCE_DOUBLE(LCTL(KC_SLSH), LSFT(LCTL(KC_A))),
};
