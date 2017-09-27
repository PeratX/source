

int __fastcall FishingHook::_hitCheck(FishingHook *this, Entity *a2)
{
  Entity *v2; // r5@1
  HitResult *v3; // r9@1
  int v4; // r4@1
  __int64 v5; // r0@1
  int v6; // r0@1
  int result; // r0@4
  int v8; // r0@5
  __int64 v9; // r1@5
  const Vec3 *v14; // r8@5
  char *v15; // r0@7
  char *v16; // r4@7
  __int64 v17; // r0@7
  unsigned int v18; // r9@8
  int v19; // r11@9
  int v20; // r6@10
  int v21; // r1@10
  int v22; // r6@13
  int v23; // r1@13
  int v24; // r6@14
  int v25; // r1@14
  Entity *v26; // r0@14
  int v27; // r6@15
  int v28; // r1@15
  Entity *v29; // r0@15
  signed int v30; // r0@17
  signed int v31; // r1@17
  int v33; // r0@21
  Entity *v34; // r0@23
  Level *v35; // r0@29
  __int64 v36; // kr00_8@30
  int v37; // r0@30
  unsigned int v38; // r1@30
  unsigned int v39; // r1@32
  unsigned int v40; // r0@32
  int v41; // r4@37
  int v42; // r1@37
  int v43; // r4@38
  int v44; // r1@38
  Entity *v45; // r0@38
  PhysicsComponent *v46; // r0@41
  PhysicsComponent *v47; // r0@41
  char v48; // r1@43
  HitResult *v49; // [sp+18h] [bp-1F8h]@8
  Entity *v50; // [sp+1Ch] [bp-1F4h]@8
  char v51; // [sp+20h] [bp-1F0h]@39
  char v52; // [sp+48h] [bp-1C8h]@38
  int v53; // [sp+88h] [bp-188h]@37
  char v54; // [sp+8Ch] [bp-184h]@37
  int v55; // [sp+90h] [bp-180h]@37
  int v56; // [sp+94h] [bp-17Ch]@37
  int v57; // [sp+98h] [bp-178h]@37
  float v58; // [sp+9Ch] [bp-174h]@37
  float v59; // [sp+A0h] [bp-170h]@37
  float v60; // [sp+A4h] [bp-16Ch]@37
  Entity *v61; // [sp+A8h] [bp-168h]@37
  __int16 v62; // [sp+ACh] [bp-164h]@37
  int v63; // [sp+B0h] [bp-160h]@37
  int v64; // [sp+B4h] [bp-15Ch]@37
  int v65; // [sp+B8h] [bp-158h]@37
  int v66; // [sp+BCh] [bp-154h]@37
  int v67; // [sp+C0h] [bp-150h]@37
  int v68; // [sp+C4h] [bp-14Ch]@37
  char v69; // [sp+C8h] [bp-148h]@37
  unsigned int v70; // [sp+D0h] [bp-140h]@10
  unsigned int v71; // [sp+D4h] [bp-13Ch]@10
  int v75; // [sp+114h] [bp-FCh]@16
  signed int v76; // [sp+118h] [bp-F8h]@16
  int v77; // [sp+11Ch] [bp-F4h]@16
  char v78; // [sp+120h] [bp-F0h]@16
  int v79; // [sp+13Ch] [bp-D4h]@7
  signed int v80; // [sp+140h] [bp-D0h]@7
  int v81; // [sp+144h] [bp-CCh]@7
  char v82; // [sp+148h] [bp-C8h]@7
  char v83; // [sp+164h] [bp-ACh]@7
  int v84; // [sp+180h] [bp-90h]@5
  char v85; // [sp+184h] [bp-8Ch]@37
  int v86; // [sp+188h] [bp-88h]@37
  int v87; // [sp+18Ch] [bp-84h]@37
  int v88; // [sp+190h] [bp-80h]@37
  float v89; // [sp+194h] [bp-7Ch]@6
  float v90; // [sp+198h] [bp-78h]@6
  float v91; // [sp+19Ch] [bp-74h]@6
  Entity *v92; // [sp+1A0h] [bp-70h]@37
  __int16 v93; // [sp+1A4h] [bp-6Ch]@37
  int v94; // [sp+1A8h] [bp-68h]@37
  int v95; // [sp+1ACh] [bp-64h]@37
  int v96; // [sp+1B0h] [bp-60h]@37
  int v97; // [sp+1B4h] [bp-5Ch]@37
  int v98; // [sp+1B8h] [bp-58h]@37
  int v99; // [sp+1BCh] [bp-54h]@37
  char v100; // [sp+1C0h] [bp-50h]@37
  float v101; // [sp+1C4h] [bp-4Ch]@5
  float v102; // [sp+1C8h] [bp-48h]@6
  float v103; // [sp+1CCh] [bp-44h]@6
  __int64 v104; // [sp+1D0h] [bp-40h]@5
  int v105; // [sp+1D8h] [bp-38h]@5

  v2 = a2;
  v3 = this;
  v4 = Entity::getLevel(a2);
  v5 = SynchedEntityData::getInt64((Entity *)((char *)v2 + 176), 6);
  v6 = Level::fetchEntity(v4, SHIDWORD(v5), v5, HIDWORD(v5), 0);
  if ( *((_BYTE *)v2 + 3424) || v6 && (*(int (**)(void))(*(_DWORD *)v6 + 316))() == 1 )
  {
    result = HitResult::HitResult(v3);
  }
  else
    v8 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 52))(v2);
    v9 = *(_QWORD *)v8;
    v105 = *(_DWORD *)(v8 + 8);
    v104 = v9;
    _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v2 + 64))(v2);
    __asm
    {
      VLDR            S0, [R0]
      VLDR            S6, [SP,#0x210+var_40]
      VLDR            S2, [R0,#4]
      VLDR            S4, [R0,#8]
      VADD.F32        S0, S0, S6
      VLDR            S8, [SP,#0x210+var_40+4]
      VLDR            S10, [SP,#0x210+var_38]
      VADD.F32        S2, S2, S8
      VADD.F32        S4, S4, S10
      VSTR            S0, [SP,#0x210+var_4C]
      VSTR            S2, [SP,#0x210+var_48]
      VSTR            S4, [SP,#0x210+var_44]
    }
    v14 = (const Vec3 *)Entity::getRegion(v2);
    BlockSource::clip((BlockSource *)&v84, v14, (const Vec3 *)&v104, (int)&v101, 0, 1, 200, 0);
    if ( (v84 & 0xFFFFFFFE) != 2 )
      v101 = v89;
      v102 = v90;
      v103 = v91;
    AABB::expanded((AABB *)&v82, (Entity *)((char *)v2 + 264), (int)v2 + 108);
    v79 = 1065353216;
    v80 = 1065353216;
    v81 = 1065353216;
    AABB::grow((AABB *)&v83, (const Vec3 *)&v82, (int)&v79);
    v15 = BlockSource::fetchEntities(v14, v2, (const AABB *)&v83);
    v16 = v15;
    v17 = *(_QWORD *)v15;
    if ( HIDWORD(v17) != (_DWORD)v17 )
      v49 = v3;
      __asm { VLDR            S16, =0.0 }
      v18 = 0;
      v50 = 0;
      do
      {
        v19 = *(_DWORD *)(v17 + 4 * v18);
        if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v19 + 292))(*(_DWORD *)(v17 + 4 * v18)) == 1 )
        {
          v20 = Entity::getLevel(v2);
          (*(void (__fastcall **)(unsigned int *, Entity *))(*(_DWORD *)v2 + 500))(&v70, v2);
          if ( (v19 != Level::fetchEntity(v20, v21, v70, v71, 0) || *((_DWORD *)v2 + 862) >= 5)
            && (*(int (__fastcall **)(int))(*(_DWORD *)v19 + 296))(v19) == 1 )
          {
            v22 = Entity::getLevel(v2);
            (*(void (__fastcall **)(unsigned int *, Entity *))(*(_DWORD *)v2 + 500))(&v70, v2);
            if ( !Level::fetchEntity(v22, v23, v70, v71, 0)
              || (v24 = Entity::getLevel(v2),
                  (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v2 + 500))(&v70, v2),
                  v26 = (Entity *)Level::fetchEntity(v24, v25, v70, v71, 0),
                  Entity::isRiding(v26) != 1)
              || (v27 = Entity::getLevel(v2),
                  v29 = (Entity *)Level::fetchEntity(v27, v28, v70, v71, 0),
                  v19 != Entity::getRide(v29)) )
            {
              v75 = 1050253722;
              v76 = 1050253722;
              v77 = 1050253722;
              AABB::grow((AABB *)&v78, (const Vec3 *)(v19 + 264), (int)&v75);
              AABB::clip((AABB *)&v70, (const Vec3 *)&v78, (const Vec3 *)&v104, (int)&v101);
              if ( (v70 & 0xFFFFFFFE) != 2 )
              {
                __asm { VLDR            S0, [SP,#0x210+var_40] }
                v30 = 0;
                __asm { VLDR            S6, [SP,#0x210+var_12C] }
                v31 = 0;
                __asm
                {
                  VLDR            S2, [SP,#0x210+var_40+4]
                  VLDR            S8, [SP,#0x210+var_128]
                  VSUB.F32        S0, S6, S0
                  VLDR            S4, [SP,#0x210+var_38]
                  VSUB.F32        S2, S8, S2
                  VLDR            S10, [SP,#0x210+var_124]
                  VSUB.F32        S4, S10, S4
                  VMUL.F32        S0, S0, S0
                  VMUL.F32        S2, S2, S2
                  VMUL.F32        S4, S4, S4
                  VADD.F32        S0, S2, S0
                  VADD.F32        S0, S0, S4
                  VCMPE.F32       S0, S16
                  VMRS            APSR_nzcv, FPSCR
                  VCMPE.F32       S16, #0.0
                }
                if ( _NF ^ _VF )
                  v30 = 1;
                __asm { VMRS            APSR_nzcv, FPSCR }
                if ( _ZF )
                  v31 = 1;
                v33 = v30 | v31;
                _ZF = v33 == 0;
                if ( v33 )
                  __asm { VMOVNE.F32      S16, S0 }
                v34 = v50;
                if ( !_ZF )
                  v34 = (Entity *)v19;
                v50 = v34;
              }
            }
          }
        }
        v17 = *(_QWORD *)v16;
        ++v18;
      }
      while ( v18 < (HIDWORD(v17) - (signed int)v17) >> 2 );
      v3 = v49;
      if ( v50 && (*(int (__fastcall **)(Entity *))(*(_DWORD *)v50 + 316))(v50) == 1 )
        v35 = (Level *)Entity::getLevel(v2);
        if ( !Level::isClientSide(v35) )
          v36 = *(_QWORD *)Entity::getUniqueID(v50);
          v37 = SynchedEntityData::_get((Entity *)((char *)v2 + 176), 6);
          v38 = *(_DWORD *)(v37 + 4);
          if ( (unsigned __int8)v38 == 7 && *(_QWORD *)(v37 + 16) != v36 )
            *(_QWORD *)(v37 + 16) = v36;
            *(_BYTE *)(v37 + 8) = 1;
            v39 = v38 >> 16;
            v40 = *((_WORD *)v2 + 94);
            if ( v40 >= v39 )
              LOWORD(v40) = v39;
            *((_WORD *)v2 + 94) = v40;
            if ( *((_WORD *)v2 + 95) > v39 )
              LOWORD(v39) = *((_WORD *)v2 + 95);
            *((_WORD *)v2 + 95) = v39;
        HitResult::HitResult((int)&v53, (int)v50);
        v85 = v54;
        v84 = v53;
        v86 = v55;
        v87 = v56;
        v88 = v57;
        v89 = v58;
        v90 = v59;
        v91 = v60;
        v93 = v62;
        v92 = v61;
        v94 = v63;
        v95 = v64;
        v96 = v65;
        v97 = v66;
        v98 = v67;
        v99 = v68;
        v100 = v69;
        v41 = Entity::getLevel(v2);
        (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v2 + 500))(&v70, v2);
        if ( Level::fetchEntity(v41, v42, v70, v71, 0) )
          v43 = Entity::getLevel(v2);
          (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v2 + 500))(&v70, v2);
          v45 = (Entity *)Level::fetchEntity(v43, v44, v70, v71, 0);
          EntityDamageByChildEntitySource::EntityDamageByChildEntitySource((int)&v52, (int)v2, v45, 3);
          Entity::hurt(v92, (const EntityDamageSource *)&v52, 0, 1, 0);
          EntityDamageByChildEntitySource::~EntityDamageByChildEntitySource((EntityDamageByChildEntitySource *)&v52);
        else
          EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v51, v2, 3);
          Entity::hurt(v92, (const EntityDamageSource *)&v51, 0, 1, 0);
          EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v51);
        Entity::enableAutoSendPosRot(v2, 0);
        if ( Entity::getPhysicsComponent(v2) )
          v46 = (PhysicsComponent *)Entity::getPhysicsComponent(v2);
          PhysicsComponent::setHasCollision(v46, 0);
          v47 = (PhysicsComponent *)Entity::getPhysicsComponent(v2);
          PhysicsComponent::setAffectedByGravity(v47, 0);
      v48 = 0;
      if ( !v92 )
        v48 = 1;
      *((_BYTE *)v2 + 3424) = v48;
    result = HitResult::HitResult((int)v3, (int)&v84);
  return result;
}


int __fastcall FishingHook::isPushable(FishingHook *this)
{
  return 0;
}


int __fastcall FishingHook::handleEntityEvent(Entity *this, signed int a2, int a3)
{
  int result; // r0@4
  int v9; // r0@6
  int v10; // r5@6
  float v11; // r1@6
  int v13; // r0@6
  int v14; // r0@6
  int v15; // r0@6
  int v16; // [sp+18h] [bp-20h]@6
  int v17; // [sp+20h] [bp-18h]@6

  _R4 = this;
  switch ( a2 )
  {
    case 14:
      result = j_j_j__ZN11FishingHook15_fishTeaseEventEv(this);
      break;
    case 13:
      __asm
      {
        VMOV.F32        S0, #-0.5
        VLDR            S2, [R4,#0x70]
        VADD.F32        S0, S2, S0
        VSTR            S0, [R4,#0x70]
      }
      v9 = (*(int (**)(void))(*(_DWORD *)this + 52))();
      Entity::playSound((int)_R4, 26, v9);
      v10 = *((_DWORD *)_R4 + 18);
      _R0 = mce::Math::floor(*((mce::Math **)_R4 + 67), v11);
        VMOV            S2, R0
        VMOV.F32        S0, #1.0
        VCVT.F32.S32    S2, S2
      v13 = *((_DWORD *)_R4 + 20);
      __asm { VMOV.F32        S4, #20.0 }
      v16 = v10;
        VADD.F32        S2, S2, S0
        VSTR            S2, [SP,#0x38+var_1C]
      v17 = v13;
        VLDR            S2, [R4,#0x130]
        VMUL.F32        S4, S2, S4
        VADD.F32        S0, S4, S0
        VSTR            S0, [SP,#0x38+var_2C]
        VSTR            S2, [SP,#0x38+var_24]
      v14 = Entity::getLevel(_R4);
      Level::addParticle(v14, 1, (int)&v16);
      v15 = Entity::getLevel(_R4);
      result = Level::addParticle(v15, 22, (int)&v16);
    case 12:
      result = j_j_j__ZN11FishingHook13_fishPosEventEv(this);
    default:
      result = j_j_j__ZN6Entity17handleEntityEventE11EntityEventi(this, a2, a3);
  }
  return result;
}


signed int __fastcall FishingHook::isPushableByPiston(FishingHook *this)
{
  return 1;
}


signed int __fastcall FishingHook::_fishTeaseEvent(FishingHook *this)
{
  SynchedEntityData *v2; // r5@1
  float v9; // r1@1
  int v11; // r0@1
  BlockSource *v14; // r5@1
  int *v16; // r0@1
  signed int result; // r0@1
  int v18; // r4@2
  char v19; // [sp+18h] [bp-40h]@2
  char v20; // [sp+24h] [bp-34h]@1

  _R4 = this;
  v2 = (FishingHook *)((char *)this + 176);
  __asm { VLDR            S16, [R4,#0x48] }
  _R0 = SynchedEntityData::getFloat((FishingHook *)((char *)this + 176), 34);
  __asm
  {
    VMOV            S20, R0
    VLDR            S18, [R4,#0x50]
  }
  _R0 = SynchedEntityData::getFloat(v2, 35);
    VMOV            S0, R0
    VADD.F32        S16, S20, S16
    VADD.F32        S18, S0, S18
  _R0 = mce::Math::floor(*((mce::Math **)_R4 + 67), v9);
    VCVT.F32.S32    S20, S0
  v11 = Entity::getRegion(_R4);
    VMOV            R1, S16
    VMOV            R3, S18
  v14 = (BlockSource *)v11;
  __asm { VMOV            R2, S20 }
  BlockPos::BlockPos((BlockPos *)&v20, _R1, _R2, _R3);
  v16 = (int *)BlockSource::getMaterial(v14, (const BlockPos *)&v20);
  result = Material::isType(v16, 5);
  if ( result == 1 )
    v18 = Entity::getLevel(_R4);
    Vec3::Vec3((int)&v19, (int)&v20);
    result = Level::addParticle(v18, 21, (int)&v19);
  return result;
}


int __fastcall FishingHook::lerpMotion(int result, const Vec3 *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int v4; // r1@1

  v2 = *(_DWORD *)a2;
  *(_DWORD *)(result + 108) = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 112) = v3;
  v4 = *((_DWORD *)a2 + 2);
  *(_DWORD *)(result + 116) = v4;
  *(_DWORD *)(result + 3484) = v2;
  *(_DWORD *)(result + 3488) = v3;
  *(_DWORD *)(result + 3492) = v4;
  return result;
}


int __fastcall FishingHook::FishingHook(int a1, int a2, int *a3)
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
  *(_DWORD *)v3 = &off_26F1968;
  *(_DWORD *)(v3 + 3412) = 1053609165;
  *(_DWORD *)(v3 + 3416) = 1069547520;
  *(_DWORD *)(v3 + 3420) = 5;
  *(_WORD *)(v3 + 3424) = 0;
  *(_BYTE *)(v3 + 3426) = 0;
  *(_DWORD *)(v3 + 3504) = 0;
  *(_DWORD *)(v3 + 3508) = 0;
  _aeabi_memclr4(v3 + 3428, 68);
  *(_DWORD *)(v3 + 248) = 29;
  *(_DWORD *)(v3 + 208) = 0;
  v4 = (int *)(v3 + 176);
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 34) )
  {
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 34);
    v5 = *v4;
    v6 = operator new(0x10u);
    v6[4] = 3;
    v7 = 34;
    *((_WORD *)v6 + 3) = 34;
    v6[8] = 1;
    *(_DWORD *)v6 = &off_26F137C;
    *((_DWORD *)v6 + 3) = 0;
    v8 = *(_DWORD *)(v5 + 136);
    *(_DWORD *)(v5 + 136) = v6;
    if ( v8 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
    v9 = *(_WORD *)(v3 + 188);
    if ( v9 >= 0x22 )
      LOWORD(v9) = 34;
    *(_WORD *)(v3 + 188) = v9;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x22 )
      v7 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v7;
  }
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 35) )
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 35);
    v10 = *v4;
    v11 = operator new(0x10u);
    v11[4] = 3;
    v12 = 35;
    *((_WORD *)v11 + 3) = 35;
    v11[8] = 1;
    *(_DWORD *)v11 = &off_26F137C;
    *((_DWORD *)v11 + 3) = 0;
    v13 = *(_DWORD *)(v10 + 140);
    *(_DWORD *)(v10 + 140) = v11;
    if ( v13 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 4))(v13);
    v14 = *(_WORD *)(v3 + 188);
    if ( v14 >= 0x23 )
      LOWORD(v14) = 35;
    *(_WORD *)(v3 + 188) = v14;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x23 )
      v12 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v12;
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 36) )
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 36);
    v15 = *v4;
    v16 = operator new(0x10u);
    v16[4] = 3;
    v17 = 36;
    *((_WORD *)v16 + 3) = 36;
    v16[8] = 1;
    *(_DWORD *)v16 = &off_26F137C;
    *((_DWORD *)v16 + 3) = 0;
    v18 = *(_DWORD *)(v15 + 144);
    *(_DWORD *)(v15 + 144) = v16;
    if ( v18 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 4))(v18);
    v19 = *(_WORD *)(v3 + 188);
    if ( v19 >= 0x24 )
      LOWORD(v19) = 36;
    *(_WORD *)(v3 + 188) = v19;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x24 )
      v17 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v17;
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 6) )
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 6);
    v20 = *v4;
    v21 = operator new(0x18u);
    v21[4] = 7;
    v22 = 6;
    *((_WORD *)v21 + 3) = 6;
    v21[8] = 1;
    *(_DWORD *)v21 = &off_26F0DC8;
    *((_DWORD *)v21 + 4) = 0;
    *((_DWORD *)v21 + 5) = 0;
    v23 = *(_DWORD *)(v20 + 24);
    *(_DWORD *)(v20 + 24) = v21;
    if ( v23 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 4))(v23);
    v24 = *(_WORD *)(v3 + 188);
    if ( v24 >= 6 )
      LOWORD(v24) = 6;
    *(_WORD *)(v3 + 188) = v24;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 6 )
      v22 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v22;
  Entity::enableAutoSendPosRot((Entity *)v3, 1);
  return v3;
}


