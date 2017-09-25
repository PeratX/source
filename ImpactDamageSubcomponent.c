

signed int __fastcall ImpactDamageSubcomponent::readfromJSON(ImpactDamageSubcomponent *this, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  ImpactDamageSubcomponent *v3; // r4@1
  Json::Value *v4; // r0@1
  const Json::Value *v5; // r0@1
  Json::Value *v6; // r0@1
  int v7; // r6@1
  void *v8; // r0@1
  void *v9; // r0@2
  Json::Value *v10; // r0@3
  Json::Value *v11; // r0@3
  signed int result; // r0@3
  unsigned int *v13; // r2@4
  signed int v14; // r1@6
  unsigned int *v15; // r2@8
  signed int v16; // r1@10
  int v17; // [sp+0h] [bp-30h]@1
  int v18; // [sp+4h] [bp-2Ch]@1
  char v19; // [sp+8h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  v4 = (Json::Value *)j_Json::Value::operator[](a2, "catchFire");
  *((_BYTE *)v3 + 4) = j_Json::Value::asBool(v4, *((_BYTE *)v3 + 4));
  v5 = (const Json::Value *)j_Json::Value::operator[](v2, "damage");
  j_Json::Value::Value((Json::Value *)&v19, v5);
  j_FloatRange::parseJson((int)v3 + 8, (Json::Value *)&v19);
  j_Json::Value::~Value((Json::Value *)&v19);
  v6 = (Json::Value *)j_Json::Value::operator[](v2, "knockback");
  *((_BYTE *)v3 + 16) = j_Json::Value::asBool(v6, *((_BYTE *)v3 + 16));
  v7 = j_Json::Value::operator[](v2, "filter");
  j_EntityTypeToString((void **)&v17, *((_DWORD *)v3 + 5), 0);
  j_Json::Value::asString(&v18, v7, &v17);
  *((_DWORD *)v3 + 5) = j_EntityTypeFromString((const void **)&v18);
  v8 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
  v9 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v17 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (Json::Value *)j_Json::Value::operator[](v2, "semirandomdiffdamage");
  *((_BYTE *)v3 + 24) = j_Json::Value::asBool(v10, *((_BYTE *)v3 + 24));
  v11 = (Json::Value *)j_Json::Value::operator[](v2, "destroyonhit");
  result = j_Json::Value::asBool(v11, *((_BYTE *)v3 + 25));
  *((_BYTE *)v3 + 25) = result;
  return result;
}


