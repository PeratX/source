

signed int __fastcall BeaconBlockEntity::isPaymentItem(BeaconBlockEntity *this, const ItemInstance *a2)
{
  BeaconBlockEntity *v2; // r4@1
  int v3; // r0@1
  bool v4; // zf@1
  signed int v5; // r0@6
  signed int result; // r0@9
  signed int v7; // r1@11

  v2 = this;
  v3 = *((_BYTE *)this + 15);
  v4 = v3 == 0;
  if ( v3 )
    v4 = *(_DWORD *)v2 == 0;
  if ( v4 || ItemInstance::isNull(v2) || !*((_BYTE *)v2 + 14) )
  {
    result = 0;
  }
  else
    v5 = ItemInstance::getId(v2);
    if ( v5 != *(_WORD *)(Item::mIronIngot + 18)
      && v5 != *(_WORD *)(Item::mGoldIngot + 18)
      && v5 != *(_WORD *)(Item::mDiamond + 18) )
    {
      v7 = 0;
      if ( v5 == *(_WORD *)(Item::mEmerald + 18) )
        v7 = 1;
      result = v7;
    }
    else
      result = 1;
  return result;
}


int __fastcall BeaconBlockEntity::BeaconBlockEntity(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  double v4; // r0@1
  unsigned int *v6; // r2@3
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v7, "beacon");
  BlockEntity::BlockEntity(v3, 21, v2);
  HIDWORD(v4) = v7;
  LODWORD(v4) = v7 - 12;
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        HIDWORD(v4) = __ldrex(v6);
      while ( __strex(HIDWORD(v4) - 1, v6) );
    }
    else
      HIDWORD(v4) = (*v6)--;
    if ( SHIDWORD(v4) <= 0 )
      j_j_j_j__ZdlPv_9((void *)LODWORD(v4));
  }
  LODWORD(v4) = v3 + 104;
  Container::Container(v4);
  *(_DWORD *)v3 = &loc_2708FA0;
  *(_DWORD *)(v3 + 104) = &off_2709038;
  *(_DWORD *)(v3 + 240) = 0;
  *(_DWORD *)(v3 + 244) = 0;
  *(_DWORD *)(v3 + 248) = 0;
  *(_DWORD *)(v3 + 232) = 0;
  *(_DWORD *)(v3 + 224) = 0;
  *(_DWORD *)(v3 + 228) = 0;
  *(_DWORD *)(v3 + 216) = 0;
  *(_DWORD *)(v3 + 220) = 0;
  *(_DWORD *)(v3 + 84) = 10;
  return v3;
}


signed int __fastcall BeaconBlockEntity::_setEffect(BeaconBlockEntity *this, int a2, int *a3, int *a4)
{
  int *v4; // r8@1
  int *v5; // r9@1
  int v6; // r5@1
  BeaconBlockEntity *v7; // r10@1
  signed int v8; // r1@1
  int v9; // r6@2
  int v10; // r0@2
  int v11; // r4@4
  BeaconBlockEntity *v12; // r0@5
  signed int result; // r0@9

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = this;
  BeaconBlockEntity::getTierEffects(this);
  v8 = *((_DWORD *)v7 + 58);
  if ( v8 < 1 )
  {
LABEL_9:
    result = 0;
  }
  else
    v9 = 0;
    v10 = dword_280E398;
    while ( *(_DWORD *)(v10 + 12 * v9 + 4) - *(_DWORD *)(v10 + 12 * v9) <= 0 )
    {
LABEL_8:
      if ( ++v9 >= v8 )
        goto LABEL_9;
    }
    v11 = 0;
    while ( 1 )
      v12 = (BeaconBlockEntity *)MobEffect::getId(*(MobEffect **)(*(_DWORD *)(v10 + 12 * v9) + 4 * v11));
      if ( v12 == (BeaconBlockEntity *)v6 )
        break;
      v10 = dword_280E398;
      if ( ++v11 >= (*(_DWORD *)(dword_280E398 + 12 * v9 + 4) - *(_DWORD *)(dword_280E398 + 12 * v9)) >> 2 )
      {
        v8 = *((_DWORD *)v7 + 58);
        goto LABEL_8;
      }
    *v5 = v6;
    *v4 = BeaconBlockEntity::_getEffectTier(v12, v6);
    result = 1;
  return result;
}


signed int __fastcall BeaconBlockEntity::_isSecondaryEffectValid(BeaconBlockEntity *this, int a2)
{
  int v2; // r4@1
  BeaconBlockEntity *v3; // r8@1
  signed int v4; // r1@1
  int v5; // r7@2
  int v6; // r0@2
  int v7; // r6@4
  signed int result; // r0@9
  int v9; // r1@12

  v2 = a2;
  v3 = this;
  BeaconBlockEntity::getTierEffects(this);
  v4 = *((_DWORD *)v3 + 58);
  if ( v4 < 1 )
  {
LABEL_9:
    result = 0;
  }
  else
    v5 = 0;
    v6 = dword_280E398;
    while ( *(_DWORD *)(v6 + 12 * v5 + 4) - *(_DWORD *)(v6 + 12 * v5) <= 0 )
    {
LABEL_8:
      if ( ++v5 >= v4 )
        goto LABEL_9;
    }
    v7 = 0;
    while ( MobEffect::getId(*(MobEffect **)(*(_DWORD *)(v6 + 12 * v5) + 4 * v7)) != v2 )
      v6 = dword_280E398;
      if ( ++v7 >= (*(_DWORD *)(dword_280E398 + 12 * v5 + 4) - *(_DWORD *)(dword_280E398 + 12 * v5)) >> 2 )
      {
        v4 = *((_DWORD *)v3 + 58);
        goto LABEL_8;
      }
    if ( *((_DWORD *)v3 + 61) == v2 )
      result = 1;
    else
      v9 = MobEffect::getId((MobEffect *)MobEffect::REGENERATION);
      result = 0;
      if ( v9 == v2 )
        result = 1;
  return result;
}


