

int __fastcall TemptGoal::canUse(TemptGoal *this)
{
  int *v1; // r7@0
  int *v2; // r11@0
  TemptGoal *v3; // r5@1
  signed int v4; // r0@1
  int v5; // r8@2
  int v6; // r6@4
  int v7; // r4@4
  int v8; // r0@4
  _QWORD *v9; // r0@4
  _QWORD *v10; // r4@4
  int v11; // r1@4 OVERLAPPED
  int v12; // r2@4 OVERLAPPED
  signed int v13; // r0@4
  void *v14; // r0@6
  signed int v15; // r4@7
  unsigned int v16; // r9@8
  int v17; // r10@8
  _DWORD *v18; // r6@9
  int v19; // r0@10
  int *v20; // r1@10
  int *v22; // r2@11
  int v28; // r9@18
  int v29; // r0@18
  int v30; // r4@18
  int v31; // r0@18
  bool v33; // zf@22
  signed int v34; // r0@25
  int v35; // t1@25
  bool v36; // zf@30
  int v37; // r0@33
  int v38; // r0@34
  int v39; // r0@38
  unsigned int v40; // r2@39
  unsigned int v41; // r3@39
  int v42; // r0@40
  Player *v43; // r0@43
  ItemInstance *v44; // r4@44
  signed int v45; // r6@47
  _WORD *v46; // r7@52
  _WORD *v47; // r9@52
  signed int v48; // r0@53
  int v49; // t1@53
  int v51; // [sp+4h] [bp-4Ch]@4
  int v52; // [sp+8h] [bp-48h]@4
  int v53; // [sp+Ch] [bp-44h]@4
  char v54; // [sp+10h] [bp-40h]@4

  v3 = this;
  v4 = *((_DWORD *)this + 16);
  if ( v4 < 1 )
  {
    v5 = 0;
    if ( j_Mob::getNavigation(*((Mob **)v3 + 2)) )
    {
      v6 = *((_DWORD *)v3 + 19);
      v7 = j_Entity::getRegion(*((Entity **)v3 + 2));
      v8 = *((_DWORD *)v3 + 2);
      v51 = v6;
      v52 = v6;
      v53 = v6;
      j_AABB::grow((AABB *)&v54, (const Vec3 *)(v8 + 264), (int)&v51);
      v9 = (_QWORD *)j_BlockSource::fetchEntities(v7, 319, (int)&v54, 0);
      v10 = v9;
      *(_QWORD *)&v11 = *v9;
      v13 = v12 - v11;
      if ( 0 != (v12 - v11) >> 2 )
      {
        if ( (unsigned int)(v13 >> 2) >= 0x40000000 )
          sub_21E57F4();
        v14 = j_operator new(v13);
        *(_QWORD *)&v11 = *v10;
        v5 = (int)v14;
      }
      v15 = v12 - v11;
      if ( (v12 - v11) >> 2 )
        v16 = v15 >> 2;
        j___aeabi_memmove4_0(v5, v11);
        v17 = v5 + 4 * (v15 >> 2);
        sub_1A3CC90(v5, (_DWORD *)(v5 + 4 * v16), 2 * (31 - __clz(v16)), (int)v3);
        if ( v15 < 65 )
        {
          sub_1A3D08A((_DWORD *)v5, (_DWORD *)(v5 + 4 * v16), (int)v3);
          v18 = (_DWORD *)v5;
          goto LABEL_18;
        }
        v1 = (int *)(v5 + 64);
        sub_1A3D08A((_DWORD *)v5, (_DWORD *)(v5 + 64), (int)v3);
        v18 = (_DWORD *)v5;
        if ( v16 == 16 )
          goto LABEL_65;
        v19 = v5 + 60;
        v20 = (int *)(v5 + 64);
        do
          _R12 = *v20;
          v22 = (int *)v19;
          __asm
          {
            VLDR            S0, [R12,#0x48]
            VLDR            S2, [R12,#0x4C]
            VLDR            S4, [R12,#0x50]
          }
          while ( 1 )
            _R6 = *v22;
            _R4 = *((_DWORD *)v3 + 2);
            __asm
            {
              VLDR            S6, [R6,#0x48]
              VLDR            S12, [R4,#0x48]
              VLDR            S8, [R6,#0x4C]
              VLDR            S14, [R4,#0x4C]
              VSUB.F32        S6, S12, S6
              VSUB.F32        S12, S12, S0
              VLDR            S10, [R6,#0x50]
              VSUB.F32        S8, S14, S8
              VLDR            S1, [R4,#0x50]
              VSUB.F32        S14, S14, S2
              VSUB.F32        S10, S1, S10
              VSUB.F32        S1, S1, S4
              VMUL.F32        S6, S6, S6
              VMUL.F32        S12, S12, S12
              VMUL.F32        S8, S8, S8
              VMUL.F32        S14, S14, S14
              VMUL.F32        S10, S10, S10
              VADD.F32        S6, S8, S6
              VMUL.F32        S8, S1, S1
              VADD.F32        S12, S14, S12
              VADD.F32        S6, S6, S10
              VADD.F32        S8, S12, S8
              VCMPE.F32       S8, S6
              VMRS            APSR_nzcv, FPSCR
            }
            if ( !(_NF ^ _VF) )
              break;
            *v20 = _R6;
            v20 = v22;
            --v22;
          ++v1;
          v19 += 4;
          *v20 = _R12;
          v20 = v1;
        while ( v1 != (int *)v17 );
        if ( v16 )
LABEL_65:
LABEL_18:
            v28 = *v18;
            v29 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v18 + 908))(*v18);
            v30 = v29;
            v31 = *(_BYTE *)(v29 + 15);
            _ZF = v31 == 0;
            if ( v31 )
              _ZF = *(_DWORD *)v30 == 0;
            if ( !_ZF && !j_ItemInstance::isNull((ItemInstance *)v30) )
              v33 = *(_BYTE *)(v30 + 14) == 0;
              if ( *(_BYTE *)(v30 + 14) )
              {
                v2 = (int *)(*((_QWORD *)v3 + 10) >> 32);
                v1 = (int *)*((_QWORD *)v3 + 10);
                v33 = v1 == v2;
              }
              if ( !v33 )
                break;
LABEL_27:
            ++v18;
            if ( v18 == (_DWORD *)v17 )
              goto LABEL_37;
            v34 = j_ItemInstance::getId((ItemInstance *)v30);
            v35 = *(_WORD *)v1;
            v1 = (int *)((char *)v1 + 2);
            if ( v34 == v35 )
            if ( v2 == v1 )
              goto LABEL_27;
          if ( *((_DWORD *)v3 + 5) != v28 )
            v36 = v28 == 0;
            if ( v28 )
              v36 = *(_DWORD *)(v28 + 3092) == 0;
            if ( v36 )
              *((_DWORD *)v3 + 5) = 0;
              *((_DWORD *)v3 + 6) = -1;
              *((_DWORD *)v3 + 7) = -1;
              *((_BYTE *)v3 + 36) = 0;
              v38 = *((_DWORD *)v3 + 8);
              if ( v38 )
                j_Level::unregisterTemporaryPointer(v38, (unsigned int)v3 + 16);
              *((_DWORD *)v3 + 8) = 0;
            else
              *((_QWORD *)v3 + 3) = *(_QWORD *)j_Entity::getUniqueID((Entity *)v28);
              v37 = *(_DWORD *)(v28 + 3092);
              *((_DWORD *)v3 + 8) = v37;
              j_Level::registerTemporaryPointer(v37, (unsigned int)v3 + 16);
LABEL_37:
      if ( !*((_BYTE *)v3 + 36) )
        v39 = *((_DWORD *)v3 + 8);
        if ( v39 )
          v40 = *((_DWORD *)v3 + 6);
          v41 = *((_DWORD *)v3 + 7);
          if ( (v40 & v41) != -1 )
            v42 = j_Level::fetchEntity(v39, 0, v40, v41, 0);
            *((_DWORD *)v3 + 5) = v42;
            if ( !v42 )
              *((_DWORD *)v3 + 5) = j_Level::fetchEntity(
                                      *((_DWORD *)v3 + 8),
                                      0,
                                      *((_QWORD *)v3 + 3),
                                      *((_QWORD *)v3 + 3) >> 32,
                                      0);
        *((_BYTE *)v3 + 36) = 1;
      v43 = (Player *)*((_DWORD *)v3 + 5);
      if ( v43 )
        v44 = (ItemInstance *)j_Player::getSelectedItem(v43);
        if ( *((_BYTE *)v44 + 15) )
          if ( *(_DWORD *)v44 )
            if ( j_ItemInstance::isNull(v44) )
              v45 = 0;
            else if ( *((_BYTE *)v44 + 14) )
              v47 = (_WORD *)(*((_QWORD *)v3 + 10) >> 32);
              v46 = (_WORD *)*((_QWORD *)v3 + 10);
              if ( v46 != v47 )
                while ( 1 )
                {
                  v48 = j_ItemInstance::getId(v44);
                  v49 = *v46;
                  ++v46;
                  if ( v48 == v49 )
                    break;
                  if ( v47 == v46 )
                    goto LABEL_58;
                }
                j_Entity::setPersistent(*((Entity **)v3 + 2));
                v45 = 1;
          else
            v45 = 0;
        else
          v45 = 0;
      else
        v45 = 0;
LABEL_58:
      if ( v5 )
        j_operator delete((void *)v5);
      v5 = v45;
    }
  }
  else
    *((_DWORD *)v3 + 16) = v4 - 1;
  return v5;
}


void __fastcall TemptGoal::~TemptGoal(TemptGoal *this)
{
  TemptGoal *v1; // r4@1
  void *v2; // r0@1
  unsigned int v3; // r1@3
  int v4; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_271B0BC;
  v2 = (void *)*((_DWORD *)this + 20);
  if ( v2 )
    j_operator delete(v2);
  *((_DWORD *)v1 + 4) = &off_26F4C40;
  v3 = (unsigned int)v1 + 16;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = -1;
  *(_DWORD *)(v3 + 12) = -1;
  *(_BYTE *)(v3 + 20) = 0;
  v4 = *((_DWORD *)v1 + 8);
  if ( v4 )
    j_Level::unregisterTemporaryPointer(v4, v3);
  *((_DWORD *)v1 + 8) = 0;
  j_Goal::~Goal(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


unsigned int __fastcall TemptGoal::start(TemptGoal *this)
{
  TemptGoal *v1; // r4@1
  int v2; // r0@2
  unsigned int v3; // r2@3
  unsigned int v4; // r3@3
  int v5; // r0@4
  int v6; // r1@4
  int v7; // r5@7
  int v8; // r0@7
  PathNavigation *v9; // r5@7
  char v11; // [sp+8h] [bp-18h]@7

  v1 = this;
  if ( !*((_BYTE *)this + 36) )
  {
    v2 = *((_DWORD *)this + 8);
    if ( v2 )
    {
      v3 = *((_DWORD *)v1 + 6);
      v4 = *((_DWORD *)v1 + 7);
      if ( (v3 & v4) != -1 )
      {
        v5 = j_Level::fetchEntity(v2, v3 & v4, v3, v4, 0);
        *((_DWORD *)v1 + 5) = v5;
        if ( !v5 )
          *((_DWORD *)v1 + 5) = j_Level::fetchEntity(
                                  *((_DWORD *)v1 + 8),
                                  v6,
                                  *((_QWORD *)v1 + 3),
                                  *((_QWORD *)v1 + 3) >> 32,
                                  0);
      }
    }
    *((_BYTE *)v1 + 36) = 1;
  }
  v7 = *((_DWORD *)v1 + 5);
  v8 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v7 + 52))(*((_DWORD *)v1 + 5));
  *((_DWORD *)v1 + 10) = *(_DWORD *)v8;
  *((_DWORD *)v1 + 11) = *(_DWORD *)(v8 + 4);
  *((_DWORD *)v1 + 12) = *(_DWORD *)(v8 + 8);
  j_Entity::getRotation((Entity *)&v11, v7);
  *(_QWORD *)((char *)v1 + 52) = *(_QWORD *)&v11;
  *((_BYTE *)v1 + 68) = 1;
  v9 = (PathNavigation *)j_Mob::getNavigation(*((Mob **)v1 + 2));
  *((_BYTE *)v1 + 69) = j_PathNavigation::getAvoidWater(v9);
  j_PathNavigation::setAvoidWater(v9, 0);
  return j_Entity::setTempted(*((Entity **)v1 + 2), 1);
}


int __fastcall TemptGoal::TemptGoal(int a1, float a2, int a3, __int64 *a4, unsigned __int8 a5, int a6)
{
  __int64 *v6; // r9@1
  int v7; // r5@1
  float v8; // r7@1
  int v9; // r10@1
  char *v14; // r7@1
  int v15; // r4@1
  __int64 v16; // r0@1
  signed int v17; // r5@1
  __int64 v18; // kr00_8@4
  int v19; // r5@4

  v6 = a4;
  v7 = a3;
  v8 = a2;
  v9 = a1;
  j_Goal::Goal((Goal *)a1);
  __asm { VLDR            S0, [SP,#0x20+arg_4] }
  *(_DWORD *)v9 = &off_271B0BC;
  *(float *)(v9 + 8) = v8;
  *(_DWORD *)(v9 + 12) = v7;
  *(_DWORD *)(v9 + 16) = &off_26F4C40;
  *(_DWORD *)(v9 + 20) = 0;
  v14 = 0;
  *(_DWORD *)(v9 + 24) = -1;
  v15 = v9 + 24;
  *(_DWORD *)(v15 + 4) = -1;
  *(_DWORD *)(v15 + 8) = 0;
  *(_BYTE *)(v15 + 12) = 0;
  *(_DWORD *)(v15 + 32) = 0;
  *(_DWORD *)(v15 + 24) = 0;
  *(_DWORD *)(v15 + 28) = 0;
  *(_DWORD *)(v15 + 16) = 0;
  *(_DWORD *)(v15 + 20) = 0;
  *(_WORD *)(v15 + 36) = a5;
  *(_BYTE *)(v15 + 44) = 0;
  *(_BYTE *)(v15 + 45) = 0;
  *(_DWORD *)(v15 + 48) = 0;
  __asm { VSTR            S0, [R4,#0x34] }
  v16 = *v6;
  *(_DWORD *)(v15 + 56) = 0;
  *(_DWORD *)(v15 + 60) = 0;
  v17 = HIDWORD(v16) - v16;
  *(_DWORD *)(v15 + 64) = 0;
  if ( (HIDWORD(v16) - (signed int)v16) >> 1 )
  {
    if ( v17 <= -1 )
      sub_21E57F4();
    v14 = (char *)j_operator new(HIDWORD(v16) - v16);
  }
  *(_DWORD *)(v9 + 80) = v14;
  *(_DWORD *)(v9 + 84) = v14;
  *(_DWORD *)(v9 + 88) = &v14[2 * (v17 >> 1)];
  v18 = *v6;
  v19 = (HIDWORD(v18) - (signed int)v18) >> 1;
  if ( 0 != v19 )
    j___aeabi_memmove_0((int)v14, v18);
  *(_DWORD *)(v9 + 84) = &v14[2 * v19];
  j_Goal::setRequiredControlFlags((Goal *)v9, 3);
  if ( !(*(_DWORD *)(v9 + 76) & 0x7FFFFFFF) )
    *(_DWORD *)(v9 + 76) = 1098907648;
  return v9;
}


signed int __fastcall TemptGoal::tick(TemptGoal *this)
{
  TemptGoal *v1; // r4@1
  int v2; // r0@2
  unsigned int v3; // r2@3
  unsigned int v4; // r3@3
  int v5; // r0@4
  int v6; // r1@4
  int v7; // r8@7
  LookControl *v8; // r5@7
  float v9; // r0@7
  int v10; // r3@7
  int v11; // r7@7
  int v12; // r3@7
  int v13; // r6@7
  int v14; // r7@7
  Entity *i; // r6@7
  int v21; // r6@9
  signed int result; // r0@11
  mce::Math *v24; // r0@13
  float v25; // [sp+4h] [bp-8Ch]@9
  float v26; // [sp+10h] [bp-80h]@9
  int v28; // [sp+1Ch] [bp-74h]@8
  int v29; // [sp+20h] [bp-70h]@8
  int v30; // [sp+24h] [bp-6Ch]@8
  int v31; // [sp+28h] [bp-68h]@8
  int v32; // [sp+2Ch] [bp-64h]@8
  int v33; // [sp+30h] [bp-60h]@8
  char v34; // [sp+34h] [bp-5Ch]@8
  int v35; // [sp+38h] [bp-58h]@7
  int v36; // [sp+3Ch] [bp-54h]@7
  int v37; // [sp+40h] [bp-50h]@7
  int v38; // [sp+44h] [bp-4Ch]@7
  int v39; // [sp+48h] [bp-48h]@7
  int v40; // [sp+4Ch] [bp-44h]@7
  int v41; // [sp+50h] [bp-40h]@7

  v1 = this;
  --*((_DWORD *)this + 18);
  if ( !*((_BYTE *)this + 36) )
  {
    v2 = *((_DWORD *)this + 8);
    if ( v2 )
    {
      v3 = *((_DWORD *)v1 + 6);
      v4 = *((_DWORD *)v1 + 7);
      if ( (v3 & v4) != -1 )
      {
        v5 = j_Level::fetchEntity(v2, v3 & v4, v3, v4, 0);
        *((_DWORD *)v1 + 5) = v5;
        if ( !v5 )
          *((_DWORD *)v1 + 5) = j_Level::fetchEntity(
                                  *((_DWORD *)v1 + 8),
                                  v6,
                                  *((_QWORD *)v1 + 3),
                                  *((_QWORD *)v1 + 3) >> 32,
                                  0);
      }
    }
    *((_BYTE *)v1 + 36) = 1;
  }
  v7 = *((_DWORD *)v1 + 5);
  v8 = (LookControl *)j_Mob::getLookControl(*((Mob **)v1 + 2));
  v9 = COERCE_FLOAT((*(int (**)(void))(**((_DWORD **)v1 + 2) + 940))());
  j_LookControl::setLookAt(v8, (Entity *)v7, 30.0, v9);
  v10 = *(_DWORD *)(v7 + 268);
  v11 = *(_DWORD *)(v7 + 272);
  v35 = *(_DWORD *)(v7 + 264);
  v36 = v10;
  v37 = v11;
  v12 = *(_DWORD *)(v7 + 280);
  v13 = *(_DWORD *)(v7 + 284);
  v14 = *(_DWORD *)(v7 + 288);
  v38 = *(_DWORD *)(v7 + 276);
  v39 = v12;
  v40 = v13;
  v41 = v14;
  for ( i = (Entity *)j_Entity::getRide((Entity *)v7); i; i = (Entity *)j_Entity::getRide(i) )
    j_AABB::merge((AABB *)&v28, (const AABB *)&v35, (int)i + 264);
    v35 = v28;
    v36 = v29;
    v37 = v30;
    v38 = v31;
    v39 = v32;
    v40 = v33;
    LOBYTE(v41) = v34;
  j_AABB::getCenter((AABB *)&v26, (int)&v35);
  _R0 = (*(int (**)(void))(**((_DWORD **)v1 + 2) + 52))();
  __asm
    VLDR            S16, [R0]
    VLDR            S18, [R0,#8]
    VLDR            S20, [SP,#0x90+var_80]
    VLDR            S22, [SP,#0x90+var_78]
  v21 = j_Mob::getNavigation(*((Mob **)v1 + 2));
  j_AABB::getBounds((AABB *)&v25, (int)&v35);
  _R0 = *((_DWORD *)v1 + 2);
    VMOV.F32        S4, #0.5
    VLDR            S0, [SP,#0x90+var_8C]
    VSUB.F32        S6, S22, S18
    VMOV.F32        S8, #1.5
    VLDR            S2, [R0,#0x130]
    VADD.F32        S0, S2, S0
    VSUB.F32        S2, S20, S16
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S6, S6
    VADD.F32        S0, S0, S8
    VADD.F32        S2, S4, S2
    VMUL.F32        S0, S0, S0
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  if ( _NF ^ _VF )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v21 + 40))(v21);
  else
    result = *((_DWORD *)v1 + 18);
    if ( result <= 0 )
      v24 = (mce::Math *)(*(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)v21 + 20))(v21, v7, *((_DWORD *)v1 + 3));
      result = j_mce::Math::fastRandom(v24) & 3 | 8;
      *((_DWORD *)v1 + 18) = result;
  return result;
}


unsigned int __fastcall TemptGoal::stop(TemptGoal *this)
{
  TemptGoal *v1; // r4@1
  int v2; // r0@1
  PathNavigation *v3; // r5@3

  v1 = this;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = -1;
  *((_DWORD *)this + 7) = -1;
  *((_BYTE *)this + 36) = 0;
  v2 = *((_DWORD *)this + 8);
  if ( v2 )
    j_Level::unregisterTemporaryPointer(v2, (unsigned int)v1 + 16);
  *((_DWORD *)v1 + 8) = 0;
  v3 = (PathNavigation *)j_Mob::getNavigation(*((Mob **)v1 + 2));
  (*(void (**)(void))(*(_DWORD *)v3 + 40))();
  *((_DWORD *)v1 + 16) = 100;
  *((_BYTE *)v1 + 68) = 0;
  j_PathNavigation::setAvoidWater(v3, *((_BYTE *)v1 + 69));
  return j_j_j__ZN6Entity10setTemptedEb_0(*((Entity **)v1 + 2), 0);
}


int __fastcall TemptGoal::~TemptGoal(TemptGoal *this)
{
  TemptGoal *v1; // r4@1
  void *v2; // r0@1
  unsigned int v3; // r1@3
  int v4; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_271B0BC;
  v2 = (void *)*((_DWORD *)this + 20);
  if ( v2 )
    j_operator delete(v2);
  *((_DWORD *)v1 + 4) = &off_26F4C40;
  v3 = (unsigned int)v1 + 16;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = -1;
  *(_DWORD *)(v3 + 12) = -1;
  *(_BYTE *)(v3 + 20) = 0;
  v4 = *((_DWORD *)v1 + 8);
  if ( v4 )
    j_Level::unregisterTemporaryPointer(v4, v3);
  *((_DWORD *)v1 + 8) = 0;
  return j_j_j__ZN4GoalD2Ev_0(v1);
}


void __fastcall TemptGoal::~TemptGoal(TemptGoal *this)
{
  TemptGoal::~TemptGoal(this);
}


int __fastcall TemptGoal::canContinueToUse(TemptGoal *this)
{
  int v2; // r0@3
  unsigned int v3; // r2@4
  unsigned int v4; // r3@4
  int v5; // r0@5
  int v6; // r1@5
  int v7; // r5@8
  int result; // r0@12
  int v16; // r0@10
  char v17; // [sp+8h] [bp-20h]@17
  float v18; // [sp+10h] [bp-18h]@13

  _R4 = this;
  if ( !*((_BYTE *)this + 60) )
    return (*(int (__fastcall **)(TemptGoal *))(*(_DWORD *)_R4 + 8))(_R4);
  if ( !*((_BYTE *)this + 36) )
  {
    v2 = *((_DWORD *)this + 8);
    if ( v2 )
    {
      v3 = *((_DWORD *)_R4 + 6);
      v4 = *((_DWORD *)_R4 + 7);
      if ( (v3 & v4) != -1 )
      {
        v5 = j_Level::fetchEntity(v2, v3 & v4, v3, v4, 0);
        *((_DWORD *)_R4 + 5) = v5;
        if ( !v5 )
          *((_DWORD *)_R4 + 5) = j_Level::fetchEntity(
                                   *((_DWORD *)_R4 + 8),
                                   v6,
                                   *((_QWORD *)_R4 + 3),
                                   *((_QWORD *)_R4 + 3) >> 32,
                                   0);
      }
    }
    *((_BYTE *)_R4 + 36) = 1;
  }
  v7 = *((_DWORD *)_R4 + 5);
  if ( !v7 )
    return 0;
  _R6 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v7 + 52))(*((_DWORD *)_R4 + 5));
  _R0 = (*(int (**)(void))(**((_DWORD **)_R4 + 2) + 52))();
  __asm
    VLDR            S0, [R0]
    VLDR            S6, [R6]
    VLDR            S2, [R0,#4]
    VLDR            S8, [R6,#4]
    VSUB.F32        S0, S6, S0
    VLDR            S4, [R0,#8]
    VSUB.F32        S2, S8, S2
    VLDR            S10, [R6,#8]
    VSUB.F32        S4, S10, S4
    VMUL.F32        S0, S0, S0
    VMUL.F32        S2, S2, S2
    VMUL.F32        S4, S4, S4
    VADD.F32        S0, S2, S0
    VLDR            S2, =36.0
    VADD.F32        S0, S0, S4
    VCMPE.F32       S0, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !(_NF ^ _VF) )
    v16 = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 52))(v7);
    *((_DWORD *)_R4 + 10) = *(_DWORD *)v16;
    *((_DWORD *)_R4 + 11) = *(_DWORD *)(v16 + 4);
    *((_DWORD *)_R4 + 12) = *(_DWORD *)(v16 + 8);
LABEL_17:
    j_Entity::getRotation((Entity *)&v17, v7);
    *(_QWORD *)((char *)_R4 + 52) = *(_QWORD *)&v17;
  _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 52))(v7);
    VLDR            S6, [R4,#0x28]
    VLDR            S8, [R4,#0x2C]
    VSUB.F32        S0, S0, S6
    VSUB.F32        S2, S2, S8
    VLDR            S10, [R4,#0x30]
    VSUB.F32        S4, S4, S10
    VLDR            D1, =0.01
    VCVT.F64.F32    D0, S0
    VCMPE.F64       D0, D1
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
  j_Entity::getRotation((Entity *)&v18, v7);
  __asm { VLDR            S0, [R4,#0x34] }
  result = 0;
    VLDR            S2, [SP,#0x28+var_18]
    VSUB.F32        S2, S2, S0
    VMOV.F32        S0, #5.0
    VABS.F32        S2, S2
    VCMPE.F32       S2, S0
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    __asm
      VLDR            S2, [R4,#0x38]
      VLDR            S4, [SP,#0x28+var_14]
      VSUB.F32        S2, S4, S2
      VABS.F32        S2, S2
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
      goto LABEL_17;
  return result;
}
