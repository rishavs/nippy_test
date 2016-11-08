/* Generated by Nim Compiler v0.15.2 */
/*   (c) 2016 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   gcc.exe -c  -w  -I"C:\Program Files\Nim\lib" -o c:\users\rsharan\devspace\nim\nippy\src\nimcache\nippy_main.o c:\users\rsharan\devspace\nim\nippy\src\nimcache\nippy_main.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct Appobj104011 Appobj104011;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct Cell47304 Cell47304;
typedef struct Cellseq47320 Cellseq47320;
typedef struct Gcheap49818 Gcheap49818;
typedef struct Gcstack49816 Gcstack49816;
typedef struct Memregion29486 Memregion29486;
typedef struct Smallchunk29440 Smallchunk29440;
typedef struct Llchunk29480 Llchunk29480;
typedef struct Bigchunk29442 Bigchunk29442;
typedef struct Intset29414 Intset29414;
typedef struct Trunk29410 Trunk29410;
typedef struct Avlnode29484 Avlnode29484;
typedef struct Gcstat49814 Gcstat49814;
typedef struct Cellset47316 Cellset47316;
typedef struct Pagedesc47312 Pagedesc47312;
typedef struct Basechunk29438 Basechunk29438;
typedef struct Freecell29430 Freecell29430;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef N_CDECL_PTR(int, TY96423) (NU32 flags0);
typedef N_CDECL_PTR(NCSTRING, TY97445) (void);
struct  Appobj104011  {
void* window;
void* renderer;
};
typedef N_CDECL_PTR(void*, TY99394) (NCSTRING title0, int x0, int y0, int w0, int h0, NU32 flags0);
typedef N_CDECL_PTR(void*, TY102482) (void* window0, int index0, NU32 flags0);
typedef N_CDECL_PTR(int, TY102658) (void* renderer0, NU8 r0, NU8 g0, NU8 b0, NU8 a0);
typedef N_CDECL_PTR(void, TY102776) (void* renderer0);
typedef N_CDECL_PTR(void, TY99585) (void* window0);
typedef N_CDECL_PTR(void, TY96435) (void);
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
typedef NU8 Tnimnodekind3405;
struct  TNimNode  {
Tnimnodekind3405 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_NIMCALL_PTR(void, Globalmarkerproc55802) (void);
struct  Cell47304  {
NI refcount;
TNimType* typ;
};
struct  Cellseq47320  {
NI len;
NI cap;
Cell47304** d;
};
typedef Smallchunk29440* TY29501[512];
typedef Trunk29410* Trunkbuckets29412[256];
struct  Intset29414  {
Trunkbuckets29412 data;
};
struct  Memregion29486  {
NI minlargeobj;
NI maxlargeobj;
TY29501 freesmallchunks;
Llchunk29480* llmem;
NI currmem;
NI maxmem;
NI freemem;
NI lastsize;
Bigchunk29442* freechunkslist;
Intset29414 chunkstarts;
Avlnode29484* root;
Avlnode29484* deleted;
Avlnode29484* last;
Avlnode29484* freeavlnodes;
NIM_BOOL locked;
};
struct  Gcstat49814  {
NI stackscans;
NI cyclecollections;
NI maxthreshold;
NI maxstacksize;
NI maxstackcells;
NI cycletablesize;
NI64 maxpause;
};
struct  Cellset47316  {
NI counter;
NI max;
Pagedesc47312* head;
Pagedesc47312** data;
};
struct  Gcheap49818  {
Gcstack49816* stack;
void* stackbottom;
NI cyclethreshold;
Cellseq47320 zct;
Cellseq47320 decstack;
Cellseq47320 tempstack;
NI recgclock;
Memregion29486 region;
Gcstat49814 stat;
Cellset47316 marked;
Cellseq47320 additionalroots;
};
typedef N_CDECL_PTR(int, TY102693) (void* renderer0);
typedef N_CDECL_PTR(void, TY102770) (void* renderer0);
typedef N_CDECL_PTR(void, TY103271) (NU32 ms0);
struct  Gcstack49816  {
Gcstack49816* prev;
Gcstack49816* next;
void* starts;
void* pos;
NI maxstacksize;
};
struct  Basechunk29438  {
NI prevsize;
NI size;
NIM_BOOL used;
};
struct  Smallchunk29440  {
  Basechunk29438 Sup;
Smallchunk29440* next;
Smallchunk29440* prev;
Freecell29430* freelist;
NI free;
NI acc;
NF data;
};
struct  Llchunk29480  {
NI size;
NI acc;
Llchunk29480* next;
};
struct  Bigchunk29442  {
  Basechunk29438 Sup;
Bigchunk29442* next;
Bigchunk29442* prev;
NI align;
NF data;
};
typedef NI TY29419[8];
struct  Trunk29410  {
Trunk29410* next;
NI key;
TY29419 bits;
};
typedef Avlnode29484* TY29491[2];
struct  Avlnode29484  {
TY29491 link;
NI key;
NI upperbound;
NI level;
};
struct  Pagedesc47312  {
Pagedesc47312* next;
NI key;
TY29419 bits;
};
struct  Freecell29430  {
Freecell29430* next;
NI zerofield;
};
N_NIMCALL(NIM_BOOL, init_104017_2187552233)(Appobj104011* app0);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str0);
static N_INLINE(void, nimFrame)(TFrame* s0);
N_NOINLINE(void, stackoverflow_21401_1689653243)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, exit_104035_2187552233)(Appobj104011* app0);
N_NIMCALL(void, T2187552233_10)(void* p, NI op);
N_NIMCALL(void, nimGCvisit)(void* d0, NI op0);
N_NIMCALL(void, T2187552233_11)(void);
N_NIMCALL(void, nimRegisterGlobalMarker)(Globalmarkerproc55802 markerproc0);
N_NIMCALL(void*, newObj)(TNimType* typ0, NI size0);
static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0);
static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0);
static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0);
N_NOINLINE(void, addzct_51417_1689653243)(Cellseq47320* s0, Cell47304* c0);
static N_INLINE(void, initStackBottomWith)(void* locals0);
N_NOINLINE(void, setStackBottom)(void* thestackbottom0);
NIM_EXTERNC N_NOINLINE(void, systemInit000)(void);
NIM_EXTERNC N_NOINLINE(void, systemDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, sdl2nim_sdlInit000)(void);
NIM_EXTERNC N_NOINLINE(void, sdl2nim_sdlDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, mainInit000)(void);
NIM_EXTERNC N_NOINLINE(void, mainDatInit000)(void);
STRING_LITERAL(T2187552233_2, "test", 4);
STRING_LITERAL(T2187552233_3, "ERROR: Can\'t initialize SDL: ", 29);
STRING_LITERAL(T2187552233_4, "ERROR: Can\'t create window: ", 28);
STRING_LITERAL(T2187552233_5, "ERROR: Can\'t create renderer: ", 30);
STRING_LITERAL(T2187552233_6, "ERROR: Can\'t set draw color: ", 29);
STRING_LITERAL(T2187552233_7, "SDL initialized successfully", 28);
STRING_LITERAL(T2187552233_8, "SDL shutdown completed", 22);
STRING_LITERAL(T2187552233_12, "Warning: Can\'t clear screen: ", 29);
extern TY96423 Dl_96422;
extern TY97445 Dl_97444;
extern TY99394 Dl_99393;
extern TY102482 Dl_102481;
extern TY102658 Dl_102657;
extern TFrame* frameptr_18636_1689653243;
extern TY102776 Dl_102775;
extern TY99585 Dl_99584;
extern TY96435 Dl_96434;
Appobj104011* app_104040_2187552233;
TNimType NTI104011; /* AppObj */
extern TNimType NTI142; /* pointer */
TNimType NTI104009; /* App */
extern Gcheap49818 gch_49858_1689653243;
extern TY102693 Dl_102692;
extern TY102770 Dl_102769;
extern TY103271 Dl_103270;

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

