

int __fastcall TickingAreasManager::_addArea(int a1, Dimension *this, int a3, int a4, int a5)
{
  int v5; // r11@1
  int v6; // r10@1
  int *v7; // r4@1
  Dimension *v8; // r7@1
  int v9; // r5@1
  unsigned int v10; // r6@2
  TickingAreaListBase *v11; // r0@3
  int v12; // r0@3
  signed int v13; // r4@5
  unsigned __int64 *v14; // r1@8
  __int64 v15; // r2@8
  void *v16; // r0@11
  unsigned int *v17; // r2@12
  signed int v18; // r1@14
  unsigned int v19; // r0@17
  unsigned int v20; // r8@17
  int v21; // r11@17
  int v22; // t1@17
  unsigned int v23; // r5@17
  int v24; // r9@17
  unsigned int *v25; // r0@17
  unsigned int *v26; // r7@18
  int v27; // r6@18
  _DWORD *v28; // r4@20
  bool v29; // zf@23
  _DWORD *v30; // r0@27
  __int64 v31; // r0@28
  int v32; // r2@29
  int v33; // r3@29
  int v34; // r7@29
  int v35; // r3@29
  char *v36; // r0@31
  Level *v37; // r0@32
  int v38; // r4@32
  int v39; // r0@32
  char *v40; // r0@33
  unsigned int *v42; // r2@35
  signed int v43; // r1@37
  unsigned int *v44; // r2@39
  signed int v45; // r1@41
  Dimension *v46; // [sp+14h] [bp-9Ch]@8
  int v47; // [sp+18h] [bp-98h]@28
  int v48; // [sp+1Ch] [bp-94h]@28
  __int64 v49; // [sp+20h] [bp-90h]@28
  char v50; // [sp+28h] [bp-88h]@28
  int v51; // [sp+2Ch] [bp-84h]@29
  int v52; // [sp+30h] [bp-80h]@29
  int v53; // [sp+34h] [bp-7Ch]@29
  char *v54; // [sp+38h] [bp-78h]@29
  __int64 v55; // [sp+40h] [bp-70h]@29
  int v56; // [sp+48h] [bp-68h]@29
  int v57; // [sp+4Ch] [bp-64h]@29
  int v58; // [sp+50h] [bp-60h]@29
  int v59; // [sp+54h] [bp-5Ch]@29
  int v60; // [sp+58h] [bp-58h]@29
  int v61; // [sp+5Ch] [bp-54h]@29
  int v62; // [sp+60h] [bp-50h]@29
  int v63; // [sp+64h] [bp-4Ch]@29
  int v64; // [sp+68h] [bp-48h]@29
  int v65; // [sp+6Ch] [bp-44h]@29
  int v66; // [sp+70h] [bp-40h]@29
  int v67; // [sp+74h] [bp-3Ch]@29
  int v68; // [sp+78h] [bp-38h]@29
  __int16 v69; // [sp+7Ch] [bp-34h]@29
  char v70; // [sp+7Eh] [bp-32h]@29
  int v71; // [sp+80h] [bp-30h]@11
  char *v72; // [sp+84h] [bp-2Ch]@8

  v5 = a1;
  v6 = a4;
  v7 = (int *)a3;
  v8 = this;
  v9 = *(_DWORD *)(*(_DWORD *)a1 + 8);
  if ( v9 )
  {
    v10 = 0;
    do
    {
      v11 = (TickingAreaListBase *)Dimension::getTickingAreas(*(Dimension **)(v9 + 8));
      v12 = TickingAreaListBase::countStandaloneTickingAreas(v11);
      v9 = *(_DWORD *)v9;
      v10 += v12;
    }
    while ( v9 );
    if ( v10 > 9 )
      return 1;
  }
  if ( *(_DWORD *)(v6 + 36) > 100 )
    return 0;
  v72 = (char *)&unk_28898CC;
  v46 = v8;
  v14 = (unsigned __int64 *)Dimension::getTickingAreas(v8);
  if ( !*(_DWORD *)(*v7 - 12) )
    TickingAreaListBase::findUsableDefaultName((TickingAreaListBase *)&v71, v14, v15);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v72,
      &v71);
    v16 = (void *)(v71 - 12);
    if ( (int *)(v71 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v71 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      }
      else
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
LABEL_17:
    v19 = j_Dimension::getId(v8);
    v20 = v19;
    v22 = *(_DWORD *)(v5 + 4);
    v21 = v5 + 4;
    v23 = *(_DWORD *)(v21 + 4);
    v24 = v19 % *(_DWORD *)(v21 + 4);
    v25 = *(unsigned int **)(v22 + 4 * v24);
    if ( !v25 )
      goto LABEL_27;
    v26 = (unsigned int *)*v25;
    v27 = *(_DWORD *)(*v25 + 4);
    while ( v20 != v27 )
      v28 = (_DWORD *)*v26;
      if ( *v26 )
        v27 = v28[1];
        v25 = v26;
        v26 = (unsigned int *)*v26;
        if ( v28[1] % v23 == v24 )
          continue;
    v29 = v25 == 0;
    if ( v25 )
      v23 = *v25;
      v29 = *v25 == 0;
    if ( v29 )
LABEL_27:
      v30 = j_operator new(0x14u);
      *v30 = 0;
      v30[1] = v20;
      v30[2] = 0;
      v30[3] = 0;
      v30[4] = 0;
      v23 = std::_Hashtable<int,std::pair<int const,std::vector<PendingArea,std::allocator<PendingArea>>>,std::allocator<std::pair<int const,std::vector<PendingArea,std::allocator<PendingArea>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
              v21,
              v24,
              v20,
              (int)v30);
    j_Crypto::Random::generateUUID((int)&v47);
    PendingArea::createTickingArea((int)&v50, v49, v47, v48, v49, (int *)&v72, v6, a5);
    v31 = *(_QWORD *)(v23 + 12);
    if ( (_DWORD)v31 == HIDWORD(v31) )
      std::vector<PendingArea,std::allocator<PendingArea>>::_M_emplace_back_aux<PendingArea>(
        (unsigned __int64 *)(v23 + 8),
        (int)&v50);
    else
      v32 = v51;
      v33 = v52;
      v34 = v53;
      *(_DWORD *)v31 = *(_DWORD *)&v50;
      *(_DWORD *)(v31 + 4) = v32;
      *(_DWORD *)(v31 + 8) = v33;
      *(_DWORD *)(v31 + 12) = v34;
      *(_DWORD *)(v31 + 16) = v54;
      v54 = (char *)&unk_28898CC;
      *(_QWORD *)(v31 + 24) = v55;
      *(_DWORD *)(v31 + 32) = v56;
      *(_DWORD *)(v31 + 36) = v57;
      *(_DWORD *)(v31 + 40) = v58;
      *(_DWORD *)(v31 + 44) = v59;
      *(_DWORD *)(v31 + 48) = v60;
      *(_DWORD *)(v31 + 52) = v61;
      *(_DWORD *)(v31 + 56) = v62;
      *(_DWORD *)(v31 + 60) = v63;
      *(_DWORD *)(v31 + 64) = v64;
      *(_DWORD *)(v31 + 68) = v65;
      *(_DWORD *)(v31 + 72) = v66;
      *(_DWORD *)(v31 + 76) = v67;
      LOWORD(v32) = v69;
      v35 = v68;
      *(_BYTE *)(v31 + 86) = v70;
      *(_WORD *)(v31 + 84) = v32;
      *(_DWORD *)(v31 + 80) = v35;
      *(_DWORD *)(v23 + 12) += 88;
    v36 = v54 - 12;
    if ( (int *)(v54 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v54 - 4);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v36);
    v37 = (Level *)j_Dimension::getLevel(v46);
    v38 = j_Level::getLevelStorage(v37);
    v39 = j_Dimension::getId(v46);
    TickingAreasManager::_savePendingArea(v39, v38, v39, *(_DWORD *)(v23 + 12) - 88);
    v13 = 3;
    goto LABEL_33;
  if ( !TickingAreaListBase::hasTickingAreaNamed(v14, (_BYTE **)v7) )
    EntityInteraction::setInteractText((int *)&v72, v7);
    goto LABEL_17;
  v13 = 2;
