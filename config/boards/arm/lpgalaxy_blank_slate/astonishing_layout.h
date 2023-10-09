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
    &kp ESC  XXX         &kp C   &kp D      &kp V       XXX  XXX     MIC(CMMA)   CAM(H)      &kp W       XXX    &kp BSPC  \
    XXX      HL(A,       S,      T,         O)          XXX  XXX     HR(E,       R,          N,          I)     XXX  \
    XXX      &kp F       &kp G   &kp M      &kp BSPC    XXX  XXX     &kp U       &kp L       &kp P       &kp Y  XXX         

#define THUMBAR(LIN, LOUT, ROUT, RIN) \
    XXX      XXX         XXX     XXX        LIN         LOUT ROUT    RIN         XXX         XXX         XXX    XXX

#define NAVSLAYER \
    ___      XXX         XXX     &kp EXCL   &kp QMARK   XXX  XXX     &kp DOT     &kp UP      &kp COLON   XXX    ___  \
    XXX      HL(BSLH,    Z,      X,         TAB)        XXX  XXX     HR(LEFT,    DOWN,       RIGHT,      J)     XXX  \
    XXX      XXX         &kp AT  &kp Q      &kp BSPC    XXX  XXX     &kp QUOT    &kp K       &kp B       XXX    XXX

#define NUMSLAYER \
    ___      XXX         XXX     &kp N9     XXX         XXX  XXX     &kp DOT     &kp N8      &kp SLASH   XXX    ___  \
    XXX      HL(N7,      N5,     N3,        N1)         XXX  XXX     HR(N0,      N2,         N4,         N6)    XXX  \
    XXX      XXX         XXX     &kp Q      &kp BSPC    XXX  XXX     &kp PLUS    &kp MINUS   &kp EQUAL   XXX    XXX      

#define APPLAYER \
    XXX      XXX         OPT(W)  OPT(E)     OPT(T)      XXX  XXX    BTN(1)       BTN(2)      BTN(3)      XXX            XXX \
    XXX      OPT(A)      OPT(S)  OPT(N2)    OPT(N1)     XXX  XXX    &out OUT_BLE XXX         XXX         &out OUT_USB   XXX \
    XXX      XXX         XXX     OPT(C)     &kp LG(TAB) XXX  XXX    XXX          XXX         XXX         &bt BT_CLR     XXX 

