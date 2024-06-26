#define XXX &none
#define ___ &trans


// mo layers
#define LBASE 0
#define LNUM (LBASE+1)
#define LNAV (LNUM+1)
#define LNUM2 (LNAV+1)
#define LAPPS (LNUM2+1)


/*                  KEY POSITIONS

  ╭────────────────────────────────────────────────╮
  │  0   1   2   3   4   5   6   7   8   9  10  11 │
  │ 12  13  14  15  16* 17  18 *19  20  21  22  23 │
  │ 24  25  26  27  28  29  30  31  32  33  34  35 │
  │ 36  37  38  39  40  41  42  43  44  45  46  47 │
  ╰────────────────────────────────────────────────╯

  ╭────────────────────────────────────────────────╮
  │  .   .   2   3   4   .   .   7   8   9   .   . │
  │  .  13  14  15  16*  .   . *19  20  21  22   . │
  │  .  25  26  27  28   .   .  31  32  33  34   . │
  │  .   .   .   .  40  41  42  43   .   .   .   . │
  ╰────────────────────────────────────────────────╯

*/

#define HL(A,S,D,F) &htp LCTL A    &htp LALT S   &htp LCMD D    &bh  LSFT F
#define HR(J,K,L,Q) &bh  RSFT J    &htp RCMD K   &htp LALT L    &htp RCTL Q
#define MIC(X) &bh RG(Y) X
#define CAM(X) &bh LA(RG(V)) X
#define OPT(X) &kp LA(X)
#define BTN(N) &bt BT_SEL N


#define BASELAYER \
    &kp ESC     &kp C   &kp D      &kp V       XXX         MIC(CMMA)   CAM(H)      &kp W       XXX    &kp BSPC   XXX       XXX  \
    HL(A,       S,      T,         O)          &sk LSHIFT  HR(E,       R,          N,          I)     &kp RET    &kp UP    XXX  \
    &kp F       &kp G   &kp M      &kp BSPC    XXX         &kp U       &kp L       &kp P       &kp Y  &kp LEFT   &kp DOWN  &kp RIGHT 

#define THUMBAR(LIN, LOUT, ROUT, RIN) \
    XXX         XXX     LIN        LOUT        ROUT        RIN         XXX         XXX   &tog LNUM    &kp N0     &kp DOT   &kp RET    

#define NAVSLAYER \
    XXX         XXX     &kp EXCL   &kp QMARK   XXX         &kp DOT     &kp UP      &kp COLON   XXX    XXX        XXX       ___  \
    HL(BSLH,    Z,      X,         TAB)        XXX         HR(LEFT,    DOWN,       RIGHT,      J)     XXX        XXX       XXX  \
    XXX         &kp AT  &kp Q      &kp BSPC    XXX         &kp QUOT    &kp K       &kp B       XXX    XXX        XXX       ___

#define NUMSLAYER \
    XXX         XXX     &kp N9     XXX         XXX         &kp DOT     &kp N8      &kp SLASH   XXX    &kp N7     &kp N8    &kp N9  \
    HL(N7,      N5,     N3,        N1)         XXX         HR(N0,      N2,         N4,         N6)    &kp N4     &kp N5    &kp N6  \
    XXX         XXX     &kp Q      &kp BSPC    XXX         &kp PLUS    &kp MINUS   &kp EQUAL   XXX    &kp N1     &kp N2    &kp N3

#define APPLAYER \
    XXX         OPT(W)  OPT(E)     OPT(T)      XXX         BTN(1)       BTN(2)      BTN(3)      XXX            XXX XXX XXX \
    OPT(A)      OPT(S)  OPT(N2)    OPT(N1)     XXX         &out OUT_BLE XXX         XXX         &out OUT_USB   XXX XXX XXX \
    XXX         XXX     OPT(C)     &kp LG(TAB) XXX         XXX          XXX         XXX         &bt BT_CLR     XXX XXX XXX 
