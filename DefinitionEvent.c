

DefinitionEvent *__fastcall DefinitionEvent::~DefinitionEvent(DefinitionEvent *this)
{
  DefinitionEvent *v1; // r10@1
  DefinitionEvent *v2; // r0@1
  DefinitionEvent *v3; // r5@1
  void *v4; // r5@6
  void *v5; // r7@6
  unsigned int *v6; // r2@8
  signed int v7; // r1@10
  int *v8; // r0@16
  void *v9; // r5@21
  void *v10; // r7@21
  unsigned int *v11; // r2@23
  signed int v12; // r1@25
  int *v13; // r0@31
  int v14; // r1@36
  void *v15; // r0@36
  unsigned int *v17; // r2@38
  signed int v18; // r1@40

  v1 = this;
  v3 = (DefinitionEvent *)(*(_QWORD *)((char *)this + 68) >> 32);
  v2 = (DefinitionEvent *)*(_QWORD *)((char *)this + 68);
  if ( v2 != v3 )
  {
    do
      v2 = (DefinitionEvent *)((char *)DefinitionEvent::~DefinitionEvent(v2) + 80);
    while ( v3 != v2 );
    v2 = (DefinitionEvent *)*((_DWORD *)v1 + 17);
  }
  if ( v2 )
    operator delete((void *)v2);
  v5 = (void *)(*((_QWORD *)v1 + 7) >> 32);
  v4 = (void *)*((_QWORD *)v1 + 7);
  if ( v4 != v5 )
    {
      v8 = (int *)(*(_DWORD *)v4 - 12);
      if ( v8 != &dword_28898C0 )
      {
        v6 = (unsigned int *)(*(_DWORD *)v4 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
        }
        else
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
      }
      v4 = (char *)v4 + 4;
    }
    while ( v4 != v5 );
    v4 = (void *)*((_DWORD *)v1 + 14);
  if ( v4 )
    operator delete(v4);
  v10 = (void *)(*(_QWORD *)((char *)v1 + 44) >> 32);
  v9 = (void *)*(_QWORD *)((char *)v1 + 44);
  if ( v9 != v10 )
      v13 = (int *)(*(_DWORD *)v9 - 12);
      if ( v13 != &dword_28898C0 )
        v11 = (unsigned int *)(*(_DWORD *)v9 - 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
      v9 = (char *)v9 + 4;
    while ( v9 != v10 );
    v9 = (void *)*((_DWORD *)v1 + 11);
  if ( v9 )
    operator delete(v9);
  v14 = *((_DWORD *)v1 + 9);
  v15 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  FilterGroup::~FilterGroup((DefinitionEvent *)((char *)v1 + 4));
  return v1;
}


void __fastcall DefinitionEvent::evaluateGroups(int a1, int a2, int a3, const VariantParameterList *a4)
{
  DefinitionEvent::evaluateGroups(a1, a2, a3, a4);
}


int __fastcall DefinitionEvent::DefinitionEvent(int a1)
{
  int v1; // r4@1

  v1 = a1;
  *(_DWORD *)a1 = 1065353216;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 4) = &off_26F1930;
  *(_DWORD *)(a1 + 36) = &unk_28898CC;
  *(_DWORD *)(a1 + 40) = 3;
  j___aeabi_memclr4_0(a1 + 44, 36);
  return v1;
}