void __fastcall BeaconBlockEntity::tick(BeaconBlockEntity *this, BlockSource *a2)
{
  BlockSource *v2; // r9@1
  BeaconBlockEntity *v3; // r11@1
  int v9; // r0@1
  int v11; // r1@4
  int v12; // r2@4
  int v13; // r7@4
  int v14; // r0@4
  BlockSource *v15; // r4@5
  int *v16; // r5@5
  int v17; // r8@6
  signed int v18; // r3@7
  int v19; // r6@8
  int v20; // r0@8
  int v21; // r1@12
  int v22; // r0@12
  unsigned int v23; // r0@14
  __int64 v27; // r0@21
  int v28; // r7@21
  signed int v29; // r0@24
  signed int v30; // r0@24
  unsigned int v31; // r1@24
  unsigned int v32; // r2@26
  unsigned int v33; // r0@26
  char *v34; // r8@31
  _BYTE *v35; // r0@31
  _BYTE *v36; // r12@31
  char *v37; // r2@31
  _DWORD *v38; // r7@32
  char *v39; // lr@32
  int v40; // r3@32
  int v41; // r4@32
  int v42; // r5@32
  int v43; // r6@32
  int v44; // r7@34
  signed int v45; // r1@37
  int v46; // [sp+Ch] [bp-94h]@31
  signed int v47; // [sp+10h] [bp-90h]@24
  unsigned __int8 v48; // [sp+28h] [bp-78h]@5
  unsigned __int8 v49; // [sp+29h] [bp-77h]@14
  int v50; // [sp+2Ch] [bp-74h]@4
  int v51; // [sp+30h] [bp-70h]@4
  int v52; // [sp+34h] [bp-6Ch]@4

  v2 = a2;
  v3 = this;
  _R0 = *((_WORD *)a2 + 12);
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
    VSTR            S0, [R11,#0x3C]
  }
  BlockEntity::tick(v3, a2);
  v9 = *((_DWORD *)v3 + 60);
  _VF = __OFSUB__(v9--, 1);
  *((_DWORD *)v3 + 60) = v9;
  if ( (unsigned __int8)((v9 < 0) ^ _VF) | (v9 == 0) )
    *((_DWORD *)v3 + 60) = 80;
    BeaconBlockEntity::_checkShape(v3, v2);
    *((_DWORD *)v3 + 55) = *((_DWORD *)v3 + 54);
    if ( *((_DWORD *)v3 + 58) >= 1 )
    {
      _R0 = &Color::WHITE;
      __asm
      {
        VLDR            S26, [R0]
        VLDR            S24, [R0,#4]
        VLDR            S22, [R0,#8]
        VLDR            S20, [R0,#0xC]
      }
      v11 = *((_DWORD *)v3 + 9);
      v12 = *((_DWORD *)v3 + 10);
      v50 = *((_DWORD *)v3 + 8);
      v13 = v11 + 1;
      v51 = v11 + 1;
      v52 = v12;
      v14 = *((_WORD *)v2 + 12);
      if ( v11 < v14 )
        __asm { VMOV.F32        S18, #1.0 }
        v15 = (BlockSource *)&v48;
        v16 = &v50;
        __asm { VLDR            S16, =0.0039216 }
        while ( 1 )
        {
          v17 = v13;
          if ( v13 > (signed __int16)v14 )
            break;
          while ( 1 )
          {
            BlockSource::getBlockAndData(v15, v2, (int)v16);
            v19 = Block::mBlocks[v48];
            v20 = *(_BYTE *)(v19 + 4);
            if ( Block::mLightBlock[v20] >= (unsigned int)(unsigned __int8)Brightness::MAX
              && v20 != *(_BYTE *)(Block::mBedrock + 4) )
            {
              break;
            }
            if ( Block::isType((Block *)Block::mBlocks[v48], (const Block *)Block::mStainedGlass)
              || Block::isType((Block *)v19, (const Block *)Block::mStainedGlassPane) == 1 )
              v18 = 0;
              __asm { VMOV.F32        S19, S18 }
              v23 = DyePowderItem::COLOR_RGB[15 - v49];
              _R2 = (unsigned __int16)v23 >> 8;
              _R1 = (unsigned __int8)v23;
              __asm
              {
                VMOV            S0, R1
                VMOV            S2, R2
                VCVT.F32.S32    S0, S0
                VCVT.F32.S32    S2, S2
              }
              _R0 = (v23 >> 16) & 0xFF;
                VMOV            S4, R0
                VCVT.F32.S32    S4, S4
                VMUL.F32        S17, S0, S16
                VMUL.F32        S30, S2, S16
                VMUL.F32        S28, S4, S16
              goto LABEL_17;
            ++v51;
            v21 = *((_WORD *)v2 + 12);
            v22 = v17 + 1;
            _VF = __OFSUB__(v17, v21);
            _NF = v17++ - v21 < 0;
            if ( !(_NF ^ _VF) )
              v17 = v22;
              goto LABEL_16;
          }
          v18 = 1;
LABEL_16:
          __asm
            VMOV.F32        S19, S20
            VMOV.F32        S17, S22
            VMOV.F32        S30, S24
            VMOV.F32        S28, S26
LABEL_17:
          if ( v17 >= v13 )
            goto LABEL_21;
            VMOV.F32        S20, S19
            VMOV.F32        S22, S17
            VMOV.F32        S24, S30
            VMOV.F32        S26, S28
          if ( _ZF )
            goto LABEL_40;
LABEL_37:
          v45 = v51;
          v13 = v51++ + 1;
          LOWORD(v14) = *((_WORD *)v2 + 12);
          if ( v45 >= *((_WORD *)v2 + 12) )
            if ( (unsigned int)*((_QWORD *)v3 + 27) != *((_QWORD *)v3 + 27) >> 32 )
              BeaconBlockEntity::_applyEffects(v3, v2);
            return;
        }
        v18 = 0;
        __asm
          VMOV.F32        S28, S26
          VMOV.F32        S30, S24
        v17 = v13;
          VMOV.F32        S17, S22
          VMOV.F32        S19, S20
LABEL_21:
        v27 = *(_QWORD *)((char *)v3 + 220);
        v28 = v17 - v13 + 1;
        if ( (_DWORD)v27 == HIDWORD(v27) )
          v47 = v18;
          v29 = v27 - *((_DWORD *)v3 + 54);
          _ZF = v29 == 0;
          v30 = v29 >> 2;
          v31 = -858993459 * v30;
            v31 = 1;
          v33 = v31 + -858993459 * v30;
          v32 = v33;
          if ( v33 > 0xCCCCCCC )
            v33 = 214748364;
          _CF = v32 >= v31;
          LOWORD(v31) = -13107;
          if ( !_CF )
          HIWORD(v31) = 3276;
          if ( v33 >= v31 )
            sub_21E57F4();
          v46 = 5 * v33;
          v34 = (char *)operator new(20 * v33);
          v36 = (_BYTE *)(*((_QWORD *)v3 + 27) >> 32);
          v35 = (_BYTE *)*((_QWORD *)v3 + 27);
          *(_DWORD *)&v34[v36 - v35] = v28;
            VSTR            S26, [R2,#4]
            VSTR            S24, [R2,#8]
            VSTR            S22, [R2,#0xC]
            VSTR            S20, [R2,#0x10]
          v37 = v34;
          if ( !_ZF )
            do
              v38 = v35;
              v39 = v37;
              v35 += 20;
              v37 += 20;
              v40 = v38[1];
              v41 = v38[2];
              v42 = v38[3];
              v43 = v38[4];
              *(_DWORD *)v39 = *v38;
              *((_DWORD *)v39 + 1) = v40;
              *((_DWORD *)v39 + 2) = v41;
              *((_DWORD *)v39 + 3) = v42;
              *((_DWORD *)v39 + 4) = v43;
            while ( v36 != v35 );
            v35 = (_BYTE *)*((_DWORD *)v3 + 54);
          v44 = (int)(v37 + 20);
          if ( v35 )
            operator delete(v35);
          *((_DWORD *)v3 + 54) = v34;
          *((_DWORD *)v3 + 55) = v44;
          __asm { VMOV.F32        S24, S30 }
          v15 = (BlockSource *)&v48;
          __asm { VMOV.F32        S26, S28 }
          *((_DWORD *)v3 + 56) = &v34[4 * v46];
          v16 = &v50;
          if ( v47 )
LABEL_40:
            *((_DWORD *)v3 + 55) = *((_DWORD *)v3 + 54);
        else
          *(_DWORD *)v27 = v28;
            VSTR            S26, [R0,#4]
            VSTR            S24, [R0,#8]
            VSTR            S22, [R0,#0xC]
            VSTR            S20, [R0,#0x10]
          *((_DWORD *)v3 + 55) += 20;
        goto LABEL_37;
    }
}


void __fastcall BeaconBlockEntity::tick(BeaconBlockEntity *this, BlockSource *a2)
{
  BeaconBlockEntity::tick(this, a2);
}


signed int __fastcall BeaconBlockEntity::_saveClientSideState(BeaconBlockEntity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  BeaconBlockEntity *v3; // r5@1
  int v4; // r1@1
  MobEffect *v5; // r6@2
  int v6; // r2@3
  signed int result; // r0@4
  signed int v8; // r1@6
  void *v9; // r0@6
  MobEffect *v10; // r5@7
  int v11; // r2@8
  void *v12; // r0@10
  unsigned int *v13; // r2@12
  unsigned int *v14; // r2@16
  signed int v15; // r1@18
  int v16; // [sp+4h] [bp-2Ch]@7
  int v17; // [sp+Ch] [bp-24h]@2

  v2 = a2;
  v3 = this;
  if ( BlockEntity::save(this, a2) == 1 )
  {
    v5 = (MobEffect *)MobEffect::getById(*((MobEffect **)v3 + 61), v4);
    sub_21E94B4((void **)&v17, "primary");
    if ( v5 )
      v6 = MobEffect::getId(v5);
    else
      v6 = 0;
    CompoundTag::putInt((int)v2, (const void **)&v17, v6);
    v8 = v17;
    v9 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
    {
      v13 = (unsigned int *)(v17 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v13);
        while ( __strex(v8 - 1, v13) );
      }
      else
        v8 = (*v13)--;
      if ( v8 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    }
    v10 = (MobEffect *)MobEffect::getById(*((MobEffect **)v3 + 62), v8);
    sub_21E94B4((void **)&v16, "secondary");
    if ( v10 )
      v11 = MobEffect::getId(v10);
      v11 = 0;
    CompoundTag::putInt((int)v2, (const void **)&v16, v11);
    v12 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v16 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    result = 1;
  }
  else
    result = 0;
  return result;
}


signed int __fastcall BeaconBlockEntity::hasAlphaLayer(BeaconBlockEntity *this)
{
  return 1;
}


signed int __fastcall BeaconBlockEntity::isSecondaryAvailable(BeaconBlockEntity *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 58);
  result = 0;
  if ( v1 == 4 )
    result = 1;
  return result;
}


void *__fastcall BeaconBlockEntity::getItem(BeaconBlockEntity *this, int a2)
{
  return &ItemInstance::EMPTY_ITEM;
}


int *__fastcall BeaconBlockEntity::getTierEffects(BeaconBlockEntity *this)
{
  char v1; // r0@1
  unsigned __int64 v2; // ST08_8@3
  void *v3; // r0@3
  int v4; // ST00_4@3
  int v5; // ST04_4@3
  void *v6; // r0@3
  int v7; // r7@3
  void *v8; // r0@3
  int v9; // r7@3
  void *v10; // r0@3
  void *v12; // [sp+14h] [bp-44h]@3
  char *v13; // [sp+18h] [bp-40h]@3
  char *v14; // [sp+1Ch] [bp-3Ch]@3
  void *v15; // [sp+20h] [bp-38h]@3
  char *v16; // [sp+24h] [bp-34h]@3
  char *v17; // [sp+28h] [bp-30h]@3
  void *v18; // [sp+2Ch] [bp-2Ch]@3
  char *v19; // [sp+30h] [bp-28h]@3
  char *v20; // [sp+34h] [bp-24h]@3
  void *ptr; // [sp+38h] [bp-20h]@3
  char *v22; // [sp+3Ch] [bp-1Ch]@3
  char *v23; // [sp+40h] [bp-18h]@3
  int v24; // [sp+44h] [bp-14h]@3

  v1 = byte_280E388;
  __dmb();
  if ( !(v1 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_280E388) )
  {
    v2 = __PAIR__(MobEffect::DIG_SPEED, MobEffect::MOVEMENT_SPEED);
    v3 = operator new(8u);
    v12 = v3;
    v14 = (char *)v3 + 8;
    *(_QWORD *)v3 = v2;
    v4 = MobEffect::DAMAGE_RESISTANCE;
    v13 = (char *)v3 + 8;
    v5 = MobEffect::JUMP;
    v6 = operator new(8u);
    v15 = v6;
    v17 = (char *)v6 + 8;
    *(_DWORD *)v6 = v4;
    *((_DWORD *)v6 + 1) = v5;
    v16 = (char *)v6 + 8;
    v7 = MobEffect::DAMAGE_BOOST;
    v8 = operator new(4u);
    *(_DWORD *)v8 = v7;
    v18 = v8;
    v20 = (char *)v8 + 4;
    v19 = (char *)v8 + 4;
    v9 = MobEffect::REGENERATION;
    v10 = operator new(4u);
    ptr = v10;
    *(_DWORD *)v10 = v9;
    v23 = (char *)v10 + 4;
    v22 = (char *)v10 + 4;
    dword_280E398 = 0;
    dword_280E39C = 0;
    dword_280E3A0 = 0;
    dword_280E398 = (int)operator new(0x30u);
    dword_280E3A0 = dword_280E398 + 48;
    dword_280E39C = std::__uninitialized_copy<false>::__uninit_copy<std::vector<MobEffect *,std::allocator<MobEffect *>> const*,std::vector<MobEffect *,std::allocator<MobEffect *>>*>(
                      (int)&v12,
                      (int)&v24,
                      dword_280E398);
    if ( ptr )
      operator delete(ptr);
    if ( v18 )
      operator delete(v18);
    if ( v15 )
      operator delete(v15);
    if ( v12 )
      operator delete(v12);
    _cxa_atexit(std::vector<std::vector<MobEffect *,std::allocator<MobEffect *>>,std::allocator<std::vector<MobEffect *,std::allocator<MobEffect *>>>>::~vector);
    j___cxa_guard_release((unsigned int *)&byte_280E388);
  }
  return &dword_280E398;
}


void __fastcall BeaconBlockEntity::~BeaconBlockEntity(BeaconBlockEntity *this)
{
  BlockEntity *v1; // r4@1
  Container *v2; // r5@1
  void *v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &loc_2708FA0;
  *((_DWORD *)this + 26) = &off_2709038;
  v2 = (BeaconBlockEntity *)((char *)this + 104);
  v3 = (void *)*((_DWORD *)this + 54);
  if ( v3 )
    operator delete(v3);
  Container::~Container(v2);
  BlockEntity::~BlockEntity(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


signed int __fastcall BeaconBlockEntity::isActive(BeaconBlockEntity *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 58);
  result = 0;
  if ( v1 > 0 )
    result = 1;
  return result;
}


BlockEntity *__fastcall BeaconBlockEntity::~BeaconBlockEntity(BeaconBlockEntity *this)
{
  BlockEntity *v1; // r4@1
  Container *v2; // r5@1
  void *v3; // r0@1

  v1 = this;
  *(_DWORD *)this = &loc_2708FA0;
  *((_DWORD *)this + 26) = &off_2709038;
  v2 = (BeaconBlockEntity *)((char *)this + 104);
  v3 = (void *)*((_DWORD *)this + 54);
  if ( v3 )
    operator delete(v3);
  Container::~Container(v2);
  return j_j_j__ZN11BlockEntityD2Ev_0(v1);
}


int __fastcall BeaconBlockEntity::getMaxSelections(BeaconBlockEntity *this)
{
  unsigned int v1; // r0@1
  int result; // r0@2

  v1 = *((_DWORD *)this + 58) - 1;
  if ( v1 <= 3 )
    result = dword_2610A3C[v1];
  else
    result = 0;
  return result;
}


void __fastcall BeaconBlockEntity::_applyEffects(BeaconBlockEntity *this, BlockSource *a2)
{
  BeaconBlockEntity::_applyEffects(this, a2);
}


CompoundTag *__fastcall BeaconBlockEntity::getUpdatePacket(BeaconBlockEntity *this, BlockSource *a2)
{
  BeaconBlockEntity *v2; // r4@1
  BlockSource *v3; // r6@1
  _DWORD *v4; // r5@1
  int v5; // r3@1
  int v6; // r1@1
  int v7; // r2@1
  int v9; // [sp+0h] [bp-48h]@1
  char v10; // [sp+1Ch] [bp-2Ch]@1

  v2 = this;
  v3 = a2;
  CompoundTag::CompoundTag((int)&v9);
  BeaconBlockEntity::_saveClientSideState(v3, (CompoundTag *)&v9);
  v4 = operator new(0x38u);
  CompoundTag::CompoundTag((int)&v10, (int)&v9);
  v4[1] = 2;
  v4[2] = 1;
  v5 = (int)(v4 + 4);
  *((_BYTE *)v4 + 12) = 0;
  *v4 = &off_26E97EC;
  v6 = *((_DWORD *)v3 + 9);
  v7 = *((_DWORD *)v3 + 10);
  *(_DWORD *)v5 = *((_DWORD *)v3 + 8);
  *(_DWORD *)(v5 + 4) = v6;
  *(_DWORD *)(v5 + 8) = v7;
  CompoundTag::CompoundTag((int)(v4 + 7), (int)&v10);
  CompoundTag::~CompoundTag((CompoundTag *)&v10);
  *(_DWORD *)v2 = v4;
  return CompoundTag::~CompoundTag((CompoundTag *)&v9);
}


signed int __fastcall BeaconBlockEntity::getContainerSize(BeaconBlockEntity *this)
{
  return 1;
}


signed int __fastcall BeaconBlockEntity::isEffectAvailable(BeaconBlockEntity *this, int a2)
{
  BeaconBlockEntity *v2; // r4@1
  signed int v3; // r0@1
  signed int v4; // r1@1

  v2 = this;
  v3 = BeaconBlockEntity::_getEffectTier(this, a2);
  v4 = 0;
  if ( v3 <= *((_DWORD *)v2 + 58) )
    v4 = 1;
  return v4;
}


void __fastcall BeaconBlockEntity::_loadClientSideState(BeaconBlockEntity *this, const CompoundTag *a2)
{
  BeaconBlockEntity::_loadClientSideState(this, a2);
}


signed int __fastcall BeaconBlockEntity::getBeaconData(BeaconBlockEntity *this, BeaconBlockEntity *a2)
{
  BeaconBlockEntity *v2; // r5@1
  CompoundTag *v3; // r4@1

  v2 = a2;
  v3 = this;
  CompoundTag::CompoundTag((int)this);
  return BeaconBlockEntity::_saveClientSideState(v2, v3);
}


signed int __fastcall BeaconBlockEntity::_isEffectValid(BeaconBlockEntity *this, int a2)
{
  int v2; // r4@1
  BeaconBlockEntity *v3; // r8@1
  signed int v4; // r1@1
  int v5; // r7@2
  int v6; // r0@2
  int v7; // r6@4
  signed int result; // r0@9

  v2 = a2;
  v3 = this;
  BeaconBlockEntity::getTierEffects(this);
  v4 = *((_DWORD *)v3 + 58);
  if ( v4 < 1 )
  {
LABEL_9:
    result = 0;
  }
  else
    v5 = 0;
    v6 = dword_280E398;
    while ( *(_DWORD *)(v6 + 12 * v5 + 4) - *(_DWORD *)(v6 + 12 * v5) <= 0 )
    {
LABEL_8:
      if ( ++v5 >= v4 )
        goto LABEL_9;
    }
    v7 = 0;
    while ( MobEffect::getId(*(MobEffect **)(*(_DWORD *)(v6 + 12 * v5) + 4 * v7)) != v2 )
      v6 = dword_280E398;
      if ( ++v7 >= (*(_DWORD *)(dword_280E398 + 12 * v5 + 4) - *(_DWORD *)(dword_280E398 + 12 * v5)) >> 2 )
      {
        v4 = *((_DWORD *)v3 + 58);
        goto LABEL_8;
      }
    result = 1;
  return result;
}


void __fastcall BeaconBlockEntity::_loadClientSideState(BeaconBlockEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  BeaconBlockEntity *v3; // r7@1
  signed int v4; // r6@1
  void *v5; // r0@1
  void *v6; // r0@3
  signed int v7; // r6@4
  void *v8; // r0@4
  void *v9; // r0@6
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  unsigned int *v12; // r2@12
  signed int v13; // r1@14
  unsigned int *v14; // r2@20
  signed int v15; // r1@22
  unsigned int *v16; // r2@28
  signed int v17; // r1@30
  int v18; // [sp+4h] [bp-34h]@6
  int v19; // [sp+Ch] [bp-2Ch]@4
  int v20; // [sp+14h] [bp-24h]@3
  int v21; // [sp+1Ch] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  BlockEntity::load(this, a2);
  sub_21E94B4((void **)&v21, "primary");
  v4 = CompoundTag::contains((int)v2, (const void **)&v21);
  v5 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( v4 == 1 )
    sub_21E94B4((void **)&v20, "primary");
    *((_DWORD *)v3 + 61) = CompoundTag::getInt((int)v2, (const void **)&v20);
    v6 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v20 - 4);
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
        j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v19, "secondary");
  v7 = CompoundTag::contains((int)v2, (const void **)&v19);
  v8 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v19 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  if ( v7 == 1 )
    sub_21E94B4((void **)&v18, "secondary");
    *((_DWORD *)v3 + 62) = CompoundTag::getInt((int)v2, (const void **)&v18);
    v9 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v18 - 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
}


int *__fastcall BeaconBlockEntity::getEffects(BeaconBlockEntity *this)
{
  char v1; // r0@1
  int v2; // ST00_4@3
  int v3; // ST04_4@3
  int v4; // ST08_4@3
  int v5; // ST0C_4@3
  int v6; // ST10_4@3
  int v7; // ST14_4@3
  char *v8; // r0@3

  v1 = byte_280E384;
  __dmb();
  if ( !(v1 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_280E384) )
  {
    v2 = MobEffect::MOVEMENT_SPEED;
    v3 = MobEffect::DIG_SPEED;
    v4 = MobEffect::DAMAGE_RESISTANCE;
    v5 = MobEffect::JUMP;
    v6 = MobEffect::DAMAGE_BOOST;
    v7 = MobEffect::REGENERATION;
    dword_280E38C = 0;
    unk_280E390 = 0;
    dword_280E394 = 0;
    v8 = (char *)operator new(0x18u);
    dword_280E38C = (int)v8;
    dword_280E394 = (int)(v8 + 24);
    *(_DWORD *)v8 = v2;
    *((_DWORD *)v8 + 1) = v3;
    *((_DWORD *)v8 + 2) = v4;
    *((_DWORD *)v8 + 3) = v5;
    *((_DWORD *)v8 + 4) = v6;
    *((_DWORD *)v8 + 5) = v7;
    unk_280E390 = v8 + 24;
    _cxa_atexit(std::vector<MobEffect *,std::allocator<MobEffect *>>::~vector);
    j___cxa_guard_release((unsigned int *)&byte_280E384);
  }
  return &dword_280E38C;
}


void __fastcall BeaconBlockEntity::_applyEffects(BeaconBlockEntity *this, BlockSource *a2)
{
  BeaconBlockEntity *v2; // r11@1
  BlockSource *v3; // r4@1
  Level *v4; // r0@2
  int v5; // r10@3
  int v6; // r6@3
  BeaconBlockEntity *v7; // r0@3
  signed int v8; // r1@3
  int v9; // r5@4
  int v10; // r7@6
  BeaconBlockEntity *v11; // r8@11
  int v12; // r9@11
  int v13; // r5@14
  signed int v14; // r1@14
  int v15; // r4@15
  int v16; // r0@15
  int v17; // r6@17
  MobEffect **v18; // r7@22
  signed int v19; // r4@28
  int v20; // r5@28
  unsigned int v21; // r1@28
  unsigned int v22; // r2@30
  unsigned int v23; // r0@30
  char *v29; // r0@44
  int v30; // r7@44
  _DWORD *v31; // r0@44
  __int64 v32; // r1@44
  __int64 v33; // r0@44
  int v34; // r5@47
  MobEffect **v35; // r6@53
  int v36; // r0@55
  BeaconBlockEntity *v37; // r8@55
  __int64 v38; // r10@55
  BlockSource *v39; // [sp+8h] [bp-68h]@3
  MobEffect **v40; // [sp+Ch] [bp-64h]@44
  char v41; // [sp+10h] [bp-60h]@55
  _DWORD *v42; // [sp+20h] [bp-50h]@44
  __int64 v43; // [sp+28h] [bp-48h]@44
  void *ptr; // [sp+30h] [bp-40h]@44
  void *v45; // [sp+34h] [bp-3Ch]@44
  int v46; // [sp+38h] [bp-38h]@44
  char v47; // [sp+3Ch] [bp-34h]@44
  float v48; // [sp+48h] [bp-28h]@44

  v2 = this;
  v3 = a2;
  if ( *((_DWORD *)this + 58) )
  {
    v4 = (Level *)BlockSource::getLevel(a2);
    if ( !Level::isClientSide(v4) )
    {
      v5 = *((_DWORD *)v2 + 58);
      v6 = *((_DWORD *)v2 + 61);
      v39 = v3;
      v7 = (BeaconBlockEntity *)BeaconBlockEntity::getTierEffects(0);
      v8 = *((_DWORD *)v2 + 58);
      if ( v8 < 1 )
      {
LABEL_11:
        v11 = 0;
        v12 = 0;
      }
      else
        v9 = 0;
        v7 = (BeaconBlockEntity *)dword_280E398;
        while ( *((_DWORD *)v7 + 3 * v9 + 1) - *((_DWORD *)v7 + 3 * v9) <= 0 )
        {
LABEL_10:
          if ( ++v9 >= v8 )
            goto LABEL_11;
        }
        v10 = 0;
        while ( MobEffect::getId(*(MobEffect **)(*((_DWORD *)v7 + 3 * v9) + 4 * v10)) != v6 )
          v7 = (BeaconBlockEntity *)dword_280E398;
          if ( ++v10 >= (*(_DWORD *)(dword_280E398 + 12 * v9 + 4) - *(_DWORD *)(dword_280E398 + 12 * v9)) >> 2 )
          {
            v8 = *((_DWORD *)v2 + 58);
            goto LABEL_10;
          }
        v7 = (BeaconBlockEntity *)operator new(4u);
        *(_DWORD *)v7 = *((_DWORD *)v2 + 61);
        v12 = (int)v7 + 4;
        v11 = v7;
      if ( v5 == 4 )
        v13 = *((_DWORD *)v2 + 62);
        BeaconBlockEntity::getTierEffects(v7);
        v14 = *((_DWORD *)v2 + 58);
        if ( v14 < 1 )
          v18 = (MobEffect **)v11;
        else
          v15 = 0;
          v16 = dword_280E398;
          while ( *(_DWORD *)(v16 + 12 * v15 + 4) - *(_DWORD *)(v16 + 12 * v15) <= 0 )
LABEL_21:
            if ( ++v15 >= v14 )
            {
              v18 = (MobEffect **)v11;
              goto LABEL_43;
            }
          v17 = 0;
          while ( MobEffect::getId(*(MobEffect **)(*(_DWORD *)(v16 + 12 * v15) + 4 * v17)) != v13 )
            v16 = dword_280E398;
            if ( ++v17 >= (*(_DWORD *)(dword_280E398 + 12 * v15 + 4) - *(_DWORD *)(dword_280E398 + 12 * v15)) >> 2 )
              v14 = *((_DWORD *)v2 + 58);
              goto LABEL_21;
          if ( *((_DWORD *)v2 + 61) != v13 && MobEffect::getId((MobEffect *)MobEffect::REGENERATION) != v13 )
            v18 = (MobEffect **)v11;
          else
            v19 = v12 - (_DWORD)v11;
            v18 = 0;
            v20 = (v12 - (signed int)v11) >> 2;
            v21 = (v12 - (signed int)v11) >> 2;
            if ( !v20 )
              v21 = 1;
            v22 = v21 + (v19 >> 2);
            v23 = v21 + (v19 >> 2);
            if ( 0 != v22 >> 30 )
              v23 = 0x3FFFFFFF;
            if ( v22 < v21 )
            if ( v23 )
              if ( v23 >= 0x40000000 )
                sub_21E57F4();
              v18 = (MobEffect **)operator new(4 * v23);
            v18[v20] = (MobEffect *)*((_DWORD *)v2 + 62);
            if ( v20 )
              _aeabi_memmove4(v18, v11);
            v12 = (int)&v18[v20 + 1];
            if ( v11 )
              operator delete((void *)v11);
        v18 = (MobEffect **)v11;
LABEL_43:
      if ( v18 != (MobEffect **)v12 )
        __asm { VMOV.F32        S0, #1.0 }
        _R0 = (char *)&unk_2610A4C + 4 * *((_DWORD *)v2 + 58);
        __asm
          VLDR            S2, [R0,#-4]
          VADD.F32        S0, S2, S0
          VSTR            S0, [SP,#0x70+var_28]
        v29 = BlockEntity::getPosition(v2);
        Vec3::Vec3((int)&v47, (int)v29);
        v40 = v18;
        ptr = 0;
        v45 = 0;
        v46 = 0;
        v30 = BlockSource::getDimension(v39);
        v31 = operator new(0x10u);
        LODWORD(v32) = sub_189AABA;
        *v31 = v2;
        v31[1] = &v47;
        HIDWORD(v32) = sub_189A9AA;
        v31[2] = &v48;
        v31[3] = &ptr;
        v42 = v31;
        v43 = v32;
        Dimension::forEachPlayer(v30, (int)&v42);
        if ( (_DWORD)v43 )
          ((void (*)(void))v43)();
        if ( (unsigned int)((v12 - (signed int)v40) >> 2) < 2 )
          v34 = 0;
          v33 = *(_QWORD *)v40;
          if ( (_DWORD)v33 == HIDWORD(v33) )
            v12 -= 4;
            if ( *((_DWORD *)v2 + 58) == 4 )
              v34 = 1;
        if ( v40 != (MobEffect **)v12 )
          v35 = v40;
          do
            LODWORD(v33) = MobEffect::getById(*v35, SHIDWORD(v33));
            if ( (_DWORD)v33 )
              v36 = MobEffect::getId((MobEffect *)v33);
              MobEffectInstance::MobEffectInstance((int)&v41, v36, 40 * *((_DWORD *)v2 + 58) + 180, v34, 1, 1);
              v37 = v2;
              v38 = *(_QWORD *)&ptr;
              if ( ptr != v45 )
              {
                do
                {
                  Mob::addEffect(*(Mob **)v38, (const MobEffectInstance *)&v41);
                  LODWORD(v38) = v38 + 4;
                }
                while ( HIDWORD(v38) != (_DWORD)v38 );
              }
              v2 = v37;
            ++v35;
          while ( v35 != (MobEffect **)v12 );
        if ( ptr )
          operator delete(ptr);
        v18 = v40;
      if ( v18 )
        operator delete(v18);
    }
  }
}


__int64 __fastcall BeaconBlockEntity::_checkShape(BeaconBlockEntity *this, BlockSource *a2)
{
  BlockSource *v3; // r11@1
  int v4; // r7@1
  int v5; // r4@1
  int v6; // r8@2
  int v7; // r0@2
  int v8; // r2@2
  int v9; // r6@2
  int v10; // r10@2
  int v11; // r1@2
  int v12; // r9@3
  int v13; // r7@3
  Block *v14; // r4@4
  Level *v15; // r0@11
  int v22; // r5@13
  _DWORD *v23; // r0@13
  __int64 result; // r0@16
  int v25; // [sp+0h] [bp-80h]@0
  int v26; // [sp+4h] [bp-7Ch]@0
  int v27; // [sp+8h] [bp-78h]@0
  int v28; // [sp+10h] [bp-70h]@2
  BeaconBlockEntity *v29; // [sp+14h] [bp-6Ch]@1
  signed int v30; // [sp+18h] [bp-68h]@2
  int v31; // [sp+1Ch] [bp-64h]@2
  int v32; // [sp+20h] [bp-60h]@3
  _DWORD *v33; // [sp+30h] [bp-50h]@13
  void (*v34)(void); // [sp+38h] [bp-48h]@13
  signed int (__fastcall *v35)(int *, Entity *); // [sp+3Ch] [bp-44h]@13
  char v36; // [sp+40h] [bp-40h]@13

  _R6 = this;
  *((_DWORD *)this + 58) = 0;
  v3 = a2;
  v4 = -1;
  v5 = 1;
  v29 = this;
  do
  {
    v30 = v5;
    v28 = v4;
    v6 = 2 * v5 | 1;
    v7 = *((_DWORD *)_R6 + 8);
    v8 = *((_DWORD *)_R6 + 10);
    v9 = *((_DWORD *)_R6 + 9) - v5;
    v10 = v8 + v4;
    v11 = 0;
    v31 = v7 + v4;
    while ( 2 )
    {
      v12 = 0;
      v32 = v11;
      v13 = v31 + v11;
      do
      {
        v14 = (Block *)BlockSource::getBlock(v3, v13, v9, v10 + v12);
        if ( !Block::isType(v14, (const Block *)Block::mEmeraldBlock)
          && !Block::isType(v14, (const Block *)Block::mGoldBlock)
          && !Block::isType(v14, (const Block *)Block::mDiamondBlock)
          && !Block::isType(v14, (const Block *)Block::mIronBlock) )
        {
          _R6 = v29;
          *((_DWORD *)v29 + 58) = v30 - 1;
          goto LABEL_16;
        }
        ++v12;
      }
      while ( v12 < v6 );
      v11 = v32 + 1;
      if ( v32 + 1 < v6 )
        continue;
      break;
    }
    _R6 = v29;
    v4 = v28 - 1;
    v5 = v30 + 1;
  }
  while ( v30 <= 3 );
  *((_DWORD *)v29 + 58) = 4;
  v15 = (Level *)BlockSource::getLevel(v3);
  if ( !Level::isClientSide(v15) && (signed int)*((_QWORD *)v29 + 29) > (signed int)(*((_QWORD *)v29 + 29) >> 32) )
    __asm
      VLDR            S0, [R6,#0x20]
      VMOV.F32        S6, #-10.0
      VLDR            S2, [R6,#0x24]
      VMOV.F32        S8, #-7.0
      VLDR            S4, [R6,#0x28]
      VCVT.F32.S32    S0, S0
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VADD.F32        S10, S0, S6
      VADD.F32        S8, S2, S8
      VADD.F32        S6, S4, S6
      VMOV            R1, S10
      VMOV            R2, S8
      VMOV            R3, S6
      VMOV.F32        S6, #10.0
      VMOV.F32        S8, #7.0
      VADD.F32        S0, S0, S6
      VADD.F32        S4, S4, S6
      VADD.F32        S2, S2, S8
      VSTR            S0, [SP,#0x80+var_80]
      VSTR            S2, [SP,#0x80+var_7C]
      VSTR            S4, [SP,#0x80+var_78]
    AABB::AABB(COERCE_FLOAT(&v36), _R1, _R2, v25, v26, v27);
    v22 = BlockSource::getDimension(v3);
    v23 = operator new(8u);
    *v23 = v29;
    v23[1] = &v36;
    v33 = v23;
    v34 = (void (*)(void))sub_189A970;
    v35 = sub_189A730;
    Dimension::forEachPlayer(v22, (int)&v33);
    if ( v34 )
      v34();
LABEL_16:
  result = *((_QWORD *)_R6 + 29);
  if ( (signed int)result > SHIDWORD(result) )
    *((_DWORD *)_R6 + 59) = result;
  return result;
}


signed int __fastcall BeaconBlockEntity::setPrimaryEffect(BeaconBlockEntity *this, int a2)
{
  int v2; // r5@1
  BeaconBlockEntity *v3; // r8@1
  BeaconBlockEntity *v4; // r0@1
  signed int v5; // r1@1
  int v6; // r7@2
  int v7; // r0@2
  int v8; // r6@4
  BeaconBlockEntity *v9; // r0@5
  signed int result; // r0@9

  v2 = a2;
  v3 = this;
  v4 = (BeaconBlockEntity *)BlockEntity::setChanged(this);
  BeaconBlockEntity::getTierEffects(v4);
  v5 = *((_DWORD *)v3 + 58);
  if ( v5 < 1 )
  {
LABEL_9:
    result = 0;
  }
  else
    v6 = 0;
    v7 = dword_280E398;
    while ( *(_DWORD *)(v7 + 12 * v6 + 4) - *(_DWORD *)(v7 + 12 * v6) <= 0 )
    {
LABEL_8:
      if ( ++v6 >= v5 )
        goto LABEL_9;
    }
    v8 = 0;
    while ( 1 )
      v9 = (BeaconBlockEntity *)MobEffect::getId(*(MobEffect **)(*(_DWORD *)(v7 + 12 * v6) + 4 * v8));
      if ( v9 == (BeaconBlockEntity *)v2 )
        break;
      v7 = dword_280E398;
      if ( ++v8 >= (*(_DWORD *)(dword_280E398 + 12 * v6 + 4) - *(_DWORD *)(dword_280E398 + 12 * v6)) >> 2 )
      {
        v5 = *((_DWORD *)v3 + 58);
        goto LABEL_8;
      }
    *((_DWORD *)v3 + 61) = v2;
    *((_DWORD *)v3 + 63) = BeaconBlockEntity::_getEffectTier(v9, v2);
    result = 1;
  return result;
}


signed int __fastcall BeaconBlockEntity::_getEffectTier(BeaconBlockEntity *this, int a2)
{
  int v2; // r4@1
  int v3; // r0@1
  int v4; // r5@2
  int v5; // r5@6
  int v6; // r5@10
  int v7; // r5@14
  signed int result; // r0@17

  v2 = a2;
  BeaconBlockEntity::getTierEffects(this);
  v3 = dword_280E398;
  if ( (signed int)((*(_QWORD *)dword_280E398 >> 32) - *(_QWORD *)dword_280E398) <= 0 )
  {
LABEL_5:
    if ( (signed int)((*(_QWORD *)(v3 + 12) >> 32) - *(_QWORD *)(v3 + 12)) <= 0 )
    {
LABEL_9:
      if ( (signed int)((*(_QWORD *)(v3 + 24) >> 32) - *(_QWORD *)(v3 + 24)) < 1 )
      {
LABEL_13:
        if ( (signed int)((*(_QWORD *)(v3 + 36) >> 32) - *(_QWORD *)(v3 + 36)) < 1 )
        {
          result = -1;
        }
        else
          v7 = 0;
          while ( MobEffect::getId(*(MobEffect **)(*(_DWORD *)(v3 + 36) + 4 * v7)) != v2 )
          {
            v3 = dword_280E398;
            if ( ++v7 >= (signed int)((*(_QWORD *)(dword_280E398 + 36) >> 32) - *(_QWORD *)(dword_280E398 + 36)) >> 2 )
              return -1;
          }
          result = 4;
      }
      else
        v6 = 0;
        while ( MobEffect::getId(*(MobEffect **)(*(_DWORD *)(v3 + 24) + 4 * v6)) != v2 )
          v3 = dword_280E398;
          if ( ++v6 >= (signed int)((*(_QWORD *)(dword_280E398 + 24) >> 32) - *(_QWORD *)(dword_280E398 + 24)) >> 2 )
            goto LABEL_13;
        result = 3;
    }
    else
      v5 = 0;
      while ( MobEffect::getId(*(MobEffect **)(*(_DWORD *)(v3 + 12) + 4 * v5)) != v2 )
        v3 = dword_280E398;
        if ( ++v5 >= (signed int)((*(_QWORD *)(dword_280E398 + 12) >> 32) - *(_QWORD *)(dword_280E398 + 12)) >> 2 )
          goto LABEL_9;
      result = 2;
  }
  else
    v4 = 0;
    while ( MobEffect::getId(*(MobEffect **)(*(_DWORD *)v3 + 4 * v4)) != v2 )
      v3 = dword_280E398;
      if ( ++v4 >= (signed int)((*(_QWORD *)dword_280E398 >> 32) - *(_QWORD *)dword_280E398) >> 2 )
        goto LABEL_5;
    result = 1;
  return result;
}


signed int __fastcall BeaconBlockEntity::setSecondaryEffect(BeaconBlockEntity *this, int a2)
{
  int v2; // r5@1
  BeaconBlockEntity *v3; // r9@1
  int *v4; // r0@1
  signed int v5; // r1@1
  int v6; // r7@2
  int v7; // r6@4
  BeaconBlockEntity *v8; // r0@5
  signed int v9; // r8@9
  int v10; // r6@11
  signed int v11; // r1@11
  int v12; // r5@12
  int v13; // r0@12
  int v14; // r7@14

  v2 = a2;
  v3 = this;
  v4 = BeaconBlockEntity::getTierEffects(this);
  v5 = *((_DWORD *)v3 + 58);
  if ( v5 < 1 )
  {
LABEL_9:
    v9 = 0;
  }
  else
    v6 = 0;
    v4 = (int *)dword_280E398;
    while ( v4[3 * v6 + 1] - v4[3 * v6] <= 0 )
    {
LABEL_8:
      if ( ++v6 >= v5 )
        goto LABEL_9;
    }
    v7 = 0;
    while ( 1 )
      v8 = (BeaconBlockEntity *)MobEffect::getId(*(MobEffect **)(v4[3 * v6] + 4 * v7));
      if ( v8 == (BeaconBlockEntity *)v2 )
        break;
      v4 = (int *)dword_280E398;
      if ( ++v7 >= (*(_DWORD *)(dword_280E398 + 12 * v6 + 4) - *(_DWORD *)(dword_280E398 + 12 * v6)) >> 2 )
      {
        v5 = *((_DWORD *)v3 + 58);
        goto LABEL_8;
      }
    *((_DWORD *)v3 + 62) = v2;
    v4 = (int *)BeaconBlockEntity::_getEffectTier(v8, v2);
    *((_DWORD *)v3 + 64) = v4;
    v9 = 1;
  v10 = *((_DWORD *)v3 + 62);
  BeaconBlockEntity::getTierEffects((BeaconBlockEntity *)v4);
  v11 = *((_DWORD *)v3 + 58);
  if ( v11 < 1 )
    goto LABEL_22;
  v12 = 0;
  v13 = dword_280E398;
  while ( *(_DWORD *)(v13 + 12 * v12 + 4) - *(_DWORD *)(v13 + 12 * v12) <= 0 )
LABEL_18:
    if ( ++v12 >= v11 )
      goto LABEL_22;
  v14 = 0;
  while ( MobEffect::getId(*(MobEffect **)(*(_DWORD *)(v13 + 12 * v12) + 4 * v14)) != v10 )
    v13 = dword_280E398;
    if ( ++v14 >= (*(_DWORD *)(dword_280E398 + 12 * v12 + 4) - *(_DWORD *)(dword_280E398 + 12 * v12)) >> 2 )
      v11 = *((_DWORD *)v3 + 58);
      goto LABEL_18;
  if ( *((_DWORD *)v3 + 61) != v10 && MobEffect::getId((MobEffect *)MobEffect::REGENERATION) != v10 )
LABEL_22:
    *((_DWORD *)v3 + 62) = 0;
  return v9;
}


void __fastcall BeaconBlockEntity::~BeaconBlockEntity(BeaconBlockEntity *this)
{
  BeaconBlockEntity::~BeaconBlockEntity(this);
}


signed int __fastcall BeaconBlockEntity::getMaxStackSize(BeaconBlockEntity *this)
{
  return 64;
}