LABEL_33:
  v40 = v72 - 12;
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v72 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  return v13;
}


int __fastcall TickingAreasManager::addArea(int a1, Dimension *a2, int a3, int a4, int a5)
{
  Dimension *v5; // r10@1
  int v6; // r6@1
  int v7; // r9@1
  int v8; // r7@1
  int v9; // r4@1
  int v11; // [sp+8h] [bp-50h]@1
  int v12; // [sp+Ch] [bp-4Ch]@1
  int v13; // [sp+10h] [bp-48h]@1
  int v14; // [sp+14h] [bp-44h]@1
  int v15; // [sp+18h] [bp-40h]@1
  int v16; // [sp+1Ch] [bp-3Ch]@1
  int v17; // [sp+20h] [bp-38h]@1
  int v18; // [sp+24h] [bp-34h]@1
  int v19; // [sp+28h] [bp-30h]@1
  int v20; // [sp+2Ch] [bp-2Ch]@1
  int v21; // [sp+30h] [bp-28h]@1
  int v22; // [sp+34h] [bp-24h]@1

  v5 = a2;
  v6 = a1;
  v7 = a3;
  v8 = *(_DWORD *)a4;
  v9 = *(_DWORD *)(a4 + 8);
  j___aeabi_memclr8((int)&v11, 36);
  v22 = 16;
  v11 = (v8 - a5) >> 4;
  v12 = 0;
  v13 = (v9 - a5) >> 4;
  v14 = (v8 + a5) >> 4;
  v15 = 0;
  v16 = (v9 + a5) >> 4;
  v17 = v14 - v11 + 1;
  v18 = 1;
  v19 = v16 - v13 + 1;
  v20 = (v16 - v13 + 1) * v17;
  v21 = (v16 - v13 + 1) * v17;
  return TickingAreasManager::_addArea(v6, v5, v7, (int)&v11, 1);
}


void __fastcall TickingAreasManager::_processRemoves(TickingAreasManager *this)
{
  int i; // r4@1

  for ( i = *(_DWORD *)(*(_DWORD *)this + 8); i; i = *(_DWORD *)i )
    Dimension::processTickingAreaRemoves(*(Dimension **)(i + 8));
}


