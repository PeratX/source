

void __fastcall StructureBlockEntity::setStructureName(int a1, int *a2)
{
  StructureBlockEntity *v2; // r4@1

  v2 = (StructureBlockEntity *)a1;
  EntityInteraction::setInteractText((int *)(a1 + 200), a2);
  j_j_j__ZN20StructureBlockEntity16updateCustomNameEv(v2);
}


int __fastcall StructureBlockEntity::setPowered(StructureBlockEntity *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  StructureBlockEntity *v4; // r4@1
  const BlockPos *v5; // r5@1
  int result; // r0@1
  BlockSource *v7; // r6@1

  v4 = this;
  v5 = a3;
  result = *((_BYTE *)this + 297);
  v7 = a2;
  if ( a4 == 1 )
  {
    if ( !result )
    {
      *((_BYTE *)v4 + 297) = 0;
      result = BlockEntity::getData(v4);
      if ( result == 2 )
      {
        result = j_j_j__ZN20StructureBlockEntity13loadStructureER11BlockSourceRK8BlockPosb(v4, v7, v5, 0);
      }
      else if ( result == 1 )
        result = j_j_j__ZN20StructureBlockEntity13saveStructureER11BlockSourceRK8BlockPosb(v4, v7, v5, 0);
    }
  }
  else if ( result )
    result = 0;
    *((_BYTE *)v4 + 297) = 0;
  return result;
}


void __fastcall StructureBlockEntity::~StructureBlockEntity(StructureBlockEntity *this)
{
  StructureBlockEntity *v1; // r0@1

  v1 = StructureBlockEntity::~StructureBlockEntity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall StructureBlockEntity::resetTempData(StructureBlockEntity *this)
{
  StructureBlockEntity *v1; // r6@1
  unsigned int v2; // r0@1
  int v3; // r1@1
  int v4; // r2@1
  int v5; // r3@1
  int v6; // r4@1
  int v7; // r5@1
  int result; // r0@1

  v1 = this;
  EntityInteraction::setInteractText((int *)this + 50, (int *)this + 26);
  EntityInteraction::setInteractText((int *)v1 + 51, (int *)v1 + 27);
  *((_DWORD *)v1 + 52) = *((_DWORD *)v1 + 28);
  *((_DWORD *)v1 + 53) = *((_DWORD *)v1 + 29);
  *((_DWORD *)v1 + 54) = *((_DWORD *)v1 + 30);
  *((_DWORD *)v1 + 55) = *((_DWORD *)v1 + 31);
  *((_DWORD *)v1 + 56) = *((_DWORD *)v1 + 32);
  *((_DWORD *)v1 + 57) = *((_DWORD *)v1 + 33);
  v2 = *((_DWORD *)v1 + 34);
  *((_BYTE *)v1 + 232) = v2;
  *((_BYTE *)v1 + 233) = BYTE1(v2);
  *((_BYTE *)v1 + 234) = v2 >> 16;
  *((_BYTE *)v1 + 235) = BYTE3(v2);
  v3 = (int)v1 + 240;
  v4 = *((_DWORD *)v1 + 37);
  v5 = *((_DWORD *)v1 + 38);
  v6 = *((_DWORD *)v1 + 39);
  v7 = *((_DWORD *)v1 + 40);
  *(_DWORD *)v3 = *((_DWORD *)v1 + 36);
  *(_DWORD *)(v3 + 4) = v4;
  *(_DWORD *)(v3 + 8) = v5;
  *(_DWORD *)(v3 + 12) = v6;
  *(_DWORD *)(v3 + 16) = v7;
  *((_QWORD *)v1 + 33) = *((_QWORD *)v1 + 21);
  *((_DWORD *)v1 + 68) = *((_DWORD *)v1 + 44);
  *((_DWORD *)v1 + 69) = *((_DWORD *)v1 + 45);
  *((_DWORD *)v1 + 70) = *((_DWORD *)v1 + 46);
  *((_DWORD *)v1 + 71) = *((_DWORD *)v1 + 47);
  *((_DWORD *)v1 + 72) = *((_DWORD *)v1 + 48);
  result = *((_DWORD *)v1 + 49);
  *((_DWORD *)v1 + 73) = result;
  return result;
}


int __fastcall StructureBlockEntity::StructureBlockEntity(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+8h] [bp-38h]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v8, "StructureBlock");
  BlockEntity::BlockEntity(v3, 32, v2);
  v4 = (void *)(v8 - 12);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  *(_DWORD *)v3 = &off_270A978;
  StructureEditorData::StructureEditorData(v3 + 104);
  StructureEditorData::StructureEditorData(v3 + 200);
  *(_BYTE *)(v3 + 296) = 0;
  *(_BYTE *)(v3 + 297) = 0;
  *(_DWORD *)(v3 + 300) = &unk_28898CC;
  BlockEntity::setData((BlockEntity *)v3, 5);
  *(_DWORD *)(v3 + 84) = 13;
  *(_BYTE *)(v3 + 99) = 1;
  return v3;
}


