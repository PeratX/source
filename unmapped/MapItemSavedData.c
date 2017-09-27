

MapItemSavedData *__fastcall MapItemSavedData::~MapItemSavedData(MapItemSavedData *this)
{
  MapItemSavedData *v1; // r8@1
  int v2; // r5@1
  int v3; // r7@1
  int v4; // r4@2
  unsigned int *v5; // r1@3
  unsigned int v6; // r0@5
  unsigned int *v7; // r6@9
  unsigned int v8; // r0@11
  int v9; // r5@20
  int v10; // r7@20
  int v11; // r4@21
  unsigned int *v12; // r1@22
  unsigned int v13; // r0@24
  unsigned int *v14; // r6@28
  unsigned int v15; // r0@30
  void *v16; // r0@39

  v1 = this;
  v3 = *(_QWORD *)((char *)this + 68) >> 32;
  v2 = *(_QWORD *)((char *)this + 68);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(_DWORD *)(v2 + 36);
      if ( v4 )
      {
        v5 = (unsigned int *)(v4 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        }
        else
          v6 = (*v5)--;
        if ( v6 == 1 )
          v7 = (unsigned int *)(v4 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
          }
          else
            v8 = (*v7)--;
          if ( v8 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
      }
      v2 += 40;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 17);
  }
  if ( v2 )
    operator delete((void *)v2);
  v10 = *(_QWORD *)((char *)v1 + 52) >> 32;
  v9 = *(_QWORD *)((char *)v1 + 52);
  if ( v9 != v10 )
      v11 = *(_DWORD *)(v9 + 4);
      if ( v11 )
        v12 = (unsigned int *)(v11 + 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 == 1 )
          v14 = (unsigned int *)(v11 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
      v9 += 8;
    while ( v9 != v10 );
    v9 = *((_DWORD *)v1 + 13);
  if ( v9 )
    operator delete((void *)v9);
  v16 = (void *)*((_DWORD *)v1 + 10);
  if ( v16 )
    operator delete(v16);
  return v1;
}