void __fastcall TickingAreasManager::loadArea(int a1, const CompoundTag *a2, PendingArea **a3)
{
  int *v3; // r11@1
  int v4; // r10@1
  const CompoundTag *v5; // r5@1
  int v6; // r4@3
  unsigned int v7; // r0@3
  unsigned int v8; // r9@3
  int v9; // r4@3
  int v10; // r8@3
  int *v11; // r0@3
  int *v12; // r7@4
  int v13; // r5@4
  bool v14; // zf@9
  _DWORD *v15; // r0@13
  __int64 v16; // r0@14
  int v17; // r2@15
  int v18; // r3@15
  int v19; // r7@15
  int v20; // r3@15
  char *v21; // r0@17
  void *v22; // r0@18
  unsigned int *v23; // r2@20
  signed int v24; // r1@22
  unsigned int *v25; // r2@24
  signed int v26; // r1@26
  int *v27; // [sp+4h] [bp-8Ch]@3
  char v28; // [sp+8h] [bp-88h]@14
  int v29; // [sp+Ch] [bp-84h]@15
  int v30; // [sp+10h] [bp-80h]@15
  int v31; // [sp+14h] [bp-7Ch]@15
  char *v32; // [sp+18h] [bp-78h]@15
  __int64 v33; // [sp+20h] [bp-70h]@15
  int v34; // [sp+28h] [bp-68h]@15
  int v35; // [sp+2Ch] [bp-64h]@15
  int v36; // [sp+30h] [bp-60h]@15
  int v37; // [sp+34h] [bp-5Ch]@15
  int v38; // [sp+38h] [bp-58h]@15
  int v39; // [sp+3Ch] [bp-54h]@15
  int v40; // [sp+40h] [bp-50h]@15
  int v41; // [sp+44h] [bp-4Ch]@15
  int v42; // [sp+48h] [bp-48h]@15
  int v43; // [sp+4Ch] [bp-44h]@15
  int v44; // [sp+50h] [bp-40h]@15
  int v45; // [sp+54h] [bp-3Ch]@15
  int v46; // [sp+58h] [bp-38h]@15
  __int16 v47; // [sp+5Ch] [bp-34h]@15
  char v48; // [sp+5Eh] [bp-32h]@15
  int v49; // [sp+64h] [bp-2Ch]@3

  v3 = (int *)a3;
  v4 = a1;
  v5 = a2;
  if ( *a3 && PendingArea::validTag(*a3, a2) == 1 )
  {
    v6 = *v3;
    sub_21E94B4((void **)&v49, "Dimension");
    v27 = (int *)v5;
    v7 = j_CompoundTag::getInt(v6, (const void **)&v49);
    v8 = v7;
    v9 = *(_QWORD *)(v4 + 4);
    v10 = v7 % (unsigned int)(*(_QWORD *)(v4 + 4) >> 32);
    v11 = *(int **)(v9 + 4 * v10);
    if ( !v11 )
      goto LABEL_13;
    v12 = (int *)*v11;
    v13 = *(_DWORD *)(*v11 + 4);
    while ( v8 != v13 )
    {
      v9 = *v12;
      if ( *v12 )
      {
        v13 = *(_DWORD *)(v9 + 4);
        v11 = v12;
        v12 = (int *)*v12;
        if ( *(_DWORD *)(v9 + 4) % (unsigned int)(*(_QWORD *)(v4 + 4) >> 32) == v10 )
          continue;
      }
    }
    v14 = v11 == 0;
    if ( v11 )
      v9 = *v11;
      v14 = *v11 == 0;
    if ( v14 )
LABEL_13:
      v15 = j_operator new(0x14u);
      *v15 = 0;
      v15[1] = v8;
      v15[2] = 0;
      v15[3] = 0;
      v15[4] = 0;
      v9 = std::_Hashtable<int,std::pair<int const,std::vector<PendingArea,std::allocator<PendingArea>>>,std::allocator<std::pair<int const,std::vector<PendingArea,std::allocator<PendingArea>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
             v4 + 4,
             v10,
             v8,
             (int)v15);
    PendingArea::load((int)&v28, v27, *v3);
    v16 = *(_QWORD *)(v9 + 12);
    if ( (_DWORD)v16 == HIDWORD(v16) )
      std::vector<PendingArea,std::allocator<PendingArea>>::_M_emplace_back_aux<PendingArea>(
        (unsigned __int64 *)(v9 + 8),
        (int)&v28);
    else
      v17 = v29;
      v18 = v30;
      v19 = v31;
      *(_DWORD *)v16 = *(_DWORD *)&v28;
      *(_DWORD *)(v16 + 4) = v17;
      *(_DWORD *)(v16 + 8) = v18;
      *(_DWORD *)(v16 + 12) = v19;
      *(_DWORD *)(v16 + 16) = v32;
      v32 = (char *)&unk_28898CC;
      *(_QWORD *)(v16 + 24) = v33;
      *(_DWORD *)(v16 + 32) = v34;
      *(_DWORD *)(v16 + 36) = v35;
      *(_DWORD *)(v16 + 40) = v36;
      *(_DWORD *)(v16 + 44) = v37;
      *(_DWORD *)(v16 + 48) = v38;
      *(_DWORD *)(v16 + 52) = v39;
      *(_DWORD *)(v16 + 56) = v40;
      *(_DWORD *)(v16 + 60) = v41;
      *(_DWORD *)(v16 + 64) = v42;
      *(_DWORD *)(v16 + 68) = v43;
      *(_DWORD *)(v16 + 72) = v44;
      *(_DWORD *)(v16 + 76) = v45;
      LOWORD(v17) = v47;
      v20 = v46;
      *(_BYTE *)(v16 + 86) = v48;
      *(_WORD *)(v16 + 84) = v17;
      *(_DWORD *)(v16 + 80) = v20;
      *(_DWORD *)(v9 + 12) += 88;
    v21 = v32 - 12;
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v32 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
      else
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    v22 = (void *)(v49 - 12);
    if ( (int *)(v49 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v49 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
  }
}


void __fastcall TickingAreasManager::_requeueEntityArea(int a1, float a2, __int64 *a3, int a4, char a5, int a6)
{
  int v6; // r11@1
  Dimension *v7; // r4@1
  int v8; // r8@1
  __int64 *v9; // r10@1
  unsigned int v13; // r0@1
  unsigned int v14; // r4@1
  int v15; // r11@1
  int v16; // t1@1
  int v17; // r5@1
  int *v18; // r0@1
  int *v19; // r9@2
  int v20; // r7@2
  _DWORD *v22; // r0@11
  int v23; // r7@12
  int v24; // r1@12
  int v25; // r4@12
  __int64 v26; // kr00_8@13
  int v27; // r4@13
  int v28; // r2@19
  __int64 v29; // r2@22
  int v30; // r1@34
  int v31; // r2@34
  int v32; // r3@34
  int v33; // r1@34
  int v34; // r2@34
  int v35; // r3@34
  int v36; // r4@34
  int v37; // r5@34
  int v38; // r6@34
  int v39; // r1@34
  int v40; // r2@34
  int v41; // r3@34
  int v42; // r4@34
  int v43; // r5@34
  int v44; // r6@34
  int v45; // r2@34
  Level *v46; // r0@34
  int v47; // r4@34
  int v48; // r0@34
  int v49; // r2@36
  int v50; // r3@36
  int v51; // r7@36
  int v52; // r3@36
  Level *v53; // r0@38
  int v54; // r4@38
  int v55; // r0@38
  char *v56; // r0@39
  unsigned int *v57; // r2@41
  signed int v58; // r1@43
  int v59; // [sp+18h] [bp-98h]@0
  Dimension *v60; // [sp+1Ch] [bp-94h]@1
  int v61; // [sp+20h] [bp-90h]@1
  int v62; // [sp+24h] [bp-8Ch]@1
  int v63; // [sp+28h] [bp-88h]@1
  int v64; // [sp+2Ch] [bp-84h]@1
  char v65; // [sp+30h] [bp-80h]@1
  int v66; // [sp+34h] [bp-7Ch]@34
  int v67; // [sp+38h] [bp-78h]@34
  int v68; // [sp+3Ch] [bp-74h]@34
  char *v69; // [sp+40h] [bp-70h]@34
  __int64 v70; // [sp+48h] [bp-68h]@34
  int v71; // [sp+50h] [bp-60h]@34
  int v72; // [sp+54h] [bp-5Ch]@34
  int v73; // [sp+58h] [bp-58h]@34
  int v74; // [sp+5Ch] [bp-54h]@34
  int v75; // [sp+60h] [bp-50h]@34
  int v76; // [sp+64h] [bp-4Ch]@34
  int v77; // [sp+68h] [bp-48h]@34
  int v78; // [sp+6Ch] [bp-44h]@34
  int v79; // [sp+70h] [bp-40h]@34
  int v80; // [sp+74h] [bp-3Ch]@34
  int v81; // [sp+78h] [bp-38h]@34
  int v82; // [sp+7Ch] [bp-34h]@34
  int v83; // [sp+80h] [bp-30h]@34
  __int16 v84; // [sp+84h] [bp-2Ch]@34
  char v85; // [sp+86h] [bp-2Ah]@34

  v6 = a1;
  v7 = (Dimension *)LODWORD(a2);
  v8 = a4;
  v9 = a3;
  v60 = (Dimension *)LODWORD(a2);
  j_Crypto::Random::generateUUID((int)&v61);
  __asm
  {
    VLDR            S0, [SP,#0xB0+arg_4]
    VSTR            S0, [SP,#0xB0+var_98]
  }
  PendingArea::createEntityTickingArea((int)&v65, v63, v61, v62, v63, v64, *v9, v8, a5, v59);
  v13 = j_Dimension::getId(v7);
  v14 = v13;
  v16 = *(_DWORD *)(v6 + 4);
  v15 = v6 + 4;
  v17 = v13 % *(_DWORD *)(v15 + 4);
  v18 = *(int **)(v16 + 4 * v17);
  if ( !v18 )
    goto LABEL_11;
  v19 = (int *)*v18;
  v20 = *(_DWORD *)(*v18 + 4);
  while ( v14 != v20 )
    v8 = *v19;
    if ( *v19 )
    {
      v20 = *(_DWORD *)(v8 + 4);
      v18 = v19;
      v19 = (int *)*v19;
      if ( *(_DWORD *)(v8 + 4) % *(_DWORD *)(v15 + 4) == v17 )
        continue;
    }
  _ZF = v18 == 0;
  if ( v18 )
    v8 = *v18;
    _ZF = *v18 == 0;
  if ( _ZF )
LABEL_11:
    v22 = j_operator new(0x14u);
    *v22 = 0;
    v22[1] = v14;
    v22[2] = 0;
    v22[3] = 0;
    v22[4] = 0;
    v8 = std::_Hashtable<int,std::pair<int const,std::vector<PendingArea,std::allocator<PendingArea>>>,std::allocator<std::pair<int const,std::vector<PendingArea,std::allocator<PendingArea>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_insert_unique_node(
           v15,
           v17,
           v14,
           (int)v22);
  v23 = *(_DWORD *)(v8 + 8);
  v24 = *(_DWORD *)(v8 + 12);
  v25 = -1171354717 * ((v24 - v23) >> 3) >> 2;
  if ( v25 >= 1 )
    v26 = *v9;
    v27 = v25 + 1;
    while ( *(_QWORD *)(v23 + 24) != v26 )
      if ( *(_QWORD *)(v23 + 112) == v26 )
      {
        v23 += 88;
        goto LABEL_33;
      }
      if ( *(_QWORD *)(v23 + 200) == v26 )
        v23 += 176;
      if ( *(_QWORD *)(v23 + 288) == v26 )
        v23 += 264;
      --v27;
      v23 += 352;
      if ( v27 <= 1 )
        goto LABEL_19;
    goto LABEL_33;
LABEL_19:
  v28 = -1171354717 * ((v24 - v23) >> 3);
  if ( v28 == 1 )
    v29 = *v9;
LABEL_30:
    if ( *(_QWORD *)(v23 + 24) != v29 )
      goto LABEL_35;
  if ( v28 == 3 )
    if ( *(_QWORD *)(v23 + 24) == *v9 )
      goto LABEL_33;
    v23 += 88;
  else
    if ( v28 != 2 )
  if ( *(_QWORD *)(v23 + 24) != v29 )
    goto LABEL_30;
LABEL_33:
  if ( v23 != v24 )
    v30 = *(_DWORD *)(v23 + 4);
    v31 = *(_DWORD *)(v23 + 8);
    v32 = *(_DWORD *)(v23 + 12);
    *(_DWORD *)&v65 = *(_DWORD *)v23;
    v66 = v30;
    v67 = v31;
    v68 = v32;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)(v23 + 16),
      (int *)&v69);
    *(_QWORD *)(v23 + 24) = v70;
    v33 = v23 + 32;
    v34 = v72;
    v35 = v73;
    v36 = v74;
    v37 = v75;
    v38 = v76;
    *(_DWORD *)v33 = v71;
    *(_DWORD *)(v33 + 4) = v34;
    *(_DWORD *)(v33 + 8) = v35;
    *(_DWORD *)(v33 + 12) = v36;
    *(_DWORD *)(v33 + 16) = v37;
    *(_DWORD *)(v33 + 20) = v38;
    v39 = v23 + 56;
    v40 = v78;
    v41 = v79;
    v42 = v80;
    v43 = v81;
    v44 = v82;
    *(_DWORD *)v39 = v77;
    *(_DWORD *)(v39 + 4) = v40;
    *(_DWORD *)(v39 + 8) = v41;
    *(_DWORD *)(v39 + 12) = v42;
    *(_DWORD *)(v39 + 16) = v43;
    *(_DWORD *)(v39 + 20) = v44;
    LOWORD(v39) = v84;
    v45 = v83;
    *(_BYTE *)(v23 + 86) = v85;
    *(_WORD *)(v23 + 84) = v39;
    *(_DWORD *)(v23 + 80) = v45;
    v46 = (Level *)j_Dimension::getLevel(v60);
    v47 = j_Level::getLevelStorage(v46);
    v48 = j_Dimension::getId(v60);
    TickingAreasManager::_savePendingArea(v48, v47, v48, v23);
    goto LABEL_39;
LABEL_35:
  if ( v24 == *(_DWORD *)(v8 + 16) )
    std::vector<PendingArea,std::allocator<PendingArea>>::_M_emplace_back_aux<PendingArea>(
      (unsigned __int64 *)(v8 + 8),
      (int)&v65);
    v49 = v66;
    v50 = v67;
    v51 = v68;
    *(_DWORD *)v24 = *(_DWORD *)&v65;
    *(_DWORD *)(v24 + 4) = v49;
    *(_DWORD *)(v24 + 8) = v50;
    *(_DWORD *)(v24 + 12) = v51;
    *(_DWORD *)(v24 + 16) = v69;
    v69 = (char *)&unk_28898CC;
    *(_QWORD *)(v24 + 24) = v70;
    *(_DWORD *)(v24 + 32) = v71;
    *(_DWORD *)(v24 + 36) = v72;
    *(_DWORD *)(v24 + 40) = v73;
    *(_DWORD *)(v24 + 44) = v74;
    *(_DWORD *)(v24 + 48) = v75;
    *(_DWORD *)(v24 + 52) = v76;
    *(_DWORD *)(v24 + 56) = v77;
    *(_DWORD *)(v24 + 60) = v78;
    *(_DWORD *)(v24 + 64) = v79;
    *(_DWORD *)(v24 + 68) = v80;
    *(_DWORD *)(v24 + 72) = v81;
    *(_DWORD *)(v24 + 76) = v82;
    LOWORD(v49) = v84;
    v52 = v83;
    *(_BYTE *)(v24 + 86) = v85;
    *(_WORD *)(v24 + 84) = v49;
    *(_DWORD *)(v24 + 80) = v52;
    *(_DWORD *)(v8 + 12) += 88;
  v53 = (Level *)j_Dimension::getLevel(v60);
  v54 = j_Level::getLevelStorage(v53);
  v55 = j_Dimension::getId(v60);
  TickingAreasManager::_savePendingArea(v55, v54, v55, *(_DWORD *)(v8 + 12) - 88);
LABEL_39:
  v56 = v69 - 12;
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v69 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
    else
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v56);
}


