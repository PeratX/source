

_DWORD *__fastcall TouchTextButtonControl::TouchTextButtonControl(_DWORD *a1, int a2, int a3, int a4, __int16 a5, int a6, int a7, int a8, int a9, int a10, char a11, int a12)
{
  _DWORD *v12; // r4@1
  int v13; // r8@1
  int v14; // r7@1
  int v15; // r6@1
  _DWORD *v16; // r0@1
  __int64 v17; // kr00_8@1
  int v18; // ST04_4@1
  int v19; // r7@1
  int v20; // r12@1
  __int64 v21; // r1@1
  int v22; // r3@1
  int v23; // r7@1
  int v24; // r0@1
  int v25; // r3@1
  void *v26; // r0@1
  __int64 v27; // r1@6
  __int64 v28; // r1@6
  unsigned int *v30; // r2@7
  signed int v31; // r1@9
  int v32; // [sp+Ch] [bp-4Ch]@1
  __int64 v33; // [sp+10h] [bp-48h]@1
  void (*v34)(void); // [sp+18h] [bp-40h]@1
  int v35; // [sp+1Ch] [bp-3Ch]@1
  _DWORD *v36; // [sp+20h] [bp-38h]@1
  void (*v37)(void); // [sp+28h] [bp-30h]@1
  int (__fastcall *v38)(int, int **); // [sp+2Ch] [bp-2Ch]@1

  v12 = a1;
  v13 = a4;
  v14 = a3;
  v15 = a2;
  *a1 = &off_26E8ABC;
  v16 = operator new(4u);
  v36 = v16;
  v38 = sub_1434BFC;
  *v16 = v12;
  v17 = *(_QWORD *)v14;
  v18 = *(_DWORD *)(v14 + 8);
  *(_DWORD *)(v14 + 8) = 0;
  v19 = *(_DWORD *)(v14 + 12);
  sub_21E94B4((void **)&v32, (const char *)&unk_257BC67);
  v20 = (int)(v12 + 13);
  v37 = 0;
  *(_QWORD *)(v12 + 1) = *(_QWORD *)&v36;
  v12[3] = sub_1434C14;
  v12[4] = sub_1434BFC;
  v12[5] = 0;
  v12[6] = 0;
  v12[7] = &unk_28898CC;
  v21 = *((_QWORD *)v12 + 4);
  *v12 = &off_26E8AA0;
  v33 = v21;
  *((_QWORD *)v12 + 4) = v17;
  v34 = 0;
  v12[10] = v18;
  v35 = v12[11];
  v12[11] = v19;
  *((_WORD *)v12 + 24) = a5;
  *((_BYTE *)v12 + 50) = 0;
  HIDWORD(v21) = *(_DWORD *)(a6 + 4);
  v22 = *(_DWORD *)(a6 + 8);
  v23 = *(_DWORD *)(a6 + 12);
  *(_DWORD *)v20 = *(_DWORD *)a6;
  *(_DWORD *)(v20 + 4) = HIDWORD(v21);
  *(_DWORD *)(v20 + 8) = v22;
  *(_DWORD *)(v20 + 12) = v23;
  v24 = *(_DWORD *)(a6 + 16);
  HIDWORD(v21) = *(_DWORD *)(a6 + 20);
  v25 = *(_DWORD *)(a6 + 24);
  v12[20] = *(_DWORD *)(a6 + 28);
  v12[19] = v25;
  v12[18] = HIDWORD(v21);
  v12[17] = v24;
  v12[21] = a7;
  v12[22] = a8;
  v12[23] = a9;
  v12[24] = a10;
  *((_BYTE *)v12 + 100) = a11;
  *((_BYTE *)v12 + 101) = 0;
  v12[26] = a12;
  v12[27] = 0;
  *((_BYTE *)v12 + 112) = 0;
  sub_21E8AF4(v12 + 29, &v32);
  v12[30] = 1065353216;
  v26 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
  {
    v30 = (unsigned int *)(v32 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
    }
    else
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  }
  if ( v34 )
    v34();
  if ( v37 )
    v37();
  *v12 = &off_26E8ABC;
  v12[33] = 0;
  v27 = *(_QWORD *)v15;
  *(_QWORD *)v15 = *(_QWORD *)(v12 + 31);
  *(_QWORD *)(v12 + 31) = v27;
  LODWORD(v27) = *(_DWORD *)(v15 + 8);
  *(_DWORD *)(v15 + 8) = v12[33];
  v12[33] = v27;
  LODWORD(v27) = *(_DWORD *)(v15 + 12);
  *(_DWORD *)(v15 + 12) = v12[34];
  v12[34] = v27;
  v12[37] = 0;
  v28 = *(_QWORD *)v13;
  *(_QWORD *)v13 = *(_QWORD *)(v12 + 35);
  *(_QWORD *)(v12 + 35) = v28;
  LODWORD(v28) = *(_DWORD *)(v13 + 8);
  *(_DWORD *)(v13 + 8) = v12[37];
  v12[37] = v28;
  LODWORD(v28) = *(_DWORD *)(v13 + 12);
  *(_DWORD *)(v13 + 12) = v12[38];
  v12[38] = v28;
  v12[39] = 0;
  v12[40] = 0;
  RectangleArea::RectangleArea((RectangleArea *)(v12 + 41));
  return v12;
}


void __fastcall TouchTextButtonControl::~TouchTextButtonControl(TouchTextButtonControl *this)
{
  TouchTextButtonControl *v1; // r0@1

  v1 = TouchTextButtonControl::~TouchTextButtonControl(this);
  j_j_j__ZdlPv_5((void *)v1);
}


