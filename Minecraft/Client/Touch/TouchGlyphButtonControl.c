

int __fastcall TouchGlyphButtonControl::release(int result, InputEventQueue *a2)
{
  if ( *(_BYTE *)(result + 50) == 1 )
    result = InputEventQueue::enqueueButton((int)a2, *(_WORD *)(result + 48), 0, 0, 2, -1, 0);
  return result;
}


TouchGlyphButtonControl *__fastcall TouchGlyphButtonControl::~TouchGlyphButtonControl(TouchGlyphButtonControl *this)
{
  TouchGlyphButtonControl *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void (*v4)(void); // r3@2
  int v5; // r1@4
  void *v6; // r0@4
  void (*v7)(void); // r3@5
  unsigned int *v9; // r12@8
  signed int v10; // r1@10
  unsigned int *v11; // r12@12
  signed int v12; // r1@14

  v1 = this;
  *(_DWORD *)this = &off_26E8AA0;
  v2 = *((_DWORD *)this + 29);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void (*)(void))*((_DWORD *)v1 + 10);
  if ( v4 )
    v4();
  *(_DWORD *)v1 = &off_26E8A84;
  v5 = *((_DWORD *)v1 + 7);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v5 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void (*)(void))*((_DWORD *)v1 + 3);
  if ( v7 )
    v7();
  return v1;
}


void __fastcall TouchGlyphButtonControl::~TouchGlyphButtonControl(TouchGlyphButtonControl *this)
{
  TouchGlyphButtonControl *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  void (*v4)(void); // r3@2
  int v5; // r1@4
  void *v6; // r0@4
  void (*v7)(void); // r3@5
  unsigned int *v8; // r12@8
  signed int v9; // r1@10
  unsigned int *v10; // r12@12
  signed int v11; // r1@14

  v1 = this;
  *(_DWORD *)this = &off_26E8AA0;
  v2 = *((_DWORD *)this + 29);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void (*)(void))*((_DWORD *)v1 + 10);
  if ( v4 )
    v4();
  *(_DWORD *)v1 = &off_26E8A84;
  v5 = *((_DWORD *)v1 + 7);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v5 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = (void (*)(void))*((_DWORD *)v1 + 3);
  if ( v7 )
    v7();
  operator delete((void *)v1);
}


void __fastcall TouchGlyphButtonControl::~TouchGlyphButtonControl(TouchGlyphButtonControl *this)
{
  TouchGlyphButtonControl::~TouchGlyphButtonControl(this);
}


