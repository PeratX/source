

int __fastcall HangingEntity::reloadHardcodedClient(int a1)
{
  int v1; // r1@1

  v1 = *(_DWORD *)(a1 + 3412);
  return (*(int (**)(void))(*(_DWORD *)a1 + 768))();
}


signed int __fastcall HangingEntity::wouldSurvive(HangingEntity *this, BlockSource *a2)
{
  char *v3; // r7@1
  BlockSource *v4; // r5@1
  signed int v5; // r8@1
  signed int v6; // r6@1
  char *v7; // r0@1
  signed int v8; // kr00_4@2
  int v9; // r6@2
  signed int v10; // r0@4
  int v11; // r1@4
  signed int v12; // r0@4
  signed int v13; // kr04_4@4
  int v14; // r10@4
  float v18; // r1@7
  int v19; // r0@7
  int v20; // r11@7
  float v23; // r1@10
  int v24; // r0@10
  float v27; // r1@12
  int v28; // r0@12
  float v31; // r1@14
  float v34; // r1@15
  int v35; // r0@15
  int v39; // r7@15
  int v40; // r9@18
  int v41; // r6@19
  int v42; // r11@19
  signed int v43; // r10@19
  Material *v44; // r0@21
  Material *v45; // r0@23
  const Entity *v46; // r1@26
  char *v47; // r4@26
  EntityClassTree **v48; // r5@26
  EntityClassTree *v49; // t1@27
  int v51; // [sp+8h] [bp-40h]@13
  int v52; // [sp+Ch] [bp-3Ch]@15
  int v53; // [sp+10h] [bp-38h]@4
  AABB *v54; // [sp+14h] [bp-34h]@13

  _R4 = this;
  v3 = (char *)this + 264;
  v4 = a2;
  v5 = 1;
  v6 = 0;
  v7 = j_BlockSource::fetchCollisionShapes(a2, a2, (HangingEntity *)((char *)this + 264), 0, 1, this);
  if ( (unsigned int)*(_QWORD *)v7 == *(_QWORD *)v7 >> 32 )
  {
    v8 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 772))(_R4);
    v9 = 1;
    if ( v8 / 16 > 1 )
      v9 = v8 / 16;
    v53 = v9;
    v10 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 776))(_R4);
    v11 = *((_DWORD *)_R4 + 853);
    v13 = v10;
    v12 = v10 + ((unsigned int)(v10 >> 31) >> 28);
    v14 = *((_DWORD *)_R4 + 857);
    if ( v13 / 16 > 1 )
      v5 = v12 >> 4;
    if ( v11 == 2 )
    {
      __asm { VLDR            S16, [R4,#0x48] }
      _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 772))(_R4);
      __asm
      {
        VMOV            S0, R0
        VLDR            S2, =-0.03125
        VCVT.F32.S32    S0, S0
        VMUL.F32        S0, S0, S2
        VADD.F32        S0, S16, S0
        VMOV            R0, S0
      }
      v19 = j_mce::Math::floor(_R0, v18);
      v11 = *((_DWORD *)_R4 + 853);
      v20 = v19;
    }
    else
      v20 = *((_DWORD *)_R4 + 855);
    if ( v11 == 1 )
      __asm { VLDR            S16, [R4,#0x50] }
      _R0 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)_R4 + 772))(_R4);
      v24 = j_mce::Math::floor(_R0, v23);
      v14 = v24;
    if ( !v11 )
      v28 = j_mce::Math::floor(_R0, v27);
      v20 = v28;
    v51 = v20;
    v54 = (AABB *)v3;
    if ( v11 == 3 )
      v14 = j_mce::Math::floor(_R0, v31);
    v52 = v14;
    __asm { VLDR            S16, [R4,#0x4C] }
    _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 776))(_R4);
    __asm
      VMOV            S0, R0
      VLDR            S2, =-0.03125
      VCVT.F32.S32    S0, S0
      VMUL.F32        S0, S0, S2
      VADD.F32        S0, S16, S0
      VMOV            R0, S0
    v35 = j_mce::Math::floor(_R0, v34);
    _VF = __OFSUB__(v9, 1);
    _ZF = v9 == 1;
    _NF = v9 - 1 < 0;
    v39 = v35;
    if ( v9 >= 1 )
      _VF = 0;
      _ZF = v5 == 0;
      _NF = v5 < 0;
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v40 = 0;
      do
        v41 = v40 + v20;
        v42 = v40 + v14;
        v43 = 0;
        do
        {
          if ( (*((_DWORD *)_R4 + 853) | 2) == 2 )
          {
            v44 = (Material *)j_BlockSource::getMaterial(v4, v41, v39 + v43, *((_DWORD *)_R4 + 857));
            if ( !j_Material::isSolid(v44) )
              goto LABEL_30;
          }
          else
            v45 = (Material *)j_BlockSource::getMaterial(v4, *((_DWORD *)_R4 + 855), v39 + v43, v42);
            if ( j_Material::isSolid(v45) != 1 )
          ++v43;
        }
        while ( v43 < v5 );
        ++v40;
        v14 = v52;
        v20 = v51;
      while ( v40 < v53 );
    v47 = j_BlockSource::fetchEntities(v4, _R4, v54);
    v48 = (EntityClassTree **)*(_QWORD *)v47;
    if ( v48 == (EntityClassTree **)(*(_QWORD *)v47 >> 32) )
      v6 = 1;
      while ( 1 )
        v49 = *v48;
        ++v48;
        if ( j_EntityClassTree::isHangingEntity(v49, v46) == 1 )
          break;
        if ( v48 == *((EntityClassTree ***)v47 + 1) )
          return 1;