void __fastcall TickingAreasManager::loadArea(int a1, const CompoundTag *a2, PendingArea **a3)
{
  TickingAreasManager::loadArea(a1, a2, a3);
}


int __fastcall TickingAreasManager::_processAdds(__int64 this)
{
  int v1; // r5@1
  unsigned int v6; // r4@3
  Dimension *v7; // r9@3
  int *v8; // r0@4
  int v9; // r2@6
  int v10; // r3@7
  int v11; // r11@12
  unsigned __int64 *v13; // r10@13
  int v14; // r7@15
  void *v15; // r5@15
  int v16; // r7@18
  void *v17; // r5@18
  __int64 v19; // kr00_8@21
  int v20; // r7@21
  int v26; // r6@23
  int v27; // r7@23
  void *v28; // r11@23
  unsigned __int64 v29; // kr08_8@23
  int v30; // r0@29
  int v31; // r0@30
  int v32; // r0@36
  int v33; // r10@51
  int *v34; // r4@52
  int v35; // r1@56
  int v36; // r2@56
  int v37; // r3@56
  int v38; // r1@56
  int v39; // r2@56
  int v40; // r3@56
  int v41; // r5@56
  int v42; // r6@56
  int v43; // r7@56
  int v44; // r1@56
  int v45; // r2@56
  int v46; // r3@56
  int v47; // r5@56
  int v48; // r6@56
  int v49; // r7@56
  int v50; // r2@56
  int v51; // r0@53
  int v52; // r1@60
  _DWORD *v53; // r0@60
  _DWORD *v54; // r2@61
  int v56; // [sp+Ch] [bp-6Ch]@0
  int v57; // [sp+18h] [bp-60h]@0
  int v58; // [sp+24h] [bp-54h]@2
  __int64 v59; // [sp+28h] [bp-50h]@1
  int v60; // [sp+30h] [bp-48h]@12
  int *v61; // [sp+34h] [bp-44h]@12
  int *v62; // [sp+38h] [bp-40h]@12
  void *v63; // [sp+3Ch] [bp-3Ch]@18
  void *v64; // [sp+40h] [bp-38h]@23
  void *v65; // [sp+44h] [bp-34h]@15

  v59 = this;
  v1 = *(_DWORD *)(this + 12);
  if ( !v1 )
    return this;
  __asm { VMOV.F32        S16, #0.5 }
  v58 = this + 4;
  do
  {
    v6 = *(_DWORD *)(v1 + 4);
    v7 = (Dimension *)j_Level::getDimension(SHIDWORD(v59), *(_DWORD *)(v1 + 4));
    if ( v7 )
    {
      v8 = (int *)(v1 + 12);
    }
    else
      LODWORD(this) = *(_DWORD *)(v1 + 12);
      HIDWORD(this) = *(_DWORD *)(v1 + 8);
      if ( HIDWORD(this) == (_DWORD)this )
        goto LABEL_67;
      v9 = 0;
      do
      {
        v10 = *(_BYTE *)(HIDWORD(this) + 85);
        HIDWORD(this) += 88;
        if ( v10 )
          ++v9;
      }
      while ( (_DWORD)this != HIDWORD(this) );
      if ( !v9 )
LABEL_67:
        v1 = *(_DWORD *)v1;
        continue;
      v7 = (Dimension *)j_Level::createDimension(SHIDWORD(v59), v6);
    v11 = *v8;
    v61 = v8;
    _R4 = *(_DWORD *)(v1 + 8);
    v62 = (int *)(v1 + 8);
    v60 = v1;
    if ( _R4 == *v8 )
      goto LABEL_29;
    do
      v13 = (unsigned __int64 *)(_R4 + 24);
      if ( (*(_DWORD *)(_R4 + 24) & *(_DWORD *)(_R4 + 28)) == -1 )
        v16 = Dimension::getTickingAreas(v7);
        v17 = j_operator new(0x218u);
        TickingArea::TickingArea(
          (int)v17,
          (int)v7,
          *(_QWORD *)_R4,
          *(_DWORD *)(_R4 + 8),
          *(_DWORD *)(_R4 + 12),
          _R4 + 16,
          _R4 + 32,
          *(_BYTE *)(_R4 + 84));
        v63 = v17;
        TickingAreaListBase::add(v16, (int *)&v63);
        if ( v63 )
          (*(void (**)(void))(*(_DWORD *)v63 + 4))();
        v63 = 0;
        goto LABEL_26;
      if ( *(_BYTE *)(_R4 + 85) )
        v14 = Dimension::getTickingAreas(v7);
        v15 = j_operator new(0x218u);
          (int)v15,
          v56,
          COERCE_FLOAT(*v13),
          *v13 >> 32);
        v65 = v15;
        TickingAreaListBase::add(v14, (int *)&v65);
        if ( v65 )
          (*(void (**)(void))(*(_DWORD *)v65 + 4))();
        v65 = 0;
LABEL_26:
        *(_BYTE *)(_R4 + 86) = 1;
        goto LABEL_27;
      _R5 = _R4 + 32;
      v19 = *(_QWORD *)(_R4 + 40);
      v20 = *(_DWORD *)(_R4 + 76);
      _R0 = (*(_DWORD *)(_R4 + 32) + HIDWORD(v19) + 1) * v20;
      _R1 = (v19 + *(_DWORD *)(_R4 + 52) + 1) * v20;
      __asm
        VMOV            S0, R0
        VMOV            S2, R1
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VMUL.F32        S0, S0, S16
        VMUL.F32        S2, S2, S16
        VMOV            R1, S0
        VMOV            R3, S2
      _R0 = j_Dimension::distanceToNearestPlayerSqr2D((int)v7, _R1, 0, _R3);
        VLDR            S2, [R5,#0x30]
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        v26 = v11;
        v27 = Dimension::getTickingAreas(v7);
        v28 = j_operator new(0x218u);
        v29 = *v13;
        __asm
        {
          VLDR            S0, [R4,#0x50]
          VSTR            S0, [SP,#0x78+var_60]
        }
          (int)v28,
          COERCE_FLOAT(_R4 + 32),
          *v13 >> 32,
          v57);
        v64 = v28;
        TickingAreaListBase::add(v27, (int *)&v64);
        v11 = v26;
        if ( v64 )
          (*(void (**)(void))(*(_DWORD *)v64 + 4))();
        v64 = 0;
LABEL_27:
      _R4 += 88;
    while ( v11 != _R4 );
    v11 = *v61;
    _R4 = *v62;
LABEL_29:
    v30 = -1171354717 * ((v11 - _R4) >> 3) >> 2;
    if ( v30 < 1 )
LABEL_36:
      v32 = -1171354717 * ((v11 - _R4) >> 3);
      if ( v32 != 1 )
        if ( v32 != 2 )
          if ( v32 != 3 )
          {
            _R4 = v11;
            goto LABEL_51;
          }
          if ( *(_BYTE *)(_R4 + 86) )
          _R4 += 88;
        if ( *(_BYTE *)(_R4 + 86) )
          goto LABEL_51;
        _R4 += 88;
      if ( !*(_BYTE *)(_R4 + 86) )
        _R4 = v11;
      v31 = v30 + 1;
      while ( !*(_BYTE *)(_R4 + 86) )
        if ( *(_BYTE *)(_R4 + 174) )
          break;
        if ( *(_BYTE *)(_R4 + 262) )
          _R4 += 176;
        if ( *(_BYTE *)(_R4 + 350) )
          _R4 += 264;
        --v31;
        _R4 += 352;
        if ( v31 <= 1 )
          goto LABEL_36;
LABEL_51:
    v33 = _R4;
    if ( _R4 == v11 )
      v33 = v11;
      v34 = v61;
LABEL_53:
      v51 = _R4 + 88;
      while ( 1 )
        _R4 = v51;
        if ( v11 == v51 )
        v51 += 88;
        if ( !*(_BYTE *)(_R4 + 86) )
          v35 = *(_DWORD *)(_R4 + 4);
          v36 = *(_DWORD *)(_R4 + 8);
          v37 = *(_DWORD *)(_R4 + 12);
          *(_DWORD *)v33 = *(_DWORD *)_R4;
          *(_DWORD *)(v33 + 4) = v35;
          *(_DWORD *)(v33 + 8) = v36;
          *(_DWORD *)(v33 + 12) = v37;
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)(v33 + 16),
            (int *)(_R4 + 16));
          *(_QWORD *)(v33 + 24) = *(_QWORD *)(_R4 + 24);
          v38 = v33 + 32;
          v39 = *(_DWORD *)(_R4 + 36);
          v40 = *(_DWORD *)(_R4 + 40);
          v41 = *(_DWORD *)(_R4 + 44);
          v42 = *(_DWORD *)(_R4 + 48);
          v43 = *(_DWORD *)(_R4 + 52);
          *(_DWORD *)v38 = *(_DWORD *)(_R4 + 32);
          *(_DWORD *)(v38 + 4) = v39;
          *(_DWORD *)(v38 + 8) = v40;
          *(_DWORD *)(v38 + 12) = v41;
          *(_DWORD *)(v38 + 16) = v42;
          *(_DWORD *)(v38 + 20) = v43;
          v44 = v33 + 56;
          v45 = *(_DWORD *)(_R4 + 60);
          v46 = *(_DWORD *)(_R4 + 64);
          v47 = *(_DWORD *)(_R4 + 68);
          v48 = *(_DWORD *)(_R4 + 72);
          v49 = *(_DWORD *)(_R4 + 76);
          *(_DWORD *)v44 = *(_DWORD *)(_R4 + 56);
          *(_DWORD *)(v44 + 4) = v45;
          *(_DWORD *)(v44 + 8) = v46;
          *(_DWORD *)(v44 + 12) = v47;
          *(_DWORD *)(v44 + 16) = v48;
          *(_DWORD *)(v44 + 20) = v49;
          LOWORD(v44) = *(_WORD *)(_R4 + 84);
          v50 = *(_DWORD *)(_R4 + 80);
          *(_BYTE *)(v33 + 86) = *(_BYTE *)(_R4 + 86);
          *(_WORD *)(v33 + 84) = v44;
          *(_DWORD *)(v33 + 80) = v50;
          v33 += 88;
          goto LABEL_53;
      v11 = *v61;
    std::vector<PendingArea,std::allocator<PendingArea>>::erase(v62, v33, v11);
    LODWORD(this) = *v34;
    if ( *v62 == *v34 )
      v52 = *(_DWORD *)(v60 + 4) % (unsigned int)(*(_QWORD *)(v59 + 4) >> 32);
      v53 = *(_DWORD **)(*(_QWORD *)(v59 + 4) + 4 * v52);
        v54 = v53;
        v53 = (_DWORD *)*v53;
      while ( v53 != (_DWORD *)v60 );
      LODWORD(this) = std::_Hashtable<int,std::pair<int const,std::vector<PendingArea,std::allocator<PendingArea>>>,std::allocator<std::pair<int const,std::vector<PendingArea,std::allocator<PendingArea>>>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_M_erase(
                        v58,
                        v52,
                        v54,
                        v60);
      v1 = this;
      v1 = *(_DWORD *)v60;
  }
  while ( v1 );
  return this;
}


