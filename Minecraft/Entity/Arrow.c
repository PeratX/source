

int __fastcall Arrow::addMobEffect(int result, int a2, int a3, int a4, int a5)
{
  int v5; // r1@1
  int v6; // r3@2
  int v7; // r12@2
  int v8; // lr@2
  int v9; // [sp+0h] [bp-18h]@1
  int v10; // [sp+4h] [bp-14h]@1
  int v11; // [sp+8h] [bp-10h]@1
  int v12; // [sp+Ch] [bp-Ch]@1

  v9 = a2;
  v10 = a3;
  v11 = a4;
  v12 = a5;
  v5 = *(_DWORD *)(result + 3448);
  if ( v5 == *(_DWORD *)(result + 3452) )
  {
    result = std::vector<MobEffectInstance,std::allocator<MobEffectInstance>>::_M_emplace_back_aux<MobEffectInstance const&>(
               (unsigned __int64 *)(result + 3444),
               (int)&v9);
  }
  else
    v6 = v10;
    v7 = v11;
    v8 = v12;
    *(_DWORD *)v5 = v9;
    *(_DWORD *)(v5 + 4) = v6;
    *(_DWORD *)(v5 + 8) = v7;
    *(_DWORD *)(v5 + 12) = v8;
    *(_DWORD *)(result + 3448) += 16;
  return result;
}


int __fastcall Arrow::setEnchantFlame(int result, int a2)
{
  *(_DWORD *)(result + 3436) = a2;
  if ( a2 >= 1 )
    result = (*(int (**)(void))(*(_DWORD *)result + 504))();
  return result;
}


