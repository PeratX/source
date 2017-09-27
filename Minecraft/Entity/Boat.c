

signed int __fastcall Boat::addRider(Boat *this, Entity *a2)
{
  Entity *v2; // r4@1
  signed int result; // r0@1

  v2 = a2;
  Entity::addRider(this, a2);
  result = -1028390912;
  *((_DWORD *)v2 + 33) = -1028390912;
  *((_DWORD *)v2 + 31) = -1028390912;
  return result;
}


int __fastcall Boat::getRowingTime(Entity *a1, int a2)
{
  int v2; // r5@1
  Entity *v3; // r4@1
  Level *v4; // r0@1
  int result; // r0@3
  int v6; // r1@4

  v2 = a2;
  v3 = a1;
  v4 = (Level *)Entity::getLevel(a1);
  if ( Level::isClientSide(v4) == 1 && Entity::isControlledByLocalInstance(v3) )
  {
    result = *((_DWORD *)v3 + 5 * v2 + 865);
  }
  else
    v6 = 14;
    if ( !v2 )
      v6 = 13;
    result = j_j_j__ZNK17SynchedEntityData8getFloatEt_0((Entity *)((char *)v3 + 176), v6);
  return result;
}


Boat *__fastcall Boat::_float(Boat *this)
{
  Level *v6; // r0@1
  char *v7; // r0@1
  unsigned int v8; // r0@1
  BlockSource *v10; // r8@3
  int *v11; // r6@3
  int *v12; // r7@3
  int v13; // r0@4
  int v16; // r0@5
  int *v18; // r0@12
  Block *v19; // r0@13
  int v20; // r0@13
  signed int v21; // r0@14
  Boat *result; // r0@19
  float *v23; // r1@20
  float v24; // [sp+0h] [bp-70h]@21
  float v25; // [sp+4h] [bp-6Ch]@20
  int v26; // [sp+8h] [bp-68h]@13
  int v27; // [sp+Ch] [bp-64h]@13
  int v28; // [sp+10h] [bp-60h]@13
  int v29; // [sp+14h] [bp-5Ch]@12
  int v30; // [sp+18h] [bp-58h]@12
  int v31; // [sp+1Ch] [bp-54h]@12
  int v32; // [sp+20h] [bp-50h]@3
  int v33; // [sp+24h] [bp-4Ch]@3
  int v34; // [sp+28h] [bp-48h]@3
  char v35; // [sp+2Ch] [bp-44h]@3
  float v36; // [sp+30h] [bp-40h]@3
  int v37; // [sp+34h] [bp-3Ch]@3

  _R4 = this;
  __asm
  {
    VLDR            S0, [R4,#0x6C]
    VLDR            S2, [R4,#0x74]
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VADD.F32        S0, S2, S0
    VSQRT.F32       S16, S0
  }
  v6 = (Level *)Entity::getLevel(this);
    VMOV.F32        S0, #30.0
    VMUL.F32        S20, S16, S0
  v7 = Level::getRandom(v6);
  v8 = Random::_genRandInt32((Random *)v7);
    VLDR            S0, =300.0
    VMOV.F32        S2, #10.0
    VMUL.F32        S0, S16, S0
    VMOV.F32        S18, #1.0
    VLDR            S16, =0.05
  _R5 = (int)_R4 + 3504;
    VADD.F32        S0, S0, S2
    VADD.F32        S4, S20, S18
  if ( v8 == 30 * (v8 / 0x1E) )
    __asm { VMOVEQ.F32      S4, S0 }
    VLDR            D1, [R5]
    VMUL.F32        S0, S4, S16
    VCVT.F64.F32    D0, S0
    VADD.F64        D0, D0, D1
    VSTR            D0, [R5]
  v10 = (BlockSource *)Entity::getRegion(_R4);
  BlockPos::BlockPos((int)&v35, (int)_R4 + 72);
  v11 = (int *)BlockSource::getMaterial(v10, (const BlockPos *)&v35);
  v32 = *(_DWORD *)&v35;
  v33 = LODWORD(v36) + 1;
  v34 = v37;
  v12 = (int *)BlockSource::getMaterial(v10, (const BlockPos *)&v32);
  if ( Material::isType(v11, 5) == 1 )
    v13 = Material::getMaterial(5);
    if ( Material::operator!=((int)v12, v13) == 1 )
    {
      __asm
      {
        VLDR            D0, [R5]
        VMOV.F32        S18, #1.0
        VLDR            S2, [R4,#0x4C]
        VMOV            R0, R1, D0
        VLDR            S0, [SP,#0x70+var_40]
        VCVT.F32.S32    S20, S0
        VSUB.F32        S22, S18, S2
      }
      _R0 = COERCE_UNSIGNED_INT64(sin(_R0));
        VMOV            D0, R0, R1
        VLDR            S4, =0.9
        VADD.F32        S2, S22, S20
        VCVT.F32.F64    S0, D0
      *((_DWORD *)_R4 + 874) = 1063675494;
      v16 = 0;
        VMUL.F32        S2, S2, S4
        VLDR            S4, =0.1
        VADD.F32        S0, S0, S18
        VLDR            S6, =0.035
        VADD.F32        S18, S2, S4
        VMUL.F32        S0, S0, S6
LABEL_9:
      *((_DWORD *)_R4 + 872) = v16;
      _R6 = (int *)((char *)_R4 + 3496);
      goto LABEL_19;
    }
  if ( Material::isType(v11, 5) == 1 && Material::isType(v12, 5) == 1 )
    __asm { VLDR            S0, =0.0 }
    *((_DWORD *)_R4 + 874) = 1063675494;
    v16 = *((_DWORD *)_R4 + 872) + 1;
    goto LABEL_9;
  if ( !Material::isType(v11, 0) && !Material::isType(v11, 20) )
    __asm { VLDR            S18, =0.0 }
    _R6 = (int *)((char *)_R4 + 3496);
    goto LABEL_18;
  v29 = *(_DWORD *)&v35;
  v30 = LODWORD(v36) - 1;
  v31 = v37;
  v18 = (int *)BlockSource::getMaterial(v10, (const BlockPos *)&v29);
  _R6 = (int *)((char *)_R4 + 3496);
  *((_DWORD *)_R4 + 874) = 1065353216;
  if ( *((_BYTE *)_R4 + 216) )
    v26 = *(_DWORD *)&v35;
    v27 = LODWORD(v36) - 1;
    v28 = v37;
    v19 = (Block *)BlockSource::getBlock(v10, (const BlockPos *)&v26);
    v20 = Block::getFriction(v19);
LABEL_16:
    *_R6 = v20;
  v21 = Material::isType(v18, 5);
  __asm { VLDR            S18, =0.0 }
  if ( v21 == 1 )
    v20 = 1063675494;
    goto LABEL_16;
LABEL_18:
  __asm { VMOV.F32        S0, S18 }
LABEL_19:
  __asm { VLDR            S2, =-0.04 }
  result = (Boat *)((char *)_R4 + 3492);
    VLDR            S4, [R4,#0x70]
    VCMPE.F32       S18, #0.0
    VLDR            S8, =0.98
    VADD.F32        S2, S4, S2
    VMRS            APSR_nzcv, FPSCR
    VSTR            S2, [R4,#0x70]
    VMUL.F32        S8, S2, S8
    VLDR            S4, [R6]
    VLDR            S6, [R4,#0x6C]
    VMUL.F32        S6, S6, S4
    VSTR            S6, [R4,#0x6C]
    VSTR            S8, [R4,#0x70]
    VLDR            S6, [R4,#0x74]
    VSTR            S6, [R4,#0x74]
    VLDR            S6, [R0]
    VMUL.F32        S4, S6, S4
    VSTR            S4, [R0]
  if ( !_ZF )
    __asm
      VLDR            S4, =-0.1
      VLDR            S6, =0.686
    v23 = &v25;
      VADD.F32        S4, S18, S4
      VMUL.F32        S2, S2, S6
      VSUB.F32        S0, S4, S0
      VLDR            S4, =0.15
      VADD.F32        S2, S2, S16
      VMUL.F32        S0, S0, S4
      VSTR            S2, [SP,#0x70+var_70]
      VCMPE.F32       S0, S2
      VSTR            S0, [SP,#0x70+var_6C]
      VMRS            APSR_nzcv, FPSCR
    if ( !(_NF ^ _VF) )
      v23 = &v24;
    result = *(Boat **)v23;
    *((float *)_R4 + 28) = *v23;
  return result;
}


void __fastcall Boat::~Boat(Boat *this)
{
  Entity *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26F1F7C;
  v2 = *((_DWORD *)this + 853);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  Entity::~Entity(v1);
  operator delete((void *)v1);
}


int __fastcall Boat::_paddleForce(int a1, int a2)
{
  int result; // r0@1

  __asm { VLDR            S0, =0.01375 }
  _R0 = a1 + 20 * a2 + 3464;
  __asm
  {
    VLDR            S2, [R0]
    VMUL.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


void __fastcall Boat::~Boat(Boat *this)
{
  Boat::~Boat(this);
}


int __fastcall Boat::Boat(int a1, int a2, int *a3)
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
  Entity::Entity(a1, a2, a3);
  *(_DWORD *)v3 = &off_26F1F7C;
  *(_DWORD *)(v3 + 3412) = &unk_28898CC;
  MovementInterpolator::MovementInterpolator(v3 + 3416);
  *(_DWORD *)(v3 + 3464) = 0;
  *(_DWORD *)(v3 + 3460) = 0;
  *(_DWORD *)(v3 + 3456) = 0;
  *(_DWORD *)(v3 + 3452) = 0;
  *(_DWORD *)(v3 + 3448) = 0;
  *(_DWORD *)(v3 + 3480) = 0;
  *(_DWORD *)(v3 + 3484) = 0;
  *(_DWORD *)(v3 + 3476) = 0;
  *(_DWORD *)(v3 + 3472) = 0;
  *(_DWORD *)(v3 + 3468) = 0;
  *(_DWORD *)(v3 + 248) = 39;
  *(_DWORD *)(v3 + 172) |= 0x20100u;
  Entity::enableAutoSendPosRot((Entity *)v3, 1);
  v4 = (int *)(v3 + 176);
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 11) )
  {
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 11);
    v5 = *v4;
    v6 = operator new(0x10u);
    v6[4] = 2;
    v7 = 11;
    *((_WORD *)v6 + 3) = 11;
    v6[8] = 1;
    *(_DWORD *)v6 = &off_26F08C4;
    *((_DWORD *)v6 + 3) = 0;
    v8 = *(_DWORD *)(v5 + 44);
    *(_DWORD *)(v5 + 44) = v6;
    if ( v8 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
    v9 = *(_WORD *)(v3 + 188);
    if ( v9 >= 0xB )
      LOWORD(v9) = 11;
    *(_WORD *)(v3 + 188) = v9;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0xB )
      v7 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v7;
  }
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 12) )
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 12);
    v10 = *v4;
    v11 = operator new(0x10u);
    v11[4] = 2;
    v12 = 12;
    *((_WORD *)v11 + 3) = 12;
    v11[8] = 1;
    *(_DWORD *)v11 = &off_26F08C4;
    *((_DWORD *)v11 + 3) = 1;
    v13 = *(_DWORD *)(v10 + 48);
    *(_DWORD *)(v10 + 48) = v11;
    if ( v13 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 4))(v13);
    v14 = *(_WORD *)(v3 + 188);
    if ( v14 >= 0xC )
      LOWORD(v14) = 12;
    *(_WORD *)(v3 + 188) = v14;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0xC )
      v12 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v12;
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 13) )
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 13);
    v15 = *v4;
    v16 = operator new(0x10u);
    v16[4] = 3;
    v17 = 13;
    *((_WORD *)v16 + 3) = 13;
    v16[8] = 1;
    *(_DWORD *)v16 = &off_26F137C;
    *((_DWORD *)v16 + 3) = 0;
    v18 = *(_DWORD *)(v15 + 52);
    *(_DWORD *)(v15 + 52) = v16;
    if ( v18 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 4))(v18);
    v19 = *(_WORD *)(v3 + 188);
    if ( v19 >= 0xD )
      LOWORD(v19) = 13;
    *(_WORD *)(v3 + 188) = v19;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0xD )
      v17 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v17;
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 14) )
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 14);
    v20 = *v4;
    v21 = operator new(0x10u);
    v21[4] = 3;
    v22 = 14;
    *((_WORD *)v21 + 3) = 14;
    v21[8] = 1;
    *(_DWORD *)v21 = &off_26F137C;
    *((_DWORD *)v21 + 3) = 0;
    v23 = *(_DWORD *)(v20 + 56);
    *(_DWORD *)(v20 + 56) = v21;
    if ( v23 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 4))(v23);
    v24 = *(_WORD *)(v3 + 188);
    if ( v24 >= 0xE )
      LOWORD(v24) = 14;
    *(_WORD *)(v3 + 188) = v24;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0xE )
      v22 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v22;
  Entity::setStructuralIntegrity((Entity *)v3, 40);
  *(_BYTE *)(v3 + 3409) = 0;
  *(_DWORD *)(v3 + 3488) = 0;
  *(_DWORD *)(v3 + 3492) = 0;
  *(_DWORD *)(v3 + 3496) = 0;
  *(_DWORD *)(v3 + 3504) = 0;
  *(_DWORD *)(v3 + 3508) = 0;
  return v3;
}