int __fastcall TickingAreasManager::TickingAreasManager(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  unsigned int v4; // r0@1
  int v5; // r6@3
  void *v6; // r5@3
  int result; // r0@4

  v2 = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 1065353216;
  v3 = a1 + 20;
  *(_DWORD *)(a1 + 24) = 0;
  v4 = sub_21E6254(COERCE_DOUBLE(__PAIR__(10, a1 + 20)));
  *(_DWORD *)(v3 - 12) = v4;
  if ( v4 == 1 )
  {
    *(_DWORD *)(v2 + 28) = 0;
    v6 = (void *)(v2 + 28);
  }
  else
    if ( v4 >= 0x40000000 )
      sub_21E57F4();
    v5 = 4 * v4;
    v6 = j_operator new(4 * v4);
    j___aeabi_memclr4((int)v6, v5);
  result = v2;
  *(_DWORD *)(v2 + 4) = v6;
  return result;
}


void __fastcall TickingAreasManager::_savePendingArea(int a1, int a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r4@1
  int v6; // r5@1
  const void **v7; // r0@1
  char *v8; // r0@1
  void *v9; // r0@2
  unsigned int *v10; // r2@4
  signed int v11; // r1@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  char v14; // [sp+4h] [bp-1Ch]@1
  int v15; // [sp+20h] [bp+0h]@1
  char *v16; // [sp+24h] [bp+4h]@1

  v4 = a4;
  v5 = a2;
  v6 = a3;
  j_mce::UUID::asString((mce::UUID *)&v15);
  v7 = sub_21E82D8((const void **)&v15, 0, dword_2821C84, *(_BYTE **)(dword_2821C84 - 12));
  v16 = (char *)*v7;
  *v7 = &unk_28898CC;
  PendingArea::serialize((int)&v14, v4, v6);
  j_LevelStorage::saveData(v5, (int)&v16, (int)&v14);
  j_CompoundTag::~CompoundTag((CompoundTag *)&v14);
  v8 = v16 - 12;
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v11 = __ldrex(v10);
        __strex(v11 - 1, v10);
      }
      while ( &v15 );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
  v9 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v15 - 4);
        v13 = __ldrex(v12);
        __strex(v13 - 1, v12);
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