void __fastcall DefinitionEvent::evaluateGroups(int a1, int a2, int a3, const VariantParameterList *a4)
{
  const VariantParameterList *v4; // r10@1
  int v5; // r9@1
  int v6; // r4@1
  int v7; // r6@1
  int v8; // r0@1
  __int64 v9; // kr00_8@4
  __int64 v10; // kr08_8@5
  char *v11; // r2@5
  int v12; // r8@5
  signed int v13; // r0@5
  unsigned int v14; // r6@5
  char *v15; // r2@8
  _BYTE *v16; // r5@8
  _DWORD *v17; // r6@8
  unsigned int v18; // r4@8
  char *v19; // r11@12
  int v20; // r5@12
  char *v21; // r7@12
  int v22; // r6@13
  signed int v23; // r7@17
  char *v24; // r4@17
  signed int v25; // r8@17
  unsigned int v26; // r0@17
  unsigned int v27; // r1@19
  unsigned int v28; // r6@19
  int v29; // r8@34
  int v30; // r5@34
  char *v31; // r7@34
  signed int v32; // r8@38
  char *v33; // r4@38
  int v34; // r7@38
  unsigned int v35; // r0@38
  unsigned int v36; // r1@40
  unsigned int v37; // r6@40
  int *v38; // r4@56
  char *v43; // r0@60
  int v45; // t1@61
  int *v47; // r1@63
  unsigned int *v49; // r2@70
  signed int v50; // r1@72
  int *v51; // r0@78
  void *v52; // r4@83
  void *v53; // r6@83
  unsigned int *v54; // r2@85
  signed int v55; // r1@87
  int *v56; // r0@93
  int v57; // [sp+0h] [bp-60h]@12
  int v58; // [sp+0h] [bp-60h]@34
  int v59; // [sp+4h] [bp-5Ch]@1
  const VariantParameterList *v60; // [sp+8h] [bp-58h]@1
  int v61; // [sp+Ch] [bp-54h]@12
  int i; // [sp+Ch] [bp-54h]@34
  _BYTE *v63; // [sp+10h] [bp-50h]@4
  _BYTE *v64; // [sp+14h] [bp-4Ch]@4
  int v65; // [sp+18h] [bp-48h]@4
  void *ptr; // [sp+1Ch] [bp-44h]@4
  int *v67; // [sp+20h] [bp-40h]@4
  int v68; // [sp+24h] [bp-3Ch]@4

  v4 = a4;
  v5 = a2;
  v60 = a4;
  v6 = a1;
  v59 = a2;
  v7 = a3;
  v8 = *(_DWORD *)(a1 + 40);
  if ( v8 == 2 )
  {
    v58 = a3;
    v29 = 0;
    v30 = *(_QWORD *)(v6 + 68);
    v31 = 0;
    v19 = 0;
    for ( i = *(_QWORD *)(v6 + 68) >> 32; i != v30; v30 += 80 )
    {
      if ( j_EntityFilterGroup::evaluate((EntityFilterGroup *)(v30 + 4), (const Entity *)v5, v4) )
      {
        if ( v31 == (char *)v29 )
        {
          v32 = v31 - v19;
          v33 = 0;
          v34 = (v31 - v19) >> 2;
          v35 = v34;
          if ( !(v32 >> 2) )
            v35 = 1;
          v36 = v35 + (v32 >> 2);
          v37 = v35 + (v32 >> 2);
          if ( 0 != v36 >> 30 )
            v37 = 0x3FFFFFFF;
          if ( v36 < v35 )
          if ( v37 )
          {
            if ( v37 >= 0x40000000 )
              sub_21E57F4();
            v33 = (char *)j_operator new(4 * v37);
          }
          *(_DWORD *)&v33[4 * v34] = v30;
          if ( v34 )
            j___aeabi_memmove4_0((int)v33, (int)v19);
          v31 = &v33[4 * v34 + 4];
          if ( v19 )
            j_operator delete(v19);
          v4 = v60;
          v29 = (int)&v33[4 * v37];
          v19 = v33;
        }
        else
          *(_DWORD *)v31 = v30;
          v31 += 4;
      }
    }
    if ( v19 != v31 )
      __asm { VLDR            S16, =0.0 }
      v43 = v19;
      do
        v45 = *(_DWORD *)v43;
        v43 += 4;
        _R1 = v45;
        __asm
          VLDR            S0, [R1]
          VADD.F32        S16, S0, S16
      while ( !_ZF );
      _R0 = j_Random::_genRandInt32((Random *)(v5 + 552));
      __asm
        VMOV            S0, R0
        VLDR            D1, =2.32830644e-10
      v47 = (int *)v19;
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D1
        VCVT.F32.F64    S0, D0
        VMUL.F32        S0, S0, S16
      while ( 1 )
        _R0 = *v47;
          VLDR            S2, [R0]
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          break;
        __asm { VSUB.F32        S0, S0, S2 }
        ++v47;
        if ( (int *)v31 == v47 )
          goto LABEL_99;
      j_DefinitionEvent::evaluateGroups(_R0, v5, v58, v4);
  }
  else
    if ( v8 != 1 )
      if ( !v8 )
        v67 = 0;
        v68 = 0;
        v65 = 0;
        ptr = 0;
        v63 = 0;
        v64 = 0;
        j_std::vector<std::string,std::allocator<std::string>>::_M_range_insert<__gnu_cxx::__normal_iterator<std::string *,std::vector<std::string,std::allocator<std::string>>>>(
          (signed int)&v63,
          0,
          (int *)*(_QWORD *)(v6 + 44),
          *(_QWORD *)(v6 + 44) >> 32);
          (signed int)&ptr,
          v67,
          (int *)*(_QWORD *)(v6 + 56),
          *(_QWORD *)(v6 + 56) >> 32);
        v9 = *(_QWORD *)(v7 + 4);
        if ( (_DWORD)v9 == HIDWORD(v9) )
          j_std::vector<DefinitionModifier,std::allocator<DefinitionModifier>>::_M_emplace_back_aux<DefinitionModifier const&>(
            (unsigned __int64 *)v7,
            (int)&v63);
          v16 = v67;
          v17 = ptr;
          v10 = *(_QWORD *)&v63;
          v11 = 0;
          v12 = v7;
          v13 = v64 - v63;
          *(_DWORD *)v9 = 0;
          *(_DWORD *)(v9 + 4) = 0;
          *(_DWORD *)(v9 + 8) = 0;
          v14 = v13 >> 2;
          if ( v13 >> 2 )
            if ( v14 >= 0x40000000 )
            v11 = (char *)j_operator new(v13);
          *(_DWORD *)v9 = v11;
          *(_DWORD *)(v9 + 4) = v11;
          *(_DWORD *)(v9 + 8) = &v11[4 * v14];
          *(_DWORD *)(v9 + 4) = j_std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                                  v10,
                                  SHIDWORD(v10),
                                  (int)v11);
          v15 = 0;
          *(_DWORD *)(v9 + 12) = 0;
          *(_DWORD *)(v9 + 16) = 0;
          *(_DWORD *)(v9 + 20) = 0;
          v18 = (v16 - (_BYTE *)v17) >> 2;
          if ( v18 )
            if ( v18 >= 0x40000000 )
            v15 = (char *)j_operator new(v16 - (_BYTE *)v17);
          *(_DWORD *)(v9 + 12) = v15;
          *(_DWORD *)(v9 + 16) = v15;
          *(_DWORD *)(v9 + 20) = &v15[4 * v18];
          *(_DWORD *)(v9 + 16) = j_std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                                   (int)v17,
                                   (int)v16,
                                   (int)v15);
          *(_DWORD *)(v12 + 4) += 24;
        if ( (_BYTE *)v17 != v16 )
          do
            v51 = (int *)(*v17 - 12);
            if ( v51 != &dword_28898C0 )
            {
              v49 = (unsigned int *)(*v17 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v50 = __ldrex(v49);
                while ( __strex(v50 - 1, v49) );
              }
              else
                v50 = (*v49)--;
              if ( v50 <= 0 )
                j_j_j_j__ZdlPv_9(v51);
            }
            ++v17;
          while ( (_BYTE *)v17 != v16 );
          v16 = ptr;
        if ( v16 )
          j_operator delete(v16);
        v53 = v64;
        v52 = v63;
        if ( v63 != v64 )
            v56 = (int *)(*(_DWORD *)v52 - 12);
            if ( v56 != &dword_28898C0 )
              v54 = (unsigned int *)(*(_DWORD *)v52 - 4);
                  v55 = __ldrex(v54);
                while ( __strex(v55 - 1, v54) );
                v55 = (*v54)--;
              if ( v55 <= 0 )
                j_j_j_j__ZdlPv_9(v56);
            v52 = (char *)v52 + 4;
          while ( v52 != v53 );
          v52 = v63;
        if ( v52 )
          j_operator delete(v52);
      return;
    v57 = a3;
    v20 = *(_QWORD *)(v6 + 68);
    v21 = 0;
    v61 = *(_QWORD *)(v6 + 68) >> 32;
    if ( v20 != v61 )
      v22 = 0;
        if ( j_EntityFilterGroup::evaluate((EntityFilterGroup *)(v20 + 4), (const Entity *)v5, v4) )
          if ( v21 == (char *)v22 )
            v23 = v21 - v19;
            v24 = 0;
            v25 = v23 >> 2;
            v26 = v23 >> 2;
            if ( !(v23 >> 2) )
              v26 = 1;
            v27 = v26 + (v23 >> 2);
            v28 = v26 + (v23 >> 2);
            if ( 0 != v27 >> 30 )
              v28 = 0x3FFFFFFF;
            if ( v27 < v26 )
            if ( v28 )
              if ( v28 >= 0x40000000 )
                sub_21E57F4();
              v24 = (char *)j_operator new(4 * v28);
            *(_DWORD *)&v24[4 * v25] = v20;
            if ( v25 )
              j___aeabi_memmove4_0((int)v24, (int)v19);
            v21 = &v24[4 * v25 + 4];
            if ( v19 )
              j_operator delete(v19);
            v5 = v59;
            v22 = (int)&v24[4 * v28];
            v19 = v24;
          else
            *(_DWORD *)v21 = v20;
            v21 += 4;
        v20 += 80;
      while ( v61 != v20 );
    if ( v19 != v21 )
      v38 = (int *)v19;
        j_DefinitionEvent::evaluateGroups(*v38, v5, v57, v4);
        ++v38;
      while ( (int *)v21 != v38 );
LABEL_99:
  if ( v19 )
    j_j_j__ZdlPv_7(v19);
}


_DWORD *__fastcall DefinitionEvent::DefinitionEvent(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r7@1
  _DWORD *v3; // r6@1
  int *v4; // r4@1

  v2 = a2;
  v3 = a1;
  v4 = a2 + 9;
  *a1 = *a2;
  FilterGroup::FilterGroup((int)(a1 + 1), (int)(a2 + 1));
  v3[1] = &off_26F1930;
  sub_21E8AF4(v3 + 9, v4);
  v3[10] = v2[10];
  std::vector<std::string,std::allocator<std::string>>::vector((int)(v3 + 11), (unsigned __int64 *)(v2 + 11));
  std::vector<std::string,std::allocator<std::string>>::vector((int)(v3 + 14), (unsigned __int64 *)v2 + 7);
  std::vector<DefinitionEvent,std::allocator<DefinitionEvent>>::vector((int)(v3 + 17), (unsigned __int64 *)(v2 + 17));
  return v3;
}
