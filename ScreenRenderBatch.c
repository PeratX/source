

void __fastcall ScreenRenderBatch::_addToRenderBatch(int a1, int a2, int a3, int a4, int a5)
{
  ScreenRenderBatch::_addToRenderBatch(a1, a2, a3, a4, a5);
}


int __fastcall ScreenRenderBatch::preUpdate(int result)
{
  int v1; // r9@1
  __int64 v2; // kr00_8@1
  int v3; // r4@2
  int v4; // r6@3
  unsigned int *v5; // r1@4
  unsigned int *v6; // r5@10
  __int64 v7; // r4@18

  v1 = result;
  v2 = *(_QWORD *)result;
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = v2;
    result = (int)&pthread_create_ptr;
    do
    {
      v4 = *(_DWORD *)(v3 + 4);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = __ldrex(v5);
          while ( __strex(result - 1, v5) );
        }
        else
          result = (*v5)--;
        if ( result == 1 )
          v6 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              result = __ldrex(v6);
            while ( __strex(result - 1, v6) );
          }
          else
            result = (*v6)--;
          if ( result == 1 )
            result = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v3 += 36;
    }
    while ( v3 != HIDWORD(v2) );
  }
  *(_DWORD *)(v1 + 4) = v2;
  v7 = *(_QWORD *)(v1 + 12);
  if ( HIDWORD(v7) != (_DWORD)v7 )
    result = *(_QWORD *)(v1 + 12);
      result = (int)ComponentRenderBatch::~ComponentRenderBatch((ComponentRenderBatch *)result) + 116;
    while ( HIDWORD(v7) != result );
  *(_DWORD *)(v1 + 16) = v7;
  return result;
}


