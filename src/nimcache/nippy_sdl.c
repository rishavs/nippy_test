/* Generated by Nim Compiler v0.15.2 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   gcc.exe -c  -w  -I"C:\Program Files\Nim\lib" -o c:\users\rsharan\documents\github\nippy_test\src\nimcache\nippy_sdl.o c:\users\rsharan\documents\github\nippy_test\src\nimcache\nippy_sdl.c */
#define NIM_INTBITS 64

#include "nimbase.h"
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef union Event101796 Event101796;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Commoneventobj101579 Commoneventobj101579;
typedef struct Windoweventobj101583 Windoweventobj101583;
typedef struct Keyboardeventobj101594 Keyboardeventobj101594;
typedef struct Keysym101060 Keysym101060;
typedef struct Texteditingeventobj101605 Texteditingeventobj101605;
typedef struct Textinputeventobj101616 Textinputeventobj101616;
typedef struct Mousemotioneventobj101624 Mousemotioneventobj101624;
typedef struct Mousebuttoneventobj101635 Mousebuttoneventobj101635;
typedef struct Mousewheeleventobj101647 Mousewheeleventobj101647;
typedef struct Joyaxiseventobj101656 Joyaxiseventobj101656;
typedef struct Joyballeventobj101667 Joyballeventobj101667;
typedef struct Joyhateventobj101678 Joyhateventobj101678;
typedef struct Joybuttoneventobj101687 Joybuttoneventobj101687;
typedef struct Joydeviceeventobj101696 Joydeviceeventobj101696;
typedef struct Controlleraxiseventobj101701 Controlleraxiseventobj101701;
typedef struct Controllerbuttoneventobj101712 Controllerbuttoneventobj101712;
typedef struct Controllerdeviceeventobj101721 Controllerdeviceeventobj101721;
typedef struct Audiodeviceeventobj101726 Audiodeviceeventobj101726;
typedef struct Quiteventobj101773 Quiteventobj101773;
typedef struct Usereventobj101781 Usereventobj101781;
typedef struct Syswmeventobj101791 Syswmeventobj101791;
typedef struct Touchfingereventobj101735 Touchfingereventobj101735;
typedef struct Multigestureeventobj101746 Multigestureeventobj101746;
typedef struct Dollargestureeventobj101757 Dollargestureeventobj101757;
typedef struct Dropeventobj101767 Dropeventobj101767;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_CDECL_PTR(int, TY96423) (NU32 flags0);
typedef NI32 Logcategory102279;
typedef N_CDECL_PTR(void, TY102347) (Logcategory102279 category0, NCSTRING fmt0, ...);
typedef N_CDECL_PTR(NCSTRING, TY97450) (void);
typedef N_CDECL_PTR(void*, TY99448) (NCSTRING title0, int x0, int y0, int w0, int h0, NU32 flags0);
typedef N_CDECL_PTR(void*, TY102582) (void* window0, int index0, NU32 flags0);
typedef N_CDECL_PTR(int, TY102765) (void* renderer0, NU8 r0, NU8 g0, NU8 b0, NU8 a0);
typedef N_CDECL_PTR(void, TY102339) (Logcategory102279 category0, NCSTRING fmt0, ...);
typedef N_CDECL_PTR(void, TY102335) (Logcategory102279 category0, NCSTRING fmt0, ...);
typedef N_CDECL_PTR(void, TY102883) (void* renderer0);
typedef N_CDECL_PTR(void, TY99670) (void* window0);
typedef N_CDECL_PTR(void, TY96435) (void);
typedef N_CDECL_PTR(int, TY101857) (Event101796* event0);
typedef NI32 Keycode100193;
typedef NU8 Tnimkind3403;
typedef NU8 Tnimtypeflag3409Set;
typedef N_NIMCALL_PTR(void, TY3489) (void* p0, NI op0);
typedef N_NIMCALL_PTR(void*, TY3494) (void* p0);
struct  TNimType  {
NI size;
Tnimkind3403 kind;
Tnimtypeflag3409Set flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3489 marker;
TY3494 deepcopy;
};
typedef N_CDECL_PTR(int, TY102800) (void* renderer0);
typedef N_CDECL_PTR(void, TY102877) (void* renderer0);
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NI32 Eventkind101513;
struct  Commoneventobj101579  {
Eventkind101513 kind;
NU32 timestamp;
};
typedef NI32 Windoweventid99301;
struct  Windoweventobj101583  {
Eventkind101513 kind;
NU32 timestamp;
NU32 windowid;
Windoweventid99301 event;
NU8 padding1;
NU8 padding2;
NU8 padding3;
NI32 data1;
NI32 data2;
};
typedef NI32 Scancode99730;
struct  Keysym101060  {
Scancode99730 scancode;
Keycode100193 sym;
NU16 mods;
NU32 unused;
};
struct  Keyboardeventobj101594  {
Eventkind101513 kind;
NU32 timestamp;
NU32 windowid;
NU8 state;
NU8 repeat;
NU8 padding2;
NU8 padding3;
Keysym101060 keysym;
};
typedef NIM_CHAR TY101610[32];
struct  Texteditingeventobj101605  {
Eventkind101513 kind;
NU32 timestamp;
NU32 windowid;
TY101610 text;
NI32 start;
NI32 length;
};
struct  Textinputeventobj101616  {
Eventkind101513 kind;
NU32 timestamp;
NU32 windowid;
TY101610 text;
};
struct  Mousemotioneventobj101624  {
Eventkind101513 kind;
NU32 timestamp;
NU32 windowid;
NU32 which;
NU32 state;
NI32 x;
NI32 y;
NI32 xrel;
NI32 yrel;
};
struct  Mousebuttoneventobj101635  {
Eventkind101513 kind;
NU32 timestamp;
NU32 windowid;
NU32 which;
NU8 button;
NU8 state;
NU8 clicks;
NU8 padding1;
NI32 x;
NI32 y;
};
typedef NI32 Mousewheeldirection101279;
struct  Mousewheeleventobj101647  {
Eventkind101513 kind;
NU32 timestamp;
NU32 windowid;
NU32 which;
NI32 x;
NI32 y;
Mousewheeldirection101279 direction;
};
struct  Joyaxiseventobj101656  {
Eventkind101513 kind;
NU32 timestamp;
NI32 which;
NU8 axis;
NU8 padding1;
NU8 padding2;
NU8 padding3;
NI16 value;
NU16 padding4;
};
struct  Joyballeventobj101667  {
Eventkind101513 kind;
NU32 timestamp;
NI32 which;
NU8 ball;
NU8 padding1;
NU8 padding2;
NU8 padding3;
NI16 xrel;
NI16 yrel;
};
struct  Joyhateventobj101678  {
Eventkind101513 kind;
NU32 timestamp;
NI32 which;
NU8 hat;
NU8 value;
NU8 padding1;
NU8 padding2;
};
struct  Joybuttoneventobj101687  {
Eventkind101513 kind;
NU32 timestamp;
NI32 which;
NU8 button;
NU8 state;
NU8 padding1;
NU8 padding2;
};
struct  Joydeviceeventobj101696  {
Eventkind101513 kind;
NU32 timestamp;
NI32 which;
};
typedef NI32 Gamecontrolleraxis101449;
struct  Controlleraxiseventobj101701  {
Eventkind101513 kind;
NU32 timestamp;
NI32 which;
Gamecontrolleraxis101449 axis;
NU8 padding1;
NU8 padding2;
NU8 padding3;
NI16 value;
NU16 padding4;
};
typedef NI32 Gamecontrollerbutton101474;
struct  Controllerbuttoneventobj101712  {
Eventkind101513 kind;
NU32 timestamp;
NI32 which;
Gamecontrollerbutton101474 button;
NU8 state;
NU8 padding1;
NU8 padding2;
};
struct  Controllerdeviceeventobj101721  {
Eventkind101513 kind;
NU32 timestamp;
NI32 which;
};
struct  Audiodeviceeventobj101726  {
Eventkind101513 kind;
NU32 timestamp;
NU32 which;
NU8 iscapture;
NU8 padding1;
NU8 padding2;
NU8 padding3;
};
struct  Quiteventobj101773  {
Eventkind101513 kind;
NU32 timestamp;
};
struct  Usereventobj101781  {
Eventkind101513 kind;
NU32 timestamp;
NU32 windowid;
NI32 code;
void* data1;
void* data2;
};
struct  Syswmeventobj101791  {
Eventkind101513 kind;
NU32 timestamp;
void* msg;
};
struct  Touchfingereventobj101735  {
Eventkind101513 kind;
NU32 timestamp;
NI64 touchid;
NI64 fingerid;
float x;
float y;
float dx;
float dy;
float pressure;
};
struct  Multigestureeventobj101746  {
Eventkind101513 kind;
NU32 timestamp;
NI64 touchid;
float dtheta;
float ddist;
float x;
float y;
NU16 numfingers;
NU16 padding;
};
struct  Dollargestureeventobj101757  {
Eventkind101513 kind;
NU32 timestamp;
NI64 touchid;
NI64 gestureid;
NU32 numfingers;
float error;
float x;
float y;
};
struct  Dropeventobj101767  {
Eventkind101513 kind;
NU32 timestamp;
NCSTRING file;
NU32 windowid;
};
typedef NU8 TY101823[56];
union  Event101796  {
Eventkind101513 kind;
Commoneventobj101579 common;
Windoweventobj101583 window;
Keyboardeventobj101594 key;
Texteditingeventobj101605 edit;
Textinputeventobj101616 text;
Mousemotioneventobj101624 motion;
Mousebuttoneventobj101635 button;
Mousewheeleventobj101647 wheel;
Joyaxiseventobj101656 jaxis;
Joyballeventobj101667 jball;
Joyhateventobj101678 jhat;
Joybuttoneventobj101687 jbutton;
Joydeviceeventobj101696 jdevice;
Controlleraxiseventobj101701 caxis;
Controllerbuttoneventobj101712 cbutton;
Controllerdeviceeventobj101721 cdevice;
Audiodeviceeventobj101726 adevice;
Quiteventobj101773 quit;
Usereventobj101781 user;
Syswmeventobj101791 syswm;
Touchfingereventobj101735 tfinger;
Multigestureeventobj101746 mgesture;
Dollargestureeventobj101757 dgesture;
Dropeventobj101767 drop;
TY101823 padding;
};
N_NIMCALL(void*, nimLoadLibrary)(NimStringDesc* path0);
N_NOINLINE(void, nimLoadLibraryError)(NimStringDesc* path0);
N_NIMCALL(void*, nimGetProcAddr)(void* lib0, NCSTRING name0);
static N_INLINE(void, nimFrame)(TFrame* s0);
N_NOINLINE(void, stackoverflow_21401_1689653243)(void);
static N_INLINE(void, popFrame)(void);
STRING_LITERAL(T2910579083_4, "SDL2.dll", 8);
STRING_LITERAL(T2910579083_5, "SDL2.dll", 8);
static void* T2910579083_2;
TY96423 Dl_96422;
TY102347 Dl_102346;
TY97450 Dl_97449;
TY99448 Dl_99447;
TY102582 Dl_102581;
TY102765 Dl_102764;
TY102339 Dl_102338;
TY102335 Dl_102334;
TY102883 Dl_102882;
TY99670 Dl_99669;
TY96435 Dl_96434;
TY101857 Dl_101856;
TNimType NTI100193; /* Keycode */
TY102800 Dl_102799;
TY102877 Dl_102876;
extern TFrame* frameptr_18636_1689653243;

