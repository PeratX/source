

void __fastcall Shulker::~Shulker(Shulker *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall Shulker::isValidAttach(Entity *a1, const BlockPos *a2, char a3)
{
  char v3; // r4@1
  const BlockPos *v4; // r5@1
  Entity *v5; // r6@1
  BlockSource *v6; // r0@1
  BlockSource *v7; // r0@2
  int v8; // r0@2
  int result; // r0@4

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = (BlockSource *)Entity::getRegion(a1);
  result = 0;
  if ( BlockSource::isSolidBlockingBlock(v6, v4) == 1 )
  {
    v7 = (BlockSource *)Entity::getRegion(v5);
    v8 = BlockSource::getBlock(v7, v4);
    if ( v3 || *(_BYTE *)(v8 + 4) != *(_BYTE *)(Block::mPiston + 4) )
      result = 1;
  }
  return result;
}


signed int __fastcall Shulker::hasValidInterpolationPositions(Shulker *this)
{
  signed int result; // r0@2

  if ( *((_BYTE *)this + 4317) )
  {
    result = (unsigned __int16)SynchedEntityData::getShort((Shulker *)((char *)this + 176), 66);
    if ( (_WORD)result )
      result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall Shulker::getPickRadius(Shulker *this)
{
  return 0;
}


int __fastcall Shulker::Shulker(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  int v5; // r7@2
  _BYTE *v6; // r0@2
  signed __int16 v7; // r6@2
  int v8; // r1@2
  unsigned int v9; // r0@4
  int v10; // r7@10
  _BYTE *v11; // r0@10
  signed __int16 v12; // r6@10
  int v13; // r1@10
  unsigned int v14; // r0@12
  int v15; // r7@18
  _BYTE *v16; // r0@18
  signed __int16 v17; // r6@18
  int v18; // r1@18
  unsigned int v19; // r0@20
  int v20; // r6@26
  _BYTE *v21; // r0@26
  signed __int16 v22; // r5@26
  int v23; // r1@26
  unsigned int v24; // r0@28

  v3 = a1;
  Mob::Mob(a1, a2, a3);
  v4 = (int *)(v3 + 176);
  *(_DWORD *)v3 = &off_26F8D6C;
  *(_DWORD *)(v3 + 4292) = 6;
  *(_WORD *)(v3 + 4316) = 0;
  *(_DWORD *)(v3 + 4312) = 0;
  *(_DWORD *)(v3 + 4308) = 0;
  *(_DWORD *)(v3 + 4304) = 0;
  *(_DWORD *)(v3 + 248) = 51;
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 65) )
  {
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 65);
    v5 = *v4;
    v6 = operator new(0xCu);
    v7 = 65;
    v6[4] = 0;
    *((_WORD *)v6 + 3) = 65;
    v6[8] = 1;
    *(_DWORD *)v6 = &off_26F1394;
    v6[9] = 0;
    v8 = *(_DWORD *)(v5 + 260);
    *(_DWORD *)(v5 + 260) = v6;
    if ( v8 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
    v9 = *(_WORD *)(v3 + 188);
    if ( v9 >= 0x41 )
      LOWORD(v9) = 65;
    *(_WORD *)(v3 + 188) = v9;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x41 )
      v7 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v7;
  }
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 67) )
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 67);
    v10 = *v4;
    v11 = operator new(0x18u);
    v11[4] = 6;
    v12 = 67;
    *((_WORD *)v11 + 3) = 67;
    v11[8] = 1;
    *(_DWORD *)v11 = &off_26F9220;
    *((_DWORD *)v11 + 3) = 0;
    *((_DWORD *)v11 + 4) = 0;
    *((_DWORD *)v11 + 5) = 0;
    v13 = *(_DWORD *)(v10 + 268);
    *(_DWORD *)(v10 + 268) = v11;
    if ( v13 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 4))(v13);
    v14 = *(_WORD *)(v3 + 188);
    if ( v14 >= 0x43 )
      LOWORD(v14) = 67;
    *(_WORD *)(v3 + 188) = v14;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x43 )
      v12 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v12;
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 66) )
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 66);
    v15 = *v4;
    v16 = operator new(0xCu);
    v17 = 66;
    v16[4] = 1;
    *((_WORD *)v16 + 3) = 66;
    v16[8] = 1;
    *(_DWORD *)v16 = &off_26F0DE0;
    *((_WORD *)v16 + 5) = 0;
    v18 = *(_DWORD *)(v15 + 264);
    *(_DWORD *)(v15 + 264) = v16;
    if ( v18 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 4))(v18);
    v19 = *(_WORD *)(v3 + 188);
    if ( v19 >= 0x42 )
      LOWORD(v19) = 66;
    *(_WORD *)(v3 + 188) = v19;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x42 )
      v17 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v17;
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 64) )
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 64);
    v20 = *v4;
    v21 = operator new(0x10u);
    v21[4] = 2;
    v22 = 64;
    *((_WORD *)v21 + 3) = 64;
    v21[8] = 1;
    *(_DWORD *)v21 = &off_26F08C4;
    *((_DWORD *)v21 + 3) = 0;
    v23 = *(_DWORD *)(v20 + 256);
    *(_DWORD *)(v20 + 256) = v21;
    if ( v23 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 4))(v23);
    v24 = *(_WORD *)(v3 + 188);
    if ( v24 >= 0x40 )
      LOWORD(v24) = 64;
    *(_WORD *)(v3 + 188) = v24;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x40 )
      v22 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v22;
  Entity::setCollidableMob((Entity *)v3, 1);
  return v3;
}


int __fastcall Shulker::reloadHardcoded(int result, int a2)
{
  int v2; // r4@1
  bool v3; // zf@1
  ShulkerBodyControl *v4; // r5@5
  int v5; // r0@5
  int v6; // r0@7
  char v7; // r5@7
  BlockSource *v8; // r0@7
  BlockSource *v9; // r0@8
  int v10; // r0@8
  BlockSource *v11; // r5@10
  int v12; // r0@10
  int v13; // r5@11
  BlockSource *v14; // r6@13
  int v15; // r6@13
  BlockSource *v16; // r0@15
  BlockSource *v17; // r0@16
  int v18; // r0@16
  bool v19; // zf@16
  int v20; // r0@19
  unsigned int v21; // r1@22
  unsigned int v22; // r1@24
  unsigned int v23; // r0@24
  char v24; // [sp+8h] [bp-78h]@13
  int v25; // [sp+14h] [bp-6Ch]@12
  int v26; // [sp+18h] [bp-68h]@12
  int v27; // [sp+1Ch] [bp-64h]@12
  int v28; // [sp+20h] [bp-60h]@12
  int v29; // [sp+24h] [bp-5Ch]@12
  int v30; // [sp+28h] [bp-58h]@12
  char v31; // [sp+2Ch] [bp-54h]@10
  int v32; // [sp+38h] [bp-48h]@7
  int v33; // [sp+3Ch] [bp-44h]@7
  int v34; // [sp+40h] [bp-40h]@7
  int v35; // [sp+44h] [bp-3Ch]@7
  int v36; // [sp+48h] [bp-38h]@7
  int v37; // [sp+4Ch] [bp-34h]@7
  char v38; // [sp+50h] [bp-30h]@7

  v2 = result;
  v3 = a2 == 2;
  if ( a2 == 2 )
  {
    result = *(_BYTE *)(result + 3081);
    v3 = result == 0;
  }
  if ( v3 )
    *(_DWORD *)(v2 + 124) = 1127481344;
    *(_DWORD *)(v2 + 132) = 1127481344;
    *(_BYTE *)(v2 + 4317) = 0;
    v4 = (ShulkerBodyControl *)operator new(0x10u);
    ShulkerBodyControl::ShulkerBodyControl(v4, (Mob *)v2);
    v5 = *(_DWORD *)(v2 + 4116);
    *(_DWORD *)(v2 + 4116) = v4;
    if ( v5 )
      (*(void (**)(void))(*(_DWORD *)v5 + 4))();
    Entity::setCollidableMob((Entity *)v2, 1);
    BlockPos::BlockPos((int)&v38, v2 + 72);
    v6 = SynchedEntityData::getInt8((SynchedEntityData *)(v2 + 176), 65);
    BlockPos::relative((BlockPos *)&v35, (int)&v38, v6, 1);
    v32 = v35;
    v33 = v36;
    v34 = v37;
    v7 = SynchedEntityData::getInt8((SynchedEntityData *)(v2 + 176), 65);
    v8 = (BlockSource *)Entity::getRegion((Entity *)v2);
    if ( BlockSource::isSolidBlockingBlock(v8, (const BlockPos *)&v32) == 1
      && ((v9 = (BlockSource *)Entity::getRegion((Entity *)v2),
           v10 = BlockSource::getBlock(v9, (const BlockPos *)&v32),
           v7)
       || *(_BYTE *)(v10 + 4) != *(_BYTE *)(Block::mPiston + 4))
      && (v11 = (BlockSource *)Entity::getRegion((Entity *)v2),
          v12 = SynchedEntityData::getInt8((SynchedEntityData *)(v2 + 176), 65),
          BlockPos::relative((BlockPos *)&v31, (int)&v38, Facing::OPPOSITE_FACING[v12], 1),
          !BlockSource::isSolidBlockingBlock(v11, (const BlockPos *)&v31)) )
    {
      result = Shulker::calculateBB((Shulker *)v2);
    }
    else
      v13 = 0;
      while ( 1 )
      {
        BlockPos::relative((BlockPos *)&v28, (int)&v38, (char)v13, 1);
        v35 = v28;
        v36 = v29;
        v37 = v30;
        v25 = v28;
        v26 = v29;
        v27 = v30;
        if ( v13 )
        {
          v14 = (BlockSource *)Entity::getRegion((Entity *)v2);
          BlockPos::relative((BlockPos *)&v24, (int)&v38, Facing::OPPOSITE_FACING[v13], 1);
          v15 = !BlockSource::isSolidBlockingBlock(v14, (const BlockPos *)&v24);
        }
        else
          v15 = 0;
        v16 = (BlockSource *)Entity::getRegion((Entity *)v2);
        if ( BlockSource::isSolidBlockingBlock(v16, (const BlockPos *)&v25) == 1 )
          v17 = (BlockSource *)Entity::getRegion((Entity *)v2);
          v18 = BlockSource::getBlock(v17, (const BlockPos *)&v25);
          v19 = v15 == 0;
          if ( !v15 )
            v19 = *(_BYTE *)(v18 + 4) == *(_BYTE *)(Block::mPiston + 4);
          if ( !v19 )
            break;
        if ( ++v13 >= 6 )
          goto LABEL_29;
      }
      v20 = SynchedEntityData::_get((SynchedEntityData *)(v2 + 176), 65);
      v21 = *(_DWORD *)(v20 + 4);
      if ( !(_BYTE)v21 && *(_BYTE *)(v20 + 9) != (unsigned __int8)v13 )
        *(_BYTE *)(v20 + 9) = v13;
        *(_BYTE *)(v20 + 8) = 1;
        v22 = v21 >> 16;
        v23 = *(_WORD *)(v2 + 188);
        if ( v23 >= v22 )
          LOWORD(v23) = v22;
        *(_WORD *)(v2 + 188) = v23;
        if ( *(_WORD *)(v2 + 190) > v22 )
          LOWORD(v22) = *(_WORD *)(v2 + 190);
        *(_WORD *)(v2 + 190) = v22;
LABEL_29:
      Shulker::calculateBB((Shulker *)v2);
      result = Entity::setPersistent((Entity *)v2);
  return result;
}


