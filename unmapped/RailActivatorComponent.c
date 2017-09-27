

void __fastcall RailActivatorComponent::tick(RailActivatorComponent *this)
{
  Entity **v1; // r10@1
  Entity *v2; // r6@1
  BaseRailBlock *v3; // r5@1
  int v4; // r9@3
  int v5; // r1@3
  double v6; // r0@4
  unsigned int v7; // r0@5
  int v8; // r7@7
  int *v9; // r5@7
  Entity *v10; // r1@8
  EntityDefinitionDescriptor *v11; // r0@8
  CommandBlockComponent *v12; // r0@12
  Entity *v13; // r8@14
  EntityDefinitionDescriptor *v14; // r6@14
  double v15; // r0@14
  unsigned int v16; // r0@14
  int v17; // r7@16
  int *v18; // r5@16
  int v19; // r6@17
  unsigned int *v20; // r2@19
  signed int v21; // r1@21
  void *v22; // r7@27
  int v23; // r1@27
  void *v24; // r0@27
  CommandBlockComponent *v25; // r0@33
  CommandBlockComponent *v26; // r0@37
  int v27; // r7@38
  unsigned int *v28; // r2@40
  signed int v29; // r1@42
  void *v30; // r6@48
  int v31; // r1@48
  void *v32; // r0@48
  bool v33; // zf@50
  void *ptr; // [sp+0h] [bp-80h]@14
  unsigned int v35; // [sp+4h] [bp-7Ch]@14
  int v36; // [sp+8h] [bp-78h]@14
  int v37; // [sp+Ch] [bp-74h]@14
  signed int v38; // [sp+10h] [bp-70h]@14
  int v39; // [sp+14h] [bp-6Ch]@14
  int v40; // [sp+18h] [bp-68h]@14
  void *v41; // [sp+20h] [bp-60h]@8
  unsigned int v42; // [sp+24h] [bp-5Ch]@5
  int v43; // [sp+28h] [bp-58h]@5
  int v44; // [sp+2Ch] [bp-54h]@5
  signed int v45; // [sp+30h] [bp-50h]@5
  int v46; // [sp+34h] [bp-4Ch]@5
  int v47; // [sp+38h] [bp-48h]@51
  BaseRailBlock *v48; // [sp+3Ch] [bp-44h]@3
  int v49; // [sp+40h] [bp-40h]@1
  int v50; // [sp+44h] [bp-3Ch]@1
  const BlockPos *v51; // [sp+48h] [bp-38h]@1
  char v52; // [sp+4Ch] [bp-34h]@1
  int v53; // [sp+50h] [bp-30h]@1
  const BlockPos *v54; // [sp+54h] [bp-2Ch]@1

  v1 = (Entity **)this;
  v2 = *(Entity **)this;
  v3 = (BaseRailBlock *)j_Entity::getRegion(*(Entity **)this);
  j_BlockPos::BlockPos((int)&v52, (int)*v1 + 72);
  v49 = *(_DWORD *)&v52;
  v50 = v53 - 1;
  v51 = v54;
  if ( j_BaseRailBlock::isRail(v3, (BlockSource *)&v49, v54) == 1 )
    --v53;
  v4 = *(_DWORD *)(*((_DWORD *)v2 + 12) + 372);
  j_BlockSource::getBlockAndData((BlockSource *)&v48, v3, (int)&v52);
  if ( j_BaseRailBlock::isRail((BaseRailBlock *)(unsigned __int8)v48, v5) == 1 )
  {
    HIDWORD(v6) = (unsigned __int8)v48;
    if ( (unsigned __int8)v48 == *(_BYTE *)(Block::mActivatorRail + 4) )
    {
      v43 = 0;
      v44 = 0;
      v45 = 1065353216;
      v46 = 0;
      LODWORD(v6) = &v45;
      v7 = sub_21E6254(v6);
      v42 = v7;
      if ( v7 == 1 )
      {
        v47 = 0;
        v9 = &v47;
        goto LABEL_8;
      }
      if ( v7 < 0x40000000 )
        v8 = 4 * v7;
        v9 = (int *)j_operator new(4 * v7);
        j___aeabi_memclr4_0((int)v9, v8);
LABEL_8:
        v41 = v9;
        j_Entity::initParams(*v1, (VariantParameterList *)&v41);
        v10 = *v1;
        v11 = (EntityDefinitionDescriptor *)*((_DWORD *)v2 + 12);
        if ( BYTE1(v48) & 8 )
        {
          j_EntityDefinitionDescriptor::executeTrigger(
            v11,
            v10,
            (const DefinitionTrigger *)(v4 + 4),
            (const VariantParameterList *)&v41);
          if ( *(_BYTE *)(v4 + 87) )
            j_RailActivatorComponent::_ejectAllRiders((RailActivatorComponent *)v1);
          if ( j_Entity::getCommandBlockComponent(*v1) )
          {
            v26 = (CommandBlockComponent *)j_Entity::getCommandBlockComponent(*v1);
            j_CommandBlockComponent::setShouldTick(v26, *(_BYTE *)(v4 + 85));
          }
        }
        else
            (const DefinitionTrigger *)(v4 + 44),
          if ( *(_BYTE *)(v4 + 88) )
            v12 = (CommandBlockComponent *)j_Entity::getCommandBlockComponent(*v1);
            j_CommandBlockComponent::setShouldTick(v12, *(_BYTE *)(v4 + 86));
        v27 = v43;
        while ( v27 )
          v30 = (void *)v27;
          v31 = *(_DWORD *)(v27 + 8);
          v27 = *(_DWORD *)v27;
          v32 = (void *)(v31 - 12);
          if ( (int *)(v31 - 12) != &dword_28898C0 )
            v28 = (unsigned int *)(v31 - 4);
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
              j_j_j_j__ZdlPv_9(v32);
          j_operator delete(v30);
        j___aeabi_memclr4_0((int)v41, 4 * v42);
        v43 = 0;
        v44 = 0;
        v33 = v41 == 0;
        if ( v41 )
          v33 = &v47 == v41;
        if ( !v33 )
          j_operator delete(v41);
        return;
LABEL_57:
      sub_21E57F4();
    }
  }
  if ( !*(_BYTE *)(v4 + 84) )
    return;
  v13 = *v1;
  v14 = (EntityDefinitionDescriptor *)*((_DWORD *)v2 + 12);
  HIDWORD(v15) = 10;
  v40 = 0;
  v36 = 0;
  v37 = 0;
  ptr = 0;
  v38 = 1065353216;
  v39 = 0;
  LODWORD(v15) = &v38;
  v16 = sub_21E6254(v15);
  v35 = v16;
  if ( v16 == 1 )
    v40 = 0;
    v18 = &v40;
  else
    if ( v16 >= 0x40000000 )
      goto LABEL_57;
    v17 = 4 * v16;
    v18 = (int *)j_operator new(4 * v16);
    j___aeabi_memclr4_0((int)v18, v17);
  ptr = v18;
  j_EntityDefinitionDescriptor::executeTrigger(
    v14,
    v13,
    (const DefinitionTrigger *)(v4 + 44),
    (const VariantParameterList *)&ptr);
  v19 = v36;
  while ( v19 )
    v22 = (void *)v19;
    v23 = *(_DWORD *)(v19 + 8);
    v19 = *(_DWORD *)v19;
    v24 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v23 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
      else
        v21 = (*v20)--;
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    j_operator delete(v22);
  j___aeabi_memclr4_0((int)ptr, 4 * v35);
  if ( ptr && &v40 != ptr )
    j_operator delete(ptr);
  if ( j_Entity::getCommandBlockComponent(*v1) )
    v25 = (CommandBlockComponent *)j_Entity::getCommandBlockComponent(*v1);
    j_CommandBlockComponent::setShouldTick(v25, *(_BYTE *)(v4 + 86));
}