static N_INLINE(void, nimFrame)(TFrame* s0) {
	NI LOC1;
	LOC1 = (NI)0;
	{
		if (!(frameptr_18636_1689653243 == NIM_NIL)) goto LA4;
		LOC1 = ((NI) 0);
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = ((NI) ((NI16)((*frameptr_18636_1689653243).calldepth + ((NI16) 1))));
	}
	LA2: ;
	(*s0).calldepth = ((NI16) (LOC1));
	(*s0).prev = frameptr_18636_1689653243;
	frameptr_18636_1689653243 = s0;
	{
		if (!((*s0).calldepth == ((NI16) 2000))) goto LA9;
		stackoverflow_21401_1689653243();
	}
	LA9: ;
}

static N_INLINE(void, popFrame)(void) {
	frameptr_18636_1689653243 = (*frameptr_18636_1689653243).prev;
}
NIM_EXTERNC N_NOINLINE(void, nippy_sdlInit000)(void) {
	nimfr("sdl", "sdl.nim")
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, nippy_sdlDatInit000)(void) {
static TNimNode* T2910579083_30[236];
NI T2910579083_32;
static char* NIM_CONST T2910579083_31[236] = {
"K_UNKNOWN", 
"K_BACKSPACE", 
"K_TAB", 
"K_RETURN", 
"K_ESCAPE", 
"K_SPACE", 
"K_EXCLAIM", 
"K_QUOTEDBL", 
"K_HASH", 
"K_DOLLAR", 
"K_PERCENT", 
"K_AMPERSAND", 
"K_QUOTE", 
"K_LEFTPAREN", 
"K_RIGHTPAREN", 
"K_ASTERISK", 
"K_PLUS", 
"K_COMMA", 
"K_MINUS", 
"K_PERIOD", 
"K_SLASH", 
"K_0", 
"K_1", 
"K_2", 
"K_3", 
"K_4", 
"K_5", 
"K_6", 
"K_7", 
"K_8", 
"K_9", 
"K_COLON", 
"K_SEMICOLON", 
"K_LESS", 
"K_EQUALS", 
"K_GREATER", 
"K_QUESTION", 
"K_AT", 
"K_LEFTBRACKET", 
"K_BACKSLASH", 
"K_RIGHTBRACKET", 
"K_CARET", 
"K_UNDERSCORE", 
"K_BACKQUOTE", 
"K_a", 
"K_b", 
"K_c", 
"K_d", 
"K_e", 
"K_f", 
"K_g", 
"K_h", 
"K_i", 
"K_j", 
"K_k", 
"K_l", 
"K_m", 
"K_n", 
"K_o", 
"K_p", 
"K_q", 
"K_r", 
"K_s", 
"K_t", 
"K_u", 
"K_v", 
"K_w", 
"K_x", 
"K_y", 
"K_z", 
"K_DELETE", 
"K_CAPSLOCK", 
"K_F1", 
"K_F2", 
"K_F3", 
"K_F4", 
"K_F5", 
"K_F6", 
"K_F7", 
"K_F8", 
"K_F9", 
"K_F10", 
"K_F11", 
"K_F12", 
"K_PRINTSCREEN", 
"K_SCROLLLOCK", 
"K_PAUSE", 
"K_INSERT", 
"K_HOME", 
"K_PAGEUP", 
"K_END", 
"K_PAGEDOWN", 
"K_RIGHT", 
"K_LEFT", 
"K_DOWN", 
"K_UP", 
"K_NUMLOCKCLEAR", 
"K_KP_DIVIDE", 
"K_KP_MULTIPLY", 
"K_KP_MINUS", 
"K_KP_PLUS", 
"K_KP_ENTER", 
"K_KP_1", 
"K_KP_2", 
"K_KP_3", 
"K_KP_4", 
"K_KP_5", 
"K_KP_6", 
"K_KP_7", 
"K_KP_8", 
"K_KP_9", 
"K_KP_0", 
"K_KP_PERIOD", 
"K_APPLICATION", 
"K_POWER", 
"K_KP_EQUALS", 
"K_F13", 
"K_F14", 
"K_F15", 
"K_F16", 
"K_F17", 
"K_F18", 
"K_F19", 
"K_F20", 
"K_F21", 
"K_F22", 
"K_F23", 
"K_F24", 
"K_EXECUTE", 
"K_HELP", 
"K_MENU", 
"K_SELECT", 
"K_STOP", 
"K_AGAIN", 
"K_UNDO", 
"K_CUT", 
"K_COPY", 
"K_PASTE", 
"K_FIND", 
"K_MUTE", 
"K_VOLUMEUP", 
"K_VOLUMEDOWN", 
"K_KP_COMMA", 
"K_KP_EQUALSAS400", 
"K_ALTERASE", 
"K_SYSREQ", 
"K_CANCEL", 
"K_CLEAR", 
"K_PRIOR", 
"K_RETURN2", 
"K_SEPARATOR", 
"K_OUT", 
"K_OPER", 
"K_CLEARAGAIN", 
"K_CRSEL", 
"K_EXSEL", 
"K_KP_00", 
"K_KP_000", 
"K_THOUSANDSSEPARATOR", 
"K_DECIMALSEPARATOR", 
"K_CURRENCYUNIT", 
"K_CURRENCYSUBUNIT", 
"K_KP_LEFTPAREN", 
"K_KP_RIGHTPAREN", 
"K_KP_LEFTBRACE", 
"K_KP_RIGHTBRACE", 
"K_KP_TAB", 
"K_KP_BACKSPACE", 
"K_KP_A", 
"K_KP_B", 
"K_KP_C", 
"K_KP_D", 
"K_KP_E", 
"K_KP_F", 
"K_KP_XOR", 
"K_KP_POWER", 
"K_KP_PERCENT", 
"K_KP_LESS", 
"K_KP_GREATER", 
"K_KP_AMPERSAND", 
"K_KP_DBLAMPERSAND", 
"K_KP_VERTICALBAR", 
"K_KP_DBLVERTICALBAR", 
"K_KP_COLON", 
"K_KP_HASH", 
"K_KP_SPACE", 
"K_KP_AT", 
"K_KP_EXCLAM", 
"K_KP_MEMSTORE", 
"K_KP_MEMRECALL", 
"K_KP_MEMCLEAR", 
"K_KP_MEMADD", 
"K_KP_MEMSUBTRACT", 
"K_KP_MEMMULTIPLY", 
"K_KP_MEMDIVIDE", 
"K_KP_PLUSMINUS", 
"K_KP_CLEAR", 
"K_KP_CLEARENTRY", 
"K_KP_BINARY", 
"K_KP_OCTAL", 
"K_KP_DECIMAL", 
"K_KP_HEXADECIMAL", 
"K_LCTRL", 
"K_LSHIFT", 
"K_LALT", 
"K_LGUI", 
"K_RCTRL", 
"K_RSHIFT", 
"K_RALT", 
"K_RGUI", 
"K_MODE", 
"K_AUDIONEXT", 
"K_AUDIOPREV", 
"K_AUDIOSTOP", 
"K_AUDIOPLAY", 
"K_AUDIOMUTE", 
"K_MEDIASELECT", 
"K_WWW", 
"K_MAIL", 
"K_CALCULATOR", 
"K_COMPUTER", 
"K_AC_SEARCH", 
"K_AC_HOME", 
"K_AC_BACK", 
"K_AC_FORWARD", 
"K_AC_STOP", 
"K_AC_REFRESH", 
"K_AC_BOOKMARKS", 
"K_BRIGHTNESSDOWN", 
"K_BRIGHTNESSUP", 
"K_DISPLAYSWITCH", 
"K_KBDILLUMTOGGLE", 
"K_KBDILLUMDOWN", 
"K_KBDILLUMUP", 
"K_EJECT", 
"K_SLEEP"};
static TNimNode T2910579083_0[237];
NTI100193.size = sizeof(Keycode100193);
NTI100193.kind = 14;
NTI100193.base = 0;
NTI100193.flags = 3;
for (T2910579083_32 = 0; T2910579083_32 < 236; T2910579083_32++) {
T2910579083_0[T2910579083_32+0].kind = 1;
T2910579083_0[T2910579083_32+0].offset = T2910579083_32;
T2910579083_0[T2910579083_32+0].name = T2910579083_31[T2910579083_32];
T2910579083_30[T2910579083_32] = &T2910579083_0[T2910579083_32+0];
}
T2910579083_0[0].offset = 0;
T2910579083_0[1].offset = 8;
T2910579083_0[2].offset = 9;
T2910579083_0[3].offset = 13;
T2910579083_0[4].offset = 27;
T2910579083_0[5].offset = 32;
T2910579083_0[6].offset = 33;
T2910579083_0[7].offset = 34;
T2910579083_0[8].offset = 35;
T2910579083_0[9].offset = 36;
T2910579083_0[10].offset = 37;
T2910579083_0[11].offset = 38;
T2910579083_0[12].offset = 39;
T2910579083_0[13].offset = 40;
T2910579083_0[14].offset = 41;
T2910579083_0[15].offset = 42;
T2910579083_0[16].offset = 43;
T2910579083_0[17].offset = 44;
T2910579083_0[18].offset = 45;
T2910579083_0[19].offset = 46;
T2910579083_0[20].offset = 47;
T2910579083_0[21].offset = 48;
T2910579083_0[22].offset = 49;
T2910579083_0[23].offset = 50;
T2910579083_0[24].offset = 51;
T2910579083_0[25].offset = 52;
T2910579083_0[26].offset = 53;
T2910579083_0[27].offset = 54;
T2910579083_0[28].offset = 55;
T2910579083_0[29].offset = 56;
T2910579083_0[30].offset = 57;
T2910579083_0[31].offset = 58;
T2910579083_0[32].offset = 59;
T2910579083_0[33].offset = 60;
T2910579083_0[34].offset = 61;
T2910579083_0[35].offset = 62;
T2910579083_0[36].offset = 63;
T2910579083_0[37].offset = 64;
T2910579083_0[38].offset = 91;
T2910579083_0[39].offset = 92;
T2910579083_0[40].offset = 93;
T2910579083_0[41].offset = 94;
T2910579083_0[42].offset = 95;
T2910579083_0[43].offset = 96;
T2910579083_0[44].offset = 97;
T2910579083_0[45].offset = 98;
T2910579083_0[46].offset = 99;
T2910579083_0[47].offset = 100;
T2910579083_0[48].offset = 101;
T2910579083_0[49].offset = 102;
T2910579083_0[50].offset = 103;
T2910579083_0[51].offset = 104;
T2910579083_0[52].offset = 105;
T2910579083_0[53].offset = 106;
T2910579083_0[54].offset = 107;
T2910579083_0[55].offset = 108;
T2910579083_0[56].offset = 109;
T2910579083_0[57].offset = 110;
T2910579083_0[58].offset = 111;
T2910579083_0[59].offset = 112;
T2910579083_0[60].offset = 113;
T2910579083_0[61].offset = 114;
T2910579083_0[62].offset = 115;
T2910579083_0[63].offset = 116;
T2910579083_0[64].offset = 117;
T2910579083_0[65].offset = 118;
T2910579083_0[66].offset = 119;
T2910579083_0[67].offset = 120;
T2910579083_0[68].offset = 121;
T2910579083_0[69].offset = 122;
T2910579083_0[70].offset = 127;
T2910579083_0[71].offset = 1073741881;
T2910579083_0[72].offset = 1073741882;
T2910579083_0[73].offset = 1073741883;
T2910579083_0[74].offset = 1073741884;
T2910579083_0[75].offset = 1073741885;
T2910579083_0[76].offset = 1073741886;
T2910579083_0[77].offset = 1073741887;
T2910579083_0[78].offset = 1073741888;
T2910579083_0[79].offset = 1073741889;
T2910579083_0[80].offset = 1073741890;
T2910579083_0[81].offset = 1073741891;
T2910579083_0[82].offset = 1073741892;
T2910579083_0[83].offset = 1073741893;
T2910579083_0[84].offset = 1073741894;
T2910579083_0[85].offset = 1073741895;
T2910579083_0[86].offset = 1073741896;
T2910579083_0[87].offset = 1073741897;
T2910579083_0[88].offset = 1073741898;
T2910579083_0[89].offset = 1073741899;
T2910579083_0[90].offset = 1073741901;
T2910579083_0[91].offset = 1073741902;
T2910579083_0[92].offset = 1073741903;
T2910579083_0[93].offset = 1073741904;
T2910579083_0[94].offset = 1073741905;
T2910579083_0[95].offset = 1073741906;
T2910579083_0[96].offset = 1073741907;
T2910579083_0[97].offset = 1073741908;
T2910579083_0[98].offset = 1073741909;
T2910579083_0[99].offset = 1073741910;
T2910579083_0[100].offset = 1073741911;
T2910579083_0[101].offset = 1073741912;
T2910579083_0[102].offset = 1073741913;
T2910579083_0[103].offset = 1073741914;
T2910579083_0[104].offset = 1073741915;
T2910579083_0[105].offset = 1073741916;
T2910579083_0[106].offset = 1073741917;
T2910579083_0[107].offset = 1073741918;
T2910579083_0[108].offset = 1073741919;
T2910579083_0[109].offset = 1073741920;
T2910579083_0[110].offset = 1073741921;
T2910579083_0[111].offset = 1073741922;
T2910579083_0[112].offset = 1073741923;
T2910579083_0[113].offset = 1073741925;
T2910579083_0[114].offset = 1073741926;
T2910579083_0[115].offset = 1073741927;
T2910579083_0[116].offset = 1073741928;
T2910579083_0[117].offset = 1073741929;
T2910579083_0[118].offset = 1073741930;
T2910579083_0[119].offset = 1073741931;
T2910579083_0[120].offset = 1073741932;
T2910579083_0[121].offset = 1073741933;
T2910579083_0[122].offset = 1073741934;
T2910579083_0[123].offset = 1073741935;
T2910579083_0[124].offset = 1073741936;
T2910579083_0[125].offset = 1073741937;
T2910579083_0[126].offset = 1073741938;
T2910579083_0[127].offset = 1073741939;
T2910579083_0[128].offset = 1073741940;
T2910579083_0[129].offset = 1073741941;
T2910579083_0[130].offset = 1073741942;
T2910579083_0[131].offset = 1073741943;
T2910579083_0[132].offset = 1073741944;
T2910579083_0[133].offset = 1073741945;
T2910579083_0[134].offset = 1073741946;
T2910579083_0[135].offset = 1073741947;
T2910579083_0[136].offset = 1073741948;
T2910579083_0[137].offset = 1073741949;
T2910579083_0[138].offset = 1073741950;
T2910579083_0[139].offset = 1073741951;
T2910579083_0[140].offset = 1073741952;
T2910579083_0[141].offset = 1073741953;
T2910579083_0[142].offset = 1073741957;
T2910579083_0[143].offset = 1073741958;
T2910579083_0[144].offset = 1073741977;
T2910579083_0[145].offset = 1073741978;
T2910579083_0[146].offset = 1073741979;
T2910579083_0[147].offset = 1073741980;
T2910579083_0[148].offset = 1073741981;
T2910579083_0[149].offset = 1073741982;
T2910579083_0[150].offset = 1073741983;
T2910579083_0[151].offset = 1073741984;
T2910579083_0[152].offset = 1073741985;
T2910579083_0[153].offset = 1073741986;
T2910579083_0[154].offset = 1073741987;
T2910579083_0[155].offset = 1073741988;
T2910579083_0[156].offset = 1073742000;
T2910579083_0[157].offset = 1073742001;
T2910579083_0[158].offset = 1073742002;
T2910579083_0[159].offset = 1073742003;
T2910579083_0[160].offset = 1073742004;
T2910579083_0[161].offset = 1073742005;
T2910579083_0[162].offset = 1073742006;
T2910579083_0[163].offset = 1073742007;
T2910579083_0[164].offset = 1073742008;
T2910579083_0[165].offset = 1073742009;
T2910579083_0[166].offset = 1073742010;
T2910579083_0[167].offset = 1073742011;
T2910579083_0[168].offset = 1073742012;
T2910579083_0[169].offset = 1073742013;
T2910579083_0[170].offset = 1073742014;
T2910579083_0[171].offset = 1073742015;
T2910579083_0[172].offset = 1073742016;
T2910579083_0[173].offset = 1073742017;
T2910579083_0[174].offset = 1073742018;
T2910579083_0[175].offset = 1073742019;
T2910579083_0[176].offset = 1073742020;
T2910579083_0[177].offset = 1073742021;
T2910579083_0[178].offset = 1073742022;
T2910579083_0[179].offset = 1073742023;
T2910579083_0[180].offset = 1073742024;
T2910579083_0[181].offset = 1073742025;
T2910579083_0[182].offset = 1073742026;
T2910579083_0[183].offset = 1073742027;
T2910579083_0[184].offset = 1073742028;
T2910579083_0[185].offset = 1073742029;
T2910579083_0[186].offset = 1073742030;
T2910579083_0[187].offset = 1073742031;
T2910579083_0[188].offset = 1073742032;
T2910579083_0[189].offset = 1073742033;
T2910579083_0[190].offset = 1073742034;
T2910579083_0[191].offset = 1073742035;
T2910579083_0[192].offset = 1073742036;
T2910579083_0[193].offset = 1073742037;
T2910579083_0[194].offset = 1073742038;
T2910579083_0[195].offset = 1073742039;
T2910579083_0[196].offset = 1073742040;
T2910579083_0[197].offset = 1073742041;
T2910579083_0[198].offset = 1073742042;
T2910579083_0[199].offset = 1073742043;
T2910579083_0[200].offset = 1073742044;
T2910579083_0[201].offset = 1073742045;
T2910579083_0[202].offset = 1073742048;
T2910579083_0[203].offset = 1073742049;
T2910579083_0[204].offset = 1073742050;
T2910579083_0[205].offset = 1073742051;
T2910579083_0[206].offset = 1073742052;
T2910579083_0[207].offset = 1073742053;
T2910579083_0[208].offset = 1073742054;
T2910579083_0[209].offset = 1073742055;
T2910579083_0[210].offset = 1073742081;
T2910579083_0[211].offset = 1073742082;
T2910579083_0[212].offset = 1073742083;
T2910579083_0[213].offset = 1073742084;
T2910579083_0[214].offset = 1073742085;
T2910579083_0[215].offset = 1073742086;
T2910579083_0[216].offset = 1073742087;
T2910579083_0[217].offset = 1073742088;
T2910579083_0[218].offset = 1073742089;
T2910579083_0[219].offset = 1073742090;
T2910579083_0[220].offset = 1073742091;
T2910579083_0[221].offset = 1073742092;
T2910579083_0[222].offset = 1073742093;
T2910579083_0[223].offset = 1073742094;
T2910579083_0[224].offset = 1073742095;
T2910579083_0[225].offset = 1073742096;
T2910579083_0[226].offset = 1073742097;
T2910579083_0[227].offset = 1073742098;
T2910579083_0[228].offset = 1073742099;
T2910579083_0[229].offset = 1073742100;
T2910579083_0[230].offset = 1073742101;
T2910579083_0[231].offset = 1073742102;
T2910579083_0[232].offset = 1073742103;
T2910579083_0[233].offset = 1073742104;
T2910579083_0[234].offset = 1073742105;
T2910579083_0[235].offset = 1073742106;
T2910579083_0[236].len = 236; T2910579083_0[236].kind = 2; T2910579083_0[236].sons = &T2910579083_30[0];
NTI100193.node = &T2910579083_0[236];
NTI100193.flags = 1<<2;
if (!((T2910579083_2 = nimLoadLibrary((NimStringDesc*) &T2910579083_4))
)) nimLoadLibraryError((NimStringDesc*) &T2910579083_5);
	Dl_96422 = (TY96423) nimGetProcAddr(T2910579083_2, "SDL_Init");
	Dl_102346 = (TY102347) nimGetProcAddr(T2910579083_2, "SDL_LogCritical");
	Dl_97449 = (TY97450) nimGetProcAddr(T2910579083_2, "SDL_GetError");
	Dl_99447 = (TY99448) nimGetProcAddr(T2910579083_2, "SDL_CreateWindow");
	Dl_102581 = (TY102582) nimGetProcAddr(T2910579083_2, "SDL_CreateRenderer");
	Dl_102764 = (TY102765) nimGetProcAddr(T2910579083_2, "SDL_SetRenderDrawColor");
	Dl_102338 = (TY102339) nimGetProcAddr(T2910579083_2, "SDL_LogWarn");
	Dl_102334 = (TY102335) nimGetProcAddr(T2910579083_2, "SDL_LogInfo");
	Dl_102882 = (TY102883) nimGetProcAddr(T2910579083_2, "SDL_DestroyRenderer");
	Dl_99669 = (TY99670) nimGetProcAddr(T2910579083_2, "SDL_DestroyWindow");
	Dl_96434 = (TY96435) nimGetProcAddr(T2910579083_2, "SDL_Quit");
	Dl_101856 = (TY101857) nimGetProcAddr(T2910579083_2, "SDL_PollEvent");
	Dl_102799 = (TY102800) nimGetProcAddr(T2910579083_2, "SDL_RenderClear");
	Dl_102876 = (TY102877) nimGetProcAddr(T2910579083_2, "SDL_RenderPresent");
}