Entity *__fastcall ImpactDamageSubcomponent::doOnHitEffect(ImpactDamageSubcomponent *this, ProjectileComponent *a2)
{
  ImpactDamageSubcomponent *v3; // r6@1
  int v5; // r0@1
  float v6; // r1@1
  Entity *result; // r0@1
  Level *v13; // r0@2
  char *v14; // r0@2
  Level *v17; // r0@3
  Level *v19; // r0@5
  char *v20; // r0@5
  int v23; // r1@9
  int v24; // r7@14
  int v25; // r1@14
  Entity *v26; // r0@14
  Entity *v27; // r9@14
  int v30; // r7@22
  __int16 v31; // r0@23
  float v32; // r1@25
  __int16 v35; // r0@29
  unsigned int v36; // r3@30
  void (*v37)(void); // r2@31
  bool v38; // zf@32
  __int64 v39; // r6@41
  char v40; // [sp+8h] [bp-170h]@43
  char v41; // [sp+48h] [bp-130h]@41
  int v42; // [sp+78h] [bp-100h]@31
  char v43; // [sp+80h] [bp-F8h]@26
  char v44; // [sp+A8h] [bp-D0h]@18
  unsigned int v45; // [sp+E8h] [bp-90h]@14
  unsigned int v46; // [sp+ECh] [bp-8Ch]@14
  int v47; // [sp+F4h] [bp-84h]@1
  Entity *v48; // [sp+114h] [bp-64h]@1

  _R4 = a2;
  v3 = this;
  _R5 = *((_DWORD *)a2 + 4);
  v5 = j_Entity::getProjectileComponent(*((Entity **)a2 + 4));
  j_HitResult::HitResult((int)&v47, v5 + 108);
  result = v48;
  if ( v48 )
  {
    __asm
    {
      VLDR            S0, [R5,#0x6C]
      VLDR            S2, [R5,#0x70]
      VMUL.F32        S0, S0, S0
      VLDR            S4, [R5,#0x74]
      VMUL.F32        S2, S2, S2
      VMUL.F32        S4, S4, S4
      VADD.F32        S0, S2, S0
      VADD.F32        S0, S0, S4
      VMOV            R0, S0
    }
    _R7 = j_mce::Math::sqrt(_R0, v6);
    v13 = (Level *)j_Entity::getLevel((Entity *)_R5);
    v14 = j_Level::getRandom(v13);
    _R0 = j_FloatRange::getValue((ImpactDamageSubcomponent *)((char *)v3 + 8), (Random *)v14);
    __asm { VMOV            S16, R0 }
    if ( *((_BYTE *)v3 + 24) )
      __asm
      {
        VMOV            S0, R7
        VMOV.F32        S18, #0.25
        VADD.F32        S20, S0, S0
      }
      _R0 = j_Random::nextGaussian((Random *)(_R5 + 552));
      __asm { VMOV            S22, R0 }
      v17 = (Level *)j_Entity::getLevel((Entity *)_R5);
      _R0 = j_Level::getDifficulty(v17);
        VMOV            S0, R0
        VLDR            S6, =0.11
        VMUL.F32        S2, S22, S18
        VCVT.F32.S32    S0, S0
        VADD.F32        S4, S16, S20
        VMUL.F32        S0, S0, S6
        VADD.F32        S2, S4, S2
        VADD.F32        S16, S2, S0
    if ( j_Entity::getStatusFlag(*((_DWORD *)_R4 + 4), 13) == 1 )
      v19 = (Level *)j_Entity::getLevel((Entity *)_R5);
      v20 = j_Level::getRandom(v19);
      _R0 = j_Random::_genRandInt32((Random *)v20);
        VLDR            D1, =2.32830644e-10
        VMOV.F32        S4, #0.5
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D1
        VMOV.F32        S2, #2.0
        VMUL.F32        S4, S16, S4
        VCVT.F32.F64    S0, D0
        VMUL.F32        S0, S0, S2
        VADD.F32        S16, S0, S16
    _R0 = *((_DWORD *)_R4 + 26);
    if ( _R0 >= 1 )
        VMOV            S2, R0
        VMOV.F32        S0, #0.25
        VCVT.F32.S32    S2, S2
        VMOV.F32        S4, #1.25
        VMUL.F32        S0, S2, S0
        VADD.F32        S0, S0, S4
        VMUL.F32        S16, S0, S16
    if ( v47 == 1 )
      v23 = *((_DWORD *)v3 + 5);
      if ( v23 != 1 && !j_EntityClassTree::isInstanceOf((int)v48, v23) )
        __asm { VLDREQ          S16, =0.0 }
    else
      __asm { VLDR            S16, =0.0 }
    v24 = j_Entity::getLevel((Entity *)_R5);
    (*(void (__fastcall **)(unsigned int *, int))(*(_DWORD *)_R5 + 500))(&v45, _R5);
    v26 = (Entity *)j_Level::fetchEntity(v24, v25, v45, v46, 0);
    __asm { VCVTR.S32.F32   S0, S16 }
    v27 = v26;
    __asm { VMOV            R8, S0 }
    if ( _ZF )
      goto LABEL_50;
    _ZF = *((_BYTE *)_R4 + 324) == 0;
    if ( !*((_BYTE *)_R4 + 324) )
      _ZF = v26 == v48;
LABEL_50:
      j_EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v43, (Entity *)_R5, 3);
      v30 = j_Entity::hurt(v48, (const EntityDamageSource *)&v43, _R8, *((_BYTE *)v3 + 16), *((_BYTE *)v3 + 4));
      j_EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v43);
      j_EntityDamageByChildEntitySource::EntityDamageByChildEntitySource((int)&v44, _R5, v26, 3);
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)_R5 + 320))(_R5) == 1
        && (*(int (**)(void))(*(_DWORD *)v48 + 488))() != 2854
        && !j_Entity::isFireImmune(v48) )
        (*(void (**)(void))(*(_DWORD *)v48 + 504))();
      v30 = j_Entity::hurt(v48, (const EntityDamageSource *)&v44, _R8, *((_BYTE *)v3 + 16), *((_BYTE *)v3 + 4));
      if ( v30 == 1 )
        v31 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v27 + 488))(v27);
        if ( j_EntityClassTree::isMob(v31) == 1 )
          (*(void (__fastcall **)(Entity *, Entity *))(*(_DWORD *)v27 + 964))(v27, v48);
      j_EntityDamageByChildEntitySource::~EntityDamageByChildEntitySource((EntityDamageByChildEntitySource *)&v44);
      VLDR            S0, [R4,#0x128]
      VCMPE.F32       S0, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        VLDR            S0, [R5,#0x6C]
        VLDR            S2, [R5,#0x74]
        VMUL.F32        S0, S0, S0
        VMUL.F32        S2, S2, S2
        VADD.F32        S0, S2, S0
        VMOV            R0, S0
      _R0 = j_mce::Math::sqrt(_R0, v32);
        VMOV            S16, R0
        VCMPE.F32       S16, #0.0
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        v35 = (*(int (**)(void))(*(_DWORD *)v48 + 488))();
        if ( j_EntityClassTree::isMob(v35) == 1 )
        {
          __asm
          {
            VLDR            S0, [R5,#0x74]
            VNEG.F32        S0, S0
            VLDR            S2, [R4,#0x128]
          }
          v36 = *(_DWORD *)(_R5 + 108) ^ 0x80000000;
            VSTR            S0, [SP,#0x178+var_178]
            VSTR            S2, [SP,#0x178+var_174]
          (*(void (**)(void))(*(_DWORD *)v48 + 768))();
        }
        else
            VLDR            S0, =0.6
            VLDR            S2, [R5,#0x6C]
            VLDR            S6, [R4,#0x128]
            VMUL.F32        S2, S2, S0
            VLDR            S4, [R5,#0x74]
            VMUL.F32        S0, S6, S0
          v37 = *(void (**)(void))(*(_DWORD *)v48 + 276);
            VMUL.F32        S2, S2, S6
            VMUL.F32        S0, S0, S4
            VDIV.F32        S2, S2, S16
            VDIV.F32        S0, S0, S16
            VSTR            S2, [SP,#0x178+var_104]
          v42 = 1036831949;
          __asm { VSTR            S0, [SP,#0x178+var_FC] }
          v37();
    v38 = v30 == 0;
    if ( !v30 )
      v38 = *((_DWORD *)_R4 + 71) == -1;
    if ( !v38 || (result = (Entity *)(*(int (**)(void))(*(_DWORD *)v48 + 652))(), result == (Entity *)1) )
      *((_BYTE *)_R4 + 380) = 0;
      j_Entity::setChainedDamageEffects(v48, 1);
      result = (Entity *)*((_BYTE *)v3 + 25);
      if ( *((_BYTE *)v3 + 25) )
        result = (Entity *)(*(int (__fastcall **)(int))(*(_DWORD *)_R5 + 44))(_R5);
      result = (Entity *)*((_BYTE *)_R4 + 380);
      if ( *((_BYTE *)_R4 + 380) )
        j_EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v41, (Entity *)_R5, 3);
        LODWORD(v39) = (*(int (**)(void))(*(_DWORD *)v48 + 404))();
        if ( v27 && ((unsigned int)v39 ^ 1) == 1 )
          j_EntityDamageByChildEntitySource::EntityDamageByChildEntitySource((int)&v40, _R5, v27, 3);
          HIDWORD(v39) = (*(int (**)(void))(*(_DWORD *)v48 + 404))();
          j_EntityDamageByChildEntitySource::~EntityDamageByChildEntitySource((EntityDamageByChildEntitySource *)&v40);
          if ( !v39 )
            return j_EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v41);
        else if ( (_DWORD)v39 != 1 )
          return j_EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v41);
        __asm
          VLDR            S0, =-0.1
          VLDR            S2, [R5,#0x6C]
          VMUL.F32        S2, S2, S0
          VSTR            S2, [R5,#0x6C]
          VLDR            S2, [R5,#0x70]
          VSTR            S2, [R5,#0x70]
          VLDR            S2, [R5,#0x74]
          VMUL.F32        S0, S2, S0
          VLDR            S2, =180.0
          VSTR            S0, [R5,#0x74]
          VLDR            S0, [R5,#0x7C]
          VADD.F32        S0, S0, S2
          VSTR            S0, [R5,#0x7C]
          VLDR            S0, [R5,#0x84]
          VSTR            S0, [R5,#0x84]
        *((_DWORD *)_R4 + 13) = 0;
        return j_EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v41);
  }
  return result;
}


int __fastcall ImpactDamageSubcomponent::ImpactDamageSubcomponent(int result)
{
  *(_DWORD *)result = &off_271EB58;
  *(_BYTE *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_BYTE *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 1;
  *(_WORD *)(result + 24) = 0;
  return result;
}