int __fastcall Boat::destroy(Boat *this, Entity *a2)
{
  Entity *v2; // r4@1
  Level *v3; // r0@1
  unsigned __int64 *v4; // r0@1
  int result; // r0@1
  void (__fastcall *v6)(Entity *, int *, _DWORD); // r7@2
  int v7; // r5@2
  unsigned __int8 v8; // r0@2
  int v9; // [sp+0h] [bp-60h]@2
  int v10; // [sp+8h] [bp-58h]@6
  void *v11; // [sp+24h] [bp-3Ch]@4
  void *ptr; // [sp+34h] [bp-2Ch]@2

  v2 = this;
  (*(void (**)(void))(*(_DWORD *)this + 44))();
  v3 = (Level *)Entity::getLevel(v2);
  v4 = (unsigned __int64 *)Level::getGameRules(v3);
  result = GameRules::getBool(v4, (int **)&GameRules::DO_ENTITY_DROPS);
  if ( result == 1 )
  {
    v6 = *(void (__fastcall **)(Entity *, int *, _DWORD))(*(_DWORD *)v2 + 452);
    v7 = Item::mBoat;
    v8 = Entity::getVariant(v2);
    ItemInstance::ItemInstance((ItemInstance *)&v9, v7, 1, v8);
    v6(v2, &v9, 0);
    if ( ptr )
      operator delete(ptr);
    if ( v11 )
      operator delete(v11);
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
    result = 0;
  }
  return result;
}


