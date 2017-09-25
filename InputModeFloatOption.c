

int __fastcall InputModeFloatOption::getValue(int a1, unsigned int a2)
{
  unsigned int v2; // r4@1
  int v3; // r1@1
  int v4; // r0@1
  int *v5; // r2@1
  int v6; // r2@2
  bool v7; // zf@2

  v2 = a2;
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 76) + 4 * (a2 % (unsigned int)(*(_QWORD *)(a1 + 76) >> 32)));
  v4 = *(_DWORD *)v3;
  v5 = (int *)(*(_DWORD *)v3 + 12);
  while ( 1 )
  {
    v6 = *v5;
    v7 = v6 == v2;
    if ( v6 == v2 )
      v7 = *(_DWORD *)(v4 + 4) == v2;
    if ( v7 )
      break;
    v3 = v4;
    v5 = (int *)(*(_DWORD *)v4 + 12);
    v4 = *(_DWORD *)v4;
  }
  return *(_DWORD *)(*(_DWORD *)v3 + 8);
}


void __fastcall InputModeFloatOption::load(Option *a1, int a2)
{
  int v2; // r11@1
  int v3; // r10@1
  unsigned int v4; // r9@1
  int *v5; // r4@1
  unsigned int *v6; // r2@2
  signed int v7; // r1@4
  char *i; // r0@1
  __int64 v9; // r2@11
  void *v10; // r0@11
  int v11; // r0@12
  int v12; // r4@12
  void *v13; // r6@13
  int v14; // r8@13
  size_t v15; // r5@13
  _DWORD *v16; // r0@15
  size_t v17; // r7@15
  size_t v18; // r2@15
  int v19; // r0@17
  _DWORD *v20; // r1@24
  unsigned int v21; // r5@24
  unsigned int v22; // r6@24
  size_t v23; // r2@24
  int v24; // r0@26
  int v25; // r7@31
  unsigned int v30; // r8@36
  int v31; // r11@36
  int v32; // r0@36
  int v33; // r4@37
  int v34; // r6@37
  int v36; // r5@41
  unsigned int *v37; // r2@44
  signed int v38; // r1@46
  bool v39; // zf@52
  _DWORD *v40; // r0@56
  char *v41; // r0@59
  int (**v42)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // [sp+0h] [bp-50h]@1
  char *v43; // [sp+4h] [bp-4Ch]@1
  Option *v44; // [sp+Ch] [bp-44h]@1
  float v45; // [sp+10h] [bp-40h]@31
  unsigned int v46; // [sp+14h] [bp-3Ch]@11
  void *s2; // [sp+18h] [bp-38h]@2

  v44 = a1;
  v43 = (char *)a1 + 76;
  v2 = a2;
  v3 = a2 + 4;
  v4 = 1;
  v5 = &dword_28898C0;
  v42 = &pthread_create;
  for ( i = Option::getSaveTag(a1); ; i = Option::getSaveTag(v44) )
  {
    LODWORD(v9) = *(_DWORD *)i;
    HIDWORD(v9) = off_26D9AD4[v4 - 1];
    Util::format((Util *)&v46, "%s_%s", v9, v42);
    Util::toLower(&s2, *(_DWORD *)(v46 - 12), v46);
    v10 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) != v5 )
    {
      v37 = (unsigned int *)(v46 - 4);
      if ( v42 )
      {
        __dmb();
        do
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
      }
      else
        v38 = (*v37)--;
      if ( v38 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v10);
    }
    v11 = *(_DWORD *)(v2 + 8);
    v12 = v3;
    if ( v11 )
      v13 = s2;
      v14 = v3;
      v15 = *((_DWORD *)s2 - 3);
      do
        v12 = v11;
        while ( 1 )
        {
          v16 = *(_DWORD **)(v12 + 16);
          v17 = *(v16 - 3);
          v18 = *(v16 - 3);
          if ( v17 > v15 )
            v18 = v15;
          v19 = memcmp(v16, v13, v18);
          if ( !v19 )
            v19 = v17 - v15;
          if ( v19 >= 0 )
            break;
          v12 = *(_DWORD *)(v12 + 12);
          if ( !v12 )
          {
            v12 = v14;
            goto LABEL_23;
          }
        }
        v11 = *(_DWORD *)(v12 + 8);
        v14 = v12;
      while ( v11 );