signed int __fastcall StructureBlockEntity::save(StructureBlockEntity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  StructureBlockEntity *v3; // r7@1
  int v4; // r0@2
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  void *v11; // r0@8
  void *v12; // r0@9
  void *v13; // r0@10
  void *v14; // r0@11
  void *v15; // r0@12
  void *v16; // r0@13
  int v17; // r0@14
  void *v18; // r0@14
  int *v19; // r0@15
  void *v20; // r0@15
  char *v21; // r0@16
  void *v22; // r0@16
  int v23; // r0@17
  void *v24; // r0@17
  void *v25; // r0@18
  void *v26; // r0@19
  signed int result; // r0@20
  unsigned int *v28; // r2@22
  signed int v29; // r1@24
  unsigned int *v30; // r2@26
  signed int v31; // r1@28
  unsigned int *v32; // r2@30
  signed int v33; // r1@32
  unsigned int *v34; // r2@34
  signed int v35; // r1@36
  unsigned int *v36; // r2@38
  signed int v37; // r1@40
  unsigned int *v38; // r2@42
  signed int v39; // r1@44
  unsigned int *v40; // r2@46
  signed int v41; // r1@48
  unsigned int *v42; // r2@50
  signed int v43; // r1@52
  unsigned int *v44; // r2@54
  signed int v45; // r1@56
  unsigned int *v46; // r2@58
  signed int v47; // r1@60
  unsigned int *v48; // r2@62
  signed int v49; // r1@64
  unsigned int *v50; // r2@66
  signed int v51; // r1@68
  unsigned int *v52; // r2@70
  signed int v53; // r1@72
  unsigned int *v54; // r2@74
  signed int v55; // r1@76
  unsigned int *v56; // r2@78
  signed int v57; // r1@80
  unsigned int *v58; // r2@82
  signed int v59; // r1@84
  unsigned int *v60; // r2@86
  signed int v61; // r1@88
  unsigned int *v62; // r2@90
  signed int v63; // r1@92
  int v64; // [sp+4h] [bp-A4h]@19
  int v65; // [sp+Ch] [bp-9Ch]@18
  int v66; // [sp+14h] [bp-94h]@17
  int v67; // [sp+1Ch] [bp-8Ch]@16
  int v68; // [sp+24h] [bp-84h]@15
  int v69; // [sp+2Ch] [bp-7Ch]@14
  int v70; // [sp+34h] [bp-74h]@13
  int v71; // [sp+3Ch] [bp-6Ch]@12
  int v72; // [sp+44h] [bp-64h]@11
  int v73; // [sp+4Ch] [bp-5Ch]@10
  int v74; // [sp+54h] [bp-54h]@9
  int v75; // [sp+5Ch] [bp-4Ch]@8
  int v76; // [sp+64h] [bp-44h]@7
  int v77; // [sp+6Ch] [bp-3Ch]@6
  int v78; // [sp+74h] [bp-34h]@5
  int v79; // [sp+7Ch] [bp-2Ch]@4
  int v80; // [sp+84h] [bp-24h]@3
  int v81; // [sp+8Ch] [bp-1Ch]@2

  v2 = a2;
  v3 = this;
  if ( BlockEntity::save(this, a2) == 1 )
  {
    sub_21E94B4((void **)&v81, "data");
    v4 = BlockEntity::getData(v3);
    CompoundTag::putInt((int)v2, (const void **)&v81, v4);
    v5 = (void *)(v81 - 12);
    if ( (int *)(v81 - 12) != &dword_28898C0 )
    {
      v28 = (unsigned int *)(v81 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
      }
      else
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    }
    sub_21E94B4((void **)&v80, "xStructureOffset");
    CompoundTag::putInt((int)v2, (const void **)&v80, *((_DWORD *)v3 + 28));
    v6 = (void *)(v80 - 12);
    if ( (int *)(v80 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v80 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    sub_21E94B4((void **)&v79, "yStructureOffset");
    CompoundTag::putInt((int)v2, (const void **)&v79, *((_DWORD *)v3 + 29));
    v7 = (void *)(v79 - 12);
    if ( (int *)(v79 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v79 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    sub_21E94B4((void **)&v78, "zStructureOffset");
    CompoundTag::putInt((int)v2, (const void **)&v78, *((_DWORD *)v3 + 30));
    v8 = (void *)(v78 - 12);
    if ( (int *)(v78 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v78 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    sub_21E94B4((void **)&v77, "xStructureSize");
    CompoundTag::putInt((int)v2, (const void **)&v77, *((_DWORD *)v3 + 31));
    v9 = (void *)(v77 - 12);
    if ( (int *)(v77 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v77 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    sub_21E94B4((void **)&v76, "yStructureSize");
    CompoundTag::putInt((int)v2, (const void **)&v76, *((_DWORD *)v3 + 32));
    v10 = (void *)(v76 - 12);
    if ( (int *)(v76 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v76 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    sub_21E94B4((void **)&v75, "zStructureSize");
    CompoundTag::putInt((int)v2, (const void **)&v75, *((_DWORD *)v3 + 33));
    v11 = (void *)(v75 - 12);
    if ( (int *)(v75 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v75 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    sub_21E94B4((void **)&v74, "structureName");
    CompoundTag::putString((int)v2, (const void **)&v74, (int *)v3 + 26);
    v12 = (void *)(v74 - 12);
    if ( (int *)(v74 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v74 - 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    sub_21E94B4((void **)&v73, "metadata");
    CompoundTag::putString((int)v2, (const void **)&v73, (int *)v3 + 27);
    v13 = (void *)(v73 - 12);
    if ( (int *)(v73 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v73 - 4);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    sub_21E94B4((void **)&v72, "ignoreEntities");
    CompoundTag::putBoolean((int)v2, (const void **)&v72, *((_BYTE *)v3 + 136));
    v14 = (void *)(v72 - 12);
    if ( (int *)(v72 - 12) != &dword_28898C0 )
      v46 = (unsigned int *)(v72 - 4);
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
        v47 = (*v46)--;
      if ( v47 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    sub_21E94B4((void **)&v71, "includePlayers");
    CompoundTag::putBoolean((int)v2, (const void **)&v71, *((_BYTE *)v3 + 138));
    v15 = (void *)(v71 - 12);
    if ( (int *)(v71 - 12) != &dword_28898C0 )
      v48 = (unsigned int *)(v71 - 4);
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    sub_21E94B4((void **)&v70, "showAir");
    CompoundTag::putBoolean((int)v2, (const void **)&v70, *((_BYTE *)v3 + 139));
    v16 = (void *)(v70 - 12);
    if ( (int *)(v70 - 12) != &dword_28898C0 )
      v50 = (unsigned int *)(v70 - 4);
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
        v51 = (*v50)--;
      if ( v51 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    sub_21E94B4((void **)&v69, "settingsIntegrity");
    v17 = StructureSettings::getIntegrity((StructureBlockEntity *)((char *)v3 + 144));
    CompoundTag::putFloat((int)v2, (const void **)&v69, v17);
    v18 = (void *)(v69 - 12);
    if ( (int *)(v69 - 12) != &dword_28898C0 )
      v52 = (unsigned int *)(v69 - 4);
          v53 = __ldrex(v52);
        while ( __strex(v53 - 1, v52) );
        v53 = (*v52)--;
      if ( v53 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    sub_21E94B4((void **)&v68, "settingsMirror");
    v19 = (int *)StructureSettings::getMirror((StructureBlockEntity *)((char *)v3 + 144));
    CompoundTag::putInt((int)v2, (const void **)&v68, *v19);
    v20 = (void *)(v68 - 12);
    if ( (int *)(v68 - 12) != &dword_28898C0 )
      v54 = (unsigned int *)(v68 - 4);
          v55 = __ldrex(v54);
        while ( __strex(v55 - 1, v54) );
        v55 = (*v54)--;
      if ( v55 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    sub_21E94B4((void **)&v67, "settingsRotation");
    v21 = StructureSettings::getRotation((StructureBlockEntity *)((char *)v3 + 144));
    CompoundTag::putInt((int)v2, (const void **)&v67, *(_WORD *)v21);
    v22 = (void *)(v67 - 12);
    if ( (int *)(v67 - 12) != &dword_28898C0 )
      v56 = (unsigned int *)(v67 - 4);
          v57 = __ldrex(v56);
        while ( __strex(v57 - 1, v56) );
        v57 = (*v56)--;
      if ( v57 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    sub_21E94B4((void **)&v66, "settingsSeed");
    v23 = StructureSettings::getSeed((StructureBlockEntity *)((char *)v3 + 144));
    CompoundTag::putInt((int)v2, (const void **)&v66, v23);
    v24 = (void *)(v66 - 12);
    if ( (int *)(v66 - 12) != &dword_28898C0 )
      v58 = (unsigned int *)(v66 - 4);
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
        v59 = (*v58)--;
      if ( v59 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    sub_21E94B4((void **)&v65, "showBoundingBox");
    CompoundTag::putBoolean((int)v2, (const void **)&v65, *((_BYTE *)v3 + 296));
    v25 = (void *)(v65 - 12);
    if ( (int *)(v65 - 12) != &dword_28898C0 )
      v60 = (unsigned int *)(v65 - 4);
          v61 = __ldrex(v60);
        while ( __strex(v61 - 1, v60) );
        v61 = (*v60)--;
      if ( v61 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    sub_21E94B4((void **)&v64, "isPowered");
    CompoundTag::putBoolean((int)v2, (const void **)&v64, *((_BYTE *)v3 + 297));
    v26 = (void *)(v64 - 12);
    if ( (int *)(v64 - 12) != &dword_28898C0 )
      v62 = (unsigned int *)(v64 - 4);
          v63 = __ldrex(v62);
        while ( __strex(v63 - 1, v62) );
        v63 = (*v62)--;
      if ( v63 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    result = 1;
  }
  else
    result = 0;
  return result;
}


char *__fastcall StructureBlockEntity::getMetadataName(StructureBlockEntity *this)
{
  return (char *)this + 204;
}


signed int __fastcall StructureBlockEntity::stringToStructureType(unsigned int *a1)
{
  unsigned int *v1; // r8@1
  char v2; // r0@1
  double v3; // r0@3
  void *v4; // r0@3
  void *v5; // r0@4
  void *v6; // r0@5
  void *v7; // r0@6
  void *v8; // r0@7
  unsigned int v9; // r9@9
  unsigned int v10; // r10@9
  int v11; // r11@9
  int v12; // r6@9
  int v13; // r7@10
  _DWORD *v14; // r8@10
  int v15; // r4@10
  _DWORD *v16; // r1@12
  size_t v17; // r2@12
  int v18; // r5@14
  int v19; // r4@16
  signed int v20; // r2@24
  unsigned int *v22; // r2@27
  signed int v23; // r1@29
  unsigned int *v24; // r2@35
  signed int v25; // r1@37
  unsigned int *v26; // r2@39
  signed int v27; // r1@41
  unsigned int *v28; // r2@43
  signed int v29; // r1@45
  unsigned int *v30; // r2@47
  signed int v31; // r1@49
  unsigned int *v32; // r2@51
  signed int v33; // r1@53
  void *s1; // [sp+18h] [bp-80h]@9
  int v35; // [sp+28h] [bp-70h]@3
  int v36; // [sp+2Ch] [bp-6Ch]@3
  int v37; // [sp+30h] [bp-68h]@3
  int v38; // [sp+34h] [bp-64h]@3
  int v39; // [sp+38h] [bp-60h]@3
  int v40; // [sp+3Ch] [bp-5Ch]@3
  int v41; // [sp+40h] [bp-58h]@3
  int v42; // [sp+44h] [bp-54h]@3
  int v43; // [sp+48h] [bp-50h]@3
  int v44; // [sp+4Ch] [bp-4Ch]@3
  char v45; // [sp+50h] [bp-48h]@3

  v1 = a1;
  v2 = byte_280FFE4;
  __dmb();
  if ( !(v2 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_280FFE4) )
  {
    sub_21E94B4((void **)&v35, "data");
    v36 = 0;
    sub_21E94B4((void **)&v37, "save");
    v38 = 1;
    sub_21E94B4((void **)&v39, "load");
    v40 = 2;
    sub_21E94B4((void **)&v41, "corner");
    v42 = 3;
    sub_21E94B4((void **)&v43, "export");
    v44 = 5;
    LODWORD(v3) = &dword_280FFEC;
    std::_Hashtable<std::string,std::pair<std::string const,StructureBlockType>,std::allocator<std::pair<std::string const,StructureBlockType>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<std::string const,StructureBlockType> const*>(
      v3,
      (int **)&v45,
      0);
    v4 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
    {
      v24 = (unsigned int *)(v43 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
      }
      else
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v4);
    }
    v5 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v41 - 4);
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    v6 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v39 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    v7 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v37 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    v8 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v35 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    _cxa_atexit(std::unordered_map<std::string,StructureBlockType,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,StructureBlockType>>>::~unordered_map);
    j___cxa_guard_release((unsigned int *)&byte_280FFE4);
  }
  Util::toLower(&s1, *(_DWORD *)(*v1 - 12), *v1);
  v9 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v10 = unk_280FFF0;
  v11 = v9 % unk_280FFF0;
  v12 = *(_DWORD *)(dword_280FFEC + 4 * (v9 % unk_280FFF0));
  if ( v12 )
    v13 = *(_DWORD *)v12;
    v14 = s1;
    v15 = *(_DWORD *)(*(_DWORD *)v12 + 12);
    while ( 1 )
      if ( v15 == v9 )
        v16 = *(_DWORD **)(v13 + 4);
        v17 = *(v14 - 3);
        if ( v17 == *(v16 - 3) && !memcmp(v14, v16, v17) )
          break;
      v18 = *(_DWORD *)v13;
      if ( !*(_DWORD *)v13 )
        v19 = 0;
        goto LABEL_22;
      v15 = *(_DWORD *)(v18 + 12);
      v12 = v13;
      v13 = *(_DWORD *)v13;
      if ( *(_DWORD *)(v18 + 12) % v10 != v11 )
    if ( v12 )
      v19 = *(_DWORD *)v12;
    else
      v19 = 0;
  else
    v19 = 0;
LABEL_22:
  if ( v14 - 3 != &dword_28898C0 )
    v22 = v14 - 1;
    if ( &pthread_create )
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v14 - 3);
  if ( v19 )
    v20 = *(_DWORD *)(v19 + 8);
    v20 = 4;
  return v20;
}


char *__fastcall StructureBlockEntity::getStructureSize(StructureBlockEntity *this)
{
  return (char *)this + 220;
}


int __fastcall StructureBlockEntity::setIncludeEntities(int result, bool a2)
{
  *(_BYTE *)(result + 232) = !a2;
  return result;
}


void __fastcall StructureBlockEntity::~StructureBlockEntity(StructureBlockEntity *this)
{
  StructureBlockEntity::~StructureBlockEntity(this);
}


int __fastcall StructureBlockEntity::saveStructure(StructureBlockEntity *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  StructureBlockEntity *v4; // r7@1
  BlockSource *v5; // r6@1
  int v6; // r9@1
  const BlockPos *v7; // r5@1
  Level *v8; // r0@1
  int v9; // r4@2
  Level *v10; // r0@5
  pthread_mutex_t *v11; // r0@5
  StructureTemplate *v12; // r10@5
  int v13; // r1@5
  int v14; // r12@5
  __int64 v15; // kr00_8@5
  int v16; // r2@5
  void *v17; // r0@9
  int v18; // r0@12
  int v19; // r2@12
  int v20; // r3@12
  char v21; // r4@13
  signed int v22; // r4@16
  const char *v23; // r4@17
  int v24; // r6@17
  __int64 v25; // r1@17
  void *v26; // r0@17
  void *v27; // r0@18
  void *v28; // r0@19
  int v29; // r4@19
  int v30; // r1@20
  int v31; // r2@20
  void (__fastcall *v32)(_DWORD, int); // r3@20
  char *v33; // r0@25
  char *v34; // r0@26
  unsigned int *v36; // r2@33
  signed int v37; // r1@35
  unsigned int *v38; // r2@37
  signed int v39; // r1@39
  unsigned int *v40; // r2@41
  signed int v41; // r1@43
  unsigned int *v42; // r2@45
  signed int v43; // r1@47
  int v44; // [sp+8h] [bp-8B8h]@21
  int v45; // [sp+Ch] [bp-8B4h]@17
  int v46; // [sp+10h] [bp-8B0h]@17
  const char *v47; // [sp+14h] [bp-8ACh]@13
  int v48; // [sp+18h] [bp-8A8h]@13
  char v49; // [sp+1Ch] [bp-8A4h]@13
  void (*v50)(void); // [sp+24h] [bp-89Ch]@13
  char v51; // [sp+2Ch] [bp-894h]@13
  const char *v52; // [sp+30h] [bp-890h]@12
  int v53; // [sp+34h] [bp-88Ch]@12
  const char *v54; // [sp+38h] [bp-888h]@12
  void **v55; // [sp+3Ch] [bp-884h]@8
  int *v56; // [sp+40h] [bp-880h]@8
  _DWORD *v57; // [sp+44h] [bp-87Ch]@8
  char v58; // [sp+48h] [bp-878h]@8
  int v59; // [sp+64h] [bp-85Ch]@5
  int v60; // [sp+68h] [bp-858h]@5
  int v61; // [sp+6Ch] [bp-854h]@5
  const char *v62; // [sp+70h] [bp-850h]@12
  int v63; // [sp+74h] [bp-84Ch]@12
  int v64; // [sp+78h] [bp-848h]@12
  int v65; // [sp+7Ch] [bp-844h]@12
  char v66; // [sp+8Ch] [bp-834h]@17
  int v67; // [sp+90h] [bp-830h]@17
  char v68; // [sp+494h] [bp-42Ch]@12
  int v69; // [sp+498h] [bp-428h]@12
  RakNet *v70; // [sp+89Ch] [bp-24h]@1

  v4 = this;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  v70 = _stack_chk_guard;
  v8 = (Level *)BlockSource::getLevel(a2);
  if ( Level::isClientSide(v8) )
  {
    v9 = 0;
  }
  else if ( BlockEntity::getData(v4) == 1 )
    if ( *(_DWORD *)(*((_DWORD *)v4 + 26) - 12) )
    {
      v10 = (Level *)BlockSource::getLevel(v5);
      v11 = (pthread_mutex_t *)Level::getStructureManager(v10);
      v12 = (StructureTemplate *)StructureManager::getOrCreate(v11, (int **)v4 + 26);
      v13 = *((_DWORD *)v7 + 1);
      v14 = *((_DWORD *)v7 + 2);
      v15 = *((_QWORD *)v4 + 14);
      v16 = *((_DWORD *)v4 + 30);
      v59 = *(_DWORD *)v7 + v15;
      v60 = HIDWORD(v15) + v13;
      v61 = v16 + v14;
      if ( !*((_BYTE *)v4 + 136) )
        v9 = 1;
      StructureTemplate::fillFromWorld(v12, v5, (const BlockPos *)&v59, (StructureBlockEntity *)((char *)v4 + 124), v9);
      if ( v6 != 1 )
        goto LABEL_67;
      CompoundTag::CompoundTag(&v58);
      v57 = &unk_28898CC;
      v56 = (int *)&v57;
      v55 = &off_270A9F4;
      StructureTemplate::save(v12, (CompoundTag *)&v58);
      Tag::writeNamedTag((int)&Tag::NullString, (int)&v58, (int)&v55);
      v17 = *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) ? ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) : &ServiceLocator<AppPlatform>::mDefaultService;
      v18 = *(_DWORD *)(*(int (**)(void))(**(_DWORD **)v17 + 264))();
      v19 = *(_DWORD *)(v18 - 12);
      v20 = *(_DWORD *)(StructureBlockEntity::STRUCTURE_FILE_PREFIX - 12);
      v62 = (const char *)v18;
      v63 = v19;
      v64 = StructureBlockEntity::STRUCTURE_FILE_PREFIX;
      v65 = v20;
      Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v68, (int)&v62, 2);
      sub_21E94B4((void **)&v54, (const char *)&v69);
      v52 = v54;
      v53 = *((_DWORD *)v54 - 3);
      if ( Core::FileSystem::fileOrDirectoryExists((__int64 *)&v52) )
        goto LABEL_68;
      v47 = v54;
      v48 = *((_DWORD *)v54 - 3);
      Core::FileSystem::createDirectoryRecursively((int)&v49, (__int64 *)&v47);
      v21 = v51;
      v51 |= 2u;
      if ( v50 )
        v50();
      if ( v21 & 1 )
      {
LABEL_68:
        v23 = v54;
        v24 = *((_DWORD *)v54 - 3);
        sub_21E8AF4(&v45, (int *)v4 + 26);
        sub_21E72F0((const void **)&v45, (const void **)&StructureBlockEntity::STRUCTURE_FILE_POSTFIX);
        LODWORD(v25) = v45;
        HIDWORD(v25) = *(_DWORD *)(v45 - 12);
        v62 = v23;
        v63 = v24;
        *(_QWORD *)&v64 = v25;
        Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v66, (int)&v62, 2);
        sub_21E94B4((void **)&v46, (const char *)&v67);
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          (int *)&v54,
          &v46);
        v26 = (void *)(v46 - 12);
        if ( (int *)(v46 - 12) != &dword_28898C0 )
        {
          v40 = (unsigned int *)(v46 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v41 = __ldrex(v40);
            while ( __strex(v41 - 1, v40) );
          }
          else
            v41 = (*v40)--;
          if ( v41 <= 0 )
            j_j_j_j__ZdlPv_9(v26);
        }
        v27 = (void *)(v45 - 12);
        if ( (int *)(v45 - 12) != &dword_28898C0 )
          v42 = (unsigned int *)(v45 - 4);
              v43 = __ldrex(v42);
            while ( __strex(v43 - 1, v42) );
            v43 = (*v42)--;
          if ( v43 <= 0 )
            j_j_j_j__ZdlPv_9(v27);
        v28 = j_gzopen(v54, "wb");
        v29 = (int)v28;
        if ( v28 )
          if ( (signed int)j_gzwrite((int)v28, (int)v57, *(v57 - 3)) <= -1 && (j_gzerror(v29, &v44), v44) )
            j_gzclose(v29, v30, v31, v32);
            v22 = 1;
            v22 = 0;
        else
          v22 = 1;
      }
      else
        v22 = 1;
      v33 = (char *)(v54 - 12);
      if ( (int *)(v54 - 12) != &dword_28898C0 )
        v36 = (unsigned int *)(v54 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          v37 = (*v36)--;
        if ( v37 <= 0 )
          j_j_j_j__ZdlPv_9(v33);
      v34 = (char *)(v57 - 3);
      if ( v57 - 3 != &dword_28898C0 )
        v38 = v57 - 1;
            v39 = __ldrex(v38);
          while ( __strex(v39 - 1, v38) );
          v39 = (*v38)--;
        if ( v39 <= 0 )
          j_j_j_j__ZdlPv_9(v34);
      CompoundTag::~CompoundTag((CompoundTag *)&v58);
      if ( v22 )
        v9 = 0;
LABEL_67:
    }
  else
  if ( _stack_chk_guard != v70 )
    _stack_chk_fail(_stack_chk_guard - v70);
  return v9;
}


char *__fastcall StructureBlockEntity::getStructureName(StructureBlockEntity *this)
{
  return (char *)this + 200;
}


void __fastcall StructureBlockEntity::getNearbyStructureBlocks(int a1, BlockPos *a2, int a3, int a4, int a5)
{
  StructureBlockEntity::getNearbyStructureBlocks(a1, a2, a3, a4, a5);
}


void __fastcall StructureBlockEntity::onChanged(StructureBlockEntity *this, BlockSource *a2)
{
  BlockEntity *v2; // r4@1
  BlockPos *v3; // r6@1
  BlockSource *v4; // r5@1
  char v5; // [sp+8h] [bp-18h]@1
  char v6; // [sp+9h] [bp-17h]@1
  char v7; // [sp+Ch] [bp-14h]@1
  char v8; // [sp+Dh] [bp-13h]@1

  v2 = this;
  v3 = (StructureBlockEntity *)((char *)this + 32);
  v4 = a2;
  BlockSource::getBlockAndData((BlockSource *)&v7, a2, (int)this + 32);
  v8 = BlockEntity::getData(v2);
  v5 = v7;
  v6 = v8;
  BlockSource::setBlockAndData((int)v4, v3, (int)&v5, 19, 0);
  StructureBlockEntity::updateCustomName(v2);
}


int __fastcall StructureBlockEntity::setStructureSize(int result, const BlockPos *a2)
{
  int v2; // r3@1
  int v3; // r2@1
  int v4; // r1@1
  int v5; // lr@7
  int v6; // r4@7

  v2 = *(_DWORD *)a2;
  *(_DWORD *)(result + 220) = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 224) = v3;
  v4 = *((_DWORD *)a2 + 2);
  *(_DWORD *)(result + 228) = v4;
  if ( StructureBlockEntity::MAX_STRUCTURE_SIZE < v2 )
    v2 = StructureBlockEntity::MAX_STRUCTURE_SIZE;
  if ( *(_DWORD *)algn_280FFB4 < v3 )
    v3 = *(_DWORD *)algn_280FFB4;
  if ( dword_280FFB8 < v4 )
    v4 = dword_280FFB8;
  *(_DWORD *)(result + 220) = v2;
  v5 = unk_280FFA8;
  v6 = dword_280FFAC;
  if ( v2 < StructureBlockEntity::MIN_STRUCTURE_SIZE )
    v2 = StructureBlockEntity::MIN_STRUCTURE_SIZE;
  if ( v4 < v6 )
    v4 = v6;
  if ( v3 < v5 )
    v3 = v5;
  if ( v3 >= 256 - *(_DWORD *)(result + 36) - *(_DWORD *)(result + 212) )
    v3 = 256 - *(_DWORD *)(result + 36) - *(_DWORD *)(result + 212);
  return result;
}


int __fastcall StructureBlockEntity::changeStructureType(BlockEntity *a1, int a2)
{
  BlockEntity *v2; // r4@1

  v2 = a1;
  BlockEntity::setData(a1, a2);
  return j_j_j__ZN11BlockEntity10setChangedEv_0(v2);
}


int __fastcall StructureBlockEntity::resetMode(StructureBlockEntity *this)
{
  BlockEntity *v1; // r4@1

  v1 = this;
  BlockEntity::setData(this, 5);
  return j_j_j__ZN11BlockEntity10setChangedEv_0(v1);
}


signed int __fastcall StructureBlockEntity::getIncludeEntities(StructureBlockEntity *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 232);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


signed int __fastcall StructureBlockEntity::detectSize(StructureBlockEntity *this, BlockSource *a2)
{
  BlockEntity *v2; // r5@1
  int v3; // r0@1
  char *v4; // r6@1
  int v5; // r2@1
  int *v6; // r4@1
  int v7; // r7@1
  BlockEntity **v8; // r1@1
  signed int v9; // r7@1
  BlockEntity **v10; // r7@3
  char *v11; // r0@3
  BlockEntity *v12; // r0@3
  int v13; // r10@5 OVERLAPPED
  signed int v14; // r11@5
  int v15; // r9@5 OVERLAPPED
  signed int v16; // r8@6
  int v17; // r6@6
  int v18; // r7@6
  signed int v19; // r5@6
  BlockEntity **v20; // r4@6
  char *v21; // r0@7
  __int64 v22; // kr00_8@7
  int v23; // r0@7
  int v24; // r1@17
  __int64 v25; // r1@27
  int v26; // r7@27
  int v27; // r6@27
  BlockEntity *v29; // [sp+8h] [bp-68h]@5
  BlockEntity **v30; // [sp+Ch] [bp-64h]@6
  __int64 v31; // [sp+10h] [bp-60h]@6
  BlockEntity **v32; // [sp+18h] [bp-58h]@1
  BlockEntity **v33; // [sp+1Ch] [bp-54h]@1
  BlockEntity **v34; // [sp+20h] [bp-50h]@1
  int v35; // [sp+24h] [bp-4Ch]@1
  void *ptr; // [sp+28h] [bp-48h]@1
  int v37; // [sp+2Ch] [bp-44h]@1
  int v38; // [sp+30h] [bp-40h]@1
  int v39; // [sp+34h] [bp-3Ch]@1
  int v40; // [sp+38h] [bp-38h]@1
  int v41; // [sp+3Ch] [bp-34h]@1
  int v42; // [sp+40h] [bp-30h]@1
  int v43; // [sp+44h] [bp-2Ch]@1
  int v44; // [sp+48h] [bp-28h]@1

  v2 = this;
  v4 = (char *)this + 32;
  v3 = *((_DWORD *)this + 8);
  v6 = (int *)(v4 + 8);
  v5 = *((_DWORD *)v4 + 2);
  v42 = v3 - 80;
  v43 = 0;
  v44 = v5 - 80;
  v7 = *((_WORD *)a2 + 12);
  v39 = v3 + 80;
  v40 = v7 - 1;
  v41 = v5 + 80;
  v37 = 0;
  v38 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  ptr = 0;
  StructureBlockEntity::getNearbyStructureBlocks((int)&v39, a2, (int)&ptr, (int)&v42, (int)&v39);
  StructureBlockEntity::filterRelatedCornerBlocks(v2, (int)&v33, (unsigned __int64 *)&ptr);
  v8 = v33;
  v9 = 0;
  v32 = v34;
  if ( v34 - v33 )
  {
    if ( (unsigned int)(v34 - v33) < 2 )
    {
      v12 = (BlockEntity *)((char *)v2 + 36);
    }
    else
      v10 = v33;
      v11 = BlockEntity::getPosition(*v33);
      v4 = v11;
      v6 = (int *)(v11 + 8);
      v12 = (BlockEntity *)(v11 + 4);
      v8 = v10;
    v13 = *(_DWORD *)v12;
    v14 = *(_DWORD *)v4;
    v15 = *v6;
    v29 = v2;
    if ( v8 == v32 )
      v30 = v8;
      v16 = *(_DWORD *)v4;
      v31 = *(_QWORD *)&v15;
      v17 = *v6;
      v18 = *(_DWORD *)v12;
      v19 = v14;
      v20 = v8;
      do
      {
        v21 = BlockEntity::getPosition(*v20);
        v22 = *(_QWORD *)v21;
        v23 = *((_DWORD *)v21 + 2);
        if ( (signed int)v22 >= v14 )
        {
          if ( (signed int)v22 > v19 )
          {
            v16 = v22;
            v19 = v22;
          }
        }
        else
          v14 = v22;
        if ( SHIDWORD(v22) >= v13 )
          HIDWORD(v31) = v22;
          if ( SHIDWORD(v22) > v18 )
            v18 = HIDWORD(v22);
          v13 = HIDWORD(v22);
        if ( v23 >= v15 )
          v24 = v31;
          if ( v23 > v17 )
            v24 = v23;
          LODWORD(v31) = v24;
            v17 = v23;
          v15 = v23;
        ++v20;
      }
      while ( v32 != v20 );
    if ( v16 - v14 < 2 || HIDWORD(v31) - v13 < 2 || (signed int)v31 - v15 < 2 )
      v9 = 0;
      LODWORD(v25) = HIDWORD(v31) - v13 - 1;
      HIDWORD(v25) = v31 - v15 - 1;
      v26 = *((_QWORD *)v29 + 4) >> 32;
      v27 = v15 + 1 - *((_DWORD *)v29 + 10);
      *((_DWORD *)v29 + 52) = v14 + 1 - *((_QWORD *)v29 + 4);
      *((_DWORD *)v29 + 53) = v13 + 1 - v26;
      *((_DWORD *)v29 + 54) = v27;
      *((_DWORD *)v29 + 55) = v16 - v14 - 1;
      *((_QWORD *)v29 + 28) = v25;
      BlockEntity::setChanged(v29);
      v9 = 1;
    v8 = v30;
  }
  if ( v8 )
    operator delete(v8);
  if ( ptr )
    operator delete(ptr);
  return v9;
}


char *__fastcall StructureBlockEntity::getStructureData(StructureBlockEntity *this)
{
  return (char *)this + 104;
}


int __fastcall StructureBlockEntity::_validateOffset(int result)
{
  int v1; // r1@1
  int v2; // r3@1
  int v3; // r2@1
  int v4; // lr@7
  int v5; // r4@7
  int v6; // r2@11
  int v7; // r5@13
  int v8; // r2@13

  v1 = *(_QWORD *)(result + 208) >> 32;
  v2 = *(_QWORD *)(result + 208);
  v3 = *(_DWORD *)(result + 216);
  if ( StructureBlockEntity::MAX_STRUCTURE_OFFSET < v2 )
    v2 = StructureBlockEntity::MAX_STRUCTURE_OFFSET;
  if ( unk_280FFCC < v1 )
    v1 = unk_280FFCC;
  if ( dword_280FFD0 < v3 )
    v3 = dword_280FFD0;
  *(_DWORD *)(result + 208) = v2;
  *(_DWORD *)(result + 212) = v1;
  *(_DWORD *)(result + 216) = v3;
  v4 = unk_280FFC0;
  v5 = dword_280FFC4;
  if ( v2 < StructureBlockEntity::MIN_STRUCTURE_OFFSET )
    v2 = StructureBlockEntity::MIN_STRUCTURE_OFFSET;
  if ( v3 < v5 )
    v3 = v5;
  v6 = *(_DWORD *)(result + 36);
  if ( v1 < v4 )
    v1 = v4;
  v7 = 256 - v6;
  v8 = -v6;
  if ( v1 <= v8 )
    v1 = v8;
  if ( v1 >= v7 - *(_DWORD *)(result + 224) )
    v1 = v7 - *(_DWORD *)(result + 224);
  return result;
}


int __fastcall StructureBlockEntity::calculateEnclosingBoundingBox(int a1, int a2, unsigned __int64 *a3)
{
  int v3; // r10@1
  unsigned __int64 *v4; // r5@1
  BlockEntity **v5; // r6@1
  BlockEntity **v6; // r9@1
  char *v7; // r0@2
  int *v8; // r2@2
  int *v9; // r7@2
  int v10; // r11@4
  signed int v11; // r7@4
  int result; // r0@4
  int v13; // r1@4
  int v14; // r5@5
  int v15; // r8@5
  signed int v16; // r4@5
  char *v17; // r0@6
  __int64 v18; // kr10_8@6
  int v19; // [sp+0h] [bp-28h]@6

  v3 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v4 = a3;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  v6 = (BlockEntity **)(*a3 >> 32);
  v5 = (BlockEntity **)*a3;
  if ( (unsigned int)(v6 - v5) < 2 )
  {
    v8 = (int *)(a2 + 40);
    v9 = (int *)(a2 + 36);
    v7 = (char *)(a2 + 32);
  }
  else
    v7 = BlockEntity::getPosition(*v5);
    v6 = (BlockEntity **)(*v4 >> 32);
    v5 = (BlockEntity **)*v4;
    v8 = (int *)(v7 + 8);
    v9 = (int *)(v7 + 4);
  v10 = *v9;
  v11 = *(_DWORD *)v7;
  result = v3 + 8;
  v13 = *v8;
  *(_DWORD *)v3 = v11;
  *(_DWORD *)(v3 + 4) = v10;
  *(_DWORD *)result = v13;
  *(_DWORD *)(result + 4) = v11;
  *(_DWORD *)(result + 8) = v10;
  *(_DWORD *)(v3 + 20) = v13;
  if ( v5 != v6 )
    v14 = v13;
    v15 = v10;
    v16 = v11;
    do
    {
      v19 = v13;
      v17 = BlockEntity::getPosition(*v5);
      v18 = *(_QWORD *)v17;
      result = *((_DWORD *)v17 + 2);
      if ( (signed int)v18 >= v16 )
      {
        if ( (signed int)v18 > v11 )
        {
          *(_DWORD *)(v3 + 12) = v18;
          v11 = v18;
        }
      }
      else
        *(_DWORD *)v3 = v18;
        v16 = v18;
      if ( SHIDWORD(v18) >= v15 )
        if ( SHIDWORD(v18) > v10 )
          *(_DWORD *)(v3 + 16) = HIDWORD(v18);
          v10 = HIDWORD(v18);
        *(_DWORD *)(v3 + 4) = HIDWORD(v18);
        v15 = HIDWORD(v18);
      v13 = v19;
      if ( result >= v14 )
        if ( result > v19 )
          *(_DWORD *)(v3 + 20) = result;
          v13 = result;
        *(_DWORD *)(v3 + 8) = result;
        v14 = result;
      ++v5;
    }
    while ( v6 != v5 );
  return result;
}


char *__fastcall StructureBlockEntity::getStructureSettings(StructureBlockEntity *this)
{
  return (char *)this + 240;
}


int __fastcall StructureBlockEntity::setStructureOffset(int result, const BlockPos *a2)
{
  int v2; // r3@1
  int v3; // r2@1
  int v4; // r1@1
  int v5; // lr@7
  int v6; // r4@7
  int v7; // r1@11
  int v8; // r5@13
  int v9; // r1@13

  v2 = *(_DWORD *)a2;
  *(_DWORD *)(result + 208) = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 212) = v3;
  v4 = *((_DWORD *)a2 + 2);
  *(_DWORD *)(result + 216) = v4;
  if ( StructureBlockEntity::MAX_STRUCTURE_OFFSET < v2 )
    v2 = StructureBlockEntity::MAX_STRUCTURE_OFFSET;
  if ( unk_280FFCC < v3 )
    v3 = unk_280FFCC;
  if ( dword_280FFD0 < v4 )
    v4 = dword_280FFD0;
  *(_DWORD *)(result + 208) = v2;
  v5 = unk_280FFC0;
  v6 = dword_280FFC4;
  if ( v2 < StructureBlockEntity::MIN_STRUCTURE_OFFSET )
    v2 = StructureBlockEntity::MIN_STRUCTURE_OFFSET;
  if ( v4 < v6 )
    v4 = v6;
  v7 = *(_DWORD *)(result + 36);
  if ( v3 < v5 )
    v3 = v5;
  v8 = 256 - v7;
  v9 = -v7;
  if ( v3 <= v9 )
    v3 = v9;
  if ( v3 >= v8 - *(_DWORD *)(result + 224) )
    v3 = v8 - *(_DWORD *)(result + 224);
  return result;
}


void __fastcall StructureBlockEntity::load(StructureBlockEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  StructureBlockEntity *v3; // r4@1
  int v4; // r0@1
  void *v5; // r0@1
  void *v6; // r0@2
  void *v7; // r0@3
  void *v8; // r0@4
  void *v9; // r0@5
  void *v10; // r0@6
  void *v11; // r0@7
  int *v12; // r0@8
  void *v13; // r0@8
  int *v14; // r0@9
  void *v15; // r0@9
  void *v16; // r0@10
  void *v17; // r0@11
  void *v18; // r0@12
  int v19; // r0@13
  void *v20; // r0@13
  int v21; // r0@14
  void *v22; // r0@14
  Rotation v23; // r0@15
  void *v24; // r0@15
  int v25; // r0@16
  void *v26; // r0@16
  void *v27; // r0@17
  void *v28; // r0@18
  unsigned int v29; // r0@19
  int v30; // r0@19
  int v31; // r2@19
  int v32; // r3@19
  int v33; // r5@19
  int v34; // r7@19
  unsigned int *v35; // r2@20
  signed int v36; // r1@22
  unsigned int *v37; // r2@24
  signed int v38; // r1@26
  unsigned int *v39; // r2@28
  signed int v40; // r1@30
  unsigned int *v41; // r2@32
  signed int v42; // r1@34
  unsigned int *v43; // r2@36
  signed int v44; // r1@38
  unsigned int *v45; // r2@40
  signed int v46; // r1@42
  unsigned int *v47; // r2@44
  signed int v48; // r1@46
  unsigned int *v49; // r2@48
  signed int v50; // r1@50
  unsigned int *v51; // r2@52
  signed int v52; // r1@54
  unsigned int *v53; // r2@56
  signed int v54; // r1@58
  unsigned int *v55; // r2@60
  signed int v56; // r1@62
  unsigned int *v57; // r2@64
  signed int v58; // r1@66
  unsigned int *v59; // r2@68
  signed int v60; // r1@70
  unsigned int *v61; // r2@72
  signed int v62; // r1@74
  unsigned int *v63; // r2@76
  signed int v64; // r1@78
  unsigned int *v65; // r2@80
  signed int v66; // r1@82
  unsigned int *v67; // r2@84
  signed int v68; // r1@86
  unsigned int *v69; // r2@88
  signed int v70; // r1@90
  int v71; // [sp+4h] [bp-ACh]@18
  int v72; // [sp+Ch] [bp-A4h]@17
  int v73; // [sp+14h] [bp-9Ch]@16
  int v74; // [sp+1Ch] [bp-94h]@15
  int v75; // [sp+24h] [bp-8Ch]@14
  int v76; // [sp+2Ch] [bp-84h]@13
  int v77; // [sp+34h] [bp-7Ch]@12
  int v78; // [sp+3Ch] [bp-74h]@11
  int v79; // [sp+44h] [bp-6Ch]@10
  int v80; // [sp+4Ch] [bp-64h]@9
  int v81; // [sp+54h] [bp-5Ch]@8
  int v82; // [sp+5Ch] [bp-54h]@7
  int v83; // [sp+64h] [bp-4Ch]@6
  int v84; // [sp+6Ch] [bp-44h]@5
  int v85; // [sp+74h] [bp-3Ch]@4
  int v86; // [sp+7Ch] [bp-34h]@3
  int v87; // [sp+84h] [bp-2Ch]@2
  int v88; // [sp+8Ch] [bp-24h]@1

  v2 = a2;
  v3 = this;
  BlockEntity::load(this, a2);
  sub_21E94B4((void **)&v88, "data");
  v4 = CompoundTag::getInt((int)v2, (const void **)&v88);
  BlockEntity::setData(v3, v4);
  v5 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
  {
    v35 = (unsigned int *)(v88 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
    }
    else
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v87, "xStructureOffset");
  *((_DWORD *)v3 + 28) = CompoundTag::getInt((int)v2, (const void **)&v87);
  v6 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v87 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v86, "yStructureOffset");
  *((_DWORD *)v3 + 29) = CompoundTag::getInt((int)v2, (const void **)&v86);
  v7 = (void *)(v86 - 12);
  if ( (int *)(v86 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v86 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v85, "zStructureOffset");
  *((_DWORD *)v3 + 30) = CompoundTag::getInt((int)v2, (const void **)&v85);
  v8 = (void *)(v85 - 12);
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v85 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v84, "xStructureSize");
  *((_DWORD *)v3 + 31) = CompoundTag::getInt((int)v2, (const void **)&v84);
  v9 = (void *)(v84 - 12);
  if ( (int *)(v84 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v84 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v83, "yStructureSize");
  *((_DWORD *)v3 + 32) = CompoundTag::getInt((int)v2, (const void **)&v83);
  v10 = (void *)(v83 - 12);
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v83 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v82, "zStructureSize");
  *((_DWORD *)v3 + 33) = CompoundTag::getInt((int)v2, (const void **)&v82);
  v11 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v82 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v81, "structureName");
  v12 = (int *)CompoundTag::getString((int)v2, (const void **)&v81);
  EntityInteraction::setInteractText((int *)v3 + 26, v12);
  v13 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v81 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v80, "metadata");
  v14 = (int *)CompoundTag::getString((int)v2, (const void **)&v80);
  EntityInteraction::setInteractText((int *)v3 + 27, v14);
  v15 = (void *)(v80 - 12);
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v80 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v79, "ignoreEntities");
  *((_BYTE *)v3 + 136) = CompoundTag::getBoolean((int)v2, (const void **)&v79);
  v16 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v79 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v78, "includePlayers");
  *((_BYTE *)v3 + 138) = CompoundTag::getBoolean((int)v2, (const void **)&v78);
  v17 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v78 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v77, "showAir");
  *((_BYTE *)v3 + 139) = CompoundTag::getBoolean((int)v2, (const void **)&v77);
  v18 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v77 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v76, "settingsIntegrity");
  v19 = CompoundTag::getFloat((int)v2, (const void **)&v76);
  StructureSettings::setIntegrity((StructureBlockEntity *)((char *)v3 + 144), *(float *)&v19);
  v20 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v76 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v75, "settingsMirror");
  v21 = CompoundTag::getInt((int)v2, (const void **)&v75);
  StructureSettings::setMirror((int)v3 + 144, v21);
  v22 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v75 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v74, "settingsRotation");
  v23 = CompoundTag::getInt((int)v2, (const void **)&v74);
  StructureSettings::setRotation((StructureBlockEntity *)((char *)v3 + 144), v23);
  v24 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v74 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v24);
  sub_21E94B4((void **)&v73, "settingsSeed");
  v25 = CompoundTag::getInt((int)v2, (const void **)&v73);
  StructureSettings::setSeed((StructureBlockEntity *)((char *)v3 + 144), v25);
  v26 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v73 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v26);
  sub_21E94B4((void **)&v72, "showBoundingBox");
  *((_BYTE *)v3 + 296) = CompoundTag::getBoolean((int)v2, (const void **)&v72);
  v27 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v72 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  sub_21E94B4((void **)&v71, "isPowered");
  *((_BYTE *)v3 + 297) = CompoundTag::getBoolean((int)v2, (const void **)&v71);
  v28 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v71 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  EntityInteraction::setInteractText((int *)v3 + 50, (int *)v3 + 26);
  EntityInteraction::setInteractText((int *)v3 + 51, (int *)v3 + 27);
  *((_DWORD *)v3 + 52) = *((_DWORD *)v3 + 28);
  *((_DWORD *)v3 + 53) = *((_DWORD *)v3 + 29);
  *((_DWORD *)v3 + 54) = *((_DWORD *)v3 + 30);
  *((_DWORD *)v3 + 55) = *((_DWORD *)v3 + 31);
  *((_DWORD *)v3 + 56) = *((_DWORD *)v3 + 32);
  *((_DWORD *)v3 + 57) = *((_DWORD *)v3 + 33);
  v29 = *((_DWORD *)v3 + 34);
  *((_BYTE *)v3 + 232) = v29;
  *((_BYTE *)v3 + 233) = BYTE1(v29);
  *((_BYTE *)v3 + 234) = v29 >> 16;
  *((_BYTE *)v3 + 235) = BYTE3(v29);
  v30 = (int)v3 + 240;
  v31 = *((_DWORD *)v3 + 37);
  v32 = *((_DWORD *)v3 + 38);
  v33 = *((_DWORD *)v3 + 39);
  v34 = *((_DWORD *)v3 + 40);
  *(_DWORD *)v30 = *((_DWORD *)v3 + 36);
  *(_DWORD *)(v30 + 4) = v31;
  *(_DWORD *)(v30 + 8) = v32;
  *(_DWORD *)(v30 + 12) = v33;
  *(_DWORD *)(v30 + 16) = v34;
  *((_QWORD *)v3 + 33) = *((_QWORD *)v3 + 21);
  *((_DWORD *)v3 + 68) = *((_DWORD *)v3 + 44);
  *((_DWORD *)v3 + 69) = *((_DWORD *)v3 + 45);
  *((_DWORD *)v3 + 70) = *((_DWORD *)v3 + 46);
  *((_DWORD *)v3 + 71) = *((_DWORD *)v3 + 47);
  *((_DWORD *)v3 + 72) = *((_DWORD *)v3 + 48);
  *((_DWORD *)v3 + 73) = *((_DWORD *)v3 + 49);
  StructureBlockEntity::updateCustomName(v3);
}


void __fastcall StructureBlockEntity::load(StructureBlockEntity *this, const CompoundTag *a2)
{
  StructureBlockEntity::load(this, a2);
}


void __fastcall StructureBlockEntity::setStructureSettings(StructureBlockEntity *this, const StructureSettings *a2)
{
  StructureBlockEntity::setStructureSettings(this, a2);
}


signed int __fastcall StructureBlockEntity::loadStructure(StructureBlockEntity *this, BlockSource *a2, const BlockPos *a3, int a4)
{
  BlockSource *v4; // r4@1
  StructureBlockEntity *v5; // r7@1
  int v6; // r9@1
  const BlockPos *v7; // r6@1
  Level *v8; // r0@1
  int v9; // r5@2
  Level *v10; // r0@5
  pthread_mutex_t *v11; // r10@5
  StructureTemplate *v12; // r11@5
  void *v13; // r0@9
  int *v14; // r0@13
  const void **v15; // r0@13
  const void **v16; // r0@13
  char *v17; // r0@13
  void *v18; // r0@14
  signed int v19; // r10@16
  signed int v20; // r12@16
  char *v21; // r0@18
  char *v22; // r0@19
  int v23; // r12@25
  int v24; // lr@25
  StructureSettings *v25; // r3@25
  int v26; // r10@25
  unsigned int v27; // r3@26
  int v28; // r6@26
  int v29; // r2@26
  int v30; // r8@26
  int v31; // r9@26
  int v32; // r11@26
  int v33; // r1@27
  int v34; // r2@27
  unsigned int *v36; // r2@29
  signed int v37; // r1@31
  unsigned int *v38; // r2@33
  signed int v39; // r1@35
  unsigned int *v40; // r2@37
  signed int v41; // r1@39
  unsigned int *v42; // r2@41
  signed int v43; // r1@43
  signed int v44; // r5@55
  signed int v45; // r5@58
  StructureTemplate *v46; // [sp+4h] [bp-74h]@25
  const BlockPos *v47; // [sp+8h] [bp-70h]@22
  int v48; // [sp+Ch] [bp-6Ch]@22
  int v49; // [sp+10h] [bp-68h]@27
  int v50; // [sp+14h] [bp-64h]@27
  int v51; // [sp+18h] [bp-60h]@27
  int v52; // [sp+1Ch] [bp-5Ch]@26
  int v53; // [sp+20h] [bp-58h]@26
  int v54; // [sp+24h] [bp-54h]@26
  int v55; // [sp+28h] [bp-50h]@22
  int v56; // [sp+2Ch] [bp-4Ch]@23
  int v57; // [sp+30h] [bp-48h]@24
  int v58; // [sp+34h] [bp-44h]@13
  char *v59; // [sp+38h] [bp-40h]@13
  char *v60; // [sp+3Ch] [bp-3Ch]@13
  char *v61; // [sp+40h] [bp-38h]@8
  int v62; // [sp+44h] [bp-34h]@5
  int v63; // [sp+48h] [bp-30h]@6
  int v64; // [sp+4Ch] [bp-2Ch]@7

  v4 = a2;
  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = (Level *)BlockSource::getLevel(a2);
  if ( Level::isClientSide(v8) )
  {
    v9 = 0;
  }
  else if ( BlockEntity::getData(v5) == 2 )
    if ( *(_DWORD *)(*((_DWORD *)v5 + 26) - 12) )
    {
      v10 = (Level *)BlockSource::getLevel(v4);
      v11 = (pthread_mutex_t *)Level::getStructureManager(v10);
      v12 = (StructureTemplate *)StructureManager::getOrCreate(v11, (int **)v5 + 26);
      StructureTemplate::getSize((StructureTemplate *)&v62, (int)v12, 0);
      if ( v62 != BlockPos::ZERO || v63 != unk_2816278 || v64 != dword_281627C )
        goto LABEL_61;
      v61 = (char *)&unk_28898CC;
      if ( *(_DWORD *)ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService) )
        v13 = ThreadLocal<AppPlatform *>::getLocal((int)&ServiceLocator<AppPlatform>::mService);
      else
        v13 = &ServiceLocator<AppPlatform>::mDefaultService;
      v14 = (int *)(*(int (**)(void))(**(_DWORD **)v13 + 264))();
      sub_21E8AF4(&v58, v14);
      sub_21E72F0((const void **)&v58, (const void **)&StructureBlockEntity::STRUCTURE_FILE_PREFIX);
      v15 = sub_21E72F0((const void **)&v58, (const void **)v5 + 26);
      v59 = (char *)*v15;
      *v15 = &unk_28898CC;
      v16 = sub_21E72F0((const void **)&v59, (const void **)&StructureBlockEntity::STRUCTURE_FILE_POSTFIX);
      v60 = (char *)*v16;
      *v16 = &unk_28898CC;
      v17 = v59 - 12;
      if ( (int *)(v59 - 12) != &dword_28898C0 )
      {
        v36 = (unsigned int *)(v59 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
        }
        else
          v37 = (*v36)--;
        if ( v37 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      }
      v18 = (void *)(v58 - 12);
      if ( (int *)(v58 - 12) != &dword_28898C0 )
        v38 = (unsigned int *)(v58 - 4);
            v39 = __ldrex(v38);
          while ( __strex(v39 - 1, v38) );
          v39 = (*v38)--;
        if ( v39 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      if ( GzipUtil::decompressNBTFromAssets((int)&v60, (char *)&v61) )
        v19 = StructureManager::load((int)v11, v12, (int *)&v61);
        v20 = 0;
        v20 = 1;
        v19 = 0;
      v21 = v60 - 12;
      if ( (int *)(v60 - 12) != &dword_28898C0 )
        v40 = (unsigned int *)(v60 - 4);
            v41 = __ldrex(v40);
          while ( __strex(v41 - 1, v40) );
          v41 = (*v40)--;
        if ( v41 <= 0 )
          v44 = v20;
          j_j_j_j__ZdlPv_9(v21);
          v20 = v44;
      v22 = v61 - 12;
      if ( (int *)(v61 - 12) != &dword_28898C0 )
        v42 = (unsigned int *)(v61 - 4);
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
          v43 = (*v42)--;
        if ( v43 <= 0 )
          v45 = v20;
          j_j_j_j__ZdlPv_9(v22);
          v20 = v45;
      if ( !(v19 ^ 1 | v20) )
LABEL_61:
        v47 = v7;
        v48 = v6;
        StructureTemplate::getSize((StructureTemplate *)&v55, (int)v12, 0);
        if ( *((_DWORD *)v5 + 31) != v55 || *((_DWORD *)v5 + 32) != v56 || *((_DWORD *)v5 + 33) != v57 )
          v9 = 0;
          StructureTemplate::getSize((StructureTemplate *)&v52, (int)v12, 0);
          *((_DWORD *)v5 + 31) = v52;
          *((_DWORD *)v5 + 32) = v53;
          *((_DWORD *)v5 + 33) = v54;
          EntityInteraction::setInteractText((int *)v5 + 50, (int *)v5 + 26);
          EntityInteraction::setInteractText((int *)v5 + 51, (int *)v5 + 27);
          v23 = *((_DWORD *)v5 + 28);
          *((_DWORD *)v5 + 52) = v23;
          v24 = *((_DWORD *)v5 + 29);
          *((_DWORD *)v5 + 53) = v24;
          v26 = *((_DWORD *)v5 + 30);
          *((_DWORD *)v5 + 54) = v26;
          *((_DWORD *)v5 + 55) = *((_DWORD *)v5 + 31);
          *((_DWORD *)v5 + 56) = *((_DWORD *)v5 + 32);
          *((_DWORD *)v5 + 57) = *((_DWORD *)v5 + 33);
          v27 = *((_DWORD *)v5 + 34);
          *((_BYTE *)v5 + 232) = v27;
          v46 = v12;
          *((_BYTE *)v5 + 233) = BYTE1(v27);
          *((_BYTE *)v5 + 234) = v27 >> 16;
          *((_BYTE *)v5 + 235) = BYTE3(v27);
          v25 = (StructureBlockEntity *)((char *)v5 + 144);
          v28 = (int)v5 + 240;
          v29 = *((_DWORD *)v5 + 37);
          v30 = *((_DWORD *)v5 + 38);
          v31 = *((_DWORD *)v5 + 39);
          v32 = *((_DWORD *)v5 + 40);
          *(_DWORD *)v28 = *((_DWORD *)v5 + 36);
          *(_DWORD *)(v28 + 4) = v29;
          *(_DWORD *)(v28 + 8) = v30;
          *(_DWORD *)(v28 + 12) = v31;
          *(_DWORD *)(v28 + 16) = v32;
          *((_QWORD *)v5 + 33) = *((_QWORD *)v5 + 21);
          *((_DWORD *)v5 + 68) = *((_DWORD *)v5 + 44);
          *((_DWORD *)v5 + 69) = *((_DWORD *)v5 + 45);
          *((_DWORD *)v5 + 70) = *((_DWORD *)v5 + 46);
          *((_DWORD *)v5 + 71) = *((_DWORD *)v5 + 47);
          *((_DWORD *)v5 + 72) = *((_DWORD *)v5 + 48);
          *((_DWORD *)v5 + 73) = *((_DWORD *)v5 + 49);
          if ( v48 )
            return v9;
          v24 = *((_QWORD *)v5 + 14) >> 32;
          v23 = *((_QWORD *)v5 + 14);
        v33 = *((_DWORD *)v47 + 1);
        v34 = *((_DWORD *)v47 + 2);
        v49 = *(_DWORD *)v47 + v23;
        v50 = v24 + v33;
        v51 = v26 + v34;
        StructureTemplate::placeInWorld(v46, v4, (const BlockPos *)&v49, v25);
        return 1;
      v9 = 0;
    }
    else
  else
  return v9;
}


void __fastcall StructureBlockEntity::getNearbyStructureBlocks(int a1, BlockPos *a2, int a3, int a4, int a5)
{
  int v5; // r5@1
  BlockPos *v6; // r6@1
  int v7; // r9@1
  int v8; // r4@1
  int v9; // r1@1
  int v10; // r0@2
  int v11; // r10@3
  int v12; // r1@4
  int v13; // r11@5
  BlockEntity *v14; // r0@6
  BlockEntity *v15; // r7@6
  __int64 v16; // r0@8
  char *v17; // r4@10
  unsigned int v18; // r2@10
  unsigned int v19; // r3@12
  unsigned int v20; // r5@12
  char *v21; // r7@19
  int v22; // ST04_4@20
  int v23; // r7@21
  int v24; // r0@23
  bool v25; // nf@26
  unsigned __int8 v26; // vf@26
  int v27; // [sp+0h] [bp-40h]@1
  int v28; // [sp+8h] [bp-38h]@1
  unsigned __int8 v29; // [sp+Ch] [bp-34h]@5
  int v30; // [sp+10h] [bp-30h]@5
  int v31; // [sp+14h] [bp-2Ch]@5
  int v32; // [sp+18h] [bp-28h]@5

  v5 = a5;
  v6 = a2;
  v7 = *(_DWORD *)a4;
  v8 = a3;
  v27 = a4;
  v9 = *(_DWORD *)a5;
  v28 = a3;
  if ( *(_DWORD *)a4 <= *(_DWORD *)a5 )
  {
    v10 = *(_DWORD *)(a5 + 4);
    do
    {
      v11 = *(_DWORD *)(v27 + 4);
      if ( v11 <= v10 )
      {
        do
        {
          v12 = *(_DWORD *)(v27 + 8);
          if ( v12 <= *(_DWORD *)(v5 + 8) )
          {
            do
            {
              v13 = v12;
              v30 = v7;
              v31 = v11;
              v32 = v12;
              BlockSource::getBlockID((BlockSource *)&v29, v6, (int)&v30);
              if ( Block::getBlockEntityType((Block *)Block::mBlocks[v29]) == 32 )
              {
                v14 = (BlockEntity *)BlockSource::getBlockEntity(v6, (const BlockPos *)&v30);
                v15 = v14;
                if ( v14 )
                {
                  if ( BlockEntity::getData(v14) == 3 )
                  {
                    v16 = *(_QWORD *)(v8 + 4);
                    if ( (_DWORD)v16 == HIDWORD(v16) )
                    {
                      HIDWORD(v16) = *(_DWORD *)v8;
                      v17 = 0;
                      v18 = ((signed int)v16 - HIDWORD(v16)) >> 2;
                      if ( !v18 )
                        v18 = 1;
                      v19 = v18 + (((signed int)v16 - HIDWORD(v16)) >> 2);
                      v20 = v18 + (((signed int)v16 - HIDWORD(v16)) >> 2);
                      if ( 0 != v19 >> 30 )
                        v20 = 0x3FFFFFFF;
                      if ( v19 < v18 )
                      if ( v20 )
                      {
                        if ( v20 >= 0x40000000 )
                          sub_21E57F4();
                        v17 = (char *)operator new(4 * v20);
                        LODWORD(v16) = *(_QWORD *)v28 >> 32;
                        HIDWORD(v16) = *(_QWORD *)v28;
                      }
                      *(_DWORD *)&v17[v16 - HIDWORD(v16)] = v15;
                      v21 = &v17[v16 - HIDWORD(v16)];
                      if ( ((signed int)v16 - HIDWORD(v16)) >> 2 )
                        v22 = HIDWORD(v16);
                        _aeabi_memmove4(v17, HIDWORD(v16));
                        HIDWORD(v16) = v22;
                      v23 = (int)(v21 + 4);
                      if ( HIDWORD(v16) )
                        operator delete((void *)HIDWORD(v16));
                      v24 = (int)&v17[4 * v20];
                      v5 = a5;
                      *(_DWORD *)v28 = v17;
                      v8 = v28;
                      *(_DWORD *)(v28 + 4) = v23;
                      *(_DWORD *)(v28 + 8) = v24;
                    }
                    else
                      *(_DWORD *)v16 = v15;
                      *(_DWORD *)(v8 + 4) += 4;
                  }
                }
              }
              v12 = v13 + 1;
            }
            while ( v13 < *(_DWORD *)(v5 + 8) );
            v10 = *(_DWORD *)(v5 + 4);
          }
          v26 = __OFSUB__(v11, v10);
          v25 = v11++ - v10 < 0;
        }
        while ( v25 ^ v26 );
        v9 = *(_DWORD *)v5;
      }
      v26 = __OFSUB__(v7, v9);
      v25 = v7++ - v9 < 0;
    }
    while ( v25 ^ v26 );
  }
}


int __fastcall StructureBlockEntity::_trigger(StructureBlockEntity *this, BlockSource *a2, const BlockPos *a3)
{
  const BlockPos *v3; // r4@1
  BlockSource *v4; // r5@1
  StructureBlockEntity *v5; // r6@1
  int result; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = this;
  result = BlockEntity::getData(this);
  if ( result == 2 )
  {
    result = j_j_j__ZN20StructureBlockEntity13loadStructureER11BlockSourceRK8BlockPosb(v5, v4, v3, 0);
  }
  else if ( result == 1 )
    result = j_j_j__ZN20StructureBlockEntity13saveStructureER11BlockSourceRK8BlockPosb(v5, v4, v3, 0);
  return result;
}


int __fastcall StructureBlockEntity::setShowAir(int result, bool a2)
{
  *(_BYTE *)(result + 235) = a2;
  return result;
}


int __fastcall StructureBlockEntity::setShowBoundingBox(int result, bool a2)
{
  *(_BYTE *)(result + 296) = a2;
  return result;
}


void __fastcall StructureBlockEntity::setStructureName(int a1, int *a2)
{
  StructureBlockEntity::setStructureName(a1, a2);
}


int __fastcall StructureBlockEntity::_validateSize(int result)
{
  int v1; // r1@1
  int v2; // r3@1
  int v3; // r2@1
  int v4; // lr@7
  int v5; // r4@7

  v1 = *(_QWORD *)(result + 220) >> 32;
  v2 = *(_QWORD *)(result + 220);
  v3 = *(_DWORD *)(result + 228);
  if ( StructureBlockEntity::MAX_STRUCTURE_SIZE < v2 )
    v2 = StructureBlockEntity::MAX_STRUCTURE_SIZE;
  if ( *(_DWORD *)algn_280FFB4 < v1 )
    v1 = *(_DWORD *)algn_280FFB4;
  if ( dword_280FFB8 < v3 )
    v3 = dword_280FFB8;
  *(_DWORD *)(result + 220) = v2;
  *(_DWORD *)(result + 224) = v1;
  *(_DWORD *)(result + 228) = v3;
  v4 = unk_280FFA8;
  v5 = dword_280FFAC;
  if ( v2 < StructureBlockEntity::MIN_STRUCTURE_SIZE )
    v2 = StructureBlockEntity::MIN_STRUCTURE_SIZE;
  if ( v3 < v5 )
    v3 = v5;
  if ( v1 < v4 )
    v1 = v4;
  if ( v1 >= 256 - *(_DWORD *)(result + 36) - *(_DWORD *)(result + 212) )
    v1 = 256 - *(_DWORD *)(result + 36) - *(_DWORD *)(result + 212);
  return result;
}


char *__fastcall StructureBlockEntity::getCustomName(StructureBlockEntity *this)
{
  return (char *)this + 300;
}


BlockEntity *__fastcall StructureBlockEntity::filterRelatedCornerBlocks(BlockEntity *result, int a2, unsigned __int64 *a3)
{
  BlockEntity **v3; // r6@1
  BlockEntity **v4; // r7@1
  int v5; // r4@1
  BlockEntity *i; // r5@1
  BlockEntity *v7; // r10@4
  const void *v8; // r1@4
  size_t v9; // r2@4
  __int64 v10; // r0@6
  void *v11; // r8@8
  char *v12; // r9@8 OVERLAPPED
  signed int v13; // r1@8
  unsigned int v14; // r2@8
  unsigned int v15; // r1@10
  unsigned int v16; // r11@10
  char *v17; // r10@17
  int v18; // r10@19 OVERLAPPED

  v3 = (BlockEntity **)(*a3 >> 32);
  v4 = (BlockEntity **)*a3;
  v5 = a2;
  for ( i = result; v3 != v4; ++v4 )
  {
    result = *v4;
    if ( *v4 )
    {
      result = (BlockEntity *)BlockEntity::getData(result);
      if ( result == (BlockEntity *)3 )
      {
        v7 = *v4;
        v8 = (const void *)*((_DWORD *)i + 26);
        result = (BlockEntity *)*((_DWORD *)*v4 + 26);
        v9 = *((_DWORD *)result - 3);
        if ( v9 == *((_DWORD *)v8 - 3) )
        {
          result = (BlockEntity *)memcmp((const void *)result, v8, v9);
          if ( !result )
          {
            v10 = *(_QWORD *)(v5 + 4);
            if ( (_DWORD)v10 == HIDWORD(v10) )
            {
              v11 = *(void **)v5;
              v12 = 0;
              v13 = v10 - *(_DWORD *)v5;
              v14 = v13 >> 2;
              if ( !(v13 >> 2) )
                v14 = 1;
              v15 = v14 + (v13 >> 2);
              v16 = v15;
              if ( 0 != v15 >> 30 )
                v16 = 0x3FFFFFFF;
              if ( v15 < v14 )
              if ( v16 )
              {
                if ( v16 >= 0x40000000 )
                  sub_21E57F4();
                v12 = (char *)operator new(4 * v16);
                LODWORD(v10) = *(_QWORD *)v5 >> 32;
                v11 = (void *)*(_QWORD *)v5;
                v7 = *v4;
              }
              *(_DWORD *)&v12[v10 - (_DWORD)v11] = v7;
              v17 = &v12[v10 - (_DWORD)v11];
              if ( ((signed int)v10 - (signed int)v11) >> 2 )
                _aeabi_memmove4(v12, v11);
              v18 = (int)(v17 + 4);
              if ( v11 )
                operator delete(v11);
              result = (BlockEntity *)&v12[4 * v16];
              *(_QWORD *)v5 = *(_QWORD *)&v12;
              *(_DWORD *)(v5 + 8) = result;
            }
            else
              *(_DWORD *)v10 = v7;
              result = (BlockEntity *)(*(_DWORD *)(v5 + 4) + 4);
              *(_DWORD *)(v5 + 4) = result;
          }
        }
      }
    }
  }
  return result;
}


int __fastcall StructureBlockEntity::acceptTempData(StructureBlockEntity *this)
{
  StructureBlockEntity *v1; // r6@1
  unsigned int v2; // r0@1
  int v3; // r1@1
  int v4; // r2@1
  int v5; // r3@1
  int v6; // r4@1
  int v7; // r5@1

  v1 = this;
  EntityInteraction::setInteractText((int *)this + 26, (int *)this + 50);
  EntityInteraction::setInteractText((int *)v1 + 27, (int *)v1 + 51);
  *((_DWORD *)v1 + 28) = *((_DWORD *)v1 + 52);
  *((_DWORD *)v1 + 29) = *((_DWORD *)v1 + 53);
  *((_DWORD *)v1 + 30) = *((_DWORD *)v1 + 54);
  *((_DWORD *)v1 + 31) = *((_DWORD *)v1 + 55);
  *((_DWORD *)v1 + 32) = *((_DWORD *)v1 + 56);
  *((_DWORD *)v1 + 33) = *((_DWORD *)v1 + 57);
  v2 = *((_DWORD *)v1 + 58);
  *((_BYTE *)v1 + 136) = v2;
  *((_BYTE *)v1 + 137) = BYTE1(v2);
  *((_BYTE *)v1 + 138) = v2 >> 16;
  *((_BYTE *)v1 + 139) = BYTE3(v2);
  v3 = (int)v1 + 144;
  v4 = *((_DWORD *)v1 + 61);
  v5 = *((_DWORD *)v1 + 62);
  v6 = *((_DWORD *)v1 + 63);
  v7 = *((_DWORD *)v1 + 64);
  *(_DWORD *)v3 = *((_DWORD *)v1 + 60);
  *(_DWORD *)(v3 + 4) = v4;
  *(_DWORD *)(v3 + 8) = v5;
  *(_DWORD *)(v3 + 12) = v6;
  *(_DWORD *)(v3 + 16) = v7;
  *((_QWORD *)v1 + 21) = *((_QWORD *)v1 + 33);
  *((_DWORD *)v1 + 44) = *((_DWORD *)v1 + 68);
  *((_DWORD *)v1 + 45) = *((_DWORD *)v1 + 69);
  *((_DWORD *)v1 + 46) = *((_DWORD *)v1 + 70);
  *((_DWORD *)v1 + 47) = *((_DWORD *)v1 + 71);
  *((_DWORD *)v1 + 48) = *((_DWORD *)v1 + 72);
  *((_DWORD *)v1 + 49) = *((_DWORD *)v1 + 73);
  return j_j_j__ZN11BlockEntity10setChangedEv_0(v1);
}


int __fastcall StructureBlockEntity::setStructureData(StructureBlockEntity *this, const StructureEditorData *a2)
{
  StructureBlockEntity *v2; // r4@1
  int *v3; // r8@1
  const StructureEditorData *v4; // r7@1
  unsigned int v5; // r0@1
  int v6; // r1@1
  int v7; // r2@1
  int v8; // r3@1
  int v9; // r5@1
  int v10; // r6@1
  unsigned int v11; // r0@1
  int v12; // r0@1
  int v13; // r2@1
  int v14; // r3@1
  int v15; // r6@1
  int v16; // r7@1

  v2 = this;
  v3 = (int *)((char *)this + 104);
  v4 = a2;
  EntityInteraction::setInteractText((int *)this + 26, (int *)a2);
  EntityInteraction::setInteractText((int *)v2 + 27, (int *)v4 + 1);
  *((_DWORD *)v2 + 28) = *((_DWORD *)v4 + 2);
  *((_DWORD *)v2 + 29) = *((_DWORD *)v4 + 3);
  *((_DWORD *)v2 + 30) = *((_DWORD *)v4 + 4);
  *((_DWORD *)v2 + 31) = *((_DWORD *)v4 + 5);
  *((_DWORD *)v2 + 32) = *((_DWORD *)v4 + 6);
  *((_DWORD *)v2 + 33) = *((_DWORD *)v4 + 7);
  v5 = *((_DWORD *)v4 + 8);
  *((_BYTE *)v2 + 136) = v5;
  *((_BYTE *)v2 + 137) = BYTE1(v5);
  *((_BYTE *)v2 + 138) = v5 >> 16;
  *((_BYTE *)v2 + 139) = BYTE3(v5);
  v6 = (int)v2 + 144;
  v7 = *((_DWORD *)v4 + 11);
  v8 = *((_DWORD *)v4 + 12);
  v9 = *((_DWORD *)v4 + 13);
  v10 = *((_DWORD *)v4 + 14);
  *(_DWORD *)v6 = *((_DWORD *)v4 + 10);
  *(_DWORD *)(v6 + 4) = v7;
  *(_DWORD *)(v6 + 8) = v8;
  *(_DWORD *)(v6 + 12) = v9;
  *(_DWORD *)(v6 + 16) = v10;
  *((_QWORD *)v2 + 21) = *((_QWORD *)v4 + 8);
  *((_DWORD *)v2 + 44) = *((_DWORD *)v4 + 18);
  *((_DWORD *)v2 + 45) = *((_DWORD *)v4 + 19);
  *((_DWORD *)v2 + 46) = *((_DWORD *)v4 + 20);
  *((_DWORD *)v2 + 47) = *((_DWORD *)v4 + 21);
  *((_DWORD *)v2 + 48) = *((_DWORD *)v4 + 22);
  *((_DWORD *)v2 + 49) = *((_DWORD *)v4 + 23);
  EntityInteraction::setInteractText((int *)v2 + 50, v3);
  EntityInteraction::setInteractText((int *)v2 + 51, (int *)v2 + 27);
  *((_DWORD *)v2 + 52) = *((_DWORD *)v2 + 28);
  *((_DWORD *)v2 + 53) = *((_DWORD *)v2 + 29);
  *((_DWORD *)v2 + 54) = *((_DWORD *)v2 + 30);
  *((_DWORD *)v2 + 55) = *((_DWORD *)v2 + 31);
  *((_DWORD *)v2 + 56) = *((_DWORD *)v2 + 32);
  *((_DWORD *)v2 + 57) = *((_DWORD *)v2 + 33);
  v11 = *((_DWORD *)v2 + 34);
  *((_BYTE *)v2 + 232) = v11;
  *((_BYTE *)v2 + 233) = BYTE1(v11);
  *((_BYTE *)v2 + 234) = v11 >> 16;
  *((_BYTE *)v2 + 235) = BYTE3(v11);
  v12 = (int)v2 + 240;
  v13 = *((_DWORD *)v2 + 37);
  v14 = *((_DWORD *)v2 + 38);
  v15 = *((_DWORD *)v2 + 39);
  v16 = *((_DWORD *)v2 + 40);
  *(_DWORD *)v12 = *((_DWORD *)v2 + 36);
  *(_DWORD *)(v12 + 4) = v13;
  *(_DWORD *)(v12 + 8) = v14;
  *(_DWORD *)(v12 + 12) = v15;
  *(_DWORD *)(v12 + 16) = v16;
  *((_QWORD *)v2 + 33) = *((_QWORD *)v2 + 21);
  *((_DWORD *)v2 + 68) = *((_DWORD *)v2 + 44);
  *((_DWORD *)v2 + 69) = *((_DWORD *)v2 + 45);
  *((_DWORD *)v2 + 70) = *((_DWORD *)v2 + 46);
  *((_DWORD *)v2 + 71) = *((_DWORD *)v2 + 47);
  *((_DWORD *)v2 + 72) = *((_DWORD *)v2 + 48);
  *((_DWORD *)v2 + 73) = *((_DWORD *)v2 + 49);
  return j_j_j__ZN11BlockEntity10setChangedEv_0(v2);
}


void __fastcall StructureBlockEntity::onChanged(StructureBlockEntity *this, BlockSource *a2)
{
  StructureBlockEntity::onChanged(this, a2);
}


void __fastcall StructureBlockEntity::updateCustomName(StructureBlockEntity *this)
{
  StructureBlockEntity *v1; // r4@1
  int v2; // r0@1
  __int64 v3; // r2@1
  void *v4; // r0@1
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  int v10; // [sp+0h] [bp-28h]@1
  int v11; // [sp+4h] [bp-24h]@1

  v1 = this;
  v2 = BlockEntity::getData(this);
  StructureBlockEntity::structureTypeToLOCString(&v10, v2);
  HIDWORD(v3) = *((_DWORD *)v1 + 26);
  LODWORD(v3) = v10;
  Util::format((Util *)&v11, "%s: %s", v3);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v1 + 75,
    &v11);
  v4 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v11 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
}


int __fastcall StructureBlockEntity::setIgnoreBlocks(int result, bool a2)
{
  *(_BYTE *)(result + 233) = a2;
  return result;
}


char *__fastcall StructureBlockEntity::getStructureOffset(StructureBlockEntity *this)
{
  return (char *)this + 208;
}


StructureBlockEntity *__fastcall StructureBlockEntity::~StructureBlockEntity(StructureBlockEntity *this)
{
  StructureBlockEntity *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  int v10; // r1@5
  void *v11; // r0@5
  unsigned int *v13; // r2@7
  signed int v14; // r1@9
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  unsigned int *v17; // r2@15
  signed int v18; // r1@17
  unsigned int *v19; // r2@19
  signed int v20; // r1@21
  unsigned int *v21; // r2@23
  signed int v22; // r1@25

  v1 = this;
  *(_DWORD *)this = &off_270A978;
  v2 = *((_DWORD *)this + 75);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 51);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v4 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 50);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v6 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 27);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v8 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = *((_DWORD *)v1 + 26);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v10 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  BlockEntity::~BlockEntity(v1);
  return v1;
}


