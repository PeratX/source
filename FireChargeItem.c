

int __fastcall FireChargeItem::_useOn(int a1, int a2, Entity *this, int a4, int a5, int a6, int a7, int a8, int a9)
{
  Entity *v9; // r10@1
  int v10; // r6@1
  int v11; // r9@1
  const BlockPos *v12; // r7@1
  Player *v13; // r4@2
  __int64 v14; // r2@2
  Level *v15; // r0@2
  Dimension *v16; // r4@4
  int v17; // r0@8
  void *v18; // r0@8
  void *v19; // r0@9
  void *v20; // r0@10
  unsigned int *v21; // r2@11
  signed int v22; // r1@13
  int (__fastcall *v23)(int, int, void ***, char *); // r5@16
  void (__fastcall *v25)(int, int, void ***, char *); // r7@19
  unsigned int *v26; // r2@21
  signed int v27; // r1@23
  unsigned int *v28; // r2@25
  signed int v29; // r1@27
  char v30; // [sp+4h] [bp-8Ch]@19
  char v31; // [sp+5h] [bp-8Bh]@19
  char v32; // [sp+8h] [bp-88h]@18
  char v33; // [sp+9h] [bp-87h]@18
  char v34; // [sp+Ch] [bp-84h]@16
  char v35; // [sp+Dh] [bp-83h]@16
  void **v36; // [sp+10h] [bp-80h]@8
  int v37; // [sp+48h] [bp-48h]@10
  int v38; // [sp+4Ch] [bp-44h]@9
  int v39; // [sp+50h] [bp-40h]@8
  unsigned __int8 v40; // [sp+58h] [bp-38h]@3
  char v41; // [sp+5Ch] [bp-34h]@2
  char v42; // [sp+68h] [bp-28h]@1

  v9 = this;
  v10 = a4;
  v11 = a2;
  v12 = (const BlockPos *)j_Entity::getRegion(this);
  j_BlockSource::getBlockID((BlockSource *)&v42, v12, v10);
  if ( !v42 )
  {
    v13 = (Player *)j_BlockSource::getLevel(v12);
    j_Vec3::Vec3((int)&v41, v10);
    HIDWORD(v14) = 78642;
    LODWORD(v14) = &v41;
    j_Level::broadcastLevelEvent(v13, 1008, v14, 0);
    v15 = (Level *)j_Entity::getLevel(v9);
    if ( !j_Level::isClientSide(v15) )
    {
      j_BlockSource::getBlockID(
        (BlockSource *)&v40,
        (int)v12,
        *(_QWORD *)v10,
        (*(_QWORD *)v10 >> 32) - 1,
        *(_DWORD *)(v10 + 8));
      if ( v40 != *(_BYTE *)(Block::mObsidian + 4)
        || (v16 = (Dimension *)j_BlockSource::getDimension(v12), j_Dimension::getId(v16))
        && j_Dimension::getId(v16) != 1
        || j_PortalBlock::trySpawnPortal(
             (PortalBlock *)Block::mPortal,
             v12,
             (const BlockPos *)v10,
             (ItemUseCallback *)a9) != 1 )
      {
        j_BlockSource::getBlockAndData((BlockSource *)&v36, v12, v10);
        if ( a9 )
        {
          v23 = *(int (__fastcall **)(int, int, void ***, char *))(*(_DWORD *)a9 + 16);
          v34 = *(_BYTE *)(Block::mFire + 4);
          v35 = 0;
          if ( v23(a9, v10, &v36, &v34) )
            return 0;
          v32 = *(_BYTE *)(Block::mFire + 4);
          v33 = 0;
          j_BlockSource::setBlockAndData((int)v12, (BlockPos *)v10, (int)&v32, 3, (int)v9);
          v25 = *(void (__fastcall **)(int, int, void ***, char *))(*(_DWORD *)a9 + 20);
          v30 = *(_BYTE *)(Block::mFire + 4);
          v31 = 0;
          v25(a9, v10, &v36, &v30);
        }
        else
      }
      else if ( j_Entity::hasCategory((int)v9, 1) == 1 )
        v17 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v9 + 524))(v9);
        j_EventPacket::EventPacket((int)&v36, v9, v17);
        (*(void (__fastcall **)(Entity *, void ***))(*(_DWORD *)v9 + 1448))(v9, &v36);
        v36 = &off_26E9D30;
        v18 = (void *)(v39 - 12);
        if ( (int *)(v39 - 12) != &dword_28898C0 )
          v26 = (unsigned int *)(v39 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
          }
          else
            v27 = (*v26)--;
          if ( v27 <= 0 )
            j_j_j_j__ZdlPv_9(v18);
        v19 = (void *)(v38 - 12);
        if ( (int *)(v38 - 12) != &dword_28898C0 )
          v28 = (unsigned int *)(v38 - 4);
              v29 = __ldrex(v28);
            while ( __strex(v29 - 1, v28) );
            v29 = (*v28)--;
          if ( v29 <= 0 )
            j_j_j_j__ZdlPv_9(v19);
        v20 = (void *)(v37 - 12);
        if ( (int *)(v37 - 12) != &dword_28898C0 )
          v21 = (unsigned int *)(v37 - 4);
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
    }
  }
  (*(void (__fastcall **)(Entity *, int))(*(_DWORD *)v9 + 612))(v9, v11);
  return 1;
}