LABEL_23:
    if ( v12 != v3 )
      v20 = *(_DWORD **)(v12 + 16);
      v21 = *((_DWORD *)s2 - 3);
      v22 = *(v20 - 3);
      v23 = *((_DWORD *)s2 - 3);
      if ( v21 > v22 )
        v23 = *(v20 - 3);
      v24 = memcmp(s2, v20, v23);
      if ( !v24 )
        v24 = v21 - v22;
      if ( v24 < 0 )
        v12 = v3;
      if ( v12 != v3 )
        v25 = v2;
        if ( Option::read((const void **)(v12 + 20), (signed int *)&v45) == 1 )
          _R0 = v44;
          __asm
            VLDR            S0, [SP,#0x50+var_40]
            VLDR            S16, [R0,#0x44]
            VLDR            S2, [R0,#0x48]
            VCMPE.F32       S0, S16
            VMRS            APSR_nzcv, FPSCR
            VCMPE.F32       S0, S2
          if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
            __asm { VMOVGT.F32      S16, S0 }
          __asm { VMRS            APSR_nzcv, FPSCR }
            __asm { VMOVGT.F32      S16, S2 }
          v30 = *((_DWORD *)v44 + 20);
          v31 = v4 % v30;
          v32 = *(_DWORD *)(*((_DWORD *)v44 + 19) + 4 * (v4 % v30));
          if ( !v32 )
            goto LABEL_56;
          v33 = *(_DWORD *)v32;
          v34 = *(_DWORD *)(*(_DWORD *)v32 + 12);
          while ( 1 )
            _ZF = v34 == v4;
            if ( v34 == v4 )
              _ZF = v4 == *(_DWORD *)(v33 + 4);
            if ( _ZF )
              break;
            v36 = *(_DWORD *)v33;
            if ( *(_DWORD *)v33 )
            {
              v34 = *(_DWORD *)(v36 + 12);
              v32 = v33;
              v33 = *(_DWORD *)v33;
              if ( *(_DWORD *)(v36 + 12) % v30 == v31 )
                continue;
            }
          v39 = v32 == 0;
          if ( v32 )
            v39 = *(_DWORD *)v32 == 0;
          if ( v39 )
LABEL_56:
            v40 = operator new(0x10u);
            *v40 = 0;
            v40[1] = v4;
            v40[2] = 0;
            std::_Hashtable<InputMode,std::pair<InputMode const,float>,std::allocator<std::pair<InputMode const,float>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              (int)v43,
              v31,
              v4,
              (int)v40);
          __asm { VSTR            S16, [R0,#8] }
          Option::notifyOptionValueChanged((int)v44, v4);
        v2 = v25;
    v5 = &dword_28898C0;
    v41 = (char *)s2 - 12;
    if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
      v6 = (unsigned int *)((char *)s2 - 4);
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
        v7 = (*v6)--;
      if ( v7 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v41);
    if ( ++v4 >= 5 )
      break;
  }
}


Option *__fastcall InputModeFloatOption::~InputModeFloatOption(InputModeFloatOption *this)
{
  InputModeFloatOption *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  char *v4; // r0@3
  void *v5; // r0@6
  void *v6; // r5@7
  char *v7; // r0@8

  v1 = this;
  *(_DWORD *)this = &off_26D9A18;
  v2 = (void *)*((_DWORD *)this + 28);
  if ( v2 )
  {
    do
    {
      v3 = *(void **)v2;
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  _aeabi_memclr4(*((_QWORD *)v1 + 13), 4 * (*((_QWORD *)v1 + 13) >> 32));
  *((_DWORD *)v1 + 28) = 0;
  *((_DWORD *)v1 + 29) = 0;
  v4 = (char *)*((_DWORD *)v1 + 26);
  if ( v4 && (char *)v1 + 128 != v4 )
    operator delete(v4);
  v5 = (void *)*((_DWORD *)v1 + 21);
  if ( v5 )
      v6 = *(void **)v5;
      operator delete(v5);
      v5 = v6;
    while ( v6 );
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 76), 4 * (*(_QWORD *)((char *)v1 + 76) >> 32));
  *((_DWORD *)v1 + 21) = 0;
  *((_DWORD *)v1 + 22) = 0;
  v7 = (char *)*((_DWORD *)v1 + 19);
  if ( v7 && (char *)v1 + 100 != v7 )
    operator delete(v7);
  return j_j_j__ZN6OptionD2Ev(v1);
}


void __fastcall InputModeFloatOption::_saveForInputMode(Option *a1, int a2, unsigned int a3)
{
  unsigned int v3; // r4@1
  int v4; // r6@1
  Option *v5; // r11@1
  int *v6; // r0@1
  int *v7; // r0@1
  const char *v8; // r5@2
  unsigned int v9; // r0@4
  const void **v10; // r0@4
  void *v11; // r0@4
  int v13; // r11@5
  int v14; // t1@5
  int v15; // r5@5
  int v17; // r9@6
  int v18; // r6@6
  int v20; // r8@10
  bool v21; // zf@13
  _DWORD *v22; // r0@17
  int *v27; // r4@18
  __int64 v28; // kr00_8@18
  char *v29; // r1@19
  char *v30; // r0@21
  char *v31; // r0@22
  void **v32; // r0@23
  void *v33; // r0@23
  unsigned int *v34; // r2@26
  signed int v35; // r1@28
  unsigned int *v36; // r2@30
  signed int v37; // r1@32
  unsigned int *v38; // r2@34
  signed int v39; // r1@36
  unsigned int *v40; // r2@38
  signed int v41; // r1@40
  unsigned int *v42; // r1@42
  signed int v43; // r0@44
  int v44; // [sp+0h] [bp-F8h]@4
  unsigned int v45; // [sp+4h] [bp-F4h]@4
  char *v46; // [sp+8h] [bp-F0h]@18
  char *v47; // [sp+Ch] [bp-ECh]@18
  void **v48; // [sp+10h] [bp-E8h]@5
  int v49; // [sp+14h] [bp-E4h]@24
  void **v50; // [sp+18h] [bp-E0h]@18
  void **v51; // [sp+1Ch] [bp-DCh]@18
  int v52; // [sp+38h] [bp-C0h]@24
  int v53; // [sp+40h] [bp-B8h]@23
  int v54; // [sp+44h] [bp-B4h]@24
  int v55; // [sp+CCh] [bp-2Ch]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = (int *)Option::getSaveTag(a1);
  v7 = sub_119C854(&v55, v6);
  sub_119C894((const void **)v7, "_", 1u);
  if ( v3 - 1 > 3 )
    v8 = "Undefined";
  else
    v8 = off_26D9AD4[v3 - 1];
  v9 = strlen(v8);
  v10 = sub_119C894((const void **)&v55, (char *)v8, v9);
  v44 = v4;
  v45 = (unsigned int)*v10;
  *v10 = &unk_28898CC;
  v11 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
  {
    v34 = (unsigned int *)(v55 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
    }
    else
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  }
  sub_119CB58((int)&v48, 24);
  v14 = *((_DWORD *)v5 + 19);
  v13 = (int)v5 + 76;
  v15 = v3 % *(_DWORD *)(v13 + 4);
  _R0 = *(_DWORD *)(v14 + 4 * v15);
  if ( !_R0 )
    goto LABEL_17;
  v17 = *(_DWORD *)_R0;
  v18 = *(_DWORD *)(*(_DWORD *)_R0 + 12);
  while ( 1 )
    _ZF = v18 == v3;
    if ( v18 == v3 )
      _ZF = *(_DWORD *)(v17 + 4) == v3;
    if ( _ZF )
      break;
    v20 = *(_DWORD *)v17;
    if ( *(_DWORD *)v17 )
      v18 = *(_DWORD *)(v20 + 12);
      _R0 = v17;
      v17 = *(_DWORD *)v17;
      if ( *(_DWORD *)(v20 + 12) % *(_DWORD *)(v13 + 4) == v15 )
        continue;
  v21 = _R0 == 0;
  if ( _R0 )
    _R0 = *(_DWORD *)_R0;
    v21 = _R0 == 0;
  if ( v21 )
LABEL_17:
    v22 = operator new(0x10u);
    *v22 = 0;
    v22[1] = v3;
    v22[2] = 0;
    _R0 = std::_Hashtable<InputMode,std::pair<InputMode const,float>,std::allocator<std::pair<InputMode const,float>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v13,
            v15,
            v3,
            (int)v22);
  __asm
    VLDR            S0, [R0,#8]
    VCVT.F64.F32    D0, S0
    VMOV            R2, R3, D0
  sub_119D56C((char *)&v50);
  v27 = (int *)(v45 - 12);
  Util::toLower((void **)&v46, *(_DWORD *)(v45 - 12), v45);
  sub_119D48C((int *)&v47, (int)&v51);
  v28 = *(_QWORD *)(v44 + 4);
  if ( (_DWORD)v28 == HIDWORD(v28) )
    std::vector<PropertyFile::Property,std::allocator<PropertyFile::Property>>::_M_emplace_back_aux<PropertyFile::Property>(
      (unsigned __int64 *)v44,
      (int)&v46);
    v29 = v47;
    *(_DWORD *)v28 = v46;
    v29 = (char *)&unk_28898CC;
    v46 = (char *)&unk_28898CC;
    *(_DWORD *)(v28 + 4) = v47;
    v47 = (char *)&unk_28898CC;
    *(_DWORD *)(v44 + 4) = v28 + 8;
  v30 = v29 - 12;
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v29 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
  v31 = v46 - 12;
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v46 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v31);
  v32 = off_26D3F84;
  v48 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v48) = off_26D3F80[0];
  v50 = v32;
  v51 = &off_27734E8;
  v33 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v53 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v33);
  v51 = &off_26D40A8;
  sub_119C954((unsigned int **)&v52);
  v48 = (void **)off_26D3F68;
  *(void ***)((char *)&v48 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v49 = 0;
  sub_119C964(&v54);
  if ( v27 != &dword_28898C0 )
    v42 = (unsigned int *)(v45 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v27);
}


