

char *__fastcall Dimension::_createGenerator(OverworldGenerator **a1, int a2, int a3)
{
  OverworldGenerator **v3; // r4@1
  char *result; // r0@1
  int v5; // r5@1
  int v6; // r7@2
  OverworldGenerator *v7; // r6@2
  int v8; // r8@3
  char *v9; // r0@3
  char *v10; // r6@3
  char *v11; // r7@3
  int v12; // r7@5
  int v13; // r7@6
  int v14; // r7@7

  v3 = a1;
  result = 0;
  v5 = a2;
  *v3 = 0;
  switch ( a3 )
  {
    case 0:
      v6 = Level::getSeed(*(Level **)(a2 + 16));
      v7 = (OverworldGenerator *)operator new(0x3A8u);
      OverworldGenerator::OverworldGenerator(v7, (Dimension *)v5, v6, 1);
      goto LABEL_8;
    case 2:
      v8 = Level::getSeed(*(Level **)(a2 + 16));
      v9 = Level::getLevelData(*(Level **)(v5 + 16));
      v10 = LevelData::getFlatWorldGeneratorOptions((LevelData *)v9);
      v11 = (char *)operator new(0x58u);
      FlatWorldGenerator::FlatWorldGenerator((int)v11, (Dimension *)v5, v8, (int)v10);
      result = v11 + 24;
      *v3 = (OverworldGenerator *)v11;
      goto def_18FB3D4;
    case 4:
      v12 = Level::getSeed(*(Level **)(a2 + 16));
      v7 = (OverworldGenerator *)operator new(0xB8u);
      TheEndGenerator::TheEndGenerator(v7, (Dimension *)v5, v12);
    case 1:
      v13 = Level::getSeed(*(Level **)(a2 + 16));
      OverworldGenerator::OverworldGenerator(v7, (Dimension *)v5, v13, 0);
    case 3:
      v14 = Level::getSeed(*(Level **)(a2 + 16));
      v7 = (OverworldGenerator *)operator new(0xD0u);
      NetherGenerator::NetherGenerator(v7, (Dimension *)v5, v14);
LABEL_8:
      *v3 = v7;
      result = (char *)v7 + 24;
      *(_DWORD *)(v5 + 200) = (char *)v7 + 24;
      break;
    default:
def_18FB3D4:
      *(_DWORD *)(v5 + 200) = result;
  }
  return result;
}


void __fastcall Dimension::processTickingAreaRemoves(Dimension *this)
{
  Dimension *v1; // r4@1
  _DWORD *v2; // r0@1
  void (*v3)(void); // r3@1
  __int64 v4; // r6@1
  int *v5; // r5@11
  _DWORD *v6; // r0@11
  __int64 v7; // r1@11
  _DWORD *v8; // [sp+0h] [bp-40h]@11
  __int64 v9; // [sp+8h] [bp-38h]@11
  _DWORD *v10; // [sp+10h] [bp-30h]@1
  void (*v11)(void); // [sp+18h] [bp-28h]@1
  signed int (__fastcall *v12)(int **, int); // [sp+1Ch] [bp-24h]@1
  void *ptr; // [sp+20h] [bp-20h]@1
  int v14; // [sp+24h] [bp-1Ch]@1
  int v15; // [sp+28h] [bp-18h]@1

  v1 = this;
  ptr = 0;
  v14 = 0;
  v15 = 0;
  v2 = operator new(4u);
  *v2 = &ptr;
  v3 = (void (*)(void))sub_18FE6CA;
  v10 = v2;
  v11 = (void (*)(void))sub_18FE6CA;
  v12 = sub_18FE5F2;
  v4 = *(_QWORD *)(*((_DWORD *)v1 + 4) + 24);
  if ( (_DWORD)v4 == HIDWORD(v4) )
    goto LABEL_17;
  do
  {
    if ( (*(int (**)(void))(**(_DWORD **)v4 + 524))() == *((_DWORD *)v1 + 28) && !Entity::isRemoved(*(Entity **)v4) )
    {
      if ( !v11 )
        sub_21E5F48();
      if ( v12(&v10, *(_DWORD *)v4) != 1 )
        break;
    }
    LODWORD(v4) = v4 + 4;
  }
  while ( HIDWORD(v4) != (_DWORD)v4 );
  v3 = v11;
  if ( v11 )
LABEL_17:
    v3();
  v5 = (int *)*((_DWORD *)v1 + 70);
  v6 = operator new(4u);
  LODWORD(v7) = sub_18FE756;
  *v6 = v1;
  HIDWORD(v7) = sub_18FE700;
  v8 = v6;
  v9 = v7;
  TickingAreaList::checkEntityConditions(v5, (__int64 *)&ptr, (int)&v8);
  if ( (_DWORD)v9 )
    ((void (*)(void))v9)();
  (*(void (**)(void))(**((_DWORD **)v1 + 49) + 48))();
  TickingAreaListBase::processRemoves(*((TickingAreaListBase **)v1 + 70));
  (*(void (**)(void))(**((_DWORD **)v1 + 49) + 52))();
  if ( ptr )
    operator delete(ptr);
}


int __fastcall Dimension::tryGarbageCollectStructures(int result)
{
  int v1; // r7@1
  int v2; // r4@1
  signed int v3; // r6@2
  bool v4; // cf@2
  __int64 v5; // r2@2
  int v6; // r11@9
  _DWORD *v7; // r4@9
  char *v8; // r6@9
  char *v9; // r5@9
  __int64 *v10; // r8@12
  __int64 v11; // r0@13
  unsigned int v12; // r8@13
  signed int v13; // r9@14
  char *v14; // r7@14
  unsigned int v15; // r0@14
  unsigned int v16; // r1@16
  unsigned int v17; // r11@16
  __int64 v18; // r0@23
  unsigned int v19; // r0@24
  int v20; // r2@25
  int v21; // r1@25
  int v22; // r0@26
  int v23; // r4@31
  _DWORD *v24; // r0@31
  __int64 v25; // r1@31
  int v26; // [sp+8h] [bp-58h]@9
  int v27; // [sp+Ch] [bp-54h]@9
  char v28; // [sp+10h] [bp-50h]@31
  int (*v29)(void); // [sp+18h] [bp-48h]@31
  _DWORD *v30; // [sp+20h] [bp-40h]@31
  __int64 v31; // [sp+28h] [bp-38h]@31
  int v32; // [sp+30h] [bp-30h]@2

  v1 = result;
  v2 = *(_DWORD *)(result + 200);
  if ( v2 )
  {
    sub_21E0378(&v32);
    result = v32;
    v3 = 0;
    v5 = *(_QWORD *)&v32 - *(_QWORD *)(v1 + 312);
    v4 = (unsigned int)v5 >= 0xB2C97001;
    LODWORD(v5) = 0;
    if ( !v4 )
      LODWORD(v5) = 1;
    if ( SHIDWORD(v5) < 139 )
      v3 = 1;
    if ( HIDWORD(v5) == 139 )
      v3 = v5;
    if ( !v3 )
    {
      *(_QWORD *)(v1 + 312) = *(_QWORD *)&v32;
      v26 = v2;
      v27 = v1;
      v6 = 0;
      v7 = *(_DWORD **)((*(int (**)(void))(**(_DWORD **)(v1 + 196) + 72))() + 8);
      v8 = 0;
      v9 = 0;
      while ( v7 )
      {
        v10 = (__int64 *)(v7 + 2);
        if ( v8 == (char *)v6 )
        {
          v13 = v8 - v9;
          v14 = 0;
          v15 = (v8 - v9) >> 3;
          if ( !v15 )
            v15 = 1;
          v16 = v15 + (v13 >> 3);
          v17 = v15 + (v13 >> 3);
          if ( 0 != v16 >> 29 )
            v17 = 0x1FFFFFFF;
          if ( v16 < v15 )
          if ( v17 )
          {
            if ( v17 >= 0x20000000 )
              sub_21E57F4();
            v14 = (char *)operator new(8 * v17);
          }
          v18 = *v10;
          v12 = (unsigned int)v14;
          *(_QWORD *)&v14[8 * ((v8 - v9) >> 3)] = v18;
          if ( v9 != v8 )
            v19 = 0;
            do
            {
              v20 = *(_DWORD *)&v9[v19 + 4];
              *(_DWORD *)&v14[v19] = *(_DWORD *)&v9[v19];
              v21 = (int)&v14[v19];
              v19 += 8;
              *(_DWORD *)(v21 + 4) = v20;
            }
            while ( v13 != v19 );
            v22 = (int)(v8 - 8);
            v8 = v9;
            v12 = (unsigned int)&v14[((v22 - (_DWORD)v9) & 0xFFFFFFF8) + 8];
          if ( v8 )
            operator delete(v8);
          v6 = (int)&v14[8 * v17];
          v9 = v14;
        }
        else
          v11 = *v10;
          v12 = (unsigned int)v8;
          *(_QWORD *)v8 = v11;
        v7 = (_DWORD *)*v7;
        v8 = (char *)(v12 + 8);
      }
      v23 = *(_DWORD *)(v27 + 188);
      v24 = operator new(0x10u);
      LODWORD(v25) = sub_18FE536;
      HIDWORD(v25) = sub_18FE526;
      *v24 = v26;
      v24[1] = v9;
      v24[2] = v8;
      v24[3] = v6;
      v30 = v24;
      v31 = v25;
      v29 = 0;
      result = (int)TaskGroup::queue(v23, (int)&v30, (int)&v28, 1u, 0xFFFFFFFF);
      if ( v29 )
        result = v29();
      if ( (_DWORD)v31 )
        result = ((int (*)(void))v31)();
    }
  }
  return result;
}


void __fastcall Dimension::addBlockToLighting(Dimension *this, const BlockPos *a2)
{
  Dimension::addBlockToLighting(this, a2);
}


Dimension *__fastcall Dimension::getBiomes(Dimension *this)
{
  return this + 12;
}