LABEL_30:
      v6 = 0;
  }
  return v6;
}


signed int __fastcall HangingEntity::placeHangingEntity(HangingEntity *this, BlockSource *a2, int a3)
{
  HangingEntity *v3; // r5@1
  int v4; // r4@1
  int v6; // [sp+4h] [bp-1Ch]@1
  int v7; // [sp+8h] [bp-18h]@1
  int v8; // [sp+Ch] [bp-14h]@1

  v3 = this;
  v4 = a3;
  j_BlockPos::BlockPos((int)&v6, (int)this + 72);
  *((_DWORD *)v3 + 855) = v6;
  *((_DWORD *)v3 + 856) = v7;
  *((_DWORD *)v3 + 857) = v8;
  (*(void (__fastcall **)(HangingEntity *, int))(*(_DWORD *)v3 + 768))(v3, v4);
  return 1;
}


int __fastcall HangingEntity::_offs(HangingEntity *this, int a2)
{
  int result; // r0@4

  __asm { VMOV.F32        S0, #0.5 }
  if ( a2 != 32 && a2 != 64 )
    __asm { VLDRNE          S0, =0.0 }
  __asm { VMOV            R0, S0 }
  return result;
}


int __fastcall HangingEntity::readAdditionalSaveData(HangingEntity *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r7@1
  HangingEntity *v3; // r4@1
  signed int v4; // r6@1
  void *v5; // r0@1
  void *v6; // r0@3
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  int v9; // r6@8
  void *v10; // r0@8
  signed int v11; // r0@10
  void *v12; // r0@15
  void *v13; // r0@16
  void *v14; // r0@17
  unsigned int *v16; // r2@19
  signed int v17; // r1@21
  unsigned int *v18; // r2@23
  signed int v19; // r1@25
  unsigned int *v20; // r2@27
  signed int v21; // r1@29
  unsigned int *v22; // r2@31
  signed int v23; // r1@33
  unsigned int *v24; // r2@39
  signed int v25; // r1@41
  int v26; // [sp+4h] [bp-44h]@17
  int v27; // [sp+Ch] [bp-3Ch]@16
  int v28; // [sp+14h] [bp-34h]@15
  int v29; // [sp+1Ch] [bp-2Ch]@8
  int v30; // [sp+24h] [bp-24h]@3
  int v31; // [sp+2Ch] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v31, "Direction");
  v4 = j_CompoundTag::contains((int)v2, (const void **)&v31);
  v5 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v31 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( v4 == 1 )
    sub_21E94B4((void **)&v30, "Direction");
    *((_DWORD *)v3 + 853) = j_CompoundTag::getByte((int)v2, (const void **)&v30);
    v6 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v7 = (unsigned int *)(v30 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
  else
    sub_21E94B4((void **)&v29, "Dir");
    v9 = j_CompoundTag::getByte((int)v2, (const void **)&v29);
    v10 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v29 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    switch ( v9 )
      case 0:
        v11 = 2;
        goto LABEL_14;
      case 2:
        v11 = 0;
      case 3:
        v11 = 3;
      case 1:
        v11 = 1;
LABEL_14:
        *((_DWORD *)v3 + 853) = v11;
        break;
      default:
  sub_21E94B4((void **)&v28, "TileX");
  *((_DWORD *)v3 + 855) = j_CompoundTag::getInt((int)v2, (const void **)&v28);
  v12 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v28 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v27, "TileY");
  *((_DWORD *)v3 + 856) = j_CompoundTag::getInt((int)v2, (const void **)&v27);
  v13 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v27 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v26, "TileZ");
  *((_DWORD *)v3 + 857) = j_CompoundTag::getInt((int)v2, (const void **)&v26);
  v14 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v26 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  return (*(int (__fastcall **)(HangingEntity *, _DWORD))(*(_DWORD *)v3 + 768))(v3, *((_DWORD *)v3 + 853));
}