void __fastcall RailActivatorComponent::tick(RailActivatorComponent *this)
{
  RailActivatorComponent::tick(this);
}


_DWORD *__fastcall RailActivatorComponent::RailActivatorComponent(_DWORD *result, int a2)
{
  *result = a2;
  return result;
}


int __fastcall RailActivatorComponent::_ejectAllRiders(RailActivatorComponent *this)
{
  Entity **v1; // r9@1
  signed int v3; // r1@1
  int v4; // r1@2
  int v11; // r4@3
  int v14; // r2@7
  int result; // r0@13
  Level *v17; // r0@14
  unsigned __int64 *v18; // r5@14
  int v19; // r2@14
  int v20; // r2@14
  __int64 v21; // [sp+0h] [bp-68h]@3
  int v22; // [sp+8h] [bp-60h]@3

  v1 = (Entity **)this;
  _R0 = *(Entity **)this;
  v3 = (*(_QWORD *)((char *)_R0 + 476) >> 32) - *(_QWORD *)((char *)_R0 + 476);
  if ( v3 >= 1 )
  {
    v4 = (v3 >> 2) - 1;
    __asm { VLDR            S16, =0.0001 }
    _R5 = &Vec3::UNIT_Y;
    _R7 = &Vec3::ZERO;
    do
    {
      v11 = v4;
      __asm { VLDR            S20, [R0,#0x48] }
      _R6 = *(Entity **)(*((_DWORD *)_R0 + 119) + 4 * v4);
      __asm
      {
        VLDR            S18, [R0,#0x4C]
        VLDR            S22, [R0,#0x50]
      }
      _R0 = (*(int (__cdecl **)(Entity *, _DWORD, _DWORD))(*(_DWORD *)_R0 + 64))(
              _R0,
              *(_DWORD *)(*(_DWORD *)_R0 + 64),
              *(_DWORD *)_R0);
        VLDR            S0, [R0]
        VLDR            S2, [R0,#4]
        VLDR            S4, [R0,#8]
      v21 = *(_QWORD *)&Vec3::ZERO;
      v22 = dword_2822498;
        VLDR            S8, [R5,#4]
        VLDR            S10, [R5,#8]
        VLDR            S6, [R5]
        VMUL.F32        S12, S8, S4
        VMUL.F32        S14, S10, S2
        VMUL.F32        S4, S6, S4
        VMUL.F32        S10, S10, S0
        VMUL.F32        S6, S6, S2
        VMUL.F32        S8, S8, S0
        VSUB.F32        S0, S14, S12
        VSUB.F32        S2, S4, S10
        VSUB.F32        S4, S8, S6
        VMUL.F32        S6, S0, S0
        VMUL.F32        S8, S2, S2
        VMUL.F32        S10, S4, S4
        VADD.F32        S6, S8, S6
        VADD.F32        S6, S6, S10
        VSQRT.F32       S6, S6
        VCMPE.F32       S6, S16
        VMRS            APSR_nzcv, FPSCR
      if ( _NF ^ _VF )
        __asm
        {
          VLDR            S28, [R7]
          VLDR            S24, [R7,#4]
          VLDR            S26, [R7,#8]
        }
      else
          VDIV.F32        S26, S4, S6
          VDIV.F32        S24, S2, S6
          VDIV.F32        S28, S0, S6
        VADD.F32        S0, S28, S20
        VADD.F32        S2, S26, S22
        VADD.F32        S4, S24, S18
        VSTR            S0, [SP,#0x68+var_68]
        VSTR            S2, [SP,#0x68+var_60]
        VLDR            S0, [R6,#0x13C]
        VADD.F32        S0, S0, S4
        VSTR            S0, [SP,#0x68+var_68+4]
      if ( j_Entity::_tryPlaceAt(_R6, (const Vec3 *)&v21) != 1 )
          VSUB.F32        S0, S20, S28
          VSUB.F32        S2, S22, S26
          VSUB.F32        S4, S18, S24
          VSTR            S0, [SP,#0x68+var_68]
          VSTR            S2, [SP,#0x68+var_60]
          VLDR            S0, [R6,#0x13C]
          VADD.F32        S0, S0, S4
          VSTR            S0, [SP,#0x68+var_68+4]
        if ( j_Entity::_tryPlaceAt(_R6, (const Vec3 *)&v21) != 1 )
          _R0 = (*(int (__cdecl **)(Entity *, _DWORD, int))(*(_DWORD *)*v1 + 64))(
                  *v1,
                  *(_DWORD *)(*(_DWORD *)*v1 + 64),
                  v14);
          __asm
          {
            VLDR            S0, [R0]
            VLDR            S2, [R0,#4]
            VMUL.F32        S6, S0, S0
            VLDR            S4, [R0,#8]
            VMUL.F32        S8, S2, S2
            VMUL.F32        S10, S4, S4
            VADD.F32        S6, S8, S6
            VADD.F32        S6, S6, S10
            VSQRT.F32       S6, S6
            VCMPE.F32       S6, S16
            VMRS            APSR_nzcv, FPSCR
          }
          if ( _NF ^ _VF )
            __asm
            {
              VLDR            S4, [R7]
              VLDR            S0, [R7,#4]
              VLDR            S2, [R7,#8]
            }
          else
              VNEG.F32        S4, S4
              VNEG.F32        S8, S2
              VNEG.F32        S10, S0
              VDIV.F32        S2, S4, S6
              VDIV.F32        S0, S8, S6
              VDIV.F32        S4, S10, S6
            VADD.F32        S4, S4, S20
            VADD.F32        S2, S2, S22
            VADD.F32        S0, S0, S18
            VSTR            S4, [SP,#0x68+var_68]
            VSTR            S2, [SP,#0x68+var_60]
            VLDR            S2, [R6,#0x13C]
            VADD.F32        S0, S2, S0
            VSTR            S0, [SP,#0x68+var_68+4]
          j_Entity::_tryPlaceAt(_R6, (const Vec3 *)&v21);
      (*(void (__fastcall **)(Entity *, _DWORD, _DWORD))(*(_DWORD *)_R6 + 596))(_R6, 0, 0);
      _R0 = *v1;
      v4 = v11 - 1;
    }
    while ( v11 + 1 > 1 );
  }
  result = j_Entity::getHurtTime(_R0);
  if ( !result )
    v17 = (Level *)j_Entity::getLevel(*v1);
    v18 = (unsigned __int64 *)j_Level::getGameRules(v17);
    if ( (*(int (__cdecl **)(Entity *, _DWORD, int))(*(_DWORD *)*v1 + 488))(*v1, *(_DWORD *)(*(_DWORD *)*v1 + 488), v19) != 524385
      || (result = j_GameRules::hasRule(v18, (int **)&GameRules::DO_TNT_EXPLODE), result == 1)
      && (result = j_GameRules::getBool(v18, (int **)&GameRules::DO_TNT_EXPLODE), result == 1) )
      result = (*(int (__cdecl **)(Entity *, _DWORD, int))(*(_DWORD *)*v1 + 684))(
                 *v1,
                 *(_DWORD *)(*(_DWORD *)*v1 + 684),
                 v20);
  return result;
}