signed int __fastcall Shulker::_hurt(Shulker *this, const EntityDamageSource *a2, int a3, int a4, bool a5)
{
  EntityDamageSource *v5; // r7@1
  Shulker *v6; // r4@1
  int v7; // r8@1
  int v8; // r6@1
  Level *v10; // r0@7
  BlockSource *v11; // r0@9
  int v12; // r5@9
  BlockSource *v13; // r0@9
  unsigned int v14; // r9@9
  int *v15; // r0@9
  int v16; // r1@10
  int v17; // r2@10
  unsigned __int64 *v19; // r0@14
  int v25; // [sp+8h] [bp-40h]@14
  int v26; // [sp+Ch] [bp-3Ch]@14
  int v27; // [sp+10h] [bp-38h]@14
  int v28; // [sp+14h] [bp-34h]@14
  int v29; // [sp+18h] [bp-30h]@14
  int v30; // [sp+1Ch] [bp-2Ch]@14
  int v31; // [sp+20h] [bp-28h]@9
  int v32; // [sp+24h] [bp-24h]@14
  int v33; // [sp+28h] [bp-20h]@14

  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = a3;
  if ( EntityDamageSource::getCause(a2) == 8 || EntityDamageSource::getCause(v5) == 6 )
  {
    Shulker::teleportSomewhere(v6);
    return 0;
  }
  if ( !SynchedEntityData::getInt((Shulker *)((char *)v6 + 176), 64) && EntityDamageSource::getCause(v5) == 3 )
  v10 = (Level *)Entity::getLevel(v6);
  if ( !Level::isClientSide(v10) )
    if ( (unsigned __int16)SynchedEntityData::getShort((Shulker *)((char *)v6 + 176), 66) )
    {
      SynchedEntityData::getPos((SynchedEntityData *)&v31, (int)v6 + 176, 0x43u);
      v11 = (BlockSource *)Entity::getRegion(v6);
      v12 = BlockSource::getBlock(v11, (const BlockPos *)&v31);
      v13 = (BlockSource *)Entity::getRegion(v6);
      v14 = BlockSource::getData(v13, (const BlockPos *)&v31);
      v15 = (int *)Block::getMaterial((Block *)v12);
      if ( !Material::isType(v15, 0) )
      {
        v16 = *(_BYTE *)(v12 + 4);
        v17 = *(_BYTE *)(Block::mPistonArm + 4);
        _ZF = v16 == v17;
        if ( v16 != v17 )
          _ZF = v16 == *(_BYTE *)(Block::mPiston + 4);
        if ( _ZF )
        {
          v19 = (unsigned __int64 *)Block::getBlockState(Block::mPiston, 15);
          BlockPos::relative(
            (BlockPos *)&v28,
            (int)&v31,
            Facing::OPPOSITE_FACING[(char)((0xFu >> (4 - (*v19 >> 32))) & (v14 >> (*v19 + 1 - (*v19 >> 32))))],
            1);
          v31 = v28;
          v32 = v29;
          v33 = v30;
          v25 = v28;
          v26 = v29;
          v27 = v30;
          Shulker::setShulkerAttachPos((int)v6, (int)&v25);
          return 0;
        }
      }
    }
  if ( Mob::_hurt(v6, v5, v8, v7, a5) != 1 )
  _R5 = Mob::getHealth(v6);
  _R0 = Mob::getMaxHealth(v6);
  __asm
    VMOV            S0, R0
    VMOV.F64        D1, #0.5
    VCVT.F64.S32    D0, S0
    VMUL.F64        D0, D0, D1
    VMOV            S2, R5
    VCVT.F64.S32    D1, S2
    VCMPE.F64       D1, D0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    if ( !(Random::_genRandInt32((Shulker *)((char *)v6 + 552)) & 3) )
      Shulker::teleportSomewhere(v6);
  return 1;
}


unsigned int __fastcall Shulker::setAttachFace(Shulker *this, signed __int8 a2)
{
  Shulker *v2; // r4@1
  signed __int8 v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = this;
  v3 = a2;
  result = SynchedEntityData::_get((Shulker *)((char *)this + 176), 65);
  v5 = *(_DWORD *)(result + 4);
  if ( !(_BYTE)v5 && *(_BYTE *)(result + 9) != (unsigned __int8)v3 )
  {
    *(_BYTE *)(result + 9) = v3;
    *(_BYTE *)(result + 8) = 1;
    v6 = v5 >> 16;
    v7 = *((_WORD *)v2 + 94);
    if ( v7 >= v6 )
      LOWORD(v7) = v6;
    *((_WORD *)v2 + 94) = v7;
    result = *((_WORD *)v2 + 95);
    if ( result > v6 )
      LOWORD(v6) = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v6;
  }
  return result;
}


unsigned int __fastcall Shulker::setPos(Shulker *this, const Vec3 *a2)
{
  Shulker *v2; // r4@1
  unsigned int result; // r0@1
  bool v4; // zf@1
  unsigned int v5; // r1@6
  unsigned int v6; // r1@8
  unsigned int v7; // r0@8
  __int64 v8; // [sp+4h] [bp-34h]@6
  int v9; // [sp+Ch] [bp-2Ch]@6
  unsigned int v10; // [sp+10h] [bp-28h]@1
  int v11; // [sp+14h] [bp-24h]@2
  int v12; // [sp+18h] [bp-20h]@5
  int v13; // [sp+1Ch] [bp-1Ch]@1
  int v14; // [sp+20h] [bp-18h]@2
  int v15; // [sp+24h] [bp-14h]@5

  v2 = this;
  Entity::setPos(this, a2);
  SynchedEntityData::getPos((SynchedEntityData *)&v13, (int)v2 + 176, 0x43u);
  BlockPos::BlockPos((BlockPos *)&v10, *((float *)v2 + 18), *((float *)v2 + 19), *((float *)v2 + 20));
  result = v10;
  v4 = v10 == v13;
  if ( v10 == v13 )
    v4 = v11 == v14;
  if ( !v4 || v12 != v15 )
  {
    v8 = *(_QWORD *)&v10;
    v9 = v12;
    Shulker::setShulkerAttachPos((int)v2, (int)&v8);
    result = SynchedEntityData::_get((Shulker *)((char *)v2 + 176), 64);
    v5 = *(_DWORD *)(result + 4);
    if ( (unsigned __int8)v5 == 2 )
    {
      if ( *(_DWORD *)(result + 12) )
      {
        v6 = v5 >> 16;
        *(_DWORD *)(result + 12) = 0;
        *(_BYTE *)(result + 8) = 1;
        v7 = *((_WORD *)v2 + 94);
        if ( v7 >= v6 )
          LOWORD(v7) = v6;
        *((_WORD *)v2 + 94) = v7;
        result = *((_WORD *)v2 + 95);
        if ( result > v6 )
          LOWORD(v6) = *((_WORD *)v2 + 95);
        *((_WORD *)v2 + 95) = v6;
      }
    }
  }
  return result;
}


