

void __fastcall EndDragonFight::updateCrystalCount(EndDragonFight *this)
{
  EndDragonFight *v1; // r4@1
  Level *v2; // r0@1
  void *v3; // r5@1 OVERLAPPED
  void *v4; // r6@1 OVERLAPPED
  int v5; // r7@2
  unsigned __int64 *v6; // r0@2
  int v7; // [sp+0h] [bp-40h]@2
  void *v8; // [sp+1Ch] [bp-24h]@1
  void *v9; // [sp+20h] [bp-20h]@1

  v1 = this;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  v2 = (Level *)BlockSource::getLevel(*(BlockSource **)this);
  TheEndBiomeDecorator::getSpikesForLevel((TheEndBiomeDecorator *)&v8, v2);
  *(_QWORD *)&v3 = *(_QWORD *)&v8;
  if ( v8 != v9 )
  {
    do
    {
      v5 = *(_DWORD *)v1;
      SpikeFeature::EndSpike::getTopBoundingBox((SpikeFeature::EndSpike *)&v7, (int)v3);
      v6 = (unsigned __int64 *)BlockSource::fetchEntities(v5, 71, (int)&v7, 0);
      v3 = (char *)v3 + 48;
      *((_DWORD *)v1 + 5) += (signed int)((*v6 >> 32) - *v6) >> 2;
    }
    while ( v4 != v3 );
    v3 = v8;
  }
  if ( v3 )
    operator delete(v3);
}


void __fastcall EndDragonFight::loadData(EndDragonFight *this, const CompoundTag *a2)
{
  EndDragonFight::loadData(this, a2);
}


void __fastcall EndDragonFight::setRespawnStage(EndDragonFight *this, int a2)
{
  BlockSource **v2; // r4@1
  Level *v3; // r4@2
  int i; // r6@2
  unsigned int *v5; // r2@5
  signed int v6; // r1@7
  unsigned int *v7; // r2@9
  signed int v8; // r1@11
  unsigned int *v9; // r2@13
  signed int v10; // r1@15
  int v11; // r0@29
  Entity *v12; // r7@29
  void *v13; // r0@31
  void *v14; // r0@32
  void *v15; // r0@33
  void **v16; // [sp+0h] [bp-70h]@31
  int v17; // [sp+38h] [bp-38h]@13
  int v18; // [sp+3Ch] [bp-34h]@9
  int v19; // [sp+40h] [bp-30h]@5

  v2 = (BlockSource **)this;
  *((_DWORD *)this + 19) = 0;
  if ( a2 == 5 )
  {
    *((_DWORD *)this + 18) = 0;
    *((_BYTE *)this + 36) = 0;
    EndDragonFight::createNewDragon(this);
    v3 = (Level *)BlockSource::getLevel(*v2);
    for ( i = *((_DWORD *)Level::getPlayerList(v3) + 2); i; i = *(_DWORD *)i )
    {
      v11 = Level::getPlayer(v3, (const mce::UUID *)(i + 8));
      v12 = (Entity *)v11;
      if ( v11 && (*(int (__cdecl **)(int))(*(_DWORD *)v11 + 524))(v11) == 2 )
      {
        EventPacket::EventPacket((int)&v16, v12, 66, 1);
        (*(void (__fastcall **)(Entity *, void ***))(*(_DWORD *)v12 + 1448))(v12, &v16);
        v16 = &off_26E9D30;
        v13 = (void *)(v19 - 12);
        if ( (int *)(v19 - 12) != &dword_28898C0 )
        {
          v5 = (unsigned int *)(v19 - 4);
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
            j_j_j_j__ZdlPv_9(v13);
        }
        v14 = (void *)(v18 - 12);
        if ( (int *)(v18 - 12) != &dword_28898C0 )
          v7 = (unsigned int *)(v18 - 4);
              v8 = __ldrex(v7);
            while ( __strex(v8 - 1, v7) );
            v8 = (*v7)--;
          if ( v8 <= 0 )
            j_j_j_j__ZdlPv_9(v14);
        v15 = (void *)(v17 - 12);
        if ( (int *)(v17 - 12) != &dword_28898C0 )
          v9 = (unsigned int *)(v17 - 4);
              v10 = __ldrex(v9);
            while ( __strex(v10 - 1, v9) );
            v10 = (*v9)--;
          if ( v10 <= 0 )
            j_j_j_j__ZdlPv_9(v15);
      }
    }
  }
  else
    *((_DWORD *)this + 18) = a2;
}


void __fastcall EndDragonFight::onCrystalDestroyed(EndDragonFight *this, const EnderCrystal *a2, const EntityDamageSource *a3)
{
  EndDragonFight::onCrystalDestroyed(this, a2, a3);
}


