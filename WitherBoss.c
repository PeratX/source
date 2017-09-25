

signed int __fastcall WitherBoss::_hurt(WitherBoss *this, const EntityDamageSource *a2, int a3, int a4, bool a5)
{
  const EntityDamageSource *v5; // r5@1
  int v7; // r8@1
  int v8; // r9@1
  int v9; // r0@1
  int v10; // r6@1
  signed int v12; // r7@1
  int v13; // r0@4
  signed int v14; // r0@4
  bool v15; // zf@4
  int v16; // r0@10
  int v17; // r7@11
  int v18; // r1@11
  int v19; // r0@11
  int v20; // r7@11
  void (__fastcall *v24)(int, WitherBoss *, int, int); // r10@12
  int v28; // r0@13
  __int16 v29; // r0@18
  bool v30; // zf@18
  int v31; // r0@22
  int v32; // r0@24
  signed int v33; // r0@24
  bool v34; // zf@24
  int v35; // r0@29
  int v36; // r6@30
  int v37; // r1@30
  int v38; // r0@30
  int v39; // r0@32
  int v40; // r6@37
  int v41; // r1@37
  const Entity *v42; // r5@37
  Sensing *v43; // r0@38
  signed int v44; // r6@38
  unsigned int v49; // [sp+10h] [bp-68h]@37
  unsigned int v50; // [sp+14h] [bp-64h]@37
  unsigned int v51; // [sp+18h] [bp-60h]@30
  unsigned int v52; // [sp+1Ch] [bp-5Ch]@30
  unsigned int v53; // [sp+20h] [bp-58h]@11
  unsigned int v54; // [sp+24h] [bp-54h]@11

  v5 = a2;
  _R4 = this;
  v7 = a4;
  v8 = a3;
  v9 = EntityDamageSource::getCause(a2);
  v10 = v9;
  _ZF = v9 == 5;
  v12 = 0;
  if ( v9 != 5 )
    _ZF = v9 == 9;
  if ( !_ZF )
  {
    v13 = (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)v5 + 36))(v5);
    v14 = EntityClassTree::isTypeInstanceOf(v13, 68404);
    v15 = v10 == 13;
    if ( v10 != 13 )
      v15 = v14 == 0;
    if ( v15 )
    {
      if ( v10 == 2 && *((_DWORD *)_R4 + 1108) >= 1 )
      {
        v16 = (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)v5 + 36))(v5);
        if ( EntityClassTree::isTypeInstanceOf(v16, 256) == 1 )
        {
          v17 = Entity::getLevel(_R4);
          (*(void (__fastcall **)(unsigned int *, const EntityDamageSource *))(*(_DWORD *)v5 + 32))(&v53, v5);
          v19 = Level::fetchEntity(v17, v18, v53, v54, 0);
          v20 = v19;
          if ( v19 )
          {
            __asm { VLDR            S16, [R4,#0x48] }
            v24 = *(void (__fastcall **)(int, WitherBoss *, int, int))(*(_DWORD *)v19 + 768);
            _R0 = (*(int (**)(void))(*(_DWORD *)v19 + 52))();
            __asm
            {
              VLDR            S0, [R0]
              VSUB.F32        S16, S16, S0
              VLDR            S18, [R4,#0x4C]
            }
            _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)v20 + 52))(v20);
              VMOV            R3, S16
              VLDR            S0, [R0,#4]
              VSUB.F32        S0, S18, S0
              VSTR            S0, [SP,#0x78+var_78]
            v24(v20, _R4, v8, _R3);
          }
        }
      }
      v28 = SynchedEntityData::getInt((WitherBoss *)((char *)_R4 + 176), 49);
      if ( v10 == 12 || v28 <= 0 )
        if ( *((_DWORD *)_R4 + 1120) )
          v12 = 0;
        else
          v29 = SynchedEntityData::getShort((WitherBoss *)((char *)_R4 + 176), 53);
          v30 = v10 == 3;
          if ( v10 == 3 )
            v30 = v29 == 0;
          if ( v30
            && (v31 = (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)v5 + 56))(v5),
                EntityClassTree::isTypeInstanceOf(v31, 4194384)) )
            v12 = 0;
          else
            v32 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v5 + 36))(v5);
            v33 = EntityClassTree::isTypeInstanceOf(v32, 68352);
            v34 = v10 == 13;
            if ( v10 != 13 )
              v34 = v33 == 0;
            if ( v34 )
              if ( *((_DWORD *)_R4 + 809) )
              {
                v35 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v5 + 36))(v5);
                if ( EntityClassTree::isTypeInstanceOf(v35, 319) == 1 )
                {
                  v36 = Entity::getLevel(_R4);
                  (*(void (__fastcall **)(unsigned int *, const EntityDamageSource *))(*(_DWORD *)v5 + 32))(&v51, v5);
                  v38 = Level::fetchEntity(v36, v37, v51, v52, 0);
                  if ( v38 )
                    BossComponent::addPlayerToParty(
                      *((_DWORD *)_R4 + 809),
                      *(_DWORD *)(v38 + 4568),
                      *(_QWORD *)(v38 + 4560),
                      *(_QWORD *)(v38 + 4568),
                      v8);
                }
              }
              v39 = (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)v5 + 56))(v5);
              if ( EntityClassTree::isTypeInstanceOf(v39, 4194393) == 1 )
                *((_DWORD *)_R4 + 1114) = 80;
              if ( *((_DWORD *)_R4 + 1098) < 1 )
                *((_DWORD *)_R4 + 1098) = 20;
              *((_DWORD *)_R4 + 1095) += 3;
              *((_DWORD *)_R4 + 1096) += 3;
              *((_DWORD *)_R4 + 1097) += 3;
              v12 = 0;
              if ( Monster::_hurt(_R4, v5, v8, v7, a5) )
                v40 = Entity::getLevel(_R4);
                (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v5 + 32))(&v49, v5);
                v42 = (const Entity *)Level::fetchEntity(v40, v41, v49, v50, 0);
                if ( v42 )
                  v43 = (Sensing *)Mob::getSensing(_R4);
                  v44 = Sensing::canSee(v43, v42);
                  _R7 = (*(int (__fastcall **)(WitherBoss *))(*(_DWORD *)_R4 + 52))(_R4);
                  _R0 = (*(int (__fastcall **)(const Entity *))(*(_DWORD *)v42 + 52))(v42);
                  __asm
                  {
                    VLDR            S16, [R0]
                    VLDR            S18, [R0,#4]
                    VLDR            S20, [R0,#8]
                    VLDR            S22, [R7]
                    VLDR            S24, [R7,#4]
                    VLDR            S26, [R7,#8]
                  }
                  if ( v42 == (const Entity *)Entity::getTarget(_R4) )
                    if ( v44 != 1 )
                      goto LABEL_48;
                    __asm
                    {
                      VSUB.F32        S0, S22, S16
                      VSUB.F32        S2, S24, S18
                    }
                    _R0 = (int)_R4 + 4504;
                      VSUB.F32        S4, S26, S20
                      VMUL.F32        S0, S0, S0
                      VMUL.F32        S2, S2, S2
                      VMUL.F32        S4, S4, S4
                      VADD.F32        S0, S2, S0
                      VLDR            S2, [R0]
                      VADD.F32        S0, S0, S4
                      VCMPE.F32       S2, S0
                      VMRS            APSR_nzcv, FPSCR
                    if ( _NF ^ _VF )
LABEL_48:
                      v12 = 1;
                      *((_DWORD *)_R4 + 1115) = 1;
                    else
                  else
                    v12 = 1;
                else
                  v12 = 1;
            else
      else
        v12 = 0;
    }
    else
      v12 = 0;
  }
  return v12;
}


WitherBoss *__fastcall WitherBoss::aiStep(WitherBoss *this)
{
  signed int v2; // r0@1
  WitherBoss *v3; // r7@1
  WitherBoss *result; // r0@3
  int v5; // r1@3
  int v6; // r0@5
  signed int v9; // r1@5
  signed int *v10; // r7@6
  signed int v11; // r5@6
  Level *v12; // r0@7
  WitherBoss *v13; // r8@10
  __int16 v14; // r4@10
  int v15; // r0@10
  unsigned int v16; // r1@10
  signed int v17; // r2@10
  unsigned int v18; // r1@14
  unsigned int v19; // r0@14
  char *v20; // r5@24
  void (__fastcall *v21)(WitherBoss *, signed int, char *, signed int); // r4@24
  WitherBoss *v22; // r0@24
  signed int v23; // r1@24
  WitherBoss *v26; // r7@28
  int v27; // r0@28
  int v28; // r0@29
  unsigned int v29; // r1@29
  unsigned int v30; // r1@31
  unsigned int v31; // r0@31
  int v32; // r5@36
  int v33; // r4@36
  Level *v34; // r0@36
  unsigned __int64 *v35; // r0@36
  int v36; // r0@36
  void (__fastcall *v37)(WitherBoss *, signed int, char *, signed int); // r4@36
  int v39; // r4@39
  int v40; // r0@39
  unsigned int v41; // r1@39
  unsigned int v42; // r1@41
  unsigned int v43; // r0@41
  void (__fastcall *v44)(WitherBoss *, int); // r4@46
  float v52; // r1@46
  float v54; // r1@46
  void (__fastcall *v55)(WitherBoss *, signed int, char *, signed int); // r7@51
  float v60; // r1@52
  float v63; // r1@52
  signed int v64; // r4@55
  int v65; // r0@55
  unsigned int v66; // r1@55
  unsigned int v67; // r1@57
  unsigned int v68; // r0@57
  Level *v71; // r0@63
  __int64 v73; // r0@64
  int v74; // r4@65
  __int64 v75; // r0@65
  MoveControl *v77; // r0@68
  int v79; // r5@69
  int v80; // r4@69
  Level *v81; // r0@69
  unsigned __int64 *v82; // r0@69
  int v83; // r0@69
  Player *v84; // r5@69
  const Vec3 *v85; // r4@69
  signed int v86; // r0@69
  int v87; // r1@83
  int v92; // r5@90
  mce::Math *v93; // r5@91
  __int64 v95; // r2@91
  int v96; // r0@91
  mce::Degree *v97; // r0@91
  float v100; // r3@91
  int v101; // r0@91
  WitherBoss *v102; // r10@93
  SynchedEntityData *v103; // r9@93
  int v106; // r4@93
  mce::Math **v107; // r8@94
  SynchedEntityData *v108; // r0@97
  int v109; // r1@97
  __int64 v110; // kr00_8@100
  int v111; // r0@101
  __int64 v112; // r2@101
  float v113; // r3@102
  __int64 v114; // r6@102
  mce::Math **v116; // r11@105
  SynchedEntityData *v119; // r4@105
  float v124; // r1@105
  int v125; // r0@105
  __int64 v127; // r2@105
  int v128; // r0@105
  mce::Degree *v131; // r0@105
  int v132; // r4@105
  __int64 v133; // r2@105
  int v134; // r0@105
  mce::Degree *v135; // r0@105
  float v137; // r3@105
  int v138; // r0@105
  int v141; // r0@108
  Random *v144; // r7@108
  int v145; // r9@108
  int v153; // r5@112
  Entity *v157; // r4@113
  int v158; // r10@113
  int v162; // r0@113
  int v163; // r5@115
  signed int v167; // r1@123
  Level *v168; // r0@125
  int v169; // [sp+10h] [bp-130h]@0
  int v170; // [sp+14h] [bp-12Ch]@0
  int v171; // [sp+18h] [bp-128h]@0
  WitherBoss *v172; // [sp+18h] [bp-128h]@91
  int v173; // [sp+1Ch] [bp-124h]@0
  int v174; // [sp+1Ch] [bp-124h]@93
  Entity *v175; // [sp+20h] [bp-120h]@0
  Entity *v176; // [sp+20h] [bp-120h]@93
  int v177; // [sp+24h] [bp-11Ch]@0
  int v178; // [sp+24h] [bp-11Ch]@93
  int v179; // [sp+24h] [bp-11Ch]@108
  void *v180; // [sp+28h] [bp-118h]@0
  float *v181; // [sp+28h] [bp-118h]@93
  int v182; // [sp+2Ch] [bp-114h]@95
  __int16 v183; // [sp+2Ch] [bp-114h]@108
  float v184; // [sp+3Ch] [bp-104h]@115
  int v185; // [sp+48h] [bp-F8h]@113
  signed int v186; // [sp+4Ch] [bp-F4h]@113
  int v187; // [sp+50h] [bp-F0h]@113
  float v188; // [sp+54h] [bp-ECh]@113
  float v189; // [sp+60h] [bp-E0h]@112
  char v190; // [sp+6Ch] [bp-D4h]@105
  char v191; // [sp+70h] [bp-D0h]@105
  char v192; // [sp+74h] [bp-CCh]@91
  float v193; // [sp+78h] [bp-C8h]@91
  float v195; // [sp+84h] [bp-BCh]@91
  char v197; // [sp+90h] [bp-B0h]@51
  char v198; // [sp+9Ch] [bp-A4h]@36
  char v199; // [sp+A8h] [bp-98h]@36
  char v200; // [sp+B4h] [bp-8Ch]@53
  char v201; // [sp+C0h] [bp-80h]@24
  char v202; // [sp+CCh] [bp-74h]@69

  _R6 = this;
  v2 = *((_DWORD *)this + 1124);
  v3 = (WitherBoss *)((char *)_R6 + 4496);
  if ( v2 >= 1 )
    *(_DWORD *)v3 = v2 - 1;
  result = (WitherBoss *)4456;
  v5 = *((_DWORD *)_R6 + 1114);
  _VF = __OFSUB__(v5--, 1);
  *((_DWORD *)_R6 + 1114) = v5;
  if ( (unsigned __int8)((v5 < 0) ^ _VF) | (v5 == 0) )
  {
    v6 = Mob::getHealth(_R6);
    __asm
    {
      VLDR            S16, =0.6
      VLDR            S0, [R6,#0x70]
      VMUL.F32        S0, S0, S16
      VSTR            S0, [R6,#0x70]
    }
    --*((_DWORD *)_R6 + 1077);
    v9 = *((_DWORD *)_R6 + 1120);
    if ( v9 >= 1 )
      v10 = (signed int *)((char *)_R6 + 4480);
      v11 = v9 - 1;
      *((_DWORD *)_R6 + 862) = -1;
      *((_DWORD *)_R6 + 1120) = v9 - 1;
      if ( v9 == 1 )
      {
        v12 = (Level *)Entity::getLevel(_R6);
        if ( Level::isClientSide(v12) != 1 )
        {
          v79 = Entity::getLevel(_R6);
          v80 = Entity::getRegion(_R6);
          Entity::getAttachPos((AABB *)&v202, (int)_R6, 6, 0);
          v81 = (Level *)Entity::getLevel(_R6);
          v82 = (unsigned __int64 *)Level::getGameRules(v81);
          v83 = GameRules::getBool(v82, (int **)&GameRules::MOB_GRIEFING);
          Level::explode(
            v79,
            v80,
            (int)_R6,
            (int)&v202,
            (void *)0x40E00000,
            0,
            v83,
            2139095039,
            v169,
            v170,
            v171,
            v173,
            (void *)v175,
            v177,
            v180);
          Mob::die(_R6, (WitherBoss *)((char *)_R6 + 4524));
          v84 = (Player *)Entity::getRegion(_R6);
          v85 = (const Vec3 *)(*(int (__fastcall **)(WitherBoss *))(*(_DWORD *)_R6 + 52))(_R6);
          v86 = (*(int (__fastcall **)(WitherBoss *))(*(_DWORD *)_R6 + 1152))(_R6);
          ExperienceOrb::spawnOrbs(v84, v85, v86, 2, 0);
          return (WitherBoss *)(*(int (__fastcall **)(WitherBoss *))(*(_DWORD *)_R6 + 44))(_R6);
        }
        v11 = *v10;
      }
      if ( !(v11 % *((_DWORD *)_R6 + 1109)) )
        v13 = (WitherBoss *)((char *)_R6 + 4436);
        v14 = SynchedEntityData::getShort((WitherBoss *)((char *)_R6 + 176), 53);
        v15 = SynchedEntityData::_get((WitherBoss *)((char *)_R6 + 176), 53);
        v16 = *(_DWORD *)(v15 + 4);
        v17 = 0;
        if ( !v14 )
          v17 = 1;
        if ( (unsigned __int8)v16 == 1 && *(_WORD *)(v15 + 10) != v17 )
          *(_WORD *)(v15 + 10) = v17;
          *(_BYTE *)(v15 + 8) = 1;
          v18 = v16 >> 16;
          v19 = *((_WORD *)_R6 + 94);
          if ( v19 >= v18 )
            LOWORD(v19) = v18;
          *((_WORD *)_R6 + 94) = v19;
          if ( *((_WORD *)_R6 + 95) > v18 )
            LOWORD(v18) = *((_WORD *)_R6 + 95);
          *((_WORD *)_R6 + 95) = v18;
        if ( *(_DWORD *)v13 >= 2 )
          --*(_DWORD *)v13;
      if ( v11 == 60 )
        v20 = &v200;
        v21 = *(void (__fastcall **)(WitherBoss *, signed int, char *, signed int))(*(_DWORD *)_R6 + 556);
        Entity::getAttachPos((AABB *)&v200, (int)_R6, 3, 0);
        v22 = _R6;
        v23 = 132;
      else
        if ( v11 != 120 )
          goto LABEL_55;
        v20 = &v201;
        Entity::getAttachPos((AABB *)&v201, (int)_R6, 3, 0);
        v23 = 14;
      v21(v22, v23, v20, -1);
LABEL_55:
      v64 = *v10;
      v65 = SynchedEntityData::_get((WitherBoss *)((char *)_R6 + 176), 49);
      v66 = *(_DWORD *)(v65 + 4);
      if ( (unsigned __int8)v66 == 2 && *(_DWORD *)(v65 + 12) != v64 )
        *(_DWORD *)(v65 + 12) = v64;
        *(_BYTE *)(v65 + 8) = 1;
        v67 = v66 >> 16;
        v68 = *((_WORD *)_R6 + 94);
        if ( v68 >= v67 )
          LOWORD(v68) = v67;
        *((_WORD *)_R6 + 94) = v68;
        if ( *((_WORD *)_R6 + 95) > v67 )
          LOWORD(v67) = *((_WORD *)_R6 + 95);
        *((_WORD *)_R6 + 95) = v67;
      __asm { VLDR            S0, =0.005 }
      _R0 = (int)_R6 + 4452;
      __asm
        VLDR            S2, [R0]
        VADD.F32        S0, S2, S0
        VMOV.F32        S2, #1.0
        VSTR            S0, [R0]
      _R0 = *((_DWORD *)_R6 + 1128);
      *((_DWORD *)_R6 + 1129) = _R0;
      __asm { VMOV            S0, R0 }
      result = (WitherBoss *)((char *)_R6 + 4512);
        VADD.F32        S0, S0, S2
      return result;
    _VF = __OFSUB__(v6, 1);
    _NF = v6 - 1 < 0;
    if ( v6 >= 1 )
      v9 = 4432;
      v6 = *((_DWORD *)_R6 + 1108);
      _VF = __OFSUB__(v6, 1);
      _NF = v6 - 1 < 0;
    if ( !(_NF ^ _VF) )
      v26 = (WitherBoss *)((char *)_R6 + v9);
      v27 = v6 - 1;
      *(_DWORD *)((char *)_R6 + v9) = v27;
      if ( !v27 )
        v28 = SynchedEntityData::_get((WitherBoss *)((char *)_R6 + 176), 53);
        v29 = *(_DWORD *)(v28 + 4);
        if ( (unsigned __int8)v29 == 1 && *(_WORD *)(v28 + 10) != 1 )
          v30 = v29 >> 16;
          *(_WORD *)(v28 + 10) = 1;
          *(_BYTE *)(v28 + 8) = 1;
          v31 = *((_WORD *)_R6 + 94);
          if ( v31 >= v30 )
            LOWORD(v31) = v30;
          *((_WORD *)_R6 + 94) = v31;
          if ( *((_WORD *)_R6 + 95) > v30 )
            LOWORD(v30) = *((_WORD *)_R6 + 95);
          *((_WORD *)_R6 + 95) = v30;
        *((_DWORD *)_R6 + 1079) = *((_DWORD *)_R6 + 1076);
        v32 = Entity::getLevel(_R6);
        v33 = Entity::getRegion(_R6);
        Entity::getAttachPos((AABB *)&v199, (int)_R6, 6, 0);
        v34 = (Level *)Entity::getLevel(_R6);
        v35 = (unsigned __int64 *)Level::getGameRules(v34);
        v36 = GameRules::getBool(v35, (int **)&GameRules::MOB_GRIEFING);
        Level::explode(
          v32,
          v33,
          (int)_R6,
          (int)&v199,
          (void *)0x40E00000,
          0,
          v36,
          2139095039,
          v169,
          v170,
          v171,
          v173,
          (void *)v175,
          v177,
          v180);
        v37 = *(void (__fastcall **)(WitherBoss *, signed int, char *, signed int))(*(_DWORD *)_R6 + 556);
        Entity::getAttachPos((AABB *)&v198, (int)_R6, 0, 0);
        v37(_R6, 51, &v198, -1);
        VLDR            S0, [R0]
        VCMPE.F32       S0, #0.0
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm
          VLDRGT          S2, =-0.0075
          VADDGT.F32      S0, S0, S2
          VSTRGT          S0, [R0]
      v39 = *(_DWORD *)v26;
      v40 = SynchedEntityData::_get((WitherBoss *)((char *)_R6 + 176), 49);
      v41 = *(_DWORD *)(v40 + 4);
      if ( (unsigned __int8)v41 == 2 && *(_DWORD *)(v40 + 12) != v39 )
        *(_DWORD *)(v40 + 12) = v39;
        *(_BYTE *)(v40 + 8) = 1;
        v42 = v41 >> 16;
        v43 = *((_WORD *)_R6 + 94);
        if ( v43 >= v42 )
          LOWORD(v43) = v42;
        *((_WORD *)_R6 + 94) = v43;
        if ( *((_WORD *)_R6 + 95) > v42 )
          LOWORD(v42) = *((_WORD *)_R6 + 95);
        *((_WORD *)_R6 + 95) = v42;
      v44 = *(void (__fastcall **)(WitherBoss *, int))(*(_DWORD *)_R6 + 832);
      _R0 = Mob::getMaxHealth(_R6);
        VMOV            S0, R0
        VLDR            S2, =0.005
        VCVT.F32.S32    S0, S0
        VMUL.F32        S0, S0, S2
        VMOV            R0, S0
      _R0 = ceilf(_R0);
        VCVTR.S32.F32   S0, S0
        VMOV            R1, S0
      v44(_R6, _R1);
      _R4 = (int)_R6 + 4448;
      __asm { VLDR            S0, =0.2 }
      _R0 = (int)_R6 + 3412;
        VLDR            S2, [R4]
        VSTR            S0, [R4]
        VLDR            S16, [R0]
        VSUB.F32        S0, S16, S0
      _R0 = mce::Math::wrapDegrees(_R0, v52);
      __asm { VCMPE.F32       S16, #0.0 }
      *((_DWORD *)_R6 + 853) = _R0;
      *((_DWORD *)_R6 + 855) = _R0;
      __asm { VMRS            APSR_nzcv, FPSCR }
      *((_DWORD *)_R6 + 31) = _R0;
      if ( _NF ^ _VF )
          VMOV            S0, R0
          VCMPE.F32       S0, #0.0
          VMRS            APSR_nzcv, FPSCR
        if ( !(_NF ^ _VF) )
          goto LABEL_129;
      if ( *(_DWORD *)v26 == 199 )
LABEL_129:
        v55 = *(void (__fastcall **)(WitherBoss *, signed int, char *, signed int))(*(_DWORD *)_R6 + 556);
        Entity::getAttachPos((AABB *)&v197, (int)_R6, 0, 0);
        v55(_R6, 51, &v197, -1);
      _R0 = (int)_R6 + 4324;
        VLDR            S0, [R4]
      *((_DWORD *)_R6 + 1081) = mce::Math::wrapDegrees(_R0, v54);
      _R0 = (int)_R6 + 4332;
      *((_DWORD *)_R6 + 1083) = mce::Math::wrapDegrees(_R0, v60);
      _R0 = (int)_R6 + 4340;
      *((_DWORD *)_R6 + 1085) = mce::Math::wrapDegrees(_R0, v63);
      return (WitherBoss *)Monster::aiStep(_R6);
    v71 = (Level *)Entity::getLevel(_R6);
    if ( Level::isClientSide(v71) )
      goto LABEL_83;
    v73 = SynchedEntityData::getInt64((WitherBoss *)((char *)_R6 + 176), 50);
    if ( ((unsigned int)v73 & HIDWORD(v73)) == -1 )
    v74 = Entity::getLevel(_R6);
    v75 = SynchedEntityData::getInt64((WitherBoss *)((char *)_R6 + 176), 50);
    _R4 = Level::fetchEntity(v74, SHIDWORD(v75), v75, HIDWORD(v75), 0);
    if ( !_R4 )
    if ( *((_BYTE *)_R6 + 4465) )
      if ( Mob::getMoveControl(_R6) )
        v77 = (MoveControl *)Mob::getMoveControl(_R6);
        _R0 = MoveControl::getWantedPosition(v77);
          VLDR            S0, [R6,#0x4C]
          VLDR            S2, [R0,#4]
          VSUB.F32        S0, S2, S0
LABEL_82:
        __asm { VSTR            S0, [R6,#0x70] }
LABEL_83:
      v87 = *((_DWORD *)_R6 + 1105);
      if ( v87 <= 0 )
          VLDR            S2, [R6,#0x6C]
          VLDR            S0, [R6,#0x74]
        LODWORD(_R2) = (char *)_R6 + 4420;
        _R0 = (WitherBoss *)((char *)_R6 + 4408);
        HIDWORD(_R2) = (char *)_R6 + 4416;
          VLDR            S0, [R0]
          VADD.F32        S2, S0, S0
          VSTR            S2, [R6,#0x6C]
          VLDR            S0, [R3]
          VADD.F32        S0, S0, S0
          VSTR            S0, [R6,#0x74]
        *((_DWORD *)_R6 + 1105) = v87 - 1;
        if ( _ZF )
          __asm { VLDR            S0, =0.0 }
          LODWORD(_R2) = 0;
          __asm { VMOV.F32        S2, S0 }
          *((_BYTE *)_R6 + 4405) = 0;
          *(_DWORD *)v3 = 20;
          *(_DWORD *)_R0 = 0;
          *((_DWORD *)_R6 + 27) = 0;
          *((_DWORD *)_R6 + 29) = 0;
        VMUL.F32        S4, S2, S2
        VMUL.F32        S6, S0, S0
        VADD.F32        S4, S6, S4
        VLDR            S6, =0.05
        VCMPE.F32       S4, S6
          VMOV            R0, S0
          VMOV            R1, S2
        _R0 = mce::Math::atan2(_R0, _R2);
        __asm { VMOV            S2, R0 }
        _R1 = &mce::Math::RADDEG;
          VLDR            S0, [R1]
          VMUL.F32        S0, S2, S0
          VLDR            S2, =-90.0
          VADD.F32        S0, S0, S2
          VSTR            S0, [R6,#0x7C]
      v92 = Entity::getTarget(_R6);
      if ( v92 )
        v172 = (WitherBoss *)((char *)_R6 + 4496);
        Entity::getAttachPos((AABB *)&v195, (int)_R6, 3, 0);
        Entity::getAttachPos((AABB *)&v193, v92, 3, 0);
          VLDR            S0, [SP,#0x140+var_BC]
          VLDR            S4, [SP,#0x140+var_C8]
          VLDR            S2, [SP,#0x140+var_B4]
          VLDR            S6, [SP,#0x140+var_C0]
          VSUB.F32        S0, S4, S0
        v93 = (mce::Math *)*((_DWORD *)_R6 + 855);
          VSUB.F32        S2, S6, S2
          VMOV            R1, S0
          VMOV            R0, S2
        v96 = mce::Math::atan2(_R0, v95);
        mce::Degree::Degree((int)&v192, v96);
        _R0 = mce::Degree::asFloat(v97);
          VLDR            S2, [R0]
          VLDR            S0, =-90.0
          VADD.F32        S0, S2, S0
        v101 = mce::Math::clampRotate(v93, _R1, 10.0, v100);
        *((_DWORD *)_R6 + 855) = v101;
        *((_DWORD *)_R6 + 853) = v101;
      v181 = (float *)((char *)_R6 + 3412);
      Monster::aiStep(_R6);
      v174 = (int)_R6 + 4324;
      v102 = (WitherBoss *)((char *)_R6 + 4348);
      v103 = (WitherBoss *)((char *)_R6 + 176);
      _R0 = &mce::Math::DEGRAD;
      _R5 = 0;
      __asm { VLDR            S18, =1.3 }
      v106 = 0;
        VLDR            S20, =-2.2
        VLDR            S22, =-90.0
      v176 = _R6;
      v178 = (int)_R6 + 4320;
      while ( 1 )
        v107 = (mce::Math **)(v174 + 8 * v106);
        *((_DWORD *)v102 - 1) = *(_DWORD *)(v178 + 8 * v106);
        *(_DWORD *)v102 = *(_DWORD *)(v174 + 8 * v106);
        if ( v106 == 1 )
          v182 = 2;
          v108 = v103;
          v109 = 52;
        else
          v182 = v106 + 1;
          if ( v106 )
          {
            if ( v106 != -1 )
              goto LABEL_102;
            v108 = v103;
            v109 = 50;
          }
          else
            v109 = 51;
        v110 = SynchedEntityData::getInt64(v108, v109);
        if ( ((unsigned int)v110 & HIDWORD(v110)) == -1 )
LABEL_102:
          v114 = SynchedEntityData::getInt64(v103, 50);
          if ( ((unsigned int)v114 & HIDWORD(v114)) == -1 )
            goto LABEL_106;
          v111 = Entity::getLevel(v176);
          v112 = v114;
          goto LABEL_104;
        v111 = Entity::getLevel(v176);
        v112 = v110;
LABEL_104:
        _R7 = Level::fetchEntity(v111, 0, v112, HIDWORD(v112), 0);
        if ( !_R7 )
LABEL_106:
          _R1 = *v181;
          goto LABEL_107;
          VMOV            S0, R5
          VCVT.F32.S32    S0, S0
        v116 = (mce::Math **)(v178 + 8 * v106);
        _R0 = v181;
          VMUL.F32        S0, S0, S16
          VMOV            R6, S0
        v119 = v103;
        _R9 = cosf(_R6);
        _R0 = sinf(COERCE_FLOAT(LODWORD(_R6) ^ 0x80000000));
          VMOV            S0, R9
          VMOV            S2, R0
        v103 = v119;
          VMUL.F32        S24, S0, S18
          VMUL.F32        S26, S2, S18
        _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v176 + 52))(v176);
          VLDR            S2, [R0,#8]
          VADD.F32        S0, S0, S24
          VLDR            S6, [R7,#0x48]
          VSUB.F32        S2, S26, S2
          VLDR            S4, [R7,#0x50]
          VLDR            S8, [R7,#0x178]
          VLDR            S10, [R7,#0x180]
          VLDR            S28, [R0,#4]
          VLDR            S24, [R7,#0x4C]
          VLDR            S26, [R7,#0x17C]
          VSUB.F32        S0, S6, S0
          VADD.F32        S2, S4, S2
          VADD.F32        S30, S8, S0
          VADD.F32        S17, S10, S2
          VMUL.F32        S0, S30, S30
          VMUL.F32        S2, S17, S17
        v125 = mce::Math::sqrt(_R0, v124);
        __asm { VSUB.F32        S0, S20, S28 }
        HIDWORD(_R0) = v125;
          VADD.F32        S0, S24, S0
          VADD.F32        S0, S0, S26
        v128 = mce::Math::atan2(_R0, v127);
        mce::Degree::Degree((int)&v191, v128);
          VMOV            R6, S30
          VMOV            R7, S17
        v132 = *(_DWORD *)mce::Degree::asFloat(v131);
        v134 = mce::Math::atan2(__PAIR__(_R6, _R7), v133);
        mce::Degree::Degree((int)&v190, v134);
        _R0 = mce::Degree::asFloat(v135);
        __asm { VLDR            S24, [R0] }
        v138 = mce::Math::clampRotate(*v116, COERCE_FLOAT(v132 ^ 0x80000000), 40.0, v137);
        __asm { VADD.F32        S0, S24, S22 }
        *v116 = (mce::Math *)v138;
        __asm { VMOV            R1, S0 }
LABEL_107:
        _R0 = mce::Math::clampRotate(*v107, _R1, 10.0, v113);
        v106 = v182;
        __asm { VMOV            S0, R0 }
        v102 = (WitherBoss *)((char *)v102 + 8);
        _R5 += 180;
        __asm { VSTR            S0, [R8] }
        if ( v182 == 2 )
          v183 = SynchedEntityData::getShort(v103, 53);
          v141 = SynchedEntityData::getInt(v103, 49);
          __asm { VMOV.F32        S20, #3.0 }
          v179 = v141;
          _R10 = v176;
          _R11 = -180;
          __asm { VLDR            S22, =0.3 }
          v144 = (Entity *)((char *)v176 + 552);
          __asm
            VLDR            S24, =3.3
            VLDR            S26, =2.2
          v145 = 0;
          do
            if ( v145 <= 0 )
            {
              __asm { VLDR            S0, [R10,#0x4C] }
              _R4 = *((_DWORD *)_R10 + 20);
              __asm { VADD.F32        S28, S0, S20 }
              _R6 = *((_DWORD *)_R10 + 18);
            }
            else
              __asm
              {
                VMOV            S0, R11
                VCVT.F32.S32    S0, S0
              }
              _R0 = v181;
                VLDR            S2, [R0]
                VADD.F32        S0, S2, S0
                VMUL.F32        S0, S0, S16
                VMOV            R5, S0
              _R6 = cosf(_R5);
              _R0 = sinf(_R5);
                VMOV            S0, R0
                VMOV            S2, R6
                VMUL.F32        S28, S0, S18
                VMUL.F32        S30, S2, S18
              _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R10 + 52))(_R10);
                VLDR            S0, [R0]
                VLDR            S4, [R0,#8]
                VADD.F32        S0, S0, S30
                VLDR            S2, [R0,#4]
                VADD.F32        S4, S4, S28
                VADD.F32        S28, S2, S26
                VMOV            R6, S0
                VMOV            R4, S4
            v153 = Entity::getLevel(_R10);
            _R0 = Random::nextGaussian(v144);
            __asm
              VMOV            S0, R0
              VMUL.F32        S19, S0, S22
            __asm { VMOV            S30, R0 }
              VMUL.F32        S2, S30, S22
              VMUL.F32        S0, S0, S22
              VMOV            S17, R6
              VMOV            S30, R4
              VADD.F32        S4, S19, S17
              VADD.F32        S2, S2, S28
              VADD.F32        S0, S0, S30
              VSTR            S4, [SP,#0x140+var_E0]
              VSTR            S2, [SP,#0x140+var_DC]
              VSTR            S0, [SP,#0x140+var_D8]
            Level::addParticle(v153, 4, (int)&v189);
            if ( !v183 )
              v157 = _R10;
              v158 = Entity::getLevel(_R10);
              _R0 = Random::nextGaussian(v144);
                VMUL.F32        S19, S0, S22
              __asm { VMOV            S21, R0 }
                VMUL.F32        S2, S21, S22
                VMUL.F32        S0, S0, S22
                VADD.F32        S4, S19, S17
                VADD.F32        S2, S2, S28
                VSTR            S4, [SP,#0x140+var_EC]
                VSTR            S2, [SP,#0x140+var_E8]
                VSTR            S0, [SP,#0x140+var_E4]
              v185 = 1060320051;
              v186 = 1060320051;
              v187 = 1056964608;
              v162 = v158;
              _R10 = v157;
              Level::addParticle(v162, 26, (int)&v188);
            if ( v179 )
              v163 = Entity::getLevel(_R10);
              _R6 = Random::nextGaussian(v144);
                VMUL.F32        S0, S0, S24
                VADD.F32        S19, S0, S2
                VADD.F32        S0, S19, S0
                VADD.F32        S2, S0, S17
                VADD.F32        S4, S0, S28
                VSTR            S2, [SP,#0x140+var_104]
                VSTR            S4, [SP,#0x140+var_100]
                VSTR            S0, [SP,#0x140+var_FC]
              Level::addParticle(v163, 26, (int)&v184);
            _R11 += 180;
            ++v145;
          while ( _R11 != 360 );
          if ( !*((_DWORD *)_R10 + 1115)
            && !*((_BYTE *)_R10 + 4464)
            && !*((_BYTE *)_R10 + 4405)
            && !*((_DWORD *)_R10 + 1106)
            && *(_DWORD *)v172 < 1 )
            if ( Entity::getTarget(_R10) )
              v167 = *((_DWORD *)_R10 + 1125);
              *((_DWORD *)_R10 + 1125) = v167 + 1;
              if ( v167 >= 100 )
                *((_DWORD *)_R10 + 1115) = 1;
                *((_DWORD *)_R10 + 1125) = 0;
          v168 = (Level *)Entity::getLevel(_R10);
          result = (WitherBoss *)Level::isClientSide(v168);
          if ( result == (WitherBoss *)1 )
            result = (WitherBoss *)Monster::aiStep(_R10);
          return result;
      VLDR            S0, [R4,#0x4C]
      VLDR            S2, [R6,#0x4C]
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF && !*((_BYTE *)_R6 + 4404) )
      goto LABEL_130;
    if ( !(unsigned __int16)SynchedEntityData::getShort((WitherBoss *)((char *)_R6 + 176), 53) )
      goto LABEL_131;
      VMOV.F32        S0, #5.0
      VLDR            S2, [R4,#0x4C]
      VADD.F32        S0, S2, S0
    if ( _NF ^ _VF )
LABEL_130:
        VLDR            S0, [R6,#0x70]
        VMOV.F32        S2, #0.5
        __asm { VLDRLT          S0, =0.0 }
        *((_DWORD *)_R6 + 28) = 0;
        VSUB.F32        S2, S2, S0
        VMUL.F32        S2, S2, S16
    else
LABEL_131:
      if ( !*((_BYTE *)_R6 + 4404) )
        goto LABEL_83;
        VMOV.F32        S0, #-1.0
        VLDR            S2, [R6,#0x70]
    __asm { VADD.F32        S0, S2, S0 }
    goto LABEL_82;
  }
  return result;
}


void __fastcall WitherBoss::die(WitherBoss *this, const EntityDamageSource *a2)
{
  WitherBoss *v2; // r4@1
  void (__fastcall *v3)(WitherBoss *, signed int, char *, signed int); // r7@1
  Level *v4; // r0@1
  char v5; // [sp+8h] [bp-20h]@1

  v2 = this;
  *((_DWORD *)this + 1120) = 200;
  *((_DWORD *)this + 1132) = *((_DWORD *)a2 + 1);
  *((_BYTE *)this + 4405) = 0;
  *((_DWORD *)this + 1114) = 0;
  *((_DWORD *)this + 1106) = 0;
  v3 = *(void (__fastcall **)(WitherBoss *, signed int, char *, signed int))(*(_DWORD *)this + 556);
  Entity::getAttachPos((AABB *)&v5, (int)this, 3, 0);
  v3(v2, 131, &v5, -1);
  v4 = (Level *)Entity::getLevel(v2);
  if ( !Level::isClientSide(v4) )
    BossComponent::sendDeathTelemetry(*((BossComponent **)v2 + 809));
}


signed int __fastcall WitherBoss::hurtEffects(WitherBoss *this, const EntityDamageSource *a2, int a3, int a4, int a5)
{
  const EntityDamageSource *v5; // r6@1
  WitherBoss *v6; // r5@1
  int v7; // r7@1
  int v8; // r8@1
  int v9; // r4@1
  int v10; // r0@1
  signed int result; // r0@3
  int v12; // r7@7
  Level *v13; // r0@7
  int v14; // r0@8
  int v21; // r4@13
  int v22; // r1@13
  int v23; // r6@13
  Sensing *v24; // r0@14
  signed int v25; // r7@14
  unsigned int v29; // [sp+10h] [bp-50h]@13
  unsigned int v30; // [sp+14h] [bp-4Ch]@13

  v5 = a2;
  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = EntityDamageSource::getCause(a2);
  v10 = SynchedEntityData::getInt((WitherBoss *)((char *)v6 + 176), 49);
  if ( v9 == 12 || v10 <= 0 )
  {
    if ( *((_DWORD *)v6 + 1120) )
    {
      result = 0;
    }
    else if ( Mob::hurtEffects(v6, v5, v8, v7, a5) == 1 )
      v12 = Mob::getHealth(v6);
      v13 = (Level *)Entity::getLevel(v6);
      if ( Level::getDifficulty(v13) != 1 )
      {
        v14 = *((_DWORD *)v6 + 1123) - *((_DWORD *)v6 + 1122);
        if ( v12 < v14 )
        {
          _R3 = (int)v6 + 4444;
          __asm
          {
            VMOV.F32        S2, #0.5
            VLDR            S0, [R3]
            VCVT.F32.S32    S0, S0
            VMUL.F32        S0, S0, S2
            VCVTR.S32.F32   S0, S0
            VMOV            R3, S0
          }
          *((_DWORD *)v6 + 1111) = _R3;
          *((_DWORD *)v6 + 1123) = v14;
        }
      }
      if ( v12 <= *((_DWORD *)v6 + 1099) && *((_DWORD *)v6 + 1100) >= 1 )
        WitherBoss::changePhase(v6);
      v21 = Entity::getLevel(v6);
      (*(void (__fastcall **)(unsigned int *, const EntityDamageSource *))(*(_DWORD *)v5 + 32))(&v29, v5);
      v23 = Level::fetchEntity(v21, v22, v29, v30, 0);
      if ( v23 )
        v24 = (Sensing *)Mob::getSensing(v6);
        v25 = Sensing::canSee(v24, (const Entity *)v23);
        _R4 = (*(int (__fastcall **)(WitherBoss *))(*(_DWORD *)v6 + 52))(v6);
        _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)v23 + 52))(v23);
        __asm
          VLDR            S16, [R0]
          VLDR            S18, [R0,#4]
          VLDR            S20, [R0,#8]
          VLDR            S22, [R4]
          VLDR            S24, [R4,#4]
          VLDR            S26, [R4,#8]
        if ( v23 == Entity::getTarget(v6) )
          if ( v25 != 1 )
            goto LABEL_26;
            VSUB.F32        S0, S22, S16
            VSUB.F32        S2, S24, S18
          _R0 = (int)v6 + 4504;
            VSUB.F32        S4, S26, S20
            VMUL.F32        S0, S0, S0
            VMUL.F32        S2, S2, S2
            VMUL.F32        S4, S4, S4
            VADD.F32        S0, S2, S0
            VLDR            S2, [R0]
            VADD.F32        S0, S0, S4
            VCMPE.F32       S2, S0
            VMRS            APSR_nzcv, FPSCR
          if ( _NF ^ _VF )
LABEL_26:
            *((_DWORD *)v6 + 1115) = 1;
        if ( *((_DWORD *)v6 + 809) )
          if ( EntityClassTree::isInstanceOf(v23, 319) == 1 )
            BossComponent::addPlayerToParty(
              *((_DWORD *)v6 + 809),
              *(_DWORD *)(v23 + 4568),
              *(_QWORD *)(v23 + 4560),
              *(_QWORD *)(v23 + 4568),
              v8);
      result = 1;
    else
  }
  else
    result = 0;
  return result;
}


signed int __fastcall WitherBoss::getEntityTypeId(WitherBoss *this)
{
  return 68404;
}


void __fastcall WitherBoss::handleEntityEvent(int a1, signed int a2, Mob *a3)
{
  if ( a2 == 3 )
    *(_DWORD *)(a1 + 4480) = 200;
  else
    j_j_j__ZN3Mob17handleEntityEventE11EntityEventi((MinecraftEventing *)a1, a2, a3);
}


int __fastcall WitherBoss::canBeAffectedByArrow(WitherBoss *this, const MobEffectInstance *a2)
{
  WitherBoss *v2; // r5@1
  const MobEffectInstance *v3; // r4@1
  int result; // r0@2

  v2 = this;
  v3 = a2;
  if ( (unsigned __int16)SynchedEntityData::getShort((WitherBoss *)((char *)this + 176), 53) )
    result = (*(int (__fastcall **)(WitherBoss *, const MobEffectInstance *))(*(_DWORD *)v2 + 1068))(v2, v3);
  else
    result = 0;
  return result;
}


Entity *__fastcall WitherBoss::~WitherBoss(WitherBoss *this)
{
  Mob *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26F08DC;
  EntityDamageByBlockSource::~EntityDamageByBlockSource((WitherBoss *)((char *)this + 4524));
  return j_j_j__ZN3MobD2Ev_0(v1);
}


signed int __fastcall WitherBoss::remove(WitherBoss *this)
{
  Entity *v1; // r4@1
  int v2; // r5@1
  unsigned int v3; // r0@1
  int v4; // r5@1
  __int64 *v5; // r0@2

  v1 = this;
  v2 = Entity::getLevel(this);
  v3 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v1 + 524))(v1);
  v4 = Level::getDimension(v2, v3);
  if ( v4 )
  {
    v5 = (__int64 *)Entity::getUniqueID(v1);
    Dimension::removeWither(v4, v5);
  }
  return j_j_j__ZN6Entity6removeEv(v1);
}


InstantaneousAttributeBuff *__fastcall WitherBoss::heal(WitherBoss *this, int a2)
{
  int v2; // r4@1
  Entity *v3; // r5@1
  InstantaneousAttributeBuff *result; // r0@1
  BlockSource *v5; // r0@2
  Level *v6; // r0@2
  AttributeInstance *v7; // r5@3
  __int64 v9; // r2@3
  int v15; // [sp+0h] [bp-48h]@3

  v2 = a2;
  v3 = this;
  result = (InstantaneousAttributeBuff *)Mob::getHealth(this);
  if ( (signed int)result >= 1 )
  {
    v5 = (BlockSource *)Entity::getRegion(v3);
    v6 = (Level *)BlockSource::getLevel(v5);
    result = (InstantaneousAttributeBuff *)Level::isClientSide(v6);
    if ( !result )
    {
      v7 = (AttributeInstance *)(*(int (__fastcall **)(Entity *, void *))(*(_DWORD *)v3 + 1000))(
                                  v3,
                                  &SharedAttributes::HEALTH);
      _R0 = -v2;
      LODWORD(v9) = 4;
      __asm
      {
        VMOV            S0, R0
        VCVT.F32.S32    S0, S0
        VMOV            R1, S0
      }
      InstantaneousAttributeBuff::InstantaneousAttributeBuff((int)&v15, _R1, v9);
      AttributeInstance::addBuff(v7, (const AttributeBuff *)&v15);
      result = InstantaneousAttributeBuff::~InstantaneousAttributeBuff((InstantaneousAttributeBuff *)&v15);
    }
  }
  return result;
}


int __fastcall WitherBoss::addSkeleton(int result)
{
  ++*(_DWORD *)(result + 4472);
  return result;
}


int __fastcall WitherBoss::setIsPathing(int result, bool a2)
{
  *(_BYTE *)(result + 4465) = a2;
  return result;
}


int __fastcall WitherBoss::canSummonSkeleton(WitherBoss *this)
{
  return 0;
}


int __fastcall WitherBoss::setWantsToMove(int result, bool a2)
{
  *(_BYTE *)(result + 4464) = a2;
  return result;
}


signed int __fastcall WitherBoss::isPowered(WitherBoss *this)
{
  __int16 v1; // r0@1
  signed int v2; // r1@1

  v1 = SynchedEntityData::getShort((WitherBoss *)((char *)this + 176), 53);
  v2 = 0;
  if ( !v1 )
    v2 = 1;
  return v2;
}


unsigned int __fastcall WitherBoss::setAlternativeTarget(int a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // r5@1
  unsigned __int64 v4; // r6@1
  int v5; // r8@1
  unsigned int result; // r0@1
  __int64 v7; // r0@3
  __int64 v8; // r0@4
  __int64 v9; // r0@5
  SynchedEntityData *v10; // r0@8
  int v11; // r1@8
  int v12; // r0@11
  int v13; // r1@11
  unsigned int v14; // r1@17
  unsigned int v15; // r1@19
  unsigned int v16; // r0@19

  v3 = HIDWORD(a3);
  v4 = __PAIR__(a2, (unsigned int)a3);
  v5 = a1;
  result = a3 & HIDWORD(a3);
  if ( !a2 )
  {
    if ( result != -1 )
    {
      if ( SynchedEntityData::getInt64((SynchedEntityData *)(v5 + 176), 51) == a3 )
      {
        v12 = v5;
        v13 = 1;
LABEL_14:
        WitherBoss::setAlternativeTarget(v12, v13, -1LL);
        goto LABEL_15;
      }
      if ( SynchedEntityData::getInt64((SynchedEntityData *)(v5 + 176), 51) == __PAIR__(v3, (unsigned int)v4) )
        v13 = 2;
        goto LABEL_14;
    }
LABEL_15:
    v10 = (SynchedEntityData *)(v5 + 176);
    v11 = 50;
    goto LABEL_17;
  }
  if ( result != -1 )
    v7 = SynchedEntityData::getInt64((SynchedEntityData *)(v5 + 176), 50);
    result = v7 ^ v4 | HIDWORD(v7) ^ v3;
    if ( !result )
      return result;
    v8 = SynchedEntityData::getInt64((SynchedEntityData *)(v5 + 176), 51);
    result = v8 ^ v4 | HIDWORD(v8) ^ v3;
    v9 = SynchedEntityData::getInt64((SynchedEntityData *)(v5 + 176), 52);
    result = v9 ^ v4 | HIDWORD(v9) ^ v3;
  if ( HIDWORD(v4) == 1 )
    v11 = 51;
  else
    if ( HIDWORD(v4) != 2 )
    v11 = 52;
LABEL_17:
  result = SynchedEntityData::_get(v10, v11);
  v14 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v14 == 7 )
    HIDWORD(v4) = *(_DWORD *)(result + 20) ^ v3;
    if ( v4 != *(_DWORD *)(result + 16) )
      *(_DWORD *)(result + 16) = v4;
      *(_DWORD *)(result + 20) = v3;
      *(_BYTE *)(result + 8) = 1;
      v15 = v14 >> 16;
      v16 = *(_WORD *)(v5 + 188);
      if ( v16 >= v15 )
        LOWORD(v16) = v15;
      *(_WORD *)(v5 + 188) = v16;
      result = *(_WORD *)(v5 + 190);
      if ( result > v15 )
        LOWORD(v15) = *(_WORD *)(v5 + 190);
      *(_WORD *)(v5 + 190) = v15;
  return result;
}


signed int __fastcall WitherBoss::getExperienceReward(WitherBoss *this)
{
  return 50;
}


int __fastcall WitherBoss::canDestroy(WitherBoss *this, const Block *a2)
{
  Block *v2; // r4@1
  int result; // r0@12

  v2 = this;
  if ( Block::isType(this, (const Block *)Block::mBedrock)
    || Block::isType(v2, (const Block *)Block::mEndPortal)
    || Block::isType(v2, (const Block *)Block::mEndPortalFrame)
    || Block::isType(v2, (const Block *)Block::mCommandBlock)
    || Block::isType(v2, (const Block *)Block::mRepeatingCommandBlock)
    || Block::isType(v2, (const Block *)Block::mChainCommandBlock)
    || Block::isType(v2, (const Block *)Block::mInvisibleBedrock)
    || Block::isType(v2, (const Block *)Block::mBorder)
    || Block::isType(v2, Block::mAllow)
    || Block::isType(v2, Block::mDeny)
    || Block::isType(v2, (const Block *)Block::mChalkboard) )
  {
    result = 0;
  }
  else
    result = Block::isType(v2, Block::mCameraBlock) ^ 1;
  return result;
}


signed int __fastcall WitherBoss::canShoot(WitherBoss *this)
{
  WitherBoss *v1; // r1@1
  signed int result; // r0@4

  v1 = this;
  if ( *((_DWORD *)this + 1115) || *((_BYTE *)this + 4464) || *((_BYTE *)this + 4405) )
  {
    result = 0;
  }
  else
    if ( !*((_DWORD *)v1 + 1106) && *((_DWORD *)v1 + 1124) < 1 )
      result = 1;
  return result;
}


int __fastcall WitherBoss::getFiringPos(WitherBoss *this, int a2)
{
  WitherBoss *v2; // r4@1
  int v4; // r0@1
  int result; // r0@2

  v2 = this;
  _R5 = a2;
  v4 = *(_DWORD *)(a2 + 4532);
  if ( v4 <= 0 )
  {
    __asm
    {
      VMOV.F32        S0, #3.0
      VLDR            S2, [R5,#0x4C]
    }
    result = *(_DWORD *)(a2 + 80);
    *(_DWORD *)v2 = *(_DWORD *)(a2 + 72);
    *((_DWORD *)v2 + 2) = result;
    __asm { VADD.F32        S0, S2, S0 }
  }
  else
    _R1 = a2 + 3412;
    _R0 = 180 * v4 - 180;
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VLDR            S2, [R1]
    _R0 = &mce::Math::DEGRAD;
      VADD.F32        S0, S2, S0
      VLDR            S2, [R0]
      VMUL.F32        S0, S0, S2
      VMOV            R6, S0
    _R0 = cosf(_R6);
      VMOV            S18, R0
      VLDR            S16, =1.3
    _R0 = sinf(_R6);
      VMUL.F32        S18, S18, S16
      VMUL.F32        S16, S0, S16
    result = (*(int (__fastcall **)(int))(*(_DWORD *)_R5 + 52))(_R5);
      VLDR            S0, [R0]
      VLDR            S4, [R0,#8]
      VADD.F32        S6, S0, S18
      VLDR            S2, [R0,#4]
      VLDR            S0, =2.2
      VADD.F32        S4, S4, S16
      VSTR            S6, [R4]
      VSTR            S4, [R4,#8]
  __asm { VSTR            S0, [R4,#4] }
  return result;
}


void __fastcall WitherBoss::readAdditionalSaveData(WitherBoss *this, const CompoundTag *a2)
{
  WitherBoss::readAdditionalSaveData(this, a2);
}


void __fastcall WitherBoss::_performRangedAttack(WitherBoss *this, int a2, const Vec3 *a3, int a4)
{
  int v6; // r8@1
  int v7; // r7@1
  Level *v21; // r0@4
  Level **v22; // r6@4
  void *v24; // r0@5
  unsigned int *v25; // r2@6
  signed int v26; // r1@8
  unsigned int *v28; // r2@12
  signed int v29; // r1@14
  int v30; // [sp+4h] [bp-54h]@0
  int v31; // [sp+8h] [bp-50h]@10
  int v32; // [sp+Ch] [bp-4Ch]@5

  _R4 = this;
  _R6 = a3;
  v6 = a4;
  v7 = a2;
  (*(void (**)(void))(*(_DWORD *)this + 556))();
  *((_DWORD *)_R4 + 1133) = v7;
  if ( v7 <= 0 )
  {
    __asm
    {
      VMOV.F32        S0, #3.0
      VLDR            S2, [R4,#0x4C]
    }
    _R7 = *((_DWORD *)_R4 + 20);
    _R5 = *((_DWORD *)_R4 + 18);
    __asm { VADD.F32        S16, S2, S0 }
  }
  else
    _R1 = (int)_R4 + 3412;
    _R0 = 180 * v7 - 180;
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VLDR            S2, [R1]
    _R0 = &mce::Math::DEGRAD;
      VADD.F32        S0, S2, S0
      VLDR            S2, [R0]
      VMUL.F32        S0, S0, S2
      VMOV            R7, S0
    _R5 = cosf(_R7);
    _R0 = sinf(_R7);
      VMOV            S2, R0
      VLDR            S0, =1.3
      VMOV            S4, R5
      VMUL.F32        S16, S2, S0
      VMUL.F32        S18, S4, S0
    _R0 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)_R4 + 52))(_R4);
      VLDR            S0, [R0]
      VLDR            S4, [R0,#8]
      VADD.F32        S0, S0, S18
      VLDR            S2, [R0,#4]
      VADD.F32        S4, S4, S16
      VMOV            R5, S0
      VLDR            S0, =2.2
      VMOV            R7, S4
      VADD.F32        S16, S2, S0
  __asm
    VMOV.F32        S0, #-0.5
    VLDR            S2, [R6,#4]
    VLDR            S22, [R6]
    VLDR            S18, [R6,#8]
    VADD.F32        S20, S2, S0
  v21 = (Level *)Entity::getLevel(_R4);
  v22 = (Level **)Level::getProjectileFactory(v21);
  if ( v6 == 1 )
    EntityTypeToString((void **)&v32, 0x40005Bu, 1);
      VMOV            S0, R5
      VSUB.F32        S2, S20, S16
      VSUB.F32        S0, S22, S0
      VMOV            R3, S0
      VMOV            S0, R7
      VSUB.F32        S0, S18, S0
      VSTR            S2, [SP,#0x58+var_58]
      VSTR            S0, [SP,#0x58+var_54]
    ProjectileFactory::shootProjectileFromDefinition(v22, &v32, _R4, _R3, 0, v30);
    v24 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v32 - 4);
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
LABEL_21:
        j_j_j_j__ZdlPv_9(v24);
        return;
    EntityTypeToString((void **)&v31, 0x400059u, 1);
    ProjectileFactory::shootProjectileFromDefinition(v22, &v31, _R4, _R3, 0, v30);
    v24 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v31 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        goto LABEL_21;
}


void __fastcall WitherBoss::_performRangedAttack(WitherBoss *this, int a2, const Vec3 *a3, int a4)
{
  WitherBoss::_performRangedAttack(this, a2, a3, a4);
}


void __fastcall WitherBoss::newServerAiStep(WitherBoss *this)
{
  WitherBoss::newServerAiStep(this);
}


void __fastcall WitherBoss::handleEntityEvent(int a1, signed int a2, Mob *a3)
{
  WitherBoss::handleEntityEvent(a1, a2, a3);
}


int __fastcall WitherBoss::getSwellAmount(WitherBoss *this, float _R1)
{
  int result; // r0@1

  __asm { VMOV            S4, R1 }
  _R2 = (char *)this + 4516;
  _R0 = (char *)this + 4512;
  __asm
  {
    VLDR            S0, [R2]
    VLDR            S2, [R0]
    VSUB.F32        S2, S2, S0
    VMUL.F32        S2, S2, S4
    VADD.F32        S0, S2, S0
    VLDR            S2, =0.035714
    VMUL.F32        S0, S0, S2
    VMOV            R0, S0
  }
  return result;
}


void __fastcall WitherBoss::~WitherBoss(WitherBoss *this)
{
  WitherBoss::~WitherBoss(this);
}


void __fastcall WitherBoss::addAdditionalSaveData(WitherBoss *this, CompoundTag *a2)
{
  WitherBoss::addAdditionalSaveData(this, a2);
}


                if ( !Material::isType(v24, 0) && WitherBoss::canDestroy(v23, v25) == 1 )
{
                  v26 = BlockSource::removeBlock(v36, (const BlockPos *)&v40);
                  v16 = v34;
                  (*(void (__fastcall **)(WitherBoss *, const BlockPos *, int *, _DWORD))(*(_DWORD *)v23 + 276))(
                    v23,
                    v36,
                    &v40,
                    v39);
                  _R8 = v33;
                  v35 |= v26;
                }
                __asm
                {
                  VLDR            S0, [R8,#0x10]
                  VCVTR.S32.F32   S0, S0
                  VMOV            R0, S0
              }
              while ( v21 < _R0 + v5 );
              __asm { VLDR            S0, [R8,#0x14] }
            }
            __asm
            {
              VCVTR.S32.F32   S2, S0
              VMOV            R0, S2
            v29 = _R0 + v5;
            _VF = __OFSUB__(v16, v29);
            _NF = v16++ - v29 < 0;
          }
          while ( _NF ^ _VF );
          __asm { VLDR            S2, [R8,#0xC] }
        }
        __asm
        {
          VCVTR.S32.F32   S4, S2
          VMOV            R0, S4
        v31 = _R0 + v5;
        _VF = __OFSUB__(v13, v31);
        _NF = v13++ - v31 < 0;
      }
      while ( _NF ^ _VF );
      result = v35;
      if ( v35 & 1 )
      {
        v32 = (Level *)BlockSource::getLevel(v36);
        AABB::getCenter((AABB *)&v37, (int)_R8);
        result = Level::broadcastSoundEvent(v32, (int)v36, 53, (int)&v37, -1, 68404, 0, 0);
    }
  }
  return result;
}


signed int __fastcall WitherBoss::getAerialAttack(WitherBoss *this)
{
  signed int result; // r0@1

  result = (unsigned __int16)SynchedEntityData::getShort((WitherBoss *)((char *)this + 176), 53);
  if ( (_WORD)result )
    result = 1;
  return result;
}


int __fastcall WitherBoss::removeSkeleton(int result)
{
  --*(_DWORD *)(result + 4472);
  return result;
}


int __fastcall WitherBoss::setShotDelay(int result, int a2)
{
  *(_DWORD *)(result + 4496) = a2;
  return result;
}


int __fastcall WitherBoss::getArmorValue(WitherBoss *this)
{
  int result; // r0@1

  result = Mob::getArmorValue(this) + 4;
  if ( result >= 20 )
    result = 20;
  return result;
}


unsigned int __fastcall WitherBoss::makeInvulnerable(WitherBoss *this)
{
  WitherBoss *v1; // r4@1
  unsigned int result; // r0@1
  unsigned int v3; // r1@1
  unsigned int v4; // r1@3
  unsigned int v5; // r0@3

  v1 = this;
  *((_DWORD *)this + 105) = 200;
  result = SynchedEntityData::_get((WitherBoss *)((char *)this + 176), 49);
  v3 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v3 == 2 && *(_DWORD *)(result + 12) != 200 )
  {
    v4 = v3 >> 16;
    *(_DWORD *)(result + 12) = 200;
    *(_BYTE *)(result + 8) = 1;
    v5 = *((_WORD *)v1 + 94);
    if ( v5 >= v4 )
      LOWORD(v5) = v4;
    *((_WORD *)v1 + 94) = v5;
    result = *((_WORD *)v1 + 95);
    if ( result > v4 )
      LOWORD(v4) = *((_WORD *)v1 + 95);
    *((_WORD *)v1 + 95) = v4;
  }
  return result;
}


int __fastcall WitherBoss::reloadHardcoded(Entity *this, int a2)
{
  Entity *v2; // r4@1
  int v3; // r5@1
  void *v4; // r7@2
  int v5; // r6@2
  void *v6; // r0@3
  void *v7; // r7@4
  void *v8; // r0@5
  int v10; // r0@13
  unsigned int v11; // r1@13
  unsigned int v12; // r1@15
  unsigned int v13; // r0@15
  AttributeInstance *v14; // r0@20
  AttributeInstance *v15; // r0@20
  int v16; // r0@20
  unsigned int v17; // r1@20
  unsigned int v18; // r1@22
  unsigned int v19; // r0@22
  Level *v20; // r0@27
  AttributeInstance *v21; // r5@28
  Level *v26; // r0@29
  AttributeInstance *v30; // r0@32
  int v31; // r5@33
  unsigned __int64 *v32; // r0@33
  int result; // r0@33

  v2 = this;
  v3 = a2;
  if ( !*((_BYTE *)this + 3081) )
  {
    v4 = operator new(0x50u);
    BossComponent::BossComponent((int)v4, v2, 1);
    v5 = *((_DWORD *)v2 + 809);
    *((_DWORD *)v2 + 809) = v4;
    if ( v5 )
    {
      v6 = *(void **)(v5 + 56);
      if ( v6 )
      {
        do
        {
          v7 = *(void **)v6;
          operator delete(v6);
          v6 = v7;
        }
        while ( v7 );
      }
      _aeabi_memclr4(*(_QWORD *)(v5 + 48), 4 * (*(_QWORD *)(v5 + 48) >> 32));
      *(_DWORD *)(v5 + 56) = 0;
      *(_DWORD *)(v5 + 60) = 0;
      v8 = *(void **)(v5 + 48);
      if ( v8 && (void *)(v5 + 72) != v8 )
        operator delete(v8);
      operator delete((void *)v5);
    }
  }
  _ZF = v3 == 2;
  if ( v3 == 2 )
    _ZF = *((_BYTE *)v2 + 3081) == 0;
  if ( _ZF )
    (*(void (__fastcall **)(Entity *, signed int, signed int))(*(_DWORD *)v2 + 680))(v2, 1065353216, 1080033280);
    *((_BYTE *)v2 + 3473) = 0;
    v10 = SynchedEntityData::_get((Entity *)((char *)v2 + 176), 53);
    v11 = *(_DWORD *)(v10 + 4);
    if ( (unsigned __int8)v11 == 1 && *(_WORD *)(v10 + 10) != 1 )
      v12 = v11 >> 16;
      *(_WORD *)(v10 + 10) = 1;
      *(_BYTE *)(v10 + 8) = 1;
      v13 = *((_WORD *)v2 + 94);
      if ( v13 >= v12 )
        LOWORD(v13) = v12;
      *((_WORD *)v2 + 94) = v13;
      if ( *((_WORD *)v2 + 95) > v12 )
        LOWORD(v12) = *((_WORD *)v2 + 95);
      *((_WORD *)v2 + 95) = v12;
    *((_DWORD *)v2 + 1077) = 120;
    *((_DWORD *)v2 + 1108) = 200;
    v14 = (AttributeInstance *)(*(int (__fastcall **)(Entity *, void *))(*(_DWORD *)v2 + 1000))(
                                 v2,
                                 &SharedAttributes::MOVEMENT_SPEED);
    AttributeInstance::setDefaultValue(v14, 0.6, 2);
    v15 = (AttributeInstance *)(*(int (__fastcall **)(Entity *, void *))(*(_DWORD *)v2 + 1000))(
                                 &SharedAttributes::FOLLOW_RANGE);
    AttributeInstance::setDefaultValue(v15, 70.0, 2);
    *((_DWORD *)v2 + 105) = 200;
    v16 = SynchedEntityData::_get((Entity *)((char *)v2 + 176), 49);
    v17 = *(_DWORD *)(v16 + 4);
    if ( (unsigned __int8)v17 == 2 && *(_DWORD *)(v16 + 12) != 200 )
      v18 = v17 >> 16;
      *(_DWORD *)(v16 + 12) = 200;
      *(_BYTE *)(v16 + 8) = 1;
      v19 = *((_WORD *)v2 + 94);
      if ( v19 >= v18 )
        LOWORD(v19) = v18;
      *((_WORD *)v2 + 94) = v19;
      if ( *((_WORD *)v2 + 95) > v18 )
        LOWORD(v18) = *((_WORD *)v2 + 95);
      *((_WORD *)v2 + 95) = v18;
    v20 = (Level *)Entity::getLevel(v2);
    if ( Level::getDifficulty(v20) == 1 )
      v21 = (AttributeInstance *)(*(int (__fastcall **)(_DWORD, void *))(*(_DWORD *)v2 + 1000))(
                                   v2,
                                   &SharedAttributes::HEALTH);
      _R0 = Mob::getMaxHealth(v2);
      __asm { VMOV.F32        S16, #0.5 }
    else
      v26 = (Level *)Entity::getLevel(v2);
      if ( Level::getDifficulty(v26) != 2 )
LABEL_32:
        *((_DWORD *)v2 + 1117) = Mob::getMaxHealth(v2);
        v30 = (AttributeInstance *)(*(int (__fastcall **)(Entity *, void *))(*(_DWORD *)v2 + 1000))(
                                     v2,
                                     &SharedAttributes::HEALTH);
        AttributeInstance::setDefaultValue(v30, 1.0, 2);
        *((_DWORD *)v2 + 1123) = Mob::getMaxHealth(v2);
        goto LABEL_33;
      v21 = (AttributeInstance *)(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v2 + 1000))(
      __asm { VMOV.F32        S16, #0.75 }
    __asm
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VMUL.F32        S0, S0, S16
      VMOV            R1, S0
    AttributeInstance::setMaxValue(v21, _R1);
    _R1 = (int)v2 + 4304;
      VLDR            S0, [R1]
      VCVTR.S32.F32   S0, S0
    *((_DWORD *)v2 + 1076) = _R1;
    goto LABEL_32;
LABEL_33:
  v31 = Entity::getDimension(v2);
  v32 = (unsigned __int64 *)Entity::getUniqueID(v2);
  Dimension::addWither(v31, v32);
  *((_DWORD *)v2 + 1099) = Mob::getMaxHealth(v2) / 2;
  _R0 = Mob::getMaxHealth(v2);
  _R1 = 715827883;
  __asm { SMMUL.W         R0, R0, R1 }
  result = _R0 + (_R0 >> 31);
  *((_DWORD *)v2 + 1122) = result;
  return result;
}


int __fastcall WitherBoss::awardSpawnWitherAchievement(WitherBoss *this)
{
  int v8; // r6@1
  _QWORD *v9; // r0@1
  int result; // r0@1
  int v11; // [sp+0h] [bp-48h]@0
  int v12; // [sp+4h] [bp-44h]@0
  int v13; // [sp+8h] [bp-40h]@0
  _QWORD *v14; // [sp+Ch] [bp-3Ch]@1
  int (*v15)(void); // [sp+14h] [bp-34h]@1
  signed int (__fastcall *v16)(int *, Entity *); // [sp+18h] [bp-30h]@1
  char v17; // [sp+1Ch] [bp-2Ch]@1

  _R4 = __PAIR__(&v17, (unsigned int)this);
  __asm
  {
    VLDR            S0, =-50.5
    VLDR            S2, [R4,#0x48]
    VLDR            S4, [R4,#0x4C]
    VLDR            S6, [R4,#0x50]
    VADD.F32        S10, S2, S0
    VLDR            S8, =-51.75
    VADD.F32        S0, S4, S0
    VADD.F32        S8, S6, S8
    VMOV            R1, S10
    VMOV            R2, S0
    VLDR            S0, =51.75
    VMOV            R3, S8
    VLDR            S8, =50.5
    VADD.F32        S0, S6, S0
    VADD.F32        S2, S2, S8
    VADD.F32        S4, S4, S8
    VSTR            S2, [SP,#0x48+var_48]
    VSTR            S4, [SP,#0x48+var_44]
    VSTR            S0, [SP,#0x48+var_40]
  }
  AABB::AABB(COERCE_FLOAT(&v17), _R1, _R2, v11, v12, v13);
  v8 = Entity::getLevel((Entity *)_R4);
  v9 = operator new(8u);
  *v9 = _R4;
  v14 = v9;
  v15 = (int (*)(void))sub_16C4110;
  v16 = sub_16C3ED0;
  result = Level::forEachPlayer(v8, (int)&v14);
  if ( v15 )
    result = v15();
  return result;
}


signed int __fastcall WitherBoss::changePhase(WitherBoss *this)
{
  WitherBoss *v1; // r4@1
  AttributeInstance *v2; // r0@1
  AttributeInstance *v9; // r0@1
  AttributeInstance *v10; // r5@1
  int v12; // r5@1
  unsigned int *v13; // r1@2
  unsigned int v14; // r0@4
  unsigned int *v15; // r6@8
  unsigned int v16; // r0@10
  int v17; // r0@15
  unsigned int v18; // r1@15
  unsigned int v19; // r1@17
  unsigned int v20; // r0@17
  signed int result; // r0@22
  int v22; // [sp+10h] [bp-30h]@1
  int v23; // [sp+14h] [bp-2Ch]@1
  float v24; // [sp+18h] [bp-28h]@1
  char v25; // [sp+1Ch] [bp-24h]@1
  int v26; // [sp+20h] [bp-20h]@1
  char v27; // [sp+24h] [bp-1Ch]@1

  v1 = this;
  --*((_DWORD *)this + 1100);
  *((_DWORD *)v1 + 1117) += *((_DWORD *)v1 + 1099) - Mob::getMaxHealth(this);
  v2 = (AttributeInstance *)(*(int (__fastcall **)(WitherBoss *, void *))(*(_DWORD *)v1 + 1000))(
                              v1,
                              &SharedAttributes::HEALTH);
  _R1 = *((_DWORD *)v1 + 1117);
  __asm
  {
    VMOV            S0, R1
    VCVT.F32.S32    S0, S0
    VMOV            R1, S0
  }
  AttributeInstance::setDefaultValue(v2, _R1, 2);
  v9 = (AttributeInstance *)(*(int (__fastcall **)(WitherBoss *, void *))(*(_DWORD *)v1 + 1000))(
  AttributeInstance::removeModifier(v9, (const mce::UUID *)&WitherBoss::MAX_HEALTH_CAP_UUID);
  v10 = (AttributeInstance *)(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)v1 + 1000))(
                               v1,
                               &SharedAttributes::HEALTH);
  _R0 = (int)v1 + 4468;
    VLDR            S0, [R0]
    VSTR            S0, [SP,#0x40+var_28]
  v22 = 2;
  v23 = 3;
  std::__shared_ptr<AttributeModifier,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<AttributeModifier>,mce::UUID const&,char const(&)[15],float,int,int>(
    (int)&v25,
    (int)&v27,
    (int)&WitherBoss::MAX_HEALTH_CAP_UUID,
    "PhaseHealthCap",
    (int)&v24,
    &v23,
    &v22);
  AttributeInstance::addModifier(v10, (const AttributeModifier **)&v25);
  v12 = v26;
  if ( v26 )
    v13 = (unsigned int *)(v26 + 4);
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
      v15 = (unsigned int *)(v12 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 8))(v12);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
      }
      else
        v16 = (*v15)--;
      if ( v16 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 12))(v12);
  v17 = SynchedEntityData::_get((WitherBoss *)((char *)v1 + 176), 53);
  v18 = *(_DWORD *)(v17 + 4);
  if ( (unsigned __int8)v18 == 1 && *(_WORD *)(v17 + 10) )
    v19 = v18 >> 16;
    *(_WORD *)(v17 + 10) = 0;
    *(_BYTE *)(v17 + 8) = 1;
    v20 = *((_WORD *)v1 + 94);
    if ( v20 >= v19 )
      LOWORD(v20) = v19;
    *((_WORD *)v1 + 94) = v20;
    if ( *((_WORD *)v1 + 95) > v19 )
      LOWORD(v19) = *((_WORD *)v1 + 95);
    *((_WORD *)v1 + 95) = v19;
  *((_BYTE *)v1 + 4404) = 1;
  *((_BYTE *)v1 + 4464) = 0;
  *((_DWORD *)v1 + 1111) = 20;
  result = 4484;
  *((_DWORD *)v1 + 1121) *= 2;
  return result;
}


void __fastcall WitherBoss::die(WitherBoss *this, const EntityDamageSource *a2)
{
  WitherBoss::die(this, a2);
}


unsigned int __fastcall WitherBoss::setInvulnerableTicks(WitherBoss *this, int a2)
{
  WitherBoss *v2; // r4@1
  int v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = this;
  v3 = a2;
  result = SynchedEntityData::_get((WitherBoss *)((char *)this + 176), 49);
  v5 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v5 == 2 && *(_DWORD *)(result + 12) != v3 )
  {
    *(_DWORD *)(result + 12) = v3;
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


void __fastcall WitherBoss::readAdditionalSaveData(WitherBoss *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  WitherBoss *v3; // r4@1
  int v4; // r7@1
  int v5; // r0@1
  unsigned int v6; // r1@1
  unsigned int v7; // r1@3
  unsigned int v8; // r0@3
  void *v9; // r0@8
  _BOOL4 v10; // r7@9
  int v11; // r0@9
  unsigned int v12; // r1@9
  unsigned int v13; // r1@11
  unsigned int v14; // r0@11
  void *v15; // r0@16
  void *v16; // r0@17
  void *v17; // r0@18
  void *v18; // r0@19
  void *v19; // r0@20
  void *v20; // r0@21
  void *v21; // r0@22
  void *v27; // r0@23
  void *v29; // r0@24
  void *v31; // r0@25
  void *v32; // r0@26
  unsigned int *v33; // r2@28
  signed int v34; // r1@30
  unsigned int *v35; // r2@32
  signed int v36; // r1@34
  unsigned int *v37; // r2@36
  signed int v38; // r1@38
  unsigned int *v39; // r2@40
  signed int v40; // r1@42
  unsigned int *v41; // r2@44
  signed int v42; // r1@46
  unsigned int *v43; // r2@48
  signed int v44; // r1@50
  unsigned int *v45; // r2@52
  signed int v46; // r1@54
  unsigned int *v47; // r2@56
  signed int v48; // r1@58
  unsigned int *v49; // r2@60
  signed int v50; // r1@62
  unsigned int *v51; // r2@64
  signed int v52; // r1@66
  unsigned int *v53; // r2@68
  signed int v54; // r1@70
  unsigned int *v55; // r2@72
  signed int v56; // r1@74
  int v57; // [sp+4h] [bp-74h]@26
  int v58; // [sp+Ch] [bp-6Ch]@25
  int v59; // [sp+14h] [bp-64h]@24
  int v60; // [sp+1Ch] [bp-5Ch]@23
  int v61; // [sp+24h] [bp-54h]@22
  int v62; // [sp+2Ch] [bp-4Ch]@21
  int v63; // [sp+34h] [bp-44h]@20
  int v64; // [sp+3Ch] [bp-3Ch]@19
  int v65; // [sp+44h] [bp-34h]@18
  int v66; // [sp+4Ch] [bp-2Ch]@17
  int v67; // [sp+54h] [bp-24h]@9
  int v68; // [sp+5Ch] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  Monster::readAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v68, "Invul");
  v4 = CompoundTag::getInt((int)v2, (const void **)&v68);
  v5 = SynchedEntityData::_get((WitherBoss *)((char *)v3 + 176), 49);
  v6 = *(_DWORD *)(v5 + 4);
  if ( (unsigned __int8)v6 == 2 && *(_DWORD *)(v5 + 12) != v4 )
  {
    *(_DWORD *)(v5 + 12) = v4;
    *(_BYTE *)(v5 + 8) = 1;
    v7 = v6 >> 16;
    v8 = *((_WORD *)v3 + 94);
    if ( v8 >= v7 )
      LOWORD(v8) = v7;
    *((_WORD *)v3 + 94) = v8;
    if ( *((_WORD *)v3 + 95) > v7 )
      LOWORD(v7) = *((_WORD *)v3 + 95);
    *((_WORD *)v3 + 95) = v7;
  }
  v9 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v68 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
    }
    else
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v67, "AirAttack");
  v10 = CompoundTag::getBoolean((int)v2, (const void **)&v67);
  v11 = SynchedEntityData::_get((WitherBoss *)((char *)v3 + 176), 53);
  v12 = *(_DWORD *)(v11 + 4);
  if ( (unsigned __int8)v12 == 1 && *(_WORD *)(v11 + 10) != v10 )
    *(_WORD *)(v11 + 10) = v10;
    *(_BYTE *)(v11 + 8) = 1;
    v13 = v12 >> 16;
    v14 = *((_WORD *)v3 + 94);
    if ( v14 >= v13 )
      LOWORD(v14) = v13;
    *((_WORD *)v3 + 94) = v14;
    if ( *((_WORD *)v3 + 95) > v13 )
      LOWORD(v13) = *((_WORD *)v3 + 95);
    *((_WORD *)v3 + 95) = v13;
  v15 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v67 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v66, "ShieldHealth");
  *((_DWORD *)v3 + 1079) = CompoundTag::getInt((int)v2, (const void **)&v66);
  v16 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v66 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v65, "Phase");
  *((_DWORD *)v3 + 1100) = CompoundTag::getInt((int)v2, (const void **)&v65);
  v17 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v65 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v64, "SpawningFrames");
  *((_DWORD *)v3 + 1108) = CompoundTag::getInt((int)v2, (const void **)&v64);
  v18 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v64 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  sub_21E94B4((void **)&v63, "maxHealth");
  *((_DWORD *)v3 + 1117) = CompoundTag::getInt((int)v2, (const void **)&v63);
  v19 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v63 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  sub_21E94B4((void **)&v62, "lastHealthInterval");
  *((_DWORD *)v3 + 857) = CompoundTag::getInt((int)v2, (const void **)&v62);
  v20 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v62 - 4);
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  sub_21E94B4((void **)&v61, "dyingFrames");
  *((_DWORD *)v3 + 1120) = CompoundTag::getInt((int)v2, (const void **)&v61);
  v21 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v47 = (unsigned int *)(v61 - 4);
        v48 = __ldrex(v47);
      while ( __strex(v48 - 1, v47) );
      v48 = (*v47)--;
    if ( v48 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  sub_21E94B4((void **)&v60, "overlayAlpha");
  _R0 = CompoundTag::getFloat((int)v2, (const void **)&v60);
  __asm
    VMOV            S0, R0
    VSTR            S0, [R1]
  v27 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v49 = (unsigned int *)(v60 - 4);
        v50 = __ldrex(v49);
      while ( __strex(v50 - 1, v49) );
      v50 = (*v49)--;
    if ( v50 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  sub_21E94B4((void **)&v59, "swellAmount");
  _R0 = CompoundTag::getFloat((int)v2, (const void **)&v59);
  v29 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v51 = (unsigned int *)(v59 - 4);
        v52 = __ldrex(v51);
      while ( __strex(v52 - 1, v51) );
      v52 = (*v51)--;
    if ( v52 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  sub_21E94B4((void **)&v58, "oldSwellAmount");
  _R0 = CompoundTag::getFloat((int)v2, (const void **)&v58);
  v31 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v58 - 4);
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  sub_21E94B4((void **)&v57, "firerate");
  *((_DWORD *)v3 + 1111) = CompoundTag::getInt((int)v2, (const void **)&v57);
  v32 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v57 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v32);
}


void __fastcall WitherBoss::_performRangedAttack(WitherBoss *this, int a2, Entity *a3)
{
  int v3; // r5@1
  WitherBoss *v4; // r4@1
  const Vec3 *v5; // r2@2
  int v6; // r0@3
  char v7; // r6@3
  const Vec3 *v8; // r2@3
  int v9; // r3@3
  int v10; // r1@7

  v3 = a2;
  v4 = this;
  if ( a2 )
  {
    v5 = (const Vec3 *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)a3 + 52))(a3);
    j_j_j__ZN10WitherBoss20_performRangedAttackEiRK4Vec3b(v4, v3, v5, 0);
  }
  else
    *((_DWORD *)this + 1125) = 0;
    v6 = *((_DWORD *)this + 1107);
    v7 = v6 + 1;
    *((_DWORD *)v4 + 1107) = v6 + 1;
    v8 = (const Vec3 *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)a3 + 52))(a3);
    v9 = 0;
    if ( !(*((_DWORD *)v4 + 1107) & 3) )
      v9 = 1;
    WitherBoss::_performRangedAttack(v4, 0, v8, v9);
    if ( !(v7 & 3) )
    {
      *((_DWORD *)v4 + 1115) = *((_DWORD *)v4 + 1121);
      if ( !(unsigned __int16)SynchedEntityData::getShort((WitherBoss *)((char *)v4 + 176), 53) )
      {
        v10 = *((_BYTE *)v4 + 4508);
        *((_BYTE *)v4 + 4508) = v10 ^ 1;
        if ( v10 == 1 )
        {
          *((_DWORD *)v4 + 1115) = 0;
          *((_DWORD *)v4 + 1124) = 60;
        }
      }
    }
}


int __fastcall WitherBoss::reloadHardcodedClient(Entity *a1)
{
  Entity *v1; // r4@1
  int v2; // r5@1
  unsigned __int64 *v3; // r1@1

  v1 = a1;
  v2 = Entity::getDimension(a1);
  v3 = (unsigned __int64 *)Entity::getUniqueID(v1);
  return j_j_j__ZN9Dimension9addWitherERK14EntityUniqueID(v2, v3);
}


unsigned int __fastcall WitherBoss::setAerialAttack(WitherBoss *this, int a2)
{
  WitherBoss *v2; // r4@1
  int v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = this;
  v3 = a2;
  result = SynchedEntityData::_get((WitherBoss *)((char *)this + 176), 53);
  v5 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v5 == 1 && *(_WORD *)(result + 10) != v3 )
  {
    *(_WORD *)(result + 10) = v3;
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


int __fastcall WitherBoss::startRiding(WitherBoss *this, Entity *a2)
{
  return 0;
}


int __fastcall WitherBoss::getHeadRot(int result, int a2, int a3)
{
  int v3; // r1@1
  int v4; // r2@1
  int v5; // r1@1

  v3 = a2 + 8 * a3;
  v4 = *(_DWORD *)(v3 + 4320);
  v5 = *(_DWORD *)(v3 + 4324);
  *(_DWORD *)result = v4;
  *(_DWORD *)(result + 4) = v5;
  return result;
}


int __fastcall WitherBoss::getAlternativeTarget(WitherBoss *this, int a2, int a3)
{
  WitherBoss *v3; // r4@1
  __int64 v4; // r0@4
  SynchedEntityData *v5; // r0@5
  int v6; // r1@5

  v3 = this;
  if ( a3 == 2 )
  {
    v5 = (SynchedEntityData *)(a2 + 176);
    v6 = 52;
    goto LABEL_8;
  }
  if ( a3 == 1 )
    v6 = 51;
  if ( !a3 )
    v6 = 50;
LABEL_8:
    v4 = SynchedEntityData::getInt64(v5, v6);
    *(_QWORD *)v3 = v4;
    return v4;
  LODWORD(v4) = -1;
  *(_DWORD *)v3 = -1;
  *((_DWORD *)v3 + 1) = -1;
  return v4;
}


int __fastcall WitherBoss::WitherBoss(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r6@1
  int v5; // r5@2
  _BYTE *v6; // r0@2
  signed __int16 v7; // r7@2
  int v8; // r1@2
  unsigned int v9; // r0@4
  int v10; // r5@10
  _BYTE *v11; // r0@10
  signed __int16 v12; // r7@10
  int v13; // r1@10
  unsigned int v14; // r0@12
  int v15; // r5@18
  _BYTE *v16; // r0@18
  signed __int16 v17; // r7@18
  int v18; // r1@18
  unsigned int v19; // r0@20
  int v20; // r5@26
  _BYTE *v21; // r0@26
  signed __int16 v22; // r7@26
  int v23; // r1@26
  unsigned int v24; // r0@28
  int v25; // r5@34
  _BYTE *v26; // r0@34
  signed __int16 v27; // r6@34
  int v28; // r1@34
  unsigned int v29; // r0@36

  v3 = a1;
  Monster::Monster(a1, a2, a3);
  *(_DWORD *)v3 = &off_26F08DC;
  *(_DWORD *)(v3 + 4304) = 40;
  *(_DWORD *)(v3 + 4320) = 0;
  *(_DWORD *)(v3 + 4324) = 0;
  *(_DWORD *)(v3 + 4328) = 0;
  *(_DWORD *)(v3 + 4332) = 0;
  *(_DWORD *)(v3 + 4336) = 0;
  *(_DWORD *)(v3 + 4340) = 0;
  *(_DWORD *)(v3 + 4344) = 0;
  *(_DWORD *)(v3 + 4348) = 0;
  *(_DWORD *)(v3 + 4352) = 0;
  *(_DWORD *)(v3 + 4356) = 0;
  *(_DWORD *)(v3 + 4360) = 0;
  *(_DWORD *)(v3 + 4364) = 0;
  *(_DWORD *)(v3 + 4400) = 1;
  *(_WORD *)(v3 + 4404) = 0;
  *(_DWORD *)(v3 + 4432) = 0;
  *(_DWORD *)(v3 + 4428) = 0;
  *(_DWORD *)(v3 + 4424) = 0;
  *(_DWORD *)(v3 + 4420) = 0;
  *(_DWORD *)(v3 + 4416) = 0;
  *(_DWORD *)(v3 + 4412) = 0;
  *(_DWORD *)(v3 + 4408) = 0;
  *(_DWORD *)(v3 + 4436) = 15;
  *(_DWORD *)(v3 + 4440) = 3;
  *(_DWORD *)(v3 + 4444) = 20;
  *(_DWORD *)(v3 + 4448) = 1092616192;
  *(_DWORD *)(v3 + 4452) = 1065353216;
  *(_DWORD *)(v3 + 4472) = 0;
  *(_WORD *)(v3 + 4464) = 0;
  *(_DWORD *)(v3 + 4460) = 0;
  *(_DWORD *)(v3 + 4456) = 0;
  *(_DWORD *)(v3 + 4476) = 3;
  *(_DWORD *)(v3 + 4480) = 0;
  *(_DWORD *)(v3 + 4484) = 40;
  *(_DWORD *)(v3 + 4488) = -1;
  *(_DWORD *)(v3 + 4492) = -1;
  *(_DWORD *)(v3 + 4496) = 0;
  *(_DWORD *)(v3 + 4500) = 0;
  *(_DWORD *)(v3 + 4504) = 1106247680;
  *(_BYTE *)(v3 + 4508) = 0;
  *(_DWORD *)(v3 + 4512) = 0;
  *(_DWORD *)(v3 + 4516) = 0;
  *(_DWORD *)(v3 + 4520) = 20;
  EntityDamageSource::EntityDamageSource(v3 + 4524, 12);
  *(_DWORD *)(v3 + 4532) = -1;
  v4 = (int *)(v3 + 176);
  *(_DWORD *)(v3 + 248) = 65;
  *(_DWORD *)(v3 + 172) |= 0x4004u;
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 49) )
  {
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 49);
    v5 = *v4;
    v6 = operator new(0x10u);
    v6[4] = 2;
    v7 = 49;
    *((_WORD *)v6 + 3) = 49;
    v6[8] = 1;
    *(_DWORD *)v6 = &off_26F08C4;
    *((_DWORD *)v6 + 3) = 0;
    v8 = *(_DWORD *)(v5 + 196);
    *(_DWORD *)(v5 + 196) = v6;
    if ( v8 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
    v9 = *(_WORD *)(v3 + 188);
    if ( v9 >= 0x31 )
      LOWORD(v9) = 49;
    *(_WORD *)(v3 + 188) = v9;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x31 )
      v7 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v7;
  }
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 50) )
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 50);
    v10 = *v4;
    v11 = operator new(0x18u);
    v11[4] = 7;
    v12 = 50;
    *((_WORD *)v11 + 3) = 50;
    v11[8] = 1;
    *(_DWORD *)v11 = &off_26F0DC8;
    *((_DWORD *)v11 + 4) = -1;
    *((_DWORD *)v11 + 5) = -1;
    v13 = *(_DWORD *)(v10 + 200);
    *(_DWORD *)(v10 + 200) = v11;
    if ( v13 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 4))(v13);
    v14 = *(_WORD *)(v3 + 188);
    if ( v14 >= 0x32 )
      LOWORD(v14) = 50;
    *(_WORD *)(v3 + 188) = v14;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x32 )
      v12 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v12;
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 51) )
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 51);
    v15 = *v4;
    v16 = operator new(0x18u);
    v16[4] = 7;
    v17 = 51;
    *((_WORD *)v16 + 3) = 51;
    v16[8] = 1;
    *(_DWORD *)v16 = &off_26F0DC8;
    *((_DWORD *)v16 + 4) = -1;
    *((_DWORD *)v16 + 5) = -1;
    v18 = *(_DWORD *)(v15 + 204);
    *(_DWORD *)(v15 + 204) = v16;
    if ( v18 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v18 + 4))(v18);
    v19 = *(_WORD *)(v3 + 188);
    if ( v19 >= 0x33 )
      LOWORD(v19) = 51;
    *(_WORD *)(v3 + 188) = v19;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x33 )
      v17 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v17;
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 52) )
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 52);
    v20 = *v4;
    v21 = operator new(0x18u);
    v21[4] = 7;
    v22 = 52;
    *((_WORD *)v21 + 3) = 52;
    v21[8] = 1;
    *(_DWORD *)v21 = &off_26F0DC8;
    *((_DWORD *)v21 + 4) = -1;
    *((_DWORD *)v21 + 5) = -1;
    v23 = *(_DWORD *)(v20 + 208);
    *(_DWORD *)(v20 + 208) = v21;
    if ( v23 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 4))(v23);
    v24 = *(_WORD *)(v3 + 188);
    if ( v24 >= 0x34 )
      LOWORD(v24) = 52;
    *(_WORD *)(v3 + 188) = v24;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x34 )
      v22 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v22;
  if ( !SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 53) )
    SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 53);
    v25 = *v4;
    v26 = operator new(0xCu);
    v27 = 53;
    v26[4] = 1;
    *((_WORD *)v26 + 3) = 53;
    v26[8] = 1;
    *(_DWORD *)v26 = &off_26F0DE0;
    *((_WORD *)v26 + 5) = 0;
    v28 = *(_DWORD *)(v25 + 212);
    *(_DWORD *)(v25 + 212) = v26;
    if ( v28 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v28 + 4))(v28);
    v29 = *(_WORD *)(v3 + 188);
    if ( v29 >= 0x35 )
      LOWORD(v29) = 53;
    *(_WORD *)(v3 + 188) = v29;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x35 )
      v27 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v27;
  *(_DWORD *)(v3 + 4392) = 5;
  Entity::setPersistent((Entity *)v3);
  return v3;
}


signed int __fastcall WitherBoss::canBeAffected(WitherBoss *this, const MobEffectInstance *a2)
{
  MobEffectInstance *v2; // r4@1
  int v3; // r5@1
  signed int result; // r0@2
  int v5; // r4@3
  int v6; // r0@3
  signed int v7; // r1@3

  v2 = a2;
  v3 = MobEffectInstance::getId(a2);
  if ( v3 == MobEffect::getId((MobEffect *)MobEffect::HARM) )
  {
    result = 1;
  }
  else
    v5 = MobEffectInstance::getId(v2);
    v6 = MobEffect::getId((MobEffect *)MobEffect::HEAL);
    v7 = 0;
    if ( v5 == v6 )
      v7 = 1;
    result = v7;
  return result;
}


void __fastcall WitherBoss::~WitherBoss(WitherBoss *this)
{
  Mob *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26F08DC;
  EntityDamageByBlockSource::~EntityDamageByBlockSource((WitherBoss *)((char *)this + 4524));
  Mob::~Mob(v1);
  j_j_j__ZdlPv_6((void *)v1);
}


void __fastcall WitherBoss::newServerAiStep(WitherBoss *this)
{
  int v2; // r0@1
  BlockSource *v3; // r9@2
  int v4; // r6@5
  int v5; // r7@5
  int v6; // r0@5
  float v17; // r0@7
  Level *v18; // r0@8
  unsigned __int64 *v19; // r0@8
  int v20; // r0@8
  Level *v21; // r0@8
  signed int v22; // r8@9
  unsigned int *v23; // r2@10
  signed int v24; // r1@12
  unsigned int *v25; // r2@14
  signed int v26; // r1@16
  unsigned int *v27; // r2@18
  signed int v28; // r1@20
  Level *v29; // r0@34
  Spawner *v30; // r6@34
  const Vec3 *v31; // r0@34
  int v32; // r6@34
  void *v33; // r0@34
  void *v34; // r0@35
  void *v35; // r0@36
  signed int v36; // r1@43
  BlockSource *v37; // r10@43
  Entity *v38; // r0@46
  char *v39; // r5@46
  Entity *v40; // r0@47
  __int64 *v41; // r0@47
  signed int v42; // r0@48
  int v43; // r0@49
  int *v45; // r11@56
  int *v46; // r5@56
  int v47; // r9@56
  int v48; // r0@60
  int v49; // r0@61
  int v50; // r11@61
  const Vec3 *v51; // r2@61
  int v52; // r3@61
  int v53; // r1@65
  int v54; // r7@68
  int v55; // r7@69
  int v56; // r6@69
  Level *v57; // r0@75
  signed int v58; // r0@76
  SynchedEntityData *v62; // r0@83
  int v63; // r1@83
  __int64 v64; // kr00_8@86
  int v65; // r0@87
  int v66; // r0@87
  const Entity *v67; // r8@87
  _QWORD *v70; // r0@95
  _QWORD *v71; // r6@95
  int v72; // r3@95
  int v73; // r1@95 OVERLAPPED
  int v74; // r2@95 OVERLAPPED
  signed int v75; // r0@95
  void *v76; // r0@97
  char *v77; // r6@98
  int v78; // r7@98
  char *v79; // r7@100
  int v80; // r0@100
  signed int v81; // r10@102
  char *v82; // r8@102
  unsigned int v83; // r1@102
  unsigned int v84; // r6@102
  Entity *v85; // r8@105
  char *v86; // r1@108
  int v87; // r2@109
  bool v88; // zf@110
  int v89; // r0@110
  bool v90; // zf@113
  int v91; // r0@118
  int v92; // r1@128
  int v93; // r2@130
  __int64 *v94; // r0@137
  Entity *v95; // r0@139
  __int64 v96; // r2@140
  int v97; // r0@140
  int v98; // r0@143
  Level *v99; // r0@144
  int v100; // r0@147
  int v101; // r0@150
  Level *v106; // r0@156
  __int64 *v107; // r0@156
  __int64 *v108; // r7@156
  __int64 v109; // r0@156
  unsigned int v110; // r6@157
  Entity *v111; // r5@158
  int v112; // r0@162
  unsigned __int64 *v116; // r0@166
  BossComponent *v117; // r5@168
  int v121; // [sp+10h] [bp-170h]@0
  int v122; // [sp+14h] [bp-16Ch]@0
  int v123; // [sp+18h] [bp-168h]@0
  int v124; // [sp+1Ch] [bp-164h]@0
  BlockSource *v125; // [sp+1Ch] [bp-164h]@98
  void *v126; // [sp+20h] [bp-160h]@0
  int v127; // [sp+24h] [bp-15Ch]@0
  void *v128; // [sp+28h] [bp-158h]@0
  Random *v129; // [sp+38h] [bp-148h]@56
  int v130; // [sp+3Ch] [bp-144h]@75
  int v131; // [sp+3Ch] [bp-144h]@102
  int *v132; // [sp+40h] [bp-140h]@56
  _BYTE *v133; // [sp+44h] [bp-13Ch]@56
  _BYTE *v134; // [sp+48h] [bp-138h]@56
  AABB *v135; // [sp+4Ch] [bp-134h]@56
  int v136; // [sp+50h] [bp-130h]@166
  signed int v137; // [sp+54h] [bp-12Ch]@166
  int v138; // [sp+58h] [bp-128h]@166
  char v139; // [sp+5Ch] [bp-124h]@166
  char v140; // [sp+78h] [bp-108h]@159
  int v141; // [sp+A0h] [bp-E0h]@156
  signed int v142; // [sp+A4h] [bp-DCh]@156
  signed int v143; // [sp+A8h] [bp-D8h]@156
  char v144; // [sp+ACh] [bp-D4h]@156
  int v145; // [sp+C8h] [bp-B8h]@95
  signed int v146; // [sp+CCh] [bp-B4h]@95
  int v147; // [sp+D0h] [bp-B0h]@95
  char v148; // [sp+D4h] [bp-ACh]@95
  float v149; // [sp+F0h] [bp-90h]@78
  int v150; // [sp+FCh] [bp-84h]@18
  int v151; // [sp+100h] [bp-80h]@14
  int v152; // [sp+104h] [bp-7Ch]@10
  float v153; // [sp+108h] [bp-78h]@7
  float v154; // [sp+110h] [bp-70h]@7

  _R4 = this;
  v2 = Entity::getRegion(this);
  if ( *((_DWORD *)_R4 + 1108) > 0 )
    return;
  v3 = (BlockSource *)v2;
  if ( *((_BYTE *)_R4 + 216) || (*(int (__fastcall **)(WitherBoss *))(*(_DWORD *)_R4 + 208))(_R4) == 1 )
  {
    if ( *((_BYTE *)_R4 + 4404) )
    {
      v4 = Entity::getLevel(_R4);
      v5 = Entity::getRegion(_R4);
      v6 = *((_DWORD *)_R4 + 1100);
      if ( v6 <= 0 )
      {
        __asm
        {
          VMOV.F32        S0, #3.0
          VLDR            S2, [R4,#0x4C]
        }
        v17 = *((float *)_R4 + 20);
        v153 = *((float *)_R4 + 18);
        v154 = v17;
        __asm { VADD.F32        S0, S2, S0 }
      }
      else
        _R1 = (int)_R4 + 3412;
        _R0 = 180 * v6 - 180;
          VMOV            S0, R0
          VCVT.F32.S32    S0, S0
          VLDR            S2, [R1]
        _R0 = &mce::Math::DEGRAD;
          VADD.F32        S0, S2, S0
          VLDR            S2, [R0]
          VMUL.F32        S0, S0, S2
          VMOV            R5, S0
        _R0 = cosf(_R5);
          VMOV            S18, R0
          VLDR            S16, =1.3
        _R0 = sinf(_R5);
          VMUL.F32        S18, S18, S16
          VMUL.F32        S16, S0, S16
        _R0 = (*(int (__fastcall **)(WitherBoss *))(*(_DWORD *)_R4 + 52))(_R4);
          VLDR            S0, [R0]
          VLDR            S4, [R0,#8]
          VADD.F32        S6, S0, S18
          VLDR            S2, [R0,#4]
          VLDR            S0, =2.2
          VADD.F32        S4, S4, S16
          VSTR            S6, [SP,#0x180+var_78]
          VSTR            S4, [SP,#0x180+var_70]
      __asm { VSTR            S0, [SP,#0x180+var_74] }
      v18 = (Level *)Entity::getLevel(_R4);
      v19 = (unsigned __int64 *)Level::getGameRules(v18);
      v20 = GameRules::getBool(v19, (int **)&GameRules::MOB_GRIEFING);
      Level::explode(
        v4,
        v5,
        (int)_R4,
        (int)&v153,
        (void *)0x40E00000,
        0,
        v20,
        2139095039,
        v121,
        v122,
        v123,
        v124,
        v126,
        v127,
        v128);
      *((_BYTE *)_R4 + 4404) = 0;
      *((_DWORD *)_R4 + 1114) = 80;
      v21 = (Level *)Entity::getLevel(_R4);
      if ( Level::getDifficulty(v21) != 1 )
        v22 = 0;
        do
          v29 = (Level *)BlockSource::getLevel(v3);
          v30 = (Spawner *)Level::getSpawner(v29);
          EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v150, 1116976);
          v31 = (const Vec3 *)(*(int (__fastcall **)(WitherBoss *))(*(_DWORD *)_R4 + 52))(_R4);
          v32 = Spawner::spawnMob(v30, v3, (const EntityDefinitionIdentifier *)&v150, _R4, v31, 0, 1, 0);
          v33 = (void *)(v152 - 12);
          if ( (int *)(v152 - 12) != &dword_28898C0 )
          {
            v23 = (unsigned int *)(v152 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v24 = __ldrex(v23);
              while ( __strex(v24 - 1, v23) );
            }
            else
              v24 = (*v23)--;
            if ( v24 <= 0 )
              j_j_j_j__ZdlPv_9(v33);
          }
          v34 = (void *)(v151 - 12);
          if ( (int *)(v151 - 12) != &dword_28898C0 )
            v25 = (unsigned int *)(v151 - 4);
                v26 = __ldrex(v25);
              while ( __strex(v26 - 1, v25) );
              v26 = (*v25)--;
            if ( v26 <= 0 )
              j_j_j_j__ZdlPv_9(v34);
          v35 = (void *)(v150 - 12);
          if ( (int *)(v150 - 12) != &dword_28898C0 )
            v27 = (unsigned int *)(v150 - 4);
                v28 = __ldrex(v27);
              while ( __strex(v28 - 1, v27) );
              v28 = (*v27)--;
            if ( v28 <= 0 )
              j_j_j_j__ZdlPv_9(v35);
          if ( v32 )
            Skeleton::setWitherParent((Skeleton *)v32, _R4);
            *(_DWORD *)(v32 + 420) = 60;
          ++v22;
        while ( v22 < 3 );
    }
  }
  Mob::newServerAiStep(_R4);
  if ( *((_DWORD *)_R4 + 1106) || *((_BYTE *)_R4 + 4405) )
    *((_DWORD *)_R4 + 30) = 1119092736;
  v36 = *((_DWORD *)_R4 + 1110);
  v37 = v3;
  if ( v36 >= 1 )
    *((_DWORD *)_R4 + 1110) = v36 - 1;
  if ( Entity::getTarget(_R4) )
    v38 = (Entity *)Entity::getTarget(_R4);
    v39 = Entity::getUniqueID(v38);
    if ( *(_QWORD *)v39 != SynchedEntityData::getInt64((WitherBoss *)((char *)_R4 + 176), 50) )
      v40 = (Entity *)Entity::getTarget(_R4);
      v41 = (__int64 *)Entity::getUniqueID(v40);
      WitherBoss::setAlternativeTarget((int)_R4, 0, *v41);
  v42 = *((_DWORD *)_R4 + 1130);
  if ( v42 >= 1 )
    v43 = v42 - 1;
    *((_DWORD *)_R4 + 1130) = v43;
    if ( !v43 )
      if ( !*((_DWORD *)_R4 + 1115) && !*((_BYTE *)_R4 + 4464) )
        _ZF = *((_BYTE *)_R4 + 4405) == 0;
        if ( !*((_BYTE *)_R4 + 4405) )
          _ZF = *((_DWORD *)_R4 + 1106) == 0;
        if ( _ZF && *((_DWORD *)_R4 + 1124) <= 0 && Entity::getTarget(_R4) )
          if ( Mob::getNavigation(_R4) )
            v48 = Mob::getNavigation(_R4);
            (*(void (**)(void))(*(_DWORD *)v48 + 40))();
          v49 = Entity::getTarget(_R4);
          *((_DWORD *)_R4 + 1125) = 0;
          v50 = *((_DWORD *)_R4 + 1107) + 1;
          *((_DWORD *)_R4 + 1107) = v50;
          v51 = (const Vec3 *)(*(int (**)(void))(*(_DWORD *)v49 + 52))();
          v52 = 0;
          if ( !(*((_DWORD *)_R4 + 1107) & 3) )
            v52 = 1;
          WitherBoss::_performRangedAttack(_R4, 0, v51, v52);
          if ( !(v50 & 3) )
            *((_DWORD *)_R4 + 1115) = *((_DWORD *)_R4 + 1121);
            if ( !(unsigned __int16)SynchedEntityData::getShort((WitherBoss *)((char *)_R4 + 176), 53) )
              v53 = *((_BYTE *)_R4 + 4508);
              *((_BYTE *)_R4 + 4508) = v53 ^ 1;
              if ( v53 == 1 )
              {
                *((_DWORD *)_R4 + 1115) = 0;
                *((_DWORD *)_R4 + 1124) = 60;
              }
      *((_DWORD *)_R4 + 1130) = *((_DWORD *)_R4 + 1111);
  __asm
    VMOV.F32        S18, #-10.0
    VMOV.F32        S20, #20.0
    VMOV.F32        S22, #-5.0
    VMOV.F32        S24, #10.0
  v133 = (char *)_R4 + 4405;
  __asm { VLDR            D8, =2.32830644e-10 }
  v134 = (char *)_R4 + 4464;
  v45 = (int *)((char *)_R4 + 4460);
  v46 = (int *)((char *)_R4 + 4392);
  v129 = (WitherBoss *)((char *)_R4 + 552);
  v135 = (WitherBoss *)((char *)_R4 + 264);
  v47 = 1;
  v132 = (int *)((char *)_R4 + 4424);
  do
    v55 = *((_DWORD *)_R4 + 104);
    v56 = (int)_R4 + 4 * (v47 - 1);
    if ( v55 < *(_DWORD *)(v56 + 4368) || *v45 || *v134 || *v133 || *v132 || *((_DWORD *)_R4 + 1124) > 0 )
      goto LABEL_139;
    *((_DWORD *)_R4 + 1110) = *((_DWORD *)_R4 + 1111);
    *(_DWORD *)(v56 + 4368) = Random::_genRandInt32(v129) % 0xA + v55 + 10;
    v57 = (Level *)Entity::getLevel(_R4);
    v130 = Level::getDifficulty(v57) | 1;
    if ( v130 == 3 )
      v58 = *(_DWORD *)(v56 + 4380);
      *(_DWORD *)(v56 + 4380) = v58 + 1;
      if ( v58 >= 16 )
        __asm { VLDR            S26, [R4,#0x48] }
        _R8 = Random::_genRandInt32(v129);
        __asm { VLDR            S28, [R4,#0x4C] }
        _R7 = Random::_genRandInt32(v129);
        __asm { VLDR            S30, [R4,#0x50] }
        _R0 = Random::_genRandInt32(v129);
        if ( v47 == 1 )
          __asm
            VMOV            S0, R8
            VMOV            S4, R0
            VMOV            S2, R7
            VCVT.F64.U32    D0, S0
            VCVT.F64.U32    D1, S2
            VCVT.F64.U32    D2, S4
            VMUL.F64        D0, D0, D8
            VMUL.F64        D1, D1, D8
            VMUL.F64        D2, D2, D8
            VCVT.F32.F64    S0, D0
            VCVT.F32.F64    S2, D1
            VCVT.F32.F64    S4, D2
            VADD.F32        S6, S26, S18
            VMUL.F32        S0, S0, S20
            VADD.F32        S8, S28, S22
            VMUL.F32        S2, S2, S24
            VADD.F32        S10, S30, S18
            VMUL.F32        S4, S4, S20
            VADD.F32        S0, S6, S0
            VADD.F32        S2, S8, S2
            VADD.F32        S4, S10, S4
            VSTR            S0, [SP,#0x180+var_90]
            VSTR            S2, [SP,#0x180+var_8C]
            VSTR            S4, [SP,#0x180+var_88]
          WitherBoss::_performRangedAttack(_R4, 1, (const Vec3 *)&v149, 1);
        *(_DWORD *)(v56 + 4380) = 0;
    if ( v47 == 2 )
      v62 = (WitherBoss *)((char *)_R4 + 176);
      v63 = 52;
LABEL_86:
      v64 = SynchedEntityData::getInt64(v62, v63);
      if ( ((unsigned int)v64 & HIDWORD(v64)) != -1 )
        v65 = Entity::getLevel(_R4);
        v66 = Level::fetchEntity(v65, 0, v64, HIDWORD(v64), 0);
        v67 = (const Entity *)v66;
        if ( !v66 )
          goto LABEL_174;
        if ( (*(int (**)(void))(*(_DWORD *)v66 + 316))() != 1 )
        _R0 = Entity::distanceToSqr(_R4, v67);
        _R1 = (int)_R4 + 4504;
          VMOV            S2, R0
          VLDR            S0, [R1]
          VMUL.F32        S0, S0, S0
          VCMPE.F32       S2, S0
          VMRS            APSR_nzcv, FPSCR
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        if ( (*(int (__fastcall **)(WitherBoss *, const Entity *))(*(_DWORD *)_R4 + 252))(_R4, v67)
          && (Entity::hasCategory((int)v67, 1) != 1
           || Abilities::getBool((int)v67 + 4320, (int **)&Abilities::INVULNERABLE) != 1) )
          if ( v130 == 3 )
            WitherBoss::_performRangedAttack(_R4, v47, v67);
            v54 = *((_DWORD *)_R4 + 104);
            *(_DWORD *)(v56 + 4368) = Random::_genRandInt32(v129) % 0x14 + v54 + 40;
            *(_DWORD *)(v56 + 4380) = 0;
        else
LABEL_174:
          WitherBoss::setAlternativeTarget((int)_R4, v47, -1LL);
        goto LABEL_139;
      goto LABEL_95;
    if ( v47 == 1 )
      v63 = 51;
      goto LABEL_86;
    if ( !v47 )
      v63 = 50;
LABEL_95:
    v145 = *((_DWORD *)_R4 + 1126);
    v146 = 1090519040;
    v147 = v145;
    AABB::grow((AABB *)&v148, v135, (int)&v145);
    v70 = (_QWORD *)BlockSource::fetchEntities2((int)v37, 319, (const AABB *)&v148, 0);
    v71 = v70;
    v72 = 0;
    *(_QWORD *)&v73 = *v70;
    v75 = v74 - v73;
    if ( 0 != (v74 - v73) >> 2 )
      if ( (unsigned int)(v75 >> 2) >= 0x40000000 )
        sub_21E57F4();
      v76 = operator new(v75);
      *(_QWORD *)&v73 = *v71;
      v72 = (int)v76;
    v77 = (char *)v72;
    v125 = v37;
    v78 = (v74 - v73) >> 2;
    if ( v78 )
      _aeabi_memmove4(v72, v73);
    v79 = &v77[4 * v78];
    v80 = 0;
    while ( v77 != v79 )
      v81 = v79 - v77;
      v82 = v77;
      v83 = 0;
      v131 = v80;
      v84 = (v79 - v77) >> 2;
      if ( v81 >> 2 )
        v83 = Random::_genRandInt32(v129) % v84;
      if ( v84 <= v83 )
        sub_21E5B04("vector::_M_range_check: __n (which is %zu) >= this->size() (which is %zu)", v83, v84, v72);
      v77 = v82;
      v85 = *(Entity **)&v82[4 * v83];
      if ( Entity::hasCategory((int)v85, 1) == 1
        && !Abilities::getBool((int)v85 + 4320, (int **)&Abilities::INVULNERABLE)
        && (Entity *)Entity::getTarget(_R4) != v85 )
        v94 = (__int64 *)Entity::getUniqueID(v85);
        v37 = v125;
        WitherBoss::setAlternativeTarget((int)_R4, v47, *v94);
        goto LABEL_138;
      v86 = v77;
      if ( v81 >> 4 >= 1 )
        v87 = (v81 >> 4) + 1;
        v86 = v77;
          v88 = *(_DWORD *)v86 == (_DWORD)v85;
          v89 = (int)v86;
          if ( *(Entity **)v86 != v85 )
            v89 = (int)(v86 + 4);
            v72 = *((_DWORD *)v86 + 1);
            v88 = v72 == (_DWORD)v85;
          if ( v88 )
            break;
          v89 = (int)(v86 + 8);
          v72 = *((_DWORD *)v86 + 2);
          v90 = v72 == (_DWORD)v85;
          if ( (Entity *)v72 != v85 )
            v89 = (int)(v86 + 12);
            v72 = *((_DWORD *)v86 + 3);
            v90 = v72 == (_DWORD)v85;
          if ( v90 )
          --v87;
          v86 += 16;
        while ( v87 > 1 );
LABEL_127:
        if ( (char *)v89 != v79 )
          v92 = (int)(v79 - 4);
          v79 = (char *)v89;
          while ( v92 != v89 )
            v72 = *(_DWORD *)(v89 + 4);
            v93 = v89 + 4;
            v89 += 4;
            if ( (Entity *)v72 != v85 )
              *(_DWORD *)v79 = v72;
              v79 += 4;
              v89 = v93;
        goto LABEL_132;
      if ( 1 == (v79 - v86) >> 2 )
        v89 = (int)v86;
        v91 = (v79 - v86) >> 2;
        if ( v91 == 2 )
          if ( v91 != 3 )
            goto LABEL_132;
          if ( *(Entity **)v86 == v85 )
            goto LABEL_127;
          v89 = (int)(v86 + 4);
        if ( *(Entity **)v89 == v85 )
          goto LABEL_127;
        v89 += 4;
      if ( *(Entity **)v89 == v85 )
        goto LABEL_127;
LABEL_132:
      v80 = v131 + 1;
      if ( v131 + 1 >= 10 )
        break;
    v37 = v125;
    if ( !v77 )
LABEL_138:
    operator delete(v77);
LABEL_139:
    v95 = (Entity *)Entity::getTarget(_R4);
    if ( v95 )
      v96 = *(_QWORD *)Entity::getUniqueID(v95);
      v97 = (int)_R4;
    else
      v96 = -1LL;
    WitherBoss::setAlternativeTarget(v97, 0, v96);
    if ( *v46 >= 1 )
      v98 = *v46 - 1;
      *v46 = v98;
      if ( !v98 )
        v99 = (Level *)Entity::getLevel(_R4);
        destroyBlocks(v99, v135, v37, 1);
    ++v47;
  while ( v47 < 3 );
  if ( *v45 > 0 )
    v100 = *v45 - 1;
    *v45 = v100;
    if ( !v100 )
      if ( (unsigned __int16)SynchedEntityData::getShort((WitherBoss *)((char *)_R4 + 176), 53) )
        *v134 = 1;
        *v132 = 20;
        v101 = Entity::getTarget(_R4);
        if ( v101 )
          _R5 = (*(int (**)(void))(*(_DWORD *)v101 + 52))();
          _R0 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)_R4 + 52))(_R4);
            VLDR            S0, [R0]
            VLDR            S6, [R5]
            VLDR            S2, [R0,#4]
            VLDR            S8, [R5,#4]
            VSUB.F32        S0, S6, S0
            VLDR            S4, [R0,#8]
            VSUB.F32        S2, S8, S2
            VLDR            S10, [R5,#8]
            VSUB.F32        S4, S10, S4
            VMUL.F32        S6, S0, S0
            VSTR            S0, [R0]
            VMUL.F32        S8, S2, S2
            VSTR            S2, [R1]
            VMUL.F32        S10, S4, S4
            VSTR            S4, [R2]
            VADD.F32        S6, S8, S6
            VLDR            S8, =0.0001
            VADD.F32        S6, S6, S10
            VSQRT.F32       S6, S6
            VCMPE.F32       S6, S8
            VMRS            APSR_nzcv, FPSCR
          if ( _NF ^ _VF )
            _R6 = *(_QWORD *)&Vec3::ZERO;
            _R3 = dword_2822498;
          else
            __asm
              VDIV.F32        S4, S4, S6
              VDIV.F32        S2, S2, S6
              VDIV.F32        S0, S0, S6
              VMOV            R3, S4
              VMOV            R7, S2
              VMOV            R6, S0
          *((_QWORD *)_R4 + 551) = _R6;
          *((_DWORD *)_R4 + 1104) = _R3;
  if ( *v133 )
    v106 = (Level *)Entity::getLevel(_R4);
    destroyBlocks(v106, v135, v37, 2);
    v141 = 1065353216;
    v142 = 1082130432;
    v143 = 1065353216;
    AABB::grow((AABB *)&v144, v135, (int)&v141);
    v107 = (__int64 *)BlockSource::fetchEntities2((int)v37, 256, (const AABB *)&v144, 0);
    v108 = v107;
    v109 = *v107;
    if ( HIDWORD(v109) != (_DWORD)v109 )
      v110 = 0;
      do
        v111 = *(Entity **)(v109 + 4 * v110);
        if ( v111 != _R4 )
          EntityDamageByEntitySource::EntityDamageByEntitySource((int)&v140, _R4, 2);
          Entity::hurt(v111, (const EntityDamageSource *)&v140, 15, 1, 0);
          EntityDamageByEntitySource::~EntityDamageByEntitySource((EntityDamageByEntitySource *)&v140);
          v109 = *v108;
        ++v110;
      while ( v110 < (HIDWORD(v109) - (signed int)v109) >> 2 );
  if ( *v132 >= 1 )
    v112 = *v132 - 1;
    *v132 = v112;
    if ( !v112 )
      if ( Entity::getTarget(_R4) )
        *((_DWORD *)_R4 + 1105) = 10;
        *v133 = 1;
  _R0 = *((_DWORD *)_R4 + 104);
  _R1 = 1717986919;
  __asm { SMMUL.W         R1, R0, R1 }
  if ( _R0 == 20 * (((signed int)_R1 >> 3) + (_R1 >> 31)) )
    v136 = 1112014848;
    v137 = 1112014848;
    v138 = 1112014848;
    AABB::grow((AABB *)&v139, v135, (int)&v136);
    v116 = (unsigned __int64 *)BlockSource::fetchEntities2((int)v37, 319, (const AABB *)&v139, 0);
    if ( *v116 >> 32 == (unsigned int)*v116 )
      (*(void (__fastcall **)(WitherBoss *, signed int))(*(_DWORD *)_R4 + 832))(_R4, 1);
  v117 = (BossComponent *)*((_DWORD *)_R4 + 809);
  if ( v117 )
    _R0 = Mob::getHealth(_R4);
    __asm
      VMOV            S0, R0
      VCVT.F32.S32    S16, S0
    _R0 = Mob::getMaxHealth(_R4);
      VCVT.F32.S32    S0, S0
      VDIV.F32        S0, S16, S0
      VMOV            R1, S0
    BossComponent::setPercent(v117, _R1);
}


int __fastcall WitherBoss::isInvulnerableTo(WitherBoss *this, const EntityDamageSource *a2)
{
  Entity *v2; // r5@1
  SynchedEntityData *v3; // r6@1
  const EntityDamageSource *v4; // r4@1
  int result; // r0@3
  int v6; // r0@5
  __int16 v7; // r1@6

  v2 = this;
  v3 = (WitherBoss *)((char *)this + 176);
  v4 = a2;
  if ( SynchedEntityData::getInt((WitherBoss *)((char *)this + 176), 49) < 1 || EntityDamageSource::getCause(v4) == 12 )
  {
    if ( EntityDamageSource::getCause(v4) != 3
      || (v6 = (*(int (__fastcall **)(const EntityDamageSource *))(*(_DWORD *)v4 + 56))(v4),
          EntityClassTree::isOfType(v6, 4194384) != 1) )
    {
      result = Entity::isInvulnerableTo(v2, v4);
    }
    else
      v7 = SynchedEntityData::getShort(v3, 53);
      result = 0;
      if ( !v7 )
        result = 1;
  }
  else
    result = 1;
  return result;
}


void __fastcall WitherBoss::addAdditionalSaveData(WitherBoss *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  WitherBoss *v3; // r7@1
  int v4; // r0@1
  void *v5; // r0@1
  __int16 v6; // r0@2
  char v7; // r2@2
  void *v8; // r0@4
  void *v9; // r0@5
  void *v10; // r0@6
  void *v11; // r0@7
  void *v12; // r0@8
  void *v13; // r0@9
  void *v14; // r0@10
  void *v15; // r0@11
  void *v16; // r0@12
  void *v17; // r0@13
  void *v18; // r0@14
  unsigned int *v19; // r2@16
  signed int v20; // r1@18
  unsigned int *v21; // r2@20
  signed int v22; // r1@22
  unsigned int *v23; // r2@24
  signed int v24; // r1@26
  unsigned int *v25; // r2@28
  signed int v26; // r1@30
  unsigned int *v27; // r2@32
  signed int v28; // r1@34
  unsigned int *v29; // r2@36
  signed int v30; // r1@38
  unsigned int *v31; // r2@40
  signed int v32; // r1@42
  unsigned int *v33; // r2@44
  signed int v34; // r1@46
  unsigned int *v35; // r2@48
  signed int v36; // r1@50
  unsigned int *v37; // r2@52
  signed int v38; // r1@54
  unsigned int *v39; // r2@56
  signed int v40; // r1@58
  unsigned int *v41; // r2@60
  signed int v42; // r1@62
  int v43; // [sp+4h] [bp-74h]@14
  int v44; // [sp+Ch] [bp-6Ch]@13
  int v45; // [sp+14h] [bp-64h]@12
  int v46; // [sp+1Ch] [bp-5Ch]@11
  int v47; // [sp+24h] [bp-54h]@10
  int v48; // [sp+2Ch] [bp-4Ch]@9
  int v49; // [sp+34h] [bp-44h]@8
  int v50; // [sp+3Ch] [bp-3Ch]@7
  int v51; // [sp+44h] [bp-34h]@6
  int v52; // [sp+4Ch] [bp-2Ch]@5
  int v53; // [sp+54h] [bp-24h]@2
  int v54; // [sp+5Ch] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  Monster::addAdditionalSaveData(this, a2);
  sub_21E94B4((void **)&v54, "Invul");
  v4 = SynchedEntityData::getInt((WitherBoss *)((char *)v3 + 176), 49);
  CompoundTag::putInt((int)v2, (const void **)&v54, v4);
  v5 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v54 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
    }
    else
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  sub_21E94B4((void **)&v53, "AirAttack");
  v6 = SynchedEntityData::getShort((WitherBoss *)((char *)v3 + 176), 53);
  v7 = v6;
  if ( v6 )
    v7 = 1;
  CompoundTag::putBoolean((int)v2, (const void **)&v53, v7);
  v8 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v53 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v52, "ShieldHealth");
  CompoundTag::putInt((int)v2, (const void **)&v52, *((_DWORD *)v3 + 1079));
  v9 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v52 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v51, "Phase");
  CompoundTag::putInt((int)v2, (const void **)&v51, *((_DWORD *)v3 + 1100));
  v10 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v51 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v50, "SpawningFrames");
  CompoundTag::putInt((int)v2, (const void **)&v50, *((_DWORD *)v3 + 1108));
  v11 = (void *)(v50 - 12);
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v50 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v49, "maxHealth");
  CompoundTag::putInt((int)v2, (const void **)&v49, *((_DWORD *)v3 + 1117));
  v12 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v49 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  sub_21E94B4((void **)&v48, "lastHealthInterval");
  CompoundTag::putInt((int)v2, (const void **)&v48, *((_DWORD *)v3 + 1123));
  v13 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v48 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v47, "dyingFrames");
  CompoundTag::putInt((int)v2, (const void **)&v47, *((_DWORD *)v3 + 1120));
  v14 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v47 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v46, "overlayAlpha");
  CompoundTag::putFloat((int)v2, (const void **)&v46, *((_DWORD *)v3 + 1113));
  v15 = (void *)(v46 - 12);
  if ( (int *)(v46 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v46 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  sub_21E94B4((void **)&v45, "swellAmount");
  CompoundTag::putFloat((int)v2, (const void **)&v45, *((_DWORD *)v3 + 1128));
  v16 = (void *)(v45 - 12);
  if ( (int *)(v45 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v45 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v44, "oldSwellAmount");
  CompoundTag::putFloat((int)v2, (const void **)&v44, *((_DWORD *)v3 + 1129));
  v17 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v44 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v43, "firerate");
  CompoundTag::putInt((int)v2, (const void **)&v43, *((_DWORD *)v3 + 1111));
  v18 = (void *)(v43 - 12);
  if ( (int *)(v43 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v43 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
}


void __fastcall WitherBoss::_performRangedAttack(WitherBoss *this, int a2, Entity *a3)
{
  WitherBoss::_performRangedAttack(this, a2, a3);
}


void __fastcall WitherBoss::performRangedAttack(WitherBoss *this, Mob *a2, float a3)
{
  WitherBoss *v3; // r4@1
  int v4; // r0@6
  char v5; // r5@6
  const Vec3 *v6; // r2@6
  int v7; // r3@6
  int v8; // r1@10

  v3 = this;
  if ( !*((_DWORD *)this + 1115)
    && !*((_BYTE *)this + 4464)
    && !*((_BYTE *)this + 4405)
    && !*((_DWORD *)this + 1106)
    && *((_DWORD *)this + 1124) <= 0 )
  {
    *((_DWORD *)this + 1125) = 0;
    v4 = *((_DWORD *)this + 1107);
    v5 = v4 + 1;
    *((_DWORD *)v3 + 1107) = v4 + 1;
    v6 = (const Vec3 *)(*(int (__fastcall **)(Mob *))(*(_DWORD *)a2 + 52))(a2);
    v7 = 0;
    if ( !(*((_DWORD *)v3 + 1107) & 3) )
      v7 = 1;
    WitherBoss::_performRangedAttack(v3, 0, v6, v7);
    if ( !(v5 & 3) )
    {
      *((_DWORD *)v3 + 1115) = *((_DWORD *)v3 + 1121);
      if ( !(unsigned __int16)SynchedEntityData::getShort((WitherBoss *)((char *)v3 + 176), 53) )
      {
        v8 = *((_BYTE *)v3 + 4508);
        *((_BYTE *)v3 + 4508) = v8 ^ 1;
        if ( v8 == 1 )
        {
          *((_DWORD *)v3 + 1115) = 0;
          *((_DWORD *)v3 + 1124) = 60;
        }
      }
    }
  }
}


int __fastcall WitherBoss::getHeadPos(WitherBoss *this, int a2, int a3)
{
  WitherBoss *v4; // r4@1
  int result; // r0@2

  _R5 = a2;
  v4 = this;
  if ( a3 <= 0 )
  {
    __asm
    {
      VMOV.F32        S0, #3.0
      VLDR            S2, [R5,#0x4C]
    }
    result = *(_DWORD *)(a2 + 80);
    *(_DWORD *)v4 = *(_DWORD *)(a2 + 72);
    *((_DWORD *)v4 + 2) = result;
    __asm { VADD.F32        S0, S2, S0 }
  }
  else
    _R1 = a2 + 3412;
    _R0 = 180 * a3 - 180;
      VMOV            S0, R0
      VCVT.F32.S32    S0, S0
      VLDR            S2, [R1]
    _R0 = &mce::Math::DEGRAD;
      VADD.F32        S0, S2, S0
      VLDR            S2, [R0]
      VMUL.F32        S0, S0, S2
      VMOV            R6, S0
    _R0 = cosf(_R6);
      VMOV            S18, R0
      VLDR            S16, =1.3
    _R0 = sinf(_R6);
      VMUL.F32        S18, S18, S16
      VMUL.F32        S16, S0, S16
    result = (*(int (__fastcall **)(int))(*(_DWORD *)_R5 + 52))(_R5);
      VLDR            S0, [R0]
      VLDR            S4, [R0,#8]
      VADD.F32        S6, S0, S18
      VLDR            S2, [R0,#4]
      VLDR            S0, =2.2
      VADD.F32        S4, S4, S16
      VSTR            S6, [R4]
      VSTR            S4, [R4,#8]
  __asm { VSTR            S0, [R4,#4] }
  return result;
}