signed int __fastcall Shulker::isClosed(Shulker *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = SynchedEntityData::getInt((Shulker *)((char *)this + 176), 64);
  v2 = 0;
  if ( !v1 )
    v2 = 1;
  return v2;
}


int __fastcall Shulker::getShadowRadius(Shulker *this)
{
  Entity *v1; // r4@1
  unsigned int v7; // r0@1
  int result; // r0@3

  v1 = this;
  _R0 = Entity::getShadowRadius(this);
  __asm
  {
    VMOV            S20, R0
    VMOV.F32        S16, #1.0
    VMOV.F32        S18, #0.5
  }
  v7 = Entity::isBaby(v1);
  __asm { VMUL.F32        S0, S20, S18 }
  if ( v7 )
    __asm { VMOVNE.F32      S16, S18 }
    VMUL.F32        S0, S0, S16
    VMOV            R0, S0
  return result;
}


int __fastcall Shulker::calculateBB(Shulker *this)
{
  float *v30; // r1@8
  __int64 v31; // r0@10
  BlockSource *v32; // r0@11
  char *v33; // r0@11
  char *v34; // r4@11
  unsigned int v36; // r7@14
  int v37; // r6@15
  int v39; // [sp+0h] [bp-128h]@0
  int v40; // [sp+4h] [bp-124h]@0
  int v41; // [sp+8h] [bp-120h]@0
  float v42; // [sp+Ch] [bp-11Ch]@8
  float v43; // [sp+10h] [bp-118h]@9
  int v44; // [sp+14h] [bp-114h]@8
  int v45; // [sp+18h] [bp-110h]@8
  signed int v46; // [sp+1Ch] [bp-10Ch]@8
  int v47; // [sp+20h] [bp-108h]@8
  int v48; // [sp+24h] [bp-104h]@8
  int v49; // [sp+28h] [bp-100h]@8
  int v50; // [sp+2Ch] [bp-FCh]@8
  int v51; // [sp+30h] [bp-F8h]@8
  int v52; // [sp+34h] [bp-F4h]@8
  char v53; // [sp+38h] [bp-F0h]@8
  int v54; // [sp+3Ch] [bp-ECh]@7
  int v55; // [sp+40h] [bp-E8h]@7
  int v56; // [sp+44h] [bp-E4h]@7
  int v57; // [sp+48h] [bp-E0h]@7
  int v58; // [sp+4Ch] [bp-DCh]@7
  int v59; // [sp+50h] [bp-D8h]@7
  char v60; // [sp+54h] [bp-D4h]@7
  int v61; // [sp+58h] [bp-D0h]@6
  int v62; // [sp+5Ch] [bp-CCh]@6
  int v63; // [sp+60h] [bp-C8h]@6
  int v64; // [sp+64h] [bp-C4h]@6
  int v65; // [sp+68h] [bp-C0h]@6
  int v66; // [sp+6Ch] [bp-BCh]@6
  char v67; // [sp+70h] [bp-B8h]@6
  int v68; // [sp+74h] [bp-B4h]@5
  int v69; // [sp+78h] [bp-B0h]@5
  int v70; // [sp+7Ch] [bp-ACh]@5
  int v71; // [sp+80h] [bp-A8h]@5
  int v72; // [sp+84h] [bp-A4h]@5
  int v73; // [sp+88h] [bp-A0h]@5
  char v74; // [sp+8Ch] [bp-9Ch]@5
  int v75; // [sp+90h] [bp-98h]@4
  int v76; // [sp+94h] [bp-94h]@4
  int v77; // [sp+98h] [bp-90h]@4
  int v78; // [sp+9Ch] [bp-8Ch]@4
  int v79; // [sp+A0h] [bp-88h]@4
  int v80; // [sp+A4h] [bp-84h]@4
  char v81; // [sp+A8h] [bp-80h]@4
  int v82; // [sp+ACh] [bp-7Ch]@3
  int v83; // [sp+B0h] [bp-78h]@3
  int v84; // [sp+B4h] [bp-74h]@3
  int v85; // [sp+B8h] [bp-70h]@3
  int v86; // [sp+BCh] [bp-6Ch]@3
  int v87; // [sp+C0h] [bp-68h]@3
  char v88; // [sp+C4h] [bp-64h]@3
  int v89; // [sp+C8h] [bp-60h]@2
  int v90; // [sp+CCh] [bp-5Ch]@2
  int v91; // [sp+D0h] [bp-58h]@2
  int v92; // [sp+D4h] [bp-54h]@2
  int v93; // [sp+D8h] [bp-50h]@2
  int v94; // [sp+DCh] [bp-4Ch]@2
  char v95; // [sp+E0h] [bp-48h]@2
  int v96; // [sp+E4h] [bp-44h]@1
  float v97; // [sp+E8h] [bp-40h]@1
  float v98; // [sp+ECh] [bp-3Ch]@1

  __asm { VMOV.F32        S18, #0.5 }
  _R4 = this;
  _R1 = (char *)this + 4300;
  __asm { VLDR            S0, [R1] }
  _R0 = &mce::Math::PI;
  __asm
  {
    VADD.F32        S0, S0, S18
    VLDR            S16, [R0]
    VMUL.F32        S0, S0, S16
    VMOV            R0, S0
  }
  _R0 = mce::Math::sin(_R0, *(float *)&_R1);
  _R1 = (int)_R4 + 4296;
    VLDR            S0, [R1]
    VMOV            S16, R0
    VMOV            R1, S0
  _R0 = mce::Math::sin(_R1, *(float *)&_R1);
    VMOV            S0, R0
    VMUL.F32        S20, S16, S18
  v96 = 0;
  __asm { VMUL.F32        S0, S0, S18 }
  v97 = 0.0;
  v98 = 0.0;
    VSUB.F32        S22, S18, S20
    VSUB.F32        S0, S0, S18
    VADD.F32        S16, S22, S0
  switch ( SynchedEntityData::getInt8((Shulker *)((char *)_R4 + 176), 65) )
    case 0:
      __asm
      {
        VMOV.F32        S0, #-0.5; jumptable 0175C1C2 case 0
        VLDR            S2, [R4,#0x48]
        VLDR            S6, [R4,#0x50]
        VMOV.F32        S10, #1.5
        VLDR            S4, [R4,#0x4C]
        VMOV            R2, S4
        VADD.F32        S8, S2, S0
        VADD.F32        S0, S6, S0
        VADD.F32        S2, S2, S18
        VADD.F32        S6, S6, S18
        VMOV            R1, S8
        VMOV            R3, S0
        VSUB.F32        S0, S10, S20
        VSTR            S2, [SP,#0x128+var_128]
        VADD.F32        S0, S0, S4
        VSTR            S0, [SP,#0x128+var_124]
        VSTR            S6, [SP,#0x128+var_120]
      }
      AABB::AABB(COERCE_FLOAT(&v89), _R1, _R2, v39, v40, v41);
      *((_DWORD *)_R4 + 66) = v89;
      *((_DWORD *)_R4 + 67) = v90;
      *((_DWORD *)_R4 + 68) = v91;
      *((_DWORD *)_R4 + 69) = v92;
      *((_DWORD *)_R4 + 70) = v93;
      *((_DWORD *)_R4 + 71) = v94;
      *((_BYTE *)_R4 + 288) = v95;
      __asm { VSTR            S16, [SP,#0x128+var_40] }
      break;
    case 1:
        VMOV.F32        S0, #-0.5; jumptable 0175C1C2 case 1
        VSUB.F32        S8, S4, S22
        VADD.F32        S10, S2, S0
        VMOV            R2, S8
        VMOV            R1, S10
        VMOV.F32        S0, #1.0
        VADD.F32        S0, S4, S0
      AABB::AABB(COERCE_FLOAT(&v82), _R1, _R2, v39, v40, v41);
      __asm { VNEG.F32        S0, S16 }
      *((_DWORD *)_R4 + 66) = v82;
      *((_DWORD *)_R4 + 67) = v83;
      *((_DWORD *)_R4 + 68) = v84;
      *((_DWORD *)_R4 + 69) = v85;
      *((_DWORD *)_R4 + 70) = v86;
      *((_DWORD *)_R4 + 71) = v87;
      *((_BYTE *)_R4 + 288) = v88;
      __asm { VSTR            S0, [SP,#0x128+var_40] }
    case 2:
        VMOV.F32        S0, #-0.5; jumptable 0175C1C2 case 2
        VMOV.F32        S10, #1.0
        VADD.F32        S4, S4, S10
        VSTR            S4, [SP,#0x128+var_124]
        VADD.F32        S0, S0, S6
        VSTR            S0, [SP,#0x128+var_120]
      AABB::AABB(COERCE_FLOAT(&v75), _R1, _R2, v39, v40, v41);
      *((_DWORD *)_R4 + 66) = v75;
      *((_DWORD *)_R4 + 67) = v76;
      *((_DWORD *)_R4 + 68) = v77;
      *((_DWORD *)_R4 + 69) = v78;
      *((_DWORD *)_R4 + 70) = v79;
      *((_DWORD *)_R4 + 71) = v80;
      *((_BYTE *)_R4 + 288) = v81;
      __asm { VSTR            S16, [SP,#0x128+var_3C] }
    case 3:
        VMOV.F32        S0, #-1.0; jumptable 0175C1C2 case 3
        VLDR            S4, [R4,#0x48]
        VMOV.F32        S2, #-0.5
        VLDR            S8, [R4,#0x50]
        VLDR            S6, [R4,#0x4C]
        VMOV            R2, S6
        VADD.F32        S0, S20, S0
        VADD.F32        S2, S4, S2
        VADD.F32        S4, S4, S18
        VADD.F32        S0, S0, S8
        VMOV            R1, S2
        VADD.F32        S2, S8, S18
        VSTR            S4, [SP,#0x128+var_128]
        VSTR            S2, [SP,#0x128+var_120]
      AABB::AABB(COERCE_FLOAT(&v68), _R1, _R2, v39, v40, v41);
      *((_DWORD *)_R4 + 66) = v68;
      *((_DWORD *)_R4 + 67) = v69;
      *((_DWORD *)_R4 + 68) = v70;
      *((_DWORD *)_R4 + 69) = v71;
      *((_DWORD *)_R4 + 70) = v72;
      *((_DWORD *)_R4 + 71) = v73;
      *((_BYTE *)_R4 + 288) = v74;
      __asm { VSTR            S0, [SP,#0x128+var_3C] }
    case 4:
        VMOV.F32        S0, #-0.5; jumptable 0175C1C2 case 4
        VADD.F32        S0, S0, S2
        VSTR            S0, [SP,#0x128+var_128]
      AABB::AABB(COERCE_FLOAT(&v61), _R1, _R2, v39, v40, v41);
      *((_DWORD *)_R4 + 66) = v61;
      *((_DWORD *)_R4 + 67) = v62;
      *((_DWORD *)_R4 + 68) = v63;
      *((_DWORD *)_R4 + 69) = v64;
      *((_DWORD *)_R4 + 70) = v65;
      *((_DWORD *)_R4 + 71) = v66;
      *((_BYTE *)_R4 + 288) = v67;
      __asm { VSTR            S16, [SP,#0x128+var_44] }
    case 5:
        VMOV.F32        S0, #-1.0; jumptable 0175C1C2 case 5
        VADD.F32        S2, S8, S2
        VMOV            R3, S2
        VMOV            R1, S0
      AABB::AABB(COERCE_FLOAT(&v54), _R1, _R2, v39, v40, v41);
      *((_DWORD *)_R4 + 66) = v54;
      *((_DWORD *)_R4 + 67) = v55;
      *((_DWORD *)_R4 + 68) = v56;
      *((_DWORD *)_R4 + 69) = v57;
      *((_DWORD *)_R4 + 70) = v58;
      *((_DWORD *)_R4 + 71) = v59;
      *((_BYTE *)_R4 + 288) = v60;
      __asm { VSTR            S0, [SP,#0x128+var_44] }
    default:
  v44 = 953267991;
  v45 = 0;
  v46 = 953267991;
  AABB::shrink((AABB *)&v47, (Shulker *)((char *)_R4 + 264), (int)&v44);
  _R0 = v47;
  *((_DWORD *)_R4 + 66) = v47;
  _R1 = v48;
  *((_DWORD *)_R4 + 67) = v48;
  __asm { VMOV            S0, R0 }
  _R2 = v49;
  *((_DWORD *)_R4 + 68) = v49;
  _R3 = v50;
  *((_DWORD *)_R4 + 69) = v50;
  __asm { VMOV            S4, R2 }
  _R7 = v51;
  *((_DWORD *)_R4 + 70) = v51;
  __asm { VMOV            S2, R3 }
  _R6 = v52;
  __asm { VSUB.F32        S0, S2, S0 }
  *((_DWORD *)_R4 + 71) = v52;
  __asm { VMOV            S6, R6 }
  *((_BYTE *)_R4 + 288) = v53;
    VSUB.F32        S2, S6, S4
    VMOV            S4, R1
  v30 = &v42;
    VMOV            S6, R7
    VSTR            S0, [SP,#0x128+var_118]
    VSUB.F32        S4, S6, S4
    VCMPE.F32       S0, S2
    VSTR            S2, [SP,#0x128+var_11C]
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    v30 = &v43;
  *((float *)_R4 + 76) = *v30;
  __asm { VSTR            S4, [R4,#0x134] }
  LODWORD(v31) = (*(int (__fastcall **)(Shulker *))(*(_DWORD *)_R4 + 764))(_R4);
    VCMPE.F32       S16, #0.0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v32 = (BlockSource *)Entity::getRegion(_R4);
    v33 = BlockSource::fetchEntities(v32, _R4, (Shulker *)((char *)_R4 + 264));
    v34 = v33;
    v31 = *(_QWORD *)v33;
    _ZF = (_DWORD)v31 == HIDWORD(v31);
    if ( (_DWORD)v31 != HIDWORD(v31) )
      _ZF = HIDWORD(v31) == (_DWORD)v31;
    if ( !_ZF )
    {
      v36 = 0;
      do
        v37 = *(_DWORD *)(v31 + 4 * v36);
        if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v37 + 488))(*(_DWORD *)(v31 + 4 * v36)) != 2870
          && Entity::getStatusFlag(v37, 45) == 1 )
        {
          (*(void (__fastcall **)(int, int *))(*(_DWORD *)v37 + 76))(v37, &v96);
        }
        v31 = *(_QWORD *)v34;
        ++v36;
      while ( v36 < (HIDWORD(v31) - (signed int)v31) >> 2 );
    }
  return v31;
}


int __fastcall Shulker::canAttack(Shulker *this, Entity *a2, bool a3)
{
  bool v3; // r4@1
  Entity *v4; // r5@1
  Mob *v5; // r6@1
  Level *v6; // r0@1
  int result; // r0@2

  v3 = a3;
  v4 = a2;
  v5 = this;
  v6 = (Level *)Entity::getLevel(this);
  if ( Level::getDifficulty(v6) )
    result = Mob::canAttack(v5, v4, v3);
  else
    result = 0;
  return result;
}


signed int __fastcall Shulker::shouldRender(Shulker *this)
{
  return 1;
}


void __fastcall Shulker::readAdditionalSaveData(Shulker *this, const CompoundTag *a2)
{
  Shulker::readAdditionalSaveData(this, a2);
}


int __fastcall Shulker::getOldShulkerAttachPosition(int result, int a2)
{
  *(_DWORD *)result = *(_DWORD *)(a2 + 4304);
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4308);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 4312);
  return result;
}


signed int __fastcall Shulker::teleportSomewhere(Shulker *this)
{
  int v5; // r9@2
  unsigned int v6; // r7@3
  unsigned int v7; // kr08_4@3
  unsigned int v8; // r0@3
  int v12; // r0@3
  unsigned __int64 *v13; // r7@3
  BlockSource *v14; // r0@4
  signed int v15; // r0@4
  BlockSource *v17; // r0@8
  BlockSource *v18; // r0@9
  BlockSource *v19; // r0@10
  BlockSource *v20; // r0@11
  BlockSource *v21; // r0@12
  BlockSource *v22; // r0@13
  BlockSource *v23; // r0@14
  BlockSource *v25; // r0@18
  char v26; // r6@18
  BlockSource *v27; // r0@19
  BlockSource *v28; // r0@20
  BlockSource *v29; // r0@21
  BlockSource *v30; // r0@22
  int v31; // r0@24
  unsigned int v32; // r1@24
  unsigned int v33; // r1@26
  unsigned int v34; // r0@26
  void (__fastcall *v35)(Shulker *, signed int, int, signed int); // r4@31
  int v36; // r0@31
  int v37; // r0@31
  unsigned int v38; // r1@31
  unsigned int v39; // r1@33
  unsigned int v40; // r0@33
  Random *v41; // [sp+18h] [bp-98h]@2
  unsigned int v42; // [sp+1Ch] [bp-94h]@31
  int v43; // [sp+20h] [bp-90h]@31
  unsigned int v44; // [sp+24h] [bp-8Ch]@31
  char v45; // [sp+28h] [bp-88h]@8
  float v46; // [sp+34h] [bp-7Ch]@3
  char v47; // [sp+40h] [bp-70h]@3
  float v48; // [sp+5Ch] [bp-54h]@3
  unsigned int v49; // [sp+68h] [bp-48h]@3
  int v50; // [sp+6Ch] [bp-44h]@3
  unsigned int v51; // [sp+70h] [bp-40h]@3
  int v52; // [sp+74h] [bp-3Ch]@2
  int v53; // [sp+78h] [bp-38h]@3
  int v54; // [sp+7Ch] [bp-34h]@3

  _R10 = this;
  if ( (*(int (**)(void))(*(_DWORD *)this + 316))() != 1 )
    return 1;
  BlockPos::BlockPos((int)&v52, (int)_R10 + 72);
  __asm { VMOV.F32        S16, #1.0 }
  v41 = (Shulker *)((char *)_R10 + 552);
  v5 = 0;
  while ( 1 )
  {
    v6 = Random::_genRandInt32(v41);
    v7 = Random::_genRandInt32(v41);
    v8 = Random::_genRandInt32(v41);
    _R1 = 8 - v6 % 0x11;
    v49 = v52 + _R1;
    __asm { VMOV            S0, R1 }
    _R0 = 8 - v8 % 0x11;
    _R1 = 8 - v7 % 0x11;
    __asm
    {
      VCVT.F32.S32    S0, S0
      VMOV            S4, R0
      VMOV            S2, R1
    }
    v50 = v53 + _R1;
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
    v51 = _R0 + v54;
      VLDR            S6, [R10,#0x48]
      VLDR            S8, [R10,#0x4C]
      VLDR            S10, [R10,#0x50]
      VADD.F32        S0, S6, S0
      VADD.F32        S2, S8, S2
      VADD.F32        S4, S10, S4
      VADD.F32        S6, S0, S16
      VSTR            S0, [SP,#0xB0+var_54]
      VADD.F32        S8, S2, S16
      VSTR            S2, [SP,#0xB0+var_50]
      VADD.F32        S10, S4, S16
      VSTR            S4, [SP,#0xB0+var_4C]
      VSTR            S6, [SP,#0xB0+var_7C]
      VSTR            S8, [SP,#0xB0+var_78]
      VSTR            S10, [SP,#0xB0+var_74]
    AABB::AABB((int)&v47, (int)&v48, (int)&v46);
    v12 = Entity::getRegion(_R10);
    v13 = (unsigned __int64 *)BlockSource::fetchEntities(v12, 2870, (int)&v47, 0);
    if ( v50 < 1 )
      goto LABEL_15;
    v14 = (BlockSource *)Entity::getRegion(_R10);
    v15 = BlockSource::isEmptyBlock(v14, (const BlockPos *)&v49);
    _ZF = v15 == 1;
    if ( v15 == 1 )
      _ZF = (unsigned int)*v13 == *v13 >> 32;
    if ( !_ZF )
    BlockPos::relative((BlockPos *)&v45, (int)&v49, 0, 1);
    v17 = (BlockSource *)Entity::getRegion(_R10);
    if ( BlockSource::isSolidBlockingBlock(v17, (const BlockPos *)&v45) == 1 )
      v18 = (BlockSource *)Entity::getRegion(_R10);
      if ( *(_BYTE *)(BlockSource::getBlock(v18, (const BlockPos *)&v45) + 4) != *(_BYTE *)(Block::mPiston + 4) )
        break;
    BlockPos::relative((BlockPos *)&v45, (int)&v49, 1, 1);
    v19 = (BlockSource *)Entity::getRegion(_R10);
    if ( BlockSource::isSolidBlockingBlock(v19, (const BlockPos *)&v45) )
      v25 = (BlockSource *)Entity::getRegion(_R10);
      BlockSource::getBlock(v25, (const BlockPos *)&v45);
      v26 = 1;
      goto LABEL_24;
    BlockPos::relative((BlockPos *)&v45, (int)&v49, 2, 1);
    v20 = (BlockSource *)Entity::getRegion(_R10);
    if ( BlockSource::isSolidBlockingBlock(v20, (const BlockPos *)&v45) == 1 )
      v27 = (BlockSource *)Entity::getRegion(_R10);
      BlockSource::getBlock(v27, (const BlockPos *)&v45);
      v26 = 2;
    BlockPos::relative((BlockPos *)&v45, (int)&v49, 3, 1);
    v21 = (BlockSource *)Entity::getRegion(_R10);
    if ( BlockSource::isSolidBlockingBlock(v21, (const BlockPos *)&v45) == 1 )
      v28 = (BlockSource *)Entity::getRegion(_R10);
      BlockSource::getBlock(v28, (const BlockPos *)&v45);
      v26 = 3;
    BlockPos::relative((BlockPos *)&v45, (int)&v49, 4, 1);
    v22 = (BlockSource *)Entity::getRegion(_R10);
    if ( BlockSource::isSolidBlockingBlock(v22, (const BlockPos *)&v45) == 1 )
      v29 = (BlockSource *)Entity::getRegion(_R10);
      BlockSource::getBlock(v29, (const BlockPos *)&v45);
      v26 = 4;
    BlockPos::relative((BlockPos *)&v45, (int)&v49, 5, 1);
    v23 = (BlockSource *)Entity::getRegion(_R10);
    if ( BlockSource::isSolidBlockingBlock(v23, (const BlockPos *)&v45) == 1 )
      v30 = (BlockSource *)Entity::getRegion(_R10);
      BlockSource::getBlock(v30, (const BlockPos *)&v45);
      v26 = 5;
LABEL_15:
    if ( ++v5 >= 5 )
      return 0;
  }
  v26 = 0;
LABEL_24:
  v31 = SynchedEntityData::_get((Shulker *)((char *)_R10 + 176), 65);
  v32 = *(_DWORD *)(v31 + 4);
  if ( !(_BYTE)v32 && *(_BYTE *)(v31 + 9) != (unsigned __int8)v26 )
    *(_BYTE *)(v31 + 9) = v26;
    *(_BYTE *)(v31 + 8) = 1;
    v33 = v32 >> 16;
    v34 = *((_WORD *)_R10 + 94);
    if ( v34 >= v33 )
      LOWORD(v34) = v33;
    *((_WORD *)_R10 + 94) = v34;
    if ( *((_WORD *)_R10 + 95) > v33 )
      LOWORD(v33) = *((_WORD *)_R10 + 95);
    *((_WORD *)_R10 + 95) = v33;
  v35 = *(void (__fastcall **)(Shulker *, signed int, int, signed int))(*(_DWORD *)_R10 + 556);
  v36 = (*(int (__fastcall **)(Shulker *))(*(_DWORD *)_R10 + 52))(_R10);
  v35(_R10, 107, v36, -1);
  v42 = v49;
  v43 = v50;
  v44 = v51;
  Shulker::setShulkerAttachPos((int)_R10, (int)&v42);
  v37 = SynchedEntityData::_get((Shulker *)((char *)_R10 + 176), 64);
  v38 = *(_DWORD *)(v37 + 4);
  if ( (unsigned __int8)v38 == 2 && *(_DWORD *)(v37 + 12) )
    v39 = v38 >> 16;
    *(_DWORD *)(v37 + 12) = 0;
    *(_BYTE *)(v37 + 8) = 1;
    v40 = *((_WORD *)_R10 + 94);
    if ( v40 >= v39 )
      LOWORD(v40) = v39;
    *((_WORD *)_R10 + 94) = v40;
    if ( *((_WORD *)_R10 + 95) > v39 )
      LOWORD(v39) = *((_WORD *)_R10 + 95);
    *((_WORD *)_R10 + 95) = v39;
  (*(void (__fastcall **)(Shulker *, _DWORD))(*(_DWORD *)_R10 + 340))(_R10, 0);
  return 1;
}


signed int __fastcall Shulker::getMaxHeadXRot(Shulker *this)
{
  return 1127481344;
}


int __fastcall Shulker::getClientPeekAmount(Shulker *this, float _R1)
{
  int result; // r0@1

  _R2 = (char *)this + 4296;
  _R0 = (char *)this + 4300;
  __asm
  {
    VMOV            S4, R1
    VLDR            S0, [R2]
    VLDR            S2, [R0]
    VSUB.F32        S2, S2, S0
    VMUL.F32        S2, S2, S4
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall Shulker::isLeashableType(Shulker *this)
{
  return 0;
}


signed int __fastcall Shulker::useNewAi(Shulker *this)
{
  return 1;
}


int __fastcall Shulker::isInvulnerableTo(Shulker *this, const EntityDamageSource *a2)
{
  Entity *v2; // r5@1
  const EntityDamageSource *v3; // r4@1
  int v4; // r0@2
  int v5; // r0@3
  int result; // r0@4

  v2 = this;
  v3 = a2;
  if ( !SynchedEntityData::getInt((Shulker *)((char *)this + 176), 64)
    && ((v4 = (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)v3 + 36))(v3),
         EntityClassTree::isTypeInstanceOf(v4, 4194384))
     || (v5 = (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)v3 + 56))(v3),
         EntityClassTree::isTypeInstanceOf(v5, 4194384))) )
  {
    result = 1;
  }
  else
    result = Entity::isInvulnerableTo(v2, v3);
  return result;
}


int __fastcall Shulker::getAttackAnimationTick(Shulker *this)
{
  return 0;
}


int __fastcall Shulker::aiStep(Shulker *this)
{
  Shulker *v1; // r4@1
  int result; // r0@1

  v1 = this;
  Mob::aiStep(this);
  result = 0;
  *((_DWORD *)v1 + 27) = 0;
  *((_DWORD *)v1 + 28) = 0;
  *((_DWORD *)v1 + 29) = 0;
  *((_DWORD *)v1 + 31) = 0;
  *((_DWORD *)v1 + 33) = 0;
  *((_DWORD *)v1 + 853) = 0;
  return result;
}


int __fastcall Shulker::normalTick(Shulker *this)
{
  Shulker *v1; // r10@1
  Level *v2; // r0@2
  signed int v3; // r9@3
  Level *v4; // r0@8
  int v5; // r0@8
  int v7; // r0@12
  int v8; // r5@12
  BlockSource *v9; // r0@12
  int v10; // r5@13
  BlockSource *v11; // r0@13
  int v12; // r0@13
  signed int v13; // r6@15
  BlockSource *v14; // r0@16
  BlockSource *v15; // r0@17
  int v16; // r0@17
  int v17; // r0@22
  unsigned int v18; // r1@22
  unsigned int v19; // r1@24
  unsigned int v20; // r0@24
  int v21; // r0@29
  BlockSource *v22; // r0@29
  BreathableComponent *v23; // r0@32
  Level *v29; // r0@48
  signed int v30; // r0@49
  int v31; // r9@54
  int v32; // r5@54
  int v33; // r6@54
  int v34; // r4@54
  int v35; // r5@54
  int v36; // r6@54
  __int64 *v37; // r0@54
  __int64 *v38; // r5@54
  __int64 v39; // r0@54
  bool v40; // zf@54
  unsigned int v41; // r6@57
  int v42; // r4@59
  int v43; // r3@59
  int v44; // r6@59
  int v45; // r3@59
  int v46; // r5@59
  int v47; // r6@59
  __int64 *v48; // r0@59
  __int64 *v49; // r4@59
  __int64 v50; // r0@59
  bool v51; // zf@59
  unsigned int v52; // r5@62
  int v54; // [sp+4h] [bp-114h]@59
  signed int v55; // [sp+8h] [bp-110h]@59
  int v56; // [sp+Ch] [bp-10Ch]@59
  int v57; // [sp+10h] [bp-108h]@59
  int v58; // [sp+14h] [bp-104h]@59
  int v59; // [sp+18h] [bp-100h]@59
  int v60; // [sp+1Ch] [bp-FCh]@59
  int v61; // [sp+20h] [bp-F8h]@59
  int v62; // [sp+24h] [bp-F4h]@59
  int v63; // [sp+28h] [bp-F0h]@59
  char v64; // [sp+30h] [bp-E8h]@59
  int v65; // [sp+4Ch] [bp-CCh]@54
  signed int v66; // [sp+50h] [bp-C8h]@54
  int v67; // [sp+54h] [bp-C4h]@54
  int v68; // [sp+58h] [bp-C0h]@54
  int v69; // [sp+5Ch] [bp-BCh]@54
  int v70; // [sp+60h] [bp-B8h]@54
  int v71; // [sp+64h] [bp-B4h]@54
  int v72; // [sp+68h] [bp-B0h]@54
  int v73; // [sp+6Ch] [bp-ACh]@54
  int v74; // [sp+70h] [bp-A8h]@54
  char v75; // [sp+78h] [bp-A0h]@54
  char v76; // [sp+94h] [bp-84h]@29
  int v77; // [sp+A0h] [bp-78h]@16
  int v78; // [sp+A4h] [bp-74h]@16
  int v79; // [sp+A8h] [bp-70h]@16
  int v80; // [sp+ACh] [bp-6Ch]@16
  int v81; // [sp+B0h] [bp-68h]@16
  int v82; // [sp+B4h] [bp-64h]@16
  int v83; // [sp+B8h] [bp-60h]@12
  int v84; // [sp+BCh] [bp-5Ch]@12
  int v85; // [sp+C0h] [bp-58h]@12
  int v86; // [sp+C4h] [bp-54h]@12
  int v87; // [sp+C8h] [bp-50h]@12
  int v88; // [sp+CCh] [bp-4Ch]@12
  int v89; // [sp+D0h] [bp-48h]@4
  int v90; // [sp+D4h] [bp-44h]@4
  int v91; // [sp+D8h] [bp-40h]@4
  int v92; // [sp+DCh] [bp-3Ch]@4
  int v93; // [sp+E0h] [bp-38h]@4
  int v94; // [sp+E4h] [bp-34h]@4
  int v95; // [sp+E8h] [bp-30h]@1
  int v96; // [sp+ECh] [bp-2Ch]@4
  int v97; // [sp+F0h] [bp-28h]@4

  v1 = this;
  Mob::normalTick(this);
  SynchedEntityData::getPos((SynchedEntityData *)&v95, (int)v1 + 176, 0x43u);
  if ( !(unsigned __int16)SynchedEntityData::getShort((Shulker *)((char *)v1 + 176), 66) )
  {
    v2 = (Level *)Entity::getLevel(v1);
    if ( Level::isClientSide(v2) )
    {
      v3 = 0;
      goto LABEL_6;
    }
    BlockPos::BlockPos((int)&v92, (int)v1 + 72);
    v95 = v92;
    v96 = v93;
    v97 = v94;
    v89 = v92;
    v90 = v93;
    v91 = v94;
    Shulker::setShulkerAttachPos((int)v1, (int)&v89);
  }
  v3 = 1;
LABEL_6:
  if ( Entity::isRiding(v1) == 1 )
    v3 = 0;
    *((_DWORD *)v1 + 31) = *(_DWORD *)(*((_DWORD *)v1 + 128) + 124);
    *((_DWORD *)v1 + 1080) = 0;
  else
    *((_DWORD *)v1 + 27) = 0;
    *((_DWORD *)v1 + 28) = 0;
    *((_DWORD *)v1 + 29) = 0;
    *((_DWORD *)v1 + 31) = 0;
    *((_DWORD *)v1 + 33) = 0;
    *((_DWORD *)v1 + 853) = 0;
    v4 = (Level *)Entity::getLevel(v1);
    v5 = Level::isClientSide(v4);
    _ZF = v5 == 0;
    if ( !v5 )
      _ZF = v3 == 1;
    if ( _ZF )
      v7 = SynchedEntityData::getInt8((Shulker *)((char *)v1 + 176), 65);
      BlockPos::relative((BlockPos *)&v86, (int)&v95, Facing::OPPOSITE_FACING[v7], 1);
      v83 = v86;
      v84 = v87;
      v85 = v88;
      v8 = SynchedEntityData::getInt8((Shulker *)((char *)v1 + 176), 65);
      v9 = (BlockSource *)Entity::getRegion(v1);
      if ( BlockSource::isSolidBlockingBlock(v9, (const BlockPos *)&v83) != 1
        || (v10 = Facing::OPPOSITE_FACING[v8],
            v11 = (BlockSource *)Entity::getRegion(v1),
            v12 = BlockSource::getBlock(v11, (const BlockPos *)&v83),
            !v10)
        && *(_BYTE *)(v12 + 4) == *(_BYTE *)(Block::mPiston + 4) )
      {
        LOBYTE(v13) = 0;
        while ( 1 )
        {
          while ( 1 )
          {
            BlockPos::relative((BlockPos *)&v80, (int)&v95, (char)v13, 1);
            v86 = v80;
            v87 = v81;
            v88 = v82;
            v77 = v80;
            v78 = v81;
            v79 = v82;
            v14 = (BlockSource *)Entity::getRegion(v1);
            if ( BlockSource::isSolidBlockingBlock(v14, (const BlockPos *)&v77) == 1 )
              break;
            v13 = (char)(v13 + 1);
            if ( v13 >= 6 )
            {
              Shulker::teleportSomewhere(v1);
              goto LABEL_29;
            }
          }
          v15 = (BlockSource *)Entity::getRegion(v1);
          v16 = BlockSource::getBlock(v15, (const BlockPos *)&v77);
          if ( (_BYTE)v13 )
            break;
          LOBYTE(v13) = 1;
          if ( *(_BYTE *)(v16 + 4) != *(_BYTE *)(Block::mPiston + 4) )
            LOBYTE(v13) = 0;
        }
        v17 = SynchedEntityData::_get((Shulker *)((char *)v1 + 176), 65);
        v18 = *(_DWORD *)(v17 + 4);
        if ( !(_BYTE)v18 && *(_BYTE *)(v17 + 9) != (unsigned __int8)v13 )
          *(_BYTE *)(v17 + 9) = v13;
          *(_BYTE *)(v17 + 8) = 1;
          v19 = v18 >> 16;
          v20 = *((_WORD *)v1 + 94);
          if ( v20 >= v19 )
            LOWORD(v20) = v19;
          *((_WORD *)v1 + 94) = v20;
          if ( *((_WORD *)v1 + 95) > v19 )
            LOWORD(v19) = *((_WORD *)v1 + 95);
          *((_WORD *)v1 + 95) = v19;
      }
LABEL_29:
      v21 = SynchedEntityData::getInt8((Shulker *)((char *)v1 + 176), 65);
      BlockPos::relative((BlockPos *)&v76, (int)&v95, Facing::OPPOSITE_FACING[v21], 1);
      v22 = (BlockSource *)Entity::getRegion(v1);
      if ( BlockSource::isSolidBlockingBlock(v22, (const BlockPos *)&v76) == 1 )
        Shulker::teleportSomewhere(v1);
      if ( Entity::getBreathableComponent(v1) )
        v23 = (BreathableComponent *)Entity::getBreathableComponent(v1);
        if ( !BreathableComponent::canBreathe(v23) )
          Shulker::teleportSomewhere(v1);
  _R0 = SynchedEntityData::getInt((Shulker *)((char *)v1 + 176), 64);
  __asm
    VMOV            S0, R0
    VLDR            S2, =0.01
    VCVT.F32.S32    S0, S0
  _R1 = *((_DWORD *)v1 + 1075);
  *((_DWORD *)v1 + 1074) = _R1;
    VMUL.F32        S0, S0, S2
    VMOV            S2, R1
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    if ( _NF ^ _VF )
      __asm
        VLDR            S4, =0.05
        VADD.F32        S2, S2, S4
        VLDR            S4, =0.0
        VCMPE.F32       S2, #0.0
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S2, S0
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S4, S2 }
      __asm { VMRS            APSR_nzcv, FPSCR }
        __asm { VMOVGT.F32      S4, S0 }
      __asm { VSTR            S4, [R0] }
    __asm
      VLDR            S4, =-0.05
      VADD.F32        S2, S2, S4
      VMOV.F32        S4, #1.0
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S2, S4
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S0, S2 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S0, S4 }
    __asm { VSTR            S0, [R0] }
  if ( v3 == 1 )
    v29 = (Level *)Entity::getLevel(v1);
    if ( Level::isClientSide(v29) == 1 )
      v30 = *((_DWORD *)v1 + 1080);
      if ( v30 >= 1 && *((_BYTE *)v1 + 4317) )
        *((_DWORD *)v1 + 1080) = v30 - 1;
      else
        *((_DWORD *)v1 + 1076) = v95;
        *((_DWORD *)v1 + 1077) = v96;
        *((_DWORD *)v1 + 1078) = v97;
      VLDR            S0, [SP,#0x118+var_30]
      VMOV.F32        S2, #0.5
      VCVT.F32.S32    S0, S0
      VADD.F32        S0, S0, S2
      VSTR            S0, [R10,#0x48]
      VLDR            S0, [SP,#0x118+var_2C]
      VSTR            S0, [R10,#0x4C]
      VLDR            S0, [SP,#0x118+var_28]
      VSTR            S0, [R10,#0x50]
    Shulker::calculateBB(v1);
  v31 = Entity::getRegion(v1);
  v32 = *((_DWORD *)v1 + 67);
  v33 = *((_DWORD *)v1 + 68);
  v68 = *((_DWORD *)v1 + 66);
  v69 = v32;
  v70 = v33;
  v34 = *((_DWORD *)v1 + 70);
  v35 = *((_DWORD *)v1 + 71);
  v36 = *((_DWORD *)v1 + 72);
  v71 = *((_DWORD *)v1 + 69);
  v72 = v34;
  v73 = v35;
  v74 = v36;
  v65 = 0x40000000;
  v66 = 0x40000000;
  v67 = 0x40000000;
  AABB::grow((AABB *)&v75, (const Vec3 *)&v68, (int)&v65);
  v37 = (__int64 *)BlockSource::fetchEntities(v31, 256, (int)&v75, 0);
  v38 = v37;
  v39 = *v37;
  v40 = (_DWORD)v39 == HIDWORD(v39);
  if ( (_DWORD)v39 != HIDWORD(v39) )
    v40 = HIDWORD(v39) == (_DWORD)v39;
  if ( !v40 )
    v41 = 0;
    do
      Entity::setCollidableMobNear(*(Entity **)(v39 + 4 * v41), 1);
      v39 = *v38;
      ++v41;
    while ( v41 < (HIDWORD(v39) - (signed int)v39) >> 2 );
  v42 = Entity::getRegion(v1);
  v43 = *((_DWORD *)v1 + 67);
  v44 = *((_DWORD *)v1 + 68);
  v57 = *((_DWORD *)v1 + 66);
  v58 = v43;
  v59 = v44;
  v45 = *((_DWORD *)v1 + 70);
  v46 = *((_DWORD *)v1 + 71);
  v47 = *((_DWORD *)v1 + 72);
  v60 = *((_DWORD *)v1 + 69);
  v61 = v45;
  v62 = v46;
  v63 = v47;
  v54 = 0x40000000;
  v55 = 0x40000000;
  v56 = 0x40000000;
  AABB::grow((AABB *)&v64, (const Vec3 *)&v57, (int)&v54);
  v48 = (__int64 *)BlockSource::fetchEntities(v42, 66, (int)&v64, 0);
  v49 = v48;
  v50 = *v48;
  v51 = (_DWORD)v50 == HIDWORD(v50);
  if ( (_DWORD)v50 != HIDWORD(v50) )
    v51 = HIDWORD(v50) == (_DWORD)v50;
  if ( !v51 )
    v52 = 0;
      Entity::setCollidableMobNear(*(Entity **)(v50 + 4 * v52), 1);
      v50 = *v49;
      ++v52;
    while ( v52 < (HIDWORD(v50) - (signed int)v50) >> 2 );
  return v50;
}


signed int __fastcall Shulker::getEntityTypeId(Shulker *this)
{
  return 2870;
}


signed int __fastcall Shulker::getExperienceReward(Shulker *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 861);
  result = 0;
  if ( v1 > 0 )
    result = 5;
  return result;
}


signed int __fastcall Shulker::getMaxHeadYRot(Shulker *this)
{
  return 1127481344;
}


int __fastcall Shulker::isInWall(Shulker *this)
{
  int v2; // r5@1
  BlockSource *v3; // r0@1
  int v4; // r3@2
  __int64 v5; // r1@2
  const Vec3 *v6; // r1@2
  float v12; // [sp+0h] [bp-28h]@3
  int v13; // [sp+Ch] [bp-1Ch]@2
  int v14; // [sp+10h] [bp-18h]@2
  int v15; // [sp+14h] [bp-14h]@2

  _R4 = this;
  v2 = (unsigned __int8)SynchedEntityData::getInt8((Shulker *)((char *)this + 176), 65);
  v3 = (BlockSource *)Entity::getRegion(_R4);
  if ( v2 == 1 )
  {
    v4 = *((_DWORD *)_R4 + 67);
    v5 = *((_QWORD *)_R4 + 9);
    v13 = *((_QWORD *)_R4 + 9);
    v14 = v4;
    v6 = (const Vec3 *)&v13;
    v15 = HIDWORD(v5);
  }
  else
    __asm
    {
      VMOV.F32        S2, #1.0
      VLDR            S0, =0.0
    }
    v6 = (const Vec3 *)&v12;
      VMOV.F32        S4, S0
      VMOV.F32        S6, S0
    if ( _ZF )
      __asm { VMOVEQ.F32      S4, S2 }
    if ( v2 == 3 )
      __asm { VMOVEQ.F32      S6, S2 }
    __asm { VMOV.F32        S2, #-1.0 }
    if ( v2 == 4 )
    if ( !v2 )
      __asm { VMOVEQ.F32      S0, S2 }
    if ( v2 == 2 )
      VLDR            S12, [R4,#0x170]
      VLDR            S2, [R4,#0x4C]
      VMUL.F32        S0, S12, S0
      VLDR            S8, [R4,#0x50]
      VMUL.F32        S4, S12, S4
      VLDR            S10, [R4,#0x48]
      VMUL.F32        S6, S12, S6
      VSUB.F32        S0, S2, S0
      VSUB.F32        S4, S10, S4
      VSUB.F32        S2, S8, S6
      VSTR            S4, [SP,#0x28+var_28]
      VSTR            S0, [SP,#0x28+var_24]
      VSTR            S2, [SP,#0x28+var_20]
  return BlockSource::isInWall(v3, v6);
}


int __fastcall Shulker::isPushable(Shulker *this)
{
  return 0;
}


signed int __fastcall Shulker::setShulkerAttachPos(int a1, int a2)
{
  int v2; // r4@1
  SynchedEntityData *v3; // r5@1
  int v4; // r6@1
  int v5; // r0@1
  unsigned int v6; // r1@1
  __int64 v7; // r2@3
  unsigned int v8; // r1@7
  unsigned int v9; // r0@7
  int v10; // r0@12
  unsigned int v11; // r1@12
  unsigned int v12; // r1@14
  unsigned int v13; // r0@14
  signed int result; // r0@19

  v2 = a1;
  v3 = (SynchedEntityData *)(a1 + 176);
  v4 = a2;
  v5 = SynchedEntityData::_get((SynchedEntityData *)(a1 + 176), 67);
  v6 = *(_DWORD *)(v5 + 4);
  if ( (unsigned __int8)v6 == 6 )
  {
    if ( *(_DWORD *)(v5 + 12) == *(_DWORD *)v4 )
    {
      HIDWORD(v7) = *(_DWORD *)(v4 + 4);
      if ( *(_DWORD *)(v5 + 16) == HIDWORD(v7) )
      {
        HIDWORD(v7) = *(_DWORD *)(v5 + 16);
        if ( *(_DWORD *)(v5 + 20) == *(_DWORD *)(v4 + 8) )
          goto LABEL_12;
      }
    }
    else
    LODWORD(v7) = *(_DWORD *)v4;
    *(_QWORD *)(v5 + 12) = v7;
    v8 = v6 >> 16;
    *(_DWORD *)(v5 + 20) = *(_DWORD *)(v4 + 8);
    *(_BYTE *)(v5 + 8) = 1;
    v9 = *(_WORD *)(v2 + 188);
    if ( v9 >= v8 )
      LOWORD(v9) = v8;
    *(_WORD *)(v2 + 188) = v9;
    if ( *(_WORD *)(v2 + 190) > v8 )
      LOWORD(v8) = *(_WORD *)(v2 + 190);
    *(_WORD *)(v2 + 190) = v8;
  }
LABEL_12:
  v10 = SynchedEntityData::_get(v3, 66);
  v11 = *(_DWORD *)(v10 + 4);
  if ( (unsigned __int8)v11 == 1 && *(_WORD *)(v10 + 10) != 1 )
    v12 = v11 >> 16;
    *(_WORD *)(v10 + 10) = 1;
    *(_BYTE *)(v10 + 8) = 1;
    v13 = *(_WORD *)(v2 + 188);
    if ( v13 >= v12 )
      LOWORD(v13) = v12;
    *(_WORD *)(v2 + 188) = v13;
    if ( *(_WORD *)(v2 + 190) > v12 )
      LOWORD(v12) = *(_WORD *)(v2 + 190);
    *(_WORD *)(v2 + 190) = v12;
  result = 4316;
  *(_BYTE *)(v2 + 4316) = 1;
  return result;
}


signed int __fastcall Shulker::getArmorValue(Shulker *this)
{
  int v1; // r0@1
  signed int v2; // r1@1

  v1 = SynchedEntityData::getInt((Shulker *)((char *)this + 176), 64);
  v2 = 0;
  if ( !v1 )
    v2 = 20;
  return v2;
}


unsigned int __fastcall Shulker::setPeekAmount(Shulker *this, int a2)
{
  Shulker *v2; // r4@1
  int v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = this;
  v3 = a2;
  result = SynchedEntityData::_get((Shulker *)((char *)this + 176), 64);
  v5 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v5 == 2 && *(_DWORD *)(result + 12) != v3 )
  {
    *(_DWORD *)(result + 12) = v3;
    *(_BYTE *)(result + 8) = 1;
    v6 = v5 >> 16;
    v7 = *((_WORD *)v2 + 94);
    if ( v7 >= v6 )
      LOWORD(v7) = v6;
    *((_WORD *)v2 + 94) = v7;
    result = *((_WORD *)v2 + 95);
    if ( result > v6 )
      LOWORD(v6) = *((_WORD *)v2 + 95);
    *((_WORD *)v2 + 95) = v6;
  }
  return result;
}


signed int __fastcall Shulker::getAttached(Shulker *this)
{
  signed int result; // r0@1

  result = (unsigned __int16)SynchedEntityData::getShort((Shulker *)((char *)this + 176), 66);
  if ( (_WORD)result )
    result = 1;
  return result;
}


void __fastcall Shulker::readAdditionalSaveData(Shulker *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  Shulker *v3; // r8@1
  signed int v4; // r6@1
  void *v5; // r0@1
  ListTag *v6; // r6@3
  void *v7; // r0@3
  signed int v8; // r6@5
  void *v9; // r0@5
  int v10; // r6@7
  void *v11; // r0@7
  int v12; // r0@8
  unsigned int v13; // r1@8
  unsigned int v14; // r1@10
  unsigned int v15; // r0@10
  signed int v16; // r6@15
  void *v17; // r0@15
  int v18; // r5@17
  int v19; // r0@17
  unsigned int v20; // r1@17
  unsigned int v21; // r1@19
  unsigned int v22; // r0@19
  void *v23; // r0@24
  unsigned int *v24; // r2@26
  signed int v25; // r1@28
  unsigned int *v26; // r2@30
  signed int v27; // r1@32
  unsigned int *v28; // r2@34
  signed int v29; // r1@36
  unsigned int *v30; // r2@42
  signed int v31; // r1@44
  unsigned int *v32; // r2@50
  signed int v33; // r1@52
  unsigned int *v34; // r2@58
  signed int v35; // r1@60
  int v36; // [sp+4h] [bp-54h]@17
  int v37; // [sp+Ch] [bp-4Ch]@15
  int v38; // [sp+14h] [bp-44h]@7
  int v39; // [sp+1Ch] [bp-3Ch]@5
  int v40; // [sp+20h] [bp-38h]@4
  int v41; // [sp+24h] [bp-34h]@4
  int v42; // [sp+28h] [bp-30h]@4
  int v43; // [sp+30h] [bp-28h]@3
  int v44; // [sp+38h] [bp-20h]@1

  v2 = a2;
  v3 = this;
  Mob::readAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v44, "AttachPos");
  v4 = CompoundTag::contains((int)v2, (const void **)&v44, 9);
  v5 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
  {
    v24 = (unsigned int *)(v44 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( v4 == 1 )
    sub_21E94B4((void **)&v43, "AttachPos");
    v6 = (ListTag *)CompoundTag::getList((int)v2, (const void **)&v43);
    v7 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v43 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
      }
      else
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    v40 = ListTag::getInt(v6, 0);
    v41 = ListTag::getInt(v6, 1);
    v42 = ListTag::getInt(v6, 2);
    Shulker::setShulkerAttachPos((int)v3, (int)&v40);
  sub_21E94B4((void **)&v39, "AttachFace");
  v8 = CompoundTag::contains((int)v2, (const void **)&v39);
  v9 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v39 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  if ( v8 == 1 )
    sub_21E94B4((void **)&v38, "AttachFace");
    v10 = CompoundTag::getByte((int)v2, (const void **)&v38);
    v11 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v38 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    v12 = SynchedEntityData::_get((Shulker *)((char *)v3 + 176), 65);
    v13 = *(_DWORD *)(v12 + 4);
    if ( !(_BYTE)v13 && *(_BYTE *)(v12 + 9) != v10 )
      *(_BYTE *)(v12 + 9) = v10;
      *(_BYTE *)(v12 + 8) = 1;
      v14 = v13 >> 16;
      v15 = *((_WORD *)v3 + 94);
      if ( v15 >= v14 )
        LOWORD(v15) = v14;
      *((_WORD *)v3 + 94) = v15;
      if ( *((_WORD *)v3 + 95) > v14 )
        LOWORD(v14) = *((_WORD *)v3 + 95);
      *((_WORD *)v3 + 95) = v14;
  sub_21E94B4((void **)&v37, "Peek");
  v16 = CompoundTag::contains((int)v2, (const void **)&v37);
  v17 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v37 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  if ( v16 == 1 )
    sub_21E94B4((void **)&v36, "Peek");
    v18 = CompoundTag::getByte((int)v2, (const void **)&v36);
    v19 = SynchedEntityData::_get((Shulker *)((char *)v3 + 176), 64);
    v20 = *(_DWORD *)(v19 + 4);
    if ( (unsigned __int8)v20 == 2 && *(_DWORD *)(v19 + 12) != v18 )
      *(_DWORD *)(v19 + 12) = v18;
      *(_BYTE *)(v19 + 8) = 1;
      v21 = v20 >> 16;
      v22 = *((_WORD *)v3 + 94);
      if ( v22 >= v21 )
        LOWORD(v22) = v21;
      *((_WORD *)v3 + 94) = v22;
      if ( *((_WORD *)v3 + 95) > v21 )
        LOWORD(v21) = *((_WORD *)v3 + 95);
      *((_WORD *)v3 + 95) = v21;
    v23 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v36 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
}


int __fastcall Shulker::onSizeUpdated(Shulker *this)
{
  int v2; // r0@1
  int result; // r0@2

  _R4 = this;
  v2 = SynchedEntityData::getInt8((Shulker *)((char *)this + 176), 65);
  if ( v2 == 1 )
  {
    __asm
    {
      VMOV.F32        S4, #-1.0
      VLDR            S0, =0.4
      VLDR            S2, [R4,#0x134]
    }
    result = 0;
    *((_DWORD *)_R4 + 91) = 0;
      VMUL.F32        S0, S2, S0
      VADD.F32        S2, S2, S4
      VSTR            S0, [R4,#0x170]
    *((_DWORD *)_R4 + 93) = 0;
    *((_DWORD *)_R4 + 94) = 0;
    __asm { VSTR            S0, [R4,#0x17C] }
    *((_DWORD *)_R4 + 96) = 0;
    *((_DWORD *)_R4 + 97) = 0;
    __asm { VSTR            S0, [R4,#0x188] }
    *((_DWORD *)_R4 + 99) = 0;
    __asm { VSTR            S2, [R4,#0x13C] }
  }
  else
    _ZF = v2 == 0;
    if ( _ZF )
      __asm { VLDREQ          S0, =0.4 }
    else
      __asm { VMOVNE.F32      S0, #0.5 }
    __asm { VLDR            S2, [R4,#0x134] }
  return result;
}


void __fastcall Shulker::~Shulker(Shulker *this)
{
  Shulker::~Shulker(this);
}
