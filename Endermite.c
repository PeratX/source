

signed int __fastcall Endermite::checkSpawnRules(Endermite *this, int a2)
{
  int v2; // r5@1
  Entity *v3; // r4@1
  Dimension *v4; // r0@2

  v2 = a2;
  v3 = this;
  if ( Monster::checkSpawnRules(this, a2) == 1 )
  {
    v4 = (Dimension *)Entity::getDimension(v3);
    v2 = 0;
    if ( !Dimension::fetchNearestPlayer(v4, v3, 5.0) )
      v2 = 1;
  }
  return v2;
}


int __fastcall Endermite::normalTick(Endermite *this)
{
  *((_DWORD *)this + 853) = *((_DWORD *)this + 31);
  return j_j_j__ZN7Monster10normalTickEv(this);
}


signed int __fastcall Endermite::getRidingHeight(Endermite *this)
{
  return 1036831949;
}


int __fastcall Endermite::aiStep(Endermite *this)
{
  int v12; // r0@1
  int v19; // r0@1
  Level *v20; // r0@1
  int result; // r0@1
  int (__fastcall *v22)(Endermite *, int *); // r5@2
  const void **v23; // r0@3
  int v24; // r5@3
  void *v25; // r0@3
  void *v26; // r0@6
  unsigned int *v27; // r2@11
  signed int v28; // r1@13
  unsigned int *v29; // r2@15
  signed int v30; // r1@17
  int v31; // [sp+10h] [bp-80h]@2
  float v32; // [sp+20h] [bp-70h]@1

  _R4 = this;
  Monster::aiStep(this);
  _R6 = Random::_genRandInt32((Endermite *)((char *)_R4 + 552));
  __asm { VLDR            S23, [R4,#0x130] }
  _R0 = Random::_genRandInt32((Endermite *)((char *)_R4 + 552));
  __asm
  {
    VMOV            S0, R6
    VLDR            S22, [R4,#0x134]
    VCVT.F64.U32    D9, S0
    VMOV            S0, R0
    VCVT.F64.U32    D12, S0
  }
    VLDR            D8, =2.32830644e-10
    VCVT.F64.U32    D13, S0
    VLDR            S28, [R4,#0x130]
    VMUL.F64        D10, D9, D8
    VCVT.F64.U32    D15, S0
    VMUL.F64        D12, D12, D8
    VMUL.F64        D13, D13, D8
    VMOV            S2, R6
    VCVT.F64.U32    D0, S0
    VCVT.F64.U32    D1, S2
    VMUL.F64        D2, D15, D8
    VMOV.F32        S18, #-0.5
    VCVT.F32.F64    S6, D10
    VCVT.F32.F64    S8, D12
    VCVT.F32.F64    S10, D13
    VMUL.F64        D0, D0, D8
    VMUL.F64        D1, D1, D8
    VADD.F32        S6, S6, S18
    VADD.F32        S8, S8, S18
    VADD.F32        S10, S10, S18
    VCVT.F32.F64    S4, D2
    VCVT.F32.F64    S20, D0
    VMUL.F32        S24, S6, S23
    VMUL.F32        S22, S8, S22
    VCVT.F32.F64    S26, D1
    VMUL.F32        S28, S10, S28
    VADD.F32        S30, S4, S18
  v12 = Entity::getLevel(_R4);
    VADD.F32        S6, S20, S18
    VLDR            S0, [R4,#0x48]
    VLDR            S2, [R4,#0x4C]
    VADD.F32        S8, S30, S30
    VLDR            S4, [R4,#0x50]
    VADD.F32        S0, S0, S24
    VADD.F32        S2, S2, S22
    VADD.F32        S4, S4, S28
    VNEG.F32        S10, S26
    VADD.F32        S6, S6, S6
    VSTR            S8, [SP,#0x90+var_7C]
    VSTR            S0, [SP,#0x90+var_70]
    VSTR            S2, [SP,#0x90+var_6C]
    VSTR            S4, [SP,#0x90+var_68]
    VSTR            S10, [SP,#0x90+var_78]
    VSTR            S6, [SP,#0x90+var_74]
  Level::addParticle(v12, 20, (int)&v32);
  __asm { VLDR            S19, [R4,#0x130] }
  _R7 = Random::_genRandInt32((Endermite *)((char *)_R4 + 552));
  __asm { VLDR            S22, [R4,#0x134] }
    VLDR            S24, [R4,#0x130]
    VMOV            S0, R7
    VCVT.F64.U32    D14, S0
    VCVT.F64.U32    D10, S0
    VMUL.F64        D14, D14, D8
    VMUL.F64        D15, D15, D8
    VMUL.F64        D2, D10, D8
    VCVT.F32.F64    S6, D13
    VCVT.F32.F64    S8, D14
    VCVT.F32.F64    S10, D15
    VCVT.F32.F64    S16, D0
    VMUL.F32        S20, S6, S19
    VMUL.F32        S24, S10, S24
    VADD.F32        S28, S4, S18
  v19 = Entity::getLevel(_R4);
    VADD.F32        S6, S16, S18
    VADD.F32        S8, S28, S28
    VADD.F32        S0, S0, S20
    VADD.F32        S4, S4, S24
  Level::addParticle(v19, 20, (int)&v32);
  v20 = (Level *)Entity::getLevel(_R4);
  result = Level::isClientSide(v20);
  if ( !result )
    v22 = *(int (__fastcall **)(Endermite *, int *))(*(_DWORD *)_R4 + 16);
    sub_21E94B4((void **)&v31, "minecraft:nameable");
    if ( v22(_R4, &v31) == 1 )
    {
      v23 = (const void **)(*(int (__fastcall **)(Endermite *))(*(_DWORD *)_R4 + 188))(_R4);
      v24 = sub_21E7D6C(v23, (const char *)&unk_257BC67);
      v25 = (void *)(v31 - 12);
      if ( (int *)(v31 - 12) != &dword_28898C0 )
      {
        v29 = (unsigned int *)(v31 - 4);
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
          j_j_j_j__ZdlPv_9(v25);
      }
      if ( v24 )
        result = *((_DWORD *)_R4 + 1076);
        goto LABEL_8;
    }
    else
      v26 = (void *)(v31 - 12);
        v27 = (unsigned int *)(v31 - 4);
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
          v28 = (*v27)--;
        if ( v28 <= 0 )
          j_j_j_j__ZdlPv_9(v26);
    result = *((_DWORD *)_R4 + 1076) + 1;
    *((_DWORD *)_R4 + 1076) = result;
LABEL_8:
    if ( result >= 2400 )
      result = (*(int (__fastcall **)(Endermite *))(*(_DWORD *)_R4 + 44))(_R4);
  return result;
}


signed int __fastcall Endermite::getEntityTypeId(Endermite *this)
{
  return 265015;
}


void __fastcall Endermite::readAdditionalSaveData(Endermite *this, const CompoundTag *a2)
{
  Endermite::readAdditionalSaveData(this, a2);
}


void __fastcall Endermite::~Endermite(Endermite *this)
{
  Endermite::~Endermite(this);
}


void __fastcall Endermite::addAdditionalSaveData(Endermite *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  Endermite *v3; // r5@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  Monster::addAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v7, "Lifetime");
  CompoundTag::putInt((int)v2, (const void **)&v7, *((_DWORD *)v3 + 1076));
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
}


signed int __fastcall Endermite::getExperienceReward(Endermite *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 861);
  result = 0;
  if ( v1 > 0 )
    result = 3;
  return result;
}


void __fastcall Endermite::addAdditionalSaveData(Endermite *this, CompoundTag *a2)
{
  Endermite::addAdditionalSaveData(this, a2);
}


int __fastcall Endermite::onSizeUpdated(int result)
{
  __int64 v1; // r1@1

  HIDWORD(v1) = 1036831949;
  LODWORD(v1) = 0;
  *(_QWORD *)(result + 376) = v1;
  *(_DWORD *)(result + 384) = 0;
  return result;
}


void __fastcall Endermite::readAdditionalSaveData(Endermite *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  Endermite *v3; // r4@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  Monster::readAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v7, "Lifetime");
  *((_DWORD *)v3 + 1076) = CompoundTag::getInt((int)v2, (const void **)&v7);
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
}


int __fastcall Endermite::Endermite(int a1, int a2, int *a3)
{
  int result; // r0@1

  result = Monster::Monster(a1, a2, a3);
  *(_DWORD *)result = &off_26F678C;
  *(_DWORD *)(result + 4304) = 0;
  *(_DWORD *)(result + 172) |= 0x2000u;
  *(_DWORD *)(result + 248) = 73;
  return result;
}


void __fastcall Endermite::~Endermite(Endermite *this)
{
  Entity *v1; // r0@1

  v1 = Mob::~Mob(this);
  j_j_j__ZdlPv_6((void *)v1);
}
