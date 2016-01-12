#include "common_operater.h"
#include "../packet/include/win32_spice_interface_types.h"
//#include "../packet/include/spice_log.h"
//#include "create_bmp.h"
#include <stdio.h>
#include <QImage>


void InitKeyCode(UINT16 keyCode[])
{
	//const UINT16 keymap_win322xtkbd[256] = { 0 };
#ifdef LINUX
 
  keyCode[0x20] = 0x39;       /* 32 (XK_space) => 57 via 57 (KEY_SPACE) */
  keyCode[0x27] = 0x28;       /* 39 (XK_apostrophe) => 40 via 40 (KEY_APOSTROPHE) */
  keyCode[0x22] = 0x28;       /* 39 (XK_apostrophe) => 40 via 40 (KEY_APOSTROPHE) */
  keyCode[0x2c] = 0x33;       /* 44 (XK_comma) => 51 via 51 (KEY_COMMA) */
  keyCode[0x3c] = 0x33;       /* 44 (XK_comma) => 51 via 51 (KEY_COMMA) */
  keyCode[0x2d] = 0xc;        /* 45 (XK_minus) => 12 via 12 (KEY_MINUS) */
  keyCode[0x5f] = 0xc;        /* 45 (XK_minus) => 12 via 12 (KEY_MINUS) */
  keyCode[0x2e] = 0x34;       /* 46 (XK_period) => 52 via 52 (KEY_DOT) */
  keyCode[0x3e] = 0x34;       /* 46 (XK_period) => 52 via 52 (KEY_DOT) */
  keyCode[0x2f] = 0x35;       /* 47 (XK_slash) => 53 via 53 (KEY_SLASH) */
  keyCode[0x3f] = 0x35;       /* 47 (XK_slash) => 53 via 53 (KEY_SLASH) */
  keyCode[0x30] = 0xb;        /* 48 (XK_0) => 11 via 11 (KEY_0) */
  keyCode[0x29] = 0xb;        /* 48 (XK_0) => 11 via 11 (KEY_0) */
  keyCode[0x31] = 0x2;        /* 49 (XK_1) => 2 via 2 (KEY_1) */
  keyCode[0x21] = 0x2;        /* 49 (XK_1) => 2 via 2 (KEY_1) */
  keyCode[0x32] = 0x3;        /* 50 (XK_2) => 3 via 3 (KEY_2) */
  keyCode[0x40] = 0x3;        /* 50 (XK_2) => 3 via 3 (KEY_2) */
  keyCode[0x33] = 0x4;        /* 51 (XK_3) => 4 via 4 (KEY_3) */
  keyCode[0x23] = 0x4;        /* 51 (XK_3) => 4 via 4 (KEY_3) */
  keyCode[0x34] = 0x5;        /* 52 (XK_4) => 5 via 5 (KEY_4) */
  keyCode[0x24] = 0x5;        /* 52 (XK_4) => 5 via 5 (KEY_4) */
  keyCode[0x35] = 0x6;        /* 53 (XK_5) => 6 via 6 (KEY_5) */
  keyCode[0x25] = 0x6;        /* 53 (XK_5) => 6 via 6 (KEY_5) */
  keyCode[0x36] = 0x7;        /* 54 (XK_6) => 7 via 7 (KEY_6) */
  keyCode[0x5e] = 0x7;        /* 54 (XK_6) => 7 via 7 (KEY_6) */
  keyCode[0x37] = 0x8;        /* 55 (XK_7) => 8 via 8 (KEY_7) */
  keyCode[0x26] = 0x8;        /* 55 (XK_7) => 8 via 8 (KEY_7) */
  keyCode[0x38] = 0x9;        /* 56 (XK_8) => 9 via 9 (KEY_8) */
  keyCode[0x2a] = 0x9;        /* 56 (XK_8) => 9 via 9 (KEY_8) */
  keyCode[0x39] = 0xa;        /* 57 (XK_9) => 10 via 10 (KEY_9) */
  keyCode[0x28] = 0xa;        /* 57 (XK_9) => 10 via 10 (KEY_9) */
  keyCode[0x3a] = 0x27;       /* 59 (XK_semicolon) => 39 via 39 (KEY_SEMICOLON) */
  keyCode[0x3b] = 0x27;       /* 59 (XK_semicolon) => 39 via 39 (KEY_SEMICOLON) */
  keyCode[0x3d] = 0xd;        /* 61 (XK_equal) => 13 via 13 (KEY_EQUAL) */
  keyCode[0x2b] = 0xd;        /* 61 (XK_equal) => 13 via 13 (KEY_EQUAL) */
  keyCode[0x41] = 0x1e;       /* 65 (XK_a) => 30 via 30 (KEY_A) */
  keyCode[0x42] = 0x30;       /* 66 (XK_b) => 48 via 48 (KEY_B) */
  keyCode[0x43] = 0x2e;       /* 67 (XK_c) => 46 via 46 (KEY_C) */
  keyCode[0x44] = 0x20;       /* 68 (XK_d) => 32 via 32 (KEY_D) */
  keyCode[0x45] = 0x12;       /* 69 (XK_e) => 18 via 18 (KEY_E) */
  keyCode[0x46] = 0x21;       /* 70 (XK_f) => 33 via 33 (KEY_F) */
  keyCode[0x47] = 0x22;       /* 71 (XK_g) => 34 via 34 (KEY_G) */
  keyCode[0x48] = 0x23;       /* 72 (XK_h) => 35 via 35 (KEY_H) */
  keyCode[0x49] = 0x17;       /* 73 (XK_i) => 23 via 23 (KEY_I) */
  keyCode[0x4a] = 0x24;       /* 74 (XK_j) => 36 via 36 (KEY_J) */
  keyCode[0x4b] = 0x25;       /* 75 (XK_K) => 37 via 37 (KEY_K) */
  keyCode[0x4c] = 0x26;       /* 76 (XK_l) => 38 via 38 (KEY_L) */
  keyCode[0x4d] = 0x32;       /* 77 (XK_m) => 50 via 50 (KEY_M) */
  keyCode[0x4e] = 0x31;       /* 78 (XK_n) => 49 via 49 (KEY_N) */
  keyCode[0x4f] = 0x18;       /* 79 (XK_o) => 24 via 24 (KEY_O) */
  keyCode[0x50] = 0x19;       /* 80 (XK_p) => 25 via 25 (KEY_P) */
  keyCode[0x51] = 0x10;       /* 81 (XK_q) => 16 via 16 (KEY_Q) */
  keyCode[0x52] = 0x13;       /* 82 (XK_r) => 19 via 19 (KEY_R) */
  keyCode[0x53] = 0x1f;       /* 83 (XK_s) => 31 via 31 (KEY_S) */
  keyCode[0x54] = 0x14;       /* 84 (XK_t) => 20 via 20 (KEY_T) */
  keyCode[0x55] = 0x16;       /* 85 (XK_u) => 22 via 22 (KEY_U) */
  keyCode[0x56] = 0x2f;       /* 86 (XK_v) => 47 via 47 (KEY_V) */
  keyCode[0x57] = 0x11;       /* 87 (XK_w) => 17 via 17 (KEY_W) */
  keyCode[0x58] = 0x2d;       /* 88 (XK_x) => 45 via 45 (KEY_X) */
  keyCode[0x59] = 0x15;       /* 89 (XK_y) => 21 via 21 (KEY_Y) */
  keyCode[0x5a] = 0x2c;       /* 90 (XK_z) => 44 via 44 (KEY_Z) */
  keyCode[0x5b] = 0x1a;       /* 91 (XK_bracketleft) => 26 via 26 (KEY_LEFTBRACE) */
  keyCode[0x7b] = 0x1a;       /* 91 (XK_bracketleft) => 26 via 26 (KEY_LEFTBRACE) */
  keyCode[0x5c] = 0x2b;       /* 92 (XK_backslash) => 43 via 43 (KEY_BACKSLASH) */
  keyCode[0x7c] = 0x2b;       /* 92 (XK_backslash) => 43 via 43 (KEY_BACKSLASH) */
  keyCode[0x5d] = 0x1b;       /* 93 (XK_bracketright) => 27 via 27 (KEY_RIGHTBRACE) */
  keyCode[0x7d] = 0x1b;       /* 93 (XK_bracketright) => 27 via 27 (KEY_RIGHTBRACE) */
  keyCode[0x60] = 0x29;       /* 96 (XK_grave) => 41 via 41 (KEY_GRAVE) */
  keyCode[0x7e] = 0x29;       /* 96 (XK_grave) => 41 via 41 (KEY_GRAVE) */
  keyCode[0x61] = 0x1e;       /* 97 (XK_a) => 30 via 30 (KEY_A) */
  keyCode[0x62] = 0x30;       /* 98 (XK_b) => 48 via 48 (KEY_B) */
  keyCode[0x63] = 0x2e;       /* 99 (XK_c) => 46 via 46 (KEY_C) */
  keyCode[0x64] = 0x20;       /* 100 (XK_d) => 32 via 32 (KEY_D) */
  keyCode[0x65] = 0x12;       /* 101 (XK_e) => 18 via 18 (KEY_E) */
  keyCode[0x66] = 0x21;       /* 102 (XK_f) => 33 via 33 (KEY_F) */
  keyCode[0x67] = 0x22;       /* 103 (XK_g) => 34 via 34 (KEY_G) */
  keyCode[0x68] = 0x23;       /* 104 (XK_h) => 35 via 35 (KEY_H) */
  keyCode[0x69] = 0x17;       /* 105 (XK_i) => 23 via 23 (KEY_I) */
  keyCode[0x6a] = 0x24;       /* 106 (XK_j) => 36 via 36 (KEY_J) */
  keyCode[0x6b] = 0x25;       /* 107 (XK_K) => 37 via 37 (KEY_K) */
  keyCode[0x6c] = 0x26;       /* 108 (XK_l) => 38 via 38 (KEY_L) */
  keyCode[0x6d] = 0x32;       /* 109 (XK_m) => 50 via 50 (KEY_M) */
  keyCode[0x6e] = 0x31;       /* 110 (XK_n) => 49 via 49 (KEY_N) */
  keyCode[0x6f] = 0x18;       /* 111 (XK_o) => 24 via 24 (KEY_O) */
  keyCode[0x70] = 0x19;       /* 112 (XK_p) => 25 via 25 (KEY_P) */
  keyCode[0x71] = 0x10;       /* 113 (XK_q) => 16 via 16 (KEY_Q) */
  keyCode[0x72] = 0x13;       /* 114 (XK_r) => 19 via 19 (KEY_R) */
  keyCode[0x73] = 0x1f;       /* 115 (XK_s) => 31 via 31 (KEY_S) */
  keyCode[0x74] = 0x14;       /* 116 (XK_t) => 20 via 20 (KEY_T) */
  keyCode[0x75] = 0x16;       /* 117 (XK_u) => 22 via 22 (KEY_U) */
  keyCode[0x76] = 0x2f;       /* 118 (XK_v) => 47 via 47 (KEY_V) */
  keyCode[0x77] = 0x11;       /* 119 (XK_w) => 17 via 17 (KEY_W) */
  keyCode[0x78] = 0x2d;       /* 120 (XK_x) => 45 via 45 (KEY_X) */
  keyCode[0x79] = 0x15;       /* 121 (XK_y) => 21 via 21 (KEY_Y) */
  keyCode[0x7a] = 0x2c;       /* 122 (XK_z) => 44 via 44 (KEY_Z) */
  keyCode[0xd7] = 0x37;       /* 215 (XK_multiply) => 55 via 55 (KEY_KPASTERISK) */
  keyCode[0xff08] = 0xe;      /* 65288 (XK_BackSpace) => 14 via 14 (KEY_BACKSPACE) */
  keyCode[0xff09] = 0xf;      /* 65289 (XK_Tab) => 15 via 15 (KEY_TAB) */
  keyCode[0xff0d] = 0x1c;     /* 65293 (XK_Return) => 28 via 28 (KEY_ENTER) */
  keyCode[0xff13] = 0x146;    /* 65299 (XK_Pause) => 326 via 119 (KEY_PAUSE) */
  keyCode[0xff14] = 0x46;     /* 65300 (XK_Scroll_Lock) => 70 via 70 (KEY_SCROLLLOCK) */
  keyCode[0xff15] = 0x54;     /* 65301 (XK_Sys_Req) => 84 via 99 (KEY_SYSRQ) */
  keyCode[0xff1b] = 0x1;      /* 65307 (XK_Escape) => 1 via 1 (KEY_ESC) */
  keyCode[0xff50] = 0x147;    /* 65360 (XK_Home) => 327 via 102 (KEY_HOME) */
  keyCode[0xff51] = 0x14b;    /* 65361 (XK_Left) => 331 via 105 (KEY_LEFT) */
  keyCode[0xff52] = 0x148;    /* 65362 (XK_Up) => 328 via 103 (KEY_UP) */
  keyCode[0xff53] = 0x14d;    /* 65363 (XK_Right) => 333 via 106 (KEY_RIGHT) */
  keyCode[0xff54] = 0x150;    /* 65364 (XK_Down) => 336 via 108 (KEY_DOWN) */
  keyCode[0xff55] = 0x149;    /* 65365 (XK_Page_Up) => 329 via 104 (KEY_PAGEUP) */
  keyCode[0xff56] = 0x151;    /* 65366 (XK_Page_Down) => 337 via 109 (KEY_PAGEDOWN) */
  keyCode[0xff57] = 0x14f;    /* 65367 (XK_End) => 335 via 107 (KEY_END) */
  keyCode[0xff63] = 0x152;    /* 65379 (XK_Insert) => 338 via 110 (KEY_INSERT) */
  keyCode[0xff6a] = 0x175;    /* 65386 (XK_Help) => 373 via 138 (KEY_HELP) */
  keyCode[0xff7f] = 0x45;     /* 65407 (XK_Num_Lock) => 69 via 69 (KEY_NUMLOCK) */
  keyCode[0xff8d] = 0x11c;    /* 65421 (XK_KP_Enter) => 284 via 96 (KEY_KPENTER) */
  keyCode[0xff9c] = 0x14f;     /* 65457 (XK_KP_1) => 79 via 79 (KEY_KP1) */
  keyCode[0xffaa] = 0x37;
  keyCode[0xffab] = 0x4e;     /* 65451 (XK_KP_Add) => 78 via 78 (KEY_KPPLUS) */
  keyCode[0xffac] = 0x5c;     /* 65452 (XK_KP_Separator) => 92 via 95 (KEY_KPJPCOMMA) */
  keyCode[0xffad] = 0x4a;     /* 65453 (XK_KP_Subtract) => 74 via 74 (KEY_KPMINUS) */
  //keyCode[0xfae] = 0x53;     /* 65454 (XK_KP_Decimal) => 83 via 83 (KEY_KPDOT) */
  //keyCode[0xffae] = keyCode[0x2e];     /* 65454 (XK_KP_Decimal) => 83 via 83 (KEY_KPDOT) */
  keyCode[0xffae] = 0x53;     /* 65454 (XK_KP_Decimal) => 83 via 83 (KEY_KPDOT) */
  keyCode[0xffaf] = 0x135;    /* 65455 (XK_KP_Divide) => 309 via 98 (KEY_KPSLASH) */
  //keyCode[0xff9f] = 0x153;
  keyCode[0xff9f] = 0x53;
  //keyCode[0xffb0] = 0x52;     /* 65456 (XK_KP_0) => 82 via 82 (KEY_KP0) */
  keyCode[0xffb0] = keyCode[0x30];     /* 65456 (XK_KP_0) => 82 via 82 (KEY_KP0) */
  //keyCode[0xffb1] = 0x4f;     /* 65457 (XK_KP_1) => 79 via 79 (KEY_KP1) */
  keyCode[0xffb1] = keyCode[0x31];     /* 65457 (XK_KP_1) => 79 via 79 (KEY_KP1) */
  keyCode[0xff99] = keyCode[0xf54];     /* 65458 (XK_KP_2) => 80 via 80 (KEY_KP2) */
  keyCode[0xffb2] = keyCode[0x32];     /* 65458 (XK_KP_2) => 80 via 80 (KEY_KP2) */
  //keyCode[0xffb3] = 0x51;     /* 65458 (XK_KP_2) => 80 via 80 (KEY_KP2) */
  keyCode[0xffb3] = keyCode[0x33];     /* 65458 (XK_KP_2) => 80 via 80 (KEY_KP2) */
  //keyCode[0xffb4] = 0x4b;     /* 65460 (XK_KP_4) => 75 via 75 (KEY_KP4) */
  keyCode[0xffb4] = keyCode[0x34];     /* 65460 (XK_KP_4) => 75 via 75 (KEY_KP4) */
  //keyCode[0xffb5] = 0x4c;     /* 65461 (XK_KP_5) => 76 via 76 (KEY_KP5) */
  keyCode[0xffb5] = keyCode[0x35];     /* 65461 (XK_KP_5) => 76 via 76 (KEY_KP5) */
  //keyCode[0xffb6] = 0x4d;     /* 65462 (XK_KP_6) => 77 via 77 (KEY_KP6) */
  keyCode[0xffb6] = keyCode[0x36];     /* 65462 (XK_KP_6) => 77 via 77 (KEY_KP6) */
 // keyCode[0xffb7] = 0x47;     /* 65463 (XK_KP_7) => 71 via 71 (KEY_KP7) */
  keyCode[0xffb7] = keyCode[0x37];     /* 65463 (XK_KP_7) => 71 via 71 (KEY_KP7) */
  //keyCode[0xffb8] = 0x48;     /* 65464 (XK_KP_8) => 72 via 72 (KEY_KP8) */
  keyCode[0xffb8] = keyCode[0x38];     /* 65464 (XK_KP_8) => 72 via 72 (KEY_KP8) */
  //keyCode[0xffb9] = 0x49;     /* 65465 (XK_KP_9) => 73 via 73 (KEY_KP9) */
  keyCode[0xffb9] = keyCode[0x39];     /* 65465 (XK_KP_9) => 73 via 73 (KEY_KP9) */
  keyCode[0xffbd] = 0x59;     /* 65469 (XK_KP_Equal) => 89 via 117 (KEY_KPEQUAL) */
  keyCode[0xffbe] = 0x3b;     /* 65470 (XK_F1) => 59 via 59 (KEY_F1) */
  keyCode[0xffbf] = 0x3c;     /* 65471 (XK_F2) => 60 via 60 (KEY_F2) */
  keyCode[0xffc0] = 0x3d;     /* 65472 (XK_F3) => 61 via 61 (KEY_F3) */
  keyCode[0xffc1] = 0x3e;     /* 65473 (XK_F4) => 62 via 62 (KEY_F4) */
  keyCode[0xffc2] = 0x3f;     /* 65474 (XK_F5) => 63 via 63 (KEY_F5) */
  keyCode[0xffc3] = 0x40;     /* 65475 (XK_F6) => 64 via 64 (KEY_F6) */
  keyCode[0xffc4] = 0x41;     /* 65476 (XK_F7) => 65 via 65 (KEY_F7) */
  keyCode[0xffc5] = 0x42;     /* 65477 (XK_F8) => 66 via 66 (KEY_F8) */
  keyCode[0xffc6] = 0x43;     /* 65478 (XK_F9) => 67 via 67 (KEY_F9) */
  keyCode[0xffc7] = 0x44;     /* 65479 (XK_F10) => 68 via 68 (KEY_F10) */
  keyCode[0xffe1] = 0x2a;     /* 65505 (XK_Shift_L) => 42 via 42 (KEY_LEFTSHIFT) */
  keyCode[0xffe2] = 0x36;     /* 65506 (XK_Shift_R) => 54 via 54 (KEY_RIGHTSHIFT) */
  keyCode[0xffe3] = 0x1d;     /* 65507 (XK_Control_L) => 29 via 29 (KEY_LEFTCTRL) */
  keyCode[0xffe4] = 0x11d;    /* 65508 (XK_Control_R) => 285 via 97 (KEY_RIGHTCTRL) */
  keyCode[0xffe5] = 0x3a;     /* 65509 (XK_Caps_Lock) => 58 via 58 (KEY_CAPSLOCK) */
  keyCode[0xffe7] = 0x15b;    /* 65511 (XK_Meta_L) => 347 via 125 (KEY_LEFTMETA) */
  keyCode[0xffe8] = 0x15c;    /* 65512 (XK_Meta_R) => 348 via 126 (KEY_RIGHTMETA) */
  keyCode[0xffe9] = 0x38;     /* 65513 (XK_Alt_L) => 56 via 56 (KEY_LEFTALT) */
  keyCode[0xffea] = 0x138;    /* 65514 (XK_Alt_R) => 312 via 100 (KEY_RIGHTALT) */
  keyCode[0xffeb] = 0x15b;
  keyCode[0xffff] = 0x153;    /* 65535 (XK_Delete) => 339 via 111 (KEY_DELETE) */
#else 
  
	keyCode[0x8] = 0xe;         /* 8 (VK_BACK) => 14 via 14 (KEY_BACKSPACE) */
	keyCode[0x9] = 0xf;         /* 9 (VK_TAB) => 15 via 15 (KEY_TAB) */
	keyCode[0xd] = 0x1c;        /* 13 (VK_RETURN) => 28 via 28 (KEY_ENTER) */
	keyCode[0x10] = 0x2a;       /* 16 (VK_LSHIFT) => 42 via 42 (KEY_LEFTSHIFT) */
	keyCode[0x11] = 0x1d;       /* 17 (VK_CONTROL) => 29 via 29 (KEY_LEFTCTRL) */
	keyCode[0x12] = 0x38;       /* 18 (VK_MENU) => 56 via 56 (KEY_LEFTALT) */
	keyCode[0x13] = 0x146;      /* 19 (VK_PAUSE) => 326 via 119 (KEY_PAUSE) */
	keyCode[0x14] = 0x3a;       /* 20 (VK_CAPITAL) => 58 via 58 (KEY_CAPSLOCK) */
	keyCode[0x19] = 0x10d;      /* 25 (VK_HANJA) => 269 via 123 (KEY_HANJA) */
	keyCode[0x1b] = 0x1;        /* 27 (VK_ESCAPE) => 1 via 1 (KEY_ESC) */
	keyCode[0x20] = 0x39;       /* 32 (VK_SPACE) => 57 via 57 (KEY_SPACE) */
	keyCode[0x21] = 0x149;      /* 33 (VK_PRIOR) => 329 via 104 (KEY_PAGEUP) */
	keyCode[0x22] = 0x151;      /* 34 (VK_NEXT) => 337 via 109 (KEY_PAGEDOWN) */
	keyCode[0x23] = 0x14f;      /* 35 (VK_END) => 335 via 107 (KEY_END) */
	keyCode[0x24] = 0x147;      /* 36 (VK_HOME) => 327 via 102 (KEY_HOME) */
	keyCode[0x25] = 0x14b;      /* 37 (VK_LEFT) => 331 via 105 (KEY_LEFT) */
	keyCode[0x26] = 0x148;      /* 38 (VK_UP) => 328 via 103 (KEY_UP) */
	keyCode[0x27] = 0x14d;      /* 39 (VK_RIGHT) => 333 via 106 (KEY_RIGHT) */
	keyCode[0x28] = 0x150;      /* 40 (VK_DOWN) => 336 via 108 (KEY_DOWN) */
	keyCode[0x2a] = 0x139;      /* 42 (VK_PRINT) => 313 via 210 (KEY_PRINT) */
	keyCode[0x2c] = 0x54;      /* 44 (VK_SNAPSHOT ???) => 84 via 99 (KEY_SYSRQ) */
	keyCode[0x2d] = 0x152;      /* 45 (VK_INSERT) => 338 via 110 (KEY_INSERT) */
	keyCode[0x2e] = 0x153;      /* 46 (VK_DELETE) => 339 via 111 (KEY_DELETE) */
	keyCode[0x2f] = 0x175;      /* 47 (VK_HELP) => 373 via 138 (KEY_HELP) */
	keyCode[0x30] = 0xb;        /* 48 (VK_0) => 11 via 11 (KEY_0) */
	keyCode[0x31] = 0x2;        /* 49 (VK_1) => 2 via 2 (KEY_1) */
	keyCode[0x32] = 0x3;        /* 50 (VK_2) => 3 via 3 (KEY_2) */
	keyCode[0x33] = 0x4;        /* 51 (VK_3) => 4 via 4 (KEY_3) */
	keyCode[0x34] = 0x5;        /* 52 (VK_4) => 5 via 5 (KEY_4) */
	keyCode[0x35] = 0x6;        /* 53 (VK_5) => 6 via 6 (KEY_5) */
	keyCode[0x36] = 0x7;        /* 54 (VK_6) => 7 via 7 (KEY_6) */
	keyCode[0x37] = 0x8;        /* 55 (VK_7) => 8 via 8 (KEY_7) */
	keyCode[0x38] = 0x9;        /* 56 (VK_8) => 9 via 9 (KEY_8) */
	keyCode[0x39] = 0xa;        /* 57 (VK_9) => 10 via 10 (KEY_9) */
	keyCode[0x41] = 0x1e;       /* 65 (VK_A) => 30 via 30 (KEY_A) */
	keyCode[0x42] = 0x30;       /* 66 (VK_B) => 48 via 48 (KEY_B) */
	keyCode[0x43] = 0x2e;       /* 67 (VK_C) => 46 via 46 (KEY_C) */
	keyCode[0x44] = 0x20;       /* 68 (VK_D) => 32 via 32 (KEY_D) */
	keyCode[0x45] = 0x12;       /* 69 (VK_E) => 18 via 18 (KEY_E) */
	keyCode[0x46] = 0x21;       /* 70 (VK_F) => 33 via 33 (KEY_F) */
	keyCode[0x47] = 0x22;       /* 71 (VK_G) => 34 via 34 (KEY_G) */
	keyCode[0x48] = 0x23;       /* 72 (VK_H) => 35 via 35 (KEY_H) */
	keyCode[0x49] = 0x17;       /* 73 (VK_I) => 23 via 23 (KEY_I) */
	keyCode[0x4a] = 0x24;       /* 74 (VK_J) => 36 via 36 (KEY_J) */
	keyCode[0x4b] = 0x25;      /* 75 (VK_K) => 37 via 37 (KEY_K) */
	keyCode[0x4c] = 0x26;       /* 76 (VK_L) => 38 via 38 (KEY_L) */
	keyCode[0x4d] = 0x32;       /* 77 (VK_M) => 50 via 50 (KEY_M) */
	keyCode[0x4e] = 0x31;       /* 78 (VK_N) => 49 via 49 (KEY_N) */
	keyCode[0x4f] = 0x18;       /* 79 (VK_O) => 24 via 24 (KEY_O) */
	keyCode[0x50] = 0x19;       /* 80 (VK_P) => 25 via 25 (KEY_P) */
	keyCode[0x51] = 0x10;       /* 81 (VK_Q) => 16 via 16 (KEY_Q) */
	keyCode[0x52] = 0x13;       /* 82 (VK_R) => 19 via 19 (KEY_R) */
	keyCode[0x53] = 0x1f;       /* 83 (VK_S) => 31 via 31 (KEY_S) */
	keyCode[0x54] = 0x14;       /* 84 (VK_T) => 20 via 20 (KEY_T) */
	keyCode[0x55] = 0x16;       /* 85 (VK_U) => 22 via 22 (KEY_U) */
	keyCode[0x56] = 0x2f;       /* 86 (VK_V) => 47 via 47 (KEY_V) */
	keyCode[0x57] = 0x11;       /* 87 (VK_W) => 17 via 17 (KEY_W) */
	keyCode[0x58] = 0x2d;       /* 88 (VK_X) => 45 via 45 (KEY_X) */
	keyCode[0x59] = 0x15;       /* 89 (VK_Y) => 21 via 21 (KEY_Y) */
	keyCode[0x5a] = 0x2c;       /* 90 (VK_Z) => 44 via 44 (KEY_Z) */
	keyCode[0x5b] = 0x15b;      /* 91 (VK_LWIN) => 347 via 125 (KEY_LEFTMETA) */
	keyCode[0x5c] = 0x15c;      /* 92 (VK_RWIN) => 348 via 126 (KEY_RIGHTMETA) */
	keyCode[0x5d] = 0x15d;      /* 93 (VK_APPS) => 349 via 127 (KEY_COMPOSE) */
	keyCode[0x5f] = 0x15f;      /* 95 (VK_SLEEP) => 351 via 142 (KEY_SLEEP) */
	keyCode[0x60] = 0x52;       /* 96 (VK_NUMPAD0) => 82 via 82 (KEY_KP0) */
	keyCode[0x61] = 0x4f;       /* 97 (VK_NUMPAD1) => 79 via 79 (KEY_KP1) */
	keyCode[0x62] = 0x50;       /* 98 (VK_NUMPAD2) => 80 via 80 (KEY_KP2) */
	keyCode[0x63] = 0x51;       /* 99 (VK_NUMPAD3) => 81 via 81 (KEY_KP3) */
	keyCode[0x64] = 0x4b;       /* 100 (VK_NUMPAD4) => 75 via 75 (KEY_KP4) */
	keyCode[0x65] = 0x4c;       /* 101 (VK_NUMPAD5) => 76 via 76 (KEY_KP5) */
	keyCode[0x66] = 0x4d;       /* 102 (VK_NUMPAD6) => 77 via 77 (KEY_KP6) */
	keyCode[0x67] = 0x47;       /* 103 (VK_NUMPAD7) => 71 via 71 (KEY_KP7) */
	keyCode[0x68] = 0x48;       /* 104 (VK_NUMPAD8) => 72 via 72 (KEY_KP8) */
	keyCode[0x69] = 0x49;       /* 105 (VK_NUMPAD9) => 73 via 73 (KEY_KP9) */
	keyCode[0x6a] = 0x37;       /* 106 (VK_MULTIPLY) => 55 via 55 (KEY_KPASTERISK) */
	keyCode[0x6b] = 0x4e;       /* 107 (VK_ADD) => 78 via 78 (KEY_KPPLUS) */
	keyCode[0x6c] = 0x7e;       /* 108 (VK_SEPARATOR??) => 126 via 121 (KEY_KPCOMMA) */
	keyCode[0x6d] = 0x4a;       /* 109 (VK_SUBTRACT) => 74 via 74 (KEY_KPMINUS) */
	keyCode[0x6e] = 0x53;       /* 110 (VK_DECIMAL) => 83 via 83 (KEY_KPDOT) */
	keyCode[0x6f] = 0x135;      /* 111 (VK_DIVIDE) => 309 via 98 (KEY_KPSLASH) */
	keyCode[0x70] = 0x3b;       /* 112 (VK_F1) => 59 via 59 (KEY_F1) */
	keyCode[0x71] = 0x3c;       /* 113 (VK_F2) => 60 via 60 (KEY_F2) */
	keyCode[0x72] = 0x3d;       /* 114 (VK_F3) => 61 via 61 (KEY_F3) */
	keyCode[0x73] = 0x3e;       /* 115 (VK_F4) => 62 via 62 (KEY_F4) */
	keyCode[0x74] = 0x3f;       /* 116 (VK_F5) => 63 via 63 (KEY_F5) */
	keyCode[0x75] = 0x40;       /* 117 (VK_F6) => 64 via 64 (KEY_F6) */
	keyCode[0x76] = 0x41;       /* 118 (VK_F7) => 65 via 65 (KEY_F7) */
	keyCode[0x77] = 0x42;       /* 119 (VK_F8) => 66 via 66 (KEY_F8) */
	keyCode[0x78] = 0x43;       /* 120 (VK_F9) => 67 via 67 (KEY_F9) */
	keyCode[0x79] = 0x44;       /* 121 (VK_F10) => 68 via 68 (KEY_F10) */
	keyCode[0x7a] = 0x57;       /* 122 (VK_F11) => 87 via 87 (KEY_F11) */
	keyCode[0x7b] = 0x58;       /* 123 (VK_F12) => 88 via 88 (KEY_F12) */
	keyCode[0x7c] = 0x5d;       /* 124 (VK_F13) => 93 via 183 (KEY_F13) */
	keyCode[0x7d] = 0x5e;       /* 125 (VK_F14) => 94 via 184 (KEY_F14) */
	keyCode[0x7e] = 0x5f;       /* 126 (VK_F15) => 95 via 185 (KEY_F15) */
	keyCode[0x7f] = 0x55;       /* 127 (VK_F16) => 85 via 186 (KEY_F16) */
	keyCode[0x80] = 0x103;      /* 128 (VK_F17) => 259 via 187 (KEY_F17) */
	keyCode[0x81] = 0x177;      /* 129 (VK_F18) => 375 via 188 (KEY_F18) */
	keyCode[0x82] = 0x104;      /* 130 (VK_F19) => 260 via 189 (KEY_F19) */
	keyCode[0x83] = 0x5a;       /* 131 (VK_F20) => 90 via 190 (KEY_F20) */
	keyCode[0x84] = 0x74;       /* 132 (VK_F21) => 116 via 191 (KEY_F21) */
	keyCode[0x85] = 0x179;      /* 133 (VK_F22) => 377 via 192 (KEY_F22) */
	keyCode[0x86] = 0x6d;      /* 134 (VK_F23) => 109 via 193 (KEY_F23) */
	keyCode[0x87] = 0x6f;       /* 135 (VK_F24) => 111 via 194 (KEY_F24) */
	keyCode[0x90] = 0x45;       /* 144 (VK_NUMLOCK) => 69 via 69 (KEY_NUMLOCK) */
	keyCode[0x91] = 0x46;       /* 145 (VK_SCROLL) => 70 via 70 (KEY_SCROLLLOCK) */
	keyCode[0xa0] = 0x2a;       /* 160 (VK_LSHIFT) => 42 via 42 (KEY_LEFTSHIFT) */
	keyCode[0xa1] = 0x36;       /* 161 (VK_RSHIFT) => 54 via 54 (KEY_RIGHTSHIFT) */
	keyCode[0xa2] = 0x1d;       /* 162 (VK_CONTROL) => 29 via 29 (KEY_LEFTCTRL) */
	keyCode[0xa3] = 0x11d;      /* 163 (VK_RCONTROL) => 285 via 97 (KEY_RIGHTCTRL) */
	keyCode[0xa4] = 0x38;      /* 164 (VK_MENU) => 56 via 56 (KEY_LEFTALT) */
	keyCode[0xa5] = 0x138;      /* 165 (VK_RMENU) => 312 via 100 (KEY_RIGHTALT) */
	keyCode[0xa6] = 0x16a;      /* 166 (VK_BROWSER_BACK) => 362 via 158 (KEY_BACK) */
	keyCode[0xa7] = 0x169;      /* 167 (VK_BROWSER_FORWARD) => 361 via 159 (KEY_FORWARD) */
	keyCode[0xa8] = 0x167;      /* 168 (VK_BROWSER_REFRESH) => 359 via 173 (KEY_REFRESH) */
	keyCode[0xa9] = 0x168;      /* 169 (VK_BROWSER_STOP) => 360 via 128 (KEY_STOP) */
	keyCode[0xaa] = 0x165;      /* 170 (VK_BROWSER_SEARCH) => 357 via 217 (KEY_SEARCH) */
	keyCode[0xac] = 0x132;      /* 172 (VK_BROWSER_HOME) => 306 via 172 (KEY_HOMEPAGE) */
	keyCode[0xad] = 0x120;      /* 173 (VK_VOLUME_MUTE) => 288 via 113 (KEY_MUTE) */
	keyCode[0xae] = 0x12e;      /* 174 (VK_VOLUME_DOWN) => 302 via 114 (KEY_VOLUMEDOWN) */
	keyCode[0xaf] = 0x130;      /* 175 (VK_VOLUME_UP) => 304 via 115 (KEY_VOLUMEUP) */
	keyCode[0xb0] = 0x119;      /* 176 (VK_MEDIA_NEXT_TRACK) => 281 via 163 (KEY_NEXTSONG) */
	keyCode[0xb1] = 0x110;      /* 177 (VK_MEDIA_PREV_TRACK) => 272 via 165 (KEY_PREVIOUSSONG) */
	keyCode[0xb2] = 0x124;      /* 178 (VK_MEDIA_STOP) => 292 via 166 (KEY_STOPCD) */
	keyCode[0xb3] = 0x122;      /* 179 (VK_MEDIA_PLAY_PAUSE) => 290 via 164 (KEY_PLAYPAUSE) */
	keyCode[0xb4] = 0x13f;      /* 180 (VK_LAUNCH_MAIL) => 319 via 215 (KEY_EMAIL) */
	keyCode[0xba] = 0x27;       /* 186 (VK_OEM_1) => 39 via 39 (KEY_SEMICOLON) */
	keyCode[0xbb] = 0xd;        /* 187 (VK_OEM_PLUS) => 13 via 13 (KEY_EQUAL) */
	keyCode[0xbc] = 0x33;       /* 188 (VK_OEM_COMMA) => 51 via 51 (KEY_COMMA) */
	keyCode[0xbd] = 0xc;        /* 189 (VK_OEM_MINUS) => 12 via 12 (KEY_MINUS) */
	keyCode[0xbe] = 0x34;       /* 190 (VK_OEM_PERIOD) => 52 via 52 (KEY_DOT) */
	keyCode[0xbf] = 0x35;       /* 191 (VK_OEM_2) => 53 via 53 (KEY_SLASH) */
	keyCode[0xc0] = 0x29;       /* 192 (VK_OEM_3) => 41 via 41 (KEY_GRAVE) */
	keyCode[0xdb] = 0x1a;       /* 219 (VK_OEM_4) => 26 via 26 (KEY_LEFTBRACE) */
	keyCode[0xdc] = 0x2b;       /* 220 (VK_OEM_5) => 43 via 43 (KEY_BACKSLASH) */
	keyCode[0xdd] = 0x1b;       /* 221 (VK_OEM_6) => 27 via 27 (KEY_RIGHTBRACE) */
	keyCode[0xde] = 0x28;       /* 222 (VK_OEM_7) => 40 via 40 (KEY_APOSTROPHE) */
	keyCode[0xe1] = 0x56;       /* 225 (VK_OEM_102) => 86 via 86 (KEY_102ND) */
	keyCode[0xfa] = 0x133;      /* 250 (VK_PLAY) => 307 via 207 (KEY_PLAY) */
#endif
}