int __fastcall TouchGlyphButtonControl::tick(__int64 this, TouchPointResults *a2, int a3)
{
  int v3; // r5@1
  __int64 *v4; // r6@1
  int v5; // r9@1
  int v6; // r8@3
  signed int v7; // r0@5
  signed int *v8; // r7@9
  int v9; // r4@9
  int v10; // r11@11
  __int64 v11; // kr00_8@18
  signed int v12; // r0@19
  signed int v13; // r0@27
  int v14; // r4@34
  signed int *v15; // r7@34
  int v16; // r10@36
  __int64 v17; // kr08_8@42
  signed int v18; // r0@43
  signed int v19; // r0@50
  int v20; // r2@56
  char v22; // [sp+Ch] [bp-34h]@4

  v3 = this;
  v4 = (__int64 *)a2;
  LODWORD(this) = *(_DWORD *)(this + 40);
  v5 = HIDWORD(this);
  if ( (_DWORD)this )
  {
    LODWORD(this) = (*(int (__fastcall **)(int))(v3 + 44))(v3 + 32);
    if ( (_DWORD)this == 1 )
    {
      v6 = *(_BYTE *)(v3 + 50);
      *(_BYTE *)(v3 + 50) = 0;
      if ( !*(_DWORD *)(v3 + 12) )
        sub_21E5F48();
      (*(void (__fastcall **)(char *, int))(v3 + 16))(&v22, v3 + 4);
      if ( *(_BYTE *)(v3 + 112) )
      {
        v7 = *(_DWORD *)(v3 + 108);
        *(_DWORD *)(v3 + 108) = v7 + 1;
        if ( v7 >= 20 )
          *(_BYTE *)(v3 + 112) = 0;
      }
      this = *v4;
      if ( (_DWORD)this != HIDWORD(this) )
        if ( v6 == 1 )
        {
          v8 = (signed int *)(this + 20);
          v9 = -HIDWORD(this);
          while ( *((_BYTE *)v8 - 4) )
          {
LABEL_32:
            v8 += 6;
            LODWORD(this) = (char *)v8 + v9;
            if ( (signed int *)((char *)v8 + v9) == (signed int *)20 )
              goto LABEL_56;
          }
          v10 = *(_DWORD *)(v3 + 104);
          if ( v10 == 4 )
            if ( RectangleArea::isInside(
                   (RectangleArea *)&v22,
                   COERCE_FLOAT(*(_QWORD *)(v8 - 3)),
                   COERCE_FLOAT(*(_QWORD *)(v8 - 3) >> 32)) != 1 )
              goto LABEL_32;
            if ( !*(v8 - 4) )
            {
              if ( *(_BYTE *)(v3 + 112) )
              {
                if ( *v8 == 2 || *(_BYTE *)(v3 + 101) )
                {
                  *(_BYTE *)(v3 + 50) = 1;
                  *(_BYTE *)(v3 + 112) = 0;
                }
              }
              else
                *(_BYTE *)(v3 + 112) = 1;
                *(_DWORD *)(v3 + 108) = 0;
            }
            if ( *(_BYTE *)(v3 + 100) )
          else
            v11 = *((_QWORD *)v8 - 2);
            if ( RectangleArea::isInside((RectangleArea *)&v22, *((float *)&v11 + 1), *((float *)v8 - 2)) != 1 )
            v12 = 1;
            if ( !(_DWORD)v11 )
              v12 = 2;
            if ( v12 & v10 && (*v8 == 2 || *(_BYTE *)(v3 + 101)) )
              *(_BYTE *)(v3 + 50) = 1;
            if ( *(_DWORD *)(v3 + 104) == 2 )
              v13 = 1;
LABEL_31:
              *v8 = v13;
          v13 = 0;
          goto LABEL_31;
        }
        v14 = -HIDWORD(this);
        v15 = (signed int *)(this + 20);
        while ( *((_BYTE *)v15 - 4) )
LABEL_55:
          v15 += 6;
          LODWORD(this) = (char *)v15 + v14;
          if ( (signed int *)((char *)v15 + v14) == (signed int *)20 )
            goto LABEL_56;
        v16 = *(_DWORD *)(v3 + 104);
        if ( v16 == 4 )
          if ( RectangleArea::isInside(
                 (RectangleArea *)&v22,
                 COERCE_FLOAT(*(_QWORD *)(v15 - 3)),
                 COERCE_FLOAT(*(_QWORD *)(v15 - 3) >> 32)) != 1 )
            goto LABEL_55;
          if ( !*(v15 - 4) )
            if ( *(_BYTE *)(v3 + 112) )
              if ( *v15 == 2 )
                *(_BYTE *)(v3 + 50) = 1;
                *(_BYTE *)(v3 + 112) = 0;
            else
              *(_BYTE *)(v3 + 112) = 1;
              *(_DWORD *)(v3 + 108) = 0;
          if ( *(_BYTE *)(v3 + 100) )
        else
          v17 = *((_QWORD *)v15 - 2);
          if ( RectangleArea::isInside((RectangleArea *)&v22, *((float *)&v17 + 1), *((float *)v15 - 2)) != 1 )
          v18 = 1;
          if ( !(_DWORD)v17 )
            v18 = 2;
          if ( v18 & v16 && *v15 == 2 )
            *(_BYTE *)(v3 + 50) = 1;
          if ( *(_DWORD *)(v3 + 104) == 2 )
            v19 = 1;
LABEL_54:
            *v15 = v19;
        v19 = 0;
        goto LABEL_54;
LABEL_56:
      v20 = *(_BYTE *)(v3 + 50);
      if ( v20 != v6 )
        LODWORD(this) = InputEventQueue::enqueueButton(v5, *(_WORD *)(v3 + 48), v20, 0, 2, -1, 0);
    }
  }
  return this;
}


