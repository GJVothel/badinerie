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

uint16_t T1[] = {
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
        /* 15 */ _S(_CS5), _S(_A5), _S(_GS4), _S(_FS4), _E(_A5), _T(_GS4), _T(_G4), _S(_GS4),
        /* 16 */ _EP(_FS4), _S(_FS4), _S(0),
};

uint16_t T2[] = {
        /* 17 */_E(_FS4), _S(_A5), _S(_FS4),
        /* 18 */ _E(_CS4), _S(_FS4), _S(_CS4), _E(_A3), _S(_CS4), _S(_A3),
        /* 19 */ _Q(_FS3), _E(_C4), _E(_B3),

        /* 20 */ _E(_E4), _S(_DS4), _S(_FS4), _E(_A4), _S(_G4), _S(_FS4),
        /* 21 */ _E(_G4), _E(_E4), _E(_G4), _S(_B4), _S(_G4),
        /* 22 */ _E(_E4), _S(_G4), _S(_E4), _E(_CS4), _S(_E4), _S(_CS4),
        /* 23 */ _Q(_A3), _S(_A3), _S(_D4), _S(_FS4), _S(_D4),
        /* 24 */ _S(_E4), _S(_D4), _S(_E4), _S(_D4), _S(_CS4), _S(_E4), _S(_G4), _S(_E4),
        /* 25 */ _S(_FS4), _S(_E4), _S(_FS4), _S(_E4), _S(_D4), _S(_FS4), _S(_D4), _S(_CS4),

        /* 26 */ _S(_D4), _S(_G4), _S(_D4), _S(_CS4), _S(_D4), _S(_A4), _S(_D4), _S(_CS4),
        /* 27 */ _S(_D4), _S(_B4), _S(_D4), _S(_CS4), _S(_D4), _S(_B4), _S(_A4), _S(_G4),
        /* 28 */ _S(_A4), _S(_FS4), _S(_E4), _S(_D4), _E(_FS4), _T(_E4), _T(_DS4), _S(_E4),
        /* 29 */ _Q(_D4), _S(_FS4), _T(_FS4), _T(0), _S(_FS4), _T(_FS4), _T(0),

        /* 30 */ _S(_FS4), _T(_FS4), _T(0), _S(_FS4), _T(_FS4), _T(0), _E(_D5), _E(_FS4),
        /* 31 */ _T(_FS4), _T(_F4), _S(_FS4), _S(_E4), _T(_E4), _T(0), _S(_E4), _T(_E4), _T(0), _S(_E4), _T(_E4), _T(0),
        /* 32 */ _S(_E4), _T(_E4), _T(0), _E(_E4), _E(_CS5), _S(_E4), _T(_E4), _T(0),
        /* 33 */ _T(_E4), _T(_DS4), _S(_E4), _E(_D4), _E(_B4),  _S(_D5), _S(_B4),

        /* 34 */ _E(_A4), _Q(_G4), _T(_B4), _T(_A4), _T(_G4), _T(_FS4),
        /* 35 */ _Q(_E4), _E(_E4), _T(_G4), _T(_FS4), _T(_E4), _T(_D4),
        /* 36 */ _S(_C4), _S(_E4), _S(_G4), _S(_E4), _S(_C4), _S(_B3), _S(_CS4), _S(_B3),
        /* 37 */ _S(_AS3), _T(_AS3), _T(0), _S(_FS3), _T(_FS3), _T(0), _E(_G3), _E(_FS3),

        /* 38 */ _E(_B3), _S(_AS3), _S(_CS4), _E(_E4), _S(_D4), _S(_CS4),
        /* 39 */ _E(_D4), _T(_B3), _T(_CS4), _T(_D4), _T(_E4), _E(_FS4), _S(_D4), _S(_FS4),
        /* 40 */ _E(_B4), _E(_FS4), _S(_E4), _S(_D4), _S(_CS4), _S(_D4),
        /* 41 */ _E(_CS4), _E(_B3)
};

void setup() {
    pinMode(11, OUTPUT);
}

void loop() {
    for(uint16_t j = 0; j < 2; j++)
    {
        for(uint16_t i = 0; i < sizeof(T1)/ sizeof(uint16_t); i++)
        {
            tone(11, T1[i]);

            delay(50);
        }
    }
    for(uint16_t j = 0; j < 2; j++)
    {
        for(uint16_t i = 0; i < sizeof(T2)/ sizeof(uint16_t); i++)
        {
            tone(11, T2[i]);

            delay(50);
        }
    }
    delay(1000);
}