void __fastcall MapItemSavedData::tickCarriedBy(MapItemSavedData *this, Entity *a2, ItemInstance *a3)
{
  MapItemSavedData *v3; // r11@1
  ItemInstance *v4; // r8@1
  _DWORD *v5; // r4@1
  _DWORD *v6; // r6@1
  Entity *v7; // r5@1
  _DWORD *v8; // r7@3
  int v9; // r10@5
  BlockSource *v10; // r0@7
  int v11; // r6@7
  unsigned int *v12; // r1@8
  unsigned int v13; // r0@10
  unsigned int *v14; // r4@14
  unsigned int v15; // r0@16
  int v16; // r0@18
  unsigned int *v17; // r1@19
  unsigned int v18; // r2@21
  int v19; // r7@26
  unsigned int *v20; // r1@27
  unsigned int v21; // r0@29
  unsigned int *v22; // r4@33
  unsigned int v23; // r0@35
  BlockSource *v24; // r0@41
  int v25; // r4@42
  signed int v26; // r4@42
  void *v27; // r0@42
  int v28; // r4@44
  int v29; // r0@44
  ListTag *v30; // r4@44
  void *v31; // r0@44
  signed int v32; // r7@45
  int *v36; // r9@45
  Entity *v37; // r8@48
  int v38; // r5@48
  int v39; // r4@48
  __int64 v40; // r10@48
  void *v41; // r0@48
  char v42; // r0@49
  int v43; // r1@49 OVERLAPPED
  int v44; // r2@49 OVERLAPPED
  int v45; // r3@51
  bool v47; // zf@55
  char v48; // r3@57
  int v49; // r10@62
  int *v53; // r7@62
  void *v54; // r0@62
  void *v55; // r0@64
  void *v56; // r0@65
  void *v61; // r0@66
  char v62; // r4@68
  BlockSource *v63; // r0@68
  int *v64; // r0@68
  int v65; // r2@68
  void *v66; // r0@68
  void *v67; // r0@69
  unsigned int *v68; // r2@71
  signed int v69; // r1@73
  unsigned int *v70; // r2@75
  signed int v71; // r1@77
  unsigned int *v72; // r2@79
  signed int v73; // r1@81
  unsigned int *v74; // r2@83
  signed int v75; // r1@85
  unsigned int *v76; // r2@87
  signed int v77; // r1@89
  unsigned int *v78; // r2@95
  signed int v79; // r1@97
  unsigned int *v80; // r2@99
  signed int v81; // r1@101
  unsigned int *v82; // r1@128
  unsigned int v83; // r0@130
  unsigned int *v84; // r4@134
  unsigned int v85; // r0@136
  unsigned int *v86; // r2@145
  signed int v87; // r1@147
  unsigned int *v88; // r2@153
  signed int v89; // r1@155
  ListTag *v90; // [sp+2Ch] [bp-F4h]@44
  signed int v91; // [sp+34h] [bp-ECh]@48
  int v92; // [sp+38h] [bp-E8h]@48
  int v93; // [sp+40h] [bp-E0h]@68
  int v94; // [sp+48h] [bp-D8h]@68
  int v95; // [sp+50h] [bp-D0h]@66
  float v96; // [sp+54h] [bp-CCh]@68
  int v97; // [sp+68h] [bp-B8h]@62
  int v98; // [sp+70h] [bp-B0h]@62
  int v99; // [sp+78h] [bp-A8h]@62
  float v100; // [sp+7Ch] [bp-A4h]@68
  int v101; // [sp+88h] [bp-98h]@49
  __int64 v102; // [sp+90h] [bp-90h]@49
  int v103; // [sp+98h] [bp-88h]@49
  int v104; // [sp+9Ch] [bp-84h]@49
  int v105; // [sp+A0h] [bp-80h]@49
  int v106; // [sp+ACh] [bp-74h]@48
  int v107; // [sp+B4h] [bp-6Ch]@44
  int v108; // [sp+BCh] [bp-64h]@42
  char v109; // [sp+C0h] [bp-60h]@7
  int v110; // [sp+C4h] [bp-5Ch]@7
  int v111; // [sp+C8h] [bp-58h]@7
  __int64 v112; // [sp+D0h] [bp-50h]@7
  int v113; // [sp+D8h] [bp-48h]@7
  int v114; // [sp+DCh] [bp-44h]@7
  int v115; // [sp+E0h] [bp-40h]@7

  v3 = this;
  v4 = a3;
  v6 = (_DWORD *)(*(_QWORD *)((char *)this + 52) >> 32);
  v5 = (_DWORD *)*(_QWORD *)((char *)this + 52);
  v7 = a2;
  if ( v5 == v6 )
  {
    v9 = 0;
LABEL_7:
    v111 = 0;
    v112 = *(_QWORD *)j_Entity::getUniqueID(v7);
    v113 = 0;
    v114 = 0;
    v115 = 0;
    v10 = (BlockSource *)j_Entity::getRegion(v7);
    MapItemSavedData::_addTrackedMapEntity((int)&v109, (int)v3, (int)&v111, v10, 0);
    v11 = v110;
    *(_DWORD *)&v109 = 0;
    v110 = 0;
    if ( v9 )
    {
      v12 = (unsigned int *)(v9 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 == 1 )
        v14 = (unsigned int *)(v9 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
        if ( &pthread_create )
        {
          __dmb();
          do
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
        }
        else
          v15 = (*v14)--;
        if ( v15 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
    }
    v19 = v110;
    if ( v110 )
      v20 = (unsigned int *)(v110 + 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        v21 = (*v20)--;
      if ( v21 == 1 )
        v22 = (unsigned int *)(v19 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v19 + 12))(v19);
    v9 = v11;
    goto LABEL_41;
  }
  while ( 1 )
    if ( !*(_DWORD *)*v5 )
      v8 = (_DWORD *)*v5;
      if ( *((_QWORD *)v8 + 1) == *(_QWORD *)j_Entity::getUniqueID(v7) )
        break;
    v5 += 2;
    if ( v6 == v5 )
      v9 = 0;
      goto LABEL_7;
  v9 = *(_QWORD *)v5 >> 32;
  v16 = *(_QWORD *)v5;
  if ( v9 )
    v17 = (unsigned int *)(v9 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 + 1, v17) );
    else
      ++*v17;
  if ( !v16 )
    goto LABEL_7;
LABEL_41:
  v24 = (BlockSource *)j_Entity::getRegion(v7);
  MapItemSavedData::_updateTrackedEntityDecorations(v3, v24);
  if ( j_ItemInstance::hasUserData(v4) == 1 )
    v25 = *(_DWORD *)j_ItemInstance::getUserData(v4);
    sub_21E94B4((void **)&v108, "Decorations");
    v26 = j_CompoundTag::contains(v25, (const void **)&v108, 9);
    v27 = (void *)(v108 - 12);
    if ( (int *)(v108 - 12) != &dword_28898C0 )
      v86 = (unsigned int *)(v108 - 4);
          v87 = __ldrex(v86);
        while ( __strex(v87 - 1, v86) );
        v87 = (*v86)--;
      if ( v87 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    if ( v26 == 1 )
      v28 = *(_DWORD *)j_ItemInstance::getUserData(v4);
      sub_21E94B4((void **)&v107, "Decorations");
      v29 = j_CompoundTag::getList(v28, (const void **)&v107);
      v30 = (ListTag *)v29;
      v90 = (ListTag *)v29;
      v31 = (void *)(v107 - 12);
      if ( (int *)(v107 - 12) != &dword_28898C0 )
        v88 = (unsigned int *)(v107 - 4);
            v89 = __ldrex(v88);
          while ( __strex(v89 - 1, v88) );
          v89 = (*v88)--;
        if ( v89 <= 0 )
          j_j_j_j__ZdlPv_9(v31);
      v32 = 0;
      __asm { VLDR            S16, =0.0039216 }
      v36 = &dword_28898C0;
      while ( 1 )
        if ( v32 >= j_ListTag::size(v30) )
          break;
        v92 = j_ListTag::getCompound(v30, v32);
        sub_21E94B4((void **)&v106, "id");
        v37 = v7;
        v38 = (int)v3;
        v39 = v9;
        v40 = j_CompoundTag::getInt64(v92, (const void **)&v106);
        v91 = v32;
        v41 = (void *)(v106 - 12);
        if ( (int *)(v106 - 12) != v36 )
          v68 = (unsigned int *)(v106 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v69 = __ldrex(v68);
            while ( __strex(v69 - 1, v68) );
          }
          else
            v69 = (*v68)--;
          if ( v69 <= 0 )
            j_j_j_j__ZdlPv_9(v41);
        v42 = 0;
        v103 = 0;
        v104 = 0;
        v105 = 0;
        v101 = 0;
        v102 = v40;
        *(_QWORD *)&v43 = *(_QWORD *)(v38 + 68);
        if ( v43 == v44 )
LABEL_62:
          sub_21E94B4((void **)&v99, "x");
          v49 = v39;
          _R4 = j_CompoundTag::getFloat(v92, (const void **)&v99);
          sub_21E94B4((void **)&v98, "rot");
          _R7 = j_CompoundTag::getFloat(v92, (const void **)&v98);
          sub_21E94B4((void **)&v97, (const char *)&aRtuz[3]);
          _R0 = j_CompoundTag::getFloat(v92, (const void **)&v97);
          __asm
            VMOV            S0, R4
            VMOV            S2, R7
          v53 = v36;
          __asm { VMOV            S4, R0 }
          v54 = (void *)(v97 - 12);
            VSTR            S0, [SP,#0x120+var_A4]
            VSTR            S2, [SP,#0x120+var_A0]
            VSTR            S4, [SP,#0x120+var_9C]
          if ( !_ZF )
            v70 = (unsigned int *)(v97 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v71 = __ldrex(v70);
              while ( __strex(v71 - 1, v70) );
              v53 = v36;
            }
            else
              v71 = (*v70)--;
            if ( v71 <= 0 )
              j_j_j_j__ZdlPv_9(v54);
          v55 = (void *)(v98 - 12);
          if ( (int *)(v98 - 12) != v53 )
            v72 = (unsigned int *)(v98 - 4);
                v73 = __ldrex(v72);
              while ( __strex(v73 - 1, v72) );
              v73 = (*v72)--;
            if ( v73 <= 0 )
              j_j_j_j__ZdlPv_9(v55);
          v56 = (void *)(v99 - 12);
          if ( (int *)(v99 - 12) != v53 )
            v74 = (unsigned int *)(v99 - 4);
                v75 = __ldrex(v74);
              while ( __strex(v75 - 1, v74) );
              v75 = (*v74)--;
            if ( v75 <= 0 )
              j_j_j_j__ZdlPv_9(v56);
          sub_21E94B4((void **)&v95, "color");
          _R0 = j_CompoundTag::getInt(v92, (const void **)&v95);
          _R1 = (unsigned __int16)_R0 >> 8;
          _R2 = (_R0 >> 16) & 0xFF;
          __asm { VMOV            S0, R2 }
          _R2 = (unsigned __int8)_R0;
          _R0 >>= 24;
            VMOV            S2, R1
            VMOV            S4, R2
            VMOV            S6, R0
            VCVT.F32.S32    S0, S0
            VCVT.F32.S32    S2, S2
            VCVT.F32.S32    S4, S4
            VCVT.F32.S32    S6, S6
          v61 = (void *)(v95 - 12);
            VMUL.F32        S0, S0, S16
            VMUL.F32        S2, S2, S16
            VMUL.F32        S4, S4, S16
            VMUL.F32        S6, S6, S16
            VSTR            S0, [SP,#0x120+var_CC]
            VSTR            S2, [SP,#0x120+var_C8]
            VSTR            S4, [SP,#0x120+var_C4]
            VSTR            S6, [SP,#0x120+var_C0]
            v76 = (unsigned int *)(v95 - 4);
                v77 = __ldrex(v76);
              while ( __strex(v77 - 1, v76) );
              v77 = (*v76)--;
            if ( v77 <= 0 )
              j_j_j_j__ZdlPv_9(v61);
          sub_21E94B4((void **)&v94, "type");
          v62 = j_CompoundTag::getByte(v92, (const void **)&v94);
          v63 = (BlockSource *)j_Entity::getRegion(v37);
          j_BlockSource::getLevel(v63);
          sub_21E94B4((void **)&v93, "label");
          v64 = (int *)j_CompoundTag::getString(v92, (const void **)&v93);
          MapItemSavedData::_addDecoration(v38, v62, v65, (int)&v101, (int)&v100, v64, (int)&v96);
          v39 = v49;
          v66 = (void *)(v93 - 12);
          if ( (int *)(v93 - 12) != v53 )
            v78 = (unsigned int *)(v93 - 4);
                v79 = __ldrex(v78);
              while ( __strex(v79 - 1, v78) );
              v79 = (*v78)--;
            if ( v79 <= 0 )
              j_j_j_j__ZdlPv_9(v66);
          v67 = (void *)(v94 - 12);
          if ( (int *)(v94 - 12) != v53 )
            v80 = (unsigned int *)(v94 - 4);
                v81 = __ldrex(v80);
              while ( __strex(v81 - 1, v80) );
              v81 = (*v80)--;
            if ( v81 <= 0 )
              j_j_j_j__ZdlPv_9(v67);
          v36 = v53;
          goto LABEL_46;
          if ( *(_DWORD *)v43 )
            v45 = *(_DWORD *)(v43 + 16);
            _ZF = v45 == 0;
            if ( !v45 )
              _ZF = *(_DWORD *)(v43 + 20) == 0;
            if ( !_ZF )
              goto LABEL_60;
            v47 = *(_DWORD *)(v43 + 24) == 0;
            v47 = *(_QWORD *)(v43 + 8) == v40;
          v48 = 0;
          if ( v47 )
            v48 = 1;
          v42 |= v48;
            break;
LABEL_60:
          v43 += 40;
        while ( v44 != v43 );
        if ( !(v42 & 1) )
          goto LABEL_62;
LABEL_46:
        v9 = v39;
        v3 = (MapItemSavedData *)v38;
        v30 = v90;
        v32 = v91 + 1;
        v7 = v37;
    v82 = (unsigned int *)(v9 + 4);
        v83 = __ldrex(v82);
      while ( __strex(v83 - 1, v82) );
      v83 = (*v82)--;
    if ( v83 == 1 )
      v84 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
          v85 = __ldrex(v84);
        while ( __strex(v85 - 1, v84) );
        v85 = (*v84)--;
      if ( v85 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
}


unsigned int __fastcall MapItemSavedData::_setDirtyForDecoration(MapItemSavedData *this, const MapDecoration *a2)
{
  MapItemSavedData *v2; // r4@1
  unsigned __int8 v3; // r0@1
  unsigned int result; // r0@2

  v2 = this;
  v3 = j_MapDecoration::getImg(a2);
  if ( v3 > 0x10u || (result = 0xDFBEu >> v3, result & 1) )
  {
    result = 1;
    *((_BYTE *)v2 + 65) = 1;
  }
  return result;
}


void __fastcall MapItemSavedData::_addDecoration(int a1, char a2, int a3, int a4, int a5, int *a6, int a7)
{
  char v7; // r10@1
  int v13; // r5@1
  int v21; // r4@10
  int v22; // r7@10
  int v23; // r7@22
  int v24; // r0@22
  Random *v28; // r0@49
  int v31; // r2@52
  int i; // r3@52
  unsigned int *v33; // r1@64
  unsigned int v34; // r2@66
  int v35; // r1@69 OVERLAPPED
  int v36; // r2@69
  int v37; // r3@70
  int v38; // r2@70
  int v39; // r5@72
  unsigned int *v40; // r1@73
  unsigned int v41; // r0@75
  int *v42; // r4@77
  int v43; // r2@77
  int v44; // r4@77
  int v45; // r5@77
  int v46; // r6@77
  int v47; // r7@77
  void *v48; // r0@77
  unsigned int *v49; // r2@78
  signed int v50; // r1@80
  signed int v51; // r3@82
  int v52; // r0@83
  unsigned __int8 v53; // r0@84
  int v54; // r4@87
  unsigned int *v55; // r1@88
  unsigned int v56; // r0@90
  unsigned int *v57; // r5@94
  unsigned int v58; // r0@96
  unsigned __int8 v59; // r0@102
  unsigned int *v60; // r4@108
  unsigned int v61; // r0@110
  char v62; // [sp+10h] [bp-80h]@11
  char v63; // [sp+14h] [bp-7Ch]@11
  int v64; // [sp+18h] [bp-78h]@60
  int v65; // [sp+20h] [bp-70h]@60
  signed int v66; // [sp+24h] [bp-6Ch]@60
  int v67; // [sp+28h] [bp-68h]@60
  int v68; // [sp+2Ch] [bp-64h]@60
  int v69; // [sp+30h] [bp-60h]@60
  MapDecoration *v70; // [sp+38h] [bp-58h]@63
  int v71; // [sp+3Ch] [bp-54h]@63
  MapDecoration *v72; // [sp+44h] [bp-4Ch]@60
  int v73; // [sp+48h] [bp-48h]@63
  int v74; // [sp+4Ch] [bp-44h]@77
  int v75; // [sp+50h] [bp-40h]@77
  int v76; // [sp+54h] [bp-3Ch]@77
  int v77; // [sp+58h] [bp-38h]@77
  int v78; // [sp+5Ch] [bp-34h]@77
  int v79; // [sp+60h] [bp-30h]@77
  char v80; // [sp+64h] [bp-2Ch]@1
  char v81; // [sp+65h] [bp-2Bh]@1
  char v82; // [sp+66h] [bp-2Ah]@1
  char v83; // [sp+67h] [bp-29h]@1
  char v84; // [sp+68h] [bp-28h]@60

  v7 = a2;
  _R11 = a1;
  v83 = a2;
  __asm { VLDR            S0, [R11,#0x14] }
  v13 = a4;
  _R1 = a5;
  __asm
  {
    VLDR            S2, [R11,#0x1C]
    VCVT.F32.S32    S0, S0
    VLDR            S4, [R1]
    VLDR            S6, [R1,#8]
    VCVT.F32.S32    S2, S2
  }
  _R0 = 1 << *(_BYTE *)(a1 + 36);
    VMOV            S8, R0
    VSUB.F32        S0, S4, S0
    VCVT.F32.S32    S8, S8
    VSUB.F32        S4, S6, S2
  _R0 = -63;
    VDIV.F32        S2, S0, S8
    VDIV.F32        S0, S4, S8
    VADD.F32        S4, S2, S2
    VADD.F32        S6, S0, S0
    VMOV.F64        D4, #0.5
    VCVT.F64.F32    D2, S4
    VCVT.F64.F32    D3, S6
    VADD.F64        D2, D2, D4
    VADD.F64        D3, D3, D4
    VCVTR.S32.F64   S8, D2
    VMOV            S4, R0
    VCVTR.S32.F64   S6, D3
    VCVT.F32.S32    S4, S4
  v80 = 0;
  __asm { VMOV            R3, S8 }
  _R0 = 63;
    VMOV            R6, S6
    VCMPE.F32       S2, S4
    VMRS            APSR_nzcv, FPSCR
  v82 = _R3;
  v81 = _R6;
  if ( _NF ^ _VF )
    goto LABEL_120;
    VCMPEGE.F32     S0, S4
    VMRSGE          APSR_nzcv, FPSCR
    VMOV            S6, R0
    VCVT.F32.S32    S6, S6
    VCMPE.F32       S2, S6
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
LABEL_120:
    if ( v7 )
    {
      v23 = *(_DWORD *)(_R11 + 68);
      v24 = *(_DWORD *)(_R11 + 72);
      if ( v23 == v24 )
        return;
      while ( 1 )
      {
        if ( *(_DWORD *)v23 )
        {
          if ( *(_DWORD *)(v23 + 16) == *(_DWORD *)(v13 + 16)
            && *(_DWORD *)(v23 + 20) == *(_DWORD *)(v13 + 20)
            && *(_DWORD *)(v23 + 24) == *(_DWORD *)(v13 + 24) )
          {
LABEL_102:
            v59 = j_MapDecoration::getImg(*(MapDecoration **)(v23 + 32));
            if ( v59 > 0x10u || (0xDFBEu >> v59) & 1 )
              *(_BYTE *)(_R11 + 65) = 1;
            std::vector<std::pair<MapItemTrackedEntity::UniqueId,std::shared_ptr<MapDecoration>>,std::allocator<std::pair<MapItemTrackedEntity::UniqueId,std::shared_ptr<MapDecoration>>>>::_M_erase(
              _R11 + 68,
              v23);
            return;
          }
        }
        else if ( *(_QWORD *)(v23 + 8) == *(_QWORD *)(v13 + 8) )
          goto LABEL_102;
        v23 += 40;
        if ( v24 == v23 )
          return;
      }
    }
    _R1 = 320;
    __asm
      VABS.F32        S6, S0
      VABS.F32        S10, S2
    v7 = 13;
      VMOV            S8, R1
      VCVT.F32.S32    S8, S8
      VCMPE.F32       S6, S8
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S10, S8
    if ( _NF ^ _VF )
      v7 = 6;
      VCMPE.F32       S2, S4
    if ( !(_NF ^ _VF) )
      v7 = 13;
    v80 = 0;
    v83 = v7;
    __asm { VMRS            APSR_nzcv, FPSCR }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      _R1 = 126;
      __asm
        VMOV.F64        D4, #2.5
        VMOV            S6, R1
        VCVT.F64.S32    D3, S6
        VADD.F64        D3, D3, D4
        VCVTR.S32.F64   S6, D3
        VMOV            R3, S6
      v82 = _R3;
      VCMPE.F32       S0, S4
        VMOV.F64        D3, #2.5
        VMOV            S4, R1
        VCVT.F64.S32    D2, S4
        VADD.F64        D2, D2, D3
        VCVTR.S32.F64   S4, D2
        VMOV            R6, S4
      v81 = _R6;
      VMOV            S4, R0
      VCVT.F32.S32    S4, S4
      LOBYTE(_R3) = 127;
      v82 = 127;
    v63 = _R3;
      v62 = _R6;
    else
      v62 = 127;
      v81 = 127;
    LOBYTE(_R8) = 0;
  else
      VCMPELE.F32     S0, S6
      VMRSLE          APSR_nzcv, FPSCR
      VLDR            S2, [R1,#4]
      VMOV.F32        S4, #-8.0
      VMOV.F32        S0, #8.0
      VCMPE.F32       S2, #0.0
      __asm { VMOVLT.F32      S0, S4 }
      VADD.F32        S0, S0, S2
      VLDR            D1, =0.0444444444
      VCVT.F64.F32    D0, S0
      VMUL.F64        D0, D0, D1
      VCVTR.S32.F64   S0, D0
      VMOV            R8, S0
    v80 = _R8;
    if ( *(_DWORD *)(_R11 + 32) == 1 )
      v21 = *(_QWORD *)(_R11 + 68) >> 32;
      v22 = *(_QWORD *)(_R11 + 68);
      if ( v22 != v21 )
        v62 = _R6;
        v63 = _R3;
        while ( !*(_DWORD *)v22 )
          if ( *(_QWORD *)(v22 + 8) == *(_QWORD *)(v13 + 8) )
            goto LABEL_18;
LABEL_19:
          v22 += 40;
          if ( v21 == v22 )
            goto LABEL_49;
        if ( *(_DWORD *)(v22 + 16) != *(_DWORD *)(v13 + 16)
          || *(_DWORD *)(v22 + 20) != *(_DWORD *)(v13 + 20)
          || *(_DWORD *)(v22 + 24) != *(_DWORD *)(v13 + 24) )
          goto LABEL_19;
LABEL_18:
        _R8 = j_MapDecoration::getRot(*(MapDecoration **)(v22 + 32));
        goto LABEL_19;
      v63 = _R3;
LABEL_49:
      v28 = (Random *)j_ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
      _R0 = j_Random::_genRandInt32(v28);
        VMOV            S0, R0
        VLDR            D1, =2.32830644e-10
      _R0 = _R8;
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D1
        VCVT.F32.F64    S0, D0
        VMOV            S2, R0
        VADD.F32        S0, S0, S0
        VCVT.F32.S32    S2, S2
        VADD.F32        S0, S0, S2
        VCVTR.S32.F32   S0, S0
        VMOV            R8, S0
      v80 = _R8;
    if ( (unsigned __int8)(v7 | 1) == 15 )
      LOBYTE(_R8) = 8;
      v80 = 8;
  v31 = *(_DWORD *)(_R11 + 68);
  for ( i = *(_DWORD *)(_R11 + 72); i != v31; v31 += 40 )
    if ( *(_DWORD *)v31 )
      if ( *(_DWORD *)(v31 + 16) == *(_DWORD *)(v13 + 16)
        && *(_DWORD *)(v31 + 20) == *(_DWORD *)(v13 + 20)
        && *(_DWORD *)(v31 + 24) == *(_DWORD *)(v13 + 24) )
LABEL_77:
        v42 = *(int **)(v31 + 32);
        j_MapDecoration::MapDecoration(&v74, v7, v63, v62, _R8, a6, a7);
        EntityInteraction::setInteractText(v42, &v74);
        v43 = (int)(v42 + 1);
        v44 = v76;
        v45 = v77;
        v46 = v78;
        v47 = v79;
        *(_DWORD *)v43 = v75;
        *(_DWORD *)(v43 + 4) = v44;
        *(_DWORD *)(v43 + 8) = v45;
        *(_DWORD *)(v43 + 12) = v46;
        *(_DWORD *)(v43 + 16) = v47;
        v48 = (void *)(v74 - 12);
        if ( (int *)(v74 - 12) != &dword_28898C0 )
          v49 = (unsigned int *)(v74 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v50 = __ldrex(v49);
            while ( __strex(v50 - 1, v49) );
          else
            v50 = (*v49)--;
          if ( v50 <= 0 )
            j_j_j_j__ZdlPv_9(v48);
    else if ( *(_QWORD *)(v31 + 8) == *(_QWORD *)(v13 + 8) )
      goto LABEL_77;
  j__ZNSt12__shared_ptrI13MapDecorationLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJRNS0_4TypeERaS8_S8_RKSsRK5ColorEEESt19_Sp_make_shared_tagRKT_DpOT0_(
    (int)&v72,
    (int)&v84,
    &v83,
    &v82,
    &v81,
    &v80,
    a6,
    a7);
  v64 = *(_DWORD *)v13;
  v65 = -1;
  v66 = -1;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  if ( v64 )
    v67 = *(_DWORD *)(v13 + 16);
    v68 = *(_DWORD *)(v13 + 20);
    v69 = *(_DWORD *)(v13 + 24);
    *(_QWORD *)&v65 = *(_QWORD *)(v13 + 8);
  v70 = v72;
  v71 = v73;
  if ( v73 )
    v33 = (unsigned int *)(v73 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v34 = __ldrex(v33);
      while ( __strex(v34 + 1, v33) );
      ++*v33;
  *(_QWORD *)&v35 = *(_QWORD *)(_R11 + 72);
  if ( v35 == v36 )
    std::vector<std::pair<MapItemTrackedEntity::UniqueId,std::shared_ptr<MapDecoration>>,std::allocator<std::pair<MapItemTrackedEntity::UniqueId,std::shared_ptr<MapDecoration>>>>::_M_emplace_back_aux<std::pair<MapItemTrackedEntity::UniqueId,std::shared_ptr<MapDecoration>>>(
      (unsigned __int64 *)(_R11 + 68),
      (int)&v64);
    v39 = v71;
    if ( v71 )
      v40 = (unsigned int *)(v71 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
      else
        v41 = (*v40)--;
      if ( v41 == 1 )
        v60 = (unsigned int *)(v39 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 8))(v39);
        if ( &pthread_create )
          __dmb();
          do
            v61 = __ldrex(v60);
          while ( __strex(v61 - 1, v60) );
        else
          v61 = (*v60)--;
        if ( v61 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 12))(v39);
    v37 = v64;
    *(_DWORD *)v35 = v64;
    *(_DWORD *)(v35 + 8) = -1;
    v38 = v35 + 8;
    *(_DWORD *)(v38 + 4) = -1;
    *(_DWORD *)(v38 + 8) = 0;
    *(_DWORD *)(v38 + 12) = 0;
    *(_DWORD *)(v38 + 16) = 0;
    if ( v37 )
      *(_DWORD *)(v35 + 16) = v67;
      *(_DWORD *)(v35 + 20) = v68;
      *(_DWORD *)(v35 + 24) = v69;
      v51 = v66;
      *(_DWORD *)v38 = v65;
      *(_DWORD *)(v35 + 12) = v51;
    *(_DWORD *)(v35 + 32) = v70;
    v52 = v71;
    v71 = 0;
    *(_DWORD *)(v35 + 36) = v52;
    v70 = 0;
    *(_DWORD *)(_R11 + 72) = v35 + 40;
  v53 = j_MapDecoration::getImg(v72);
  if ( v53 > 0x10u || (0xDFBEu >> v53) & 1 )
    *(_BYTE *)(_R11 + 65) = 1;
  v54 = v73;
    v55 = (unsigned int *)(v73 + 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 == 1 )
      v57 = (unsigned int *)(v54 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v54 + 8))(v54);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v54 + 12))(v54);
}


signed int __fastcall MapItemSavedData::replaceDecorations(int a1, __int64 *a2, _DWORD *a3)
{
  int v3; // r10@1
  _DWORD *v4; // r8@1
  int v5; // r5@1
  __int64 *v6; // r9@1
  int v7; // r6@2
  int v8; // r11@3
  unsigned int *v9; // r1@4
  unsigned int v10; // r0@6
  unsigned int *v11; // r7@10
  unsigned int v12; // r0@12
  __int64 v13; // r0@18
  unsigned int v14; // r4@19
  unsigned int v15; // r2@20
  unsigned int v16; // r3@20
  int v17; // r6@20
  unsigned int *v18; // r1@21
  unsigned int v19; // r0@23
  unsigned int *v20; // r7@27
  unsigned int v21; // r0@29
  signed int result; // r0@35
  int v23; // [sp+8h] [bp-30h]@1
  int v24; // [sp+Ch] [bp-2Ch]@20
  int v25; // [sp+10h] [bp-28h]@20

  v3 = a1;
  v4 = a3;
  v5 = *(_DWORD *)(a1 + 72);
  v6 = a2;
  v23 = *(_DWORD *)(a1 + 68);
  if ( v5 != v23 )
  {
    v7 = *(_DWORD *)(a1 + 68);
    do
    {
      v8 = *(_DWORD *)(v7 + 36);
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
      v7 += 40;
    }
    while ( v7 != v5 );
  }
  *(_DWORD *)(v3 + 72) = v23;
  v13 = *v6;
  if ( HIDWORD(v13) != (_DWORD)v13 )
    v14 = 0;
      v15 = *(_DWORD *)(*v4 + 8 * v14);
      v16 = *(_DWORD *)(*v4 + 8 * v14 + 4);
      HIDWORD(v13) = v13 + 8 * v14;
      v24 = *(_DWORD *)(v13 + 8 * v14);
      v25 = 0;
      v17 = *(_DWORD *)(HIDWORD(v13) + 4);
      *(_DWORD *)(HIDWORD(v13) + 4) = 0;
      v25 = v17;
      *(_DWORD *)(v13 + 8 * v14) = 0;
      MapItemSavedData::addDecoration(v3, SHIDWORD(v13), v15, v16, (int)&v24);
      if ( v17 )
        v18 = (unsigned int *)(v17 + 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 == 1 )
          v20 = (unsigned int *)(v17 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
            v21 = (*v20)--;
          if ( v21 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
      v13 = *v6;
      ++v14;
    while ( v14 < (HIDWORD(v13) - (signed int)v13) >> 3 );
  result = 1;
  *(_BYTE *)(v3 + 65) = 1;
  return result;
}


signed int __fastcall MapItemSavedData::_isPlayerHoldingMap(MapItemSavedData *this, Player *a2)
{
  Player *v2; // r10@1
  MapItemSavedData *v3; // r9@1
  int v4; // r6@1
  int v5; // r7@2
  int v6; // r0@3
  int v7; // r4@3
  int v8; // r0@3
  bool v9; // zf@3
  char *v10; // r0@11
  const ItemInstance *v11; // r1@11
  int v12; // r0@11
  __int64 v14; // [sp+0h] [bp-30h]@13
  __int64 v15; // [sp+8h] [bp-28h]@9

  v2 = a2;
  v3 = this;
  v4 = j_Player::getSupplies(a2);
  if ( j_PlayerInventoryProxy::getContainerSize(v4, 0) >= 1 )
  {
    v5 = 0;
    do
    {
      v6 = j_PlayerInventoryProxy::getItem(v4, v5, 0);
      v7 = v6;
      v8 = *(_BYTE *)(v6 + 15);
      v9 = v8 == 0;
      if ( v8 )
        v9 = *(_DWORD *)v7 == 0;
      if ( !v9 && !j_ItemInstance::isNull((ItemInstance *)v7) )
      {
        if ( *(_BYTE *)(v7 + 14) )
        {
          if ( *(_DWORD *)v7 == Item::mFilledMap )
          {
            j_MapItem::getMapId((MapItem *)&v15, (const ItemInstance *)v7);
            if ( !(*(_QWORD *)v3 ^ v15) )
              return 1;
          }
        }
      }
    }
    while ( ++v5 < j_PlayerInventoryProxy::getContainerSize(v4, 0) );
  }
  v10 = j_Mob::getOffhandSlot(v2);
  v11 = (const ItemInstance *)v10;
  v12 = *(_DWORD *)v10;
  if ( v12 )
    if ( v12 == Item::mFilledMap )
      j_MapItem::getMapId((MapItem *)&v14, v11);
      if ( !(*(_QWORD *)v3 ^ v14) )
        return 1;
  return 0;
}


unsigned int __fastcall MapItemSavedData::addTrackedMapEntity(int a1, int a2, int a3, BlockSource *a4, unsigned __int8 a5)
{
  int v6; // [sp+8h] [bp-28h]@1
  signed int v7; // [sp+10h] [bp-20h]@1
  signed int v8; // [sp+14h] [bp-1Ch]@1
  int v9; // [sp+18h] [bp-18h]@1
  int v10; // [sp+1Ch] [bp-14h]@1
  int v11; // [sp+20h] [bp-10h]@1

  v6 = 1;
  v7 = -1;
  v8 = -1;
  v9 = *(_DWORD *)a3;
  v10 = *(_DWORD *)(a3 + 4);
  v11 = *(_DWORD *)(a3 + 8);
  return MapItemSavedData::_addTrackedMapEntity(a1, a2, (int)&v6, a4, a5);
}


void __fastcall MapItemSavedData::tickCarriedBy(MapItemSavedData *this, Entity *a2, ItemInstance *a3)
{
  MapItemSavedData::tickCarriedBy(this, a2, a3);
}


CompoundTag *__fastcall MapItemSavedData::save(MapItemSavedData *this, LevelStorage *a2)
{
  MapItemSavedData *v2; // r5@1
  LevelStorage *v3; // r4@1
  int v4; // r1@1
  void *v5; // r0@1
  void (__fastcall *v6)(LevelStorage *, int *, char **); // r6@2
  void *v7; // r0@2
  char *v8; // r0@3
  unsigned int *v10; // r2@5
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15
  int v15; // [sp+4h] [bp-44h]@2
  void **v16; // [sp+8h] [bp-40h]@1
  int *v17; // [sp+Ch] [bp-3Ch]@1
  char *v18; // [sp+10h] [bp-38h]@1
  int v19; // [sp+14h] [bp-34h]@1
  int v20; // [sp+30h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  j_CompoundTag::CompoundTag((int)&v19);
  MapItemSavedData::serialize(v2, (CompoundTag *)&v19);
  v18 = (char *)&unk_28898CC;
  v16 = &off_26E91F0;
  v17 = (int *)&v18;
  (*(void (__fastcall **)(int *, int *))(v19 + 44))(&v20, &v19);
  j_Tag::writeNamedTag((int)&v20, (int)&v19, (int)&v16);
  v4 = v20;
  v5 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v20 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v10);
      while ( __strex(v4 - 1, v10) );
    }
    else
      v4 = (*v10)--;
    if ( v4 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = *(void (__fastcall **)(LevelStorage *, int *, char **))(*(_DWORD *)v3 + 36);
  MapItemSavedData::getSerializationKey((const void **)&v15, v4, *(_QWORD *)v2);
  v6(v3, &v15, &v18);
  v7 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v15 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v18 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  return j_CompoundTag::~CompoundTag((CompoundTag *)&v19);
}


unsigned int __fastcall MapItemSavedData::getTrackedMapEntity(MapItemSavedData *this, Entity *a2, Entity *a3)
{
  Entity *v3; // r9@1
  Entity *v4; // r7@1
  __int64 v5; // r4@1
  MapItemSavedData *v6; // r8@1
  int v7; // r6@3
  int v8; // r4@5
  unsigned int result; // r0@7
  __int64 v10; // kr00_8@7
  unsigned int *v11; // r1@8
  unsigned int v12; // r2@10
  BlockSource *v13; // r0@15
  unsigned int *v14; // r1@16
  unsigned int *v15; // r5@22
  int v16; // [sp+8h] [bp-40h]@15
  __int64 v17; // [sp+10h] [bp-38h]@15
  int v18; // [sp+18h] [bp-30h]@15
  int v19; // [sp+1Ch] [bp-2Ch]@15
  int v20; // [sp+20h] [bp-28h]@15

  v3 = a2;
  v4 = a3;
  v5 = *(_QWORD *)((char *)a2 + 52);
  v6 = this;
  if ( (_DWORD)v5 == HIDWORD(v5) )
  {
    v8 = 0;
  }
  else
    while ( 1 )
    {
      if ( !**(_DWORD **)v5 )
      {
        v7 = *(_DWORD *)v5;
        if ( *(_QWORD *)(v7 + 8) == *(_QWORD *)j_Entity::getUniqueID(v4) )
          break;
      }
      LODWORD(v5) = v5 + 8;
      if ( HIDWORD(v5) == (_DWORD)v5 )
        v8 = 0;
        goto LABEL_15;
    }
    v10 = *(_QWORD *)v5;
    v8 = *(_QWORD *)v5 >> 32;
    result = v10;
    if ( v8 )
      v11 = (unsigned int *)(v8 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 + 1, v11) );
      else
        ++*v11;
    if ( (_DWORD)v10 )
      *(_DWORD *)v6 = v10;
      *((_DWORD *)v6 + 1) = v8;
      return result;
LABEL_15:
  v16 = 0;
  v17 = *(_QWORD *)j_Entity::getUniqueID(v4);
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v13 = (BlockSource *)j_Entity::getRegion(v4);
  result = MapItemSavedData::_addTrackedMapEntity((int)v6, (int)v3, (int)&v16, v13, 0);
  if ( v8 )
    v14 = (unsigned int *)(v8 + 4);
    if ( &pthread_create )
      __dmb();
      do
        result = __ldrex(v14);
      while ( __strex(result - 1, v14) );
    else
      result = (*v14)--;
    if ( result == 1 )
      v15 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          result = __ldrex(v15);
        while ( __strex(result - 1, v15) );
        result = (*v15)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return result;
}


void __fastcall MapItemSavedData::serialize(MapItemSavedData *this, CompoundTag *a2)
{
  CompoundTag *v2; // r8@1
  MapItemSavedData *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  void *v11; // r0@8
  void *v12; // r0@9
  __int64 v13; // kr00_8@10
  int v14; // r4@10
  void *v15; // r6@11
  void *v16; // r0@15
  void *v17; // r0@16
  void *v18; // r0@18
  void *v19; // r11@19
  int v20; // r7@19
  unsigned int *v21; // r2@21
  signed int v22; // r1@23
  unsigned int *v23; // r2@25
  signed int v24; // r1@27
  unsigned __int8 v25; // r0@37
  void *v26; // r8@39
  CompoundTag *v27; // r9@39
  CompoundTag *v28; // r10@39
  void *v29; // r0@41
  void *v30; // r0@44
  void *v31; // r0@51
  unsigned int *v32; // r2@53
  signed int v33; // r1@55
  unsigned int *v34; // r2@57
  signed int v35; // r1@59
  unsigned int *v36; // r2@61
  signed int v37; // r1@63
  unsigned int *v38; // r2@65
  signed int v39; // r1@67
  unsigned int *v40; // r2@69
  signed int v41; // r1@71
  unsigned int *v42; // r2@73
  signed int v43; // r1@75
  unsigned int *v44; // r2@77
  signed int v45; // r1@79
  unsigned int *v46; // r2@81
  signed int v47; // r1@83
  unsigned int *v48; // r2@85
  signed int v49; // r1@87
  unsigned int *v50; // r2@89
  signed int v51; // r1@91
  unsigned int *v52; // r2@93
  signed int v53; // r1@95
  unsigned int *v54; // r2@97
  signed int v55; // r1@99
  unsigned int *v56; // r2@101
  signed int v57; // r1@103
  int v58; // [sp+4h] [bp-CCh]@19
  int i; // [sp+8h] [bp-C8h]@19
  void *v60; // [sp+10h] [bp-C0h]@49
  int v61; // [sp+18h] [bp-B8h]@49
  void *v62; // [sp+1Ch] [bp-B4h]@45
  CompoundTag *v63; // [sp+20h] [bp-B0h]@42
  int v64; // [sp+28h] [bp-A8h]@25
  CompoundTag *v65; // [sp+2Ch] [bp-A4h]@39
  int v66; // [sp+34h] [bp-9Ch]@21
  int v67; // [sp+3Ch] [bp-94h]@18
  int v68; // [sp+44h] [bp-8Ch]@16
  int v69; // [sp+48h] [bp-88h]@13
  int v70; // [sp+4Ch] [bp-84h]@13
  void *ptr; // [sp+50h] [bp-80h]@13
  int v72; // [sp+5Ch] [bp-74h]@13
  int v73; // [sp+64h] [bp-6Ch]@9
  int v74; // [sp+6Ch] [bp-64h]@8
  int v75; // [sp+74h] [bp-5Ch]@7
  int v76; // [sp+7Ch] [bp-54h]@6
  int v77; // [sp+84h] [bp-4Ch]@5
  int v78; // [sp+8Ch] [bp-44h]@4
  int v79; // [sp+94h] [bp-3Ch]@3
  int v80; // [sp+9Ch] [bp-34h]@2
  int v81; // [sp+A4h] [bp-2Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v81, "mapId");
  j_CompoundTag::putInt64((int)v2, (const void **)&v81, *(_QWORD *)v3, *(_QWORD *)v3 >> 32);
  v4 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
  {
    v32 = (unsigned int *)(v81 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v80, "parentMapId");
  j_CompoundTag::putInt64((int)v2, (const void **)&v80, *((_QWORD *)v3 + 1), *((_QWORD *)v3 + 1) >> 32);
  v5 = (void *)(v80 - 12);
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v80 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v79, "dimension");
  j_CompoundTag::putByte((int)v2, (const void **)&v79, *((_BYTE *)v3 + 32));
  v6 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v79 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v78, "xCenter");
  j_CompoundTag::putInt((int)v2, (const void **)&v78, *((_DWORD *)v3 + 5));
  v7 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v78 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v77, "zCenter");
  j_CompoundTag::putInt((int)v2, (const void **)&v77, *((_DWORD *)v3 + 7));
  v8 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v77 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v76, "scale");
  j_CompoundTag::putByte((int)v2, (const void **)&v76, *((_BYTE *)v3 + 36));
  v9 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v76 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v75, "width");
  j_CompoundTag::putShort((int)v2, (const void **)&v75, 128);
  v10 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v75 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v74, "height");
  j_CompoundTag::putShort((int)v2, (const void **)&v74, 128);
  v11 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v74 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v73, "unlimitedTracking");
  j_CompoundTag::putBoolean((int)v2, (const void **)&v73, *((_BYTE *)v3 + 64));
  v12 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v73 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = *((_QWORD *)v3 + 5);
  v14 = HIDWORD(v13) - v13;
  if ( HIDWORD(v13) == (_DWORD)v13 )
    v15 = 0;
  else
    v15 = j_operator new[](HIDWORD(v13) - v13);
    j___aeabi_memclr((int)v15, v14);
  j___aeabi_memcpy((int)v15, v13, v14);
  sub_21E94B4((void **)&v72, "colors");
  v69 = HIDWORD(v13) - v13;
  v70 = HIDWORD(v13) - v13;
  ptr = v15;
  j_CompoundTag::putByteArray((int)v2, (const void **)&v72, (int)&v69);
  if ( ptr )
    j_operator delete[](ptr);
  ptr = 0;
  v16 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v72 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v68, "fullyExplored");
  j_CompoundTag::putBoolean((int)v2, (const void **)&v68, *((_BYTE *)v3 + 16));
  v17 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v68 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  if ( *((_BYTE *)v3 + 17) )
    sub_21E94B4((void **)&v67, "previewIncomplete");
    j_CompoundTag::putBoolean((int)v2, (const void **)&v67, *((_BYTE *)v3 + 17));
    v18 = (void *)(v67 - 12);
    if ( (int *)(v67 - 12) != &dword_28898C0 )
      v54 = (unsigned int *)(v67 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v55 = __ldrex(v54);
        while ( __strex(v55 - 1, v54) );
      }
      else
        v55 = (*v54)--;
      if ( v55 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
  v19 = j_operator new(0x14u);
  v58 = (int)v2;
  ListTag::ListTag((int)v19);
  v20 = *(_QWORD *)((char *)v3 + 68);
  for ( i = *(_QWORD *)((char *)v3 + 68) >> 32; v20 != i; v20 += 40 )
    v25 = j_MapDecoration::getImg(*(MapDecoration **)(v20 + 32));
    if ( v25 > 0x10u || (0xDFBEu >> v25) & 1 )
      v26 = j_operator new(0x1Cu);
      j_CompoundTag::CompoundTag((int)v26);
      v27 = (CompoundTag *)j_operator new(0x1Cu);
      j_CompoundTag::CompoundTag((int)v27);
      v28 = (CompoundTag *)j_operator new(0x1Cu);
      j_CompoundTag::CompoundTag((int)v28);
      MapItemTrackedEntity::UniqueId::save((MapItemTrackedEntity::UniqueId *)v20, v27);
      MapDecoration::save(*(MapDecoration **)(v20 + 32), v28);
      sub_21E94B4((void **)&v66, "data");
      v65 = v28;
      j_CompoundTag::putCompound((int)v26, (const void **)&v66, (int *)&v65);
      if ( v65 )
        (*(void (**)(void))(*(_DWORD *)v65 + 4))();
      v29 = (void *)(v66 - 12);
      v65 = 0;
      if ( (int *)(v66 - 12) != &dword_28898C0 )
        v21 = (unsigned int *)(v66 - 4);
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
          j_j_j_j__ZdlPv_9(v29);
      sub_21E94B4((void **)&v64, "key");
      v63 = v27;
      j_CompoundTag::putCompound((int)v26, (const void **)&v64, (int *)&v63);
      if ( v63 )
        (*(void (**)(void))(*(_DWORD *)v63 + 4))();
      v30 = (void *)(v64 - 12);
      v63 = 0;
      if ( (int *)(v64 - 12) != &dword_28898C0 )
        v23 = (unsigned int *)(v64 - 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 <= 0 )
          j_j_j_j__ZdlPv_9(v30);
      v62 = v26;
      j_ListTag::add((int)v19, (int *)&v62);
      if ( v62 )
        (*(void (**)(void))(*(_DWORD *)v62 + 4))();
      v62 = 0;
  sub_21E94B4((void **)&v61, "decorations");
  v60 = v19;
  j_CompoundTag::put(v58, (const void **)&v61, (int *)&v60);
  if ( v60 )
    (*(void (**)(void))(*(_DWORD *)v60 + 4))();
  v60 = 0;
  v31 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v61 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
}


int __fastcall MapItemSavedData::getUpdatePacket(int result, Level *a2, const BlockPos *a3, int a4)
{
  Level *v4; // lr@1
  const MapItemSavedData **v5; // r4@1
  const MapItemSavedData **v6; // r5@1
  const MapItemSavedData *v7; // r6@1
  __int64 v8; // kr08_8@2
  int v9; // r3@2
  const MapItemSavedData *v10; // r1@3
  int v11; // r7@3
  bool v12; // zf@3
  int v13; // r7@7
  bool v14; // zf@7
  unsigned int *v15; // r1@14
  unsigned int *v16; // r4@20
  unsigned int *v17; // r2@29
  unsigned int v18; // r3@31

  v4 = a2;
  v5 = (const MapItemSavedData **)(*(_QWORD *)((char *)a2 + 52) >> 32);
  v6 = (const MapItemSavedData **)*(_QWORD *)((char *)a2 + 52);
  v7 = 0;
  if ( v6 == v5 )
    goto LABEL_12;
  v8 = *(_QWORD *)a4;
  v9 = *(_DWORD *)(a4 + 8);
  while ( 1 )
  {
    v10 = *v6;
    v11 = *(_DWORD *)*v6;
    v12 = v11 == 1;
    if ( v11 == 1 )
      v12 = *((_DWORD *)v10 + 4) == (_DWORD)v8;
    if ( v12 )
    {
      v13 = *((_DWORD *)v10 + 5);
      v14 = v13 == HIDWORD(v8);
      if ( v13 == HIDWORD(v8) )
        v14 = *((_DWORD *)v10 + 6) == v9;
      if ( v14 )
        break;
    }
    v6 += 2;
    if ( v5 == v6 )
      v7 = 0;
      goto LABEL_12;
  }
  v7 = v6[1];
  if ( v7 )
    v17 = (unsigned int *)((char *)v7 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 + 1, v17) );
    else
      ++*v17;
  else
    v7 = 0;
  if ( v10 )
    result = (int)MapItemTrackedEntity::nextUpdatePacket((MapItemTrackedEntity *)result, v10, v4);
LABEL_12:
    *(_DWORD *)result = 0;
    v15 = (unsigned int *)((char *)v7 + 4);
        result = __ldrex(v15);
      while ( __strex(result - 1, v15) );
      result = (*v15)--;
    if ( result == 1 )
      v16 = (unsigned int *)((char *)v7 + 8);
      (*(void (__fastcall **)(const MapItemSavedData *))(*(_DWORD *)v7 + 8))(v7);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v16);
        while ( __strex(result - 1, v16) );
      }
      else
        result = (*v16)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(const MapItemSavedData *))(*(_DWORD *)v7 + 12))(v7);
  return result;
}


int __fastcall MapItemSavedData::setPixelDirty(int result, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r5@1
  unsigned int v4; // r4@1
  __int64 i; // r6@1
  MapItemTrackedEntity *v6; // t1@2

  v3 = a2;
  *(_BYTE *)(result + 65) = 1;
  v4 = a3;
  for ( i = *(_QWORD *)(result + 52); HIDWORD(i) != (_DWORD)i; result = MapItemTrackedEntity::setPixelDirty(v6, v3, v4) )
  {
    v6 = *(MapItemTrackedEntity **)i;
    LODWORD(i) = i + 8;
  }
  return result;
}


int __fastcall MapItemSavedData::getTrackedMapEntity(int result, const BlockPos *a2, BlockSource *a3)
{
  int **v3; // r1@1
  int **v4; // r3@1
  __int64 v5; // kr00_8@1
  __int64 v6; // kr08_8@2
  int v7; // r2@2
  int *v8; // r4@3
  int v9; // r5@3
  bool v10; // zf@3
  int v11; // r5@7
  bool v12; // zf@7
  int *v13; // r1@12
  unsigned int v14; // r1@15

  v5 = *(_QWORD *)((char *)a2 + 52);
  v3 = (int **)(*(_QWORD *)((char *)a2 + 52) >> 32);
  v4 = (int **)v5;
  if ( (int **)v5 == v3 )
  {
LABEL_11:
    *(_DWORD *)result = 0;
    *(_DWORD *)(result + 4) = 0;
  }
  else
    v6 = *(_QWORD *)a3;
    v7 = *((_DWORD *)a3 + 2);
    while ( 1 )
    {
      v8 = *v4;
      v9 = **v4;
      v10 = v9 == 1;
      if ( v9 == 1 )
        v10 = v8[4] == (_DWORD)v6;
      if ( v10 )
      {
        v11 = v8[5];
        v12 = v11 == HIDWORD(v6);
        if ( v11 == HIDWORD(v6) )
          v12 = v8[6] == v7;
        if ( v12 )
          break;
      }
      v4 += 2;
      if ( v3 == v4 )
        goto LABEL_11;
    }
    *(_DWORD *)result = v8;
    v13 = v4[1];
    *(_DWORD *)(result + 4) = v13;
    if ( v13 )
      result = (int)(v13 + 1);
      if ( &pthread_create )
        __dmb();
        do
          v14 = __ldrex((unsigned int *)result);
        while ( __strex(v14 + 1, (unsigned int *)result) );
      else
        ++*(_DWORD *)result;
  return result;
}


MapDecoration *__fastcall MapItemSavedData::addDecoration(int a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  int v5; // r8@1
  unsigned int v6; // r6@1 OVERLAPPED
  unsigned int v7; // r5@1 OVERLAPPED
  unsigned __int8 v8; // r0@1
  int v9; // r7@4
  int v10; // r1@4
  int v11; // r2@7
  bool v12; // zf@7
  int v13; // r1@14
  unsigned int *v14; // r1@15
  unsigned int v15; // r2@17
  int v16; // r1@20 OVERLAPPED
  int v17; // r2@20
  int v18; // r2@21
  int v19; // r0@21
  MapDecoration *result; // r0@23
  int v21; // r4@23
  unsigned int *v22; // r1@24
  int v23; // r6@28
  int v24; // r5@28
  unsigned int v25; // r1@32
  int v26; // r0@35
  unsigned int *v27; // r5@38
  unsigned int *v28; // r1@48
  unsigned int *v29; // r4@54
  int v30; // [sp+0h] [bp-40h]@14
  __int64 v31; // [sp+8h] [bp-38h]@14
  int v32; // [sp+10h] [bp-30h]@14
  int v33; // [sp+14h] [bp-2Ch]@14
  int v34; // [sp+18h] [bp-28h]@14
  MapDecoration *v35; // [sp+20h] [bp-20h]@14
  int v36; // [sp+24h] [bp-1Ch]@14

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = j_MapDecoration::getImg(*(MapDecoration **)a5);
  if ( v8 > 0x10u || (0xDFBEu >> v8) & 1 )
    *(_BYTE *)(v5 + 65) = 1;
  v9 = *(_DWORD *)(v5 + 68);
  v10 = *(_DWORD *)(v5 + 72);
  if ( v9 == v10 )
  {
LABEL_14:
    v30 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v31 = *(_QWORD *)&v7;
    v35 = *(MapDecoration **)a5;
    v13 = *(_DWORD *)(a5 + 4);
    v36 = v13;
    if ( v13 )
    {
      v14 = (unsigned int *)(v13 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 + 1, v14) );
      }
      else
        ++*v14;
    }
    *(_QWORD *)&v16 = *(_QWORD *)(v5 + 72);
    if ( v16 == v17 )
      result = (MapDecoration *)std::vector<std::pair<MapItemTrackedEntity::UniqueId,std::shared_ptr<MapDecoration>>,std::allocator<std::pair<MapItemTrackedEntity::UniqueId,std::shared_ptr<MapDecoration>>>>::_M_emplace_back_aux<std::pair<MapItemTrackedEntity::UniqueId,std::shared_ptr<MapDecoration>>>(
                                  (unsigned __int64 *)(v5 + 68),
                                  (int)&v30);
      v21 = v36;
      if ( v36 )
        v22 = (unsigned int *)(v36 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (MapDecoration *)__ldrex(v22);
          while ( __strex((unsigned int)result - 1, v22) );
        }
        else
          result = (MapDecoration *)(*v22)--;
        if ( result == (MapDecoration *)1 )
          v27 = (unsigned int *)(v21 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v21 + 8))(v21);
          if ( &pthread_create )
          {
            __dmb();
            do
              result = (MapDecoration *)__ldrex(v27);
            while ( __strex((unsigned int)result - 1, v27) );
          }
          else
            result = (MapDecoration *)(*v27)--;
          if ( result == (MapDecoration *)1 )
            result = (MapDecoration *)(*(int (__fastcall **)(int))(*(_DWORD *)v21 + 12))(v21);
    else
      v18 = v30;
      *(_DWORD *)v16 = v30;
      *(_DWORD *)(v16 + 8) = -1;
      v19 = v16 + 8;
      *(_DWORD *)(v19 + 4) = -1;
      *(_DWORD *)(v19 + 8) = 0;
      *(_DWORD *)(v19 + 12) = 0;
      *(_DWORD *)(v19 + 16) = 0;
      if ( v18 )
        *(_DWORD *)(v16 + 16) = v32;
        *(_DWORD *)(v16 + 20) = v33;
        *(_DWORD *)(v16 + 24) = v34;
        *(_QWORD *)v19 = v31;
      *(_DWORD *)(v16 + 32) = v35;
      v26 = v36;
      v36 = 0;
      *(_DWORD *)(v16 + 36) = v26;
      result = (MapDecoration *)(v16 + 40);
      v35 = 0;
      *(_DWORD *)(v5 + 72) = v16 + 40;
    return result;
  }
  while ( !*(_DWORD *)v9 )
    if ( *(_QWORD *)(v9 + 8) == __PAIR__(v6, v7) )
      goto LABEL_28;