N_NIMCALL(NIM_BOOL, init_104017_2187552233)(Appobj104011* app0) {
	NIM_BOOL result0;
	nimfr("init", "main.nim")
{	result0 = (NIM_BOOL)0;
	nimln(26, "main.nim");
	{
		int LOC3;
		NCSTRING LOC6;
		NimStringDesc* LOC7;
		nimln(347, "system.nim");
		nimln(26, "main.nim");
		LOC3 = (int)0;
		LOC3 = Dl_96422(((NU32) 32));
		if (!!((LOC3 == ((NI32) 0)))) goto LA4;
		nimln(27, "main.nim");
		LOC6 = (NCSTRING)0;
		LOC6 = Dl_97444();
		LOC7 = (NimStringDesc*)0;
		LOC7 = cstrToNimstr(LOC6);
		printf("%s%s\015\012", ((NimStringDesc*) &T2187552233_3)? (((NimStringDesc*) &T2187552233_3))->data:"nil", LOC7? (LOC7)->data:"nil");
		fflush(stdout);
		nimln(28, "main.nim");
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA4: ;
	nimln(31, "main.nim");
	(*app0).window = Dl_99393("SDL2 App", ((int) 536805376), ((int) 536805376), ((int) 640), ((int) 480), ((NU32) 0));
	nimln(38, "main.nim");
	{
		NCSTRING LOC12;
		NimStringDesc* LOC13;
		if (!((*app0).window == NIM_NIL)) goto LA10;
		nimln(39, "main.nim");
		LOC12 = (NCSTRING)0;
		LOC12 = Dl_97444();
		LOC13 = (NimStringDesc*)0;
		LOC13 = cstrToNimstr(LOC12);
		printf("%s%s\015\012", ((NimStringDesc*) &T2187552233_4)? (((NimStringDesc*) &T2187552233_4))->data:"nil", LOC13? (LOC13)->data:"nil");
		fflush(stdout);
		nimln(40, "main.nim");
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA10: ;
	nimln(43, "main.nim");
	(*app0).renderer = Dl_102481((*app0).window, ((int) -1), ((NU32) 6));
	nimln(44, "main.nim");
	{
		NCSTRING LOC18;
		NimStringDesc* LOC19;
		if (!((*app0).renderer == NIM_NIL)) goto LA16;
		nimln(45, "main.nim");
		LOC18 = (NCSTRING)0;
		LOC18 = Dl_97444();
		LOC19 = (NimStringDesc*)0;
		LOC19 = cstrToNimstr(LOC18);
		printf("%s%s\015\012", ((NimStringDesc*) &T2187552233_5)? (((NimStringDesc*) &T2187552233_5))->data:"nil", LOC19? (LOC19)->data:"nil");
		fflush(stdout);
		nimln(46, "main.nim");
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA16: ;
	nimln(49, "main.nim");
	{
		int LOC22;
		NCSTRING LOC25;
		NimStringDesc* LOC26;
		nimln(347, "system.nim");
		nimln(49, "main.nim");
		LOC22 = (int)0;
		LOC22 = Dl_102657((*app0).renderer, ((NU8) 255), ((NU8) 255), ((NU8) 255), ((NU8) 255));
		if (!!((LOC22 == ((NI32) 0)))) goto LA23;
		nimln(50, "main.nim");
		LOC25 = (NCSTRING)0;
		LOC25 = Dl_97444();
		LOC26 = (NimStringDesc*)0;
		LOC26 = cstrToNimstr(LOC25);
		printf("%s%s\015\012", ((NimStringDesc*) &T2187552233_6)? (((NimStringDesc*) &T2187552233_6))->data:"nil", LOC26? (LOC26)->data:"nil");
		fflush(stdout);
		nimln(51, "main.nim");
		result0 = NIM_FALSE;
		goto BeforeRet;
	}
	LA23: ;
	nimln(53, "main.nim");
	printf("%s\015\012", ((NimStringDesc*) &T2187552233_7)? (((NimStringDesc*) &T2187552233_7))->data:"nil");
	fflush(stdout);
	nimln(54, "main.nim");
	result0 = NIM_TRUE;
	goto BeforeRet;
	}BeforeRet: ;
	popFrame();
	return result0;
}

N_NIMCALL(void, exit_104035_2187552233)(Appobj104011* app0) {
	nimfr("exit", "main.nim")
	nimln(59, "main.nim");
	Dl_102775((*app0).renderer);
	nimln(60, "main.nim");
	Dl_99584((*app0).window);
	nimln(61, "main.nim");
	Dl_96434();
	nimln(62, "main.nim");
	printf("%s\015\012", ((NimStringDesc*) &T2187552233_8)? (((NimStringDesc*) &T2187552233_8))->data:"nil");
	fflush(stdout);
	popFrame();
}
N_NIMCALL(void, T2187552233_10)(void* p, NI op) {
	Appobj104011* a;
	a = (Appobj104011*)p;
}
N_NIMCALL(void, T2187552233_11)(void) {
	nimGCvisit((void*)app_104040_2187552233, 0);
}

static N_INLINE(Cell47304*, usrtocell_51440_1689653243)(void* usr0) {
	Cell47304* result0;
	nimfr("usrToCell", "gc.nim")
	result0 = (Cell47304*)0;
	nimln(134, "gc.nim");
	result0 = ((Cell47304*) ((NI)((NU64)(((NI) (usr0))) - (NU64)(((NI)sizeof(Cell47304))))));
	popFrame();
	return result0;
}

static N_INLINE(void, rtladdzct_52601_1689653243)(Cell47304* c0) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(214, "gc.nim");
	addzct_51417_1689653243((&gch_49858_1689653243.zct), c0);
	popFrame();
}

static N_INLINE(void, asgnRefNoCycle)(void** dest0, void* src0) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(274, "gc.nim");
	{
		Cell47304* c0;
		nimln(347, "system.nim");
		if (!!((src0 == NIM_NIL))) goto LA3;
		nimln(275, "gc.nim");
		c0 = usrtocell_51440_1689653243(src0);
		nimln(182, "gc.nim");
		(*c0).refcount += ((NI) 8);
	}
	LA3: ;
	nimln(277, "gc.nim");
	{
		Cell47304* c0;
		nimln(347, "system.nim");
		if (!!(((*dest0) == NIM_NIL))) goto LA7;
		nimln(278, "gc.nim");
		c0 = usrtocell_51440_1689653243((*dest0));
		nimln(279, "gc.nim");
		{
			nimln(180, "gc.nim");
			(*c0).refcount -= ((NI) 8);
			nimln(181, "gc.nim");
			if (!((NU64)((*c0).refcount) < (NU64)(((NI) 8)))) goto LA11;
			nimln(280, "gc.nim");
			rtladdzct_52601_1689653243(c0);
		}
		LA11: ;
	}
	LA7: ;
	nimln(281, "gc.nim");
	(*dest0) = src0;
	popFrame();
}

static N_INLINE(void, initStackBottomWith)(void* locals0) {
	setStackBottom(locals0);
}
void PreMainInner() {
	systemInit000();
	sdl2nim_sdlDatInit000();
	mainDatInit000();
	sdl2nim_sdlInit000();
}

void PreMain() {
	void (*volatile inner)();
	systemDatInit000();
	inner = PreMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	mainInit000();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)();
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

NIM_EXTERNC N_NOINLINE(void, mainInit000)(void) {
	Appobj104011* LOC1;
	nimfr("main", "main.nim")
nimRegisterGlobalMarker(T2187552233_11);
	nimln(1, "main.nim");
	printf("%s\015\012", ((NimStringDesc*) &T2187552233_2)? (((NimStringDesc*) &T2187552233_2))->data:"nil");
	fflush(stdout);
	nimln(70, "main.nim");
	LOC1 = (Appobj104011*)0;
	LOC1 = (Appobj104011*) newObj((&NTI104009), sizeof(Appobj104011));
	(*LOC1).window = NIM_NIL;
	(*LOC1).renderer = NIM_NIL;
	asgnRefNoCycle((void**) (&app_104040_2187552233), LOC1);
	nimln(72, "main.nim");
	{
		NIM_BOOL LOC4;
		LOC4 = (NIM_BOOL)0;
		LOC4 = init_104017_2187552233(app_104040_2187552233);
		if (!LOC4) goto LA5;
		nimln(75, "main.nim");
		{
			int LOC9;
			NCSTRING LOC12;
			NimStringDesc* LOC13;
			nimln(347, "system.nim");
			nimln(75, "main.nim");
			LOC9 = (int)0;
			LOC9 = Dl_102692((*app_104040_2187552233).renderer);
			if (!!((LOC9 == ((NI32) 0)))) goto LA10;
			nimln(76, "main.nim");
			LOC12 = (NCSTRING)0;
			LOC12 = Dl_97444();
			LOC13 = (NimStringDesc*)0;
			LOC13 = cstrToNimstr(LOC12);
			printf("%s%s\015\012", ((NimStringDesc*) &T2187552233_12)? (((NimStringDesc*) &T2187552233_12))->data:"nil", LOC13? (LOC13)->data:"nil");
			fflush(stdout);
		}
		LA10: ;
		nimln(79, "main.nim");
		Dl_102769((*app_104040_2187552233).renderer);
		nimln(82, "main.nim");
		Dl_103270(((NU32) 2000));
	}
	LA5: ;
	nimln(85, "main.nim");
	exit_104035_2187552233(app_104040_2187552233);
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, mainDatInit000)(void) {
static TNimNode* T2187552233_9[2];
static TNimNode T2187552233_0[3];
NTI104011.size = sizeof(Appobj104011);
NTI104011.kind = 18;
NTI104011.base = 0;
NTI104011.flags = 3;
T2187552233_9[0] = &T2187552233_0[1];
T2187552233_0[1].kind = 1;
T2187552233_0[1].offset = offsetof(Appobj104011, window);
T2187552233_0[1].typ = (&NTI142);
T2187552233_0[1].name = "window";
T2187552233_9[1] = &T2187552233_0[2];
T2187552233_0[2].kind = 1;
T2187552233_0[2].offset = offsetof(Appobj104011, renderer);
T2187552233_0[2].typ = (&NTI142);
T2187552233_0[2].name = "renderer";
T2187552233_0[0].len = 2; T2187552233_0[0].kind = 2; T2187552233_0[0].sons = &T2187552233_9[0];
NTI104011.node = &T2187552233_0[0];
NTI104009.size = sizeof(Appobj104011*);
NTI104009.kind = 22;
NTI104009.base = (&NTI104011);
NTI104009.flags = 2;
NTI104009.marker = T2187552233_10;
}

