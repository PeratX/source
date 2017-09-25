

signed int __fastcall ImageUtils::scaleImage(ImageUtils *this, mce::TextureContainer *a2, unsigned int a3, unsigned int a4)
{
  mce::ImageBuffer *v4; // r6@1
  unsigned int v5; // r5@1
  ImageUtils *v6; // r4@1
  ImageUtils *v7; // r0@1
  unsigned int v8; // r3@1
  signed int v9; // r5@1

  v4 = a2;
  v5 = a3;
  v6 = this;
  v7 = (ImageUtils *)mce::TextureContainer::getImage(this, 0);
  v9 = ImageUtils::scaleImage(v7, v4, v5, v8);
  if ( v9 == 1 )
    mce::TextureContainer::updateDescriptionFromImage(v6);
  return v9;
}


signed int __fastcall ImageUtils::loadImageFromMemory(ImageUtils *this, mce::ImageBuffer *a2, signed __int8 *a3, int a4)
{
  int v4; // r8@0
  mce::ImageBuffer *v5; // r9@1
  const char *v6; // r6@1
  int v7; // r7@4
  bool v8; // nf@4
  unsigned __int8 v9; // vf@4
  int v10; // r4@7
  const char *v11; // r5@7
  int v12; // r3@7
  int v13; // r0@8
  const char *v14; // r9@8
  char *v15; // r10@8
  int v16; // r1@9
  char *v17; // r6@9
  char *v18; // r2@9
  char v19; // r12@10
  int v20; // r5@13
  signed int v21; // r4@16
  int v22; // r3@16
  unsigned int v23; // r0@18
  char *v24; // r4@19
  unsigned int v25; // r0@19
  const void **v26; // r0@19
  const void **v27; // r0@19
  char *v28; // r4@19
  char *v29; // r0@19
  void *v30; // r0@20
  unsigned int *v32; // r2@26
  signed int v33; // r1@28
  unsigned int *v34; // r2@30
  signed int v35; // r1@32
  unsigned int *v36; // r2@34
  signed int v37; // r1@36
  int v38; // [sp+Ch] [bp-10Ch]@7
  const char *v39; // [sp+10h] [bp-108h]@7
  mce::ImageBuffer *v40; // [sp+14h] [bp-104h]@7
  int v41; // [sp+18h] [bp-100h]@7
  int v42; // [sp+1Ch] [bp-FCh]@3
  int v43; // [sp+24h] [bp-F4h]@19
  char *v44; // [sp+28h] [bp-F0h]@19
  int v45; // [sp+2Ch] [bp-ECh]@1
  int v46; // [sp+30h] [bp-E8h]@1
  int v47; // [sp+34h] [bp-E4h]@1
  char v48; // [sp+38h] [bp-E0h]@1
  int v49; // [sp+48h] [bp-D0h]@1
  int v50; // [sp+58h] [bp-C0h]@1
  mce::ImageBuffer *v51; // [sp+E0h] [bp-38h]@1
  signed __int8 *v52; // [sp+E4h] [bp-34h]@1
  mce::ImageBuffer *v53; // [sp+E8h] [bp-30h]@1
  signed __int8 *v54; // [sp+ECh] [bp-2Ch]@1
  RakNet *v55; // [sp+F0h] [bp-28h]@1

  v5 = this;
  v55 = _stack_chk_guard;
  v45 = 0;
  v46 = 0;
  v49 = 0;
  v50 = 0;
  v53 = a2;
  v51 = a2;
  v54 = &a3[(_DWORD)a2];
  v52 = &a3[(_DWORD)a2];
  v6 = (const char *)sub_15F9C78(&v48, &v46, &v45, &v47);
  if ( v6 )
  {
    if ( dword_27EF3FC )
    {
      v42 = v45 >> 1;
      if ( v45 >> 1 >= 1 )
      {
        v7 = v46;
        v9 = __OFSUB__(v46, 1);
        v8 = v46 - 1 < 0;
        if ( v46 >= 1 )
        {
          v4 = v47;
          v9 = __OFSUB__(v47, 1);
          v8 = v47 - 1 < 0;
        }
        if ( !(v8 ^ v9) )
          v10 = 0;
          v11 = v6;
          v40 = v5;
          v38 = v45;
          v39 = v6;
          v12 = (int)&v6[v46 * v4 * (v45 - 1)];
          v41 = -(v46 * v4);
          do
          {
            v13 = 0;
            v14 = v11;
            v15 = (char *)v12;
            do
            {
              v16 = v4;
              v17 = (char *)v14;
              v18 = v15;
              do
              {
                v19 = *v17;
                --v16;
                *v17++ = *v18;
                *v18++ = v19;
              }
              while ( v16 );
              ++v13;
              v14 += v4;
              v15 += v4;
            }
            while ( v13 != v7 );
            v11 += v7 * v4;
            ++v10;
            v12 += v41;
          }
          while ( v10 != v42 );
          v20 = v38;
          v6 = v39;
          v5 = v40;
          goto LABEL_16;
      }
    }
  }
    v7 = v46;
    v20 = v45;
LABEL_16:
    v21 = 1;
    v22 = 28;
    if ( v47 == 3 )
      v22 = 116;
    mce::ImageDescription::ImageDescription((int)&v48, v7, v20, v22, 1, 0);
    mce::ImageBuffer::allocateStorage(v5, (const mce::ImageDescription *)&v48);
    v23 = mce::ImageBuffer::get(v5, 0);
    _aeabi_memcpy(v23, v6, v47 * v20 * v7);
    free((void *)v6);
    goto LABEL_23;
  sub_21E94B4((void **)&v43, "Image failed to load from memory \tReason: ");
  v24 = (char *)dword_27EF3F8;
  v25 = strlen((const char *)dword_27EF3F8);
  v26 = sub_21E7408((const void **)&v43, v24, v25);
  v44 = (char *)*v26;
  *v26 = &unk_28898CC;
  v27 = sub_21E72F0((const void **)&v44, (const void **)&Util::NEW_LINE);
  v28 = (char *)*v27;
  *v27 = &unk_28898CC;
  v29 = v44 - 12;
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v44 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
    else
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v43 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v28 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v28 - 12);
  v21 = 0;
