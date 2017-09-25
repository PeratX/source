

_DWORD *__fastcall HealableComponent::HealableComponent(_DWORD *result, int a2)
{
  *result = a2;
  return result;
}


signed int __fastcall HealableComponent::getInteraction(HealableComponent *this, Player *a2, EntityInteraction *a3)
{
  Player *v3; // r4@1
  Mob **v4; // r11@1
  EntityInteraction *v5; // r10@1
  ItemInstance *v6; // r0@1
  ItemInstance *v7; // r5@1
  int v8; // r0@1
  bool v9; // zf@1
  int v10; // r8@6
  int v11; // r6@6
  double v12; // r0@6
  bool v13; // zf@6
  unsigned int v14; // r0@9
  int v15; // r7@11
  int *v16; // r6@11
  _DWORD *v17; // r0@13
  _DWORD *v18; // r6@13
  signed int v19; // r11@16
  _DWORD *v21; // r0@22
  __int64 v22; // r1@22
  void *v23; // r0@24
  int v24; // r7@27
  unsigned int *v25; // r2@29
  signed int v26; // r1@31
  void *v27; // r6@37
  int v28; // r1@37
  void *v29; // r0@37
  bool v30; // zf@39
  unsigned int *v31; // r2@44
  signed int v32; // r1@46
  int v33; // [sp+8h] [bp-58h]@24
  _DWORD *v34; // [sp+Ch] [bp-54h]@22
  __int64 v35; // [sp+14h] [bp-4Ch]@22
  void *ptr; // [sp+1Ch] [bp-44h]@12
  unsigned int v37; // [sp+20h] [bp-40h]@9
  int v38; // [sp+24h] [bp-3Ch]@9
  int v39; // [sp+28h] [bp-38h]@9
  signed int v40; // [sp+2Ch] [bp-34h]@9
  int v41; // [sp+30h] [bp-30h]@9
  int v42; // [sp+34h] [bp-2Ch]@40

  v3 = a2;
  v4 = (Mob **)this;
  v5 = a3;
  v6 = (ItemInstance *)j_Player::getSelectedItem(a2);
  v7 = v6;
  v8 = *((_BYTE *)v6 + 15);
  v9 = v8 == 0;
  if ( v8 )
    v9 = *(_DWORD *)v7 == 0;
  if ( v9 || j_ItemInstance::isNull(v7) || !*((_BYTE *)v7 + 14) )
    goto LABEL_55;
  v10 = *(_DWORD *)(*((_DWORD *)*v4 + 12) + 328);
  v11 = j_Mob::getHealth(*v4);
  LODWORD(v12) = j_Mob::getMaxHealth(*v4);
  v13 = v11 == LODWORD(v12);
  if ( v11 == LODWORD(v12) )
    v13 = *(_BYTE *)(v10 + 16) == 0;
  if ( v13 )
  {
LABEL_55:
    v19 = 0;
  }
  else
    v38 = 0;
    v39 = 0;
    v40 = 1065353216;
    v41 = 0;
    LODWORD(v12) = &v40;
    v14 = sub_21E6254(v12);
    v37 = v14;
    if ( v14 == 1 )
    {
      v42 = 0;
      v16 = &v42;
    }
    else
      if ( v14 >= 0x40000000 )
        sub_21E57F4();
      v15 = 4 * v14;
      v16 = (int *)j_operator new(4 * v14);
      j___aeabi_memclr4_0((int)v16, v15);
    ptr = v16;
    j_Entity::initParams(*v4, (VariantParameterList *)&ptr);
    if ( j_EntityFilterGroup::evaluate((EntityFilterGroup *)(v10 + 20), *v4, (const VariantParameterList *)&ptr) )
      v17 = (_DWORD *)(*(_QWORD *)(v10 + 4) >> 32);
      v18 = (_DWORD *)*(_QWORD *)(v10 + 4);
      if ( v18 != v17 )
      {
        while ( *v18 != *(_DWORD *)v7 )
        {
          v18 += 5;
          if ( v17 == v18 )
          {
            v19 = 0;
            goto LABEL_27;
          }
        }
      }
      if ( v18 == v17 )
        v19 = 0;
      else
        if ( j_EntityInteraction::shouldCapture(v5) == 1 )
          v21 = j_operator new(0xCu);
          LODWORD(v22) = sub_1A67D36;
          *v21 = v3;
          v21[1] = v4;
          HIDWORD(v22) = sub_1A67C8C;
          v21[2] = v18;
          v34 = v21;
          v35 = v22;
          j_EntityInteraction::capture((int)v5, (int)&v34);
          if ( (_DWORD)v35 )
            ((void (*)(void))v35)();
        sub_21E94B4((void **)&v33, "action.interact.feed");
        j_EntityInteraction::setInteractText();
        v23 = (void *)(v33 - 12);
        if ( (int *)(v33 - 12) != &dword_28898C0 )
          v31 = (unsigned int *)(v33 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v32 = __ldrex(v31);
            while ( __strex(v32 - 1, v31) );
          else
            v32 = (*v31)--;
          if ( v32 <= 0 )
            j_j_j_j__ZdlPv_9(v23);
        v19 = 1;
      v19 = 0;
LABEL_27:
    v24 = v38;
    while ( v24 )
      v27 = (void *)v24;
      v28 = *(_DWORD *)(v24 + 8);
      v24 = *(_DWORD *)v24;
      v29 = (void *)(v28 - 12);
      if ( (int *)(v28 - 12) != &dword_28898C0 )
        v25 = (unsigned int *)(v28 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v26 = __ldrex(v25);
          while ( __strex(v26 - 1, v25) );
        else
          v26 = (*v25)--;
        if ( v26 <= 0 )
          j_j_j_j__ZdlPv_9(v29);
      j_operator delete(v27);
    j___aeabi_memclr4_0((int)ptr, 4 * v37);
    v30 = ptr == 0;
    if ( ptr )
      v30 = &v42 == ptr;
    if ( !v30 )
      j_operator delete(ptr);
  return v19;
}


unsigned int __fastcall HealableComponent::_applyEffects(Entity **a1, unsigned __int64 *a2)
{
  Entity **v2; // r4@1
  unsigned __int64 *v3; // r5@1
  Level *v4; // r0@1
  unsigned int result; // r0@1
  int v6; // r5@2
  unsigned __int64 v8; // kr00_8@2
  Level *v13; // r0@5
  char *v14; // r0@5
  Mob *v15; // r6@7
  int v16; // [sp+0h] [bp-38h]@7

  v2 = a1;
  v3 = a2;
  v4 = (Level *)j_Entity::getLevel(*a1);
  result = j_Level::isClientSide(v4);
  if ( !result )
  {
    v8 = *v3;
    v6 = *v3 >> 32;
    _R7 = v8;
    if ( (_DWORD)v8 != v6 )
    {
      __asm
      {
        VMOV.F32        S16, #1.0
        VLDR            D9, =2.32830644e-10
      }
      do
        __asm
        {
          VLDR            S0, [R7,#0x10]
          VCMPE.F32       S0, S16
          VMRS            APSR_nzcv, FPSCR
        }
        if ( _ZF )
          goto LABEL_11;
        v13 = (Level *)j_Entity::getLevel(*v2);
        v14 = j_Level::getRandom(v13);
        result = j_Random::_genRandInt32((Random *)v14);
          VMOV            S0, R0
          VCVT.F64.U32    D0, S0
          VMUL.F64        D0, D0, D9
          VCVT.F32.F64    S0, D0
          VLDR            S2, [R7,#0x10]
          VCMPE.F32       S0, S2
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
LABEL_11:
          v15 = *v2;
          j_MobEffectInstance::MobEffectInstance(
            (int)&v16,
            *(_DWORD *)(_R7 + 4),
            *(_DWORD *)(_R7 + 8),
            *(_DWORD *)(_R7 + 12));
          result = j_Mob::addEffect(v15, (const MobEffectInstance *)&v16);
        _R7 += 20;
      while ( v6 != _R7 );
    }
  }
  return result;
}