void __fastcall TickingAreasManager::_savePendingArea(int a1, int a2, int a3, int a4)
{
  TickingAreasManager::_savePendingArea(a1, a2, a3, a4);
}


void __fastcall TickingAreasManager::addEntityArea(TickingAreasManager *this, Dimension *a2, const Entity *a3)
{
  TickingAreasManager::addEntityArea(this, a2, a3);
}


int __fastcall TickingAreasManager::addArea(int a1, Dimension *a2, int a3, int a4, int a5)
{
  Dimension *v5; // r10@1
  int v6; // r7@1
  int v7; // r6@1
  int v8; // r9@1
  signed int v9; // r2@1
  int v10; // r3@1
  __int64 v11; // r0@1
  int v13; // [sp+8h] [bp-50h]@1
  int v14; // [sp+Ch] [bp-4Ch]@1
  int v15; // [sp+10h] [bp-48h]@1
  int v16; // [sp+14h] [bp-44h]@1
  int v17; // [sp+18h] [bp-40h]@1
  __int64 v18; // [sp+1Ch] [bp-3Ch]@1
  int v19; // [sp+24h] [bp-34h]@1
  int v20; // [sp+28h] [bp-30h]@1
  int v21; // [sp+2Ch] [bp-2Ch]@1
  int v22; // [sp+30h] [bp-28h]@1
  int v23; // [sp+34h] [bp-24h]@1

  v5 = a2;
  v6 = a1;
  v7 = a4;
  v8 = a3;
  j___aeabi_memclr8((int)&v13, 36);
  v23 = 16;
  v9 = *(_DWORD *)(v7 + 8);
  v10 = *(_DWORD *)a5 >> 4;
  LODWORD(v11) = *(_DWORD *)(a5 + 8) >> 4;
  HIDWORD(v11) = v10 - (*(_DWORD *)v7 >> 4) + 1;
  v13 = *(_DWORD *)v7 >> 4;
  v14 = 0;
  v15 = v9 >> 4;
  v16 = v10;
  v17 = 0;
  v18 = v11;
  v19 = 1;
  v20 = v11 - (v9 >> 4) + 1;
  v21 = v20 * HIDWORD(v11);
  v22 = v20 * HIDWORD(v11);
  return TickingAreasManager::_addArea(v6, v5, v8, (int)&v13, 0);
}