LABEL_13:
    v9 += 40;
    if ( v10 == v9 )
      goto LABEL_14;
  if ( *(_DWORD *)(v9 + 16) )
    goto LABEL_13;
  v11 = *(_DWORD *)(v9 + 20);
  v12 = v11 == 0;
  if ( !v11 )
    v12 = *(_DWORD *)(v9 + 24) == 0;
  if ( !v12 )
LABEL_28:
  result = *(MapDecoration **)a5;
  *(_DWORD *)(v9 + 32) = *(_DWORD *)a5;
  v23 = *(_DWORD *)(v9 + 36);
  v24 = *(_DWORD *)(a5 + 4);
  if ( v24 != v23 )
    if ( v24 )
      result = (MapDecoration *)(v24 + 4);
          v25 = __ldrex((unsigned int *)result);
        while ( __strex(v25 + 1, (unsigned int *)result) );
        v23 = *(_DWORD *)(v9 + 36);
        ++*(_DWORD *)result;
    if ( v23 )
      v28 = (unsigned int *)(v23 + 4);
          result = (MapDecoration *)__ldrex(v28);
        while ( __strex((unsigned int)result - 1, v28) );
        result = (MapDecoration *)(*v28)--;
      if ( result == (MapDecoration *)1 )
        v29 = (unsigned int *)(v23 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
            result = (MapDecoration *)__ldrex(v29);
          while ( __strex((unsigned int)result - 1, v29) );
          result = (MapDecoration *)(*v29)--;
          result = (MapDecoration *)(*(int (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
    *(_DWORD *)(v9 + 36) = v24;
  return result;
}


void __fastcall MapItemSavedData::_addDecoration(int a1, char a2, int a3, int a4, int a5, int *a6, int a7)
{
  MapItemSavedData::_addDecoration(a1, a2, a3, a4, a5, a6, a7);
}


unsigned int __fastcall MapItemSavedData::_addTrackedMapEntity(int a1, int a2, int a3, BlockSource *a4, unsigned __int8 a5)
{
  int v5; // r9@1
  int v6; // r10@1
  int v7; // r6@1
  BlockSource *v8; // r7@1
  int v9; // r0@1
  unsigned __int64 *v10; // r11@1
  int v11; // r8@1
  int v12; // r1@1
  _QWORD *v13; // r2@2
  BlockSource *v14; // r12@2
  _DWORD *v15; // r3@3
  __int64 v16; // r0@11
  unsigned int *v17; // r1@12
  unsigned int v18; // r0@14
  unsigned int *v19; // r5@18
  unsigned int v20; // r0@20
  unsigned int *v21; // r0@23
  unsigned int v22; // r1@25
  int v23; // r4@26
  unsigned int *v24; // r1@27
  unsigned int v25; // r0@29
  int v26; // r5@34
  unsigned int *v27; // r1@35
  unsigned int v28; // r0@37
  unsigned int *v29; // r6@41
  unsigned int v30; // r0@43
  __int64 v31; // r0@48
  int v32; // r1@49
  unsigned int *v33; // r1@50
  unsigned int v34; // r0@52
  int v35; // r0@57
  int v36; // r0@57
  unsigned int *v37; // r0@58
  unsigned int v38; // r1@60
  int v39; // r4@63
  unsigned int *v40; // r1@64
  unsigned int v41; // r0@66
  unsigned int *v42; // r6@70
  unsigned int v43; // r0@72
  unsigned int result; // r0@78
  BlockSource *v45; // r5@84
  unsigned int *v46; // r7@84
  unsigned int v47; // r0@86
  int v48; // [sp+0h] [bp-38h]@57
  int v49; // [sp+4h] [bp-34h]@57
  char v50; // [sp+8h] [bp-30h]@11
  int v51; // [sp+Ch] [bp-2Ch]@11
  char v52; // [sp+10h] [bp-28h]@11

  v5 = a2;
  v6 = a1;
  v7 = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v8 = a4;
  v10 = (unsigned __int64 *)(a2 + 52);
  v9 = *(_DWORD *)(a2 + 52);
  v11 = a3;
  v12 = *(_DWORD *)(a2 + 56);
  if ( v9 == v12 )
    goto LABEL_11;
  v13 = (_QWORD *)(a3 + 8);
  v14 = a4;
  while ( 1 )
  {
    v15 = *(_DWORD **)v9;
    if ( **(_DWORD **)v9 )
      break;
    if ( *((_QWORD *)v15 + 1) == *v13 )
      goto LABEL_22;
LABEL_9:
    v9 += 8;
    if ( v12 == v9 )
    {
      v7 = 0;
      v8 = v14;
      goto LABEL_11;
    }
  }
  if ( v15[4] != *(_DWORD *)(v11 + 16) || v15[5] != *(_DWORD *)(v11 + 20) || v15[6] != *(_DWORD *)(v11 + 24) )
    goto LABEL_9;
LABEL_22:
  *(_DWORD *)v6 = v15;
  v8 = v14;
  v7 = *(_DWORD *)(v9 + 4);
  if ( v7 )
    v21 = (unsigned int *)(v7 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 + 1, v21) );
      v23 = *(_DWORD *)(v6 + 4);
      if ( v23 )
      {
        v24 = (unsigned int *)(v23 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
        }
        else
          v25 = (*v24)--;
        if ( v25 == 1 )
          v45 = v14;
          v46 = (unsigned int *)(v23 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
          if ( &pthread_create )
          {
            __dmb();
            do
              v47 = __ldrex(v46);
            while ( __strex(v47 - 1, v46) );
          }
          else
            v47 = (*v46)--;
          v8 = v45;
          if ( v47 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
      }
    else
      ++*v21;
    *(_DWORD *)(v6 + 4) = v7;
    if ( !*(_DWORD *)v6 )
LABEL_11:
      std::__shared_ptr<MapItemTrackedEntity,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<MapItemTrackedEntity>,MapItemTrackedEntity::UniqueId const&,BlockSource &>(
        (int)&v50,
        (int)&v52,
        v11,
        v8);
      v16 = *(_QWORD *)&v50;
      *(_DWORD *)&v50 = 0;
      v51 = 0;
      *(_QWORD *)v6 = v16;
      if ( v7 )
        v17 = (unsigned int *)(v7 + 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 == 1 )
          v19 = (unsigned int *)(v7 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 8))(v7);
              v20 = __ldrex(v19);
            while ( __strex(v20 - 1, v19) );
            v20 = (*v19)--;
          if ( v20 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 12))(v7);
      v26 = v51;
      if ( v51 )
        v27 = (unsigned int *)(v51 + 4);
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 == 1 )
          v29 = (unsigned int *)(v26 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 8))(v26);
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
            v30 = (*v29)--;
          if ( v30 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 12))(v26);
      v31 = *(_QWORD *)(v5 + 56);
      if ( (_DWORD)v31 == HIDWORD(v31) )
        std::vector<std::shared_ptr<MapItemTrackedEntity>,std::allocator<std::shared_ptr<MapItemTrackedEntity>>>::_M_emplace_back_aux<std::shared_ptr<MapItemTrackedEntity> const&>(
          v10,
          v6);
      else
        *(_DWORD *)v31 = *(_DWORD *)v6;
        HIDWORD(v31) = *(_DWORD *)(v6 + 4);
        *(_DWORD *)(v31 + 4) = HIDWORD(v31);
        if ( HIDWORD(v31) )
          v33 = (unsigned int *)(v32 + 4);
              v34 = __ldrex(v33);
            while ( __strex(v34 + 1, v33) );
            LODWORD(v31) = *(_DWORD *)(v5 + 56);
            ++*v33;
        *(_DWORD *)(v5 + 56) = v31 + 8;
  v35 = *(_DWORD *)v6;
  *(_BYTE *)(v35 + 64) = a5;
  v48 = v35;
  v36 = *(_DWORD *)(v6 + 4);
  v49 = v36;
  if ( v36 )
    v37 = (unsigned int *)(v36 + 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 + 1, v37) );
      ++*v37;
  MapItemSavedData::_updateTrackedEntityDecoration(v5, v8, (MapItemTrackedEntity **)&v48);
  v39 = v49;
  if ( v49 )
    v40 = (unsigned int *)(v49 + 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 == 1 )
      v42 = (unsigned int *)(v39 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 8))(v39);
      if ( &pthread_create )
        __dmb();
        do
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v39 + 12))(v39);
  if ( a5 > 0x10u || (result = 0xDFBEu >> a5, (0xDFBEu >> a5) & 1) )
    result = 1;
    *(_BYTE *)(v5 + 65) = 1;
  return result;
}