signed int __fastcall ScreenRenderBatch::_addRenderControl(__int64 a1, int a2, __int64 *a3, int a4)
{
  UIControl *v4; // r5@1
  __int64 v6; // kr00_8@1
  char *v7; // r11@1
  int v9; // r0@1
  int v21; // r3@1
  __int64 v23; // kr08_8@2
  int v35; // r0@9
  unsigned int v36; // r1@10
  unsigned int *v37; // r0@10
  unsigned int v38; // r2@13
  unsigned int v39; // r3@14
  int v40; // r7@15
  int v41; // r12@15
  int v42; // lr@15
  __int64 v43; // r2@15
  __int16 v44; // r6@15
  __int64 v45; // kr18_8@15
  __int64 v46; // r0@15
  signed int v47; // r5@17
  __int64 v48; // r0@19
  int v49; // r2@19
  int v50; // r6@20
  unsigned int *v51; // r1@21
  unsigned int v52; // r0@23
  unsigned int *v53; // r4@27
  unsigned int v54; // r0@29
  __int64 *v56; // [sp+0h] [bp-80h]@1
  __int64 v57; // [sp+4h] [bp-7Ch]@1
  int v58; // [sp+Ch] [bp-74h]@15
  int v59; // [sp+10h] [bp-70h]@9
  int v60; // [sp+14h] [bp-6Ch]@15
  int v61; // [sp+18h] [bp-68h]@15
  int v62; // [sp+1Ch] [bp-64h]@15
  int v63; // [sp+20h] [bp-60h]@15
  __int16 v64; // [sp+24h] [bp-5Ch]@15
  __int64 v65; // [sp+28h] [bp-58h]@15

  v4 = (UIControl *)HIDWORD(a1);
  v56 = a3;
  v57 = a1;
  _R10 = a2;
  v6 = *(_QWORD *)UIControl::getPosition((UIControl *)HIDWORD(a1));
  v7 = UIControl::getSize(v4);
  _R6 = roundf(v6);
  v9 = roundf(HIDWORD(v6));
  __asm { VLDR            S0, [R10] }
  _R4 = v9;
  __asm
  {
    VLDR            S4, [R10,#8]
    VMOV            S16, R6
    VMOV            R0, S0
    VLDR            S2, [R10,#4]
    VLDR            S6, [R10,#0xC]
    VSUB.F32        S4, S4, S0
    VMOV            R9, S2
    VSUB.F32        S6, S6, S2
    VMOV            R5, S4
    VMOV            R8, S6
  }
  _R0 = roundf(_R0);
    VMOV            S20, R0
    VMOV            S18, R4
  _R0 = roundf(_R5);
  __asm { VMOV            S22, R0 }
  _R0 = roundf(_R8);
    VMOV            S0, R0
    VCVTR.S32.F32   S22, S22
    VCVTR.S32.F32   S24, S0
  _R0 = roundf(_R9);
  __asm { VMOV            R7, S22 }
  v21 = a4;
    VMOV            R6, S24
    VMOV            S2, R0
    VCVTR.S32.F32   S0, S18
    VCVTR.S32.F32   S16, S16
    VCVTR.S32.F32   S2, S2
    VCVTR.S32.F32   S18, S20
  if ( !(_R6 * _R7) )
    goto LABEL_41;
  v23 = *(_QWORD *)v7;
    VMOV            R9, S0
    VMOV            R8, S2
  _R5 = roundf(*(_QWORD *)v7 >> 32);
  _R0 = roundf(v23);
  __asm { VMOV            S0, R0 }
    VMOV            S2, R5
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S2
  if ( _R0 + _R9 < _R8 )
    goto LABEL_42;
    VMOV            R1, S18
    VMOV            R0, S16
  _VF = __OFSUB__(_R0, _R7 + _R1);
  _ZF = _R0 == _R7 + _R1;
  _NF = _R0 - (_R7 + _R1) < 0;
  if ( _R0 <= _R7 + _R1 )
    _VF = __OFSUB__(_R9, _R6 + _R8);
    _ZF = _R9 == _R6 + _R8;
    _NF = _R9 - (_R6 + _R8) < 0;
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
  __asm { VMOV            R2, S0 }
  if ( _R0 + _R2 < _R1 )
LABEL_42:
    v47 = 0;
    if ( a4 == 1 )
    {
      v48 = v57;
      v49 = 0;
LABEL_35:
      ScreenRenderBatch::_storeTextureState((ScreenRenderBatch *)v48, (UIControl *)HIDWORD(v48), v49);
      return v47;
    }
  else
LABEL_41:
    if ( v21 == 1 )
      v35 = *(_DWORD *)(HIDWORD(v57) + 8);
      v59 = v35;
      if ( !v35 )
        std::__throw_bad_weak_ptr();
      v36 = *(_DWORD *)(v35 + 4);
      v37 = (unsigned int *)(v35 + 4);
      do
      {
        while ( 1 )
        {
          if ( !v36 )
            std::__throw_bad_weak_ptr();
          __dmb();
          v38 = __ldrex(v37);
          if ( v38 == v36 )
            break;
          __clrex();
          v36 = v38;
        }
        v39 = __strex(v36 + 1, v37);
        v36 = v38;
      }
      while ( v39 );
      __dmb();
      v40 = *(_DWORD *)(HIDWORD(v57) + 4);
      v58 = *(_DWORD *)(HIDWORD(v57) + 4);
      v41 = *(_DWORD *)_R10;
      v60 = *(_DWORD *)_R10;
      v42 = *(_DWORD *)(_R10 + 4);
      v61 = *(_DWORD *)(_R10 + 4);
      LODWORD(v43) = *(_DWORD *)(_R10 + 8);
      HIDWORD(v43) = *(_QWORD *)(_R10 + 8) >> 32;
      v62 = *(_QWORD *)(_R10 + 8);
      v63 = *(_DWORD *)(_R10 + 12);
      v44 = *(_WORD *)(_R10 + 16);
      v64 = *(_WORD *)(_R10 + 16);
      v45 = *v56;
      v65 = *v56;
      v46 = *(_QWORD *)(v57 + 4);
      if ( (_DWORD)v46 == HIDWORD(v46) )
        std::vector<RenderControlMetadata,std::allocator<RenderControlMetadata>>::_M_emplace_back_aux<RenderControlMetadata>(
          (unsigned __int64 *)v57,
          (int)&v58);
        v50 = v59;
        if ( v59 )
          v51 = (unsigned int *)(v59 + 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v52 = __ldrex(v51);
            while ( __strex(v52 - 1, v51) );
          }
          else
            v52 = (*v51)--;
          if ( v52 == 1 )
            v53 = (unsigned int *)(v50 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v50 + 8))(v50);
            if ( &pthread_create )
            {
              __dmb();
              do
                v54 = __ldrex(v53);
              while ( __strex(v54 - 1, v53) );
            }
            else
              v54 = (*v53)--;
            if ( v54 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v50 + 12))(v50);
      else
        *(_DWORD *)v46 = v40;
        HIDWORD(v46) = v59;
        v59 = 0;
        *(_DWORD *)(v46 + 4) = HIDWORD(v46);
        v58 = 0;
        *(_DWORD *)(v46 + 8) = v41;
        *(_DWORD *)(v46 + 12) = v42;
        *(_QWORD *)(v46 + 16) = v43;
        *(_WORD *)(v46 + 24) = v44;
        *(_QWORD *)(v46 + 28) = v45;
        *(_DWORD *)(v57 + 4) += 36;
      v47 = 1;
      v49 = 1;
      goto LABEL_35;
    v47 = 1;
  return v47;
}


void __fastcall ScreenRenderBatch::_addToRenderBatch(int a1, int a2, SpriteComponent *this, int a4, int a5)
{
  int v5; // r8@1
  SpriteComponent *v7; // r9@1
  int v8; // r5@1
  int v9; // r6@1
  char *v14; // r7@1
  int *v15; // r0@1
  void *v17; // r0@1
  int v18; // r5@2
  int v19; // r10@2
  int v20; // r7@3
  int v21; // r0@10
  __int64 v22; // r0@13
  void *v23; // r5@15
  unsigned int v24; // r2@15
  unsigned int v25; // r1@17
  unsigned int v26; // r4@17
  char *v27; // r6@23
  char *v28; // r9@25
  void *v29; // r0@30
  void *v30; // r0@31
  void *v31; // r0@32
  unsigned int *v32; // r2@34
  signed int v33; // r1@36
  unsigned int *v34; // r2@38
  signed int v35; // r1@40
  unsigned int *v36; // r2@42
  signed int v37; // r1@44
  unsigned int *v38; // r2@46
  signed int v39; // r1@48
  int v40; // [sp+Ch] [bp-84h]@1
  char v41; // [sp+14h] [bp-7Ch]@1
  int v42; // [sp+48h] [bp-48h]@32
  int v43; // [sp+4Ch] [bp-44h]@31
  int v44; // [sp+54h] [bp-3Ch]@30

  v5 = a1;
  _R0 = a5;
  v7 = this;
  v8 = a4;
  v9 = a2;
  __asm { VLDR            S16, [R0] }
  v14 = SpriteComponent::getColor(this);
  SpriteComponent::getResourceLocation((SpriteComponent *)&v40, (int)v7);
  v15 = (int *)SpriteComponent::getMaterialName(v7);
  __asm { VMOV            R2, S16 }
  BatchKey::BatchKey((int)&v41, v9, _R2, (int)v14, (int)&v40, v8, v15);
  v17 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
  {
    v32 = (unsigned int *)(v40 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
    }
    else
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  }
  v18 = *(_DWORD *)(v5 + 12);
  v19 = *(_DWORD *)(v5 + 16);
  if ( v18 == v19 )
    goto LABEL_69;
  v20 = 0;
  while ( !BatchKey::operator==((int)&v41, v18) )
    _ZF = v19 - 116 == v18;
    v18 += 116;
    if ( _ZF )
      goto LABEL_8;
  v20 = v18;
LABEL_8:
  if ( !v20 )
LABEL_69:
    if ( v19 == *(_DWORD *)(v5 + 20) )
      std::vector<ComponentRenderBatch,std::allocator<ComponentRenderBatch>>::_M_emplace_back_aux<BatchKey &>(
        (unsigned __int64 *)(v5 + 12),
        (int)&v41);
      v21 = *(_DWORD *)(v5 + 16);
      ComponentRenderBatch::ComponentRenderBatch(v19, (int)&v41);
      v21 = *(_DWORD *)(v5 + 16) + 116;
      *(_DWORD *)(v5 + 16) = v21;
    v20 = v21 - 116;
  v22 = *(_QWORD *)(v20 + 96);
  if ( (_DWORD)v22 == HIDWORD(v22) )
    v23 = *(void **)(v20 + 92);
    v24 = ((signed int)v22 - (signed int)v23) >> 2;
    if ( !v24 )
      v24 = 1;
    HIDWORD(v22) = v24 + (((signed int)v22 - (signed int)v23) >> 2);
    v26 = v24 + (((signed int)v22 - (signed int)v23) >> 2);
    if ( 0 != HIDWORD(v22) >> 30 )
      v26 = 0x3FFFFFFF;
    if ( v25 < v24 )
    if ( v26 )
      if ( v26 >= 0x40000000 )
        sub_21E57F4();
      v27 = (char *)operator new(4 * v26);
      LODWORD(v22) = *(_QWORD *)(v20 + 92) >> 32;
      v23 = (void *)*(_QWORD *)(v20 + 92);
      v27 = 0;
    *(_DWORD *)&v27[v22 - (_DWORD)v23] = v7;
    v28 = &v27[v22 - (_DWORD)v23];
    if ( 0 != ((signed int)v22 - (signed int)v23) >> 2 )
      _aeabi_memmove4(v27, v23);
    if ( v23 )
      operator delete(v23);
    *(_DWORD *)(v20 + 92) = v27;
    *(_DWORD *)(v20 + 96) = v28 + 4;
    *(_DWORD *)(v20 + 100) = &v27[4 * v26];
  else
    *(_DWORD *)v22 = v7;
    *(_DWORD *)(v20 + 96) += 4;
  v29 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v44 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v30 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v43 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  v31 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v42 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
}


int __fastcall ScreenRenderBatch::ScreenRenderBatch(double a1)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int v3; // r7@3
  void *v4; // r5@3
  int result; // r0@4

  v1 = LODWORD(a1);
  *(_DWORD *)(LODWORD(a1) + 32) = 0;
  *(_DWORD *)(LODWORD(a1) + 36) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 0;
  *(_DWORD *)(LODWORD(a1) + 20) = 0;
  *(_DWORD *)(LODWORD(a1) + 8) = 0;
  *(_DWORD *)LODWORD(a1) = 0;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 40) = 1065353216;
  LODWORD(a1) += 40;
  v2 = sub_21E6254(a1);
  *(_DWORD *)(v1 + 28) = v2;
  if ( v2 == 1 )
  {
    *(_DWORD *)(v1 + 48) = 0;
    v4 = (void *)(v1 + 48);
  }
  else
    if ( v2 >= 0x40000000 )
      sub_21E57F4();
    v3 = 4 * v2;
    v4 = operator new(4 * v2);
    _aeabi_memclr4(v4, v3);
  result = v1;
  *(_DWORD *)(v1 + 24) = v4;
  return result;
}