signed int __fastcall TickingAreasManager::hasActiveAreas(TickingAreasManager *this)
{
  int i; // r4@1
  TickingAreaListBase *v2; // r0@4

  for ( i = *(_DWORD *)(*(_DWORD *)this + 8); i; i = *(_DWORD *)i )
  {
    v2 = (TickingAreaListBase *)j_Dimension::getTickingAreasConst(*(Dimension **)(i + 8));
    if ( TickingAreaListBase::empty(v2) != 1 )
      return 1;
  }
  return 0;
}


signed int __fastcall TickingAreasManager::tick(signed int *a1, _QWORD *a2)
{
  signed int result; // r0@1
  _QWORD *v3; // r4@1
  int i; // r5@1
  unsigned __int64 *v5; // r0@3

  result = *a1;
  v3 = a2;
  for ( i = *(_DWORD *)(result + 8); i; i = *(_DWORD *)i )
  {
    v5 = (unsigned __int64 *)Dimension::getTickingAreas(*(Dimension **)(i + 8));
    result = TickingAreaListBase::tick(v5, v3);
  }
  return result;
}


void __fastcall TickingAreasManager::_requeueEntityArea(int a1, float a2, __int64 *a3, int a4, char a5, int a6)
{
  TickingAreasManager::_requeueEntityArea(a1, a2, a3, a4, a5, a6);
}


