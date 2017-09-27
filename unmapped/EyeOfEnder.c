

signed int __fastcall EyeOfEnder::getEntityTypeId(EyeOfEnder *this)
{
  return 70;
}


void __fastcall EyeOfEnder::~EyeOfEnder(EyeOfEnder *this)
{
  Entity *v1; // r0@1

  v1 = Entity::~Entity(this);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall EyeOfEnder::signalTo(EyeOfEnder *this, const Player *a2, BlockPos *a3)
{
  Entity *v5; // r5@1
  float v11; // r1@1
  Level *v13; // r0@4
  char *v14; // r0@4
  int result; // r0@4
  int v16; // [sp+0h] [bp-Ch]@3
  int v17; // [sp+4h] [bp-8h]@3
  int v18; // [sp+8h] [bp-4h]@3
  int v19; // [sp+Ch] [bp+0h]@1

  _R4 = this;
  _R6 = a3;
  v5 = a2;
  Entity::getAttachPos((AABB *)&v19, (int)this, 3, 0);
  (*(void (__fastcall **)(EyeOfEnder *, int *))(*(_DWORD *)_R4 + 48))(_R4, &v19);
  __asm
  {
    VLDR            S0, [R6]
    VLDR            S2, [R6,#8]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VLDR            S4, [R4,#0x48]
    VLDR            S6, [R4,#0x50]
    VSUB.F32        S16, S0, S4
    VSUB.F32        S18, S2, S6
    VMUL.F32        S0, S16, S16
    VMUL.F32        S2, S18, S18
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  _R0 = mce::Math::sqrt(_R0, v11);
    VMOV.F32        S0, #12.0
    VMOV            S2, R0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    Vec3::Vec3((int)&v16, (int)_R6);
    *((_DWORD *)_R4 + 858) = v16;
    *((_DWORD *)_R4 + 859) = v17;
    *((_DWORD *)_R4 + 860) = v18;
  else
    __asm
    {
      VDIV.F32        S4, S16, S2
      VDIV.F32        S2, S18, S2
      VMUL.F32        S4, S4, S0
      VLDR            S6, [R4,#0x48]
      VMUL.F32        S0, S2, S0
      VADD.F32        S4, S6, S4
      VSTR            S4, [R0]
      VLDR            S2, [R4,#0x50]
      VADD.F32        S0, S2, S0
      VMOV.F32        S2, #8.0
      VSTR            S0, [R0]
      VLDR            S0, [R4,#0x4C]
      VADD.F32        S0, S0, S2
    }
  *((_DWORD *)_R4 + 857) = 0;
  v13 = (Level *)Entity::getLevel(v5);
  v14 = Level::getRandom(v13);
  result = Random::_genRandInt32((Random *)v14) % 5 != 0;
  *((_BYTE *)_R4 + 3424) = result;
  return result;
}


Entity *__fastcall EyeOfEnder::normalTick(EyeOfEnder *this)
{
  Level *v2; // r5@1
  float v11; // r1@1
  __int64 v13; // r0@1
  __int64 v14; // r2@1
  int v15; // r0@1
  mce::Degree *v16; // r0@1
  __int64 v17; // r2@1
  int v18; // r0@1
  mce::Degree *v19; // r0@1
  float v22; // r1@1
  float v26; // r1@1
  __int64 v31; // r0@2
  __int64 v32; // r2@2
  float v34; // r1@2
  float v37; // r1@5
  int v40; // r0@9
  int v41; // r1@9
  float *v42; // r2@9
  char *v43; // r0@10
  Random *v44; // r7@10
  __int64 v47; // kr00_8@12
  int v48; // r0@12
  signed int v49; // r0@12
  Spawner *v50; // r5@14
  BlockSource *v51; // r6@14
  const Vec3 *v52; // r0@14
  int v53; // r0@20
  int v54; // r0@20
  char v56; // [sp+10h] [bp-C8h]@14
  int v57; // [sp+18h] [bp-C0h]@18
  void *v58; // [sp+34h] [bp-A4h]@16
  void *ptr; // [sp+44h] [bp-94h]@14
  float v60; // [sp+58h] [bp-80h]@10
  float v61; // [sp+64h] [bp-74h]@9
  int v62; // [sp+70h] [bp-68h]@2
  char v63; // [sp+74h] [bp-64h]@1
  char v64; // [sp+78h] [bp-60h]@1
  float v65; // [sp+7Ch] [bp-5Ch]@1

  _R4 = this;
  v2 = (Level *)Entity::getLevel(this);
  _R0 = *((_DWORD *)_R4 + 18);
  *((_DWORD *)_R4 + 21) = _R0;
  _R1 = *((_DWORD *)_R4 + 19);
  *((_DWORD *)_R4 + 22) = _R1;
  __asm { VMOV            S0, R0 }
  _R2 = *((_DWORD *)_R4 + 20);
  *((_DWORD *)_R4 + 23) = _R2;
  __asm
  {
    VMOV            S2, R1
    VLDR            S4, [R4,#0x6C]
    VLDR            S6, [R4,#0x70]
    VMOV            S10, R2
    VLDR            S8, [R4,#0x74]
    VADD.F32        S0, S4, S0
    VADD.F32        S2, S6, S2
    VADD.F32        S4, S8, S10
    VSTR            S0, [SP,#0xD8+var_5C]
    VSTR            S2, [SP,#0xD8+var_58]
    VSTR            S4, [SP,#0xD8+var_54]
  }
  (*(void (__fastcall **)(EyeOfEnder *, float *))(*(_DWORD *)_R4 + 48))(_R4, &v65);
    VLDR            S0, [R4,#0x6C]
    VLDR            S2, [R4,#0x74]
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  _R7 = mce::Math::sqrt(_R0, v11);
  LODWORD(v13) = *((_DWORD *)_R4 + 27);
  HIDWORD(v13) = *((_DWORD *)_R4 + 29);
  v15 = mce::Math::atan2(v13, v14);
  mce::Degree::Degree((int)&v64, v15);
  *((_DWORD *)_R4 + 31) = *(_DWORD *)mce::Degree::asFloat(v16);
  v18 = mce::Math::atan2(*((_QWORD *)_R4 + 14), v17);
  mce::Degree::Degree((int)&v63, v18);
  _R0 = *(_DWORD *)mce::Degree::asFloat(v19);
  *((_DWORD *)_R4 + 30) = _R0;
    VLDR            S0, [R4,#0x80]
    VMOV            S2, R0
    VLDR            S16, [R4,#0x7C]
    VLDR            S18, [R4,#0x84]
    VSUB.F32        S0, S2, S0
  _R0 = mce::Math::wrapDegrees(_R0, v22);
    VSUB.F32        S0, S16, S18
    VLDR            S16, =0.2
    VMOV            R1, S0
    VMOV            S0, R0
    VMUL.F32        S18, S0, S16
  _R0 = mce::Math::wrapDegrees(_R1, *(float *)&_R1);
    VADD.F32        S0, S0, S18
    VMUL.F32        S2, S2, S16
    VSTR            S0, [R4,#0x78]
    VLDR            S0, [R4,#0x84]
    VADD.F32        S0, S0, S2
    VSTR            S0, [R4,#0x7C]
  if ( !Level::isClientSide(v2) )
    _R0 = (int)_R4 + 3432;
    __asm
    {
      VLDR            S0, [R4,#0x48]
      VMOV            S18, R7
      VLDR            S2, [R0]
    }
    _R0 = (int)_R4 + 3440;
      VSUB.F32        S0, S2, S0
      VSTR            S0, [R4,#0x6C]
      VMUL.F32        S0, S0, S0
      VLDR            S2, [R4,#0x50]
      VLDR            S4, [R0]
      VSUB.F32        S2, S4, S2
      VMUL.F32        S4, S2, S2
      VSTR            S2, [R4,#0x74]
      VADD.F32        S0, S0, S4
      VMOV            R0, S0
    _R0 = mce::Math::sqrt(_R0, v26);
    __asm { VMOV            S20, R0 }
    HIDWORD(v31) = *((_DWORD *)_R4 + 27);
    LODWORD(v31) = *((_DWORD *)_R4 + 29);
      VSUB.F32        S0, S20, S18
      VLDR            S2, =0.0025
      VMUL.F32        S22, S0, S2
    v62 = mce::Math::atan2(v31, v32);
      VMOV.F32        S16, #1.0
      VADD.F32        S18, S22, S18
    _R0 = mce::Radian::asFloat((mce::Radian *)&v62);
      VLDR            S0, [R0]
      VCMPE.F32       S20, S16
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      __asm
      {
        VLDR            S2, =0.8
        VLDR            S4, [R4,#0x70]
        VMUL.F32        S18, S18, S2
        VMUL.F32        S4, S4, S2
        VSTR            S4, [R4,#0x70]
      }
    __asm { VMOV            R7, S0 }
    _R0 = mce::Math::cos(_R7, v34);
      VMOV            S0, R0
      VMUL.F32        S0, S0, S18
    _R0 = mce::Math::sin(_R7, v37);
    __asm { VMOV            S0, R0 }
    _R0 = (int)_R4 + 3436;
      VMOV.F32        S2, #-1.0
      VSTR            S0, [R4,#0x74]
      VLDR            S0, [R4,#0x4C]
      VLDR            S6, [R0]
      VLDR            S4, [R4,#0x70]
      VCMPE.F32       S0, S6
      __asm { VMOVLT.F32      S2, S16 }
      VSUB.F32        S0, S2, S4
      VLDR            S2, =0.015
      VMUL.F32        S0, S0, S2
      VADD.F32        S0, S4, S0
      VSTR            S0, [R4,#0x70]
  if ( (*(int (__fastcall **)(EyeOfEnder *))(*(_DWORD *)_R4 + 208))(_R4) == 1 )
      VMOV.F32        S16, #0.25
      VLDR            S6, [R4,#0x6C]
      VLDR            S8, [R4,#0x70]
      VLDR            S10, [R4,#0x74]
      VLDR            S4, [R4,#0x48]
      VMUL.F32        S6, S6, S16
      VMUL.F32        S8, S8, S16
      VMUL.F32        S10, S10, S16
      VSUB.F32        S4, S4, S6
      VSUB.F32        S0, S0, S8
      VSUB.F32        S2, S2, S10
      VSTR            S4, [SP,#0xD8+var_74]
      VSTR            S0, [SP,#0xD8+var_70]
      VSTR            S2, [SP,#0xD8+var_6C]
    Level::addParticle((int)v2, 1, (int)&v61);
    __asm { VLDR            S6, [R4,#0x6C] }
    v40 = (int)v2;
    __asm { VLDR            S8, [R4,#0x70] }
    v41 = 1;
    v42 = &v61;
  else
    v43 = Level::getRandom(v2);
    v44 = (Random *)v43;
      VLDR            S16, [R4,#0x48]
      VLDR            S18, [R4,#0x6C]
    _R0 = Random::_genRandInt32((Random *)v43);
      VLDR            S20, [R4,#0x50]
      VLDR            S22, [R4,#0x4C]
      VLDR            S24, [R4,#0x70]
      VLDR            S26, [R4,#0x74]
      VCVT.F64.U32    D14, S0
    _R0 = Random::_genRandInt32(v44);
      VMOV            S2, R0
      VLDR            D0, =2.32830644e-10
      VMOV.F32        S6, #-0.25
      VLDR            S8, =-0.3
      VCVT.F64.U32    D1, S2
    v42 = &v60;
    v41 = 20;
      VMUL.F64        D2, D14, D0
      VMUL.F64        D0, D1, D0
      VADD.F32        S2, S16, S8
      VMUL.F32        S10, S18, S6
      VMUL.F32        S14, S26, S6
      VADD.F32        S8, S20, S8
      VCVT.F32.F64    S0, D0
      VCVT.F32.F64    S4, D2
      VMOV.F32        S12, #-0.5
      VLDR            S1, =0.6
      VADD.F32        S2, S2, S10
      VMUL.F32        S4, S4, S1
      VMUL.F32        S6, S24, S6
      VADD.F32        S8, S8, S14
      VMUL.F32        S0, S0, S1
      VADD.F32        S10, S22, S12
      VADD.F32        S2, S2, S4
      VADD.F32        S0, S8, S0
      VADD.F32        S4, S10, S6
      VSTR            S2, [SP,#0xD8+var_80]
      VSTR            S4, [SP,#0xD8+var_7C]
      VSTR            S0, [SP,#0xD8+var_78]
  Level::addParticle(v40, v41, (int)v42);
    v47 = *(_QWORD *)(*(_DWORD *)_R4 + 48);
    v48 = ((int (__fastcall *)(_DWORD))HIDWORD(v47))(_R4);
    ((void (__fastcall *)(EyeOfEnder *, int))v47)(_R4, v48);
    v49 = *((_DWORD *)_R4 + 857);
    *((_DWORD *)_R4 + 857) = v49 + 1;
    if ( v49 >= 80 )
      (*(void (__fastcall **)(EyeOfEnder *))(*(_DWORD *)_R4 + 44))(_R4);
      if ( *((_BYTE *)_R4 + 3424) )
        ItemInstance::ItemInstance((ItemInstance *)&v56, Item::mEnderEye, 1);
        v50 = (Spawner *)Level::getSpawner(v2);
        v51 = (BlockSource *)Entity::getRegion(_R4);
        v52 = (const Vec3 *)(*(int (__fastcall **)(EyeOfEnder *))(*(_DWORD *)_R4 + 52))(_R4);
        Spawner::spawnItem(v50, v51, (const ItemInstance *)&v56, _R4, v52, 0);
        if ( ptr )
          operator delete(ptr);
        if ( v58 )
          operator delete(v58);
        if ( v57 )
          (*(void (**)(void))(*(_DWORD *)v57 + 4))();
      else
        v53 = (*(int (__fastcall **)(EyeOfEnder *))(*(_DWORD *)_R4 + 52))(_R4);
        Level::broadcastLevelEvent(v2, 2003, __PAIR__(10, v53), 0);
        v54 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)_R4 + 52))(_R4);
        Level::broadcastLevelEvent(v2, 1041, (unsigned int)v54, 0);
  return Entity::normalTick(_R4);
}


int __fastcall EyeOfEnder::getShadowRadius(EyeOfEnder *this)
{
  return 0;
}


int __fastcall EyeOfEnder::lerpMotion(EyeOfEnder *this, const Vec3 *a2)
{
  EyeOfEnder *v3; // r4@1
  int v9; // r6@5

  _R5 = a2;
  v3 = this;
  *((_DWORD *)this + 27) = *(_DWORD *)a2;
  *((_DWORD *)this + 28) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 29) = *((_DWORD *)a2 + 2);
  LODWORD(_R0) = 0x7FFFFFFF;
  HIDWORD(_R0) = *((_DWORD *)v3 + 32);
  _ZF = (HIDWORD(_R0) & 0x7FFFFFFF) == 0;
  if ( !(HIDWORD(_R0) & 0x7FFFFFFF) )
  {
    HIDWORD(_R0) = *((_DWORD *)v3 + 33);
    _ZF = (HIDWORD(_R0) & 0x7FFFFFFF) == 0;
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
    v9 = mce::Math::sqrt((mce::Math *)_R0, *((float *)&_R0 + 1));
    _R0 = atan2f(*(float *)_R5, *((float *)_R5 + 2));
    __asm { VMOV            S0, R0 }
    _R1 = &mce::Math::RADDEG;
      VLDR            S16, [R1]
      VMUL.F32        S0, S16, S0
      VSTR            S0, [R4,#0x7C]
      VSTR            S0, [R4,#0x84]
    _R0 = atan2f(*((float *)_R5 + 1), *(float *)&v9);
      VMOV            S0, R0
      VSTR            S0, [R4,#0x78]
      VSTR            S0, [R4,#0x80]
    Entity::moveTo((int)v3, (int)v3 + 72);
    _R0 = *((_QWORD *)v3 + 15);
    *((_QWORD *)v3 + 16) = _R0;
  return _R0;
}


int __fastcall EyeOfEnder::EyeOfEnder(int a1, int a2, int *a3)
{
  int v3; // r4@1

  v3 = a1;
  Entity::Entity(a1, a2, a3);
  *(_DWORD *)v3 = &off_26F258C;
  *(_DWORD *)(v3 + 3412) = 0;
  *(_DWORD *)(v3 + 3416) = 0;
  *(_DWORD *)(v3 + 3420) = 0;
  *(_DWORD *)(v3 + 3432) = 0;
  *(_DWORD *)(v3 + 3436) = 0;
  *(_DWORD *)(v3 + 3440) = 0;
  *(_DWORD *)(v3 + 248) = 71;
  Entity::enableAutoSendPosRot((Entity *)v3, 1);
  return v3;
}


void __fastcall EyeOfEnder::~EyeOfEnder(EyeOfEnder *this)
{
  EyeOfEnder::~EyeOfEnder(this);
}