void __fastcall Boat::normalTick(Boat *this)
{
  int v2; // r0@2
  Level *v7; // r0@6
  Level *v10; // r0@10
  Level *v13; // r0@16
  Level *v14; // r0@19
  Entity *v15; // r5@19
  Level *v16; // r0@19
  int v17; // r0@19
  char *v18; // r0@21
  int v19; // r3@22
  int v20; // r3@22
  Level *v21; // r0@22
  int v22; // r0@22
  Level *v23; // r0@22
  int v24; // r0@22
  BlockSource *v25; // r5@25
  char *v26; // r0@25
  char *v27; // r6@25
  Entity **v28; // r8@25
  int v29; // r1@25 OVERLAPPED
  int v30; // r2@25 OVERLAPPED
  signed int v31; // r0@25
  Entity **v32; // r0@27
  signed int v33; // r2@28
  signed int v34; // r5@29
  int v35; // r7@29
  Entity **v36; // r5@29
  Entity *v37; // r6@30
  int *v38; // r5@34 OVERLAPPED
  int *v39; // r6@34 OVERLAPPED
  int v40; // [sp+0h] [bp-98h]@25
  int v41; // [sp+4h] [bp-94h]@25
  signed int v42; // [sp+8h] [bp-90h]@25
  char v43; // [sp+Ch] [bp-8Ch]@25
  char v44; // [sp+28h] [bp-70h]@22
  void **v45; // [sp+30h] [bp-68h]@22
  signed int v46; // [sp+34h] [bp-64h]@22
  signed int v47; // [sp+38h] [bp-60h]@22
  char v48; // [sp+3Ch] [bp-5Ch]@22
  __int64 v49; // [sp+40h] [bp-58h]@22
  signed int v50; // [sp+48h] [bp-50h]@22
  int v51; // [sp+4Ch] [bp-4Ch]@22
  char v52; // [sp+50h] [bp-48h]@22
  void **v53; // [sp+58h] [bp-40h]@22
  int v54; // [sp+5Ch] [bp-3Ch]@22
  int v55; // [sp+60h] [bp-38h]@22
  char v56; // [sp+64h] [bp-34h]@22
  __int64 v57; // [sp+68h] [bp-30h]@22
  signed int v58; // [sp+70h] [bp-28h]@22
  int v59; // [sp+74h] [bp-24h]@22
  __int64 v60; // [sp+78h] [bp-20h]@21

  _R4 = this;
  if ( Entity::getHurtTime(this) >= 1 )
  {
    v2 = Entity::getHurtTime(_R4);
    Entity::setHurtTime(_R4, v2 - 1);
  }
  __asm
    VMOV.F32        S0, #-16.0
    VLDR            S2, [R4,#0x4C]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    (*(void (__fastcall **)(Boat *))(*(_DWORD *)_R4 + 692))(_R4);
  v7 = (Level *)Entity::getLevel(_R4);
  if ( Level::isClientSide(v7) != 1 || Entity::isControlledByLocalInstance(_R4) != 1 )
    _R0 = SynchedEntityData::getFloat((Boat *)((char *)_R4 + 176), 13);
    __asm { VMOV            S0, R0 }
  else
    _R0 = (int)_R4 + 3460;
    __asm { VLDR            S0, [R0] }
  __asm { VSTR            S0, [R0] }
  v10 = (Level *)Entity::getLevel(_R4);
  if ( Level::isClientSide(v10) != 1 || Entity::isControlledByLocalInstance(_R4) != 1 )
    _R0 = SynchedEntityData::getFloat((Boat *)((char *)_R4 + 176), 14);
    _R0 = (int)_R4 + 3480;
  Entity::normalTick(_R4);
  if ( !Entity::isControlledByLocalInstance(_R4) )
    MovementInterpolator::tick((Boat *)((char *)_R4 + 3416), _R4);
  Boat::_float(_R4);
  Boat::_control(_R4);
  v13 = (Level *)Entity::getLevel(_R4);
  if ( Level::isClientSide(v13) == 1 && Entity::isControlledByLocalInstance(_R4) == 1 )
    Entity::sendMotionToServer(_R4, 0);
  v14 = (Level *)Entity::getLevel(_R4);
  v15 = (Entity *)Level::getPrimaryLocalPlayer(v14);
  v16 = (Level *)Entity::getLevel(_R4);
  v17 = Level::isClientSide(v16);
  if ( v15 )
    if ( v17 == 1 )
    {
      (*(void (__fastcall **)(__int64 *, Boat *))(*(_DWORD *)_R4 + 540))(&v60, _R4);
      v18 = Entity::getUniqueID(v15);
      if ( *(_QWORD *)v18 == v60 )
      {
        Entity::getRuntimeID((Entity *)&v52, (int)v15);
        v19 = *((_DWORD *)_R4 + 870);
        v54 = 2;
        v55 = 1;
        v56 = 0;
        v53 = &off_26DA6E8;
        v57 = *(_QWORD *)&v52;
        v58 = 128;
        v59 = v19;
        Entity::getRuntimeID((Entity *)&v44, (int)v15);
        v20 = *((_DWORD *)_R4 + 865);
        v46 = 2;
        v47 = 1;
        v48 = 0;
        v45 = &off_26DA6E8;
        v49 = *(_QWORD *)&v44;
        v50 = 129;
        v51 = v20;
        v21 = (Level *)Entity::getLevel(_R4);
        v22 = Level::getPacketSender(v21);
        (*(void (**)(void))(*(_DWORD *)v22 + 8))();
        v23 = (Level *)Entity::getLevel(_R4);
        v24 = Level::getPacketSender(v23);
        (*(void (**)(void))(*(_DWORD *)v24 + 8))();
      }
    }
  if ( Entity::isControlledByLocalInstance(_R4) == 1 )
    (*(void (__fastcall **)(Boat *, char *))(*(_DWORD *)_R4 + 76))(_R4, (char *)_R4 + 108);
  (*(void (__fastcall **)(Boat *, signed int))(*(_DWORD *)_R4 + 728))(_R4, 981668463);
  v25 = (BlockSource *)Entity::getRegion(_R4);
  v40 = 1045220557;
  v41 = 0;
  v42 = 1045220557;
  AABB::grow((AABB *)&v43, (Boat *)((char *)_R4 + 264), (int)&v40);
  v26 = BlockSource::fetchEntities(v25, _R4, (const AABB *)&v43);
  v27 = v26;
  v28 = 0;
  *(_QWORD *)&v29 = *(_QWORD *)v26;
  v31 = v30 - v29;
  if ( 0 != (v30 - v29) >> 2 )
    if ( (unsigned int)(v31 >> 2) >= 0x40000000 )
      sub_21E57F4();
    v32 = (Entity **)operator new(v31);
    *(_QWORD *)&v29 = *(_QWORD *)v27;
    v28 = v32;
  v33 = v30 - v29;
  if ( 0 != v33 >> 2 )
    v34 = v33 >> 2;
    _aeabi_memmove4(v28, v29);
    v35 = 4 * v34;
    v36 = v28;
    do
      v37 = *v36;
      if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)*v36 + 300))(*v36) == 1 && Entity::isRider(_R4, v37) == 1 )
        (*(void (__fastcall **)(Entity *, Boat *, _DWORD))(*(_DWORD *)v37 + 272))(v37, _R4, 0);
      v35 -= 4;
      ++v36;
    while ( v35 );
  for ( *(_QWORD *)&v38 = *(_QWORD *)((char *)_R4 + 476); v39 != v38; ++v38 )
    Entity::setPreviousPosRot(*v38, *v38 + 72, (_QWORD *)(*v38 + 120));
    (*(void (__fastcall **)(Boat *, int, _DWORD))(*(_DWORD *)_R4 + 136))(_R4, *v38, 0);
  if ( v28 )
    operator delete(v28);
}


Entity *__fastcall Boat::~Boat(Boat *this)
{
  Entity *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26F1F7C;
  v2 = *((_DWORD *)this + 853);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  Entity::~Entity(v1);
  return v1;
}