void __fastcall TickingAreasManager::addEntityArea(TickingAreasManager *this, Dimension *a2, const Entity *a3)
{
  Entity *v3; // r4@1
  TickingAreasManager *v4; // r9@1
  Dimension *v5; // r8@1
  TickWorldComponent *v6; // r6@1
  int v7; // r0@1
  int v8; // r5@1
  __int64 *v9; // r11@1
  int v10; // r4@1
  int v11; // r7@1
  int v12; // r0@1
  int v13; // [sp+8h] [bp-60h]@1
  int v14; // [sp+Ch] [bp-5Ch]@1
  int v15; // [sp+10h] [bp-58h]@1
  int v16; // [sp+14h] [bp-54h]@1
  int v17; // [sp+18h] [bp-50h]@1
  int v18; // [sp+1Ch] [bp-4Ch]@1
  int v19; // [sp+20h] [bp-48h]@1
  int v20; // [sp+24h] [bp-44h]@1
  int v21; // [sp+28h] [bp-40h]@1
  int v22; // [sp+2Ch] [bp-3Ch]@1
  int v23; // [sp+30h] [bp-38h]@1
  int v24; // [sp+34h] [bp-34h]@1
  int v25; // [sp+38h] [bp-30h]@1
  int v26; // [sp+40h] [bp-28h]@1

  v3 = a3;
  v4 = this;
  v5 = a2;
  v6 = (TickWorldComponent *)Entity::getTickWorldComponent(a3);
  v7 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 52))(v3);
  j_BlockPos::BlockPos((int)&v25, v7);
  v8 = TickWorldComponent::getChunkRadius(v6);
  v9 = (__int64 *)j_Entity::getUniqueID(v3);
  v10 = v25;
  v11 = v26;
  j___aeabi_memclr8((int)&v13, 36);
  v24 = 16;
  v13 = (v10 - 16 * v8) >> 4;
  v14 = 0;
  v15 = (v11 - 16 * v8) >> 4;
  v16 = (v10 + 16 * v8) >> 4;
  v17 = 0;
  v18 = (v11 + 16 * v8) >> 4;
  v19 = v16 - v13 + 1;
  v20 = 1;
  v21 = v18 - v15 + 1;
  v22 = v21 * v19;
  v23 = v21 * v19;
  LOBYTE(v8) = j_TickWorldComponent::isAlwaysActive(v6);
  v12 = j_TickWorldComponent::getMaxDistToPlayers(v6);
  TickingAreasManager::_requeueEntityArea((int)v4, *(float *)&v5, v9, (int)&v13, v8, v12);
}


int __fastcall TickingAreasManager::_processUpdates(TickingAreasManager *this)
{
  int result; // r0@1
  int i; // r4@1

  result = *(_DWORD *)this;
  for ( i = *(_DWORD *)(result + 8); i; i = *(_DWORD *)i )
    result = Dimension::processTickingAreaUpdates(*(Dimension **)(i + 8));
  return result;
}


int __fastcall TickingAreasManager::update(__int64 this)
{
  __int64 v1; // r4@1
  int i; // r6@1
  int result; // r0@4
  int j; // r4@4

  v1 = this;
  for ( i = *(_DWORD *)(*(_DWORD *)this + 8); i; i = *(_DWORD *)i )
    Dimension::processTickingAreaRemoves(*(Dimension **)(i + 8));
  TickingAreasManager::_processAdds(v1);
  result = *(_DWORD *)v1;
  for ( j = *(_DWORD *)(*(_DWORD *)v1 + 8); j; j = *(_DWORD *)j )
    result = Dimension::processTickingAreaUpdates(*(Dimension **)(j + 8));
  return result;
}


int __fastcall TickingAreasManager::countStandaloneTickingAreas(TickingAreasManager *this)
{
  int v1; // r4@1
  int v2; // r5@1
  TickingAreaListBase *v3; // r0@2
  int v4; // r0@2

  v1 = 0;
  v2 = *(_DWORD *)(*(_DWORD *)this + 8);
  while ( v2 )
  {
    v3 = (TickingAreaListBase *)Dimension::getTickingAreas(*(Dimension **)(v2 + 8));
    v4 = TickingAreaListBase::countStandaloneTickingAreas(v3);
    v2 = *(_DWORD *)v2;
    v1 += v4;
  }
  return v1;
}
