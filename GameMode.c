

signed int __fastcall GameMode::continueDestroyBlock(GameMode *this, const BlockPos *a2, int a3, bool *a4)
{
  bool *v5; // r9@1
  int v6; // r8@1
  const BlockPos *v7; // r10@1
  int v8; // r6@1
  int v9; // r0@1
  Entity *v10; // r7@1
  BlockSource *v11; // r5@1
  PlayerInventoryProxy *v12; // r0@1
  const ItemInstance *v13; // r0@1
  int v14; // r1@2
  Entity *v15; // r0@2
  int v21; // r0@3
  BlockSource *v23; // r9@5
  unsigned __int64 *v24; // r6@5
  signed int v25; // r7@5
  int v26; // r3@5
  signed int v27; // r0@5
  GameMode *v28; // r7@13
  int v29; // r7@16
  int v32; // r5@17
  signed int v33; // r3@17
  signed int v35; // r5@19
  __int64 v36; // r1@24
  int v37; // r9@24
  int v38; // r11@24
  int v39; // r1@24
  int v40; // r12@24
  signed __int64 v42; // r0@28
  int v43; // kr00_4@28
  unsigned __int64 v44; // r0@28
  int v45; // r7@29
  signed int v46; // r3@29
  bool v47; // zf@31
  signed int v48; // r7@31
  __int64 v49; // r1@36
  Level *v51; // r0@39
  int v52; // r1@40
  int v53; // r7@40
  Level *v54; // r5@45
  BlockSource *v55; // r0@45
  int v56; // r0@46
  int v57; // r1@46
  char v59; // [sp+10h] [bp-D8h]@40
  void **v60; // [sp+18h] [bp-D0h]@40
  signed int v61; // [sp+1Ch] [bp-CCh]@40
  signed int v62; // [sp+20h] [bp-C8h]@40
  char v63; // [sp+24h] [bp-C4h]@40
  int v64; // [sp+28h] [bp-C0h]@40
  int v65; // [sp+2Ch] [bp-BCh]@40
  int v66; // [sp+30h] [bp-B8h]@40
  int v67; // [sp+34h] [bp-B4h]@40
  int v68; // [sp+38h] [bp-B0h]@40
  __int64 v69; // [sp+40h] [bp-A8h]@40
  __int64 v70; // [sp+48h] [bp-A0h]@28
  int v71; // [sp+50h] [bp-98h]@27
  int v72; // [sp+54h] [bp-94h]@28
  int v73; // [sp+58h] [bp-90h]@24
  signed int v74; // [sp+5Ch] [bp-8Ch]@24
  int v75; // [sp+60h] [bp-88h]@24
  int v76; // [sp+64h] [bp-84h]@24
  int v77; // [sp+68h] [bp-80h]@24
  int v78; // [sp+6Ch] [bp-7Ch]@24
  int v79; // [sp+70h] [bp-78h]@24
  int v80; // [sp+74h] [bp-74h]@24
  int v81; // [sp+78h] [bp-70h]@24
  char v82; // [sp+7Ch] [bp-6Ch]@24
  __int64 v83; // [sp+88h] [bp-60h]@1

  _R4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  sub_21E0378(&v83);
  v8 = 0;
  *v5 = 0;
  v9 = Entity::getRegion(*((Entity **)_R4 + 1));
  v10 = (Entity *)*((_DWORD *)_R4 + 1);
  v11 = (BlockSource *)v9;
  v12 = (PlayerInventoryProxy *)Player::getSupplies(*((Player **)_R4 + 1));
  v13 = (const ItemInstance *)PlayerInventoryProxy::getSelectedItem(v12);
  if ( BlockSource::checkBlockDestroyPermissions(v11, v10, v7, v13, Item::mGenerateDenyParticleEffect[0]) != 1 )
    return v8;
  v14 = (*(int (**)(void))(**((_DWORD **)_R4 + 1) + 652))();
  v15 = (Entity *)*((_DWORD *)_R4 + 1);
  if ( v14 != 1 )
  {
    v23 = (BlockSource *)Entity::getRegion(v15);
    v24 = (unsigned __int64 *)((char *)_R4 + 72);
    v25 = 0;
    v26 = *((_DWORD *)_R4 + 19);
    v27 = 0;
    if ( (unsigned int)v83 < *((_DWORD *)_R4 + 18) )
      v27 = 1;
    if ( SHIDWORD(v83) < v26 )
      v25 = 1;
    if ( HIDWORD(v83) == v26 )
      v25 = v27;
    if ( v25 )
      return 1;
    if ( *(_DWORD *)v7 == *((_DWORD *)_R4 + 2) )
    {
      v28 = (GameMode *)((char *)_R4 + 12);
      if ( *((_DWORD *)v7 + 1) == *((_DWORD *)_R4 + 3)
        && *((_DWORD *)v7 + 2) == *((_DWORD *)_R4 + 4)
        && *(_BYTE *)(*((_DWORD *)_R4 + 1) + 5228) )
      {
        v29 = BlockSource::getBlock(v23, v7);
        if ( !Block::isType((Block *)v29, (const Block *)Block::mAir) )
        {
          _R0 = getTimeS();
          __asm
          {
            VMOV            D1, R0, R1
            VLDR            D0, [R4,#0x20]
            VSUB.F64        D9, D1, D0
          }
          _R0 = GameMode::getDestroyRate(_R4, (const Block *)v29);
            VMOV.F32        S0, #20.0
            VMOV            S16, R0
            VCVT.F32.F64    S2, D9
            VMUL.F32        S0, S16, S0
            VMUL.F32        S0, S0, S2
            VLDR            S2, [R4,#0x18]
            VADD.F32        S0, S0, S2
            VSTR            S0, [R4,#0x18]
          v32 = *((_DWORD *)_R4 + 21);
          v33 = 0;
          if ( *((_DWORD *)_R4 + 20) >= (unsigned int)v83 )
            v33 = 1;
          _VF = __OFSUB__(v32, HIDWORD(v83));
          _ZF = v32 == HIDWORD(v83);
          _NF = v32 - HIDWORD(v83) < 0;
          v35 = 0;
          if ( !(_NF ^ _VF) )
            v35 = 1;
          if ( _ZF )
            v35 = v33;
          if ( !v35 )
            HIDWORD(v36) = (v83
                          + __PAIR__(
                              (1000000 * (unsigned __int64)(unsigned int)*((_QWORD *)_R4 + 13) >> 32)
                            + 1000000 * (*((_QWORD *)_R4 + 13) >> 32),
                              1000000 * (unsigned int)*((_QWORD *)_R4 + 13))) >> 32;
            LODWORD(v36) = v83 + 1000000 * *((_QWORD *)_R4 + 13);
            *((_QWORD *)_R4 + 10) = v36;
            v37 = Entity::getLevel(*((Entity **)_R4 + 1));
            v38 = Entity::getRegion(*((Entity **)_R4 + 1));
            v73 = 1056964608;
            v74 = 1056964608;
            v75 = 1056964608;
            BlockPos::BlockPos((int)&v76, (int)&v73);
            v39 = *((_DWORD *)v7 + 1);
            v40 = *((_DWORD *)v7 + 2);
            v79 = *(_DWORD *)v7 + v76;
            v80 = v77 + v39;
            v81 = v78 + v40;
            Vec3::Vec3((int)&v82, (int)&v79);
            Level::playSynchronizedSound(v37, v38, 1, (int)&v82, *(_BYTE *)(v29 + 4), 1, 0, 0);
            VMOV.F32        S18, #1.0
            VMOV            D0, R0, R1
            VSTR            D0, [R4,#0x20]
            VLDR            S0, [R4,#0x18]
            VCMPE.F32       S0, S18
            VMRS            APSR_nzcv, FPSCR
            (*(void (__fastcall **)(GameMode *, const BlockPos *, int))(*(_DWORD *)_R4 + 12))(_R4, v7, v6);
            __asm { VCMPE.F32       S16, S18 }
            *((_DWORD *)_R4 + 5) = 0;
            *((_DWORD *)_R4 + 6) = 0;
            __asm { VMRS            APSR_nzcv, FPSCR }
            if ( _NF ^ _VF )
            {
              sub_21E0378(&v70);
              v42 = 1000000LL * *((_QWORD *)_R4 + 11);
              v43 = 1000000 * *((_DWORD *)_R4 + 22);
              v71 = 1000000 * *((_DWORD *)_R4 + 22) + v70;
              v44 = __PAIR__(HIDWORD(v42), v43) + v70;
              v72 = HIDWORD(v44);
              *v24 = v44;
            }
            else
              sub_21E0378(&v71);
              *v24 = *(_QWORD *)&v71;
        }
        return 1;
      }
    }
    else
    (*(void (__fastcall **)(GameMode *, char *))(*(_DWORD *)_R4 + 20))(_R4, (char *)_R4 + 8);
    *((_DWORD *)_R4 + 5) = 0;
    *((_DWORD *)_R4 + 6) = 0;
    *((_DWORD *)_R4 + 2) = *(_DWORD *)v7;
    *(_DWORD *)v28 = *((_DWORD *)v7 + 1);
    *((_DWORD *)_R4 + 4) = *((_DWORD *)v7 + 2);
    _R0 = getTimeS();
    __asm
      VMOV            D0, R0, R1
      VSTR            D0, [R4,#0x20]
    v51 = (Level *)Entity::getLevel(*((Entity **)_R4 + 1));
    if ( Level::isClientSide(v51) == 1 )
      Entity::getRuntimeID((Entity *)&v59, *((_DWORD *)_R4 + 1));
      v61 = 2;
      v62 = 1;
      v63 = 0;
      v60 = &off_26DA670;
      v52 = *((_DWORD *)v7 + 1);
      v53 = *((_DWORD *)v7 + 2);
      v64 = *(_DWORD *)v7;
      v65 = v52;
      v66 = v53;
      v67 = v6;
      v68 = 0;
      v69 = *(_QWORD *)&v59;
      (*(void (**)(void))(**((_DWORD **)_R4 + 1) + 1524))();
      v54 = (Level *)Entity::getLevel(*((Entity **)_R4 + 1));
      v55 = (BlockSource *)Entity::getRegion(*((Entity **)_R4 + 1));
      Level::extinguishFire(v54, v55, v7, v6);
    v56 = BlockSource::getBlock(v23, v7);
    v57 = *((_DWORD *)_R4 + 1);
    if ( (*(int (**)(void))(*(_DWORD *)v56 + 308))() != 1 )
      return 0;
    return 1;
  }
  _R5 = Entity::getSpeedInMetersPerSecond(v15);
  _R0 = (*(int (**)(void))(**((_DWORD **)_R4 + 1) + 52))();
  __asm
    VLDR            S16, [R0]
    VLDR            S18, [R0,#4]
    VLDR            S22, [R0,#8]
    VLDR            S20, [R4,#0x30]
    VLDR            S24, [R4,#0x34]
    VLDR            S26, [R4,#0x38]
  v21 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)_R4 + 1) + 52))(*((_DWORD *)_R4 + 1));
  __asm { VMOV            S0, R5 }
  *((_DWORD *)_R4 + 12) = *(_DWORD *)v21;
  *((_DWORD *)_R4 + 13) = *(_DWORD *)(v21 + 4);
  *((_DWORD *)_R4 + 14) = *(_DWORD *)(v21 + 8);
    VLDR            S2, [R4,#0x3C]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    v8 = 0;
    v45 = *((_DWORD *)_R4 + 19);
    v46 = 0;
    if ( *((_DWORD *)_R4 + 18) < (unsigned int)v83 )
      v46 = 1;
    _VF = __OFSUB__(v45, HIDWORD(v83));
    v47 = v45 == HIDWORD(v83);
    _NF = v45 - HIDWORD(v83) < 0;
    v48 = 0;
    if ( _NF ^ _VF )
      v48 = 1;
    if ( v47 )
      v48 = v46;
    if ( v48 )
      HIDWORD(v49) = (v83
                    + __PAIR__(
                        (1000000 * (unsigned __int64)(unsigned int)*((_QWORD *)_R4 + 11) >> 32)
                      + 1000000 * (*((_QWORD *)_R4 + 11) >> 32),
                        1000000 * (unsigned int)*((_QWORD *)_R4 + 11))) >> 32;
      LODWORD(v49) = v83 + 1000000 * *((_QWORD *)_R4 + 11);
      *((_QWORD *)_R4 + 9) = v49;
      *((_DWORD *)_R4 + 11) = 0;
      _R5 = (int)_R4 + 44;
      if ( GameMode::_creativeDestroyBlock(_R4, v7, v6) != 1 )
        return v8;
  else
    __asm { VSUB.F32        S2, S18, S24 }
    _R5 = (int)_R4 + 44;
      VSUB.F32        S4, S16, S20
      VSUB.F32        S0, S22, S26
      VMUL.F32        S2, S2, S2
      VMUL.F32        S4, S4, S4
      VMUL.F32        S0, S0, S0
      VADD.F32        S2, S2, S4
      VADD.F32        S0, S2, S0
      VLDR            S2, [R4,#0x2C]
      VSQRT.F32       S0, S0
      VSTR            S0, [R4,#0x2C]
    VMOV.F32        S2, #1.0
    VLDR            S0, [R5]
    VCVTR.S32.F32   S2, S0
    VCVT.F32.S32    S2, S2
    VSUB.F32        S0, S0, S2
  *((_QWORD *)_R4 + 9) = 1000000LL * *((_QWORD *)_R4 + 11) + __PAIR__(HIDWORD(v83), v6);
  __asm { VSTR            S0, [R4,#0x2C] }
  if ( GameMode::_creativeDestroyBlock(_R4, v7, v6) == 1 )
    *v5 = 1;
  return 0;
}


int __fastcall GameMode::useItem(GameMode *this, ItemInstance *a2)
{
  GameMode *v2; // r5@1
  ItemInstance *v3; // r4@1
  ItemInstance *v4; // r0@1
  int v5; // r4@1
  int v7; // [sp+0h] [bp-58h]@1
  int v8; // [sp+8h] [bp-50h]@5
  void *v9; // [sp+24h] [bp-34h]@3
  void *ptr; // [sp+34h] [bp-24h]@1

  v2 = this;
  v3 = a2;
  ItemInstance::ItemInstance((ItemInstance *)&v7, (int)a2);
  v4 = ItemInstance::use(v3, *((Player **)v2 + 1));
  ItemInstance::operator=((int)v3, (int)v4);
  v5 = ItemInstance::operator!=(v3, (ItemInstance *)&v7);
  if ( ptr )
    operator delete(ptr);
  if ( v9 )
    operator delete(v9);
  if ( v8 )
    (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  return v5;
}


int __fastcall GameMode::getPickRange(int a1, int *a2, int a3)
{
  int result; // r0@2
  int v8; // r0@4
  int v9; // r1@5

  if ( *(_BYTE *)(a1 + 40) )
  {
    __asm
    {
      VLDRNE          S0, =1000.0
      VMOVNE          R0, S0
    }
    return result;
  }
  if ( a3 == 1 )
    v8 = (*(int (**)(void))(**(_DWORD **)(a1 + 4) + 652))();
    __asm { VMOV.F32        S0, #7.0 }
  else
    v9 = *a2;
    if ( v9 == 1 )
      __asm
      {
        VLDR            S0, =5.7
        VMOV            R0, S0
      }
      return result;
    if ( (unsigned int)(v9 - 3) < 2 )
        VLDRCC          S0, =5.6
        VMOVCC          R0, S0
    __asm { VLDR            S0, =6.7 }
  __asm { VMOV.F32        S2, #12.0 }
  if ( v8 )
    __asm { VMOVNE.F32      S0, S2 }
  __asm { VMOV            R0, S0 }
  return result;
}


int __fastcall GameMode::startBuildBlock(GameMode *this, const BlockPos *a2, signed __int8 a3)
{
  GameMode *v3; // r4@1
  int v4; // r0@1
  int result; // r0@1
  __int64 v6; // [sp+0h] [bp-10h]@1

  v3 = this;
  (*(void (**)(void))(*(_DWORD *)this + 28))();
  sub_21E0378(&v6);
  *((_QWORD *)v3 + 8) = 1000000LL * *((_QWORD *)v3 + 12) + v6;
  *((_DWORD *)v3 + 11) = 0;
  v4 = (*(int (**)(void))(**((_DWORD **)v3 + 1) + 52))();
  *((_DWORD *)v3 + 12) = *(_DWORD *)v4;
  *((_DWORD *)v3 + 13) = *(_DWORD *)(v4 + 4);
  result = *(_DWORD *)(v4 + 8);
  *((_DWORD *)v3 + 14) = result;
  return result;
}


int __fastcall GameMode::continueBuildBlock(GameMode *this, const BlockPos *a2, int a3)
{
  int v4; // r4@1
  const BlockPos *v5; // r5@1
  int v12; // r0@1
  int result; // r0@1
  int v15; // r3@3
  signed int v16; // r1@5
  int v17; // [sp+0h] [bp-60h]@13
  unsigned int v18; // [sp+4h] [bp-5Ch]@13
  __int64 v19; // [sp+8h] [bp-58h]@10
  unsigned int v20; // [sp+10h] [bp-50h]@3
  int v21; // [sp+14h] [bp-4Ch]@5

  _R6 = this;
  v4 = a3;
  v5 = a2;
  _R7 = Entity::getSpeedInMetersPerSecond(*((Entity **)this + 1));
  _R0 = (*(int (**)(void))(**((_DWORD **)_R6 + 1) + 52))();
  __asm
  {
    VLDR            S16, [R0]
    VLDR            S18, [R0,#4]
    VLDR            S22, [R0,#8]
    VLDR            S20, [R6,#0x30]
    VLDR            S24, [R6,#0x34]
    VLDR            S26, [R6,#0x38]
  }
  v12 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)_R6 + 1) + 52))(*((_DWORD *)_R6 + 1));
  __asm { VMOV            S0, R7 }
  *((_DWORD *)_R6 + 12) = *(_DWORD *)v12;
  *((_DWORD *)_R6 + 13) = *(_DWORD *)(v12 + 4);
  result = *(_DWORD *)(v12 + 8);
  *((_DWORD *)_R6 + 14) = result;
    VLDR            S2, [R6,#0x3C]
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    sub_21E0378(&v20);
    v15 = *((_DWORD *)_R6 + 17);
    result = 0;
    if ( *((_DWORD *)_R6 + 16) < v20 )
      result = 1;
    v16 = 0;
    if ( v15 < v21 )
      v16 = 1;
    if ( v15 == v21 )
      v16 = result;
    if ( v16 )
    {
      sub_21E0378(&v19);
      *((_QWORD *)_R6 + 8) = 1000000LL * *((_QWORD *)_R6 + 12) + v19;
      *((_DWORD *)_R6 + 11) = 0;
      _R7 = (int)_R6 + 44;
      result = (*(int (__fastcall **)(GameMode *, const BlockPos *, int))(*(_DWORD *)_R6 + 28))(_R6, v5, v4);
    }
    else
  else
    __asm { VSUB.F32        S2, S18, S24 }
    _R7 = (int)_R6 + 44;
    __asm
      VSUB.F32        S4, S16, S20
      VSUB.F32        S0, S22, S26
      VMUL.F32        S2, S2, S2
      VMUL.F32        S4, S4, S4
      VMUL.F32        S0, S0, S0
      VADD.F32        S2, S2, S4
      VADD.F32        S0, S2, S0
      VLDR            S2, [R6,#0x2C]
      VSQRT.F32       S0, S0
      VSTR            S0, [R6,#0x2C]
    VMOV.F32        S0, #1.0
    VLDR            S2, [R7]
    VCMPE.F32       S2, S0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    sub_21E0378(&v17);
    *((_QWORD *)_R6 + 8) = 1000000LL * *((_QWORD *)_R6 + 12) + __PAIR__(v18, v4);
      VLDR            S0, [R6,#0x2C]
      VCVTR.S32.F32   S2, S0
      VCVT.F32.S32    S2, S2
      VSUB.F32        S0, S0, S2
    result = (*(int (__fastcall **)(GameMode *, const BlockPos *, int))(*(_DWORD *)_R6 + 28))(_R6, v5, v4);
  return result;
}


signed int __fastcall GameMode::startDestroyBlock(GameMode *this, const BlockPos *a2, int a3, bool *a4)
{
  GameMode *v4; // r4@1
  bool *v5; // r9@1
  int v6; // r8@1
  const BlockPos *v7; // r10@1
  int v8; // r0@1
  Entity *v9; // r7@1
  BlockSource *v10; // r5@1
  PlayerInventoryProxy *v11; // r0@1
  const ItemInstance *v12; // r0@1
  int v13; // r0@1
  Entity *v15; // r0@1
  signed int v16; // r5@3
  int v17; // r0@4
  Level *v18; // r0@5
  int v19; // r0@5
  int v20; // r1@7
  int v21; // r7@7
  Level *v22; // r5@9
  BlockSource *v23; // r0@9
  const BlockPos *v24; // r0@9
  int v25; // r1@11
  Level *v26; // r0@12
  __int64 v27; // kr00_8@13
  int v28; // r6@13
  __int64 v35; // [sp+8h] [bp-A8h]@17
  char v36; // [sp+10h] [bp-A0h]@13
  void **v37; // [sp+18h] [bp-98h]@13
  signed int v38; // [sp+1Ch] [bp-94h]@13
  signed int v39; // [sp+20h] [bp-90h]@13
  char v40; // [sp+24h] [bp-8Ch]@13
  int v41; // [sp+28h] [bp-88h]@13
  int v42; // [sp+2Ch] [bp-84h]@13
  int v43; // [sp+30h] [bp-80h]@13
  int v44; // [sp+34h] [bp-7Ch]@13
  int v45; // [sp+38h] [bp-78h]@13
  __int64 v46; // [sp+40h] [bp-70h]@13
  unsigned __int8 v47; // [sp+4Ch] [bp-64h]@9
  __int64 v48; // [sp+50h] [bp-60h]@4
  char v49; // [sp+58h] [bp-58h]@7
  void **v50; // [sp+60h] [bp-50h]@7
  signed int v51; // [sp+64h] [bp-4Ch]@7
  signed int v52; // [sp+68h] [bp-48h]@7
  char v53; // [sp+6Ch] [bp-44h]@7
  int v54; // [sp+70h] [bp-40h]@7
  int v55; // [sp+74h] [bp-3Ch]@7
  int v56; // [sp+78h] [bp-38h]@7
  int v57; // [sp+7Ch] [bp-34h]@7
  int v58; // [sp+80h] [bp-30h]@7
  __int64 v59; // [sp+88h] [bp-28h]@7

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = Entity::getRegion(*((Entity **)this + 1));
  v9 = (Entity *)*((_DWORD *)v4 + 1);
  v10 = (BlockSource *)v8;
  v11 = (PlayerInventoryProxy *)Player::getSupplies(*((Player **)v4 + 1));
  v12 = (const ItemInstance *)PlayerInventoryProxy::getSelectedItem(v11);
  v13 = BlockSource::checkBlockDestroyPermissions(v10, v9, v7, v12, Item::mGenerateDenyParticleEffect[0]);
  *v5 = 0;
  _ZF = v13 == 0;
  v15 = (Entity *)*((_DWORD *)v4 + 1);
  if ( _ZF )
  {
    v18 = (Level *)Entity::getLevel(v15);
    v19 = Level::isClientSide(v18);
    v16 = 0;
    if ( !Item::mGenerateDenyParticleEffect[0] || v19 ^ 1 )
      return v16;
    Entity::getRuntimeID((Entity *)&v49, *((_DWORD *)v4 + 1));
    v51 = 2;
    v52 = 1;
    v53 = 0;
    v50 = &off_26DA670;
    v20 = *((_DWORD *)v7 + 1);
    v21 = *((_DWORD *)v7 + 2);
    v54 = *(_DWORD *)v7;
    v55 = v20;
    v56 = v21;
    v57 = v6;
    v58 = 17;
    v59 = *(_QWORD *)&v49;
    (*(void (**)(void))(**((_DWORD **)v4 + 1) + 1524))();
    return 0;
  }
  if ( (*(int (**)(void))(*(_DWORD *)v15 + 652))() != 1 )
    v22 = (Level *)Entity::getLevel(*((Entity **)v4 + 1));
    v23 = (BlockSource *)Entity::getRegion(*((Entity **)v4 + 1));
    Level::extinguishFire(v22, v23, v7, v6);
    v24 = (const BlockPos *)Entity::getRegion(*((Entity **)v4 + 1));
    BlockSource::getBlockID((BlockSource *)&v47, v24, (int)v7);
    if ( !v47 || *((_DWORD *)v4 + 6) & 0x7FFFFFFF )
    {
LABEL_14:
      _R0 = getTimeS();
      __asm
      {
        VMOV            D0, R0, R1
        VSTR            D0, [R4,#0x20]
      }
      if ( !v47 )
        return 1;
      _R0 = Player::getDestroyProgress(*((Player **)v4 + 1), (const Block *)Block::mBlocks[v47]);
        VMOV.F32        S0, #1.0
        VMOV            S2, R0
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF || (*(int (__fastcall **)(GameMode *, const BlockPos *, int))(*(_DWORD *)v4 + 12))(v4, v7, v6) != 1 )
      sub_21E0378(&v35);
      *((_QWORD *)v4 + 9) = 1000000LL * *((_QWORD *)v4 + 11) + v35;
      *v5 = 1;
      return 0;
    }
    v25 = *((_DWORD *)v4 + 1);
    if ( (*(int (**)(void))(*(_DWORD *)Block::mBlocks[v47] + 308))() == 1 )
      v26 = (Level *)Entity::getLevel(*((Entity **)v4 + 1));
      if ( Level::isClientSide(v26) == 1 )
        Entity::getRuntimeID((Entity *)&v36, *((_DWORD *)v4 + 1));
        v38 = 2;
        v39 = 1;
        v40 = 0;
        v37 = &off_26DA670;
        v27 = *(_QWORD *)v7;
        v28 = *((_DWORD *)v7 + 2);
        v41 = *(_QWORD *)v7;
        v42 = HIDWORD(v27);
        v43 = v28;
        v44 = v6;
        v45 = 0;
        v46 = *(_QWORD *)&v36;
        (*(void (**)(void))(**((_DWORD **)v4 + 1) + 1524))();
      goto LABEL_14;
  v16 = 0;
  if ( GameMode::_creativeDestroyBlock(v4, v7, v6) == 1 )
    *v5 = 1;
    sub_21E0378(&v48);
    *((_QWORD *)v4 + 9) = 1000000LL * *((_QWORD *)v4 + 11) + v48;
    *((_DWORD *)v4 + 11) = 0;
    v17 = (*(int (**)(void))(**((_DWORD **)v4 + 1) + 52))();
    v16 = 1;
    *((_DWORD *)v4 + 12) = *(_DWORD *)v17;
    *((_DWORD *)v4 + 13) = *(_DWORD *)(v17 + 4);
    *((_DWORD *)v4 + 14) = *(_DWORD *)(v17 + 8);
  return v16;
}


int __fastcall GameMode::GameMode(int result, int a2)
{
  __int64 v2; // kr00_8@1

  *(_DWORD *)result = &off_2700950;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = -1;
  *(_DWORD *)(result + 12) = -1;
  *(_DWORD *)(result + 16) = -1;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_BYTE *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  v2 = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(result + 56) = dword_2822498;
  *(_QWORD *)(result + 48) = v2;
  *(_DWORD *)(result + 84) = 0;
  *(_DWORD *)(result + 76) = 0;
  *(_DWORD *)(result + 80) = 0;
  *(_DWORD *)(result + 68) = 0;
  *(_DWORD *)(result + 72) = 0;
  *(_DWORD *)(result + 60) = 1056964608;
  *(_DWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 92) = 0;
  *(_DWORD *)(result + 88) = 250;
  *(_DWORD *)(result + 100) = 0;
  *(_DWORD *)(result + 96) = 200;
  *(_DWORD *)(result + 104) = 200;
  *(_DWORD *)(result + 108) = 0;
  return result;
}


int __fastcall GameMode::_canUseBlock(GameMode *this, const Block *a2)
{
  Block *v2; // r4@1
  int result; // r0@2

  v2 = a2;
  if ( Player::canUseCommandBlocks(*((Player **)this + 1)) )
  {
    result = 1;
  }
  else if ( Block::isType(v2, (const Block *)Block::mCommandBlock)
         || Block::isType(v2, (const Block *)Block::mChainCommandBlock) )
    result = 0;
  else
    result = Block::isType(v2, (const Block *)Block::mRepeatingCommandBlock) ^ 1;
  return result;
}


_BOOL4 __fastcall GameMode::buildBlock(GameMode *this, const BlockPos *a2, int a3)
{
  GameMode *v3; // r4@1
  int v4; // r9@1
  const BlockPos *v5; // r8@1
  ItemUseInventoryTransaction *v6; // r7@1
  int v7; // r7@1
  void (__fastcall *v8)(int, _DWORD **, _DWORD **); // r10@1
  _DWORD *v9; // r0@1
  _DWORD *v10; // r0@1
  __int64 v11; // r1@1
  Level *v12; // r0@5
  int v13; // r2@6
  void (*v14)(void); // r3@6
  int v15; // r4@9
  int v17; // [sp+4h] [bp-4Ch]@6
  _DWORD *v18; // [sp+8h] [bp-48h]@1
  __int64 v19; // [sp+10h] [bp-40h]@1
  _DWORD *v20; // [sp+18h] [bp-38h]@1
  void (*v21)(void); // [sp+20h] [bp-30h]@1
  int (__fastcall *v22)(int **, int, int, int, int); // [sp+24h] [bp-2Ch]@1
  ItemUseInventoryTransaction *v23; // [sp+28h] [bp-28h]@1
  unsigned __int8 v24; // [sp+2Fh] [bp-21h]@1

  v3 = this;
  v24 = 0;
  v4 = a3;
  v5 = a2;
  v6 = (ItemUseInventoryTransaction *)operator new(0xA8u);
  ItemUseInventoryTransaction::ItemUseInventoryTransaction(v6);
  v23 = v6;
  v7 = Player::getSupplies(*((Player **)v3 + 1));
  v8 = *(void (__fastcall **)(int, _DWORD **, _DWORD **))(*(_DWORD *)v7 + 16);
  v9 = operator new(8u);
  *v9 = v3;
  v9[1] = &v23;
  v20 = v9;
  v21 = (void (*)(void))sub_1797440;
  v22 = sub_1797360;
  v10 = operator new(0x14u);
  LODWORD(v11) = sub_17976B4;
  *v10 = v3;
  v10[1] = &v23;
  HIDWORD(v11) = sub_179747A;
  v10[2] = &v24;
  v10[3] = v5;
  v10[4] = v4;
  v18 = v10;
  v19 = v11;
  v8(v7, &v20, &v18);
  if ( (_DWORD)v19 )
    ((void (*)(void))v19)();
  if ( v21 )
    v21();
  v12 = (Level *)Entity::getLevel(*((Entity **)v3 + 1));
  if ( Level::isClientSide(v12) )
  {
    v13 = (int)v23;
    v14 = *(void (**)(void))(**((_DWORD **)v3 + 1) + 1520);
    v23 = 0;
    v17 = v13;
    v14();
    if ( v17 )
      (*(void (**)(void))(*(_DWORD *)v17 + 4))();
    v17 = 0;
  }
  v15 = v24;
  if ( v23 )
    (*(void (**)(void))(*(_DWORD *)v23 + 4))();
  return v15 != 0;
}


int __fastcall GameMode::isInTrialMode(GameMode *this)
{
  return 0;
}


int __fastcall GameMode::stopDestroyBlock(GameMode *this, const BlockPos *a2)
{
  GameMode *v2; // r4@1
  const BlockPos *v3; // r5@1
  int result; // r0@1
  Level *v5; // r0@2
  int v6; // r0@3
  int v7; // r1@3
  int v8; // r5@3
  int v9; // [sp+0h] [bp-48h]@3
  void **v10; // [sp+8h] [bp-40h]@3
  signed int v11; // [sp+Ch] [bp-3Ch]@3
  signed int v12; // [sp+10h] [bp-38h]@3
  char v13; // [sp+14h] [bp-34h]@3
  int v14; // [sp+18h] [bp-30h]@3
  int v15; // [sp+1Ch] [bp-2Ch]@3
  int v16; // [sp+20h] [bp-28h]@3
  int v17; // [sp+24h] [bp-24h]@3
  int v18; // [sp+28h] [bp-20h]@3
  __int64 v19; // [sp+30h] [bp-18h]@3

  v2 = this;
  v3 = a2;
  result = (*(int (**)(void))(**((_DWORD **)this + 1) + 652))();
  if ( !result )
  {
    v5 = (Level *)Entity::getLevel(*((Entity **)v2 + 1));
    if ( Level::isClientSide(v5) == 1 )
    {
      Entity::getRuntimeID((Entity *)&v9, *((_DWORD *)v2 + 1));
      v11 = 2;
      v12 = 1;
      v13 = 0;
      v10 = &off_26DA670;
      v6 = *(_DWORD *)v3;
      v7 = *((_DWORD *)v3 + 1);
      v8 = *((_DWORD *)v3 + 2);
      v14 = v6;
      v15 = v7;
      v16 = v8;
      v17 = 0;
      v18 = 1;
      v19 = *(_QWORD *)&v9;
      (*(void (**)(void))(**((_DWORD **)v2 + 1) + 1524))();
    }
    result = 0;
    *((_DWORD *)v2 + 6) = 0;
    *((_DWORD *)v2 + 18) = 0;
    *((_DWORD *)v2 + 19) = 0;
  }
  return result;
}


int __fastcall GameMode::getHitProgress(GameMode *this, float _R1)
{
  int result; // r0@2

  __asm
  {
    VLDR            S0, [R0,#0x18]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
    {
      VLDRLE          S0, =0.0
      VMOVLE          R0, S0
    }
  else
      VLDR            S4, [R0,#0x14]
      VMOV            S2, R1
      VSUB.F32        S0, S0, S4
      VMUL.F32        S0, S0, S2
      VADD.F32        S0, S0, S4
      VMOV            R0, S0
  return result;
}


_BOOL4 __fastcall GameMode::attack(GameMode *this, Entity *a2)
{
  unsigned __int64 v2; // r4@1
  Entity *v3; // r8@1
  ItemUseOnEntityInventoryTransaction *v4; // r6@1
  int v5; // r6@1
  void (__fastcall *v6)(int, _QWORD **, _DWORD **); // r9@1
  _QWORD *v7; // r0@1
  _DWORD *v8; // r0@1
  __int64 v9; // r1@1
  Level *v10; // r0@5
  int v11; // r2@6
  void (*v12)(void); // r3@6
  int v13; // r4@9
  int v15; // [sp+0h] [bp-48h]@6
  _DWORD *v16; // [sp+4h] [bp-44h]@1
  __int64 v17; // [sp+Ch] [bp-3Ch]@1
  _QWORD *v18; // [sp+14h] [bp-34h]@1
  void (*v19)(void); // [sp+1Ch] [bp-2Ch]@1
  int (__fastcall *v20)(int **, int, int, int, int); // [sp+20h] [bp-28h]@1
  unsigned __int8 v21; // [sp+27h] [bp-21h]@1
  ItemUseOnEntityInventoryTransaction *v22; // [sp+28h] [bp-20h]@1

  v2 = __PAIR__(&v22, (unsigned int)this);
  v3 = a2;
  v4 = (ItemUseOnEntityInventoryTransaction *)operator new(0xA0u);
  ItemUseOnEntityInventoryTransaction::ItemUseOnEntityInventoryTransaction(v4);
  v22 = v4;
  v21 = 1;
  v5 = Player::getSupplies(*(Player **)(v2 + 4));
  v6 = *(void (__fastcall **)(int, _QWORD **, _DWORD **))(*(_DWORD *)v5 + 16);
  v7 = operator new(8u);
  *v7 = v2;
  v18 = v7;
  v19 = (void (*)(void))sub_1796E38;
  v20 = sub_1796D58;
  v8 = operator new(0x10u);
  LODWORD(v9) = sub_1796F06;
  *v8 = v2;
  v8[1] = &v22;
  v8[2] = v3;
  HIDWORD(v9) = sub_1796E72;
  v8[3] = &v21;
  v16 = v8;
  v17 = v9;
  v6(v5, &v18, &v16);
  if ( (_DWORD)v17 )
    ((void (*)(void))v17)();
  if ( v19 )
    v19();
  v10 = (Level *)Entity::getLevel(*(Entity **)(v2 + 4));
  if ( Level::isClientSide(v10) )
  {
    v11 = (int)v22;
    v12 = *(void (**)(void))(**(_DWORD **)(v2 + 4) + 1520);
    v22 = 0;
    v15 = v11;
    v12();
    if ( v15 )
      (*(void (**)(void))(*(_DWORD *)v15 + 4))();
    v15 = 0;
  }
  v13 = v21;
  if ( v22 )
    (*(void (__cdecl **)(ItemUseOnEntityInventoryTransaction *, _DWORD))(*(_DWORD *)v22 + 4))(
      v22,
      *(_DWORD *)(*(_DWORD *)v22 + 4));
  return v13 != 0;
}


_BOOL4 __fastcall GameMode::baseUseItem(GameMode *this, ItemInstance *a2)
{
  unsigned __int64 v2; // r4@1
  ItemInstance *v3; // r8@1
  ItemUseInventoryTransaction *v4; // r6@1
  int v5; // r6@1
  void (__fastcall *v6)(int, _QWORD **, _DWORD **); // r9@1
  _QWORD *v7; // r0@1
  _DWORD *v8; // r0@1
  __int64 v9; // r1@1
  Level *v10; // r0@5
  int v11; // r2@6
  void (*v12)(void); // r3@6
  int v13; // r4@9
  int v15; // [sp+0h] [bp-48h]@6
  _DWORD *v16; // [sp+4h] [bp-44h]@1
  __int64 v17; // [sp+Ch] [bp-3Ch]@1
  _QWORD *v18; // [sp+14h] [bp-34h]@1
  void (*v19)(void); // [sp+1Ch] [bp-2Ch]@1
  int (__fastcall *v20)(int **, int, int, int, int); // [sp+20h] [bp-28h]@1
  ItemUseInventoryTransaction *v21; // [sp+24h] [bp-24h]@1
  unsigned __int8 v22; // [sp+2Bh] [bp-1Dh]@1

  v2 = __PAIR__(&v21, (unsigned int)this);
  v3 = a2;
  v4 = (ItemUseInventoryTransaction *)operator new(0xA8u);
  ItemUseInventoryTransaction::ItemUseInventoryTransaction(v4);
  v21 = v4;
  v5 = Player::getSupplies(*(Player **)(v2 + 4));
  v6 = *(void (__fastcall **)(int, _QWORD **, _DWORD **))(*(_DWORD *)v5 + 16);
  v7 = operator new(8u);
  *v7 = v2;
  v18 = v7;
  v19 = (void (*)(void))sub_17977D4;
  v20 = sub_17976F4;
  v8 = operator new(0x10u);
  LODWORD(v9) = sub_1797892;
  *v8 = v2;
  v8[1] = v3;
  HIDWORD(v9) = sub_179780E;
  v8[2] = &v21;
  v8[3] = &v22;
  v16 = v8;
  v17 = v9;
  v6(v5, &v18, &v16);
  if ( (_DWORD)v17 )
    ((void (*)(void))v17)();
  if ( v19 )
    v19();
  v10 = (Level *)Entity::getLevel(*(Entity **)(v2 + 4));
  if ( Level::isClientSide(v10) )
  {
    v11 = (int)v21;
    v12 = *(void (**)(void))(**(_DWORD **)(v2 + 4) + 1520);
    v21 = 0;
    v15 = v11;
    v12();
    if ( v15 )
      (*(void (**)(void))(*(_DWORD *)v15 + 4))();
    v15 = 0;
  }
  v13 = v22;
  if ( v21 )
    (*(void (__cdecl **)(ItemUseInventoryTransaction *, _DWORD))(*(_DWORD *)v21 + 4))(
      v21,
      *(_DWORD *)(*(_DWORD *)v21 + 4));
  return v13 != 0;
}


int __fastcall GameMode::releaseUsingItem(GameMode *this)
{
  GameMode *v1; // r4@1
  void *v2; // r0@1
  int v3; // r7@1
  void (__fastcall *v4)(int, _DWORD **, _DWORD **); // r5@1
  _DWORD *v5; // r0@1
  _DWORD *v6; // r0@1
  __int64 v7; // r1@1
  Level *v8; // r0@5
  int v9; // r2@6
  void (*v10)(void); // r3@6
  int result; // r0@15
  int v12; // [sp+0h] [bp-90h]@6
  _DWORD *v13; // [sp+4h] [bp-8Ch]@1
  __int64 v14; // [sp+Ch] [bp-84h]@1
  _DWORD *v15; // [sp+14h] [bp-7Ch]@1
  void (*v16)(void); // [sp+1Ch] [bp-74h]@1
  int (__fastcall *v17)(int **, int, int, int, int); // [sp+20h] [bp-70h]@1
  int v18; // [sp+24h] [bp-6Ch]@1
  char v19; // [sp+28h] [bp-68h]@1
  int v20; // [sp+30h] [bp-60h]@15
  void *v21; // [sp+4Ch] [bp-44h]@13
  void *ptr; // [sp+5Ch] [bp-34h]@11

  v1 = this;
  v2 = Player::getSelectedItem(*((Player **)this + 1));
  ItemInstance::ItemInstance((ItemInstance *)&v19, (int)v2);
  j__ZSt11make_uniqueI31ItemReleaseInventoryTransactionJEENSt9_MakeUniqIT_E15__single_objectEDpOT0_(&v18);
  v3 = Player::getSupplies(*((Player **)v1 + 1));
  v4 = *(void (__fastcall **)(int, _DWORD **, _DWORD **))(*(_DWORD *)v3 + 16);
  v5 = operator new(8u);
  *v5 = v1;
  v5[1] = &v18;
  v15 = v5;
  v16 = (void (*)(void))sub_17979B0;
  v17 = sub_17978D0;
  v6 = operator new(0xCu);
  LODWORD(v7) = sub_1797B40;
  *v6 = v1;
  v6[1] = &v19;
  v6[2] = &v18;
  HIDWORD(v7) = sub_17979EA;
  v13 = v6;
  v14 = v7;
  v4(v3, &v15, &v13);
  if ( (_DWORD)v14 )
    ((void (*)(void))v14)();
  if ( v16 )
    v16();
  v8 = (Level *)Entity::getLevel(*((Entity **)v1 + 1));
  if ( Level::isClientSide(v8) )
  {
    v9 = v18;
    v10 = *(void (**)(void))(**((_DWORD **)v1 + 1) + 1520);
    v18 = 0;
    v12 = v9;
    v10();
    if ( v12 )
      (*(void (**)(void))(*(_DWORD *)v12 + 4))();
    v12 = 0;
  }
  if ( v18 )
    (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v18 + 4))(v18, *(_DWORD *)(*(_DWORD *)v18 + 4));
  v18 = 0;
  if ( ptr )
    operator delete(ptr);
  if ( v21 )
    operator delete(v21);
  result = v20;
  if ( v20 )
    result = (*(int (__cdecl **)(int, _DWORD))(*(_DWORD *)v20 + 4))(v20, *(_DWORD *)(*(_DWORD *)v20 + 4));
  return result;
}


_BOOL4 __fastcall GameMode::interact(GameMode *this, Entity *a2, const Vec3 *a3)
{
  GameMode *v3; // r4@1
  const Vec3 *v4; // r8@1
  Entity *v5; // r9@1
  ItemUseOnEntityInventoryTransaction *v6; // r7@1
  int v7; // r7@1
  void (__fastcall *v8)(int, _DWORD **, _DWORD **); // r10@1
  _DWORD *v9; // r0@1
  _DWORD *v10; // r0@1
  __int64 v11; // r1@1
  Level *v12; // r0@5
  int v13; // r2@6
  void (*v14)(void); // r3@6
  int v15; // r4@9
  int v17; // [sp+4h] [bp-4Ch]@6
  _DWORD *v18; // [sp+8h] [bp-48h]@1
  __int64 v19; // [sp+10h] [bp-40h]@1
  _DWORD *v20; // [sp+18h] [bp-38h]@1
  void (*v21)(void); // [sp+20h] [bp-30h]@1
  int (__fastcall *v22)(int **, int, int, int, int); // [sp+24h] [bp-2Ch]@1
  ItemUseOnEntityInventoryTransaction *v23; // [sp+28h] [bp-28h]@1
  unsigned __int8 v24; // [sp+2Fh] [bp-21h]@1

  v3 = this;
  v24 = 0;
  v4 = a3;
  v5 = a2;
  v6 = (ItemUseOnEntityInventoryTransaction *)operator new(0xA0u);
  ItemUseOnEntityInventoryTransaction::ItemUseOnEntityInventoryTransaction(v6);
  v23 = v6;
  v7 = Player::getSupplies(*((Player **)v3 + 1));
  v8 = *(void (__fastcall **)(int, _DWORD **, _DWORD **))(*(_DWORD *)v7 + 16);
  v9 = operator new(8u);
  *v9 = v3;
  v9[1] = &v23;
  v20 = v9;
  v21 = (void (*)(void))sub_1796C54;
  v22 = sub_1796B74;
  v10 = operator new(0x14u);
  LODWORD(v11) = sub_1796D18;
  *v10 = v3;
  v10[1] = &v23;
  HIDWORD(v11) = sub_1796C8E;
  v10[2] = &v24;
  v10[3] = v5;
  v10[4] = v4;
  v18 = v10;
  v19 = v11;
  v8(v7, &v20, &v18);
  if ( (_DWORD)v19 )
    ((void (*)(void))v19)();
  if ( v21 )
    v21();
  v12 = (Level *)Entity::getLevel(*((Entity **)v3 + 1));
  if ( Level::isClientSide(v12) )
  {
    v13 = (int)v23;
    v14 = *(void (**)(void))(**((_DWORD **)v3 + 1) + 1520);
    v23 = 0;
    v17 = v13;
    v14();
    if ( v17 )
      (*(void (**)(void))(*(_DWORD *)v17 + 4))();
    v17 = 0;
  }
  v15 = v24;
  if ( v23 )
    (*(void (**)(void))(*(_DWORD *)v23 + 4))();
  return v15 != 0;
}


signed int __fastcall GameMode::_creativeDestroyBlock(GameMode *this, const BlockPos *a2, int a3)
{
  GameMode *v3; // r4@1
  int v4; // r5@1
  const BlockPos *v5; // r6@1
  Level *v6; // r7@1
  BlockSource *v7; // r0@1
  Level *v8; // r0@2
  __int64 v9; // kr00_8@3
  int v10; // r6@3
  int v12; // [sp+0h] [bp-50h]@3
  void **v13; // [sp+8h] [bp-48h]@3
  signed int v14; // [sp+Ch] [bp-44h]@3
  signed int v15; // [sp+10h] [bp-40h]@3
  char v16; // [sp+14h] [bp-3Ch]@3
  __int64 v17; // [sp+18h] [bp-38h]@3
  int v18; // [sp+20h] [bp-30h]@3
  int v19; // [sp+24h] [bp-2Ch]@3
  int v20; // [sp+28h] [bp-28h]@3
  __int64 v21; // [sp+30h] [bp-20h]@3

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (Level *)Entity::getLevel(*((Entity **)this + 1));
  v7 = (BlockSource *)Entity::getRegion(*((Entity **)v3 + 1));
  if ( Level::extinguishFire(v6, v7, v5, v4) )
  {
    v8 = (Level *)Entity::getLevel(*((Entity **)v3 + 1));
    if ( Level::isClientSide(v8) == 1 )
    {
      Entity::getRuntimeID((Entity *)&v12, *((_DWORD *)v3 + 1));
      v14 = 2;
      v15 = 1;
      v16 = 0;
      v13 = &off_26DA670;
      v9 = *(_QWORD *)v5;
      v10 = *((_DWORD *)v5 + 2);
      v17 = v9;
      v18 = v10;
      v19 = v4;
      v20 = 0;
      v21 = *(_QWORD *)&v12;
      (*(void (**)(void))(**((_DWORD **)v3 + 1) + 1524))();
    }
    return 1;
  }
  if ( (*(int (__fastcall **)(GameMode *, const BlockPos *, int))(*(_DWORD *)v3 + 12))(v3, v5, v4) )
  return 0;
}


int __fastcall GameMode::_canDestroy(GameMode *this, const BlockPos *a2, signed __int8 a3)
{
  GameMode *v3; // r5@1
  const BlockPos *v4; // r4@1
  int v5; // r0@1
  Player *v6; // r5@1
  BlockSource *v7; // r6@1
  PlayerInventoryProxy *v8; // r0@1
  const ItemInstance *v9; // r0@1

  v3 = this;
  v4 = a2;
  v5 = Entity::getRegion(*((Entity **)this + 1));
  v6 = (Player *)*((_DWORD *)v3 + 1);
  v7 = (BlockSource *)v5;
  v8 = (PlayerInventoryProxy *)Player::getSupplies(v6);
  v9 = (const ItemInstance *)PlayerInventoryProxy::getSelectedItem(v8);
  return BlockSource::checkBlockDestroyPermissions(v7, v6, v4, v9, Item::mGenerateDenyParticleEffect[0]);
}


signed int __fastcall GameMode::useItemOn(GameMode *this, ItemInstance *a2, const BlockPos *a3, int a4, const Vec3 *a5, ItemUseCallback *a6)
{
  GameMode *v6; // r11@1
  const BlockPos *v7; // r8@1
  ItemInstance *v8; // r10@1
  int v9; // r9@1
  BlockSource *v14; // r0@1
  int v15; // r6@1
  signed int v16; // r5@1
  int (__fastcall *v17)(int, int, const BlockPos *, char *); // r7@2
  int v18; // r0@2
  AABB *v19; // r0@2
  Material *v20; // r0@4
  int v21; // r2@5
  int v22; // r0@6
  int v23; // r5@6
  int v24; // r0@6
  Block *v26; // r5@20
  int v27; // r5@31
  bool v28; // zf@40
  int v29; // r0@45
  int v30; // r0@45
  float v32; // [sp+Ch] [bp-D4h]@0
  float v33; // [sp+10h] [bp-D0h]@0
  char v34; // [sp+18h] [bp-C8h]@31
  int v35; // [sp+1Ch] [bp-C4h]@45
  int v36; // [sp+20h] [bp-C0h]@35
  void *v37; // [sp+3Ch] [bp-A4h]@33
  void *ptr; // [sp+4Ch] [bp-94h]@31
  char v39; // [sp+60h] [bp-80h]@2
  float v40; // [sp+7Ch] [bp-64h]@1

  v6 = this;
  v7 = a3;
  v8 = a2;
  v9 = a4;
  Vec3::Vec3((int)&v40, (int)a3);
  _R0 = a5;
  __asm
  {
    VLDR            S16, [SP,#0xE0+var_64]
    VLDR            S20, [R0]
    VLDR            S24, [R0,#4]
    VLDR            S26, [R0,#8]
    VLDR            S18, [SP,#0xE0+var_60]
    VLDR            S22, [SP,#0xE0+var_5C]
  }
  v14 = (BlockSource *)Entity::getRegion(*((Entity **)v6 + 1));
  v15 = BlockSource::getBlock(v14, v7);
  v16 = 0;
  if ( *(_BYTE *)(v15 + 4) != *(_BYTE *)(Block::mInvisibleBedrock + 4) )
    AABB::AABB((AABB *)&v39);
    v17 = *(int (__fastcall **)(int, int, const BlockPos *, char *))(*(_DWORD *)v15 + 32);
    v18 = Entity::getRegion(*((Entity **)v6 + 1));
    v19 = (AABB *)v17(v15, v18, v7, &v39);
    if ( AABB::isEmpty(v19) == 1 && *(_DWORD *)v8 == Item::mBucket )
    {
      v20 = (Material *)Block::getMaterial((Block *)v15);
      if ( Material::isLiquid(v20) != 1 )
        return 0;
    }
    if ( (*(int (__cdecl **)(_DWORD, _DWORD))(**((_DWORD **)v6 + 1) + 312))(
           *((_DWORD *)v6 + 1),
           *(_DWORD *)(**((_DWORD **)v6 + 1) + 312)) == 1 )
      v22 = (*(int (__cdecl **)(_DWORD, _DWORD, int))(**((_DWORD **)v6 + 1) + 908))(
              *((_DWORD *)v6 + 1),
              *(_DWORD *)(**((_DWORD **)v6 + 1) + 908),
              v21);
      v23 = v22;
      v24 = *(_BYTE *)(v22 + 15);
      _ZF = v24 == 0;
      if ( v24 )
        _ZF = *(_DWORD *)v23 == 0;
      if ( !_ZF && !ItemInstance::isNull((ItemInstance *)v23) && *(_BYTE *)(v23 + 14) )
        goto LABEL_51;
    if ( *(_BYTE *)(v15 + 4) <= (unsigned int)BlockID::AIR
      || !(*(int (__fastcall **)(int, _DWORD, const BlockPos *, ItemUseCallback *))(*(_DWORD *)v15 + 292))(
            v15,
            *((_DWORD *)v6 + 1),
            v7,
            a6) )
LABEL_51:
      if ( !*((_BYTE *)v8 + 15) )
      if ( !*(_DWORD *)v8 )
      if ( ItemInstance::isNull(v8) )
      if ( !*((_BYTE *)v8 + 14) )
      v26 = (Block *)*((_DWORD *)v8 + 1);
      if ( v26 && !Player::canUseCommandBlocks(*((Player **)v6 + 1)) )
      {
        if ( Block::isType(v26, (const Block *)Block::mCommandBlock) )
          return 0;
        if ( Block::isType(v26, (const Block *)Block::mChainCommandBlock) )
        if ( Block::isType(v26, (const Block *)Block::mRepeatingCommandBlock) )
      }
      __asm
        VSUB.F32        S22, S26, S22
        VSUB.F32        S18, S24, S18
        VSUB.F32        S16, S20, S16
      if ( (*(int (__cdecl **)(_DWORD, _DWORD))(**((_DWORD **)v6 + 1) + 652))(
             *((_DWORD *)v6 + 1),
             *(_DWORD *)(**((_DWORD **)v6 + 1) + 652)) == 1 )
        ItemInstance::ItemInstance((ItemInstance *)&v34, (int)v8);
        __asm
        {
          VSTR            S18, [SP,#0xE0+var_D4]
          VSTR            S22, [SP,#0xE0+var_D0]
          VSTR            S16, [SP,#0xE0+var_D8]
        }
        v27 = ItemInstance::useOn(
                (int)v8,
                *((Entity **)v6 + 1),
                *(_QWORD *)v7,
                *(_QWORD *)v7 >> 32,
                *((_DWORD *)v7 + 2),
                v9,
                0.0,
                v32,
                v33,
                (int)a6);
        ItemInstance::operator=((int)v8, (int)&v34);
        if ( ptr )
          operator delete(ptr);
        if ( v37 )
          operator delete(v37);
        if ( v36 )
          (*(void (**)(void))(*(_DWORD *)v36 + 4))();
        if ( !v27 )
      else
        if ( ItemInstance::useOn(
               (int)v8,
               *((Entity **)v6 + 1),
               *(_QWORD *)v7,
               *(_QWORD *)v7 >> 32,
               *((_DWORD *)v7 + 2),
               v9,
               0.0,
               v32,
               v33,
               (int)a6) != 1 )
      v28 = *((_BYTE *)v8 + 15) == 0;
      if ( *((_BYTE *)v8 + 15) )
        v28 = *(_DWORD *)v8 == 0;
      if ( v28 || ItemInstance::isNull(v8) || !*((_BYTE *)v8 + 14) )
        v29 = Player::getSupplies(*((Player **)v6 + 1));
        PlayerInventoryProxy::getSelectedSlot((PlayerInventoryProxy *)&v34, v29);
        v30 = Player::getSupplies(*((Player **)v6 + 1));
        PlayerInventoryProxy::clearSlot(v30, v35, v34);
    v16 = 1;
  return v16;
}


signed int __fastcall GameMode::_destroyBlockInternal(GameMode *this, const BlockPos *a2, signed __int8 a3)
{
  GameMode *v3; // r9@1
  const BlockPos *v4; // r5@1
  BlockSource *v5; // r6@1
  Block *v6; // r7@1
  int v7; // r7@2
  int v8; // r1@3
  int v9; // r2@3
  int v10; // r8@4
  BlockSource *v11; // r7@4
  int v12; // r1@4
  int v13; // r2@4
  signed int result; // r0@5
  char v15; // [sp+8h] [bp-88h]@4
  void **v16; // [sp+10h] [bp-80h]@4
  int v17; // [sp+14h] [bp-7Ch]@4
  int v18; // [sp+18h] [bp-78h]@4
  char v19; // [sp+1Ch] [bp-74h]@4
  int v20; // [sp+20h] [bp-70h]@4
  int v21; // [sp+24h] [bp-6Ch]@4
  int v22; // [sp+28h] [bp-68h]@4
  int v23; // [sp+2Ch] [bp-64h]@4
  int v24; // [sp+30h] [bp-60h]@4
  __int64 v25; // [sp+38h] [bp-58h]@4
  int v26; // [sp+40h] [bp-50h]@4
  signed int v27; // [sp+44h] [bp-4Ch]@4
  int v28; // [sp+48h] [bp-48h]@4
  int v29; // [sp+4Ch] [bp-44h]@4
  int v30; // [sp+50h] [bp-40h]@4
  int v31; // [sp+54h] [bp-3Ch]@4
  int v32; // [sp+58h] [bp-38h]@4
  int v33; // [sp+5Ch] [bp-34h]@4
  int v34; // [sp+60h] [bp-30h]@4
  char v35; // [sp+64h] [bp-2Ch]@4
  unsigned __int16 v36; // [sp+70h] [bp-20h]@2
  unsigned __int16 v37; // [sp+72h] [bp-1Eh]@2

  v3 = this;
  v4 = a2;
  v5 = (BlockSource *)Entity::getRegion(*((Entity **)this + 1));
  v6 = (Block *)BlockSource::getBlock(v5, v4);
  if ( Block::isType(v6, (const Block *)Block::mAir)
    || (BlockSource::getBlockAndData((BlockSource *)&v37, v5, (int)v4),
        v7 = (*(int (__fastcall **)(Block *, _DWORD, const BlockPos *, _DWORD))(*(_DWORD *)v6 + 244))(
               v6,
               *((_DWORD *)v3 + 1),
               v4,
               HIBYTE(v37)),
        BlockSource::getBlockAndData((BlockSource *)&v36, v5, (int)v4),
        v7 != 1) )
  {
    result = 0;
  }
  else
    v8 = v36;
    v9 = v36;
    if ( v36 != v37 )
    {
      v10 = Entity::getLevel(*((Entity **)v3 + 1));
      v11 = (BlockSource *)Entity::getRegion(*((Entity **)v3 + 1));
      v26 = 1056964608;
      v27 = 1056964608;
      v28 = 1056964608;
      BlockPos::BlockPos((int)&v29, (int)&v26);
      v12 = *((_DWORD *)v4 + 1);
      v13 = *((_DWORD *)v4 + 2);
      v32 = *(_DWORD *)v4 + v29;
      v33 = v30 + v12;
      v34 = v31 + v13;
      Vec3::Vec3((int)&v35, (int)&v32);
      Level::broadcastDimensionEvent(v10, v11, 2001, (int)&v35, v37);
      MinecraftEventing::fireEventBlockBroken(*((_DWORD *)v3 + 1), (int)&v37, 0);
      Entity::getRuntimeID((Entity *)&v15, *((_DWORD *)v3 + 1));
      v17 = 2;
      v18 = 1;
      v19 = 0;
      v16 = &off_26DA670;
      v22 = 0;
      v23 = 0;
      v20 = 0;
      v21 = 0;
      v24 = 2;
      v25 = *(_QWORD *)&v15;
      (*(void (**)(void))(**((_DWORD **)v3 + 1) + 1524))();
      v8 = v37;
      v9 = v36;
    }
    if ( v9 != v8 )
      result = 1;
  return result;
}


_BOOL4 __fastcall GameMode::destroyBlock(GameMode *this, const BlockPos *a2, int a3)
{
  GameMode *v3; // r4@1
  int v4; // r9@1
  const BlockPos *v5; // r8@1
  ItemUseInventoryTransaction *v6; // r7@1
  int v7; // r7@1
  void (__fastcall *v8)(int, _DWORD **, _DWORD **); // r10@1
  _DWORD *v9; // r0@1
  _DWORD *v10; // r0@1
  __int64 v11; // r1@1
  Level *v12; // r0@6
  int v13; // r2@7
  void (*v14)(void); // r3@7
  int v15; // r4@10
  int v17; // [sp+4h] [bp-4Ch]@7
  _DWORD *v18; // [sp+8h] [bp-48h]@1
  __int64 v19; // [sp+10h] [bp-40h]@1
  _DWORD *v20; // [sp+18h] [bp-38h]@1
  void (*v21)(void); // [sp+20h] [bp-30h]@1
  int (__fastcall *v22)(int **, int, int, int, int); // [sp+24h] [bp-2Ch]@1
  ItemUseInventoryTransaction *v23; // [sp+28h] [bp-28h]@1
  unsigned __int8 v24; // [sp+2Fh] [bp-21h]@1

  v3 = this;
  v24 = 0;
  v4 = a3;
  v5 = a2;
  v6 = (ItemUseInventoryTransaction *)operator new(0xA8u);
  ItemUseInventoryTransaction::ItemUseInventoryTransaction(v6);
  v23 = v6;
  v7 = Player::getSupplies(*((Player **)v3 + 1));
  v8 = *(void (__fastcall **)(int, _DWORD **, _DWORD **))(*(_DWORD *)v7 + 16);
  v9 = operator new(8u);
  *v9 = v3;
  v9[1] = &v23;
  v20 = v9;
  v21 = (void (*)(void))sub_17970CC;
  v22 = sub_1796FEC;
  v10 = operator new(0x14u);
  LODWORD(v11) = sub_1797320;
  *v10 = v3;
  v10[1] = &v23;
  HIDWORD(v11) = sub_1797108;
  v10[2] = &v24;
  v10[3] = v5;
  v10[4] = v4;
  v18 = v10;
  v19 = v11;
  v8(v7, &v20, &v18);
  if ( (_DWORD)v19 )
    ((void (*)(void))v19)();
  if ( v21 )
    v21();
  if ( v24 )
  {
    v12 = (Level *)Entity::getLevel(*((Entity **)v3 + 1));
    if ( Level::isClientSide(v12) == 1 )
    {
      (*(void (**)(void))(**((_DWORD **)v3 + 1) + 928))();
      v13 = (int)v23;
      v14 = *(void (**)(void))(**((_DWORD **)v3 + 1) + 1520);
      v23 = 0;
      v17 = v13;
      v14();
      if ( v17 )
        (*(void (**)(void))(*(_DWORD *)v17 + 4))();
      v17 = 0;
    }
  }
  v15 = v24;
  if ( v23 )
    (*(void (**)(void))(*(_DWORD *)v23 + 4))();
  return v15 != 0;
}


int __fastcall GameMode::tick(int result)
{
  *(_DWORD *)(result + 20) = *(_DWORD *)(result + 24);
  return result;
}


int __fastcall GameMode::toggleLongPickRange(int result)
{
  *(_BYTE *)(result + 40) ^= 1u;
  return result;
}


int __fastcall GameMode::getDestroyRate(GameMode *this, const Block *a2)
{
  GameMode *v2; // r4@1
  MobEffectInstance *v8; // r0@2
  MobEffectInstance *v13; // r0@4
  int result; // r0@5

  v2 = this;
  _R0 = Player::getDestroyProgress(*((Player **)this + 1), a2);
  __asm { VMOV            S16, R0 }
  if ( Mob::hasEffect(*((Mob **)v2 + 1), (const MobEffect *)MobEffect::DIG_SPEED) == 1 )
  {
    v8 = (MobEffectInstance *)Mob::getEffect(*((Mob **)v2 + 1), (const MobEffect *)MobEffect::DIG_SPEED);
    _R0 = MobEffectInstance::getAmplifier(v8) + 1;
    __asm
    {
      VLDR            D1, =1.20000005
      VMOV            S0, R0
      VMOV            R0, R1, D1
      VCVT.F64.S32    D0, S0
      VMOV            R2, R3, D0
    }
    _R0 = COERCE_UNSIGNED_INT64(pow(_R0, _R2));
      VCVT.F64.F32    D0, S16
      VMOV            D1, R0, R1
      VMUL.F64        D0, D1, D0
      VCVT.F32.F64    S16, D0
  }
  if ( Mob::hasEffect(*((Mob **)v2 + 1), (const MobEffect *)MobEffect::DIG_SLOWDOWN) == 1 )
    v13 = (MobEffectInstance *)Mob::getEffect(*((Mob **)v2 + 1), (const MobEffect *)MobEffect::DIG_SLOWDOWN);
    _R0 = MobEffectInstance::getAmplifier(v13) + 1;
      VLDR            D1, =0.699999988
  __asm { VMOV            R0, S16 }
  return result;
}


int __fastcall GameMode::getDestroyBlockPos(int result, int a2)
{
  *(_DWORD *)result = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 16);
  return result;
}
