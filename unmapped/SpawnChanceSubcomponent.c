

signed int __fastcall SpawnChanceSubcomponent::readfromJSON(SpawnChanceSubcomponent *this, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  SpawnChanceSubcomponent *v3; // r4@1
  Json::Value *v4; // r0@1
  Json::Value *v10; // r0@3
  Json::Value *v12; // r0@4
  Json::Value *v14; // r0@6
  Json::Value *v16; // r0@7
  Json::Value *v17; // r0@7
  int v18; // r0@7
  void *v19; // r0@7
  Json::Value *v20; // r0@8
  signed int result; // r0@8
  unsigned int *v22; // r2@9
  signed int v23; // r1@11
  int v24; // [sp+4h] [bp-2Ch]@7

  v2 = a2;
  v3 = this;
  v4 = (Json::Value *)j_Json::Value::operator[](a2, "firstSpawnPercentChance");
  _R0 = j_Json::Value::asFloat(v4, -1.0);
  __asm
  {
    VLDR            S16, =0.01
    VMOV            S0, R0
    VMUL.F32        S0, S0, S16
    VCMPE.F32       S0, #0.0
    VSTR            S0, [R4,#4]
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    v10 = (Json::Value *)j_Json::Value::operator[](v2, "firstSpawnChance");
    _R0 = j_Json::Value::asInt(v10, 100);
    __asm
    {
      VMOV            S2, R0
      VMOV.F32        S0, #1.0
      VCVT.F32.S32    S2, S2
      VDIV.F32        S0, S0, S2
      VSTR            S0, [R4,#4]
    }
  v12 = (Json::Value *)j_Json::Value::operator[](v2, "secondSpawnPercentChance");
  _R0 = j_Json::Value::asFloat(v12, -1.0);
    VSTR            S0, [R4,#8]
    v14 = (Json::Value *)j_Json::Value::operator[](v2, "secondSpawnChance");
    _R0 = j_Json::Value::asInt(v14, 100);
      VSTR            S0, [R4,#8]
  v16 = (Json::Value *)j_Json::Value::operator[](v2, "firstSpawnCount");
  *((_DWORD *)v3 + 3) = j_Json::Value::asInt(v16, *((_DWORD *)v3 + 3));
  v17 = (Json::Value *)j_Json::Value::operator[](v2, "secondSpawnCount");
  *((_DWORD *)v3 + 4) = j_Json::Value::asInt(v17, *((_DWORD *)v3 + 3));
  v18 = j_Json::Value::operator[](v2, "spawnDefinition");
  j_Json::Value::asString(&v24, v18, (int *)v3 + 5);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v3 + 5,
    &v24);
  v19 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (Json::Value *)j_Json::Value::operator[](v2, "spawnBaby");
  result = j_Json::Value::asBool(v20, *((_BYTE *)v3 + 24));
  *((_BYTE *)v3 + 24) = result;
  return result;
}


void __fastcall SpawnChanceSubcomponent::~SpawnChanceSubcomponent(SpawnChanceSubcomponent *this)
{
  SpawnChanceSubcomponent::~SpawnChanceSubcomponent(this);
}


int __fastcall SpawnChanceSubcomponent::SpawnChanceSubcomponent(int result)
{
  *(_DWORD *)result = &off_271EC48;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = &unk_28898CC;
  *(_BYTE *)(result + 24) = 0;
  return result;
}


unsigned int __fastcall SpawnChanceSubcomponent::doOnHitEffect(SpawnChanceSubcomponent *this, ProjectileComponent *a2)
{
  int v2; // r5@1
  Level *v4; // r0@1
  unsigned int result; // r0@1
  Level *v6; // r0@2
  char *v7; // r0@2
  Level *v12; // r0@4
  char *v13; // r0@4
  __int64 v15; // r0@6
  BlockSource *v16; // r7@6
  int v17; // r4@6
  int (__fastcall *v18)(int, int, char *, char *); // r10@6
  int v19; // r7@6
  int v20; // r0@6
  int v21; // r2@6
  int v22; // r3@6
  int v23; // r7@6
  int v24; // r3@6
  int v25; // r4@6
  int v26; // r7@6
  signed int v27; // r6@9
  unsigned int *v28; // r2@10
  signed int v29; // r1@12
  unsigned int *v30; // r2@14
  signed int v31; // r1@16
  unsigned int *v32; // r2@18
  signed int v33; // r1@20
  unsigned int *v34; // r2@22
  signed int v35; // r1@24
  unsigned int *v36; // r2@26
  signed int v37; // r1@28
  unsigned int *v38; // r2@30
  signed int v39; // r1@32
  Entity *v40; // r8@59
  void *v41; // r0@59
  void *v42; // r0@60
  void *v43; // r0@61
  int v44; // r0@63
  int v45; // r0@64
  void *v46; // r0@64
  void *v47; // r0@65
  void *v48; // r0@66
  int v49; // r10@69
  void (__fastcall *v50)(int, int, Entity **); // r7@69
  int v51; // r0@69
  int v52; // r2@69
  int v53; // r7@72
  void (__fastcall *v54)(int, int, Entity **); // r4@72
  int v55; // r0@72
  int v56; // r2@72
  int *v57; // [sp+14h] [bp-B4h]@9
  signed int v58; // [sp+18h] [bp-B0h]@4
  Entity *v59; // [sp+1Ch] [bp-ACh]@72
  Entity *v60; // [sp+20h] [bp-A8h]@69
  int v61; // [sp+24h] [bp-A4h]@64
  int v62; // [sp+28h] [bp-A0h]@64
  int v63; // [sp+2Ch] [bp-9Ch]@30
  int v64; // [sp+30h] [bp-98h]@26
  int v65; // [sp+34h] [bp-94h]@22
  Entity *v66; // [sp+38h] [bp-90h]@64
  int v67; // [sp+3Ch] [bp-8Ch]@63
  int v68; // [sp+40h] [bp-88h]@63
  int v69; // [sp+44h] [bp-84h]@18
  int v70; // [sp+48h] [bp-80h]@14
  int v71; // [sp+4Ch] [bp-7Ch]@10
  Entity *v72; // [sp+50h] [bp-78h]@59
  char v73; // [sp+54h] [bp-74h]@6
  char v74; // [sp+60h] [bp-68h]@6
  int v75; // [sp+64h] [bp-64h]@6
  int v76; // [sp+68h] [bp-60h]@6
  int v77; // [sp+6Ch] [bp-5Ch]@6
  int v78; // [sp+70h] [bp-58h]@6
  int v79; // [sp+74h] [bp-54h]@6
  int v80; // [sp+78h] [bp-50h]@6
  char v81; // [sp+7Ch] [bp-4Ch]@6
  int v82; // [sp+88h] [bp-40h]@6
  __int64 v83; // [sp+8Ch] [bp-3Ch]@6

  v2 = *((_DWORD *)a2 + 4);
  _R9 = this;
  v4 = (Level *)j_Entity::getLevel(*((Entity **)a2 + 4));
  result = j_Level::isClientSide(v4);
  if ( !result )
  {
    v6 = (Level *)j_Entity::getLevel((Entity *)v2);
    v7 = j_Level::getRandom(v6);
    result = j_Random::_genRandInt32((Random *)v7);
    __asm
    {
      VMOV            S0, R0
      VLDR            D8, =2.32830644e-10
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D8
      VCVT.F32.F64    S0, D0
      VLDR            S2, [R9,#4]
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    }
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      v58 = *((_DWORD *)_R9 + 3);
      v12 = (Level *)j_Entity::getLevel((Entity *)v2);
      v13 = j_Level::getRandom(v12);
      _R0 = j_Random::_genRandInt32((Random *)v13);
      __asm
      {
        VMOV            S0, R0
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D8
        VCVT.F32.F64    S0, D0
        VLDR            S2, [R9,#8]
        VCMPE.F32       S0, S2
        VMRS            APSR_nzcv, FPSCR
      }
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
        v58 = *((_DWORD *)_R9 + 4);
      v15 = *(_QWORD *)(v2 + 76);
      v82 = *(_DWORD *)(v2 + 72);
      v83 = v15;
      v16 = (BlockSource *)j_Entity::getRegion((Entity *)v2);
      j_BlockPos::BlockPos((int)&v81, v2 + 72);
      v17 = j_BlockSource::getBlock(v16, (const BlockPos *)&v81);
      v18 = *(int (__fastcall **)(int, int, char *, char *))(*(_DWORD *)v17 + 32);
      v19 = j_Entity::getRegion((Entity *)v2);
      j_BlockPos::BlockPos((int)&v73, v2 + 72);
      v20 = v18(v17, v19, &v73, &v74);
      v21 = *(_DWORD *)v20;
      v22 = *(_DWORD *)(v20 + 4);
      v23 = *(_DWORD *)(v20 + 8);
      v20 += 12;
      *(_DWORD *)&v74 = v21;
      v75 = v22;
      v76 = v23;
      v24 = *(_DWORD *)(v20 + 4);
      v25 = *(_DWORD *)(v20 + 8);
      v26 = *(_DWORD *)(v20 + 12);
      v77 = *(_DWORD *)v20;
      v78 = v24;
      v79 = v25;
      v80 = v26;
      if ( !j_AABB::isEmpty((AABB *)&v74) )
        LODWORD(v83) = v78;
      result = v58;
      if ( v58 >= 1 )
        v57 = (int *)((char *)_R9 + 20);
        v27 = 0;
        do
        {
          if ( *((_BYTE *)_R9 + 24) )
          {
            j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v69, v57);
            j_EntityFactory::createBornEntity(
              (EntityFactory *)&v72,
              (const EntityDefinitionIdentifier *)&v69,
              (Entity *)v2);
            v40 = v72;
            v41 = (void *)(v71 - 12);
            v72 = 0;
            if ( (int *)(v71 - 12) != &dword_28898C0 )
            {
              v28 = (unsigned int *)(v71 - 4);
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
                j_j_j_j__ZdlPv_9(v41);
            }
            v42 = (void *)(v70 - 12);
            if ( (int *)(v70 - 12) != &dword_28898C0 )
              v30 = (unsigned int *)(v70 - 4);
                  v31 = __ldrex(v30);
                while ( __strex(v31 - 1, v30) );
                v31 = (*v30)--;
              if ( v31 <= 0 )
                j_j_j_j__ZdlPv_9(v42);
            v43 = (void *)(v69 - 12);
            if ( (int *)(v69 - 12) != &dword_28898C0 )
              v32 = (unsigned int *)(v69 - 4);
                  v33 = __ldrex(v32);
                while ( __strex(v33 - 1, v32) );
                v33 = (*v32)--;
              if ( v33 <= 0 )
                j_j_j_j__ZdlPv_9(v43);
            if ( !v40 )
              goto LABEL_75;
            v44 = *(_DWORD *)(v2 + 124);
            v67 = 0;
            v68 = v44;
            j_Entity::moveTo((int)v40, (int)&v82);
          }
          else
            j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v63, v57);
            v45 = *(_DWORD *)(v2 + 124);
            v61 = 0;
            v62 = v45;
            j_EntityFactory::createSpawnedEntity(&v66, (const void **)&v63, v2, (int)&v82, &v61);
            v40 = v66;
            v46 = (void *)(v65 - 12);
            v66 = 0;
            if ( (int *)(v65 - 12) != &dword_28898C0 )
              v34 = (unsigned int *)(v65 - 4);
                  v35 = __ldrex(v34);
                while ( __strex(v35 - 1, v34) );
                v35 = (*v34)--;
              if ( v35 <= 0 )
                j_j_j_j__ZdlPv_9(v46);
            v47 = (void *)(v64 - 12);
            if ( (int *)(v64 - 12) != &dword_28898C0 )
              v36 = (unsigned int *)(v64 - 4);
                  v37 = __ldrex(v36);
                while ( __strex(v37 - 1, v36) );
                v37 = (*v36)--;
              if ( v37 <= 0 )
                j_j_j_j__ZdlPv_9(v47);
            v48 = (void *)(v63 - 12);
            if ( (int *)(v63 - 12) != &dword_28898C0 )
              v38 = (unsigned int *)(v63 - 4);
                  v39 = __ldrex(v38);
                while ( __strex(v39 - 1, v38) );
                v39 = (*v38)--;
              if ( v39 <= 0 )
                j_j_j_j__ZdlPv_9(v48);
          j_Entity::setPersistent(v40);
          if ( j_Entity::isGlobal(v40) == 1 )
            v49 = j_Entity::getLevel((Entity *)v2);
            v50 = *(void (__fastcall **)(int, int, Entity **))(*(_DWORD *)v49 + 48);
            v51 = j_Entity::getRegion((Entity *)v2);
            v60 = v40;
            v50(v49, v51, &v60);
            if ( v60 )
              (*(void (__cdecl **)(Entity *, _DWORD, int))(*(_DWORD *)v60 + 32))(
                v60,
                *(_DWORD *)(*(_DWORD *)v60 + 32),
                v52);
            v60 = 0;
            v53 = j_Entity::getLevel((Entity *)v2);
            v54 = *(void (__fastcall **)(int, int, Entity **))(*(_DWORD *)v53 + 44);
            v55 = j_Entity::getRegion((Entity *)v2);
            v59 = v40;
            v54(v53, v55, &v59);
            if ( v59 )
              (*(void (__cdecl **)(Entity *, _DWORD, int))(*(_DWORD *)v59 + 32))(
                v59,
                *(_DWORD *)(*(_DWORD *)v59 + 32),
                v56);
            v59 = 0;
LABEL_75:
          ++v27;
          result = v58;
        }
        while ( v27 < v58 );
  }
  return result;
}


void __fastcall SpawnChanceSubcomponent::~SpawnChanceSubcomponent(SpawnChanceSubcomponent *this)
{
  SpawnChanceSubcomponent *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_271EC48;
  v2 = *((_DWORD *)this + 5);
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
  j_operator delete((void *)v1);
}


SpawnChanceSubcomponent *__fastcall SpawnChanceSubcomponent::~SpawnChanceSubcomponent(SpawnChanceSubcomponent *this)
{
  SpawnChanceSubcomponent *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_271EC48;
  v2 = *((_DWORD *)this + 5);
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
  return v1;
}
