/*
 * HHKB JP Layout
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
     * |------------------------------------------------------` ENT|
     * |Esc   |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Fn2|    |
     * |-----------------------------------------------------------|
     * |LShift |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Fn4| Up|RST|
     * |-----------------------------------------------------------|
     * |Fn0||Ctl|Gui|Alt|   |  Space  |   |Alt|Gui|Ctl||Lft|Dwn|Rgt|
     * `-----------------------------------------------------------'
     */
    KEYMAP_JP(GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,BSPC, \
              TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC, \
              ESC, A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT, FN2,ENT, \
              LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,FN4,  UP, RSFT, \
              FN0, LCTL,LGUI,LALT,  NO,     SPC,        NO,RALT,RGUI,RCTL, LEFT,DOWN,RGHT),

    /* Layer 1: Extended mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |     |Mut|VoD|VoU|   |   |   |   |   |   |Psc|Slk|Pus|     |
     * |------------------------------------------------------`    |
     * |Caps  |Ply|Stp|Prv|Nxt|   |   |   |   |   |Ins|Hom|PgU|    |
     * |-----------------------------------------------------------|
     * |       |BiD|BiU|   |   |   |   |   |   |Del|End|PgD|   |   |
     * |-----------------------------------------------------------|
     * |Fn1||   |   |   |   |         |   |   |   |   ||   |   |   |
     * `-----------------------------------------------------------'
     */
    KEYMAP_JP(PWR, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL, \
              TRNS,MUTE,VOLD,VOLU,  NO,  NO,  NO,  NO,  NO,  NO,PSCR,SLCK,PAUS, \
              CAPS,MPLY,MSTP,MPRV,MNXT,  NO,  NO,  NO,  NO,  NO,INS,HOME,PGUP,TRNS, \
              TRNS,BRTD,BRTI,  NO,  NO,  NO,  NO,  NO,  NO, DEL, END,PGDN,TRNS,TRNS, \
              FN1 ,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),

    /* Layer 2: Movement mode (JIS BSLS)
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |BS |
     * |-----------------------------------------------------------|
     * |     |MwL|McU|MwR|MwU|   |   |   |   |   |Mb4|Mb5|   |     |
     * |------------------------------------------------------`    |
     * |Esc   |McL|McD|McR|MwD|   |   |   |   |Mb1|Mb3|Mb2|Fn3|    |
     * |-----------------------------------------------------------|
     * |       |   |   |   |   |   |   |   |   |Ma0|Ma1|Ma2|   |   |
     * |-----------------------------------------------------------|
     * |   ||   |   |   |   |         |   |   |   |   ||   |   |   |
     * `-----------------------------------------------------------'
     */
    KEYMAP_JP(NO , NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,   NO,  NO,  NO,  NO,BSPC, \
              TRNS,WH_L,MS_U,WH_R,WH_U,  NO,  NO,  NO,  NO,  NO,BTN4,BTN5,  NO, \
              ESC ,MS_L,MS_D,MS_R,WH_D,  NO,  NO,  NO,  NO,BTN1,BTN3,BTN2,FN3,TRNS, \
              TRNS,  NO,  NO,  NO,  NO,  NO,  NO,  NO,  NO,ACL0,ACL1,ACL2,  NO,TRNS, \
              NO  ,TRNS,TRNS,TRNS,TRNS,     TRNS,     TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS),

    /* Layer 3: Numpad mode (JIS RO)
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   | . | 0 |   |   |   |   |BS |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   | 1 | 2 | 3 |   |   |   |     |
     * |------------------------------------------------------`PENT|
     * |Esc   |   |   |   |   |   |   | 4 | 5 | 6 |   |   |   |    |
     * |-----------------------------------------------------------|
     * |   +   |   |   |   |   |   |   | 7 | 8 | 9 |   |Fn5| Up|   |
     * |-----------------------------------------------------------|
     * |   || - | * | / |   |         |   |   |   |   ||Lft|Dwn|Rgt|
     * `-----------------------------------------------------------'
     */
    KEYMAP_JP(NO , NO,  NO,  NO,  NO,  NO,  NO,  NO,PDOT,  P0,   NO,  NO,  NO,  NO,BSPC, \
              TRNS,  NO,  NO,  NO,  NO,  NO,  NO,  P1,  P2,  P3,  NO,  NO,  NO, \
              ESC ,  NO,  NO,  NO,  NO,  NO,  NO,  P4,  P5,  P6,  NO,  NO,  NO,PENT, \
              PPLS,  NO,  NO,  NO,  NO,  NO,  NO,  P7,  P8,  P9,  NO, FN5,  UP,TRNS, \
              NO  ,PMNS,PAST,PSLS,TRNS,     TRNS,     TRNS,TRNS,TRNS,TRNS,LEFT,DOWN,RGHT),
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
    [1]  = ACTION_LAYER_INVERT(1, ON_RELEASE),
    [2]  = ACTION_LAYER_TAP_TOGGLE(2),
    [3]  = ACTION_LAYER_INVERT(2, ON_RELEASE),
    [4]  = ACTION_LAYER_TAP_TOGGLE(3),
    [5]  = ACTION_LAYER_INVERT(3, ON_RELEASE)
};
