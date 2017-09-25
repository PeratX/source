

int __fastcall AreaEffectCloud::AreaEffectCloud(int a1, int a2, int *a3)
{
  int v3; // r4@1
  double v4; // r0@1
  unsigned int v5; // r0@1
  int v6; // r6@3
  void *v7; // r5@3
  int *v8; // r5@4
  int v9; // r7@5
  _BYTE *v10; // r0@5
  signed __int16 v11; // r6@5
  int v12; // r1@5
  unsigned int v13; // r0@7
  int v14; // r7@13
  _BYTE *v15; // r0@13
  signed __int16 v16; // r6@13
  int v17; // r1@13
  unsigned int v18; // r0@15
  int v19; // r7@21
  _BYTE *v20; // r0@21
  signed __int16 v21; // r6@21
  int v22; // r1@21
  unsigned int v23; // r0@23
  int v24; // r7@29
  _BYTE *v25; // r0@29
  signed __int16 v26; // r6@29
  int v27; // r1@29
  unsigned int v28; // r0@31
  int v29; // r6@37
  _BYTE *v30; // r0@37
  signed __int16 v31; // r5@37
  int v32; // r1@37
  unsigned int v33; // r0@39

  v3 = a1;
  j_Entity::Entity(a1, a2, a3);
  *(_DWORD *)v3 = &off_271DD98;
  *(_DWORD *)(v3 + 3420) = 0;
  *(_DWORD *)(v3 + 3416) = 0;
  *(_WORD *)(v3 + 3424) = 256;
  *(_DWORD *)(v3 + 3444) = 0;
  *(_DWORD *)(v3 + 3440) = 0;
  *(_DWORD *)(v3 + 3436) = 0;
  *(_DWORD *)(v3 + 3432) = 0;
  *(_DWORD *)(v3 + 3428) = 0;
  *(_DWORD *)(v3 + 3448) = -1082130432;
  *(_DWORD *)(v3 + 3452) = 0;
  *(_DWORD *)(v3 + 3456) = 0;
  *(_DWORD *)(v3 + 3460) = 0;
  *(_DWORD *)(v3 + 3472) = 0;
  *(_DWORD *)(v3 + 3476) = 0;
  *(_DWORD *)(v3 + 3480) = 1065353216;
  *(_DWORD *)(v3 + 3484) = 0;
  LODWORD(v4) = v3 + 3480;
  v5 = sub_21E6254(v4);
  *(_DWORD *)(v3 + 3468) = v5;
  if ( v5 == 1 )
  {
    v7 = (void *)(v3 + 3488);
    *(_DWORD *)(v3 + 3488) = 0;
  }
  else
    if ( v5 >= 0x40000000 )
      sub_21E57F4();
    v6 = 4 * v5;
    v7 = j_operator new(4 * v5);
    j___aeabi_memclr4_0((int)v7, v6);
  *(_DWORD *)(v3 + 3464) = v7;
  v8 = (int *)(v3 + 176);
  if ( !j_SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 61) )
    j_SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 61);
    v9 = *v8;
    v10 = j_operator new(0x10u);
    v10[4] = 3;
    v11 = 61;
    *((_WORD *)v10 + 3) = 61;
    v10[8] = 1;
    *(_DWORD *)v10 = &off_26F137C;
    *((_DWORD *)v10 + 3) = 1056964608;
    v12 = *(_DWORD *)(v9 + 244);
    *(_DWORD *)(v9 + 244) = v10;
    if ( v12 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 4))(v12);
    v13 = *(_WORD *)(v3 + 188);
    if ( v13 >= 0x3D )
      LOWORD(v13) = 61;
    *(_WORD *)(v3 + 188) = v13;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x3D )
      v11 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v11;
  if ( !j_SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 62) )
    j_SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 62);
    v14 = *v8;
    v15 = j_operator new(0x10u);
    v15[4] = 2;
    v16 = 62;
    *((_WORD *)v15 + 3) = 62;
    v15[8] = 1;
    *(_DWORD *)v15 = &off_26F08C4;
    *((_DWORD *)v15 + 3) = 0;
    v17 = *(_DWORD *)(v14 + 248);
    *(_DWORD *)(v14 + 248) = v15;
    if ( v17 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 4))(v17);
    v18 = *(_WORD *)(v3 + 188);
    if ( v18 >= 0x3E )
      LOWORD(v18) = 62;
    *(_WORD *)(v3 + 188) = v18;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x3E )
      v16 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v16;
  if ( !j_SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 63) )
    j_SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 63);
    v19 = *v8;
    v20 = j_operator new(0x10u);
    v20[4] = 2;
    v21 = 63;
    *((_WORD *)v20 + 3) = 63;
    v20[8] = 1;
    *(_DWORD *)v20 = &off_26F08C4;
    *((_DWORD *)v20 + 3) = 27;
    v22 = *(_DWORD *)(v19 + 252);
    *(_DWORD *)(v19 + 252) = v20;
    if ( v22 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 4))(v22);
    v23 = *(_WORD *)(v3 + 188);
    if ( v23 >= 0x3F )
      LOWORD(v23) = 63;
    *(_WORD *)(v3 + 188) = v23;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x3F )
      v21 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v21;
  if ( !j_SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 37) )
    j_SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 37);
    v24 = *v8;
    v25 = j_operator new(0xCu);
    v26 = 37;
    v25[4] = 1;
    *((_WORD *)v25 + 3) = 37;
    v25[8] = 1;
    *(_DWORD *)v25 = &off_26F0DE0;
    *((_WORD *)v25 + 5) = 0;
    v27 = *(_DWORD *)(v24 + 148);
    *(_DWORD *)(v24 + 148) = v25;
    if ( v27 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v27 + 4))(v27);
    v28 = *(_WORD *)(v3 + 188);
    if ( v28 >= 0x25 )
      LOWORD(v28) = 37;
    *(_WORD *)(v3 + 188) = v28;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 0x25 )
      v26 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v26;
  if ( !j_SynchedEntityData::_find((SynchedEntityData *)(v3 + 176), 8) )
    j_SynchedEntityData::_resizeToContain((SynchedEntityData *)(v3 + 176), 8);
    v29 = *v8;
    v30 = j_operator new(0x10u);
    v30[4] = 2;
    v31 = 8;
    *((_WORD *)v30 + 3) = 8;
    v30[8] = 1;
    *(_DWORD *)v30 = &off_26F08C4;
    *((_DWORD *)v30 + 3) = 0;
    v32 = *(_DWORD *)(v29 + 32);
    *(_DWORD *)(v29 + 32) = v30;
    if ( v32 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v32 + 4))(v32);
    v33 = *(_WORD *)(v3 + 188);
    if ( v33 >= 8 )
      LOWORD(v33) = 8;
    *(_WORD *)(v3 + 188) = v33;
    if ( (unsigned int)*(_WORD *)(v3 + 190) > 8 )
      v31 = *(_WORD *)(v3 + 190);
    *(_WORD *)(v3 + 190) = v31;
  *(_DWORD *)(v3 + 248) = 61;
  return v3;
}