TouchTextButtonControl *__fastcall TouchTextButtonControl::~TouchTextButtonControl(TouchTextButtonControl *this)
{
  TouchTextButtonControl *v1; // r4@1
  void (*v2)(void); // r3@1
  void (*v3)(void); // r3@3
  int v4; // r1@5
  void *v5; // r0@5
  void (*v6)(void); // r3@6
  int v7; // r1@8
  void *v8; // r0@8
  void (*v9)(void); // r3@9
  unsigned int *v11; // r12@12
  signed int v12; // r1@14
  unsigned int *v13; // r12@16
  signed int v14; // r1@18

  v1 = this;
  *(_DWORD *)this = &off_26E8ABC;
  v2 = (void (*)(void))*((_DWORD *)this + 37);
  if ( v2 )
    v2();
  v3 = (void (*)(void))*((_DWORD *)v1 + 33);
  if ( v3 )
    v3();
  *(_DWORD *)v1 = &off_26E8AA0;
  v4 = *((_DWORD *)v1 + 29);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v4 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void (*)(void))*((_DWORD *)v1 + 10);
  if ( v6 )
    v6();
  *(_DWORD *)v1 = &off_26E8A84;
  v7 = *((_DWORD *)v1 + 7);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v7 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void (*)(void))*((_DWORD *)v1 + 3);
  if ( v9 )
    v9();
  return v1;
}


void __fastcall TouchTextButtonControl::render(TouchTextButtonControl *this, InputRenderContext *a2)
{
  TouchTextButtonControl::render(this, a2);
}


void __fastcall TouchTextButtonControl::~TouchTextButtonControl(TouchTextButtonControl *this)
{
  TouchTextButtonControl::~TouchTextButtonControl(this);
}


void __fastcall TouchTextButtonControl::render(TouchTextButtonControl *this, InputRenderContext *a2)
{
  char *v3; // r8@1
  InputRenderContext *v4; // r9@1
  char *v5; // r1@4
  _DWORD *v6; // r0@6
  size_t v7; // r2@6
  void (__fastcall *v12)(InputRenderContext *, signed int *); // r2@15
  void *v13; // r0@15
  char *v14; // r0@17
  unsigned int *v15; // r2@19
  signed int v16; // r1@21
  unsigned int *v17; // r2@27
  signed int v18; // r1@29
  signed int v19; // [sp+0h] [bp-58h]@15
  signed int v20; // [sp+4h] [bp-54h]@15
  int v21; // [sp+8h] [bp-50h]@15
  int v22; // [sp+Ch] [bp-4Ch]@15
  int v23; // [sp+10h] [bp-48h]@15
  char v24; // [sp+14h] [bp-44h]@11
  float v25; // [sp+24h] [bp-34h]@6
  float v26; // [sp+28h] [bp-30h]@10
  void *s2; // [sp+30h] [bp-28h]@2

  _R5 = this;
  v3 = (char *)this + 140;
  v4 = a2;
  if ( *((_DWORD *)this + 37) )
    (*((void (__fastcall **)(_DWORD, _DWORD))this + 38))(&s2, v3);
  else
    sub_21E94B4(&s2, (const char *)&unk_257BC67);
  v5 = (char *)s2;
  if ( *((_DWORD *)s2 - 3) )
  {
    if ( *((_DWORD *)_R5 + 33) )
    {
      (*((void (__fastcall **)(_DWORD, _DWORD))_R5 + 34))(&v25, (char *)_R5 + 124);
      v6 = (_DWORD *)*((_DWORD *)_R5 + 7);
      v7 = *(v6 - 3);
      if ( v7 != *((_DWORD *)s2 - 3) )
        goto LABEL_38;
      if ( memcmp(v6, s2, v7) )
      __asm
      {
        VLDR            S0, [SP,#0x58+var_34]
        VLDR            S2, [R5,#0x9C]
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !_ZF )
        VLDR            S0, [SP,#0x58+var_30]
        VLDR            S2, [R5,#0xA0]
LABEL_38:
        *((float *)_R5 + 39) = v25;
        *((float *)_R5 + 40) = v26;
        EntityInteraction::setInteractText((int *)_R5 + 7, (int *)&s2);
        (*(void (__fastcall **)(char *, InputRenderContext *, char *, void **))(*(_DWORD *)v4 + 16))(
          &v24,
          v4,
          (char *)_R5 + 156,
          &s2);
        RectangleArea::operator=((int)_R5 + 164, (int)&v24);
      TouchGlyphButtonControl::render(_R5, v4);
      if ( !*((_DWORD *)_R5 + 10) || (*((int (__fastcall **)(_DWORD))_R5 + 11))((char *)_R5 + 32) != 1 )
        goto LABEL_16;
      if ( *((_DWORD *)_R5 + 37) )
        (*((void (__fastcall **)(_DWORD, _DWORD))_R5 + 38))(&v23, v3);
        v12 = *(void (__fastcall **)(InputRenderContext *, signed int *))(*(_DWORD *)v4 + 8);
        v19 = 1065353216;
        v20 = 1065353216;
        v21 = 1065353216;
        v22 = 1061997774;
        v12(v4, &v19);
        (*(void (__fastcall **)(InputRenderContext *, char *, void **))(*(_DWORD *)v4 + 20))(v4, (char *)_R5 + 164, &s2);
        v13 = (void *)(v23 - 12);
        if ( (int *)(v23 - 12) != &dword_28898C0 )
        {
          v17 = (unsigned int *)(v23 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
          }
          else
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j__ZdlPv_9(v13);
        }
LABEL_16:
        v5 = (char *)s2;
        goto LABEL_17;
    }
    sub_21E5F48();
  }
LABEL_17:
  v14 = v5 - 12;
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v5 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
}
