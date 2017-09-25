

void __fastcall TameableComponent::initFromDefinition(TameableComponent *this)
{
  TameableComponent::initFromDefinition(this);
}


void __fastcall TameableComponent::_becomeTame(TameableComponent *this)
{
  TameableComponent::_becomeTame(this);
}


void __fastcall TameableComponent::_sendTameEvents(TameableComponent *this, Player *a2)
{
  TameableComponent::_sendTameEvents(this, a2);
}


int __fastcall TameableComponent::TameableComponent(int result, int a2)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 20) = result + 12;
  *(_DWORD *)(result + 24) = result + 12;
  return result;
}


void __fastcall TameableComponent::_becomeTame(TameableComponent *this)
{
  Entity **v1; // r5@1
  int v2; // r0@1
  double v3; // r0@1
  unsigned int v4; // r0@1
  int v5; // r6@3
  int *v6; // r4@3
  int v7; // r7@4
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  void *v10; // r6@14
  int v11; // r1@14
  void *v12; // r0@14
  void *ptr; // [sp+4h] [bp-44h]@4
  unsigned int v14; // [sp+8h] [bp-40h]@1
  int v15; // [sp+Ch] [bp-3Ch]@1
  int v16; // [sp+10h] [bp-38h]@1
  signed int v17; // [sp+14h] [bp-34h]@1
  int v18; // [sp+18h] [bp-30h]@1
  int v19; // [sp+1Ch] [bp-2Ch]@17

  v1 = (Entity **)this;
  j_Entity::setPersistent(*(Entity **)this);
  v2 = j_Entity::getLevel(*v1);
  j_Level::broadcastEntityEvent(v2, (int)*v1, 7, 0);
  j_Entity::setStatusFlag((int)*v1, 27, 1);
  (*(void (**)(void))(*(_DWORD *)*v1 + 356))();
  v15 = 0;
  v16 = 0;
  HIDWORD(v3) = 10;
  v17 = 1065353216;
  v18 = 0;
  LODWORD(v3) = &v17;
  v4 = sub_21E6254(v3);
  v14 = v4;
  if ( v4 == 1 )
  {
    v19 = 0;
    v6 = &v19;
  }
  else
    if ( v4 >= 0x40000000 )
      sub_21E57F4();
    v5 = 4 * v4;
    v6 = (int *)j_operator new(4 * v4);
    j___aeabi_memclr4_0((int)v6, v5);
  ptr = v6;
  j_Entity::initParams(*v1, (VariantParameterList *)&ptr);
  j_EntityDefinitionDescriptor::executeTrigger(
    *((EntityDefinitionDescriptor **)*v1 + 12),
    *v1,
    (const DefinitionTrigger *)(*(_DWORD *)(*((_DWORD *)*v1 + 12) + 412) + 32),
    (const VariantParameterList *)&ptr);
  v7 = v15;
  while ( v7 )
    v10 = (void *)v7;
    v11 = *(_DWORD *)(v7 + 8);
    v7 = *(_DWORD *)v7;
    v12 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v11 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    }
    j_operator delete(v10);
  j___aeabi_memclr4_0((int)ptr, 4 * v14);
  if ( ptr )
    if ( &v19 != ptr )
      j_operator delete(ptr);
}


