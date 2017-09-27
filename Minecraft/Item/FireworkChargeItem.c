

void __fastcall FireworkChargeItem::getColor(FireworkChargeItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  FireworkChargeItem::getColor(this, a2, a3);
}


void __fastcall FireworkChargeItem::setColor(FireworkChargeItem *this, ItemInstance *a2)
{
  ItemInstance *v2; // r4@1
  void *v3; // r5@2
  int *v4; // r0@5
  int v5; // r0@5
  int *v6; // r0@6
  unsigned int v7; // r6@6
  const char *v8; // r7@7
  char *v9; // r5@7
  unsigned int v11; // r0@11
  char *v16; // r2@11
  unsigned int v17; // r3@12
  int v21; // r4@18
  int v22; // r0@18
  void *v23; // r0@18
  unsigned int *v24; // r2@19
  signed int v25; // r1@21
  int v26; // r4@23
  int v27; // r0@23
  int v28; // [sp+4h] [bp-3Ch]@23
  int v29; // [sp+Ch] [bp-34h]@18
  float v30; // [sp+10h] [bp-30h]@5
  float v31; // [sp+14h] [bp-2Ch]@5
  float v32; // [sp+18h] [bp-28h]@5
  int v33; // [sp+1Ch] [bp-24h]@5
  void *v34; // [sp+24h] [bp-1Ch]@2

  v2 = a2;
  if ( !ItemInstance::hasUserData(a2) )
  {
    v3 = operator new(0x1Cu);
    CompoundTag::CompoundTag((int)v3);
    v34 = v3;
    ItemInstance::setUserData((int)v2, (int *)&v34);
    if ( v34 )
      (*(void (**)(void))(*(_DWORD *)v34 + 4))();
    v34 = 0;
  }
  v33 = unk_283E63C;
  v30 = Color::BLACK;
  v31 = unk_283E634;
  v32 = unk_283E638;
  v4 = (int *)ItemInstance::getUserData(v2);
  v5 = CompoundTag::getCompound(*v4, (const void **)&FireworkChargeItem::TAG_EXPLOSION);
  if ( !v5 )
    goto LABEL_35;
  v6 = CompoundTag::getByteArray(v5, (const void **)&FireworkChargeItem::TAG_E_COLORS);
  v7 = *v6;
  if ( *v6 )
    v8 = (const char *)v6[2];
    v9 = (char *)operator new(*v6);
    _aeabi_memcpy(v9, v8, v7);
  else
    v9 = 0;
  if ( &v9[v7] == v9 )
    _R6 = 0;
    v11 = v7;
    __asm { VLDR            S0, =0.0039216 }
    v16 = v9;
    do
    {
      v17 = (unsigned __int8)*v16;
      if ( v17 <= 0xF )
      {
        _R3 = DyePowderItem::COLOR_RGB[v17];
        ++_R6;
        _R7 = (_R3 >> 16) & 0xFF;
        __asm
        {
          VMOV            S2, R7
          VCVT.F32.S32    S2, S2
        }
        _R7 = (unsigned __int16)_R3 >> 8;
        _R3 = (unsigned __int8)_R3;
          VMOV            S4, R7
          VCVT.F32.S32    S4, S4
          VLDR            S6, [SP,#0x40+var_30]
          VMUL.F32        S2, S2, S0
          VMUL.F32        S4, S4, S0
          VADD.F32        S2, S2, S6
          VMOV            S6, R3
          VCVT.F32.S32    S6, S6
          VSTR            S2, [SP,#0x40+var_30]
          VLDR            S2, [SP,#0x40+var_2C]
          VADD.F32        S2, S4, S2
          VMUL.F32        S4, S6, S0
          VSTR            S2, [SP,#0x40+var_2C]
          VLDR            S2, [SP,#0x40+var_28]
          VADD.F32        S2, S2, S4
          VSTR            S2, [SP,#0x40+var_28]
      }
      ++v16;
      --v11;
    }
    while ( v11 );
  if ( v9 )
    operator delete(v9);
  if ( _R6 >= 1 )
    __asm
      VMOV            S2, R6
      VMOV.F32        S0, #1.0
      VCVT.F32.S32    S2, S2
      VDIV.F32        S0, S0, S2
      VLDR            S2, [SP,#0x40+var_30]
      VMUL.F32        S2, S2, S0
      VSTR            S2, [SP,#0x40+var_30]
      VLDR            S2, [SP,#0x40+var_2C]
      VSTR            S2, [SP,#0x40+var_2C]
      VLDR            S2, [SP,#0x40+var_28]
      VMUL.F32        S0, S2, S0
      VSTR            S0, [SP,#0x40+var_28]
    v21 = *(_DWORD *)ItemInstance::getUserData(v2);
    sub_21E94B4((void **)&v29, "customColor");
    v22 = Color::toARGB((Color *)&v30);
    CompoundTag::putInt(v21, (const void **)&v29, v22);
    v23 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) == &dword_28898C0 )
      return;
    v24 = (unsigned int *)(v29 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      goto LABEL_30;
LABEL_35:
    v26 = *(_DWORD *)ItemInstance::getUserData(v2);
    sub_21E94B4((void **)&v28, "customColor");
    v27 = Color::toARGB((Color *)&Color::BLACK);
    CompoundTag::putInt(v26, (const void **)&v28, v27);
    v23 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) == &dword_28898C0 )
    v24 = (unsigned int *)(v28 - 4);
  v25 = (*v24)--;
LABEL_30:
  if ( v25 <= 0 )
    j_j_j_j__ZdlPv_9(v23);
}


void __fastcall FireworkChargeItem::getFormattedHoverText(int a1, const void **a2, const void **a3)
{
  const void **v3; // r11@1
  const void **v4; // r10@1
  int v5; // r8@1
  unsigned int v6; // r1@1
  const void **v7; // r0@2
  void *v8; // r0@2
  char *v9; // r0@3
  void *v10; // r0@4
  unsigned int *v11; // r2@5
  signed int v12; // r1@7
  void *v13; // r0@9
  int *v14; // r0@11
  unsigned int v15; // r5@11
  const char *v16; // r7@12
  char *v17; // r6@12
  int v18; // r5@14
  int v19; // r9@15
  char *v20; // r0@15
  void *v21; // r0@16
  void *v22; // r7@16
  int v23; // r4@16
  int *v24; // r0@20
  unsigned int v25; // r5@20
  const char *v26; // r7@21
  char *v27; // r9@21
  __int64 v28; // kr00_8@24
  unsigned int v29; // r1@24
  const void **v30; // r0@26
  const void **v31; // r0@28
  char *v32; // r0@28
  char *v33; // r0@29
  void *v34; // r0@30
  void *v35; // r0@31
  char *v36; // r0@32
  void *v37; // r0@33
  void *v38; // r7@33
  int v39; // r4@33
  __int64 v40; // kr08_8@38
  unsigned int v41; // r1@38
  const void **v42; // r0@40
  char *v43; // r0@42
  void *v44; // r0@43
  void *v45; // r0@44
  char *v46; // r0@45
  __int64 v47; // kr10_8@47
  unsigned int v48; // r1@47
  const void **v49; // r0@49
  char *v50; // r0@51
  void *v51; // r0@52
  void *v52; // r0@53
  char *v53; // r0@54
  unsigned int *v54; // r2@60
  signed int v55; // r1@62
  unsigned int *v56; // r2@64
  signed int v57; // r1@66
  unsigned int *v58; // r2@68
  signed int v59; // r1@70
  unsigned int *v60; // r2@80
  signed int v61; // r1@82
  unsigned int *v62; // r2@84
  signed int v63; // r1@86
  unsigned int *v64; // r2@88
  signed int v65; // r1@90
  unsigned int *v66; // r2@92
  signed int v67; // r1@94
  unsigned int *v68; // r2@96
  signed int v69; // r1@98
  unsigned int *v70; // r2@100
  signed int v71; // r1@102
  unsigned int *v72; // r2@104
  signed int v73; // r1@106
  unsigned int *v74; // r2@108
  signed int v75; // r1@110
  unsigned int *v76; // r2@112
  signed int v77; // r1@114
  unsigned int *v78; // r2@116
  signed int v79; // r1@118
  unsigned int *v80; // r2@120
  signed int v81; // r1@122
  unsigned int *v82; // r2@124
  signed int v83; // r1@126
  unsigned int *v84; // r2@128
  signed int v85; // r1@130
  unsigned int *v86; // r2@132
  signed int v87; // r1@134
  int v88; // [sp+8h] [bp-98h]@47
  int v89; // [sp+Ch] [bp-94h]@47
  char *v90; // [sp+10h] [bp-90h]@47
  char *v91; // [sp+14h] [bp-8Ch]@51
  int v92; // [sp+1Ch] [bp-84h]@38
  int v93; // [sp+20h] [bp-80h]@38
  char *v94; // [sp+24h] [bp-7Ch]@38
  char *v95; // [sp+28h] [bp-78h]@42
  void *v96; // [sp+2Ch] [bp-74h]@33
  int v97; // [sp+30h] [bp-70h]@33
  char *v98; // [sp+34h] [bp-6Ch]@33
  int v99; // [sp+3Ch] [bp-64h]@24
  int v100; // [sp+40h] [bp-60h]@24
  char *v101; // [sp+44h] [bp-5Ch]@24
  char *v102; // [sp+48h] [bp-58h]@28
  char *v103; // [sp+4Ch] [bp-54h]@28
  void *v104; // [sp+50h] [bp-50h]@16
  int v105; // [sp+54h] [bp-4Ch]@16
  char *v106; // [sp+58h] [bp-48h]@16
  char *v107; // [sp+5Ch] [bp-44h]@15
  int v108; // [sp+64h] [bp-3Ch]@9
  int v109; // [sp+68h] [bp-38h]@9
  int v110; // [sp+6Ch] [bp-34h]@2
  char *v111; // [sp+70h] [bp-30h]@2
  int v112; // [sp+74h] [bp-2Ch]@2

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_21E7408(a2, "\n", 1u);
  v6 = CompoundTag::getByte(v5, (const void **)&FireworkChargeItem::TAG_E_TYPE);
  if ( v6 > 4 )
  {
    sub_21E94B4((void **)&v108, "item.fireworksCharge.type");
    I18n::get(&v109, (int **)&v108);
    sub_21E72F0(v3, (const void **)&v109);
    v13 = (void *)(v109 - 12);
    if ( (int *)(v109 - 12) != &dword_28898C0 )
    {
      v58 = (unsigned int *)(v109 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
      }
      else
        v59 = (*v58)--;
      if ( v59 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    }
    v10 = (void *)(v108 - 12);
    if ( (int *)(v108 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v108 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
LABEL_77:
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
        goto LABEL_11;
LABEL_76:
      v12 = (*v11)--;
      goto LABEL_77;
  }
  else
    Util::toString<unsigned char,(void *)0,(void *)0>((void **)&v110, v6);
    v7 = sub_21E82D8((const void **)&v110, 0, (unsigned int)"item.fireworksCharge.type.", (_BYTE *)0x1A);
    v111 = (char *)*v7;
    *v7 = &unk_28898CC;
    I18n::get(&v112, (int **)&v111);
    sub_21E72F0(v3, (const void **)&v112);
    v8 = (void *)(v112 - 12);
    if ( (int *)(v112 - 12) != &dword_28898C0 )
      v54 = (unsigned int *)(v112 - 4);
          v55 = __ldrex(v54);
        while ( __strex(v55 - 1, v54) );
        v55 = (*v54)--;
      if ( v55 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    v9 = v111 - 12;
    if ( (int *)(v111 - 12) != &dword_28898C0 )
      v56 = (unsigned int *)(v111 - 4);
          v57 = __ldrex(v56);
        while ( __strex(v57 - 1, v56) );
        v57 = (*v56)--;
      if ( v57 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    v10 = (void *)(v110 - 12);
    if ( (int *)(v110 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v110 - 4);
        goto LABEL_77;
      goto LABEL_76;
LABEL_11:
  v14 = CompoundTag::getByteArray(v5, (const void **)&FireworkChargeItem::TAG_E_COLORS);
  v15 = *v14;
  if ( *v14 )
    v16 = (const char *)v14[2];
    v17 = (char *)operator new(*v14);
    _aeabi_memcpy(v17, v16, v15);
    v17 = 0;
  v18 = (int)&v17[v15];
  if ( (char *)v18 != v17 )
    v107 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v107, *((_DWORD *)*v4 - 3) + 1);
    sub_21E7408((const void **)&v107, "\n", 1u);
    sub_21E72F0((const void **)&v107, v4);
    sub_21E72F0(v3, (const void **)&v107);
    v19 = v18 - (_DWORD)v17;
    v20 = v107 - 12;
    if ( (int *)(v107 - 12) != &dword_28898C0 )
      v60 = (unsigned int *)(v107 - 4);
          v61 = __ldrex(v60);
        while ( __strex(v61 - 1, v60) );
        v61 = (*v60)--;
      if ( v61 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    v21 = operator new(v18 - (_DWORD)v17);
    v22 = v21;
    v23 = (int)v21 + v19;
    v104 = v21;
    v105 = (int)v21;
    v106 = (char *)v21 + v19;
    if ( (char *)v18 != v17 )
      _aeabi_memmove(v21, v17);
    v105 = v23;
    FireworkChargeItem::appendColors(v3, (__int64 *)&v104);
    if ( v22 )
      operator delete(v22);
  v24 = CompoundTag::getByteArray(v5, (const void **)&FireworkChargeItem::TAG_E_FADECOLORS);
  v25 = *v24;
  if ( *v24 )
    v26 = (const char *)v24[2];
    v27 = (char *)operator new(v25);
    _aeabi_memcpy(v27, v26, v25);
    v27 = 0;
  if ( &v27[v25] != v27 )
    v101 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v101, *((_DWORD *)*v4 - 3) + 1);
    sub_21E7408((const void **)&v101, "\n", 1u);
    sub_21E72F0((const void **)&v101, v4);
    sub_21E94B4((void **)&v99, "item.fireworksCharge.fadeTo");
    I18n::get(&v100, (int **)&v99);
    v28 = *(_QWORD *)(v101 - 12);
    v29 = *(_DWORD *)(v100 - 12) + v28;
    if ( v29 > HIDWORD(v28) && v29 <= *(_DWORD *)(v100 - 8) )
      v30 = sub_21E82D8((const void **)&v100, 0, (unsigned int)v101, (_BYTE *)v28);
    else
      v30 = sub_21E72F0((const void **)&v101, (const void **)&v100);
    v102 = (char *)*v30;
    *v30 = &unk_28898CC;
    v31 = sub_21E7408((const void **)&v102, " ", 1u);
    v103 = (char *)*v31;
    *v31 = &unk_28898CC;
    sub_21E72F0(v3, (const void **)&v103);
    v32 = v103 - 12;
    if ( (int *)(v103 - 12) != &dword_28898C0 )
      v62 = (unsigned int *)(v103 - 4);
          v63 = __ldrex(v62);
        while ( __strex(v63 - 1, v62) );
        v63 = (*v62)--;
      if ( v63 <= 0 )
        j_j_j_j__ZdlPv_9(v32);
    v33 = v102 - 12;
    if ( (int *)(v102 - 12) != &dword_28898C0 )
      v64 = (unsigned int *)(v102 - 4);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 <= 0 )
        j_j_j_j__ZdlPv_9(v33);
    v34 = (void *)(v100 - 12);
    if ( (int *)(v100 - 12) != &dword_28898C0 )
      v66 = (unsigned int *)(v100 - 4);
          v67 = __ldrex(v66);
        while ( __strex(v67 - 1, v66) );
        v67 = (*v66)--;
      if ( v67 <= 0 )
        j_j_j_j__ZdlPv_9(v34);
    v35 = (void *)(v99 - 12);
    if ( (int *)(v99 - 12) != &dword_28898C0 )
      v68 = (unsigned int *)(v99 - 4);
          v69 = __ldrex(v68);
        while ( __strex(v69 - 1, v68) );
        v69 = (*v68)--;
      if ( v69 <= 0 )
        j_j_j_j__ZdlPv_9(v35);
    v36 = v101 - 12;
    if ( (int *)(v101 - 12) != &dword_28898C0 )
      v70 = (unsigned int *)(v101 - 4);
          v71 = __ldrex(v70);
        while ( __strex(v71 - 1, v70) );
        v71 = (*v70)--;
      if ( v71 <= 0 )
        j_j_j_j__ZdlPv_9(v36);
    v37 = operator new(v25);
    v38 = v37;
    v39 = (int)v37 + v25;
    v96 = v37;
    v97 = (int)v37;
    v98 = (char *)v37 + v25;
    if ( &v27[v25] != v27 )
      _aeabi_memmove(v37, v27);
    v97 = v39;
    FireworkChargeItem::appendColors(v3, (__int64 *)&v96);
    if ( v38 )
      operator delete(v38);
  if ( CompoundTag::getBoolean(v5, (const void **)&FireworkChargeItem::TAG_E_TRAIL) == 1 )
    v94 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v94, *((_DWORD *)*v4 - 3) + 1);
    sub_21E7408((const void **)&v94, "\n", 1u);
    sub_21E72F0((const void **)&v94, v4);
    sub_21E94B4((void **)&v92, "item.fireworksCharge.trail");
    I18n::get(&v93, (int **)&v92);
    v40 = *(_QWORD *)(v94 - 12);
    v41 = *(_DWORD *)(v93 - 12) + v40;
    if ( v41 > HIDWORD(v40) && v41 <= *(_DWORD *)(v93 - 8) )
      v42 = sub_21E82D8((const void **)&v93, 0, (unsigned int)v94, (_BYTE *)v40);
      v42 = sub_21E72F0((const void **)&v94, (const void **)&v93);
    v95 = (char *)*v42;
    *v42 = &unk_28898CC;
    sub_21E72F0(v3, (const void **)&v95);
    v43 = v95 - 12;
    if ( (int *)(v95 - 12) != &dword_28898C0 )
      v72 = (unsigned int *)(v95 - 4);
          v73 = __ldrex(v72);
        while ( __strex(v73 - 1, v72) );
        v73 = (*v72)--;
      if ( v73 <= 0 )
        j_j_j_j__ZdlPv_9(v43);
    v44 = (void *)(v93 - 12);
    if ( (int *)(v93 - 12) != &dword_28898C0 )
      v74 = (unsigned int *)(v93 - 4);
          v75 = __ldrex(v74);
        while ( __strex(v75 - 1, v74) );
        v75 = (*v74)--;
      if ( v75 <= 0 )
        j_j_j_j__ZdlPv_9(v44);
    v45 = (void *)(v92 - 12);
    if ( (int *)(v92 - 12) != &dword_28898C0 )
      v76 = (unsigned int *)(v92 - 4);
          v77 = __ldrex(v76);
        while ( __strex(v77 - 1, v76) );
        v77 = (*v76)--;
      if ( v77 <= 0 )
        j_j_j_j__ZdlPv_9(v45);
    v46 = v94 - 12;
    if ( (int *)(v94 - 12) != &dword_28898C0 )
      v78 = (unsigned int *)(v94 - 4);
          v79 = __ldrex(v78);
        while ( __strex(v79 - 1, v78) );
        v79 = (*v78)--;
      if ( v79 <= 0 )
        j_j_j_j__ZdlPv_9(v46);
  if ( CompoundTag::getBoolean(v5, (const void **)&FireworkChargeItem::TAG_E_FLICKER) == 1 )
    v90 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v90, *((_DWORD *)*v4 - 3) + 1);
    sub_21E7408((const void **)&v90, "\n", 1u);
    sub_21E72F0((const void **)&v90, v4);
    sub_21E94B4((void **)&v88, "item.fireworksCharge.flicker");
    I18n::get(&v89, (int **)&v88);
    v47 = *(_QWORD *)(v90 - 12);
    v48 = *(_DWORD *)(v89 - 12) + v47;
    if ( v48 > HIDWORD(v47) && v48 <= *(_DWORD *)(v89 - 8) )
      v49 = sub_21E82D8((const void **)&v89, 0, (unsigned int)v90, (_BYTE *)v47);
      v49 = sub_21E72F0((const void **)&v90, (const void **)&v89);
    v91 = (char *)*v49;
    *v49 = &unk_28898CC;
    sub_21E72F0(v3, (const void **)&v91);
    v50 = v91 - 12;
    if ( (int *)(v91 - 12) != &dword_28898C0 )
      v80 = (unsigned int *)(v91 - 4);
          v81 = __ldrex(v80);
        while ( __strex(v81 - 1, v80) );
        v81 = (*v80)--;
      if ( v81 <= 0 )
        j_j_j_j__ZdlPv_9(v50);
    v51 = (void *)(v89 - 12);
    if ( (int *)(v89 - 12) != &dword_28898C0 )
      v82 = (unsigned int *)(v89 - 4);
          v83 = __ldrex(v82);
        while ( __strex(v83 - 1, v82) );
        v83 = (*v82)--;
      if ( v83 <= 0 )
        j_j_j_j__ZdlPv_9(v51);
    v52 = (void *)(v88 - 12);
    if ( (int *)(v88 - 12) != &dword_28898C0 )
      v84 = (unsigned int *)(v88 - 4);
          v85 = __ldrex(v84);
        while ( __strex(v85 - 1, v84) );
        v85 = (*v84)--;
      if ( v85 <= 0 )
        j_j_j_j__ZdlPv_9(v52);
    v53 = v90 - 12;
    if ( (int *)(v90 - 12) != &dword_28898C0 )
      v86 = (unsigned int *)(v90 - 4);
          v87 = __ldrex(v86);
        while ( __strex(v87 - 1, v86) );
        v87 = (*v86)--;
      if ( v87 <= 0 )
        j_j_j_j__ZdlPv_9(v53);
  if ( v27 )
    operator delete(v27);
  if ( v17 )
    operator delete(v17);
}


char *__fastcall FireworkChargeItem::appendColors(const void **a1, __int64 *a2)
{
  __int64 *v2; // r9@1
  __int64 v3; // r0@1
  const void **v4; // r6@2
  unsigned int v5; // r8@2
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  unsigned int *v10; // r2@11
  const void **v11; // r12@12
  signed int v12; // r1@13
  unsigned int *v13; // r2@19
  signed int v14; // r1@21
  unsigned int *v15; // r2@23
  signed int v16; // r1@25
  unsigned int v17; // r10@43
  const void **v18; // r0@44
  char *v19; // r0@44
  void *v20; // r0@45
  char *v21; // r0@46
  const void **v22; // r0@51
  char *v23; // r0@51
  void *v24; // r0@52
  unsigned int v25; // r3@55
  const void **v27; // [sp+Ch] [bp-4Ch]@1
  int v28; // [sp+18h] [bp-40h]@11
  int v29; // [sp+1Ch] [bp-3Ch]@7
  char *v30; // [sp+20h] [bp-38h]@3
  char *v31; // [sp+24h] [bp-34h]@2
  int v32; // [sp+28h] [bp-30h]@23
  char *v33; // [sp+2Ch] [bp-2Ch]@19

  v2 = a2;
  v27 = a1;
  v3 = *a2;
  if ( HIDWORD(v3) != (_DWORD)v3 )
  {
    v4 = (const void **)&v31;
    v5 = 0;
    do
    {
      v17 = *(_BYTE *)(v3 + v5);
      if ( v17 > 0xF )
      {
        sub_21E94B4((void **)&v28, "item.fireworksCharge.customColor");
        I18n::get(&v29, (int **)&v28);
        v22 = sub_21E7408((const void **)&v29, ", ", 2u);
        v30 = (char *)*v22;
        *v22 = &unk_28898CC;
        sub_21E72F0(v27, (const void **)&v30);
        v23 = v30 - 12;
        if ( (int *)(v30 - 12) != &dword_28898C0 )
        {
          v6 = (unsigned int *)(v30 - 4);
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
            j_j_j_j__ZdlPv_9(v23);
        }
        v24 = (void *)(v29 - 12);
        if ( (int *)(v29 - 12) != &dword_28898C0 )
          v8 = (unsigned int *)(v29 - 4);
              v9 = __ldrex(v8);
            while ( __strex(v9 - 1, v8) );
            v9 = (*v8)--;
          if ( v9 <= 0 )
            j_j_j_j__ZdlPv_9(v24);
        v21 = (char *)(v28 - 12);
        if ( (int *)(v28 - 12) == &dword_28898C0 )
          goto LABEL_54;
        v10 = (unsigned int *)(v28 - 4);
        if ( &pthread_create )
          v11 = v4;
          __dmb();
          do
            v12 = __ldrex(v10);
          while ( __strex(v12 - 1, v10) );
          goto LABEL_14;
      }
      else
        v31 = (char *)&unk_28898CC;
        sub_21E6FCC(v4, *(_DWORD *)(DyePowderItem::COLOR_DESCS[v17] - 12) + 21);
        sub_21E7408(v4, "item.fireworksCharge.", 0x15u);
        sub_21E72F0(v4, (const void **)&DyePowderItem::COLOR_DESCS[v17]);
        I18n::get(&v32, (int **)v4);
        v18 = sub_21E7408((const void **)&v32, ", ", 2u);
        v33 = (char *)*v18;
        *v18 = &unk_28898CC;
        sub_21E72F0(v27, (const void **)&v33);
        v19 = v33 - 12;
        if ( (int *)(v33 - 12) != &dword_28898C0 )
          v13 = (unsigned int *)(v33 - 4);
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
            v14 = (*v13)--;
          if ( v14 <= 0 )
            j_j_j_j__ZdlPv_9(v19);
        v20 = (void *)(v32 - 12);
        if ( (int *)(v32 - 12) != &dword_28898C0 )
          v15 = (unsigned int *)(v32 - 4);
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        v21 = v31 - 12;
        if ( (int *)(v31 - 12) == &dword_28898C0 )
        v10 = (unsigned int *)(v31 - 4);
LABEL_14:
          v4 = v11;
          goto LABEL_16;
      v12 = (*v10)--;
LABEL_16:
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
LABEL_54:
      v3 = *v2;
      ++v5;
    }
    while ( v5 < HIDWORD(v3) - (signed int)v3 );
  }
  v25 = *((_DWORD *)*v27 - 3);
  if ( v25 <= 1 )
    sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::erase", v25 - 2, v25);
  return sub_21E7EE0(v27, v25 - 2, (_BYTE *)2, 0);
}


void __fastcall FireworkChargeItem::appendFormattedHovertext(int a1, ItemInstance *a2, int a3, const void **a4)
{
  const void **v4; // r4@1
  ItemInstance *v5; // r6@1
  void *v6; // r0@1
  void *v7; // r0@2
  int *v8; // r0@4
  int v9; // r5@4
  void *v10; // r0@4
  unsigned int *v11; // r2@6
  signed int v12; // r1@8
  unsigned int *v13; // r2@10
  signed int v14; // r1@12
  unsigned int *v15; // r2@22
  signed int v16; // r1@24
  int v17; // [sp+4h] [bp-24h]@4
  int v18; // [sp+Ch] [bp-1Ch]@1
  int v19; // [sp+10h] [bp-18h]@1

  v4 = a4;
  v5 = a2;
  sub_21E7EE0(a4, 0, *((_BYTE **)*a4 - 3), 0);
  sub_21E94B4((void **)&v18, "item.fireworksCharge.name");
  I18n::get(&v19, (int **)&v18);
  sub_21E72F0(v4, (const void **)&v19);
  v6 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v19 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  v7 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v18 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  if ( ItemInstance::hasUserData(v5) == 1 )
    v8 = (int *)ItemInstance::getUserData(v5);
    v9 = CompoundTag::getCompound(*v8, (const void **)&FireworkChargeItem::TAG_EXPLOSION);
    sub_21E94B4((void **)&v17, (const char *)&unk_257BC67);
    FireworkChargeItem::getFormattedHoverText(v9, v4, (const void **)&v17);
    v10 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v17 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
}


signed int __fastcall FireworkChargeItem::isTintable(FireworkChargeItem *this)
{
  return 1;
}


ItemInstance *__fastcall FireworkChargeItem::initFireworkChargeItem(ItemInstance *a1, char a2, __int64 *a3, __int64 *a4, char a5, char a6)
{
  ItemInstance *v6; // r9@1
  __int64 *v7; // r11@1
  __int64 *v8; // r4@1
  char v9; // r5@1
  FireworkChargeItem *v10; // r8@1
  void *v11; // r10@1
  __int64 v12; // kr00_8@1
  unsigned int v13; // r4@1
  void *v14; // r6@4
  __int64 v15; // kr08_8@6
  unsigned int v16; // r5@6
  void *v17; // r11@9
  FireworkChargeItem *v18; // r0@17
  FireworkChargeItem *v20; // [sp+0h] [bp-48h]@17
  void *v21; // [sp+4h] [bp-44h]@15
  unsigned int v22; // [sp+8h] [bp-40h]@13
  unsigned int v23; // [sp+Ch] [bp-3Ch]@13
  void *v24; // [sp+10h] [bp-38h]@13
  unsigned int v25; // [sp+18h] [bp-30h]@11
  unsigned int v26; // [sp+1Ch] [bp-2Ch]@11
  void *ptr; // [sp+20h] [bp-28h]@11

  v6 = a1;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = (FireworkChargeItem *)operator new(0x1Cu);
  CompoundTag::CompoundTag((int)v10);
  v11 = operator new(0x1Cu);
  CompoundTag::CompoundTag((int)v11);
  CompoundTag::putBoolean((int)v11, (const void **)&FireworkChargeItem::TAG_E_TRAIL, a5);
  CompoundTag::putBoolean((int)v11, (const void **)&FireworkChargeItem::TAG_E_FLICKER, a6);
  CompoundTag::putByte((int)v11, (const void **)&FireworkChargeItem::TAG_E_TYPE, v9);
  v12 = *v8;
  v13 = HIDWORD(v12) - v12;
  if ( HIDWORD(v12) - (signed int)v12 > 8 )
    v13 = 8;
  if ( v13 )
  {
    v14 = operator new[](v13);
    _aeabi_memclr(v14, v13);
  }
  else
    v14 = 0;
  _aeabi_memcpy(v14, (const char *)v12, v13);
  v15 = *v7;
  v16 = HIDWORD(v15) - v15;
  if ( HIDWORD(v15) - (signed int)v15 > 8 )
    v16 = 8;
  if ( v16 )
    v17 = operator new[](v16);
    _aeabi_memclr(v17, v16);
    v17 = 0;
  _aeabi_memcpy(v17, (const char *)v15, v16);
  v25 = v13;
  v26 = v13;
  ptr = v14;
  CompoundTag::putByteArray((int)v11, (const void **)&FireworkChargeItem::TAG_E_COLORS, (int)&v25);
  if ( ptr )
    operator delete[](ptr);
  ptr = 0;
  v22 = v16;
  v23 = v16;
  v24 = v17;
  CompoundTag::putByteArray((int)v11, (const void **)&FireworkChargeItem::TAG_E_FADECOLORS, (int)&v22);
  if ( v24 )
    operator delete[](v24);
  v24 = 0;
  v21 = v11;
  CompoundTag::put((int)v10, (const void **)&FireworkChargeItem::TAG_EXPLOSION, (int *)&v21);
  if ( v21 )
    (*(void (**)(void))(*(_DWORD *)v21 + 4))();
  v20 = v10;
  v21 = 0;
  ItemInstance::setUserData((int)v6, (int *)&v20);
  v18 = v20;
  if ( v20 )
    v18 = (FireworkChargeItem *)(*(int (**)(void))(*(_DWORD *)v20 + 4))();
  v20 = 0;
  FireworkChargeItem::setColor(v18, v6);
  return v6;
}


void __fastcall FireworkChargeItem::~FireworkChargeItem(FireworkChargeItem *this)
{
  Item *v1; // r0@1

  v1 = Item::~Item(this);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall FireworkChargeItem::~FireworkChargeItem(FireworkChargeItem *this)
{
  FireworkChargeItem::~FireworkChargeItem(this);
}


void __fastcall FireworkChargeItem::getColor(FireworkChargeItem *this, const ItemInstance *a2, ItemInstance *a3)
{
  ItemInstance *v3; // r5@1
  FireworkChargeItem *v4; // r4@1
  int v5; // r7@2
  signed int v6; // r6@2
  void *v7; // r0@2
  void *v15; // r0@4
  unsigned int *v16; // r2@5
  signed int v17; // r1@7
  int v18; // r2@9
  int v19; // r3@9
  int v20; // r0@9
  unsigned int *v21; // r2@11
  signed int v22; // r1@13
  int v23; // [sp+8h] [bp-30h]@4
  int v24; // [sp+10h] [bp-28h]@2

  v3 = a3;
  v4 = this;
  if ( ItemInstance::hasUserData(a3) != 1 )
    goto LABEL_24;
  v5 = *(_DWORD *)ItemInstance::getUserData(v3);
  sub_21E94B4((void **)&v24, "customColor");
  v6 = CompoundTag::contains(v5, (const void **)&v24);
  v7 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  if ( v6 != 1 )
LABEL_24:
    v18 = unk_283E634;
    v19 = unk_283E638;
    v20 = unk_283E63C;
    *(float *)v4 = Color::BLACK;
    *((_DWORD *)v4 + 1) = v18;
    *((_DWORD *)v4 + 2) = v19;
    *((_DWORD *)v4 + 3) = v20;
  else
    sub_21E94B4((void **)&v23, "customColor");
    _R0 = CompoundTag::getInt(v5, (const void **)&v23);
    _R1 = (_R0 >> 16) & 0xFF;
    _R2 = (unsigned __int16)_R0 >> 8;
    _R0 = (unsigned __int8)_R0;
    __asm
      VLDR            S6, =0.0039216
      VMOV            S0, R1
      VMOV            S4, R0
      VMOV            S2, R2
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
    *((_DWORD *)v4 + 3) = 1065353216;
    v15 = (void *)(v23 - 12);
      VMUL.F32        S0, S0, S6
      VMUL.F32        S2, S2, S6
      VMUL.F32        S4, S4, S6
      VSTR            S0, [R4]
      VSTR            S2, [R4,#4]
      VSTR            S4, [R4,#8]
    if ( !_ZF )
      v16 = (unsigned int *)(v23 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
      }
      else
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
}


void __fastcall FireworkChargeItem::appendFormattedHovertext(int a1, ItemInstance *a2, int a3, const void **a4)
{
  FireworkChargeItem::appendFormattedHovertext(a1, a2, a3, a4);
}


void __fastcall FireworkChargeItem::getFormattedHoverText(int a1, const void **a2, const void **a3)
{
  FireworkChargeItem::getFormattedHoverText(a1, a2, a3);
}


_DWORD *__fastcall FireworkChargeItem::FireworkChargeItem(int a1, const void **a2, __int16 a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)Item::Item(a1, a2, a3);
  *result = &off_270185C;
  return result;
}


void __fastcall FireworkChargeItem::setColor(FireworkChargeItem *this, ItemInstance *a2)
{
  FireworkChargeItem::setColor(this, a2);
}
