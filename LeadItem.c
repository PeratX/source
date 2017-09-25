

int __fastcall LeadItem::_useOn(int a1, int a2, Entity *this, int a4, int a5, int a6, int a7, int a8, int a9)
{
  Entity *v9; // r4@1
  int v10; // r5@1
  const BlockPos *v11; // r0@1
  int v12; // r7@1
  Level *v13; // r8@1
  signed int v14; // r6@1
  int v15; // r1@1
  ItemUseCallback *v17; // [sp+4h] [bp-1Ch]@1

  v9 = this;
  v10 = a4;
  v11 = (const BlockPos *)Entity::getRegion(this);
  BlockSource::getBlockAndData((BlockSource *)&v17, v11, v10);
  v12 = (unsigned __int8)v17;
  v13 = (Level *)Entity::getLevel(v9);
  v14 = 0;
  if ( Block::hasProperty(Block::mBlocks[v12], v15, 128LL) == 1 )
  {
    if ( !Level::isClientSide(v13) )
      LeadItem::bindPlayerMobs(v9, *(Entity **)v10, *(_DWORD *)(v10 + 4), *(_DWORD *)(v10 + 8), a9, v17);
    v14 = 1;
  }
  return v14;
}


int __fastcall LeadItem::LeadItem(int a1, const void **a2, __int16 a3)
{
  int result; // r0@1

  result = Item::Item(a1, a2, a3);
  *(_DWORD *)result = &off_2702938;
  *(_BYTE *)(result + 43) = 1;
  return result;
}