void __fastcall TameableComponent::initFromDefinition(TameableComponent *this)
{
  TameableComponent *v1; // r4@1
  int *v6; // r1@1
  int v9; // r1@6
  _DWORD *v10; // r0@7
  _DWORD *v11; // r2@7
  _DWORD *v12; // r1@8
  _DWORD *v13; // r1@10
  int v14; // [sp+4h] [bp-1Ch]@1
  int v15; // [sp+8h] [bp-18h]@1

  v1 = this;
  __asm { VMOV.F32        S0, #1.0 }
  v6 = &v15;
  _R6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 48) + 412);
  v14 = 1065353216;
  _R0 = &v14;
  v15 = 0;
  __asm
  {
    VLDR            S2, [R6,#4]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
    _R0 = (int *)(_R6 + 4);
    VLDR            S0, [R0]
    VCMPE.F32       S0, #0.0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    v6 = _R0;
  *((_DWORD *)v1 + 1) = *v6;
  if ( v1 != (TameableComponent *)_R6 )
    j_std::_Rb_tree<Item const*,Item const*,std::_Identity<Item const*>,std::less<Item const*>,std::allocator<Item const*>>::_M_erase(
      (int)v1 + 8,
      *((_DWORD *)v1 + 4));
    *((_DWORD *)v1 + 4) = 0;
    *((_DWORD *)v1 + 5) = (char *)v1 + 12;
    *((_DWORD *)v1 + 6) = (char *)v1 + 12;
    *((_DWORD *)v1 + 7) = 0;
    v9 = *(_DWORD *)(_R6 + 16);
    if ( v9 )
    {
      v10 = j_std::_Rb_tree<Item const*,Item const*,std::_Identity<Item const*>,std::less<Item const*>,std::allocator<Item const*>>::_M_copy(
              (int)v1 + 8,
              v9,
              (int)v1 + 12);
      v11 = v10;
      *((_DWORD *)v1 + 4) = v10;
      do
      {
        v12 = v11;
        v11 = (_DWORD *)v11[2];
      }
      while ( v11 );
      *((_DWORD *)v1 + 5) = v12;
        v13 = v10;
        v10 = (_DWORD *)v10[3];
      while ( v10 );
      *((_DWORD *)v1 + 6) = v13;
      *((_DWORD *)v1 + 7) = *(_DWORD *)(_R6 + 28);
    }
}


signed int __fastcall TameableComponent::_canTame(TameableComponent *this, const ItemInstance *a2)
{
  const ItemInstance *v2; // r5@1
  TameableComponent *v3; // r4@1
  bool v4; // zf@1
  int v5; // r3@6
  int v6; // r1@6
  unsigned int v7; // r0@6
  int v8; // r5@7
  int v9; // r2@8
  signed int result; // r0@14
  int v11; // r3@16

  v2 = a2;
  v3 = this;
  v4 = *((_BYTE *)a2 + 15) == 0;
  if ( *((_BYTE *)a2 + 15) )
    v4 = *(_DWORD *)a2 == 0;
  if ( v4 || j_ItemInstance::isNull(a2) || !*((_BYTE *)v2 + 14) )
  {
    result = 0;
  }
  else
    v5 = *((_DWORD *)v3 + 4);
    v6 = (int)v3 + 12;
    v7 = *(_DWORD *)v2;
    if ( v5 )
    {
      v8 = (int)v3 + 12;
      do
      {
        v9 = v5;
        while ( *(_DWORD *)(v9 + 16) < v7 )
        {
          v9 = *(_DWORD *)(v9 + 12);
          if ( !v9 )
          {
            v9 = v8;
            goto LABEL_16;
          }
        }
        v5 = *(_DWORD *)(v9 + 8);
        v8 = v9;
      }
      while ( v5 );
    }
    else
      v9 = (int)v3 + 12;
LABEL_16:
    v11 = (int)v3 + 12;
    if ( v9 != v6 )
      if ( v7 < *(_DWORD *)(v9 + 16) )
        v9 = (int)v3 + 12;
      v11 = v9;
    if ( v11 != v6 )
      result = 1;
  return result;
}


void __fastcall TameableComponent::_sendTameEvents(TameableComponent *this, Player *a2)
{
  Player *v2; // r4@1
  void *v3; // r0@1
  void *v4; // r0@2
  void *v5; // r0@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7
  unsigned int *v8; // r2@9
  signed int v9; // r1@11
  unsigned int *v10; // r2@13
  signed int v11; // r1@15
  void **v12; // [sp+0h] [bp-60h]@1
  int v13; // [sp+38h] [bp-28h]@3
  int v14; // [sp+3Ch] [bp-24h]@2
  int v15; // [sp+40h] [bp-20h]@1

  v2 = a2;
  j_EventPacket::EventPacket((int)&v12, a2, *(Entity **)this, 2);
  (*(void (__fastcall **)(Player *, void ***))(*(_DWORD *)v2 + 1448))(v2, &v12);
  v12 = &off_26E9D30;
  v3 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v14 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  v5 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v13 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
}


signed int __fastcall TameableComponent::getInteraction(TameableComponent *this, Player *a2, EntityInteraction *a3)
{
  TameableComponent *v3; // r5@1
  EntityInteraction *v4; // r4@1
  Player *v5; // r6@1
  ItemInstance *v6; // r0@2
  ItemInstance *v7; // r7@2
  int v8; // r0@2
  bool v9; // zf@2
  int v10; // r0@7
  unsigned int v11; // r1@7
  int v12; // r7@7
  int v13; // r3@8
  int v14; // r2@9
  _DWORD *v15; // r0@21
  __int64 v16; // r1@21
  void *v17; // r0@23
  signed int result; // r0@24
  unsigned int *v19; // r2@26
  signed int v20; // r1@28
  int v21; // [sp+4h] [bp-2Ch]@23
  _DWORD *v22; // [sp+8h] [bp-28h]@21
  __int64 v23; // [sp+10h] [bp-20h]@21

  v3 = this;
  v4 = a3;
  v5 = a2;
  if ( j_Entity::isTame(*(Entity **)this) )
    goto LABEL_36;
  v6 = (ItemInstance *)j_Player::getSelectedItem(v5);
  v7 = v6;
  v8 = *((_BYTE *)v6 + 15);
  v9 = v8 == 0;
  if ( v8 )
    v9 = *(_DWORD *)v7 == 0;
  if ( v9 || j_ItemInstance::isNull(v7) || !*((_BYTE *)v7 + 14) )
  v10 = *((_DWORD *)v3 + 4);
  v11 = *(_DWORD *)v7;
  v12 = (int)v3 + 12;
  if ( v10 )
  {
    v13 = (int)v3 + 12;
    do
    {
      v14 = v10;
      while ( *(_DWORD *)(v14 + 16) < v11 )
      {
        v14 = *(_DWORD *)(v14 + 12);
        if ( !v14 )
        {
          v14 = v13;
          goto LABEL_16;
        }
      }
      v10 = *(_DWORD *)(v14 + 8);
      v13 = v14;
    }
    while ( v10 );
  }
  else
    v14 = (int)v3 + 12;
LABEL_16:
  if ( v14 == v12 )
  if ( v11 < *(_DWORD *)(v14 + 16) )
LABEL_36:
    result = 0;
    if ( j_EntityInteraction::shouldCapture(v4) == 1 )
      v15 = j_operator new(8u);
      LODWORD(v16) = sub_1A8DF4C;
      *v15 = v5;
      v15[1] = v3;
      HIDWORD(v16) = sub_1A8DE40;
      v22 = v15;
      v23 = v16;
      j_EntityInteraction::capture((int)v4, (int)&v22);
      if ( (_DWORD)v23 )
        ((void (*)(void))v23)();
    sub_21E94B4((void **)&v21, "action.interact.tame");
    j_EntityInteraction::setInteractText();
    v17 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v21 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
      else
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    result = 1;
  return result;
}