int __fastcall ScreenRenderBatch::_populateRenderControlsGrid(int a1, int a2, GridComponent *this, int a4, int a5, int a6, int a7)
{
  GridComponent *v7; // r6@1
  UIControl *v8; // r4@1
  signed int v10; // r8@1
  __int64 v11; // kr00_8@1
  char *v12; // r0@1
  int v13; // r9@1
  int v16; // r7@1
  unsigned int *v17; // r1@2
  unsigned int v18; // r0@4
  unsigned int *v19; // r4@8
  unsigned int v20; // r0@10
  int v25; // r1@15
  int v28; // r0@15
  int v30; // r0@17
  int result; // r0@32
  signed int v39; // r9@35
  int v40; // r4@36
  char *v41; // r0@37
  int v42; // r8@37
  int v43; // r7@37
  unsigned __int16 v44; // r0@39
  int v45; // r6@40
  LayoutComponent *v46; // r7@41
  int v47; // r6@43
  char v48; // r0@43
  unsigned __int16 v49; // r0@45
  int v50; // r5@46
  DataBindingComponent *v51; // r6@47
  int v52; // r0@54
  unsigned int *v53; // r0@55
  unsigned int v54; // r1@57
  int v55; // r12@60
  int v56; // lr@60
  __int64 v57; // r2@60
  __int16 v58; // r7@60
  __int64 v59; // kr10_8@60
  __int64 v60; // kr18_8@60
  int v61; // r1@61
  int v62; // r8@62
  unsigned int *v63; // r1@63
  unsigned int v64; // r0@65
  unsigned int *v65; // r4@71
  unsigned int v66; // r0@73
  int v67; // [sp+18h] [bp-A8h]@26
  int v68; // [sp+1Ch] [bp-A4h]@1
  int v69; // [sp+20h] [bp-A0h]@32
  int v70; // [sp+24h] [bp-9Ch]@19
  int v71; // [sp+28h] [bp-98h]@17
  UIControl *v72; // [sp+38h] [bp-88h]@1
  int v73; // [sp+3Ch] [bp-84h]@33
  int v74; // [sp+40h] [bp-80h]@35
  signed int v75; // [sp+44h] [bp-7Ch]@19
  int v76; // [sp+50h] [bp-70h]@1
  int v77; // [sp+54h] [bp-6Ch]@54
  int v78; // [sp+58h] [bp-68h]@54
  int v79; // [sp+5Ch] [bp-64h]@60
  int v80; // [sp+60h] [bp-60h]@60
  int v81; // [sp+64h] [bp-5Ch]@60
  int v82; // [sp+68h] [bp-58h]@60
  __int16 v83; // [sp+6Ch] [bp-54h]@60
  int v84; // [sp+70h] [bp-50h]@60
  int v85; // [sp+74h] [bp-4Ch]@60
  UIControl *v86; // [sp+78h] [bp-48h]@1
  int v87; // [sp+7Ch] [bp-44h]@1

  v7 = this;
  v8 = (UIControl *)a2;
  v68 = a1;
  _R10 = a4;
  v72 = (UIControl *)a2;
  v11 = *(_QWORD *)GridComponent::getGridDimensions(this);
  v10 = HIDWORD(v11);
  v12 = UIControl::getChildren(v8);
  v13 = *((_DWORD *)v12 + 1);
  v76 = *(_DWORD *)v12;
  _R5 = UIControl::getPosition(v8);
  GridComponent::getGridItemTemplate((GridComponent *)&v86, (int)v7);
  _R6 = UIControl::getSize(v86);
  v16 = v87;
  if ( v87 )
  {
    v17 = (unsigned int *)(v87 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 == 1 )
      v19 = (unsigned int *)(v16 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
      if ( &pthread_create )
      {
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      }
      else
        v20 = (*v19)--;
      if ( v20 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  }
  __asm { VLDR            S6, [R10,#4] }
  v25 = 0;
  __asm
    VLDR            S0, [R5,#4]
    VLDR            S18, [R6,#4]
    VSUB.F32        S16, S6, S0
    VLDR            S10, [R10,#0xC]
    VLDR            S4, [R10]
    VLDR            S2, [R5]
    VSUB.F32        S6, S10, S6
    VLDR            S8, [R10,#8]
    VSUB.F32        S2, S4, S2
    VLDR            S0, [R6]
    VSUB.F32        S4, S8, S4
    VDIV.F32        S12, S16, S18
    VCVTR.S32.F32   S20, S6
    VCVTR.S32.F32   S4, S4
    VCVTR.S32.F32   S6, S12
    VDIV.F32        S14, S2, S0
    VMOV            R0, S6
    VCVTR.S32.F32   S8, S14
    VMOV            R4, S20
  v28 = _R0 - 1;
  if ( v28 <= 0 )
    v28 = 0;
  v71 = v28;
  __asm { VMOV            R0, S8 }
  v30 = _R0 - 1;
  if ( v30 > 0 )
    v25 = v30;
  __asm { VMOV            R0, S4 }
  v70 = v25;
  v75 = v11;
  if ( _R0 )
    __asm
      VCVT.F32.S32    S4, S4
      VADD.F32        S2, S4, S2
      VDIV.F32        S0, S2, S0
      VMOV            R0, S0
    _R0 = ceilf(_R0);
      VMOV.F32        S0, #1.0
      VMOV            S2, R0
      VADD.F32        S0, S2, S0
      VCVTR.S32.F32   S0, S0
    if ( _R0 >= (signed int)v11 )
      _R0 = v11;
    if ( _R0 <= 1 )
      _R0 = 1;
    v75 = _R0;
  if ( _R4 )
    v67 = v11;
      VCVT.F32.S32    S0, S20
      VADD.F32        S0, S0, S16
      VDIV.F32        S0, S0, S18
    if ( _R0 < SHIDWORD(v11) )
      v10 = _R0;
    if ( v10 <= 1 )
      v10 = 1;
  else
  result = v71;
  v69 = v10;
  if ( v71 < v10 )
    v73 = (v13 - v76) >> 3;
    do
      if ( v70 < v75 )
        v39 = v70;
        v74 = v67 * v71;
        {
          v40 = v39 + v74;
          if ( v39 + v74 >= v73 )
            break;
          v41 = UIControl::getChildren(v72);
          v42 = *(_DWORD *)v41;
          v43 = *(_DWORD *)(*(_DWORD *)v41 + 8 * v40);
          LOBYTE(v41) = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id;
          __dmb();
          if ( !((unsigned __int8)v41 & 1)
            && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id) )
          {
            v44 = typeid_t<UIComponent>::count[0]++;
            type_id<UIComponent,LayoutComponent>(void)::id[0] = v44;
            j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,LayoutComponent>(void)::id);
          }
          v45 = type_id<UIComponent,LayoutComponent>(void)::id[0];
          if ( UIControl::_hasComponent((UIControl *)v43, type_id<UIComponent,LayoutComponent>(void)::id[0]) == 1 )
            v46 = *(LayoutComponent **)(*(_DWORD *)(v43 + 108) + 4
                                                               * UIControl::_getComponentIndex((UIControl *)v43, v45));
          else
            v46 = 0;
          v47 = *(_DWORD *)(v42 + 8 * v40);
          v48 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id[0];
          if ( !(v48 & 1)
            && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id) )
            v49 = typeid_t<UIComponent>::count[0]++;
            type_id<UIComponent,DataBindingComponent>(void)::id[0] = v49;
            j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,DataBindingComponent>(void)::id);
          v50 = type_id<UIComponent,DataBindingComponent>(void)::id[0];
          if ( UIControl::_hasComponent((UIControl *)v47, type_id<UIComponent,DataBindingComponent>(void)::id[0]) != 1 )
            v51 = 0;
            v51 = *(DataBindingComponent **)(*(_DWORD *)(v47 + 108)
                                           + 4 * UIControl::_getComponentIndex((UIControl *)v47, v50));
          if ( v46 && LayoutComponent::isDelayingLayout(v46)
            || v51 && DataBindingComponent::getDirty(v51)
            || UIControl::getDelayCollectionUpdate(*(UIControl **)(v42 + 8 * v40)) == 1 )
            v77 = *(_DWORD *)(v42 + 8 * v40);
            v52 = *(_DWORD *)(v42 + 8 * v40 + 4);
            v78 = v52;
            if ( v52 )
            {
              v53 = (unsigned int *)(v52 + 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v54 = __ldrex(v53);
                while ( __strex(v54 + 1, v53) );
              }
              else
                ++*v53;
            }
            v55 = *(_DWORD *)_R10;
            v79 = *(_DWORD *)_R10;
            v56 = *(_DWORD *)(_R10 + 4);
            v80 = *(_DWORD *)(_R10 + 4);
            LODWORD(v57) = *(_DWORD *)(_R10 + 8);
            HIDWORD(v57) = *(_QWORD *)(_R10 + 8) >> 32;
            v81 = *(_QWORD *)(_R10 + 8);
            v82 = *(_DWORD *)(_R10 + 12);
            v58 = *(_WORD *)(_R10 + 16);
            v83 = *(_WORD *)(_R10 + 16);
            v59 = *(_QWORD *)a6;
            v84 = *(_QWORD *)a6;
            v85 = HIDWORD(v59);
            v60 = *(_QWORD *)(a7 + 4);
            if ( (_DWORD)v60 == HIDWORD(v60) )
              std::vector<RenderControlMetadata,std::allocator<RenderControlMetadata>>::_M_emplace_back_aux<RenderControlMetadata>(
                (unsigned __int64 *)a7,
                (int)&v77);
              v62 = v78;
              if ( v78 )
                v63 = (unsigned int *)(v78 + 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v64 = __ldrex(v63);
                  while ( __strex(v64 - 1, v63) );
                }
                else
                  v64 = (*v63)--;
                if ( v64 == 1 )
                  v65 = (unsigned int *)(v62 + 8);
                  (*(void (__fastcall **)(int))(*(_DWORD *)v62 + 8))(v62);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v66 = __ldrex(v65);
                    while ( __strex(v66 - 1, v65) );
                  }
                  else
                    v66 = (*v65)--;
                  if ( v66 == 1 )
                    (*(void (__fastcall **)(int))(*(_DWORD *)v62 + 12))(v62);
            else
              *(_DWORD *)v60 = v77;
              v61 = v78;
              v78 = 0;
              *(_DWORD *)(v60 + 4) = v61;
              v77 = 0;
              *(_DWORD *)(v60 + 8) = v55;
              *(_DWORD *)(v60 + 12) = v56;
              *(_QWORD *)(v60 + 16) = v57;
              *(_WORD *)(v60 + 24) = v58;
              *(_QWORD *)(v60 + 28) = v59;
              *(_DWORD *)(a7 + 4) += 36;
          else if ( UIControl::getVisible(*(UIControl **)(v42 + 8 * v40)) == 1 )
            ScreenRenderBatch::_populateRenderControlsCollection(
              v68,
              *(UIControl **)(v42 + 8 * v40),
              _R10,
              a5,
              a6,
              a7,
              0);
          ++v39;
        }
        while ( v39 < v75 );
      result = v69;
      ++v71;
    while ( v71 < v69 );
  return result;
}


unsigned int __fastcall ScreenRenderBatch::update(int a1, UIControl **a2, int a3, int a4)
{
  UIControl **v4; // r5@1
  int v5; // r4@1
  int v6; // r6@1
  unsigned int result; // r0@1
  UIControl *v8; // r1@2
  int v9; // [sp+10h] [bp-28h]@2
  int v10; // [sp+14h] [bp-24h]@2
  int v11; // [sp+18h] [bp-20h]@2
  int v12; // [sp+1Ch] [bp-1Ch]@2
  __int16 v13; // [sp+20h] [bp-18h]@2

  v4 = a2;
  v5 = a1;
  v6 = a4;
  result = UIControl::getVisible(*a2);
  if ( result == 1 )
  {
    v8 = *v4;
    v13 = 0;
    v11 = 0;
    v12 = 0;
    v9 = 0;
    v10 = 0;
    result = ScreenRenderBatch::_populateRenderControlsCollection(v5, v8, (int)(v4 + 2), (int)&v9, (int)(v4 + 7), v6, 0);
  }
  return result;
}


int __fastcall ScreenRenderBatch::_sortRenderControlsCollection(int result)
{
  __int64 v1; // r4@1
  int v2; // r6@3
  int v3; // r7@4
  bool v4; // zf@5

  v1 = *(_QWORD *)result;
  if ( (_DWORD)v1 != HIDWORD(v1) )
  {
    sub_12F0EEC(v1, SHIDWORD(v1), 2 * (31 - __clz(954437177 * ((HIDWORD(v1) - (signed int)v1) >> 2))), 0);
    if ( HIDWORD(v1) - (signed int)v1 <= 576 )
    {
      result = (int)sub_12F1A14((UIControl **)v1, (UIControl **)HIDWORD(v1));
    }
    else
      v2 = v1 + 576;
      result = (int)sub_12F1A14((UIControl **)v1, (UIControl **)(v1 + 576));
      if ( (_DWORD)v1 + 576 != HIDWORD(v1) )
      {
        v3 = HIDWORD(v1) - 576;
        do
        {
          HIDWORD(v1) &= 0xFFFFFF00;
          sub_12F1C18(v2);
          result = v1 + 36;
          v2 = v1 + 612;
          v4 = v3 == (_DWORD)v1 + 36;
          LODWORD(v1) = v1 + 36;
        }
        while ( !v4 );
      }
  }
  return result;
}


void __fastcall ScreenRenderBatch::_addToRenderBatch(int a1, int a2, int a3, int a4, int *a5)
{
  ScreenRenderBatch::_addToRenderBatch(a1, a2, a3, a4, a5);
}


mce::TexturePtr *__fastcall ScreenRenderBatch::_storeTextureState(ScreenRenderBatch *this, UIControl *a2, int a3)
{
  UIControl *v3; // r6@1
  ScreenRenderBatch *v4; // r4@1
  UIControl **v5; // r5@2
  __int64 v6; // kr00_8@2
  UIControl *v7; // t1@3
  char v8; // r0@4
  int v9; // r5@7
  mce::TexturePtr *result; // r0@7
  int v11; // r1@8
  SpriteComponent *v12; // r7@8
  char *v13; // r0@9
  char *v14; // r0@10
  mce::Texture *v15; // r0@10
  char *v16; // r0@11
  unsigned int v17; // r0@11
  unsigned int v18; // r11@11
  int v19; // r5@11
  mce::TexturePtr *v20; // r8@12
  int v21; // r6@12
  mce::TexturePtr *v22; // r9@14
  bool v23; // zf@17
  char *v24; // r0@23
  unsigned int v25; // r6@23
  char *v26; // r0@23
  void *v27; // r0@23
  int v28; // r10@23
  mce::TexturePtr *v29; // r8@23
  __int64 v30; // kr08_8@23
  int v31; // r7@23
  _DWORD *v32; // r0@23
  _DWORD *v33; // r6@24
  int v34; // r5@24
  _DWORD *v35; // r4@26
  bool v36; // zf@29
  int v37; // [sp+0h] [bp-48h]@11
  char v38; // [sp+4h] [bp-44h]@1
  char v39; // [sp+8h] [bp-40h]@23
  char v40; // [sp+20h] [bp-28h]@23

  v3 = a2;
  v4 = this;
  v38 = a3;
  if ( !a3 )
  {
    v6 = *(_QWORD *)UIControl::getChildren(a2);
    v5 = (UIControl **)v6;
    if ( (_DWORD)v6 != HIDWORD(v6) )
    {
      do
      {
        v7 = *v5;
        v5 += 2;
        ScreenRenderBatch::_storeTextureState(v4, v7, 0);
      }
      while ( (UIControl **)HIDWORD(v6) != v5 );
    }
  }
  v8 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id;
  __dmb();
  if ( !(v8 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id) )
    type_id<UIComponent,SpriteComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id);
  v9 = type_id<UIComponent,SpriteComponent>(void)::id[0];
  result = (mce::TexturePtr *)UIControl::_hasComponent(v3, type_id<UIComponent,SpriteComponent>(void)::id[0]);
  if ( result == (mce::TexturePtr *)1 )
    result = (mce::TexturePtr *)UIControl::_getComponentIndex(v3, v9);
    v11 = *((_DWORD *)v3 + 27);
    v12 = *(SpriteComponent **)(v11 + 4 * (_DWORD)result);
    if ( v12 )
      v13 = SpriteComponent::getTexture(*(SpriteComponent **)(v11 + 4 * (_DWORD)result));
      result = (mce::TexturePtr *)mce::TexturePtr::operator bool((int)v13);
      if ( result == (mce::TexturePtr *)1 )
        v14 = SpriteComponent::getTexture(v12);
        v15 = (mce::Texture *)mce::TexturePtr::operator->((int)v14);
        result = (mce::TexturePtr *)mce::Texture::isCreated(v15);
        if ( result == (mce::TexturePtr *)1 )
        {
          v16 = SpriteComponent::getTexture(v12);
          v17 = mce::TexturePtr::hashCode((mce::TexturePtr *)v16);
          v18 = v17;
          v37 = (int)v4 + 24;
          v19 = v17 % *((_DWORD *)v4 + 7);
          result = *(mce::TexturePtr **)(*((_DWORD *)v4 + 6) + 4 * v19);
          if ( !result )
            goto LABEL_23;
          v20 = *(mce::TexturePtr **)result;
          v21 = *(_DWORD *)(*(_DWORD *)result + 4);
          while ( v18 != v21 )
          {
            v22 = *(mce::TexturePtr **)v20;
            if ( *(_DWORD *)v20 )
            {
              v21 = *((_DWORD *)v22 + 1);
              result = v20;
              v20 = *(mce::TexturePtr **)v20;
              if ( *((_DWORD *)v22 + 1) % *((_DWORD *)v4 + 7) == v19 )
                continue;
            }
          }
          v23 = result == 0;
          if ( result )
            result = *(mce::TexturePtr **)result;
            v23 = result == 0;
          if ( v23 )
LABEL_23:
            v24 = SpriteComponent::getTexture(v12);
            v25 = mce::TexturePtr::hashCode((mce::TexturePtr *)v24);
            v26 = SpriteComponent::getTexture(v12);
            mce::TexturePtr::clone((mce::TexturePtr *)&v39, (int)v26);
            v40 = v38;
            v27 = operator new(0x24u);
            v28 = (int)v27;
            v29 = (mce::TexturePtr *)((char *)v27 + 8);
            *(_DWORD *)v27 = 0;
            *((_DWORD *)v27 + 1) = v25;
            mce::TexturePtr::TexturePtr((int)v27 + 8, (int)&v39);
            *(_BYTE *)(v28 + 32) = v40;
            v30 = *((_QWORD *)v4 + 3);
            v31 = *(_DWORD *)(v28 + 4) % (unsigned int)(*((_QWORD *)v4 + 3) >> 32);
            v32 = *(_DWORD **)(v30 + 4 * v31);
            if ( !v32 )
              goto LABEL_33;
            v33 = (_DWORD *)*v32;
            v34 = *(_DWORD *)(*v32 + 4);
            while ( *(_DWORD *)(v28 + 4) != v34 )
              v35 = (_DWORD *)*v33;
              if ( *v33 )
              {
                v34 = v35[1];
                v32 = v33;
                v33 = (_DWORD *)*v33;
                if ( v35[1] % HIDWORD(v30) == v31 )
                  continue;
              }
            v36 = v32 == 0;
            if ( v32 )
              v36 = *v32 == 0;
            if ( v36 )
LABEL_33:
              std::_Hashtable<unsigned int,std::pair<unsigned int const,TextureState>,std::allocator<std::pair<unsigned int const,TextureState>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
                v37,
                v31,
                *(_DWORD *)(v28 + 4),
                v28);
            else
              mce::TexturePtr::~TexturePtr(v29);
              operator delete((void *)v28);
            result = mce::TexturePtr::~TexturePtr((mce::TexturePtr *)&v39);
          else if ( !*((_BYTE *)result + 32) )
            *((_BYTE *)result + 32) = v38;
        }
  return result;
}


void __fastcall ScreenRenderBatch::_addToRenderBatch(int a1, int a2, SpriteComponent *this, int a4, int a5)
{
  ScreenRenderBatch::_addToRenderBatch(a1, a2, this, a4, a5);
}


int __fastcall ScreenRenderBatch::_populateRenderBatch(ScreenRenderBatch *a1, int a2)
{
  ScreenRenderBatch *v2; // r4@1
  int result; // r0@1
  int v4; // r7@1
  UIControl *v5; // r5@2
  char v6; // r0@2
  unsigned __int16 v7; // r0@4
  int v8; // r6@5
  int v9; // r5@6
  int v10; // r0@7
  UIControl *v11; // r5@8
  char v12; // r0@8
  unsigned __int16 v13; // r0@10
  int v14; // r6@11
  SpriteComponent *v15; // r5@12
  int v16; // r0@13
  UIControl *v17; // r5@14
  char v18; // r0@14
  int v19; // r6@17
  int v20; // r5@18
  int v21; // r0@19
  int v22; // [sp+8h] [bp-38h]@1
  ScreenRenderBatch *v23; // [sp+Ch] [bp-34h]@1
  int i; // [sp+10h] [bp-30h]@1

  v2 = a1;
  v22 = a2;
  v23 = a1;
  ScreenRenderBatch::_sortRenderControlsCollection(a1);
  result = *(_QWORD *)v2 >> 32;
  v4 = *(_QWORD *)v2;
  for ( i = result; i != v4; result = i )
  {
    v5 = *(UIControl **)v4;
    v6 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id;
    __dmb();
    if ( !(v6 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id) )
    {
      v7 = typeid_t<UIComponent>::count[0]++;
      type_id<UIComponent,TextComponent>(void)::id[0] = v7;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,TextComponent>(void)::id);
    }
    v8 = type_id<UIComponent,TextComponent>(void)::id[0];
    if ( UIControl::_hasComponent(v5, type_id<UIComponent,TextComponent>(void)::id[0]) == 1 )
      v9 = *(_DWORD *)(*((_DWORD *)v5 + 27) + 4 * UIControl::_getComponentIndex(v5, v8));
      if ( v9 )
      {
        v10 = UIControl::getZOrder(*(UIControl **)v4);
        ScreenRenderBatch::_addToRenderBatch((int)v23, v10, v9, v4 + 8, (int *)(v4 + 28));
      }
    v11 = *(UIControl **)v4;
    v12 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id;
    if ( !(v12 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id) )
      v13 = typeid_t<UIComponent>::count[0]++;
      type_id<UIComponent,SpriteComponent>(void)::id[0] = v13;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id);
    v14 = type_id<UIComponent,SpriteComponent>(void)::id[0];
    if ( UIControl::_hasComponent(v11, type_id<UIComponent,SpriteComponent>(void)::id[0]) == 1 )
      v15 = *(SpriteComponent **)(*((_DWORD *)v11 + 27) + 4 * UIControl::_getComponentIndex(v11, v14));
      if ( v15 )
        v16 = UIControl::getZOrder(*(UIControl **)v4);
        ScreenRenderBatch::_addToRenderBatch((int)v23, v16, v15, v4 + 8, v4 + 28);
    v17 = *(UIControl **)v4;
    v18 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,CustomRenderComponent>(void)::id;
    if ( !(v18 & 1)
      && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CustomRenderComponent>(void)::id) )
      type_id<UIComponent,CustomRenderComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
      j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,CustomRenderComponent>(void)::id);
    v19 = type_id<UIComponent,CustomRenderComponent>(void)::id[0];
    if ( UIControl::_hasComponent(v17, type_id<UIComponent,CustomRenderComponent>(void)::id[0]) == 1 )
      v20 = *(_DWORD *)(*((_DWORD *)v17 + 27) + 4 * UIControl::_getComponentIndex(v17, v19));
      if ( v20 )
        v21 = UIControl::getZOrder(*(UIControl **)v4);
        ScreenRenderBatch::_addToRenderBatch((int)v23, v22, v21, v20, v4 + 8);
    v4 += 36;
  }
  return result;
}


