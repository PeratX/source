

void __fastcall ExplodeComponent::addAdditionalSaveData(ExplodeComponent *this, CompoundTag *a2)
{
  ExplodeComponent *v2; // r5@1
  CompoundTag *v3; // r6@1
  void *v4; // r0@2
  void *v5; // r0@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  int v10; // [sp+4h] [bp-2Ch]@3
  int v11; // [sp+Ch] [bp-24h]@2

  v2 = this;
  v3 = a2;
  if ( *((_DWORD *)this + 1) >= 1 )
  {
    sub_21E94B4((void **)&v11, "Fuse");
    j_CompoundTag::putByte((int)v3, (const void **)&v11, *((_BYTE *)v2 + 4));
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
    sub_21E94B4((void **)&v10, "IsFuseLit");
    j_CompoundTag::putByte((int)v3, (const void **)&v10, *((_BYTE *)v2 + 20));
    v5 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v10 - 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
  }
}


unsigned int __fastcall ExplodeComponent::tick(ExplodeComponent *this)
{
  ExplodeComponent *v1; // r4@1
  int v2; // r0@1
  signed int v3; // r0@2
  BlockSource *v4; // r5@6
  Entity *v5; // r5@7
  unsigned int result; // r0@7
  unsigned int v7; // r1@7
  int v8; // r2@8
  unsigned int v9; // r1@9
  unsigned int v10; // r0@9
  char v11; // [sp+4h] [bp-1Ch]@6

  v1 = this;
  v2 = *(_DWORD *)this;
  if ( *((_BYTE *)v1 + 20) )
  {
    j_Entity::setStatusFlag(v2, 10, 1);
    v3 = *((_DWORD *)v1 + 1);
    if ( v3 < 1 )
    {
      if ( (*(int (**)(void))(**(_DWORD **)v1 + 316))() == 1 )
      {
        v4 = (BlockSource *)j_Entity::getRegion(*(Entity **)v1);
        j_Entity::getAttachPos((AABB *)&v11, *(_DWORD *)v1, 5, 0);
        j_ExplodeComponent::explode(v1, v4, (const Vec3 *)&v11, 1.0);
      }
    }
    else
      *((_DWORD *)v1 + 1) = v3 - 1;
  }
  else
    j_Entity::setStatusFlag(v2, 10, 0);
  v5 = *(Entity **)v1;
  result = j_SynchedEntityData::_get((SynchedEntityData *)(*(_DWORD *)v1 + 176), 56);
  v7 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v7 == 2 )
    v8 = *((_DWORD *)v1 + 1);
    if ( *(_DWORD *)(result + 12) != v8 )
      *(_DWORD *)(result + 12) = v8;
      *(_BYTE *)(result + 8) = 1;
      v9 = v7 >> 16;
      v10 = *((_WORD *)v5 + 94);
      if ( v10 >= v9 )
        LOWORD(v10) = v9;
      *((_WORD *)v5 + 94) = v10;
      result = *((_WORD *)v5 + 95);
      if ( result > v9 )
        LOWORD(v9) = *((_WORD *)v5 + 95);
      *((_WORD *)v5 + 95) = v9;
  return result;
}