int __fastcall Boat::setPaddleState(Entity *this, int a2, int a3)
{
  int v3; // r10@1
  Entity *v4; // r4@1
  int v5; // r6@1
  char *v6; // r7@1
  int *v7; // r9@1
  signed int v8; // r5@1
  Level *v9; // r0@1
  int v10; // r8@1
  int *v11; // r0@1
  int v14; // r1@7
  int v17; // r1@9
  int result; // r0@12
  Level *v24; // r0@20
  int v25; // r1@23
  int v26; // r0@25
  unsigned int v27; // r1@25
  unsigned int v28; // r1@27
  unsigned int v29; // r0@27

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (char *)this + 20 * a2;
  v7 = (int *)(v6 + 3452);
  v8 = *((_DWORD *)v6 + 863);
  v9 = (Level *)Entity::getLevel(this);
  v10 = *(_DWORD *)Level::getCurrentTick(v9);
  v11 = (int *)(v6 + 3448);
  if ( v5 == 1 )
  {
    if ( v8 <= -1 )
    {
      v14 = v10 - *v11;
      _R0 = (signed int *)(v6 + 3464);
      if ( v14 < 10 )
      {
        __asm
        {
          VLDR            S0, =-0.05
          VLDR            S2, [R0]
          VADD.F32        S0, S2, S0
          VMOV.F32        S2, #2.5
          VMOV            R1, S0
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _NF ^ _VF )
          _R1 = 1075838976;
      }
      else
        _R1 = 1077936128;
      *_R0 = _R1;
      v24 = (Level *)Entity::getLevel(v4);
      if ( Level::isClientSide(v24) != 1 || Entity::isControlledByLocalInstance(v4) != 1 )
        v25 = 14;
        if ( !v3 )
          v25 = 13;
        v26 = SynchedEntityData::_get((Entity *)((char *)v4 + 176), v25);
        v27 = *(_DWORD *)(v26 + 4);
        if ( (unsigned __int8)v27 == 3 && *(_DWORD *)(v26 + 12) & 0x7FFFFFFF )
          v28 = v27 >> 16;
          *(_DWORD *)(v26 + 12) = 0;
          *(_BYTE *)(v26 + 8) = 1;
          v29 = *((_WORD *)v4 + 94);
          if ( v29 >= v28 )
            LOWORD(v29) = v28;
          *((_WORD *)v4 + 94) = v29;
          if ( *((_WORD *)v4 + 95) > v28 )
            LOWORD(v28) = *((_WORD *)v4 + 95);
          *((_WORD *)v4 + 95) = v28;
        *((_DWORD *)v6 + 865) = 0;
      result = 1;
      *v7 = v10;
    }
    else
      if ( v10 - *v7 > 9 )
  }
  else
      v17 = *v11;
      *v11 = *v7;
      *v7 = -1;
    _R0 = (int)(v6 + 3464);
    __asm
      VLDR            S4, =0.01
      VMOV.F32        S0, #0.5
      VLDR            S6, =0.0
      VLDR            S2, [R0]
      VCMPE.F32       S2, S4
      VMRS            APSR_nzcv, FPSCR
      VMUL.F32        S0, S2, S0
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S6, S0 }
    __asm { VSTR            S6, [R0] }
    result = 0;
  return result;
}


int __fastcall Boat::getRowingTime(Entity *a1, int a2, int _R2)
{
  int v3; // r5@1
  Entity *v4; // r4@1
  Level *v9; // r0@1
  int v11; // r1@4
  int result; // r0@7

  v3 = a2;
  v4 = a1;
  __asm { VMOV            S16, R2 }
  v9 = (Level *)Entity::getLevel(a1);
  if ( Level::isClientSide(v9) != 1 || Entity::isControlledByLocalInstance(v4) != 1 )
  {
    v11 = 14;
    if ( !v3 )
      v11 = 13;
    _R0 = SynchedEntityData::getFloat((Entity *)((char *)v4 + 176), v11);
    __asm { VMOV            S0, R0 }
  }
  else
    _R0 = (int)v4 + 20 * v3 + 3460;
    __asm { VLDR            S0, [R0] }
  _R0 = (int)v4 + 20 * v3 + 3456;
  __asm
    VLDR            S2, [R0]
    VSUB.F32        S0, S0, S2
    VMUL.F32        S0, S0, S16
    VADD.F32        S0, S0, S2
    VMOV            R0, S0
  return result;
}


void __fastcall Boat::getExitText(Boat *this, int _R1, int a3)
{
  Boat::getExitText(this, _R1, a3);
}