int __fastcall StructureBlockEntity::setIncludePlayers(int result, bool a2)
{
  *(_BYTE *)(result + 234) = a2;
  return result;
}


void __fastcall StructureBlockEntity::setStructureSettings(StructureBlockEntity *this, const StructureSettings *a2)
{
  char *v2; // r12@1
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  int v6; // lr@1

  v2 = (char *)this + 240;
  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 3);
  v6 = *((_DWORD *)a2 + 4);
  *(_DWORD *)v2 = *(_DWORD *)a2;
  *((_DWORD *)v2 + 1) = v3;
  *((_DWORD *)v2 + 2) = v4;
  *((_DWORD *)v2 + 3) = v5;
  *((_DWORD *)v2 + 4) = v6;
  *((_QWORD *)this + 33) = *((_QWORD *)a2 + 3);
  *((_DWORD *)this + 68) = *((_DWORD *)a2 + 8);
  *((_DWORD *)this + 69) = *((_DWORD *)a2 + 9);
  *((_DWORD *)this + 70) = *((_DWORD *)a2 + 10);
  *((_DWORD *)this + 71) = *((_DWORD *)a2 + 11);
  *((_DWORD *)this + 72) = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 73) = *((_DWORD *)a2 + 13);
  j_j_j__ZN20StructureBlockEntity16updateCustomNameEv(this);
}