int __fastcall ExplodeComponent::initFromDefinition(ExplodeComponent *this)
{
  ExplodeComponent *v1; // r4@1
  int v2; // r0@1
  int v3; // r5@1
  unsigned int v9; // r0@1
  int result; // r0@1

  v1 = this;
  v2 = *(_DWORD *)this;
  v3 = *(_DWORD *)(*(_DWORD *)(v2 + 48) + 320);
  _R0 = j_FloatRange::getValue((FloatRange *)(v3 + 4), (Random *)(v2 + 552));
  __asm
  {
    VMOV.F32        S0, #20.0
    VMOV            S2, R0
    VMUL.F32        S0, S2, S0
    VCVTR.S32.F32   S2, S0
    VSTR            S2, [R4,#4]
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [R4,#8]
  }
  *((_DWORD *)v1 + 3) = *(_DWORD *)(v3 + 12);
  *((_DWORD *)v1 + 4) = *(_DWORD *)(v3 + 16);
  v9 = *(_DWORD *)(v3 + 20);
  *((_BYTE *)v1 + 20) = v9;
  *((_BYTE *)v1 + 21) = BYTE1(v9);
  *((_BYTE *)v1 + 22) = v9 >> 16;
  *((_BYTE *)v1 + 23) = BYTE3(v9);
  result = *(_BYTE *)(v3 + 24);
  *((_BYTE *)v1 + 24) = result;
  return result;
}


void __fastcall ExplodeComponent::addAdditionalSaveData(ExplodeComponent *this, CompoundTag *a2)
{
  ExplodeComponent::addAdditionalSaveData(this, a2);
}


int __fastcall ExplodeComponent::explode(ExplodeComponent *this, BlockSource *a2, const Vec3 *a3, float a4)
{
  BlockSource *v4; // r6@1
  const Vec3 *v7; // r8@1
  Level *v8; // r0@1
  Level *v9; // r7@1
  int result; // r0@1
  unsigned __int64 *v11; // r0@4
  signed int v12; // r9@4
  unsigned __int64 *v17; // r0@9
  signed int v18; // r0@9
  void *v19; // [sp+0h] [bp-38h]@0
  float v20; // [sp+Ch] [bp-2Ch]@0
  int v21; // [sp+10h] [bp-28h]@0
  int v22; // [sp+14h] [bp-24h]@0
  int v23; // [sp+18h] [bp-20h]@0
  int v24; // [sp+1Ch] [bp-1Ch]@0
  void *v25; // [sp+20h] [bp-18h]@0
  int v26; // [sp+24h] [bp-14h]@0
  void *v27; // [sp+28h] [bp-10h]@0

  v4 = a2;
  _R4 = this;
  _R5 = a4;
  v7 = a3;
  v8 = (Level *)j_BlockSource::getLevel(a2);
  v9 = v8;
  result = j_Level::isClientSide(v8);
  if ( !result )
  {
    if ( *((_BYTE *)_R4 + 21) )
    {
      if ( *((_BYTE *)_R4 + 23) )
      {
        v11 = (unsigned __int64 *)j_Level::getGameRules(v9);
        v12 = j_GameRules::getBool(v11, (int **)&GameRules::MOB_GRIEFING);
      }
      else
        v12 = 1;
    }
    else
      v12 = 0;
    __asm { VMOV            S16, R5 }
    if ( *((_BYTE *)_R4 + 22) )
      if ( *((_BYTE *)_R4 + 24) )
        v17 = (unsigned __int64 *)j_Level::getGameRules(v9);
        v18 = j_GameRules::getBool(v17, (int **)&GameRules::MOB_GRIEFING);
        v18 = 1;
      v18 = 0;
    __asm
      VLDR            S0, [R4,#0xC]
      VLDR            S2, [R4,#0x10]
      VMUL.F32        S0, S0, S16
      VSTR            S2, [SP,#0x38+var_2C]
      VSTR            S0, [SP,#0x38+var_38]
    j_Level::explode(v9, v4, *(Entity **)_R4, v7, v19, v12, v18, v20, v21, v22, v23, v24, v25, v26, v27);
    result = (*(int (**)(void))(**(_DWORD **)_R4 + 44))();
  }
  return result;
}


int __fastcall ExplodeComponent::triggerFuse(ExplodeComponent *this)
{
  ExplodeComponent *v1; // r4@1
  int result; // r0@2
  BlockSource *v3; // r5@5
  char v4; // [sp+4h] [bp-1Ch]@5

  v1 = this;
  if ( *((_DWORD *)this + 1) <= 0 )
  {
    v3 = (BlockSource *)j_Entity::getRegion(*(Entity **)this);
    j_Entity::getAttachPos((AABB *)&v4, *(_DWORD *)v1, 5, 0);
    result = j_ExplodeComponent::explode(v1, v3, (const Vec3 *)&v4, 1.0);
  }
  else
    result = *((_BYTE *)this + 20);
    if ( !*((_BYTE *)v1 + 20) )
    {
      result = 1;
      *((_BYTE *)v1 + 20) = 1;
    }
  return result;
}


int __fastcall ExplodeComponent::setFuseLength(int result, int a2)
{
  *(_DWORD *)(result + 4) = a2;
  return result;
}


signed int __fastcall ExplodeComponent::readAdditionalSaveData(ExplodeComponent *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  ExplodeComponent *v3; // r6@1
  void *v4; // r0@1
  int v5; // r0@2
  void *v6; // r0@4
  signed int result; // r0@5
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  int v12; // [sp+4h] [bp-2Ch]@2
  int v13; // [sp+Ch] [bp-24h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v13, "Fuse");
  *((_DWORD *)v3 + 1) = j_CompoundTag::getByte((int)v2, (const void **)&v13);
  v4 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v12, "IsFuseLit");
  v5 = j_CompoundTag::getByte((int)v2, (const void **)&v12);
  if ( v5 )
    LOBYTE(v5) = 1;
  *((_BYTE *)v3 + 20) = v5;
  v6 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  result = *((_BYTE *)v3 + 20);
  if ( !*((_BYTE *)v3 + 20) )
    result = -1;
    *((_DWORD *)v3 + 1) = -1;
  return result;
}


int __fastcall ExplodeComponent::ExplodeComponent(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int v4; // r3@1
  int v5; // r6@3
  _BYTE *v6; // r0@3
  _BYTE *v7; // r1@3
  int v8; // r0@3
  unsigned int v9; // r0@5
  signed __int16 v10; // r1@5

  v2 = a2;
  v3 = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = -1;
  v4 = a1 + 12;
  *(_DWORD *)v4 = 1077936128;
  *(_DWORD *)(v4 + 4) = 2139095039;
  *(_DWORD *)(v4 + 8) = 0x10000;
  *(_BYTE *)(a1 + 24) = 0;
  if ( !j_SynchedEntityData::hasData((SynchedEntityData *)(a2 + 176), 56)
    && !j_SynchedEntityData::_find((SynchedEntityData *)(v2 + 176), 56) )
  {
    j_SynchedEntityData::_resizeToContain((SynchedEntityData *)(v2 + 176), 56);
    v5 = *(_DWORD *)(v2 + 176);
    v6 = j_operator new(0x10u);
    v7 = v6;
    v6[4] = 2;
    *((_WORD *)v6 + 3) = 56;
    v6[8] = 1;
    *(_DWORD *)v6 = &off_26F08C4;
    *((_DWORD *)v6 + 3) = 99;
    v8 = *(_DWORD *)(v5 + 224);
    *(_DWORD *)(v5 + 224) = v7;
    if ( v8 )
      (*(void (**)(void))(*(_DWORD *)v8 + 4))();
    v9 = *(_WORD *)(v2 + 188);
    v10 = 56;
    if ( v9 >= 0x38 )
      LOWORD(v9) = 56;
    *(_WORD *)(v2 + 188) = v9;
    if ( (unsigned int)*(_WORD *)(v2 + 190) > 0x38 )
      v10 = *(_WORD *)(v2 + 190);
    *(_WORD *)(v2 + 190) = v10;
  }
  return v3;
}
