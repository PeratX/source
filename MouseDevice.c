

int __fastcall MouseDevice::isButtonDown(MouseDevice *this, int a2)
{
  int result; // r0@2

  if ( (unsigned int)(a2 - 1) <= 3 )
    result = *((_BYTE *)this + a2 + 16) != 0;
  else
    result = 0;
  return result;
}


int __fastcall MouseDevice::getEventButtonState(MouseDevice *this)
{
  int result; // r0@1

  result = *(_BYTE *)(*((_DWORD *)this + 6) + 20 * *(_DWORD *)this + 9);
  if ( result != 1 )
    result = 0;
  return result;
}


signed int __fastcall MouseDevice::next(MouseDevice *this)
{
  int v1; // r1@1
  signed int result; // r0@2

  v1 = *(_DWORD *)this + 1;
  if ( v1 < -858993459 * ((signed int)((*((_QWORD *)this + 3) >> 32) - *((_QWORD *)this + 3)) >> 2) )
  {
    *(_DWORD *)this = v1;
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall MouseDevice::rewind(int result)
{
  *(_DWORD *)result = -1;
  return result;
}


int __fastcall MouseDevice::getDY(MouseDevice *this)
{
  int v1; // r1@1

  v1 = *((_WORD *)this + 5);
  if ( v1 == -9999 )
    LOWORD(v1) = *((_WORD *)this + 3) - *((_WORD *)this + 7);
  return (signed __int16)v1;
}


MouseDevice *__fastcall MouseDevice::~MouseDevice(MouseDevice *this)
{
  MouseDevice *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 6);
  if ( v2 )
    operator delete(v2);
  return v1;
}


int __fastcall MouseDevice::reset(int result)
{
  *(_DWORD *)result = -1;
  *(_DWORD *)(result + 28) = *(_DWORD *)(result + 24);
  *(_BYTE *)(result + 20) = 0;
  return result;
}


int __fastcall MouseDevice::getEvent(MouseDevice *this)
{
  return *((_DWORD *)this + 6) + 20 * *(_DWORD *)this;
}


int __fastcall MouseDevice::getButtonState(MouseDevice *this, int a2)
{
  int result; // r0@2

  if ( (unsigned int)(a2 - 1) <= 3 )
    result = *((_BYTE *)this + a2 + 16);
  else
    result = 0;
  return result;
}


int __fastcall MouseDevice::MouseDevice(int result)
{
  *(_DWORD *)result = -1;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = -655238927;
  *(_BYTE *)(result + 20) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  return result;
}


int __fastcall MouseDevice::reset2(int result)
{
  int v1; // r1@1

  v1 = *(_DWORD *)(result + 4);
  *(_WORD *)(result + 12) = v1;
  *(_WORD *)(result + 14) = HIWORD(v1);
  *(_DWORD *)(result + 8) = -655238927;
  return result;
}


int __fastcall MouseDevice::wasFirstMovement(MouseDevice *this)
{
  int result; // r0@1

  result = *((_DWORD *)this + 9);
  if ( result != 1 )
    result = 0;
  return result;
}


int __fastcall MouseDevice::getDX(MouseDevice *this)
{
  int v1; // r1@1

  v1 = *((_WORD *)this + 4);
  if ( v1 == -9999 )
    LOWORD(v1) = *((_WORD *)this + 2) - *((_WORD *)this + 6);
  return (signed __int16)v1;
}


MouseDevice *__fastcall MouseDevice::feed(MouseDevice *this, int a2, char a3, __int16 a4, __int16 a5, __int16 a6, __int16 a7, bool a8)
{
  MouseDevice *v8; // r9@1
  char v9; // r7@1
  int v10; // r8@1
  __int16 v11; // r4@1
  __int16 v12; // r6@1
  __int64 v13; // r0@1
  __int64 v14; // r10@2
  bool v15; // zf@3
  signed int v16; // r0@3
  signed int v17; // r0@3
  unsigned int v18; // r2@3
  unsigned int v19; // r1@5
  unsigned int v20; // r0@5
  bool v21; // cf@7
  int v22; // r4@10
  _BYTE *v23; // r0@10
  _BYTE *v24; // r12@10
  int v25; // r2@10
  __int16 v26; // r11@11
  int v27; // r7@11
  _DWORD *v28; // lr@12
  int v29; // r2@12
  int v30; // r3@12
  int v31; // r4@12
  int v32; // r5@12
  int v33; // r6@12
  int v34; // r0@17
  unsigned int v35; // r5@20
  unsigned int v36; // r0@22
  __int16 v37; // r3@22
  __int16 v38; // r7@22
  __int16 v39; // r1@22
  unsigned int v40; // r0@23
  signed int v41; // r0@25
  int v42; // r0@26
  unsigned int v43; // r2@26
  unsigned int v44; // r1@28
  unsigned int v45; // r0@28
  int v46; // r6@33
  int v47; // r11@33
  _BYTE *v48; // r0@33
  _BYTE *v49; // r12@33
  int v50; // r2@33
  int v51; // r7@34
  _DWORD *v52; // lr@35
  int v53; // r2@35
  int v54; // r3@35
  int v55; // r4@35
  int v56; // r5@35
  int v57; // r6@35
  signed int v58; // r1@41
  int v59; // r0@45
  MouseDevice *result; // r0@46
  unsigned int v61; // r0@50
  int v62; // [sp+4h] [bp-3Ch]@34
  int v63; // [sp+8h] [bp-38h]@11
  char v64; // [sp+Ch] [bp-34h]@10
  char v65; // [sp+Ch] [bp-34h]@26
  __int16 v66; // [sp+10h] [bp-30h]@2
  __int16 v67; // [sp+14h] [bp-2Ch]@0
  char v68; // [sp+16h] [bp-2Ah]@0
  __int16 v69; // [sp+17h] [bp-29h]@0
  char v70; // [sp+19h] [bp-27h]@0
  __int16 v71; // [sp+1Ah] [bp-26h]@0

  v8 = this;
  v9 = a3;
  v10 = a2;
  v11 = a6;
  v12 = a4;
  v13 = *(_QWORD *)((char *)this + 28);
  if ( (_DWORD)v13 == HIDWORD(v13) )
  {
    v16 = v13 - *((_DWORD *)v8 + 6);
    v15 = v16 == 0;
    v17 = v16 >> 2;
    v18 = -858993459 * v17;
    if ( v15 )
      v18 = 1;
    v20 = v18 + -858993459 * v17;
    v19 = v20;
    if ( v20 > 0xCCCCCCC )
      v20 = 214748364;
    v21 = v19 >= v18;
    LOWORD(v19) = -13107;
    if ( !v21 )
    HIWORD(v19) = 3276;
    if ( v20 >= v19 )
      goto LABEL_52;
    v22 = 5 * v20;
    LODWORD(v14) = operator new(20 * v20);
    v24 = (_BYTE *)(*((_QWORD *)v8 + 3) >> 32);
    v23 = (_BYTE *)*((_QWORD *)v8 + 3);
    v64 = v9;
    *(_WORD *)(v14 + v24 - v23) = v12;
    v25 = v24 - v23 + v14;
    *(_WORD *)(v25 + 2) = a5;
    *(_WORD *)(v25 + 4) = a6;
    *(_WORD *)(v25 + 6) = a7;
    *(_BYTE *)(v25 + 8) = v10;
    *(_BYTE *)(v25 + 9) = v9;
    *(_DWORD *)(v25 + 12) = 0;
    *(_BYTE *)(v25 + 16) = a8;
    *(_BYTE *)(v25 + 19) = v68;
    *(_WORD *)(v25 + 17) = v67;
    if ( v24 == v23 )
    {
      v66 = v12;
      v27 = v14;
    }
    else
      WORD2(v14) = v12;
      v63 = v22;
      do
      {
        v28 = v23;
        v29 = v27;
        v23 += 20;
        v27 += 20;
        v30 = v28[1];
        v31 = v28[2];
        v32 = v28[3];
        v33 = v28[4];
        *(_DWORD *)v29 = *v28;
        *(_DWORD *)(v29 + 4) = v30;
        *(_DWORD *)(v29 + 8) = v31;
        *(_DWORD *)(v29 + 12) = v32;
        *(_DWORD *)(v29 + 16) = v33;
      }
      while ( v24 != v23 );
      v23 = (_BYTE *)*((_DWORD *)v8 + 6);
      v22 = v63;
      v66 = v26;
    HIDWORD(v14) = v27 + 20;
    if ( v23 )
      operator delete(v23);
    *((_QWORD *)v8 + 3) = v14;
    v34 = v14 + 4 * v22;
    v9 = v64;
    v11 = a6;
    *((_DWORD *)v8 + 8) = v34;
  }
  else
    *(_WORD *)v13 = a4;
    *(_WORD *)(v13 + 2) = a5;
    *(_WORD *)(v13 + 4) = a6;
    *(_WORD *)(v13 + 6) = a7;
    *(_BYTE *)(v13 + 8) = v10;
    *(_BYTE *)(v13 + 9) = a3;
    *(_DWORD *)(v13 + 12) = 0;
    *(_BYTE *)(v13 + 16) = a8;
    *(_BYTE *)(v13 + 19) = v68;
    *(_WORD *)(v13 + 17) = v67;
    v66 = a4;
    HIDWORD(v14) = *((_DWORD *)v8 + 7) + 20;
    *((_DWORD *)v8 + 7) = HIDWORD(v14);
  if ( !v10 )
    v36 = *((_DWORD *)v8 + 2);
    v37 = v66;
    v38 = a5;
    v39 = v36;
    if ( (unsigned __int16)v36 == 55537 )
      LOWORD(v40) = 0;
      v39 = 0;
      *((_DWORD *)v8 + 2) = 0;
      v40 = v36 >> 16;
    *((_WORD *)v8 + 4) = v39 + v11;
    *((_WORD *)v8 + 5) = v40 + a7;
    v41 = *((_DWORD *)v8 + 9) == -1;
    goto LABEL_49;
  if ( v10 == 4 )
    LODWORD(v14) = *((_DWORD *)v8 + 3);
    v35 = (unsigned int)v14 >> 16;
    if ( HIDWORD(v14) != *((_DWORD *)v8 + 8) )
      *(_WORD *)HIDWORD(v14) = v14;
      *(_WORD *)(HIDWORD(v14) + 2) = WORD1(v14);
      *(_WORD *)(HIDWORD(v14) + 8) = 0;
      *(_DWORD *)(HIDWORD(v14) + 4) = 0;
      *(_WORD *)(HIDWORD(v14) + 10) = v71;
      *(_DWORD *)(HIDWORD(v14) + 12) = 0;
      *(_BYTE *)(HIDWORD(v14) + 16) = 1;
      *(_BYTE *)(HIDWORD(v14) + 19) = v70;
      *(_WORD *)(HIDWORD(v14) + 17) = v69;
      *((_DWORD *)v8 + 7) += 20;
LABEL_41:
      v58 = 0;
      if ( *((_WORD *)v8 + 4) == 55537 )
        *((_DWORD *)v8 + 2) = 0;
      if ( *((_DWORD *)v8 + 9) == -1 )
        v58 = 1;
      *((_DWORD *)v8 + 9) = v58;
      v59 = *((_DWORD *)v8 + 1);
      *((_WORD *)v8 + 6) = v59;
      *((_WORD *)v8 + 7) = HIWORD(v59);
      *((_WORD *)v8 + 2) = v14;
      *((_WORD *)v8 + 3) = v35;
      goto LABEL_46;
    v65 = v9;
    v42 = (HIDWORD(v14) - *((_DWORD *)v8 + 6)) >> 2;
    v43 = -858993459 * v42;
    if ( HIDWORD(v14) == *((_DWORD *)v8 + 6) )
      v43 = 1;
    v45 = v43 + -858993459 * v42;
    v44 = v45;
    if ( v45 > 0xCCCCCCC )
      v45 = 214748364;
    v21 = v44 >= v43;
    LOWORD(v44) = -13107;
    HIWORD(v44) = 3276;
    if ( v45 < v44 )
      v46 = 5 * v45;
      HIDWORD(v14) = operator new(20 * v45);
      v49 = (_BYTE *)(*((_QWORD *)v8 + 3) >> 32);
      v48 = (_BYTE *)*((_QWORD *)v8 + 3);
      *(_WORD *)(HIDWORD(v14) + v49 - v48) = v14;
      v50 = v49 - v48 + HIDWORD(v14);
      *(_WORD *)(v50 + 2) = WORD1(v14);
      *(_WORD *)(v50 + 8) = 0;
      *(_DWORD *)(v50 + 4) = 0;
      *(_DWORD *)(v50 + 12) = 0;
      *(_BYTE *)(v50 + 16) = 1;
      *(_BYTE *)(v50 + 19) = v70;
      *(_WORD *)(v50 + 17) = v69;
      if ( v49 == v48 )
        v51 = v47;
      else
        v62 = v46;
        do
        {
          v52 = v48;
          v53 = v51;
          v48 += 20;
          v51 += 20;
          v54 = v52[1];
          v55 = v52[2];
          v56 = v52[3];
          v57 = v52[4];
          *(_DWORD *)v53 = *v52;
          *(_DWORD *)(v53 + 4) = v54;
          *(_DWORD *)(v53 + 8) = v55;
          *(_DWORD *)(v53 + 12) = v56;
          *(_DWORD *)(v53 + 16) = v57;
        }
        while ( v49 != v48 );
        v48 = (_BYTE *)*((_DWORD *)v8 + 6);
        v35 = (unsigned int)v14 >> 16;
        v46 = v62;
      if ( v48 )
        operator delete(v48);
      *((_DWORD *)v8 + 6) = v47;
      *((_DWORD *)v8 + 7) = v51 + 20;
      v9 = v65;
      *((_DWORD *)v8 + 8) = v47 + 4 * v46;
      goto LABEL_41;
LABEL_52:
    sub_21E57F4();
LABEL_46:
  result = (MouseDevice *)((char *)v8 + v10);
  *((_BYTE *)v8 + v10 + 16) = v9;
    return result;
  v37 = v66;
  v38 = a5;
  if ( v10 == 1 )
    v41 = -1;
LABEL_49:
    *((_DWORD *)v8 + 9) = v41;
  v61 = *((_DWORD *)v8 + 1);
  *((_WORD *)v8 + 6) = v61;
  result = (MouseDevice *)(v61 >> 16);
  *((_WORD *)v8 + 7) = (_WORD)result;
  *((_WORD *)v8 + 2) = v37;
  *((_WORD *)v8 + 3) = v38;
  return result;
}