int __fastcall Dimension::getSkyColor(Dimension *this, BlockSource *a2, const BlockPos *a3, float a4, int a5)
{
  BlockSource *v5; // r9@1
  const BlockPos *v6; // r7@1
  BlockSource *v7; // r6@1
  int (__fastcall *v8)(BlockSource *, int, _DWORD); // r4@1
  int v9; // r0@1
  Biome *v19; // r4@1
  void (__fastcall *v20)(float *, Biome *, int); // r5@1
  int v21; // r0@1
  Weather *v22; // r7@5
  int result; // r0@18
  float v26; // [sp+0h] [bp-78h]@1

  v5 = a2;
  v6 = (const BlockPos *)LODWORD(a4);
  v7 = a3;
  v8 = *(int (__fastcall **)(BlockSource *, int, _DWORD))(*(_DWORD *)a2 + 220);
  v9 = Level::getTime(*((Level **)a2 + 4));
  __asm
  {
    VLDR            S16, [SP,#0x78+arg_0]
    VMOV            R8, S16
  }
  _R0 = v8(v5, v9, LODWORD(_R8));
  __asm { VMOV            S2, R0 }
  _R1 = &mce::Math::PI;
    VLDR            S0, [R1]
    VADD.F32        S0, S0, S0
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  _R11 = mce::Math::cos(_R0, COERCE_FLOAT(&mce::Math::PI));
  v19 = (Biome *)BlockSource::getBiome(v7, v6);
  v20 = *(void (__fastcall **)(float *, Biome *, int))(*(_DWORD *)v19 + 32);
  v21 = Biome::getTemperature(v19, v7, v6);
  v20(&v26, v19, v21);
    VMOV            S0, R11
    VLDR            S26, =0.0
    VMOV.F32        S28, #0.5
    VMOV.F32        S18, #1.0
    VMOV.F32        S30, S26
    VADD.F32        S0, S0, S28
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S0, S18
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S30, S0 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S30, S18 }
    VLDR            S0, [SP,#0x78+var_78]
    VLDR            S2, [SP,#0x78+var_74]
    VLDR            S4, [SP,#0x78+var_70]
    VMUL.F32        S24, S0, S30
    VLDR            S6, [SP,#0x78+var_6C]
    VMUL.F32        S22, S2, S30
    VMUL.F32        S20, S4, S30
    VMUL.F32        S17, S6, S30
    VSTR            S24, [R10]
    VSTR            S22, [R10,#4]
    VSTR            S20, [R10,#8]
    VSTR            S17, [R10,#0xC]
  v22 = (Weather *)*((_DWORD *)v5 + 51);
  _R6 = Weather::getFogLevel(*((Weather **)v5 + 51));
  if ( Weather::isRaining(v22) == 1 )
    __asm
    {
      VMOV            S0, R6
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm
      {
        VMOV.F32        S2, #4.0
        VMUL.F32        S0, S0, S2
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S0, S18
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S26, S0 }
        VMUL.F32        S0, S30, S28
        __asm { VMOVGT.F32      S26, S18 }
        VSUB.F32        S2, S18, S26
        VMUL.F32        S0, S0, S26
        VMUL.F32        S10, S26, S30
        VMUL.F32        S4, S24, S2
        VMUL.F32        S6, S22, S2
        VMUL.F32        S8, S20, S2
        VMUL.F32        S2, S17, S2
        VADD.F32        S24, S4, S0
        VADD.F32        S22, S6, S0
        VADD.F32        S20, S8, S0
        VADD.F32        S0, S2, S10
        VSTR            S24, [R10]
        VSTR            S22, [R10,#4]
        VSTR            S20, [R10,#8]
        VSTR            S0, [R10,#0xC]
  _R0 = Weather::getLightningLevel(v22, _R8);
    VMOV            S0, R0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) || *((_DWORD *)v5 + 76) )
      VMOV.F32        S2, #-0.75
      VLDR            S4, =0.3
      VLDR            S6, =0.59
      VMUL.F32        S4, S24, S4
      VLDR            S8, =0.11
      VMUL.F32        S6, S22, S6
      VMUL.F32        S8, S20, S8
      VMUL.F32        S0, S0, S2
      VMOV.F32        S2, #0.25
      VADD.F32        S4, S6, S4
      VADD.F32        S0, S0, S18
    if ( _ZF )
      __asm { VMOVEQ.F32      S2, S0 }
      VADD.F32        S0, S4, S8
      VLDR            S4, =0.2
      VSUB.F32        S6, S18, S2
      VMUL.F32        S0, S0, S4
      VMUL.F32        S4, S2, S24
      VMUL.F32        S0, S0, S6
      VMUL.F32        S6, S22, S2
      VMUL.F32        S2, S20, S2
      VADD.F32        S24, S0, S4
      VADD.F32        S22, S0, S6
      VADD.F32        S20, S2, S0
      VSTR            S24, [R10]
      VSTR            S22, [R10,#4]
      VSTR            S20, [R10,#8]
  result = Weather::getSkyFlashTime(v22);
  if ( result >= 1 )
    result = Weather::getSkyFlashTime(v22);
      VMOV            S0, R0
      VLDR            S2, =0.45
      VLDR            S6, =0.36
      VCVT.F32.S32    S0, S0
      VSUB.F32        S0, S0, S16
      VCMPE.F32       S0, S18
      __asm { VMOVGT.F32      S0, S18 }
      VMUL.F32        S2, S0, S2
      VSUB.F32        S4, S18, S2
      VMUL.F32        S6, S4, S24
      VMUL.F32        S8, S4, S22
      VMUL.F32        S4, S4, S20
      VADD.F32        S6, S6, S0
      VADD.F32        S0, S8, S0
      VADD.F32        S2, S4, S2
      VSTR            S6, [R10]
      VSTR            S0, [R10,#4]
      VSTR            S2, [R10,#8]
  return result;
}


signed int __fastcall Dimension::_unregisterEntity(Dimension *this, Entity *a2)
{
  Dimension *v2; // r4@1
  __int64 v3; // r0@1

  v2 = this;
  HIDWORD(v3) = Entity::getUniqueID(a2);
  LODWORD(v3) = v2 + 112;
  return j_j_j__ZNSt10_HashtableI14EntityUniqueIDSt4pairIKS0_P6EntityESaIS5_ENSt8__detail10_Select1stESt8equal_toIS0_ESt4hashIS0_ENS7_18_Mod_range_hashingENS7_20_Default_ranged_hashENS7_20_Prime_rehash_policyENS7_17_Hashtable_traitsILb1ELb0ELb1EEEE8_M_eraseESt17integral_constantIbLb1EERS2_(v3);
}


Dimension *__fastcall Dimension::getEntityIdMap(Dimension *this)
{
  return this + 112;
}


void __fastcall Dimension::_onNewTickingEntity(Dimension *this, Entity *a2)
{
  Entity *v2; // r5@1
  Dimension *v3; // r6@1
  TickWorldComponent *v4; // r4@1
  __int64 *v5; // r7@2
  unsigned __int64 *v6; // r0@2
  int *v7; // r6@3
  unsigned int *v8; // r0@4
  unsigned int v9; // r1@6
  TickingAreasManager *v10; // r0@8
  int v11; // r4@10
  unsigned int *v12; // r1@11
  unsigned int v13; // r0@13
  unsigned int *v14; // r5@17
  unsigned int v15; // r0@19
  int v16; // r4@24
  unsigned int *v17; // r1@25
  unsigned int v18; // r0@27
  unsigned int *v19; // r5@31
  unsigned int v20; // r0@33
  int v21; // [sp+0h] [bp-28h]@3
  int v22; // [sp+4h] [bp-24h]@3
  int v23; // [sp+8h] [bp-20h]@2
  int v24; // [sp+Ch] [bp-1Ch]@3

  v2 = a2;
  v3 = this;
  v4 = (TickWorldComponent *)Entity::getTickWorldComponent(a2);
  if ( !TickWorldComponent::hasTickingArea(v4) )
  {
    v5 = (__int64 *)*((_DWORD *)v3 + 70);
    v6 = (unsigned __int64 *)Entity::getUniqueID(v2);
    TickingAreaListBase::getAreaFor((int)&v23, v5, v6);
    if ( v23 )
    {
      v21 = v23;
      v7 = &v24;
      v22 = v24;
      if ( v24 )
      {
        v8 = (unsigned int *)(v24 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v9 = __ldrex(v8);
          while ( __strex(v9 + 1, v8) );
        }
        else
          ++*v8;
      }
      TickWorldComponent::setTickingArea((int)v4, (int)&v21);
      v11 = v22;
      if ( v22 )
        v12 = (unsigned int *)(v22 + 4);
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
          v13 = (*v12)--;
        if ( v13 == 1 )
          v14 = (unsigned int *)(v11 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
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
            (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
    }
    else
      v10 = (TickingAreasManager *)Level::getTickingAreasMgr(*((Level **)v3 + 4));
      TickingAreasManager::addEntityArea(v10, v3, v2);
    v16 = *v7;
    if ( *v7 )
      v17 = (unsigned int *)(v16 + 4);
      if ( &pthread_create )
        __dmb();
        do
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
      else
        v18 = (*v17)--;
      if ( v18 == 1 )
        v19 = (unsigned int *)(v16 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 8))(v16);
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          v20 = (*v19)--;
        if ( v20 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v16 + 12))(v16);
  }
}


int __fastcall Dimension::getDefaultBiome(Dimension *this)
{
  return 0;
}


void __fastcall Dimension::processTickingAreaRemoves(Dimension *this)
{
  Dimension::processTickingAreaRemoves(this);
}


Dimension *__fastcall Dimension::getEntityIdMapConst(Dimension *this)
{
  return this + 112;
}


int __fastcall Dimension::getCloudColor(Dimension *this, float a2, float a3)
{
  float v3; // r5@1
  float v5; // r6@1
  int (__fastcall *v6)(_DWORD, int, _DWORD); // r7@1
  int v7; // r0@1
  float v16; // r2@3
  int v17; // r3@3
  int v18; // r0@3
  Weather *v19; // r7@3
  int result; // r0@8

  v3 = a2;
  _R4 = this;
  v5 = a3;
  v6 = *(int (__fastcall **)(_DWORD, int, _DWORD))(*(_DWORD *)LODWORD(a2) + 220);
  v7 = Level::getTime(*(Level **)(LODWORD(a2) + 16));
  _R0 = v6(LODWORD(v3), v7, LODWORD(v5));
  __asm { VMOV            S2, R0 }
  _R1 = &mce::Math::PI;
  __asm
  {
    VLDR            S0, [R1]
    VADD.F32        S0, S0, S0
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  _R0 = mce::Math::cos(_R0, COERCE_FLOAT(&mce::Math::PI));
    VMOV            S0, R0
    VMOV.F32        S2, #0.5
    VMOV.F32        S16, #1.0
    VADD.F32        S18, S0, S2
    VLDR            S0, =0.0
    VCMPE.F32       S18, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S18, S0 }
  v16 = unk_283E614;
  v17 = qword_283E618;
    VCMPE.F32       S18, S16
  v18 = HIDWORD(qword_283E618);
  *(_DWORD *)_R4 = Color::WHITE;
  *((float *)_R4 + 1) = v16;
  *((_DWORD *)_R4 + 2) = v17;
  *((_DWORD *)_R4 + 3) = v18;
  v19 = *(Weather **)(LODWORD(v3) + 204);
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S18, S16 }
  _R0 = Weather::getRainLevel(*(Weather **)(LODWORD(v3) + 204), v5);
    VMOV            S2, R0
    VLDR            S0, [R4]
    VCMPE.F32       S2, #0.0
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
    {
      VLDR            S2, [R4,#4]
      VLDR            S4, [R4,#8]
    }
  else
      VLDR            S6, =0.3
      VLDR            S4, =0.59
      VLDR            S8, [R4,#4]
      VMUL.F32        S6, S0, S6
      VLDR            S12, =-0.95
      VMUL.F32        S4, S8, S4
      VLDR            S10, [R4,#8]
      VLDR            S14, =0.11
      VMUL.F32        S12, S2, S12
      VMUL.F32        S14, S10, S14
      VADD.F32        S4, S4, S6
      VLDR            S6, =0.57
      VADD.F32        S12, S12, S16
      VMUL.F32        S2, S2, S6
      VADD.F32        S4, S4, S14
      VMUL.F32        S0, S0, S12
      VMUL.F32        S6, S10, S12
      VMUL.F32        S4, S2, S4
      VMUL.F32        S2, S8, S12
      VADD.F32        S0, S4, S0
      VADD.F32        S2, S4, S2
      VADD.F32        S4, S6, S4
      VSTR            S0, [R4]
      VSTR            S2, [R4,#4]
      VSTR            S4, [R4,#8]
    VLDR            S6, =0.9
    VLDR            S8, =0.85
    VMUL.F32        S6, S18, S6
    VLDR            S10, =0.1
    VMUL.F32        S8, S18, S8
    VLDR            S12, =0.15
    VADD.F32        S6, S6, S10
    VADD.F32        S8, S8, S12
    VMUL.F32        S22, S0, S6
    VMUL.F32        S18, S2, S6
    VMUL.F32        S20, S4, S8
    VSTR            S22, [R4]
    VSTR            S18, [R4,#4]
    VSTR            S20, [R4,#8]
  _R0 = Weather::getLightningLevel(v19, v5);
  __asm { VMOV            S0, R0 }
  result = *(_DWORD *)(LODWORD(v3) + 304);
    VCMPE.F32       S0, #0.0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) || result )
      VLDR            S2, =0.3
      VLDR            S6, =-0.95
      VMUL.F32        S2, S22, S2
      VMUL.F32        S4, S18, S4
      VLDR            S8, =0.11
      VMUL.F32        S0, S0, S6
      VMUL.F32        S6, S20, S8
      VLDR            S4, =0.05
      VADD.F32        S0, S0, S16
    if ( _ZF )
      __asm { VMOVEQ.F32      S4, S0 }
      VADD.F32        S0, S2, S6
      VLDR            S2, =0.2
      VSUB.F32        S6, S16, S4
      VMUL.F32        S0, S0, S2
      VMUL.F32        S2, S4, S22
      VMUL.F32        S6, S18, S4
      VMUL.F32        S4, S20, S4
      VADD.F32        S2, S0, S2
      VADD.F32        S6, S0, S6
      VSTR            S2, [R4]
      VSTR            S6, [R4,#4]
      VSTR            S0, [R4,#8]
  return result;
}


int __fastcall Dimension::fetchNearestAttackablePlayer(Dimension *this, Entity *a2, float a3)
{
  Entity *v3; // r5@1
  Dimension *v4; // r6@1
  int v5; // r4@1
  int v6; // r0@1
  int v8; // [sp+0h] [bp-20h]@1

  v3 = a2;
  v4 = this;
  v5 = LODWORD(a3);
  v6 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)a2 + 52))(a2);
  BlockPos::BlockPos((int)&v8, v6);
  return Dimension::fetchNearestAttackablePlayer((int)v4, (int)&v8, v5, (int)v3);
}


int __fastcall Dimension::getStarBrightness(Dimension *this, float a2)
{
  Dimension *v2; // r5@1
  float v3; // r4@1
  int (__fastcall *v4)(Dimension *, int, _DWORD); // r6@1
  int v5; // r0@1
  int result; // r0@9

  v2 = this;
  v3 = a2;
  v4 = *(int (__fastcall **)(Dimension *, int, _DWORD))(*(_DWORD *)this + 220);
  v5 = Level::getTime(*((Level **)this + 4));
  _R0 = v4(v2, v5, LODWORD(v3));
  __asm { VMOV            S2, R0 }
  _R1 = &mce::Math::PI;
  __asm
  {
    VLDR            S0, [R1]
    VADD.F32        S0, S0, S0
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  _R6 = mce::Math::cos(_R0, COERCE_FLOAT(&mce::Math::PI));
  _R0 = Weather::getRainLevel(*((Weather **)v2 + 51), v3);
    VMOV.F32        S0, #-3.0
    VLDR            S6, =0.0
    VMOV            S2, R0
    VMOV.F32        S4, #1.0
    VMOV.F32        S10, S6
    VMOV.F32        S8, #0.25
    VMOV            S2, R6
    VADD.F32        S2, S2, S2
    VADD.F32        S0, S0, S4
    VSUB.F32        S2, S8, S2
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S0, S4
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S10, S0 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S10, S4 }
    VMUL.F32        S0, S10, S2
    VMOV.F32        S2, #0.5
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S0, S6 }
    __asm { VMOVGT.F32      S0, S4 }
    VMUL.F32        S0, S0, S0
    VMUL.F32        S0, S0, S2
  return result;
}


int __fastcall Dimension::tickRedstone(Dimension *this)
{
  Dimension *v1; // r4@1
  signed int v2; // r0@1
  __int64 v3; // kr00_8@1
  int result; // r0@3

  v1 = this;
  v3 = *((_QWORD *)this + 27);
  v2 = *((_QWORD *)this + 27) >> 32;
  if ( v2 >= (signed int)v3 )
  {
    CircuitSystem::evaluate(*((CircuitSystem **)v1 + 53), *((BlockSource **)v1 + 16));
    v2 = 0;
    *((_DWORD *)v1 + 55) = 0;
  }
  result = v2 + 1;
  *((_DWORD *)v1 + 55) = result;
  return result;
}


signed int __fastcall Dimension::getClearColorScale(Dimension *this)
{
  return 1023410176;
}


int __fastcall Dimension::fetchNearestPlayer(Dimension *this, float a2, float a3, float a4, float a5)
{
  Dimension *v9; // r4@1
  _DWORD *v10; // r0@1
  int (__fastcall *v11)(void **, int **, int); // r3@1
  __int64 v12; // r6@1
  _DWORD *v14; // [sp+0h] [bp-40h]@1
  int (__fastcall *v15)(void **, int **, int); // [sp+8h] [bp-38h]@1
  signed int (__fastcall *v16)(int, Entity *); // [sp+Ch] [bp-34h]@1
  float v17; // [sp+10h] [bp-30h]@1
  float v18; // [sp+14h] [bp-2Ch]@1
  float v19; // [sp+18h] [bp-28h]@1
  int v20; // [sp+1Ch] [bp-24h]@1
  int v21; // [sp+20h] [bp-20h]@1
  float v22; // [sp+24h] [bp-1Ch]@1
  float v23; // [sp+28h] [bp-18h]@1

  __asm { VLDR            S0, [SP,#0x40+arg_0] }
  v9 = this;
  __asm { VMUL.F32        S2, S0, S0 }
  v21 = -1082130432;
  v20 = 0;
  __asm
  {
    VSTR            S0, [SP,#0x40+var_18]
    VSTR            S2, [SP,#0x40+var_1C]
  }
  v17 = a2;
  v18 = a3;
  v19 = a4;
  v10 = operator new(0x14u);
  v11 = sub_18FE7E8;
  *v10 = &v23;
  v10[1] = &v22;
  v10[2] = &v21;
  v10[3] = &v20;
  v10[4] = &v17;
  v14 = v10;
  v15 = sub_18FE7E8;
  v16 = sub_18FE78C;
  v12 = *(_QWORD *)(*((_DWORD *)v9 + 4) + 24);
  if ( (_DWORD)v12 == HIDWORD(v12) )
    goto LABEL_14;
  do
    if ( (*(int (__cdecl **)(_DWORD))(**(_DWORD **)v12 + 524))(*(_DWORD *)v12) == *((_DWORD *)v9 + 28)
      && !Entity::isRemoved(*(Entity **)v12) )
    {
      if ( !v15 )
        sub_21E5F48();
      if ( v16((int)&v14, *(Entity **)v12) != 1 )
        break;
    }
    LODWORD(v12) = v12 + 4;
  while ( HIDWORD(v12) != (_DWORD)v12 );
  v11 = v15;
  if ( v15 )
LABEL_14:
    ((void (__cdecl *)(_DWORD **))v11)(&v14);
  return v20;
}


int __fastcall Dimension::getMoonBrightness(Dimension *this)
{
  _R0 = Level::getTime(*((Level **)this + 4));
  _R1 = 91625969;
  __asm { SMMUL.W         R0, R0, R1 }
  return Dimension::MOON_BRIGHTNESS_PER_PHASE[((signed int)_R0 >> 9)
                                            + (_R0 >> 31)
                                            - ((((signed int)_R0 >> 9)
                                              + (_R0 >> 31)
                                              + ((unsigned int)((signed int)(((signed int)_R0 >> 9) + (_R0 >> 31)) >> 31) >> 29)) & 0x3FFFFFF8)];
}


__int64 __fastcall Dimension::init(Dimension *this)
{
  Dimension *v1; // r4@1
  int v2; // r0@1
  void *v3; // r5@2
  int v4; // r0@2
  int v5; // r1@5
  signed int v6; // r2@7
  char *v7; // r0@9
  int v8; // r5@10
  int v9; // r1@10
  void (__fastcall *v10)(int *, int, int *, int); // r6@10
  char *v11; // r0@10
  int v12; // r0@10
  void *v13; // r5@10
  int v14; // r0@10
  int v15; // r0@12
  char *v16; // r0@19
  char *v17; // r0@20
  char *v18; // r6@20
  void *v19; // r5@20
  int v20; // r0@20
  int v21; // r0@22
  BlockSourceListener *v22; // r6@24
  int v23; // r7@24
  void *v24; // r5@24
  int v25; // r0@24
  void *v26; // r5@26
  RuntimeLightingManager *v27; // r0@26
  RuntimeLightingManager *v28; // r0@27
  __int64 result; // r0@28
  char v30; // [sp+8h] [bp-30h]@28
  int v31; // [sp+10h] [bp-28h]@10
  int v32; // [sp+14h] [bp-24h]@10
  int v33; // [sp+18h] [bp-20h]@10
  int v34; // [sp+1Ch] [bp-1Ch]@10
  int v35; // [sp+20h] [bp-18h]@20

  v1 = this;
  v2 = *((_DWORD *)this + 4);
  if ( *(_BYTE *)(v2 + 5824) )
  {
    *((_DWORD *)v1 + 50) = 0;
    v3 = operator new(0x58u);
    NetworkChunkSource::NetworkChunkSource((int)v3, v1);
    v4 = *((_DWORD *)v1 + 49);
    *((_DWORD *)v1 + 49) = v3;
    if ( v4 )
      (*(void (**)(void))(*(_DWORD *)v4 + 4))();
  }
  else
    v5 = *((_DWORD *)v1 + 28);
    if ( v5 == 1 )
    {
      v6 = 3;
    }
    else if ( v5 == 2 )
      v6 = 4;
    else
      v7 = Level::getLevelData((Level *)v2);
      v6 = LevelData::getGenerator((LevelData *)v7);
    Dimension::_createGenerator((OverworldGenerator **)&v33, (int)v1, v6);
    v8 = Level::getLevelStorage(*((Level **)v1 + 4));
    v9 = v33;
    v10 = *(void (__fastcall **)(int *, int, int *, int))(*(_DWORD *)v8 + 20);
    v33 = 0;
    v31 = v9;
    v11 = Level::getLevelData(*((Level **)v1 + 4));
    v12 = LevelData::getStorageVersion((LevelData *)v11);
    v10(&v32, v8, &v31, v12);
    v13 = operator new(0x34u);
    v14 = v32;
    v32 = 0;
    v34 = v14;
    MainChunkSource::MainChunkSource((int)v13, &v34);
    if ( v34 )
      (*(void (**)(void))(*(_DWORD *)v34 + 4))();
    v15 = *((_DWORD *)v1 + 49);
    *((_DWORD *)v1 + 49) = v13;
    if ( v15 )
      (*(void (**)(void))(*(_DWORD *)v15 + 4))();
    if ( v32 )
      (*(void (**)(void))(*(_DWORD *)v32 + 4))();
    if ( v31 )
      (*(void (**)(void))(*(_DWORD *)v31 + 4))();
    v31 = 0;
  v16 = Level::getLevelData(*((Level **)v1 + 4));
  if ( !LevelData::getGenerator((LevelData *)v16) )
    v17 = Level::getLevelData(*((Level **)v1 + 4));
    v18 = LevelData::getWorldCenter((LevelData *)v17);
    v19 = operator new(0x50u);
    v20 = *((_DWORD *)v1 + 49);
    *((_DWORD *)v1 + 49) = 0;
    v35 = v20;
    WorldLimitChunkSource::WorldLimitChunkSource((int)v19, &v35, (const BlockPos *)v18);
    if ( v35 )
      (*(void (**)(void))(*(_DWORD *)v35 + 4))();
    v21 = *((_DWORD *)v1 + 49);
    *((_DWORD *)v1 + 49) = v19;
    if ( v21 )
      (*(void (**)(void))(*(_DWORD *)v21 + 4))();
  v22 = (BlockSourceListener *)*((_DWORD *)v1 + 4);
  v23 = *((_DWORD *)v1 + 49);
  v24 = operator new(0x70u);
  BlockSource::BlockSource((int)v24, v22, (int)v1, v23, 1, 0);
  v25 = *((_DWORD *)v1 + 16);
  *((_DWORD *)v1 + 16) = v24;
  if ( v25 )
    (*(void (**)(void))(*(_DWORD *)v25 + 4))();
  v26 = operator new(0x48u);
  RuntimeLightingManager::RuntimeLightingManager((int)v26, (int)v1);
  v27 = (RuntimeLightingManager *)*((_DWORD *)v1 + 77);
  *((_DWORD *)v1 + 77) = v26;
  if ( v27 )
    v28 = RuntimeLightingManager::~RuntimeLightingManager(v27);
    operator delete((void *)v28);
  (*(void (__fastcall **)(Dimension *))(*(_DWORD *)v1 + 128))(v1);
  sub_21E0378(&v30);
  result = *(_QWORD *)&v30;
  *((_QWORD *)v1 + 39) = *(_QWORD *)&v30;
  return result;
}


int __fastcall Dimension::transferEntity(int a1, int a2, const CompoundTag **a3)
{
  int v3; // r7@1
  int v4; // r5@1
  const CompoundTag **v5; // r6@1
  int result; // r0@1
  BlockSource *v7; // r4@2
  BlockSource *v8; // r1@3
  int v9; // r4@7
  unsigned int v10; // r7@7
  unsigned int v11; // r5@7
  int v12; // r0@7
  int v13; // r10@8
  int v14; // r4@8
  bool v15; // zf@9
  int v16; // r8@12
  bool v17; // zf@18
  char *v18; // r4@22
  char *v19; // r5@22
  int v20; // r8@23
  unsigned int v21; // r5@31
  _DWORD *v22; // r1@31
  int v23; // r0@31
  int *v24; // r2@31
  int v25; // r2@32
  bool v26; // zf@32
  const CompoundTag **v27; // r1@37 OVERLAPPED
  const CompoundTag **v28; // r2@37
  const CompoundTag *v29; // r2@38
  unsigned __int64 *v30; // [sp+0h] [bp-60h]@7
  int v31; // [sp+8h] [bp-58h]@7
  char v32; // [sp+Ch] [bp-54h]@22
  __int64 ptr; // [sp+14h] [bp-4Ch]@22
  int v34; // [sp+1Ch] [bp-44h]@22
  __int64 v35; // [sp+20h] [bp-40h]@7
  int v36; // [sp+28h] [bp-38h]@4
  int v37; // [sp+2Ch] [bp-34h]@3
  char v38; // [sp+30h] [bp-30h]@2

  v3 = a1;
  v4 = a2;
  v5 = a3;
  result = *(_BYTE *)(*(_DWORD *)(a1 + 16) + 5824);
  if ( !result )
  {
    v7 = *(BlockSource **)(v3 + 64);
    BlockPos::BlockPos((int)&v38, a2);
    if ( BlockSource::hasChunksAt(v7, (const BlockPos *)&v38, 50) == 1 )
    {
      EntityFactory::loadEntity((EntityFactory *)&v37, *v5);
      v8 = *(BlockSource **)(v3 + 64);
      if ( v37 )
      {
        v36 = v37;
        v37 = 0;
        Dimension::_completeEntityTransfer(v3, v8, (Entity **)&v36);
        if ( v36 )
          (*(void (**)(void))(*(_DWORD *)v36 + 32))();
        v36 = 0;
      }
      else
        EntityFactory::fixLegacyEntity(v8, *v5, *v5);
      result = v37;
        result = (*(int (**)(void))(*(_DWORD *)v37 + 32))();
    }
    else
      ChunkPos::ChunkPos((int)&v35, v4);
      v31 = v3;
      v9 = *(_DWORD *)(v3 + 252);
      v30 = (unsigned __int64 *)(v3 + 252);
      v10 = *(_DWORD *)(v3 + 256);
      v11 = 522133279 * v35 ^ HIDWORD(v35);
      v12 = *(_DWORD *)(v9 + 4 * (v11 % v10));
      if ( !v12 )
        goto LABEL_22;
      v13 = *(_DWORD *)v12;
      v14 = *(_DWORD *)(*(_DWORD *)v12 + 32);
      while ( 1 )
        v15 = v14 == v11;
        if ( v14 == v11 )
          v15 = *(_QWORD *)(v13 + 8) == v35;
        if ( v15 )
          break;
        v16 = *(_DWORD *)v13;
        if ( *(_DWORD *)v13 )
        {
          v14 = *(_DWORD *)(v16 + 32);
          v12 = v13;
          v13 = *(_DWORD *)v13;
          if ( *(_DWORD *)(v16 + 32) % v10 == v11 % v10 )
            continue;
        }
      v17 = v12 == 0;
      if ( v12 )
        v12 = *(_DWORD *)v12;
        v17 = v12 == 0;
      if ( v17 )
LABEL_22:
        ptr = 0LL;
        v34 = 0;
        std::_Hashtable<ChunkPos,std::pair<ChunkPos const,std::vector<std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>>,std::allocator<std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>>>>>,std::allocator<std::pair<ChunkPos const,std::vector<std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>>,std::allocator<std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>>>>>>,std::__detail::_Select1st,std::equal_to<ChunkPos>,std::hash<ChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<ChunkPos&,std::vector<std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>>,std::allocator<std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>>>>>(
          &v32,
          v30,
          &v35,
          (int)&ptr);
        v18 = (char *)HIDWORD(ptr);
        v19 = (char *)ptr;
        if ( (_DWORD)ptr == HIDWORD(ptr) )
          v20 = v31;
        else
          do
          {
            if ( *(_DWORD *)v19 )
              (*(void (**)(void))(**(_DWORD **)v19 + 4))();
            *(_DWORD *)v19 = 0;
            v19 += 4;
          }
          while ( v18 != v19 );
          v19 = (char *)ptr;
        if ( v19 )
          operator delete(v19);
        v21 = 522133279 * v35 ^ HIDWORD(v35);
        v22 = *(_DWORD **)(*(_QWORD *)(v20 + 252) + 4 * (v21 % (unsigned int)(*(_QWORD *)(v20 + 252) >> 32)));
        v23 = *v22;
        v24 = (int *)(*v22 + 32);
        while ( 1 )
          v25 = *v24;
          v26 = v25 == v21;
          if ( v25 == v21 )
            v26 = *(_QWORD *)(v23 + 8) == v35;
          if ( v26 )
            break;
          v22 = (_DWORD *)v23;
          v24 = (int *)(*(_DWORD *)v23 + 32);
          v23 = *(_DWORD *)v23;
        v12 = *v22;
        v31 = v20;
      *(_QWORD *)&v27 = *(_QWORD *)(v12 + 20);
      if ( v27 == v28 )
        std::vector<std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>>,std::allocator<std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>>>>::_M_emplace_back_aux<std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>>>(
          (_QWORD *)(v12 + 16),
          (int *)v5);
        v29 = *v5;
        *v5 = 0;
        *v27 = v29;
        *(_DWORD *)(v12 + 20) += 4;
      result = 1;
      *(_BYTE *)(v31 + 8) = 1;
  }
  return result;
}


void __fastcall Dimension::addBlockToLighting(Dimension *this, const BlockPos *a2)
{
  RuntimeLightingManager *v2; // r0@1

  v2 = (RuntimeLightingManager *)*((_DWORD *)this + 77);
  if ( v2 )
    j_j_j__ZN22RuntimeLightingManager18addBlockToLightingERK8BlockPos(v2, a2);
  else
    JUMPOUT(0, Dimension::acquireDiscardedChunk);
}


void __fastcall Dimension::acquireDiscardedChunk(int a1, LevelChunk **a2)
{
  Dimension::acquireDiscardedChunk(a1, a2);
}


signed int __fastcall Dimension::hasGround(Dimension *this)
{
  return 1;
}


signed int __fastcall Dimension::isDay(Dimension *this)
{
  unsigned int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 119);
  result = 0;
  if ( v1 < 4 )
    result = 1;
  return result;
}


Dimension *__fastcall Dimension::getBrightnessRamp(Dimension *this)
{
  return this + 62;
}


int __fastcall Dimension::setUltraWarm(int result, bool a2)
{
  *(_BYTE *)(result + 116) = a2;
  return result;
}


int __fastcall Dimension::getSkyDarken(int result, int a2)
{
  *(_BYTE *)result = *(_BYTE *)(a2 + 119);
  return result;
}


int __fastcall Dimension::getSunIntensity(Dimension *this, float a2, const Vec3 *a3, float a4)
{
  Dimension *v4; // r4@1
  float v5; // r7@1
  Weather *v8; // r8@1
  int (__fastcall *v9)(Dimension *, int, _DWORD); // r5@1
  int v10; // r0@1
  int result; // r0@10

  v4 = this;
  v5 = a2;
  _R9 = a4;
  _R6 = a3;
  v8 = (Weather *)*((_DWORD *)this + 51);
  v9 = *(int (__fastcall **)(Dimension *, int, _DWORD))(*(_DWORD *)this + 220);
  v10 = Level::getTime(*((Level **)this + 4));
  _R0 = v9(v4, v10, LODWORD(v5));
  __asm { VMOV            S2, R0 }
  _R1 = &mce::Math::PI;
  __asm
  {
    VLDR            S0, [R1]
    VADD.F32        S0, S0, S0
    VMUL.F32        S0, S2, S0
    VMOV            R4, S0
  }
  _R0 = sinf(_R4);
  __asm { VMOV            S16, R0 }
  _R0 = cosf(_R4);
    VLDR            S2, [R6]
    VMOV.F32        S0, #1.0
    VLDR            S4, [R6,#4]
    VMOV            S6, R0
    VMUL.F32        S2, S2, S16
    VLDR            S8, [R6,#8]
    VMOV.F32        S10, #0.25
    VMUL.F32        S4, S4, S6
    VSUB.F32        S2, S0, S2
    VMUL.F32        S8, S8, S10
    VADD.F32        S2, S2, S4
    VMOV.F32        S4, #0.5
    VADD.F32        S2, S2, S8
    VLDR            S8, =-0.1
    VCMPE.F32       S6, S8
    VMRS            APSR_nzcv, FPSCR
    VMUL.F32        S4, S2, S4
    VMOV            S2, R9
  if ( _NF ^ _VF )
    __asm { VLDR            S8, =0.0 }
  else
    __asm
    {
      VCMPE.F32       S6, #0.0
      VMRS            APSR_nzcv, FPSCR
      VMOV.F32        S8, S0
    }
    if ( _NF ^ _VF )
      __asm
      {
        VMOVLT.F32      S8, #10.0
        VMOVLT.F32      S10, #1.0
        VMULLT.F32      S6, S6, S8
        VADDLT.F32      S8, S6, S10
      }
    VMUL.F32        S4, S4, S8
    VMOV.F32        S6, S2
    VCMPE.F32       S4, S2
    VCMPE.F32       S4, S0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S6, S4 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S6, S0 }
    VSUB.F32        S0, S0, S2
    VSUB.F32        S2, S6, S2
    VDIV.F32        S16, S2, S0
  _R0 = Weather::getFogLevel(v8);
    VMOV            S0, R0
    VMUL.F32        S0, S16, S0
    VSUB.F32        S0, S16, S0
    VMOV            R0, S0
  return result;
}


int __fastcall Dimension::fetchNearestAttackablePlayer(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r5@1
  _DWORD *v6; // r0@1
  void (*v7)(void); // r3@1
  __int64 v8; // r6@1
  _DWORD *v10; // [sp+4h] [bp-34h]@1
  int (__fastcall *v11)(void **, int **, int); // [sp+Ch] [bp-2Ch]@1
  signed int (__fastcall *v12)(int *, Entity *); // [sp+10h] [bp-28h]@1
  int v13; // [sp+14h] [bp-24h]@1
  int v14; // [sp+18h] [bp-20h]@1
  int v15; // [sp+1Ch] [bp-1Ch]@1
  int v16; // [sp+20h] [bp-18h]@1

  v4 = a1;
  v15 = a4;
  v16 = a3;
  v14 = -1082130432;
  v13 = 0;
  v5 = a2;
  v6 = operator new(0x14u);
  v7 = (void (*)(void))sub_18FE978;
  *v6 = &v14;
  v6[1] = v5;
  v6[2] = &v16;
  v6[3] = &v15;
  v6[4] = &v13;
  v10 = v6;
  v11 = sub_18FE978;
  v12 = sub_18FE828;
  v8 = *(_QWORD *)(*(_DWORD *)(v4 + 16) + 24);
  if ( (_DWORD)v8 == HIDWORD(v8) )
    goto LABEL_14;
  do
  {
    if ( (*(int (**)(void))(**(_DWORD **)v8 + 524))() == *(_DWORD *)(v4 + 112) && !Entity::isRemoved(*(Entity **)v8) )
    {
      if ( !v11 )
        sub_21E5F48();
      if ( v12((int *)&v10, *(Entity **)v8) != 1 )
        break;
    }
    LODWORD(v8) = v8 + 4;
  }
  while ( HIDWORD(v8) != (_DWORD)v8 );
  v7 = (void (*)(void))v11;
  if ( v11 )
LABEL_14:
    v7();
  return v13;
}


Entity *__fastcall Dimension::_completeEntityTransfer(int a1, BlockSource *a2, Entity **a3)
{
  Entity **v3; // r5@1
  int v4; // r6@1
  BlockSource *v5; // r8@1
  int v6; // r0@1
  Entity *v7; // r7@1
  int v8; // r4@1
  int v9; // r0@2
  __int64 v10; // r1@2
  int v16; // r6@2
  Level *v17; // t1@3
  PortalForcer *v18; // r0@3
  Entity *v19; // r2@4
  void (*v20)(void); // r3@4
  Entity *result; // r0@4
  Entity *v22; // [sp+0h] [bp-38h]@4
  char v23; // [sp+4h] [bp-34h]@2
  __int64 v24; // [sp+10h] [bp-28h]@2
  int v25; // [sp+18h] [bp-20h]@2

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = (*(int (**)(void))(*(_DWORD *)*a3 + 524))();
  v7 = *v3;
  v8 = v6;
  Entity::setRegion(*v3, v5);
  if ( v8 == 2 )
  {
    v9 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v7 + 52))(v7);
    v10 = *(_QWORD *)v9;
    v25 = *(_DWORD *)(v9 + 8);
    v24 = v10;
    BlockPos::BlockPos((int)&v23, (int)&v24);
    _R0 = BlockSource::getAboveTopSolidBlock(v5, (const BlockPos *)&v23, 0, 0);
    __asm
    {
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VSTR            S0, [SP,#0x38+var_28+4]
    }
    (*(void (__fastcall **)(Entity *, __int64 *))(*(_DWORD *)v7 + 48))(v7, &v24);
    v16 = v4 + 16;
  }
  else
    v17 = *(Level **)(v4 + 16);
    v18 = (PortalForcer *)Level::getPortalForcer(v17);
    PortalForcer::force(v18, v7);
  v19 = *v3;
  v20 = *(void (**)(void))(**(_DWORD **)v16 + 44);
  *v3 = 0;
  v22 = v19;
  v20();
  result = v22;
  if ( v22 )
    result = (Entity *)(*(int (**)(void))(*(_DWORD *)v22 + 32))();
  return result;
}


int __fastcall Dimension::createNew(HellDimension **a1, int a2, Level *a3)
{
  Level *v3; // r5@1
  HellDimension **v4; // r4@1
  int result; // r0@4
  HellDimension *v6; // r6@5
  HellDimension *v7; // r6@6
  NormalDimension *v8; // r6@7

  v3 = a3;
  v4 = a1;
  if ( a2 )
  {
    if ( a2 == 2 )
    {
      v7 = (HellDimension *)operator new(0x160u);
      result = TheEndDimension::TheEndDimension((int)v7, (int)v3);
      *v4 = v7;
    }
    else if ( a2 == 1 )
      v6 = (HellDimension *)operator new(0x140u);
      result = HellDimension::HellDimension(v6, v3);
      *v4 = v6;
    else
      result = 0;
      *v4 = 0;
  }
  else
    v8 = (NormalDimension *)operator new(0x140u);
    result = NormalDimension::NormalDimension(v8, v3);
    *v4 = v8;
  return result;
}


int __fastcall Dimension::isValidSpawn(Dimension *this, int a2, int a3)
{
  return 0;
}


signed int __fastcall Dimension::showSky(Dimension *this)
{
  return 1;
}


void __fastcall Dimension::deserialize(Dimension *this, const CompoundTag *a2)
{
  Dimension::deserialize(this, a2);
}


int __fastcall Dimension::getSunlightDirection(Dimension *this, float a2, int a3)
{
  float v3; // r6@1
  Dimension *v4; // r4@1
  int v5; // r5@1
  int (__fastcall *v6)(_DWORD, int, int); // r7@1
  int v7; // r0@1
  unsigned __int64 v15; // r0@1

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = *(int (__fastcall **)(_DWORD, int, int))(*(_DWORD *)LODWORD(a2) + 220);
  v7 = Level::getTime(*(Level **)(LODWORD(a2) + 16));
  _R0 = v6(LODWORD(v3), v7, v5);
  __asm { VMOV            S2, R0 }
  _R1 = &mce::Math::PI;
  __asm
  {
    VLDR            S0, [R1]
    VADD.F32        S0, S0, S0
    VMUL.F32        S0, S2, S0
    VMOV            R5, S0
  }
  *(_DWORD *)v4 = COERCE_UNSIGNED_INT(sinf(_R5)) ^ 0x80000000;
  v15 = __PAIR__(1048576000, COERCE_UNSIGNED_INT(cosf(_R5)));
  *(_QWORD *)(v4 + 2) = v15;
  return v15;
}


void __fastcall Dimension::deserialize(Dimension *this, const CompoundTag *a2)
{
  Dimension *v2; // r10@1
  const CompoundTag *v3; // r8@1
  int v4; // r6@2
  int v5; // r9@3
  char *v6; // r5@3
  char *v7; // r7@3
  int v8; // r0@11
  ListTag *v9; // r4@11
  void *v10; // r0@11
  void **v11; // r5@14
  void **v12; // r9@14
  int v13; // r7@14
  unsigned int *v14; // r2@15
  signed int v15; // r1@17
  unsigned int *v16; // r2@19
  signed int v17; // r1@21
  unsigned int *v18; // r2@23
  signed int v19; // r1@25
  int v20; // r6@39
  int v21; // r11@40
  void *v22; // r0@40
  int v23; // r7@41
  void *v24; // r0@41
  char *v25; // r4@42
  char *v26; // r5@42
  __int64 v27; // r4@49
  unsigned int v28; // r6@49
  unsigned int v29; // r7@49
  int v30; // r0@49
  int v31; // r9@50
  int v32; // r4@50
  bool v33; // zf@51
  int v34; // r10@54
  int v35; // r4@56
  int *v36; // r6@56
  void **v37; // r5@56
  CompoundTag *v38; // r11@56
  ListTag *v39; // r7@62
  void *v40; // r0@62
  int v41; // r5@65
  int v42; // r0@66
  __int64 v43; // r0@66
  unsigned int *v44; // r2@75
  signed int v45; // r1@77
  unsigned __int64 *v46; // [sp+8h] [bp-80h]@14
  Dimension *v47; // [sp+Ch] [bp-7Ch]@50
  ListTag *v48; // [sp+10h] [bp-78h]@11
  int v49; // [sp+14h] [bp-74h]@40
  int *v50; // [sp+18h] [bp-70h]@14
  int v51; // [sp+1Ch] [bp-6Ch]@40
  int v52; // [sp+20h] [bp-68h]@56
  int v53; // [sp+28h] [bp-60h]@23
  char v54; // [sp+2Ch] [bp-5Ch]@42
  __int64 v55; // [sp+34h] [bp-54h]@42
  int v56; // [sp+3Ch] [bp-4Ch]@42
  unsigned __int64 v57; // [sp+40h] [bp-48h]@42
  int v58; // [sp+4Ch] [bp-3Ch]@14
  int v59; // [sp+54h] [bp-34h]@14
  int v60; // [sp+5Ch] [bp-2Ch]@11

  v2 = this;
  v3 = a2;
  if ( !*(_BYTE *)(*((_DWORD *)this + 4) + 5824) )
  {
    v4 = *((_DWORD *)this + 65);
    if ( v4 )
    {
      do
      {
        v5 = *(_DWORD *)v4;
        v6 = (char *)(*(_QWORD *)(v4 + 16) >> 32);
        v7 = (char *)*(_QWORD *)(v4 + 16);
        if ( v7 != v6 )
        {
          do
          {
            if ( *(_DWORD *)v7 )
              (*(void (**)(void))(**(_DWORD **)v7 + 4))();
            *(_DWORD *)v7 = 0;
            v7 += 4;
          }
          while ( v6 != v7 );
          v7 = *(char **)(v4 + 16);
        }
        if ( v7 )
          operator delete(v7);
        operator delete((void *)v4);
        v4 = v5;
      }
      while ( v5 );
    }
    _aeabi_memclr4(*(_QWORD *)(v2 + 126), 4 * (*(_QWORD *)(v2 + 126) >> 32));
    *((_DWORD *)v2 + 65) = 0;
    *((_DWORD *)v2 + 66) = 0;
    sub_21E94B4((void **)&v60, "LimboEntities");
    v8 = CompoundTag::getList((int)v3, (const void **)&v60);
    v9 = (ListTag *)v8;
    v48 = (ListTag *)v8;
    v10 = (void *)(v60 - 12);
    if ( (int *)(v60 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v60 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
      else
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    if ( v9 && ListTag::size(v9) >= 1 )
      v46 = (unsigned __int64 *)(v2 + 126);
      v11 = (void **)&v59;
      v12 = (void **)&v58;
      v13 = 0;
      v50 = &dword_28898C0;
        v20 = ListTag::get(v9, v13);
        if ( (*(int (**)(void))(*(_DWORD *)v20 + 24))() == 10 )
          v49 = v13;
          sub_21E94B4(v11, "ChunkX");
          v51 = v20;
          v21 = CompoundTag::getInt(v20, (const void **)v11);
          v22 = (void *)(v59 - 12);
          if ( (int *)(v59 - 12) != v50 )
            v14 = (unsigned int *)(v59 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v15 = __ldrex(v14);
              while ( __strex(v15 - 1, v14) );
            }
            else
              v15 = (*v14)--;
            if ( v15 <= 0 )
              j_j_j_j__ZdlPv_9(v22);
          sub_21E94B4(v12, "ChunkZ");
          v23 = CompoundTag::getInt(v20, (const void **)v12);
          v24 = (void *)(v58 - 12);
          if ( (int *)(v58 - 12) != v50 )
            v16 = (unsigned int *)(v58 - 4);
                v17 = __ldrex(v16);
              while ( __strex(v17 - 1, v16) );
              v17 = (*v16)--;
            if ( v17 <= 0 )
              j_j_j_j__ZdlPv_9(v24);
          v55 = 0LL;
          v56 = 0;
          v57 = __PAIR__(v23, v21);
          std::_Hashtable<ChunkPos,std::pair<ChunkPos const,std::vector<std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>>,std::allocator<std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>>>>>,std::allocator<std::pair<ChunkPos const,std::vector<std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>>,std::allocator<std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>>>>>>,std::__detail::_Select1st,std::equal_to<ChunkPos>,std::hash<ChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<ChunkPos&,std::vector<std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>>,std::allocator<std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>>>>>(
            &v54,
            v46,
            (__int64 *)&v57,
            (int)&v55);
          v25 = (char *)HIDWORD(v55);
          v26 = (char *)v55;
          if ( (_DWORD)v55 != HIDWORD(v55) )
            do
              if ( *(_DWORD *)v26 )
                (*(void (**)(void))(**(_DWORD **)v26 + 4))();
              *(_DWORD *)v26 = 0;
              v26 += 4;
            while ( v25 != v26 );
            v26 = (char *)v55;
          if ( v26 )
            operator delete(v26);
          v27 = *(_QWORD *)(v2 + 126);
          v28 = 522133279 * v21 ^ v23;
          v29 = v28 % (unsigned int)(*(_QWORD *)(v2 + 126) >> 32);
          v30 = *(_DWORD *)(v27 + 4 * v29);
          if ( v30 )
            v31 = *(_DWORD *)v30;
            v47 = v2;
            v32 = *(_DWORD *)(*(_DWORD *)v30 + 32);
            while ( 1 )
              v33 = v32 == v28;
              if ( v32 == v28 )
                v33 = *(_QWORD *)(v31 + 8) == v57;
              if ( v33 )
                break;
              v34 = *(_DWORD *)v31;
              if ( *(_DWORD *)v31 )
              {
                LODWORD(v27) = *(_DWORD *)(v34 + 32);
                v30 = v31;
                v31 = *(_DWORD *)v31;
                if ( *(_DWORD *)(v34 + 32) % HIDWORD(v27) == v29 )
                  continue;
              }
              v35 = 0;
              v2 = v47;
              v36 = v50;
              v37 = (void **)&v53;
              v38 = (CompoundTag *)&v52;
              goto LABEL_62;
            v36 = v50;
            if ( v30 )
              v35 = *(_DWORD *)v30;
            v2 = v47;
            v37 = (void **)&v53;
            v38 = (CompoundTag *)&v52;
          else
            v35 = 0;
LABEL_62:
          sub_21E94B4(v37, "EntityTagList");
          v39 = (ListTag *)CompoundTag::getList(v51, (const void **)v37);
          v40 = (void *)(v53 - 12);
          if ( (int *)(v53 - 12) != v36 )
            v18 = (unsigned int *)(v53 - 4);
                v19 = __ldrex(v18);
              while ( __strex(v19 - 1, v18) );
              v19 = (*v18)--;
            if ( v19 <= 0 )
              j_j_j_j__ZdlPv_9(v40);
          v50 = v36;
          if ( v39 && ListTag::size(v39) >= 1 )
            v41 = 0;
              v42 = ListTag::get(v39, v41);
              CompoundTag::clone(v38, v42);
              v43 = *(_QWORD *)(v35 + 20);
              if ( (_DWORD)v43 == HIDWORD(v43) )
                std::vector<std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>>,std::allocator<std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>>>>::_M_emplace_back_aux<std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>>>(
                  (_QWORD *)(v35 + 16),
                  (int *)v38);
              else
                HIDWORD(v43) = v52;
                v52 = 0;
                *(_DWORD *)v43 = HIDWORD(v43);
                *(_DWORD *)(v35 + 20) += 4;
              if ( v52 )
                (*(void (**)(void))(*(_DWORD *)v52 + 4))();
              ++v41;
            while ( v41 < ListTag::size(v39) );
          v9 = v48;
          v11 = (void **)&v59;
          v13 = v49;
          v12 = (void **)&v58;
        ++v13;
      while ( v13 < ListTag::size(v9) );
  }
}


Dimension *__fastcall Dimension::setBrightnessRamp(Dimension *this, unsigned int a2, float a3)
{
  Dimension *result; // r0@1

  result = &this[2 * a2];
  *((float *)result + 31) = a3;
  return result;
}


Dimension *__fastcall Dimension::~Dimension(Dimension *this)
{
  Dimension *v1; // r10@1
  int v2; // r0@1
  RuntimeLightingManager *v3; // r0@3
  RuntimeLightingManager *v4; // r0@4
  void *v5; // r9@5
  int v6; // r5@6
  int v7; // r6@6
  int v8; // r4@7
  unsigned int *v9; // r1@8
  unsigned int v10; // r0@10
  unsigned int *v11; // r7@14
  unsigned int v12; // r0@16
  int v13; // r5@26
  int v14; // r8@27
  __int64 v15; // r6@27
  Dimension *v16; // r0@35
  void *v17; // r0@38
  void *v18; // r4@39
  Dimension *v19; // r0@40
  int v20; // r5@43
  void *v21; // r0@44
  Seasons *v22; // r0@47
  Seasons *v23; // r0@48
  int v24; // r0@49
  int v25; // r0@51
  PostprocessingManager *v26; // r0@53
  PostprocessingManager *v27; // r0@54
  TaskGroup *v28; // r0@55
  TaskGroup *v29; // r0@56
  int v30; // r0@57
  int v31; // r1@59
  void *v32; // r0@59
  unsigned int *v34; // r2@61
  signed int v35; // r1@63

  v1 = this;
  *(_DWORD *)this = &off_271849C;
  *((_DWORD *)this + 1) = &off_2718584;
  v2 = *((_DWORD *)this + 49);
  *((_DWORD *)v1 + 49) = 0;
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 50) = 0;
  v3 = (RuntimeLightingManager *)*((_DWORD *)v1 + 77);
  if ( v3 )
  {
    v4 = RuntimeLightingManager::~RuntimeLightingManager(v3);
    operator delete((void *)v4);
  }
  *((_DWORD *)v1 + 77) = 0;
  std::_Rb_tree<EntityUniqueID,EntityUniqueID,std::_Identity<EntityUniqueID>,std::less<EntityUniqueID>,std::allocator<EntityUniqueID>>::_M_erase(
    (int)(v1 + 142),
    *((_DWORD *)v1 + 73));
  v5 = (void *)*((_DWORD *)v1 + 70);
  if ( v5 )
    v6 = *(_QWORD *)v5 >> 32;
    v7 = *(_QWORD *)v5;
    if ( v7 != v6 )
    {
      do
      {
        v8 = *(_DWORD *)(v7 + 4);
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
        v7 += 8;
      }
      while ( v7 != v6 );
      v7 = *(_DWORD *)v5;
    }
    if ( v7 )
      operator delete((void *)v7);
    operator delete(v5);
  *((_DWORD *)v1 + 70) = 0;
  v13 = *((_DWORD *)v1 + 65);
  if ( v13 )
    do
      v14 = *(_DWORD *)v13;
      v15 = *(_QWORD *)(v13 + 16);
      if ( (_DWORD)v15 != HIDWORD(v15) )
        do
          if ( *(_DWORD *)v15 )
            (*(void (**)(void))(**(_DWORD **)v15 + 4))();
          *(_DWORD *)v15 = 0;
          LODWORD(v15) = v15 + 4;
        while ( HIDWORD(v15) != (_DWORD)v15 );
        LODWORD(v15) = *(_DWORD *)(v13 + 16);
      if ( (_DWORD)v15 )
        operator delete((void *)v15);
      operator delete((void *)v13);
      v13 = v14;
    while ( v14 );
  _aeabi_memclr4(*(_QWORD *)(v1 + 126), 4 * (*(_QWORD *)(v1 + 126) >> 32));
  *((_DWORD *)v1 + 65) = 0;
  *((_DWORD *)v1 + 66) = 0;
  v16 = (Dimension *)*((_DWORD *)v1 + 63);
  if ( v16 && v1 + 138 != v16 )
    operator delete(v16);
  v17 = (void *)*((_DWORD *)v1 + 58);
  if ( v17 )
      v18 = *(void **)v17;
      operator delete(v17);
      v17 = v18;
    while ( v18 );
  _aeabi_memclr4(*((_QWORD *)v1 + 28), 4 * (*((_QWORD *)v1 + 28) >> 32));
  *((_DWORD *)v1 + 58) = 0;
  *((_DWORD *)v1 + 59) = 0;
  v19 = (Dimension *)*((_DWORD *)v1 + 56);
  if ( v19 && v1 + 124 != v19 )
    operator delete(v19);
  v20 = *((_DWORD *)v1 + 53);
  if ( v20 )
    v21 = *(void **)(v20 + 168);
    if ( v21 )
      operator delete(v21);
    CircuitSceneGraph::~CircuitSceneGraph((CircuitSceneGraph *)(v20 + 4));
    operator delete((void *)v20);
  *((_DWORD *)v1 + 53) = 0;
  v22 = (Seasons *)*((_DWORD *)v1 + 52);
  if ( v22 )
    v23 = Seasons::~Seasons(v22);
    operator delete((void *)v23);
  *((_DWORD *)v1 + 52) = 0;
  v24 = *((_DWORD *)v1 + 51);
  if ( v24 )
    (*(void (**)(void))(*(_DWORD *)v24 + 4))();
  *((_DWORD *)v1 + 51) = 0;
  v25 = *((_DWORD *)v1 + 49);
  if ( v25 )
    (*(void (**)(void))(*(_DWORD *)v25 + 4))();
  v26 = (PostprocessingManager *)*((_DWORD *)v1 + 48);
  if ( v26 )
    v27 = PostprocessingManager::~PostprocessingManager(v26);
    operator delete((void *)v27);
  *((_DWORD *)v1 + 48) = 0;
  v28 = (TaskGroup *)*((_DWORD *)v1 + 47);
  if ( v28 )
    v29 = TaskGroup::~TaskGroup(v28);
    operator delete((void *)v29);
  *((_DWORD *)v1 + 47) = 0;
  v30 = *((_DWORD *)v1 + 16);
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  *((_DWORD *)v1 + 16) = 0;
  ThreadLocal<BiomeSource>::~ThreadLocal((int)(v1 + 12));
  *((_DWORD *)v1 + 1) = &off_271859C;
  v31 = *((_DWORD *)v1 + 3);
  v32 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v31 - 4);
    if ( &pthread_create )
      __dmb();
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
    else
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
  return v1;
}


int __fastcall Dimension::onChunkDiscarded(Dimension *this, LevelChunk *a2)
{
  Dimension *v2; // r5@1
  LevelChunk *v3; // r4@1

  v2 = this;
  v3 = a2;
  TickingAreaList::onChunkDiscarded(*((TickingAreaList **)this + 70), a2);
  return j_j_j__ZN11BlockSource16onChunkDiscardedER10LevelChunk(*((BlockSource **)v2 + 16), v3);
}


int __fastcall Dimension::tick(Dimension *this)
{
  Dimension *v1; // r4@1
  int (__fastcall *v2)(Dimension *, int, signed int); // r5@1
  int v3; // r0@1
  Weather *v12; // r5@1
  int v16; // r0@5

  v1 = this;
  Weather::tick(*((Weather **)this + 51));
  Seasons::tick(*((Seasons **)v1 + 52));
  v2 = *(int (__fastcall **)(Dimension *, int, signed int))(*(_DWORD *)v1 + 220);
  v3 = Level::getTime(*((Level **)v1 + 4));
  _R0 = v2(v1, v3, 1065353216);
  __asm { VMOV            S2, R0 }
  _R1 = &mce::Math::PI;
  __asm
  {
    VLDR            S0, [R1]
    VADD.F32        S0, S0, S0
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  _R0 = mce::Math::cos(_R0, COERCE_FLOAT(&mce::Math::PI));
  v12 = (Weather *)*((_DWORD *)v1 + 51);
  __asm { VMOV            S16, R0 }
  _R6 = Weather::getFogLevel(*((Weather **)v1 + 51));
  _R0 = Weather::getRainLevel(v12, 1.0);
    VADD.F32        S2, S16, S16
    VLDR            S6, =-0.38125
    VMOV.F32        S0, #0.5
    VMOV.F32        S18, #0.3125
    VMOV            S8, R0
    VMOV            S4, R6
    VMOV.F32        S16, #1.0
    VMUL.F32        S20, S4, S6
    VSUB.F32        S24, S0, S2
    VMUL.F32        S22, S8, S18
  _R0 = Weather::getLightningLevel(v12, 1.0);
    VCMPE.F32       S24, #0.0
    VLDR            S4, =0.0
    VMRS            APSR_nzcv, FPSCR
    VMOV            S0, R0
    VADD.F32        S2, S20, S16
    VMUL.F32        S0, S0, S18
    VSUB.F32        S6, S16, S22
    VSUB.F32        S0, S16, S0
    VMUL.F32        S2, S6, S2
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S24, S4 }
    VMOV.F32        S4, #0.6875
    VCMPE.F32       S24, S16
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S24, S16 }
  v16 = *((_DWORD *)v1 + 76);
    VSUB.F32        S2, S16, S24
    VMUL.F32        S0, S0, S2
    VMUL.F32        S2, S0, S4
  if ( _ZF )
    __asm { VMOVEQ.F32      S2, S0 }
    VMOV.F32        S0, #11.0
    VSUB.F32        S2, S16, S2
    VCVTR.S32.F32   S0, S0
  if ( (unsigned __int8)_R0 != *((_BYTE *)v1 + 119) )
    *((_BYTE *)v1 + 119) = _R0;
  Dimension::backgroundTickSeasons(v1);
  return j_j_j__ZN9Dimension27tryGarbageCollectStructuresEv(v1);
}


int __fastcall Dimension::onChunkLoaded(Dimension *this, LevelChunk *a2)
{
  LevelChunk *v2; // r4@1
  Dimension *v3; // r5@1
  int v4; // r0@2
  int result; // r0@3

  v2 = a2;
  v3 = this;
  if ( LevelChunk::checkSeasonsPostProcessDirty(a2) == 1 )
  {
    v4 = LevelChunk::getDimension(v2);
    LevelChunk::applySeasonsPostProcess(v2, *(BlockSource **)(v4 + 64));
  }
  result = LevelChunk::getDimensionId(v2);
  if ( result == *((_DWORD *)v3 + 28) )
    result = j_j_j__ZNK15TickingAreaList13onChunkLoadedER10LevelChunk(*((TickingAreaList **)v3 + 70), v2);
  return result;
}


void __fastcall Dimension::serialize(Dimension *this, CompoundTag *a2)
{
  Dimension::serialize(this, a2);
}


int __fastcall Dimension::setCeiling(int result, bool a2)
{
  *(_BYTE *)(result + 117) = a2;
  return result;
}


signed int __fastcall Dimension::mayRespawn(Dimension *this)
{
  return 1;
}


int __fastcall Dimension::getSunriseColor(Dimension *this, float a2, int a3)
{
  float v3; // r6@1
  Dimension *v4; // r4@1
  int v5; // r5@1
  int (__fastcall *v6)(_DWORD, int, int); // r7@1
  int v7; // r0@1
  int result; // r0@1
  float v16; // r1@1

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = *(int (__fastcall **)(_DWORD, int, int))(*(_DWORD *)LODWORD(a2) + 220);
  v7 = Level::getTime(*(Level **)(LODWORD(a2) + 16));
  _R0 = v6(LODWORD(v3), v7, v5);
  __asm { VMOV            S2, R0 }
  _R1 = &mce::Math::PI;
  __asm { VLDR            S18, [R1] }
  *(_DWORD *)v4 = 0;
  *((_DWORD *)v4 + 1) = 0;
  __asm { VADD.F32        S0, S18, S18 }
  *((_DWORD *)v4 + 2) = 0;
  *((_DWORD *)v4 + 3) = 0;
  __asm
  {
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  result = mce::Math::cos(_R0, 0.0);
    VMOV            S16, R0
    VLDR            S0, =-0.4
    VCMPE.F32       S16, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    __asm
    {
      VLDR            S0, =0.4
      VCMPE.F32       S16, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      __asm
      {
        VMOV.F32        S0, #1.25
        VMOV.F32        S2, #0.5
        VMUL.F32        S0, S16, S0
        VADD.F32        S20, S0, S2
        VMUL.F32        S0, S18, S20
        VMOV            R0, S0
      }
      _R0 = mce::Math::sin(_R0, v16);
        VMOV.F32        S0, #0.875
        VLDR            S6, =0.35
        VMOV.F32        S2, #1.0
        VLDR            S10, =0.99
        VMOV            S4, R0
      result = 1045220557;
        VMOV.F32        S8, #0.375
        VSUB.F32        S4, S4, S2
        VADD.F32        S0, S0, S6
        VMUL.F32        S4, S4, S10
        VMUL.F32        S6, S16, S8
        VLDR            S8, =0.2
        VMUL.F32        S0, S0, S20
        VADD.F32        S2, S4, S2
        VLDR            S4, =0.85
        VADD.F32        S4, S6, S4
        VADD.F32        S0, S0, S8
        VMUL.F32        S2, S2, S2
        VSTR            S4, [R4]
        VSTR            S0, [R4,#4]
      *((_DWORD *)v4 + 2) = 1045220557;
      __asm { VSTR            S2, [R4,#0xC] }
  return result;
}


int __fastcall Dimension::startLeaveGame(Dimension *this)
{
  Dimension *v1; // r4@1

  v1 = this;
  Level::removeListener(*((Level **)this + 4), (LevelListener *)this);
  (*(void (**)(void))(**((_DWORD **)v1 + 49) + 48))();
  TickingAreaListBase::destroyAreas(*((TickingAreaListBase **)v1 + 70));
  (*(void (**)(void))(**((_DWORD **)v1 + 49) + 52))();
  return (*(int (**)(void))(**((_DWORD **)v1 + 49) + 8))();
}


int __fastcall Dimension::getSpawnYPosition(Dimension *this)
{
  return 0;
}


int __fastcall Dimension::forEachPlayer(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int result; // r0@1
  __int64 i; // r6@1

  v2 = a1;
  v3 = a2;
  result = *(_DWORD *)(a1 + 16);
  for ( i = *(_QWORD *)(result + 24); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 4 )
  {
    result = (*(int (**)(void))(**(_DWORD **)i + 524))();
    if ( result == *(_DWORD *)(v2 + 112) )
    {
      result = Entity::isRemoved(*(Entity **)i);
      if ( !result )
      {
        if ( !*(_DWORD *)(v3 + 8) )
          sub_21E5F48();
        result = (*(int (__fastcall **)(int, _DWORD))(v3 + 12))(v3, *(_DWORD *)i);
        if ( result != 1 )
          break;
      }
    }
  }
  return result;
}


signed int __fastcall Dimension::getCloudHeight(Dimension *this)
{
  return 1124073472;
}


int __fastcall Dimension::getTimeOfDay(Dimension *this, int _R1, float _R2)
{
  int result; // r0@5

  _R0 = 91625969;
  __asm
  {
    VMOV            S2, R2
    VMOV.F32        S4, #-0.25
    SMMUL.W         R0, R1, R0
    VMOV.F32        S18, #1.0
  }
  _R0 = _R1 - 24000 * (((signed int)_R0 >> 9) + (_R0 >> 31));
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
  _R0 = &mce::Math::PI;
    VADD.F32        S0, S0, S2
    VLDR            S2, =0.000041667
    VMUL.F32        S0, S0, S2
    VMOV.F32        S2, #0.75
    VADD.F32        S16, S0, S4
    VMOV.F32        S2, #-1.0
    VCMPE.F32       S16, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S16, S0 }
    VCMPE.F32       S16, S18
    VADD.F32        S0, S16, S2
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S16, S0 }
    VLDR            S0, [R0]
    VMUL.F32        S0, S0, S16
    VMOV            R0, S0
  _R0 = mce::Math::cos(_R0, *(float *)&_R1);
    VMOV.F32        S2, #-0.5
    VADD.F32        S0, S0, S18
    VSUB.F32        S4, S18, S16
    VLDR            S2, =0.33333
    VADD.F32        S0, S4, S0
    VADD.F32        S0, S0, S16
  return result;
}


int __fastcall Dimension::addWither(int a1, unsigned __int64 *a2)
{
  int v2; // r4@1
  int v3; // r9@1
  int v4; // r7@1
  unsigned __int64 *v5; // r8@1
  int v6; // r5@1
  int v7; // r1@2
  unsigned int v8; // r2@2
  unsigned __int64 v9; // kr00_8@2
  signed int v10; // r7@3
  __int64 v11; // kr08_8@3
  signed int v12; // r6@3
  int *v13; // r7@9
  signed int v14; // r3@12
  signed int v15; // r7@14
  int v16; // r0@14
  int result; // r0@19
  int v18; // r3@21
  signed int v19; // r7@21
  bool v20; // cf@21
  int v21; // r6@30
  __int64 v22; // r2@30
  unsigned __int64 v23; // r0@30
  _QWORD *v24; // r0@38

  v2 = a1;
  v3 = a1 + 288;
  v4 = *(_DWORD *)(a1 + 292);
  v5 = a2;
  v6 = a1 + 288;
  if ( !v4 )
    goto LABEL_41;
  v9 = *a2;
  v7 = *a2 >> 32;
  v8 = v9;
  do
  {
    v6 = v4;
    v10 = 0;
    v11 = *(_QWORD *)(v6 + 16);
    v12 = 0;
    if ( (unsigned int)v11 < (unsigned int)v9 )
      v10 = 1;
    if ( SHIDWORD(v11) < v7 )
      v12 = 1;
    if ( HIDWORD(v11) == v7 )
      v12 = v10;
    v13 = (int *)(v6 + 12);
    if ( v12 )
      v13 = (int *)(v6 + 8);
    v4 = *v13;
  }
  while ( v4 );
  v14 = 0;
  if ( (unsigned int)v11 >= (unsigned int)v9 )
    v14 = 1;
  v15 = 0;
  v16 = v6;
  if ( SHIDWORD(v11) >= v7 )
    v15 = 1;
  if ( HIDWORD(v11) == v7 )
    v15 = v14;
  if ( !v15 )
LABEL_41:
    result = *(_DWORD *)(v2 + 296);
    if ( v6 == result )
    {
LABEL_28:
      if ( v6 )
      {
        if ( v3 == v6 )
        {
          v21 = 1;
        }
        else
          v23 = *v5;
          v21 = 0;
          v22 = *(_QWORD *)(v6 + 16);
          LODWORD(v23) = 0;
          if ( (unsigned int)v22 < (unsigned int)*v5 )
            LODWORD(v23) = 1;
          if ( SHIDWORD(v22) < SHIDWORD(v23) )
            v21 = 1;
          if ( HIDWORD(v22) == HIDWORD(v23) )
            v21 = v23;
        v24 = operator new(0x18u);
        v24[2] = *v5;
        sub_21D4928(v21, (int)v24, v6, v3);
        result = *(_DWORD *)(v2 + 304) + 1;
        *(_DWORD *)(v2 + 304) = result;
      }
      return result;
    }
    v16 = sub_21D4858(v6);
    v7 = *v5 >> 32;
    v8 = *v5;
  v18 = *(_QWORD *)(v16 + 16) >> 32;
  v19 = 0;
  v20 = v8 >= (unsigned int)*(_QWORD *)(v16 + 16);
  result = 0;
  if ( v20 )
    result = 1;
  if ( v7 >= v18 )
    v19 = 1;
  if ( v7 == v18 )
    v19 = result;
  if ( !v19 )
    goto LABEL_28;
  return result;
}


int __fastcall Dimension::fetchEntity(int a1, int a2, __int64 a3, int a4)
{
  unsigned int v4; // r9@1
  __int64 v5; // r6@1
  unsigned int v6; // r4@1
  unsigned int v7; // r5@1
  unsigned int *v8; // r0@1
  unsigned int v9; // r8@2
  int v10; // r6@2
  bool v11; // zf@3
  unsigned int v12; // r11@6
  bool v13; // zf@9
  int result; // r0@14
  int v15; // r4@15
  _DWORD *v16; // r0@15
  int v17; // [sp+4h] [bp-4Ch]@1
  _DWORD *v18; // [sp+8h] [bp-48h]@15
  void (*v19)(void); // [sp+10h] [bp-40h]@15
  signed int (__fastcall *v20)(int, Entity *); // [sp+14h] [bp-3Ch]@15
  int v21; // [sp+18h] [bp-38h]@15
  char v22; // [sp+1Fh] [bp-31h]@1
  unsigned __int64 v23; // [sp+20h] [bp-30h]@1

  v4 = HIDWORD(a3);
  WORD2(a3) = 31161;
  v17 = a1;
  WORD3(a3) = -25033;
  v23 = __PAIR__(v4, (unsigned int)a3);
  v22 = a4;
  v5 = *(_QWORD *)(a1 + 224);
  v6 = (a3 + ((v4 + HIDWORD(a3)) << 6) + ((v4 + HIDWORD(a3)) >> 2) + HIDWORD(a3)) ^ (v4 + HIDWORD(a3));
  v7 = v6 % (unsigned int)(*(_QWORD *)(a1 + 224) >> 32);
  v8 = *(unsigned int **)(v5 + 4 * v7);
  if ( !v8 )
    goto LABEL_15;
  v9 = *v8;
  v10 = *(_DWORD *)(*v8 + 24);
  while ( 1 )
  {
    v11 = v10 == v6;
    if ( v10 == v6 )
      v11 = *(_QWORD *)(v9 + 8) == __PAIR__(v4, (unsigned int)a3);
    if ( v11 )
      break;
    v12 = *(_DWORD *)v9;
    if ( *(_DWORD *)v9 )
    {
      LODWORD(v5) = *(_DWORD *)(v12 + 24);
      v8 = (unsigned int *)v9;
      v9 = *(_DWORD *)v9;
      if ( *(_DWORD *)(v12 + 24) % HIDWORD(v5) == v7 )
        continue;
    }
  }
  v13 = v8 == 0;
  if ( v8 )
    v6 = *v8;
    v13 = *v8 == 0;
  if ( v13 )
LABEL_15:
    v21 = 0;
    v15 = *(_DWORD *)(v17 + 16);
    v16 = operator new(0x10u);
    *v16 = &v22;
    v16[1] = &v21;
    v16[2] = &v23;
    v16[3] = v17;
    v18 = v16;
    v19 = (void (*)(void))sub_18FEB9A;
    v20 = sub_18FEB4E;
    Level::forEachPlayer(v15, (int)&v18);
    if ( v19 )
      v19();
    result = v21;
  else if ( Entity::isRemoved(*(Entity **)(v6 + 16)) != 1 || a4 == 1 )
    result = *(_DWORD *)(v6 + 16);
  else
    result = 0;
  return result;
}


Dimension *__fastcall Dimension::updateLightRamp(Dimension *this)
{
  Dimension *result; // r0@1

  __asm
  {
    VMOV.F32        S0, #1.0
    VMOV.F32        S2, #3.0
  }
  result = this + 62;
  __asm { VLDR            S4, =0.0 }
  _R2 = -1;
  LOBYTE(_R3) = Brightness::MAX;
  do
    ++_R2;
    _R3 = (unsigned __int8)_R3;
    __asm
    {
      VMOV            S6, R3
      VMOV            S8, R2
      VCVT.F32.U32    S6, S6
      VCVT.F32.S32    S8, S8
      VDIV.F32        S6, S8, S6
      VSUB.F32        S8, S0, S6
      VMUL.F32        S8, S8, S2
      VADD.F32        S8, S8, S0
      VDIV.F32        S6, S6, S8
      VCMPE.F32       S6, #0.0
      VMRS            APSR_nzcv, FPSCR
      VMOV.F32        S8, S4
      VCMPE.F32       S6, S0
    }
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S8, S6 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S8, S0 }
    __asm { VSTR            S8, [R0] }
    result += 2;
    LOBYTE(_R3) = Brightness::MAX;
  while ( _R2 < (unsigned __int8)Brightness::MAX );
  return result;
}


int __fastcall Dimension::forEachPlayer(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int result; // r0@1
  __int64 i; // r6@1

  v2 = a1;
  v3 = a2;
  result = *(_DWORD *)(a1 + 16);
  for ( i = *(_QWORD *)(result + 24); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 4 )
  {
    result = (*(int (**)(void))(**(_DWORD **)i + 524))();
    if ( result == *(_DWORD *)(v2 + 112) )
    {
      result = Entity::isRemoved(*(Entity **)i);
      if ( !result )
      {
        if ( !*(_DWORD *)(v3 + 8) )
          sub_21E5F48();
        result = (*(int (__fastcall **)(int, _DWORD))(v3 + 12))(v3, *(_DWORD *)i);
        if ( result != 1 )
          break;
      }
    }
  }
  return result;
}


int __fastcall Dimension::hasBedrockFog(Dimension *this)
{
  return 0;
}


int __fastcall Dimension::findPlayer(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  __int64 v4; // r6@1
  int result; // r0@6

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(*(_DWORD *)(a1 + 16) + 24);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
LABEL_6:
    result = 0;
  }
  else
    while ( 1 )
    {
      if ( (*(int (**)(void))(**(_DWORD **)v4 + 524))() == *(_DWORD *)(v2 + 112) )
      {
        if ( !*(_DWORD *)(v3 + 8) )
          sub_21E5F48();
        if ( (*(int (__fastcall **)(int, _DWORD))(v3 + 12))(v3, *(_DWORD *)v4) )
          break;
      }
      LODWORD(v4) = v4 + 4;
      if ( HIDWORD(v4) == (_DWORD)v4 )
        goto LABEL_6;
    }
    result = *(_DWORD *)v4;
  return result;
}


int __fastcall Dimension::distanceToNearestPlayerSqr2D(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  _DWORD *v5; // r0@1
  void (*v6)(void); // r3@1
  __int64 v7; // r6@1
  _DWORD *v9; // [sp+4h] [bp-34h]@1
  void (*v10)(void); // [sp+Ch] [bp-2Ch]@1
  signed int (__fastcall *v11)(__int64 **, int); // [sp+10h] [bp-28h]@1
  int v12; // [sp+14h] [bp-24h]@1
  int v13; // [sp+18h] [bp-20h]@1
  int v14; // [sp+1Ch] [bp-1Ch]@1
  int v15; // [sp+20h] [bp-18h]@1

  v4 = a1;
  v13 = a2;
  v12 = 2139095039;
  v15 = a4;
  v14 = 0;
  v5 = operator new(8u);
  *v5 = &v12;
  v5[1] = &v13;
  v6 = (void (*)(void))sub_18FEA12;
  v9 = v5;
  v10 = (void (*)(void))sub_18FEA12;
  v11 = sub_18FE9B8;
  v7 = *(_QWORD *)(*(_DWORD *)(v4 + 16) + 24);
  if ( (_DWORD)v7 == HIDWORD(v7) )
    goto LABEL_14;
  do
  {
    if ( (*(int (**)(void))(**(_DWORD **)v7 + 524))() == *(_DWORD *)(v4 + 112) && !Entity::isRemoved(*(Entity **)v7) )
    {
      if ( !v10 )
        sub_21E5F48();
      if ( v11((__int64 **)&v9, *(_DWORD *)v7) != 1 )
        break;
    }
    LODWORD(v7) = v7 + 4;
  }
  while ( HIDWORD(v7) != (_DWORD)v7 );
  v6 = v10;
  if ( v10 )
LABEL_14:
    v6();
  return v12;
}


int __fastcall Dimension::getTimeOfDay(Dimension *this, float a2)
{
  Dimension *v2; // r5@1
  float v3; // r4@1
  int (__fastcall *v4)(Dimension *, int, _DWORD); // r6@1
  int v5; // r1@1

  v2 = this;
  v3 = a2;
  v4 = *(int (__fastcall **)(Dimension *, int, _DWORD))(*(_DWORD *)this + 220);
  v5 = Level::getTime(*((Level **)this + 4));
  return v4(v2, v5, LODWORD(v3));
}


int __fastcall Dimension::fetchNearestPlayer(Dimension *this, Entity *a2, float a3)
{
  return Dimension::fetchNearestPlayer(
           this,
           COERCE_FLOAT(*((_QWORD *)a2 + 9)),
           COERCE_FLOAT(*((_QWORD *)a2 + 9) >> 32),
           *((float *)a2 + 20),
           a3);
}


Entity **__fastcall Dimension::_registerEntity(Dimension *this, Entity *a2)
{
  Entity *v2; // r4@1
  Dimension *v3; // r5@1
  unsigned __int64 *v4; // r0@1
  Entity **result; // r0@1

  v2 = a2;
  v3 = this;
  v4 = (unsigned __int64 *)Entity::getUniqueID(a2);
  result = (Entity **)std::__detail::_Map_base<EntityUniqueID,std::pair<EntityUniqueID const,Entity *>,std::allocator<std::pair<EntityUniqueID const,Entity *>>,std::__detail::_Select1st,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                        (unsigned __int64 *)v3 + 28,
                        v4);
  *result = v2;
  return result;
}


int __fastcall Dimension::isFoggyAt(Dimension *this, int a2, int a3)
{
  return 0;
}


signed int __fastcall Dimension::isRedstoneTick(Dimension *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *((_QWORD *)this + 27);
  result = 0;
  if ( SHIDWORD(v1) >= (signed int)v1 )
    result = 1;
  return result;
}


char *__fastcall Dimension::getDimensionName(unsigned int a1)
{
  char *v1; // r1@1

  v1 = (char *)&unk_281C060 + 4 * a1 + 4;
  if ( a1 > 2 )
    v1 = (char *)&Util::EMPTY_STRING;
  return v1;
}


int __fastcall Dimension::getSkyColor(Dimension *this, const Entity *a2, float a3, int a4)
{
  float v4; // r5@1
  Dimension *v5; // r9@1
  int v6; // r4@1
  BlockSource *v7; // r8@1
  const BlockPos *v8; // r6@1
  char v10; // [sp+4h] [bp-34h]@1
  char v11; // [sp+10h] [bp-28h]@1

  v4 = a3;
  v5 = this;
  v6 = a4;
  v7 = a2;
  v8 = (const BlockPos *)Entity::getRegion((Entity *)LODWORD(a3));
  Entity::getInterpolatedPosition((Entity *)&v10, v4, v6);
  BlockPos::BlockPos((int)&v11, (int)&v10);
  return Dimension::getSkyColor(v5, v7, v8, COERCE_FLOAT(&v11), v6);
}


int __fastcall Dimension::getFogColor(int result, float a2, int _R2)
{
  __asm
  {
    VLDR            S0, =0.63035
    VMOV            S2, R2
    VLDR            S4, =0.77412
    VLDR            S6, =0.91
    VMUL.F32        S0, S2, S0
    VMUL.F32        S4, S2, S4
    VLDR            S8, =0.049412
    VMUL.F32        S2, S2, S6
    VLDR            S6, =0.040235
    VLDR            S10, =0.09
  }
  *(_DWORD *)(result + 12) = 1065353216;
    VADD.F32        S0, S0, S6
    VADD.F32        S4, S4, S8
    VADD.F32        S2, S2, S10
    VSTR            S0, [R0]
    VSTR            S4, [R0,#4]
    VSTR            S2, [R0,#8]
  return result;
}


int __fastcall Dimension::onNewChunk(Dimension *this, BlockSource *a2, LevelChunk *a3)
{
  int result; // r0@1
  char *v4; // r0@3
  char *v5; // r9@3
  unsigned int v6; // r6@3
  int v7; // r7@3
  int v8; // r8@4
  __int64 v9; // r10@4
  int v10; // r4@4
  bool v11; // zf@5
  int v12; // r9@8
  bool v13; // zf@11
  __int64 i; // r6@14
  char *v15; // r4@21
  __int64 v16; // kr00_8@21
  unsigned int v17; // r5@21
  int v18; // r11@21
  int *v19; // r2@21
  int v20; // r7@22
  unsigned int v21; // r9@22 OVERLAPPED
  unsigned int v22; // r10@22 OVERLAPPED
  int v23; // r4@22
  bool v24; // zf@23
  LevelChunk *v25; // [sp+8h] [bp-38h]@1
  BlockSource *v26; // [sp+Ch] [bp-34h]@1
  Dimension *v27; // [sp+10h] [bp-30h]@1
  int v28; // [sp+14h] [bp-2Ch]@16
  int v29; // [sp+18h] [bp-28h]@15

  v25 = a3;
  v26 = a2;
  v27 = this;
  result = *(_BYTE *)(*((_DWORD *)this + 4) + 5824);
  if ( !result )
  {
    result = BlockSource::getDimensionId(a2);
    if ( result == *((_DWORD *)v27 + 28) )
    {
      v4 = LevelChunk::getPosition(v25);
      v5 = v4;
      v6 = 522133279 * *(_QWORD *)v4 ^ (*(_QWORD *)v4 >> 32);
      v7 = v6 % *((_DWORD *)v27 + 64);
      result = *(_DWORD *)(*((_DWORD *)v27 + 63) + 4 * v7);
      if ( result )
      {
        v8 = *(_DWORD *)result;
        v9 = *(_QWORD *)v5;
        v10 = *(_DWORD *)(*(_DWORD *)result + 32);
        while ( 1 )
        {
          v11 = v10 == v6;
          if ( v10 == v6 )
            v11 = *(_QWORD *)(v8 + 8) == v9;
          if ( v11 )
            break;
          v12 = *(_DWORD *)v8;
          if ( *(_DWORD *)v8 )
          {
            v10 = *(_DWORD *)(v12 + 32);
            result = v8;
            v8 = *(_DWORD *)v8;
            if ( *(_DWORD *)(v12 + 32) % *((_DWORD *)v27 + 64) == v7 )
              continue;
          }
          return result;
        }
        v13 = result == 0;
        if ( result )
          result = *(_DWORD *)result;
          v13 = result == 0;
        if ( !v13 )
          for ( i = *(_QWORD *)(result + 16); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 4 )
            EntityFactory::loadEntity((EntityFactory *)&v29, *(const CompoundTag **)i);
            if ( v29 )
            {
              v28 = v29;
              v29 = 0;
              Dimension::_completeEntityTransfer((int)v27, v26, (Entity **)&v28);
              if ( v28 )
                (*(void (**)(void))(*(_DWORD *)v28 + 32))();
              v28 = 0;
              if ( v29 )
                (*(void (**)(void))(*(_DWORD *)v29 + 32))();
            }
          v15 = LevelChunk::getPosition(v25);
          v16 = *(_QWORD *)(v27 + 126);
          v17 = 522133279 * *(_QWORD *)v15 ^ (*(_QWORD *)v15 >> 32);
          v18 = v17 % (unsigned int)(*(_QWORD *)(v27 + 126) >> 32);
          v19 = *(int **)(v16 + 4 * v18);
          if ( v19 )
            v20 = *v19;
            *(_QWORD *)&v21 = *(_QWORD *)v15;
            v23 = *(_DWORD *)(*v19 + 32);
            while ( 1 )
              v24 = v23 == v17;
              if ( v23 == v17 )
                v24 = *(_QWORD *)(v20 + 8) == __PAIR__(v22, v21);
              if ( v24 )
                break;
              if ( *(_DWORD *)v20 )
              {
                v23 = *(_DWORD *)(v16 + 32);
                v19 = (int *)v20;
                v20 = *(_DWORD *)v20;
                if ( *(_DWORD *)(v16 + 32) % HIDWORD(v16) == v18 )
                  continue;
              }
              goto LABEL_32;
            if ( v19 )
              std::_Hashtable<ChunkPos,std::pair<ChunkPos const,std::vector<std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>>,std::allocator<std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>>>>>,std::allocator<std::pair<ChunkPos const,std::vector<std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>>,std::allocator<std::unique_ptr<CompoundTag,std::default_delete<CompoundTag>>>>>>,std::__detail::_Select1st,std::equal_to<ChunkPos>,std::hash<ChunkPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_erase(
                (int)(v27 + 126),
                v18,
                v19,
                *v19);
LABEL_32:
          result = 1;
          *((_BYTE *)v27 + 8) = 1;
      }
    }
  }
  return result;
}


Packet *__fastcall Dimension::onBlockChanged(int a1, BlockSource *this, int a3, int a4, int a5, int a6)
{
  BlockSource *v6; // r6@1
  int v7; // r5@1
  int v8; // r7@1
  int v9; // r8@1
  Packet *v10; // r4@1
  Packet *result; // r0@1
  char v12; // r2@5
  char v13; // r3@5
  int v14; // r0@5
  Packet *v15; // r2@8
  Packet *v16; // [sp+0h] [bp-40h]@8
  void **v17; // [sp+4h] [bp-3Ch]@5
  int v18; // [sp+8h] [bp-38h]@5
  int v19; // [sp+Ch] [bp-34h]@5
  char v20; // [sp+10h] [bp-30h]@5
  __int64 v21; // [sp+14h] [bp-2Ch]@5
  int v22; // [sp+1Ch] [bp-24h]@5
  char v23; // [sp+20h] [bp-20h]@5
  char v24; // [sp+21h] [bp-1Fh]@5
  char v25; // [sp+22h] [bp-1Eh]@5
  char v26; // [sp+24h] [bp-1Ch]@3

  v6 = this;
  v7 = a1;
  v8 = a4;
  v9 = a3;
  v10 = *(Packet **)(a1 + 112);
  result = (Packet *)BlockSource::getDimensionId(this);
  if ( v10 == result )
  {
    if ( *(_BYTE *)v8 == 255 )
    {
      BlockSource::getBlockID((BlockSource *)&v26, v6, v9);
      *(_BYTE *)v8 = v26;
    }
    result = (Packet *)Level::isClientSide(*(Level **)(v7 + 16));
    if ( !result )
      v12 = *(_BYTE *)v8;
      v13 = *(_BYTE *)(v8 + 1);
      v18 = 2;
      v19 = 1;
      v20 = 0;
      v17 = &off_26E951C;
      v14 = *(_DWORD *)(v9 + 8);
      v21 = *(_QWORD *)v9;
      v22 = v14;
      v23 = v12;
      v24 = v13;
      v25 = a6;
      Dimension::sendPacketForPosition((Dimension *)v7, (const BlockPos *)v9, (const Packet *)&v17, 0);
      result = (Packet *)*(_BYTE *)v8;
      if ( *(_BYTE *)v8 )
      {
        result = (Packet *)Block::hasBlockEntity((Block *)Block::mBlocks[(signed int)result]);
        if ( result == (Packet *)1 )
        {
          result = (Packet *)BlockSource::getBlockEntity(v6, (const BlockPos *)v9);
          if ( result )
          {
            result = (Packet *)(*(int (__fastcall **)(Packet **))(*(_DWORD *)result + 52))(&v16);
            v15 = v16;
            if ( v16 )
            {
              *((_DWORD *)v16 + 2) = 1;
              Dimension::sendPacketForPosition((Dimension *)v7, (const BlockPos *)v9, v15, 0);
              result = v16;
              if ( v16 )
                result = (Packet *)(*(int (**)(void))(*(_DWORD *)v16 + 4))();
            }
          }
        }
      }
  }
  return result;
}


void __fastcall Dimension::serialize(Dimension *this, CompoundTag *a2)
{
  Dimension *v2; // r5@1
  int v3; // r8@2
  void **v4; // r10@3
  int *v5; // r11@3
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  void *v12; // r4@28
  void *v13; // r0@28
  void *v14; // r0@29
  void *v15; // r11@30
  int *i; // r6@30
  int *v17; // r10@30
  void *v18; // r0@38
  void *v19; // r0@44
  unsigned int *v20; // r2@46
  signed int v21; // r1@48
  CompoundTag *v22; // [sp+8h] [bp-68h]@2
  void *v23; // [sp+10h] [bp-60h]@2
  void *v24; // [sp+14h] [bp-5Ch]@42
  int v25; // [sp+1Ch] [bp-54h]@42
  void *v26; // [sp+20h] [bp-50h]@39
  void *v27; // [sp+24h] [bp-4Ch]@36
  int v28; // [sp+2Ch] [bp-44h]@12
  int v29; // [sp+30h] [bp-40h]@31
  int v30; // [sp+34h] [bp-3Ch]@31
  int v31; // [sp+3Ch] [bp-34h]@8
  int v32; // [sp+44h] [bp-2Ch]@3

  v2 = this;
  if ( !*(_BYTE *)(*((_DWORD *)this + 4) + 5824) )
  {
    v22 = a2;
    v23 = operator new(0x14u);
    ListTag::ListTag((int)v23);
    v3 = *((_DWORD *)v2 + 65);
    if ( v3 )
    {
      v4 = (void **)&v32;
      v5 = &dword_28898C0;
      do
      {
        v12 = operator new(0x1Cu);
        CompoundTag::CompoundTag((int)v12);
        sub_21E94B4(v4, "ChunkX");
        CompoundTag::putInt((int)v12, (const void **)v4, *(_DWORD *)(v3 + 8));
        v13 = (void *)(v32 - 12);
        if ( (int *)(v32 - 12) != v5 )
        {
          v6 = (unsigned int *)(v32 - 4);
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
            j_j_j_j__ZdlPv_9(v13);
        }
        sub_21E94B4((void **)&v31, "ChunkZ");
        CompoundTag::putInt((int)v12, (const void **)&v31, *(_DWORD *)(v3 + 12));
        v14 = (void *)(v31 - 12);
        if ( (int *)(v31 - 12) != v5 )
          v8 = (unsigned int *)(v31 - 4);
              v9 = __ldrex(v8);
            while ( __strex(v9 - 1, v8) );
            v9 = (*v8)--;
          if ( v9 <= 0 )
            j_j_j_j__ZdlPv_9(v14);
        v15 = operator new(0x14u);
        ListTag::ListTag((int)v15);
        v17 = (int *)(*(_QWORD *)(v3 + 16) >> 32);
        for ( i = (int *)*(_QWORD *)(v3 + 16); v17 != i; ++i )
          CompoundTag::clone((CompoundTag *)&v30, *i);
          v29 = v30;
          v30 = 0;
          ListTag::add((int)v15, &v29);
          if ( v29 )
            (*(void (**)(void))(*(_DWORD *)v29 + 4))();
          v29 = 0;
          if ( v30 )
            (*(void (**)(void))(*(_DWORD *)v30 + 4))();
        sub_21E94B4((void **)&v28, "EntityTagList");
        v27 = v15;
        CompoundTag::put((int)v12, (const void **)&v28, (int *)&v27);
        if ( v27 )
          (*(void (**)(void))(*(_DWORD *)v27 + 4))();
        v4 = (void **)&v32;
        v5 = &dword_28898C0;
        v18 = (void *)(v28 - 12);
        v27 = 0;
        if ( (int *)(v28 - 12) != &dword_28898C0 )
          v10 = (unsigned int *)(v28 - 4);
              v11 = __ldrex(v10);
            while ( __strex(v11 - 1, v10) );
            v11 = (*v10)--;
          if ( v11 <= 0 )
            j_j_j_j__ZdlPv_9(v18);
        v26 = v12;
        ListTag::add((int)v23, (int *)&v26);
        if ( v26 )
          (*(void (**)(void))(*(_DWORD *)v26 + 4))();
        v26 = 0;
        v3 = *(_DWORD *)v3;
      }
      while ( v3 );
    }
    sub_21E94B4((void **)&v25, "LimboEntities");
    v24 = v23;
    CompoundTag::put((int)v22, (const void **)&v25, (int *)&v24);
    if ( v24 )
      (*(void (**)(void))(*(_DWORD *)v24 + 4))();
    v24 = 0;
    v19 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v25 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      else
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
  }
}


signed int __fastcall Dimension::getMaxFogEnd(Dimension *this)
{
  return 2139095039;
}


int __fastcall Dimension::getSunAngle(Dimension *this, float a2)
{
  Dimension *v2; // r5@1
  float v3; // r4@1
  int (__fastcall *v4)(Dimension *, int, _DWORD); // r6@1
  int v5; // r0@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  v4 = *(int (__fastcall **)(Dimension *, int, _DWORD))(*(_DWORD *)this + 220);
  v5 = Level::getTime(*((Level **)this + 4));
  _R0 = v4(v2, v5, LODWORD(v3));
  __asm { VMOV            S2, R0 }
  _R1 = &mce::Math::PI;
  __asm
  {
    VLDR            S0, [R1]
    VADD.F32        S0, S0, S0
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


signed int __fastcall Dimension::getMaxFogStart(Dimension *this)
{
  return 2139095039;
}


int __fastcall Dimension::getSkyDarken(Dimension *this, float a2)
{
  Dimension *v2; // r4@1
  float v3; // r5@1
  int (__fastcall *v4)(Dimension *, int, _DWORD); // r6@1
  int v5; // r0@1
  Weather *v14; // r6@1
  int v17; // r0@5
  int result; // r0@7

  v2 = this;
  v3 = a2;
  v4 = *(int (__fastcall **)(Dimension *, int, _DWORD))(*(_DWORD *)this + 220);
  v5 = Level::getTime(*((Level **)this + 4));
  _R0 = v4(v2, v5, LODWORD(v3));
  __asm { VMOV            S2, R0 }
  _R1 = &mce::Math::PI;
  __asm
  {
    VLDR            S0, [R1]
    VADD.F32        S0, S0, S0
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  _R0 = cosf(_R0);
  __asm { VMOV            S0, R0 }
  v14 = (Weather *)*((_DWORD *)v2 + 51);
    VLDR            S16, =0.8
    VMOV.F32        S18, #0.3125
    VSUB.F32        S20, S16, S0
  _R7 = Weather::getFogLevel(*((Weather **)v2 + 51));
  _R0 = Weather::getLightningLevel(v14, v3);
    VCMPE.F32       S20, #0.0
    VLDR            S6, =0.0
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S2, #1.0
    VMOV            S0, R7
    VMOV            S4, R0
    VMOV.F32        S8, S6
    VMUL.F32        S0, S0, S18
    VMUL.F32        S4, S4, S18
    VCMPE.F32       S20, S2
    VSUB.F32        S0, S2, S0
    VSUB.F32        S4, S2, S4
    VMUL.F32        S0, S4, S0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S8, S20 }
    VSUB.F32        S8, S2, S8
    VMOV.F32        S2, #0.6875
    __asm { VMOVGT.F32      S8, S6 }
  v17 = *((_DWORD *)v2 + 76);
    VMUL.F32        S0, S0, S8
    VMUL.F32        S2, S0, S2
  if ( _ZF )
    __asm { VMOVEQ.F32      S2, S0 }
    VMUL.F32        S0, S2, S16
    VLDR            S2, =0.2
    VADD.F32        S0, S0, S2
  return result;
}


void __fastcall Dimension::_onNewTickingEntity(Dimension *this, Entity *a2)
{
  Dimension::_onNewTickingEntity(this, a2);
}


int __fastcall Dimension::getPopCap(Dimension *this, int a2, int a3)
{
  Dimension *v3; // r3@1

  v3 = this + 44;
  if ( a3 )
    v3 = this + 34;
  return *(_DWORD *)&v3[2 * a2];
}


int __fastcall Dimension::backgroundTickSeasons(Dimension *this)
{
  Dimension *v1; // r4@1
  int result; // r0@1
  char *v3; // r5@2
  _DWORD *v4; // r0@2
  int (*v5)(void); // r3@2
  __int64 v6; // r6@2
  _DWORD *v7; // [sp+4h] [bp-24h]@2
  int (*v8)(void); // [sp+Ch] [bp-1Ch]@2
  signed int (__fastcall *v9)(Random ***, Entity *); // [sp+10h] [bp-18h]@2

  v1 = this;
  result = *((_BYTE *)this + 118);
  if ( result )
  {
    v3 = Level::getRandom(*((Level **)v1 + 4));
    TickingAreaListBase::tickSeasons(*((TickingAreaListBase **)v1 + 70), (Random *)v3);
    v4 = operator new(4u);
    *v4 = v3;
    v5 = (int (*)(void))sub_18FE4F0;
    v7 = v4;
    v8 = (int (*)(void))sub_18FE4F0;
    v9 = sub_18FE3E8;
    v6 = *(_QWORD *)(*((_DWORD *)v1 + 4) + 24);
    if ( (_DWORD)v6 == HIDWORD(v6) )
      goto LABEL_14;
    do
    {
      result = (*(int (**)(void))(**(_DWORD **)v6 + 524))();
      if ( result == *((_DWORD *)v1 + 28) )
      {
        result = Entity::isRemoved(*(Entity **)v6);
        if ( !result )
        {
          if ( !v8 )
            sub_21E5F48();
          result = v9((Random ***)&v7, *(Entity **)v6);
          if ( result != 1 )
            break;
        }
      }
      LODWORD(v6) = v6 + 4;
    }
    while ( HIDWORD(v6) != (_DWORD)v6 );
    v5 = v8;
    if ( v8 )
LABEL_14:
      result = v5();
  }
  return result;
}


int __fastcall Dimension::getSpawnPos(int result)
{
  unsigned int v1; // r1@1

  *(_DWORD *)result = BlockPos::ZERO;
  v1 = dword_281627C;
  *(_DWORD *)(result + 4) = unk_2816278;
  *(_DWORD *)(result + 8) = v1;
  return result;
}


int __fastcall Dimension::onBlockEvent(Dimension *this, BlockSource *a2, int a3, int a4, int a5, int a6, int a7)
{
  Dimension *v7; // r4@1
  int v8; // r5@1
  int v9; // r6@1
  int v10; // r7@1
  int result; // r0@1
  void **v12; // [sp+0h] [bp-38h]@3
  int v13; // [sp+4h] [bp-34h]@3
  int v14; // [sp+8h] [bp-30h]@3
  char v15; // [sp+Ch] [bp-2Ch]@3
  int v16; // [sp+10h] [bp-28h]@3
  int v17; // [sp+14h] [bp-24h]@3
  int v18; // [sp+18h] [bp-20h]@3
  int v19; // [sp+1Ch] [bp-1Ch]@3
  int v20; // [sp+20h] [bp-18h]@3

  v7 = this;
  v8 = a4;
  v9 = a3;
  v10 = *((_DWORD *)this + 28);
  result = BlockSource::getDimensionId(a2);
  if ( v10 == result )
  {
    result = *(_BYTE *)(*((_DWORD *)v7 + 4) + 5824);
    if ( !*(_BYTE *)(*((_DWORD *)v7 + 4) + 5824) )
    {
      v13 = 2;
      v14 = 1;
      v15 = 0;
      v12 = &off_26E9594;
      v16 = v9;
      v17 = v8;
      v18 = a5;
      v19 = a6;
      v20 = a7;
      result = (*(int (__fastcall **)(Dimension *, void ***, _DWORD))(*(_DWORD *)v7 + 212))(v7, &v12, 0);
    }
  }
  return result;
}


void __fastcall Dimension::~Dimension(Dimension *this)
{
  Dimension::~Dimension(this);
}


int __fastcall Dimension::Dimension(int a1, int a2, int a3, __int16 a4)
{
  int v4; // r4@1
  int v5; // r7@1
  int v6; // r9@1
  __int16 v7; // r5@1
  int v8; // r6@1
  char v9; // r3@1
  int v10; // r10@1
  __int64 v11; // r0@1
  int v12; // r5@1
  double v13; // r0@1
  double v14; // r0@1
  int v15; // r7@3
  void *v16; // r5@3
  unsigned int v17; // r0@4
  int v18; // r7@6
  void *v19; // r5@6
  _DWORD *v20; // r0@7
  int v21; // r1@7
  TaskGroup *v22; // r0@7
  TaskGroup *v23; // r0@8
  Level *v24; // r0@9
  void *v25; // r5@12
  int v26; // r0@12
  void *v27; // r5@14
  Seasons *v28; // r0@14
  Seasons *v29; // r0@15
  void *v30; // r5@16
  PostprocessingManager *v31; // r0@16
  PostprocessingManager *v32; // r0@17
  int v34; // [sp+4h] [bp-2Ch]@7

  v4 = a1;
  v5 = a2;
  v6 = a3;
  *(_DWORD *)a1 = &off_26DC880;
  v7 = a4;
  *(_DWORD *)(a1 + 4) = &off_271859C;
  v8 = a1 + 4;
  sub_21E8AF4((int *)(a1 + 12), (int *)&unk_281C060 + a3 + 1);
  *(_DWORD *)v4 = &off_271849C;
  *(_DWORD *)(v4 + 4) = &off_2718584;
  *(_DWORD *)(v4 + 16) = v5;
  *(_DWORD *)(v4 + 32) = 0;
  *(_DWORD *)(v4 + 40) = 0;
  *(_DWORD *)(v4 + 44) = 0;
  *(_DWORD *)(v4 + 48) = 0;
  *(_DWORD *)(v4 + 52) = 0;
  *(_BYTE *)(v4 + 56) = 0;
  *(_DWORD *)(v4 + 64) = 0;
  v9 = Brightness::MIN;
  *(_BYTE *)(v4 + 108) = Brightness::MAX;
  *(_BYTE *)(v4 + 109) = v9;
  *(_DWORD *)(v4 + 112) = v6;
  *(_WORD *)(v4 + 116) = 0;
  *(_BYTE *)(v4 + 118) = 0;
  *(_BYTE *)(v4 + 119) = Brightness::MIN;
  *(_WORD *)(v4 + 120) = v7;
  *(_DWORD *)(v4 + 188) = 0;
  v10 = v4 + 188;
  *(_DWORD *)(v10 + 4) = 0;
  *(_DWORD *)(v10 + 8) = 0;
  *(_DWORD *)(v10 + 12) = 0;
  *(_DWORD *)(v10 + 16) = 0;
  *(_DWORD *)(v10 + 20) = 0;
  LODWORD(v11) = operator new(0xB8u);
  v12 = v11;
  CircuitSystem::CircuitSystem(v11);
  *(_DWORD *)(v4 + 212) = v12;
  *(_DWORD *)(v4 + 216) = 2;
  *(_DWORD *)(v4 + 220) = 2;
  *(_DWORD *)(v4 + 232) = 0;
  *(_DWORD *)(v4 + 236) = 0;
  *(_DWORD *)(v4 + 240) = 1065353216;
  LODWORD(v13) = v4 + 240;
  *(_DWORD *)(LODWORD(v13) + 4) = 0;
  v14 = COERCE_DOUBLE(__PAIR__(10, sub_21E6254(v13)));
  *(_DWORD *)(v4 + 228) = LODWORD(v14);
  if ( LODWORD(v14) == 1 )
  {
    *(_DWORD *)(v4 + 248) = 0;
    v16 = (void *)(v4 + 248);
  }
  else
    if ( LODWORD(v14) >= 0x40000000 )
      sub_21E57F4();
    v15 = 4 * LODWORD(v14);
    v16 = operator new(4 * LODWORD(v14));
    _aeabi_memclr4(v16, v15);
  *(_DWORD *)(v4 + 224) = v16;
  *(_DWORD *)(v4 + 260) = 0;
  *(_DWORD *)(v4 + 264) = 0;
  *(_DWORD *)(v4 + 268) = 1065353216;
  *(_DWORD *)(v4 + 272) = 0;
  LODWORD(v14) = v4 + 268;
  v17 = sub_21E6254(v14);
  *(_DWORD *)(v4 + 256) = v17;
  if ( v17 == 1 )
    v19 = (void *)(v4 + 276);
    *(_DWORD *)(v4 + 276) = 0;
    if ( v17 >= 0x40000000 )
    v18 = 4 * v17;
    v19 = operator new(4 * v17);
    _aeabi_memclr4(v19, v18);
  *(_DWORD *)(v4 + 252) = v19;
  v20 = operator new(0xCu);
  *v20 = 0;
  v20[1] = 0;
  v20[2] = 0;
  *(_DWORD *)(v4 + 280) = v20;
  *(_DWORD *)(v4 + 288) = 0;
  *(_DWORD *)(v4 + 292) = 0;
  *(_DWORD *)(v4 + 296) = 0;
  *(_DWORD *)(v4 + 300) = 0;
  *(_DWORD *)(v4 + 304) = 0;
  *(_DWORD *)(v4 + 296) = v4 + 288;
  *(_DWORD *)(v4 + 300) = v4 + 288;
  *(_DWORD *)(v4 + 308) = 0;
  *(_DWORD *)(v4 + 312) = 0;
  *(_DWORD *)(v4 + 316) = 0;
  std::make_unique<TaskGroup,WorkerPool &,char const(&)[23]>(&v34, WorkerPool::ASYNC, "A dimension task group");
  v21 = v34;
  v34 = 0;
  v22 = *(TaskGroup **)v10;
  *(_DWORD *)v10 = v21;
  if ( v22 )
    v23 = TaskGroup::~TaskGroup(v22);
    operator delete((void *)v23);
  v24 = *(Level **)(v4 + 16);
  Level::addListener(v24, (LevelListener *)v4);
  if ( v6 != 2
    && !SavedDataStorage::loadAndSet(*(_DWORD *)(*(_DWORD *)(v4 + 16) + 132), v8, (int **)&unk_281C060 + v6 + 1) )
    SavedDataStorage::set(*(_DWORD *)(*(_DWORD *)(v4 + 16) + 132), (int **)&unk_281C060 + v6 + 1, v8);
  v25 = operator new(0x40u);
  Weather::Weather((int)v25, (Dimension *)v4);
  v26 = *(_DWORD *)(v4 + 204);
  *(_DWORD *)(v4 + 204) = v25;
  if ( v26 )
    (*(void (**)(void))(*(_DWORD *)v26 + 4))();
  v27 = operator new(0x18u);
  Seasons::Seasons((int)v27, v4);
  v28 = *(Seasons **)(v4 + 208);
  *(_DWORD *)(v4 + 208) = v27;
  if ( v28 )
    v29 = Seasons::~Seasons(v28);
    operator delete((void *)v29);
  _aeabi_memclr4(v4 + 68, 40);
  *(_DWORD *)(v4 + 4 * MobSpawnInfo::categoryID(4864) + 68) = 1077936128;
  *(_DWORD *)(v4 + 4 * MobSpawnInfo::categoryID(8960) + 68) = 1082130432;
  *(_DWORD *)(v4 + 4 * MobSpawnInfo::categoryID(2816) + 68) = 1082130432;
  *(_DWORD *)(v4 + 4 * MobSpawnInfo::categoryID(33024) + 68) = 0;
  *(_DWORD *)(v4 + 4 * MobSpawnInfo::categoryID(4864) + 88) = 0;
  *(_DWORD *)(v4 + 4 * MobSpawnInfo::categoryID(8960) + 88) = 0;
  *(_DWORD *)(v4 + 4 * MobSpawnInfo::categoryID(2816) + 88) = 1094713344;
  *(_DWORD *)(v4 + 4 * MobSpawnInfo::categoryID(33024) + 88) = 1082130432;
  v30 = operator new(0x24u);
  PostprocessingManager::PostprocessingManager((int)v30);
  v31 = *(PostprocessingManager **)(v4 + 192);
  *(_DWORD *)(v4 + 192) = v30;
  if ( v31 )
    v32 = PostprocessingManager::~PostprocessingManager(v31);
    operator delete((void *)v32);
  *(_BYTE *)(v4 + 8) = 1;
  return v4;
}


signed int __fastcall Dimension::isNaturalDimension(Dimension *this)
{
  return 1;
}


void __fastcall Dimension::acquireDiscardedChunk(int a1, LevelChunk **a2)
{
  LevelChunk **v2; // r4@1
  int v3; // r5@1
  LevelChunk *v4; // r2@1
  void (*v5)(void); // r3@1
  LevelChunk *v6; // r0@2
  LevelChunk *v7; // [sp+4h] [bp-14h]@1

  v2 = a2;
  v3 = a1;
  Level::onChunkDiscarded(*(Level **)(a1 + 16), *a2);
  v4 = *v2;
  v5 = *(void (**)(void))(**(_DWORD **)(v3 + 196) + 56);
  *v2 = 0;
  v7 = v4;
  v5();
  if ( v7 )
  {
    v6 = LevelChunk::~LevelChunk(v7);
    LevelChunk::operator delete((void *)v6);
  }
}


int __fastcall Dimension::getOldSkyDarken(Dimension *this, float a2, float a3)
{
  float v3; // r5@1
  Dimension *v4; // r8@1
  float v5; // r6@1
  int (__fastcall *v6)(_DWORD, int, _DWORD); // r4@1
  int v7; // r0@1
  Weather *v16; // r7@1
  int v20; // r0@5
  int result; // r0@7

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = *(int (__fastcall **)(_DWORD, int, _DWORD))(*(_DWORD *)LODWORD(a2) + 220);
  v7 = Level::getTime(*(Level **)(LODWORD(a2) + 16));
  _R0 = v6(LODWORD(v3), v7, LODWORD(v5));
  __asm { VMOV            S2, R0 }
  _R1 = &mce::Math::PI;
  __asm
  {
    VLDR            S0, [R1]
    VADD.F32        S0, S0, S0
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  _R0 = mce::Math::cos(_R0, COERCE_FLOAT(&mce::Math::PI));
  v16 = *(Weather **)(LODWORD(v3) + 204);
  __asm { VMOV            S16, R0 }
  _R4 = Weather::getFogLevel(*(Weather **)(LODWORD(v3) + 204));
  _R0 = Weather::getRainLevel(v16, v5);
    VADD.F32        S2, S16, S16
    VLDR            S6, =-0.38125
    VMOV.F32        S0, #0.5
    VMOV.F32        S18, #0.3125
    VMOV            S8, R0
    VMOV            S4, R4
    VMOV.F32        S16, #1.0
    VMUL.F32        S20, S4, S6
    VSUB.F32        S24, S0, S2
    VMUL.F32        S22, S8, S18
  _R0 = Weather::getLightningLevel(v16, v5);
    VCMPE.F32       S24, #0.0
    VLDR            S4, =0.0
    VMRS            APSR_nzcv, FPSCR
    VMOV            S0, R0
    VADD.F32        S2, S20, S16
    VMUL.F32        S0, S0, S18
    VSUB.F32        S6, S16, S22
    VSUB.F32        S0, S16, S0
    VMUL.F32        S2, S6, S2
  if ( _NF ^ _VF )
    __asm { VMOVLT.F32      S24, S4 }
    VMOV.F32        S4, #0.6875
    VCMPE.F32       S24, S16
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S24, S16 }
  v20 = *(_DWORD *)(LODWORD(v3) + 304);
    VSUB.F32        S2, S16, S24
    VMUL.F32        S0, S0, S2
    VMUL.F32        S2, S0, S4
  if ( _ZF )
    __asm { VMOVEQ.F32      S2, S0 }
    VMOV.F32        S0, #11.0
    VSUB.F32        S2, S16, S2
    VCVTR.S32.F32   S0, S0
  *(_BYTE *)v4 = result;
  return result;
}


void __fastcall Dimension::~Dimension(Dimension *this)
{
  Dimension *v1; // r0@1

  v1 = Dimension::~Dimension(this);
  j_j_j__ZdlPv_6(v1);
}


int __fastcall Dimension::sendPacketForEntity(Dimension *this, const Entity *a2, const Packet *a3, const Player *a4)
{
  Dimension *v4; // r4@1
  __int64 v5; // r5@1
  _DWORD *v6; // r0@1
  int (__fastcall *v7)(void **, void **, int); // r3@1
  __int64 v8; // r6@1
  int result; // r0@2
  _DWORD *v10; // [sp+0h] [bp-28h]@1
  int (__fastcall *v11)(void **, void **, int); // [sp+8h] [bp-20h]@1
  signed int (__fastcall *v12)(int, Player *); // [sp+Ch] [bp-1Ch]@1
  const Player *v13; // [sp+10h] [bp-18h]@1

  v4 = this;
  LODWORD(v5) = a3;
  HIDWORD(v5) = a2;
  v13 = a4;
  v6 = operator new(0x10u);
  *v6 = v4;
  v6[1] = &v13;
  *((_QWORD *)v6 + 1) = v5;
  v7 = sub_18FF12E;
  v10 = v6;
  v11 = sub_18FF12E;
  v12 = sub_18FF0E2;
  v8 = *(_QWORD *)(*((_DWORD *)v4 + 4) + 24);
  if ( (_DWORD)v8 == HIDWORD(v8) )
    goto LABEL_13;
  do
  {
    result = (*(int (__cdecl **)(_DWORD))(**(_DWORD **)v8 + 524))(*(_DWORD *)v8);
    if ( result == *((_DWORD *)v4 + 28) )
    {
      result = Entity::isRemoved(*(Entity **)v8);
      if ( !result )
      {
        if ( !v11 )
          sub_21E5F48();
        result = v12((int)&v10, *(Player **)v8);
        if ( result != 1 )
          break;
      }
    }
    LODWORD(v8) = v8 + 4;
  }
  while ( HIDWORD(v8) != (_DWORD)v8 );
  v7 = v11;
  if ( v11 )
LABEL_13:
    result = ((int (__cdecl *)(_DWORD **))v7)(&v10);
  return result;
}


int __fastcall Dimension::sendPacketForPosition(Dimension *this, const BlockPos *a2, const Packet *a3, const Player *a4)
{
  Dimension *v4; // r4@1
  __int64 v5; // r5@1
  _DWORD *v6; // r0@1
  int (__fastcall *v7)(void **, void **, int); // r3@1
  __int64 v8; // r6@1
  int result; // r0@2
  _DWORD *v10; // [sp+0h] [bp-28h]@1
  int (__fastcall *v11)(void **, void **, int); // [sp+8h] [bp-20h]@1
  signed int (__fastcall *v12)(int, Player *); // [sp+Ch] [bp-1Ch]@1
  const Player *v13; // [sp+10h] [bp-18h]@1

  v4 = this;
  LODWORD(v5) = a3;
  HIDWORD(v5) = a2;
  v13 = a4;
  v6 = operator new(0x10u);
  *v6 = v4;
  v6[1] = &v13;
  *((_QWORD *)v6 + 1) = v5;
  v7 = sub_18FF0A4;
  v10 = v6;
  v11 = sub_18FF0A4;
  v12 = sub_18FF056;
  v8 = *(_QWORD *)(*((_DWORD *)v4 + 4) + 24);
  if ( (_DWORD)v8 == HIDWORD(v8) )
    goto LABEL_13;
  do
  {
    result = (*(int (__cdecl **)(_DWORD))(**(_DWORD **)v8 + 524))(*(_DWORD *)v8);
    if ( result == *((_DWORD *)v4 + 28) )
    {
      result = Entity::isRemoved(*(Entity **)v8);
      if ( !result )
      {
        if ( !v11 )
          sub_21E5F48();
        result = v12((int)&v10, *(Player **)v8);
        if ( result != 1 )
          break;
      }
    }
    LODWORD(v8) = v8 + 4;
  }
  while ( HIDWORD(v8) != (_DWORD)v8 );
  v7 = v11;
  if ( v11 )
LABEL_13:
    result = ((int (__cdecl *)(_DWORD **))v7)(&v10);
  return result;
}


int __fastcall Dimension::getMoonPhase(Dimension *this)
{
  _R0 = Level::getTime(*((Level **)this + 4));
  _R1 = 91625969;
  __asm { SMMUL.W         R0, R0, R1 }
  return (signed int)(((signed int)_R0 >> 9) + (_R0 >> 31)) % 8;
}


int __fastcall Dimension::sendBroadcast(Dimension *this, const Packet *a2, Player *a3)
{
  Dimension *v3; // r4@1
  const Packet *v4; // r5@1
  _DWORD *v5; // r0@1
  int (__fastcall *v6)(void **, void **, int); // r3@1
  __int64 v7; // r6@1
  int result; // r0@2
  _DWORD *v9; // [sp+0h] [bp-28h]@1
  int (__fastcall *v10)(void **, void **, int); // [sp+8h] [bp-20h]@1
  signed int (__fastcall *v11)(Player ****, Player *); // [sp+Ch] [bp-1Ch]@1
  Player *v12; // [sp+10h] [bp-18h]@1

  v3 = this;
  v4 = a2;
  v12 = a3;
  v5 = operator new(0xCu);
  *v5 = &v12;
  v5[1] = v3;
  v5[2] = v4;
  v6 = sub_18FF018;
  v9 = v5;
  v10 = sub_18FF018;
  v11 = sub_18FEFDA;
  v7 = *(_QWORD *)(*((_DWORD *)v3 + 4) + 24);
  if ( (_DWORD)v7 == HIDWORD(v7) )
    goto LABEL_13;
  do
  {
    result = (*(int (__cdecl **)(_DWORD))(**(_DWORD **)v7 + 524))(*(_DWORD *)v7);
    if ( result == *((_DWORD *)v3 + 28) )
    {
      result = Entity::isRemoved(*(Entity **)v7);
      if ( !result )
      {
        if ( !v10 )
          sub_21E5F48();
        result = v11((Player ****)&v9, *(Player **)v7);
        if ( result != 1 )
          break;
      }
    }
    LODWORD(v7) = v7 + 4;
  }
  while ( HIDWORD(v7) != (_DWORD)v7 );
  v6 = v10;
  if ( v10 )
LABEL_13:
    result = ((int (__cdecl *)(_DWORD **))v6)(&v9);
  return result;
}