void __fastcall EndDragonFight::tryRespawn(EndDragonFight *this)
{
  EndDragonFight *v1; // r4@1
  int v2; // r6@3
  int v3; // r7@3
  int v4; // r8@3
  __int64 v5; // r2@3
  char *v10; // r8@9
  _BYTE *v11; // r11@12
  int v12; // r6@13
  _QWORD *v15; // r0@13
  _QWORD *v16; // r6@13
  char *v17; // r7@13
  int v18; // r1@13 OVERLAPPED
  int v19; // r2@13 OVERLAPPED
  signed int v20; // r0@13
  char *v21; // r0@15
  signed int v22; // r2@16
  signed int v23; // r6@17
  int v24; // r6@17
  int v25; // r8@17
  char *v26; // r1@19
  __int64 v27; // kr00_8@19
  signed int v28; // r6@23
  int v29; // [sp+0h] [bp-C8h]@0
  int v30; // [sp+4h] [bp-C4h]@0
  int v31; // [sp+8h] [bp-C0h]@0
  char v32; // [sp+14h] [bp-B4h]@13
  float v33; // [sp+30h] [bp-98h]@13
  float v36; // [sp+3Ch] [bp-8Ch]@9
  char v37; // [sp+48h] [bp-80h]@9
  int v38; // [sp+54h] [bp-74h]@8
  int v39; // [sp+58h] [bp-70h]@12
  int v40; // [sp+5Ch] [bp-6Ch]@12
  int v44; // [sp+80h] [bp-48h]@3
  signed int v45; // [sp+84h] [bp-44h]@3
  int v46; // [sp+88h] [bp-40h]@3
  int v47; // [sp+8Ch] [bp-3Ch]@3
  int v48; // [sp+90h] [bp-38h]@4
  int v49; // [sp+94h] [bp-34h]@5

  v1 = this;
  if ( *((_BYTE *)this + 36) && !*((_DWORD *)this + 18) )
  {
    v2 = *((_DWORD *)this + 12);
    v3 = *((_DWORD *)this + 13);
    v4 = *((_DWORD *)this + 14);
    v44 = -1082130432;
    v45 = -1082130432;
    v46 = -1082130432;
    BlockPos::BlockPos((int)&v47, (int)&v44);
    if ( v2 == v47 )
    {
      _ZF = v3 == v48;
      if ( v3 == v48 )
        _ZF = v4 == v49;
      if ( _ZF )
      {
        EndDragonFight::findExitPortal((EndDragonFight *)&v38, (int)v1, v5);
        if ( (_BYTE)v38 )
        {
          __asm
          {
            VMOV.F32        S0, #3.0
            VLDR            S2, [SP,#0xC8+var_54]
            VLDR            S4, [SP,#0xC8+var_50]
            VLDR            S6, [SP,#0xC8+var_4C]
            VADD.F32        S2, S2, S0
            VADD.F32        S4, S4, S0
            VADD.F32        S0, S6, S0
            VSTR            S2, [SP,#0xC8+var_8C]
            VSTR            S4, [SP,#0xC8+var_88]
            VSTR            S0, [SP,#0xC8+var_84]
          }
          BlockPos::BlockPos((int)&v37, (int)&v36);
          v10 = &v37;
        }
        else
          EndDragonFight::spawnExitPortal(v1, 1);
          v10 = (char *)v1 + 48;
        v2 = *(_DWORD *)v10;
        v3 = *((_DWORD *)v10 + 1);
        v4 = *((_DWORD *)v10 + 2);
      }
    }
    __asm { VMOV.F32        S16, #1.0 }
    *((_DWORD *)v1 + 21) = *((_DWORD *)v1 + 20);
    v11 = Direction::DIRECTION_FACING;
    v38 = v2;
    v39 = v3 + 1;
    v40 = v4;
    while ( 1 )
      BlockPos::relative((BlockPos *)&v33, (int)&v38, *v11, 3);
      __asm
        VLDR            S0, [SP,#0xC8+var_98]
        VLDR            S2, [SP,#0xC8+var_94]
        VLDR            S4, [SP,#0xC8+var_90]
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S2, S2
        VCVT.F32.S32    S4, S4
      v12 = *(_DWORD *)v1;
        VMOV            R1, S0
        VMOV            R2, S2
        VMOV            R3, S4
        VADD.F32        S0, S0, S16
        VADD.F32        S4, S4, S16
        VADD.F32        S2, S2, S16
        VSTR            S0, [SP,#0xC8+var_C8]
        VSTR            S2, [SP,#0xC8+var_C4]
        VSTR            S4, [SP,#0xC8+var_C0]
      AABB::AABB(COERCE_FLOAT(&v32), _R1, _R2, v29, v30, v31);
      v15 = (_QWORD *)BlockSource::fetchEntities(v12, 71, (int)&v32, 0);
      v16 = v15;
      v17 = 0;
      *(_QWORD *)&v18 = *v15;
      v20 = v19 - v18;
      if ( 0 != (v19 - v18) >> 2 )
        if ( (unsigned int)(v20 >> 2) >= 0x40000000 )
          sub_21E57F4();
        v21 = (char *)operator new(v20);
        *(_QWORD *)&v18 = *v16;
        v17 = v21;
      v22 = v19 - v18;
      if ( 0 == v22 >> 2 )
        v28 = 1;
      else
        v23 = v22 >> 2;
        _aeabi_memmove4(v17, v18);
        v24 = 4 * v23;
        v25 = 0;
        do
          if ( Entity::hasType(*(_DWORD *)&v17[v25], 71) == 1 )
            v26 = Entity::getUniqueID(*(Entity **)&v17[v25]);
            v27 = *(_QWORD *)((char *)v1 + 84);
            if ( (_DWORD)v27 == HIDWORD(v27) )
            {
              std::vector<EntityUniqueID,std::allocator<EntityUniqueID>>::_M_emplace_back_aux<EntityUniqueID const&>(
                (unsigned __int64 *)v1 + 10,
                v26);
            }
            else
              *(_QWORD *)v27 = *(_QWORD *)v26;
              *((_DWORD *)v1 + 21) = v27 + 8;
          v25 += 4;
        while ( v24 != v25 );
        v28 = 0;
      if ( v17 )
        operator delete(v17);
      if ( v28 )
        break;
      if ( ++v11 == Direction::FACING_DIRECTION )
        if ( *((_BYTE *)v1 + 36) && !*((_DWORD *)v1 + 18) )
          *((_DWORD *)v1 + 18) = 1;
          *((_DWORD *)v1 + 19) = 0;
          EndDragonFight::spawnExitPortal(v1, 0);
          *((_DWORD *)v1 + 21) = *((_DWORD *)v1 + 20);
        return;
  }
}


void __fastcall EndDragonFight::resetSpikeCrystals(EndDragonFight *this)
{
  Level *v1; // r0@1
  void *v2; // r10@1
  void *v3; // r11@1
  int v4; // r4@2
  _QWORD *v5; // r0@2
  _QWORD *v6; // r6@2
  int v7; // r1@2 OVERLAPPED
  int v8; // r2@2 OVERLAPPED
  char *v9; // r4@2
  signed int v10; // r0@2
  signed int v11; // r2@5
  signed int v12; // r6@6
  int v13; // r6@6
  int v14; // r8@6
  int v15; // r0@7
  EndDragonFight *v16; // [sp+4h] [bp-5Ch]@1
  int v17; // [sp+8h] [bp-58h]@7
  int v18; // [sp+Ch] [bp-54h]@7
  int v19; // [sp+10h] [bp-50h]@7
  char v20; // [sp+14h] [bp-4Ch]@2
  void *ptr; // [sp+30h] [bp-30h]@1
  void *v22; // [sp+34h] [bp-2Ch]@1

  v16 = this;
  v1 = (Level *)BlockSource::getLevel(*(BlockSource **)this);
  TheEndBiomeDecorator::getSpikesForLevel((TheEndBiomeDecorator *)&ptr, v1);
  v2 = v22;
  v3 = ptr;
  if ( ptr != v22 )
  {
    do
    {
      v4 = *(_DWORD *)v16;
      SpikeFeature::EndSpike::getTopBoundingBox((SpikeFeature::EndSpike *)&v20, (int)v3);
      v5 = (_QWORD *)BlockSource::fetchEntities(v4, 71, (int)&v20, 0);
      v6 = v5;
      *(_QWORD *)&v7 = *v5;
      v9 = 0;
      v10 = v8 - v7;
      if ( (v8 - v7) >> 2 )
      {
        if ( (unsigned int)(v10 >> 2) >= 0x40000000 )
          sub_21E57F4();
        v9 = (char *)operator new(v10);
        *(_QWORD *)&v7 = *v6;
      }
      v11 = v8 - v7;
      if ( 0 != v11 >> 2 )
        v12 = v11 >> 2;
        _aeabi_memmove4(v9, v7);
        v13 = 4 * v12;
        v14 = 0;
        do
        {
          v15 = *(_DWORD *)&v9[v14];
          *(_BYTE *)(v15 + 426) = 0;
          v17 = 0;
          v18 = 0;
          v19 = 0;
          EnderCrystal::setBeamTarget((EnderCrystal *)v15, (const BlockPos *)&v17);
          v14 += 4;
        }
        while ( v13 != v14 );
      if ( v9 )
        operator delete(v9);
      v3 = (char *)v3 + 48;
    }
    while ( v3 != v2 );
    v3 = ptr;
  }
  if ( v3 )
    operator delete(v3);
}


void __fastcall EndDragonFight::tickRespawnAnimation(EndDragonFight *this, unsigned __int64 *a2, signed int _R2)
{
  EndDragonFight *v3; // r10@1
  unsigned __int64 *v4; // r6@1
  unsigned __int64 *i; // r4@2
  unsigned __int64 *v6; // r7@2
  int v7; // r0@3
  int v8; // r1@3
  EnderCrystal *v9; // r6@3
  Level *v11; // r5@13
  int v12; // r6@13
  int v13; // r10@13
  BlockSource *v14; // t1@13
  int *v15; // r7@13
  unsigned int v21; // r5@14
  int v22; // r4@14
  Level *v23; // r0@16
  SpikeFeature::EndSpike *v24; // r9@17
  const BlockPos *v25; // r0@21
  unsigned __int64 *k; // r4@23
  unsigned __int64 *v27; // r7@23
  int v28; // r0@24
  int v29; // r1@24
  int v30; // r0@24
  EnderCrystal *v31; // r6@24
  int v32; // r0@26
  BlockSource *v33; // t1@31
  int v34; // r0@37
  BlockSource *v35; // t1@37
  unsigned __int64 *j; // r4@39
  unsigned __int64 *v37; // r11@39
  int v38; // r0@40
  int v39; // r1@40
  EnderCrystal *v40; // r7@40
  int v41; // r6@41
  int v42; // r5@41
  int v43; // r0@41
  int v44; // r0@44
  Entity *v45; // r6@44
  BlockSource *v46; // r7@44
  Level *v47; // r0@44
  char *v48; // r0@44
  BlockSource *v49; // r6@44
  Level *v50; // r0@44
  char *v51; // r0@44
  int v52; // r6@45
  BlockSource *v53; // r4@45
  unsigned __int64 *l; // r4@49
  unsigned __int64 *v58; // r7@49
  int v59; // r0@50
  int v60; // r1@50
  int v61; // r0@50
  EnderCrystal *v62; // r6@50
  int v63; // [sp+10h] [bp-140h]@26
  int v64; // [sp+14h] [bp-13Ch]@26
  int v65; // [sp+18h] [bp-138h]@26
  int v66; // [sp+1Ch] [bp-134h]@26
  void *v67; // [sp+20h] [bp-130h]@26
  int v68; // [sp+24h] [bp-12Ch]@26
  void *v69; // [sp+28h] [bp-128h]@26
  signed int v70; // [sp+2Ch] [bp-124h]@44
  int v71; // [sp+30h] [bp-120h]@44
  int v72; // [sp+34h] [bp-11Ch]@44
  signed int v73; // [sp+38h] [bp-118h]@44
  int v74; // [sp+3Ch] [bp-114h]@44
  char v75; // [sp+40h] [bp-110h]@44
  float v76; // [sp+60h] [bp-F0h]@45
  char v77; // [sp+6Ch] [bp-E4h]@19
  char v78; // [sp+94h] [bp-BCh]@19
  char v79; // [sp+BCh] [bp-94h]@19
  int v80; // [sp+E4h] [bp-6Ch]@19
  int v81; // [sp+E8h] [bp-68h]@19
  int v82; // [sp+ECh] [bp-64h]@19
  int v83; // [sp+F0h] [bp-60h]@19
  int v84; // [sp+F4h] [bp-5Ch]@19
  int v85; // [sp+F8h] [bp-58h]@19
  int v86; // [sp+FCh] [bp-54h]@41
  int v87; // [sp+100h] [bp-50h]@41
  int v88; // [sp+104h] [bp-4Ch]@41
  char v89; // [sp+108h] [bp-48h]@13
  void *ptr; // [sp+114h] [bp-3Ch]@2
  int v91; // [sp+118h] [bp-38h]@2
  int v92; // [sp+11Ch] [bp-34h]@2

  v3 = this;
  v4 = a2;
  switch ( *((_DWORD *)this + 18) )
  {
    case 1:
      ptr = (void *)*((_DWORD *)this + 15);
      v91 = *((_DWORD *)this + 16);
      v92 = *((_DWORD *)this + 17);
      v6 = (unsigned __int64 *)(*a2 >> 32);
      for ( i = (unsigned __int64 *)*a2; v6 != i; ++i )
      {
        v7 = BlockSource::getLevel(*(BlockSource **)v3);
        v9 = (EnderCrystal *)Level::fetchEntity(v7, v8, *i, *i >> 32, 0);
        if ( (*(int (**)(void))(*(_DWORD *)v9 + 488))() == 71 )
          EnderCrystal::setBeamTarget(v9, (const BlockPos *)&ptr);
      }
      *((_DWORD *)v3 + 18) = 2;
      *((_DWORD *)v3 + 19) = 0;
      return;
    case 2:
      if ( _R2 > 99 )
        *((_DWORD *)this + 18) = 3;
        *((_DWORD *)this + 19) = 0;
      else
        if ( _R2 > 94 )
          goto LABEL_57;
        _ZF = _R2 == 52;
        if ( _R2 != 52 )
          _ZF = _R2 == 0;
        if ( _ZF || (_R2 | 1) == 51 )
        {
LABEL_57:
          v11 = (Level *)BlockSource::getLevel(*(BlockSource **)this);
          v14 = *(BlockSource **)v3;
          v13 = (int)v3 + 60;
          v12 = (int)v14;
          v15 = (int *)&v89;
          goto LABEL_38;
        }
    case 3:
      _R0 = 1717986919;
      __asm { SMMUL.W         R0, R2, R0 }
      v21 = ((signed int)_R0 >> 4) + (_R0 >> 31);
      v22 = _R2 - 40 * v21;
      if ( (unsigned int)(v22 - 38) < 2 || _R2 == 40 * v21 )
        v23 = (Level *)BlockSource::getLevel(*(BlockSource **)v3);
        TheEndBiomeDecorator::getSpikesForLevel((TheEndBiomeDecorator *)&ptr, v23);
        if ( v21 >= -1431655765 * ((v91 - (signed int)ptr) >> 4) )
          if ( !v22 )
          {
            *((_DWORD *)v3 + 18) = 4;
            *((_DWORD *)v3 + 19) = 0;
          }
        else
          v24 = (SpikeFeature::EndSpike *)((char *)ptr + 48 * v21);
          if ( v22 )
            if ( v22 == 38 )
            {
              v83 = SpikeFeature::EndSpike::getCenterX((SpikeFeature::EndSpike *)((char *)ptr + 48 * v21)) - 10;
              v84 = SpikeFeature::EndSpike::getHeight(v24) - 10;
              v85 = SpikeFeature::EndSpike::getCenterZ(v24) - 10;
              v80 = SpikeFeature::EndSpike::getCenterX(v24) + 10;
              v81 = SpikeFeature::EndSpike::getHeight(v24) + 10;
              v82 = SpikeFeature::EndSpike::getCenterZ(v24) + 10;
              BlockPosIterator::BlockPosIterator(
                (BlockPosIterator *)&v79,
                (const BlockPos *)&v83,
                (const BlockPos *)&v80);
              BlockPosIterator::begin((BlockPosIterator *)&v78, (int)&v79);
              BlockPosIterator::end((BlockPosIterator *)&v77, (int)&v79);
              while ( BlockPosIterator::operator!=((int)&v78, (int)&v77) )
              {
                v25 = (const BlockPos *)BlockPosIterator::operator*((int)&v78);
                BlockSource::removeBlock(*(BlockSource **)v3, v25);
                BlockPosIterator::operator++((int)&v78);
              }
              v52 = BlockSource::getLevel(*(BlockSource **)v3);
              v53 = *(BlockSource **)v3;
              _R0 = SpikeFeature::EndSpike::getCenterX(v24);
              __asm
                VMOV            S0, R0
                VCVT.F32.S32    S16, S0
              _R7 = SpikeFeature::EndSpike::getHeight(v24);
              _R0 = SpikeFeature::EndSpike::getCenterZ(v24);
                VMOV            S4, R0
                VMOV.F32        S0, #0.5
                VCVT.F32.S32    S4, S4
                VMOV            S6, R7
                VCVT.F32.S32    S6, S6
                VADD.F32        S2, S16, S0
                VADD.F32        S0, S4, S0
                VSTR            S2, [SP,#0x150+var_F0]
                VSTR            S6, [SP,#0x150+var_EC]
                VSTR            S0, [SP,#0x150+var_E8]
              Level::explode(
                v52,
                (int)v53,
                0,
                (int)&v76,
                (void *)0x40A00000,
                1,
                2139095039,
                v63,
                v64,
                v65,
                v66,
                v67,
                v68,
                v69);
            }
            else
              SpikeFeature::SpikeFeature((SpikeFeature *)&v75, (const SpikeFeature::EndSpike *)((char *)ptr + 48 * v21));
              SpikeFeature::setCrystalInvulnerable((SpikeFeature *)&v75, 1);
              SpikeFeature::setCrystalBeamTarget((SpikeFeature *)&v75, (EndDragonFight *)((char *)v3 + 60));
              v44 = BlockSource::getLevel(*(BlockSource **)v3);
              v45 = (Entity *)Level::fetchEntity(
                                v44,
                                0,
                                *(_QWORD *)*((_DWORD *)v3 + 20),
                                *(_QWORD *)*((_DWORD *)v3 + 20) >> 32,
                                0);
              v46 = *(BlockSource **)v3;
              v72 = SpikeFeature::EndSpike::getCenterX(v24);
              v73 = 45;
              v74 = SpikeFeature::EndSpike::getCenterZ(v24);
              v47 = (Level *)BlockSource::getLevel(*(BlockSource **)v3);
              v48 = Level::getRandom(v47);
              SpikeFeature::placeManually((SpikeFeature *)&v75, v46, (const BlockPos *)&v72, (Random *)v48, v45);
              v49 = *(BlockSource **)v3;
              v69 = (void *)SpikeFeature::EndSpike::getCenterX(v24);
              v70 = 45;
              v71 = SpikeFeature::EndSpike::getCenterZ(v24);
              v50 = (Level *)BlockSource::getLevel(*(BlockSource **)v3);
              v51 = Level::getRandom(v50);
              SpikeFeature::postProcessMobsAt((SpikeFeature *)&v75, v49, (const BlockPos *)&v69, (Random *)v51);
              Feature::~Feature((Feature *)&v75);
          else
            v37 = (unsigned __int64 *)(*v4 >> 32);
            for ( j = (unsigned __int64 *)*v4; v37 != j; ++j )
              v38 = BlockSource::getLevel(*(BlockSource **)v3);
              v40 = (EnderCrystal *)Level::fetchEntity(v38, v39, *j, *j >> 32, 0);
              if ( (*(int (**)(void))(*(_DWORD *)v40 + 488))() == 71 )
                v41 = SpikeFeature::EndSpike::getCenterX(v24);
                v42 = SpikeFeature::EndSpike::getHeight(v24);
                v43 = SpikeFeature::EndSpike::getCenterZ(v24);
                v86 = v41;
                v87 = v42 + 1;
                v88 = v43;
                EnderCrystal::setBeamTarget(v40, (const BlockPos *)&v86);
        if ( ptr )
          operator delete(ptr);
    case 4:
      if ( _R2 >= 100 )
        EndDragonFight::setRespawnStage(this, 5);
        EndDragonFight::resetSpikeCrystals(v3);
        v27 = (unsigned __int64 *)(*v4 >> 32);
        for ( k = (unsigned __int64 *)*v4; v27 != k; ++k )
          v28 = BlockSource::getLevel(*(BlockSource **)v3);
          v30 = Level::fetchEntity(v28, v29, *k, *k >> 32, 0);
          v31 = (EnderCrystal *)v30;
          if ( v30 && (*(int (**)(void))(*(_DWORD *)v30 + 488))() == 71 )
            ptr = 0;
            v91 = 0;
            v92 = 0;
            EnderCrystal::setBeamTarget(v31, (const BlockPos *)&ptr);
            v32 = BlockSource::getLevel(*(BlockSource **)v3);
            Level::explode(
              v32,
              *(_DWORD *)v3,
              (int)v31,
              (int)v31 + 72,
              (void *)0x40C00000,
              0,
              2139095039,
              v63,
              v64,
              v65,
              v66,
              v67,
              v68,
              v69);
            (*(void (__fastcall **)(EnderCrystal *))(*(_DWORD *)v31 + 44))(v31);
        return;
      if ( _R2 >= 80 )
        v11 = (Level *)BlockSource::getLevel(*(BlockSource **)this);
        v33 = *(BlockSource **)v3;
        v13 = (int)v3 + 60;
        v12 = (int)v33;
        v15 = &v66;
LABEL_38:
        Vec3::Vec3((int)v15, v13);
        Level::broadcastSoundEvent(v11, v12, 19, (int)v15, -1, 2869, 0, 0);
      if ( _R2 )
        if ( _R2 > 4 )
          return;
        v34 = BlockSource::getLevel(*(BlockSource **)this);
        v35 = *(BlockSource **)v3;
        v12 = (int)v35;
        v15 = &v63;
        v11 = (Level *)v34;
        goto LABEL_38;
      v58 = (unsigned __int64 *)(*a2 >> 32);
      for ( l = (unsigned __int64 *)*a2; v58 != l; ++l )
        v59 = BlockSource::getLevel(*(BlockSource **)v3);
        v61 = Level::fetchEntity(v59, v60, *l, *l >> 32, 0);
        v62 = (EnderCrystal *)v61;
        if ( v61 && (*(int (**)(void))(*(_DWORD *)v61 + 488))() == 71 )
          EnderCrystal::setBeamTarget(v62, (EndDragonFight *)((char *)v3 + 60));
    default:
  }
}


void __fastcall EndDragonFight::updateCrystalCount(EndDragonFight *this)
{
  EndDragonFight::updateCrystalCount(this);
}


void __fastcall EndDragonFight::loadData(EndDragonFight *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  EndDragonFight *v3; // r8@1
  signed int v4; // r4@1
  void *v5; // r0@1
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  _BOOL4 v10; // r4@7
  void *v11; // r0@7
  signed int v12; // r4@10
  void *v13; // r0@10
  ListTag *v14; // r6@12
  void *v15; // r0@12
  signed int v16; // r4@15
  void *v17; // r0@15
  ListTag *v18; // r9@17
  void *v19; // r0@17
  int v20; // r6@19
  int v21; // r11@20
  __int64 v22; // r0@20
  void *v23; // r5@22
  char *v24; // r7@22
  unsigned int v25; // r2@22
  unsigned int v26; // r1@24
  unsigned int v27; // r4@24
  char *v28; // r11@31
  int v29; // r11@33
  int v30; // r0@38
  signed int *v31; // r10@38
  signed int v32; // r6@38
  _BYTE *v33; // r4@41
  char *v34; // r5@41
  unsigned int v35; // r1@41
  unsigned int v36; // r0@43
  unsigned int v37; // r7@43
  char *v38; // r0@49
  signed int v39; // r2@50
  int v40; // r10@50
  int v41; // r4@56
  unsigned int v42; // r0@56
  signed int *v43; // r7@59
  int v44; // r0@60
  signed int v45; // r2@60
  void *v46; // r0@61
  unsigned int *v47; // r2@63
  signed int v48; // r1@65
  unsigned int *v49; // r2@67
  signed int v50; // r1@69
  unsigned int *v51; // r2@75
  signed int v52; // r1@77
  unsigned int *v53; // r2@79
  signed int v54; // r1@81
  unsigned int *v55; // r2@83
  signed int v56; // r1@85
  unsigned int *v57; // r2@87
  signed int v58; // r1@89
  unsigned int *v59; // r2@95
  signed int v60; // r1@97
  unsigned int *v61; // r2@99
  signed int v62; // r1@101
  unsigned int *v63; // r2@103
  signed int v64; // r1@105
  unsigned int *v65; // r2@107
  signed int v66; // r1@109
  unsigned int *v67; // r2@139
  signed int v68; // r1@141
  int v69; // [sp+8h] [bp-A50h]@56
  char v70; // [sp+Ch] [bp-A4Ch]@56
  unsigned int v71; // [sp+9D0h] [bp-88h]@58
  int v72; // [sp+9D8h] [bp-80h]@17
  int v73; // [sp+9E0h] [bp-78h]@15
  int v74; // [sp+9E8h] [bp-70h]@12
  int v75; // [sp+9F0h] [bp-68h]@10
  int v76; // [sp+9F8h] [bp-60h]@7
  int v77; // [sp+A00h] [bp-58h]@6
  int v78; // [sp+A08h] [bp-50h]@5
  int v79; // [sp+A10h] [bp-48h]@4
  int v80; // [sp+A18h] [bp-40h]@3
  int v81; // [sp+A20h] [bp-38h]@1
  int v82; // [sp+A24h] [bp-34h]@60
  int v83; // [sp+A28h] [bp-30h]@60
  int v84; // [sp+A2Ch] [bp-2Ch]@59
  int v85; // [sp+A30h] [bp-28h]@59

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v81, "DragonKilled");
  v4 = CompoundTag::contains((int)v2, (const void **)&v81);
  v5 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
  {
    v47 = (unsigned int *)(v81 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
    }
    else
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( v4 == 1 )
    sub_21E94B4((void **)&v80, "DragonUUID");
    *((_QWORD *)v3 + 5) = CompoundTag::getInt64((int)v2, (const void **)&v80);
    v6 = (void *)(v80 - 12);
    if ( (int *)(v80 - 12) != &dword_28898C0 )
      v51 = (unsigned int *)(v80 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
      }
      else
        v52 = (*v51)--;
      if ( v52 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    sub_21E94B4((void **)&v79, "DragonKilled");
    *((_BYTE *)v3 + 36) = CompoundTag::getBoolean((int)v2, (const void **)&v79);
    v7 = (void *)(v79 - 12);
    if ( (int *)(v79 - 12) != &dword_28898C0 )
      v53 = (unsigned int *)(v79 - 4);
          v54 = __ldrex(v53);
        while ( __strex(v54 - 1, v53) );
        v54 = (*v53)--;
      if ( v54 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    sub_21E94B4((void **)&v78, "DragonSpawned");
    *((_BYTE *)v3 + 38) = CompoundTag::getBoolean((int)v2, (const void **)&v78);
    v8 = (void *)(v78 - 12);
    if ( (int *)(v78 - 12) != &dword_28898C0 )
      v55 = (unsigned int *)(v78 - 4);
          v56 = __ldrex(v55);
        while ( __strex(v56 - 1, v55) );
        v56 = (*v55)--;
      if ( v56 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    sub_21E94B4((void **)&v77, "PreviouslyKilled");
    *((_BYTE *)v3 + 37) = CompoundTag::getBoolean((int)v2, (const void **)&v77);
    v9 = (void *)(v77 - 12);
    if ( (int *)(v77 - 12) != &dword_28898C0 )
      v57 = (unsigned int *)(v77 - 4);
          v58 = __ldrex(v57);
        while ( __strex(v58 - 1, v57) );
        v58 = (*v57)--;
      if ( v58 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    sub_21E94B4((void **)&v76, "IsRespawning");
    v10 = CompoundTag::getBoolean((int)v2, (const void **)&v76);
    v11 = (void *)(v76 - 12);
    if ( (int *)(v76 - 12) != &dword_28898C0 )
      v59 = (unsigned int *)(v76 - 4);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    if ( v10 == 1 )
      *((_DWORD *)v3 + 18) = 1;
      *((_DWORD *)v3 + 19) = 0;
    sub_21E94B4((void **)&v75, "ExitPortalLocation");
    v12 = CompoundTag::contains((int)v2, (const void **)&v75);
    v13 = (void *)(v75 - 12);
    if ( (int *)(v75 - 12) != &dword_28898C0 )
      v63 = (unsigned int *)(v75 - 4);
          v64 = __ldrex(v63);
        while ( __strex(v64 - 1, v63) );
        v64 = (*v63)--;
      if ( v64 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    if ( v12 == 1 )
      sub_21E94B4((void **)&v74, "ExitPortalLocation");
      v14 = (ListTag *)CompoundTag::getList((int)v2, (const void **)&v74);
      v15 = (void *)(v74 - 12);
      if ( (int *)(v74 - 12) != &dword_28898C0 )
        v67 = (unsigned int *)(v74 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v68 = __ldrex(v67);
          while ( __strex(v68 - 1, v67) );
        }
        else
          v68 = (*v67)--;
        if ( v68 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      *((_DWORD *)v3 + 12) = ListTag::getInt(v14, 0);
      *((_DWORD *)v3 + 13) = ListTag::getInt(v14, 1);
      *((_DWORD *)v3 + 14) = ListTag::getInt(v14, 2);
  else
    *((_WORD *)v3 + 18) = 0;
    *((_BYTE *)v3 + 38) = 0;
  *((_DWORD *)v3 + 2) = *((_DWORD *)v3 + 1);
  sub_21E94B4((void **)&v73, "Gateways");
  v16 = CompoundTag::contains((int)v2, (const void **)&v73);
  v17 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v73 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  if ( v16 )
    sub_21E94B4((void **)&v72, "Gateways");
    v18 = (ListTag *)CompoundTag::getList((int)v2, (const void **)&v72);
    v19 = (void *)(v72 - 12);
    if ( (int *)(v72 - 12) != &dword_28898C0 )
      v61 = (unsigned int *)(v72 - 4);
          v62 = __ldrex(v61);
        while ( __strex(v62 - 1, v61) );
        v62 = (*v61)--;
      if ( v62 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    if ( ListTag::size(v18) >= 1 )
      v20 = 0;
        v21 = ListTag::getInt(v18, v20);
        v22 = *((_QWORD *)v3 + 1);
        if ( (_DWORD)v22 == HIDWORD(v22) )
          v23 = (void *)*((_DWORD *)v3 + 1);
          v24 = 0;
          v25 = ((signed int)v22 - (signed int)v23) >> 2;
          if ( !v25 )
            v25 = 1;
          HIDWORD(v22) = v25 + (((signed int)v22 - (signed int)v23) >> 2);
          v27 = v25 + (((signed int)v22 - (signed int)v23) >> 2);
          if ( 0 != HIDWORD(v22) >> 30 )
            v27 = 0x3FFFFFFF;
          if ( v26 < v25 )
          if ( v27 )
          {
            if ( v27 >= 0x40000000 )
              goto LABEL_150;
            v24 = (char *)operator new(4 * v27);
            LODWORD(v22) = *(_QWORD *)((char *)v3 + 4) >> 32;
            v23 = (void *)*(_QWORD *)((char *)v3 + 4);
          }
          *(_DWORD *)&v24[v22 - (_DWORD)v23] = v21;
          v28 = &v24[v22 - (_DWORD)v23];
          if ( 0 != ((signed int)v22 - (signed int)v23) >> 2 )
            _aeabi_memmove4(v24, v23);
          v29 = (int)(v28 + 4);
          if ( v23 )
            operator delete(v23);
          *((_DWORD *)v3 + 1) = v24;
          *((_DWORD *)v3 + 2) = v29;
          *((_DWORD *)v3 + 3) = &v24[4 * v27];
          *(_DWORD *)v22 = v21;
          *((_DWORD *)v3 + 2) = v22 + 4;
        ++v20;
      while ( v20 < ListTag::size(v18) );
    v30 = *((_QWORD *)v3 + 1) >> 32;
    v31 = (signed int *)*((_QWORD *)v3 + 1);
    v32 = 0;
    do
      if ( v31 == (signed int *)v30 )
        v33 = (_BYTE *)*((_DWORD *)v3 + 1);
        v34 = 0;
        v35 = ((char *)v31 - v33) >> 2;
        if ( !v35 )
          v35 = 1;
        v36 = v35 + (((char *)v31 - v33) >> 2);
        v37 = v35 + (((char *)v31 - v33) >> 2);
        if ( 0 != v36 >> 30 )
          v37 = 0x3FFFFFFF;
        if ( v36 < v35 )
        if ( v37 )
          if ( v37 >= 0x40000000 )
LABEL_150:
            sub_21E57F4();
          v38 = (char *)operator new(4 * v37);
          v31 = (signed int *)(*(_QWORD *)((char *)v3 + 4) >> 32);
          v33 = (_BYTE *)*(_QWORD *)((char *)v3 + 4);
          v34 = v38;
        v39 = (char *)v31 - v33;
        v40 = (int)&v34[(char *)v31 - v33];
        *(_DWORD *)&v34[v39] = v32;
        if ( 0 != v39 >> 2 )
          _aeabi_memmove4(v34, v33);
        v31 = (signed int *)(v40 + 4);
        if ( v33 )
          operator delete(v33);
        v30 = (int)&v34[4 * v37];
        *((_DWORD *)v3 + 1) = v34;
        *((_DWORD *)v3 + 2) = v31;
        *((_DWORD *)v3 + 3) = v30;
        *v31 = v32;
        ++v31;
      ++v32;
    while ( v32 < 20 );
    v41 = *((_DWORD *)v3 + 1);
    sub_21E94B4((void **)&v69, "default");
    sub_21E66B4((FILE **)&v70, (const void **)&v69);
    v42 = sub_21E67AC((int)&v70) % 0x7FFFFFFFu;
    if ( !v42 )
      v42 = 1;
    v71 = v42;
    if ( (signed int *)v41 != v31 )
      v43 = (signed int *)(v41 + 4);
      v84 = 0;
      v85 = -1;
      if ( (signed int *)(v41 + 4) != v31 )
          v82 = 0;
          v83 = ((signed int)v43 - v41) >> 2;
          v44 = std::uniform_int_distribution<unsigned int>::operator()<std::linear_congruential_engine<unsigned int,16807u,0u,2147483647u>>(
                  (int)&v84,
                  (int)&v71,
                  (int)&v82);
          v45 = *v43;
          *v43 = *(_DWORD *)(v41 + 4 * v44);
          ++v43;
          *(_DWORD *)(v41 + 4 * v44) = v45;
        while ( v31 != v43 );
    sub_21E67A0((FILE **)&v70);
    v46 = (void *)(v69 - 12);
    if ( (int *)(v69 - 12) != &dword_28898C0 )
      v65 = (unsigned int *)(v69 - 4);
          v66 = __ldrex(v65);
        while ( __strex(v66 - 1, v65) );
        v66 = (*v65)--;
      if ( v66 <= 0 )
        j_j_j_j__ZdlPv_9(v46);
}


void __fastcall EndDragonFight::tick(EndDragonFight *this)
{
  EndDragonFight::tick(this);
}


BlockSource **__fastcall EndDragonFight::EndDragonFight(BlockSource **a1, BlockSource *a2)
{
  BlockSource **v2; // r10@1
  int v3; // r0@1
  BlockSource *v4; // r11@1
  __int64 v5; // r6@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  int *v8; // r0@12
  int v9; // r11@17
  __int64 v10; // r6@18
  unsigned int *v11; // r2@20
  signed int v12; // r1@22
  int *v13; // r0@28
  __int64 v14; // r2@34
  BlockPatternBuilder *v15; // r0@34
  __int64 v16; // r2@34
  BlockPatternBuilder *v17; // r0@34
  __int64 v18; // r2@34
  BlockPatternBuilder *v19; // r0@34
  __int64 v20; // r2@34
  BlockPatternBuilder *v21; // r0@34
  __int64 v22; // r2@34
  BlockPatternBuilder *v23; // r0@34
  BlockPatternBuilder *v24; // r0@34
  char v26; // [sp+1Ch] [bp-4Ch]@34
  void (*v27)(void); // [sp+24h] [bp-44h]@34
  char v28; // [sp+2Ch] [bp-3Ch]@34
  int v29; // [sp+30h] [bp-38h]@1
  int v30; // [sp+34h] [bp-34h]@1
  signed int v31; // [sp+38h] [bp-30h]@1
  int v32; // [sp+3Ch] [bp-2Ch]@1

  v2 = a1;
  *a1 = a2;
  _aeabi_memclr4(a1 + 1, 35);
  v2[10] = (BlockSource *)-1;
  v2[11] = (BlockSource *)-1;
  v30 = -1082130432;
  v31 = -1082130432;
  v32 = -1082130432;
  BlockPos::BlockPos((int)(v2 + 12), (int)&v30);
  v2[15] = 0;
  v2[16] = (BlockSource *)128;
  v2[17] = 0;
  v2[18] = 0;
  v2[19] = 0;
  v2[20] = 0;
  v2[21] = 0;
  v2[22] = 0;
  BlockPatternBuilder::start((BlockPatternBuilder *)&v29, *v2);
  v3 = v29;
  v29 = 0;
  v4 = v2[4];
  v2[4] = (BlockSource *)v3;
  if ( v4 )
  {
    std::_Rb_tree<char,std::pair<char const,PatternEntry>,std::_Select1st<std::pair<char const,PatternEntry>>,std::less<char>,std::allocator<std::pair<char const,PatternEntry>>>::_M_erase(
      (int)v4 + 16,
      *((_DWORD *)v4 + 6));
    v5 = *(_QWORD *)((char *)v4 + 4);
    if ( (_DWORD)v5 != HIDWORD(v5) )
    {
      do
      {
        v8 = (int *)(*(_DWORD *)v5 - 12);
        if ( v8 != &dword_28898C0 )
        {
          v6 = (unsigned int *)(*(_DWORD *)v5 - 4);
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
        LODWORD(v5) = v5 + 4;
      }
      while ( (_DWORD)v5 != HIDWORD(v5) );
      LODWORD(v5) = *((_DWORD *)v4 + 1);
    }
    if ( (_DWORD)v5 )
      operator delete((void *)v5);
    operator delete((void *)v4);
    v9 = v29;
    if ( v29 )
      std::_Rb_tree<char,std::pair<char const,PatternEntry>,std::_Select1st<std::pair<char const,PatternEntry>>,std::less<char>,std::allocator<std::pair<char const,PatternEntry>>>::_M_erase(
        v29 + 16,
        *(_DWORD *)(v29 + 24));
      v10 = *(_QWORD *)(v9 + 4);
      if ( (_DWORD)v10 != HIDWORD(v10) )
        do
          v13 = (int *)(*(_DWORD *)v10 - 12);
          if ( v13 != &dword_28898C0 )
            v11 = (unsigned int *)(*(_DWORD *)v10 - 4);
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
              j_j_j_j__ZdlPv_9(v13);
          LODWORD(v10) = v10 + 4;
        while ( (_DWORD)v10 != HIDWORD(v10) );
        LODWORD(v10) = *(_DWORD *)(v9 + 4);
      if ( (_DWORD)v10 )
        operator delete((void *)v10);
      operator delete((void *)v9);
  }
  LODWORD(v14) = "       ";
  HIDWORD(v14) = "       ";
  v15 = BlockPatternBuilder::aisle(v2[4], 7, v14, "       ", "   #   ", "       ", "       ", "       ");
  LODWORD(v16) = "       ";
  HIDWORD(v16) = "       ";
  v17 = BlockPatternBuilder::aisle(v15, 7, v16, "       ", "   #   ", "       ", "       ", "       ");
  LODWORD(v18) = "       ";
  HIDWORD(v18) = "       ";
  v19 = BlockPatternBuilder::aisle(v17, 7, v18, "       ", "   #   ", "       ", "       ", "       ");
  HIDWORD(v20) = " #   # ";
  LODWORD(v20) = "  ###  ";
  v21 = BlockPatternBuilder::aisle(v19, 7, v20, "#     #", "#  #  #", "#     #", " #   # ", "  ###  ");
  HIDWORD(v22) = "  ###  ";
  LODWORD(v22) = "       ";
  v23 = BlockPatternBuilder::aisle(v21, 7, v22, " ##### ", " ##### ", " ##### ", "  ###  ", "       ");
  v28 = *(_BYTE *)(Block::mBedrock + 4);
  v27 = 0;
  v24 = (BlockPatternBuilder *)BlockPatternBuilder::define((int)v23, 0x23u, &v28, (int)&v26);
  BlockPatternBuilder::build(v24);
  if ( v27 )
    v27();
  return v2;
}


void __fastcall EndDragonFight::onCrystalDestroyed(EndDragonFight *this, const EnderCrystal *a2, const EntityDamageSource *a3)
{
  EndDragonFight *v3; // r11@1
  const EntityDamageSource *v4; // r8@1
  Entity *v5; // r9@1
  int v6; // r4@2
  _QWORD *v7; // r10@2
  char *v8; // r0@2
  int v9; // r1@2
  __int64 v10; // r2@3
  int v11; // r5@3
  bool v12; // zf@4
  _QWORD *v13; // r1@4
  bool v14; // zf@7
  int v15; // r1@12
  unsigned int v16; // r0@14
  unsigned int v17; // r2@14
  int v18; // r0@26
  int v19; // r0@26
  int v20; // r6@26
  char v21; // [sp+8h] [bp-30h]@28

  v3 = this;
  v4 = a3;
  v5 = a2;
  if ( !*((_DWORD *)this + 18) )
    goto LABEL_26;
  v7 = (_QWORD *)(*((_QWORD *)this + 10) >> 32);
  v6 = *((_QWORD *)this + 10);
  v8 = Entity::getUniqueID(a2);
  v9 = ((signed int)v7 - v6) >> 5;
  if ( v9 < 1 )
  {
LABEL_11:
    if ( 1 == ((signed int)v7 - v6) >> 3 )
    {
      v17 = *(_QWORD *)v8 >> 32;
      v16 = *(_QWORD *)v8;
      v13 = (_QWORD *)v6;
    }
    else
      v15 = ((signed int)v7 - v6) >> 3;
      if ( v15 == 3 )
      {
        v17 = *(_QWORD *)v8 >> 32;
        v16 = *(_QWORD *)v8;
        v13 = (_QWORD *)v6;
        if ( *(_QWORD *)v6 == __PAIR__(v17, v16) )
          goto LABEL_24;
        v13 = (_QWORD *)(v6 + 8);
      }
      else
        if ( v15 != 2 )
        {
          v13 = v7;
        }
      if ( *v13 == __PAIR__(v17, v16) )
        goto LABEL_24;
      ++v13;
    if ( *v13 != __PAIR__(v17, v16) )
      v13 = v7;
  }
  else
    v10 = *(_QWORD *)v8;
    v11 = v9 + 1;
    while ( 1 )
      v12 = *(_QWORD *)v6 == v10;
      if ( *(_QWORD *)v6 != v10 )
        v12 = *(_QWORD *)(v6 + 8) == v10;
      if ( v12 )
        break;
      v13 = (_QWORD *)(v6 + 16);
      v14 = *(_QWORD *)(v6 + 16) == v10;
      if ( *(_QWORD *)(v6 + 16) != v10 )
        v13 = (_QWORD *)(v6 + 24);
        v14 = *(_QWORD *)(v6 + 24) == v10;
      if ( v14 )
      --v11;
      v6 += 32;
      if ( v11 <= 1 )
        goto LABEL_11;
LABEL_24:
  if ( v13 != *((_QWORD **)v3 + 21) )
    *((_DWORD *)v3 + 18) = 0;
    *((_DWORD *)v3 + 19) = 0;
    EndDragonFight::resetSpikeCrystals(v3);
    j_j_j__ZN14EndDragonFight15spawnExitPortalEb(v3, 1);
    return;
LABEL_26:
  EndDragonFight::updateCrystalCount(v3);
  v18 = BlockSource::getLevel(*(BlockSource **)v3);
  v19 = Level::fetchEntity(v18, 0, *((_QWORD *)v3 + 5), *((_QWORD *)v3 + 5) >> 32, 0);
  v20 = v19;
  if ( v19 )
    if ( Entity::hasType(v19, 2869) == 1 )
      BlockPos::BlockPos((int)&v21, (int)v5 + 72);
      EnderDragon::onCrystalDestroyed(v20, v5, (int)&v21, (int)v4);
}


int __fastcall EndDragonFight::respawnDragon(int result)
{
  if ( *(_BYTE *)(result + 36) && !*(_DWORD *)(result + 72) )
  {
    *(_DWORD *)(result + 72) = 1;
    *(_DWORD *)(result + 76) = 0;
    result = j_j_j__ZN14EndDragonFight15spawnExitPortalEb((EndDragonFight *)result, 0);
  }
  else
    *(_DWORD *)(result + 84) = *(_DWORD *)(result + 80);
  return result;
}


int __fastcall EndDragonFight::createNewDragon(EndDragonFight *this)
{
  EndDragonFight *v1; // r4@1
  Level *v2; // r0@1
  int result; // r0@1
  void *v4; // r0@2
  void *v5; // r0@3
  void *v6; // r0@4
  int v7; // r6@5
  Level *v8; // r0@5
  char *v9; // r0@5
  int v15; // r0@5
  BlockSource *v16; // r1@5
  int v17; // r3@5
  int (*v18)(void); // r6@5
  EnderDragon *v19; // r5@5
  unsigned int *v20; // r2@10
  signed int v21; // r1@12
  unsigned int *v22; // r2@14
  signed int v23; // r1@16
  unsigned int *v24; // r2@18
  signed int v25; // r1@20
  int v26; // [sp+8h] [bp-48h]@5
  int v27; // [sp+10h] [bp-40h]@5
  char v28; // [sp+14h] [bp-3Ch]@5
  char v29; // [sp+20h] [bp-30h]@2
  int v30; // [sp+2Ch] [bp-24h]@2
  int v31; // [sp+30h] [bp-20h]@3
  int v32; // [sp+34h] [bp-1Ch]@2
  int v33; // [sp+38h] [bp-18h]@2

  v1 = this;
  v2 = (Level *)BlockSource::getLevel(*(BlockSource **)this);
  result = Level::isClientSide(v2);
  if ( !result )
  {
    EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v30, 2869);
    Vec3::Vec3((int)&v29, (int)v1 + 60);
    EntityFactory::createSpawnedEntity((Entity **)&v33, (const void **)&v30, 0, (int)&v29, &Vec2::ZERO);
    v4 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
    {
      v20 = (unsigned int *)(v32 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      }
      else
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v4);
    }
    v5 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v22 = (unsigned int *)(v31 - 4);
          v23 = __ldrex(v22);
        while ( __strex(v23 - 1, v22) );
        v23 = (*v22)--;
      if ( v23 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    v6 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v30 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    v7 = v33;
    Vec3::Vec3((int)&v28, (int)v1 + 60);
    v8 = (Level *)BlockSource::getLevel(*(BlockSource **)v1);
    v9 = Level::getRandom(v8);
    _R0 = Random::_genRandInt32((Random *)v9);
    __asm
      VMOV            S0, R0
      VLDR            D1, =2.32830644e-10
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D1
      VCVT.F32.F64    S0, D0
      VLDR            S2, =360.0
      VMUL.F32        S0, S0, S2
      VSTR            S0, [SP,#0x50+var_44]
    v27 = 0;
    Entity::moveTo(v7, (int)&v28);
    v15 = BlockSource::getLevel(*(BlockSource **)v1);
    v16 = *(BlockSource **)v1;
    v17 = v33;
    v18 = *(int (**)(void))(*(_DWORD *)v15 + 52);
    v33 = 0;
    v26 = v17;
    v19 = (EnderDragon *)v18();
    if ( v26 )
      (*(void (**)(void))(*(_DWORD *)v26 + 32))();
    v26 = 0;
    EnderDragon::setDragonFight(v19, v1);
    *((_QWORD *)v1 + 5) = *(_QWORD *)Entity::getUniqueID(v19);
    *((_BYTE *)v1 + 38) = 1;
    result = v33;
    if ( v33 )
      result = (*(int (**)(void))(*(_DWORD *)v33 + 32))();
  }
  return result;
}


signed int __fastcall EndDragonFight::setDragonKilled(EndDragonFight *this, EnderDragon *a2)
{
  EndDragonFight *v2; // r4@1
  char *v3; // r0@1
  signed int result; // r0@1
  int v5; // r0@3
  char v6; // [sp+8h] [bp-18h]@3
  int v7; // [sp+Ch] [bp-14h]@3
  int v8; // [sp+10h] [bp-10h]@3
  int v9; // [sp+14h] [bp-Ch]@3

  v2 = this;
  v3 = Entity::getUniqueID(a2);
  result = *(_QWORD *)v3 ^ *((_QWORD *)v2 + 5) | (*(_QWORD *)v3 >> 32) ^ (*((_QWORD *)v2 + 5) >> 32);
  if ( !result )
  {
    EndDragonFight::spawnExitPortal(v2, 1);
    EndDragonFight::spawnNewGateway(v2);
    if ( !*((_BYTE *)v2 + 37) )
    {
      v7 = EndPodiumFeature::END_PODIUM_LOCATION;
      v9 = dword_281D338;
      v8 = BlockSource::getAboveTopSolidBlock(
             *(BlockSource **)v2,
             EndPodiumFeature::END_PODIUM_LOCATION,
             dword_281D338,
             0,
             0);
      v5 = *(_DWORD *)v2;
      v6 = *(_BYTE *)(Block::mDragonEgg + 4);
      BlockSource::setBlock(v5, (BlockPos *)&v7, &v6, 3);
    }
    result = 257;
    *((_WORD *)v2 + 18) = 257;
  }
  return result;
}


int *__fastcall EndDragonFight::spawnNewGateway(EndDragonFight *this)
{
  EndDragonFight *v1; // r10@1
  void *v2; // r8@1
  int v3; // r11@1
  int v4; // r0@2
  signed int *v5; // r1@2
  signed int v6; // r4@2
  int v7; // r1@4
  unsigned int v8; // r1@5
  unsigned int v9; // r0@7
  unsigned int v10; // r7@7
  void *v11; // r0@13
  void *v12; // r6@13
  unsigned int v13; // r0@21
  char *v14; // r7@24
  int v15; // r0@25
  int v16; // r2@25
  void *v17; // r0@26
  unsigned int *v28; // r2@29
  signed int v29; // r1@31
  float v30; // [sp+4h] [bp-A24h]@28
  int v31; // [sp+8h] [bp-A20h]@28
  int v32; // [sp+14h] [bp-A14h]@21
  char v33; // [sp+18h] [bp-A10h]@21
  unsigned int v34; // [sp+9DCh] [bp-4Ch]@23
  int v35; // [sp+9E0h] [bp-48h]@25
  int v36; // [sp+9E4h] [bp-44h]@25
  int v37; // [sp+9E8h] [bp-40h]@24
  int v38; // [sp+9ECh] [bp-3Ch]@24

  v1 = this;
  v3 = *(_QWORD *)((char *)this + 4) >> 32;
  v2 = (void *)*(_QWORD *)((char *)this + 4);
  if ( v2 == (void *)v3 )
  {
    v4 = *((_DWORD *)this + 3);
    v5 = (signed int *)v2;
    v6 = 0;
    do
    {
      if ( v5 == (signed int *)v4 )
      {
        v8 = (v3 - (signed int)v2) >> 2;
        if ( !v8 )
          v8 = 1;
        v9 = v8 + ((v3 - (signed int)v2) >> 2);
        v10 = v8 + ((v3 - (signed int)v2) >> 2);
        if ( 0 != v9 >> 30 )
          v10 = 0x3FFFFFFF;
        if ( v9 < v8 )
        if ( v10 )
        {
          if ( v10 >= 0x40000000 )
            sub_21E57F4();
          v11 = operator new(4 * v10);
          v3 = *(_QWORD *)((char *)v1 + 4) >> 32;
          v12 = (void *)*(_QWORD *)((char *)v1 + 4);
          v2 = v11;
        }
        else
          v12 = v2;
          v2 = 0;
        *(_DWORD *)((char *)v2 + v3 - (_DWORD)v12) = v6;
        if ( 0 != (v3 - (signed int)v12) >> 2 )
          _aeabi_memmove4(v2, v12);
        v3 = (int)v2 + v3 - (_DWORD)v12 + 4;
        if ( v12 )
          operator delete(v12);
        v4 = (int)v2 + 4 * v10;
        *((_DWORD *)v1 + 1) = v2;
        *((_DWORD *)v1 + 2) = v3;
        *((_DWORD *)v1 + 3) = v4;
      }
      else
        *v5 = v6;
        v7 = (int)(v5 + 1);
        *((_DWORD *)v1 + 2) = v7;
        v3 = v7;
      ++v6;
      v5 = (signed int *)v3;
    }
    while ( v6 < 20 );
    sub_21E94B4((void **)&v32, "default");
    sub_21E66B4((FILE **)&v33, (const void **)&v32);
    v13 = sub_21E67AC((int)&v33) % 0x7FFFFFFFu;
    if ( !v13 )
      v13 = 1;
    v34 = v13;
    if ( v2 != (void *)v3 )
      v14 = (char *)v2 + 4;
      v37 = 0;
      v38 = -1;
      if ( (char *)v2 + 4 != (void *)v3 )
        do
          v35 = 0;
          v36 = (v14 - (_BYTE *)v2) >> 2;
          v15 = std::uniform_int_distribution<unsigned int>::operator()<std::linear_congruential_engine<unsigned int,16807u,0u,2147483647u>>(
                  (int)&v37,
                  (int)&v34,
                  (int)&v35);
          v16 = *(_DWORD *)v14;
          *(_DWORD *)v14 = *((_DWORD *)v2 + v15);
          v14 += 4;
          *((_DWORD *)v2 + v15) = v16;
        while ( (char *)v3 != v14 );
    sub_21E67A0((FILE **)&v33);
    v17 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v32 - 4);
      if ( &pthread_create )
        __dmb();
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    v3 = *((_DWORD *)v1 + 2);
  }
  _R0 = *(_DWORD *)(v3 - 4);
  __asm
    VLDR            S2, =0.05
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
  _R0 = &mce::Math::PI;
    VMUL.F32        S0, S0, S2
    VLDR            S2, [R0]
    VSUB.F32        S0, S0, S2
    VADD.F32        S0, S0, S0
    VMOV            R5, S0
  _R0 = cosf(_R5);
    VLDR            S16, =96.0
    VMUL.F32        S18, S0, S16
  _R0 = sinf(_R5);
  __asm { VMOV            S0, R0 }
  *((_DWORD *)v1 + 2) = v3 - 4;
    VCVTR.S32.F32   S2, S18
    VMUL.F32        S0, S0, S16
    VSTR            S2, [SP,#0xA28+var_A24]
  v31 = 75;
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [SP,#0xA28+var_A1C]
  return EndDragonFight::spawnNewGateway((BlockSource **)v1, (const BlockPos *)&v30);
}


void __fastcall EndDragonFight::tickRespawnAnimation(EndDragonFight *this, unsigned __int64 *a2, signed int _R2)
{
  EndDragonFight::tickRespawnAnimation(this, a2, _R2);
}


int __fastcall EndDragonFight::findExitPortal(EndDragonFight *this, int a2, __int64 _R2)
{
  EndDragonFight *v3; // r8@1
  int v4; // r9@1
  signed int v5; // r11@2
  LevelChunk *v6; // r0@3
  int i; // r7@4
  const BlockPos *v8; // r4@8
  char *v9; // r0@8
  int v10; // r3@8
  int v11; // r4@8
  int v12; // r5@8
  int v13; // r6@8
  int result; // r0@12
  int v17; // r4@12
  const BlockPos *v18; // r1@13
  int v19; // r3@13
  int v20; // r5@13
  int v21; // r6@13
  int v22; // r7@13
  signed int v30; // [sp+0h] [bp-F8h]@1
  float v31; // [sp+4h] [bp-F4h]@30
  int v32; // [sp+10h] [bp-E8h]@30
  int v33; // [sp+14h] [bp-E4h]@30
  int v34; // [sp+18h] [bp-E0h]@30
  int v35; // [sp+1Ch] [bp-DCh]@27
  signed int v36; // [sp+20h] [bp-D8h]@27
  int v37; // [sp+24h] [bp-D4h]@27
  int v38; // [sp+28h] [bp-D0h]@27
  int v39; // [sp+2Ch] [bp-CCh]@28
  int v40; // [sp+30h] [bp-C8h]@29
  int v41; // [sp+34h] [bp-C4h]@13
  int v42; // [sp+38h] [bp-C0h]@13
  int v43; // [sp+3Ch] [bp-BCh]@13
  char v44; // [sp+40h] [bp-B8h]@13
  int v45; // [sp+44h] [bp-B4h]@13
  int v46; // [sp+48h] [bp-B0h]@13
  int v47; // [sp+4Ch] [bp-ACh]@13
  int v48; // [sp+50h] [bp-A8h]@13
  int v49; // [sp+54h] [bp-A4h]@13
  int v50; // [sp+58h] [bp-A0h]@13
  int v51; // [sp+5Ch] [bp-9Ch]@13
  int v52; // [sp+60h] [bp-98h]@13
  int v53; // [sp+64h] [bp-94h]@13
  int v54; // [sp+68h] [bp-90h]@13
  char v55; // [sp+6Ch] [bp-8Ch]@12
  int v56; // [sp+70h] [bp-88h]@12
  int v57; // [sp+78h] [bp-80h]@9
  signed int v58; // [sp+7Ch] [bp-7Ch]@9
  int v59; // [sp+80h] [bp-78h]@9
  int v60; // [sp+84h] [bp-74h]@9
  int v61; // [sp+88h] [bp-70h]@18
  int v62; // [sp+8Ch] [bp-6Ch]@19
  float v63; // [sp+90h] [bp-68h]@9
  int v64; // [sp+9Ch] [bp-5Ch]@9
  int v65; // [sp+A0h] [bp-58h]@24
  int v66; // [sp+A4h] [bp-54h]@21
  char v67; // [sp+A8h] [bp-50h]@8
  int v68; // [sp+ACh] [bp-4Ch]@8
  int v69; // [sp+B0h] [bp-48h]@8
  int v70; // [sp+B4h] [bp-44h]@8
  int v71; // [sp+B8h] [bp-40h]@8
  int v72; // [sp+BCh] [bp-3Ch]@8
  int v73; // [sp+C0h] [bp-38h]@8
  int v74; // [sp+C4h] [bp-34h]@8
  int v75; // [sp+C8h] [bp-30h]@8
  int v76; // [sp+CCh] [bp-2Ch]@8
  int v77; // [sp+D0h] [bp-28h]@8

  v3 = this;
  v4 = a2;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *(_BYTE *)this = 0;
  v30 = -8;
  do
  {
    v5 = -8;
    do
    {
      LODWORD(_R2) = v5;
      v6 = (LevelChunk *)BlockSource::getChunk(*(BlockSource **)v4, v30, _R2);
      if ( v6 )
      {
        for ( i = *((_DWORD *)LevelChunk::getBlockEntities(v6) + 2); i; i = *(_DWORD *)i )
        {
          if ( BlockEntity::isType(*(_DWORD *)(i + 8), 22) == 1 )
          {
            v8 = *(const BlockPos **)(v4 + 16);
            v9 = BlockEntity::getPosition(*(BlockEntity **)(i + 8));
            BlockPatternBuilder::match((BlockPatternBuilder *)&v67, v8, (int)v9);
            v10 = v68;
            v11 = v69;
            v12 = v70;
            v13 = v71;
            *(_DWORD *)v3 = *(_DWORD *)&v67;
            *((_DWORD *)v3 + 1) = v10;
            *((_DWORD *)v3 + 2) = v11;
            *((_DWORD *)v3 + 3) = v12;
            *((_DWORD *)v3 + 4) = v13;
            *((_DWORD *)v3 + 5) = v72;
            *((_DWORD *)v3 + 6) = v73;
            *((_DWORD *)v3 + 7) = v74;
            _R0 = v75;
            _R1 = v76;
            LODWORD(_R2) = v77;
            *((_DWORD *)v3 + 8) = v75;
            *((_DWORD *)v3 + 9) = _R1;
            *((_DWORD *)v3 + 10) = _R2;
            HIDWORD(_R2) = *(_BYTE *)v3;
            if ( *(_BYTE *)v3 )
            {
              __asm
              {
                VMOV.F32        S0, #3.0
                VMOV.F32        S2, #4.0
                VMOV            S6, R0
                VMOV            S4, R1
                VMOV            S8, R2
                VADD.F32        S6, S6, S0
                VADD.F32        S0, S4, S0
                VADD.F32        S2, S8, S2
                VSTR            S6, [SP,#0xF8+var_68]
                VSTR            S0, [SP,#0xF8+var_64]
                VSTR            S2, [SP,#0xF8+var_60]
              }
              BlockPos::BlockPos((int)&v64, (int)&v63);
              v57 = -1082130432;
              v58 = -1082130432;
              v59 = -1082130432;
              BlockPos::BlockPos((int)&v60, (int)&v57);
              result = *(_DWORD *)(v4 + 48);
              if ( result == v60 )
                result = v61;
                if ( *(_DWORD *)(v4 + 52) == v61 )
                {
                  result = v62;
                  if ( *(_DWORD *)(v4 + 56) == v62 )
                  {
                    result = v64;
                    _ZF = v64 == 0;
                    if ( !v64 )
                    {
                      result = v66;
                      _ZF = v66 == 0;
                    }
                    if ( _ZF )
                      result = 0;
                      *(_DWORD *)(v4 + 48) = 0;
                      *(_DWORD *)(v4 + 52) = v65;
                      goto LABEL_25;
                  }
                }
              return result;
            }
          }
        }
      }
      ++v5;
    }
    while ( v5 < 9 );
    ++v30;
  }
  while ( v30 < 9 );
  result = BlockSource::getHeightmapPos(
             (BlockSource *)&v55,
             *(const BlockPos **)v4,
             (const BlockPos *)&EndPodiumFeature::END_PODIUM_LOCATION);
  v17 = v56;
  if ( v56 >= 0 )
    while ( 1 )
      v18 = *(const BlockPos **)(v4 + 16);
      v41 = EndPodiumFeature::END_PODIUM_LOCATION;
      v42 = v17;
      v43 = dword_281D338;
      BlockPatternBuilder::match((BlockPatternBuilder *)&v44, v18, (int)&v41);
      v19 = v45;
      v20 = v46;
      v21 = v47;
      v22 = v48;
      *(_DWORD *)v3 = *(_DWORD *)&v44;
      *((_DWORD *)v3 + 1) = v19;
      *((_DWORD *)v3 + 2) = v20;
      *((_DWORD *)v3 + 3) = v21;
      *((_DWORD *)v3 + 4) = v22;
      *((_DWORD *)v3 + 5) = v49;
      *((_DWORD *)v3 + 6) = v50;
      _R6 = v52;
      _R7 = v53;
      _R5 = v54;
      *((_DWORD *)v3 + 7) = v51;
      *((_DWORD *)v3 + 8) = _R6;
      *((_DWORD *)v3 + 9) = _R7;
      *((_DWORD *)v3 + 10) = _R5;
      result = *(_BYTE *)v3;
      if ( *(_BYTE *)v3 )
        break;
      _VF = __OFSUB__(v17--, 1);
      if ( (v17 < 0) ^ _VF )
        return result;
    v35 = -1082130432;
    v36 = -1082130432;
    v37 = -1082130432;
    BlockPos::BlockPos((int)&v38, (int)&v35);
    result = *(_DWORD *)(v4 + 48);
    if ( result == v38 )
      result = v39;
      if ( *(_DWORD *)(v4 + 52) == v39 )
        result = v40;
        if ( *(_DWORD *)(v4 + 56) == v40 )
          __asm
            VMOV.F32        S6, #3.0
            VMOV.F32        S8, #4.0
            VMOV            S0, R5
            VMOV            S2, R7
            VMOV            S4, R6
            VADD.F32        S4, S4, S6
            VADD.F32        S2, S2, S6
            VADD.F32        S0, S0, S8
            VSTR            S4, [SP,#0xF8+var_F4]
            VSTR            S2, [SP,#0xF8+var_F0]
            VSTR            S0, [SP,#0xF8+var_EC]
          BlockPos::BlockPos((int)&v32, (int)&v31);
          *(_DWORD *)(v4 + 48) = v32;
          *(_DWORD *)(v4 + 52) = v33;
          result = v34;
LABEL_25:
          *(_DWORD *)(v4 + 56) = result;
  return result;
}


int *__fastcall EndDragonFight::spawnNewGateway(BlockSource **a1, const BlockPos *a2)
{
  BlockSource **v2; // r4@1
  const BlockPos *v3; // r5@1
  BlockSource *v4; // r6@1
  Level *v5; // r0@1
  char *v6; // r0@1
  int *result; // r0@1
  EndGatewayBlockEntity *v8; // r5@1
  void **v9; // [sp+0h] [bp-20h]@1
  int v10; // [sp+4h] [bp-1Ch]@1
  int v11; // [sp+8h] [bp-18h]@1

  v2 = a1;
  v3 = a2;
  v11 = 0;
  v9 = 0;
  v10 = 0;
  Feature::Feature((Feature *)&v9, 0);
  v9 = &off_2718A50;
  v4 = *v2;
  v5 = (Level *)BlockSource::getLevel(*v2);
  v6 = Level::getRandom(v5);
  EndGatewayFeature::place((EndGatewayFeature *)&v9, v4, v3, (Random *)v6);
  Feature::~Feature((Feature *)&v9);
  result = (int *)BlockSource::getBlockEntity(*v2, v3);
  v8 = (EndGatewayBlockEntity *)result;
  if ( result )
  {
    result = (int *)BlockEntity::isType((int)result, 24);
    if ( result == (int *)1 )
      result = EndGatewayBlockEntity::findExitPortal(v8, *v2);
  }
  return result;
}


void __fastcall EndDragonFight::saveData(EndDragonFight *this, CompoundTag *a2)
{
  CompoundTag *v2; // r8@1
  EndDragonFight *v3; // r9@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  int v8; // r2@5
  void *v9; // r0@7
  int v10; // r1@11
  void **v11; // r0@11
  void **v12; // r0@11
  int v13; // r1@11
  void *v14; // r0@15
  char *v15; // r11@16
  int v16; // r0@17
  signed int *v17; // r6@17
  signed int v18; // r5@17
  char *v19; // r7@20
  unsigned int v20; // r1@20
  unsigned int v21; // r0@22
  unsigned int v22; // r4@22
  char *v23; // r0@28
  signed int v24; // r2@29
  int v25; // r6@29
  int v26; // r4@35
  unsigned int v27; // r0@35
  signed int *v28; // r8@38
  int v29; // r0@39
  signed int v30; // r2@39
  void *v31; // r0@41
  void *v32; // r6@42
  int *v33; // r4@42
  int *i; // r7@42
  int v35; // r0@43
  void *v36; // r0@48
  unsigned int *v37; // r2@50
  signed int v38; // r1@52
  unsigned int *v39; // r2@54
  signed int v40; // r1@56
  unsigned int *v41; // r2@58
  signed int v42; // r1@60
  unsigned int *v43; // r2@62
  signed int v44; // r1@64
  unsigned int *v45; // r2@66
  signed int v46; // r1@68
  unsigned int *v47; // r2@70
  signed int v48; // r1@72
  unsigned int *v49; // r2@74
  signed int v50; // r1@76
  unsigned int *v51; // r2@98
  signed int v52; // r1@100
  CompoundTag *v53; // [sp+4h] [bp-A6Ch]@38
  void *v54; // [sp+8h] [bp-A68h]@46
  int v55; // [sp+10h] [bp-A60h]@46
  int v56; // [sp+14h] [bp-A5Ch]@43
  int v57; // [sp+18h] [bp-A58h]@43
  int v58; // [sp+20h] [bp-A50h]@35
  char v59; // [sp+24h] [bp-A4Ch]@35
  unsigned int v60; // [sp+9E8h] [bp-88h]@37
  int v61; // [sp+9ECh] [bp-84h]@11
  int v62; // [sp+9F0h] [bp-80h]@11
  int v63; // [sp+9F8h] [bp-78h]@11
  int v64; // [sp+9FCh] [bp-74h]@8
  int v65; // [sp+A00h] [bp-70h]@8
  int v66; // [sp+A04h] [bp-6Ch]@8
  int v67; // [sp+A08h] [bp-68h]@8
  int v68; // [sp+A0Ch] [bp-64h]@9
  int v69; // [sp+A10h] [bp-60h]@10
  int v70; // [sp+A18h] [bp-58h]@5
  int v71; // [sp+A20h] [bp-50h]@4
  int v72; // [sp+A28h] [bp-48h]@3
  int v73; // [sp+A30h] [bp-40h]@2
  int v74; // [sp+A38h] [bp-38h]@1
  int v75; // [sp+A3Ch] [bp-34h]@39
  int v76; // [sp+A40h] [bp-30h]@39
  int v77; // [sp+A44h] [bp-2Ch]@38
  int v78; // [sp+A48h] [bp-28h]@38

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v74, "DragonUUID");
  CompoundTag::putInt64((int)v2, (const void **)&v74, *((_QWORD *)v3 + 5), *((_QWORD *)v3 + 5) >> 32);
  v4 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
  {
    v37 = (unsigned int *)(v74 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
    }
    else
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v73, "DragonKilled");
  CompoundTag::putBoolean((int)v2, (const void **)&v73, *((_BYTE *)v3 + 36));
  v5 = (void *)(v73 - 12);
  if ( (int *)(v73 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v73 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v72, "DragonSpawned");
  CompoundTag::putBoolean((int)v2, (const void **)&v72, *((_BYTE *)v3 + 38));
  v6 = (void *)(v72 - 12);
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v72 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v71, "PreviouslyKilled");
  CompoundTag::putBoolean((int)v2, (const void **)&v71, *((_BYTE *)v3 + 37));
  v7 = (void *)(v71 - 12);
  if ( (int *)(v71 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v71 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v70, "IsRespawning");
  v8 = *((_DWORD *)v3 + 18);
  if ( v8 )
    LOBYTE(v8) = 1;
  CompoundTag::putBoolean((int)v2, (const void **)&v70, v8);
  v9 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v70 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v64 = -1082130432;
  v65 = -1082130432;
  v66 = -1082130432;
  BlockPos::BlockPos((int)&v67, (int)&v64);
  if ( *((_DWORD *)v3 + 12) != v67 || *((_DWORD *)v3 + 13) != v68 || *((_DWORD *)v3 + 14) != v69 )
    sub_21E94B4((void **)&v63, "ExitPortalLocation");
    v10 = *((_DWORD *)v3 + 12);
    v61 = 0;
    ListTagIntAdder::operator()((void **)&v61, v10);
    v11 = ListTagIntAdder::operator()((void **)&v61, *((_DWORD *)v3 + 13));
    v12 = ListTagIntAdder::operator()(v11, *((_DWORD *)v3 + 14));
    v13 = (int)*v12;
    *v12 = 0;
    v62 = v13;
    CompoundTag::put((int)v2, (const void **)&v63, &v62);
    if ( v62 )
      (*(void (**)(void))(*(_DWORD *)v62 + 4))();
    v62 = 0;
    if ( v61 )
      (*(void (**)(void))(*(_DWORD *)v61 + 4))();
    v14 = (void *)(v63 - 12);
    if ( (int *)(v63 - 12) != &dword_28898C0 )
      v49 = (unsigned int *)(v63 - 4);
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
        j_j_j_j__ZdlPv_9(v14);
  v15 = (char *)(*(_QWORD *)((char *)v3 + 4) >> 32);
  if ( v15 == (char *)*(_QWORD *)((char *)v3 + 4) )
    v16 = *((_DWORD *)v3 + 3);
    v17 = (signed int *)(*(_QWORD *)((char *)v3 + 4) >> 32);
    v18 = 0;
    do
      if ( v17 == (signed int *)v16 )
        v19 = 0;
        v20 = ((char *)v17 - v15) >> 2;
        if ( !v20 )
          v20 = 1;
        v21 = v20 + (((char *)v17 - v15) >> 2);
        v22 = v20 + (((char *)v17 - v15) >> 2);
        if ( 0 != v21 >> 30 )
          v22 = 0x3FFFFFFF;
        if ( v21 < v20 )
        if ( v22 )
        {
          if ( v22 >= 0x40000000 )
            sub_21E57F4();
          v23 = (char *)operator new(4 * v22);
          v17 = (signed int *)(*(_QWORD *)((char *)v3 + 4) >> 32);
          v15 = (char *)*(_QWORD *)((char *)v3 + 4);
          v19 = v23;
        }
        v24 = (char *)v17 - v15;
        v25 = (int)&v19[(char *)v17 - v15];
        *(_DWORD *)&v19[v24] = v18;
        if ( 0 != v24 >> 2 )
          _aeabi_memmove4(v19, v15);
        v17 = (signed int *)(v25 + 4);
        if ( v15 )
          operator delete(v15);
        v16 = (int)&v19[4 * v22];
        v15 = v19;
        *((_DWORD *)v3 + 1) = v19;
        *((_DWORD *)v3 + 2) = v17;
        *((_DWORD *)v3 + 3) = v16;
        *v17 = v18;
        ++v17;
      ++v18;
    while ( v18 < 20 );
    v26 = *((_DWORD *)v3 + 1);
    sub_21E94B4((void **)&v58, "default");
    sub_21E66B4((FILE **)&v59, (const void **)&v58);
    v27 = sub_21E67AC((int)&v59) % 0x7FFFFFFFu;
    if ( !v27 )
      v27 = 1;
    v60 = v27;
    if ( (signed int *)v26 != v17 )
      v53 = v2;
      v28 = (signed int *)(v26 + 4);
      v77 = 0;
      v78 = -1;
      if ( (signed int *)(v26 + 4) != v17 )
          v75 = 0;
          v76 = ((signed int)v28 - v26) >> 2;
          v29 = std::uniform_int_distribution<unsigned int>::operator()<std::linear_congruential_engine<unsigned int,16807u,0u,2147483647u>>(
                  (int)&v77,
                  (int)&v60,
                  (int)&v75);
          v30 = *v28;
          *v28 = *(_DWORD *)(v26 + 4 * v29);
          ++v28;
          *(_DWORD *)(v26 + 4 * v29) = v30;
        while ( v17 != v28 );
      v2 = v53;
    sub_21E67A0((FILE **)&v59);
    v31 = (void *)(v58 - 12);
    if ( (int *)(v58 - 12) != &dword_28898C0 )
      v51 = (unsigned int *)(v58 - 4);
          v52 = __ldrex(v51);
        while ( __strex(v52 - 1, v51) );
        v52 = (*v51)--;
      if ( v52 <= 0 )
        j_j_j_j__ZdlPv_9(v31);
  v32 = operator new(0x14u);
  ListTag::ListTag((int)v32);
  v33 = (int *)(*(_QWORD *)((char *)v3 + 4) >> 32);
  for ( i = (int *)*(_QWORD *)((char *)v3 + 4); v33 != i; v57 = 0 )
    std::make_unique<IntTag,char const(&)[1],int &>(&v56, (const char *)&unk_257BC67, i);
    v35 = v56;
    v56 = 0;
    v57 = v35;
    ListTag::add((int)v32, &v57);
    if ( v57 )
      (*(void (**)(void))(*(_DWORD *)v57 + 4))();
    ++i;
  sub_21E94B4((void **)&v55, "Gateways");
  v54 = v32;
  CompoundTag::put((int)v2, (const void **)&v55, (int *)&v54);
  if ( v54 )
    (*(void (**)(void))(*(_DWORD *)v54 + 4))();
  v54 = 0;
  v36 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v55 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
}


void __fastcall EndDragonFight::tryRespawn(EndDragonFight *this)
{
  EndDragonFight::tryRespawn(this);
}


void __fastcall EndDragonFight::tick(EndDragonFight *this)
{
  EndDragonFight *v1; // r4@1
  signed int v2; // r0@1
  Dimension *v3; // r0@3
  BlockSource *v4; // r5@4
  unsigned __int64 *v5; // r0@4
  __int64 v6; // r2@4
  signed int v7; // r2@8
  signed int v8; // r0@10
  int v9; // r5@11
  signed int v10; // r6@12
  LevelChunk *v11; // r0@13
  int i; // r7@14
  Level *v13; // r0@21
  char *v14; // r0@21
  int v15; // r0@23
  Entity **v16; // r8@23
  EndDragonFight *v17; // r11@23
  int v18; // r1@23
  int v19; // r0@23
  EnderDragon *v20; // r6@23
  BlockSource *v21; // r9@26
  unsigned __int64 *v22; // r0@26
  unsigned __int64 *v23; // r7@26
  int v24; // r5@26
  int v25; // r6@26
  signed int v26; // r0@26
  Entity **v27; // r0@28
  int v28; // r3@33
  EnderDragon *v29; // r6@34
  Level *v30; // r0@37
  Entity **v31; // r6@37
  __int64 v32; // kr10_8@37
  char v33; // r7@38
  char *v34; // r0@39
  bool v35; // zf@39
  char v36; // r0@39
  signed int v37; // r0@46
  int v38; // [sp+Ch] [bp-ACh]@26
  signed int v39; // [sp+10h] [bp-A8h]@26
  int v40; // [sp+14h] [bp-A4h]@26
  char v41; // [sp+18h] [bp-A0h]@26
  char v42; // [sp+34h] [bp-84h]@26
  int v43; // [sp+50h] [bp-68h]@4
  signed int v44; // [sp+54h] [bp-64h]@4
  int v45; // [sp+58h] [bp-60h]@4
  char v46; // [sp+5Ch] [bp-5Ch]@4
  char v47; // [sp+78h] [bp-40h]@4

  v1 = this;
  v2 = *((_DWORD *)this + 8);
  *((_DWORD *)v1 + 8) = v2 + 1;
  if ( v2 > 18 )
  {
    *((_DWORD *)v1 + 8) = 0;
    *(_BYTE *)(BlockSource::getDimension(*(BlockSource **)v1) + 8) = 1;
  }
  v3 = (Dimension *)BlockSource::getDimension(*(BlockSource **)v1);
  if ( !*((_DWORD *)Dimension::getEntityIdMap(v3) + 3) )
    return;
  v4 = *(BlockSource **)v1;
  AABB::AABB(COERCE_FLOAT(&v46), 0.0, 0LL, 1065353216, 1065353216, 1065353216);
  v43 = 1128792064;
  v44 = 1128792064;
  v45 = 1128792064;
  AABB::grow((AABB *)&v47, (const Vec3 *)&v46, (int)&v43);
  v5 = (unsigned __int64 *)BlockSource::fetchEntities((int)v4, 319, (int)&v47, 0);
  if ( (unsigned int)*v5 == *v5 >> 32 )
  if ( *((_DWORD *)v1 + 18) )
    if ( *((_DWORD *)v1 + 20) == *((_DWORD *)v1 + 21) )
    {
      *((_DWORD *)v1 + 18) = 0;
      *((_DWORD *)v1 + 19) = 0;
      EndDragonFight::tryRespawn(v1);
    }
    v7 = *((_DWORD *)v1 + 19);
    *((_DWORD *)v1 + 19) = v7 + 1;
    EndDragonFight::tickRespawnAnimation(v1, (unsigned __int64 *)v1 + 10, v7);
  if ( !*((_BYTE *)v1 + 36) )
    v15 = BlockSource::getLevel(*(BlockSource **)v1);
    v16 = 0;
    v17 = (EndDragonFight *)((char *)v1 + 40);
    v19 = Level::fetchEntity(v15, v18, *((_DWORD *)v1 + 10), *((_DWORD *)v1 + 11), 0);
    v20 = (EnderDragon *)v19;
    if ( v19 )
      if ( Entity::hasType(v19, 2869) == 1 )
        EnderDragon::setDragonFight(v20, v1);
      goto LABEL_46;
    v21 = *(BlockSource **)v1;
    AABB::AABB(COERCE_FLOAT(&v41), 0.0, 0LL, 1065353216, 1065353216, 1065353216);
    v38 = 1128792064;
    v39 = 1128792064;
    v40 = 1128792064;
    AABB::grow((AABB *)&v42, (const Vec3 *)&v41, (int)&v38);
    v22 = (unsigned __int64 *)BlockSource::fetchEntities((int)v21, 2869, (int)&v42, 0);
    v23 = v22;
    v24 = *v22 >> 32;
    v25 = *v22;
    v26 = v24 - v25;
    if ( 0 != (v24 - v25) >> 2 )
      if ( (unsigned int)(v26 >> 2) >= 0x40000000 )
        sub_21E57F4();
      v27 = (Entity **)operator new(v26);
      v24 = *v23 >> 32;
      v25 = *v23;
      v16 = v27;
    if ( v24 != v25 )
      _aeabi_memmove4(v16, v25);
      if ( v24 == v25 )
        sub_21E5B04("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)", 0, 0, v28);
      v29 = *v16;
      *(_QWORD *)v17 = *(_QWORD *)Entity::getUniqueID(*v16);
      EnderDragon::setDragonFight(v29, v1);
      *((_BYTE *)v1 + 38) = 1;
LABEL_45:
      operator delete(v16);
LABEL_46:
      v37 = *((_DWORD *)v1 + 6);
      *((_DWORD *)v1 + 6) = v37 + 1;
      if ( v37 >= 99 )
      {
        EndDragonFight::updateCrystalCount(v1);
        *((_DWORD *)v1 + 6) = 0;
      }
      return;
    if ( *((_BYTE *)v1 + 38) )
      goto LABEL_53;
    if ( EndDragonFight::dragonAndPortalChunksLoaded(v1) == 1 )
      EndDragonFight::createNewDragon(v1);
      EndDragonFight::spawnExitPortal(v1, 0);
      goto LABEL_44;
LABEL_53:
      if ( EndDragonFight::dragonAndPortalChunksLoaded(v1) == 1 )
        v30 = (Level *)BlockSource::getLevel(*(BlockSource **)v1);
        v32 = *(_QWORD *)Level::getAutonomousLoadedEntities(v30);
        v31 = (Entity **)v32;
        if ( (_DWORD)v32 == HIDWORD(v32) )
          goto LABEL_54;
        v33 = 0;
        do
        {
          v34 = Entity::getUniqueID(*v31);
          ++v31;
          v35 = *(_QWORD *)v34 == *(_QWORD *)v17;
          v36 = 0;
          if ( v35 )
            v36 = 1;
          v33 |= v36;
        }
        while ( (Entity **)HIDWORD(v32) != v31 );
        if ( !(v33 & 1) )
LABEL_54:
          EndDragonFight::createNewDragon(v1);
          EndDragonFight::spawnExitPortal(v1, 0);
LABEL_44:
    if ( !v16 )
    goto LABEL_45;
  v8 = *((_DWORD *)v1 + 7);
  *((_DWORD *)v1 + 7) = v8 + 1;
  if ( v8 >= 99 )
    v9 = -8;
    *((_DWORD *)v1 + 7) = 0;
    do
      v10 = -8;
      do
        LODWORD(v6) = v10;
        v11 = (LevelChunk *)BlockSource::getChunk(*(BlockSource **)v1, v9, v6);
        if ( v11 )
          for ( i = *((_DWORD *)LevelChunk::getBlockEntities(v11) + 2); i; i = *(_DWORD *)i )
          {
            if ( BlockEntity::isType(*(_DWORD *)(i + 8), 22) )
              return;
          }
        ++v10;
      while ( v10 < 9 );
      ++v9;
    while ( v9 < 9 );
    v13 = (Level *)BlockSource::getLevel(*(BlockSource **)v1);
    v14 = Level::getLevelData(v13);
    if ( LevelData::getGameType((LevelData *)v14) != 1 )
      EndDragonFight::spawnExitPortal(v1, 1);
}


signed int __fastcall EndDragonFight::hasExitPortal(EndDragonFight *this, int a2, __int64 a3)
{
  BlockSource **v3; // r4@1
  int v4; // r5@1
  signed int v5; // r6@2
  LevelChunk *v6; // r0@3
  int i; // r7@4

  v3 = (BlockSource **)this;
  v4 = -8;
  do
  {
    v5 = -8;
    do
    {
      LODWORD(a3) = v5;
      v6 = (LevelChunk *)BlockSource::getChunk(*v3, v4, a3);
      if ( v6 )
      {
        for ( i = *((_DWORD *)LevelChunk::getBlockEntities(v6) + 2); i; i = *(_DWORD *)i )
        {
          if ( BlockEntity::isType(*(_DWORD *)(i + 8), 22) )
            return 1;
        }
      }
      ++v5;
    }
    while ( v5 < 9 );
    ++v4;
  }
  while ( v4 < 9 );
  return 0;
}


signed int __fastcall EndDragonFight::dragonAndPortalChunksLoaded(EndDragonFight *this)
{
  EndDragonFight *v1; // r9@1
  signed int v2; // r6@2
  __int64 v3; // r0@3
  BlockSource *v4; // r7@3
  BlockSource *v5; // r7@4
  __int64 v6; // r0@5
  BlockSource *v7; // r7@5
  int v9; // [sp+0h] [bp-30h]@3
  __int64 v10; // [sp+8h] [bp-28h]@3
  int v11; // [sp+10h] [bp-20h]@3

  v1 = this;
  if ( BlockSource::getChunkAt(*(BlockSource **)this, (EndDragonFight *)((char *)this + 60)) )
  {
    v2 = -1;
    while ( 1 )
    {
      HIDWORD(v3) = unk_281D334;
      LODWORD(v3) = EndPodiumFeature::END_PODIUM_LOCATION + v2;
      v10 = v3;
      v11 = dword_281D338 - 1;
      v4 = *(BlockSource **)v1;
      ChunkPos::ChunkPos((ChunkPos *)&v9, (const BlockPos *)&v10);
      if ( !BlockSource::getChunk(v4, (const ChunkPos *)&v9) )
        break;
      LODWORD(v10) = EndPodiumFeature::END_PODIUM_LOCATION + v2;
      HIDWORD(v10) = unk_281D334;
      v11 = dword_281D338;
      v5 = *(BlockSource **)v1;
      if ( !BlockSource::getChunk(v5, (const ChunkPos *)&v9) )
      HIDWORD(v6) = unk_281D334;
      LODWORD(v6) = EndPodiumFeature::END_PODIUM_LOCATION + v2;
      v10 = v6;
      v11 = dword_281D338 + 1;
      v7 = *(BlockSource **)v1;
      if ( !BlockSource::getChunk(v7, (const ChunkPos *)&v9) )
      if ( ++v2 >= 2 )
        return 1;
    }
  }
  return 0;
}


void __fastcall EndDragonFight::setRespawnStage(EndDragonFight *this, int a2)
{
  EndDragonFight::setRespawnStage(this, a2);
}


void __fastcall EndDragonFight::saveData(EndDragonFight *this, CompoundTag *a2)
{
  EndDragonFight::saveData(this, a2);
}


void __fastcall EndDragonFight::resetSpikeCrystals(EndDragonFight *this)
{
  EndDragonFight::resetSpikeCrystals(this);
}


int __fastcall EndDragonFight::spawnExitPortal(EndDragonFight *this, bool a2)
{
  EndDragonFight *v2; // r4@1
  bool v3; // r5@1
  Level *v4; // r0@1
  int result; // r0@1
  const BlockPos *v6; // r5@2
  BlockSource *v7; // r6@5
  int i; // r0@6
  signed int v9; // r7@9
  BlockSource *v10; // r4@10
  Level *v11; // r0@10
  char *v12; // r0@10
  char v13; // [sp+8h] [bp-48h]@5
  int v14; // [sp+14h] [bp-3Ch]@2
  signed int v15; // [sp+18h] [bp-38h]@2
  int v16; // [sp+1Ch] [bp-34h]@2
  int v17; // [sp+20h] [bp-30h]@2
  int v18; // [sp+24h] [bp-2Ch]@3
  int v19; // [sp+28h] [bp-28h]@4
  char v20; // [sp+2Ch] [bp-24h]@2

  v2 = this;
  v3 = a2;
  v4 = (Level *)BlockSource::getLevel(*(BlockSource **)this);
  result = Level::isClientSide(v4);
  if ( !result )
  {
    EndPodiumFeature::EndPodiumFeature((EndPodiumFeature *)&v20, v3);
    v14 = -1082130432;
    v15 = -1082130432;
    v16 = -1082130432;
    BlockPos::BlockPos((int)&v17, (int)&v14);
    v6 = (EndDragonFight *)((char *)v2 + 48);
    if ( *((_DWORD *)v2 + 12) == v17 && *((_DWORD *)v2 + 13) == v18 && *((_DWORD *)v2 + 14) == v19 )
    {
      v7 = *(BlockSource **)v2;
      ChunkPos::ChunkPos((ChunkPos *)&v13, (const BlockPos *)&EndPodiumFeature::END_PODIUM_LOCATION);
      if ( BlockSource::getChunk(v7, (const ChunkPos *)&v13) )
      {
        *((_DWORD *)v2 + 12) = EndPodiumFeature::END_PODIUM_LOCATION;
        *((_DWORD *)v2 + 13) = unk_281D334;
        *((_DWORD *)v2 + 14) = dword_281D338;
        for ( i = BlockSource::getAboveTopSolidBlock(
                    *(BlockSource **)v2,
                    EndPodiumFeature::END_PODIUM_LOCATION,
                    dword_281D338,
                    0,
                    0); ; i = *((_DWORD *)v2 + 13) - 1 )
        {
          *((_DWORD *)v2 + 13) = i;
          if ( *(_BYTE *)(BlockSource::getBlock(*(BlockSource **)v2, (EndDragonFight *)((char *)v2 + 48)) + 4) != *(_BYTE *)(Block::mBedrock + 4) )
            break;
          v9 = *((_DWORD *)v2 + 13);
          if ( v9 <= *(_WORD *)(BlockSource::getDimension(*(BlockSource **)v2) + 20) )
        }
      }
    }
    v10 = *(BlockSource **)v2;
    v11 = (Level *)BlockSource::getLevel(v10);
    v12 = Level::getRandom(v11);
    EndPodiumFeature::place((EndPodiumFeature *)&v20, v10, v6, (Random *)v12);
    result = Feature::~Feature((Feature *)&v20);
  }
  return result;
}
