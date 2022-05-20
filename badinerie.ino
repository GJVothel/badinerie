enum {
  _C7 = 2093,
  _B6 = 1976,
  _AS6 = 1865,
  _A6 = 1760,
  _GS6 = 1661,
  _G6 = 1568,
  _FS6 = 1480,
  _F6 = 1397,
  _E6 = 1319,
  _DS6 = 1245,
  _D6 = 1175,
  _CS6 = 1109,
  _C6 = 1047,
  _B5 = 988,
  _AS5 = 932,
  _A5 = 880,
  _GS5 = 831,
  _G5 = 784,
  _FS5 = 740,
  _F5 = 698,
  _E5 = 659,
  _DS5 = 622,
  _D5 = 587,
  _CS5 = 554,
  _C5 = 523,
  _B4 = 494,
  _AS4 = 466,
  _A4 = 440,
  _GS4 = 415,
  _G4 = 392,
  _FS4 = 370,
  _F4 = 349,
  _E4 = 330,
  _DS4 = 311,
  _D4 = 294,
  _CS4 = 277,
  _C4 = 262,
  _B3 = 247,
  _AS3 = 233,
  _A3 = 220,
  _GS3 = 208,
  _G3 = 196,
  _FS3 = 185,
  _F3 = 175,
  _E3 = 165,
  _DS3 = 156,
  _D3 = 147,
  _CS3 = 139,
  _C3 = 131
};

#define _W(t)  t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t
#define _H(t)  t, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t
#define _QP(t) t, t, t, t, t, t, t, t, t, t, t, t
#define _Q(t)  t, t, t, t, t, t, t, t
#define _EP(t) t, t, t, t, t, t
#define _E(t)  t, t, t, t
#define _S(t)  t, t
#define _T(t)  t

int i = 0;

/*uint16_t T[] = {
  _E(_B6), _S(_D6), _S(_B6),
  _E(_FS5), _S(_B6), _S(_FS5), _E(_D5), _S(_FS5), _S(_D5),
  _Q(_B5), _S(_FS4), _S(_B5), _S(_D5), _S(_B5),
  _S(_CS5), _S(_B5), _S(_CS5), _S(_B5), _S(_AS5), _S(_CS5), _S(_E5), _S(_CS5),
  _E(_D5), _E(_B5)
};*/

uint16_t T[] = {
  /* 00 */ _E(_B5), _S(_D5), _S(_B5),
  /* 01 */ _E(_FS4), _S(_B5), _S(_FS4), _E(_D4), _S(_FS4), _S(_D4),
  /* 02 */ _Q(_B4), _S(_FS3), _S(_B4), _S(_D4), _S(_B4),
  /* 03 */ _S(_CS4), _S(_B4), _S(_CS4), _S(_B4), _S(_AS4), _S(_CS4), _S(_E4), _S(_CS4),
  /* 04 */ _E(_D4), _E(_B4), _E(_B5), _S(_D5), _S(_B5),

  /* 05 */ _E(_FS4), _S(_B5), _S(_FS4), _E(_D4), _S(_FS4), _S(_D4),
  /* 06 */ _Q(_B4), _S(_D4), _T(_D4), _T(0), _S(_D4), _T(_D4), _T(0),
  /* 07 */ _S(_D4), _T(_D4), _T(0), _S(_D4), _T(_D4), _T(0), _E(_B5), _S(_D4), _T(_D4), _T(0),
  /* 08 */ _T(_D4), _T(_CS4), _S(_D4), _E(_CS4), _S(_FS4), _T(_FS4), _T(0), _S(_FS4), _T(_FS4), _T(0),

  /* 09 */ _S(_FS4), _T(_FS4), _T(0), _S(_FS4), _T(_FS4), _T(0), _E(_D5), _S(_FS4), _T(_FS4), _T(0),
  /* 10 */ _T(_FS4), _T(_F4), _S(_FS4), _S(_F4), _S(_CS4), _S(_FS4), _S(_A5), _S(_FS4),
  /* 11 */ _S(_GS4), _S(_FS4), _S(_GS4), _S(_FS4), _S(_F4), _S(_GS4), _S(_B5), _S(_GS4),
  /* 12 */ _S(_A5), _S(_GS4), _S(_A5), _S(_GS4), _S(_FS4), _S(_A5), _S(_FS4), _S(_F4),
  /* 13 */ _S(_FS4), _S(_B5), _S(_FS4), _S(_F4), _S(_FS4), _S(_CS5), _S(_FS4), _S(_F4),
  /* 14 */ _S(_FS4), _S(_D5), _S(_FS4), _S(_F4), _S(_FS4), _S(_D5), _S(_CS5), _S(_B5),
  /* 15 */ _S(_CS5), _S(_A5), _S(_GS4), _S(_FS4), _E(_A5), _E(_GS4),
           _Q(_FS4),

  //_W(0)
};

void setup() {
  pinMode(3, OUTPUT);
}

void loop() {

  tone(3, T[i]);
  
  delay(50);

  i = (i + 1) % (sizeof(T) / sizeof(uint16_t));
}