unsigned int __fastcall Arrow::setAuxValue(Arrow *this, int a2)
{
  Arrow *v2; // r4@1
  unsigned __int8 v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = this;
  v3 = a2;
  result = SynchedEntityData::_get((Arrow *)((char *)this + 176), 18);
  v5 = *(_DWORD *)(result + 4);
  if ( !(_BYTE)v5 && *(_BYTE *)(result + 9) != v3 )
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


int __fastcall Arrow::Arrow(int a1, Entity *this, int a3, int a4, float a5)
{
  int v6; // r4@1
  int v7; // r8@1
  BlockSource *v9; // r5@1
  void *v10; // r0@1
  float v16; // r1@2
  __int64 v17; // r2@2
  int v20; // r0@3
  __int64 v23; // r2@3
  int v24; // r0@3
  unsigned int *v28; // r2@5
  signed int v29; // r1@7
  float v30; // [sp+4h] [bp-8Ch]@3
  float v31; // [sp+18h] [bp-78h]@3
  int v32; // [sp+1Ch] [bp-74h]@3
  char v33; // [sp+24h] [bp-6Ch]@3
  char v34; // [sp+28h] [bp-68h]@3
  float v35; // [sp+2Ch] [bp-64h]@2
  int v38; // [sp+38h] [bp-58h]@1

  _R9 = this;
  v6 = a1;
  v7 = a4;
  _R7 = a3;
  v9 = (BlockSource *)Entity::getRegion(this);
  EntityTypeToString((void **)&v38, 0x400050u, 1);
  Entity::Entity(v6, v9, (int **)&v38);
  v10 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
  {
    v28 = (unsigned int *)(v38 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
    }
    else
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  }
  *(_DWORD *)v6 = &off_26FD5B4;
  *(_DWORD *)(v6 + 3412) = -1;
  *(_DWORD *)(v6 + 3416) = -1;
  *(_DWORD *)(v6 + 3420) = -1;
  *(_BYTE *)(v6 + 3424) = 0;
  *(_DWORD *)(v6 + 3428) = 0;
  *(_BYTE *)(v6 + 3432) = Entity::hasCategory((int)_R9, 1);
  *(_DWORD *)(v6 + 3436) = 0;
  *(_DWORD *)(v6 + 3440) = 0;
  *(_DWORD *)(v6 + 3444) = 0;
  *(_DWORD *)(v6 + 3448) = 0;
  *(_DWORD *)(v6 + 3452) = 0;
  MovementInterpolator::MovementInterpolator(v6 + 3456);
  Entity::getAttachPos((AABB *)&v35, v6, 6, 0);
  __asm
    VLDR            S0, =-0.1
    VLDR            S2, [SP,#0x90+var_60]
    VADD.F32        S22, S2, S0
    VSTR            S22, [R4,#0x4C]
    VLDR            S0, [R7,#0x48]
    VLDR            S4, [SP,#0x90+var_64]
    VLDR            S2, [R7,#0x50]
    VLDR            S6, [SP,#0x90+var_5C]
    VSUB.F32        S18, S0, S4
    VLDR            S24, [R7,#0x10C]
    VSUB.F32        S16, S2, S6
    VLDR            S26, [R7,#0x118]
    VMUL.F32        S0, S18, S18
    VMUL.F32        S2, S16, S16
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  _R7 = mce::Math::sqrt(_R0, v16);
    VMOV            S20, R7
    VLDR            S0, =1.0e-7
    VCMPE.F32       S20, S0
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    __asm
      VMOV            R0, S16
      VMOV            R1, S18
    v20 = mce::Math::atan2(_R0, v17);
    mce::Degree::Degree((int)&v34, v20);
    _R0 = mce::Degree::asFloat((mce::Degree *)&v34);
      VSUB.F32        S0, S26, S24
      VLDR            S2, =0.33333
      VSUB.F32        S4, S24, S22
      VLDR            S24, [R0]
      VMUL.F32        S0, S0, S2
      VADD.F32        S22, S4, S0
      VMOV            R1, S22
    v24 = mce::Math::atan2(__PAIR__(_R7, _R1), v23);
    mce::Degree::Degree((int)&v33, v24);
    _R0 = mce::Degree::asFloat((mce::Degree *)&v33);
      VDIV.F32        S2, S18, S20
      VDIV.F32        S4, S16, S20
      VLDR            S6, [R9,#0x48]
      VLDR            S0, =-90.0
      VLDR            S8, [R9,#0x50]
      VADD.F32        S2, S6, S2
      VLDR            S6, [R0]
      VADD.F32        S0, S24, S0
      VADD.F32        S4, S8, S4
      VNEG.F32        S6, S6
      VSTR            S2, [SP,#0x90+var_78]
    v32 = *(_DWORD *)(v6 + 76);
      VSTR            S0, [SP,#0x90+var_80]
      VSTR            S4, [SP,#0x90+var_70]
      VSTR            S6, [SP,#0x90+var_7C]
    Entity::moveTo(v6, (int)&v31);
      VLDR            S2, =0.2
      VLDR            S0, [SP,#0x90+arg_0]
      VMUL.F32        S2, S20, S2
      VMOV            R3, S0
      VSTR            S18, [SP,#0x90+var_8C]
      VADD.F32        S0, S2, S22
      VSTR            S0, [SP,#0x90+var_88]
      VSTR            S16, [SP,#0x90+var_84]
    Arrow::shoot((Arrow *)v6, (const Vec3 *)&v30, *(float *)&v7, _R3, (const Vec3 *)&Vec3::ZERO);
    Entity::enableAutoSendPosRot((Entity *)v6, 1);
  return v6;
}


int __fastcall Arrow::isCritical(Arrow *this)
{
  Entity *v1; // r4@1
  int result; // r0@2
  ProjectileComponent *v3; // r0@3

  v1 = this;
  if ( Entity::getProjectileComponent(this) )
  {
    v3 = (ProjectileComponent *)Entity::getProjectileComponent(v1);
    result = ProjectileComponent::isCritical(v3);
  }
  else
    result = 0;
  return result;
}


int __fastcall Arrow::getBaseDamage(Arrow *this)
{
  Entity *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( Entity::getProjectileComponent(this) )
  {
    _R0 = Entity::getProjectileComponent(v1);
    __asm
    {
      VLDR            S0, [R0,#0xB8]
      VMOV            R0, S0
    }
  }
  else
      VLDR            S0, =0.0
  return result;
}


int __fastcall Arrow::Arrow(int a1, int a2, int *a3)
{
  int v3; // r4@1

  v3 = a1;
  Entity::Entity(a1, a2, a3);
  *(_DWORD *)v3 = &off_26FD5B4;
  *(_DWORD *)(v3 + 3412) = -1;
  *(_DWORD *)(v3 + 3416) = -1;
  *(_DWORD *)(v3 + 3420) = -1;
  *(_BYTE *)(v3 + 3424) = 0;
  *(_DWORD *)(v3 + 3428) = 0;
  *(_BYTE *)(v3 + 3432) = 0;
  *(_DWORD *)(v3 + 3436) = 0;
  *(_DWORD *)(v3 + 3440) = 0;
  *(_DWORD *)(v3 + 3444) = 0;
  *(_DWORD *)(v3 + 3448) = 0;
  *(_DWORD *)(v3 + 3452) = 0;
  MovementInterpolator::MovementInterpolator(v3 + 3456);
  *(_DWORD *)(v3 + 248) = 27;
  Arrow::_defineEntityData((Arrow *)v3);
  Entity::enableAutoSendPosRot((Entity *)v3, 1);
  return v3;
}


int __fastcall Arrow::setEnchantPower(Arrow *this, int a2)
{
  int v2; // r4@1
  Entity *v3; // r5@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  result = Entity::getProjectileComponent(this);
  if ( result )
  {
    result = Entity::getProjectileComponent(v3);
    *(_DWORD *)(result + 104) = v2;
  }
  return result;
}


int __fastcall Arrow::Arrow(int a1, Entity *a2, int **a3)
{
  int v3; // r6@1
  int v4; // r4@1
  int **v5; // r5@1
  BlockSource *v6; // r0@1

  v3 = (int)a2;
  v4 = a1;
  v5 = a3;
  v6 = (BlockSource *)Entity::getRegion(a2);
  Entity::Entity(v4, v6, v5);
  *(_DWORD *)v4 = &off_26FD5B4;
  *(_DWORD *)(v4 + 3412) = -1;
  *(_DWORD *)(v4 + 3416) = -1;
  *(_DWORD *)(v4 + 3420) = -1;
  *(_BYTE *)(v4 + 3424) = 0;
  *(_DWORD *)(v4 + 3428) = 0;
  *(_BYTE *)(v4 + 3432) = Entity::hasCategory(v3, 1);
  *(_DWORD *)(v4 + 3436) = 0;
  *(_DWORD *)(v4 + 3440) = 0;
  *(_DWORD *)(v4 + 3444) = 0;
  *(_DWORD *)(v4 + 3448) = 0;
  *(_DWORD *)(v4 + 3452) = 0;
  MovementInterpolator::MovementInterpolator(v4 + 3456);
  Arrow::_defineEntityData((Arrow *)v4);
  Entity::enableAutoSendPosRot((Entity *)v4, 1);
  return v4;
}


int __fastcall Arrow::getEnchantPower(Arrow *this)
{
  Entity *v1; // r4@1
  int result; // r0@2

  v1 = this;
  if ( Entity::getProjectileComponent(this) )
    result = *(_DWORD *)(Entity::getProjectileComponent(v1) + 104);
  else
    result = 0;
  return result;
}


signed int __fastcall Arrow::isPushableByPiston(Arrow *this)
{
  return 1;
}


int __fastcall Arrow::normalTick(Arrow *this)
{
  float v6; // r1@4
  float v7; // r2@4
  int v8; // r0@4
  int v9; // r0@4
  int v10; // r0@4
  int v11; // r0@4
  Level *v12; // r0@6
  char *v13; // r5@6
  int result; // r0@7
  int v21; // r0@9
  float *v22; // r2@9
  float v23; // r1@12
  float v24; // r2@12
  int v25; // r0@12
  int v26; // r0@12
  int v27; // r0@13
  float v28; // [sp+24h] [bp-3Ch]@4
  float v29; // [sp+28h] [bp-38h]@4
  float v30; // [sp+2Ch] [bp-34h]@4

  _R4 = this;
  Entity::normalTick(this);
  if ( !Entity::getProjectileComponent(_R4) )
    MovementInterpolator::tick((Arrow *)((char *)_R4 + 3456), _R4);
  if ( Entity::getStatusFlag((int)_R4, 13) == 1 )
  {
    __asm
    {
      VLDR            S0, [R4,#0x6C]
      VLDR            S4, [R4,#0x74]
      VLDR            S2, [R4,#0x70]
      VNEG.F32        S0, S0
      VLDR            S16, =0.2
      VNEG.F32        S4, S4
    }
    v6 = *((float *)_R4 + 19);
    v7 = *((float *)_R4 + 20);
    __asm { VSUB.F32        S2, S16, S2 }
    v28 = *((float *)_R4 + 18);
    v29 = v6;
    v30 = v7;
      VSTR            S0, [SP,#0x60+var_48]
      VSTR            S2, [SP,#0x60+var_44]
      VSTR            S4, [SP,#0x60+var_40]
    v8 = Entity::getLevel(_R4);
    Level::addParticle(v8, 2, (int)&v28);
      VMOV.F32        S0, #0.25
      VLDR            S8, [R4,#0x6C]
      VLDR            S10, [R4,#0x70]
      VLDR            S12, [R4,#0x74]
      VLDR            S2, [R4,#0x4C]
      VLDR            S4, [R4,#0x50]
      VLDR            S6, [R4,#0x48]
      VMUL.F32        S14, S8, S0
      VMUL.F32        S1, S10, S0
      VMUL.F32        S0, S12, S0
      VADD.F32        S6, S14, S6
      VADD.F32        S2, S1, S2
      VADD.F32        S0, S0, S4
      VNEG.F32        S4, S8
      VSUB.F32        S8, S16, S10
      VNEG.F32        S10, S12
      VSTR            S6, [SP,#0x60+var_3C]
      VSTR            S2, [SP,#0x60+var_38]
      VSTR            S0, [SP,#0x60+var_34]
      VSTR            S4, [SP,#0x60+var_48]
      VSTR            S8, [SP,#0x60+var_44]
      VSTR            S10, [SP,#0x60+var_40]
    v9 = Entity::getLevel(_R4);
    Level::addParticle(v9, 2, (int)&v28);
      VMOV.F32        S0, #0.5
    v10 = Entity::getLevel(_R4);
    Level::addParticle(v10, 2, (int)&v28);
      VMOV.F32        S0, #0.75
    v11 = Entity::getLevel(_R4);
    Level::addParticle(v11, 2, (int)&v28);
  }
  if ( *((_BYTE *)_R4 + 216) )
    v12 = (Level *)Entity::getLevel(_R4);
    v13 = Level::getRandom(v12);
    if ( *((_DWORD *)_R4 + 861) != *((_DWORD *)_R4 + 862)
      || (result = SynchedEntityData::getInt8((Arrow *)((char *)_R4 + 176), 18), result >= 1) )
      _R0 = *((_DWORD *)_R4 + 857);
      _R1 = 715827883;
      __asm { SMMUL.W         R1, R0, R1 }
      result = _R0 - 6 * (_R1 + (_R1 >> 31));
      if ( !result )
      {
        __asm
        {
          VLDR            S0, [R4,#0x4C]
          VLDR            S8, [R4,#0x70]
          VLDR            S2, [R4,#0x50]
          VLDR            S10, [R4,#0x74]
          VADD.F32        S0, S8, S0
          VLDR            S4, [R4,#0x48]
          VLDR            S6, [R4,#0x6C]
          VADD.F32        S2, S10, S2
          VADD.F32        S4, S6, S4
          VSTR            S4, [SP,#0x60+var_3C]
          VSTR            S0, [SP,#0x60+var_38]
          VSTR            S2, [SP,#0x60+var_34]
        }
        _R0 = Random::_genRandInt32((Random *)v13);
          VMOV            S0, R0
          VCVT.F64.U32    D8, S0
          VLDR            D10, =2.32830644e-10
          VCVT.F64.U32    D9, S0
          VMUL.F64        D1, D8, D10
          VCVT.F64.U32    D0, S0
          VMUL.F64        D0, D0, D10
          VMUL.F64        D2, D9, D10
          VCVT.F32.F64    S2, D1
          VCVT.F32.F64    S4, D2
          VCVT.F32.F64    S0, D0
          VMOV.F32        S6, #-1.0
          VADD.F32        S2, S2, S2
          VADD.F32        S4, S4, S4
          VADD.F32        S0, S0, S0
          VADD.F32        S16, S2, S6
          VADD.F32        S18, S4, S6
          VADD.F32        S20, S0, S6
        v21 = Entity::getLevel(_R4);
          VSTR            S16, [SP,#0x60+var_54]
          VSTR            S18, [SP,#0x60+var_50]
        v22 = &v28;
        __asm { VSTR            S20, [SP,#0x60+var_4C] }
LABEL_13:
        v27 = Level::addParticle(v21, 26, (int)v22);
        return (*(int (__fastcall **)(Arrow *, int))(*(_DWORD *)_R4 + 768))(_R4, v27);
      }
  else if ( *((_DWORD *)_R4 + 861) != *((_DWORD *)_R4 + 862)
         || (result = SynchedEntityData::getInt8((Arrow *)((char *)_R4 + 176), 18), result >= 1) )
    v23 = *((float *)_R4 + 19);
    v24 = *((float *)_R4 + 20);
    v29 = v23;
    v30 = v24;
      VSUB.F32        S2, S16, S2
    v25 = Entity::getLevel(_R4);
    v26 = Level::addParticle(v25, 26, (int)&v28);
    (*(void (__fastcall **)(Arrow *, int))(*(_DWORD *)_R4 + 768))(_R4, v26);
    v21 = Entity::getLevel(_R4);
    v22 = &v28;
    goto LABEL_13;
  return result;
}


void __fastcall Arrow::readAdditionalSaveData(Arrow *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r8@1
  Arrow *v3; // r9@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  int v7; // r0@4
  void *v8; // r0@6
  void *v9; // r0@7
  int v10; // r4@8
  void *v11; // r0@10
  ProjectileComponent *v13; // r0@12
  void *v19; // r0@13
  int v20; // r0@14
  void *v21; // r0@16
  void *v22; // r0@17
  __int64 v23; // r4@18
  int v24; // r0@18
  unsigned int v25; // r1@18
  unsigned int v26; // r1@20
  unsigned int v27; // r0@20
  void *v28; // r0@25
  signed int v29; // r4@26
  void *v30; // r0@26
  ListTag *v31; // r6@28
  void *v32; // r0@28
  int v33; // r5@30
  CompoundTag *v34; // r0@31
  int v35; // r0@31
  int v36; // r2@32
  int v37; // r3@32
  int v38; // r7@32
  void (__fastcall *v39)(Arrow *, int); // r4@35
  int v40; // r0@35
  void *v41; // r0@35
  unsigned int *v42; // r2@37
  signed int v43; // r1@39
  unsigned int *v44; // r2@41
  signed int v45; // r1@43
  unsigned int *v46; // r2@45
  signed int v47; // r1@47
  unsigned int *v48; // r2@49
  signed int v49; // r1@51
  unsigned int *v50; // r2@53
  signed int v51; // r1@55
  unsigned int *v52; // r2@57
  signed int v53; // r1@59
  unsigned int *v54; // r2@61
  signed int v55; // r1@63
  unsigned int *v56; // r2@65
  signed int v57; // r1@67
  unsigned int *v58; // r2@69
  signed int v59; // r1@71
  unsigned int *v60; // r2@73
  signed int v61; // r1@75
  unsigned int *v62; // r2@77
  signed int v63; // r1@79
  unsigned int *v64; // r2@81
  signed int v65; // r1@83
  unsigned int *v66; // r2@129
  signed int v67; // r1@131
  int v68; // [sp+4h] [bp-ACh]@35
  char v69; // [sp+8h] [bp-A8h]@31
  int v70; // [sp+Ch] [bp-A4h]@31
  int v71; // [sp+10h] [bp-A0h]@31
  int v72; // [sp+14h] [bp-9Ch]@31
  int v73; // [sp+1Ch] [bp-94h]@28
  int v74; // [sp+24h] [bp-8Ch]@26
  int v75; // [sp+2Ch] [bp-84h]@18
  int v76; // [sp+34h] [bp-7Ch]@17
  int v77; // [sp+3Ch] [bp-74h]@14
  int v78; // [sp+44h] [bp-6Ch]@11
  int v79; // [sp+4Ch] [bp-64h]@8
  int v80; // [sp+54h] [bp-5Ch]@7
  int v81; // [sp+5Ch] [bp-54h]@4
  int v82; // [sp+64h] [bp-4Ch]@3
  int v83; // [sp+6Ch] [bp-44h]@2
  int v84; // [sp+74h] [bp-3Ch]@1
  int v85; // [sp+78h] [bp-38h]@31
  int v86; // [sp+7Ch] [bp-34h]@31
  int v87; // [sp+80h] [bp-30h]@31
  int v88; // [sp+84h] [bp-2Ch]@31

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v84, "xTile");
  *((_DWORD *)v3 + 853) = CompoundTag::getShort((int)v2, (const void **)&v84);
  v4 = (void *)(v84 - 12);
  if ( (int *)(v84 - 12) != &dword_28898C0 )
  {
    v42 = (unsigned int *)(v84 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
    }
    else
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v83, "yTile");
  *((_DWORD *)v3 + 854) = CompoundTag::getShort((int)v2, (const void **)&v83);
  v5 = (void *)(v83 - 12);
  if ( (int *)(v83 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v83 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v82, "zTile");
  *((_DWORD *)v3 + 855) = CompoundTag::getShort((int)v2, (const void **)&v82);
  v6 = (void *)(v82 - 12);
  if ( (int *)(v82 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v82 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v81, "inGround");
  v7 = CompoundTag::getByte((int)v2, (const void **)&v81);
  if ( v7 != 1 )
    LOBYTE(v7) = 0;
  *((_BYTE *)v3 + 3424) = v7;
  v8 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v81 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v80, "player");
  *((_BYTE *)v3 + 3432) = CompoundTag::getBoolean((int)v2, (const void **)&v80);
  v9 = (void *)(v80 - 12);
  if ( (int *)(v80 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v80 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v79, "enchantPower");
  v10 = CompoundTag::getByte((int)v2, (const void **)&v79);
  if ( Entity::getProjectileComponent(v3) )
    *(_DWORD *)(Entity::getProjectileComponent(v3) + 104) = v10;
  v11 = (void *)(v79 - 12);
  if ( (int *)(v79 - 12) != &dword_28898C0 )
    v52 = (unsigned int *)(v79 - 4);
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v78, "enchantPunch");
  _R4 = CompoundTag::getByte((int)v2, (const void **)&v78);
    v13 = (ProjectileComponent *)Entity::getProjectileComponent(v3);
    __asm
      VMOV            S0, R4
      VLDR            S2, =1.6
      VCVT.F32.U32    S0, S0
      VMUL.F32        S0, S0, S2
      VMOV            R1, S0
    ProjectileComponent::setKnockbackForce(v13, _R1);
  v19 = (void *)(v78 - 12);
  if ( (int *)(v78 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v78 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v77, "enchantFlame");
  v20 = CompoundTag::getByte((int)v2, (const void **)&v77);
  *((_DWORD *)v3 + 859) = v20;
  if ( v20 )
    (*(void (__fastcall **)(Arrow *, signed int))(*(_DWORD *)v3 + 504))(v3, 100);
  v21 = (void *)(v77 - 12);
  if ( (int *)(v77 - 12) != &dword_28898C0 )
    v56 = (unsigned int *)(v77 - 4);
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v76, "enchantInfinity");
  *((_DWORD *)v3 + 860) = CompoundTag::getByte((int)v2, (const void **)&v76);
  v22 = (void *)(v76 - 12);
  if ( (int *)(v76 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v76 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  sub_21E94B4((void **)&v75, "OwnerID");
  v23 = CompoundTag::getInt64((int)v2, (const void **)&v75);
  v24 = SynchedEntityData::_get((Arrow *)((char *)v3 + 176), 17);
  v25 = *(_DWORD *)(v24 + 4);
  if ( (unsigned __int8)v25 == 7 && *(_QWORD *)(v24 + 16) != v23 )
    *(_QWORD *)(v24 + 16) = v23;
    *(_BYTE *)(v24 + 8) = 1;
    v26 = v25 >> 16;
    v27 = *((_WORD *)v3 + 94);
    if ( v27 >= v26 )
      LOWORD(v27) = v26;
    *((_WORD *)v3 + 94) = v27;
    if ( *((_WORD *)v3 + 95) > v26 )
      LOWORD(v26) = *((_WORD *)v3 + 95);
    *((_WORD *)v3 + 95) = v26;
  v28 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v75 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  sub_21E94B4((void **)&v74, "mobEffects");
  v29 = CompoundTag::contains((int)v2, (const void **)&v74, 9);
  v30 = (void *)(v74 - 12);
  if ( (int *)(v74 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v74 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  if ( v29 == 1 )
    sub_21E94B4((void **)&v73, "mobEffects");
    v31 = (ListTag *)CompoundTag::getList((int)v2, (const void **)&v73);
    v32 = (void *)(v73 - 12);
    if ( (int *)(v73 - 12) != &dword_28898C0 )
      v66 = (unsigned int *)(v73 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v67 = __ldrex(v66);
        while ( __strex(v67 - 1, v66) );
      }
      else
        v67 = (*v66)--;
      if ( v67 <= 0 )
        j_j_j_j__ZdlPv_9(v32);
    if ( ListTag::size(v31) >= 1 )
      v33 = 0;
        v34 = (CompoundTag *)ListTag::get(v31, v33);
        MobEffectInstance::load((MobEffectInstance *)&v69, v34);
        v85 = *(_DWORD *)&v69;
        v86 = v70;
        v87 = v71;
        v88 = v72;
        v35 = *((_DWORD *)v3 + 862);
        if ( v35 == *((_DWORD *)v3 + 863) )
        {
          std::vector<MobEffectInstance,std::allocator<MobEffectInstance>>::_M_emplace_back_aux<MobEffectInstance const&>(
            (unsigned __int64 *)((char *)v3 + 3444),
            (int)&v85);
        }
        else
          v36 = v86;
          v37 = v87;
          v38 = v88;
          *(_DWORD *)v35 = v85;
          *(_DWORD *)(v35 + 4) = v36;
          *(_DWORD *)(v35 + 8) = v37;
          *(_DWORD *)(v35 + 12) = v38;
          *((_DWORD *)v3 + 862) += 16;
        ++v33;
      while ( v33 < ListTag::size(v31) );
  v39 = *(void (__fastcall **)(Arrow *, int))(*(_DWORD *)v3 + 676);
  sub_21E94B4((void **)&v68, "auxValue");
  v40 = CompoundTag::getByte((int)v2, (const void **)&v68);
  v39(v3, v40);
  v41 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v68 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
}


_BYTE *__fastcall Arrow::playerTouch(Arrow *this, Player *a2)
{
  Player *v2; // r5@1
  Arrow *v3; // r4@1
  Level *v4; // r0@1
  _BYTE *result; // r0@1
  Level *v7; // r0@9
  char *v8; // r6@9
  int v14; // r5@9
  BlockSource *v15; // r6@9
  int v16; // r0@9
  PlayerInventoryProxy *v17; // r0@10
  int v18; // [sp+0h] [bp-70h]@0
  char v19; // [sp+8h] [bp-68h]@8
  _BYTE *v20; // [sp+10h] [bp-60h]@17
  void *v21; // [sp+2Ch] [bp-44h]@15
  void *ptr; // [sp+3Ch] [bp-34h]@13

  v2 = a2;
  v3 = this;
  v4 = (Level *)Entity::getLevel(this);
  result = (_BYTE *)Level::isClientSide(v4);
  if ( !result )
  {
    if ( *((_BYTE *)v3 + 3424) )
      goto LABEL_21;
    result = (_BYTE *)*((_DWORD *)v3 + 787);
    _ZF = result == 0;
    if ( result )
    {
      result = (_BYTE *)*result;
      _ZF = result == 0;
    }
    if ( !_ZF )
LABEL_21:
      result = (_BYTE *)*((_BYTE *)v3 + 3432);
      if ( *((_BYTE *)v3 + 3432) )
      {
        result = (_BYTE *)Entity::getShakeTime(v3);
        if ( (signed int)result <= 0 )
        {
          (*(void (__fastcall **)(char *, Arrow *))(*(_DWORD *)v3 + 772))(&v19, v3);
          if ( *((_DWORD *)v3 + 860) )
          {
            v7 = (Level *)Entity::getLevel(v3);
            v8 = Level::getRandom(v7);
            _R5 = Random::_genRandInt32((Random *)v8);
            _R0 = Random::_genRandInt32((Random *)v8);
            __asm
            {
              VMOV            S0, R0
              VCVT.F64.U32    D8, S0
              VMOV            S0, R5
              VCVT.F64.U32    D9, S0
            }
            v14 = Entity::getLevel(v3);
            v15 = (BlockSource *)Entity::getRegion(v3);
            v16 = (*(int (__fastcall **)(Arrow *))(*(_DWORD *)v3 + 52))(v3);
              VLDR            D0, =2.32830644e-10
              VMUL.F64        D1, D8, D0
              VMUL.F64        D0, D9, D0
              VCVT.F32.F64    S2, D1
              VCVT.F32.F64    S0, D0
              VSUB.F32        S0, S0, S2
              VLDR            S2, =1400.0
              VMUL.F32        S0, S0, S2
              VLDR            S2, =2000.0
              VADD.F32        S0, S0, S2
              VCVTR.S32.F32   S0, S0
              VSTR            S0, [SP,#0x70+var_70]
            Level::broadcastDimensionEvent(v14, v15, 1030, v16, v18);
            (*(void (__fastcall **)(Arrow *))(*(_DWORD *)v3 + 44))(v3);
          }
          else
            v17 = (PlayerInventoryProxy *)Player::getSupplies(v2);
            if ( PlayerInventoryProxy::canAdd(v17, (const ItemInstance *)&v19) == 1 && Player::take(v2, v3, 1) == 1 )
              (*(void (__fastcall **)(Arrow *))(*(_DWORD *)v3 + 44))(v3);
          if ( ptr )
            operator delete(ptr);
          if ( v21 )
            operator delete(v21);
          result = v20;
          if ( v20 )
            result = (_BYTE *)(*(int (**)(void))(*(_DWORD *)v20 + 4))();
        }
      }
  }
  return result;
}


int __fastcall Arrow::setEnchantPunch(Arrow *this, int a2)
{
  Entity *v3; // r4@1
  int result; // r0@1
  ProjectileComponent *v10; // r0@2

  _R5 = a2;
  v3 = this;
  result = Entity::getProjectileComponent(this);
  if ( result )
  {
    __asm
    {
      VMOV            S0, R5
      VLDR            S2, =1.6
      VCVT.F32.S32    S0, S0
      VMUL.F32        S0, S0, S2
      VMOV            R5, S0
    }
    v10 = (ProjectileComponent *)Entity::getProjectileComponent(v3);
    result = j_j_j__ZN19ProjectileComponent17setKnockbackForceEf(v10, _R5);
  }
  return result;
}


void __fastcall Arrow::~Arrow(Arrow *this)
{
  Entity *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26FD5B4;
  v2 = (void *)*((_DWORD *)this + 861);
  if ( v2 )
    operator delete(v2);
  Entity::~Entity(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


ItemInstance *__fastcall Arrow::getPickupItem(Arrow *this, int a2)
{
  ItemInstance *v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1

  v2 = this;
  v3 = Item::mArrow;
  v4 = SynchedEntityData::getInt8((SynchedEntityData *)(a2 + 176), 18);
  return ItemInstance::ItemInstance(v2, v3, 1, v4);
}


int __fastcall Arrow::getShadowRadius(Arrow *this)
{
  int *v1; // r1@1

  v1 = &dword_177E880;
  if ( *((_BYTE *)this + 3424) )
    v1 = &dword_177E884;
  return *v1;
}


int __fastcall Arrow::reloadHardcoded(int result, int a2, unsigned __int64 *a3)
{
  int v3; // r6@1
  unsigned __int64 *v5; // r4@1
  unsigned int v6; // r10@5
  unsigned __int64 v7; // kr00_8@5
  unsigned int v8; // r4@5
  int v9; // r7@5
  int v10; // r8@6
  _DWORD *v11; // r9@6
  int v12; // r6@6
  _DWORD *v13; // r1@8
  size_t v14; // r2@8
  Entity *v15; // r5@12
  __int64 v16; // kr08_8@17
  int v17; // r0@17
  unsigned int v18; // r1@17
  unsigned int v19; // r1@19
  unsigned int v20; // r0@19
  char v21; // r0@24
  int v26; // r4@32
  ProjectileComponent *v27; // r0@37
  ProjectileComponent *v29; // r0@40
  signed int v31; // r0@41
  unsigned int *v32; // r2@53
  signed int v33; // r1@55
  int v34; // [sp+0h] [bp-40h]@6
  void *s1; // [sp+8h] [bp-38h]@5

  v3 = result;
  _ZF = a2 == 2;
  v5 = a3;
  if ( a2 == 2 )
  {
    result = *(_BYTE *)(result + 3081);
    _ZF = result == 0;
  }
  if ( _ZF )
    sub_21E94B4(&s1, "other");
    v6 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
    v7 = *v5;
    v8 = v6 % (*v5 >> 32);
    v9 = *(_DWORD *)(v7 + 4 * v8);
    if ( v9 )
    {
      v10 = *(_DWORD *)v9;
      v34 = v3;
      v11 = s1;
      v12 = *(_DWORD *)(*(_DWORD *)v9 + 32);
      while ( 1 )
      {
        if ( v12 == v6 )
        {
          v13 = *(_DWORD **)(v10 + 8);
          v14 = *(v11 - 3);
          if ( v14 == *(v13 - 3) && !memcmp(v11, v13, v14) )
            break;
        }
        if ( *(_DWORD *)v10 )
          v12 = *(_DWORD *)(v7 + 32);
          v9 = v10;
          v10 = *(_DWORD *)v10;
          if ( *(_DWORD *)(v7 + 32) % HIDWORD(v7) == v8 )
            continue;
        v15 = 0;
        v3 = v34;
        goto LABEL_14;
      }
      v3 = v34;
      if ( v9 )
        if ( *(_DWORD *)v9 )
          v15 = *(Entity **)(*(_DWORD *)v9 + 24);
        else
          v15 = 0;
      else
    }
    else
      v15 = 0;
LABEL_14:
    if ( v11 - 3 != &dword_28898C0 )
      v32 = v11 - 1;
      if ( &pthread_create )
        __dmb();
        do
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v11 - 3);
    if ( v15 )
      if ( Entity::hasCategory((int)v15, 2) == 1 )
        v16 = *(_QWORD *)Entity::getUniqueID(v15);
        v17 = SynchedEntityData::_get((SynchedEntityData *)(v3 + 176), 5);
        v18 = *(_DWORD *)(v17 + 4);
        if ( (unsigned __int8)v18 == 7 && *(_QWORD *)(v17 + 16) != v16 )
          *(_QWORD *)(v17 + 16) = v16;
          *(_BYTE *)(v17 + 8) = 1;
          v19 = v18 >> 16;
          v20 = *(_WORD *)(v3 + 188);
          if ( v20 >= v19 )
            LOWORD(v20) = v19;
          *(_WORD *)(v3 + 188) = v20;
          if ( *(_WORD *)(v3 + 190) > v19 )
            LOWORD(v19) = *(_WORD *)(v3 + 190);
          *(_WORD *)(v3 + 190) = v19;
      v21 = Entity::hasCategory((int)v15, 1);
      v21 = 1;
    *(_BYTE *)(v3 + 3432) = v21;
    if ( Entity::getProjectileComponent((Entity *)v3) )
      _R0 = Entity::getProjectileComponent((Entity *)v3);
      __asm { VLDR            S16, [R0,#0xB8] }
      __asm { VLDR            S16, =0.0 }
      Entity::getProjectileComponent((Entity *)v3);
      __asm { VSTR            S16, [R0,#0xB8] }
      v26 = *(_DWORD *)(Entity::getProjectileComponent((Entity *)v3) + 104);
      v26 = 0;
      *(_DWORD *)(Entity::getProjectileComponent((Entity *)v3) + 104) = v26;
      v27 = (ProjectileComponent *)Entity::getProjectileComponent((Entity *)v3);
      _R0 = ProjectileComponent::getKnockbackForce(v27);
      __asm
        VMOV            S0, R0
        VLDR            S2, =1.6
        VCVTR.S32.F32   S0, S0
        VCVT.F32.S32    S0, S0
        VMUL.F32        S16, S0, S2
      v29 = (ProjectileComponent *)Entity::getProjectileComponent((Entity *)v3);
      __asm { VMOV            R1, S16 }
      ProjectileComponent::setKnockbackForce(v29, _R1);
    v31 = *(_DWORD *)(v3 + 3436);
    if ( v31 >= 1 )
      (*(void (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 504))(v3, 100);
      v31 = *(_DWORD *)(v3 + 3436);
    if ( v31 )
    result = Entity::getStatusFlag(v3, 0);
    if ( result == 1 )
      result = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v3 + 504))(v3, 100);
  return result;
}


void __fastcall Arrow::applyParticleColor(Arrow *this, Particle *a2)
{
  Particle *v2; // r10@1
  Arrow *v3; // r5@1
  int v4; // r0@2
  int v5; // r2@3
  int v6; // r3@3
  char *v7; // r0@5
  int v8; // r1@5
  __int64 v9; // r2@5
  int v10; // r5@5
  unsigned int *v11; // r1@6
  unsigned int v12; // r0@8
  unsigned int *v13; // r6@12
  unsigned int v14; // r0@14
  int v15; // kr00_4@19
  signed int v16; // r1@19
  __int64 v17; // r0@21
  __int64 v18; // r2@22
  int v19; // r7@22
  char *v20; // r9@23
  unsigned int v21; // r3@23
  unsigned int v22; // r2@25
  unsigned int v23; // r8@25
  int v24; // r12@32
  __int64 v25; // kr08_8@32
  char *v26; // r2@32
  int v27; // r2@33
  char *v28; // r3@33
  __int64 v29; // kr10_8@34
  __int64 v30; // kr18_8@34
  char *v31; // r7@37
  int v32; // r1@40
  int v33; // r2@40
  int v34; // r3@40
  int v35; // r12@40
  int v36; // [sp+0h] [bp-58h]@40
  int v37; // [sp+4h] [bp-54h]@40
  int v38; // [sp+8h] [bp-50h]@40
  int v39; // [sp+Ch] [bp-4Ch]@40
  Potion *v40; // [sp+10h] [bp-48h]@5
  int v41; // [sp+14h] [bp-44h]@5
  int v42; // [sp+18h] [bp-40h]@5
  __int64 v43; // [sp+1Ch] [bp-3Ch]@5
  int v44; // [sp+24h] [bp-34h]@5
  void *ptr; // [sp+2Ch] [bp-2Ch]@3
  char *v46; // [sp+30h] [bp-28h]@3
  char *v47; // [sp+34h] [bp-24h]@3

  v2 = a2;
  v3 = this;
  if ( a2 )
  {
    v4 = SynchedEntityData::getInt8((Arrow *)((char *)this + 176), 18);
    if ( (_BYTE)v4 )
    {
      ptr = 0;
      v46 = 0;
      v47 = 0;
      v5 = *((_DWORD *)v3 + 861);
      v6 = *((_DWORD *)v3 + 862);
      if ( v5 == v6 )
      {
        Potion::getPotion((Potion *)&v40, v4 - 1);
        v7 = Potion::getMobEffect(v40);
        v8 = *(_DWORD *)v7;
        v9 = *(_QWORD *)(v7 + 4);
        v44 = *((_DWORD *)v7 + 3);
        v42 = v8;
        v43 = v9;
        v10 = v41;
        if ( v41 )
        {
          v11 = (unsigned int *)(v41 + 4);
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
            v13 = (unsigned int *)(v10 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
            if ( &pthread_create )
            {
              __dmb();
              do
                v14 = __ldrex(v13);
              while ( __strex(v14 - 1, v13) );
            }
            else
              v14 = (*v13)--;
            if ( v14 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
        }
        v15 = MobEffectInstance::getDuration((MobEffectInstance *)&v42);
        v16 = 1;
        if ( v15 / 8 > 1 )
          v16 = v15 / 8;
        MobEffectInstance::setDuration((MobEffectInstance *)&v42, v16);
        HIDWORD(v17) = v46;
        if ( v46 == v47 )
          LODWORD(v17) = ptr;
          v20 = 0;
          v21 = (v46 - (_BYTE *)ptr) >> 4;
          if ( !v21 )
            v21 = 1;
          v22 = v21 + ((v46 - (_BYTE *)ptr) >> 4);
          v23 = v21 + ((v46 - (_BYTE *)ptr) >> 4);
          if ( 0 != v22 >> 28 )
            v23 = 0xFFFFFFF;
          if ( v22 < v21 )
          if ( v23 )
            if ( v23 >= 0x10000000 )
              sub_21E57F4();
            v20 = (char *)operator new(16 * v23);
            v17 = *(_QWORD *)&ptr;
          v24 = v43;
          v25 = *(__int64 *)((char *)&v43 + 4);
          *(_DWORD *)&v20[HIDWORD(v17) - v17] = v42;
          v26 = &v20[HIDWORD(v17) - v17];
          *((_DWORD *)v26 + 1) = v24;
          *((_QWORD *)v26 + 1) = v25;
          if ( HIDWORD(v17) == (_DWORD)v17 )
            HIDWORD(v17) = v20;
            v27 = v17;
            v28 = v20;
              v29 = *(_QWORD *)v27;
              v30 = *(_QWORD *)(v27 + 8);
              v27 += 16;
              *(_QWORD *)v28 = v29;
              *((_QWORD *)v28 + 1) = v30;
              v28 += 16;
            while ( HIDWORD(v17) != v27 );
            HIDWORD(v17) = &v20[((HIDWORD(v17) - 16 - v17) & 0xFFFFFFF0) + 16];
          v31 = (char *)(HIDWORD(v17) + 16);
          if ( (_DWORD)v17 )
            operator delete((void *)v17);
          ptr = v20;
          v46 = v31;
          v47 = &v20[16 * v23];
        else
          v18 = v43;
          v19 = v44;
          *(_DWORD *)v46 = v42;
          *(_QWORD *)(HIDWORD(v17) + 4) = v18;
          *(_DWORD *)(HIDWORD(v17) + 12) = v19;
          v46 = (char *)(HIDWORD(v17) + 16);
      }
      else
        std::vector<MobEffectInstance,std::allocator<MobEffectInstance>>::_M_range_insert<__gnu_cxx::__normal_iterator<MobEffectInstance*,std::vector<MobEffectInstance,std::allocator<MobEffectInstance>>>>(
          (signed int)&ptr,
          0,
          v5,
          v6);
      MobEffectInstance::getColorValue((int)&v36, (__int64 *)&ptr);
      v32 = v37;
      v33 = v38;
      v34 = v39;
      v35 = (int)v2 + 68;
      *(_DWORD *)v35 = v36;
      *(_DWORD *)(v35 + 4) = v32;
      *(_DWORD *)(v35 + 8) = v33;
      *(_DWORD *)(v35 + 12) = v34;
      if ( ptr )
        operator delete(ptr);
    }
  }
}


int __fastcall Arrow::setEnchantInfinity(int result, int a2)
{
  *(_DWORD *)(result + 3440) = a2;
  return result;
}


int __fastcall Arrow::Arrow(int a1, Entity *a2, int a3)
{
  int v3; // r5@1
  BlockSource *v6; // r7@1
  void *v7; // r0@1
  float v14; // r1@2
  float v17; // r1@2
  float v20; // r1@2
  float v23; // r1@2
  unsigned int *v27; // r2@3
  signed int v28; // r1@5
  float v29; // [sp+4h] [bp-6Ch]@2
  char v30; // [sp+10h] [bp-60h]@2
  int v31; // [sp+18h] [bp-58h]@2
  int v33; // [sp+20h] [bp-50h]@2
  int v34; // [sp+24h] [bp-4Ch]@2
  int v35; // [sp+2Ch] [bp-44h]@2
  int v36; // [sp+30h] [bp-40h]@1

  v3 = (int)a2;
  _R4 = a1;
  _R8 = a3;
  v6 = (BlockSource *)Entity::getRegion(a2);
  EntityTypeToString((void **)&v36, 0x400050u, 1);
  Entity::Entity(_R4, v6, (int **)&v36);
  v7 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
  {
    v27 = (unsigned int *)(v36 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    }
    else
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  *(_DWORD *)_R4 = &off_26FD5B4;
  *(_DWORD *)(_R4 + 3412) = -1;
  *(_DWORD *)(_R4 + 3416) = -1;
  *(_DWORD *)(_R4 + 3420) = -1;
  *(_BYTE *)(_R4 + 3424) = 0;
  *(_DWORD *)(_R4 + 3428) = 0;
  *(_BYTE *)(_R4 + 3432) = Entity::hasCategory(v3, 1);
  *(_DWORD *)(_R4 + 3436) = 0;
  *(_DWORD *)(_R4 + 3440) = 0;
  *(_DWORD *)(_R4 + 3444) = 0;
  *(_DWORD *)(_R4 + 3448) = 0;
  *(_DWORD *)(_R4 + 3452) = 0;
  MovementInterpolator::MovementInterpolator(_R4 + 3456);
  Arrow::_defineEntityData((Arrow *)_R4);
  *(_DWORD *)(_R4 + 248) = 27;
  Entity::getAttachPos((AABB *)&v31, _R4, 3, 0);
  __asm
    VLDR            S18, =-0.1
    VLDR            S0, [SP,#0x70+var_54]
    VADD.F32        S0, S0, S18
  v34 = v31;
  __asm { VSTR            S0, [SP,#0x70+var_48] }
  v35 = v33;
  Entity::getRotation((Entity *)&v30, v3);
  Entity::moveTo(_R4, (int)&v34);
  __asm { VLDR            S0, [R4,#0x7C] }
  _R0 = &mce::Math::DEGRAD;
    VLDR            S16, [R0]
    VMUL.F32        S0, S16, S0
    VMOV            R0, S0
  _R7 = mce::Math::cos(_R0, v14);
    VLDR            S0, [R4,#0x7C]
  _R0 = mce::Math::sin(_R0, v17);
    VMOV            S20, R7
    VLDR            S0, =0.16
    VLDR            S4, [R4,#0x48]
    VMOV            S22, R0
    VMUL.F32        S2, S20, S0
    VMUL.F32        S0, S22, S0
    VSUB.F32        S2, S4, S2
    VSTR            S2, [R4,#0x48]
    VLDR            S2, [R4,#0x4C]
    VADD.F32        S2, S2, S18
    VSTR            S2, [R4,#0x4C]
    VLDR            S2, [R4,#0x50]
    VSUB.F32        S0, S2, S0
    VSTR            S0, [R4,#0x50]
  (*(void (__fastcall **)(int, int))(*(_DWORD *)_R4 + 48))(_R4, _R4 + 72);
  *(_DWORD *)(_R4 + 316) = 0;
    VLDR            S0, [R4,#0x78]
  _R7 = mce::Math::cos(_R0, v20);
  _R0 = mce::Math::sin(_R0, v23);
    VMOV.F32        S6, #1.5
    VMOV            S0, R8
    VMOV            S4, R0
    VMOV            S2, R7
    VNEG.F32        S4, S4
    VMUL.F32        S0, S0, S6
    VMOV            R2, S0
    VNMUL.F32       S0, S22, S2
    VMUL.F32        S2, S2, S20
    VSTR            S0, [SP,#0x70+var_6C]
    VSTR            S4, [SP,#0x70+var_68]
    VSTR            S2, [SP,#0x70+var_64]
  Arrow::shoot((Arrow *)_R4, (const Vec3 *)&v29, _R2, 1.0, (const Vec3 *)(v3 + 108));
  Entity::enableAutoSendPosRot((Entity *)_R4, 1);
  return _R4;
}


int __fastcall Arrow::lerpMotion(Arrow *this, const Vec3 *a2)
{
  Arrow *v3; // r4@1
  ProjectileComponent *v4; // r0@2
  int result; // r0@2
  float v6; // r1@3
  int v12; // r6@7
  __int64 v13; // r0@7
  __int64 v14; // r2@7
  int v15; // r0@7
  __int64 v16; // r0@7
  __int64 v17; // r2@7
  int v18; // r0@7

  _R5 = a2;
  v3 = this;
  if ( Entity::getProjectileComponent(this) )
  {
    v4 = (ProjectileComponent *)Entity::getProjectileComponent(v3);
    result = j_j_j__ZN19ProjectileComponent10lerpMotionERK4Vec3(v4, _R5);
  }
  else
    *((_DWORD *)v3 + 27) = *(_DWORD *)_R5;
    *((_DWORD *)v3 + 28) = *((_DWORD *)_R5 + 1);
    *((_DWORD *)v3 + 29) = *((_DWORD *)_R5 + 2);
    result = 0x7FFFFFFF;
    v6 = *((float *)v3 + 32);
    _ZF = (LODWORD(v6) & 0x7FFFFFFF) == 0;
    if ( !(LODWORD(v6) & 0x7FFFFFFF) )
    {
      v6 = *((float *)v3 + 33);
      _ZF = (LODWORD(v6) & 0x7FFFFFFF) == 0;
    }
    if ( _ZF )
      __asm
      {
        VLDR            S0, [R5]
        VLDR            S2, [R5,#8]
        VMUL.F32        S0, S0, S0
        VMUL.F32        S2, S2, S2
        VADD.F32        S0, S2, S0
        VMOV            R0, S0
      }
      v12 = mce::Math::sqrt(_R0, v6);
      LODWORD(v13) = *(_DWORD *)_R5;
      HIDWORD(v13) = *((_DWORD *)_R5 + 2);
      v15 = mce::Math::atan2(v13, v14);
      v16 = __PAIR__(v12, mce::operator*(v15, 1113927392));
      *((_DWORD *)v3 + 31) = v16;
      *((_DWORD *)v3 + 33) = v16;
      LODWORD(v16) = *((_DWORD *)_R5 + 1);
      v18 = mce::Math::atan2(v16, v17);
      result = mce::operator*(v18, 1113927392);
      *((_DWORD *)v3 + 30) = result;
      *((_DWORD *)v3 + 32) = result;
  return result;
}


unsigned int __fastcall Arrow::_defineEntityData(Arrow *this)
{
  Arrow *v1; // r4@1
  SynchedEntityData *v2; // r5@1
  int v3; // r7@2
  _BYTE *v4; // r0@2
  _BYTE *v5; // r1@2
  int v6; // r0@2
  unsigned int v7; // r0@4
  signed __int16 v8; // r1@4
  unsigned int result; // r0@9
  int v10; // r5@10
  _BYTE *v11; // r0@10
  _BYTE *v12; // r1@10
  int v13; // r0@10
  unsigned int v14; // r0@12
  signed __int16 v15; // r1@12

  v1 = this;
  v2 = (Arrow *)((char *)this + 176);
  if ( !SynchedEntityData::_find((Arrow *)((char *)this + 176), 17) )
  {
    SynchedEntityData::_resizeToContain(v2, 17);
    v3 = *(_DWORD *)v2;
    v4 = operator new(0x18u);
    v5 = v4;
    v4[4] = 7;
    *((_WORD *)v4 + 3) = 17;
    v4[8] = 1;
    *(_DWORD *)v4 = &off_26F0DC8;
    *((_DWORD *)v4 + 4) = 0;
    *((_DWORD *)v4 + 5) = 0;
    v6 = *(_DWORD *)(v3 + 68);
    *(_DWORD *)(v3 + 68) = v5;
    if ( v6 )
      (*(void (**)(void))(*(_DWORD *)v6 + 4))();
    v7 = *((_WORD *)v1 + 94);
    v8 = 17;
    if ( v7 >= 0x11 )
      LOWORD(v7) = 17;
    *((_WORD *)v1 + 94) = v7;
    if ( (unsigned int)*((_WORD *)v1 + 95) > 0x11 )
      v8 = *((_WORD *)v1 + 95);
    *((_WORD *)v1 + 95) = v8;
  }
  result = SynchedEntityData::_find(v2, 18);
  if ( !result )
    SynchedEntityData::_resizeToContain(v2, 18);
    v10 = *(_DWORD *)v2;
    v11 = operator new(0xCu);
    v12 = v11;
    v11[4] = 0;
    *((_WORD *)v11 + 3) = 18;
    v11[8] = 1;
    *(_DWORD *)v11 = &off_26F1394;
    v11[9] = 0;
    v13 = *(_DWORD *)(v10 + 72);
    *(_DWORD *)(v10 + 72) = v12;
    if ( v13 )
      (*(void (**)(void))(*(_DWORD *)v13 + 4))();
    v14 = *((_WORD *)v1 + 94);
    v15 = 18;
    if ( v14 >= 0x12 )
      LOWORD(v14) = 18;
    *((_WORD *)v1 + 94) = v14;
    result = *((_WORD *)v1 + 95);
    if ( result > 0x12 )
      v15 = *((_WORD *)v1 + 95);
    *((_WORD *)v1 + 95) = v15;
  return result;
}


int __fastcall Arrow::_readItemEnchants(Arrow *this, const ItemInstance *a2, const ItemInstance *a3)
{
  Arrow *v3; // r4@1
  const ItemInstance *v4; // r5@1
  int v5; // r6@1
  const ItemInstance *v6; // r2@1
  const ItemInstance *v8; // r2@3
  ProjectileComponent *v13; // r0@4
  int v15; // r0@5
  const ItemInstance *v16; // r2@5
  int result; // r0@7

  v3 = this;
  v4 = a2;
  v5 = EnchantUtils::getEnchantLevel((EnchantUtils *)0x13, (int)a2, a3);
  if ( Entity::getProjectileComponent(v3) )
    *(_DWORD *)(Entity::getProjectileComponent(v3) + 104) = v5;
  _R6 = EnchantUtils::getEnchantLevel((EnchantUtils *)0x14, (int)v4, v6);
  {
    __asm
    {
      VMOV            S0, R6
      VLDR            S2, =1.6
      VCVT.F32.S32    S0, S0
      VMUL.F32        S16, S0, S2
    }
    v13 = (ProjectileComponent *)Entity::getProjectileComponent(v3);
    __asm { VMOV            R1, S16 }
    ProjectileComponent::setKnockbackForce(v13, _R1);
  }
  v15 = EnchantUtils::getEnchantLevel((EnchantUtils *)0x15, (int)v4, v8);
  *((_DWORD *)v3 + 859) = v15;
  if ( v15 >= 1 )
    (*(void (__fastcall **)(Arrow *, signed int))(*(_DWORD *)v3 + 504))(v3, 100);
  result = EnchantUtils::getEnchantLevel((EnchantUtils *)0x16, (int)v4, v16);
  *((_DWORD *)v3 + 860) = result;
  return result;
}


int __fastcall Arrow::setBaseDamage(Arrow *this, float a2)
{
  Entity *v3; // r4@1
  int result; // r0@1

  _R5 = a2;
  v3 = this;
  result = Entity::getProjectileComponent(this);
  if ( result )
  {
    __asm { VMOV            S16, R5 }
    result = Entity::getProjectileComponent(v3);
    __asm { VSTR            S16, [R0,#0xB8] }
  }
  return result;
}


char *__fastcall Arrow::getEffects(Arrow *this, int a2)
{
  int v2; // r5@1
  Arrow *v3; // r8@1
  int v4; // r2@1
  char *result; // r0@1
  int v6; // r3@1
  unsigned int v7; // r6@1
  int v8; // r12@5
  char *v9; // r5@5
  int v10; // r1@6
  int v11; // r6@6
  int v12; // r7@6
  int v13; // r4@6

  v2 = a2;
  v3 = this;
  v4 = *(_DWORD *)(a2 + 3444);
  result = 0;
  v6 = *(_DWORD *)(a2 + 3448);
  *(_DWORD *)v3 = 0;
  *((_DWORD *)v3 + 1) = 0;
  *((_DWORD *)v3 + 2) = 0;
  v7 = (v6 - v4) >> 4;
  if ( v7 )
  {
    if ( v7 >= 0x10000000 )
      sub_21E57F4();
    result = (char *)operator new(v6 - v4);
    v4 = *(_DWORD *)(v2 + 3444);
    v6 = *(_DWORD *)(v2 + 3448);
  }
  *(_DWORD *)v3 = result;
  *((_DWORD *)v3 + 1) = result;
  *((_DWORD *)v3 + 2) = &result[16 * v7];
  if ( v4 != v6 )
    v8 = -v4;
    v9 = result;
    do
    {
      v10 = *(_DWORD *)v4;
      v11 = *(_DWORD *)(v4 + 4);
      v12 = *(_DWORD *)(v4 + 8);
      v13 = *(_DWORD *)(v4 + 12);
      v4 += 16;
      *(_DWORD *)v9 = v10;
      *((_DWORD *)v9 + 1) = v11;
      *((_DWORD *)v9 + 2) = v12;
      *((_DWORD *)v9 + 3) = v13;
      v9 += 16;
    }
    while ( v6 != v4 );
    result += ((v6 - 16 + v8) & 0xFFFFFFF0) + 16;
  return result;
}


void __fastcall Arrow::~Arrow(Arrow *this)
{
  Arrow::~Arrow(this);
}


int __fastcall Arrow::getEffectCount(Arrow *this)
{
  return (*((_DWORD *)this + 862) - *((_DWORD *)this + 861)) >> 4;
}


int __fastcall Arrow::getEnchantPunch(Arrow *this)
{
  Entity *v1; // r4@1
  int result; // r0@2
  ProjectileComponent *v3; // r0@3

  v1 = this;
  if ( Entity::getProjectileComponent(this) )
  {
    v3 = (ProjectileComponent *)Entity::getProjectileComponent(v1);
    _R0 = ProjectileComponent::getKnockbackForce(v3);
    __asm
    {
      VMOV            S0, R0
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S0
    }
  }
  else
    result = 0;
  return result;
}


int __fastcall Arrow::shoot(Arrow *this, const Vec3 *a2, float a3, float a4, const Vec3 *a5)
{
  const Vec3 *v7; // r5@1
  ProjectileComponent *v14; // r0@2
  int result; // r0@2
  Level *v21; // r0@3
  char *v22; // r5@3
  unsigned int v25; // r6@7
  float v27; // r1@7
  int v29; // r5@9

  _R6 = a4;
  _R7 = a3;
  v7 = a2;
  _R4 = this;
  __asm
  {
    VMOV            S20, R6
    VMOV            S16, R7
  }
  _R8 = a5;
  if ( Entity::getProjectileComponent(this) )
    v14 = (ProjectileComponent *)Entity::getProjectileComponent(_R4);
    result = ProjectileComponent::shoot(v14, v7, _R7, _R6, a5, 0);
  else
    _R0 = *(_DWORD *)v7;
    *((_DWORD *)_R4 + 27) = *(_DWORD *)v7;
    _R1 = *((_DWORD *)v7 + 1);
    __asm { VMOV            S0, R0 }
    *((_DWORD *)_R4 + 28) = _R1;
    __asm { VMOV            S2, R1 }
    _R1 = *((float *)v7 + 2);
    __asm { VMUL.F32        S0, S0, S0 }
    *((float *)_R4 + 29) = _R1;
    __asm
    {
      VMUL.F32        S2, S2, S2
      VMOV            S4, R1
      VMUL.F32        S4, S4, S4
      VADD.F32        S0, S2, S0
      VADD.F32        S0, S0, S4
      VMOV            R0, S0
    }
    _R0 = mce::Math::sqrt(_R0, _R1);
      VMOV.F32        S18, #1.0
      VLDR            S2, [R4,#0x6C]
      VMOV            S0, R0
      VLDR            S4, [R4,#0x70]
      VLDR            S6, [R4,#0x74]
      VDIV.F32        S0, S18, S0
      VMUL.F32        S2, S2, S0
      VMUL.F32        S4, S4, S0
      VMUL.F32        S0, S6, S0
      VLDR            S6, =0.0075
      VMUL.F32        S20, S20, S6
      VSTR            S2, [R4,#0x6C]
      VSTR            S4, [R4,#0x70]
      VSTR            S0, [R4,#0x74]
    v21 = (Level *)Entity::getLevel(_R4);
    v22 = Level::getRandom(v21);
    Random::_genRandInt32((Random *)v22);
    _R0 = Random::nextGaussian((Random *)v22);
      VMOV.F32        S22, #-1.0
      VMUL.F32        S0, S0, S20
      VMOV.F32        S2, S18
    if ( !_ZF )
      __asm { VMOVNE.F32      S2, S22 }
      VMUL.F32        S0, S0, S2
      VADD.F32        S0, S0, S2
      VSTR            S0, [R4,#0x6C]
      VLDR            S2, [R4,#0x70]
      VSTR            S0, [R4,#0x70]
    v25 = Random::_genRandInt32((Random *)v22);
    if ( v25 & 0x8000000 )
      __asm { VMOVNE.F32      S18, S22 }
      VLDR            S2, [R4,#0x74]
      VMUL.F32        S0, S0, S18
      VMUL.F32        S0, S0, S16
      VMUL.F32        S2, S2, S16
      VLDR            S6, [R8]
      VMUL.F32        S4, S4, S16
      VLDR            S8, [R8,#4]
      VLDR            S10, [R8,#8]
      VADD.F32        S0, S10, S0
      VADD.F32        S2, S6, S2
      VADD.F32        S4, S8, S4
      VMUL.F32        S0, S0, S0
      VLDR            S4, [R8]
      VLDR            S6, [R4,#0x48]
      VADD.F32        S4, S6, S4
      VSTR            S4, [R4,#0x48]
      VLDR            S2, [R8,#4]
      VLDR            S4, [R4,#0x4C]
      VADD.F32        S2, S4, S2
      VSTR            S2, [R4,#0x4C]
      VLDR            S0, [R8,#8]
      VLDR            S2, [R4,#0x50]
      VSTR            S0, [R4,#0x50]
    v29 = mce::Math::sqrt(_R0, v27);
    _R0 = atan2f(*((float *)_R4 + 27), *((float *)_R4 + 29));
    _R1 = &mce::Math::RADDEG;
      VLDR            S16, [R1]
      VMUL.F32        S0, S16, S0
      VSTR            S0, [R4,#0x7C]
      VSTR            S0, [R4,#0x84]
    _R0 = atan2f(*((float *)_R4 + 28), *(float *)&v29);
    result = 0;
      VSTR            S0, [R4,#0x78]
      VSTR            S0, [R4,#0x80]
    *((_DWORD *)_R4 + 857) = 0;
  return result;
}


void __fastcall Arrow::addAdditionalSaveData(Arrow *this, CompoundTag *a2)
{
  CompoundTag *v2; // r9@1
  Arrow *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  int v9; // r0@7
  void *v10; // r0@9
  ProjectileComponent *v11; // r0@11
  void *v18; // r0@13
  void *v19; // r0@14
  void *v20; // r0@15
  SynchedEntityData *v21; // r8@16
  __int64 v22; // r0@16
  void *v23; // r0@16
  void *v24; // r7@17
  int v25; // r6@17
  int i; // r5@17
  int v27; // r0@18
  void *v28; // r0@25
  char v29; // r0@26
  void *v30; // r0@26
  unsigned int *v31; // r2@28
  signed int v32; // r1@30
  unsigned int *v33; // r2@32
  signed int v34; // r1@34
  unsigned int *v35; // r2@36
  signed int v36; // r1@38
  unsigned int *v37; // r2@40
  signed int v38; // r1@42
  unsigned int *v39; // r2@44
  signed int v40; // r1@46
  unsigned int *v41; // r2@48
  signed int v42; // r1@50
  unsigned int *v43; // r2@52
  signed int v44; // r1@54
  unsigned int *v45; // r2@56
  signed int v46; // r1@58
  unsigned int *v47; // r2@60
  signed int v48; // r1@62
  unsigned int *v49; // r2@64
  signed int v50; // r1@66
  unsigned int *v51; // r2@68
  signed int v52; // r1@70
  unsigned int *v53; // r2@72
  signed int v54; // r1@74
  int v55; // [sp+8h] [bp-90h]@26
  void *v56; // [sp+Ch] [bp-8Ch]@23
  int v57; // [sp+14h] [bp-84h]@23
  int v58; // [sp+18h] [bp-80h]@18
  int v59; // [sp+1Ch] [bp-7Ch]@18
  int v60; // [sp+24h] [bp-74h]@16
  int v61; // [sp+2Ch] [bp-6Ch]@15
  int v62; // [sp+34h] [bp-64h]@14
  int v63; // [sp+3Ch] [bp-5Ch]@10
  int v64; // [sp+44h] [bp-54h]@6
  int v65; // [sp+4Ch] [bp-4Ch]@5
  int v66; // [sp+54h] [bp-44h]@4
  int v67; // [sp+5Ch] [bp-3Ch]@3
  int v68; // [sp+64h] [bp-34h]@2
  int v69; // [sp+6Ch] [bp-2Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v69, "xTile");
  CompoundTag::putShort((int)v2, (const void **)&v69, *((_WORD *)v3 + 1706));
  v4 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
  {
    v31 = (unsigned int *)(v69 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
    }
    else
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v68, "yTile");
  CompoundTag::putShort((int)v2, (const void **)&v68, *((_WORD *)v3 + 1708));
  v5 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v68 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v67, "zTile");
  CompoundTag::putShort((int)v2, (const void **)&v67, *((_WORD *)v3 + 1710));
  v6 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v67 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v66, "inGround");
  CompoundTag::putByte((int)v2, (const void **)&v66, *((_BYTE *)v3 + 3424));
  v7 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v66 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v65, "player");
  CompoundTag::putBoolean((int)v2, (const void **)&v65, *((_BYTE *)v3 + 3432));
  v8 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v65 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v64, "enchantPower");
  if ( Entity::getProjectileComponent(v3) )
    v9 = *(_DWORD *)(Entity::getProjectileComponent(v3) + 104);
  else
    LOBYTE(v9) = 0;
  CompoundTag::putByte((int)v2, (const void **)&v64, v9);
  v10 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v64 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v63, "enchantPunch");
    v11 = (ProjectileComponent *)Entity::getProjectileComponent(v3);
    _R0 = ProjectileComponent::getKnockbackForce(v11);
    __asm
      VMOV            S0, R0
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S0
    LOBYTE(_R0) = 0;
  CompoundTag::putByte((int)v2, (const void **)&v63, _R0);
  v18 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v63 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v62, "enchantFlame");
  CompoundTag::putByte((int)v2, (const void **)&v62, *((_BYTE *)v3 + 3436));
  v19 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v62 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v61, "enchantInfinity");
  CompoundTag::putByte((int)v2, (const void **)&v61, *((_BYTE *)v3 + 3440));
  v20 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v61 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v60, "OwnerID");
  v21 = (Arrow *)((char *)v3 + 176);
  v22 = SynchedEntityData::getInt64((Arrow *)((char *)v3 + 176), 5);
  CompoundTag::putInt64((int)v2, (const void **)&v60, v22, SHIDWORD(v22));
  v23 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v60 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v24 = operator new(0x14u);
  ListTag::ListTag((int)v24);
  v25 = *((_DWORD *)v3 + 861);
  for ( i = *((_DWORD *)v3 + 862); i != v25; v58 = 0 )
    MobEffectInstance::save((MobEffectInstance *)&v58, v25);
    v27 = v58;
    v58 = 0;
    v59 = v27;
    ListTag::add((int)v24, &v59);
    if ( v59 )
      (*(void (**)(void))(*(_DWORD *)v59 + 4))();
    v59 = 0;
    if ( v58 )
      (*(void (**)(void))(*(_DWORD *)v58 + 4))();
    v25 += 16;
  sub_21E94B4((void **)&v57, "mobEffects");
  v56 = v24;
  CompoundTag::put((int)v2, (const void **)&v57, (int *)&v56);
  if ( v56 )
    (*(void (**)(void))(*(_DWORD *)v56 + 4))();
  v56 = 0;
  v28 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v57 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  sub_21E94B4((void **)&v55, "auxValue");
  v29 = SynchedEntityData::getInt8(v21, 18);
  CompoundTag::putByte((int)v2, (const void **)&v55, v29);
  v30 = (void *)(v55 - 12);
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v55 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
}


Entity *__fastcall Arrow::~Arrow(Arrow *this)
{
  Entity *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26FD5B4;
  v2 = (void *)*((_DWORD *)this + 861);
  if ( v2 )
    operator delete(v2);
  return j_j_j__ZN6EntityD2Ev_0(v1);
}


__int64 __fastcall Arrow::getSourceUniqueID(Arrow *this, int a2)
{
  Arrow *v2; // r4@1
  __int64 result; // r0@1

  v2 = this;
  result = SynchedEntityData::getInt64((SynchedEntityData *)(a2 + 176), 5);
  *(_QWORD *)v2 = result;
  return result;
}


signed int __fastcall Arrow::getEntityTypeId(Arrow *this)
{
  return 4194384;
}


int __fastcall Arrow::getShadowHeightOffs(Arrow *this)
{
  return 0;
}


void __fastcall Arrow::applyParticleColor(Arrow *this, Particle *a2)
{
  Arrow::applyParticleColor(this, a2);
}


void __fastcall Arrow::readAdditionalSaveData(Arrow *this, const CompoundTag *a2)
{
  Arrow::readAdditionalSaveData(this, a2);
}


void __fastcall Arrow::addAdditionalSaveData(Arrow *this, CompoundTag *a2)
{
  Arrow::addAdditionalSaveData(this, a2);
}