int __fastcall FishingHook::getShadowRadius(FishingHook *this)
{
  return 0;
}


signed int __fastcall FishingHook::_serverTease(FishingHook *this)
{
  signed int v1; // r1@1
  Level *v9; // r0@8
  char *v10; // r0@8
  signed int result; // r0@8

  v1 = *((_DWORD *)this + 864);
  if ( v1 <= 19 )
  {
    _R1 = 20 - v1;
    __asm
    {
      VLDR            S2, =0.05
      VMOV            S0, R1
      VCVT.F32.S32    S0, S0
    }
LABEL_7:
      VMUL.F32        S0, S0, S2
      VLDR            S2, =0.15
      VADD.F32        S16, S0, S2
    goto LABEL_8;
  }
  if ( v1 <= 39 )
    _R1 = 40 - v1;
      VLDR            S2, =0.02
    goto LABEL_7;
  if ( v1 <= 59 )
    _R1 = 60 - v1;
      VLDR            S2, =0.01
  __asm { VLDR            S16, =0.15 }
LABEL_8:
  v9 = (Level *)Entity::getLevel(this);
  v10 = Level::getRandom(v9);
  _R0 = Random::_genRandInt32((Random *)v10);
  __asm
    VMOV            S0, R0
    VLDR            D1, =2.32830644e-10
  result = 0;
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VCVT.F32.F64    S0, D0
    VCMPE.F32       S0, S16
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    result = 1;
  return result;
}