void __fastcall AreaEffectCloud::spawnParticles(AreaEffectCloud *this, Random *a2, unsigned int a3, float _R3)
{
  unsigned int v4; // r4@1
  Random *v5; // r11@1
  AreaEffectCloud *v6; // r6@1
  float v15; // r1@3
  float v18; // r1@3
  float v20; // r1@3
  int v22; // r5@3
  int v23; // r9@3
  Particle *v25; // r7@3
  unsigned int v26; // r0@4
  float v31; // [sp+14h] [bp-64h]@3
  int v32; // [sp+18h] [bp-60h]@3

  v4 = a3;
  v5 = a2;
  v6 = this;
  if ( a3 )
  {
    __asm
    {
      VMOV            S16, R3
      VLDR            D10, =2.32830644e-10
      VLDR            S22, =0.0039216
    }
    _R0 = &mce::Math::TAU;
    __asm { VLDR            S18, [R0] }
    do
      _R7 = j_Random::_genRandInt32(v5);
      _R0 = j_Random::_genRandInt32(v5);
      __asm
      {
        VMOV            S0, R0
        VMOV            S2, R7
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D10
        VCVT.F32.F64    S0, D0
        VCVT.F64.U32    D1, S2
        VMOV            R0, S0
        VMUL.F64        D1, D1, D10
        VCVT.F32.F64    S0, D1
        VMUL.F32        S24, S0, S18
      }
      _R0 = j_mce::Math::sqrt(_R0, v15);
        VMOV            R7, S24
        VMUL.F32        S24, S0, S16
      _R0 = j_mce::Math::cos(_R7, v18);
      __asm { VMOV            S26, R0 }
      _R7 = j_mce::Math::sin(_R7, v20);
      v22 = j_Entity::getLevel(v6);
      v23 = j_SynchedEntityData::getInt((AreaEffectCloud *)((char *)v6 + 176), 63);
        VMOV            S0, R7
        VMUL.F32        S26, S26, S24
        VMUL.F32        S24, S0, S24
      _R0 = (*(int (__fastcall **)(AreaEffectCloud *))(*(_DWORD *)v6 + 52))(v6);
        VLDR            S0, [R0]
        VLDR            S2, [R0,#8]
        VADD.F32        S0, S0, S26
        VADD.F32        S2, S2, S24
        VSTR            S0, [SP,#0x78+var_64]
      v32 = *(_DWORD *)(_R0 + 4);
      __asm { VSTR            S2, [SP,#0x78+var_5C] }
      v25 = (Particle *)j_Level::addParticle(v22, v23, (int)&v31);
      if ( v25 )
        v26 = j_SynchedEntityData::getInt((AreaEffectCloud *)((char *)v6 + 176), 8);
        if ( v26 )
        {
          _R1 = (unsigned __int16)v26 >> 8;
          _R2 = (v26 >> 16) & 0xFF;
          __asm { VMOV            S0, R2 }
          _R2 = (unsigned __int8)v26;
          _R0 = v26 >> 24;
          __asm
          {
            VMOV            S2, R1
            VMOV            S4, R2
            VMOV            S6, R0
            VCVT.F32.S32    S0, S0
            VCVT.F32.S32    S2, S2
            VCVT.F32.S32    S4, S4
            VCVT.F32.S32    S6, S6
            VMUL.F32        S0, S0, S22
            VMUL.F32        S2, S2, S22
            VMUL.F32        S4, S4, S22
            VMUL.F32        S6, S6, S22
            VSTR            S0, [R7,#0x44]
            VSTR            S2, [R7,#0x48]
            VSTR            S4, [R7,#0x4C]
            VSTR            S6, [R7,#0x50]
          }
        }
        else
          j_AreaEffectCloud::applyParticleColor(v6, v25);
      --v4;
    while ( v4 );
  }
}


void __fastcall AreaEffectCloud::addAdditionalSaveData(AreaEffectCloud *this, CompoundTag *a2)
{
  CompoundTag *v2; // r9@1
  AreaEffectCloud *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v9; // r0@6
  void *v10; // r0@7
  SynchedEntityData *v11; // r8@8
  int v12; // r0@8
  void *v13; // r0@8
  void *v14; // r0@9
  __int16 v15; // r0@10
  void *v16; // r0@10
  int v17; // r0@11
  void *v18; // r0@11
  void *v19; // r7@12
  int v20; // r6@12
  int i; // r5@12
  int v22; // r0@13
  void *v23; // r0@20
  int v24; // r0@21
  void *v25; // r0@21
  unsigned int *v26; // r2@23
  signed int v27; // r1@25
  unsigned int *v28; // r2@27
  signed int v29; // r1@29
  unsigned int *v30; // r2@31
  signed int v31; // r1@33
  unsigned int *v32; // r2@35
  signed int v33; // r1@37
  unsigned int *v34; // r2@39
  signed int v35; // r1@41
  unsigned int *v36; // r2@43
  signed int v37; // r1@45
  unsigned int *v38; // r2@47
  signed int v39; // r1@49
  unsigned int *v40; // r2@51
  signed int v41; // r1@53
  unsigned int *v42; // r2@55
  signed int v43; // r1@57
  unsigned int *v44; // r2@59
  signed int v45; // r1@61
  unsigned int *v46; // r2@63
  signed int v47; // r1@65
  unsigned int *v48; // r2@67
  signed int v49; // r1@69
  unsigned int *v50; // r2@71
  signed int v51; // r1@73
  int v52; // [sp+8h] [bp-98h]@21
  void *v53; // [sp+Ch] [bp-94h]@18
  int v54; // [sp+14h] [bp-8Ch]@18
  int v55; // [sp+18h] [bp-88h]@13
  int v56; // [sp+1Ch] [bp-84h]@13
  int v57; // [sp+24h] [bp-7Ch]@11
  int v58; // [sp+2Ch] [bp-74h]@10
  int v59; // [sp+34h] [bp-6Ch]@9
  int v60; // [sp+3Ch] [bp-64h]@8
  int v61; // [sp+44h] [bp-5Ch]@7
  int v62; // [sp+4Ch] [bp-54h]@6
  int v63; // [sp+54h] [bp-4Ch]@5
  int v64; // [sp+5Ch] [bp-44h]@4
  int v65; // [sp+64h] [bp-3Ch]@3
  int v66; // [sp+6Ch] [bp-34h]@2
  int v67; // [sp+74h] [bp-2Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v67, "Age");
  j_CompoundTag::putInt((int)v2, (const void **)&v67, *((_DWORD *)v3 + 104));
  v4 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
  {
    v26 = (unsigned int *)(v67 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
    }
    else
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v66, "Duration");
  j_CompoundTag::putInt((int)v2, (const void **)&v66, *((_DWORD *)v3 + 857));
  v5 = (void *)(v66 - 12);
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v66 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v65, "WaitTime");
  j_CompoundTag::putInt((int)v2, (const void **)&v65, *((_DWORD *)v3 + 858));
  v6 = (void *)(v65 - 12);
  if ( (int *)(v65 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v65 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v64, "ReapplicationDelay");
  j_CompoundTag::putInt((int)v2, (const void **)&v64, *((_DWORD *)v3 + 859));
  v7 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v64 - 4);
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v63, "DurationOnUse");
  j_CompoundTag::putInt((int)v2, (const void **)&v63, *((_DWORD *)v3 + 860));
  v8 = (void *)(v63 - 12);
  if ( (int *)(v63 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v63 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v62, "RadiusOnUse");
  j_CompoundTag::putFloat((int)v2, (const void **)&v62, *((_DWORD *)v3 + 861));
  v9 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v62 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  sub_21E94B4((void **)&v61, "RadiusPerTick");
  j_CompoundTag::putFloat((int)v2, (const void **)&v61, *((_DWORD *)v3 + 862));
  v10 = (void *)(v61 - 12);
  if ( (int *)(v61 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v61 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  sub_21E94B4((void **)&v60, "Radius");
  v11 = (AreaEffectCloud *)((char *)v3 + 176);
  v12 = j_SynchedEntityData::getFloat((AreaEffectCloud *)((char *)v3 + 176), 61);
  j_CompoundTag::putFloat((int)v2, (const void **)&v60, v12);
  v13 = (void *)(v60 - 12);
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v60 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  sub_21E94B4((void **)&v59, "OwnerId");
  j_CompoundTag::putInt64((int)v2, (const void **)&v59, *((_DWORD *)v3 + 854), *((_DWORD *)v3 + 855));
  v14 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v59 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v58, "PotionId");
  v15 = j_SynchedEntityData::getShort((AreaEffectCloud *)((char *)v3 + 176), 37);
  j_CompoundTag::putShort((int)v2, (const void **)&v58, v15);
  v16 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v58 - 4);
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v57, "ParticleId");
  v17 = j_SynchedEntityData::getInt((AreaEffectCloud *)((char *)v3 + 176), 63);
  j_CompoundTag::putInt((int)v2, (const void **)&v57, v17);
  v18 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v57 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  v19 = j_operator new(0x14u);
  j_ListTag::ListTag((int)v19);
  v20 = *((_DWORD *)v3 + 863);
  for ( i = *((_DWORD *)v3 + 864); i != v20; v55 = 0 )
    j_MobEffectInstance::save((MobEffectInstance *)&v55, v20);
    v22 = v55;
    v55 = 0;
    v56 = v22;
    j_ListTag::add((int)v19, &v56);
    if ( v56 )
      (*(void (**)(void))(*(_DWORD *)v56 + 4))();
    v56 = 0;
    if ( v55 )
      (*(void (**)(void))(*(_DWORD *)v55 + 4))();
    v20 += 16;
  sub_21E94B4((void **)&v54, "mobEffects");
  v53 = v19;
  j_CompoundTag::put((int)v2, (const void **)&v54, (int *)&v53);
  if ( v53 )
    (*(void (**)(void))(*(_DWORD *)v53 + 4))();
  v53 = 0;
  v23 = (void *)(v54 - 12);
  if ( (int *)(v54 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v54 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v52, "ParticleColor");
  v24 = j_SynchedEntityData::getInt(v11, 8);
  j_CompoundTag::putInt((int)v2, (const void **)&v52, v24);
  v25 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v52 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
}


void __fastcall AreaEffectCloud::~AreaEffectCloud(AreaEffectCloud *this)
{
  AreaEffectCloud *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  char *v4; // r0@3
  void *v5; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_271DD98;
  v2 = (void *)*((_DWORD *)this + 868);
  if ( v2 )
  {
    do
    {
      v3 = *(void **)v2;
      j_operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  j___aeabi_memclr4_0(*((_DWORD *)v1 + 866), 4 * *((_DWORD *)v1 + 867));
  *((_DWORD *)v1 + 868) = 0;
  *((_DWORD *)v1 + 869) = 0;
  v4 = (char *)*((_DWORD *)v1 + 866);
  if ( v4 && (char *)v1 + 3488 != v4 )
    j_operator delete(v4);
  v5 = (void *)*((_DWORD *)v1 + 863);
  if ( v5 )
    j_operator delete(v5);
  j_Entity::~Entity(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


unsigned int __fastcall AreaEffectCloud::setParticle(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = a1;
  v3 = a2;
  result = j_SynchedEntityData::_get((SynchedEntityData *)(a1 + 176), 63);
  v5 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v5 == 2 && *(_DWORD *)(result + 12) != v3 )
  {
    *(_DWORD *)(result + 12) = v3;
    *(_BYTE *)(result + 8) = 1;
    v6 = v5 >> 16;
    v7 = *(_WORD *)(v2 + 188);
    if ( v7 >= v6 )
      LOWORD(v7) = v6;
    *(_WORD *)(v2 + 188) = v7;
    result = *(_WORD *)(v2 + 190);
    if ( result > v6 )
      LOWORD(v6) = *(_WORD *)(v2 + 190);
    *(_WORD *)(v2 + 190) = v6;
  }
  return result;
}


int __fastcall AreaEffectCloud::setOwner(int result, int a2, int a3, int a4)
{
  *(_DWORD *)(result + 3416) = a3;
  *(_DWORD *)(result + 3420) = a4;
  return result;
}


void __fastcall AreaEffectCloud::readAdditionalSaveData(AreaEffectCloud *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r9@1
  AreaEffectCloud *v3; // r10@1
  void *v4; // r0@1
  void *v5; // r0@2
  void *v6; // r0@3
  void *v7; // r0@4
  void *v8; // r0@5
  void *v14; // r0@6
  void *v16; // r0@7
  void *v17; // r0@8
  unsigned __int16 v18; // r4@9
  int v19; // r0@9
  unsigned int v20; // r1@9
  unsigned int v21; // r1@11
  unsigned int v22; // r0@11
  void *v23; // r0@16
  unsigned int v26; // r1@19
  unsigned int v27; // r1@21
  unsigned int v28; // r0@21
  void *v30; // r0@26
  int v31; // r4@27
  int v32; // r0@27
  unsigned int v33; // r1@27
  unsigned int v34; // r1@29
  unsigned int v35; // r0@29
  void *v36; // r0@34
  signed int v37; // r4@35
  void *v38; // r0@35
  ListTag *v39; // r7@37
  void *v40; // r0@37
  int v41; // r5@39
  CompoundTag *v42; // r0@40
  int v43; // r0@40
  int v44; // r2@41
  int v45; // r3@41
  int v46; // r6@41
  int v47; // r4@44
  int v48; // r0@44
  unsigned int v49; // r1@44
  unsigned int v50; // r1@46
  unsigned int v51; // r0@46
  void *v52; // r0@51
  unsigned int *v53; // r2@53
  signed int v54; // r1@55
  unsigned int *v55; // r2@57
  signed int v56; // r1@59
  unsigned int *v57; // r2@61
  signed int v58; // r1@63
  unsigned int *v59; // r2@65
  signed int v60; // r1@67
  unsigned int *v61; // r2@69
  signed int v62; // r1@71
  unsigned int *v63; // r2@73
  signed int v64; // r1@75
  unsigned int *v65; // r2@77
  signed int v66; // r1@79
  unsigned int *v67; // r2@81
  signed int v68; // r1@83
  unsigned int *v69; // r2@85
  signed int v70; // r1@87
  unsigned int *v71; // r2@89
  signed int v72; // r1@91
  unsigned int *v73; // r2@93
  signed int v74; // r1@95
  unsigned int *v75; // r2@97
  signed int v76; // r1@99
  unsigned int *v77; // r2@101
  signed int v78; // r1@103
  unsigned int *v79; // r2@153
  signed int v80; // r1@155
  int v81; // [sp+Ch] [bp-BCh]@44
  char v82; // [sp+10h] [bp-B8h]@40
  int v83; // [sp+14h] [bp-B4h]@40
  int v84; // [sp+18h] [bp-B0h]@40
  int v85; // [sp+1Ch] [bp-ACh]@40
  int v86; // [sp+24h] [bp-A4h]@37
  int v87; // [sp+2Ch] [bp-9Ch]@35
  int v88; // [sp+34h] [bp-94h]@27
  int v89; // [sp+3Ch] [bp-8Ch]@17
  int v90; // [sp+44h] [bp-84h]@9
  int v91; // [sp+4Ch] [bp-7Ch]@8
  int v92; // [sp+54h] [bp-74h]@7
  int v93; // [sp+5Ch] [bp-6Ch]@6
  int v94; // [sp+64h] [bp-64h]@5
  int v95; // [sp+6Ch] [bp-5Ch]@4
  int v96; // [sp+74h] [bp-54h]@3
  int v97; // [sp+7Ch] [bp-4Ch]@2
  int v98; // [sp+84h] [bp-44h]@1
  int v99; // [sp+88h] [bp-40h]@40
  int v100; // [sp+8Ch] [bp-3Ch]@40
  int v101; // [sp+90h] [bp-38h]@40
  int v102; // [sp+94h] [bp-34h]@40

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v98, "Age");
  *((_DWORD *)v3 + 104) = j_CompoundTag::getInt((int)v2, (const void **)&v98);
  v4 = (void *)(v98 - 12);
  if ( (int *)(v98 - 12) != &dword_28898C0 )
  {
    v53 = (unsigned int *)(v98 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
    }
    else
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  sub_21E94B4((void **)&v97, "Duration");
  *((_DWORD *)v3 + 857) = j_CompoundTag::getInt((int)v2, (const void **)&v97);
  v5 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v55 = (unsigned int *)(v97 - 4);
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  sub_21E94B4((void **)&v96, "WaitTime");
  *((_DWORD *)v3 + 858) = j_CompoundTag::getInt((int)v2, (const void **)&v96);
  v6 = (void *)(v96 - 12);
  if ( (int *)(v96 - 12) != &dword_28898C0 )
    v57 = (unsigned int *)(v96 - 4);
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  sub_21E94B4((void **)&v95, "ReapplicationDelay");
  *((_DWORD *)v3 + 859) = j_CompoundTag::getInt((int)v2, (const void **)&v95);
  v7 = (void *)(v95 - 12);
  if ( (int *)(v95 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v95 - 4);
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  sub_21E94B4((void **)&v94, "DurationOnUse");
  *((_DWORD *)v3 + 860) = j_CompoundTag::getInt((int)v2, (const void **)&v94);
  v8 = (void *)(v94 - 12);
  if ( (int *)(v94 - 12) != &dword_28898C0 )
    v61 = (unsigned int *)(v94 - 4);
        v62 = __ldrex(v61);
      while ( __strex(v62 - 1, v61) );
      v62 = (*v61)--;
    if ( v62 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v93, "RadiusOnUse");
  _R0 = j_CompoundTag::getFloat((int)v2, (const void **)&v93);
  __asm
    VMOV            S0, R0
    VSTR            S0, [R1]
  v14 = (void *)(v93 - 12);
  if ( (int *)(v93 - 12) != &dword_28898C0 )
    v63 = (unsigned int *)(v93 - 4);
        v64 = __ldrex(v63);
      while ( __strex(v64 - 1, v63) );
      v64 = (*v63)--;
    if ( v64 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  sub_21E94B4((void **)&v92, "RadiusPerTick");
  _R0 = j_CompoundTag::getFloat((int)v2, (const void **)&v92);
  v16 = (void *)(v92 - 12);
  if ( (int *)(v92 - 12) != &dword_28898C0 )
    v65 = (unsigned int *)(v92 - 4);
        v66 = __ldrex(v65);
      while ( __strex(v66 - 1, v65) );
      v66 = (*v65)--;
    if ( v66 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  sub_21E94B4((void **)&v91, "OwnerID");
  *((_QWORD *)v3 + 427) = j_CompoundTag::getInt64((int)v2, (const void **)&v91);
  v17 = (void *)(v91 - 12);
  if ( (int *)(v91 - 12) != &dword_28898C0 )
    v67 = (unsigned int *)(v91 - 4);
        v68 = __ldrex(v67);
      while ( __strex(v68 - 1, v67) );
      v68 = (*v67)--;
    if ( v68 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  sub_21E94B4((void **)&v90, "PotionId");
  v18 = j_CompoundTag::getShort((int)v2, (const void **)&v90);
  v19 = j_SynchedEntityData::_get((AreaEffectCloud *)((char *)v3 + 176), 37);
  v20 = *(_DWORD *)(v19 + 4);
  if ( (unsigned __int8)v20 == 1 && *(_WORD *)(v19 + 10) != v18 )
    *(_WORD *)(v19 + 10) = v18;
    *(_BYTE *)(v19 + 8) = 1;
    v21 = v20 >> 16;
    v22 = *((_WORD *)v3 + 94);
    if ( v22 >= v21 )
      LOWORD(v22) = v21;
    *((_WORD *)v3 + 94) = v22;
    if ( *((_WORD *)v3 + 95) > v21 )
      LOWORD(v21) = *((_WORD *)v3 + 95);
    *((_WORD *)v3 + 95) = v21;
  v23 = (void *)(v90 - 12);
  if ( (int *)(v90 - 12) != &dword_28898C0 )
    v69 = (unsigned int *)(v90 - 4);
        v70 = __ldrex(v69);
      while ( __strex(v70 - 1, v69) );
      v70 = (*v69)--;
    if ( v70 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  sub_21E94B4((void **)&v89, "Radius");
  _R0 = j_CompoundTag::getFloat((int)v2, (const void **)&v89);
    VLDR            S16, =0.0
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S16, S0 }
  _R0 = j_SynchedEntityData::_get((AreaEffectCloud *)((char *)v3 + 176), 61);
  v26 = *(_DWORD *)(_R0 + 4);
  if ( (unsigned __int8)v26 == 3 )
    __asm
      VLDR            S0, [R0,#0xC]
      VCMPE.F32       S0, S16
      VMRS            APSR_nzcv, FPSCR
    if ( !_ZF )
      __asm { VSTR            S16, [R0,#0xC] }
      *(_BYTE *)(_R0 + 8) = 1;
      v27 = v26 >> 16;
      v28 = *((_WORD *)v3 + 94);
      if ( v28 >= v27 )
        LOWORD(v28) = v27;
      *((_WORD *)v3 + 94) = v28;
      if ( *((_WORD *)v3 + 95) > v27 )
        LOWORD(v27) = *((_WORD *)v3 + 95);
      *((_WORD *)v3 + 95) = v27;
    VADD.F32        S0, S16, S16
    VMOV            R1, S0
  (*(void (__fastcall **)(AreaEffectCloud *, int, signed int))(*(_DWORD *)v3 + 680))(v3, _R1, 1065353216);
  v30 = (void *)(v89 - 12);
  if ( (int *)(v89 - 12) != &dword_28898C0 )
    v71 = (unsigned int *)(v89 - 4);
        v72 = __ldrex(v71);
      while ( __strex(v72 - 1, v71) );
      v72 = (*v71)--;
    if ( v72 <= 0 )
      j_j_j_j__ZdlPv_9(v30);
  sub_21E94B4((void **)&v88, "ParticleId");
  v31 = j_CompoundTag::getInt((int)v2, (const void **)&v88);
  v32 = j_SynchedEntityData::_get((AreaEffectCloud *)((char *)v3 + 176), 63);
  v33 = *(_DWORD *)(v32 + 4);
  if ( (unsigned __int8)v33 == 2 && *(_DWORD *)(v32 + 12) != v31 )
    *(_DWORD *)(v32 + 12) = v31;
    *(_BYTE *)(v32 + 8) = 1;
    v34 = v33 >> 16;
    v35 = *((_WORD *)v3 + 94);
    if ( v35 >= v34 )
      LOWORD(v35) = v34;
    *((_WORD *)v3 + 94) = v35;
    if ( *((_WORD *)v3 + 95) > v34 )
      LOWORD(v34) = *((_WORD *)v3 + 95);
    *((_WORD *)v3 + 95) = v34;
  v36 = (void *)(v88 - 12);
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v73 = (unsigned int *)(v88 - 4);
        v74 = __ldrex(v73);
      while ( __strex(v74 - 1, v73) );
      v74 = (*v73)--;
    if ( v74 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  sub_21E94B4((void **)&v87, "mobEffects");
  v37 = j_CompoundTag::contains((int)v2, (const void **)&v87, 9);
  v38 = (void *)(v87 - 12);
  if ( (int *)(v87 - 12) != &dword_28898C0 )
    v75 = (unsigned int *)(v87 - 4);
        v76 = __ldrex(v75);
      while ( __strex(v76 - 1, v75) );
      v76 = (*v75)--;
    if ( v76 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  if ( v37 == 1 )
    sub_21E94B4((void **)&v86, "mobEffects");
    v39 = (ListTag *)j_CompoundTag::getList((int)v2, (const void **)&v86);
    v40 = (void *)(v86 - 12);
    if ( (int *)(v86 - 12) != &dword_28898C0 )
      v79 = (unsigned int *)(v86 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v80 = __ldrex(v79);
        while ( __strex(v80 - 1, v79) );
      }
      else
        v80 = (*v79)--;
      if ( v80 <= 0 )
        j_j_j_j__ZdlPv_9(v40);
    if ( j_ListTag::size(v39) >= 1 )
      v41 = 0;
        v42 = (CompoundTag *)j_ListTag::get(v39, v41);
        j_MobEffectInstance::load((MobEffectInstance *)&v82, v42);
        v99 = *(_DWORD *)&v82;
        v100 = v83;
        v101 = v84;
        v102 = v85;
        v43 = *((_DWORD *)v3 + 864);
        if ( v43 == *((_DWORD *)v3 + 865) )
        {
          j_std::vector<MobEffectInstance,std::allocator<MobEffectInstance>>::_M_emplace_back_aux<MobEffectInstance const&>(
            (unsigned __int64 *)((char *)v3 + 3452),
            (int)&v99);
        }
        else
          v44 = v100;
          v45 = v101;
          v46 = v102;
          *(_DWORD *)v43 = v99;
          *(_DWORD *)(v43 + 4) = v44;
          *(_DWORD *)(v43 + 8) = v45;
          *(_DWORD *)(v43 + 12) = v46;
          *((_DWORD *)v3 + 864) += 16;
        ++v41;
      while ( v41 < j_ListTag::size(v39) );
  sub_21E94B4((void **)&v81, "ParticleColor");
  v47 = j_CompoundTag::getInt((int)v2, (const void **)&v81);
  v48 = j_SynchedEntityData::_get((AreaEffectCloud *)((char *)v3 + 176), 8);
  v49 = *(_DWORD *)(v48 + 4);
  if ( (unsigned __int8)v49 == 2 && *(_DWORD *)(v48 + 12) != v47 )
    *(_DWORD *)(v48 + 12) = v47;
    *(_BYTE *)(v48 + 8) = 1;
    v50 = v49 >> 16;
    v51 = *((_WORD *)v3 + 94);
    if ( v51 >= v50 )
      LOWORD(v51) = v50;
    *((_WORD *)v3 + 94) = v51;
    if ( *((_WORD *)v3 + 95) > v50 )
      LOWORD(v50) = *((_WORD *)v3 + 95);
    *((_WORD *)v3 + 95) = v50;
  v52 = (void *)(v81 - 12);
  if ( (int *)(v81 - 12) != &dword_28898C0 )
    v77 = (unsigned int *)(v81 - 4);
        v78 = __ldrex(v77);
      while ( __strex(v78 - 1, v77) );
      v78 = (*v77)--;
    if ( v78 <= 0 )
      j_j_j_j__ZdlPv_9(v52);
}


int __fastcall AreaEffectCloud::setAffectOwner(int result, bool a2)
{
  *(_BYTE *)(result + 3425) = a2;
  return result;
}


int __fastcall AreaEffectCloud::setRadius(AreaEffectCloud *this, float _R1)
{
  AreaEffectCloud *v6; // r4@1
  SynchedEntityData *v7; // r0@1
  unsigned int v9; // r1@3
  unsigned int v10; // r1@5
  unsigned int v11; // r0@5

  __asm { VMOV            S0, R1 }
  v6 = this;
  v7 = (AreaEffectCloud *)((char *)this + 176);
  __asm
  {
    VCMPE.F32       S0, #0.0
    VLDR            S16, =0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S16, S0 }
  _R0 = j_SynchedEntityData::_get(v7, 61);
  v9 = *(_DWORD *)(_R0 + 4);
  if ( (unsigned __int8)v9 == 3 )
    __asm
    {
      VLDR            S0, [R0,#0xC]
      VCMPE.F32       S0, S16
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !_ZF )
      __asm { VSTR            S16, [R0,#0xC] }
      *(_BYTE *)(_R0 + 8) = 1;
      v10 = v9 >> 16;
      v11 = *((_WORD *)v6 + 94);
      if ( v11 >= v10 )
        LOWORD(v11) = v10;
      *((_WORD *)v6 + 94) = v11;
      if ( *((_WORD *)v6 + 95) > v10 )
        LOWORD(v10) = *((_WORD *)v6 + 95);
      *((_WORD *)v6 + 95) = v10;
    VADD.F32        S0, S16, S16
    VMOV            R1, S0
  return (*(int (__fastcall **)(AreaEffectCloud *, int, signed int))(*(_DWORD *)v6 + 680))(v6, _R1, 1065353216);
}


void __fastcall AreaEffectCloud::spawnParticles(AreaEffectCloud *this, Random *a2, unsigned int a3, float _R3)
{
  AreaEffectCloud::spawnParticles(this, a2, a3, _R3);
}


int __fastcall AreaEffectCloud::addEffect(int result, int a2, int a3, int a4, int a5)
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
  v5 = *(_DWORD *)(result + 3456);
  if ( v5 == *(_DWORD *)(result + 3460) )
  {
    result = j_std::vector<MobEffectInstance,std::allocator<MobEffectInstance>>::_M_emplace_back_aux<MobEffectInstance const&>(
               (unsigned __int64 *)(result + 3452),
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
    *(_DWORD *)(result + 3456) += 16;
  return result;
}


unsigned int __fastcall AreaEffectCloud::setPotion(AreaEffectCloud *this, __int16 a2)
{
  AreaEffectCloud *v2; // r4@1
  __int16 v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = this;
  v3 = a2;
  result = j_SynchedEntityData::_get((AreaEffectCloud *)((char *)this + 176), 37);
  v5 = *(_DWORD *)(result + 4);
  if ( (unsigned __int8)v5 == 1 && *(_WORD *)(result + 10) != (unsigned __int16)v3 )
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


_BOOL4 __fastcall AreaEffectCloud::isWaiting(AreaEffectCloud *this)
{
  return j_SynchedEntityData::getInt((AreaEffectCloud *)((char *)this + 176), 62) != 0;
}


void __fastcall AreaEffectCloud::applyParticleColor(AreaEffectCloud *this, Particle *a2)
{
  AreaEffectCloud::applyParticleColor(this, a2);
}


void __fastcall AreaEffectCloud::addAdditionalSaveData(AreaEffectCloud *this, CompoundTag *a2)
{
  AreaEffectCloud::addAdditionalSaveData(this, a2);
}


unsigned int __fastcall AreaEffectCloud::setParticleColor(AreaEffectCloud *this, Color *a2)
{
  AreaEffectCloud *v2; // r4@1
  int v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = this;
  v3 = j_Color::toARGB(a2);
  result = j_SynchedEntityData::_get((AreaEffectCloud *)((char *)v2 + 176), 8);
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


void __fastcall AreaEffectCloud::readAdditionalSaveData(AreaEffectCloud *this, const CompoundTag *a2)
{
  AreaEffectCloud::readAdditionalSaveData(this, a2);
}


void __fastcall AreaEffectCloud::~AreaEffectCloud(AreaEffectCloud *this)
{
  AreaEffectCloud::~AreaEffectCloud(this);
}


int __fastcall AreaEffectCloud::setDuration(int result, int a2)
{
  *(_DWORD *)(result + 3428) = a2;
  return result;
}


int __fastcall AreaEffectCloud::setRadiusOnUse(int result, float a2)
{
  *(float *)(result + 3444) = a2;
  return result;
}


int __fastcall AreaEffectCloud::setReapplicationDelay(int result, int a2)
{
  *(_DWORD *)(result + 3436) = a2;
  return result;
}


unsigned int __fastcall AreaEffectCloud::normalTick(AreaEffectCloud *this)
{
  AreaEffectCloud *v1; // r9@1
  Level *v2; // r8@1
  int v3; // r10@1
  char *v8; // r5@1
  float v9; // r3@3
  AreaEffectCloud *v10; // r0@3
  Random *v11; // r1@3
  unsigned int result; // r0@6
  int v15; // r4@7
  int v16; // r5@7
  signed int v17; // r7@8
  signed int v18; // r6@8
  unsigned int v19; // r1@11
  unsigned int v20; // r1@15
  unsigned int v21; // r0@15
  unsigned int v24; // r1@27
  unsigned int v25; // r1@29
  unsigned int v26; // r0@29
  AreaEffectCloud *v30; // r7@36
  AreaEffectCloud *v31; // r4@40
  unsigned int v32; // r6@41
  int v33; // r11@41
  int v34; // r5@41
  AreaEffectCloud *v35; // r8@41
  AreaEffectCloud *v36; // r0@41
  AreaEffectCloud *v37; // r4@42
  int v38; // r1@45
  AreaEffectCloud *v39; // r10@48
  int v40; // r1@49
  int v41; // r0@57
  unsigned __int64 v42; // kr08_8@57
  Entity **v43; // r4@57
  unsigned __int64 v44; // kr30_8@57
  int v45; // ST20_4@57
  Entity *v46; // r5@59
  char *v47; // r0@60
  char *v48; // r0@61
  __int64 v49; // kr10_8@61
  unsigned int v50; // r5@61
  unsigned int v51; // r6@61
  int v52; // r0@61
  int v53; // r9@62
  int v54; // r4@62
  int v56; // r11@66
  bool v57; // zf@69
  int v58; // r4@72
  char *v60; // r0@75
  __int64 v61; // kr28_8@75
  unsigned int v62; // r11@75
  int v63; // r9@75
  int v64; // r0@75
  int v65; // r6@76
  int v66; // r4@76
  bool v67; // zf@77
  int v68; // r5@80
  bool v69; // zf@83
  _QWORD *v70; // r0@87
  const EntityDamageSource *v71; // r10@88
  MobEffectInstance *v72; // r8@88
  _DWORD **i; // r7@88
  int v74; // r0@89
  int v75; // r5@89
  _DWORD *v76; // r0@89
  _DWORD *v77; // r4@92
  _DWORD **v78; // r10@92
  void (__fastcall *v79)(_DWORD *, _DWORD, int, Entity *); // r7@92
  int v80; // r5@92
  int v82; // r4@95
  int v84; // r0@95
  unsigned int v87; // r1@101
  unsigned int v88; // r1@103
  unsigned int v89; // r0@103
  int v91; // r0@110
  int v92; // r0@111
  void *v93; // r0@114
  void *v94; // r4@115
  int v95; // [sp+10h] [bp-C8h]@58
  AreaEffectCloud *v96; // [sp+14h] [bp-C4h]@36
  int v97; // [sp+18h] [bp-C0h]@75
  _DWORD **v98; // [sp+1Ch] [bp-BCh]@58
  unsigned __int64 *v99; // [sp+24h] [bp-B4h]@58
  Entity *v100; // [sp+28h] [bp-B0h]@61
  unsigned __int64 v101; // [sp+2Ch] [bp-ACh]@61
  unsigned __int64 v102; // [sp+34h] [bp-A4h]@41
  int v103; // [sp+34h] [bp-A4h]@57
  SynchedEntityData *v104; // [sp+38h] [bp-A0h]@61
  AreaEffectCloud *v105; // [sp+3Ch] [bp-9Ch]@37
  int v106; // [sp+3Ch] [bp-9Ch]@75
  MobEffectInstance *v107; // [sp+3Ch] [bp-9Ch]@88
  char v108; // [sp+40h] [bp-98h]@88
  char v109; // [sp+48h] [bp-90h]@95
  int v110; // [sp+58h] [bp-80h]@60
  int v111; // [sp+5Ch] [bp-7Ch]@60
  float v112; // [sp+60h] [bp-78h]@57
  char v113; // [sp+6Ch] [bp-6Ch]@57

  v1 = this;
  v2 = (Level *)j_Entity::getLevel(this);
  j_Entity::normalTick(v1);
  v3 = (int)v1 + 176;
  _R6 = j_SynchedEntityData::getFloat((AreaEffectCloud *)((char *)v1 + 176), 61);
  __asm { VMOV            S16, R6 }
  v8 = j_Level::getRandom(v2);
  if ( j_SynchedEntityData::getInt((AreaEffectCloud *)((char *)v1 + 176), 62) )
  {
    if ( !(j_Random::_genRandInt32((Random *)v8) & 0x8000000) )
      goto LABEL_6;
    v9 = 0.2;
    v10 = v1;
    v11 = (Random *)v8;
    _R2 = 2;
  }
  else
    __asm
    {
      VMOV.F32        S0, #0.5
      VMUL.F32        S2, S16, S16
    }
    v9 = *(float *)&_R6;
    _R0 = &mce::Math::PI;
      VMUL.F32        S0, S2, S0
      VLDR            S2, [R0]
      VMUL.F32        S0, S0, S2
      VCVTR.S32.F32   S0, S0
      VMOV            R2, S0
  j_AreaEffectCloud::spawnParticles(v10, v11, _R2, v9);
LABEL_6:
  result = j_Level::isClientSide(v2);
  if ( result )
    return result;
  v15 = *((_DWORD *)v1 + 858);
  v16 = *((_DWORD *)v1 + 104);
  if ( v16 >= *((_DWORD *)v1 + 857) + v15 )
    return (*(int (__fastcall **)(AreaEffectCloud *))(*(_DWORD *)v1 + 44))(v1);
  v17 = 0;
  v18 = 0;
  if ( v16 < v15 )
    v17 = 1;
  result = j_SynchedEntityData::getInt((AreaEffectCloud *)((char *)v1 + 176), 62) != 0;
  if ( v17 != result )
    result = j_SynchedEntityData::_get((AreaEffectCloud *)((char *)v1 + 176), 62);
    v19 = *(_DWORD *)(result + 4);
    if ( v16 < v15 )
      v18 = 1;
    if ( (unsigned __int8)v19 == 2 && *(_DWORD *)(result + 12) != v18 )
      *(_DWORD *)(result + 12) = v18;
      *(_BYTE *)(result + 8) = 1;
      v20 = v19 >> 16;
      v21 = *((_WORD *)v1 + 94);
      if ( v21 >= v20 )
        LOWORD(v21) = v20;
      *((_WORD *)v1 + 94) = v21;
      result = *((_WORD *)v1 + 95);
      if ( result > v20 )
        LOWORD(v20) = *((_WORD *)v1 + 95);
      *((_WORD *)v1 + 95) = v20;
  _R0 = (int)v1 + 3448;
  __asm
    VLDR            S0, [R0]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  if ( !_ZF )
      VADD.F32        S16, S0, S16
      VMOV.F32        S2, #0.5
      VCMPE.F32       S16, S2
      VMRS            APSR_nzcv, FPSCR
    if ( !(_NF ^ _VF) )
      __asm
      {
        VCMPE.F32       S16, #0.0
        VLDR            S18, =0.0
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S18, S16 }
      _R0 = j_SynchedEntityData::_get((AreaEffectCloud *)((char *)v1 + 176), 61);
      v24 = *(_DWORD *)(_R0 + 4);
      if ( (unsigned __int8)v24 == 3 )
        __asm
        {
          VLDR            S0, [R0,#0xC]
          VCMPE.F32       S0, S18
          VMRS            APSR_nzcv, FPSCR
        }
        if ( !_ZF )
          __asm { VSTR            S18, [R0,#0xC] }
          *(_BYTE *)(_R0 + 8) = 1;
          v25 = v24 >> 16;
          v26 = *((_WORD *)v1 + 94);
          if ( v26 >= v25 )
            LOWORD(v26) = v25;
          *((_WORD *)v1 + 94) = v26;
          if ( *((_WORD *)v1 + 95) > v25 )
            LOWORD(v25) = *((_WORD *)v1 + 95);
          *((_WORD *)v1 + 95) = v25;
        VADD.F32        S0, S18, S18
        VMOV            R1, S0
      (*(void (__fastcall **)(AreaEffectCloud *, int, signed int))(*(_DWORD *)v1 + 680))(v1, _R1, 1065353216);
      goto LABEL_35;
LABEL_35:
  result = *((_DWORD *)v1 + 104);
  _R1 = 1717986919;
  __asm { SMMUL.W         R1, R0, R1 }
  if ( result == 5 * (((signed int)_R1 >> 1) + (_R1 >> 31)) )
    v30 = (AreaEffectCloud *)*((_DWORD *)v1 + 868);
    v96 = (AreaEffectCloud *)((char *)v1 + 3464);
    if ( v30 )
      v105 = (AreaEffectCloud *)((char *)v1 + 3472);
      while ( 1 )
        if ( (signed int)result < *((_DWORD *)v30 + 4) )
          v31 = *(AreaEffectCloud **)v30;
          goto LABEL_55;
        v102 = __PAIR__(v3, (unsigned int)v2);
        v32 = *((_DWORD *)v1 + 867);
        v33 = *((_DWORD *)v1 + 866);
        v34 = *((_DWORD *)v30 + 6) % *((_DWORD *)v1 + 867);
        v35 = *(AreaEffectCloud **)(v33 + 4 * v34);
        v36 = *(AreaEffectCloud **)(v33 + 4 * v34);
        do
          v37 = v36;
          v36 = *(AreaEffectCloud **)v36;
        while ( v36 != v30 );
        if ( v35 == v37 )
          v39 = *(AreaEffectCloud **)v30;
          if ( !*(_DWORD *)v30 )
            goto LABEL_51;
          v40 = *((_DWORD *)v39 + 6) % v32;
          if ( v40 != v34 )
          {
            *(_DWORD *)(v33 + 4 * v40) = v35;
            v33 = *(_DWORD *)v96;
            v35 = *(AreaEffectCloud **)(*(_DWORD *)v96 + 4 * v34);
LABEL_51:
            if ( v105 == v35 )
              *(_DWORD *)v105 = v39;
            *(_DWORD *)(v33 + 4 * v34) = 0;
            goto LABEL_54;
          }
        else if ( *(_DWORD *)v30 )
          v38 = *(_DWORD *)(*(_DWORD *)v30 + 24) % v32;
          if ( v38 != v34 )
            *(_DWORD *)(v33 + 4 * v38) = v37;
LABEL_54:
        *(_DWORD *)v37 = *(_DWORD *)v30;
        v31 = *(AreaEffectCloud **)v30;
        j_operator delete((void *)v30);
        --*((_DWORD *)v1 + 869);
        v3 = HIDWORD(v102);
        v2 = (Level *)v102;
LABEL_55:
        if ( !v31 )
          break;
        result = *((_DWORD *)v1 + 104);
        v30 = v31;
    if ( *((_DWORD *)v1 + 863) == *((_DWORD *)v1 + 864) )
      v93 = (void *)*((_DWORD *)v1 + 868);
      if ( v93 )
          v94 = *(void **)v93;
          j_operator delete(v93);
          v93 = v94;
        while ( v94 );
      j___aeabi_memclr4_0(*((_DWORD *)v1 + 866), 4 * *((_DWORD *)v1 + 867));
      result = 0;
      *((_DWORD *)v1 + 868) = 0;
      *((_DWORD *)v1 + 869) = 0;
    else
      __asm { VMOV.F32        S18, #0.5 }
      v103 = (int)v2;
        VSTR            S16, [SP,#0xD8+var_78]
        VMUL.F32        S0, S16, S18
        VSTR            S0, [SP,#0xD8+var_74]
        VSTR            S16, [SP,#0xD8+var_70]
      j_AABB::grow((AABB *)&v113, (AreaEffectCloud *)((char *)v1 + 264), (int)&v112);
      v41 = j_Entity::getRegion(v1);
      v42 = *(_QWORD *)j_BlockSource::fetchEntities2(v41, 256, (const AABB *)&v113, 0);
      result = HIDWORD(v42);
      v44 = v42;
      v45 = v44 >> 32;
      v43 = (Entity **)v44;
      if ( (_DWORD)v42 != HIDWORD(v42) )
        __asm { VMOV.F32        S22, #0.25 }
        v99 = (unsigned __int64 *)((char *)v1 + 3416);
        v95 = (int)v1 + 3444;
        __asm { VLDR            S20, =0.0 }
        v98 = MobEffect::mMobEffects;
          v46 = *v43;
          if ( !*((_BYTE *)v1 + 3425) )
            j_Entity::getOwnerId((Entity *)&v110, (int)v1);
            v47 = j_Entity::getUniqueID(v46);
            result = *(_QWORD *)v47 ^ v110 | (*(_QWORD *)v47 >> 32) ^ v111;
            if ( !result )
              break;
          v100 = v46;
          v101 = __PAIR__((unsigned int)v1, (unsigned int)v43);
          v104 = (SynchedEntityData *)v3;
          v48 = j_Entity::getUniqueID(v46);
          v49 = *(_QWORD *)v48;
          v50 = *((_DWORD *)v1 + 867);
          v51 = (*(_QWORD *)v48
               + (((*(_QWORD *)v48 >> 32) - 1640531527) << 6)
               + ((unsigned int)((*(_QWORD *)v48 >> 32) - 1640531527) >> 2)
               - 1640531527) ^ ((*(_QWORD *)v48 >> 32) - 1640531527);
          v52 = *(_DWORD *)(*((_DWORD *)v1 + 866) + 4 * (v51 % v50));
          if ( !v52 )
            goto LABEL_73;
          v53 = *(_DWORD *)v52;
          v54 = *(_DWORD *)(*(_DWORD *)v52 + 24);
          while ( 1 )
            _ZF = v54 == v51;
            if ( v54 == v51 )
              _ZF = *(_QWORD *)(v53 + 8) == v49;
            if ( _ZF )
            v56 = *(_DWORD *)v53;
            if ( *(_DWORD *)v53 )
            {
              v54 = *(_DWORD *)(v56 + 24);
              v52 = v53;
              v53 = *(_DWORD *)v53;
              if ( *(_DWORD *)(v56 + 24) % v50 == v51 % v50 )
                continue;
            }
          v57 = v52 == 0;
          if ( v52 )
            v57 = *(_DWORD *)v52 == 0;
          if ( v57 )
LABEL_73:
            v1 = (AreaEffectCloud *)HIDWORD(v101);
            v58 = v101;
            _R0 = j_Entity::distanceToSqr((Entity *)HIDWORD(v101), *(const Entity **)v101);
            __asm
              VMUL.F32        S0, S16, S16
              VMOV            S2, R0
              VCMPE.F32       S2, S0
              VMRS            APSR_nzcv, FPSCR
            if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
              v60 = j_Entity::getUniqueID(v100);
              v61 = *(_QWORD *)v60;
              v62 = (*(_QWORD *)v60
                   + (((*(_QWORD *)v60 >> 32) - 1640531527) << 6)
                   + ((unsigned int)((*(_QWORD *)v60 >> 32) - 1640531527) >> 2)
                   - 1640531527) ^ ((*(_QWORD *)v60 >> 32) - 1640531527);
              v63 = v62 % *(_DWORD *)(HIDWORD(v101) + 3468);
              v106 = *(_DWORD *)(HIDWORD(v101) + 416);
              v97 = *(_DWORD *)(HIDWORD(v101) + 3436);
              v64 = *(_DWORD *)(*(_DWORD *)(HIDWORD(v101) + 3464) + 4 * v63);
              if ( !v64 )
                goto LABEL_87;
              v65 = *(_DWORD *)v64;
              v66 = *(_DWORD *)(*(_DWORD *)v64 + 24);
              while ( 1 )
              {
                v67 = v66 == v62;
                if ( v66 == v62 )
                  v67 = *(_QWORD *)(v65 + 8) == v61;
                if ( v67 )
                  break;
                v68 = *(_DWORD *)v65;
                if ( *(_DWORD *)v65 )
                {
                  v66 = *(_DWORD *)(v68 + 24);
                  v64 = v65;
                  v65 = *(_DWORD *)v65;
                  if ( *(_DWORD *)(v68 + 24) % *(_DWORD *)(HIDWORD(v101) + 3468) == v63 )
                    continue;
                }
              }
              v69 = v64 == 0;
              if ( v64 )
                v69 = *(_DWORD *)v64 == 0;
              if ( v69 )
LABEL_87:
                v70 = j_operator new(0x20u);
                *(_DWORD *)v70 = 0;
                v70[1] = v61;
                *((_DWORD *)v70 + 4) = v97 + v106;
                j_std::_Hashtable<EntityUniqueID,std::pair<EntityUniqueID const,int>,std::allocator<std::pair<EntityUniqueID const,int>>,std::__detail::_Select1st,std::equal_to<EntityUniqueID>,std::hash<EntityUniqueID>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert_unique_node(
                  (int)v96,
                  v63,
                  v62,
                  (int)v70);
              v1 = (AreaEffectCloud *)HIDWORD(v101);
              v71 = (const EntityDamageSource *)&v108;
              v72 = *(MobEffectInstance **)(HIDWORD(v101) + 3452);
              v107 = *(MobEffectInstance **)(HIDWORD(v101) + 3456);
              for ( i = v98; v107 != v72; v72 = (MobEffectInstance *)((char *)v72 + 16) )
                v74 = j_MobEffectInstance::getId(v72);
                v75 = v74;
                v76 = i[v74];
                if ( v76 )
                  if ( (*(int (__cdecl **)(_DWORD *, _DWORD))(*v76 + 20))(v76, *(_DWORD *)(*v76 + 20)) == 1 )
                  {
                    if ( (*(int (__fastcall **)(Entity *, MobEffectInstance *))(*(_DWORD *)v100 + 1068))(v100, v72) == 1 )
                    {
                      v77 = i[v75];
                      v78 = i;
                      v79 = *(void (__fastcall **)(_DWORD *, _DWORD, int, Entity *))(*v77 + 16);
                      v80 = j_Level::fetchEntity(v103, (int)v99, *v99, *v99 >> 32, 0);
                      j_MobEffectInstance::getAmplifier(v72);
                      v79(v77, HIDWORD(v101), v80, v100);
                      i = v78;
                      v71 = (const EntityDamageSource *)&v108;
                    }
                  }
                  else
                    _R0 = j_MobEffectInstance::getDuration(v72);
                    __asm
                      VMOV            S0, R0
                      VCVT.F32.S32    S0, S0
                      VMUL.F32        S0, S0, S22
                      VCVTR.S32.F32   S24, S0
                    v82 = j_MobEffect::getId((MobEffect *)i[v75]);
                    __asm { VMOV            R5, S24 }
                    v84 = j_MobEffectInstance::getAmplifier(v72);
                    j_MobEffectInstance::MobEffectInstance((int)&v109, v82, _R5, v84);
                    j_Mob::addEffect(v100, (const MobEffectInstance *)&v109);
                else if ( *(_DWORD *)(*((_DWORD *)v100 + 12) + 160) )
                  j_EntityDamageSource::EntityDamageSource((int)v71, 9);
                  j_Entity::hurt(v100, v71, 1, 0, 0);
                  j_EntityDamageByBlockSource::~EntityDamageByBlockSource(v71);
              _R0 = v95;
              __asm
                VLDR            S0, [R0]
                VCMPE.F32       S0, #0.0
                VMRS            APSR_nzcv, FPSCR
              if ( _ZF )
                v3 = (int)v104;
              else
                __asm { VADD.F32        S16, S0, S16 }
                __asm
                  VCMPE.F32       S16, S18
                  VMRS            APSR_nzcv, FPSCR
                if ( _NF ^ _VF )
                  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v101) + 44))(HIDWORD(v101));
                  VCMPE.F32       S16, #0.0
                  VMOV.F32        S24, S20
                if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
                  __asm { VMOVGT.F32      S24, S16 }
                _R0 = j_SynchedEntityData::_get(v104, 61);
                v87 = *(_DWORD *)(_R0 + 4);
                if ( (unsigned __int8)v87 == 3 )
                  __asm
                    VLDR            S0, [R0,#0xC]
                    VCMPE.F32       S0, S24
                    VMRS            APSR_nzcv, FPSCR
                  if ( !_ZF )
                    __asm { VSTR            S24, [R0,#0xC] }
                    *(_BYTE *)(_R0 + 8) = 1;
                    v88 = v87 >> 16;
                    v89 = *(_WORD *)(HIDWORD(v101) + 188);
                    if ( v89 >= v88 )
                      LOWORD(v89) = v88;
                    *(_WORD *)(HIDWORD(v101) + 188) = v89;
                    if ( *(_WORD *)(HIDWORD(v101) + 190) > v88 )
                      LOWORD(v88) = *(_WORD *)(HIDWORD(v101) + 190);
                    *(_WORD *)(HIDWORD(v101) + 190) = v88;
                  VADD.F32        S0, S24, S24
                  VMOV            R1, S0
                (*(void (__fastcall **)(_DWORD, int, signed int))(*(_DWORD *)HIDWORD(v101) + 680))(
                  HIDWORD(v101),
                  _R1,
                  1065353216);
              v58 = v101;
              v98 = i;
              v91 = *(_DWORD *)(HIDWORD(v101) + 3428);
              if ( v91 )
                v92 = v91 + *(_DWORD *)(HIDWORD(v101) + 3440);
                *(_DWORD *)(HIDWORD(v101) + 3428) = v92;
                if ( v92 <= 0 )
          else
          v43 = (Entity **)(v58 + 4);
          result = HIDWORD(v42);
        while ( v43 != (Entity **)HIDWORD(v42) );
  return result;
}


int __fastcall AreaEffectCloud::setRadiusPerTick(int result, float a2)
{
  *(float *)(result + 3448) = a2;
  return result;
}


unsigned int __fastcall AreaEffectCloud::setWaiting(AreaEffectCloud *this, int a2)
{
  AreaEffectCloud *v2; // r4@1
  int v3; // r5@1
  unsigned int result; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r1@3
  unsigned int v7; // r0@3

  v2 = this;
  v3 = a2;
  result = j_SynchedEntityData::_get((AreaEffectCloud *)((char *)this + 176), 62);
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


Entity *__fastcall AreaEffectCloud::~AreaEffectCloud(AreaEffectCloud *this)
{
  AreaEffectCloud *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r5@2
  char *v4; // r0@3
  void *v5; // r0@6

  v1 = this;
  *(_DWORD *)this = &off_271DD98;
  v2 = (void *)*((_DWORD *)this + 868);
  if ( v2 )
  {
    do
    {
      v3 = *(void **)v2;
      j_operator delete(v2);
      v2 = v3;
    }
    while ( v3 );
  }
  j___aeabi_memclr4_0(*((_DWORD *)v1 + 866), 4 * *((_DWORD *)v1 + 867));
  *((_DWORD *)v1 + 868) = 0;
  *((_DWORD *)v1 + 869) = 0;
  v4 = (char *)*((_DWORD *)v1 + 866);
  if ( v4 && (char *)v1 + 3488 != v4 )
    j_operator delete(v4);
  v5 = (void *)*((_DWORD *)v1 + 863);
  if ( v5 )
    j_operator delete(v5);
  return j_j_j__ZN6EntityD2Ev_1(v1);
}


int __fastcall AreaEffectCloud::setDurationOnUse(int result, int a2)
{
  *(_DWORD *)(result + 3440) = a2;
  return result;
}


signed int __fastcall AreaEffectCloud::getEntityTypeId(AreaEffectCloud *this)
{
  return 95;
}


int __fastcall AreaEffectCloud::getShadowRadius(AreaEffectCloud *this)
{
  return 0;
}


void __fastcall AreaEffectCloud::applyParticleColor(AreaEffectCloud *this, Particle *a2)
{
  Particle *v2; // r10@1
  AreaEffectCloud *v3; // r5@1
  int v4; // r1@2
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
    v4 = j_SynchedEntityData::getShort((AreaEffectCloud *)((char *)this + 176), 37);
    if ( (_WORD)v4 )
    {
      ptr = 0;
      v46 = 0;
      v47 = 0;
      v5 = *((_DWORD *)v3 + 863);
      v6 = *((_DWORD *)v3 + 864);
      if ( v5 == v6 )
      {
        j_Potion::getPotion((Potion *)&v40, v4);
        v7 = j_Potion::getMobEffect(v40);
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
        v15 = j_MobEffectInstance::getDuration((MobEffectInstance *)&v42);
        v16 = 1;
        if ( v15 / 8 > 1 )
          v16 = v15 / 8;
        j_MobEffectInstance::setDuration((MobEffectInstance *)&v42, v16);
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
            v20 = (char *)j_operator new(16 * v23);
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
            j_operator delete((void *)v17);
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
        j_std::vector<MobEffectInstance,std::allocator<MobEffectInstance>>::_M_range_insert<__gnu_cxx::__normal_iterator<MobEffectInstance*,std::vector<MobEffectInstance,std::allocator<MobEffectInstance>>>>(
          (signed int)&ptr,
          0,
          v5,
          v6);
      j_MobEffectInstance::getColorValue((int)&v36, (__int64 *)&ptr);
      v32 = v37;
      v33 = v38;
      v34 = v39;
      v35 = (int)v2 + 68;
      *(_DWORD *)v35 = v36;
      *(_DWORD *)(v35 + 4) = v32;
      *(_DWORD *)(v35 + 8) = v33;
      *(_DWORD *)(v35 + 12) = v34;
      if ( ptr )
        j_operator delete(ptr);
    }
  }
}


int __fastcall AreaEffectCloud::setWaitTime(int result, int a2)
{
  *(_DWORD *)(result + 3432) = a2;
  return result;
}
