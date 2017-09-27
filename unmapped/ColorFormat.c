

int *__fastcall ColorFormat::ColorCodeFromColor(ColorFormat *this, const Color *a2)
{
  int *v2; // r8@1
  Color *v3; // r9@1
  char v4; // r0@1
  int *v5; // r7@3
  double v6; // r0@3
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  int v9; // r1@12
  void *v10; // r0@12
  unsigned int v11; // r0@15
  unsigned int v12; // r10@15
  int v13; // r6@15
  _DWORD *v14; // r0@15
  _DWORD *v15; // r4@16
  int v16; // r7@16
  _DWORD *v17; // r5@18
  bool v18; // zf@21
  int *v19; // r1@24
  int v21; // [sp+24h] [bp-B4h]@3
  int v22; // [sp+28h] [bp-B0h]@3
  int v23; // [sp+2Ch] [bp-ACh]@3
  int v24; // [sp+30h] [bp-A8h]@3
  int v25; // [sp+34h] [bp-A4h]@3
  int v26; // [sp+38h] [bp-A0h]@3
  int v27; // [sp+3Ch] [bp-9Ch]@3
  int v28; // [sp+40h] [bp-98h]@3
  int v29; // [sp+44h] [bp-94h]@3
  int v30; // [sp+48h] [bp-90h]@3
  int v31; // [sp+4Ch] [bp-8Ch]@3
  int v32; // [sp+50h] [bp-88h]@3
  int v33; // [sp+54h] [bp-84h]@3
  int v34; // [sp+58h] [bp-80h]@3
  int v35; // [sp+5Ch] [bp-7Ch]@3
  int v36; // [sp+60h] [bp-78h]@3
  int v37; // [sp+64h] [bp-74h]@3
  int v38; // [sp+68h] [bp-70h]@3
  int v39; // [sp+6Ch] [bp-6Ch]@3
  int v40; // [sp+70h] [bp-68h]@3
  int v41; // [sp+74h] [bp-64h]@3
  int v42; // [sp+78h] [bp-60h]@3
  int v43; // [sp+7Ch] [bp-5Ch]@3
  int v44; // [sp+80h] [bp-58h]@3
  int v45; // [sp+84h] [bp-54h]@3
  int v46; // [sp+88h] [bp-50h]@3
  int v47; // [sp+8Ch] [bp-4Ch]@3
  int v48; // [sp+90h] [bp-48h]@3
  int v49; // [sp+94h] [bp-44h]@3
  int v50; // [sp+98h] [bp-40h]@3
  int v51; // [sp+9Ch] [bp-3Ch]@3
  int v52; // [sp+A0h] [bp-38h]@3
  char v53; // [sp+A4h] [bp-34h]@3

  v2 = (int *)this;
  v3 = a2;
  v4 = byte_27EEAC0;
  __dmb();
  if ( !(v4 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27EEAC0) )
  {
    v21 = Color::toARGB((Color *)&unk_27EE958);
    sub_21E8AF4(&v22, (int *)&unk_27EEA68);
    v23 = Color::toARGB((Color *)&unk_27EE968);
    sub_21E8AF4(&v24, (int *)&unk_27EEA6C);
    v25 = Color::toARGB((Color *)&unk_27EE978);
    sub_21E8AF4(&v26, (int *)&unk_27EEA70);
    v27 = Color::toARGB((Color *)&unk_27EE988);
    sub_21E8AF4(&v28, (int *)&unk_27EEA74);
    v29 = Color::toARGB((Color *)&unk_27EE998);
    sub_21E8AF4(&v30, (int *)&unk_27EEA78);
    v31 = Color::toARGB((Color *)&unk_27EE9A8);
    sub_21E8AF4(&v32, (int *)&unk_27EEA7C);
    v33 = Color::toARGB((Color *)&unk_27EE9B8);
    sub_21E8AF4(&v34, (int *)&unk_27EEA80);
    v35 = Color::toARGB((Color *)&unk_27EE9C8);
    sub_21E8AF4(&v36, (int *)&unk_27EEA84);
    v37 = Color::toARGB((Color *)&unk_27EE9D8);
    sub_21E8AF4(&v38, (int *)&unk_27EEA88);
    v39 = Color::toARGB((Color *)&unk_27EE9E8);
    sub_21E8AF4(&v40, (int *)&unk_27EEA8C);
    v41 = Color::toARGB((Color *)&unk_27EE9F8);
    sub_21E8AF4(&v42, (int *)&unk_27EEA90);
    v43 = Color::toARGB((Color *)&unk_27EEA08);
    sub_21E8AF4(&v44, (int *)&unk_27EEA94);
    v45 = Color::toARGB((Color *)&unk_27EEA18);
    sub_21E8AF4(&v46, (int *)&unk_27EEA98);
    v47 = Color::toARGB((Color *)&unk_27EEA28);
    sub_21E8AF4(&v48, (int *)&unk_27EEA9C);
    v49 = Color::toARGB((Color *)&unk_27EEA38);
    sub_21E8AF4(&v50, (int *)&unk_27EEAA0);
    v51 = Color::toARGB((Color *)&unk_27EEA48);
    sub_21E8AF4(&v52, (int *)&unk_27EEAA4);
    v5 = (int *)&v53;
    LODWORD(v6) = &dword_27EEAFC;
    std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_Hashtable<std::pair<int const,std::string> const*>(
      v6,
      (unsigned int *)&v53,
      0);
    do
    {
      v9 = *(v5 - 1);
      v5 -= 2;
      v10 = (void *)(v9 - 12);
      if ( (int *)(v9 - 12) != &dword_28898C0 )
      {
        v7 = (unsigned int *)(v9 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
        }
        else
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      }
    }
    while ( v5 != &v21 );
    _cxa_atexit(std::unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int const,std::string>>>::~unordered_map);
    j___cxa_guard_release((unsigned int *)&byte_27EEAC0);
  }
  v11 = Color::toARGB(v3);
  v12 = v11;
  v13 = v11 % unk_27EEB00;
  v14 = *(_DWORD **)(dword_27EEAFC + 4 * (v11 % unk_27EEB00));
  if ( !v14 )
    goto LABEL_25;
  v15 = (_DWORD *)*v14;
  v16 = *(_DWORD *)(*v14 + 4);
  while ( v12 != v16 )
    v17 = (_DWORD *)*v15;
    if ( *v15 )
      v16 = v17[1];
      v14 = v15;
      v15 = (_DWORD *)*v15;
      if ( v17[1] % unk_27EEB00 == v13 )
        continue;
  v18 = v14 == 0;
  if ( v14 )
    v14 = (_DWORD *)*v14;
    v18 = v14 == 0;
  if ( v18 )
LABEL_25:
    v19 = (int *)&Util::EMPTY_STRING;
  else
    v19 = v14 + 2;
  return sub_21E8AF4(v2, v19);
}