Entity *__fastcall FishingHook::~FishingHook(FishingHook *this)
{
  Entity *v1; // r4@1
  int v2; // r5@1
  int v3; // r1@1
  int v4; // r0@1
  unsigned int v6; // [sp+8h] [bp-18h]@1
  unsigned int v7; // [sp+Ch] [bp-14h]@1

  v1 = this;
  *(_DWORD *)this = &off_26F1968;
  v2 = Entity::getLevel(this);
  (*(void (__fastcall **)(unsigned int *, Entity *))(*(_DWORD *)v1 + 500))(&v6, v1);
  v4 = Level::fetchEntity(v2, v3, v6, v7, 0);
  if ( v4 )
    *(_DWORD *)(v4 + 532) = 0;
  Entity::~Entity(v1);
  return v1;
}


int __fastcall FishingHook::_fishPosEvent(FishingHook *this)
{
  Level *v2; // r0@1
  char *v3; // r5@1
  float v9; // r1@1
  mce::Math *v12; // r6@1
  float v13; // r1@1
  float v15; // r1@1
  int v18; // r0@3
  int v19; // r0@4
  int v20; // r0@4
  float v22; // [sp+34h] [bp-44h]@3

  _R4 = this;
  v2 = (Level *)Entity::getLevel(this);
  v3 = Level::getRandom(v2);
  __asm { VLDR            S16, [R4,#0x48] }
  _R7 = SynchedEntityData::getFloat((FishingHook *)((char *)_R4 + 176), 34);
  _R0 = mce::Math::floor(*((mce::Math **)_R4 + 67), v9);
  __asm
  {
    VMOV            S0, R0
    VLDR            S20, =0.9
    VCVT.F32.S32    S18, S0
    VLDR            S22, [R4,#0x50]
    VMOV            S0, R7
    VADD.F32        S16, S0, S16
  }
  _R0 = SynchedEntityData::getFloat((FishingHook *)((char *)_R4 + 176), 35);
    VADD.F32        S2, S18, S20
    VADD.F32        S0, S0, S22
    VSTR            S16, [SP,#0x78+var_44]
    VSTR            S2, [SP,#0x78+var_40]
    VSTR            S0, [SP,#0x78+var_3C]
  v12 = (mce::Math *)SynchedEntityData::getFloat((FishingHook *)((char *)_R4 + 176), 36);
  _R7 = mce::Math::sin(v12, v13);
  _R6 = mce::Math::cos(v12, v15);
  _R0 = Random::_genRandInt32((Random *)v3);
    VLDR            D1, =2.32830644e-10
    VMOV            S20, R7
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D1
    VLDR            S2, =0.004
    VMOV            S22, R6
    VCVT.F32.F64    S0, D0
    VMUL.F32        S18, S20, S2
    VMUL.F32        S16, S22, S2
    VLDR            S2, =0.15
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    v18 = Entity::getLevel(_R4);
    __asm
    {
      VSTR            S20, [SP,#0x78+var_50]
      VSTR            S22, [SP,#0x78+var_48]
    }
    Level::addParticle(v18, 1, (int)&v22);
  v19 = Entity::getLevel(_R4);
    VNEG.F32        S0, S16
    VSTR            S0, [SP,#0x78+var_5C]
    VSTR            S18, [SP,#0x78+var_54]
  Level::addParticle(v19, 22, (int)&v22);
  v20 = Entity::getLevel(_R4);
    VNEG.F32        S0, S18
    VSTR            S16, [SP,#0x78+var_68]
    VSTR            S0, [SP,#0x78+var_60]
  return Level::addParticle(v20, 22, (int)&v22);
}


signed int __fastcall FishingHook::_getServerFishSpeed(FishingHook *this)
{
  Entity *v1; // r4@1
  Level *v2; // r0@1
  char *v3; // r6@1
  int v4; // r0@1
  BlockSource *v5; // r5@1
  signed int v11; // r4@1
  Biome *v12; // r0@3
  Dimension *v14; // r0@7
  Weather *v15; // r0@7
  int v18; // [sp+4h] [bp-44h]@11
  int v19; // [sp+8h] [bp-40h]@11
  int v20; // [sp+Ch] [bp-3Ch]@11
  int v21; // [sp+10h] [bp-38h]@7
  int v22; // [sp+14h] [bp-34h]@7
  int v23; // [sp+18h] [bp-30h]@7
  char v24; // [sp+1Ch] [bp-2Ch]@1
  int v25; // [sp+20h] [bp-28h]@7
  int v26; // [sp+24h] [bp-24h]@7

  v1 = this;
  v2 = (Level *)Entity::getLevel(this);
  v3 = Level::getRandom(v2);
  v4 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 52))(v1);
  BlockPos::BlockPos((int)&v24, v4);
  v5 = (BlockSource *)Entity::getRegion(v1);
  _R0 = Random::_genRandInt32((Random *)v3);
  __asm
  {
    VMOV            S0, R0
    VLDR            D8, =2.32830644e-10
    VMOV.F32        S18, #0.25
  }
  v11 = 1;
    VCVT.F64.U32    D0, S0
    VMUL.F64        D0, D0, D8
    VCVT.F32.F64    S0, D0
    VCMPE.F32       S0, S18
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    v12 = (Biome *)BlockSource::getBiome(v5, (const BlockPos *)&v24);
    if ( Biome::getBiomeType(v12) == 10 )
      v11 = 2;
    v14 = (Dimension *)BlockSource::getDimensionConst(v5);
    v15 = (Weather *)Dimension::getWeather(v14);
    v21 = *(_DWORD *)&v24;
    v22 = v25 + 1;
    v23 = v26;
    if ( Weather::isRainingAt(v15, v5, (const BlockPos *)&v21) )
    VMOV.F32        S2, #0.5
    VCMPE.F32       S0, S2
    v18 = *(_DWORD *)&v24;
    v19 = v25 + 1;
    v20 = v26;
    if ( BlockSource::canSeeSky(v5, (const BlockPos *)&v18) != 1 )
      --v11;
  return v11;
}


signed int __fastcall FishingHook::_serverHooked(FishingHook *this)
{
  Level *v2; // r0@1
  char *v3; // r0@1
  signed int v4; // r1@1
  int v5; // r1@2
  float v16; // r1@3
  unsigned int v20; // r1@3
  unsigned int v21; // r1@5
  unsigned int v22; // r0@5
  unsigned int v24; // r1@10
  unsigned int v25; // r1@12
  unsigned int v26; // r0@12
  float v28; // r1@17
  unsigned int v29; // r0@19
  BlockSource *v34; // r0@24
  int *v35; // r0@24
  int v36; // r0@25
  int v37; // r1@25
  char v38; // r2@25
  char v40; // [sp+4h] [bp-3Ch]@24

  _R4 = this;
  v2 = (Level *)Entity::getLevel(this);
  v3 = Level::getRandom(v2);
  v4 = *((_DWORD *)_R4 + 863);
  if ( v4 < 1 )
    return 0;
  v5 = v4 - *((_DWORD *)_R4 + 866);
  *((_DWORD *)_R4 + 863) = v5;
  if ( v5 <= 0 )
  {
    *((_DWORD *)_R4 + 865) = Random::_genRandInt32((Random *)v3) % 0x14 + 10;
    v36 = Entity::getLevel(_R4);
    v37 = (int)_R4;
    v38 = 13;
  }
  else
    _R0 = Random::nextGaussian((Random *)v3);
    __asm
    {
      VMOV            S2, R0
      VLDR            S0, =0.0019531
    }
    _R1 = (int)_R4 + 3440;
      VMUL.F32        S0, S2, S0
      VLDR            S2, [R1]
    _R0 = &mce::Math::RADDEG;
      VADD.F32        S0, S2, S0
      VLDR            S2, [R0]
      VMUL.F32        S16, S2, S0
      VSTR            S0, [R1]
      VMOV            R5, S16
    _R0 = mce::Math::sin(_R5, COERCE_FLOAT((FishingHook *)((char *)_R4 + 3440)));
    __asm { VMOV            S18, R0 }
    _R6 = *((_DWORD *)_R4 + 863);
    _R0 = mce::Math::cos(_R5, v16);
      VMOV            S2, R6
      VLDR            S0, =0.1
      VMOV            S4, R0
      VCVT.F32.S32    S2, S2
    _R0 = *((_DWORD *)_R4 + 863);
      VMUL.F32        S6, S18, S0
      VMUL.F32        S22, S4, S0
      VMOV            S8, R0
      VCVT.F32.S32    S20, S8
      VMUL.F32        S18, S6, S2
    _R0 = SynchedEntityData::_get((FishingHook *)((char *)_R4 + 176), 34);
    v20 = *(_DWORD *)(_R0 + 4);
    if ( (unsigned __int8)v20 == 3 )
      __asm
      {
        VLDR            S0, [R0,#0xC]
        VCMPE.F32       S0, S18
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !_ZF )
        __asm { VSTR            S18, [R0,#0xC] }
        *(_BYTE *)(_R0 + 8) = 1;
        v21 = v20 >> 16;
        v22 = *((_WORD *)_R4 + 94);
        if ( v22 >= v21 )
          LOWORD(v22) = v21;
        *((_WORD *)_R4 + 94) = v22;
        if ( *((_WORD *)_R4 + 95) > v21 )
          LOWORD(v21) = *((_WORD *)_R4 + 95);
        *((_WORD *)_R4 + 95) = v21;
    __asm { VMUL.F32        S20, S22, S20 }
    _R0 = SynchedEntityData::_get((FishingHook *)((char *)_R4 + 176), 35);
    v24 = *(_DWORD *)(_R0 + 4);
    if ( (unsigned __int8)v24 == 3 )
        VCMPE.F32       S0, S20
        __asm { VSTR            S20, [R0,#0xC] }
        v25 = v24 >> 16;
        v26 = *((_WORD *)_R4 + 94);
        if ( v26 >= v25 )
          LOWORD(v26) = v25;
        *((_WORD *)_R4 + 94) = v26;
        if ( *((_WORD *)_R4 + 95) > v25 )
          LOWORD(v25) = *((_WORD *)_R4 + 95);
        *((_WORD *)_R4 + 95) = v25;
    _R0 = SynchedEntityData::_get((FishingHook *)((char *)_R4 + 176), 36);
    v28 = *(float *)(_R0 + 4);
    if ( LOBYTE(v28) == 3 )
        VCMPE.F32       S0, S16
        __asm { VSTR            S16, [R0,#0xC] }
        LODWORD(v28) >>= 16;
        v29 = *((_WORD *)_R4 + 94);
        if ( v29 >= LODWORD(v28) )
          LOWORD(v29) = LOWORD(v28);
        *((_WORD *)_R4 + 94) = v29;
        if ( (unsigned int)*((_WORD *)_R4 + 95) > LODWORD(v28) )
          LODWORD(v28) = *((_WORD *)_R4 + 95);
        *((_WORD *)_R4 + 95) = LOWORD(v28);
      VLDR            S0, [R4,#0x48]
      VADD.F32        S16, S0, S18
    _R0 = mce::Math::floor(*((mce::Math **)_R4 + 67), v28);
      VLDR            S0, [R4,#0x50]
      VMOV            R1, S16
      VADD.F32        S0, S0, S20
      VMOV            R2, S2
      VMOV            R3, S0
    BlockPos::BlockPos((BlockPos *)&v40, _R1, _R2, _R3);
    v34 = (BlockSource *)Entity::getRegion(_R4);
    v35 = (int *)BlockSource::getMaterial(v34, (const BlockPos *)&v40);
    if ( Material::isType(v35, 5) != 1 )
      return 1;
    v38 = 12;
  Level::broadcastEntityEvent(v36, v37, v38, 0);
  return 1;
}


int __fastcall FishingHook::save(FishingHook *this, CompoundTag *a2)
{
  return 0;
}


void __fastcall FishingHook::~FishingHook(FishingHook *this)
{
  FishingHook::~FishingHook(this);
}


signed int __fastcall FishingHook::getEntityTypeId(FishingHook *this)
{
  return 77;
}


int __fastcall FishingHook::_pullCloser(FishingHook *this, Entity *a2, float a3)
{
  Entity *v4; // r4@1
  Entity *v5; // r5@1
  int v6; // r7@1
  int v7; // r1@1
  int result; // r0@1
  float v15; // r1@2
  Level *v18; // r0@5
  Dimension *v19; // r5@6
  int v20; // r0@6
  __int64 v21; // r1@6
  void **v22; // [sp+8h] [bp-60h]@6
  int v23; // [sp+Ch] [bp-5Ch]@6
  int v24; // [sp+10h] [bp-58h]@6
  char v25; // [sp+14h] [bp-54h]@6
  int v26; // [sp+18h] [bp-50h]@6
  __int64 v27; // [sp+20h] [bp-48h]@6
  int v28; // [sp+28h] [bp-40h]@6
  unsigned int v29; // [sp+30h] [bp-38h]@1
  unsigned int v30; // [sp+34h] [bp-34h]@1

  _R6 = a3;
  v4 = a2;
  v5 = this;
  v6 = Entity::getLevel(this);
  (*(void (__fastcall **)(unsigned int *, Entity *))(*(_DWORD *)v5 + 500))(&v29, v5);
  result = Level::fetchEntity(v6, v7, v29, v30, 0);
  if ( result )
  {
    __asm { VMOV            S20, R6 }
    _R6 = (*(int (**)(void))(*(_DWORD *)result + 52))();
    _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v4 + 52))(v4);
    __asm
    {
      VLDR            S0, [R0]
      VLDR            S6, [R6]
      VLDR            S2, [R0,#4]
      VLDR            S4, [R0,#8]
      VSUB.F32        S0, S6, S0
      VLDR            S8, [R6,#4]
      VLDR            S10, [R6,#8]
      VSUB.F32        S2, S8, S2
      VSUB.F32        S4, S10, S4
      VMUL.F32        S18, S2, S20
      VMUL.F32        S16, S4, S20
      VMUL.F32        S20, S0, S20
    }
    if ( Entity::isRiding(v4) == 1 )
      (*(void (__fastcall **)(Entity *, signed int, _DWORD))(*(_DWORD *)v4 + 596))(v4, 1, 0);
      VMUL.F32        S0, S20, S20
      VSTR            S20, [R4,#0x6C]
      VMUL.F32        S2, S18, S18
      VMUL.F32        S4, S16, S16
      VADD.F32        S0, S2, S0
      VADD.F32        S0, S0, S4
      VSQRT.F32       S0, S0
      VMOV            R0, S0
    _R0 = mce::Math::sqrt(_R0, v15);
      VMOV            S2, R0
      VLDR            S0, =0.08
      VMUL.F32        S0, S2, S0
      VADD.F32        S0, S0, S18
      VSTR            S0, [R4,#0x70]
      VSTR            S16, [R4,#0x74]
    result = Entity::hasCategory((int)v4, 1);
    if ( result == 1 )
      v18 = (Level *)Entity::getLevel(v5);
      result = Level::isClientSide(v18);
      if ( !result )
      {
        v19 = (Dimension *)Entity::getDimension(v5);
        v23 = 2;
        v24 = 1;
        v25 = 0;
        v22 = &off_26E9684;
        Entity::getRuntimeID((Entity *)&v26, (int)v4);
        v20 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v4 + 64))(v4);
        v21 = *(_QWORD *)v20;
        v28 = *(_DWORD *)(v20 + 8);
        v27 = v21;
        result = Dimension::sendPacketForEntity(v19, v4, (const Packet *)&v22, 0);
      }
  }
  return result;
}


int __fastcall FishingHook::_fishhookEvent(FishingHook *this)
{
  int v6; // r0@1
  int v7; // r5@1
  float v8; // r1@1
  int v10; // r0@1
  int v11; // r0@1
  int v12; // r0@1
  int v14; // [sp+18h] [bp-20h]@1
  int v15; // [sp+20h] [bp-18h]@1

  __asm { VMOV.F32        S0, #-0.5 }
  _R4 = this;
  __asm
  {
    VLDR            S2, [R4,#0x70]
    VADD.F32        S0, S2, S0
    VSTR            S0, [R4,#0x70]
  }
  v6 = (*(int (**)(void))(*(_DWORD *)this + 52))();
  Entity::playSound((int)_R4, 26, v6);
  v7 = *((_DWORD *)_R4 + 18);
  _R0 = mce::Math::floor(*((mce::Math **)_R4 + 67), v8);
    VMOV            S2, R0
    VMOV.F32        S0, #1.0
    VCVT.F32.S32    S2, S2
  v10 = *((_DWORD *)_R4 + 20);
  __asm { VMOV.F32        S4, #20.0 }
  v14 = v7;
    VADD.F32        S2, S2, S0
    VSTR            S2, [SP,#0x38+var_1C]
  v15 = v10;
    VLDR            S2, [R4,#0x130]
    VMUL.F32        S4, S2, S4
    VADD.F32        S0, S4, S0
    VSTR            S0, [SP,#0x38+var_2C]
    VSTR            S2, [SP,#0x38+var_24]
  v11 = Entity::getLevel(_R4);
  Level::addParticle(v11, 1, (int)&v14);
  v12 = Entity::getLevel(_R4);
  return Level::addParticle(v12, 22, (int)&v14);
}


void __fastcall FishingHook::~FishingHook(FishingHook *this)
{
  Entity *v1; // r4@1
  int v2; // r5@1
  int v3; // r1@1
  int v4; // r0@1
  unsigned int v5; // [sp+8h] [bp-18h]@1
  unsigned int v6; // [sp+Ch] [bp-14h]@1

  v1 = this;
  *(_DWORD *)this = &off_26F1968;
  v2 = Entity::getLevel(this);
  (*(void (__fastcall **)(unsigned int *, Entity *))(*(_DWORD *)v1 + 500))(&v5, v1);
  v4 = Level::fetchEntity(v2, v3, v5, v6, 0);
  if ( v4 )
    *(_DWORD *)(v4 + 532) = 0;
  Entity::~Entity(v1);
  operator delete((void *)v1);
}


signed int __fastcall FishingHook::_serverLured(FishingHook *this)
{
  signed int v2; // r0@1
  int v3; // r0@2
  int v9; // r5@4
  int v10; // r7@4
  int v11; // r1@4
  Player *v12; // r5@4
  ItemInstance *v13; // r6@4
  Level *v16; // r0@13
  char *v17; // r0@13
  Level *v19; // r0@15
  char *v20; // r0@15
  Level *v24; // r0@15
  char *v25; // r0@15
  float v27; // r1@15
  float v29; // r1@15
  int v30; // r0@15
  unsigned int v33; // r1@15
  unsigned int v34; // r1@17
  unsigned int v35; // r0@17
  unsigned int v37; // r1@22
  unsigned int v38; // r1@24
  unsigned int v39; // r0@24
  int v40; // r0@29
  signed int result; // r0@31
  Level *v42; // r0@32
  char *v43; // r0@32
  Level *v45; // r0@32
  char *v46; // r0@32
  void *v47; // r0@36
  const ItemInstance *v48; // r2@36
  Level *v49; // r0@38
  char *v50; // r0@38
  unsigned int v51; // r0@38
  signed int v52; // r0@38
  unsigned int v53; // [sp+8h] [bp-48h]@4
  unsigned int v54; // [sp+Ch] [bp-44h]@4

  _R4 = this;
  v2 = *((_DWORD *)this + 864);
  if ( v2 >= 1 )
  {
    v3 = v2 - *((_DWORD *)_R4 + 866);
    *((_DWORD *)_R4 + 864) = v3;
    if ( v3 > 19 )
    {
      if ( v3 > 39 )
      {
        if ( v3 > 59 )
        {
          __asm { VLDR            S18, =0.15 }
          goto LABEL_13;
        }
        _R0 = 60 - v3;
        __asm
          VLDR            S2, =0.01
          VMOV            S0, R0
          VCVT.F32.S32    S0, S0
      }
      else
        _R0 = 40 - v3;
          VLDR            S2, =0.02
    }
    else
      _R0 = 20 - v3;
      __asm
        VLDR            S2, =0.05
        VMOV            S0, R0
        VCVT.F32.S32    S0, S0
    __asm
      VMUL.F32        S0, S0, S2
      VLDR            S2, =0.15
      VADD.F32        S18, S0, S2
LABEL_13:
    v16 = (Level *)Entity::getLevel(_R4);
    v17 = Level::getRandom(v16);
    _R0 = Random::_genRandInt32((Random *)v17);
      VMOV            S0, R0
      VLDR            D8, =2.32830644e-10
      VCVT.F64.U32    D0, S0
      VMUL.F64        D0, D0, D8
      VCVT.F32.F64    S0, D0
      VCMPE.F32       S0, S18
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF )
      v19 = (Level *)Entity::getLevel(_R4);
      v20 = Level::getRandom(v19);
      _R0 = Random::_genRandInt32((Random *)v20);
        VLDR            S2, =360.0
        VCVT.F64.U32    D0, S0
      _R0 = &mce::Math::RADDEG;
        VMUL.F64        D0, D0, D8
        VLDR            S4, [R0]
        VCVT.F32.F64    S0, D0
        VMUL.F32        S2, S4, S2
        VMUL.F32        S0, S2, S0
        VMOV            R5, S0
      v24 = (Level *)Entity::getLevel(_R4);
      v25 = Level::getRandom(v24);
      _R6 = Random::_genRandInt32((Random *)v25);
      __asm { VLDR            S24, [R4,#0x48] }
      _R7 = mce::Math::sin(_R5, v27);
      __asm { VLDR            S18, [R4,#0x50] }
      v30 = mce::Math::cos(_R5, v29);
        VMOV            S0, R6
        VLDR            S2, =35.0
        VMOV.F32        S4, #25.0
      _R5 = v30;
        VMUL.F32        S0, S0, S2
        VLDR            S20, =0.1
        VADD.F32        S22, S0, S4
      _R0 = SynchedEntityData::_get((FishingHook *)((char *)_R4 + 176), 34);
      v33 = *(_DWORD *)(_R0 + 4);
      if ( (unsigned __int8)v33 == 3 )
          VMOV            S0, R7
          VLDR            S2, [R0,#0xC]
          VMUL.F32        S0, S0, S20
          VMUL.F32        S0, S0, S22
          VADD.F32        S0, S0, S24
          VCMPE.F32       S2, S0
          VMRS            APSR_nzcv, FPSCR
        if ( !_ZF )
          __asm { VSTR            S0, [R0,#0xC] }
          *(_BYTE *)(_R0 + 8) = 1;
          v34 = v33 >> 16;
          v35 = *((_WORD *)_R4 + 94);
          if ( v35 >= v34 )
            LOWORD(v35) = v34;
          *((_WORD *)_R4 + 94) = v35;
          if ( *((_WORD *)_R4 + 95) > v34 )
            LOWORD(v34) = *((_WORD *)_R4 + 95);
          *((_WORD *)_R4 + 95) = v34;
      _R0 = SynchedEntityData::_get((FishingHook *)((char *)_R4 + 176), 35);
      v37 = *(_DWORD *)(_R0 + 4);
      if ( (unsigned __int8)v37 == 3 )
          VMOV            S0, R5
          VADD.F32        S0, S0, S18
          v38 = v37 >> 16;
          v39 = *((_WORD *)_R4 + 94);
          if ( v39 >= v38 )
            LOWORD(v39) = v38;
          *((_WORD *)_R4 + 94) = v39;
          if ( *((_WORD *)_R4 + 95) > v38 )
            LOWORD(v38) = *((_WORD *)_R4 + 95);
          *((_WORD *)_R4 + 95) = v38;
      v40 = Entity::getLevel(_R4);
      Level::broadcastEntityEvent(v40, (int)_R4, 14, 0);
    if ( *((_DWORD *)_R4 + 864) <= 0 )
      v42 = (Level *)Entity::getLevel(_R4);
      v43 = Level::getRandom(v42);
      _R0 = Random::_genRandInt32((Random *)v43);
        VSTR            S0, [R0]
      v45 = (Level *)Entity::getLevel(_R4);
      v46 = Level::getRandom(v45);
      *((_DWORD *)_R4 + 863) = Random::_genRandInt32((Random *)v46) % 0x3C + 20;
      result = 1;
    return result;
  }
  v9 = Entity::getLevel(_R4);
  (*(void (__fastcall **)(unsigned int *, FishingHook *))(*(_DWORD *)_R4 + 500))(&v53, _R4);
  v10 = 0;
  v12 = (Player *)Level::fetchEntity(v9, v11, v53, v54, 0);
  v13 = (ItemInstance *)Player::getSelectedItem(v12);
  if ( *((_BYTE *)v13 + 15) )
    if ( *(_DWORD *)v13 )
      if ( ItemInstance::isNull(v13) )
        v10 = 0;
      else if ( *((_BYTE *)v13 + 14) )
        v47 = Player::getSelectedItem(v12);
        v10 = 5 * EnchantUtils::getEnchantLevel((EnchantUtils *)0x18, (int)v47, v48);
      v10 = 0;
  v49 = (Level *)Entity::getLevel(_R4);
  v50 = Level::getRandom(v49);
  v51 = Random::_genRandInt32((Random *)v50);
  v52 = v51 + 5 - (v10 + 25 * (v51 / 0x19));
  if ( v52 <= 1 )
    v52 = 1;
  *((_DWORD *)_R4 + 864) = 20 * v52;
  return 0;
}


int __fastcall FishingHook::normalTick(FishingHook *this)
{
  Level *v2; // r0@1
  int v3; // r5@2
  int v4; // r1@2
  int v5; // r0@2
  int v6; // r6@4
  __int64 v7; // r0@4
  int v8; // r6@5
  __int64 v9; // r0@5
  int v10; // r6@5
  unsigned int v11; // r1@5
  int v12; // r2@5
  PhysicsComponent *v13; // r0@7
  PhysicsComponent *v14; // r0@7
  float v19; // r1@9
  float v21; // r1@9
  Level *v23; // r0@9
  Level *v25; // r0@15
  int result; // r0@15
  int v27; // r6@16
  int v28; // r1@16
  int v29; // r0@16
  int v30; // r6@16
  ItemInstance *v31; // r7@18
  int v33; // r2@25
  int v34; // r1@25
  int v36; // r6@28
  __int64 v37; // r0@28
  int v39; // [sp+4h] [bp-64h]@25
  int v40; // [sp+8h] [bp-60h]@25
  int v41; // [sp+Ch] [bp-5Ch]@25
  unsigned int v42; // [sp+10h] [bp-58h]@2
  unsigned int v43; // [sp+14h] [bp-54h]@2
  int v44; // [sp+18h] [bp-50h]@5

  _R4 = this;
  Entity::normalTick(this);
  FishingHook::_updateGravity(_R4);
  v2 = (Level *)Entity::getLevel(_R4);
  if ( Level::isClientSide(v2) == 1 )
  {
    v3 = Entity::getLevel(_R4);
    (*(void (__fastcall **)(unsigned int *, FishingHook *))(*(_DWORD *)_R4 + 500))(&v42, _R4);
    v5 = Level::fetchEntity(v3, v4, v42, v43, 0);
    if ( v5 )
      *(_DWORD *)(v5 + 532) = _R4;
  }
  v6 = Entity::getLevel(_R4);
  v7 = SynchedEntityData::getInt64((FishingHook *)((char *)_R4 + 176), 6);
  if ( Level::fetchEntity(v6, SHIDWORD(v7), v7, HIDWORD(v7), 0) )
    v8 = Entity::getLevel(_R4);
    v9 = SynchedEntityData::getInt64((FishingHook *)((char *)_R4 + 176), 6);
    v10 = Level::fetchEntity(v8, SHIDWORD(v9), v9, HIDWORD(v9), 0);
    v11 = *(_DWORD *)(v10 + 76);
    v12 = *(_DWORD *)(v10 + 80);
    v42 = *(_DWORD *)(v10 + 72);
    v43 = v11;
    v44 = v12;
    v43 = *(_DWORD *)(v10 + 280);
    (*(void (__fastcall **)(FishingHook *, unsigned int *))(*(_DWORD *)_R4 + 48))(_R4, &v42);
    *((_DWORD *)_R4 + 27) = *(_DWORD *)(v10 + 108);
    *((_DWORD *)_R4 + 28) = *(_DWORD *)(v10 + 112);
    *((_DWORD *)_R4 + 29) = *(_DWORD *)(v10 + 116);
    *((_QWORD *)_R4 + 15) = *(_QWORD *)(v10 + 120);
  else
    FishingHook::_lerpServerPos(_R4);
    Entity::enableAutoSendPosRot(_R4, 1);
    if ( Entity::getPhysicsComponent(_R4) )
    {
      v13 = (PhysicsComponent *)Entity::getPhysicsComponent(_R4);
      PhysicsComponent::setHasCollision(v13, 1);
      v14 = (PhysicsComponent *)Entity::getPhysicsComponent(_R4);
      PhysicsComponent::setAffectedByGravity(v14, 1);
    }
    FishingHook::_hitCheck((FishingHook *)&v42, _R4);
    if ( (v42 & 0xFFFFFFFE) == 2 )
      (*(void (__fastcall **)(FishingHook *, char *))(*(_DWORD *)_R4 + 76))(_R4, (char *)_R4 + 108);
      __asm
      {
        VLDR            S0, [R4,#0x78]
        VLDR            S2, [R4,#0x80]
        VSUB.F32        S0, S0, S2
        VMOV            R0, S0
      }
      *((_DWORD *)_R4 + 32) = mce::Math::wrapDegrees(_R0, v19);
        VLDR            S0, [R4,#0x7C]
        VLDR            S2, [R4,#0x84]
      _R0 = mce::Math::wrapDegrees(_R0, v21);
      *((_DWORD *)_R4 + 33) = _R0;
        VLDR            S4, =0.2
        VMUL.F32        S0, S0, S4
        VADD.F32        S0, S0, S2
        VMOV            S2, R0
        VSTR            S0, [R4,#0x78]
        VSTR            S0, [R4,#0x7C]
      v23 = (Level *)Entity::getLevel(_R4);
      if ( !Level::isClientSide(v23) )
        _R0 = FishingHook::_getWaterPercentage(_R4);
        __asm
        {
          VMOV            S0, R0
          VCMPE.F32       S0, #0.0
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) && !FishingHook::_serverNibble(_R4) )
          *((_DWORD *)_R4 + 866) = FishingHook::_getServerFishSpeed(_R4);
          if ( !FishingHook::_serverHooked(_R4) )
            FishingHook::_serverLured(_R4);
      (*(void (__fastcall **)(FishingHook *, char *))(*(_DWORD *)_R4 + 48))(_R4, (char *)_R4 + 72);
  v25 = (Level *)Entity::getLevel(_R4);
  result = Level::isClientSide(v25);
  if ( !result )
    v27 = Entity::getLevel(_R4);
    v29 = Level::fetchEntity(v27, v28, v42, v43, 0);
    v30 = v29;
    if ( v29 )
      if ( Entity::hasCategory(v29, 1) != 1 )
        goto LABEL_33;
      v31 = (ItemInstance *)Player::getSelectedItem((Player *)v30);
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)v30 + 316))(v30) != 1 )
        goto LABEL_34;
      _ZF = *((_BYTE *)v31 + 15) == 0;
      if ( *((_BYTE *)v31 + 15) )
        _ZF = *(_DWORD *)v31 == 0;
      if ( _ZF )
      if ( ItemInstance::isNull(v31) )
      if ( !*((_BYTE *)v31 + 14) )
      if ( *(_DWORD *)v31 != Item::mFishingRod )
      v33 = *(_DWORD *)(v30 + 268);
      v34 = *(_DWORD *)(v30 + 80);
      v39 = *(_DWORD *)(v30 + 72);
      v40 = v33;
      v41 = v34;
      _R0 = Entity::distanceToSqr(_R4, (const Vec3 *)&v39);
        VLDR            S0, =1024.0
        VCMPE.F32       S2, S0
        VMRS            APSR_nzcv, FPSCR
      if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_33:
        v36 = Entity::getLevel(_R4);
        v37 = SynchedEntityData::getInt64((FishingHook *)((char *)_R4 + 176), 6);
        result = Level::fetchEntity(v36, SHIDWORD(v37), v37, HIDWORD(v37), 0);
        _R5 = result;
        if ( result )
          result = (*(int (**)(void))(*(_DWORD *)result + 316))();
          if ( result == 1 )
          {
            *((_DWORD *)_R4 + 18) = *(_DWORD *)(_R5 + 72);
            __asm
            {
              VLDR            S0, =0.8
              VLDR            S4, [R5,#0x134]
              VLDR            S2, [R5,#0x10C]
              VMUL.F32        S0, S4, S0
              VADD.F32        S0, S0, S2
              VSTR            S0, [R4,#0x4C]
            }
            result = *(_DWORD *)(_R5 + 80);
            *((_DWORD *)_R4 + 20) = result;
          }
      else
LABEL_34:
        (*(void (__fastcall **)(FishingHook *))(*(_DWORD *)_R4 + 44))(_R4);
        result = 0;
        *(_DWORD *)(v30 + 532) = 0;
    else
      result = (*(int (__fastcall **)(FishingHook *))(*(_DWORD *)_R4 + 44))(_R4);
  return result;
}


signed int __fastcall FishingHook::_serverNibble(FishingHook *this)
{
  signed int v2; // r0@1
  Level *v3; // r0@4
  char *v4; // r0@4
  Random *v5; // r5@4
  signed int result; // r0@4

  _R4 = this;
  v2 = *((_DWORD *)this + 865);
  if ( v2 < 1 )
  {
    result = 0;
  }
  else
    *((_DWORD *)_R4 + 865) = v2 - 1;
    if ( v2 <= 1 )
    {
      *((_DWORD *)_R4 + 863) = 0;
      *((_DWORD *)_R4 + 864) = 0;
    }
    v3 = (Level *)Entity::getLevel(_R4);
    v4 = Level::getRandom(v3);
    v5 = (Random *)v4;
    _R0 = Random::_genRandInt32((Random *)v4);
    __asm
      VMOV            S0, R0
      VCVT.F64.U32    D8, S0
    _R0 = Random::_genRandInt32(v5);
      VLDR            D10, =2.32830644e-10
      VCVT.F64.U32    D9, S0
      VMUL.F64        D1, D8, D10
    result = 1;
      VMUL.F64        D2, D9, D10
      VCVT.F64.U32    D0, S0
      VMOV.F32        S6, #-0.5
      VCVT.F32.F64    S2, D1
      VMUL.F64        D0, D0, D10
      VCVT.F32.F64    S4, D2
      VMUL.F32        S2, S2, S6
      VCVT.F32.F64    S0, D0
      VMUL.F32        S2, S2, S4
      VMUL.F32        S0, S2, S0
      VLDR            S2, [R4,#0x70]
      VADD.F32        S0, S2, S0
      VSTR            S0, [R4,#0x70]
  return result;
}


int __fastcall FishingHook::shoot(float a1, float a2, int a3, int a4, int a5, int a6)
{
  Level *v16; // r0@1
  char *v17; // r0@1
  Random *v18; // r6@1
  float v23; // r1@1
  int v24; // r5@1
  __int64 v25; // r0@1
  __int64 v26; // r2@1
  int v27; // r0@1
  __int64 v28; // r0@1
  __int64 v29; // r2@1
  int v30; // r0@1
  int v31; // r0@1
  int result; // r0@1

  _R4 = a1;
  _R6 = a4;
  __asm { VLDR            S0, [R4,#0x6C] }
  _R5 = a3;
  __asm { VLDR            S2, [R4,#0x70] }
  _R7 = a2;
  __asm
  {
    VMUL.F32        S0, S0, S0
    VLDR            S4, [R4,#0x74]
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VADD.F32        S0, S0, S4
    VMOV            R0, S0
  }
  _R0 = mce::Math::fastInvSqrt(_R0, a2);
    VLDR            S0, =0.0075
    VMOV            S22, R0
    VLDR            S2, [SP,#0x40+arg_4]
    VMOV            S16, R7
    VMOV            S18, R6
    VMUL.F32        S20, S2, S0
  v16 = (Level *)Entity::getLevel((Entity *)LODWORD(_R4));
  v17 = Level::getRandom(v16);
  v18 = (Random *)v17;
  _R0 = Random::nextGaussian((Random *)v17);
  __asm { VMOV            S24, R0 }
  _R7 = Random::nextGaussian(v18);
  _R0 = Random::nextGaussian(v18);
    VMOV            S0, R0
    VMUL.F32        S2, S22, S16
    VMUL.F32        S4, S24, S20
    VMUL.F32        S6, S22, S18
    VMUL.F32        S0, S0, S20
    VMOV            S10, R5
    VMOV            S12, R7
    VADD.F32        S2, S4, S2
    VLDR            S4, [SP,#0x40+arg_0]
    VADD.F32        S0, S0, S6
    VMUL.F32        S2, S2, S4
    VMUL.F32        S0, S0, S4
    VMUL.F32        S6, S2, S2
    VSTR            S2, [R4,#0x6C]
    VMUL.F32        S8, S0, S0
    VADD.F32        S6, S8, S6
    VMUL.F32        S8, S22, S10
    VMUL.F32        S10, S12, S20
    VMOV            R0, S6
    VADD.F32        S6, S10, S8
    VMUL.F32        S4, S6, S4
    VSTR            S4, [R4,#0x70]
    VSTR            S0, [R4,#0x74]
  v24 = mce::Math::sqrt(_R0, v23);
  LODWORD(v25) = *(_DWORD *)(LODWORD(_R4) + 108);
  HIDWORD(v25) = *(_DWORD *)(LODWORD(_R4) + 116);
  v27 = mce::Math::atan2(v25, v26);
  v28 = __PAIR__(v24, mce::operator*(v27, 1113927392));
  *(_DWORD *)(LODWORD(_R4) + 124) = v28;
  *(_DWORD *)(LODWORD(_R4) + 132) = v28;
  LODWORD(v28) = *(_DWORD *)(LODWORD(_R4) + 112);
  v30 = mce::Math::atan2(v28, v29);
  v31 = mce::operator*(v30, 1113927392);
  *(_DWORD *)(LODWORD(_R4) + 120) = v31;
  *(_DWORD *)(LODWORD(_R4) + 128) = v31;
  result = 0;
  *(_DWORD *)(LODWORD(_R4) + 3444) = 0;
  return result;
}


int __fastcall FishingHook::_getWaterPercentage(FishingHook *this)
{
  const BlockPos *v7; // r5@1
  signed int v10; // r0@3
  int result; // r0@8
  int v12; // [sp+0h] [bp-58h]@0
  int v13; // [sp+4h] [bp-54h]@0
  int v14; // [sp+8h] [bp-50h]@0
  char v15; // [sp+Ch] [bp-4Ch]@3

  _R4 = this;
  _R0 = *((_DWORD *)this + 855);
  __asm
  {
    VMOV            S0, R0
    VCVT.F32.S32    S16, S0
  }
  v7 = (const BlockPos *)Entity::getRegion(_R4);
  if ( *((_DWORD *)_R4 + 855) < 1 )
    __asm { VLDR            S16, =0.0 }
  else
    __asm { VMOV.F32        S18, #1.0 }
    _R7 = 0;
    __asm
    {
      VDIV.F32        S20, S18, S16
      VLDR            S16, =0.0
    }
    do
      __asm
      {
        VMOV            S0, R7
        VCVT.F32.S32    S0, S0
        VLDR            S2, [R4,#0x10C]
        VLDR            S6, [R4,#0x118]
      }
      HIDWORD(_R2) = *((_DWORD *)_R4 + 68);
        VSUB.F32        S6, S6, S2
        VLDR            S4, [R4,#0x114]
        VLDR            S8, [R4,#0x11C]
        VSTR            S4, [SP,#0x58+var_58]
        VMUL.F32        S10, S0, S20
        VADD.F32        S0, S0, S18
        VMUL.F32        S10, S10, S6
        VMUL.F32        S0, S0, S20
        VADD.F32        S10, S10, S2
        VMUL.F32        S0, S0, S6
        VMOV            R2, S10
        VADD.F32        S0, S0, S2
        VSTR            S0, [SP,#0x58+var_54]
        VSTR            S8, [SP,#0x58+var_50]
      AABB::AABB(COERCE_FLOAT(&v15), *((float *)_R4 + 66), _R2, v12, v13, v14);
      v10 = BlockSource::containsMaterial(v7, (mce::Math **)&v15, 5);
      __asm { VADD.F32        S0, S16, S20 }
      ++_R7;
      if ( v10 )
        __asm { VMOVNE.F32      S16, S0 }
    while ( _R7 < *((_DWORD *)_R4 + 855) );
  __asm { VMOV            R0, S16 }
  return result;
}


signed int __fastcall FishingHook::_lerpServerPos(FishingHook *this)
{
  signed int result; // r0@2
  float v16; // [sp+4h] [bp-24h]@2

  _R4 = this;
  _R0 = *((_DWORD *)this + 867);
  if ( _R0 < 1 )
  {
    result = 0;
  }
  else
    __asm
    {
      VMOV            S2, R0
      VMOV.F32        S0, #1.0
      VCVT.F32.S32    S2, S2
      VDIV.F32        S16, S0, S2
    }
    _R5 = (*(int (__fastcall **)(FishingHook *))(*(_DWORD *)_R4 + 52))(_R4);
    _R0 = (*(int (__fastcall **)(FishingHook *))(*(_DWORD *)_R4 + 52))(_R4);
    _R1 = (int)_R4 + 3480;
    _R2 = (int)_R4 + 3472;
      VLDR            S0, [R0]
      VLDR            S2, [R0,#4]
      VLDR            S4, [R0,#8]
    _R0 = (int)_R4 + 3476;
      VLDR            S6, [R2]
      VLDR            S8, [R0]
      VLDR            S10, [R1]
      VSUB.F32        S0, S6, S0
      VSUB.F32        S2, S8, S2
      VLDR            S6, [R5]
      VSUB.F32        S4, S10, S4
      VLDR            S8, [R5,#4]
      VLDR            S10, [R5,#8]
    _R5 = (int)_R4 + 3500;
      VMUL.F32        S0, S0, S16
      VMUL.F32        S2, S2, S16
      VMUL.F32        S4, S4, S16
      VADD.F32        S0, S6, S0
      VADD.F32        S2, S8, S2
      VADD.F32        S4, S10, S4
      VSTR            S0, [SP,#0x28+var_24]
      VSTR            S2, [SP,#0x28+var_20]
      VSTR            S4, [SP,#0x28+var_1C]
      VLDR            S0, [R4,#0x7C]
      VLDR            S2, [R5]
      VSUB.F32        S0, S2, S0
      VMOV            R0, S0
    _R0 = mce::Math::wrapDegrees(_R0, COERCE_FLOAT((FishingHook *)((char *)_R4 + 3480)));
      VMOV            S0, R0
      VLDR            S2, [R4,#0x7C]
      VADD.F32        S0, S2, S0
      VSTR            S0, [R4,#0x7C]
      VLDR            S0, [R4,#0x78]
      VSUB.F32        S2, S2, S0
      VSTR            S0, [R4,#0x78]
    --*((_DWORD *)_R4 + 867);
    (*(void (__fastcall **)(FishingHook *, float *))(*(_DWORD *)_R4 + 48))(_R4, &v16);
    (*(void (__fastcall **)(FishingHook *, char *))(*(_DWORD *)_R4 + 72))(_R4, (char *)_R4 + 120);
    result = 1;
  return result;
}


void __fastcall FishingHook::reloadHardcoded(float a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v4; // r4@1
  int v5; // r5@1
  unsigned int v6; // r11@2
  unsigned __int64 v7; // kr00_8@2
  unsigned int v8; // r4@2
  int v9; // r8@2
  int v10; // r9@3
  _DWORD *v11; // r10@3
  int v12; // r6@3
  _DWORD *v13; // r1@5
  size_t v14; // r2@5
  int v15; // r7@7
  Entity *v16; // r7@9
  __int64 v17; // r4@14
  int v18; // r0@14
  unsigned int v19; // r1@14
  unsigned int v20; // r1@16
  unsigned int v21; // r0@16
  int v22; // r4@21
  int v23; // r1@21
  float v35; // r1@25
  float v40; // r1@25
  int v42; // r4@25
  int v43; // r1@25
  int v49; // ST00_4@25
  unsigned int *v50; // r2@32
  signed int v51; // r1@34
  Entity *v52; // [sp+8h] [bp-50h]@3
  int v53; // [sp+Ch] [bp-4Ch]@2
  void *s1; // [sp+14h] [bp-44h]@2
  unsigned int v55; // [sp+18h] [bp-40h]@21
  unsigned int v56; // [sp+1Ch] [bp-3Ch]@21

  _R9 = a1;
  v4 = a3;
  v5 = a2;
  if ( !*(_BYTE *)(LODWORD(a1) + 3081) )
  {
    (*(void (__fastcall **)(_DWORD, signed int, signed int))(*(_DWORD *)LODWORD(a1) + 680))(
      LODWORD(a1),
      1056964608,
      1056964608);
    sub_21E94B4(&s1, "other");
    v6 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
    v53 = v5;
    v7 = *v4;
    v8 = v6 % (*v4 >> 32);
    v9 = *(_DWORD *)(v7 + 4 * v8);
    if ( v9 )
    {
      v52 = (Entity *)LODWORD(_R9);
      v10 = *(_DWORD *)v9;
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
        v15 = *(_DWORD *)v10;
        if ( *(_DWORD *)v10 )
          v12 = *(_DWORD *)(v15 + 32);
          v9 = v10;
          v10 = *(_DWORD *)v10;
          if ( *(_DWORD *)(v15 + 32) % HIDWORD(v7) == v8 )
            continue;
        v16 = 0;
        _R9 = *(float *)&v52;
        goto LABEL_11;
      }
      _R9 = *(float *)&v52;
      if ( v9 )
        if ( *(_DWORD *)v9 )
          v16 = *(Entity **)(*(_DWORD *)v9 + 24);
        else
          v16 = 0;
      else
    }
    else
      v16 = 0;
LABEL_11:
    if ( v11 - 3 != &dword_28898C0 )
      v50 = v11 - 1;
      if ( &pthread_create )
        __dmb();
        do
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
        v51 = (*v50)--;
      if ( v51 <= 0 )
        j_j_j_j__ZdlPv_9(v11 - 3);
    if ( v16 && !Entity::isRemoved((Entity *)LODWORD(_R9)) )
      v17 = *(_QWORD *)Entity::getUniqueID(v16);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)LODWORD(_R9) + 348))(LODWORD(_R9));
      v18 = SynchedEntityData::_get((SynchedEntityData *)(LODWORD(_R9) + 176), 5);
      v19 = *(_DWORD *)(v18 + 4);
      if ( (unsigned __int8)v19 == 7 && *(_QWORD *)(v18 + 16) != v17 )
        *(_QWORD *)(v18 + 16) = v17;
        *(_BYTE *)(v18 + 8) = 1;
        v20 = v19 >> 16;
        v21 = *(_WORD *)(LODWORD(_R9) + 188);
        if ( v21 >= v20 )
          LOWORD(v21) = v20;
        *(_WORD *)(LODWORD(_R9) + 188) = v21;
        if ( *(_WORD *)(LODWORD(_R9) + 190) > v20 )
          LOWORD(v20) = *(_WORD *)(LODWORD(_R9) + 190);
        *(_WORD *)(LODWORD(_R9) + 190) = v20;
      v22 = Entity::getLevel((Entity *)LODWORD(_R9));
      (*(void (__fastcall **)(unsigned int *, _DWORD))(*(_DWORD *)LODWORD(_R9) + 500))(&v55, LODWORD(_R9));
      *(float *)(Level::fetchEntity(v22, v23, v55, v56, 0) + 532) = _R9;
      _ZF = v53 == 2;
      if ( v53 == 2 )
        _ZF = *(_BYTE *)(LODWORD(_R9) + 3081) == 0;
      if ( _ZF )
        __asm { VLDR            S0, [R9,#0x7C] }
        _R0 = &mce::Math::DEGRAD;
        __asm
          VLDR            S16, [R0]
          VMUL.F32        S0, S16, S0
          VMOV            R0, S0
        _R0 = mce::Math::sin(_R0, *(float *)&v23);
          VLDR            S0, [R9,#0x78]
          VMOV            S18, R0
          VMUL.F32        S0, S0, S16
          VMOV            R1, S0
        _R0 = mce::Math::cos(_R1, *(float *)&_R1);
        __asm { VMOV            S0, R0 }
        _R4 = LODWORD(_R9) + 3412;
          VMUL.F32        S0, S18, S0
          VLDR            S2, [R4]
          VNMUL.F32       S0, S0, S2
          VSTR            S0, [R9,#0x6C]
          VLDR            S0, [R9,#0x7C]
        _R0 = mce::Math::cos(_R0, v35);
          VMOV            S0, R0
          VMUL.F32        S0, S0, S18
          VMUL.F32        S0, S0, S2
          VSTR            S0, [R9,#0x74]
        _R0 = mce::Math::sin(_R0, v40);
          VSTR            S0, [R9,#0x70]
        v42 = Entity::getLevel((Entity *)LODWORD(_R9));
        (*(void (__fastcall **)(unsigned int *, _DWORD))(*(_DWORD *)LODWORD(_R9) + 500))(&v55, LODWORD(_R9));
        _R0 = Level::fetchEntity(v42, v43, v55, v56, 0);
          VLDR            S0, [R0,#0x6C]
          VLDR            S2, [R9,#0x6C]
          VADD.F32        S0, S2, S0
          VLDR            S2, [R0,#0x70]
          VLDR            S4, [R9,#0x70]
          VADD.F32        S2, S4, S2
          VSTR            S2, [R9,#0x70]
          VMOV            R2, S2
          VLDR            S4, [R0,#0x74]
        _R0 = LODWORD(_R9) + 3416;
          VLDR            S6, [R9,#0x74]
          VADD.F32        S4, S6, S4
          VMOV            R3, S4
          VSTR            S4, [R9,#0x74]
          VLDR            S0, [R0]
          VSTR            S0, [SP,#0x58+var_58]
        FishingHook::shoot(_R9, _R1, _R2, _R3, v49, 1065353216);
  }
}


__int64 __fastcall FishingHook::getTargetUniqueID(FishingHook *this, int a2)
{
  FishingHook *v2; // r4@1
  __int64 result; // r0@1

  v2 = this;
  result = SynchedEntityData::getInt64((SynchedEntityData *)(a2 + 176), 6);
  *(_QWORD *)v2 = result;
  return result;
}


signed int __fastcall FishingHook::retrieve(FishingHook *this)
{
  FishingHook *v1; // r4@1
  SynchedEntityData *v2; // r6@1
  const Vec3 *v3; // r11@1
  Level *v4; // r0@1
  int v5; // r7@1
  int v6; // r5@1
  __int64 v7; // r0@1
  int v8; // r0@1
  Entity *v9; // r6@1
  signed int v10; // r6@4
  int v11; // r5@9
  int v12; // r1@9
  int v13; // r0@9
  int v14; // r5@14
  int v15; // r1@14
  Entity *v16; // r10@14
  int v17; // r5@15
  int v19; // r1@15
  Player *v20; // r0@15
  Player *v21; // r7@15
  ItemInstance *v22; // r6@16
  void *v27; // r0@24
  const ItemInstance *v28; // r2@24
  int (__fastcall *v29)(Player *, int); // r5@26
  int v30; // r0@26
  AttributeInstance *v31; // r0@26
  void *v33; // r0@26
  Level *v34; // r0@28
  LootTableContext::Builder *v35; // r0@28
  int v37; // r0@28
  char *v38; // r8@28
  Level *v39; // r0@28
  char *v40; // r6@28
  int v41; // r0@28
  int v42; // r0@28
  Random *v43; // r6@28
  void *v44; // r0@28
  Level *v45; // r0@30
  char *v46; // r0@30
  const ItemInstance *v47; // r5@30
  const ItemInstance *v48; // r6@30 OVERLAPPED
  Level *v49; // r0@31
  Spawner *v50; // r7@31
  BlockSource *v51; // r0@31
  Entity *v52; // r0@31
  void (__fastcall *v53)(Entity *, unsigned int); // r7@31
  Level *v54; // r0@31
  char *v55; // r0@31
  unsigned int v56; // r0@31
  int v57; // r5@32 OVERLAPPED
  void *v58; // r0@33
  void *v59; // r0@35
  int v60; // r0@37
  void *v61; // r0@45
  void *v62; // r5@46
  int v63; // r5@51
  unsigned int *v65; // r2@54
  signed int v66; // r1@56
  unsigned int *v67; // r2@58
  signed int v68; // r1@60
  const ItemInstance *v69; // [sp+8h] [bp-98h]@30
  const ItemInstance *v70; // [sp+Ch] [bp-94h]@30
  int v71; // [sp+18h] [bp-88h]@28
  char v72; // [sp+1Ch] [bp-84h]@28
  char v73; // [sp+30h] [bp-70h]@28
  void *v74; // [sp+44h] [bp-5Ch]@47
  int v75; // [sp+48h] [bp-58h]@47
  void *ptr; // [sp+4Ch] [bp-54h]@45
  int v77; // [sp+50h] [bp-50h]@47
  int v78; // [sp+64h] [bp-3Ch]@26
  unsigned int v79; // [sp+68h] [bp-38h]@9
  unsigned int v80; // [sp+6Ch] [bp-34h]@9

  v1 = this;
  v2 = (FishingHook *)((char *)this + 176);
  v3 = (const Vec3 *)(*(int (**)(void))(*(_DWORD *)this + 52))();
  v4 = (Level *)Entity::getLevel(v1);
  v5 = Level::isClientSide(v4);
  v6 = Entity::getLevel(v1);
  v7 = SynchedEntityData::getInt64(v2, 6);
  v8 = Level::fetchEntity(v6, SHIDWORD(v7), v7, HIDWORD(v7), 0);
  v9 = (Entity *)v8;
  if ( v5 == 1 )
  {
    if ( v8 && (*(int (**)(void))(*(_DWORD *)v8 + 316))() )
    {
      v10 = 3;
    }
    else
      v10 = 0;
      if ( *((_DWORD *)v1 + 865) >= 1 )
      {
        v11 = Entity::getLevel(v1);
        (*(void (__fastcall **)(unsigned int *, FishingHook *))(*(_DWORD *)v1 + 500))(&v79, v1);
        v13 = Level::fetchEntity(v11, v12, v79, v80, 0);
        *((_DWORD *)v1 + 865) = 0;
        v10 = v13 != 0;
      }
    if ( *((_BYTE *)v1 + 3424) )
      v10 = 2;
  }
  else
    if ( v8 && (*(int (**)(void))(*(_DWORD *)v8 + 316))() == 1 )
      FishingHook::_pullCloser(v1, v9, 0.1);
        v14 = Entity::getLevel(v1);
        v16 = (Entity *)Level::fetchEntity(v14, v15, v79, v80, 0);
        if ( v16 )
        {
          v17 = Entity::getLevel(v1);
          (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v1 + 500))(&v79, v1);
          _R6 = 0;
          v20 = (Player *)Level::fetchEntity(v17, v19, v79, v80, 0);
          v21 = v20;
          if ( v20 )
          {
            v22 = (ItemInstance *)Player::getSelectedItem(v20);
            if ( *((_BYTE *)v22 + 15) )
            {
              if ( *(_DWORD *)v22 )
              {
                if ( ItemInstance::isNull(v22) )
                {
                  _R6 = 0;
                }
                else if ( *((_BYTE *)v22 + 14) )
                  v27 = Player::getSelectedItem(v21);
                  _R6 = EnchantUtils::getEnchantLevel((EnchantUtils *)0x17, (int)v27, v28);
                else
              }
              else
                _R6 = 0;
            }
            else
              _R6 = 0;
            v29 = *(int (__fastcall **)(Player *, int))(*(_DWORD *)v21 + 1004);
            sub_21E94B4((void **)&v78, "minecraft:luck");
            v30 = Attribute::getByName((AttributeCollection *)&v78);
            v31 = (AttributeInstance *)v29(v21, v30);
            _R7 = AttributeInstance::getCurrentValue(v31);
            v33 = (void *)(v78 - 12);
            if ( (int *)(v78 - 12) != &dword_28898C0 )
              v67 = (unsigned int *)(v78 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v68 = __ldrex(v67);
                while ( __strex(v68 - 1, v67) );
                v68 = (*v67)--;
              if ( v68 <= 0 )
                j_j_j_j__ZdlPv_9(v33);
            __asm { VMOV            S16, R7 }
          }
          else
            __asm { VLDR            S16, =0.0 }
          v34 = (Level *)Entity::getLevel(v1);
          v35 = (LootTableContext::Builder *)LootTableContext::Builder::Builder((LootTableContext::Builder *)&v72, v34);
          __asm
            VMOV            S0, R6
            VCVT.F32.S32    S0, S0
            VADD.F32        S0, S0, S16
            VMOV            R1, S0
          v37 = LootTableContext::Builder::withLuck(v35, _R1);
          v38 = &v73;
          LootTableContext::Builder::create((LootTableContext::Builder *)&v73, v37);
          v39 = (Level *)Entity::getLevel(v1);
          v40 = Level::getLootTables(v39);
          sub_21E94B4((void **)&v71, "loot_tables/gameplay/fishing.json");
          v41 = Entity::getLevel(v1);
          v42 = (*(int (**)(void))(*(_DWORD *)v41 + 120))();
          v43 = (Random *)LootTables::lookupByName((int)v40, (unsigned int *)&v71, v42);
          v44 = (void *)(v71 - 12);
          if ( (int *)(v71 - 12) != &dword_28898C0 )
            v65 = (unsigned int *)(v71 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v66 = __ldrex(v65);
              while ( __strex(v66 - 1, v65) );
              v66 = (*v65)--;
            if ( v66 <= 0 )
              j_j_j_j__ZdlPv_9(v44);
          if ( v43 )
            v45 = (Level *)Entity::getLevel(v1);
            v46 = Level::getRandom(v45);
            LootTable::getRandomItems((LootTable *)&v69, v43, (LootTableContext *)v46, (LootTableContext *)&v73);
            v47 = v70;
            v48 = v69;
            if ( v69 != v70 )
                v49 = (Level *)Entity::getLevel(v1);
                v50 = (Spawner *)Level::getSpawner(v49);
                v51 = (BlockSource *)Entity::getRegion(v16);
                v52 = (Entity *)Spawner::spawnItem(v50, v51, v48, v1, v3, 0);
                FishingHook::_pullCloser(v1, v52, 0.1);
                v53 = *(void (__fastcall **)(Entity *, unsigned int))(*(_DWORD *)v16 + 1452);
                v54 = (Level *)Entity::getLevel(v1);
                v55 = Level::getRandom(v54);
                v56 = Random::_genRandInt32((Random *)v55);
                v53(v16, v56 % 5 + 1);
                v48 = (const ItemInstance *)((char *)v48 + 72);
              while ( v47 != v48 );
              *(_QWORD *)(&v48 - 1) = *(_QWORD *)&v69;
              v38 = &v73;
              if ( v69 != v70 )
                  v58 = *(void **)(v57 + 52);
                  if ( v58 )
                    operator delete(v58);
                  v59 = *(void **)(v57 + 36);
                  if ( v59 )
                    operator delete(v59);
                  v60 = *(_DWORD *)(v57 + 8);
                  if ( v60 )
                    (*(void (**)(void))(*(_DWORD *)v60 + 4))();
                  *(_DWORD *)(v57 + 8) = 0;
                  v57 += 72;
                while ( v48 != (const ItemInstance *)v57 );
                v48 = v69;
            if ( v48 )
              operator delete((void *)v48);
            v10 = 1;
            v10 = 0;
          v61 = ptr;
          if ( ptr )
            do
              v62 = *(void **)v61;
              operator delete(v61);
              v61 = v62;
            while ( v62 );
          _aeabi_memclr4(v74, 4 * v75);
          ptr = 0;
          v77 = 0;
          if ( v74 && v38 + 44 != v74 )
            operator delete(v74);
        }
    v63 = *((_BYTE *)v1 + 3424);
    (*(void (__fastcall **)(FishingHook *))(*(_DWORD *)v1 + 44))(v1);
    if ( v63 )
  return v10;
}


signed int __fastcall FishingHook::_updateServer(FishingHook *this)
{
  FishingHook *v1; // r4@1
  signed int result; // r0@1

  v1 = this;
  result = FishingHook::_serverNibble(this);
  if ( !result )
  {
    *((_DWORD *)v1 + 866) = FishingHook::_getServerFishSpeed(v1);
    result = FishingHook::_serverHooked(v1);
    if ( !result )
      result = j_j_j__ZN11FishingHook12_serverLuredEv(v1);
  }
  return result;
}


int __fastcall FishingHook::_updateGravity(FishingHook *this)
{
  int v2; // r0@1
  BlockSource *v8; // r6@5
  int v9; // r0@5
  int *v10; // r5@5
  int *v11; // r6@5
  signed int v13; // r0@10
  int result; // r0@14
  float *v16; // r1@15
  float v17; // [sp+0h] [bp-50h]@16
  float v18; // [sp+4h] [bp-4Ch]@15
  int v19; // [sp+8h] [bp-48h]@5
  int v20; // [sp+Ch] [bp-44h]@5
  int v21; // [sp+10h] [bp-40h]@5
  char v22; // [sp+14h] [bp-3Ch]@5
  float v23; // [sp+18h] [bp-38h]@5
  int v24; // [sp+1Ch] [bp-34h]@5

  _R4 = this;
  v2 = *((_DWORD *)this + 54);
  if ( (_BYTE)v2 )
  {
    __asm { VMOV.F32        S16, #0.5 }
  }
  else
    __asm
    {
      VMOV.F32        S0, #0.5
      VLDR            S16, =0.92
    }
    if ( v2 & 0xFF0000 )
      __asm { VMOVNE.F32      S16, S0 }
  _R7 = (int)_R4 + 3504;
  __asm
    VLDR            D0, =0.100000001
    VLDR            D1, [R7]
    VADD.F64        D0, D1, D0
    VSTR            D0, [R7]
  v8 = (BlockSource *)Entity::getRegion(_R4);
  v9 = (*(int (__fastcall **)(FishingHook *))(*(_DWORD *)_R4 + 52))(_R4);
  BlockPos::BlockPos((int)&v22, v9);
  v10 = (int *)BlockSource::getMaterial(v8, (const BlockPos *)&v22);
  v19 = *(_DWORD *)&v22;
  v20 = LODWORD(v23) + 1;
  v21 = v24;
  v11 = (int *)BlockSource::getMaterial(v8, (const BlockPos *)&v19);
  if ( Material::isType(v10, 5) == 1 )
    if ( Material::isType(v11, 5) )
      Material::isType(v11, 5);
      __asm
      {
        VLDR            S20, =0.0
        VLDR            S0, =1.01
        VMOV.F32        S18, S20
      }
      if ( !_ZF )
        __asm { VMOVNE.F32      S18, S0 }
    else
        VLDR            D0, [R7]
        VMOV            R0, R1, D0
      _R0 = COERCE_UNSIGNED_INT64(sin(_R0));
        VMOV            D0, R0, R1
        VLDR            S4, [SP,#0x50+var_38]
        VMOV.F32        S2, #1.0
        VLDR            S6, [R4,#0x4C]
        VCVT.F32.F64    S0, D0
        VCVT.F32.S32    S4, S4
        VSUB.F32        S6, S2, S6
        VADD.F32        S0, S0, S2
        VLDR            S2, =0.035
        VADD.F32        S18, S6, S4
        VMUL.F32        S20, S0, S2
    v13 = Material::isType(v10, 6);
    __asm { VLDR            S18, =0.0 }
    if ( v13 == 1 )
      FishingHook::retrieve(_R4);
    __asm { VMOV.F32        S20, S18 }
  result = FishingHook::_getWaterPercentage(_R4);
    VLDR            S0, =0.08
    VMOV            S2, R0
    VCMPE.F32       S18, #0.0
    VMUL.F32        S0, S2, S0
    VLDR            S2, =-0.04
    VMRS            APSR_nzcv, FPSCR
    VADD.F32        S0, S0, S2
    VLDR            S2, [R4,#0x70]
    VSTR            S0, [R4,#0x70]
  if ( !_ZF )
      VLDR            S2, =-0.1
      VLDR            S4, =0.8
    v16 = &v18;
      VADD.F32        S2, S18, S2
      VLDR            S6, =0.05
      VMUL.F32        S0, S0, S4
      VLDR            S4, =0.15
      VSUB.F32        S2, S2, S20
      VADD.F32        S0, S0, S6
      VMUL.F32        S2, S2, S4
      VLDR            S4, =0.9
      VSTR            S0, [SP,#0x50+var_50]
      VMUL.F32        S16, S16, S4
      VCMPE.F32       S2, S0
      VSTR            S2, [SP,#0x50+var_4C]
      VMRS            APSR_nzcv, FPSCR
    if ( !(_NF ^ _VF) )
      v16 = &v17;
    result = *(_DWORD *)v16;
    *((float *)_R4 + 28) = *v16;
    __asm { VMOV            S0, R0 }
    VLDR            S2, [R4,#0x6C]
    VMUL.F32        S0, S0, S16
    VMUL.F32        S2, S2, S16
    VSTR            S2, [R4,#0x6C]
    VLDR            S0, [R4,#0x74]
    VSTR            S0, [R4,#0x74]
  return result;
}


int __fastcall FishingHook::lerpTo(int result, int a2, int a3, int a4)
{
  *(_DWORD *)(result + 3468) = a4;
  *(_DWORD *)(result + 3472) = *(_DWORD *)a2;
  *(_DWORD *)(result + 3476) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 3480) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(result + 3496) = *(_DWORD *)a3;
  *(_DWORD *)(result + 3500) = *(_DWORD *)(a3 + 4);
  *(_DWORD *)(result + 108) = *(_DWORD *)(result + 3484);
  *(_DWORD *)(result + 112) = *(_DWORD *)(result + 3488);
  *(_DWORD *)(result + 116) = *(_DWORD *)(result + 3492);
  return result;
}


__int64 __fastcall FishingHook::getSourceUniqueID(FishingHook *this, int a2)
{
  FishingHook *v2; // r4@1
  __int64 result; // r0@1

  v2 = this;
  result = SynchedEntityData::getInt64((SynchedEntityData *)(a2 + 176), 5);
  *(_QWORD *)v2 = result;
  return result;
}


int __fastcall FishingHook::getTarget(FishingHook *this)
{
  FishingHook *v1; // r4@1
  int v2; // r5@1
  __int64 v3; // r0@1

  v1 = this;
  v2 = Entity::getLevel(this);
  v3 = SynchedEntityData::getInt64((FishingHook *)((char *)v1 + 176), 6);
  return Level::fetchEntity(v2, SHIDWORD(v3), v3, HIDWORD(v3), 0);
}


int __fastcall FishingHook::getOwner(FishingHook *this)
{
  FishingHook *v1; // r4@1
  int v2; // r5@1
  int v3; // r1@1
  unsigned int v5; // [sp+8h] [bp-18h]@1
  unsigned int v6; // [sp+Ch] [bp-14h]@1

  v1 = this;
  v2 = Entity::getLevel(this);
  (*(void (__fastcall **)(unsigned int *, FishingHook *))(*(_DWORD *)v1 + 500))(&v5, v1);
  return Level::fetchEntity(v2, v3, v5, v6, 0);
}


void __fastcall FishingHook::reloadHardcoded(float a1, int a2, unsigned __int64 *a3)
{
  FishingHook::reloadHardcoded(a1, a2, a3);
}