int __fastcall HangingEntity::HangingEntity(int a1, int a2, int *a3)
{
  int result; // r0@1

  result = j_Entity::Entity(a1, a2, a3);
  *(_DWORD *)result = &off_271F60C;
  *(_DWORD *)(result + 3420) = BlockPos::ZERO;
  *(_DWORD *)(result + 3424) = unk_2816278;
  *(_DWORD *)(result + 3428) = dword_281627C;
  *(_DWORD *)(result + 316) = 0;
  *(_DWORD *)(result + 304) = 1056964608;
  *(_DWORD *)(result + 308) = 1056964608;
  *(_DWORD *)(result + 3412) = 0;
  *(_DWORD *)(result + 3416) = 0;
  return result;
}


int __fastcall HangingEntity::setDir(HangingEntity *this, int a2)
{
  int v2; // r5@1
  HangingEntity *v3; // r4@1
  signed int v16; // r7@6
  signed int v17; // r6@12
  int v18; // r0@16
  int v19; // r0@21
  int v20; // r0@26
  int v21; // r0@31
  int v22; // r0@35
  float v24; // [sp+4h] [bp-74h]@38
  float v25; // [sp+10h] [bp-68h]@38
  float v26; // [sp+1Ch] [bp-5Ch]@38

  v2 = a2;
  v3 = this;
  _R0 = 90 * a2;
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.S32    S0, S0
  }
  *((_DWORD *)v3 + 853) = a2;
    VSTR            S0, [R4,#0x7C]
    VSTR            S0, [R4,#0x84]
  _R6 = (*(int (__fastcall **)(HangingEntity *))(*(_DWORD *)v3 + 772))(v3);
  _R0 = (*(int (__fastcall **)(HangingEntity *))(*(_DWORD *)v3 + 776))(v3);
    VCVT.F32.S32    S20, S0
  _R0 = (*(int (__fastcall **)(HangingEntity *))(*(_DWORD *)v3 + 772))(v3);
  if ( (v2 | 2) == 2 )
    __asm
    {
      VMOV            S0, R6
      VLDR            S4, =0.03125
      VCVT.F32.S32    S0, S0
      VLDR            S16, =0.0625
      VMUL.F32        S18, S0, S4
    }
    _R0 = 90 * Direction::DIRECTION_OPPOSITE[v2];
      VMOV            S2, R0
      VCVT.F32.S32    S2, S2
      VSTR            S2, [R4,#0x84]
      VSTR            S2, [R4,#0x7C]
  else
      VMOV            S0, R0
      VLDR            S2, =0.03125
      VLDR            S18, =0.0625
      VMUL.F32        S16, S0, S2
  _R1 = (int)v3 + 3420;
  _R0 = (int)v3 + 3428;
    VMOV.F32        S22, #0.5
    VLDR            S0, [R1]
  _R1 = (int)v3 + 3424;
    VLDR            S4, [R0]
    VLDR            S2, [R1]
    VCVT.F32.S32    S6, S2
    VCVT.F32.S32    S2, S4
    VADD.F32        S28, S0, S22
    VADD.F32        S24, S6, S22
    VADD.F32        S26, S2, S22
    VSTR            S28, [SP,#0x78+var_5C]
    VSTR            S24, [SP,#0x78+var_58]
    VSTR            S26, [SP,#0x78+var_54]
  if ( _ZF )
    __asm { VLDR            S0, =-0.03125 }
    v16 = 0;
      VADD.F32        S26, S2, S0
      VSTR            S26, [SP,#0x78+var_54]
  else if ( v2 == 1 )
    __asm { VLDR            S2, =-0.03125 }
    v16 = 1;
      VADD.F32        S28, S0, S2
      VSTR            S28, [SP,#0x78+var_5C]
  if ( v2 )
    if ( v2 == 3 )
      __asm { VMOV.F32        S0, #0.53125 }
      v17 = 1;
      __asm
      {
        VADD.F32        S28, S28, S0
        VSTR            S28, [SP,#0x78+var_5C]
      }
    else
      v17 = 0;
    __asm { VMOV.F32        S0, #0.53125 }
    v17 = 0;
      VADD.F32        S26, S26, S0
  if ( v2 == 2 )
    v18 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 772))(v3);
    __asm { VMOV.F32        S0, #0.5 }
    if ( v18 != 32 && v18 != 64 )
      __asm { VLDRNE          S0, =0.0 }
      VSUB.F32        S28, S28, S0
  if ( v16 == 1 )
    v19 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 772))(v3);
    if ( v19 != 32 && v19 != 64 )
  if ( !v2 )
    v20 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 772))(v3);
    if ( v20 != 32 && v20 != 64 )
      VADD.F32        S0, S28, S0
      VSTR            S0, [SP,#0x78+var_5C]
  __asm { VLDR            S28, =0.03125 }
  if ( v17 == 1 )
    v21 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v3 + 772))(v3);
    if ( v21 != 32 && v21 != 64 )
      VSUB.F32        S0, S26, S0
      VSTR            S0, [SP,#0x78+var_54]
  __asm { VMUL.F32        S20, S20, S28 }
  v22 = (*(int (__fastcall **)(HangingEntity *))(*(_DWORD *)v3 + 776))(v3);
  if ( v22 != 32 && v22 != 64 )
    __asm { VLDRNE          S22, =0.0 }
    VADD.F32        S0, S24, S22
    VSTR            S0, [SP,#0x78+var_58]
  (*(void (__fastcall **)(HangingEntity *, float *))(*(_DWORD *)v3 + 48))(v3, &v26);
    VLDR            S2, =-0.03125
    VSUB.F32        S0, S28, S18
    VSUB.F32        S4, S28, S20
    VLDR            S12, [SP,#0x78+var_5C]
    VADD.F32        S8, S18, S2
    VLDR            S14, [SP,#0x78+var_58]
    VADD.F32        S10, S20, S2
    VLDR            S1, [SP,#0x78+var_54]
    VSUB.F32        S6, S28, S16
    VADD.F32        S2, S16, S2
    VADD.F32        S0, S0, S12
    VADD.F32        S4, S4, S14
    VADD.F32        S8, S8, S12
    VADD.F32        S10, S10, S14
    VADD.F32        S6, S6, S1
    VADD.F32        S2, S2, S1
    VSTR            S0, [SP,#0x78+var_68]
    VSTR            S4, [SP,#0x78+var_64]
    VSTR            S8, [SP,#0x78+var_74]
    VSTR            S10, [SP,#0x78+var_70]
    VSTR            S6, [SP,#0x78+var_60]
    VSTR            S2, [SP,#0x78+var_6C]
  return j_AABB::set((HangingEntity *)((char *)v3 + 264), (const Vec3 *)&v25, (const Vec3 *)&v24);
}


void __fastcall HangingEntity::addAdditionalSaveData(HangingEntity *this, CompoundTag *a2)
{
  HangingEntity::addAdditionalSaveData(this, a2);
}


signed int __fastcall HangingEntity::isPickable(HangingEntity *this)
{
  return 1;
}


int __fastcall HangingEntity::push(HangingEntity *this, const Vec3 *a2)
{
  Entity *v3; // r4@1
  Level *v4; // r0@1
  int result; // r0@1

  _R5 = a2;
  v3 = this;
  v4 = (Level *)j_Entity::getLevel(this);
  result = j_Level::isClientSide(v4);
  if ( !result )
  {
    result = j_Entity::isRemoved(v3);
    if ( !result )
    {
      __asm
      {
        VLDR            S0, [R5]
        VLDR            S2, [R5,#4]
        VMUL.F32        S0, S0, S0
        VLDR            S4, [R5,#8]
        VMUL.F32        S2, S2, S2
        VMUL.F32        S4, S4, S4
        VADD.F32        S0, S2, S0
        VADD.F32        S0, S0, S4
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        (*(void (__fastcall **)(Entity *))(*(_DWORD *)v3 + 780))(v3);
        result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 44))(v3);
    }
  }
  return result;
}


int __fastcall HangingEntity::HangingEntity(int a1, BlockSource *a2, int **a3)
{
  int result; // r0@1

  result = j_Entity::Entity(a1, a2, a3);
  *(_DWORD *)result = &off_271F60C;
  *(_DWORD *)(result + 3420) = BlockPos::ZERO;
  *(_DWORD *)(result + 3424) = unk_2816278;
  *(_DWORD *)(result + 3428) = dword_281627C;
  *(_DWORD *)(result + 316) = 0;
  *(_DWORD *)(result + 304) = 1056964608;
  *(_DWORD *)(result + 308) = 1056964608;
  *(_DWORD *)(result + 3412) = 0;
  *(_DWORD *)(result + 3416) = 0;
  return result;
}


void __fastcall HangingEntity::~HangingEntity(HangingEntity *this)
{
  Entity *v1; // r0@1

  v1 = j_Entity::~Entity(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall HangingEntity::HangingEntity(int a1, BlockSource *a2, int **a3, int a4)
{
  int v4; // r4@1
  int result; // r0@1

  v4 = a4;
  result = j_Entity::Entity(a1, a2, a3);
  *(_DWORD *)result = &off_271F60C;
  *(_DWORD *)(result + 3420) = *(_DWORD *)v4;
  *(_DWORD *)(result + 3424) = *(_DWORD *)(v4 + 4);
  *(_DWORD *)(result + 3428) = *(_DWORD *)(v4 + 8);
  *(_DWORD *)(result + 316) = 0;
  *(_DWORD *)(result + 304) = 1056964608;
  *(_DWORD *)(result + 308) = 1056964608;
  *(_DWORD *)(result + 3412) = 0;
  *(_DWORD *)(result + 3416) = 0;
  return result;
}


int __fastcall HangingEntity::setPosition(int result, const BlockPos *a2)
{
  *(_DWORD *)(result + 3420) = *(_DWORD *)a2;
  *(_DWORD *)(result + 3424) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 3428) = *((_DWORD *)a2 + 2);
  return result;
}


int __fastcall HangingEntity::move(HangingEntity *this, const Vec3 *a2)
{
  Entity *v3; // r4@1
  Level *v4; // r0@1
  int result; // r0@1

  _R5 = a2;
  v3 = this;
  v4 = (Level *)j_Entity::getLevel(this);
  result = j_Level::isClientSide(v4);
  if ( !result )
  {
    result = j_Entity::isRemoved(v3);
    if ( !result )
    {
      __asm
      {
        VLDR            S0, [R5]
        VLDR            S2, [R5,#4]
        VMUL.F32        S0, S0, S0
        VLDR            S4, [R5,#8]
        VMUL.F32        S2, S2, S2
        VMUL.F32        S4, S4, S4
        VADD.F32        S0, S2, S0
        VADD.F32        S0, S0, S4
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        (*(void (__fastcall **)(Entity *))(*(_DWORD *)v3 + 780))(v3);
        result = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v3 + 44))(v3);
    }
  }
  return result;
}


int __fastcall HangingEntity::getBrightness(HangingEntity *this, float a2)
{
  Entity *v2; // r4@1
  BlockSource *v3; // r0@1
  char v5; // [sp+4h] [bp-1Ch]@1

  v2 = this;
  j_BlockPos::BlockPos((int)&v5, (int)this + 72);
  v3 = (BlockSource *)j_Entity::getRegion(v2);
  return j_BlockSource::getBrightness(v3, (const BlockPos *)&v5);
}


int __fastcall HangingEntity::init(int result)
{
  *(_DWORD *)(result + 316) = 0;
  *(_DWORD *)(result + 304) = 1056964608;
  *(_DWORD *)(result + 308) = 1056964608;
  *(_DWORD *)(result + 3412) = 0;
  *(_DWORD *)(result + 3416) = 0;
  return result;
}


signed int __fastcall HangingEntity::_hurt(HangingEntity *this, const EntityDamageSource *a2, int a3, bool a4, bool a5)
{
  const EntityDamageSource *v5; // r5@1
  Entity *v6; // r4@1
  Level *v7; // r0@2
  int v8; // r6@4
  int v9; // r1@4
  int v10; // r0@4
  int v11; // r5@4
  unsigned int v13; // [sp+8h] [bp-18h]@4
  unsigned int v14; // [sp+Ch] [bp-14h]@4

  v5 = a2;
  v6 = this;
  if ( !j_Entity::isRemoved(this) )
  {
    v7 = (Level *)j_Entity::getLevel(v6);
    if ( !j_Level::isClientSide(v7) )
    {
      (*(void (__fastcall **)(Entity *))(*(_DWORD *)v6 + 44))(v6);
      (*(void (__fastcall **)(Entity *))(*(_DWORD *)v6 + 700))(v6);
      if ( (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)v5 + 8))(v5) != 1
        || (v8 = j_Entity::getLevel(v6),
            (*(void (__fastcall **)(unsigned int *, const EntityDamageSource *))(*(_DWORD *)v5 + 32))(&v13, v5),
            v10 = j_Level::fetchEntity(v8, v9, v13, v14, 0),
            (v11 = v10) == 0)
        || j_Entity::hasCategory(v10, 1) != 1
        || !j_Abilities::getBool(v11 + 4320, (int **)&Abilities::INSTABUILD) )
      {
        (*(void (__fastcall **)(Entity *))(*(_DWORD *)v6 + 780))(v6);
      }
    }
  }
  return 1;
}


int __fastcall HangingEntity::normalTick(HangingEntity *this)
{
  HangingEntity *v1; // r4@1
  int v2; // r0@1
  Level *v3; // r0@2
  int (__fastcall *v4)(HangingEntity *, int); // r5@4
  int v5; // r0@4
  int result; // r0@6

  v1 = this;
  v2 = *((_DWORD *)this + 854);
  *((_DWORD *)v1 + 854) = v2 + 1;
  if ( v2 == 100 )
  {
    v3 = (Level *)j_Entity::getLevel(v1);
    if ( !j_Level::isClientSide(v3) )
    {
      *((_DWORD *)v1 + 854) = 0;
      if ( !j_Entity::isRemoved(v1) )
      {
        v4 = *(int (__fastcall **)(HangingEntity *, int))(*(_DWORD *)v1 + 788);
        v5 = j_Entity::getRegion(v1);
        if ( !v4(v1, v5) )
        {
          (*(void (__fastcall **)(HangingEntity *))(*(_DWORD *)v1 + 44))(v1);
          (*(void (__fastcall **)(HangingEntity *))(*(_DWORD *)v1 + 780))(v1);
        }
      }
    }
  }
  *((_DWORD *)v1 + 21) = *((_DWORD *)v1 + 18);
  *((_DWORD *)v1 + 22) = *((_DWORD *)v1 + 19);
  result = *((_DWORD *)v1 + 20);
  *((_DWORD *)v1 + 23) = result;
  return result;
}


void __fastcall HangingEntity::~HangingEntity(HangingEntity *this)
{
  HangingEntity::~HangingEntity(this);
}


int __fastcall HangingEntity::reloadHardcoded(int a1)
{
  int v1; // r1@1

  v1 = *(_DWORD *)(a1 + 3412);
  return (*(int (**)(void))(*(_DWORD *)a1 + 768))();
}


void __fastcall HangingEntity::addAdditionalSaveData(HangingEntity *this, CompoundTag *a2)
{
  CompoundTag *v2; // r6@1
  HangingEntity *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@6
  unsigned int *v9; // r2@7
  signed int v10; // r1@9
  unsigned int *v11; // r2@26
  signed int v12; // r1@28
  unsigned int *v13; // r2@30
  signed int v14; // r1@32
  unsigned int *v15; // r2@34
  signed int v16; // r1@36
  unsigned int *v17; // r2@38
  signed int v18; // r1@40
  int v19; // [sp+8h] [bp-50h]@16
  int v20; // [sp+10h] [bp-48h]@6
  int v21; // [sp+18h] [bp-40h]@21
  int v22; // [sp+20h] [bp-38h]@11
  int v23; // [sp+28h] [bp-30h]@4
  int v24; // [sp+30h] [bp-28h]@3
  int v25; // [sp+38h] [bp-20h]@2
  int v26; // [sp+40h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v26, "Direction");
  j_CompoundTag::putByte((int)v2, (const void **)&v26, *((_BYTE *)v3 + 3412));
  v4 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
  {
    v11 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    }
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v25, "TileX");
  j_CompoundTag::putInt((int)v2, (const void **)&v25, *((_DWORD *)v3 + 855));
  v5 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v25 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v24, "TileY");
  j_CompoundTag::putInt((int)v2, (const void **)&v24, *((_DWORD *)v3 + 856));
  v6 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v24 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v23, "TileZ");
  j_CompoundTag::putInt((int)v2, (const void **)&v23, *((_DWORD *)v3 + 857));
  v7 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v23 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  switch ( *((_DWORD *)v3 + 853) )
    case 0:
      sub_21E94B4((void **)&v20, "Dir");
      j_CompoundTag::putByte((int)v2, (const void **)&v20, 2);
      v8 = (void *)(v20 - 12);
      if ( (int *)(v20 - 12) != &dword_28898C0 )
      {
        v9 = (unsigned int *)(v20 - 4);
        if ( !&pthread_create )
          goto LABEL_58;
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        goto LABEL_59;
      }
      break;
    case 2:
      sub_21E94B4((void **)&v22, "Dir");
      j_CompoundTag::putByte((int)v2, (const void **)&v22, 0);
      v8 = (void *)(v22 - 12);
      if ( (int *)(v22 - 12) != &dword_28898C0 )
        v9 = (unsigned int *)(v22 - 4);
    case 3:
      sub_21E94B4((void **)&v19, "Dir");
      j_CompoundTag::putByte((int)v2, (const void **)&v19, 3);
      v8 = (void *)(v19 - 12);
      if ( (int *)(v19 - 12) != &dword_28898C0 )
        v9 = (unsigned int *)(v19 - 4);
    case 1:
      sub_21E94B4((void **)&v21, "Dir");
      j_CompoundTag::putByte((int)v2, (const void **)&v21, 1);
      v8 = (void *)(v21 - 12);
      if ( (int *)(v21 - 12) != &dword_28898C0 )
        v9 = (unsigned int *)(v21 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
        }
        else
LABEL_58:
          v10 = (*v9)--;
LABEL_59:
        if ( v10 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
    default:
      return;
}


char *__fastcall HangingEntity::getBlockPos(HangingEntity *this)
{
  return (char *)this + 3420;
}
