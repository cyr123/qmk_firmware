#include QMK_KEYBOARD_H

enum layers {
    _QWERTY,
    _FUNC
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        
    /* Keymap (Base Layer) Default Layer
     * ,----------------------------------------------------------------.
     * |ESC|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|   BS  |Del |
     * |----------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  {|  }| Ent |PgUp|
     * |------------------------------------------------------.    |----|
     * |CapsFn|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|  #|    |PgDn|
     * |----------------------------------------------------------------|
     * |Shift| \|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Up |Fn  |
     * |----------------------------------------------------------------|
     * |Ctrl|Win |Alt |          Space        |Alt |Ctrl|  |Lef|Dow|Rig |
     * `------------------------------------------------'  `------------'
     */
    [_QWERTY] = LAYOUT_all(
        KC_ESC ,KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL, KC_BSPC, KC_BSPC, KC_DEL, 
        KC_TAB,           KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,       KC_PGUP, 
        LT(_FUNC,KC_CAPS), KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT,    KC_ENT,             KC_PGDN, 
        KC_LSFT, KC_NUBS,    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH, KC_RSFT,         KC_UP,        MO(_FUNC), 
        KC_LCTL, KC_LGUI, KC_LALT,        KC_SPC,         KC_SPC,          KC_SPC,          KC_RALT, KC_RCTL, XXXXXXX, KC_LEFT, KC_DOWN,      KC_RGHT),

    /* Keymap Fn Layer
     * ,----------------------------------------------------------------.
     * | ` | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|       |Ins |
     * |----------------------------------------------------------------|
     * |     |Hom|Up |End|PgU|   |   |   |   |   |Prt|SLk|Pau|     |Home|
     * |------------------------------------------------------.    |----|
     * |      |Lef|Dow|Rig|PgD|   |   |   |   |   |   |   |   |    |End |
     * |----------------------------------------------------------------|
     * |       |   |   |   |    |   |   |   |Prv|PlP|Nxt|      |PUp|    |
     * |----------------------------------------------------------------|
     * |     |Menu |    |                    |     |    |  |Hom|PDn|End |
     * `------------------------------------------------'  `------------'
     */
    [_FUNC] = LAYOUT_all(
         KC_GRV,  KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, _______,_______,KC_INS, 
         _______,   KC_HOME, KC_UP, KC_END, KC_PGUP, _______,_______,_______,_______,_______,KC_PSCR,KC_SLCK,KC_PAUS,_______,      KC_HOME, 
         _______,     KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, _______,_______,_______,_______,_______,_______,_______,      _______,      KC_END, 
         _______,_______,_______,_______,_______,_______,_______,_______,_______,KC_MPRV,KC_MPLY,KC_MNXT,_______,        KC_PGUP,_______, 
         _______,KC_APP  ,_______,      _______,     _______,    _______,  _______,_______, _______,KC_HOME,KC_PGDN,KC_END),

    };

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}

void matrix_init_user(void) {
    
}

void matrix_scan_user(void) {
    
}

