

BaseMobSpawner *__fastcall BaseMobSpawner::~BaseMobSpawner(BaseMobSpawner *this)
{
  BaseMobSpawner *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@3
  char *v4; // r0@5
  char *v5; // r5@5
  int v6; // r6@6

  v1 = this;
  *(_DWORD *)this = &off_2703B74;
  v2 = *((_DWORD *)this + 12);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 32))();
  *((_DWORD *)v1 + 12) = 0;
  v3 = *((_DWORD *)v1 + 8);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  *((_DWORD *)v1 + 8) = 0;
  v5 = (char *)(*(_QWORD *)((char *)v1 + 20) >> 32);
  v4 = (char *)*(_QWORD *)((char *)v1 + 20);
  if ( v4 != v5 )
  {
    do
    {
      v6 = (int)(v4 + 16);
      (**(void (***)(void))v4)();
      v4 = (char *)v6;
    }
    while ( v5 != (char *)v6 );
    v4 = (char *)*((_DWORD *)v1 + 5);
  }
  if ( v4 )
    operator delete(v4);
  return v1;
}


void __fastcall BaseMobSpawner::~BaseMobSpawner(BaseMobSpawner *this)
{
  BaseMobSpawner *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@3
  char *v4; // r0@5
  char *v5; // r5@5
  int v6; // r6@6

  v1 = this;
  *(_DWORD *)this = &off_2703B74;
  v2 = *((_DWORD *)this + 12);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 32))();
  *((_DWORD *)v1 + 12) = 0;
  v3 = *((_DWORD *)v1 + 8);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  *((_DWORD *)v1 + 8) = 0;
  v5 = (char *)(*(_QWORD *)((char *)v1 + 20) >> 32);
  v4 = (char *)*(_QWORD *)((char *)v1 + 20);
  if ( v4 != v5 )
  {
    do
    {
      v6 = (int)(v4 + 16);
      (**(void (***)(void))v4)();
      v4 = (char *)v6;
    }
    while ( v5 != (char *)v6 );
    v4 = (char *)*((_DWORD *)v1 + 5);
  }
  if ( v4 )
    operator delete(v4);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall BaseMobSpawner::save(BaseMobSpawner *this, CompoundTag *a2)
{
  BaseMobSpawner::save(this, a2);
}


int __fastcall BaseMobSpawner::_delay(BaseMobSpawner *this, BlockSource *a2)
{
  BlockSource *v2; // r9@1
  BaseMobSpawner *v3; // r5@1
  Level *v4; // r0@1
  char *v5; // r6@1
  __int64 v6; // kr00_8@1
  unsigned int v7; // r1@3
  int v8; // r0@7
  int v9; // r2@7
  int v10; // r4@8
  unsigned int v11; // r7@9
  int v12; // r1@9
  int v13; // r3@10
  signed int v14; // r1@12
  _DWORD *v15; // r6@19
  int v16; // r1@19
  int v17; // r0@20
  int v18; // r1@20
  int v19; // r0@24
  const BlockPos *v20; // r0@26
  int v22; // [sp+0h] [bp-20h]@20

  v2 = a2;
  v3 = this;
  v4 = (Level *)BlockSource::getLevel(a2);
  v5 = Level::getRandom(v4);
  v6 = *(_QWORD *)((char *)v3 + 36);
  if ( SHIDWORD(v6) <= (signed int)v6 )
  {
    *((_DWORD *)v3 + 1) = v6;
  }
  else
    if ( HIDWORD(v6) == (_DWORD)v6 )
      v7 = 0;
    else
      v7 = Random::_genRandInt32((Random *)v5) % (HIDWORD(v6) - (signed int)v6);
    *((_DWORD *)v3 + 1) = v7 + v6;
  v9 = *(_QWORD *)((char *)v3 + 20) >> 32;
  v8 = *(_QWORD *)((char *)v3 + 20);
  if ( v9 != v8 )
    v10 = 0;
    if ( v8 != v9 )
    {
      v11 = 0;
      v12 = *(_QWORD *)((char *)v3 + 20);
      do
      {
        v13 = *(_DWORD *)(v12 + 4);
        v12 += 16;
        v11 += v13;
      }
      while ( v9 != v12 );
      if ( v11 )
        v14 = Random::_genRandInt32((Random *)v5) % v11;
        v9 = *(_QWORD *)((char *)v3 + 20) >> 32;
        v8 = *(_QWORD *)((char *)v3 + 20);
      else
        v14 = 0;
      if ( v8 == v9 )
LABEL_17:
        v10 = 0;
        while ( 1 )
        {
          v14 -= *(_DWORD *)(v8 + 4);
          if ( v14 < 0 )
            break;
          v8 += 16;
          if ( v9 == v8 )
            goto LABEL_17;
        }
        v10 = v8;
    }
    v15 = operator new(0x10u);
    v15[1] = *(_DWORD *)(v10 + 4);
    *v15 = &off_2703B64;
    v15[2] = *(_DWORD *)(v10 + 8);
    v15[3] = 0;
    v16 = *(_DWORD *)(v10 + 12);
    if ( v16 )
      (*(void (__fastcall **)(int *))(*(_DWORD *)v16 + 48))(&v22);
      v17 = v15[3];
      v18 = v22;
      v22 = 0;
      v15[3] = v18;
      if ( v17 )
        (*(void (**)(void))(*(_DWORD *)v17 + 4))();
        if ( v22 )
          (*(void (**)(void))(*(_DWORD *)v22 + 4))();
    v19 = *((_DWORD *)v3 + 8);
    *((_DWORD *)v3 + 8) = v15;
    if ( v19 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v19 + 4))(v19);
  v20 = (const BlockPos *)(*(int (__fastcall **)(BaseMobSpawner *))(*(_DWORD *)v3 + 20))(v3);
  return BlockSource::blockEvent(v2, v20, 1, 0);
}


void __fastcall BaseMobSpawner::load(BaseMobSpawner *this, const CompoundTag *a2)
{
  BaseMobSpawner::load(this, a2);
}