int __fastcall TouchGlyphButtonControl::TouchGlyphButtonControl(int a1, int a2, int a3, int a4, int a5, int a6, int a7, float a8, int a9, int a10, int a11, int a12, int *a13, char a14)
{
  int v14; // r4@1
  int v15; // r5@1
  int v16; // r6@1
  int v17; // r7@1
  int v18; // lr@1
  int v19; // r1@1
  int v20; // r12@1
  __int64 v21; // r0@1
  __int64 v22; // kr00_8@1
  int v23; // r2@1
  int v24; // r3@1
  __int64 v25; // r0@1
  int v26; // r2@1
  int result; // r0@1

  v14 = a1;
  v15 = *(_DWORD *)a2;
  v16 = *(_DWORD *)(a2 + 4);
  v17 = *(_DWORD *)(a2 + 8);
  v18 = a1 + 4;
  *(_DWORD *)(a2 + 8) = 0;
  v19 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)v18 = v15;
  *(_DWORD *)(v18 + 4) = v16;
  *(_DWORD *)(v18 + 8) = v17;
  *(_DWORD *)(a1 + 16) = v19;
  *(_DWORD *)(a1 + 20) = 0;
  v20 = a1 + 52;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = &unk_28898CC;
  v21 = *(_QWORD *)(a1 + 32);
  *(_DWORD *)v14 = &off_26E8AA0;
  *(_DWORD *)(v14 + 40) = 0;
  v22 = *(_QWORD *)a3;
  *(_QWORD *)a3 = v21;
  *(_QWORD *)(v14 + 32) = v22;
  LODWORD(v21) = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(a3 + 8) = *(_DWORD *)(v14 + 40);
  *(_DWORD *)(v14 + 40) = v21;
  LODWORD(v21) = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(a3 + 12) = *(_DWORD *)(v14 + 44);
  *(_DWORD *)(v14 + 44) = v21;
  *(_WORD *)(v14 + 48) = a4;
  *(_BYTE *)(v14 + 50) = 0;
  HIDWORD(v21) = *(_DWORD *)(a5 + 4);
  v23 = *(_DWORD *)(a5 + 8);
  v24 = *(_DWORD *)(a5 + 12);
  *(_DWORD *)v20 = *(_DWORD *)a5;
  *(_DWORD *)(v20 + 4) = HIDWORD(v21);
  *(_DWORD *)(v20 + 8) = v23;
  *(_DWORD *)(v20 + 12) = v24;
  v25 = *(_QWORD *)(a5 + 16);
  v26 = *(_DWORD *)(a5 + 24);
  *(_DWORD *)(v14 + 80) = *(_DWORD *)(a5 + 28);
  *(_DWORD *)(v14 + 76) = v26;
  *(_QWORD *)(v14 + 68) = v25;
  *(_QWORD *)(v14 + 84) = __PAIR__(a7, a6);
  *(float *)(v14 + 92) = a8;
  *(_DWORD *)(v14 + 96) = a9;
  *(_BYTE *)(v14 + 100) = a10;
  *(_BYTE *)(v14 + 101) = a14;
  *(_DWORD *)(v14 + 104) = a11;
  *(_DWORD *)(v14 + 108) = 0;
  *(_BYTE *)(v14 + 112) = 0;
  sub_21E8AF4((int *)(v14 + 116), a13);
  __asm { VLDR            S0, [SP,#0x18+arg_1C] }
  result = v14;
  __asm { VSTR            S0, [R4,#0x78] }
  return result;
}


signed int __fastcall TouchGlyphButtonControl::render(TouchGlyphButtonControl *this, InputRenderContext *a2)
{
  TouchGlyphButtonControl *v2; // r5@1
  InputRenderContext *v3; // r4@1
  signed int result; // r0@1
  int v5; // r1@6
  int (__fastcall *v6)(InputRenderContext *, char *, _DWORD, _DWORD); // r7@8
  __int64 v7; // ST00_8@8
  char v8; // [sp+Ch] [bp-34h]@8
  char v9; // [sp+1Ch] [bp-24h]@5

  v2 = this;
  v3 = a2;
  result = *((_DWORD *)this + 10);
  if ( result )
  {
    result = (*((int (__fastcall **)(_DWORD))v2 + 11))((char *)v2 + 32);
    if ( result == 1 )
    {
      result = *((_DWORD *)v2 + 23);
      if ( result )
      {
        if ( !*((_DWORD *)v2 + 3) )
          sub_21E5F48();
        (*((void (__fastcall **)(_DWORD, _DWORD))v2 + 4))(&v9, (char *)v2 + 4);
        result = RectangleArea::isEmpty((RectangleArea *)&v9);
        if ( !result )
        {
          v5 = (int)v2 + 68;
          if ( *((_BYTE *)v2 + 50) == 1 )
            v5 = (int)v2 + 52;
          (*(void (__fastcall **)(InputRenderContext *, int))(*(_DWORD *)v3 + 8))(v3, v5);
          v6 = *(int (__fastcall **)(InputRenderContext *, char *, _DWORD, _DWORD))(*(_DWORD *)v3 + 12);
          RectangleArea::scale((RectangleArea *)&v8, COERCE_FLOAT(&v9), *((_DWORD *)v2 + 30));
          v7 = *(_QWORD *)((char *)v2 + 92);
          result = v6(v3, &v8, *(_QWORD *)((char *)v2 + 84), *(_QWORD *)((char *)v2 + 84) >> 32);
        }
      }
    }
  }
  return result;
}