int __fastcall ColorFormat::ColorFromColorCode(int **a1)
{
  int **v1; // r9@1
  char v2; // r0@1
  char *v3; // r6@3
  double v4; // r0@3
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  int v7; // r1@12
  int v8; // t1@12
  void *v9; // r0@12
  int v10; // r0@15
  int v11; // r2@16
  char v13; // [sp+28h] [bp-B0h]@3
  void *v14; // [sp+2Ch] [bp-ACh]@3
  int v15; // [sp+30h] [bp-A8h]@3
  void *v16; // [sp+34h] [bp-A4h]@3
  int v17; // [sp+38h] [bp-A0h]@3
  void *v18; // [sp+3Ch] [bp-9Ch]@3
  int v19; // [sp+40h] [bp-98h]@3
  void *v20; // [sp+44h] [bp-94h]@3
  int v21; // [sp+48h] [bp-90h]@3
  void *v22; // [sp+4Ch] [bp-8Ch]@3
  int v23; // [sp+50h] [bp-88h]@3
  void *v24; // [sp+54h] [bp-84h]@3
  int v25; // [sp+58h] [bp-80h]@3
  void *v26; // [sp+5Ch] [bp-7Ch]@3
  int v27; // [sp+60h] [bp-78h]@3
  void *v28; // [sp+64h] [bp-74h]@3
  int v29; // [sp+68h] [bp-70h]@3
  void *v30; // [sp+6Ch] [bp-6Ch]@3
  int v31; // [sp+70h] [bp-68h]@3
  void *v32; // [sp+74h] [bp-64h]@3
  int v33; // [sp+78h] [bp-60h]@3
  void *v34; // [sp+7Ch] [bp-5Ch]@3
  int v35; // [sp+80h] [bp-58h]@3
  void *v36; // [sp+84h] [bp-54h]@3
  int v37; // [sp+88h] [bp-50h]@3
  void *v38; // [sp+8Ch] [bp-4Ch]@3
  int v39; // [sp+90h] [bp-48h]@3
  void *v40; // [sp+94h] [bp-44h]@3
  int v41; // [sp+98h] [bp-40h]@3
  void *v42; // [sp+9Ch] [bp-3Ch]@3
  int v43; // [sp+A0h] [bp-38h]@3
  void *v44; // [sp+A4h] [bp-34h]@3
  char v45; // [sp+A8h] [bp-30h]@3

  v1 = a1;
  v2 = byte_27EEABC;
  __dmb();
  if ( !(v2 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27EEABC) )
  {
    sub_21E8AF4((int *)&v13, (int *)&unk_27EEA68);
    v14 = &unk_27EE958;
    sub_21E8AF4(&v15, (int *)&unk_27EEA6C);
    v16 = &unk_27EE968;
    sub_21E8AF4(&v17, (int *)&unk_27EEA70);
    v18 = &unk_27EE978;
    sub_21E8AF4(&v19, (int *)&unk_27EEA74);
    v20 = &unk_27EE988;
    sub_21E8AF4(&v21, (int *)&unk_27EEA78);
    v22 = &unk_27EE998;
    sub_21E8AF4(&v23, (int *)&unk_27EEA7C);
    v24 = &unk_27EE9A8;
    sub_21E8AF4(&v25, (int *)&unk_27EEA80);
    v26 = &unk_27EE9B8;
    sub_21E8AF4(&v27, (int *)&unk_27EEA84);
    v28 = &unk_27EE9C8;
    sub_21E8AF4(&v29, (int *)&unk_27EEA88);
    v30 = &unk_27EE9D8;
    sub_21E8AF4(&v31, (int *)&unk_27EEA8C);
    v32 = &unk_27EE9E8;
    sub_21E8AF4(&v33, (int *)&unk_27EEA90);
    v34 = &unk_27EE9F8;
    sub_21E8AF4(&v35, (int *)&unk_27EEA94);
    v36 = &unk_27EEA08;
    sub_21E8AF4(&v37, (int *)&unk_27EEA98);
    v38 = &unk_27EEA18;
    sub_21E8AF4(&v39, (int *)&unk_27EEA9C);
    v40 = &unk_27EEA28;
    sub_21E8AF4(&v41, (int *)&unk_27EEAA0);
    v42 = &unk_27EEA38;
    sub_21E8AF4(&v43, (int *)&unk_27EEAA4);
    v3 = &v45;
    LODWORD(v4) = &unk_27EEAE0;
    v44 = &unk_27EEA48;
    std::_Hashtable<std::string,std::pair<std::string const,Color const*>,std::allocator<std::pair<std::string const,Color const*>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<std::string const,Color const*> const*>(
      v4,
      (int **)&v45,
      0);
    do
    {
      v8 = *((_DWORD *)v3 - 2);
      v3 -= 8;
      v7 = v8;
      v9 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) != &dword_28898C0 )
      {
        v5 = (unsigned int *)(v7 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        }
        else
          v6 = (*v5)--;
        if ( v6 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      }
    }
    while ( v3 != &v13 );
    _cxa_atexit(std::unordered_map<std::string,Color const*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,Color const*>>>::~unordered_map);
    j___cxa_guard_release((unsigned int *)&byte_27EEABC);
  }
  v10 = std::_Hashtable<std::string,std::pair<std::string const,Color const*>,std::allocator<std::pair<std::string const,Color const*>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
          (unsigned __int64 *)&unk_27EEAE0,
          v1);
  if ( v10 )
    v11 = *(_DWORD *)(v10 + 8);
  else
    v11 = 0;
  return v11;
}


