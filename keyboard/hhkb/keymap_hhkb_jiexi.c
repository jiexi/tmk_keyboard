/*
 * Jetski HHKB Layout
 */
#include "keymap_common.h"


#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |`  |  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \| BS|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|     |
     * |-----------------------------------------------------------|
     * |Ctrl/E|  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter/C |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Fn1   |Fn0|
     * `-----------------------------------------------------------'
     *       |Alt|Gui|            Space          |Gui|Alt|
     *       `-------------------------------------------'
     */
    KEYMAP(GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL,BSLS,BSPC,   \
           TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,  NO,       \
           FN4, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,FN3,             \
           LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH, FN1,FN0,             \
                LALT,LGUI,          SPC,                RGUI,RALT),

    /* Layer 1: Extended mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |Esc| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |     |Mut|VoD|VoU|   |   |   |   |   |   |Psc|Slk|Pus|     |
     * |-----------------------------------------------------------|
     * |      |Ply|Stp|Prv|Nxt|   |   |   |   |Ins|Hom|PgU|        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |Del|End|PgD|      |Fn5|
     * `-----------------------------------------------------------'
     *       |   |     |                       |     |   |
     *       `-------------------------------------------'
     */
    KEYMAP(ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS,DEL,   \
           TRNS,MUTE,VOLD,VOLU,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,PSCR,SLCK,PAUS,  NO,      \
           TRNS,MPLY,MSTP,MPRV,MNXT,NO  ,NO  ,NO  ,NO ,INS,HOME,PGUP, TRNS,            \
           TRNS,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,NO  ,DEL ,END,PGDN,  NO, FN5,            \
                TRNS,TRNS,          TRNS,               TRNS,TRNS),

    /* Layer 2: Movement mode (LSHFT)
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |BS |
     * |-----------------------------------------------------------|
     * |     |   |McU|   |   |MwU|   |   |M4 |M5 |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |McL|McD|McR|MwL|MwD|MwR|M1 |M3 |M2 |Up|Rght|        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |Ma2|Ma1|Ma0|Left|Dwn|Fn6  |   |
     * `-----------------------------------------------------------'
     *       |   |     |                    |     |   |   |
     *       `--------------------------------------------'
     */
    KEYMAP(TRNS,  NO,  NO, NO,  NO,  NO,  NO,  NO,  NO,  NO,   NO,  NO,  NO, NO,BSPC,   \
           TRNS,  NO,MS_U,  NO,NO  ,WH_U,NO  ,NO  ,BTN4,BTN5,  NO,  NO,  NO,   NO,      \
           TRNS,MS_L,MS_D,MS_R,WH_L,WH_D,WH_R,BTN1,BTN3,BTN2,  UP,RGHT,TRNS,            \
           TRNS,NO  ,NO  ,NO  ,NO  ,NO  ,ACL2 ,ACL1,ACL0,LEFT,DOWN,FN6,  NO,            \
                TRNS,TRNS,            TRNS,             TRNS  ,TRNS),
};



/*
 * Fn action definition
 */
#ifdef KEYMAP_SECTION_ENABLE
const action_t fn_actions[] __attribute__ ((section (".keymap.fn_actions"))) = {
#else
const action_t fn_actions[] PROGMEM = {
#endif
    [0]  = ACTION_LAYER_TAP_TOGGLE(1),
    [1]  = ACTION_LAYER_TAP_TOGGLE(2),
    [2]  = ACTION_LAYER_MOMENTARY(3),
    [3]  = ACTION_MODS_TAP_KEY(MOD_RCTL, KC_ENTER),
    [4]  = ACTION_MODS_TAP_KEY(MOD_LCTL, KC_ESC),
    [5]  = ACTION_LAYER_INVERT(1, ON_RELEASE),
    [6]  = ACTION_LAYER_INVERT(2, ON_RELEASE)
};