void __fastcall MapItemSavedData::deserialize(MapItemSavedData *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r6@1
  MapItemSavedData *v3; // r10@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  signed int v10; // r2@7
  char v11; // r3@7
  void *v12; // r0@11
  void *v13; // r0@12
  int v14; // r4@13
  void *v15; // r0@13
  void *v16; // r0@14
  bool v17; // zf@15
  int v18; // r4@19
  int *v19; // r0@19
  void *v20; // r0@19
  int *v21; // r9@21
  void *v22; // r0@21
  int v23; // r12@22
  bool v24; // nf@22
  unsigned __int8 v25; // vf@22
  int v26; // r7@25
  int v27; // r4@25
  int v28; // r6@25
  unsigned int v29; // r1@26
  int v30; // r2@26
  int v31; // r3@26
  int v32; // r0@26
  signed int v33; // r4@31
  void *v34; // r0@31
  void *v35; // r0@33
  signed int v36; // r4@34
  void *v37; // r0@34
  int v38; // r0@36
  ListTag *v39; // r4@36
  void *v40; // r0@36
  void **v41; // r9@38
  int v42; // r8@38
  unsigned int *v43; // r2@39
  signed int v44; // r1@41
  unsigned int *v45; // r2@43
  signed int v46; // r1@45
  unsigned int *v47; // r2@47
  signed int v48; // r1@49
  unsigned int *v49; // r2@51
  signed int v50; // r1@53
  unsigned int *v51; // r2@55
  signed int v52; // r1@57
  unsigned int *v53; // r2@59
  signed int v54; // r1@61
  unsigned int *v55; // r2@63
  signed int v56; // r1@65
  unsigned int *v57; // r2@67
  signed int v58; // r1@69
  unsigned int *v59; // r2@71
  signed int v60; // r1@73
  unsigned int *v61; // r2@75
  signed int v62; // r1@77
  unsigned int *v63; // r2@79
  signed int v64; // r1@81
  unsigned int *v65; // r2@83
  signed int v66; // r1@85
  signed int v67; // r1@87
  unsigned int *v68; // r2@91
  signed int v69; // r1@93
  unsigned int *v70; // r2@95
  signed int v71; // r1@97
  unsigned int *v72; // r2@107
  signed int v73; // r1@109
  int v74; // r11@115
  signed int v75; // r6@116
  void *v76; // r0@116
  const CompoundTag *v77; // r6@118
  void *v78; // r0@118
  signed int v79; // r6@119
  void *v80; // r0@119
  const CompoundTag *v81; // r6@121
  void *v82; // r0@121
  __int64 v83; // r0@122
  int v84; // r2@123
  int v85; // r1@123
  unsigned int *v86; // r2@126
  int v87; // r1@131
  unsigned int *v88; // r1@132
  unsigned int v89; // r0@134
  int v90; // r4@138
  unsigned int *v91; // r1@139
  unsigned int v92; // r0@141
  unsigned int *v93; // r6@145
  unsigned int v94; // r0@147
  unsigned int *v95; // r2@155
  signed int v96; // r1@157
  unsigned int *v97; // r2@203
  signed int v98; // r1@205
  unsigned int *v99; // r2@211
  signed int v100; // r1@213
  unsigned int *v101; // r2@215
  signed int v102; // r1@217
  int v103; // [sp+14h] [bp-FCh]@20
  ListTag *v104; // [sp+14h] [bp-FCh]@36
  int v105; // [sp+18h] [bp-F8h]@25
  int v106; // [sp+1Ch] [bp-F4h]@14
  int v107; // [sp+24h] [bp-ECh]@107
  int v108; // [sp+2Ch] [bp-E4h]@95
  int v109; // [sp+30h] [bp-E0h]@119
  signed int v110; // [sp+38h] [bp-D8h]@119
  signed int v111; // [sp+3Ch] [bp-D4h]@119
  int v112; // [sp+40h] [bp-D0h]@119
  int v113; // [sp+44h] [bp-CCh]@119
  int v114; // [sp+48h] [bp-C8h]@119
  int v115; // [sp+54h] [bp-BCh]@91
  MapDecoration *v116; // [sp+58h] [bp-B8h]@118
  int v117; // [sp+5Ch] [bp-B4h]@131
  int v118; // [sp+64h] [bp-ACh]@38
  int v119; // [sp+6Ch] [bp-A4h]@36
  int v120; // [sp+74h] [bp-9Ch]@34
  int v121; // [sp+7Ch] [bp-94h]@33
  int v122; // [sp+84h] [bp-8Ch]@31
  int v123; // [sp+8Ch] [bp-84h]@18
  int v124; // [sp+94h] [bp-7Ch]@19
  int v125; // [sp+9Ch] [bp-74h]@14
  int v126; // [sp+A4h] [bp-6Ch]@13
  int v127; // [sp+ACh] [bp-64h]@12
  int v128; // [sp+B4h] [bp-5Ch]@11
  int v129; // [sp+BCh] [bp-54h]@6
  int v130; // [sp+C4h] [bp-4Ch]@5
  int v131; // [sp+CCh] [bp-44h]@4
  int v132; // [sp+D4h] [bp-3Ch]@3
  int v133; // [sp+DCh] [bp-34h]@2
  int v134; // [sp+E4h] [bp-2Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v134, "mapId");
  *(_QWORD *)v3 = j_CompoundTag::getInt64((int)v2, (const void **)&v134);
  v4 = (void *)(v134 - 12);
  if ( (int *)(v134 - 12) != &dword_28898C0 )
  {
    v43 = (unsigned int *)(v134 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
    }
    else
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v133, "parentMapId");
  *((_QWORD *)v3 + 1) = j_CompoundTag::getInt64((int)v2, (const void **)&v133);
  v5 = (void *)(v133 - 12);
  if ( (int *)(v133 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v133 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v132, "dimension");
  *((_DWORD *)v3 + 8) = j_CompoundTag::getByte((int)v2, (const void **)&v132);
  v6 = (void *)(v132 - 12);
  if ( (int *)(v132 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v132 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v131, "xCenter");
  *((_DWORD *)v3 + 5) = j_CompoundTag::getInt((int)v2, (const void **)&v131);
  v7 = (void *)(v131 - 12);
  if ( (int *)(v131 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v131 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v130, "zCenter");
  *((_DWORD *)v3 + 7) = j_CompoundTag::getInt((int)v2, (const void **)&v130);
  v8 = (void *)(v130 - 12);
  if ( (int *)(v130 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v130 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v129, "scale");
  *((_BYTE *)v3 + 36) = j_CompoundTag::getByte((int)v2, (const void **)&v129);
  v9 = (void *)(v129 - 12);
  if ( (int *)(v129 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v129 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = *((_BYTE *)v3 + 36);
  v11 = *((_BYTE *)v3 + 36);
  if ( v10 <= 0 )
    v11 = 0;
  if ( v10 > 4 )
    v11 = 4;
  *((_BYTE *)v3 + 36) = v11;
  sub_21E94B4((void **)&v128, "unlimitedTracking");
  *((_BYTE *)v3 + 64) = j_CompoundTag::getBoolean((int)v2, (const void **)&v128);
  v12 = (void *)(v128 - 12);
  if ( (int *)(v128 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v128 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v127, "previewIncomplete");
  *((_BYTE *)v3 + 17) = j_CompoundTag::getBoolean((int)v2, (const void **)&v127);
  v13 = (void *)(v127 - 12);
  if ( (int *)(v127 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v127 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v126, "width");
  v14 = j_CompoundTag::getShort((int)v2, (const void **)&v126);
  v15 = (void *)(v126 - 12);
  if ( (int *)(v126 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v126 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v125, "height");
  v106 = j_CompoundTag::getShort((int)v2, (const void **)&v125);
  v16 = (void *)(v125 - 12);
  if ( (int *)(v125 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v125 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (unsigned __int16)v14 == 128;
  if ( (unsigned __int16)v14 == 128 )
    v17 = (unsigned __int16)v106 == 128;
  if ( v17 )
    v18 = *((_DWORD *)v3 + 10);
    sub_21E94B4((void **)&v124, "colors");
    v19 = j_CompoundTag::getByteArray((int)v2, (const void **)&v124);
    j___aeabi_memcpy(v18, v19[2], (*((_QWORD *)v3 + 5) >> 32) - *((_QWORD *)v3 + 5));
    v20 = (void *)(v124 - 12);
    if ( (int *)(v124 - 12) != &dword_28898C0 )
      v95 = (unsigned int *)(v124 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v96 = __ldrex(v95);
        while ( __strex(v96 - 1, v95) );
      }
      else
        v96 = (*v95)--;
      if ( v96 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    v103 = (int)v2;
  else
    sub_21E94B4((void **)&v123, "colors");
    v21 = j_CompoundTag::getByteArray((int)v2, (const void **)&v123);
    v22 = (void *)(v123 - 12);
    if ( (int *)(v123 - 12) != &dword_28898C0 )
      v101 = (unsigned int *)(v123 - 4);
          v102 = __ldrex(v101);
        while ( __strex(v102 - 1, v101) );
        v102 = (*v101)--;
      if ( v102 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    v23 = v14;
    v25 = __OFSUB__(v106, 1);
    v24 = v106 - 1 < 0;
    if ( v106 >= 1 )
      v25 = __OFSUB__(v14, 1);
      v24 = v14 - 1 < 0;
    if ( !(v24 ^ v25) )
      v26 = 0;
      v27 = 0;
      v105 = (128 - v106) / 2;
      v28 = (v105 << 9) + 4 * ((128 - v23) / 2);
        v29 = (128 - v23) / 2;
        v30 = v28;
        v31 = v26;
        v32 = v23;
        if ( (unsigned int)(v105 + v27) <= 0x7F )
        {
          do
          {
            if ( v29 <= 0x7F )
              *(_DWORD *)(*((_DWORD *)v3 + 10) + v30) = *(_BYTE *)(v21[2] + v31);
            ++v29;
            v30 += 4;
            ++v31;
            --v32;
          }
          while ( v32 );
        }
        v26 += v23;
        v28 += 512;
        ++v27;
      while ( v27 != v106 );
  sub_21E94B4((void **)&v122, "fullyExplored");
  v33 = j_CompoundTag::contains(v103, (const void **)&v122);
  v34 = (void *)(v122 - 12);
  if ( (int *)(v122 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v122 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  if ( v33 == 1 )
    sub_21E94B4((void **)&v121, "fullyExplored");
    *((_BYTE *)v3 + 16) = j_CompoundTag::getBoolean(v103, (const void **)&v121);
    v35 = (void *)(v121 - 12);
    if ( (int *)(v121 - 12) != &dword_28898C0 )
      v97 = (unsigned int *)(v121 - 4);
          v98 = __ldrex(v97);
        while ( __strex(v98 - 1, v97) );
        v98 = (*v97)--;
      if ( v98 <= 0 )
        j_j_j_j__ZdlPv_9(v35);
  sub_21E94B4((void **)&v120, "decorations");
  v36 = j_CompoundTag::contains(v103, (const void **)&v120, 9);
  v37 = (void *)(v120 - 12);
  if ( (int *)(v120 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v120 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
  if ( v36 == 1 )
    sub_21E94B4((void **)&v119, "decorations");
    v38 = j_CompoundTag::getList(v103, (const void **)&v119);
    v39 = (ListTag *)v38;
    v104 = (ListTag *)v38;
    v40 = (void *)(v119 - 12);
    if ( (int *)(v119 - 12) != &dword_28898C0 )
      v99 = (unsigned int *)(v119 - 4);
          v100 = __ldrex(v99);
        while ( __strex(v100 - 1, v99) );
        v100 = (*v99)--;
      if ( v100 <= 0 )
        j_j_j_j__ZdlPv_9(v40);
    if ( j_ListTag::size(v39) >= 1 )
      v41 = (void **)&v118;
      v42 = 0;
        v74 = j_ListTag::get(v39, v42);
        if ( (*(int (**)(void))(*(_DWORD *)v74 + 24))() == 10 )
          sub_21E94B4(v41, "data");
          v75 = j_CompoundTag::contains(v74, (const void **)v41, 10);
          v76 = (void *)(v118 - 12);
          if ( (int *)(v118 - 12) != &dword_28898C0 )
            v86 = (unsigned int *)(v118 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v67 = __ldrex(v86);
              while ( __strex(v67 - 1, v86) );
            }
            else
              v67 = (*v86)--;
            if ( v67 <= 0 )
              j_j_j_j__ZdlPv_9(v76);
          if ( v75 == 1 )
            j__ZNSt12__shared_ptrI13MapDecorationLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v116);
            sub_21E94B4((void **)&v115, "data");
            v77 = (const CompoundTag *)j_CompoundTag::getCompound(v74, (const void **)&v115);
            v78 = (void *)(v115 - 12);
            if ( (int *)(v115 - 12) != &dword_28898C0 )
              v68 = (unsigned int *)(v115 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v69 = __ldrex(v68);
                while ( __strex(v69 - 1, v68) );
              }
              else
                v69 = (*v68)--;
              if ( v69 <= 0 )
                j_j_j_j__ZdlPv_9(v78);
            MapDecoration::load(v116, v77);
            v109 = 2;
            v110 = -1;
            v111 = -1;
            v112 = 0;
            v113 = 0;
            v114 = 0;
            sub_21E94B4((void **)&v108, "key");
            v79 = j_CompoundTag::contains(v74, (const void **)&v108, 10);
            v80 = (void *)(v108 - 12);
            if ( (int *)(v108 - 12) != &dword_28898C0 )
              v70 = (unsigned int *)(v108 - 4);
                  v71 = __ldrex(v70);
                while ( __strex(v71 - 1, v70) );
                v71 = (*v70)--;
              if ( v71 <= 0 )
                j_j_j_j__ZdlPv_9(v80);
            if ( v79 == 1 )
              sub_21E94B4((void **)&v107, "key");
              v81 = (const CompoundTag *)j_CompoundTag::getCompound(v74, (const void **)&v107);
              v82 = (void *)(v107 - 12);
              if ( (int *)(v107 - 12) != &dword_28898C0 )
                v72 = (unsigned int *)(v107 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v73 = __ldrex(v72);
                  while ( __strex(v73 - 1, v72) );
                }
                else
                  v73 = (*v72)--;
                if ( v73 <= 0 )
                  j_j_j_j__ZdlPv_9(v82);
              MapItemTrackedEntity::UniqueId::load((MapItemTrackedEntity::UniqueId *)&v109, v81);
              v83 = *((_QWORD *)v3 + 9);
              if ( (_DWORD)v83 == HIDWORD(v83) )
                std::vector<std::pair<MapItemTrackedEntity::UniqueId,std::shared_ptr<MapDecoration>>,std::allocator<std::pair<MapItemTrackedEntity::UniqueId,std::shared_ptr<MapDecoration>>>>::_M_emplace_back_aux<MapItemTrackedEntity::UniqueId&,std::shared_ptr<MapDecoration>&>(
                  (unsigned __int64 *)((char *)v3 + 68),
                  (int)&v109,
                  (int)&v116);
                v84 = v109;
                *(_DWORD *)v83 = v109;
                *(_DWORD *)(v83 + 8) = -1;
                v85 = v83 + 8;
                *(_DWORD *)(v85 + 4) = -1;
                *(_DWORD *)(v85 + 8) = 0;
                *(_DWORD *)(v85 + 12) = 0;
                *(_DWORD *)(v85 + 16) = 0;
                if ( v84 )
                  *(_DWORD *)(v83 + 16) = v112;
                  *(_DWORD *)(v83 + 20) = v113;
                  *(_DWORD *)(v83 + 24) = v114;
                  *(_QWORD *)v85 = *(_QWORD *)&v110;
                *(_DWORD *)(v83 + 32) = v116;
                HIDWORD(v83) = v117;
                *(_DWORD *)(v83 + 36) = v117;
                if ( HIDWORD(v83) )
                  v88 = (unsigned int *)(v87 + 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v89 = __ldrex(v88);
                    while ( __strex(v89 + 1, v88) );
                    LODWORD(v83) = *((_DWORD *)v3 + 18);
                  }
                  else
                    ++*v88;
                *((_DWORD *)v3 + 18) = v83 + 40;
            v90 = v117;
            if ( v117 )
              v91 = (unsigned int *)(v117 + 4);
                  v92 = __ldrex(v91);
                while ( __strex(v92 - 1, v91) );
                v92 = (*v91)--;
              if ( v92 == 1 )
                v93 = (unsigned int *)(v90 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v90 + 8))(v90);
                    v94 = __ldrex(v93);
                  while ( __strex(v94 - 1, v93) );
                  v94 = (*v93)--;
                if ( v94 == 1 )
                  (*(void (__fastcall **)(int))(*(_DWORD *)v90 + 12))(v90);
            v39 = v104;
            v41 = (void **)&v118;
        ++v42;
      while ( v42 < j_ListTag::size(v39) );
}


int __fastcall MapItemSavedData::setDirty(int result)
{
  *(_BYTE *)(result + 65) = 1;
  return result;
}


int __fastcall MapItemSavedData::setMapSection(MapItemSavedData *this, int a2, int a3, unsigned int a4, unsigned int a5, int a6, int a7)
{
  MapItemSavedData *v7; // r9@1
  unsigned int v8; // r8@1
  int v9; // r7@1
  unsigned int v10; // r10@2
  int v11; // r5@2
  int v12; // r4@2

  v7 = this;
  v8 = a4;
  v9 = a2;
  if ( a7 != a5 )
  {
    v10 = a7 - a5;
    v11 = 4 * (a6 - a4);
    v12 = *((_DWORD *)this + 10) + 4 * a4 + (a5 << 9);
    do
    {
      j___aeabi_memcpy(v12, v9, v11);
      v9 += v11;
      --v10;
      v12 += 512;
    }
    while ( v10 );
  }
  MapItemSavedData::setPixelDirty(v7, v8, a5);
  return j_j_j__ZN16MapItemSavedData13setPixelDirtyEjj(v7, a6 - 1, a7 - 1);
}


int __fastcall MapItemSavedData::_findTrackedMapEntity(int result, const BlockPos *a2, int a3)
{
  int **v3; // r1@1
  int **v4; // r3@1
  __int64 v5; // kr00_8@1
  __int64 v6; // kr08_8@2
  int v7; // r2@2
  int *v8; // r4@3
  int v9; // r5@3
  bool v10; // zf@3
  int v11; // r5@7
  bool v12; // zf@7
  int *v13; // r1@12
  unsigned int v14; // r1@15

  v5 = *(_QWORD *)((char *)a2 + 52);
  v3 = (int **)(*(_QWORD *)((char *)a2 + 52) >> 32);
  v4 = (int **)v5;
  if ( (int **)v5 == v3 )
  {
LABEL_11:
    *(_DWORD *)result = 0;
    *(_DWORD *)(result + 4) = 0;
  }
  else
    v6 = *(_QWORD *)a3;
    v7 = *(_DWORD *)(a3 + 8);
    while ( 1 )
    {
      v8 = *v4;
      v9 = **v4;
      v10 = v9 == 1;
      if ( v9 == 1 )
        v10 = v8[4] == (_DWORD)v6;
      if ( v10 )
      {
        v11 = v8[5];
        v12 = v11 == HIDWORD(v6);
        if ( v11 == HIDWORD(v6) )
          v12 = v8[6] == v7;
        if ( v12 )
          break;
      }
      v4 += 2;
      if ( v3 == v4 )
        goto LABEL_11;
    }
    *(_DWORD *)result = v8;
    v13 = v4[1];
    *(_DWORD *)(result + 4) = v13;
    if ( v13 )
      result = (int)(v13 + 1);
      if ( &pthread_create )
        __dmb();
        do
          v14 = __ldrex((unsigned int *)result);
        while ( __strex(v14 + 1, (unsigned int *)result) );
      else
        ++*(_DWORD *)result;
  return result;
}


int __fastcall MapItemSavedData::getUpdatePacket(int result, const ItemInstance *a2, Level *a3, Entity *a4, Entity *a5)
{
  const ItemInstance *v5; // r10@1
  MapItemTrackedEntity *v6; // r9@1
  int **v7; // r5@1
  int **v8; // r7@1
  int v9; // r4@1
  int *v10; // r6@2
  char *v11; // r0@3
  unsigned int *v12; // r1@8
  unsigned int *v13; // r5@14
  const MapItemSavedData *v14; // r1@18
  unsigned int v15; // r2@21

  v5 = a2;
  v6 = (MapItemTrackedEntity *)result;
  v7 = (int **)(*(_QWORD *)((char *)a2 + 52) >> 32);
  v8 = (int **)*(_QWORD *)((char *)a2 + 52);
  v9 = 0;
  if ( v8 == v7 )
    goto LABEL_6;
  while ( 1 )
  {
    v10 = *v8;
    result = **v8;
    if ( !result )
    {
      v11 = j_Entity::getUniqueID(a5);
      result = *(_QWORD *)v11 ^ *((_QWORD *)v10 + 1) | (*((_QWORD *)v10 + 1) >> 32) ^ (*(_QWORD *)v11 >> 32);
      if ( !result )
        break;
    }
    v8 += 2;
    if ( v7 == v8 )
      v9 = 0;
      goto LABEL_6;
  }
  v9 = *(_QWORD *)v8 >> 32;
  v14 = (const MapItemSavedData *)*(_QWORD *)v8;
  if ( v9 )
    result = v9 + 4;
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex((unsigned int *)result);
      while ( __strex(v15 + 1, (unsigned int *)result) );
    else
      ++*(_DWORD *)result;
  else
    v9 = 0;
  if ( v14 )
    result = (int)MapItemTrackedEntity::nextUpdatePacket(v6, v14, v5);
LABEL_6:
    *(_DWORD *)v6 = 0;
    v12 = (unsigned int *)(v9 + 4);
        result = __ldrex(v12);
      while ( __strex(result - 1, v12) );
      result = (*v12)--;
    if ( result == 1 )
      v13 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = __ldrex(v13);
        while ( __strex(result - 1, v13) );
      }
      else
        result = (*v13)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  return result;
}


int __fastcall MapItemSavedData::pointInMapBounds(MapItemSavedData *this, float a2, float a3)
{
  signed int v10; // r1@1
  signed int v11; // r0@1

  _R0 = 320;
  __asm { VMOV            S0, R0 }
  _R0 = LODWORD(a3) & 0x7FFFFFFF;
  __asm
  {
    VCVT.F32.S32    S0, S0
    VMOV            S2, R0
  }
  _R0 = LODWORD(a2) & 0x7FFFFFFF;
  v10 = 0;
  __asm { VMOV            S4, R0 }
  v11 = 0;
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S4, S0
  if ( _NF ^ _VF )
    v10 = 1;
  __asm { VMRS            APSR_nzcv, FPSCR }
    v11 = 1;
  return v11 & v10;
}


int __fastcall MapItemSavedData::setDimensionId(int result, int a2)
{
  *(_DWORD *)(result + 32) = a2;
  return result;
}


int __fastcall MapItemSavedData::_updateTrackedPlayerDecorations(int a1, int a2, Player *a3, int a4, int a5, int a6, int a7, int a8)
{
  Entity *v8; // r7@1
  BlockSource *v9; // r5@1
  int v10; // r9@1
  int v11; // r4@1
  signed int v12; // r6@1
  Level *v13; // r0@1
  char *v14; // r0@1
  int v15; // r5@1
  int v16; // r11@1
  bool v17; // zf@1
  void **v18; // r0@8
  const Player *v19; // r0@4
  int v20; // r1@4
  int v21; // r2@4
  int v22; // r3@4
  void *v23; // r0@12
  int v24; // r1@12
  int v25; // r2@12
  int v26; // r3@12
  int v27; // r0@12
  int *v28; // r0@14
  signed int v29; // r1@18
  int v30; // r6@20
  int v31; // r0@20
  int v32; // r5@20
  int v33; // r6@21
  int v34; // r0@21
  int result; // r0@23
  bool v36; // zf@24
  char v37; // [sp+8h] [bp-58h]@21
  char v38; // [sp+18h] [bp-48h]@4
  int v39; // [sp+1Ch] [bp-44h]@4
  int v40; // [sp+20h] [bp-40h]@4
  int v41; // [sp+24h] [bp-3Ch]@4
  int v42; // [sp+28h] [bp-38h]@12
  int v43; // [sp+2Ch] [bp-34h]@12
  int v44; // [sp+30h] [bp-30h]@12
  int v45; // [sp+34h] [bp-2Ch]@12

  v8 = a3;
  v9 = (BlockSource *)a2;
  v10 = a4;
  v11 = a1;
  v12 = MapItemSavedData::_isPlayerHoldingMap((MapItemSavedData *)a1, a3);
  v13 = (Level *)j_BlockSource::getLevel(v9);
  v14 = j_Level::getLevelData(v13);
  v15 = j_LevelData::isEduLevel((LevelData *)v14);
  v16 = *(_DWORD *)(v11 + 32);
  v17 = v15 == 0;
  *(_BYTE *)a8 = 0;
  if ( !v15 )
    v17 = v12 == 1;
  if ( v17 )
  {
    if ( a7 == 2 )
    {
      v18 = &Color::PURPLE;
    }
    else if ( a7 == 1 )
      v18 = &Color::RED;
    else if ( a7 )
      v18 = &Color::NIL;
    else
      v18 = &Color::WHITE;
    v23 = *v18;
    v24 = *(_DWORD *)v23;
    v25 = *((_DWORD *)v23 + 1);
    v26 = *((_DWORD *)v23 + 2);
    v45 = *((_DWORD *)v23 + 3);
    v44 = v26;
    v43 = v25;
    v42 = v24;
    v27 = v45;
    *(_DWORD *)a6 = v24;
    *(_DWORD *)(a6 + 4) = v25;
    *(_DWORD *)(a6 + 8) = v26;
    *(_DWORD *)(a6 + 12) = v27;
  }
  else
    v19 = (const Player *)j_Entity::getLevel(v8);
    j_Level::getPlayerColor((Level *)&v38, v19, v8);
    v20 = v39;
    v21 = v40;
    v22 = v41;
    *(_DWORD *)a6 = *(_DWORD *)&v38;
    *(_DWORD *)(a6 + 4) = v20;
    *(_DWORD *)(a6 + 8) = v21;
    *(_DWORD *)(a6 + 12) = v22;
  if ( v15 == 1 )
    v28 = (int *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v8 + 188))(v8);
    EntityInteraction::setInteractText((int *)a5, v28);
  else if ( !v12 && !Player::canBeSeenOnMap(v8) )
    *(_BYTE *)a8 = 16;
  v29 = 0;
  if ( v16 != a7 )
    v29 = 1;
  v30 = v12 | v29;
  v31 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v8 + 52))(v8);
  v32 = v31;
  if ( !v30 )
    *(_DWORD *)v10 = *(_DWORD *)v31;
    *(_DWORD *)(v10 + 4) = *(_DWORD *)(v31 + 4);
    result = *(_DWORD *)(v31 + 8);
    *(_DWORD *)(v10 + 8) = result;
    return result;
  v33 = *(_DWORD *)(v11 + 32);
  v34 = j_Entity::getLevel(v8);
  Level::getDimensionConversionData((Level *)&v37, v34);
  if ( !j_Util::convertPointBetweenDimensions(v32, v10, a7, v33, (int)&v37) )
  result = *(_DWORD *)(v11 + 32);
  if ( result == 2 )
      return result;
LABEL_32:
    result = 16;
  v36 = result == 1;
  if ( result == 1 )
    v36 = a7 == 2;
  if ( v36 )
    goto LABEL_32;
  return result;
}


int __fastcall MapItemSavedData::_getColorByDimension(int result, int a2, int a3)
{
  void **v3; // r1@4
  int *v4; // r1@8
  int v5; // r2@8
  int v6; // r3@8
  int v7; // r12@8
  int v8; // r1@8

  if ( a3 == 2 )
  {
    v3 = &Color::PURPLE;
  }
  else if ( a3 == 1 )
    v3 = &Color::RED;
  else if ( a3 )
    v3 = &Color::NIL;
  else
    v3 = &Color::WHITE;
  v4 = (int *)*v3;
  v5 = *v4;
  v6 = v4[1];
  v7 = v4[2];
  v8 = v4[3];
  *(_DWORD *)result = v5;
  *(_DWORD *)(result + 4) = v6;
  *(_DWORD *)(result + 8) = v7;
  *(_DWORD *)(result + 12) = v8;
  return result;
}


void __fastcall MapItemSavedData::getSerializationKey(const void **a1, int a2, __int64 a3)
{
  MapItemSavedData::getSerializationKey(a1, a2, a3);
}


int __fastcall MapItemSavedData::_removeDecoration(MapItemSavedData *this, const MapItemTrackedEntity::UniqueId *a2)
{
  MapItemSavedData *v2; // r8@1
  int v3; // r5@1
  char *v4; // r9@1
  int result; // r0@1
  unsigned __int8 v6; // r0@10

  v2 = this;
  v4 = (char *)this + 68;
  v3 = *((_DWORD *)this + 17);
  result = *((_DWORD *)this + 18);
  if ( v3 == result )
    return result;
  while ( !*(_DWORD *)v3 )
  {
    if ( *(_QWORD *)(v3 + 8) == *((_QWORD *)a2 + 1) )
      goto LABEL_10;
LABEL_8:
    v3 += 40;
    if ( result == v3 )
      return result;
  }
  if ( *(_DWORD *)(v3 + 16) != *((_DWORD *)a2 + 4)
    || *(_DWORD *)(v3 + 20) != *((_DWORD *)a2 + 5)
    || *(_DWORD *)(v3 + 24) != *((_DWORD *)a2 + 6) )
    goto LABEL_8;
LABEL_10:
  v6 = j_MapDecoration::getImg(*(MapDecoration **)(v3 + 32));
  if ( v6 > 0x10u || (0xDFBEu >> v6) & 1 )
    *((_BYTE *)v2 + 65) = 1;
  return j_j_j__ZNSt6vectorISt4pairIN20MapItemTrackedEntity8UniqueIdESt10shared_ptrI13MapDecorationEESaIS6_EE8_M_eraseEN9__gnu_cxx17__normal_iteratorIPS6_S8_EE(
           (int)v4,
           v3);
}


int __fastcall MapItemSavedData::replacePixels(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // r6@1
  int result; // r0@1
  int v9; // r5@1
  bool v10; // zf@1
  int v11; // r8@4
  int v12; // r9@5
  unsigned int v13; // r7@5
  int v14; // r0@6
  int v15; // r1@6
  int v16; // r2@6
  __int64 v17; // r10@7
  MapItemTrackedEntity *v18; // t1@8
  int v19; // [sp+0h] [bp-28h]@1

  v7 = a1;
  result = a6;
  v19 = a4;
  v9 = a2;
  v10 = a6 == 0;
  if ( a6 )
  {
    result = a7;
    v10 = a7 == 0;
  }
  if ( !v10 )
    v11 = 0;
    do
    {
      v12 = 0;
      v13 = v11 + v19;
      do
      {
        v14 = *(_DWORD *)(v7 + 40);
        v15 = v13 + ((v12 + a5) << 7);
        v16 = *(_DWORD *)(v9 + 4 * (v11 + v12 * a6));
        if ( *(_DWORD *)(v14 + 4 * v15) != v16 )
        {
          *(_DWORD *)(v14 + 4 * v15) = v16;
          *(_BYTE *)(v7 + 65) = 1;
          v17 = *(_QWORD *)(v7 + 52);
          while ( HIDWORD(v17) != (_DWORD)v17 )
          {
            v18 = *(MapItemTrackedEntity **)v17;
            LODWORD(v17) = v17 + 8;
            MapItemTrackedEntity::setPixelDirty(v18, v13, v12 + a5);
          }
        }
        ++v12;
      }
      while ( v12 != a7 );
      ++v11;
      result = a6;
    }
    while ( v11 != a6 );
  return result;
}


int __fastcall MapItemSavedData::_updateTrackedEntityDecorations(MapItemSavedData *this, BlockSource *a2)
{
  MapItemSavedData *v2; // r10@1
  int result; // r0@1
  int v4; // r11@1
  __int64 v5; // kr00_8@1
  int v6; // r0@2
  unsigned int *v7; // r0@3
  unsigned int v8; // r1@5
  signed int v9; // r6@8
  int v10; // r9@8
  unsigned int *v11; // r1@9
  unsigned int v12; // r0@11
  unsigned int *v13; // r7@15
  unsigned int v14; // r0@17
  int v15; // r0@22
  int v16; // r0@23
  ChunkViewSource *v17; // r6@24
  int v18; // r0@24
  int v19; // r1@25
  int v20; // r6@25
  unsigned __int8 v21; // r0@34
  BlockSource *v22; // [sp+Ch] [bp-3Ch]@1
  char v23; // [sp+10h] [bp-38h]@24
  int v24; // [sp+1Ch] [bp-2Ch]@2
  int v25; // [sp+20h] [bp-28h]@2

  v2 = this;
  v22 = a2;
  v5 = *(_QWORD *)((char *)this + 52);
  result = *(_QWORD *)((char *)this + 52) >> 32;
  v4 = v5;
  if ( (_DWORD)v5 == result )
    return result;
  do
  {
    v24 = *(_DWORD *)v4;
    v6 = *(_DWORD *)(v4 + 4);
    v25 = v6;
    if ( v6 )
    {
      v7 = (unsigned int *)(v6 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 + 1, v7) );
      }
      else
        ++*v7;
    }
    v9 = MapItemSavedData::_updateTrackedEntityDecoration((int)v2, v22, (MapItemTrackedEntity **)&v24);
    v10 = v25;
    if ( v25 )
      v11 = (unsigned int *)(v25 + 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        v13 = (unsigned int *)(v10 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
        }
        else
          v14 = (*v13)--;
        if ( v14 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
    v15 = *(_DWORD *)v4;
    if ( v9 == 1 )
      v16 = MapItemTrackedEntity::getEntity((MapItemTrackedEntity *)v15, v22);
      if ( v16 )
        v17 = *(ChunkViewSource **)(*(_DWORD *)v4 + 72);
        v18 = (*(int (**)(void))(*(_DWORD *)v16 + 52))();
        j_BlockPos::BlockPos((int)&v23, v18);
        ChunkViewSource::move(v17, (const BlockPos *)&v23, 128);
      goto LABEL_38;
    v19 = *(_QWORD *)((char *)v2 + 68) >> 32;
    v20 = *(_QWORD *)((char *)v2 + 68);
    if ( v20 == v19 )
    while ( !*(_DWORD *)v20 )
      if ( *(_QWORD *)(v20 + 8) == *(_QWORD *)(v15 + 8) )
        goto LABEL_34;
LABEL_32:
      v20 += 40;
      if ( v19 == v20 )
        goto LABEL_38;
    if ( *(_DWORD *)(v20 + 16) != *(_DWORD *)(v15 + 16)
      || *(_DWORD *)(v20 + 20) != *(_DWORD *)(v15 + 20)
      || *(_DWORD *)(v20 + 24) != *(_DWORD *)(v15 + 24) )
      goto LABEL_32;
LABEL_34:
    v21 = j_MapDecoration::getImg(*(MapDecoration **)(v20 + 32));
    if ( v21 > 0x10u || (0xDFBEu >> v21) & 1 )
      *((_BYTE *)v2 + 65) = 1;
    std::vector<std::pair<MapItemTrackedEntity::UniqueId,std::shared_ptr<MapDecoration>>,std::allocator<std::pair<MapItemTrackedEntity::UniqueId,std::shared_ptr<MapDecoration>>>>::_M_erase(
      (int)v2 + 68,
      v20);
LABEL_38:
    v4 += 8;
    result = *((_DWORD *)v2 + 14);
  }
  while ( v4 != result );
  return result;
}


int __fastcall MapItemSavedData::enableUnlimitedTracking(int result)
{
  if ( !*(_BYTE *)(result + 64) )
    *(_BYTE *)(result + 65) = 1;
  *(_BYTE *)(result + 64) = 1;
  return result;
}


int __fastcall MapItemSavedData::removeTrackedMapEntity(MapItemSavedData *this, const BlockPos *a2)
{
  int v3; // [sp+0h] [bp-28h]@1
  signed int v4; // [sp+8h] [bp-20h]@1
  signed int v5; // [sp+Ch] [bp-1Ch]@1
  int v6; // [sp+10h] [bp-18h]@1
  int v7; // [sp+14h] [bp-14h]@1
  int v8; // [sp+18h] [bp-10h]@1

  v3 = 1;
  v4 = -1;
  v5 = -1;
  v6 = *(_DWORD *)a2;
  v7 = *((_DWORD *)a2 + 1);
  v8 = *((_DWORD *)a2 + 2);
  return MapItemSavedData::_removeTrackedMapEntity(this, (const MapItemTrackedEntity::UniqueId *)&v3);
}


signed int __fastcall MapItemSavedData::isAdjacent(MapItemSavedData *this, const MapItemSavedData *a2, int a3)
{
  MapItemSavedData *v3; // lr@1
  int v4; // r3@1
  signed int result; // r0@1
  int v6; // r4@2
  bool v7; // zf@2
  signed int v8; // r2@2
  signed int v9; // r5@2
  signed int v10; // r12@8
  int v11; // r3@8

  v3 = this;
  v4 = *((_BYTE *)this + 36);
  result = 0;
  if ( v4 == *((_BYTE *)a2 + 36) )
  {
    v6 = (unsigned __int8)a3;
    v7 = (unsigned __int8)a3 == 3;
    v8 = 0;
    v9 = 0;
    if ( v7 )
      v8 = 1;
    if ( v6 == 5 )
      v9 = 1;
    if ( v6 == 4 )
      v9 = -1;
    v10 = 128 << v4;
    v11 = *((_DWORD *)v3 + 5) + (128 << v4) * v9;
    if ( v6 == 2 )
      v8 = -1;
    if ( *((_DWORD *)a2 + 5) == v11 )
    {
      result = 0;
      if ( *((_DWORD *)a2 + 6) == *((_DWORD *)v3 + 6) && *((_DWORD *)a2 + 7) == *((_DWORD *)v3 + 7) + v10 * v8 )
        result = 1;
    }
  }
  return result;
}


void __fastcall MapItemSavedData::deserialize(MapItemSavedData *this, const CompoundTag *a2)
{
  MapItemSavedData::deserialize(this, a2);
}


int __fastcall MapItemSavedData::removeTrackedMapEntity(MapItemSavedData *this, Entity *a2)
{
  MapItemSavedData *v2; // r4@1
  int v4; // [sp+0h] [bp-28h]@1
  __int64 v5; // [sp+8h] [bp-20h]@1
  int v6; // [sp+10h] [bp-18h]@1
  int v7; // [sp+14h] [bp-14h]@1
  int v8; // [sp+18h] [bp-10h]@1

  v2 = this;
  v4 = 0;
  v5 = *(_QWORD *)j_Entity::getUniqueID(a2);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  return MapItemSavedData::_removeTrackedMapEntity(v2, (const MapItemTrackedEntity::UniqueId *)&v4);
}


signed int __fastcall MapItemSavedData::isChunkAllEmpty(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r12@1
  signed int result; // r0@1
  bool v7; // zf@1
  int v8; // r0@4
  int v9; // r6@4
  int v10; // lr@4
  int v11; // r3@4
  int v12; // r1@4
  int v13; // r3@4
  int v14; // r2@4
  int v15; // r4@4
  unsigned int v16; // r1@5
  int v17; // r5@6

  v5 = a1;
  result = 1;
  v7 = a5 == a3;
  if ( a5 != a3 )
    v7 = a4 == a2;
  if ( !v7 )
  {
    v8 = *(_DWORD *)(v5 + 40);
    v9 = a4 - a2;
    v10 = a5 - a3;
    v11 = v8 + 4 * a2;
    v12 = a2 + (a3 << 7);
    v13 = v11 + (a3 << 9);
    v14 = 0;
    v15 = v8 + 4 * v12 + 4;
    while ( 1 )
    {
      v16 = v15;
      do
      {
        v17 = *(_DWORD *)(v16 - 4);
        if ( v16 >= v13 + 4 * v9 )
          break;
        v16 += 4;
      }
      while ( !v17 );
      if ( v17 )
        break;
      ++v14;
      v15 += 512;
      v13 += 512;
      if ( v14 == v10 )
        return 1;
    }
    result = 0;
  }
  return result;
}


signed int __fastcall MapItemSavedData::hasParentMap(MapItemSavedData *this)
{
  signed int v1; // r2@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 36);
  result = 0;
  if ( v1 < 4 )
    result = 1;
  return result;
}


void __fastcall MapItemSavedData::serialize(MapItemSavedData *this, CompoundTag *a2)
{
  MapItemSavedData::serialize(this, a2);
}


int __fastcall MapItemSavedData::setParentMapId(int result, int a2, __int64 a3)
{
  *(_QWORD *)(result + 8) = a3;
  *(_BYTE *)(result + 65) = 1;
  return result;
}


int __fastcall MapItemSavedData::getPixels(int result, int a2)
{
  *(_QWORD *)result = *(_QWORD *)(a2 + 40);
  return result;
}


void __fastcall MapItemSavedData::getSerializationKey(const void **a1, int a2, __int64 a3)
{
  const void **v3; // r4@1
  const void **v4; // r0@1
  void *v5; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v3 = a1;
  j_Util::toString<long long,(void *)0,(void *)0>((void **)&v8, a2, a3);
  v4 = sub_21E82D8((const void **)&v8, 0, (unsigned int)"map_", (_BYTE *)4);
  *v3 = *v4;
  *v4 = &unk_28898CC;
  v5 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
}


unsigned int *__fastcall MapItemSavedData::_findTrackedMapEntity(MapItemSavedData *this, Entity *a2, Entity *a3)
{
  __int64 v3; // r6@1
  Entity *v4; // r5@1
  MapItemSavedData *v5; // r8@1
  int v6; // r4@3
  unsigned int *result; // r0@5
  unsigned int v8; // r1@9

  v3 = *(_QWORD *)((char *)a2 + 52);
  v4 = a3;
  v5 = this;
  if ( (_DWORD)v3 == HIDWORD(v3) )
  {
LABEL_5:
    result = 0;
    *(_DWORD *)v5 = 0;
    *((_DWORD *)v5 + 1) = 0;
  }
  else
    while ( 1 )
    {
      if ( !**(_DWORD **)v3 )
      {
        v6 = *(_DWORD *)v3;
        if ( *(_QWORD *)(v6 + 8) == *(_QWORD *)j_Entity::getUniqueID(v4) )
          break;
      }
      LODWORD(v3) = v3 + 8;
      if ( HIDWORD(v3) == (_DWORD)v3 )
        goto LABEL_5;
    }
    *(_DWORD *)v5 = *(_DWORD *)v3;
    result = *(unsigned int **)(v3 + 4);
    *((_DWORD *)v5 + 1) = result;
    if ( result )
      ++result;
      if ( &pthread_create )
        __dmb();
        do
          v8 = __ldrex(result);
        while ( __strex(v8 + 1, result) );
      else
        ++*result;
  return result;
}


signed int __fastcall MapItemSavedData::_updateTrackedEntityDecoration(int a1, BlockSource *a2, MapItemTrackedEntity **a3)
{
  BlockSource *v3; // r6@1
  int v4; // r4@1
  int *v5; // r5@1
  Player *v6; // r7@1
  int v8; // r2@1
  signed int v10; // r7@4
  char *v11; // r1@4
  int v16; // r0@9
  int v17; // r0@11
  char v19; // r7@12
  char *v20; // r0@13
  unsigned int *v22; // r2@15
  signed int v23; // r1@17
  float v24; // [sp+10h] [bp-48h]@12
  int v25; // [sp+18h] [bp-40h]@12
  char v26; // [sp+1Fh] [bp-39h]@9
  int v27; // [sp+20h] [bp-38h]@1
  float v28; // [sp+24h] [bp-34h]@1
  __int64 v29; // [sp+28h] [bp-30h]@1
  char *v30; // [sp+30h] [bp-28h]@1
  float v31; // [sp+34h] [bp-24h]@1
  int v32; // [sp+38h] [bp-20h]@1
  int v33; // [sp+3Ch] [bp-1Ch]@1

  v3 = a2;
  v4 = a1;
  v5 = (int *)a3;
  v31 = 0.0;
  v32 = 0;
  v33 = 0;
  v30 = (char *)&unk_28898CC;
  v27 = Color::WHITE;
  v28 = unk_283E614;
  v29 = qword_283E618;
  v6 = (Player *)MapItemTrackedEntity::getEntity(*a3, a2);
  _R0 = (MapItemTrackedEntity *)*v5;
  v8 = *(_DWORD *)*v5;
  if ( !v8 )
  {
    if ( !v6 )
    {
      v10 = 0;
      v11 = (char *)&unk_28898CC;
      goto LABEL_13;
    }
    if ( (*(int (__fastcall **)(Player *))(*(_DWORD *)v6 + 488))(v6) == 319 )
      v26 = *(_BYTE *)(*v5 + 64);
      v16 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v6 + 524))(v6);
      MapItemSavedData::_updateTrackedPlayerDecorations(
        v4,
        (int)v3,
        v6,
        (int)&v31,
        (int)&v30,
        (int)&v27,
        v16,
        (int)&v26);
      _R0 = (MapItemTrackedEntity *)*v5;
      *(_BYTE *)(*v5 + 64) = v26;
      _R7 = v31;
    else
      v17 = (*(int (__fastcall **)(Player *))(*(_DWORD *)v6 + 52))(v6);
      _R7 = *(float *)v17;
      v31 = *(float *)v17;
      v32 = *(_DWORD *)(v17 + 4);
      v33 = *(_DWORD *)(v17 + 8);
    goto LABEL_12;
  }
  _ZF = v8 == 1;
  if ( v8 == 1 )
    _ZF = *((_DWORD *)_R0 + 17) == *(_DWORD *)(v4 + 32);
  v10 = 0;
  v11 = (char *)&unk_28898CC;
  if ( _ZF )
    __asm
      VLDR            S0, [R0,#0x10]
      VCVT.F32.S32    S0, S0
      VMOV            R7, S0
      VSTR            S0, [SP,#0x58+var_24]
      VLDR            S0, [R0,#0x18]
      VSTR            S0, [SP,#0x58+var_1C]
LABEL_12:
    _R0 = MapItemTrackedEntity::getDecorationRotation(_R0, v3);
    __asm { VMOV            S0, R0 }
    v24 = _R7;
    __asm { VSTR            S0, [SP,#0x58+var_44] }
    v25 = v33;
    v19 = *(_BYTE *)(*v5 + 64);
    j_BlockSource::getLevel(v3);
    MapItemSavedData::_addDecoration(v4, v19, (int)&v24, *v5, (int)&v24, (int *)&v30, (int)&v27);
    v11 = v30;
    v10 = 1;
LABEL_13:
  v20 = v11 - 12;
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  return v10;
}


unsigned int __fastcall MapItemSavedData::addTrackedMapEntity(int a1, int a2, Entity *a3, unsigned __int8 a4)
{
  Entity *v4; // r5@1
  int v5; // r7@1
  unsigned __int8 v6; // r4@1
  int v7; // r6@1
  BlockSource *v8; // r0@1
  int v10; // [sp+8h] [bp-38h]@1
  __int64 v11; // [sp+10h] [bp-30h]@1
  int v12; // [sp+18h] [bp-28h]@1
  int v13; // [sp+1Ch] [bp-24h]@1
  int v14; // [sp+20h] [bp-20h]@1

  v4 = a3;
  v5 = a1;
  v6 = a4;
  v7 = a2;
  v10 = 0;
  v11 = *(_QWORD *)j_Entity::getUniqueID(a3);
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v8 = (BlockSource *)j_Entity::getRegion(v4);
  return MapItemSavedData::_addTrackedMapEntity(v5, v7, (int)&v10, v8, v6);
}


int __fastcall MapItemSavedData::setAllPixelsDirty(MapItemSavedData *this)
{
  MapItemSavedData *v1; // r4@1

  v1 = this;
  MapItemSavedData::setPixelDirty(this, 0, 0);
  return j_j_j__ZN16MapItemSavedData13setPixelDirtyEjj(v1, 0x7Fu, 0x7Fu);
}


int __fastcall MapItemSavedData::MapItemSavedData(int a1, int a2, __int64 a3)
{
  int v3; // r4@1
  char *v4; // r0@1
  int v5; // r6@1
  int result; // r0@1

  v3 = a1;
  *(_QWORD *)a1 = a3;
  *(_DWORD *)(a1 + 8) = -1;
  *(_DWORD *)(a1 + 12) = -1;
  *(_BYTE *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 17) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  v4 = (char *)j_operator new(0x10000u);
  *(_DWORD *)(v3 + 40) = v4;
  v5 = (int)(v4 + 0x10000);
  *(_DWORD *)(v3 + 48) = v4 + 0x10000;
  j___aeabi_memclr4((int)v4, 0x10000);
  result = v3;
  *(_DWORD *)(v3 + 44) = v5;
  *(_DWORD *)(v3 + 68) = 0;
  *(_DWORD *)(v3 + 72) = 0;
  *(_DWORD *)(v3 + 76) = 0;
  *(_WORD *)(v3 + 64) = 0;
  *(_DWORD *)(v3 + 60) = 0;
  *(_DWORD *)(v3 + 52) = 0;
  *(_DWORD *)(v3 + 56) = 0;
  return result;
}


int __fastcall MapItemSavedData::setPixel(int result, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r5@1
  unsigned int v5; // r4@1
  int v6; // r2@1
  unsigned int v7; // r3@1
  __int64 i; // r6@2
  MapItemTrackedEntity *v9; // t1@3

  v4 = a3;
  v5 = a4;
  v6 = *(_DWORD *)(result + 40);
  v7 = v4 + (a4 << 7);
  if ( *(_DWORD *)(v6 + 4 * v7) != a2 )
  {
    *(_DWORD *)(v6 + 4 * v7) = a2;
    *(_BYTE *)(result + 65) = 1;
    for ( i = *(_QWORD *)(result + 52); HIDWORD(i) != (_DWORD)i; result = MapItemTrackedEntity::setPixelDirty(
                                                                            v9,
                                                                            v4,
                                                                            v5) )
    {
      v9 = *(MapItemTrackedEntity **)i;
      LODWORD(i) = i + 8;
    }
  }
  return result;
}


int __fastcall MapItemSavedData::trySave(MapItemSavedData *this, LevelStorage *a2)
{
  MapItemSavedData *v2; // r4@1
  int result; // r0@1

  v2 = this;
  result = *((_BYTE *)this + 65);
  if ( result )
  {
    MapItemSavedData::save(v2, a2);
    result = 0;
    *((_BYTE *)v2 + 65) = 0;
  }
  return result;
}


int __fastcall MapItemSavedData::getFullDataPacket(MapItemSavedData *this, int a2)
{
  int v2; // r7@1
  MapItemSavedData *v3; // r8@1
  __int64 v4; // kr00_8@1
  int v5; // r6@1
  void *v6; // r5@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  v4 = *(_QWORD *)a2;
  v5 = *(_DWORD *)(a2 + 32);
  v6 = j_operator new(0x5Cu);
  result = ClientboundMapItemDataPacket::ClientboundMapItemDataPacket(
             (int)v6,
             *(_QWORD *)(v2 + 40) >> 32,
             v4,
             SHIDWORD(v4),
             *(_BYTE *)(v2 + 36),
             (unsigned __int64 *)(v2 + 68),
             *(_QWORD *)(v2 + 40),
             0,
             127,
             v5);
  *(_DWORD *)v3 = v6;
  return result;
}


int __fastcall MapItemSavedData::_removeTrackedMapEntity(int result, const MapItemTrackedEntity::UniqueId *a2)
{
  int v2; // r9@1
  _DWORD *v3; // r5@1
  int v4; // r10@1
  _DWORD *v5; // r2@1
  _DWORD *v6; // r3@3
  int v7; // r7@11
  int v8; // r12@11
  unsigned __int8 v9; // r0@20

  v2 = result;
  v4 = result + 52;
  v3 = *(_DWORD **)(result + 52);
  v5 = *(_DWORD **)(result + 56);
  if ( v3 == v5 )
    return result;
  result = (int)a2 + 8;
  while ( 1 )
  {
    v6 = (_DWORD *)*v3;
    if ( *(_DWORD *)*v3 )
      break;
    if ( *((_QWORD *)v6 + 1) == *(_QWORD *)result )
      goto LABEL_11;
LABEL_9:
    v3 += 2;
    if ( v5 == v3 )
      return result;
  }
  if ( v6[4] != *((_DWORD *)a2 + 4) || v6[5] != *((_DWORD *)a2 + 5) || v6[6] != *((_DWORD *)a2 + 6) )
    goto LABEL_9;
LABEL_11:
  v7 = *(_DWORD *)(v2 + 68);
  v8 = *(_DWORD *)(v2 + 72);
  if ( v7 == v8 )
    return j_j_j__ZNSt6vectorISt10shared_ptrI20MapItemTrackedEntityESaIS2_EE8_M_eraseEN9__gnu_cxx17__normal_iteratorIPS2_S4_EE(
             v4,
             (int)v3);
  while ( 2 )
    if ( !*(_DWORD *)v7 )
    {
      if ( __PAIR__(*(_QWORD *)(v7 + 8) >> 32, (unsigned int)*(_QWORD *)(v7 + 8) ^ (unsigned int)*(_QWORD *)result) == *(_QWORD *)result )
        break;
      goto LABEL_18;
    }
    if ( *(_DWORD *)(v7 + 16) != *((_DWORD *)a2 + 4)
      || *(_DWORD *)(v7 + 20) != *((_DWORD *)a2 + 5)
      || *(_DWORD *)(v7 + 24) != *((_DWORD *)a2 + 6) )
LABEL_18:
      v7 += 40;
      if ( v8 == v7 )
        return j_j_j__ZNSt6vectorISt10shared_ptrI20MapItemTrackedEntityESaIS2_EE8_M_eraseEN9__gnu_cxx17__normal_iteratorIPS2_S4_EE(
                 v4,
                 (int)v3);
      continue;
    break;
  v9 = j_MapDecoration::getImg(*(MapDecoration **)(v7 + 32));
  if ( v9 > 0x10u || (0xDFBEu >> v9) & 1 )
    *(_BYTE *)(v2 + 65) = 1;
  std::vector<std::pair<MapItemTrackedEntity::UniqueId,std::shared_ptr<MapDecoration>>,std::allocator<std::pair<MapItemTrackedEntity::UniqueId,std::shared_ptr<MapDecoration>>>>::_M_erase(
    v2 + 68,
    v7);
  return j_j_j__ZNSt6vectorISt10shared_ptrI20MapItemTrackedEntityESaIS2_EE8_M_eraseEN9__gnu_cxx17__normal_iteratorIPS2_S4_EE(
           v4,
           (int)v3);
}


signed int __fastcall MapItemSavedData::isFullyExplored(MapItemSavedData *this)
{
  MapItemSavedData *v1; // r4@1
  signed int result; // r0@2
  int v3; // r0@3
  int *v4; // r1@3 OVERLAPPED
  int *v5; // r2@3 OVERLAPPED
  int v6; // t1@4

  v1 = this;
  if ( *((_BYTE *)this + 16) )
  {
    result = 1;
  }
  else
    v3 = j_Color::toARGB((Color *)&Color::NIL);
    *(_QWORD *)&v4 = *((_QWORD *)v1 + 5);
    if ( v4 == v5 )
    {
LABEL_6:
      result = 1;
      *((_BYTE *)v1 + 16) = 1;
    }
    else
      while ( 1 )
      {
        v6 = *v4;
        ++v4;
        if ( v6 == v3 )
          break;
        if ( v5 == v4 )
          goto LABEL_6;
      }
      result = 0;
  return result;
}


int __fastcall MapItemSavedData::getMapId(int result, _QWORD *a2)
{
  *(_QWORD *)result = *a2;
  return result;
}


int __fastcall MapItemSavedData::tickByBlock(MapItemSavedData *this, const BlockPos *a2, BlockSource *a3)
{
  MapItemSavedData *v3; // r9@1
  BlockSource *v4; // r8@1
  __int64 v5; // r2@1
  __int64 v6; // kr00_8@2
  int v7; // r0@3
  int v8; // r6@3
  bool v9; // zf@3
  int v10; // r6@7
  bool v11; // zf@7
  int v12; // r4@11
  int v13; // r7@13
  unsigned int *v14; // r1@14
  unsigned int v15; // r0@16
  unsigned int *v16; // r5@20
  unsigned int v17; // r0@22
  unsigned int *v18; // r2@25
  unsigned int v19; // r3@27
  int v20; // r4@32
  unsigned int *v21; // r1@33
  unsigned int v22; // r0@35
  unsigned int *v23; // r5@39
  unsigned int v24; // r0@41
  int result; // r0@47
  unsigned int *v26; // r1@48
  unsigned int *v27; // r5@54
  char v28; // [sp+8h] [bp-48h]@13
  int v29; // [sp+Ch] [bp-44h]@13
  int v30; // [sp+10h] [bp-40h]@13
  signed int v31; // [sp+18h] [bp-38h]@13
  signed int v32; // [sp+1Ch] [bp-34h]@13
  int v33; // [sp+20h] [bp-30h]@13
  int v34; // [sp+24h] [bp-2Ch]@13
  int v35; // [sp+28h] [bp-28h]@13

  v3 = this;
  v4 = a3;
  v5 = *(_QWORD *)((char *)this + 52);
  if ( (_DWORD)v5 == HIDWORD(v5) )
  {
    v12 = 0;
LABEL_13:
    v30 = 1;
    v31 = -1;
    v32 = -1;
    v33 = *(_DWORD *)a2;
    v34 = *((_DWORD *)a2 + 1);
    v35 = *((_DWORD *)a2 + 2);
    MapItemSavedData::_addTrackedMapEntity((int)&v28, (int)v3, (int)&v30, v4, 1u);
    v13 = v29;
    *(_DWORD *)&v28 = 0;
    v29 = 0;
    if ( v12 )
    {
      v14 = (unsigned int *)(v12 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
      }
      else
        v15 = (*v14)--;
      if ( v15 == 1 )
        v16 = (unsigned int *)(v12 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
        if ( &pthread_create )
        {
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
        }
        else
          v17 = (*v16)--;
        if ( v17 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
    }
    v20 = v29;
    if ( v29 )
      v21 = (unsigned int *)(v29 + 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 == 1 )
        v23 = (unsigned int *)(v20 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 8))(v20);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v20 + 12))(v20);
    v12 = v13;
    goto LABEL_47;
  }
  v6 = *(_QWORD *)a2;
  while ( 1 )
    v7 = *(_DWORD *)v5;
    v8 = **(_DWORD **)v5;
    v9 = v8 == 1;
    if ( v8 == 1 )
      v9 = *(_DWORD *)(v7 + 16) == (_DWORD)v6;
    if ( v9 )
      v10 = *(_DWORD *)(v7 + 20);
      v11 = v10 == HIDWORD(v6);
      if ( v10 == HIDWORD(v6) )
        v11 = *(_DWORD *)(v7 + 24) == *((_DWORD *)a2 + 2);
      if ( v11 )
        break;
    LODWORD(v5) = v5 + 8;
    if ( HIDWORD(v5) == (_DWORD)v5 )
      v12 = 0;
      goto LABEL_13;
  v12 = *(_DWORD *)(v5 + 4);
  if ( v12 )
    v18 = (unsigned int *)(v12 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 + 1, v18) );
    else
      ++*v18;
  if ( !v7 )
    goto LABEL_13;
LABEL_47:
  result = MapItemSavedData::_updateTrackedEntityDecorations(v3, v4);
    v26 = (unsigned int *)(v12 + 4);
        result = __ldrex(v26);
      while ( __strex(result - 1, v26) );
      result = (*v26)--;
    if ( result == 1 )
      v27 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
          result = __ldrex(v27);
        while ( __strex(result - 1, v27) );
        result = (*v27)--;
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  return result;
}


int __fastcall MapItemSavedData::setScale(int result, int a2)
{
  if ( *(_BYTE *)(result + 36) != a2 )
    *(_BYTE *)(result + 65) = 1;
  *(_BYTE *)(result + 36) = a2;
  return result;
}


int __fastcall MapItemSavedData::getParentMapId(int result, int a2)
{
  *(_QWORD *)result = *(_QWORD *)(a2 + 8);
  return result;
}


int __fastcall MapItemSavedData::setOrigin(int a1, float _R1, int a3, int a4, char a5, int a6)
{
  int v6; // r4@1
  int v15; // r0@1
  int v16; // r6@1
  float v18; // r1@1
  int result; // r0@1
  int v20; // r1@1
  __int64 v21; // r2@1

  v6 = a1;
  _R8 = a4;
  _R7 = 64;
  __asm
  {
    VMOV            S0, R7
    VCVT.F32.S32    S16, S0
  }
  _R5 = 128 << a5;
    VMOV            S0, R1
    VMOV            S2, R5
    VCVT.F32.S32    S18, S2
    VADD.F32        S0, S16, S0
    VDIV.F32        S0, S0, S18
    VMOV            R0, S0
  v15 = j_mce::Math::floor(_R0, _R1);
  __asm { VMOV            S0, R8 }
  v16 = v15;
  LODWORD(v21) = j_mce::Math::floor(_R0, v18) * (128 << a5);
  result = a6;
  v20 = v16 * _R5 + _R5 / 2 - 64;
  LODWORD(v21) = v21 + (128 << a5) / 2 - 64;
  if ( *(_DWORD *)(v6 + 20) != v20
    || (HIDWORD(v21) = *(_DWORD *)(v6 + 24), *(_DWORD *)(v6 + 28) != v21)
    || *(_DWORD *)(v6 + 32) != a6 )
    *(_BYTE *)(v6 + 65) = 1;
  *(_DWORD *)(v6 + 20) = v20;
  *(_DWORD *)(v6 + 24) = 0;
  *(_DWORD *)(v6 + 28) = v21;
  *(_DWORD *)(v6 + 32) = a6;
  return result;
}
