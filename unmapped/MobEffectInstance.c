

int __fastcall MobEffectInstance::getId(MobEffectInstance *this)
{
  return *(_DWORD *)this;
}


void __fastcall MobEffectInstance::toString(MobEffectInstance *this, int a2)
{
  int v2; // r5@1
  MobEffectInstance *v3; // r6@1
  MobEffect *v4; // r0@1
  int *v5; // r0@2
  const void **v6; // r0@2
  _BYTE *v7; // r3@2 OVERLAPPED
  unsigned int v8; // r1@2
  unsigned int v9; // r4@2
  const void **v10; // r0@4
  int *v11; // r0@5
  const void **v12; // r0@5
  _BYTE *v13; // r3@5 OVERLAPPED
  unsigned int v14; // r1@5
  unsigned int v15; // r4@5
  const void **v16; // r0@7
  const void **v17; // r0@9
  _BYTE *v18; // r3@9 OVERLAPPED
  unsigned int v19; // r1@9
  unsigned int v20; // r4@9
  const void **v21; // r0@11
  char *v22; // r0@13
  void *v23; // r0@14
  void *v24; // r0@15
  char *v25; // r0@16
  void *v26; // r0@17
  void *v27; // r0@18
  void *v28; // r0@19
  unsigned int *v29; // r2@20
  signed int v30; // r1@22
  char *v31; // r0@25
  void *v32; // r0@26
  void *v33; // r0@27
  const void **v34; // r0@32
  char *v35; // r0@32
  char *v36; // r1@33
  char *v37; // r0@35
  unsigned int *v38; // r2@37
  signed int v39; // r1@39
  unsigned int *v40; // r2@41
  signed int v41; // r1@43
  unsigned int *v42; // r2@45
  signed int v43; // r1@47
  unsigned int *v44; // r2@49
  signed int v45; // r1@51
  unsigned int *v46; // r2@53
  signed int v47; // r1@55
  unsigned int *v48; // r2@57
  signed int v49; // r1@59
  unsigned int *v50; // r2@61
  signed int v51; // r1@63
  unsigned int *v52; // r2@69
  signed int v53; // r1@71
  unsigned int *v54; // r2@73
  signed int v55; // r1@75
  unsigned int *v56; // r2@77
  signed int v57; // r1@79
  unsigned int *v58; // r2@81
  signed int v59; // r1@83
  char *v60; // [sp+4h] [bp-4Ch]@32
  int v61; // [sp+8h] [bp-48h]@5
  int v62; // [sp+Ch] [bp-44h]@5
  unsigned int v63; // [sp+10h] [bp-40h]@5
  char *v64; // [sp+14h] [bp-3Ch]@25
  int v65; // [sp+18h] [bp-38h]@9
  int v66; // [sp+1Ch] [bp-34h]@2
  int v67; // [sp+20h] [bp-30h]@2
  unsigned int v68; // [sp+24h] [bp-2Ch]@2
  char *v69; // [sp+28h] [bp-28h]@9
  unsigned int v70; // [sp+2Ch] [bp-24h]@9
  char *v71; // [sp+30h] [bp-20h]@13
  char *v72; // [sp+38h] [bp-18h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v72, (const char *)&unk_257BC67);
  v4 = (MobEffect *)MobEffect::mMobEffects[*(_DWORD *)v2];
  if ( *(_DWORD *)(v2 + 8) < 1 )
  {
    v11 = (int *)MobEffect::getDescriptionId(v4);
    sub_21E8AF4(&v62, v11);
    v12 = sub_21E7408((const void **)&v62, ", Duration: ", 0xCu);
    v63 = (unsigned int)*v12;
    *v12 = &unk_28898CC;
    Util::toString<int,(void *)0,(void *)0>((void **)&v61, *(_DWORD *)(v2 + 4));
    *(_QWORD *)&v13 = *(_QWORD *)(v63 - 12);
    v14 = (unsigned int)&v13[*(_DWORD *)(v61 - 12)];
    if ( v14 > v15 && v14 <= *(_DWORD *)(v61 - 8) )
      v16 = sub_21E82D8((const void **)&v61, 0, v63, v13);
    else
      v16 = sub_21E72F0((const void **)&v63, (const void **)&v61);
    v64 = (char *)*v16;
    *v16 = &unk_28898CC;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v72,
      (int *)&v64);
    v31 = v64 - 12;
    if ( (int *)(v64 - 12) != &dword_28898C0 )
    {
      v54 = (unsigned int *)(v64 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v55 = __ldrex(v54);
        while ( __strex(v55 - 1, v54) );
      }
      else
        v55 = (*v54)--;
      if ( v55 <= 0 )
        j_j_j_j__ZdlPv_9(v31);
    }
    v32 = (void *)(v61 - 12);
    if ( (int *)(v61 - 12) != &dword_28898C0 )
      v56 = (unsigned int *)(v61 - 4);
          v57 = __ldrex(v56);
        while ( __strex(v57 - 1, v56) );
        v57 = (*v56)--;
      if ( v57 <= 0 )
        j_j_j_j__ZdlPv_9(v32);
    v33 = (void *)(v63 - 12);
    if ( (int *)(v63 - 12) != &dword_28898C0 )
      v58 = (unsigned int *)(v63 - 4);
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
        v59 = (*v58)--;
      if ( v59 <= 0 )
        j_j_j_j__ZdlPv_9(v33);
    v28 = (void *)(v62 - 12);
    if ( (int *)(v62 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v62 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
LABEL_90:
        if ( v30 <= 0 )
          j_j_j_j__ZdlPv_9(v28);
        goto LABEL_29;
LABEL_89:
      v30 = (*v29)--;
      goto LABEL_90;
  }
  else
    v5 = (int *)MobEffect::getDescriptionId(v4);
    sub_21E8AF4(&v67, v5);
    v6 = sub_21E7408((const void **)&v67, " x ", 3u);
    v68 = (unsigned int)*v6;
    *v6 = &unk_28898CC;
    Util::toString<int,(void *)0,(void *)0>((void **)&v66, *(_DWORD *)(v2 + 8) + 1);
    *(_QWORD *)&v7 = *(_QWORD *)(v68 - 12);
    v8 = (unsigned int)&v7[*(_DWORD *)(v66 - 12)];
    if ( v8 > v9 && v8 <= *(_DWORD *)(v66 - 8) )
      v10 = sub_21E82D8((const void **)&v66, 0, v68, v7);
      v10 = sub_21E72F0((const void **)&v68, (const void **)&v66);
    v69 = (char *)*v10;
    *v10 = &unk_28898CC;
    v17 = sub_21E7408((const void **)&v69, ", Duration: ", 0xCu);
    v70 = (unsigned int)*v17;
    *v17 = &unk_28898CC;
    Util::toString<int,(void *)0,(void *)0>((void **)&v65, *(_DWORD *)(v2 + 4));
    *(_QWORD *)&v18 = *(_QWORD *)(v70 - 12);
    v19 = (unsigned int)&v18[*(_DWORD *)(v65 - 12)];
    if ( v19 > v20 && v19 <= *(_DWORD *)(v65 - 8) )
      v21 = sub_21E82D8((const void **)&v65, 0, v70, v18);
      v21 = sub_21E72F0((const void **)&v70, (const void **)&v65);
    v71 = (char *)*v21;
    *v21 = &unk_28898CC;
      (int *)&v71);
    v22 = v71 - 12;
    if ( (int *)(v71 - 12) != &dword_28898C0 )
      v40 = (unsigned int *)(v71 - 4);
          v41 = __ldrex(v40);
        while ( __strex(v41 - 1, v40) );
        v41 = (*v40)--;
      if ( v41 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    v23 = (void *)(v65 - 12);
    if ( (int *)(v65 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v65 - 4);
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    v24 = (void *)(v70 - 12);
    if ( (int *)(v70 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v70 - 4);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    v25 = v69 - 12;
    if ( (int *)(v69 - 12) != &dword_28898C0 )
      v46 = (unsigned int *)(v69 - 4);
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
        v47 = (*v46)--;
      if ( v47 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    v26 = (void *)(v66 - 12);
    if ( (int *)(v66 - 12) != &dword_28898C0 )
      v48 = (unsigned int *)(v66 - 4);
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
        v49 = (*v48)--;
      if ( v49 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
    v27 = (void *)(v68 - 12);
    if ( (int *)(v68 - 12) != &dword_28898C0 )
      v50 = (unsigned int *)(v68 - 4);
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
        v51 = (*v50)--;
      if ( v51 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    v28 = (void *)(v67 - 12);
    if ( (int *)(v67 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v67 - 4);
        goto LABEL_90;
      goto LABEL_89;
LABEL_29:
  if ( !*(_BYTE *)(v2 + 14) )
    sub_21E7408((const void **)&v72, ", Particles: false", 0x12u);
  if ( MobEffect::isDisabled((MobEffect *)MobEffect::mMobEffects[*(_DWORD *)v2]) == 1 )
    v60 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v60, *((_DWORD *)v72 - 3) + 1);
    sub_21E7408((const void **)&v60, "(", 1u);
    sub_21E72F0((const void **)&v60, (const void **)&v72);
    v34 = sub_21E7408((const void **)&v60, ")", 1u);
    *(_DWORD *)v3 = *v34;
    *v34 = &unk_28898CC;
    v35 = v60 - 12;
    if ( (int *)(v60 - 12) != &dword_28898C0 )
      v52 = (unsigned int *)(v60 - 4);
          v53 = __ldrex(v52);
        while ( __strex(v53 - 1, v52) );
        v53 = (*v52)--;
      if ( v53 <= 0 )
        j_j_j_j__ZdlPv_9(v35);
    v36 = v72;
    *(_DWORD *)v3 = v72;
    v36 = (char *)&unk_28898CC;
    v72 = (char *)&unk_28898CC;
  v37 = v36 - 12;
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v36 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v37);
}


int __fastcall MobEffectInstance::update(int result, const MobEffectInstance *a2)
{
  int v2; // r3@1
  int v3; // r2@1
  int v4; // r2@4

  v2 = *(_DWORD *)(result + 8);
  v3 = *((_DWORD *)a2 + 2);
  if ( v3 <= v2 )
  {
    if ( v3 != v2 || (v4 = *((_DWORD *)a2 + 1), *(_DWORD *)(result + 4) >= v4) )
    {
      if ( !*((_BYTE *)a2 + 12) && *(_BYTE *)(result + 12) )
        *(_BYTE *)(result + 12) = 0;
    }
    else
      *(_DWORD *)(result + 4) = v4;
  }
  else
    *(_DWORD *)(result + 8) = v3;
    *(_DWORD *)(result + 4) = *((_DWORD *)a2 + 1);
  *(_BYTE *)(result + 14) = *((_BYTE *)a2 + 14);
  return result;
}


signed int __fastcall MobEffectInstance::operator<(int *a1, _DWORD *a2)
{
  int v2; // r2@1
  signed int result; // r0@1

  v2 = *a1;
  result = 0;
  if ( v2 < *a2 )
    result = 1;
  return result;
}


void __fastcall MobEffectInstance::getDisplayName(MobEffectInstance *this, _DWORD *a2)
{
  MobEffectInstance::getDisplayName(this, a2);
}


int __fastcall MobEffectInstance::getSplashEffect(int result, int _R1)
{
  __int64 v6; // r2@1

  __asm
  {
    VLDR            S0, [R1,#4]
    VMOV.F32        S2, #0.75
    VCVT.F32.S32    S0, S0
  }
  v6 = *(_QWORD *)(_R1 + 8);
  *(_DWORD *)result = *(_DWORD *)_R1;
    VMUL.F32        S0, S0, S2
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [R0,#4]
  *(_DWORD *)(result + 8) = v6;
  *(_BYTE *)(result + 12) = BYTE4(v6);
  *(_BYTE *)(result + 13) = 0;
  *(_BYTE *)(result + 14) = HIDWORD(v6) >> 16;
  return result;
}


int __fastcall MobEffectInstance::getColorValue(int a1, __int64 *a2)
{
  __int64 *v2; // r5@1
  int v3; // r8@1
  __int64 v4; // r0@1
  unsigned int v9; // r6@3
  int v11; // r1@4
  MobEffect *v12; // r0@5
  int v13; // r4@6
  int v15; // r0@7
  int v16; // r2@13
  unsigned int v17; // r3@13

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    LODWORD(v4) = 1046536418;
    *(_QWORD *)v3 = 4520130489387901154LL;
    *(_DWORD *)(v3 + 8) = 1061603016;
    *(_DWORD *)(v3 + 12) = 1065353216;
  }
  else
    if ( HIDWORD(v4) == (_DWORD)v4 )
      goto LABEL_35;
    __asm
    {
      VMOV.F32        S16, #1.0
      VLDR            S18, =0.0
    }
    v9 = 0;
    _R1 = &Color::BLACK;
      VLDR            S20, [R1]
      VLDR            S22, [R1,#4]
      VLDR            S24, [R1,#8]
      VLDR            S26, [R1,#0xC]
    do
      v11 = v4 + 16 * v9;
      if ( *(_BYTE *)(v11 + 14) )
      {
        v12 = (MobEffect *)MobEffect::mMobEffects[*(_DWORD *)(v4 + 16 * v9)];
        if ( v12 )
        {
          v13 = *(_DWORD *)(v11 + 8);
          _R0 = MobEffect::getColor(v12);
          if ( v13 >= 0 )
          {
            __asm
            {
              VLDR            S0, [R0]
              VLDR            S2, [R0,#4]
              VLDR            S4, [R0,#8]
              VLDR            S6, [R0,#0xC]
            }
            v15 = v13 + 1;
            do
              __asm { VADD.F32        S26, S26, S6 }
              --v15;
              __asm
              {
                VADD.F32        S24, S24, S4
                VADD.F32        S22, S22, S2
                VADD.F32        S20, S20, S0
                VADD.F32        S18, S18, S16
              }
            while ( !_ZF );
          }
        }
      }
      v4 = *v2;
      ++v9;
    while ( v9 < (HIDWORD(v4) - (signed int)v4) >> 4 );
      VCMPE.F32       S18, #0.0
      VMRS            APSR_nzcv, FPSCR
    if ( _ZF )
LABEL_35:
      v16 = *(&Color::NIL + 1);
      LODWORD(v4) = HIDWORD(qword_283E6B8);
      v17 = qword_283E6B8;
      *(_DWORD *)v3 = Color::NIL;
      *(_DWORD *)(v3 + 4) = v16;
      *(_QWORD *)(v3 + 8) = __PAIR__(v4, v17);
    else
      __asm
        VDIV.F32        S0, S20, S18
        VCMPE.F32       S0, #0.0
        VLDR            S8, =0.0
        VDIV.F32        S2, S22, S18
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S2, #0.0
        VDIV.F32        S4, S24, S18
      if ( _NF ^ _VF )
        __asm { VMOVLT.F32      S0, S8 }
        VCMPE.F32       S4, #0.0
        VDIV.F32        S6, S26, S18
        __asm { VMOVLT.F32      S2, S8 }
        VCMPE.F32       S6, #0.0
        __asm { VMOVLT.F32      S4, S8 }
        VCMPE.F32       S0, S16
        __asm { VMOVLT.F32      S6, S8 }
        VCMPE.F32       S2, S16
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S0, S16 }
        VCMPE.F32       S4, S16
        __asm { VMOVGT.F32      S2, S16 }
        VCMPE.F32       S6, S16
        __asm { VMOVGT.F32      S4, S16 }
      __asm { VMRS            APSR_nzcv, FPSCR }
        __asm { VMOVGT.F32      S6, S16 }
        VSTR            S0, [R8]
        VSTR            S2, [R8,#4]
        VSTR            S4, [R8,#8]
        VSTR            S6, [R8,#0xC]
  return v4;
}


int __fastcall MobEffectInstance::MobEffectInstance(int result, int a2, int a3)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = 0;
  *(_WORD *)(result + 12) = 0;
  *(_BYTE *)(result + 14) = 1;
  return result;
}


int __fastcall MobEffectInstance::MobEffectInstance(int result)
{
  *(_BYTE *)(result + 14) = 0;
  *(_WORD *)(result + 12) = 0;
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


int __fastcall MobEffectInstance::setDuration(int result, int a2)
{
  *(_DWORD *)(result + 4) = a2;
  return result;
}


signed int __fastcall MobEffectInstance::tick(MobEffectInstance *this, Mob *a2)
{
  signed int result; // r0@2
  int v3; // r1@3
  unsigned __int8 v4; // vf@3

  if ( *(_DWORD *)this )
  {
    v3 = *((_DWORD *)this + 1);
    v4 = __OFSUB__(v3--, 1);
    *((_DWORD *)this + 1) = v3;
    result = 0;
    if ( !((unsigned __int8)((v3 < 0) ^ v4) | (v3 == 0)) )
      result = 1;
  }
  else
    result = 1;
  return result;
}


signed int __fastcall MobEffectInstance::areAllEffectsAmbient(unsigned __int64 *a1)
{
  int v1; // r0@1
  int v2; // r1@1
  unsigned __int64 v3; // kr00_8@1
  signed int result; // r0@2

  v3 = *a1;
  v1 = *a1 >> 32;
  v2 = v3;
  if ( (_DWORD)v3 == v1 )
  {
    result = 1;
  }
  else
    while ( *(_BYTE *)(v2 + 12) )
    {
      v2 += 16;
      if ( v1 == v2 )
        return 1;
    }
    result = 0;
  return result;
}


void __fastcall MobEffectInstance::save(MobEffectInstance *this, int a2)
{
  MobEffectInstance::save(this, a2);
}


int __fastcall MobEffectInstance::setNoCounter(int result, bool a2)
{
  *(_BYTE *)(result + 13) = a2;
  return result;
}


signed int __fastcall MobEffectInstance::load(MobEffectInstance *this, CompoundTag *a2)
{
  CompoundTag *v2; // r6@1
  MobEffectInstance *v3; // r4@1
  int v4; // r11@1
  void *v5; // r0@1
  int v6; // r8@4
  void *v7; // r0@4
  int v8; // r9@5
  void *v9; // r0@5
  char v10; // r10@6
  void *v11; // r0@6
  signed int v12; // r7@7
  void *v13; // r0@7
  char v14; // r6@9
  void *v15; // r0@9
  unsigned int *v16; // r2@10
  signed int v17; // r1@12
  signed int result; // r0@14
  unsigned int *v19; // r2@17
  signed int v20; // r1@19
  unsigned int *v21; // r2@25
  signed int v22; // r1@27
  unsigned int *v23; // r2@29
  signed int v24; // r1@31
  unsigned int *v25; // r2@33
  signed int v26; // r1@35
  unsigned int *v27; // r2@37
  signed int v28; // r1@39
  int v29; // [sp+4h] [bp-54h]@9
  int v30; // [sp+Ch] [bp-4Ch]@7
  int v31; // [sp+14h] [bp-44h]@6
  int v32; // [sp+1Ch] [bp-3Ch]@5
  int v33; // [sp+24h] [bp-34h]@4
  int v34; // [sp+2Ch] [bp-2Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v34, "Id");
  v4 = CompoundTag::getByte((int)v2, (const void **)&v34);
  v5 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v34 - 4);
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
  if ( (unsigned __int8)(v4 - 1) <= 0x18u && MobEffect::mMobEffects[v4] )
    sub_21E94B4((void **)&v33, "Amplifier");
    v6 = CompoundTag::getByte((int)v2, (const void **)&v33);
    v7 = (void *)(v33 - 12);
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v33 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
      }
      else
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    sub_21E94B4((void **)&v32, "Duration");
    v8 = CompoundTag::getInt((int)v2, (const void **)&v32);
    v9 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v32 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    sub_21E94B4((void **)&v31, "Ambient");
    v10 = CompoundTag::getBoolean((int)v2, (const void **)&v31);
    v11 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v31 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    sub_21E94B4((void **)&v30, "ShowParticles");
    v12 = CompoundTag::contains((int)v2, (const void **)&v30, 1);
    v13 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v30 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    if ( v12 == 1 )
      sub_21E94B4((void **)&v29, "ShowParticles");
      v14 = CompoundTag::getBoolean((int)v2, (const void **)&v29);
      v15 = (void *)(v29 - 12);
      if ( (int *)(v29 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v29 - 4);
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
          j_j_j_j__ZdlPv_9(v15);
      v14 = 1;
    result = 0;
    *(_DWORD *)v3 = v4;
    *((_DWORD *)v3 + 1) = v8;
    *((_DWORD *)v3 + 2) = v6;
    *((_BYTE *)v3 + 12) = v10;
    *((_BYTE *)v3 + 13) = 0;
    *((_BYTE *)v3 + 14) = v14;
  else
    *((_WORD *)v3 + 6) = 0;
    *(_DWORD *)v3 = 0;
    *((_DWORD *)v3 + 1) = 0;
    *((_DWORD *)v3 + 2) = 0;
    result = 1;
    *((_BYTE *)v3 + 14) = 1;
  return result;
}


int __fastcall MobEffectInstance::applyEffects(MobEffectInstance *this, Mob *a2)
{
  int v2; // r3@1

  v2 = *((_DWORD *)this + 2);
  return (*(int (**)(void))(*MobEffect::mMobEffects[(unsigned int)*(_QWORD *)this] + 8))();
}


int __fastcall MobEffectInstance::getLingerDuration(MobEffectInstance *this)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, [R0,#4]
    VMOV.F64        D1, #0.25
    VCVT.F64.S32    D0, S0
    VMUL.F64        D0, D0, D1
    VCVTR.S32.F64   S0, D0
    VMOV            R0, S0
  }
  return result;
}


int __fastcall MobEffectInstance::MobEffectInstance(int result, int a2)
{
  *(_DWORD *)result = a2;
  *(_WORD *)(result + 12) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_BYTE *)(result + 14) = 1;
  return result;
}


int __fastcall MobEffectInstance::_tickDownDuration(MobEffectInstance *this)
{
  int v1; // r1@1

  v1 = *((_DWORD *)this + 1) - 1;
  *((_DWORD *)this + 1) = v1;
  return v1;
}


int __fastcall MobEffectInstance::getSplashDuration(MobEffectInstance *this)
{
  int result; // r0@1

  __asm
  {
    VLDR            S0, [R0,#4]
    VMOV.F32        S2, #0.75
    VCVT.F32.S32    S0, S0
    VMUL.F32        S0, S0, S2
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S0
  }
  return result;
}


void __fastcall MobEffectInstance::save(MobEffectInstance *this, int a2)
{
  MobEffectInstance *v2; // r4@1
  int v3; // r5@1
  void *v4; // r6@1
  void *v5; // r0@1
  int v6; // r6@2
  void *v7; // r0@2
  int v8; // r6@3
  void *v9; // r0@3
  int v10; // r6@4
  void *v11; // r0@4
  int v12; // r6@5
  void *v13; // r0@5
  unsigned int *v14; // r2@7
  signed int v15; // r1@9
  unsigned int *v16; // r2@11
  signed int v17; // r1@13
  unsigned int *v18; // r2@15
  signed int v19; // r1@17
  unsigned int *v20; // r2@19
  signed int v21; // r1@21
  unsigned int *v22; // r2@23
  signed int v23; // r1@25
  int v24; // [sp+8h] [bp-38h]@5
  int v25; // [sp+10h] [bp-30h]@4
  int v26; // [sp+18h] [bp-28h]@3
  int v27; // [sp+20h] [bp-20h]@2
  int v28; // [sp+28h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0x1Cu);
  CompoundTag::CompoundTag((int)v4);
  *(_DWORD *)v2 = v4;
  sub_21E94B4((void **)&v28, "Id");
  CompoundTag::putByte((int)v4, (const void **)&v28, *(_BYTE *)v3);
  v5 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v28 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = *(_DWORD *)v2;
  sub_21E94B4((void **)&v27, "Amplifier");
  CompoundTag::putByte(v6, (const void **)&v27, *(_BYTE *)(v3 + 8));
  v7 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v27 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *(_DWORD *)v2;
  sub_21E94B4((void **)&v26, "Duration");
  CompoundTag::putInt(v8, (const void **)&v26, *(_DWORD *)(v3 + 4));
  v9 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v26 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = *(_DWORD *)v2;
  sub_21E94B4((void **)&v25, "Ambient");
  CompoundTag::putBoolean(v10, (const void **)&v25, *(_BYTE *)(v3 + 12));
  v11 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v25 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = *(_DWORD *)v2;
  sub_21E94B4((void **)&v24, "ShowParticles");
  CompoundTag::putBoolean(v12, (const void **)&v24, *(_BYTE *)(v3 + 14));
  v13 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v24 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


void __fastcall MobEffectInstance::getDisplayName(MobEffectInstance *this, _DWORD *a2)
{
  MobEffectInstance *v2; // r4@1
  _DWORD *v3; // r5@1
  int *v4; // r0@1
  void *v5; // r0@1
  signed int v6; // r1@2
  const void **v7; // r0@3
  char *v8; // r0@3
  void *v9; // r0@4
  const void **v10; // r0@5
  void *v11; // r0@5
  void *v12; // r0@6
  char *v13; // r1@7
  char *v14; // r0@9
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  unsigned int *v17; // r2@15
  signed int v18; // r1@17
  unsigned int *v19; // r2@23
  signed int v20; // r1@25
  unsigned int *v21; // r2@27
  signed int v22; // r1@29
  unsigned int *v23; // r2@35
  signed int v24; // r1@37
  unsigned int *v25; // r2@39
  signed int v26; // r1@41
  int v27; // [sp+4h] [bp-2Ch]@5
  int v28; // [sp+8h] [bp-28h]@3
  char *v29; // [sp+Ch] [bp-24h]@3
  int v30; // [sp+10h] [bp-20h]@3
  int v31; // [sp+14h] [bp-1Ch]@1
  char *v32; // [sp+18h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  v4 = (int *)MobEffect::getDescriptionId((MobEffect *)MobEffect::mMobEffects[*a2]);
  sub_21E8AF4(&v31, v4);
  I18n::get((int *)&v32, (int **)&v31);
  v5 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v31 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = v3[2];
  if ( (unsigned int)(v6 - 1) > 2 )
    *(_DWORD *)v2 = v32;
    v13 = (char *)&unk_28898CC;
    v32 = (char *)&unk_28898CC;
  else
    Util::toString<int,(void *)0,(void *)0>((void **)&v28, v6);
    v7 = sub_21E82D8((const void **)&v28, 0, (unsigned int)"potion.potency.", (_BYTE *)0xF);
    v29 = (char *)*v7;
    *v7 = &unk_28898CC;
    I18n::get(&v30, (int **)&v29);
    v8 = v29 - 12;
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v29 - 4);
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
        j_j_j_j__ZdlPv_9(v8);
    v9 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v28 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    sub_21E8AF4(&v27, (int *)&v32);
    sub_21E7408((const void **)&v27, " ", 1u);
    v10 = sub_21E72F0((const void **)&v27, (const void **)&v30);
    *(_DWORD *)v2 = *v10;
    *v10 = &unk_28898CC;
    v11 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v27 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    v12 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v30 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v13 = v32;
  v14 = v13 - 12;
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v13 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
}


int __fastcall MobEffectInstance::MobEffectInstance(int result, int a2, int a3, int a4)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = a4;
  *(_WORD *)(result + 12) = 0;
  *(_BYTE *)(result + 14) = 1;
  return result;
}


int __fastcall MobEffectInstance::MobEffectInstance(int result, int a2, int a3, int a4, char a5, char a6)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = a4;
  *(_BYTE *)(result + 12) = a5;
  *(_BYTE *)(result + 13) = 0;
  *(_BYTE *)(result + 14) = a6;
  return result;
}


int *__fastcall MobEffectInstance::getDescriptionId(MobEffectInstance *this, _DWORD *a2)
{
  int *v2; // r4@1
  int *v3; // r0@1

  v2 = (int *)this;
  v3 = (int *)MobEffect::getDescriptionId((MobEffect *)MobEffect::mMobEffects[*a2]);
  return sub_21E8AF4(v2, v3);
}