void __fastcall StructureBlockEntity::structureTypeToLOCString(int *a1, unsigned int a2)
{
  unsigned int v2; // r10@1
  char v3; // r0@1
  double v4; // r0@3
  void *v5; // r0@3
  void *v6; // r0@4
  void *v7; // r0@5
  void *v8; // r0@6
  void *v9; // r0@7
  int ***v10; // r0@9
  int **v11; // r7@10
  int *v12; // r4@10
  int **v13; // r5@12
  int **v14; // r0@16
  int *v15; // r6@18
  int v16; // r4@18
  int *v17; // r7@20
  bool v18; // zf@23
  unsigned int *v19; // r2@27
  signed int v20; // r1@29
  unsigned int *v21; // r2@31
  signed int v22; // r1@33
  unsigned int *v23; // r2@35
  signed int v24; // r1@37
  unsigned int *v25; // r2@39
  signed int v26; // r1@41
  unsigned int *v27; // r2@43
  signed int v28; // r1@45
  int *v29; // [sp+18h] [bp-80h]@1
  int v30; // [sp+28h] [bp-70h]@3
  int v31; // [sp+2Ch] [bp-6Ch]@3
  int v32; // [sp+30h] [bp-68h]@3
  int v33; // [sp+34h] [bp-64h]@3
  int v34; // [sp+38h] [bp-60h]@3
  int v35; // [sp+3Ch] [bp-5Ch]@3
  int v36; // [sp+40h] [bp-58h]@3
  int v37; // [sp+44h] [bp-54h]@3
  int v38; // [sp+48h] [bp-50h]@3
  int v39; // [sp+4Ch] [bp-4Ch]@3
  char v40; // [sp+50h] [bp-48h]@3

  v29 = a1;
  v2 = a2;
  v3 = byte_280FFE8[0];
  __dmb();
  if ( !(v3 & 1) && j___cxa_guard_acquire(byte_280FFE8) )
  {
    v30 = 0;
    sub_21E94B4((void **)&v31, "structure_block.mode.data");
    v32 = 1;
    sub_21E94B4((void **)&v33, "structure_block.mode.save");
    v34 = 2;
    sub_21E94B4((void **)&v35, "structure_block.mode.load");
    v36 = 3;
    sub_21E94B4((void **)&v37, "structure_block.mode.corner");
    v38 = 5;
    sub_21E94B4((void **)&v39, "structure_block.mode.export");
    LODWORD(v4) = &dword_2810008;
    std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_Hashtable<std::pair<int const,std::string> const*>(
      v4,
      (unsigned int *)&v40,
      0);
    v5 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
    {
      v19 = (unsigned int *)(v39 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      }
      else
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    }
    v6 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v37 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    v7 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v35 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    v8 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v33 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    v9 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v31 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    _cxa_atexit(std::unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int const,std::string>>>::~unordered_map);
    j___cxa_guard_release(byte_280FFE8);
  }
  v10 = *(int ****)(dword_2810008 + 4 * (v2 % unk_281000C));
  if ( !v10 )
    goto LABEL_17;
  v11 = *v10;
  v12 = (*v10)[1];
  while ( v12 != (int *)v2 )
    v13 = (int **)*v11;
    if ( *v11 )
      v12 = v13[1];
      v10 = (int ***)v11;
      v11 = (int **)*v11;
      if ( (unsigned int)v13[1] % unk_281000C == v2 % unk_281000C )
        continue;
  if ( !v10 || (v14 = *v10) == 0 )
LABEL_17:
    v14 = *(int ***)(dword_2810008 + 4 * (4u % unk_281000C));
    if ( !v14 )
      goto LABEL_22;
    v15 = *v14;
    v16 = (*v14)[1];
    while ( v16 != 4 )
      v17 = (int *)*v15;
      if ( *v15 )
        v16 = v17[1];
        v14 = (int **)v15;
        v15 = (int *)*v15;
        if ( (unsigned int)v17[1] % unk_281000C == 4u % unk_281000C )
          continue;
    v18 = v14 == 0;
    if ( v14 )
      v14 = (int **)*v14;
      v18 = v14 == 0;
    if ( v18 )
LABEL_22:
      sub_21E5A84("_Map_base::at");
  I18n::get(v29, v14 + 2);
}


void __fastcall StructureBlockEntity::updateCustomName(StructureBlockEntity *this)
{
  StructureBlockEntity::updateCustomName(this);
}


void __fastcall StructureBlockEntity::structureTypeToLOCString(int *a1, unsigned int a2)
{
  StructureBlockEntity::structureTypeToLOCString(a1, a2);
}