void __fastcall Boat::getExitText(Boat *this, int _R1, int a3)
{
  int *v3; // r4@1
  void *v8; // r0@4
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  int v11; // [sp+Ch] [bp-1Ch]@4

  v3 = (int *)this;
  if ( a3 != 1 )
    goto LABEL_15;
  __asm
  {
    VLDR            S0, [R1,#0x48]
    VLDR            S2, [R1,#0x54]
    VLDR            S4, [R1,#0x50]
    VLDR            S6, [R1,#0x5C]
    VSUB.F32        S0, S0, S2
    VSUB.F32        S2, S4, S6
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VADD.F32        S0, S2, S0
    VLDR            S2, =0.01
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_15:
    sub_21E94B4((void **)&v11, "action.interact.exit.boat");
    I18n::get(v3, (int **)&v11);
    v8 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
    {
      v9 = (unsigned int *)(v11 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    }
  else
    sub_21E94B4((void **)this, (const char *)&unk_257BC67);
}


signed int __fastcall Boat::_isInAir(Boat *this)
{
  signed int result; // r0@1

  __asm { VMOV.F32        S0, #1.0 }
  _R0 = (char *)this + 3496;
  __asm { VLDR            S2, [R0] }
  result = 0;
  __asm
  {
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !(_NF ^ _VF) )
    result = 1;
  return result;
}


signed int __fastcall Boat::getEntityTypeId(Boat *this)
{
  return 90;
}


int __fastcall Boat::isPickable(Boat *this)
{
  return Entity::isRemoved(this) ^ 1;
}


signed int __fastcall Boat::_hurt(Boat *this, const EntityDamageSource *a2, int a3, bool a4, bool a5)
{
  int v5; // r5@1
  const EntityDamageSource *v6; // r6@1
  Level *v8; // r0@1
  int v9; // r7@3
  int v10; // r1@3
  Entity *v11; // r6@3
  int v12; // r0@7
  int v13; // r0@7
  signed int v14; // r8@10
  signed int v19; // r6@13
  Level *v20; // r0@14
  char *v21; // r0@14
  Level *v23; // r0@14
  char *v24; // r0@14
  Level *v26; // r0@14
  char *v27; // r0@14
  int v29; // r0@14
  Entity *v30; // r1@14
  float v32; // [sp+1Ch] [bp-74h]@14
  unsigned int v33; // [sp+28h] [bp-68h]@3
  unsigned int v34; // [sp+2Ch] [bp-64h]@3

  v5 = a3;
  v6 = a2;
  _R4 = this;
  v8 = (Level *)Entity::getLevel(this);
  if ( !Level::isClientSide(v8) && !Entity::isRemoved(_R4) )
  {
    v9 = Entity::getLevel(_R4);
    (*(void (__fastcall **)(unsigned int *, const EntityDamageSource *))(*(_DWORD *)v6 + 32))(&v33, v6);
    v11 = (Entity *)Level::fetchEntity(v9, v10, v33, v34, 0);
    if ( v11 && Entity::isRider(_R4, v11) == 1 && (*(int (__fastcall **)(Entity *))(*(_DWORD *)v11 + 488))(v11) == 2849 )
      v5 = 100;
    v12 = Entity::getHurtDir(_R4);
    Entity::setHurtDir(_R4, -v12);
    Entity::setHurtTime(_R4, 10);
    (*(void (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 700))(_R4);
    v13 = Entity::getStructuralIntegrity(_R4);
    Entity::setStructuralIntegrity(_R4, v13 - v5);
    if ( v11
      && Entity::hasCategory((int)v11, 1) == 1
      && Abilities::getBool((int)v11 + 4320, (int **)&Abilities::INSTABUILD) )
    {
      v14 = 1;
    }
    else
      if ( Entity::getStructuralIntegrity(_R4) > 0 )
        return 1;
      v14 = 0;
    Entity::removeAllRiders(_R4, 1, 0);
    __asm
      VLDR            D8, =2.32830644e-10
      VLDR            S18, =-0.15
      VLDR            S20, =0.3
    v19 = 4;
    __asm { VLDR            S19, =0.1 }
    do
      __asm { VLDR            S24, [R4,#0x48] }
      v20 = (Level *)Entity::getLevel(_R4);
      v21 = Level::getRandom(v20);
      _R7 = Random::_genRandInt32((Random *)v21);
      __asm { VLDR            S26, [R4,#0x4C] }
      v23 = (Level *)Entity::getLevel(_R4);
      v24 = Level::getRandom(v23);
      _R0 = Random::_genRandInt32((Random *)v24);
      __asm
      {
        VMOV            S0, R7
        VLDR            S28, [R4,#0x50]
        VCVT.F64.U32    D15, S0
        VMOV            S0, R0
        VCVT.F64.U32    D11, S0
      }
      v26 = (Level *)Entity::getLevel(_R4);
      v27 = Level::getRandom(v26);
      _R0 = Random::_genRandInt32((Random *)v27);
        VMUL.F64        D1, D15, D8
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D8
        VMUL.F64        D2, D11, D8
        VCVT.F32.F64    S2, D1
        VCVT.F32.F64    S4, D2
        VCVT.F32.F64    S0, D0
        VADD.F32        S6, S24, S18
        VMUL.F32        S2, S2, S20
        VMUL.F32        S4, S4, S19
        VADD.F32        S8, S28, S18
        VMUL.F32        S0, S0, S20
        VADD.F32        S22, S6, S2
        VADD.F32        S24, S4, S26
        VADD.F32        S26, S8, S0
      v29 = Entity::getLevel(_R4);
        VSTR            S22, [SP,#0x90+var_74]
        VSTR            S24, [SP,#0x90+var_70]
        VSTR            S26, [SP,#0x90+var_6C]
      Level::addParticle(v29, 4, (int)&v32);
      --v19;
    while ( v19 );
    if ( v14 )
      (*(void (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 44))(_R4);
      Boat::destroy(_R4, v30);
  }
  return 1;
}


int __fastcall Boat::getShadowHeightOffs(Boat *this)
{
  return 0;
}


int __fastcall Boat::push(Boat *this, Entity *a2, int a3)
{
  int v3; // r5@1
  Level *v6; // r0@1
  int result; // r0@1
  float v8; // r1@3
  int (__fastcall *v15)(Entity *, float *); // r2@7
  float v16; // [sp+0h] [bp-40h]@7
  int v17; // [sp+4h] [bp-3Ch]@7
  float v18; // [sp+Ch] [bp-34h]@6
  int v19; // [sp+10h] [bp-30h]@6

  v3 = a3;
  _R4 = a2;
  _R6 = this;
  v6 = (Level *)Entity::getLevel(this);
  result = Level::isClientSide(v6);
  if ( !result )
  {
    result = Entity::isRider(_R6, _R4);
    if ( !result )
    {
      result = Entity::pullInEntity(_R6, _R4);
      __asm
      {
        VLDR            S0, [R6,#0x48]
        VLDR            S4, [R4,#0x48]
        VLDR            S2, [R6,#0x50]
        VLDR            S6, [R4,#0x50]
        VSUB.F32        S16, S4, S0
        VSUB.F32        S18, S6, S2
        VMUL.F32        S0, S16, S16
        VMUL.F32        S2, S18, S18
        VADD.F32        S0, S2, S0
        VLDR            S2, =0.0001
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !(_NF ^ _VF) )
        __asm { VMOV            R0, S0 }
        _R0 = mce::Math::sqrt(_R0, v8);
        __asm
        {
          VMOV.F32        S2, #1.0
          VLDR            S8, [R6,#0x14C]
          VMOV            S0, R0
          VLDR            S10, =0.1
          VDIV.F32        S4, S16, S0
          VDIV.F32        S6, S18, S0
          VDIV.F32        S0, S2, S0
          VCMPE.F32       S0, S2
          VMRS            APSR_nzcv, FPSCR
          VSUB.F32        S8, S2, S8
          VMUL.F32        S4, S4, S10
          VMUL.F32        S6, S6, S10
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          __asm { VMOVGT.F32      S0, S2 }
          VMUL.F32        S2, S4, S8
          VMUL.F32        S4, S6, S8
          VMOV.F32        S6, #-0.5
          VMUL.F32        S18, S2, S0
          VMUL.F32        S16, S4, S0
          VMUL.F32        S0, S18, S6
          VMUL.F32        S2, S16, S6
          VSTR            S0, [SP,#0x40+var_34]
        v19 = 0;
        __asm { VSTR            S2, [SP,#0x40+var_2C] }
        result = Entity::push(_R6, (const Vec3 *)&v18);
        if ( !v3 )
          __asm { VMOV.F32        S0, #0.125 }
          v15 = *(int (__fastcall **)(Entity *, float *))(*(_DWORD *)_R4 + 276);
          __asm
          {
            VMUL.F32        S2, S18, S0
            VMUL.F32        S0, S16, S0
            VSTR            S2, [SP,#0x40+var_40]
          }
          v17 = 0;
          __asm { VSTR            S0, [SP,#0x40+var_38] }
          result = v15(_R4, &v16);
    }
  }
  return result;
}


void __fastcall Boat::_control(Boat *this)
{
  int v7; // r5@2
  int v8; // r1@2
  signed int v9; // r0@2
  Level *v13; // r0@10
  Level *v16; // r0@14
  unsigned int v18; // r1@17
  unsigned int v19; // r1@19
  unsigned int v20; // r0@19
  Level *v21; // r0@24
  Level *v24; // r0@28
  unsigned int v26; // r1@31
  unsigned int v27; // r1@33
  unsigned int v28; // r0@33
  BlockSource *v34; // r5@46
  int *v35; // r6@46
  int *v36; // r7@46
  int v37; // r0@47
  int *v38; // r0@53
  Block *v39; // r0@54
  int v40; // r0@54
  int v48; // [sp+0h] [bp-90h]@54
  int v49; // [sp+4h] [bp-8Ch]@54
  int v50; // [sp+8h] [bp-88h]@54
  int v51; // [sp+Ch] [bp-84h]@53
  int v52; // [sp+10h] [bp-80h]@53
  int v53; // [sp+14h] [bp-7Ch]@53
  int v54; // [sp+18h] [bp-78h]@46
  int v55; // [sp+1Ch] [bp-74h]@46
  int v56; // [sp+20h] [bp-70h]@46
  char v57; // [sp+24h] [bp-6Ch]@46
  int v58; // [sp+28h] [bp-68h]@46
  int v59; // [sp+2Ch] [bp-64h]@46
  unsigned int v60; // [sp+30h] [bp-60h]@2
  unsigned int v61; // [sp+34h] [bp-5Ch]@2

  _R4 = this;
  if ( *((_DWORD *)this + 872) <= 24 )
  {
    _R0 = Vec3::UNIT_X;
    __asm
    {
      VLDR            S16, [R0]
      VLDR            S18, [R0,#4]
      VLDR            S20, [R0,#8]
    }
    v7 = Entity::getLevel(_R4);
    (*(void (__fastcall **)(unsigned int *, Boat *))(*(_DWORD *)_R4 + 540))(&v60, _R4);
    v9 = Level::getPlayer(v7, v8, v60, v61);
    if ( v9 && (*(int (**)(void))(*(_DWORD *)v9 + 1408))() == 1 )
      __asm { VMOV.F32        S0, #3.0 }
      _R0 = (int)_R4 + 3464;
      __asm
      {
        VLDR            S19, =0.01375
        VMUL.F32        S17, S20, S0
        VMUL.F32        S28, S18, S0
        VMUL.F32        S30, S16, S0
        VLDR            S0, [R0]
        VMUL.F32        S0, S0, S19
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( _ZF )
        __asm
        {
          VLDR            S24, =0.0
          VMOV.F32        S22, S24
          VMOV.F32        S26, S24
          VMOV.F32        S18, S24
          VMOV.F32        S16, S24
          VMOV.F32        S20, S24
        }
      else
        __asm { VMOV.F32        S2, #1.0 }
        _R0 = (int)_R4 + 3496;
          VLDR            S4, [R0]
          VCMPE.F32       S4, S2
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          _R0 = &Vec3::UNIT_Z;
          __asm
          {
            VLDR            S2, [R0]
            VLDR            S4, [R0,#4]
            VLDR            S6, [R0,#8]
            VMUL.F32        S18, S2, S0
            VMUL.F32        S16, S4, S0
            VMUL.F32        S20, S6, S0
            VMUL.F32        S4, S18, S28
            VMUL.F32        S2, S16, S30
            VMUL.F32        S6, S18, S17
            VMUL.F32        S8, S20, S30
            VMUL.F32        S10, S20, S28
            VMUL.F32        S12, S16, S17
            VSUB.F32        S26, S4, S2
            VSUB.F32        S22, S8, S6
            VSUB.F32        S24, S12, S10
          }
        else
            VLDR            S24, =0.0
            VMOV.F32        S22, S24
            VMOV.F32        S26, S24
            VMOV.F32        S18, S24
            VMOV.F32        S16, S24
            VMOV.F32        S20, S24
        __asm { VMOV            R2, S0 }
        Boat::_addPaddleTime(_R4, 0, _R2);
      _R0 = (int)_R4 + 3484;
      if ( !_ZF )
            VMUL.F32        S2, S2, S0
            VMUL.F32        S4, S4, S0
            VMUL.F32        S6, S6, S0
            VMUL.F32        S8, S2, S28
            VMUL.F32        S10, S2, S17
            VMUL.F32        S12, S4, S17
            VMUL.F32        S14, S4, S30
            VMUL.F32        S1, S6, S30
            VMUL.F32        S3, S6, S28
            VADD.F32        S20, S6, S20
            VSUB.F32        S8, S26, S8
            VADD.F32        S10, S10, S22
            VSUB.F32        S12, S24, S12
            VADD.F32        S16, S4, S16
            VADD.F32        S18, S2, S18
            VADD.F32        S26, S8, S14
            VSUB.F32        S22, S10, S1
            VADD.F32        S24, S12, S3
        Boat::_addPaddleTime(_R4, 1, _R2);
    else
      v13 = (Level *)Entity::getLevel(_R4);
      if ( Level::isClientSide(v13) != 1 || Entity::isControlledByLocalInstance(_R4) != 1 )
        _R0 = SynchedEntityData::getFloat((Boat *)((char *)_R4 + 176), 13);
        __asm { VMOV            S16, R0 }
        _R0 = (int)_R4 + 3460;
        __asm { VLDR            S16, [R0] }
      v16 = (Level *)Entity::getLevel(_R4);
      if ( Level::isClientSide(v16) != 1 || Entity::isControlledByLocalInstance(_R4) != 1 )
        _R0 = SynchedEntityData::_get((Boat *)((char *)_R4 + 176), 13);
        v18 = *(_DWORD *)(_R0 + 4);
        if ( (unsigned __int8)v18 == 3 )
            VLDR            S0, [R0,#0xC]
            VCMPE.F32       S0, S16
            VMRS            APSR_nzcv, FPSCR
          if ( !_ZF )
            __asm { VSTR            S16, [R0,#0xC] }
            *(_BYTE *)(_R0 + 8) = 1;
            v19 = v18 >> 16;
            v20 = *((_WORD *)_R4 + 94);
            if ( v20 >= v19 )
              LOWORD(v20) = v19;
            *((_WORD *)_R4 + 94) = v20;
            if ( *((_WORD *)_R4 + 95) > v19 )
              LOWORD(v19) = *((_WORD *)_R4 + 95);
            *((_WORD *)_R4 + 95) = v19;
        __asm { VSTR            S16, [R0] }
      v21 = (Level *)Entity::getLevel(_R4);
      if ( Level::isClientSide(v21) != 1 || Entity::isControlledByLocalInstance(_R4) != 1 )
        _R0 = SynchedEntityData::getFloat((Boat *)((char *)_R4 + 176), 14);
        _R0 = (int)_R4 + 3480;
      v24 = (Level *)Entity::getLevel(_R4);
      if ( Level::isClientSide(v24) != 1 || Entity::isControlledByLocalInstance(_R4) != 1 )
        _R0 = SynchedEntityData::_get((Boat *)((char *)_R4 + 176), 14);
        v26 = *(_DWORD *)(_R0 + 4);
        __asm { VLDR            S24, =0.0 }
        if ( (unsigned __int8)v26 == 3 )
            v27 = v26 >> 16;
            v28 = *((_WORD *)_R4 + 94);
            if ( v28 >= v27 )
              LOWORD(v28) = v27;
            *((_WORD *)_R4 + 94) = v28;
            if ( *((_WORD *)_R4 + 95) > v27 )
              LOWORD(v27) = *((_WORD *)_R4 + 95);
            *((_WORD *)_R4 + 95) = v27;
          VSTR            S16, [R0]
        VMOV.F32        S22, S24
        VMOV.F32        S26, S24
        VMOV.F32        S18, S24
        VMOV.F32        S16, S24
        VMOV.F32        S20, S24
    v34 = (BlockSource *)Entity::getRegion(_R4);
    BlockPos::BlockPos((int)&v57, (int)_R4 + 72);
    v35 = (int *)BlockSource::getMaterial(v34, (const BlockPos *)&v57);
    v54 = *(_DWORD *)&v57;
    v55 = v58 + 1;
    v56 = v59;
    v36 = (int *)BlockSource::getMaterial(v34, (const BlockPos *)&v54);
    if ( Material::isType(v35, 5) == 1 && (v37 = Material::getMaterial(5), Material::operator!=((int)v36, v37) == 1)
      || Material::isType(v35, 5) == 1 && Material::isType(v36, 5) == 1 )
      *((_DWORD *)_R4 + 874) = 1063675494;
      goto LABEL_58;
    if ( !Material::isType(v35, 0) && Material::isType(v35, 20) != 1 )
    v51 = *(_DWORD *)&v57;
    v52 = v58 - 1;
    v53 = v59;
    v38 = (int *)BlockSource::getMaterial(v34, (const BlockPos *)&v51);
    *((_DWORD *)_R4 + 874) = 1065353216;
    if ( *((_BYTE *)_R4 + 216) )
      v48 = *(_DWORD *)&v57;
      v49 = v58 - 1;
      v50 = v59;
      v39 = (Block *)BlockSource::getBlock(v34, (const BlockPos *)&v48);
      v40 = Block::getFriction(v39);
      if ( Material::isType(v38, 5) != 1 )
        goto LABEL_58;
      v40 = 1063675494;
    *((_DWORD *)_R4 + 874) = v40;
LABEL_58:
      VLDR            S28, [R4,#0x6C]
      VLDR            S30, [R4,#0x74]
      VMUL.F32        S0, S28, S28
      VMUL.F32        S2, S30, S30
      VADD.F32        S0, S2, S0
      VLDR            S2, =0.01
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
        VCMPE.F32       S24, #0.0
        goto LABEL_68;
        VCMPEEQ.F32     S22, #0.0
        VMRSEQ          APSR_nzcv, FPSCR
        VCMPE.F32       S26, #0.0
LABEL_68:
          VLDR            S0, =1.6
          VLDR            S2, [R0]
          VMUL.F32        S22, S22, S0
          VMUL.F32        S20, S2, S20
          VMUL.F32        S16, S2, S16
          VMUL.F32        S18, S2, S18
    __asm { VMOV.F32        S0, #10.0 }
    _R0 = (int)_R4 + 3492;
    _R1 = (int)_R4 + 3496;
      VLDR            S2, [R0]
      VMUL.F32        S0, S22, S0
      VLDR            S22, [R1]
      VSTR            S0, [R0]
      VLDR            S2, [R4,#0x7C]
      VADD.F32        S24, S2, S0
      VLDR            S0, =90.0
    _R0 = &mce::Math::DEGRAD;
      VSUB.F32        S0, S0, S24
      VMUL.F32        S0, S0, S2
      VMOV            R5, S0
    _R0 = cosf(_R5);
    __asm { VMOV            S26, R0 }
    _R0 = sinf(_R5);
      VMOV            S0, R0
      VSTR            S24, [R4,#0x7C]
      VMUL.F32        S2, S26, S18
      VMUL.F32        S4, S0, S20
      VMUL.F32        S0, S0, S18
      VMUL.F32        S6, S26, S20
      VADD.F32        S2, S4, S2
      VLDR            S4, [R4,#0x70]
      VSUB.F32        S0, S6, S0
      VADD.F32        S4, S4, S16
      VADD.F32        S2, S2, S28
      VADD.F32        S0, S30, S0
      VSTR            S4, [R4,#0x70]
      VMUL.F32        S2, S2, S22
      VSTR            S2, [R4,#0x6C]
      VSTR            S0, [R4,#0x74]
    return;
  }
  if ( Entity::isRide(this) == 1 )
    j_j_j__ZN6Entity15removeAllRidersEbb_0(_R4, 0, 0);
}


float __fastcall Boat::computePaddleForcesBasedOnGaze(Boat *this, Vec3 *_R1, float *a3, float *a4, float a5, float a6)
{
  float result; // r0@2

  __asm { VLDR            S0, [R1,#4] }
  _R9 = a4;
  __asm { VLDR            S2, =0.99 }
  _R8 = a3;
  __asm
  {
    VABS.F32        S0, S0
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    result = 0.0;
    *(_DWORD *)a4 = 0;
    *(_DWORD *)a3 = 0;
    return result;
    VLDR            S2, [R1]
    VLDR            S4, [R1,#8]
    VMUL.F32        S8, S2, S2
    VLDR            S0, [SP,#0x50+arg_4]
    VMUL.F32        S6, S4, S4
    VLDR            S16, [SP,#0x50+arg_0]
    VADD.F32        S6, S8, S6
    VLDR            S8, =0.0001
    VSQRT.F32       S6, S6
    VCMPE.F32       S6, S8
  if ( _NF ^ _VF )
    _R4 = Vec3::ZERO;
    _R5 = dword_2822498;
  else
    __asm
    {
      VDIV.F32        S4, S4, S6
      VDIV.F32        S2, S2, S6
      VMOV            R5, S4
      VMOV            R4, S2
    }
    VLDR            S2, =90.0
    VMUL.F32        S0, S0, S2
    VLDR            S2, [R0,#0x7C]
  _R0 = &mce::Math::DEGRAD;
    VADD.F32        S0, S2, S0
    VLDR            S2, [R0]
    VMOV            R6, S0
  _R7 = cosf(_R6);
  _R0 = sinf(_R6);
    VMOV            S20, R4
    VMOV            S22, R7
    VMOV            S24, R5
    VMOV            S26, R0
    VMUL.F32        S0, S22, S20
    VMUL.F32        S2, S26, S24
    VMOV.F32        S4, #-1.0
    VMOV.F32        S18, #1.0
    VCMPE.F32       S0, S4
    VCMPE.F32       S0, S18
    __asm { VMOVGT.F32      S4, S0 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S4, S18 }
  __asm { VMOV            R0, S4 }
  result = acosf(_R0);
    VMUL.F32        S0, S26, S20
    VMUL.F32        S2, S22, S24
    VMOV            S6, R0
    VCMPE.F32       S16, #0.0
  _R1 = &mce::Math::RADDEG;
    VLDR            S4, [R1]
    VSUB.F32        S2, S2, S0
    VMUL.F32        S0, S6, S4
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      VMOV.F32        S8, #20.0
      VLDR            S10, =0.001
      VMUL.F32        S6, S0, S0
      VLDR            S4, =0.4
      VCMPE.F32       S0, S8
      VMRS            APSR_nzcv, FPSCR
      VMUL.F32        S6, S6, S10
      VCMPE.F32       S2, #0.0
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S4, S6 }
      VNEG.F32        S0, S4
      __asm { VSTRLT          S4, [R9] }
    else
      __asm
      {
        VSTRGE          S0, [R9]
        VMOVGE.F32      S0, S4
      }
      VMOV.F32        S2, #20.0
    if ( !(_NF ^ _VF) )
        VCMPE.F32       S0, S2
        VSTR            S16, [R8]
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        __asm
        {
          VLDR            S2, =-0.05
          VMUL.F32        S0, S0, S2
          VLDR            S2, =0.6
          VADD.F32        S0, S0, S18
          VSQRT.F32       S0, S0
          VLDR            S2, =0.4
          VADD.F32        S0, S0, S2
        }
      else
        __asm { VLDR            S0, =0.4 }
        VMUL.F32        S0, S0, S16
        VSTR            S0, [R9]
        VLDR            S0, [R8]
      goto LABEL_27;
      VCMPE.F32       S0, S2
      VSTR            S16, [R9]
        VLDR            S2, =-0.05
        VMUL.F32        S0, S0, S2
        VLDR            S2, =0.6
        VADD.F32        S0, S0, S18
        VSQRT.F32       S0, S0
        VLDR            S2, =0.4
        VADD.F32        S0, S0, S2
        VLDR            S0, =0.4
  __asm { VSTR            S0, [R8] }
LABEL_27:
    VLDR            S6, =0.85
    VLDR            S2, =1.1765
    VCMPE.F32       S0, S6
    VMUL.F32        S4, S0, S2
    VSTR            S4, [R8]
    VLDR            S0, [R9]
    VMUL.F32        S2, S0, S2
    __asm { VMOVGT.F32      S2, S18 }
  __asm { VSTR            S2, [R9] }
  return result;
}


void __fastcall Boat::normalTick(Boat *this)
{
  Boat::normalTick(this);
}


signed int __fastcall Boat::setPaddleForce(Entity *a1, int a2, int _R2)
{
  int v3; // r5@1
  Entity *v4; // r4@1
  Level *v9; // r0@1
  char *v10; // r0@1
  int v11; // r0@2
  int v12; // r1@2
  signed int result; // r0@3

  v3 = a2;
  v4 = a1;
  __asm { VMOV            S16, R2 }
  v9 = (Level *)Entity::getLevel(a1);
  v10 = Level::getCurrentTick(v9);
  __asm
  {
    VCMPE.F32       S16, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _ZF || (v11 = *(_DWORD *)v10, v12 = (int)v4 + 20 * v3, v11 - *(_DWORD *)(v12 + 3452) < 10) )
    __asm
    {
      VMOV.F32        S0, #3.0
      VLDR            S2, =-0.1
      VMUL.F32        S0, S16, S0
      VABS.F32        S0, S0
      VADD.F32        S0, S0, S2
      VLDR            S2, =0.0
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S16, #0.0
    }
    if ( _NF ^ _VF )
      __asm { VMOVLT.F32      S0, S2 }
      VNEG.F32        S2, S0
      VSTR            S0, [R0]
    result = 0;
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      result = 1;
  else
      VSTR            S0, [R1]
    *(_DWORD *)(v12 + 3452) = v11;
    result = 1;
  return result;
}


signed __int64 __fastcall Boat::getControllingPlayer(Boat *this, Entity *a2)
{
  Entity *v2; // r5@1
  Boat *v3; // r4@1
  signed __int64 result; // r0@2

  v2 = a2;
  v3 = this;
  if ( Entity::isRide(a2) == 1 )
  {
    result = *(_QWORD *)Entity::getUniqueID(**((Entity ***)v2 + 119));
    *(_QWORD *)v3 = result;
  }
  else
    result = -1LL;
    *(_QWORD *)v3 = -1LL;
  return result;
}


int __fastcall Boat::getPaddle(int a1, int a2)
{
  return a1 + 20 * a2 + 3448;
}


int __fastcall Boat::reloadHardcoded(int result)
{
  if ( !*(_BYTE *)(result + 3081) )
  {
    *(_BYTE *)(result + 536) = 1;
    *(_DWORD *)(result + 316) = 1052770304;
    *(_DWORD *)(result + 248) = 39;
    *(_BYTE *)(result + 528) = 1;
  }
  return result;
}


int __fastcall Boat::reloadHardcodedClient(int result)
{
  *(_BYTE *)(result + 536) = 1;
  *(_DWORD *)(result + 316) = 1052770304;
  *(_DWORD *)(result + 248) = 39;
  *(_BYTE *)(result + 528) = 1;
  return result;
}


signed int __fastcall Boat::getShadowRadius(Boat *this)
{
  return 1065353216;
}


int __fastcall Boat::canAddRider(Boat *this, Entity *a2)
{
  Entity *v2; // r4@1
  Boat *v3; // r5@1
  int result; // r0@3

  v2 = a2;
  v3 = this;
  if ( EntityClassTree::isInstanceOf((int)a2, 8960)
    || (unsigned int)((signed int)((*(_QWORD *)((char *)v3 + 476) >> 32) - *(_QWORD *)((char *)v3 + 476)) >> 2) > 1 )
  {
    result = 0;
  }
  else
    result = Entity::isRider(v3, v2) ^ 1;
  return result;
}


Entity *__fastcall Boat::setRowingTime(Entity *a1, int a2, int _R2)
{
  int v3; // r5@1
  Entity *v4; // r4@1
  Level *v9; // r0@1
  Entity *result; // r0@3
  int v11; // r1@4
  unsigned int v12; // r1@6
  unsigned int v13; // r1@8
  unsigned int v14; // r0@8

  v3 = a2;
  v4 = a1;
  __asm { VMOV            S16, R2 }
  v9 = (Level *)Entity::getLevel(a1);
  if ( Level::isClientSide(v9) != 1 || Entity::isControlledByLocalInstance(v4) != 1 )
  {
    v11 = 14;
    if ( !v3 )
      v11 = 13;
    result = (Entity *)SynchedEntityData::_get((Entity *)((char *)v4 + 176), v11);
    v12 = *((_DWORD *)result + 1);
    if ( (unsigned __int8)v12 == 3 )
    {
      __asm
      {
        VLDR            S0, [R0,#0xC]
        VCMPE.F32       S0, S16
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !_ZF )
        __asm { VSTR            S16, [R0,#0xC] }
        *((_BYTE *)result + 8) = 1;
        v13 = v12 >> 16;
        v14 = *((_WORD *)v4 + 94);
        if ( v14 >= v13 )
          LOWORD(v14) = v13;
        *((_WORD *)v4 + 94) = v14;
        result = (Entity *)*((_WORD *)v4 + 95);
        if ( (unsigned int)result > v13 )
          LOWORD(v13) = *((_WORD *)v4 + 95);
        *((_WORD *)v4 + 95) = v13;
    }
  }
  else
    result = (Entity *)((char *)v4 + 20 * v3 + 3460);
    __asm { VSTR            S16, [R0] }
  return result;
}


signed int __fastcall Boat::canExitBoat(Boat *this)
{
  signed int result; // r0@1

  __asm
  {
    VLDR            S0, [R0,#0x48]
    VLDR            S2, [R0,#0x54]
    VLDR            S4, [R0,#0x50]
    VLDR            S6, [R0,#0x5C]
    VSUB.F32        S0, S0, S2
  }
  result = 0;
    VSUB.F32        S2, S4, S6
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VADD.F32        S0, S2, S0
    VLDR            S2, =0.01
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    result = 1;
  return result;
}


signed int __fastcall Boat::isPushable(Boat *this)
{
  return 1;
}


int __fastcall Boat::getPaddle(int a1, int a2)
{
  return a1 + 20 * a2 + 3448;
}


void __fastcall Boat::_control(Boat *this)
{
  Boat::_control(this);
}


void __fastcall Boat::_computePaddleForce(Boat *this, float *a2, float *a3, float _R3, float a5)
{
  __asm
  {
    VMOV.F32        S4, #20.0
    VLDR            S2, [SP,#arg_0]
    VMOV            S0, R3
  }
  *a2 = _R3;
    VCMPE.F32       S2, S4
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    __asm
    {
      VLDR            S4, =-0.05
      VMOV.F32        S6, #1.0
      VMUL.F32        S2, S2, S4
      VLDR            S4, =0.6
      VADD.F32        S2, S2, S6
      VSQRT.F32       S2, S2
      VLDR            S4, =0.4
      VADD.F32        S2, S2, S4
    }
  else
    __asm { VLDR            S2, =0.4 }
    VMUL.F32        S0, S2, S0
    VSTR            S0, [R2]
}


int __fastcall Boat::Paddle::Paddle(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  return result;
}


Entity *__fastcall Boat::_addPaddleTime(Entity *a1, int a2, int _R2)
{
  int v3; // r5@1
  Entity *v4; // r4@1
  Level *v9; // r0@1
  int v11; // r1@4
  Level *v13; // r0@9
  Entity *result; // r0@11
  int v15; // r1@12
  unsigned int v16; // r1@14
  unsigned int v17; // r1@16
  unsigned int v18; // r0@16

  v3 = a2;
  v4 = a1;
  __asm { VMOV            S16, R2 }
  v9 = (Level *)Entity::getLevel(a1);
  if ( Level::isClientSide(v9) != 1 || Entity::isControlledByLocalInstance(v4) != 1 )
  {
    v11 = 14;
    if ( !v3 )
      v11 = 13;
    _R0 = SynchedEntityData::getFloat((Entity *)((char *)v4 + 176), v11);
    __asm { VMOV            S0, R0 }
  }
  else
    _R0 = (int)v4 + 20 * v3 + 3460;
    __asm { VLDR            S0, [R0] }
  __asm
    VADD.F32        S16, S0, S16
    VLDR            S2, =1000.0
    VLDR            S0, =-1000.0
    VCMPE.F32       S16, S2
    VMRS            APSR_nzcv, FPSCR
    VADD.F32        S0, S16, S0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S16, S0 }
  v13 = (Level *)Entity::getLevel(v4);
  if ( Level::isClientSide(v13) != 1 || Entity::isControlledByLocalInstance(v4) != 1 )
    v15 = 14;
      v15 = 13;
    result = (Entity *)SynchedEntityData::_get((Entity *)((char *)v4 + 176), v15);
    v16 = *((_DWORD *)result + 1);
    if ( (unsigned __int8)v16 == 3 )
    {
      __asm
      {
        VLDR            S0, [R0,#0xC]
        VCMPE.F32       S0, S16
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !_ZF )
        __asm { VSTR            S16, [R0,#0xC] }
        *((_BYTE *)result + 8) = 1;
        v17 = v16 >> 16;
        v18 = *((_WORD *)v4 + 94);
        if ( v18 >= v17 )
          LOWORD(v18) = v17;
        *((_WORD *)v4 + 94) = v18;
        result = (Entity *)*((_WORD *)v4 + 95);
        if ( (unsigned int)result > v17 )
          LOWORD(v17) = *((_WORD *)v4 + 95);
        *((_WORD *)v4 + 95) = v17;
    }
    result = (Entity *)((char *)v4 + 20 * v3 + 3460);
    __asm { VSTR            S16, [R0] }
  return result;
}