int __fastcall BaseMobSpawner::setNextSpawnData(int a1, int *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int result; // r0@1

  v2 = a1;
  v3 = *a2;
  *a2 = 0;
  result = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(v2 + 32) = v3;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


_BOOL4 __fastcall BaseMobSpawner::isNearPlayer(BaseMobSpawner *this, BlockSource *a2)
{
  BlockSource *v3; // r4@1
  Dimension *v5; // r0@1
  float v14; // [sp+0h] [bp-18h]@0

  _R5 = this;
  v3 = a2;
  _R6 = (*(int (**)(void))(*(_DWORD *)this + 20))();
  v5 = (Dimension *)BlockSource::getDimension(v3);
  __asm
  {
    VLDR            S0, [R6]
    VMOV.F32        S6, #0.5
    VLDR            S2, [R6,#4]
    VLDR            S4, [R6,#8]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VADD.F32        S0, S0, S6
    VADD.F32        S2, S2, S6
    VADD.F32        S4, S4, S6
    VMOV            R1, S0
    VLDR            S0, [R5,#0x38]
    VMOV            R2, S2
    VMOV            R3, S4
    VSTR            S0, [SP,#0x18+var_18]
  }
  return Dimension::fetchNearestPlayer(v5, _R1, _R2, _R3, v14) != 0;
}


int __fastcall BaseMobSpawner::getDisplayEntity(BaseMobSpawner *this, BlockSource *a2)
{
  BlockSource *v2; // r5@1
  int *v4; // r0@1
  int v5; // t1@1
  int result; // r0@2
  int v7; // r1@3
  int v8; // r0@7
  int v9; // r1@7
  int v10; // r0@7
  void *v11; // r0@10
  void *v12; // r0@11
  void *v13; // r0@12
  Entity *v14; // r0@13
  Entity *v15; // r6@14
  Level *v16; // r0@14
  Level *v17; // r0@14
  int v18; // r5@15
  unsigned int v20; // r1@15
  unsigned int v25; // r1@17
  unsigned int v26; // r0@17
  int v27; // r0@22
  unsigned int *v28; // r2@24
  signed int v29; // r1@26
  unsigned int *v30; // r2@28
  signed int v31; // r1@30
  unsigned int *v32; // r2@32
  signed int v33; // r1@34
  char v34; // [sp+8h] [bp-30h]@7
  int v35; // [sp+14h] [bp-24h]@7
  int v36; // [sp+18h] [bp-20h]@11
  int v37; // [sp+1Ch] [bp-1Ch]@10
  int v38; // [sp+20h] [bp-18h]@7

  v2 = a2;
  _R4 = this;
  v5 = *((_DWORD *)this + 4);
  v4 = (int *)((char *)this + 16);
  if ( v5 == 1 )
  {
    result = 0;
  }
  else
    v7 = *((_DWORD *)_R4 + 8);
    if ( v7 )
      v4 = (int *)(v7 + 8);
    if ( *v4 && !*((_DWORD *)_R4 + 12) )
    {
      EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v35, *v4);
      v8 = (*(int (__fastcall **)(BaseMobSpawner *))(*(_DWORD *)_R4 + 20))(_R4);
      Vec3::Vec3((int)&v34, v8);
      EntityFactory::createSpawnedEntity((Entity **)&v38, (const void **)&v35, 0, (int)&v34, &Vec2::ZERO);
      v9 = v38;
      v38 = 0;
      v10 = *((_DWORD *)_R4 + 12);
      *((_DWORD *)_R4 + 12) = v9;
      if ( v10 )
      {
        (*(void (**)(void))(*(_DWORD *)v10 + 32))();
        if ( v38 )
          (*(void (**)(void))(*(_DWORD *)v38 + 32))();
      }
      v11 = (void *)(v37 - 12);
      if ( (int *)(v37 - 12) != &dword_28898C0 )
        v28 = (unsigned int *)(v37 - 4);
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
          j_j_j_j__ZdlPv_9(v11);
      v12 = (void *)(v36 - 12);
      if ( (int *)(v36 - 12) != &dword_28898C0 )
        v30 = (unsigned int *)(v36 - 4);
            v31 = __ldrex(v30);
          while ( __strex(v31 - 1, v30) );
          v31 = (*v30)--;
        if ( v31 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      v13 = (void *)(v35 - 12);
      if ( (int *)(v35 - 12) != &dword_28898C0 )
        v32 = (unsigned int *)(v35 - 4);
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
          v33 = (*v32)--;
        if ( v33 <= 0 )
          j_j_j_j__ZdlPv_9(v13);
    }
    v14 = (Entity *)*((_DWORD *)_R4 + 12);
    if ( v14 )
      Entity::setRegion(v14, v2);
      v15 = (Entity *)*((_DWORD *)_R4 + 12);
      v16 = (Level *)BlockSource::getLevel(v2);
      Entity::_setLevelPtr(v15, v16);
      v17 = (Level *)BlockSource::getLevel(v2);
      if ( Level::isClientSide(v17) )
        v18 = *((_DWORD *)_R4 + 12);
        *(_DWORD *)(v18 + 304) = *((_DWORD *)_R4 + 16);
        *(_DWORD *)(v18 + 308) = *((_DWORD *)_R4 + 17);
        _R0 = SynchedEntityData::_get((SynchedEntityData *)(v18 + 176), 39);
        v20 = *(_DWORD *)(_R0 + 4);
        if ( (unsigned __int8)v20 == 3 )
          __asm
          {
            VLDR            S0, [R4,#0x48]
            VLDR            S2, [R0,#0xC]
            VCMPE.F32       S2, S0
            VMRS            APSR_nzcv, FPSCR
          }
          if ( !_ZF )
            __asm { VSTR            S0, [R0,#0xC] }
            *(_BYTE *)(_R0 + 8) = 1;
            v25 = v20 >> 16;
            v26 = *(_WORD *)(v18 + 188);
            if ( v26 >= v25 )
              LOWORD(v26) = v25;
            *(_WORD *)(v18 + 188) = v26;
            if ( *(_WORD *)(v18 + 190) > v25 )
              LOWORD(v25) = *(_WORD *)(v18 + 190);
            *(_WORD *)(v18 + 190) = v25;
      else
        Entity::reload(*((Entity **)_R4 + 12));
        v27 = *((_DWORD *)_R4 + 12);
        *((_DWORD *)_R4 + 16) = *(_DWORD *)(v27 + 304);
        *((_DWORD *)_R4 + 17) = *(_DWORD *)(v27 + 308);
        *((_DWORD *)_R4 + 18) = SynchedEntityData::getFloat((SynchedEntityData *)(v27 + 176), 39);
    result = *((_DWORD *)_R4 + 12);
  return result;
}


int __fastcall BaseMobSpawner::tick(BaseMobSpawner *this, BlockSource *a2)
{
  int v2; // r10@0
  BlockSource *v4; // r9@1
  Dimension *v6; // r0@1
  int v13; // r0@1
  int result; // r0@5
  Level *v16; // r8@4
  int v22; // r11@4
  char *v23; // r5@4
  int v27; // r0@4
  signed int v28; // r0@6
  int v29; // r11@11
  unsigned int *v30; // r2@12
  signed int v31; // r1@14
  unsigned int *v32; // r2@16
  signed int v33; // r1@18
  unsigned int *v34; // r2@20
  signed int v35; // r1@22
  unsigned int *v36; // r2@24
  signed int v37; // r1@26
  unsigned int *v38; // r2@28
  signed int v39; // r1@30
  unsigned int *v40; // r2@32
  signed int v41; // r1@34
  char *v43; // r0@60
  Random *v44; // r5@60
  char *v48; // r0@60
  char *v51; // r0@60
  Random *v52; // r5@60
  Block *v55; // r0@60
  int v56; // r0@61
  __int64 v57; // r2@61
  int v58; // r1@61
  int v59; // r2@65
  int v60; // r0@68
  int *v61; // r1@68
  int v62; // r7@70
  unsigned __int64 *v64; // r0@70
  char *v65; // r0@72
  unsigned int v66; // r0@72
  Spawner *v67; // r5@74
  int v68; // r10@74
  void *v69; // r0@74
  void *v70; // r0@75
  void *v71; // r0@76
  char *v72; // r0@77
  void *v73; // r0@78
  void *v74; // r0@79
  BlockSource *v75; // ST34_4@81
  __int64 v76; // kr08_8@81
  float v81; // [sp+0h] [bp-188h]@0
  signed int v82; // [sp+34h] [bp-154h]@11
  int v83; // [sp+44h] [bp-144h]@71
  int v84; // [sp+48h] [bp-140h]@11
  char v85; // [sp+4Ch] [bp-13Ch]@81
  char *v86; // [sp+58h] [bp-130h]@24
  int v87; // [sp+5Ch] [bp-12Ch]@28
  int v88; // [sp+64h] [bp-124h]@32
  int v89; // [sp+68h] [bp-120h]@20
  int v90; // [sp+6Ch] [bp-11Ch]@16
  int v91; // [sp+70h] [bp-118h]@12
  float v92; // [sp+74h] [bp-114h]@70
  int v93; // [sp+78h] [bp-110h]@70
  float v94; // [sp+80h] [bp-108h]@70
  char v95; // [sp+8Ch] [bp-FCh]@70
  char v96; // [sp+A8h] [bp-E0h]@70
  float v97; // [sp+C4h] [bp-C4h]@70
  float v100; // [sp+D0h] [bp-B8h]@61
  float v103; // [sp+DCh] [bp-ACh]@61
  int v104; // [sp+E8h] [bp-A0h]@61
  int v105; // [sp+ECh] [bp-9Ch]@63
  int v106; // [sp+F0h] [bp-98h]@61
  char v107; // [sp+F4h] [bp-94h]@60
  float v108; // [sp+100h] [bp-88h]@60
  float v109; // [sp+104h] [bp-84h]@60
  int v110; // [sp+108h] [bp-80h]@60
  int v111; // [sp+10Ch] [bp-7Ch]@4
  int v112; // [sp+110h] [bp-78h]@4
  int v113; // [sp+114h] [bp-74h]@4
  int v114; // [sp+118h] [bp-70h]@4
  int v115; // [sp+11Ch] [bp-6Ch]@4
  int v116; // [sp+120h] [bp-68h]@4
  float v117; // [sp+124h] [bp-64h]@4
  float v120; // [sp+130h] [bp-58h]@4

  _R4 = this;
  v4 = a2;
  _R5 = (*(int (**)(void))(*(_DWORD *)this + 20))();
  v6 = (Dimension *)BlockSource::getDimension(v4);
  __asm
  {
    VLDR            S0, [R5]
    VMOV.F32        S16, #0.5
    VLDR            S2, [R5,#4]
    VLDR            S4, [R5,#8]
    VCVT.F32.S32    S0, S0
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VADD.F32        S0, S0, S16
    VADD.F32        S2, S2, S16
    VADD.F32        S4, S4, S16
    VMOV            R1, S0
    VLDR            S0, [R4,#0x38]
    VMOV            R2, S2
    VMOV            R3, S4
    VSTR            S0, [SP,#0x188+var_188]
  }
  v13 = Dimension::fetchNearestPlayer(v6, _R1, _R2, _R3, v81);
  _ZF = v13 == 0;
  if ( v13 )
    v2 = (int)_R4 + 16;
    _ZF = *((_DWORD *)_R4 + 4) == 1;
  if ( _ZF )
    result = *((_DWORD *)_R4 + 2);
    *((_DWORD *)_R4 + 3) = result;
  else
    v16 = (Level *)BlockSource::getLevel(v4);
    _R0 = *((_DWORD *)_R4 + 2);
    *((_DWORD *)_R4 + 3) = _R0;
    _R1 = -1240768329;
    __asm
    {
      VLDR            S0, [R4,#4]
      VLDR            S2, =200.0
      VCVT.F32.S32    S0, S0
      VADD.F32        S0, S0, S2
      VLDR            S2, =1000.0
      VDIV.F32        S0, S2, S0
      VMOV            S2, R0
      VCVTR.S32.F32   S0, S0
      VMOV            R0, S0
      SMMLA.W         R1, R1, R0, R0
    }
    _R0 = _R0 - 360 * (((signed int)_R1 >> 8) + (_R1 >> 31));
      VMOV            S0, R0
      VSTR            S0, [R4,#8]
    v22 = (*(int (__fastcall **)(BaseMobSpawner *))(*(_DWORD *)_R4 + 20))(_R4);
    v23 = Level::getRandom(v16);
    _R7 = Random::_genRandInt32((Random *)v23);
    _R6 = Random::_genRandInt32((Random *)v23);
    _R5 = Random::_genRandInt32((Random *)v23);
    v27 = (*(int (__fastcall **)(BaseMobSpawner *))(*(_DWORD *)_R4 + 20))(_R4);
    Vec3::Vec3((int)&v117, v27);
      VMOV            S0, R7
      VLDR            D9, =2.32830644e-10
      VMOV            S2, R6
      VMOV            S4, R5
      VCVT.F64.U32    D0, S0
      VCVT.F64.U32    D1, S2
      VCVT.F64.U32    D2, S4
      VMUL.F64        D0, D0, D9
      VMUL.F64        D1, D1, D9
      VMUL.F64        D2, D2, D9
      VCVT.F32.F64    S0, D0
      VCVT.F32.F64    S2, D1
      VCVT.F32.F64    S4, D2
      VLDR            S6, [SP,#0x188+var_64]
      VLDR            S8, [SP,#0x188+var_60]
      VLDR            S10, [SP,#0x188+var_5C]
      VADD.F32        S0, S6, S0
      VADD.F32        S2, S8, S2
      VADD.F32        S4, S10, S4
      VSTR            S0, [SP,#0x188+var_58]
      VSTR            S2, [SP,#0x188+var_54]
      VSTR            S4, [SP,#0x188+var_50]
    v114 = 0;
    v115 = 0;
    v116 = 0;
    Level::addParticle((int)v16, 4, (int)&v120);
    v111 = 0;
    v112 = 0;
    v113 = 0;
    Level::addParticle((int)v16, 7, (int)&v120);
    v28 = *((_DWORD *)_R4 + 1);
    if ( v28 < 1 )
      result = Level::isClientSide(v16);
      if ( !result )
      {
        if ( *((_DWORD *)_R4 + 1) == -1 )
          goto LABEL_85;
        result = *((_DWORD *)_R4 + 11);
        if ( result >= 1 )
        {
          __asm { VMOV.F32        S20, #-1.0 }
          v84 = v22;
          v29 = 0;
          v82 = 0;
          do
          {
            v108 = 0.0;
            v109 = 0.0;
            v110 = 0;
            _R7 = *(_DWORD *)v84;
            v43 = Level::getRandom(v16);
            v44 = (Random *)v43;
            _R0 = Random::_genRandInt32((Random *)v43);
            __asm
            {
              VMOV            S0, R0
              VCVT.F64.U32    D11, S0
            }
            _R0 = Random::_genRandInt32(v44);
              VMUL.F64        D1, D11, D9
              VCVT.F64.U32    D0, S0
              VMUL.F64        D0, D0, D9
              VCVT.F32.F64    S2, D1
              VCVT.F32.F64    S0, D0
              VLDR            S4, [R4,#0x3C]
              VMOV            S6, R7
              VSUB.F32        S0, S2, S0
              VCVT.F32.S32    S6, S6
              VCVT.F32.S32    S4, S4
              VADD.F32        S2, S6, S16
              VMUL.F32        S0, S0, S4
              VADD.F32        S0, S2, S0
              VSTR            S0, [SP,#0x188+var_88]
            _R0 = *(_DWORD *)(v84 + 4);
              VCVT.F32.S32    S22, S0
            v48 = Level::getRandom(v16);
            _R0 = Random::_genRandInt32((Random *)v48);
            __asm { VADD.F32        S0, S22, S20 }
            _R0 %= 3u;
              VMOV            S2, R0
              VCVT.F32.S32    S2, S2
              VADD.F32        S0, S0, S2
              VSTR            S0, [SP,#0x188+var_84]
            _R7 = *(_DWORD *)(v84 + 8);
            v51 = Level::getRandom(v16);
            v52 = (Random *)v51;
            _R0 = Random::_genRandInt32((Random *)v51);
            _R0 = Random::_genRandInt32(v52);
              VSTR            S0, [SP,#0x188+var_80]
            BlockPos::BlockPos((int)&v107, (int)&v108);
            v55 = (Block *)BlockSource::getBlock(v4, (const BlockPos *)&v107);
            if ( Block::isMotionBlockingBlock(v55) != 1 )
              v56 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)_R4 + 20))(_R4);
              Vec3::Vec3((int)&v100, v56);
              __asm
              {
                VLDR            S0, [SP,#0x188+var_B8]
                VLDR            S6, [SP,#0x188+var_88]
                VLDR            S2, [SP,#0x188+var_B4]
                VLDR            S8, [SP,#0x188+var_84]
                VSUB.F32        S0, S6, S0
                VLDR            S4, [SP,#0x188+var_B0]
                VLDR            S10, [SP,#0x188+var_80]
                VSUB.F32        S2, S8, S2
                VSUB.F32        S4, S10, S4
                VSTR            S0, [SP,#0x188+var_AC]
                VSTR            S2, [SP,#0x188+var_A8]
                VSTR            S4, [SP,#0x188+var_A4]
              }
              BlockPos::BlockPos((int)&v104, (int)&v103);
              v57 = *(_QWORD *)&v104;
              v58 = v106;
              if ( v104 < 0 )
                LODWORD(v57) = -v104;
              if ( v105 < 0 )
                HIDWORD(v57) = -v105;
              v59 = v57 + HIDWORD(v57);
              if ( v106 < 0 )
                v58 = -v106;
              if ( v58 + v59 <= *((_DWORD *)_R4 + 15) )
                v60 = *((_DWORD *)_R4 + 8);
                v61 = (int *)v2;
                if ( v60 )
                  v61 = (int *)(v60 + 8);
                v62 = *v61;
                Vec3::Vec3((int)&v97, v84);
                _R0 = &Vec3::ZERO;
                __asm
                {
                  VLDR            S6, [SP,#0x188+var_C4]
                  VLDR            S8, [SP,#0x188+var_C0]
                  VLDR            S0, [R0]
                  VLDR            S2, [R0,#4]
                  VLDR            S4, [R0,#8]
                  VADD.F32        S0, S0, S6
                  VLDR            S10, [SP,#0x188+var_BC]
                  VADD.F32        S2, S2, S8
                  VADD.F32        S4, S4, S10
                  VSTR            S0, [SP,#0x188+var_108]
                  VSTR            S2, [SP,#0x188+var_104]
                  VSTR            S4, [SP,#0x188+var_100]
                }
                AABB::AABB((int)&v95, (int)&v97, (int)&v94);
                  VLDR            S0, [R4,#0x3C]
                  VCVT.F32.S32    S0, S0
                  VADD.F32        S0, S0, S0
                  VSTR            S0, [SP,#0x188+var_114]
                v93 = 1082130432;
                __asm { VSTR            S0, [SP,#0x188+var_10C] }
                AABB::grow((AABB *)&v96, (const Vec3 *)&v95, (int)&v92);
                v64 = (unsigned __int64 *)BlockSource::fetchEntities((int)v4, v62, (int)&v96, 0);
                if ( (signed int)((*v64 >> 32) - *v64) >> 2 >= *((_DWORD *)_R4 + 13) )
                  goto LABEL_85;
                v83 = v2;
                if ( EntityClassTree::isOfType(v62, 199456) == 1 )
                  v65 = Level::getRandom(v16);
                  v66 = Random::_genRandInt32((Random *)v65);
                  v62 = 199456;
                  if ( v66 == 20 * (v66 / 0x14) )
                    v62 = 199468;
                v67 = (Spawner *)Level::getSpawner(v16);
                sub_21E94B4((void **)&v88, "minecraft");
                EntityTypeIdWithoutCategories(&v87, v62, 0);
                v86 = (char *)&unk_28898CC;
                EntityDefinitionIdentifier::EntityDefinitionIdentifier(&v89, &v88, &v87, (int *)&v86);
                v68 = Spawner::spawnMob(
                        v67,
                        v4,
                        (const EntityDefinitionIdentifier *)&v89,
                        0,
                        (const Vec3 *)&v108,
                        1,
                        1);
                v69 = (void *)(v91 - 12);
                if ( (int *)(v91 - 12) != &dword_28898C0 )
                  v30 = (unsigned int *)(v91 - 4);
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
                    j_j_j_j__ZdlPv_9(v69);
                v70 = (void *)(v90 - 12);
                if ( (int *)(v90 - 12) != &dword_28898C0 )
                  v32 = (unsigned int *)(v90 - 4);
                      v33 = __ldrex(v32);
                    while ( __strex(v33 - 1, v32) );
                    v33 = (*v32)--;
                  if ( v33 <= 0 )
                    j_j_j_j__ZdlPv_9(v70);
                v71 = (void *)(v89 - 12);
                if ( (int *)(v89 - 12) != &dword_28898C0 )
                  v34 = (unsigned int *)(v89 - 4);
                      v35 = __ldrex(v34);
                    while ( __strex(v35 - 1, v34) );
                    v35 = (*v34)--;
                  if ( v35 <= 0 )
                    j_j_j_j__ZdlPv_9(v71);
                v72 = v86 - 12;
                if ( (int *)(v86 - 12) != &dword_28898C0 )
                  v36 = (unsigned int *)(v86 - 4);
                      v37 = __ldrex(v36);
                    while ( __strex(v37 - 1, v36) );
                    v37 = (*v36)--;
                  if ( v37 <= 0 )
                    j_j_j_j__ZdlPv_9(v72);
                v73 = (void *)(v87 - 12);
                if ( (int *)(v87 - 12) != &dword_28898C0 )
                  v38 = (unsigned int *)(v87 - 4);
                      v39 = __ldrex(v38);
                    while ( __strex(v39 - 1, v38) );
                    v39 = (*v38)--;
                  if ( v39 <= 0 )
                    j_j_j_j__ZdlPv_9(v73);
                v74 = (void *)(v88 - 12);
                if ( (int *)(v88 - 12) != &dword_28898C0 )
                  v40 = (unsigned int *)(v88 - 4);
                      v41 = __ldrex(v40);
                    while ( __strex(v41 - 1, v40) );
                    v41 = (*v40)--;
                  if ( v41 <= 0 )
                    j_j_j_j__ZdlPv_9(v74);
                if ( v68 )
                  v75 = (BlockSource *)Entity::getRegion((Entity *)v68);
                  Vec3::Vec3((int)&v85, v84);
                  v76 = *(_QWORD *)(v68 + 304);
                  _R6 = ceilf(*(float *)&v76);
                  _R0 = ceilf(*((float *)&v76 + 1));
                  __asm
                    VMOV            S0, R0
                    VMOV            S2, R6
                    VCVTR.S32.F32   S0, S0
                    VCVTR.S32.F32   S2, S2
                    VMOV            R0, S0
                    VMOV            R1, S2
                  Level::broadcastDimensionEvent((int)v16, v75, 2004, (int)&v85, _R1 + (_R0 << 8));
                  Entity::setPersistent((Entity *)v68);
                  (*(void (__fastcall **)(int))(*(_DWORD *)v68 + 780))(v68);
                  v82 = 1;
                v2 = v83;
            ++v29;
          }
          while ( v29 < *((_DWORD *)_R4 + 11) );
          result = v82;
          if ( v82 & 1 )
LABEL_85:
            result = BaseMobSpawner::_delay(_R4, v4);
        }
      }
    else
      result = v28 - 1;
      *((_DWORD *)_R4 + 1) = result;
  return result;
}


int __fastcall BaseMobSpawner::getSpawnTypeId(BaseMobSpawner *this)
{
  int v1; // r1@1
  char *v2; // r2@1

  v1 = *((_DWORD *)this + 8);
  v2 = (char *)(v1 + 8);
  if ( !v1 )
    v2 = (char *)this + 16;
  return *(_DWORD *)v2;
}


void __fastcall BaseMobSpawner::save(BaseMobSpawner *this, CompoundTag *a2)
{
  CompoundTag *v2; // r8@1
  BaseMobSpawner *v3; // r5@1
  int v4; // r0@1
  int *v5; // r1@1
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  void *v11; // r0@8
  void *v12; // r0@9
  void *v13; // r0@10
  void *v14; // r0@11
  void *v15; // r0@12
  void *v16; // r0@13
  int v17; // r0@14
  void *v18; // r0@18
  void *v19; // r9@21
  int v20; // r6@21
  int v21; // r7@21
  int v22; // r0@22
  int v23; // r0@26
  void *v24; // r0@31
  unsigned int *v25; // r2@33
  signed int v26; // r1@35
  unsigned int *v27; // r2@37
  signed int v28; // r1@39
  unsigned int *v29; // r2@41
  signed int v30; // r1@43
  unsigned int *v31; // r2@45
  signed int v32; // r1@47
  unsigned int *v33; // r2@49
  signed int v34; // r1@51
  unsigned int *v35; // r2@53
  signed int v36; // r1@55
  unsigned int *v37; // r2@57
  signed int v38; // r1@59
  unsigned int *v39; // r2@61
  signed int v40; // r1@63
  unsigned int *v41; // r2@65
  signed int v42; // r1@67
  unsigned int *v43; // r2@69
  signed int v44; // r1@71
  unsigned int *v45; // r2@73
  signed int v46; // r1@75
  unsigned int *v47; // r2@77
  signed int v48; // r1@79
  unsigned int *v49; // r2@125
  signed int v50; // r1@127
  void *v51; // [sp+4h] [bp-A4h]@29
  int v52; // [sp+Ch] [bp-9Ch]@29
  int v53; // [sp+10h] [bp-98h]@22
  int v54; // [sp+14h] [bp-94h]@22
  int v55; // [sp+18h] [bp-90h]@26
  int v56; // [sp+1Ch] [bp-8Ch]@26
  int v57; // [sp+20h] [bp-88h]@16
  int v58; // [sp+28h] [bp-80h]@16
  int v59; // [sp+30h] [bp-78h]@13
  int v60; // [sp+38h] [bp-70h]@12
  int v61; // [sp+40h] [bp-68h]@11
  int v62; // [sp+48h] [bp-60h]@10
  int v63; // [sp+50h] [bp-58h]@9
  int v64; // [sp+58h] [bp-50h]@8
  int v65; // [sp+60h] [bp-48h]@7
  int v66; // [sp+68h] [bp-40h]@6
  int v67; // [sp+70h] [bp-38h]@5
  int v68; // [sp+78h] [bp-30h]@4
  int v69; // [sp+80h] [bp-28h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v69, "EntityId");
  v4 = *((_DWORD *)v3 + 8);
  v5 = (int *)(v4 + 8);
  if ( !v4 )
    v5 = (int *)((char *)v3 + 16);
  CompoundTag::putInt((int)v2, (const void **)&v69, *v5);
  v6 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
  {
    v25 = (unsigned int *)(v69 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    }
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  sub_21E94B4((void **)&v68, "Delay");
  CompoundTag::putShort((int)v2, (const void **)&v68, *((_WORD *)v3 + 2));
  v7 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v68 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v67, "MinSpawnDelay");
  CompoundTag::putShort((int)v2, (const void **)&v67, *((_WORD *)v3 + 18));
  v8 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v67 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v66, "MaxSpawnDelay");
  CompoundTag::putShort((int)v2, (const void **)&v66, *((_WORD *)v3 + 20));
  v9 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v66 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v65, "SpawnCount");
  CompoundTag::putShort((int)v2, (const void **)&v65, *((_WORD *)v3 + 22));
  v10 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v65 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v64, "MaxNearbyEntities");
  CompoundTag::putShort((int)v2, (const void **)&v64, *((_WORD *)v3 + 26));
  v11 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v64 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v63, "RequiredPlayerRange");
  CompoundTag::putShort((int)v2, (const void **)&v63, *((_WORD *)v3 + 28));
  v12 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v63 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v62, "SpawnRange");
  CompoundTag::putShort((int)v2, (const void **)&v62, *((_WORD *)v3 + 30));
  v13 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v62 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v61, "DisplayEntityWidth");
  CompoundTag::putFloat((int)v2, (const void **)&v61, *((_DWORD *)v3 + 16));
  v14 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v61 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v60, "DisplayEntityHeight");
  CompoundTag::putFloat((int)v2, (const void **)&v60, *((_DWORD *)v3 + 17));
  v15 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v60 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v59, "DisplayEntityScale");
  CompoundTag::putFloat((int)v2, (const void **)&v59, *((_DWORD *)v3 + 18));
  v16 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v59 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = *((_DWORD *)v3 + 8);
  if ( v17 )
    if ( !*(_DWORD *)(v17 + 12) )
      goto LABEL_138;
    sub_21E94B4((void **)&v58, "SpawnData");
    (*(void (__fastcall **)(int *))(**(_DWORD **)(*((_DWORD *)v3 + 8) + 12) + 48))(&v57);
    CompoundTag::put((int)v2, (const void **)&v58, &v57);
    if ( v57 )
      (*(void (**)(void))(*(_DWORD *)v57 + 4))();
    v57 = 0;
    v18 = (void *)(v58 - 12);
    if ( (int *)(v58 - 12) != &dword_28898C0 )
      v49 = (unsigned int *)(v58 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v50 = __ldrex(v49);
        while ( __strex(v50 - 1, v49) );
      }
      else
        v50 = (*v49)--;
      if ( v50 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    if ( *((_DWORD *)v3 + 8) )
  if ( *(_QWORD *)((char *)v3 + 20) >> 32 != (unsigned int)*(_QWORD *)((char *)v3 + 20) )
LABEL_138:
    v19 = operator new(0x14u);
    ListTag::ListTag((int)v19);
    v20 = *(_QWORD *)((char *)v3 + 20) >> 32;
    v21 = *(_QWORD *)((char *)v3 + 20);
    if ( v20 == v21 )
      SpawnData::save((SpawnData *)&v53, *((_DWORD *)v3 + 8));
      v22 = v53;
      v53 = 0;
      v54 = v22;
      ListTag::add((int)v19, &v54);
      if ( v54 )
        (*(void (**)(void))(*(_DWORD *)v54 + 4))();
      v54 = 0;
      for ( ; v20 != v21; v56 = 0 )
        SpawnData::save((SpawnData *)&v55, v21);
        v23 = v55;
        v55 = 0;
        v56 = v23;
        ListTag::add((int)v19, &v56);
        if ( v56 )
          (*(void (**)(void))(*(_DWORD *)v56 + 4))();
        v21 += 16;
    sub_21E94B4((void **)&v52, "SpawnPotentials");
    v51 = v19;
    CompoundTag::put((int)v2, (const void **)&v52, (int *)&v51);
    if ( v51 )
      (*(void (**)(void))(*(_DWORD *)v51 + 4))();
    v51 = 0;
    v24 = (void *)(v52 - 12);
    if ( (int *)(v52 - 12) != &dword_28898C0 )
      v47 = (unsigned int *)(v52 - 4);
          v48 = __ldrex(v47);
        while ( __strex(v48 - 1, v47) );
        v48 = (*v47)--;
      if ( v48 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
}


void __fastcall BaseMobSpawner::~BaseMobSpawner(BaseMobSpawner *this)
{
  BaseMobSpawner::~BaseMobSpawner(this);
}


void __fastcall BaseMobSpawner::load(BaseMobSpawner *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r8@1
  BaseMobSpawner *v3; // r9@1
  int v4; // r5@1
  void *v5; // r0@1
  int v6; // r0@2
  void *v7; // r0@4
  int v8; // r5@5
  int v9; // r7@5
  void (***v10)(void); // r0@6
  int v11; // r4@7
  signed int v12; // r7@8
  void *v13; // r0@8
  ListTag *v14; // r7@10
  void *v15; // r0@10
  int v16; // r5@12
  const CompoundTag *v17; // r1@13
  __int64 v18; // kr00_8@13
  signed int v19; // r6@17
  void *v20; // r0@17
  const CompoundTag *v21; // r6@19
  SpawnData *v22; // r5@19
  int v23; // r0@19
  void *v24; // r0@21
  unsigned int *v25; // r2@22
  signed int v26; // r1@24
  int v27; // r0@26
  signed int v28; // r6@28
  void *v29; // r0@28
  void *v30; // r0@30
  void *v31; // r0@31
  void *v32; // r0@32
  signed int v33; // r6@33
  void *v34; // r0@33
  void *v35; // r0@35
  void *v36; // r0@36
  signed int v37; // r6@37
  void *v38; // r0@37
  void *v39; // r0@39
  signed int v40; // r6@40
  void *v41; // r0@40
  void *v47; // r0@42
  signed int v48; // r6@43
  void *v49; // r0@43
  void *v51; // r0@45
  signed int v52; // r6@46
  void *v53; // r0@46
  void *v55; // r0@48
  unsigned int *v56; // r2@50
  signed int v57; // r1@52
  unsigned int *v58; // r2@54
  signed int v59; // r1@56
  unsigned int *v60; // r2@58
  signed int v61; // r1@60
  unsigned int *v62; // r2@62
  signed int v63; // r1@64
  unsigned int *v64; // r2@66
  signed int v65; // r1@68
  unsigned int *v66; // r2@70
  signed int v67; // r1@72
  unsigned int *v68; // r2@74
  signed int v69; // r1@76
  unsigned int *v70; // r2@78
  signed int v71; // r1@80
  unsigned int *v72; // r2@82
  signed int v73; // r1@84
  unsigned int *v74; // r2@86
  signed int v75; // r1@88
  unsigned int *v76; // r2@102
  signed int v77; // r1@104
  unsigned int *v78; // r2@114
  signed int v79; // r1@116
  unsigned int *v80; // r2@118
  signed int v81; // r1@120
  unsigned int *v82; // r2@126
  signed int v83; // r1@128
  unsigned int *v84; // r2@130
  signed int v85; // r1@132
  unsigned int *v86; // r2@134
  signed int v87; // r1@136
  unsigned int *v88; // r2@142
  signed int v89; // r1@144
  unsigned int *v90; // r2@150
  signed int v91; // r1@152
  unsigned int *v92; // r2@158
  signed int v93; // r1@160
  unsigned int *v94; // r2@166
  signed int v95; // r1@168
  int v96; // [sp+4h] [bp-C4h]@48
  int v97; // [sp+Ch] [bp-BCh]@46
  int v98; // [sp+14h] [bp-B4h]@45
  int v99; // [sp+1Ch] [bp-ACh]@43
  int v100; // [sp+24h] [bp-A4h]@42
  int v101; // [sp+2Ch] [bp-9Ch]@40
  int v102; // [sp+34h] [bp-94h]@39
  int v103; // [sp+3Ch] [bp-8Ch]@37
  int v104; // [sp+44h] [bp-84h]@36
  int v105; // [sp+4Ch] [bp-7Ch]@35
  int v106; // [sp+54h] [bp-74h]@33
  int v107; // [sp+5Ch] [bp-6Ch]@32
  int v108; // [sp+64h] [bp-64h]@31
  int v109; // [sp+6Ch] [bp-5Ch]@30
  int v110; // [sp+74h] [bp-54h]@28
  int v111; // [sp+7Ch] [bp-4Ch]@19
  int v112; // [sp+84h] [bp-44h]@17
  int v113; // [sp+8Ch] [bp-3Ch]@10
  int v114; // [sp+94h] [bp-34h]@8
  int v115; // [sp+9Ch] [bp-2Ch]@4
  int v116; // [sp+A4h] [bp-24h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v116, "EntityId");
  v4 = (unsigned __int8)CompoundTag::getInt((int)v2, (const void **)&v116);
  v5 = (void *)(v116 - 12);
  if ( (int *)(v116 - 12) != &dword_28898C0 )
  {
    v56 = (unsigned int *)(v116 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
    }
    else
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = *((_DWORD *)v3 + 12);
  *((_DWORD *)v3 + 12) = 0;
  if ( v6 )
    (*(void (**)(void))(*(_DWORD *)v6 + 32))();
  *((_DWORD *)v3 + 4) = v4;
  sub_21E94B4((void **)&v115, "Delay");
  *((_DWORD *)v3 + 1) = CompoundTag::getShort((int)v2, (const void **)&v115);
  v7 = (void *)(v115 - 12);
  if ( (int *)(v115 - 12) != &dword_28898C0 )
    v58 = (unsigned int *)(v115 - 4);
        v59 = __ldrex(v58);
      while ( __strex(v59 - 1, v58) );
      v59 = (*v58)--;
    if ( v59 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v3 + 5);
  v9 = *((_DWORD *)v3 + 6);
  if ( v9 != v8 )
    v10 = (void (***)(void))*((_DWORD *)v3 + 5);
    do
      v11 = (int)(v10 + 4);
      (**v10)();
      v10 = (void (***)(void))v11;
    while ( v9 != v11 );
  *((_DWORD *)v3 + 6) = v8;
  sub_21E94B4((void **)&v114, "SpawnPotentials");
  v12 = CompoundTag::contains((int)v2, (const void **)&v114, 9);
  v13 = (void *)(v114 - 12);
  if ( (int *)(v114 - 12) != &dword_28898C0 )
    v60 = (unsigned int *)(v114 - 4);
        v61 = __ldrex(v60);
      while ( __strex(v61 - 1, v60) );
      v61 = (*v60)--;
    if ( v61 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  if ( v12 == 1 )
    sub_21E94B4((void **)&v113, "SpawnPotentials");
    v14 = (ListTag *)CompoundTag::getList((int)v2, (const void **)&v113);
    v15 = (void *)(v113 - 12);
    if ( (int *)(v113 - 12) != &dword_28898C0 )
      v76 = (unsigned int *)(v113 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v77 = __ldrex(v76);
        while ( __strex(v77 - 1, v76) );
      }
      else
        v77 = (*v76)--;
      if ( v77 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    if ( ListTag::size(v14) >= 1 )
      v16 = 0;
        v17 = (const CompoundTag *)ListTag::get(v14, v16);
        v18 = *((_QWORD *)v3 + 3);
        if ( (_DWORD)v18 == HIDWORD(v18) )
        {
          std::vector<SpawnData,std::allocator<SpawnData>>::_M_emplace_back_aux<CompoundTag &>(
            (unsigned __int64 *)((char *)v3 + 20),
            v17);
        }
        else
          SpawnData::SpawnData((SpawnData *)v18, v17);
          *((_DWORD *)v3 + 6) += 16;
        ++v16;
      while ( v16 < ListTag::size(v14) );
  sub_21E94B4((void **)&v112, "SpawnData");
  v19 = CompoundTag::contains((int)v2, (const void **)&v112, 10);
  v20 = (void *)(v112 - 12);
  if ( (int *)(v112 - 12) != &dword_28898C0 )
    v62 = (unsigned int *)(v112 - 4);
        v63 = __ldrex(v62);
      while ( __strex(v63 - 1, v62) );
      v63 = (*v62)--;
    if ( v63 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  if ( v19 == 1 )
    sub_21E94B4((void **)&v111, "SpawnData");
    v21 = (const CompoundTag *)CompoundTag::getCompound((int)v2, (const void **)&v111);
    v22 = (SpawnData *)operator new(0x10u);
    SpawnData::SpawnData(v22, v21);
    v23 = *((_DWORD *)v3 + 8);
    *((_DWORD *)v3 + 8) = v22;
    if ( v23 )
      (*(void (**)(void))(*(_DWORD *)v23 + 4))();
    v24 = (void *)(v111 - 12);
    if ( (int *)(v111 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v111 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
  else
    v27 = *((_DWORD *)v3 + 8);
    *((_DWORD *)v3 + 8) = 0;
    if ( v27 )
      (*(void (**)(void))(*(_DWORD *)v27 + 4))();
  sub_21E94B4((void **)&v110, "MinSpawnDelay");
  v28 = CompoundTag::contains((int)v2, (const void **)&v110, 2);
  v29 = (void *)(v110 - 12);
  if ( (int *)(v110 - 12) != &dword_28898C0 )
    v64 = (unsigned int *)(v110 - 4);
        v65 = __ldrex(v64);
      while ( __strex(v65 - 1, v64) );
      v65 = (*v64)--;
    if ( v65 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  if ( v28 == 1 )
    sub_21E94B4((void **)&v109, "MinSpawnDelay");
    *((_DWORD *)v3 + 9) = CompoundTag::getShort((int)v2, (const void **)&v109);
    v30 = (void *)(v109 - 12);
    if ( (int *)(v109 - 12) != &dword_28898C0 )
      v78 = (unsigned int *)(v109 - 4);
          v79 = __ldrex(v78);
        while ( __strex(v79 - 1, v78) );
        v79 = (*v78)--;
      if ( v79 <= 0 )
        j_j_j_j__ZdlPv_9(v30);
    sub_21E94B4((void **)&v108, "MaxSpawnDelay");
    *((_DWORD *)v3 + 10) = CompoundTag::getShort((int)v2, (const void **)&v108);
    v31 = (void *)(v108 - 12);
    if ( (int *)(v108 - 12) != &dword_28898C0 )
      v80 = (unsigned int *)(v108 - 4);
          v81 = __ldrex(v80);
        while ( __strex(v81 - 1, v80) );
        v81 = (*v80)--;
      if ( v81 <= 0 )
        j_j_j_j__ZdlPv_9(v31);
    sub_21E94B4((void **)&v107, "SpawnCount");
    *((_DWORD *)v3 + 11) = CompoundTag::getShort((int)v2, (const void **)&v107);
    v32 = (void *)(v107 - 12);
    if ( (int *)(v107 - 12) != &dword_28898C0 )
      v82 = (unsigned int *)(v107 - 4);
          v83 = __ldrex(v82);
        while ( __strex(v83 - 1, v82) );
        v83 = (*v82)--;
      if ( v83 <= 0 )
        j_j_j_j__ZdlPv_9(v32);
  sub_21E94B4((void **)&v106, "MaxNearbyEntities");
  v33 = CompoundTag::contains((int)v2, (const void **)&v106, 2);
  v34 = (void *)(v106 - 12);
  if ( (int *)(v106 - 12) != &dword_28898C0 )
    v66 = (unsigned int *)(v106 - 4);
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  if ( v33 == 1 )
    sub_21E94B4((void **)&v105, "MaxNearbyEntities");
    *((_DWORD *)v3 + 13) = CompoundTag::getShort((int)v2, (const void **)&v105);
    v35 = (void *)(v105 - 12);
    if ( (int *)(v105 - 12) != &dword_28898C0 )
      v84 = (unsigned int *)(v105 - 4);
          v85 = __ldrex(v84);
        while ( __strex(v85 - 1, v84) );
        v85 = (*v84)--;
      if ( v85 <= 0 )
        j_j_j_j__ZdlPv_9(v35);
    sub_21E94B4((void **)&v104, "RequiredPlayerRange");
    *((_DWORD *)v3 + 14) = CompoundTag::getShort((int)v2, (const void **)&v104);
    v36 = (void *)(v104 - 12);
    if ( (int *)(v104 - 12) != &dword_28898C0 )
      v86 = (unsigned int *)(v104 - 4);
          v87 = __ldrex(v86);
        while ( __strex(v87 - 1, v86) );
        v87 = (*v86)--;
      if ( v87 <= 0 )
        j_j_j_j__ZdlPv_9(v36);
  sub_21E94B4((void **)&v103, "SpawnRange");
  v37 = CompoundTag::contains((int)v2, (const void **)&v103, 2);
  v38 = (void *)(v103 - 12);
  if ( (int *)(v103 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v103 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  if ( v37 == 1 )
    sub_21E94B4((void **)&v102, "SpawnRange");
    *((_DWORD *)v3 + 15) = CompoundTag::getShort((int)v2, (const void **)&v102);
    v39 = (void *)(v102 - 12);
    if ( (int *)(v102 - 12) != &dword_28898C0 )
      v88 = (unsigned int *)(v102 - 4);
          v89 = __ldrex(v88);
        while ( __strex(v89 - 1, v88) );
        v89 = (*v88)--;
      if ( v89 <= 0 )
        j_j_j_j__ZdlPv_9(v39);
  sub_21E94B4((void **)&v101, "DisplayEntityWidth");
  v40 = CompoundTag::contains((int)v2, (const void **)&v101);
  v41 = (void *)(v101 - 12);
  if ( (int *)(v101 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v101 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  if ( v40 == 1 )
    sub_21E94B4((void **)&v100, "DisplayEntityWidth");
    _R0 = CompoundTag::getFloat((int)v2, (const void **)&v100);
    __asm
      VMOV            S0, R0
      VSTR            S0, [R9,#0x40]
    v47 = (void *)(v100 - 12);
    if ( (int *)(v100 - 12) != &dword_28898C0 )
      v90 = (unsigned int *)(v100 - 4);
          v91 = __ldrex(v90);
        while ( __strex(v91 - 1, v90) );
        v91 = (*v90)--;
      if ( v91 <= 0 )
        j_j_j_j__ZdlPv_9(v47);
  sub_21E94B4((void **)&v99, "DisplayEntityHeight");
  v48 = CompoundTag::contains((int)v2, (const void **)&v99);
  v49 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v99 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v49);
  if ( v48 == 1 )
    sub_21E94B4((void **)&v98, "DisplayEntityHeight");
    _R0 = CompoundTag::getFloat((int)v2, (const void **)&v98);
      VSTR            S0, [R9,#0x44]
    v51 = (void *)(v98 - 12);
    if ( (int *)(v98 - 12) != &dword_28898C0 )
      v92 = (unsigned int *)(v98 - 4);
          v93 = __ldrex(v92);
        while ( __strex(v93 - 1, v92) );
        v93 = (*v92)--;
      if ( v93 <= 0 )
        j_j_j_j__ZdlPv_9(v51);
  sub_21E94B4((void **)&v97, "DisplayEntityScale");
  v52 = CompoundTag::contains((int)v2, (const void **)&v97);
  v53 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v97 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v53);
  if ( v52 == 1 )
    sub_21E94B4((void **)&v96, "DisplayEntityScale");
    _R0 = CompoundTag::getFloat((int)v2, (const void **)&v96);
      VSTR            S0, [R9,#0x48]
    v55 = (void *)(v96 - 12);
    if ( (int *)(v96 - 12) != &dword_28898C0 )
      v94 = (unsigned int *)(v96 - 4);
          v95 = __ldrex(v94);
        while ( __strex(v95 - 1, v94) );
        v95 = (*v94)--;
      if ( v95 <= 0 )
        j_j_j_j__ZdlPv_9(v55);
}


int __fastcall BaseMobSpawner::BaseMobSpawner(int result, int a2)
{
  int v2; // r7@1

  v2 = result + 64;
  *(_DWORD *)result = &off_2703B74;
  *(_DWORD *)(result + 4) = 20;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 36) = 200;
  *(_DWORD *)(result + 40) = 800;
  *(_DWORD *)(result + 44) = 4;
  *(_DWORD *)(result + 52) = 4;
  *(_DWORD *)(result + 56) = 16;
  *(_DWORD *)(result + 60) = 4;
  *(_DWORD *)v2 = 1061997773;
  *(_DWORD *)(v2 + 4) = 1072064102;
  *(_DWORD *)(v2 + 8) = 1065353216;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 16) = a2;
  return result;
}


int __fastcall BaseMobSpawner::setEntityId(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  int result; // r0@1

  v2 = a1;
  v3 = a2;
  result = *(_DWORD *)(a1 + 48);
  *(_DWORD *)(v2 + 48) = 0;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 32))();
  *(_DWORD *)(v2 + 16) = v3;
  return result;
}