signed int __fastcall FireChargeItem::_calculatePlacePos(FireChargeItem *this, ItemInstance *a2, Entity *a3, signed __int8 *a4, BlockPos *a5)
{
  int v5; // r1@2
  int v6; // r1@3
  int v8; // r1@6

  switch ( *a4 )
  {
    case 0:
      v5 = *((_DWORD *)a5 + 1) - 1;
      goto LABEL_5;
    case 1:
      v5 = *((_DWORD *)a5 + 1) + 1;
LABEL_5:
      *((_DWORD *)a5 + 1) = v5;
      return 1;
    case 2:
      v8 = *((_DWORD *)a5 + 2) - 1;
      goto LABEL_8;
    case 3:
      v8 = *((_DWORD *)a5 + 2) + 1;
LABEL_8:
      *((_DWORD *)a5 + 2) = v8;
    case 4:
      v6 = *(_DWORD *)a5 - 1;
      break;
    default:
      v6 = *(_DWORD *)a5 + 1;
  }
  *(_DWORD *)a5 = v6;
  return 1;
}


_DWORD *__fastcall FireChargeItem::FireChargeItem(int a1, const void **a2, __int16 a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)j_Item::Item(a1, a2, a3);
  *result = &off_2721348;
  return result;
}


void __fastcall FireChargeItem::~FireChargeItem(FireChargeItem *this)
{
  FireChargeItem::~FireChargeItem(this);
}


void __fastcall FireChargeItem::~FireChargeItem(FireChargeItem *this)
{
  Item *v1; // r0@1

  v1 = j_Item::~Item(this);
  j_j_j__ZdlPv_7((void *)v1);
}


signed int __fastcall FireChargeItem::dispense(FireChargeItem *this, BlockSource *a2, Container *a3, int a4, const Vec3 *a5, signed __int8 a6)
{
  int v6; // r8@1
  Container *v7; // r9@1
  BlockSource *v8; // r10@1
  Random *v9; // r5@1
  Level *v13; // r0@1
  Spawner *v14; // r7@1
  Entity *v19; // r7@13
  void *v20; // r0@13
  void *v21; // r0@14
  void *v22; // r0@15
  signed int v23; // r4@16
  Player *v24; // r0@17
  int v25; // r2@17
  int v26; // r3@17
  __int64 v27; // r2@17
  unsigned int *v29; // r2@19
  signed int v30; // r1@21
  unsigned int *v31; // r2@23
  signed int v32; // r1@25
  unsigned int *v33; // r2@27
  signed int v34; // r1@29
  int v35; // [sp+8h] [bp-50h]@17
  int v36; // [sp+Ch] [bp-4Ch]@17
  int v37; // [sp+10h] [bp-48h]@17
  float v38; // [sp+18h] [bp-40h]@13
  int v39; // [sp+24h] [bp-34h]@1
  int v40; // [sp+28h] [bp-30h]@14
  int v41; // [sp+2Ch] [bp-2Ch]@13

  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = (Random *)j_ThreadLocal<Random>::getLocal((int)&Random::mThreadLocalRandom);
  _R6 = j_Random::nextGaussian(v9);
  _R4 = j_Random::nextGaussian(v9);
  _R5 = j_Random::nextGaussian(v9);
  v13 = (Level *)j_BlockSource::getLevel(v8);
  v14 = (Spawner *)j_Level::getSpawner(v13);
  j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v39, 4194398);
  __asm
  {
    VMOV.F32        S2, #1.0
    VLDR            S0, =0.0
    VMOV            S14, R5
    VMOV            S8, R6
    VLDR            S10, =0.05
    VMOV.F32        S4, S0
    VMOV.F32        S6, S0
    VMOV            S12, R4
  }
  if ( _ZF )
    __asm { VMOVEQ.F32      S4, S2 }
  if ( a6 == 1 )
    __asm { VMOVEQ.F32      S6, S2 }
  if ( a6 == 3 )
    __asm { VMOVEQ.F32      S0, S2 }
    VMOV.F32        S2, #-1.0
    VMUL.F32        S8, S8, S10
    VMUL.F32        S12, S12, S10
  if ( !a6 )
  if ( a6 == 2 )
    VMUL.F32        S2, S14, S10
    VADD.F32        S4, S8, S4
    VADD.F32        S6, S12, S6
    VADD.F32        S0, S2, S0
    VSTR            S4, [SP,#0x58+var_40]
    VSTR            S6, [SP,#0x58+var_3C]
    VSTR            S0, [SP,#0x58+var_38]
  v19 = j_Spawner::spawnProjectile(v14, v8, (const EntityDefinitionIdentifier *)&v39, 0, a5, (const Vec3 *)&v38);
  v20 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v41 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
    }
    else
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v40 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v39 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = 0;
  if ( v19 )
    (*(void (__fastcall **)(Container *, int, signed int))(*(_DWORD *)v7 + 36))(v7, v6, 1);
    v24 = (Player *)j_BlockSource::getLevel(v8);
    v25 = *((_DWORD *)a5 + 1);
    v26 = *((_DWORD *)a5 + 2);
    v35 = *(_DWORD *)a5;
    v36 = v25;
    v37 = v26;
    HIDWORD(v27) = 78642;
    LODWORD(v27) = &v35;
    j_Level::broadcastLevelEvent(v24, 1008, v27, 0);
    v23 = 1;
  return v23;
}