int __fastcall LeadItem::canBindPlayerMobs(LeadItem *this, const Entity *a2, const BlockPos *a3)
{
  const Entity *v3; // r6@1
  Entity *v4; // r9@1
  int v5; // r5@1
  char v10; // r6@1
  __int64 *v11; // r0@1
  __int64 *v12; // r5@1
  __int64 v13; // r0@1
  unsigned int v14; // r4@2
  int v15; // r7@3
  char *v16; // r0@4
  char v17; // r0@4
  __int64 v19; // [sp+0h] [bp-68h]@4
  float v20; // [sp+Ch] [bp-5Ch]@1
  float v21; // [sp+18h] [bp-50h]@1
  char v22; // [sp+24h] [bp-44h]@1
  float v23; // [sp+40h] [bp-28h]@1

  v3 = a2;
  v4 = this;
  v5 = Entity::getRegion(this);
  Vec3::Vec3((int)&v23, (int)v3);
  __asm
  {
    VMOV.F32        S0, #-7.0
    VLDR            S4, [SP,#0x68+var_28]
    VMOV.F32        S2, #7.0
    VLDR            S6, [SP,#0x68+var_24]
    VLDR            S8, [SP,#0x68+var_20]
    VADD.F32        S10, S4, S0
    VADD.F32        S12, S6, S0
    VADD.F32        S4, S4, S2
    VADD.F32        S6, S6, S2
    VADD.F32        S0, S8, S0
    VADD.F32        S2, S8, S2
    VSTR            S10, [SP,#0x68+var_50]
    VSTR            S12, [SP,#0x68+var_4C]
    VSTR            S4, [SP,#0x68+var_5C]
    VSTR            S6, [SP,#0x68+var_58]
    VSTR            S0, [SP,#0x68+var_48]
    VSTR            S2, [SP,#0x68+var_54]
  }
  AABB::AABB((int)&v22, (int)&v21, (int)&v20);
  v10 = 0;
  v11 = (__int64 *)BlockSource::fetchEntities(v5, 256, (int)&v22, 0);
  v12 = v11;
  v13 = *v11;
  if ( HIDWORD(v13) != (_DWORD)v13 )
    v14 = 0;
    do
    {
      v15 = *(_DWORD *)(v13 + 4 * v14);
      if ( Entity::isLeashed(*(Entity **)(v13 + 4 * v14)) == 1 )
      {
        Entity::getLeashHolder((Entity *)&v19, v15);
        v16 = Entity::getUniqueID(v4);
        _ZF = *(_QWORD *)v16 == v19;
        v17 = 0;
        if ( _ZF )
          v17 = 1;
        v10 |= v17;
      }
      v13 = *v12;
      ++v14;
    }
    while ( v14 < (HIDWORD(v13) - (signed int)v13) >> 2 );
  return v10 & 1;
}


void __fastcall LeadItem::~LeadItem(LeadItem *this)
{
  LeadItem::~LeadItem(this);
}


int __fastcall LeadItem::bindPlayerMobs(LeadItem *this, Entity *a2, int a3, int a4, int a5, ItemUseCallback *a6)
{
  Entity *v9; // r4@1
  BlockSource *v10; // r0@1
  int v11; // r0@1
  Entity *v15; // r9@1
  Entity *v16; // r8@1
  BlockSource *v20; // r4@1
  signed int v21; // r10@1
  __int64 *v22; // r0@1
  __int64 *v23; // r6@1
  __int64 v24; // r0@1
  signed int v25; // r8@2
  unsigned int v26; // r5@3
  unsigned int *v27; // r2@4
  signed int v28; // r1@6
  unsigned int *v29; // r2@8
  signed int v30; // r1@10
  unsigned int *v31; // r2@12
  signed int v32; // r1@14
  int v33; // r11@28
  char *v34; // r0@29
  void *v35; // r0@31
  void *v36; // r0@32
  void *v37; // r0@33
  int v38; // r0@38
  int v39; // r2@38
  int (*v40)(void); // r3@38
  Level *v42; // r0@50
  char *v43; // r0@50
  int v44; // r1@50
  int v46; // [sp+0h] [bp-E8h]@0
  int v47; // [sp+4h] [bp-E4h]@0
  int v48; // [sp+8h] [bp-E0h]@0
  signed int v49; // [sp+24h] [bp-C4h]@2
  Entity *v50; // [sp+28h] [bp-C0h]@3
  float v51; // [sp+2Ch] [bp-BCh]@50
  int v52; // [sp+38h] [bp-B0h]@38
  float v53; // [sp+3Ch] [bp-ACh]@31
  int v54; // [sp+48h] [bp-A0h]@12
  int v55; // [sp+4Ch] [bp-9Ch]@8
  int v56; // [sp+50h] [bp-98h]@4
  int v57; // [sp+54h] [bp-94h]@31
  __int64 v58; // [sp+58h] [bp-90h]@29
  char v59; // [sp+64h] [bp-84h]@1
  Entity *v60; // [sp+80h] [bp-68h]@1
  int v61; // [sp+84h] [bp-64h]@1
  int v62; // [sp+88h] [bp-60h]@1

  _R5 = a4;
  _R6 = a3;
  _R7 = a2;
  v9 = this;
  v10 = (BlockSource *)Entity::getRegion(this);
  v60 = _R7;
  v61 = _R6;
  v62 = _R5;
  v11 = findKnotAt(v10, (const BlockPos *)&v60);
  __asm { VMOV            S2, R7 }
  v15 = (Entity *)v11;
  __asm
  {
    VMOV.F32        S0, #-7.0
    VCVT.F32.S32    S20, S2
  }
  v16 = v9;
    VMOV            S2, R6
    VCVT.F32.S32    S18, S2
    VMOV            S2, R5
    VCVT.F32.S32    S16, S2
    VADD.F32        S2, S20, S0
    VADD.F32        S4, S18, S0
    VADD.F32        S0, S16, S0
    VMOV            R6, S2
    VMOV            R7, S4
    VMOV            R5, S0
    VMOV.F32        S0, #7.0
    VADD.F32        S22, S16, S0
    VADD.F32        S24, S18, S0
    VADD.F32        S26, S20, S0
  v20 = (BlockSource *)Entity::getRegion(v9);
    VSTR            S26, [SP,#0xE8+var_E8]
    VSTR            S24, [SP,#0xE8+var_E4]
    VSTR            S22, [SP,#0xE8+var_E0]
  AABB::AABB(COERCE_FLOAT(&v59), _R6, __PAIR__(_R5, _R7), v46, v47, v48);
  v21 = 0;
  v22 = (__int64 *)BlockSource::fetchEntities((int)v20, 256, (int)&v59, 0);
  v23 = v22;
  v24 = *v22;
  if ( HIDWORD(v24) == (_DWORD)v24 )
    v25 = 2;
    v49 = 0;
    goto LABEL_53;
    VMOV.F32        S0, #0.5
    VMOV.F32        S2, #0.25
  v26 = 0;
    VADD.F32        S16, S16, S0
    VADD.F32        S18, S18, S2
    VADD.F32        S20, S20, S0
  v49 = 0;
  v50 = v16;
  do
    v33 = *(_DWORD *)(v24 + 4 * v26);
    if ( Entity::isLeashed(*(Entity **)(v24 + 4 * v26)) == 1 )
    {
      Entity::getLeashHolder((Entity *)&v58, v33);
      v34 = Entity::getUniqueID(v50);
      if ( *(_QWORD *)v34 == v58 )
      {
        if ( v15 )
        {
LABEL_50:
          v42 = (Level *)BlockSource::getLevel(v20);
          __asm
          {
            VSTR            S20, [SP,#0xE8+var_BC]
            VSTR            S18, [SP,#0xE8+var_B8]
            VSTR            S16, [SP,#0xE8+var_B4]
          }
          v49 = 1;
          Level::broadcastSoundEvent(v42, (int)v20, 124, (int)&v51, -1, 1, 0, 0);
          v43 = Entity::getUniqueID(v15);
          Entity::setLeashHolder(v33, v44, *(_QWORD *)v43, *(_QWORD *)v43 >> 32);
          goto LABEL_51;
        }
        EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v54, 88);
        __asm
          VSTR            S20, [SP,#0xE8+var_AC]
          VSTR            S18, [SP,#0xE8+var_A8]
          VSTR            S16, [SP,#0xE8+var_A4]
        EntityFactory::createSpawnedEntity((Entity **)&v57, (const void **)&v54, 0, (int)&v53, &Vec2::ZERO);
        v35 = (void *)(v56 - 12);
        if ( (int *)(v56 - 12) != &dword_28898C0 )
          v27 = (unsigned int *)(v56 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v28 = __ldrex(v27);
            while ( __strex(v28 - 1, v27) );
          else
            v28 = (*v27)--;
          if ( v28 <= 0 )
            j_j_j_j__ZdlPv_9(v35);
        v36 = (void *)(v55 - 12);
        if ( (int *)(v55 - 12) != &dword_28898C0 )
          v29 = (unsigned int *)(v55 - 4);
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
            v30 = (*v29)--;
          if ( v30 <= 0 )
            j_j_j_j__ZdlPv_9(v36);
        v37 = (void *)(v54 - 12);
        if ( (int *)(v54 - 12) != &dword_28898C0 )
          v31 = (unsigned int *)(v54 - 4);
              v32 = __ldrex(v31);
            while ( __strex(v32 - 1, v31) );
            v32 = (*v31)--;
          if ( v32 <= 0 )
            j_j_j_j__ZdlPv_9(v37);
        if ( v57 )
          if ( a5 && (*(int (**)(void))(*(_DWORD *)a5 + 24))() )
            v15 = 0;
            v25 = 1;
            goto LABEL_47;
          v38 = BlockSource::getLevel(v20);
          v39 = v57;
          v40 = *(int (**)(void))(*(_DWORD *)v38 + 44);
          v57 = 0;
          v52 = v39;
          v15 = (Entity *)v40();
          if ( v52 )
            (*(void (**)(void))(*(_DWORD *)v52 + 32))();
          v52 = 0;
          _ZF = a5 == 0;
          if ( a5 )
            _ZF = v15 == 0;
          if ( !_ZF )
            (*(void (**)(void))(*(_DWORD *)a5 + 28))();
        else
          v15 = 0;
        v25 = 0;
        if ( !v15 )
          v25 = 1;
LABEL_47:
          (*(void (**)(void))(*(_DWORD *)v57 + 32))();
        if ( v25 )
          goto LABEL_53;
        goto LABEL_50;
      }
    }
LABEL_51:
    v24 = *v23;
    ++v26;
  while ( v26 < (HIDWORD(v24) - (signed int)v24) >> 2 );
  v25 = 2;
LABEL_53:
  if ( v25 == 2 )
    v21 = 1;
  return v49 & v21;
}


void __fastcall LeadItem::~LeadItem(LeadItem *this)
{
  Item *v1; // r0@1

  v1 = Item::~Item(this);
  j_j_j__ZdlPv_6((void *)v1);
}