LABEL_23:
  if ( _stack_chk_guard != v55 )
    _stack_chk_fail(_stack_chk_guard - v55);
  return v21;
}


signed int __fastcall ImageUtils::cropImage(ImageUtils *this, mce::ImageBuffer *a2, unsigned int a3, unsigned int a4, bool a5)
{
  unsigned __int64 v5; // r4@1
  mce::ImageBuffer *v6; // r8@1
  mce::ImageBuffer *v7; // r9@1
  int v8; // r0@3
  signed int v9; // r0@6
  char *v10; // r0@9
  mce::ImageBuffer *v11; // r11@9
  unsigned int v12; // r10@9
  char *v13; // r0@9
  int v14; // r4@9
  int v15; // r5@9
  int v16; // r6@9
  int v17; // r7@9
  int v18; // r7@11
  unsigned int v19; // r4@13
  unsigned int v20; // r5@13
  int v21; // r6@13
  char *v22; // r0@13
  int v27; // r4@13
  int v29; // r7@13
  int v36; // r7@19
  int v37; // r3@19
  int v38; // r8@21
  int v39; // r11@21
  int v40; // r6@21
  const char *v41; // r7@21
  int v42; // r4@21
  int v43; // r1@23
  int v44; // r3@23
  int v45; // r7@23
  int v46; // r1@23
  int v47; // r3@23
  int v48; // r6@23
  int v49; // r7@23
  signed int v51; // [sp+4h] [bp-84h]@9
  mce::ImageBuffer *v52; // [sp+8h] [bp-80h]@9
  mce::ImageBuffer *v53; // [sp+Ch] [bp-7Ch]@9
  unsigned __int64 v54; // [sp+10h] [bp-78h]@6
  int v55; // [sp+14h] [bp-74h]@13
  void *ptr; // [sp+18h] [bp-70h]@13
  int v57; // [sp+24h] [bp-64h]@23
  int v58; // [sp+28h] [bp-60h]@23
  int v59; // [sp+2Ch] [bp-5Ch]@23
  int v60; // [sp+30h] [bp-58h]@23
  int v61; // [sp+34h] [bp-54h]@23
  int v62; // [sp+38h] [bp-50h]@23
  int v63; // [sp+3Ch] [bp-4Ch]@23
  mce::ImageBuffer *v64; // [sp+40h] [bp-48h]@9
  int v65; // [sp+44h] [bp-44h]@9
  int v66; // [sp+48h] [bp-40h]@9
  int v67; // [sp+4Ch] [bp-3Ch]@9
  int v68; // [sp+50h] [bp-38h]@9

  v5 = __PAIR__(a3, a4);
  v6 = a2;
  v7 = this;
  if ( *(mce::ImageBuffer **)mce::ImageBuffer::getImageDescription(this) == a2
    && *((_DWORD *)mce::ImageBuffer::getImageDescription(v7) + 1) == HIDWORD(v5) )
  {
    return 1;
  }
  v8 = *((_DWORD *)mce::ImageBuffer::getImageDescription(v7) + 2);
  if ( v8 != 28 )
    if ( v8 == 116 )
    {
      v54 = v5;
      v9 = 3;
      goto LABEL_9;
    }
    if ( v8 != 87 )
      v9 = 0;
  v54 = v5;
  v9 = 4;
LABEL_9:
  v51 = v9;
  v10 = mce::ImageBuffer::getImageDescription(v7);
  v11 = *(mce::ImageBuffer **)v10;
  v52 = *(mce::ImageBuffer **)v10;
  v12 = *((_DWORD *)mce::ImageBuffer::getImageDescription(v7) + 1);
  v13 = mce::ImageBuffer::getImageDescription(v7);
  v14 = *((_DWORD *)v13 + 1);
  v15 = *((_DWORD *)v13 + 2);
  v16 = *((_DWORD *)v13 + 3);
  v17 = *((_DWORD *)v13 + 4);
  v64 = *(mce::ImageBuffer **)v13;
  v65 = v14;
  v66 = v15;
  v67 = v16;
  v68 = v17;
  v53 = v6;
  if ( v11 < v6 )
    v6 = v11;
  v18 = HIDWORD(v54);
  v64 = v6;
  if ( v12 < HIDWORD(v54) )
    v18 = v12;
  v65 = v18;
  mce::ImageBuffer::ImageBuffer((mce::ImageBuffer *)&ptr, (const mce::ImageDescription *)&v64);
  v19 = mce::ImageBuffer::get(v7, 0);
  v20 = mce::ImageBuffer::get((mce::ImageBuffer *)&ptr, 0);
  v21 = *(_DWORD *)mce::ImageBuffer::getImageDescription(v7);
  v22 = mce::ImageBuffer::getImageDescription(v7);
  HIDWORD(v54) = v19;
  __asm { VMOV.F32        S0, #0.5 }
  v27 = *((_DWORD *)v22 + 1);
  _R0 = v27 - v18;
  __asm
    VMOV            S2, R0
    VCVT.F32.S32    S16, S2
  v29 = v54;
  __asm { VMUL.F32        S0, S16, S0 }
  if ( !_ZF )
    __asm { VMOVNE.F32      S16, S0 }
    v29 = (v21 - (signed int)v6) >> 1;
  if ( (_DWORD)v54 == 1 )
    __asm { VMOV            R0, S16 }
    _R0 = ceilf(_R0);
    __asm
      VMOV            S0, R0
      VCVTR.S32.F32   S0, S0
      VMOV            R10, S0
  else
    _R10 = 0;
  __asm { VMOV            R0, S16 }
  _R0 = floorf(_R0);
    VMOV            S0, R0
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  if ( _R10 < v27 - _R0 )
    v36 = v29 + _R10 * v21;
    v37 = ~(unsigned int)v53;
    if ( ~(unsigned int)v52 > ~(unsigned int)v53 )
      v37 = ~(unsigned int)v52;
    v38 = (_DWORD)v6 * v51;
    v39 = v51 * v21;
    v40 = v51 * ~v37;
    v41 = (const char *)(v55 + v51 * v36);
    v42 = v27 - _R10 - _R0;
    do
      _aeabi_memcpy(v20, v41, v38);
      v41 += v39;
      v20 += v40;
      --v42;
    while ( v42 );
  std::vector<unsigned char,std::allocator<unsigned char>>::operator=(__PAIR__(&ptr, (unsigned int)v7));
  v43 = (int)v7 + 12;
  v44 = v58;
  v45 = v59;
  *(_DWORD *)v43 = v57;
  *(_DWORD *)(v43 + 4) = v44;
  *(_DWORD *)(v43 + 8) = v45;
  v46 = (int)v7 + 24;
  v47 = v61;
  v48 = v62;
  v49 = v63;
  *(_DWORD *)v46 = v60;
  *(_DWORD *)(v46 + 4) = v47;
  *(_DWORD *)(v46 + 8) = v48;
  *(_DWORD *)(v46 + 12) = v49;
  if ( ptr )
    operator delete(ptr);
  return 1;
}


signed int __fastcall ImageUtils::scaleImage(ImageUtils *this, mce::ImageBuffer *a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r11@1
  int v5; // r8@1
  mce::ImageBuffer *v6; // r10@1
  signed int v7; // r4@3
  int v8; // r9@4
  char *v9; // r0@4
  int v10; // r6@4
  int v11; // r7@4
  unsigned int v12; // r4@4
  mce::ImageBuffer *v13; // r0@4
  signed int v14; // r6@4
  int v15; // r7@4
  int v16; // r9@6
  int v17; // r11@6
  char *v18; // r0@6
  __int64 v23; // ST10_8@6
  __int64 v24; // ST08_8@6
  int v25; // r1@7
  int v26; // r3@7
  int v27; // r7@7
  int v28; // r1@7
  int v29; // r3@7
  int v30; // r6@7
  int v31; // r7@7
  int v33; // [sp+38h] [bp-68h]@4
  int v34; // [sp+3Ch] [bp-64h]@4
  void *ptr; // [sp+40h] [bp-60h]@4
  int v36; // [sp+4Ch] [bp-54h]@7
  int v37; // [sp+50h] [bp-50h]@7
  int v38; // [sp+54h] [bp-4Ch]@7
  int v39; // [sp+58h] [bp-48h]@7
  int v40; // [sp+5Ch] [bp-44h]@7
  int v41; // [sp+60h] [bp-40h]@7
  int v42; // [sp+64h] [bp-3Ch]@7
  int v43; // [sp+68h] [bp-38h]@4
  unsigned int v44; // [sp+6Ch] [bp-34h]@4
  int v45; // [sp+70h] [bp-30h]@4
  int v46; // [sp+74h] [bp-2Ch]@4
  int v47; // [sp+78h] [bp-28h]@4

  v4 = a3;
  v5 = (int)a2;
  v6 = this;
  if ( *(mce::ImageBuffer **)mce::ImageBuffer::getImageDescription(this) != a2
    || *((_DWORD *)mce::ImageBuffer::getImageDescription(v6) + 1) != v4 )
  {
    v8 = *((_DWORD *)mce::ImageBuffer::getImageDescription(v6) + 2);
    v34 = mce::ImageBuffer::get(v6, 0);
    v33 = *(_DWORD *)mce::ImageBuffer::getImageDescription(v6);
    v9 = mce::ImageBuffer::getImageDescription(v6);
    v10 = *((_DWORD *)v9 + 3);
    v11 = *((_DWORD *)v9 + 4);
    v45 = *((_DWORD *)v9 + 2);
    v46 = v10;
    v47 = v11;
    v12 = v4;
    v43 = v5;
    v44 = v4;
    v13 = mce::ImageBuffer::ImageBuffer((mce::ImageBuffer *)&ptr, (const mce::ImageDescription *)&v43);
    v14 = 4;
    v15 = 3;
    if ( v8 == 116 )
    {
      v14 = 3;
      v15 = -1;
    }
    v16 = mce::ImageBuffer::get(v13, 0);
    v17 = *(_DWORD *)mce::ImageBuffer::getImageDescription(v6);
    v18 = mce::ImageBuffer::getImageDescription(v6);
    __asm
      VLDR            S0, =0.0
      VMOV.F32        S2, #1.0
      VMOV.F32        S1, S0
      VMOV.F32        S3, S2
    LODWORD(v23) = 0;
    HIDWORD(v23) = v14;
    LODWORD(v24) = v12;
    HIDWORD(v24) = v14 * v5;
    if ( sub_15F7980(
           v34,
           v17,
           *((_DWORD *)v18 + 1),
           v33 * v14,
           v16,
           v5,
           v24,
           v23,
           v15,
           0,
           1,
           v33,
           (int)ptr) )
      std::vector<unsigned char,std::allocator<unsigned char>>::operator=(__PAIR__(&ptr, (unsigned int)v6));
      v25 = (int)v6 + 12;
      v7 = 1;
      v26 = v37;
      v27 = v38;
      *(_DWORD *)v25 = v36;
      *(_DWORD *)(v25 + 4) = v26;
      *(_DWORD *)(v25 + 8) = v27;
      v28 = (int)v6 + 24;
      v29 = v40;
      v30 = v41;
      v31 = v42;
      *(_DWORD *)v28 = v39;
      *(_DWORD *)(v28 + 4) = v29;
      *(_DWORD *)(v28 + 8) = v30;
      *(_DWORD *)(v28 + 12) = v31;
    else
      v7 = 0;
    if ( ptr )
      operator delete(ptr);
  }
  else
    v7 = 1;
  return v7;
}


signed int __fastcall ImageUtils::overlayImage(ImageUtils *this, mce::ImageBuffer *a2, const mce::ImageBuffer *a3, const mce::ImageBuffer *a4)
{
  mce::ImageBuffer *v4; // r11@1
  mce::ImageBuffer *v5; // r10@1
  mce::ImageBuffer *v6; // r9@1
  int v7; // r0@1
  signed int v8; // r7@4
  int v9; // r0@7
  signed int v10; // r6@10
  signed int v11; // r5@13
  unsigned int v12; // r4@16
  char *v13; // r0@18
  signed int v14; // r8@18
  char *v15; // r0@18
  signed int v16; // r10@18
  int v21; // r8@19
  int v22; // r2@19
  int v23; // r12@19
  int v24; // r0@19
  int v25; // r11@20
  signed int v26; // r9@23
  int v27; // lr@23
  int v28; // r1@23
  int v29; // r2@23
  int v30; // r4@24
  int v41; // r2@31
  unsigned int v53; // [sp+4h] [bp-44h]@16
  int v54; // [sp+8h] [bp-40h]@19
  int v55; // [sp+Ch] [bp-3Ch]@19
  signed int v56; // [sp+10h] [bp-38h]@18
  unsigned int v57; // [sp+14h] [bp-34h]@16
  unsigned int v58; // [sp+18h] [bp-30h]@18
  int v59; // [sp+1Ch] [bp-2Ch]@19
  signed int v60; // [sp+20h] [bp-28h]@18

  v4 = a2;
  v5 = this;
  v6 = a3;
  v7 = *((_DWORD *)mce::ImageBuffer::getImageDescription(a2) + 2);
  if ( v7 == 28 )
    goto LABEL_4;
  if ( v7 == 116 )
  {
    v8 = 3;
  }
  else
    if ( v7 == 87 )
    {
LABEL_4:
      v8 = 4;
      goto LABEL_7;
    }
    v8 = 0;
LABEL_7:
  v9 = *((_DWORD *)mce::ImageBuffer::getImageDescription(v5) + 2);
  if ( v9 != 28 )
    if ( v9 == 116 )
      v10 = 3;
      goto LABEL_13;
    if ( v9 != 87 )
      v10 = 0;
  v10 = 4;
LABEL_13:
  v11 = 4;
  if ( v6 && *((_DWORD *)mce::ImageBuffer::getImageDescription(v6) + 2) == 116 )
    v11 = 3;
  v12 = 0;
  v53 = mce::ImageBuffer::get(v5, 0);
  v57 = mce::ImageBuffer::get(v4, 0);
  if ( v6 )
    v12 = mce::ImageBuffer::get(v6, 0);
  v58 = v12;
  v13 = mce::ImageBuffer::getImageDescription(v5);
  v14 = *(_DWORD *)v13;
  v56 = *(_DWORD *)v13;
  v15 = mce::ImageBuffer::getImageDescription(v5);
  v16 = v14;
  v60 = *((_DWORD *)v15 + 1);
  if ( v60 >= 1 )
    __asm { VLDR            S0, =0.0039216 }
    v21 = 0;
    v22 = v16 * v11;
    v54 = v16 * v8;
    v55 = v16 * v11;
    v59 = v10 * v16;
    v23 = v53 + 1;
    v24 = 0;
    do
      v25 = v12 + v22 * v21;
      if ( v12 )
        v24 = v12 + v22 * v21;
      if ( v16 >= 1 )
      {
        v26 = v16;
        v27 = v23;
        v28 = v57 + v54 * v21;
        v29 = v23;
        if ( v12 )
        {
          do
          {
            v30 = v25;
            if ( !v25 )
              v30 = v28;
            _R4 = *(_BYTE *)(v30 + 3);
            if ( _R4 >= 0xFE )
            {
              *(_BYTE *)(v29 - 1) = *(_BYTE *)v28;
              *(_BYTE *)v29 = *(_BYTE *)(v28 + 1);
              *(_BYTE *)(v29 + 1) = *(_BYTE *)(v28 + 2);
            }
            else
              __asm
              {
                VMOV            S2, R4
                VCVT.F32.U32    S2, S2
              }
              _R4 = *(_BYTE *)(v29 - 1);
              _R3 = *(_BYTE *)v28 - _R4;
                VMOV            S6, R4
                VMOV            S4, R3
                VCVT.F32.S32    S4, S4
                VMUL.F32        S2, S2, S0
                VCVT.F32.U32    S6, S6
                VMUL.F32        S4, S4, S2
                VADD.F32        S4, S4, S6
                VCVTR.U32.F32   S4, S4
                VMOV            R3, S4
              *(_BYTE *)(v29 - 1) = _R3;
              _R3 = *(_BYTE *)v29;
              _R4 = *(_BYTE *)(v28 + 1) - _R3;
                VMOV            S6, R3
                VMOV            S4, R4
              *(_BYTE *)v29 = _R3;
              _R3 = *(_BYTE *)(v29 + 1);
              _R4 = *(_BYTE *)(v28 + 2) - _R3;
                VMUL.F32        S2, S4, S2
                VADD.F32        S2, S2, S6
                VCVTR.U32.F32   S2, S2
                VMOV            R3, S2
              *(_BYTE *)(v29 + 1) = _R3;
            v29 += v10;
            v25 += v11;
            v28 += v8;
            --v26;
          }
          while ( v26 );
          v22 = v55;
          v12 = v58;
          v16 = v56;
          v24 += v55;
        }
        else
            v41 = v24;
            if ( !v24 )
              v41 = v28;
            _R2 = *(_BYTE *)(v41 + 3);
            if ( _R2 > 0xFD )
              *(_BYTE *)(v27 - 1) = *(_BYTE *)v28;
              *(_BYTE *)v27 = *(_BYTE *)(v28 + 1);
              LOBYTE(_R2) = *(_BYTE *)(v28 + 2);
                VMOV            S2, R2
              _R2 = *(_BYTE *)(v27 - 1);
              _R3 = *(_BYTE *)v28 - _R2;
                VMOV            S6, R2
                VMOV            R2, S4
              *(_BYTE *)(v27 - 1) = _R2;
              _R2 = *(_BYTE *)v27;
              _R3 = *(_BYTE *)(v28 + 1) - _R2;
              *(_BYTE *)v27 = _R2;
              _R2 = *(_BYTE *)(v27 + 1);
              _R3 = *(_BYTE *)(v28 + 2) - _R2;
                VMOV            R2, S2
            *(_BYTE *)(v27 + 1) = _R2;
            v27 += v10;
            --v16;
          while ( v16 );
      }
      ++v21;
      v23 += v59;
    while ( v21 != v60 );
  return 1;
}


signed int __fastcall ImageUtils::loadImageFromFile(mce::ImageBuffer *a1, int *a2)
{
  mce::ImageBuffer *v2; // r4@1
  int *v3; // r5@1
  signed int v4; // r6@1
  __int64 v5; // r0@1
  const char *v6; // r6@2
  __int64 v7; // kr00_8@3
  int v8; // r3@3
  unsigned int v9; // r0@5
  const void **v10; // r0@6
  const void **v11; // r0@6
  char *v12; // r4@6
  unsigned int v13; // r0@6
  const void **v14; // r0@6
  const void **v15; // r0@6
  char *v16; // r4@6
  char *v17; // r0@6
  char *v18; // r0@7
  char *v19; // r0@8
  void *v20; // r0@9
  unsigned int *v22; // r2@16
  signed int v23; // r1@18
  unsigned int *v24; // r2@20
  signed int v25; // r1@22
  unsigned int *v26; // r2@24
  signed int v27; // r1@26
  unsigned int *v28; // r2@28
  signed int v29; // r1@30
  unsigned int *v30; // r2@32
  signed int v31; // r1@34
  int v32; // [sp+Ch] [bp-74h]@6
  char *v33; // [sp+10h] [bp-70h]@6
  char *v34; // [sp+14h] [bp-6Ch]@6
  char *v35; // [sp+18h] [bp-68h]@6
  char v36; // [sp+1Ch] [bp-64h]@5
  int v37; // [sp+30h] [bp-50h]@2
  int v38; // [sp+34h] [bp-4Ch]@2
  int v39; // [sp+38h] [bp-48h]@1
  int v40; // [sp+3Ch] [bp-44h]@1
  char v41; // [sp+40h] [bp-40h]@1
  void (__cdecl *v42)(char *); // [sp+48h] [bp-38h]@13
  unsigned __int8 v43; // [sp+50h] [bp-30h]@1
  int v44; // [sp+54h] [bp-2Ch]@1
  int v45; // [sp+58h] [bp-28h]@1
  int v46; // [sp+5Ch] [bp-24h]@1
  int v47; // [sp+60h] [bp-20h]@1
  int v48; // [sp+64h] [bp-1Ch]@2

  v2 = a1;
  v46 = 0;
  v47 = 0;
  v3 = a2;
  v44 = 0;
  v45 = 0;
  v39 = *a2;
  v40 = *(_DWORD *)(v39 - 12);
  Core::File::open((int)&v41, (int)&v44, (__int64 *)&v39, 33);
  LOBYTE(v5) = v43;
  v4 = 0;
  HIDWORD(v5) = v43 | 2;
  v43 |= 2u;
  if ( v5 & 1 )
  {
    LODWORD(v5) = v44;
    v44 = 0;
    v37 = v5;
    v38 = v45;
    v45 = 0;
    LODWORD(v5) = &StbiFile::sCallbacks;
    v6 = (const char *)j_stbi_load_from_callbacks(v5, &v47, &v46, &v48, 0);
    if ( v6 )
    {
      v7 = *(_QWORD *)&v46;
      v8 = 28;
      if ( v48 == 3 )
        v8 = 116;
      mce::ImageDescription::ImageDescription((int)&v36, v47, v46, v8, 1, 0);
      mce::ImageBuffer::allocateStorage(v2, (const mce::ImageDescription *)&v36);
      v9 = mce::ImageBuffer::get(v2, 0);
      _aeabi_memcpy(v9, v6, v48 * (_DWORD)v7 * HIDWORD(v7));
      free((void *)v6);
      v4 = 1;
    }
    else
      sub_21E94B4((void **)&v32, "Image failed to load: ");
      v10 = sub_21E72F0((const void **)&v32, (const void **)v3);
      v33 = (char *)*v10;
      *v10 = &unk_28898CC;
      v11 = sub_21E7408((const void **)&v33, "\tReason: ", 9u);
      v34 = (char *)*v11;
      *v11 = &unk_28898CC;
      v12 = (char *)dword_27EF3F8;
      v13 = strlen((const char *)dword_27EF3F8);
      v14 = sub_21E7408((const void **)&v34, v12, v13);
      v35 = (char *)*v14;
      *v14 = &unk_28898CC;
      v15 = sub_21E72F0((const void **)&v35, (const void **)&Util::NEW_LINE);
      v16 = (char *)*v15;
      *v15 = &unk_28898CC;
      v17 = v35 - 12;
      if ( (int *)(v35 - 12) != &dword_28898C0 )
      {
        v22 = (unsigned int *)(v35 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
        }
        else
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      }
      v18 = v34 - 12;
      if ( (int *)(v34 - 12) != &dword_28898C0 )
        v24 = (unsigned int *)(v34 - 4);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      v19 = v33 - 12;
      if ( (int *)(v33 - 12) != &dword_28898C0 )
        v26 = (unsigned int *)(v33 - 4);
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
          v27 = (*v26)--;
        if ( v27 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v20 = (void *)(v32 - 12);
      if ( (int *)(v32 - 12) != &dword_28898C0 )
        v28 = (unsigned int *)(v32 - 4);
            v29 = __ldrex(v28);
          while ( __strex(v29 - 1, v28) );
          v29 = (*v28)--;
        if ( v29 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      if ( (int *)(v16 - 12) != &dword_28898C0 )
        v30 = (unsigned int *)(v16 - 4);
            v31 = __ldrex(v30);
          while ( __strex(v31 - 1, v30) );
          v31 = (*v30)--;
        if ( v31 <= 0 )
          j_j_j_j__ZdlPv_9(v16 - 12);
      v4 = 0;
    Core::File::~File((Core::File *)&v37);
  }
  if ( v42 )
    v42(&v41);
  Core::File::~File((Core::File *)&v44);
  return v4;
}


int __fastcall ImageUtils::saveJPEG(mce::ImageBuffer *a1, int *a2, signed int a3)
{
  mce::ImageBuffer *v3; // r4@1
  signed int v4; // r5@1
  char v5; // r0@1
  int v6; // r6@1
  int v7; // r0@2
  signed int v8; // r0@5
  char *v9; // r0@8
  signed int v10; // r1@8
  signed int v11; // r6@8
  int v12; // r5@14
  int v13; // r6@14
  unsigned int v14; // r4@14
  char v15; // r4@17
  char v17; // [sp+Ch] [bp-28Ch]@17
  void (*v18)(void); // [sp+14h] [bp-284h]@17
  char v19; // [sp+1Ch] [bp-27Ch]@17
  void *ptr; // [sp+20h] [bp-278h]@2
  __int64 v21; // [sp+24h] [bp-274h]@2
  unsigned int v22; // [sp+28h] [bp-270h]@2
  int v23; // [sp+2Ch] [bp-26Ch]@1
  int v24; // [sp+30h] [bp-268h]@1
  char v25; // [sp+34h] [bp-264h]@1
  void (__cdecl *v26)(char *); // [sp+3Ch] [bp-25Ch]@20
  char v27; // [sp+44h] [bp-254h]@1
  void *v28; // [sp+48h] [bp-250h]@1
  int v29; // [sp+4Ch] [bp-24Ch]@1
  char v30; // [sp+50h] [bp-248h]@2
  RakNet *(__fastcall *v31)(int); // [sp+54h] [bp-244h]@2
  RakNet *(__fastcall *v32)(int); // [sp+58h] [bp-240h]@2
  int v33; // [sp+D8h] [bp-1C0h]@2
  int v34; // [sp+E4h] [bp-1B4h]@2
  int v35; // [sp+F4h] [bp-1A4h]@2
  unsigned int v36; // [sp+F8h] [bp-1A0h]@2
  int v37; // [sp+FCh] [bp-19Ch]@8
  int v38; // [sp+100h] [bp-198h]@10
  int v39; // [sp+1B4h] [bp-E4h]@10
  unsigned int v40; // [sp+1D0h] [bp-C8h]@15
  RakNet *v41; // [sp+280h] [bp-18h]@1

  v3 = a1;
  v4 = a3;
  v41 = _stack_chk_guard;
  v28 = 0;
  v29 = 0;
  v23 = *a2;
  v24 = *(_DWORD *)(v23 - 12);
  Core::File::open((int)&v25, (int)&v28, (__int64 *)&v23, 46);
  v5 = v27;
  v6 = 0;
  v27 |= 2u;
  if ( !(v5 & 1) )
    goto LABEL_20;
  _aeabi_memclr8(&v33, 424);
  _aeabi_memclr8(&v30, 132);
  v22 = 0;
  v32 = sub_15F9BF4;
  *(_DWORD *)&v30 = nullsub_56;
  v31 = sub_15F9C28;
  v33 = j_jpeg_std_error((int)&v30);
  j_jpeg_CreateCompress((int)&v33, 90, 424);
  ptr = 0;
  j_jpeg_mem_dest(&v33, (int *)&ptr, (signed int *)&v21);
  v34 = 0;
  v35 = *(_DWORD *)mce::ImageBuffer::getImageDescription(v3);
  v36 = *((_DWORD *)mce::ImageBuffer::getImageDescription(v3) + 1);
  v7 = *((_DWORD *)mce::ImageBuffer::getImageDescription(v3) + 2);
  if ( v7 != 28 )
  {
    if ( v7 == 116 )
    {
      v8 = 3;
      goto LABEL_8;
    }
    if ( v7 != 87 )
      v8 = 0;
  }
  v8 = 4;
LABEL_8:
  v37 = v8;
  v9 = mce::ImageBuffer::getImageDescription(v3);
  v10 = 2;
  v11 = 0;
  if ( *((_DWORD *)v9 + 2) == 28 )
    v10 = 4;
  v38 = v10;
  v39 = 0;
  j_jpeg_set_defaults((int)&v33);
  if ( v4 > 0 )
    v11 = v4;
  if ( v4 > 100 )
    v11 = 100;
  j_jpeg_set_quality((int)&v33, v11, 1);
  j_jpeg_start_compress((int)&v33, 1);
  v12 = v35;
  v13 = v37;
  v14 = mce::ImageBuffer::get(v3, 0);
  do
    if ( v40 >= v36 )
      break;
    v22 = v14 + v13 * v12 * v40;
  while ( j_jpeg_write_scanlines((int)&v33, (int)&v22, 1u) );
  j_jpeg_finish_compress((int)&v33);
  j_jpeg_destroy_compress();
  Core::FileImpl::write((Core::FileImpl *)&v17, v28, (unsigned int)ptr, (unsigned int)v21);
  v15 = v19;
  v19 |= 2u;
  if ( v18 )
    v18();
  v6 = v15 & 1;
  free(ptr);
LABEL_20:
  if ( v26 )
    v26(&v25);
  Core::File::~File((Core::File *)&v28);
  if ( _stack_chk_guard != v41 )
    _stack_chk_fail(_stack_chk_guard - v41);
  return v6;
}


signed int __fastcall ImageUtils::uncompress(ImageUtils *this, mce::TextureContainer *a2, bool a3)
{
  mce::TextureContainer *v3; // r5@1
  ImageUtils *v4; // r4@1
  char *v5; // r6@1
  signed int result; // r0@1
  int *v7; // r0@3
  char *v8; // r0@5
  char *v9; // r0@6
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  char *v12; // [sp+4h] [bp-6Ch]@6
  char v13; // [sp+8h] [bp-68h]@5
  void *ptr; // [sp+30h] [bp-40h]@2
  int v15; // [sp+34h] [bp-3Ch]@2
  int v16; // [sp+38h] [bp-38h]@2
  int v17; // [sp+3Ch] [bp-34h]@2
  int v18; // [sp+40h] [bp-30h]@2
  int v19; // [sp+44h] [bp-2Ch]@2
  int v20; // [sp+48h] [bp-28h]@2
  int v21; // [sp+4Ch] [bp-24h]@2
  int v22; // [sp+50h] [bp-20h]@2
  char v23; // [sp+54h] [bp-1Ch]@2

  v3 = a2;
  v4 = this;
  v5 = mce::TextureContainer::getRawImage(this);
  result = 0;
  if ( *(_DWORD *)(*(_DWORD *)v5 - 12) )
  {
    v20 = 0;
    v21 = 0;
    v18 = 0;
    v19 = 0;
    v16 = 0;
    v17 = 0;
    ptr = 0;
    v15 = 0;
    v22 = 1;
    v23 = 0;
    if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
      v7 = (int *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
    else
      v7 = (int *)&ServiceLocator<AppPlatform>::mDefaultService;
    AppPlatform::loadImageFromStream(*v7, (ImageUtils *)&ptr, (mce::ImageBuffer **)v5);
    v8 = mce::ImageBuffer::getImageDescription((mce::ImageBuffer *)&ptr);
    mce::TextureDescription::TextureDescription((int)&v13, (int)v8, 8);
    mce::TextureContainer::allocateStorage(v4, (const mce::TextureDescription *)&v13);
    mce::TextureContainer::setImage(__PAIR__(&ptr, (unsigned int)v4), 0);
    if ( v3 == (mce::TextureContainer *)1 )
    {
      v12 = (char *)&unk_28898CC;
      mce::TextureContainer::setRawImage((int)v4, (int *)&v12);
      v9 = v12 - 12;
      if ( (int *)(v12 - 12) != &dword_28898C0 )
      {
        v10 = (unsigned int *)(v12 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      }
    }
    if ( ptr )
      operator delete(ptr);
    result = 1;
  }
  return result;
}