signed int __fastcall ColorFormat::IsColorCode(ColorFormat *this, char a2)
{
  signed int result; // r0@2
  unsigned int v3; // r1@3

  if ( (unsigned __int8)((_BYTE)this - 48) >= 0xAu )
  {
    v3 = (unsigned __int8)((_BYTE)this - 97);
    result = 0;
    if ( v3 < 6 )
      result = 1;
  }
  else
    result = 1;
  return result;
}


int __fastcall ColorFormat::FromString(unsigned int *a1)
{
  unsigned int *v1; // r4@1
  char v2; // r0@1
  double v3; // r0@2
  unsigned int v4; // r0@3
  int v5; // r6@5
  int *v6; // r5@5
  void *v7; // r0@8
  void *v8; // r0@9
  void *v9; // r0@10
  void *v10; // r0@11
  void *v11; // r0@12
  void *v12; // r0@13
  void *v13; // r0@14
  void *v14; // r0@15
  void *v15; // r0@16
  void *v16; // r0@17
  void *v17; // r0@18
  void *v18; // r0@19
  void *v19; // r0@20
  void *v20; // r0@21
  void *v21; // r0@22
  void *v22; // r0@23
  void *v23; // r0@24
  void *v24; // r0@25
  void *v25; // r0@26
  void *v26; // r0@27
  void *v27; // r0@28
  unsigned int v28; // r9@29
  unsigned int v29; // r10@29
  unsigned int v30; // r11@29
  int v31; // r6@29
  int v32; // r7@30
  _DWORD *v33; // r8@30
  int v34; // r4@30
  _DWORD *v35; // r1@32
  size_t v36; // r2@32
  int v37; // r5@34
  int v38; // r4@36
  int result; // r0@44
  unsigned int *v40; // r2@46
  signed int v41; // r1@48
  unsigned int *v42; // r2@54
  signed int v43; // r1@56
  unsigned int *v44; // r2@58
  signed int v45; // r1@60
  unsigned int *v46; // r2@62
  signed int v47; // r1@64
  unsigned int *v48; // r2@66
  signed int v49; // r1@68
  unsigned int *v50; // r2@70
  signed int v51; // r1@72
  unsigned int *v52; // r2@74
  signed int v53; // r1@76
  unsigned int *v54; // r2@78
  signed int v55; // r1@80
  unsigned int *v56; // r2@82
  signed int v57; // r1@84
  unsigned int *v58; // r2@86
  signed int v59; // r1@88
  unsigned int *v60; // r2@90
  signed int v61; // r1@92
  unsigned int *v62; // r2@94
  signed int v63; // r1@96
  unsigned int *v64; // r2@98
  signed int v65; // r1@100
  unsigned int *v66; // r2@102
  signed int v67; // r1@104
  unsigned int *v68; // r2@106
  signed int v69; // r1@108
  unsigned int *v70; // r2@110
  signed int v71; // r1@112
  unsigned int *v72; // r2@114
  signed int v73; // r1@116
  unsigned int *v74; // r2@118
  signed int v75; // r1@120
  unsigned int *v76; // r2@122
  signed int v77; // r1@124
  unsigned int *v78; // r2@126
  signed int v79; // r1@128
  unsigned int *v80; // r2@130
  signed int v81; // r1@132
  unsigned int *v82; // r2@134
  signed int v83; // r1@136
  void *s1; // [sp+4h] [bp-D4h]@29
  int v85; // [sp+Ch] [bp-CCh]@28
  int v86; // [sp+14h] [bp-C4h]@27
  int v87; // [sp+1Ch] [bp-BCh]@26
  int v88; // [sp+24h] [bp-B4h]@25
  int v89; // [sp+2Ch] [bp-ACh]@24
  int v90; // [sp+34h] [bp-A4h]@23
  int v91; // [sp+3Ch] [bp-9Ch]@22
  int v92; // [sp+44h] [bp-94h]@21
  int v93; // [sp+4Ch] [bp-8Ch]@20
  int v94; // [sp+54h] [bp-84h]@19
  int v95; // [sp+5Ch] [bp-7Ch]@18
  int v96; // [sp+64h] [bp-74h]@17
  int v97; // [sp+6Ch] [bp-6Ch]@16
  int v98; // [sp+74h] [bp-64h]@15
  int v99; // [sp+7Ch] [bp-5Ch]@14
  int v100; // [sp+84h] [bp-54h]@13
  int v101; // [sp+8Ch] [bp-4Ch]@12
  int v102; // [sp+94h] [bp-44h]@11
  int v103; // [sp+9Ch] [bp-3Ch]@10
  int v104; // [sp+A4h] [bp-34h]@9
  int v105; // [sp+ACh] [bp-2Ch]@8

  v1 = a1;
  v2 = byte_27EEAB8;
  __dmb();
  if ( !(v2 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27EEAB8) )
  {
    *(_DWORD *)algn_27EEACC = 0;
    dword_27EEAD0 = 0;
    dword_27EEAD4 = 1065353216;
    LODWORD(v3) = &dword_27EEAD4;
    unk_27EEAD8 = 0;
    v4 = sub_21E6254(v3);
    dword_27EEAC8 = v4;
    if ( v4 == 1 )
    {
      dword_27EEADC = 0;
      v6 = &dword_27EEADC;
    }
    else
      if ( v4 >= 0x40000000 )
        sub_21E57F4();
      v5 = 4 * v4;
      v6 = (int *)operator new(4 * v4);
      _aeabi_memclr4(v6, v5);
    dword_27EEAC4 = (int)v6;
    _cxa_atexit(std::unordered_map<std::string,std::string const*,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::string const*>>>::~unordered_map);
    j___cxa_guard_release((unsigned int *)&byte_27EEAB8);
  }
  if ( !dword_27EEAD0 )
    sub_21E94B4((void **)&v105, "escape");
    *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string const*>,std::allocator<std::pair<std::string const,std::string const*>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                 (int)&dword_27EEAC4,
                 (int **)&v105) = &unk_27EEA64;
    v7 = (void *)(v105 - 12);
    if ( (int *)(v105 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v105 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
      }
      else
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    sub_21E94B4((void **)&v104, "black");
                 (int **)&v104) = &unk_27EEA68;
    v8 = (void *)(v104 - 12);
    if ( (int *)(v104 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v104 - 4);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    sub_21E94B4((void **)&v103, "dark_blue");
                 (int **)&v103) = &unk_27EEA6C;
    v9 = (void *)(v103 - 12);
    if ( (int *)(v103 - 12) != &dword_28898C0 )
      v46 = (unsigned int *)(v103 - 4);
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
        v47 = (*v46)--;
      if ( v47 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    sub_21E94B4((void **)&v102, "dark_green");
                 (int **)&v102) = &unk_27EEA70;
    v10 = (void *)(v102 - 12);
    if ( (int *)(v102 - 12) != &dword_28898C0 )
      v48 = (unsigned int *)(v102 - 4);
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    sub_21E94B4((void **)&v101, "dark_aqua");
                 (int **)&v101) = &unk_27EEA74;
    v11 = (void *)(v101 - 12);
    if ( (int *)(v101 - 12) != &dword_28898C0 )
      v50 = (unsigned int *)(v101 - 4);
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
        v51 = (*v50)--;
      if ( v51 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    sub_21E94B4((void **)&v100, "dark_red");
                 (int **)&v100) = &unk_27EEA78;
    v12 = (void *)(v100 - 12);
    if ( (int *)(v100 - 12) != &dword_28898C0 )
      v52 = (unsigned int *)(v100 - 4);
          v53 = __ldrex(v52);
        while ( __strex(v53 - 1, v52) );
        v53 = (*v52)--;
      if ( v53 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    sub_21E94B4((void **)&v99, "dark_purple");
                 (int **)&v99) = &unk_27EEA7C;
    v13 = (void *)(v99 - 12);
    if ( (int *)(v99 - 12) != &dword_28898C0 )
      v54 = (unsigned int *)(v99 - 4);
          v55 = __ldrex(v54);
        while ( __strex(v55 - 1, v54) );
        v55 = (*v54)--;
      if ( v55 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    sub_21E94B4((void **)&v98, "gold");
                 (int **)&v98) = &unk_27EEA80;
    v14 = (void *)(v98 - 12);
    if ( (int *)(v98 - 12) != &dword_28898C0 )
      v56 = (unsigned int *)(v98 - 4);
          v57 = __ldrex(v56);
        while ( __strex(v57 - 1, v56) );
        v57 = (*v56)--;
      if ( v57 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    sub_21E94B4((void **)&v97, "gray");
                 (int **)&v97) = &unk_27EEA84;
    v15 = (void *)(v97 - 12);
    if ( (int *)(v97 - 12) != &dword_28898C0 )
      v58 = (unsigned int *)(v97 - 4);
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
        v59 = (*v58)--;
      if ( v59 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    sub_21E94B4((void **)&v96, "dark_gray");
                 (int **)&v96) = &unk_27EEA88;
    v16 = (void *)(v96 - 12);
    if ( (int *)(v96 - 12) != &dword_28898C0 )
      v60 = (unsigned int *)(v96 - 4);
          v61 = __ldrex(v60);
        while ( __strex(v61 - 1, v60) );
        v61 = (*v60)--;
      if ( v61 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    sub_21E94B4((void **)&v95, "blue");
                 (int **)&v95) = &unk_27EEA8C;
    v17 = (void *)(v95 - 12);
    if ( (int *)(v95 - 12) != &dword_28898C0 )
      v62 = (unsigned int *)(v95 - 4);
          v63 = __ldrex(v62);
        while ( __strex(v63 - 1, v62) );
        v63 = (*v62)--;
      if ( v63 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    sub_21E94B4((void **)&v94, "green");
                 (int **)&v94) = &unk_27EEA90;
    v18 = (void *)(v94 - 12);
    if ( (int *)(v94 - 12) != &dword_28898C0 )
      v64 = (unsigned int *)(v94 - 4);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    sub_21E94B4((void **)&v93, "aqua");
                 (int **)&v93) = &unk_27EEA94;
    v19 = (void *)(v93 - 12);
    if ( (int *)(v93 - 12) != &dword_28898C0 )
      v66 = (unsigned int *)(v93 - 4);
          v67 = __ldrex(v66);
        while ( __strex(v67 - 1, v66) );
        v67 = (*v66)--;
      if ( v67 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    sub_21E94B4((void **)&v92, "red");
                 (int **)&v92) = &unk_27EEA98;
    v20 = (void *)(v92 - 12);
    if ( (int *)(v92 - 12) != &dword_28898C0 )
      v68 = (unsigned int *)(v92 - 4);
          v69 = __ldrex(v68);
        while ( __strex(v69 - 1, v68) );
        v69 = (*v68)--;
      if ( v69 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    sub_21E94B4((void **)&v91, "light_purple");
                 (int **)&v91) = &unk_27EEA9C;
    v21 = (void *)(v91 - 12);
    if ( (int *)(v91 - 12) != &dword_28898C0 )
      v70 = (unsigned int *)(v91 - 4);
          v71 = __ldrex(v70);
        while ( __strex(v71 - 1, v70) );
        v71 = (*v70)--;
      if ( v71 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    sub_21E94B4((void **)&v90, "yellow");
                 (int **)&v90) = &unk_27EEAA0;
    v22 = (void *)(v90 - 12);
    if ( (int *)(v90 - 12) != &dword_28898C0 )
      v72 = (unsigned int *)(v90 - 4);
          v73 = __ldrex(v72);
        while ( __strex(v73 - 1, v72) );
        v73 = (*v72)--;
      if ( v73 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    sub_21E94B4((void **)&v89, "white");
                 (int **)&v89) = &unk_27EEAA4;
    v23 = (void *)(v89 - 12);
    if ( (int *)(v89 - 12) != &dword_28898C0 )
      v74 = (unsigned int *)(v89 - 4);
          v75 = __ldrex(v74);
        while ( __strex(v75 - 1, v74) );
        v75 = (*v74)--;
      if ( v75 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    sub_21E94B4((void **)&v88, "obfuscated");
                 (int **)&v88) = &unk_27EEAA8;
    v24 = (void *)(v88 - 12);
    if ( (int *)(v88 - 12) != &dword_28898C0 )
      v76 = (unsigned int *)(v88 - 4);
          v77 = __ldrex(v76);
        while ( __strex(v77 - 1, v76) );
        v77 = (*v76)--;
      if ( v77 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    sub_21E94B4((void **)&v87, "bold");
                 (int **)&v87) = &unk_27EEAAC;
    v25 = (void *)(v87 - 12);
    if ( (int *)(v87 - 12) != &dword_28898C0 )
      v78 = (unsigned int *)(v87 - 4);
          v79 = __ldrex(v78);
        while ( __strex(v79 - 1, v78) );
        v79 = (*v78)--;
      if ( v79 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    sub_21E94B4((void **)&v86, "italic");
                 (int **)&v86) = &unk_27EEAB0;
    v26 = (void *)(v86 - 12);
    if ( (int *)(v86 - 12) != &dword_28898C0 )
      v80 = (unsigned int *)(v86 - 4);
          v81 = __ldrex(v80);
        while ( __strex(v81 - 1, v80) );
        v81 = (*v80)--;
      if ( v81 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    sub_21E94B4((void **)&v85, "reset");
                 (int **)&v85) = &unk_27EEAB4;
    v27 = (void *)(v85 - 12);
    if ( (int *)(v85 - 12) != &dword_28898C0 )
      v82 = (unsigned int *)(v85 - 4);
          v83 = __ldrex(v82);
        while ( __strex(v83 - 1, v82) );
        v83 = (*v82)--;
      if ( v83 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
  Util::toLower(&s1, *(_DWORD *)(*v1 - 12), *v1);
  v28 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v29 = dword_27EEAC8;
  v30 = v28 % dword_27EEAC8;
  v31 = *(_DWORD *)(dword_27EEAC4 + 4 * (v28 % dword_27EEAC8));
  if ( v31 )
    v32 = *(_DWORD *)v31;
    v33 = s1;
    v34 = *(_DWORD *)(*(_DWORD *)v31 + 12);
    while ( 1 )
      if ( v34 == v28 )
        v35 = *(_DWORD **)(v32 + 4);
        v36 = *(v33 - 3);
        if ( v36 == *(v35 - 3) && !memcmp(v33, v35, v36) )
          break;
      v37 = *(_DWORD *)v32;
      if ( !*(_DWORD *)v32 )
        v38 = 0;
        goto LABEL_42;
      v34 = *(_DWORD *)(v37 + 12);
      v31 = v32;
      v32 = *(_DWORD *)v32;
      if ( *(_DWORD *)(v37 + 12) % v29 != v30 )
    if ( v31 )
      v38 = *(_DWORD *)v31;
      v38 = 0;
  else
    v38 = 0;
LABEL_42:
  if ( v33 - 3 != &dword_28898C0 )
    v40 = v33 - 1;
    if ( &pthread_create )
      __dmb();
      do
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v33 - 3);
  if ( v38 )
    result = *(_DWORD *)(v38 + 8);
    result = 0;
  return result;
}


int __fastcall ColorFormat::ColorFromChar(ColorFormat *this, char a2)
{
  ColorFormat *v2; // r4@1
  int *v3; // r0@1
  int v4; // r4@1
  void *v5; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+0h] [bp-20h]@1

  v2 = this;
  v3 = sub_21E8AF4(&v9, (int *)&unk_27EEA64);
  sub_21E7434((const void **)v3, 1u, (int)v2);
  v4 = ColorFormat::ColorFromColorCode((int **)&v9);
  v5 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  return v4;
}