int __fastcall InputModeFloatOption::set(int a1, unsigned int a2, int a3)
{
  int v3; // r4@1
  int *v6; // r1@1
  int v10; // r0@1
  int *v11; // r2@1
  int v12; // r2@2
  int result; // r0@6

  v3 = a2;
  _R5 = a1;
  _R6 = a3;
  v6 = *(int **)(*(_QWORD *)(a1 + 76) + 4 * (a2 % (unsigned int)(*(_QWORD *)(a1 + 76) >> 32)));
  __asm { VMOV            S0, R6 }
  v10 = *v6;
  v11 = (int *)(*v6 + 12);
  while ( 1 )
  {
    v12 = *v11;
    _ZF = v12 == v3;
    if ( v12 == v3 )
      _ZF = *(_DWORD *)(v10 + 4) == v3;
    if ( _ZF )
      break;
    v6 = (int *)v10;
    v11 = (int *)(*(_DWORD *)v10 + 12);
    v10 = *(_DWORD *)v10;
  }
  result = *v6;
  __asm
    VLDR            S4, [R5,#0x84]
    VLDR            S2, [R0,#8]
    VSUB.F32        S2, S2, S0
    VABS.F32        S2, S2
    VCMPE.F32       S2, S4
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm
    {
      VLDR            S2, [R5,#0x44]
      VLDR            S4, [R5,#0x48]
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S4, S0
    }
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S2, S0 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVLT.F32      S2, S4 }
    __asm { VSTR            S2, [R0,#8] }
    result = j_j_j__ZN6Option24notifyOptionValueChangedE9InputMode(_R5, v3);
  return result;
}


int __fastcall InputModeFloatOption::reset(int a1, int a2)
{
  int v2; // r9@1
  int v3; // r8@1
  int v4; // r7@4
  unsigned int v5; // r5@4
  int v6; // r0@6
  int v7; // r10@7
  int v8; // r4@7
  bool v9; // zf@8
  int v10; // r6@11
  unsigned int v11; // r5@14
  int v12; // r7@14
  int *v13; // r0@14
  int v14; // r10@15
  int v15; // r4@15
  bool v16; // zf@16
  int v17; // r6@19
  unsigned int v18; // r5@22
  int v19; // r7@22
  int *v20; // r0@22
  int v21; // r10@23
  int v22; // r4@23
  bool v23; // zf@24
  int v24; // r6@27
  bool v25; // zf@30
  _DWORD *v26; // r0@34
  signed int v27; // r7@35
  unsigned int v28; // r5@35
  int v29; // r0@37
  int v30; // r10@38
  int v31; // r4@38
  bool v32; // zf@39
  int v33; // r11@42
  bool v34; // zf@45
  _DWORD *v35; // r0@49
  unsigned int v36; // r7@50
  int v37; // r10@51
  int v38; // r4@51
  bool v39; // zf@52
  int v40; // r11@55
  bool v41; // zf@58
  _DWORD *v42; // r0@62
  unsigned int v43; // r7@63
  int v44; // r10@64
  int v45; // r4@64
  bool v46; // zf@65
  int v47; // r11@68
  bool v48; // zf@71
  _DWORD *v49; // r0@75
  int v50; // r3@75
  unsigned int v51; // r2@75
  int v52; // r0@75
  int v53; // r1@75
  bool v54; // zf@76
  _DWORD *v55; // r0@80
  bool v56; // zf@81
  _DWORD *v57; // r0@85
  int v59; // [sp+0h] [bp-28h]@35

  v2 = a2;
  v3 = a1;
  if ( a2 == 3 )
  {
    v11 = *(_DWORD *)(a1 + 108);
    v12 = 3u % *(_DWORD *)(a1 + 108);
    v13 = *(int **)(*(_DWORD *)(a1 + 104) + 4 * v12);
    if ( !v13 )
      goto LABEL_49;
    v14 = *v13;
    v15 = *(_DWORD *)(*v13 + 12);
    while ( 1 )
    {
      v16 = v15 == 3;
      if ( v15 == 3 )
        v16 = *(_DWORD *)(v14 + 4) == 3;
      if ( v16 )
        break;
      v17 = *(_DWORD *)v14;
      if ( *(_DWORD *)v14 )
      {
        v15 = *(_DWORD *)(v17 + 12);
        v13 = (int *)v14;
        v14 = *(_DWORD *)v14;
        if ( *(_DWORD *)(v17 + 12) % v11 == v12 )
          continue;
      }
    }
    v34 = v13 == 0;
    if ( v13 )
      v14 = *v13;
      v34 = *v13 == 0;
    if ( v34 )
LABEL_49:
      v35 = operator new(0x10u);
      *v35 = 0;
      v35[1] = 3;
      v35[2] = 0;
      v14 = std::_Hashtable<InputMode,std::pair<InputMode const,float>,std::allocator<std::pair<InputMode const,float>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v3 + 104,
              v12,
              3u,
              (int)v35);
    v36 = 3u % *(_DWORD *)(v3 + 80);
    v59 = *(_DWORD *)(v14 + 8);
    v29 = *(_DWORD *)(*(_DWORD *)(v3 + 76) + 4 * v36);
    if ( v29 )
      v37 = *(_DWORD *)v29;
      v38 = *(_DWORD *)(*(_DWORD *)v29 + 12);
      while ( 1 )
        v39 = v38 == 3;
        if ( v38 == 3 )
          v39 = *(_DWORD *)(v37 + 4) == 3;
        if ( v39 )
          break;
        v40 = *(_DWORD *)v37;
        if ( *(_DWORD *)v37 )
        {
          v38 = *(_DWORD *)(v40 + 12);
          v29 = v37;
          v37 = *(_DWORD *)v37;
          if ( *(_DWORD *)(v40 + 12) % *(_DWORD *)(v3 + 80) == v36 )
            continue;
        }
        goto LABEL_80;
      v54 = v29 == 0;
      if ( v29 )
        v29 = *(_DWORD *)v29;
        v54 = v29 == 0;
      if ( !v54 )
        goto LABEL_87;
LABEL_80:
    v55 = operator new(0x10u);
    v50 = (int)v55;
    *v55 = 0;
    v55[1] = 3;
    v55[2] = 0;
    v52 = v3 + 76;
    v53 = v36;
    v51 = 3;
    goto LABEL_86;
  }
  if ( a2 == 2 )
    v18 = *(_DWORD *)(a1 + 108);
    v19 = 2u % *(_DWORD *)(a1 + 108);
    v20 = *(int **)(*(_DWORD *)(a1 + 104) + 4 * v19);
    if ( !v20 )
      goto LABEL_62;
    v21 = *v20;
    v22 = *(_DWORD *)(*v20 + 12);
      v23 = v22 == 2;
      if ( v22 == 2 )
        v23 = *(_DWORD *)(v21 + 4) == 2;
      if ( v23 )
      v24 = *(_DWORD *)v21;
      if ( *(_DWORD *)v21 )
        v22 = *(_DWORD *)(v24 + 12);
        v20 = (int *)v21;
        v21 = *(_DWORD *)v21;
        if ( *(_DWORD *)(v24 + 12) % v18 == v19 )
    v41 = v20 == 0;
    if ( v20 )
      v21 = *v20;
      v41 = *v20 == 0;
    if ( v41 )
LABEL_62:
      v42 = operator new(0x10u);
      *v42 = 0;
      v42[1] = 2;
      v42[2] = 0;
      v21 = std::_Hashtable<InputMode,std::pair<InputMode const,float>,std::allocator<std::pair<InputMode const,float>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
              v19,
              2u,
              (int)v42);
    v43 = 2u % *(_DWORD *)(v3 + 80);
    v59 = *(_DWORD *)(v21 + 8);
    v29 = *(_DWORD *)(*(_DWORD *)(v3 + 76) + 4 * v43);
      v44 = *(_DWORD *)v29;
      v45 = *(_DWORD *)(*(_DWORD *)v29 + 12);
        v46 = v45 == 2;
        if ( v45 == 2 )
          v46 = *(_DWORD *)(v44 + 4) == 2;
        if ( v46 )
        v47 = *(_DWORD *)v44;
        if ( *(_DWORD *)v44 )
          v45 = *(_DWORD *)(v47 + 12);
          v29 = v44;
          v44 = *(_DWORD *)v44;
          if ( *(_DWORD *)(v47 + 12) % *(_DWORD *)(v3 + 80) == v43 )
        goto LABEL_85;
      v56 = v29 == 0;
        v56 = v29 == 0;
      if ( !v56 )
LABEL_85:
    v57 = operator new(0x10u);
    v50 = (int)v57;
    *v57 = 0;
    v57[1] = 2;
    v57[2] = 0;
    v53 = v43;
    v51 = 2;
  if ( a2 == 1 )
    v4 = 0;
    v5 = *(_DWORD *)(a1 + 108);
    if ( v5 != 1 )
      v4 = 1;
    v6 = *(_DWORD *)(*(_DWORD *)(a1 + 104) + 4 * v4);
    if ( !v6 )
      goto LABEL_34;
    v7 = *(_DWORD *)v6;
    v8 = *(_DWORD *)(*(_DWORD *)v6 + 12);
      v9 = v8 == 1;
      if ( v8 == 1 )
        v9 = *(_DWORD *)(v7 + 4) == 1;
      if ( v9 )
      v10 = *(_DWORD *)v7;
      if ( *(_DWORD *)v7 )
        v8 = *(_DWORD *)(v10 + 12);
        v6 = v7;
        v7 = *(_DWORD *)v7;
        if ( *(_DWORD *)(v10 + 12) % v5 == v4 )
    v25 = v6 == 0;
    if ( v6 )
      v6 = *(_DWORD *)v6;
      v25 = v6 == 0;
    if ( v25 )
LABEL_34:
      v26 = operator new(0x10u);
      *v26 = 0;
      v26[1] = 1;
      v26[2] = 0;
      v6 = std::_Hashtable<InputMode,std::pair<InputMode const,float>,std::allocator<std::pair<InputMode const,float>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
             v3 + 104,
             v4,
             1u,
             (int)v26);
    v27 = 0;
    v28 = *(_DWORD *)(v3 + 80);
    v59 = *(_DWORD *)(v6 + 8);
    if ( v28 != 1 )
      v27 = 1;
    v29 = *(_DWORD *)(*(_DWORD *)(v3 + 76) + 4 * v27);
      v30 = *(_DWORD *)v29;
      v31 = *(_DWORD *)(*(_DWORD *)v29 + 12);
        v32 = v31 == 1;
        if ( v31 == 1 )
          v32 = *(_DWORD *)(v30 + 4) == 1;
        if ( v32 )
        v33 = *(_DWORD *)v30;
        if ( *(_DWORD *)v30 )
          v31 = *(_DWORD *)(v33 + 12);
          v29 = v30;
          v30 = *(_DWORD *)v30;
          if ( *(_DWORD *)(v33 + 12) % v28 == v27 )
        goto LABEL_75;
      v48 = v29 == 0;
        v48 = v29 == 0;
      if ( !v48 )
LABEL_75:
    v49 = operator new(0x10u);
    v50 = (int)v49;
    v51 = 1;
    *v49 = 0;
    v49[1] = 1;
    *(_DWORD *)(v50 + 8) = 0;
    v53 = v27;
LABEL_86:
    v29 = std::_Hashtable<InputMode,std::pair<InputMode const,float>,std::allocator<std::pair<InputMode const,float>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
            v52,
            v53,
            v51,
            v50);
LABEL_87:
    *(_DWORD *)(v29 + 8) = v59;
  return j_j_j__ZN6Option24notifyOptionValueChangedE9InputMode(v3, v2);
}


void __fastcall InputModeFloatOption::~InputModeFloatOption(InputModeFloatOption *this)
{
  Option *v1; // r0@1

  v1 = InputModeFloatOption::~InputModeFloatOption(this);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall InputModeFloatOption::load(Option *a1, int a2)
{
  InputModeFloatOption::load(a1, a2);
}


void __fastcall InputModeFloatOption::~InputModeFloatOption(InputModeFloatOption *this)
{
  InputModeFloatOption::~InputModeFloatOption(this);
}


int __fastcall InputModeFloatOption::InputModeFloatOption(int a1, int a2, float a3, float a4, float a5, int *a6, int a7, int a8, int a9)
{
  int v9; // r10@1
  double v13; // r0@1
  double v14; // r0@1
  int v15; // r7@3
  void *v16; // r5@3
  unsigned int v17; // r0@4
  int v18; // r5@6
  void *v19; // r7@6
  int v20; // r6@7
  unsigned int v21; // r7@7
  int v22; // r11@7
  int v23; // r0@9
  int v24; // r8@10
  int v25; // r5@10
  int v27; // r4@14
  bool v28; // zf@17
  _DWORD *v29; // r0@21
  int v30; // r0@22
  int v31; // r6@23
  int v32; // r5@23
  bool v33; // zf@24
  int v34; // r4@27
  bool v35; // zf@30
  _DWORD *v36; // r0@34
  int v37; // r0@35
  int v38; // r6@36
  int v39; // r5@36
  bool v40; // zf@37
  int v41; // r4@40
  bool v42; // zf@43
  _DWORD *v43; // r0@47
  int v44; // r0@48
  int v45; // r6@49
  int v46; // r5@49
  bool v47; // zf@50
  int v48; // r4@53
  bool v49; // zf@56
  _DWORD *v50; // r0@60
  unsigned int v51; // r6@61
  int v52; // r9@61
  int v53; // r11@61
  int v54; // r0@63
  int v55; // r7@64
  int v56; // r5@64
  bool v57; // zf@65
  int v58; // r4@68
  bool v59; // zf@71
  _DWORD *v60; // r0@75
  int v61; // r0@76
  int v62; // r7@77
  int v63; // r5@77
  bool v64; // zf@78
  int v65; // r4@81
  bool v66; // zf@84
  _DWORD *v67; // r0@88
  int v68; // r0@89
  int v69; // r7@90
  int v70; // r5@90
  bool v71; // zf@91
  int v72; // r4@94
  bool v73; // zf@97
  _DWORD *v74; // r0@101
  int v75; // r0@102
  int v76; // r7@103
  int v77; // r5@103
  bool v78; // zf@104
  int v79; // r4@107
  bool v80; // zf@110
  _DWORD *v81; // r0@114
  int v83; // [sp+Ch] [bp-34h]@7

  v9 = a1;
  Option::Option(a1, a2, LODWORD(a3), SLODWORD(a4), (int *)LODWORD(a5), a6, 3);
  __asm
  {
    VLDR            S0, [SP,#0x40+arg_10]
    VLDR            S2, [SP,#0x40+arg_C]
  }
  *(_DWORD *)v9 = &off_26D9A18;
    VSTR            S2, [R10,#0x44]
    VSTR            S0, [R10,#0x48]
  *(_DWORD *)(v9 + 84) = 0;
  *(_DWORD *)(v9 + 88) = 0;
  *(_DWORD *)(v9 + 92) = 1065353216;
  *(_DWORD *)(v9 + 96) = 0;
  LODWORD(v13) = v9 + 92;
  v14 = COERCE_DOUBLE(__PAIR__(10, sub_119C844(v13)));
  *(_DWORD *)(v9 + 80) = LODWORD(v14);
  if ( LODWORD(v14) == 1 )
    *(_DWORD *)(v9 + 100) = 0;
    v16 = (void *)(v9 + 100);
  else
    if ( LODWORD(v14) >= 0x40000000 )
      sub_119C874();
    v15 = 4 * LODWORD(v14);
    v16 = operator new(4 * LODWORD(v14));
    _aeabi_memclr4(v16, v15);
  *(_DWORD *)(v9 + 76) = v16;
  *(_DWORD *)(v9 + 112) = 0;
  *(_DWORD *)(v9 + 116) = 0;
  *(_DWORD *)(v9 + 120) = 1065353216;
  *(_DWORD *)(v9 + 124) = 0;
  LODWORD(v14) = v9 + 120;
  v17 = sub_119C844(v14);
  *(_DWORD *)(v9 + 108) = v17;
  if ( v17 == 1 )
    *(_DWORD *)(v9 + 128) = 0;
    v19 = (void *)(v9 + 128);
    if ( v17 >= 0x40000000 )
    v18 = 4 * v17;
    v19 = operator new(4 * v17);
    _aeabi_memclr4(v19, v18);
  v83 = v9 + 76;
  *(_DWORD *)(v9 + 104) = v19;
  v20 = 0;
  *(_DWORD *)(v9 + 132) = 981668463;
  v21 = *(_QWORD *)(v9 + 76) >> 32;
  v22 = *(_QWORD *)(v9 + 76);
  if ( v21 != 1 )
    v20 = 1;
  v23 = *(_DWORD *)(v22 + 4 * v20);
  if ( !v23 )
    goto LABEL_21;
  v24 = *(_DWORD *)v23;
  v25 = *(_DWORD *)(*(_DWORD *)v23 + 12);
  while ( 1 )
    _ZF = v25 == 1;
    if ( v25 == 1 )
      _ZF = *(_DWORD *)(v24 + 4) == 1;
    if ( _ZF )
      break;
    v27 = *(_DWORD *)v24;
    if ( *(_DWORD *)v24 )
    {
      v25 = *(_DWORD *)(v27 + 12);
      v23 = v24;
      v24 = *(_DWORD *)v24;
      if ( *(_DWORD *)(v27 + 12) % v21 == v20 )
        continue;
    }
  v28 = v23 == 0;
  if ( v23 )
    v28 = *(_DWORD *)v23 == 0;
  if ( v28 )
LABEL_21:
    v29 = operator new(0x10u);
    *(_QWORD *)v29 = 0x100000000LL;
    v29[2] = 0;
    std::_Hashtable<InputMode,std::pair<InputMode const,float>,std::allocator<std::pair<InputMode const,float>>,std::__detail::_Select1st,std::equal_to<InputMode>,std::hash<InputMode>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
      v83,
      v20,
      1u,
      (int)v29);
    v21 = *(_QWORD *)(v9 + 76) >> 32;
    v22 = *(_QWORD *)(v9 + 76);
    VLDR            S16, [SP,#0x40+arg_8]
    VSTR            S16, [R0,#8]
  v30 = *(_DWORD *)(v22 + 4 * (2 % v21));
  if ( !v30 )
    goto LABEL_34;
  v31 = *(_DWORD *)v30;
  v32 = *(_DWORD *)(*(_DWORD *)v30 + 12);
    v33 = v32 == 2;
    if ( v32 == 2 )
      v33 = *(_DWORD *)(v31 + 4) == 2;
    if ( v33 )
    v34 = *(_DWORD *)v31;
    if ( *(_DWORD *)v31 )
      v32 = *(_DWORD *)(v34 + 12);
      v30 = v31;
      v31 = *(_DWORD *)v31;
      if ( *(_DWORD *)(v34 + 12) % v21 == 2 % v21 )
  v35 = v30 == 0;
  if ( v30 )
    v35 = *(_DWORD *)v30 == 0;
  if ( v35 )
LABEL_34:
    v36 = operator new(0x10u);
    *(_QWORD *)v36 = 0x200000000LL;
    v36[2] = 0;
      2 % v21,
      2u,
      (int)v36);
  __asm { VSTR            S16, [R0,#8] }
  v37 = *(_DWORD *)(v22 + 4 * (3 % v21));
  if ( !v37 )
    goto LABEL_47;
  v38 = *(_DWORD *)v37;
  v39 = *(_DWORD *)(*(_DWORD *)v37 + 12);
    v40 = v39 == 3;
    if ( v39 == 3 )
      v40 = *(_DWORD *)(v38 + 4) == 3;
    if ( v40 )
    v41 = *(_DWORD *)v38;
    if ( *(_DWORD *)v38 )
      v39 = *(_DWORD *)(v41 + 12);
      v37 = v38;
      v38 = *(_DWORD *)v38;
      if ( *(_DWORD *)(v41 + 12) % v21 == 3 % v21 )
  v42 = v37 == 0;
  if ( v37 )
    v42 = *(_DWORD *)v37 == 0;
  if ( v42 )
LABEL_47:
    v43 = operator new(0x10u);
    *(_QWORD *)v43 = 12884901888LL;
    v43[2] = 0;
      3 % v21,
      3u,
      (int)v43);
  v44 = *(_DWORD *)(v22 + 4 * (4 % v21));
  if ( !v44 )
    goto LABEL_60;
  v45 = *(_DWORD *)v44;
  v46 = *(_DWORD *)(*(_DWORD *)v44 + 12);
    v47 = v46 == 4;
    if ( v46 == 4 )
      v47 = *(_DWORD *)(v45 + 4) == 4;
    if ( v47 )
    v48 = *(_DWORD *)v45;
    if ( *(_DWORD *)v45 )
      v46 = *(_DWORD *)(v48 + 12);
      v44 = v45;
      v45 = *(_DWORD *)v45;
      if ( *(_DWORD *)(v48 + 12) % v21 == 4 % v21 )
  v49 = v44 == 0;
  if ( v44 )
    v49 = *(_DWORD *)v44 == 0;
  if ( v49 )
LABEL_60:
    v50 = operator new(0x10u);
    *(_QWORD *)v50 = 0x400000000LL;
    v50[2] = 0;
      4 % v21,
      4u,
      (int)v50);
  v51 = *(_QWORD *)(v9 + 104) >> 32;
  v52 = *(_QWORD *)(v9 + 104);
  v53 = 0;
  if ( v51 != 1 )
    v53 = 1;
  v54 = *(_DWORD *)(v52 + 4 * v53);
  if ( !v54 )
    goto LABEL_75;
  v55 = *(_DWORD *)v54;
  v56 = *(_DWORD *)(*(_DWORD *)v54 + 12);
    v57 = v56 == 1;
    if ( v56 == 1 )
      v57 = *(_DWORD *)(v55 + 4) == 1;
    if ( v57 )
    v58 = *(_DWORD *)v55;
    if ( *(_DWORD *)v55 )
      v56 = *(_DWORD *)(v58 + 12);
      v54 = v55;
      v55 = *(_DWORD *)v55;
      if ( *(_DWORD *)(v58 + 12) % v51 == v53 )
  v59 = v54 == 0;
  if ( v54 )
    v59 = *(_DWORD *)v54 == 0;
  if ( v59 )
LABEL_75:
    v60 = operator new(0x10u);
    *(_QWORD *)v60 = 0x100000000LL;
    v60[2] = 0;
      v9 + 104,
      v53,
      (int)v60);
    v51 = *(_QWORD *)(v9 + 104) >> 32;
    v52 = *(_QWORD *)(v9 + 104);
  v61 = *(_DWORD *)(v52 + 4 * (2 % v51));
  if ( !v61 )
    goto LABEL_88;
  v62 = *(_DWORD *)v61;
  v63 = *(_DWORD *)(*(_DWORD *)v61 + 12);
    v64 = v63 == 2;
    if ( v63 == 2 )
      v64 = *(_DWORD *)(v62 + 4) == 2;
    if ( v64 )
    v65 = *(_DWORD *)v62;
    if ( *(_DWORD *)v62 )
      v63 = *(_DWORD *)(v65 + 12);
      v61 = v62;
      v62 = *(_DWORD *)v62;
      if ( *(_DWORD *)(v65 + 12) % v51 == 2 % v51 )
  v66 = v61 == 0;
  if ( v61 )
    v66 = *(_DWORD *)v61 == 0;
  if ( v66 )
LABEL_88:
    v67 = operator new(0x10u);
    *(_QWORD *)v67 = 0x200000000LL;
    v67[2] = 0;
      2 % v51,
      (int)v67);
  v68 = *(_DWORD *)(v52 + 4 * (3 % v51));
  if ( !v68 )
    goto LABEL_101;
  v69 = *(_DWORD *)v68;
  v70 = *(_DWORD *)(*(_DWORD *)v68 + 12);
    v71 = v70 == 3;
    if ( v70 == 3 )
      v71 = *(_DWORD *)(v69 + 4) == 3;
    if ( v71 )
    v72 = *(_DWORD *)v69;
    if ( *(_DWORD *)v69 )
      v70 = *(_DWORD *)(v72 + 12);
      v68 = v69;
      v69 = *(_DWORD *)v69;
      if ( *(_DWORD *)(v72 + 12) % v51 == 3 % v51 )
  v73 = v68 == 0;
  if ( v68 )
    v73 = *(_DWORD *)v68 == 0;
  if ( v73 )
LABEL_101:
    v74 = operator new(0x10u);
    *(_QWORD *)v74 = 12884901888LL;
    v74[2] = 0;
      3 % v51,
      (int)v74);
  v75 = *(_DWORD *)(v52 + 4 * (4 % v51));
  if ( !v75 )
    goto LABEL_114;
  v76 = *(_DWORD *)v75;
  v77 = *(_DWORD *)(*(_DWORD *)v75 + 12);
    v78 = v77 == 4;
    if ( v77 == 4 )
      v78 = *(_DWORD *)(v76 + 4) == 4;
    if ( v78 )
    v79 = *(_DWORD *)v76;
    if ( *(_DWORD *)v76 )
      v77 = *(_DWORD *)(v79 + 12);
      v75 = v76;
      v76 = *(_DWORD *)v76;
      if ( *(_DWORD *)(v79 + 12) % v51 == 4 % v51 )
  v80 = v75 == 0;
  if ( v75 )
    v80 = *(_DWORD *)v75 == 0;
  if ( v80 )
LABEL_114:
    v81 = operator new(0x10u);
    *(_QWORD *)v81 = 0x400000000LL;
    v81[2] = 0;
      4 % v51,
      (int)v81);
  return v9;
}


void __fastcall InputModeFloatOption::_saveForInputMode(Option *a1, int a2, unsigned int a3)
{
  InputModeFloatOption::_saveForInputMode(a1, a2, a3);
}


void __fastcall InputModeFloatOption::save(Option *a1, int a2)
{
  int v2; // r4@1
  Option *v3; // r5@1

  v2 = a2;
  v3 = a1;
  InputModeFloatOption::_saveForInputMode(a1, a2, 1u);
  InputModeFloatOption::_saveForInputMode(v3, v2, 2u);
  InputModeFloatOption::_saveForInputMode(v3, v2, 3u);
  j_j_j__ZN20InputModeFloatOption17_saveForInputModeERSt6vectorIN12PropertyFile8PropertyESaIS2_EE9InputMode(v3, v2, 4u);
}


void __fastcall InputModeFloatOption::save(Option *a1, int a2)
{
  InputModeFloatOption::save(a1, a2);
}