int __fastcall ScreenRenderBatch::_populateRenderControlsCollection(int a1, UIControl *this, int a3, int a4, int a5, int a6, int a7)
{
  ScreenRenderBatch *v8; // r10@1
  UIControl *v9; // r6@1
  _DWORD *v16; // r0@2
  __int64 v17; // r1@2
  RectangleArea *v22; // r0@7
  int v27; // r0@12
  int v28; // r9@22
  char v29; // r0@24
  int v30; // r7@27
  char v31; // r0@29
  int v32; // r7@32
  signed int v33; // r11@35
  signed int v34; // r0@34
  char v35; // r0@38
  int v36; // r7@41
  int v37; // r0@42
  int v38; // r1@42
  GridComponent *v39; // r7@42
  char *v40; // r0@44
  UIControl **v41; // r7@46
  __int64 v42; // kr08_8@46
  int v44; // [sp+0h] [bp-B0h]@0
  int v45; // [sp+Ch] [bp-A4h]@1
  float v46; // [sp+10h] [bp-A0h]@12
  char v48; // [sp+18h] [bp-98h]@7
  _DWORD *v49; // [sp+28h] [bp-88h]@2
  __int64 v50; // [sp+30h] [bp-80h]@2
  __int64 v51; // [sp+38h] [bp-78h]@1
  int v52; // [sp+44h] [bp-6Ch]@1
  int v53; // [sp+48h] [bp-68h]@1
  int v54; // [sp+4Ch] [bp-64h]@1
  int v55; // [sp+50h] [bp-60h]@1
  __int16 v56; // [sp+54h] [bp-5Ch]@1

  _R7 = a3;
  v8 = (ScreenRenderBatch *)a1;
  v9 = this;
  v52 = *(_DWORD *)a3;
  v53 = *(_DWORD *)(a3 + 4);
  v54 = *(_DWORD *)(a3 + 8);
  v55 = *(_DWORD *)(a3 + 12);
  v45 = a4;
  v56 = *(_WORD *)(a3 + 16);
  _KR00_8 = *(_QWORD *)a5;
  v51 = *(_QWORD *)a5;
  __asm { VMOV            S16, R4 }
  _R0 = UIControl::getAlpha(this);
  __asm
  {
    VMOV            S0, R0
    VMUL.F32        S16, S0, S16
    VSTR            S16, [SP,#0xB0+var_78]
  }
  if ( UIControl::hasRenderableComponent(v9) == 1 )
    v16 = operator new(8u);
    LODWORD(v17) = sub_12F0EB0;
    v16[1] = HIDWORD(_KR00_8);
    HIDWORD(v17) = sub_12F0EA4;
    __asm { VSTR            S16, [R0] }
    v49 = v16;
    v50 = v17;
    UIControl::foreachRenderableComponents((int)v9, (int)&v49);
    if ( (_DWORD)v50 )
      ((void (*)(void))v50)();
  if ( UIControl::propagateAlpha(v9) == 1 )
    _R0 = UIControl::getAlpha(v9);
    __asm
    {
      VMOV            S0, R0
      VLDR            S2, [SP,#0xB0+var_78+4]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [SP,#0xB0+var_78+4]
    }
  if ( UIControl::getClipsChildren(v9) == 1 )
    _R0 = UIControl::getPosition(v9);
      VLDR            S16, [R0]
      VLDR            S18, [R0,#4]
    _R5 = UIControl::getPosition(v9);
    _R0 = UIControl::getSize(v9);
      VLDR            S20, [R0]
      VLDR            S22, [R0,#4]
      VLDR            S24, [R5]
      VLDR            S26, [R5,#4]
      VLDR            S0, [R7,#0xC]
      VSTR            S0, [SP,#0xB0+var_B0]
    v22 = (RectangleArea *)RectangleArea::RectangleArea(
                             COERCE_FLOAT(&v48),
                             *(_DWORD *)_R7,
                             *(_DWORD *)(_R7 + 4),
                             *(_DWORD *)(_R7 + 8),
                             v44);
      VADD.F32        S22, S22, S26
      VADD.F32        S20, S20, S24
    if ( !RectangleArea::isEmpty(v22) )
      __asm
      {
        VMOV            R8, S16
        VMOV            R9, S18
      }
      if ( !RectangleArea::isInside((RectangleArea *)&v48, _R8, _R9) )
        __asm { VMOV            R4, S20 }
        if ( !RectangleArea::isInside((RectangleArea *)&v48, _R4, _R9) )
        {
          __asm { VMOV            R9, S22 }
          if ( !RectangleArea::isInside((RectangleArea *)&v48, _R4, _R9)
            && RectangleArea::isInside((RectangleArea *)&v48, _R8, _R9) != 1 )
          {
            v33 = 0;
            ScreenRenderBatch::_storeTextureState(v8, v9, 0);
            return v33;
          }
        }
    LOBYTE(v56) = 1;
    UIControl::getClipOffset((UIControl *)&v46, (int)v9);
      VLDR            S6, [SP,#0xB0+var_A0]
      VLDR            S4, [SP,#0xB0+var_9C]
      VSUB.F32        S2, S20, S6
    v27 = *(_BYTE *)(_R7 + 16);
      VSUB.F32        S0, S22, S4
      VADD.F32        S4, S4, S18
      VADD.F32        S6, S6, S16
    if ( !_ZF )
        VLDR            S14, [R7,#0xC]
        VLDR            S12, [R7,#8]
        VCMPE.F32       S14, S0
        VLDR            S8, [R7]
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S12, S2
        VLDR            S10, [R7,#4]
      if ( _NF ^ _VF )
        __asm { VMOVLT.F32      S0, S14 }
        VCMPE.F32       S10, S4
        __asm { VMOVLT.F32      S2, S12 }
        VCMPE.F32       S8, S6
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S4, S10 }
      __asm { VMRS            APSR_nzcv, FPSCR }
        __asm { VMOVGT.F32      S6, S8 }
      VSTR            S6, [SP,#0xB0+var_6C]
      VSTR            S4, [SP,#0xB0+var_68]
      VSTR            S2, [SP,#0xB0+var_64]
      VSTR            S0, [SP,#0xB0+var_60]
  v28 = UIControl::hasRenderableComponent(v9);
  if ( UIControl::getAllowClipping(v9) != 1 )
    v33 = 1;
    if ( v28 != 1 )
      goto LABEL_38;
    v34 = ScreenRenderBatch::_addRenderControl(__PAIR__((unsigned int)v9, (unsigned int)v8), v45, &v51, 1);
    goto LABEL_37;
  HIBYTE(v56) = UIControl::getEnableScissorTestForClipping(v9);
  if ( v28 | a7 )
    goto LABEL_34;
  v29 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
  __dmb();
  if ( !(v29 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id) )
    type_id<UIComponent,GridComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id);
  v30 = type_id<UIComponent,GridComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v9, type_id<UIComponent,GridComponent>(void)::id[0]) == 1 )
    if ( *(_DWORD *)(*((_DWORD *)v9 + 27) + 4 * UIControl::_getComponentIndex(v9, v30)) )
LABEL_34:
      v34 = ScreenRenderBatch::_addRenderControl(__PAIR__((unsigned int)v9, (unsigned int)v8), (int)&v52, &v51, v28);
LABEL_37:
      v33 = v34;
  v31 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,StackPanelComponent>(void)::id;
  if ( !(v31 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,StackPanelComponent>(void)::id) )
    type_id<UIComponent,StackPanelComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,StackPanelComponent>(void)::id);
  v32 = type_id<UIComponent,StackPanelComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v9, type_id<UIComponent,StackPanelComponent>(void)::id[0]) == 1 )
    if ( *(_DWORD *)(*((_DWORD *)v9 + 27) + 4 * UIControl::_getComponentIndex(v9, v32)) )
      goto LABEL_34;
  else
LABEL_38:
  v35 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridComponent>(void)::id;
  if ( !(v35 & 1)
  v36 = type_id<UIComponent,GridComponent>(void)::id[0];
  if ( UIControl::_hasComponent(v9, type_id<UIComponent,GridComponent>(void)::id[0]) == 1
    && (v37 = UIControl::_getComponentIndex(v9, v36),
        v38 = *((_DWORD *)v9 + 27),
        (v39 = *(GridComponent **)(v38 + 4 * v37)) != 0)
    && GridComponent::isDynamic(*(GridComponent **)(v38 + 4 * v37)) == 1 )
    v40 = UIControl::getChildren(v9);
    if ( (unsigned int)*(_QWORD *)v40 != *(_QWORD *)v40 >> 32 )
      ScreenRenderBatch::_populateRenderControlsGrid((int)v8, (int)v9, v39, (int)&v52, v45, (int)&v51, a6);
    v42 = *(_QWORD *)UIControl::getChildren(v9);
    v41 = (UIControl **)v42;
    if ( (_DWORD)v42 != HIDWORD(v42) )
      do
        if ( UIControl::getVisible(*v41) == 1 )
          ScreenRenderBatch::_populateRenderControlsCollection((int)v8, *v41, (int)&v52, v45, (int)&v51, a6, 0);
        v41 += 2;
      while ( (UIControl **)HIDWORD(v42) != v41 );
  return v33;
}


ScreenRenderBatch *__fastcall ScreenRenderBatch::~ScreenRenderBatch(ScreenRenderBatch *this)
{
  ScreenRenderBatch *v1; // r8@1
  int v2; // r5@1
  int v3; // r4@2
  char *v4; // r0@3
  void *v5; // r0@6
  int v6; // r5@8
  int v7; // r7@8
  int v8; // r4@9
  unsigned int *v9; // r1@10
  unsigned int v10; // r0@12
  unsigned int *v11; // r6@16
  unsigned int v12; // r0@18

  v1 = this;
  v2 = *((_DWORD *)this + 8);
  if ( v2 )
  {
    do
    {
      v3 = *(_DWORD *)v2;
      mce::TexturePtr::~TexturePtr((mce::TexturePtr *)(v2 + 8));
      operator delete((void *)v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*((_QWORD *)v1 + 3), 4 * (*((_QWORD *)v1 + 3) >> 32));
  *((_DWORD *)v1 + 8) = 0;
  *((_DWORD *)v1 + 9) = 0;
  v4 = (char *)*((_DWORD *)v1 + 6);
  if ( v4 && (char *)v1 + 48 != v4 )
    operator delete(v4);
  std::_Destroy<ComponentRenderBatch *,ComponentRenderBatch>(*((_DWORD *)v1 + 3), *((_DWORD *)v1 + 4));
  v5 = (void *)*((_DWORD *)v1 + 3);
  if ( v5 )
    operator delete(v5);
  v7 = *(_QWORD *)v1 >> 32;
  v6 = *(_QWORD *)v1;
  if ( v6 != v7 )
      v8 = *(_DWORD *)(v6 + 4);
      if ( v8 )
      {
        v9 = (unsigned int *)(v8 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
          v10 = (*v9)--;
        if ( v10 == 1 )
          v11 = (unsigned int *)(v8 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          if ( &pthread_create )
          {
            __dmb();
            do
              v12 = __ldrex(v11);
            while ( __strex(v12 - 1, v11) );
          }
          else
            v12 = (*v11)--;
          if ( v12 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
      }
      v6 += 36;
    while ( v6 != v7 );
    v6 = *(_DWORD *)v1;
  if ( v6 )
    operator delete((void *)v6);
  return v1;
}


void __fastcall ScreenRenderBatch::_addToRenderBatch(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r8@1
  int v6; // r4@1
  int v7; // r6@1
  CustomRenderComponent *v8; // r5@1
  char *v9; // r4@2
  int v10; // r7@2
  int *v11; // r6@3
  void **v12; // r5@3
  int v13; // r10@3
  const char *v14; // r0@4
  int v15; // r9@4
  int v16; // r4@4
  int v17; // r5@4
  int v18; // r11@4
  int v19; // r7@5
  bool v20; // zf@8
  int v21; // r0@12
  __int64 v22; // r0@17
  int *v23; // r11@18
  void *v24; // r6@19
  char *v25; // r11@19
  unsigned int v26; // r2@19
  unsigned int v27; // r1@21
  unsigned int v28; // r5@21
  int *v29; // r4@28
  int v30; // r4@30
  int v31; // r0@32
  void *v32; // r0@33
  void *v33; // r0@34
  void *v34; // r0@35
  unsigned int *v35; // r2@38
  signed int v36; // r1@40
  unsigned int *v37; // r2@42
  signed int v38; // r1@44
  unsigned int *v39; // r2@46
  signed int v40; // r1@48
  void *v41; // r0@63
  void *v42; // r0@64
  void *v43; // r0@65
  unsigned int *v44; // r2@67
  signed int v45; // r1@69
  unsigned int *v46; // r2@71
  signed int v47; // r1@73
  unsigned int *v48; // r2@75
  signed int v49; // r1@77
  unsigned __int64 *v50; // [sp+8h] [bp-A8h]@3
  int v51; // [sp+1Ch] [bp-94h]@2
  int v52; // [sp+20h] [bp-90h]@1
  int v53; // [sp+24h] [bp-8Ch]@2
  int v54; // [sp+2Ch] [bp-84h]@3
  int v55; // [sp+30h] [bp-80h]@4
  int v56; // [sp+34h] [bp-7Ch]@4
  int v57; // [sp+38h] [bp-78h]@3
  int v58; // [sp+3Ch] [bp-74h]@4
  char v59; // [sp+40h] [bp-70h]@2
  CustomRenderComponent *v60; // [sp+44h] [bp-6Ch]@2
  int v61; // [sp+74h] [bp-3Ch]@4
  int v62; // [sp+78h] [bp-38h]@4
  int v63; // [sp+7Ch] [bp-34h]@4
  int v64; // [sp+80h] [bp-30h]@4
  int v65; // [sp+84h] [bp-2Ch]@4

  v5 = a4;
  v6 = a1;
  v7 = a3;
  v52 = CustomRenderComponent::update(a4, a2);
  v8 = (CustomRenderComponent *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 76))(v5);
  if ( v8 != (CustomRenderComponent *)CustomRenderComponent::getInvalidCustomId(v8) )
  {
    v53 = v6;
    v9 = &v59;
    v10 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 72))(v5);
    BatchKey::BatchKey((int)&v59, v7, 1065353216, a5);
    *(_DWORD *)&v59 = v10;
    v60 = v8;
    v51 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 80))(v5);
    if ( v51 >= 1 )
    {
      v11 = &v57;
      v12 = (void **)&v54;
      v13 = 0;
      v50 = (unsigned __int64 *)(v53 + 12);
      do
      {
        (*(void (__fastcall **)(int *, int, _DWORD, int))(*(_DWORD *)v5 + 88))(v11, v5, 0, v13);
        (*(void (__fastcall **)(int *, int, signed int, int))(*(_DWORD *)v5 + 88))(&v55, v5, 1, v13);
        v14 = (const char *)(*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 84))(v5, v13);
        sub_21E94B4(v12, v14);
        v15 = (int)v9;
        EntityInteraction::setInteractText(&v61, (int *)v12);
        v16 = v53;
        EntityInteraction::setInteractText(&v62, v11);
        v63 = v58;
        EntityInteraction::setInteractText(&v64, &v55);
        v65 = v56;
        v18 = *(_QWORD *)(v53 + 12) >> 32;
        v17 = *(_QWORD *)(v53 + 12);
        if ( v17 == v18 )
          goto LABEL_93;
        v19 = 0;
        while ( !BatchKey::operator==(v15, v17) )
        {
          v20 = v18 - 116 == v17;
          v17 += 116;
          if ( v20 )
            goto LABEL_10;
        }
        v19 = v17;
LABEL_10:
        v11 = &v57;
        if ( !v19 )
LABEL_93:
          if ( v18 == *(_DWORD *)(v16 + 20) )
          {
            std::vector<ComponentRenderBatch,std::allocator<ComponentRenderBatch>>::_M_emplace_back_aux<BatchKey &>(
              v50,
              v15);
            v21 = *(_DWORD *)(v16 + 16);
          }
          else
            ComponentRenderBatch::ComponentRenderBatch(v18, v15);
            v21 = *(_DWORD *)(v16 + 16) + 116;
            *(_DWORD *)(v16 + 16) = v21;
          v19 = v21 - 116;
        if ( v52 == 1 )
          *(_BYTE *)(v19 + 72) = 1;
        *(_BYTE *)(v19 + 73) = (*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 92))(v5, v13);
        *(_DWORD *)(v19 + 76) = v13;
        v22 = *(_QWORD *)(v19 + 84);
        if ( (_DWORD)v22 == HIDWORD(v22) )
          v24 = *(void **)(v19 + 80);
          v25 = 0;
          v26 = ((signed int)v22 - (signed int)v24) >> 2;
          if ( !v26 )
            v26 = 1;
          HIDWORD(v22) = v26 + (((signed int)v22 - (signed int)v24) >> 2);
          v28 = v26 + (((signed int)v22 - (signed int)v24) >> 2);
          if ( 0 != HIDWORD(v22) >> 30 )
            v28 = 0x3FFFFFFF;
          if ( v27 < v26 )
          if ( v28 )
            if ( v28 >= 0x40000000 )
              sub_21E57F4();
            v25 = (char *)operator new(4 * v28);
            LODWORD(v22) = *(_QWORD *)(v19 + 80) >> 32;
            v24 = (void *)*(_QWORD *)(v19 + 80);
          v29 = (int *)&v25[v22 - (_DWORD)v24];
          *v29 = v5;
          if ( ((signed int)v22 - (signed int)v24) >> 2 )
            _aeabi_memmove4(v25, v24);
          v30 = (int)(v29 + 1);
          if ( v24 )
            operator delete(v24);
          v31 = (int)&v25[4 * v28];
          *(_DWORD *)(v19 + 80) = v25;
          *(_DWORD *)(v19 + 84) = v30;
          v23 = &v57;
          *(_DWORD *)(v19 + 88) = v31;
        else
          *(_DWORD *)v22 = v5;
          v23 = v11;
          v53 = v16;
          *(_DWORD *)(v19 + 84) += 4;
        v9 = (char *)v15;
        v12 = (void **)&v54;
        v32 = (void *)(v54 - 12);
        if ( (int *)(v54 - 12) != &dword_28898C0 )
          v35 = (unsigned int *)(v54 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v36 = __ldrex(v35);
            while ( __strex(v36 - 1, v35) );
            v36 = (*v35)--;
          if ( v36 <= 0 )
            j_j_j_j__ZdlPv_9(v32);
        v33 = (void *)(v55 - 12);
        if ( (int *)(v55 - 12) != &dword_28898C0 )
          v37 = (unsigned int *)(v55 - 4);
              v38 = __ldrex(v37);
            while ( __strex(v38 - 1, v37) );
            v38 = (*v37)--;
          if ( v38 <= 0 )
            j_j_j_j__ZdlPv_9(v33);
        v34 = (void *)(v57 - 12);
        if ( (int *)(v57 - 12) != &dword_28898C0 )
          v39 = (unsigned int *)(v57 - 4);
              v40 = __ldrex(v39);
            while ( __strex(v40 - 1, v39) );
            v40 = (*v39)--;
          if ( v40 <= 0 )
            j_j_j_j__ZdlPv_9(v34);
        ++v13;
        v11 = v23;
      }
      while ( v13 < v51 );
    }
    v41 = (void *)(v64 - 12);
    if ( (int *)(v64 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v64 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
      else
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v41);
    v42 = (void *)(v62 - 12);
    if ( (int *)(v62 - 12) != &dword_28898C0 )
      v46 = (unsigned int *)(v62 - 4);
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
        v47 = (*v46)--;
      if ( v47 <= 0 )
        j_j_j_j__ZdlPv_9(v42);
    v43 = (void *)(v61 - 12);
    if ( (int *)(v61 - 12) != &dword_28898C0 )
      v48 = (unsigned int *)(v61 - 4);
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 <= 0 )
        j_j_j_j__ZdlPv_9(v43);
  }
}


void __fastcall ScreenRenderBatch::_addToRenderBatch(int a1, int a2, int a3, int a4, int *a5)
{
  int v5; // r9@1
  int v6; // r8@1
  int v7; // r4@1
  int v8; // r10@1
  int v9; // r7@2
  bool v10; // zf@5
  int v11; // r0@9
  __int64 v12; // r0@12
  void *v13; // r5@14
  unsigned int v14; // r2@14
  unsigned int v15; // r1@16
  unsigned int v16; // r4@16
  char *v17; // r6@22
  char *v18; // r8@24
  int v19; // r8@26
  void *v20; // r0@29
  void *v21; // r0@30
  void *v22; // r0@31
  unsigned int *v23; // r2@33
  signed int v24; // r1@35
  unsigned int *v25; // r2@37
  signed int v26; // r1@39
  unsigned int *v27; // r2@41
  signed int v28; // r1@43
  int v29; // [sp+0h] [bp-70h]@1
  int v30; // [sp+34h] [bp-3Ch]@31
  int v31; // [sp+38h] [bp-38h]@30
  int v32; // [sp+40h] [bp-30h]@29

  v5 = a1;
  v6 = a3;
  BatchKey::BatchKey((int)&v29, a2, *a5, a4);
  v7 = *(_DWORD *)(v5 + 12);
  v8 = *(_DWORD *)(v5 + 16);
  if ( v7 == v8 )
    goto LABEL_60;
  v9 = 0;
  while ( !BatchKey::operator==((int)&v29, v7) )
  {
    v10 = v8 - 116 == v7;
    v7 += 116;
    if ( v10 )
      goto LABEL_7;
  }
  v9 = v7;
LABEL_7:
  if ( !v9 )
LABEL_60:
    if ( v8 == *(_DWORD *)(v5 + 20) )
    {
      std::vector<ComponentRenderBatch,std::allocator<ComponentRenderBatch>>::_M_emplace_back_aux<BatchKey &>(
        (unsigned __int64 *)(v5 + 12),
        (int)&v29);
      v11 = *(_DWORD *)(v5 + 16);
    }
    else
      ComponentRenderBatch::ComponentRenderBatch(v8, (int)&v29);
      v11 = *(_DWORD *)(v5 + 16) + 116;
      *(_DWORD *)(v5 + 16) = v11;
    v9 = v11 - 116;
  v12 = *(_QWORD *)(v9 + 108);
  if ( (_DWORD)v12 == HIDWORD(v12) )
    v13 = *(void **)(v9 + 104);
    v14 = ((signed int)v12 - (signed int)v13) >> 2;
    if ( !v14 )
      v14 = 1;
    HIDWORD(v12) = v14 + (((signed int)v12 - (signed int)v13) >> 2);
    v16 = v14 + (((signed int)v12 - (signed int)v13) >> 2);
    if ( 0 != HIDWORD(v12) >> 30 )
      v16 = 0x3FFFFFFF;
    if ( v15 < v14 )
    if ( v16 )
      if ( v16 >= 0x40000000 )
        sub_21E57F4();
      v17 = (char *)operator new(4 * v16);
      LODWORD(v12) = *(_QWORD *)(v9 + 104) >> 32;
      v13 = (void *)*(_QWORD *)(v9 + 104);
      v17 = 0;
    *(_DWORD *)&v17[v12 - (_DWORD)v13] = v6;
    v18 = &v17[v12 - (_DWORD)v13];
    if ( 0 != ((signed int)v12 - (signed int)v13) >> 2 )
      _aeabi_memmove4(v17, v13);
    v19 = (int)(v18 + 4);
    if ( v13 )
      operator delete(v13);
    *(_DWORD *)(v9 + 104) = v17;
    *(_DWORD *)(v9 + 108) = v19;
    *(_DWORD *)(v9 + 112) = &v17[4 * v16];
  else
    *(_DWORD *)v12 = v6;
    *(_DWORD *)(v9 + 108) += 4;
  v20 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v32 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v31 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v30 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
}


int __fastcall ScreenRenderBatch::postUpdate(ScreenRenderBatch *a1, int a2)
{
  ScreenRenderBatch *v2; // r5@1
  int result; // r0@1
  int v4; // r4@1
  unsigned __int64 *v5; // r5@2
  mce::Texture *v6; // r0@5

  v2 = a1;
  result = ScreenRenderBatch::_populateRenderBatch(a1, a2);
  v4 = *((_DWORD *)v2 + 8);
  if ( v4 )
  {
    v5 = (unsigned __int64 *)((char *)v2 + 24);
    do
    {
      result = *(_BYTE *)(v4 + 32);
      if ( *(_BYTE *)(v4 + 32) )
      {
        v4 = *(_DWORD *)v4;
      }
      else
        v6 = (mce::Texture *)mce::TexturePtr::operator->(v4 + 8);
        mce::Texture::deleteTexture(v6);
        result = std::_Hashtable<unsigned int,std::pair<unsigned int const,TextureState>,std::allocator<std::pair<unsigned int const,TextureState>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::erase(
                   v5,
                   v4);
        v4 = result;
    }
    while ( v4 );
  }
  return result;
}


int __fastcall ScreenRenderBatch::_unloadUnusedTextures(int result)
{
  int v1; // r4@1
  unsigned __int64 *v2; // r5@2
  mce::Texture *v3; // r0@5

  v1 = *(_DWORD *)(result + 32);
  if ( v1 )
  {
    v2 = (unsigned __int64 *)(result + 24);
    do
    {
      result = *(_BYTE *)(v1 + 32);
      if ( *(_BYTE *)(v1 + 32) )
      {
        v1 = *(_DWORD *)v1;
      }
      else
        v3 = (mce::Texture *)mce::TexturePtr::operator->(v1 + 8);
        mce::Texture::deleteTexture(v3);
        result = std::_Hashtable<unsigned int,std::pair<unsigned int const,TextureState>,std::allocator<std::pair<unsigned int const,TextureState>>,std::__detail::_Select1st,std::equal_to<unsigned int>,std::hash<unsigned int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::erase(
                   v2,
                   v1);
        v1 = result;
    }
    while ( v1 );
  }
  return result;
}
