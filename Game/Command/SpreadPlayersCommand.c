

int __fastcall SpreadPlayersCommand::~SpreadPlayersCommand(SpreadPlayersCommand *this)
{
  Command *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271A1D8;
  j_CommandSelectorBase::~CommandSelectorBase((SpreadPlayersCommand *)((char *)this + 20));
  return j_j_j__ZN7CommandD2Ev_0(v1);
}


void __fastcall SpreadPlayersCommand::setup(SpreadPlayersCommand *this, CommandRegistry *a2)
{
  SpreadPlayersCommand *v2; // r4@1
  __int64 v3; // r2@1
  void *v4; // r0@1
  char v5; // r0@2
  char v6; // r0@5
  char v7; // r0@8
  char v8; // r0@11
  char v9; // r0@14
  int v10; // r0@17
  void *v11; // r0@17
  void *v12; // r0@18
  void *v13; // r0@19
  void *v14; // r0@20
  void *v15; // r0@21
  int v16; // r2@23
  signed int v17; // r1@25
  unsigned int *v18; // r2@27
  signed int v19; // r1@29
  unsigned int *v20; // r2@31
  signed int v21; // r1@33
  unsigned int *v22; // r2@35
  signed int v23; // r1@37
  unsigned int *v24; // r2@39
  signed int v25; // r1@41
  unsigned int *v26; // r2@43
  signed int v27; // r1@45
  char v28; // [sp+18h] [bp-108h]@17
  int v29; // [sp+24h] [bp-FCh]@17
  char v30; // [sp+40h] [bp-E0h]@14
  int v31; // [sp+4Ch] [bp-D4h]@18
  char v32; // [sp+68h] [bp-B8h]@11
  int v33; // [sp+74h] [bp-ACh]@19
  char v34; // [sp+90h] [bp-90h]@8
  int v35; // [sp+9Ch] [bp-84h]@20
  char v36; // [sp+B8h] [bp-68h]@5
  int v37; // [sp+C4h] [bp-5Ch]@21
  __int64 v38; // [sp+E0h] [bp-40h]@2
  int v39; // [sp+ECh] [bp-34h]@1
  __int16 v40; // [sp+F0h] [bp-30h]@5
  __int16 v41; // [sp+F4h] [bp-2Ch]@8
  __int16 v42; // [sp+F8h] [bp-28h]@11
  __int16 v43; // [sp+FCh] [bp-24h]@14
  __int16 v44; // [sp+100h] [bp-20h]@17

  v2 = this;
  sub_21E94B4((void **)&v39, "spreadplayers");
  j_CommandRegistry::registerCommand((int)v2, (const void **)&v39, "commands.spreadplayers.description", 1, 0, 0);
  v4 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
  {
    v16 = v39 - 4;
    if ( &pthread_create )
    {
      __dmb();
      do
      {
        v17 = __ldrex((unsigned int *)v3);
        HIDWORD(v3) = v17 - 1;
      }
      while ( __strex(v17 - 1, (unsigned int *)v3) );
    }
    else
      v17 = *(_DWORD *)v3;
      HIDWORD(v3) = *(_DWORD *)v3 - 1;
      *(_DWORD *)v3 = HIDWORD(v3);
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  LODWORD(v3) = 0x7FFFFFFF;
  j_CommandVersion::CommandVersion((CommandVersion *)&v38, 1, v3);
  v5 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,RelativeFloat>(void)::id;
  __dmb();
  if ( !(v5 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,RelativeFloat>(void)::id) )
    type_id<CommandRegistry,RelativeFloat>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,RelativeFloat>(void)::id);
  v40 = type_id<CommandRegistry,RelativeFloat>(void)::id;
  j_CommandParameterData::CommandParameterData(
    (int)&v36,
    &v40,
    (unsigned int)CommandRegistry::parse<RelativeFloat>,
    "x",
    0,
    116,
    -1);
  v6 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,RelativeFloat>(void)::id;
  if ( !(v6 & 1)
  v41 = type_id<CommandRegistry,RelativeFloat>(void)::id;
    (int)&v34,
    &v41,
    (const char *)&aRtuz[3],
    124,
  v7 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,float>(void)::id;
  if ( !(v7 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,float>(void)::id) )
    type_id<CommandRegistry,float>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,float>(void)::id);
  v42 = type_id<CommandRegistry,float>(void)::id;
    (int)&v32,
    &v42,
    (unsigned int)CommandRegistry::parse<float>,
    "spreadDistance",
    132,
  v8 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,float>(void)::id;
  if ( !(v8 & 1)
  v43 = type_id<CommandRegistry,float>(void)::id;
    (int)&v30,
    &v43,
    "maxRange",
    136,
  v9 = `guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id;
  if ( !(v9 & 1)
    && j_j___cxa_guard_acquire_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id) )
    type_id<CommandRegistry,CommandSelector<Entity>>(void)::id = typeid_t<CommandRegistry>::count++;
    j_j___cxa_guard_release_0(&`guard variable for'typeid_t<CommandRegistry> type_id<CommandRegistry,CommandSelector<Entity>>(void)::id);
  v44 = type_id<CommandRegistry,CommandSelector<Entity>>(void)::id;
  v10 = j_CommandParameterData::CommandParameterData(
          (int)&v28,
          &v44,
          (unsigned int)CommandRegistry::parse<CommandSelector<Entity>>,
          "victim",
          0,
          20,
          -1);
  j_CommandRegistry::registerOverload<SpreadPlayersCommand,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData,CommandParameterData>(
    (int)v2,
    "spreadplayers",
    v38,
    v10);
  v11 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v29 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v31 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v33 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v35 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v37 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
}


int __fastcall SpreadPlayersCommand::spreadPositions(float a1, int a2, int a3, int a4, int a5, __int64 a6, unsigned __int64 *a8)
{
  int result; // r0@1
  unsigned __int64 *v14; // r0@2
  unsigned __int64 *v15; // r4@2
  signed int v16; // r3@2
  unsigned int v17; // r7@2
  unsigned __int64 *v18; // r6@2
  signed int v22; // r5@5
  unsigned int v23; // r8@5
  float *v31; // r1@19
  __int64 v34; // kr30_8@21
  Material *v35; // r0@37
  char *v39; // r4@45
  int v40; // r6@45
  unsigned int *v41; // r2@47
  signed int v42; // r1@49
  int *v43; // r0@55
  void *v44; // r0@60
  void *v45; // r0@61
  void *v46; // r0@62
  void *v47; // r0@63
  void *v48; // r0@64
  void *v49; // r0@65
  unsigned int *v50; // r2@68
  signed int v51; // r1@70
  unsigned int *v52; // r2@72
  signed int v53; // r1@74
  unsigned int *v54; // r2@76
  signed int v55; // r1@78
  unsigned int *v56; // r2@80
  signed int v57; // r1@82
  unsigned int *v58; // r2@84
  signed int v59; // r1@86
  unsigned int *v60; // r2@88
  signed int v61; // r1@90
  _DWORD *v62; // [sp+8h] [bp-100h]@1
  int v63; // [sp+Ch] [bp-FCh]@1
  const BlockPos *v64; // [sp+10h] [bp-F8h]@1
  signed int v65; // [sp+18h] [bp-F0h]@2
  __int64 v66; // [sp+20h] [bp-E8h]@5
  Random *v67; // [sp+28h] [bp-E0h]@1
  signed int v68; // [sp+2Ch] [bp-DCh]@5
  char i; // [sp+2Ch] [bp-DCh]@36
  int v70; // [sp+30h] [bp-D8h]@45
  int v71; // [sp+34h] [bp-D4h]@45
  int v72; // [sp+3Ch] [bp-CCh]@45
  int v73; // [sp+44h] [bp-C4h]@45
  int v74; // [sp+4Ch] [bp-BCh]@45
  char *v75; // [sp+54h] [bp-B4h]@45
  char *v76; // [sp+58h] [bp-B0h]@45
  char *v77; // [sp+5Ch] [bp-ACh]@45
  int v78; // [sp+64h] [bp-A4h]@45
  int v79; // [sp+68h] [bp-A0h]@37
  int v80; // [sp+6Ch] [bp-9Ch]@37
  int v81; // [sp+70h] [bp-98h]@37
  unsigned __int8 v82; // [sp+74h] [bp-94h]@37
  char v83; // [sp+78h] [bp-90h]@37
  char v84; // [sp+84h] [bp-84h]@37
  int v85; // [sp+88h] [bp-80h]@37
  int v86; // [sp+8Ch] [bp-7Ch]@37
  float v87; // [sp+90h] [bp-78h]@19
  float v88; // [sp+98h] [bp-70h]@20

  v67 = (Random *)a2;
  v64 = (const BlockPos *)a3;
  v62 = (_DWORD *)LODWORD(a1);
  v63 = a4;
  _R8 = HIDWORD(a6);
  _R9 = a6;
  result = 0;
  __asm
  {
    VLDR            S18, [SP,#0x108+arg_0]
    VLDR            S19, =3.4028e38
    VLDR            D11, =2.32830644e-10
    VLDR            S27, =0.0001
  }
  do
    __asm { VMOV.F32        S16, S19 }
    v65 = result;
    v15 = (unsigned __int64 *)(*a8 >> 32);
    v14 = (unsigned __int64 *)*a8;
    v16 = 0;
    v17 = 0;
    v18 = v15;
    if ( v15 == v14 )
      goto LABEL_118;
    do
    {
      _R2 = v14[v17];
      _R1 = *((float *)&v14[v17] + 1);
      if ( v15 == v14 )
      {
        v15 = v14;
      }
      else
        __asm { VMOV            S26, R1 }
        _R10 = 0;
        __asm { VMOV            S28, R2 }
        v22 = 4;
        v23 = 0;
        _R6 = 0;
        _R9 = 0;
        v68 = v16;
        LODWORD(v66) = HIDWORD(v14[v17]);
        HIDWORD(v66) = v14[v17];
        do
        {
          if ( v17 != v23 )
          {
            _R0 = (int)v14 + v22;
            __asm
            {
              VLDR            S0, [R0,#-4]
              VLDR            S2, [R0]
              VSUB.F32        S30, S0, S28
              VSUB.F32        S17, S2, S26
              VMUL.F32        S0, S30, S30
              VMUL.F32        S2, S17, S17
              VADD.F32        S0, S2, S0
              VMOV            R0, S0
            }
            _R0 = j_mce::Math::sqrt(_R0, _R1);
              VMOV            S0, R0
              VCMPE.F32       S0, S16
              VMRS            APSR_nzcv, FPSCR
              VCMPE.F32       S0, S18
            if ( _NF ^ _VF )
              __asm { VMOVLT.F32      S16, S0 }
            __asm { VMRS            APSR_nzcv, FPSCR }
              __asm { VMOV            S0, R6 }
              ++_R10;
              __asm
              {
                VMOV            S2, R9
                VADD.F32        S0, S17, S0
                VADD.F32        S2, S30, S2
                VMOV            R6, S0
                VMOV            R9, S2
              }
          }
          v15 = (unsigned __int64 *)(*a8 >> 32);
          v14 = (unsigned __int64 *)*a8;
          v22 += 8;
          ++v23;
          LODWORD(_R1) = (char *)v15 - (char *)v14;
        }
        while ( v23 < v15 - v14 );
        if ( _R10 <= 0 )
          _R8 = HIDWORD(a6);
          _R9 = a6;
          v16 = v68;
          *(_QWORD *)&_R1 = v66;
        else
          __asm
            VMOV            S0, R10
            VMOV            S4, R6
            VCVT.F32.S32    S2, S0
            VMOV            S0, R9
            VDIV.F32        S0, S0, S2
            VDIV.F32        S2, S4, S2
            VMUL.F32        S4, S0, S0
            VMUL.F32        S6, S2, S2
            VADD.F32        S4, S6, S4
            VSQRT.F32       S4, S4
            VCMPE.F32       S4, #0.0
            VMRS            APSR_nzcv, FPSCR
          if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
            _R8 = HIDWORD(a6);
            _R9 = a6;
              VLDR            S26, [R8]
              VLDR            S28, [R9]
            _R0 = j_Random::_genRandInt32(v67);
              VLDR            S30, [R8,#4]
              VLDR            S17, [R9,#4]
              VCVT.F64.U32    D10, S0
            __asm { VMOV            S0, R0 }
            v31 = &v87;
              VMUL.F64        D1, D10, D11
              VCVT.F64.U32    D0, S0
              VMUL.F64        D0, D0, D11
              VSUB.F32        S4, S26, S28
              VCVT.F32.F64    S2, D1
              VSUB.F32        S6, S30, S17
              VCVT.F32.F64    S0, D0
              VMUL.F32        S2, S2, S4
              VMUL.F32        S0, S0, S6
              VADD.F32        S2, S2, S28
              VADD.F32        S0, S0, S17
              VSTR            S2, [SP,#0x108+var_78]
              VSTR            S0, [SP,#0x108+var_74]
            v15 = (unsigned __int64 *)(*a8 >> 32);
            v14 = (unsigned __int64 *)*a8;
          else
              VCMPE.F32       S4, S27
              *(_QWORD *)&_R1 = *(_QWORD *)&Vec2::ZERO;
            else
                VDIV.F32        S2, S2, S4
                VDIV.F32        S0, S0, S4
                VMOV            R2, S2
                VMOV            R1, S0
            __asm { VMOV            S2, R1 }
            v31 = &v88;
              VMOV            S0, R2
              VSUB.F32        S2, S28, S2
              VSUB.F32        S0, S26, S0
              VSTR            S2, [SP,#0x108+var_70]
              VSTR            S0, [SP,#0x108+var_6C]
          v34 = *(_QWORD *)v31;
          LODWORD(_R1) = *(_QWORD *)v31 >> 32;
          _R2 = v34;
          v16 = 1;
      __asm
        VMOV            S4, R1
        VLDR            S2, [R9,#4]
        VLDR            S0, [R9]
        VMOV            S6, R2
        VCMPE.F32       S4, S2
        VMRS            APSR_nzcv, FPSCR
        VCMPE.F32       S6, S0
      ++v17;
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        __asm { VMOVGT.F32      S2, S4 }
      __asm { VMRS            APSR_nzcv, FPSCR }
        __asm { VMOVGT.F32      S0, S6 }
        VLDR            S10, [R8,#4]
        VLDR            S8, [R8]
        VCMPE.F32       S4, S10
        VCMPE.F32       S6, S8
        __asm { VMOVGT.F32      S2, S10 }
        VCMPE.F32       S2, S4
        __asm { VMOVGT.F32      S0, S8 }
        VCMPE.F32       S0, S6
      if ( !_ZF )
        v16 = 1;
    }
    while ( v17 < v15 - v14 );
    v18 = v14;
    if ( !(v16 & 1) )
LABEL_118:
      for ( i = v16; v15 != v18; ++v18 )
        j_BlockPos::BlockPos((BlockPos *)&v83, COERCE_FLOAT(*v18), 0.0, COERCE_FLOAT(*v18 >> 32));
        j_BlockSource::getTopRainBlockPos((BlockSource *)&v84, v64, (const BlockPos *)&v83);
        j_BlockSource::getBlockID((BlockSource *)&v82, v64, (int)&v84);
        v79 = *(_DWORD *)&v84;
        v80 = v85 - 1;
        v81 = v86;
        v35 = (Material *)j_BlockSource::getMaterial(v64, (const BlockPos *)&v79);
        if ( j_Material::isLiquid(v35) || v82 == *(_BYTE *)(Block::mFire + 4) )
            VLDR            S20, [R8]
            VLDR            S26, [R9]
          _R0 = j_Random::_genRandInt32(v67);
            VMOV            S0, R0
            VLDR            S28, [R8,#4]
            VLDR            S30, [R9,#4]
            VCVT.F64.U32    D12, S0
            VMUL.F64        D1, D12, D11
            VCVT.F64.U32    D0, S0
          i = 1;
            VMUL.F64        D0, D0, D11
            VSUB.F32        S4, S20, S26
            VCVT.F32.F64    S2, D1
            VSUB.F32        S6, S28, S30
            VCVT.F32.F64    S0, D0
            VMUL.F32        S2, S2, S4
            VMUL.F32        S0, S0, S6
            VADD.F32        S2, S2, S26
            VADD.F32        S0, S0, S30
            VSTR            S2, [R6]
            VSTR            S0, [R6,#4]
      LOBYTE(v16) = i;
    result = v65 + 1;
  while ( v65 + 1 <= 9999 && v16 & 1 );
  if ( v65 >= 9999 )
    sub_21E94B4((void **)&v78, "commands.spreadplayers.failure.players");
    j_CommandOutputParameter::CommandOutputParameter(
      (CommandOutputParameter *)&v71,
      (signed int)((*a8 >> 32) - *a8) >> 3);
    j_CommandOutputParameter::CommandOutputParameter((Util *)&v72, *(float *)v63);
    j_CommandOutputParameter::CommandOutputParameter((Util *)&v73, *(float *)(v63 + 4));
    __asm
      VCVT.F64.F32    D0, S16
      VMOV            R2, R3, D0
    j_Util::format((Util *)&v70, "%.2f", _R2);
    j_CommandOutputParameter::CommandOutputParameter(&v74, &v70);
    v75 = 0;
    v76 = 0;
    v77 = 0;
    v75 = (char *)j_operator new(0x20u);
    v77 = v75 + 32;
    v76 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                    (int)&v71,
                    (int)&v75,
                    (int)v75);
    j_CommandOutput::error(v62, &v78, (unsigned __int64 *)&v75);
    v40 = (int)v76;
    v39 = v75;
    if ( v75 != v76 )
      do
        v43 = (int *)(*(_DWORD *)v39 - 12);
        if ( v43 != &dword_28898C0 )
          v41 = (unsigned int *)(*(_DWORD *)v39 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v42 = __ldrex(v41);
            while ( __strex(v42 - 1, v41) );
            v42 = (*v41)--;
          if ( v42 <= 0 )
            j_j_j_j__ZdlPv_9(v43);
        v39 += 8;
      while ( v39 != (char *)v40 );
      v39 = v75;
    if ( v39 )
      j_operator delete(v39);
    v44 = (void *)(v74 - 12);
    if ( (int *)(v74 - 12) != &dword_28898C0 )
      v50 = (unsigned int *)(v74 - 4);
      if ( &pthread_create )
        __dmb();
          v51 = __ldrex(v50);
        while ( __strex(v51 - 1, v50) );
        v51 = (*v50)--;
      if ( v51 <= 0 )
        j_j_j_j__ZdlPv_9(v44);
    v45 = (void *)(v73 - 12);
    if ( (int *)(v73 - 12) != &dword_28898C0 )
      v52 = (unsigned int *)(v73 - 4);
          v53 = __ldrex(v52);
        while ( __strex(v53 - 1, v52) );
        v53 = (*v52)--;
      if ( v53 <= 0 )
        j_j_j_j__ZdlPv_9(v45);
    v46 = (void *)(v72 - 12);
    if ( (int *)(v72 - 12) != &dword_28898C0 )
      v54 = (unsigned int *)(v72 - 4);
          v55 = __ldrex(v54);
        while ( __strex(v55 - 1, v54) );
        v55 = (*v54)--;
      if ( v55 <= 0 )
        j_j_j_j__ZdlPv_9(v46);
    v47 = (void *)(v71 - 12);
    if ( (int *)(v71 - 12) != &dword_28898C0 )
      v56 = (unsigned int *)(v71 - 4);
          v57 = __ldrex(v56);
        while ( __strex(v57 - 1, v56) );
        v57 = (*v56)--;
      if ( v57 <= 0 )
        j_j_j_j__ZdlPv_9(v47);
    v48 = (void *)(v70 - 12);
    if ( (int *)(v70 - 12) != &dword_28898C0 )
      v58 = (unsigned int *)(v70 - 4);
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
        v59 = (*v58)--;
      if ( v59 <= 0 )
        j_j_j_j__ZdlPv_9(v48);
    v49 = (void *)(v78 - 12);
    if ( (int *)(v78 - 12) != &dword_28898C0 )
      v60 = (unsigned int *)(v78 - 4);
          v61 = __ldrex(v60);
        while ( __strex(v61 - 1, v60) );
        v61 = (*v60)--;
      if ( v61 <= 0 )
        j_j_j_j__ZdlPv_9(v49);
    result = -1;
  return result;
}


int __fastcall SpreadPlayersCommand::setPlayerPositions(int **a1, int a2, _DWORD *a3)
{
  int **v3; // r4@1
  int v4; // r6@1
  int v9; // r4@1
  Entity *v10; // r9@3
  float v17; // r1@3
  float v19; // r1@3
  int v21; // r0@3
  float v22; // r1@3
  int v23; // r1@4
  Level *v24; // r0@7
  int v25; // r0@7
  int v26; // r8@8
  int v27; // r6@8
  int v31; // r4@15
  unsigned int *v32; // r1@16
  unsigned int v33; // r0@18
  unsigned int *v34; // r5@22
  unsigned int v35; // r0@24
  int v36; // r4@29
  unsigned int *v37; // r1@30
  unsigned int v38; // r0@32
  unsigned int *v39; // r5@36
  unsigned int v40; // r0@38
  int result; // r0@43
  int **v43; // [sp+4h] [bp-F4h]@1
  _DWORD *v44; // [sp+1Ch] [bp-DCh]@1
  void **v45; // [sp+20h] [bp-D8h]@4
  int v46; // [sp+24h] [bp-D4h]@4
  int v47; // [sp+28h] [bp-D0h]@4
  char v48; // [sp+2Ch] [bp-CCh]@4
  int v49; // [sp+30h] [bp-C8h]@4
  float v50; // [sp+38h] [bp-C0h]@4
  float v51; // [sp+3Ch] [bp-BCh]@4
  float v52; // [sp+40h] [bp-B8h]@4
  __int64 v53; // [sp+44h] [bp-B4h]@4
  int v54; // [sp+4Ch] [bp-ACh]@4
  char v55; // [sp+50h] [bp-A8h]@4
  char v56; // [sp+51h] [bp-A7h]@4
  int v57; // [sp+58h] [bp-A0h]@5
  int v58; // [sp+5Ch] [bp-9Ch]@6
  float v59; // [sp+68h] [bp-90h]@3
  float v60; // [sp+6Ch] [bp-8Ch]@4
  float v61; // [sp+70h] [bp-88h]@4
  char v62; // [sp+74h] [bp-84h]@3
  char v63; // [sp+80h] [bp-78h]@1
  int v64; // [sp+84h] [bp-74h]@15
  char v65; // [sp+8Ch] [bp-6Ch]@1
  int v66; // [sp+90h] [bp-68h]@29

  v3 = a1;
  v4 = a2;
  v44 = a3;
  v43 = a1;
  j_CommandSelectorResults<Entity>::begin((int)&v65, a1);
  j_CommandSelectorResults<Entity>::end((int)&v63, (int)v3);
  __asm
  {
    VMOV.F32        S18, #1.0
    VMOV.F32        S20, #0.5
    VLDR            S16, =0.0
  }
  v9 = 0;
  __asm { VLDR            S22, =3.4028e38 }
  while ( j_SelectorIterator<Entity>::operator!=((int)&v65, (int)&v63) )
    v10 = (Entity *)j_SelectorIterator<Entity>::operator*((int)&v65);
    _R0 = *(_WORD *)(v4 + 24) - 1;
    __asm { VMOV            S0, R0 }
    _R0 = *v44 + 8 * v9;
    __asm
    {
      VCVT.F32.S32    S0, S0
      VLDR            S24, [R0]
      VLDR            S26, [R0,#4]
      VMOV            R11, S24
      VMOV            R8, S26
      VMOV            R2, S0
    }
    j_BlockPos::BlockPos((BlockPos *)&v62, *(float *)&_R11, _R2, *(float *)&_R8);
    _R10 = j_BlockSource::getAboveTopSolidBlock((BlockSource *)v4, (const BlockPos *)&v62, 0, 0);
    _R7 = j_mce::Math::floor(_R11, v17);
    _R0 = j_mce::Math::floor(_R8, v19);
      VMOV            S0, R7
      VMOV            S2, R10
      VMOV            S4, R0
      VCVT.F32.S32    S2, S2
      VCVT.F32.S32    S4, S4
      VADD.F32        S0, S0, S20
      VADD.F32        S2, S2, S18
      VADD.F32        S4, S4, S20
      VSTR            S0, [SP,#0xF8+var_90]
      VSTR            S2, [SP,#0xF8+var_8C]
      VSTR            S4, [SP,#0xF8+var_88]
    (*(void (__fastcall **)(Entity *, float *, signed int, _DWORD))(*(_DWORD *)v10 + 104))(v10, &v59, 3, 0);
    v21 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v10 + 488))(v10);
    LODWORD(v22) = 319;
    if ( v21 == 319 )
      v46 = 2;
      v47 = 1;
      v48 = 0;
      v45 = &off_26DA5F8;
      j_Entity::getRuntimeID((Entity *)&v49, (int)v10);
      v50 = v59;
      v51 = v60;
      v52 = v61;
      v53 = *((_QWORD *)v10 + 15);
      v54 = *((_DWORD *)v10 + 855);
      v55 = 2;
      v56 = *((_BYTE *)v10 + 216);
      v23 = *((_DWORD *)v10 + 128);
      if ( v23 )
      {
        j_Entity::getRuntimeID((Entity *)&v57, v23);
      }
      else
        v57 = 0;
        v58 = 0;
      v24 = (Level *)j_Entity::getLevel(v10);
      v25 = j_Level::getPacketSender(v24);
      (*(void (**)(void))(*(_DWORD *)v25 + 8))();
    __asm { VMOV.F32        S28, S22 }
    v26 = v4;
    v27 = *(_QWORD *)v44 >> 32;
    for ( _R7 = *(_QWORD *)v44; _R7 != v27; _R7 += 8 )
      __asm
        VLDR            S0, [R7]
        VLDR            S2, [R7,#4]
        VCMPE.F32       S24, S0
        VMRS            APSR_nzcv, FPSCR
      if ( _ZF )
        __asm
        {
          VCMPEEQ.F32     S26, S2
          VMRSEQ          APSR_nzcv, FPSCR
        }
          VSUB.F32        S0, S0, S24
          VSUB.F32        S2, S2, S26
          VMUL.F32        S0, S0, S0
          VMUL.F32        S2, S2, S2
          VADD.F32        S0, S2, S0
          VMOV            R0, S0
        _R0 = j_mce::Math::sqrt(_R0, v22);
          VMOV            S0, R0
          VCMPE.F32       S0, S28
          VMRS            APSR_nzcv, FPSCR
        if ( _NF ^ _VF )
          __asm { VMOVLT.F32      S28, S0 }
    __asm { VADD.F32        S16, S28, S16 }
    ++v9;
    j_SelectorIterator<Entity>::operator++((int)&v65);
    v4 = v26;
  v31 = v64;
  if ( v64 )
    v32 = (unsigned int *)(v64 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
    else
      v33 = (*v32)--;
    if ( v33 == 1 )
      v34 = (unsigned int *)(v31 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 8))(v31);
      if ( &pthread_create )
        __dmb();
        do
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v31 + 12))(v31);
  v36 = v66;
  if ( v66 )
    v37 = (unsigned int *)(v66 + 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 == 1 )
      v39 = (unsigned int *)(v36 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v36 + 8))(v36);
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
        v40 = (*v39)--;
      if ( v40 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v36 + 12))(v36);
  _R0 = j_CommandSelectorResults<Entity>::size((_QWORD **)v43);
    VMOV            S0, R0
    VCVT.F32.U32    S0, S0
    VDIV.F32        S0, S16, S0
    VMOV            R0, S0
  return result;
}


void __fastcall SpreadPlayersCommand::execute(SpreadPlayersCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  const CommandOrigin *v3; // r11@1
  CommandOutput *v5; // r9@1
  char *v12; // r4@3
  int v13; // r6@3
  unsigned int *v14; // r2@5
  signed int v15; // r1@7
  int *v16; // r0@13
  void *v17; // r0@18
  void *v18; // r0@19
  void *v19; // r0@20
  unsigned int *v20; // r2@21
  signed int v21; // r1@23
  char *v23; // r4@27
  int v24; // r6@27
  unsigned int *v25; // r2@29
  signed int v26; // r1@31
  int *v27; // r0@37
  void *v28; // r0@42
  void *v29; // r0@43
  int v30; // r0@52
  void *v31; // r0@52
  unsigned int *v32; // r2@54
  signed int v33; // r1@56
  int v34; // r4@63
  unsigned int *v35; // r1@64
  unsigned int v36; // r0@66
  int v39; // r0@71
  char *v40; // r4@71
  int v41; // r6@71
  unsigned int *v42; // r2@73
  signed int v43; // r1@75
  unsigned int *v44; // r2@77
  signed int v45; // r1@79
  unsigned int *v46; // r2@81
  signed int v47; // r1@83
  int *v48; // r0@89
  void *v49; // r0@94
  void *v50; // r0@95
  void *v51; // r0@96
  void *v52; // r0@97
  void *v53; // r4@98
  int v54; // r4@102
  unsigned int *v55; // r1@103
  unsigned int v56; // r0@105
  unsigned int *v57; // r5@109
  unsigned int v58; // r0@111
  unsigned int *v59; // r2@120
  signed int v60; // r1@122
  unsigned int *v61; // r2@124
  signed int v62; // r1@126
  unsigned int *v63; // r6@146
  unsigned int v64; // r0@148
  int v65; // r4@153
  unsigned int *v66; // r1@154
  unsigned int v67; // r0@156
  unsigned int *v68; // r6@160
  unsigned int v69; // r0@162
  void *v70; // r0@167
  char *v71; // r0@168
  unsigned int *v72; // r2@170
  signed int v73; // r1@172
  unsigned int *v74; // r2@174
  signed int v75; // r1@176
  unsigned int *v76; // r2@178
  signed int v77; // r1@180
  unsigned int *v78; // r2@182
  signed int v79; // r1@184
  unsigned int *v80; // r2@202
  signed int v81; // r1@204
  unsigned int *v82; // r2@206
  signed int v83; // r1@208
  int v84; // [sp+Ch] [bp-104h]@71
  int v85; // [sp+14h] [bp-FCh]@71
  int v86; // [sp+1Ch] [bp-F4h]@71
  char *v87; // [sp+24h] [bp-ECh]@71
  char *v88; // [sp+28h] [bp-E8h]@71
  char *v89; // [sp+2Ch] [bp-E4h]@71
  int v90; // [sp+34h] [bp-DCh]@71
  char v91; // [sp+38h] [bp-D8h]@69
  int v92; // [sp+44h] [bp-CCh]@69
  int v93; // [sp+48h] [bp-C8h]@167
  int v94; // [sp+4Ch] [bp-C4h]@52
  char v95; // [sp+50h] [bp-C0h]@51
  int v96; // [sp+54h] [bp-BCh]@63
  char v97; // [sp+5Ch] [bp-B4h]@51
  int v98; // [sp+60h] [bp-B0h]@153
  char *v99; // [sp+68h] [bp-A8h]@51
  int *v100; // [sp+6Ch] [bp-A4h]@26
  int v101; // [sp+70h] [bp-A0h]@102
  int v102; // [sp+74h] [bp-9Ch]@27
  int v103; // [sp+7Ch] [bp-94h]@27
  char *v104; // [sp+84h] [bp-8Ch]@27
  char *v105; // [sp+88h] [bp-88h]@27
  char *v106; // [sp+8Ch] [bp-84h]@27
  int v107; // [sp+94h] [bp-7Ch]@27
  int v108; // [sp+98h] [bp-78h]@3
  int v109; // [sp+A0h] [bp-70h]@3
  char *v110; // [sp+A8h] [bp-68h]@3
  char *v111; // [sp+ACh] [bp-64h]@3
  char *v112; // [sp+B0h] [bp-60h]@3
  int v113; // [sp+B8h] [bp-58h]@3
  float v114; // [sp+BCh] [bp-54h]@1
  float v115; // [sp+C0h] [bp-50h]@1
  char v116; // [sp+C4h] [bp-4Ch]@1
  float v117; // [sp+D0h] [bp-40h]@1
  float v118; // [sp+D8h] [bp-38h]@1

  v3 = a2;
  _R5 = this;
  v5 = a3;
  (*(void (__fastcall **)(char *))(*(_DWORD *)a2 + 16))(&v116);
  j_Vec3::Vec3((int)&v117, (int)&v116);
  _R4 = COERCE_FLOAT(j_RelativeFloat::getValue((SpreadPlayersCommand *)((char *)_R5 + 116), v117));
  _R7 = COERCE_FLOAT(j_RelativeFloat::getValue((SpreadPlayersCommand *)((char *)_R5 + 124), v118));
  v114 = _R4;
  v115 = _R7;
  __asm
  {
    VLDR            S0, [R5,#0x84]
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    sub_21E94B4((void **)&v113, "commands.generic.num.tooSmall");
    j_CommandOutputParameter::CommandOutputParameter((Util *)&v108, *((float *)_R5 + 33));
    j_CommandOutputParameter::CommandOutputParameter((Util *)&v109, 0.0);
    v110 = 0;
    v111 = 0;
    v112 = 0;
    v110 = (char *)j_operator new(0x10u);
    v112 = v110 + 16;
    v111 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                     (int)&v108,
                     (int)&v110,
                     (int)v110);
    j_CommandOutput::error(v5, &v113, (unsigned __int64 *)&v110);
    v13 = (int)v111;
    v12 = v110;
    if ( v110 != v111 )
    {
      do
      {
        v16 = (int *)(*(_DWORD *)v12 - 12);
        if ( v16 != &dword_28898C0 )
        {
          v14 = (unsigned int *)(*(_DWORD *)v12 - 4);
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
            j_j_j_j__ZdlPv_9(v16);
        }
        v12 += 8;
      }
      while ( v12 != (char *)v13 );
      v12 = v110;
    }
    if ( v12 )
      j_operator delete(v12);
    v17 = (void *)(v109 - 12);
    if ( (int *)(v109 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v109 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
      else
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    v18 = (void *)(v108 - 12);
    if ( (int *)(v108 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v108 - 4);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    v19 = (void *)(v113 - 12);
    if ( (int *)(v113 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v113 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
LABEL_117:
        if ( v21 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
        return;
LABEL_116:
      v21 = (*v20)--;
      goto LABEL_117;
  else
    __asm
      VMOV.F32        S2, #1.0
      VADD.F32        S16, S0, S2
      VLDR            S0, [R5,#0x88]
      VCMPE.F32       S0, S16
      VMRS            APSR_nzcv, FPSCR
    if ( !(_NF ^ _VF) )
      j_CommandSelector<Entity>::results((int)&v100, (SpreadPlayersCommand *)((char *)_R5 + 20), v3);
      if ( j_Command::checkHasTargets<Entity>((__int64 **)&v100, v5) )
        if ( j_CommandOutput::wantsData(v5) == 1 )
          v99 = (char *)&unk_28898CC;
          j_CommandSelectorResults<Entity>::begin((int)&v97, &v100);
          j_CommandSelectorResults<Entity>::end((int)&v95, (int)&v100);
          while ( j_SelectorIterator<Entity>::operator!=((int)&v97, (int)&v95) )
            v30 = j_SelectorIterator<Entity>::operator*((int)&v97);
            j_getEntityName((const Entity *)&v94, v30);
            j_CommandUtils::addtoCSVList((const void **)&v99, (const void **)&v94);
            v31 = (void *)(v94 - 12);
            if ( (int *)(v94 - 12) != &dword_28898C0 )
            {
              v32 = (unsigned int *)(v94 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v33 = __ldrex(v32);
                while ( __strex(v33 - 1, v32) );
              }
              else
                v33 = (*v32)--;
              if ( v33 <= 0 )
                j_j_j_j__ZdlPv_9(v31);
            }
            j_SelectorIterator<Entity>::operator++((int)&v97);
          v34 = v96;
          if ( v96 )
            v35 = (unsigned int *)(v96 + 4);
            if ( &pthread_create )
              __dmb();
              do
                v36 = __ldrex(v35);
              while ( __strex(v36 - 1, v35) );
            else
              v36 = (*v35)--;
            if ( v36 == 1 )
              v63 = (unsigned int *)(v34 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 8))(v34);
                  v64 = __ldrex(v63);
                while ( __strex(v64 - 1, v63) );
                v64 = (*v63)--;
              if ( v64 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 12))(v34);
          v65 = v98;
          if ( v98 )
            v66 = (unsigned int *)(v98 + 4);
                v67 = __ldrex(v66);
              while ( __strex(v67 - 1, v66) );
              v67 = (*v66)--;
            if ( v67 == 1 )
              v68 = (unsigned int *)(v65 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v65 + 8))(v65);
                  v69 = __ldrex(v68);
                while ( __strex(v69 - 1, v68) );
                v69 = (*v68)--;
              if ( v69 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v65 + 12))(v65);
          sub_21E8AF4(&v93, (int *)&v99);
          j_CommandOutput::set<std::string>((int)v5, "victims", &v93);
          v70 = (void *)(v93 - 12);
          if ( (int *)(v93 - 12) != &dword_28898C0 )
            v80 = (unsigned int *)(v93 - 4);
                v81 = __ldrex(v80);
              while ( __strex(v81 - 1, v80) );
              v81 = (*v80)--;
            if ( v81 <= 0 )
              j_j_j_j__ZdlPv_9(v70);
          v71 = v99 - 12;
          if ( (int *)(v99 - 12) != &dword_28898C0 )
            v82 = (unsigned int *)(v99 - 4);
                v83 = __ldrex(v82);
              while ( __strex(v83 - 1, v82) );
              v83 = (*v82)--;
            if ( v83 <= 0 )
              j_j_j_j__ZdlPv_9(v71);
          __asm
            VLDR            S0, [SP,#0x110+var_54]
            VLDR            S2, [SP,#0x110+var_50]
        else
            VMOV            S0, R4
            VMOV            S2, R7
        __asm
          VMOV            R7, S0
          VMOV            R8, S2
        j_BlockPos::BlockPos((BlockPos *)&v91, _R7, 0.0, _R8);
        j_CommandOrigin::getAreaAt((CommandOrigin *)&v92, v3, (const BlockPos *)&v91);
        if ( v92 )
            VLDR            S0, [R5,#0x84]
            VLDR            S2, [R5,#0x88]
            VSTR            S0, [SP,#0x110+var_110]
            VSTR            S2, [SP,#0x110+var_10C]
          if ( j_SpreadPlayersCommand::spreadEntities((int)v5, &v100, v92 + 8, (int)&v114) )
            sub_21E94B4((void **)&v90, "commands.spreadplayers.success.players");
            v39 = j_CommandSelectorResults<Entity>::size((_QWORD **)&v100);
            j_CommandOutputParameter::CommandOutputParameter((CommandOutputParameter *)&v84, v39);
            j_CommandOutputParameter::CommandOutputParameter((Util *)&v85, _R7);
            j_CommandOutputParameter::CommandOutputParameter((Util *)&v86, _R8);
            v87 = 0;
            v88 = 0;
            v89 = 0;
            v87 = (char *)j_operator new(0x18u);
            v89 = v87 + 24;
            v88 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                            (int)&v84,
                            (int)&v87,
                            (int)v87);
            j_CommandOutput::success((int)v5, &v90, (unsigned __int64 *)&v87);
            v41 = (int)v88;
            v40 = v87;
            if ( v87 != v88 )
                v48 = (int *)(*(_DWORD *)v40 - 12);
                if ( v48 != &dword_28898C0 )
                {
                  v46 = (unsigned int *)(*(_DWORD *)v40 - 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v47 = __ldrex(v46);
                    while ( __strex(v47 - 1, v46) );
                  }
                  else
                    v47 = (*v46)--;
                  if ( v47 <= 0 )
                    j_j_j_j__ZdlPv_9(v48);
                }
                v40 += 8;
              while ( v40 != (char *)v41 );
              v40 = v87;
            if ( v40 )
              j_operator delete(v40);
            v49 = (void *)(v86 - 12);
            if ( (int *)(v86 - 12) != &dword_28898C0 )
              v72 = (unsigned int *)(v86 - 4);
                  v73 = __ldrex(v72);
                while ( __strex(v73 - 1, v72) );
                v73 = (*v72)--;
              if ( v73 <= 0 )
                j_j_j_j__ZdlPv_9(v49);
            v50 = (void *)(v85 - 12);
            if ( (int *)(v85 - 12) != &dword_28898C0 )
              v74 = (unsigned int *)(v85 - 4);
                  v75 = __ldrex(v74);
                while ( __strex(v75 - 1, v74) );
                v75 = (*v74)--;
              if ( v75 <= 0 )
                j_j_j_j__ZdlPv_9(v50);
            v51 = (void *)(v84 - 12);
            if ( (int *)(v84 - 12) != &dword_28898C0 )
              v76 = (unsigned int *)(v84 - 4);
                  v77 = __ldrex(v76);
                while ( __strex(v77 - 1, v76) );
                v77 = (*v76)--;
              if ( v77 <= 0 )
                j_j_j_j__ZdlPv_9(v51);
            v52 = (void *)(v90 - 12);
            if ( (int *)(v90 - 12) != &dword_28898C0 )
              v78 = (unsigned int *)(v90 - 4);
                  v79 = __ldrex(v78);
                while ( __strex(v79 - 1, v78) );
                v79 = (*v78)--;
              if ( v79 <= 0 )
                j_j_j_j__ZdlPv_9(v52);
          v53 = (void *)v92;
          if ( v92 )
            j_BlockSource::~BlockSource((BlockSource *)(v92 + 8));
            if ( *(_DWORD *)v53 )
              (*(void (**)(void))(**(_DWORD **)v53 + 4))();
            j_operator delete(v53);
      v54 = v101;
      if ( v101 )
        v55 = (unsigned int *)(v101 + 4);
        if ( &pthread_create )
          __dmb();
          do
            v56 = __ldrex(v55);
          while ( __strex(v56 - 1, v55) );
          v56 = (*v55)--;
        if ( v56 == 1 )
          v57 = (unsigned int *)(v54 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v54 + 8))(v54);
              v58 = __ldrex(v57);
            while ( __strex(v58 - 1, v57) );
            v58 = (*v57)--;
          if ( v58 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v54 + 12))(v54);
      return;
    sub_21E94B4((void **)&v107, "commands.generic.num.tooSmall");
    j_CommandOutputParameter::CommandOutputParameter((Util *)&v102, *((float *)_R5 + 34));
    __asm { VMOV            R1, S16 }
    j_CommandOutputParameter::CommandOutputParameter((Util *)&v103, _R1);
    v104 = 0;
    v105 = 0;
    v106 = 0;
    v104 = (char *)j_operator new(0x10u);
    v106 = v104 + 16;
    v105 = (char *)j_std::__uninitialized_copy<false>::__uninit_copy<CommandOutputParameter const*,CommandOutputParameter*>(
                     (int)&v102,
                     (int)&v104,
                     (int)v104);
    j_CommandOutput::error(v5, &v107, (unsigned __int64 *)&v104);
    v24 = (int)v105;
    v23 = v104;
    if ( v104 != v105 )
        v27 = (int *)(*(_DWORD *)v23 - 12);
        if ( v27 != &dword_28898C0 )
          v25 = (unsigned int *)(*(_DWORD *)v23 - 4);
              v26 = __ldrex(v25);
            while ( __strex(v26 - 1, v25) );
            v26 = (*v25)--;
          if ( v26 <= 0 )
            j_j_j_j__ZdlPv_9(v27);
        v23 += 8;
      while ( v23 != (char *)v24 );
      v23 = v104;
    if ( v23 )
      j_operator delete(v23);
    v28 = (void *)(v103 - 12);
    if ( (int *)(v103 - 12) != &dword_28898C0 )
      v59 = (unsigned int *)(v103 - 4);
          v60 = __ldrex(v59);
        while ( __strex(v60 - 1, v59) );
        v60 = (*v59)--;
      if ( v60 <= 0 )
        j_j_j_j__ZdlPv_9(v28);
    v29 = (void *)(v102 - 12);
    if ( (int *)(v102 - 12) != &dword_28898C0 )
      v61 = (unsigned int *)(v102 - 4);
          v62 = __ldrex(v61);
        while ( __strex(v62 - 1, v61) );
        v62 = (*v61)--;
      if ( v62 <= 0 )
        j_j_j_j__ZdlPv_9(v29);
    v19 = (void *)(v107 - 12);
    if ( (int *)(v107 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v107 - 4);
        goto LABEL_117;
      goto LABEL_116;
}


Command *__fastcall SpreadPlayersCommand::SpreadPlayersCommand(Command *a1)
{
  Command *v1; // r4@1

  v1 = a1;
  j_Command::Command(a1);
  *(_DWORD *)v1 = &off_271A1D8;
  j_CommandSelector<Entity>::CommandSelector((int)v1 + 20);
  j_RelativeFloat::RelativeFloat((Command *)((char *)v1 + 116));
  j_RelativeFloat::RelativeFloat((Command *)((char *)v1 + 124));
  return v1;
}


void __fastcall SpreadPlayersCommand::execute(SpreadPlayersCommand *this, const CommandOrigin *a2, CommandOutput *a3)
{
  SpreadPlayersCommand::execute(this, a2, a3);
}


void __fastcall SpreadPlayersCommand::setup(SpreadPlayersCommand *this, CommandRegistry *a2)
{
  SpreadPlayersCommand::setup(this, a2);
}


char *__fastcall SpreadPlayersCommand::createInitialPositions(int a1, Random *this, int a3, int a4, int a5)
{
  int v5; // r9@1
  int v6; // r4@1
  char *result; // r0@1
  Random *v9; // r7@1
  int v11; // r5@2
  __int64 v18; // r0@3
  __int64 v19; // [sp+0h] [bp-58h]@4

  v5 = a3;
  v6 = a1;
  result = 0;
  _R11 = a4;
  v9 = this;
  *(_DWORD *)v6 = 0;
  *(_DWORD *)(v6 + 4) = 0;
  *(_DWORD *)(v6 + 8) = 0;
  if ( a3 >= 1 )
  {
    _R10 = a5;
    v11 = 0;
    __asm { VLDR            D8, =2.32830644e-10 }
    do
    {
      __asm
      {
        VLDR            S20, [R10]
        VLDR            S18, [R11]
      }
      _R6 = j_Random::_genRandInt32(v9);
        VLDR            S24, [R10,#4]
        VLDR            S22, [R11,#4]
      _R0 = j_Random::_genRandInt32(v9);
        VMOV            S0, R6
        VMOV            S2, R0
        VCVT.F64.U32    D0, S0
        VCVT.F64.U32    D1, S2
        VMUL.F64        D0, D0, D8
        VMUL.F64        D1, D1, D8
        VSUB.F32        S4, S20, S18
        VCVT.F32.F64    S0, D0
        VSUB.F32        S6, S24, S22
        VCVT.F32.F64    S2, D1
        VMUL.F32        S0, S0, S4
        VMUL.F32        S2, S2, S6
        VADD.F32        S0, S0, S18
        VADD.F32        S2, S2, S22
        VSTR            S0, [SP,#0x58+var_58]
        VSTR            S2, [SP,#0x58+var_58+4]
      v18 = *(_QWORD *)(v6 + 4);
      if ( (_DWORD)v18 == HIDWORD(v18) )
        result = j_std::vector<Vec2,std::allocator<Vec2>>::_M_emplace_back_aux<Vec2&>(__PAIR__(&v19, v6));
      else
        *(_QWORD *)v18 = v19;
        result = (char *)(v18 + 8);
        *(_DWORD *)(v6 + 4) = result;
      ++v11;
    }
    while ( v11 < v5 );
  }
  return result;
}


signed int __fastcall SpreadPlayersCommand::spreadEntities(int a1, int **a2, int a3, int a4)
{
  int v4; // r10@1
  int v6; // r8@1
  int **v7; // r9@1
  unsigned int v8; // r0@1
  signed int v15; // r2@1
  int v16; // r1@1
  int v17; // r0@2
  int *v18; // r5@2
  int v19; // r4@2
  int v20; // r0@3
  __int64 v21; // ST08_8@3
  int v22; // ST00_4@3
  void *v23; // r6@4
  signed int v24; // r4@4
  unsigned __int64 *v26; // [sp+10h] [bp-A28h]@0
  void *v27; // [sp+18h] [bp-A20h]@3
  int v28; // [sp+1Ch] [bp-A1Ch]@4
  float v29; // [sp+24h] [bp-A14h]@3
  float v30; // [sp+2Ch] [bp-A0Ch]@3
  unsigned int v31; // [sp+34h] [bp-A04h]@1
  unsigned int v32; // [sp+38h] [bp-A00h]@1
  char v33; // [sp+800h] [bp-238h]@1
  int v34; // [sp+9F8h] [bp-40h]@1
  char v35; // [sp+9FCh] [bp-3Ch]@1
  int v36; // [sp+A00h] [bp-38h]@1
  int v37; // [sp+A04h] [bp-34h]@3

  v4 = a1;
  _R11 = a4;
  v6 = a3;
  v7 = a2;
  v8 = sub_21E67AC((int)&Random::mRandomDevice);
  _LR = &v33;
  __asm { VLDR            S0, [LR,#0x23C] }
  v31 = v8;
  v15 = 1;
  __asm { VLDR            S16, [LR,#0x238] }
  v34 = 625;
  v16 = 0;
  v35 = 0;
  v36 = 0;
  v32 = v8;
  do
  {
    v17 = v8 ^ (v8 >> 30);
    v18 = (int *)(&v31 + v16);
    v19 = v16++ + 1812433253 * v17;
    v8 = v15++ + 1812433253 * v17;
    v18[2] = v19 + 1;
  }
  while ( v16 != 397 );
  v34 = 624;
  v37 = 398;
  __asm
    VLDR            S2, [R11]
    VLDR            S4, [R11,#4]
    VSUB.F32        S6, S2, S0
    VADD.F32        S2, S2, S0
    VSUB.F32        S8, S4, S0
    VADD.F32        S0, S4, S0
    VSTR            S6, [SP,#0xA38+var_A0C]
    VSTR            S2, [SP,#0xA38+var_A14]
    VSTR            S8, [SP,#0xA38+var_A08]
    VSTR            S0, [SP,#0xA38+var_A10]
  v20 = j_CommandSelectorResults<Entity>::size((_QWORD **)v7);
  j_SpreadPlayersCommand::createInitialPositions((int)&v27, (Random *)&v31, v20, (int)&v30, (int)&v29);
  LODWORD(v21) = &v29;
  HIDWORD(v21) = &v27;
  __asm { VSTR            S16, [SP,#0xA38+var_A38] }
  if ( j_SpreadPlayersCommand::spreadPositions(*(float *)&v4, (int)&v31, v6, _R11, v22, (int)&v30, v21, v26) == -1 )
    v23 = v27;
    v24 = 0;
  else
    j_SpreadPlayersCommand::setPlayerPositions(v7, v6, &v27);
    j_CommandOutput::set<int>(v4, "count", (v28 - (signed int)v27) >> 3);
    j_CommandOutput::set<float>(v4, "x", *(_DWORD *)_R11);
    j_CommandOutput::set<float>(v4, (const char *)&aRtuz[3], *(_DWORD *)(_R11 + 4));
    v24 = 1;
  if ( v23 )
    j_operator delete(v23);
  return v24;
}


void __fastcall SpreadPlayersCommand::~SpreadPlayersCommand(SpreadPlayersCommand *this)
{
  SpreadPlayersCommand::~SpreadPlayersCommand(this);
}


void __fastcall SpreadPlayersCommand::~SpreadPlayersCommand(SpreadPlayersCommand *this)
{
  Command *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_271A1D8;
  j_CommandSelectorBase::~CommandSelectorBase((SpreadPlayersCommand *)((char *)this + 20));
  j_Command::~Command(v1);
  j_j_j__ZdlPv_7((void *)v1);
}
