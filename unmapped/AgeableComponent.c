

void __fastcall AgeableComponent::addAdditionalSaveData(AgeableComponent *this, CompoundTag *a2)
{
  CompoundTag *v2; // r4@1
  AgeableComponent *v3; // r5@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v7, "Age");
  j_CompoundTag::putInt((int)v2, (const void **)&v7, *((_DWORD *)v3 + 1));
  v4 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
}


void __fastcall AgeableComponent::addAdditionalSaveData(AgeableComponent *this, CompoundTag *a2)
{
  AgeableComponent::addAdditionalSaveData(this, a2);
}


void __fastcall AgeableComponent::readAdditionalSaveData(AgeableComponent *this, const CompoundTag *a2)
{
  AgeableComponent::readAdditionalSaveData(this, a2);
}


int __fastcall AgeableComponent::isBaby(AgeableComponent *this)
{
  return *((_DWORD *)this + 1) >> 31;
}


signed int __fastcall AgeableComponent::getInteraction(AgeableComponent *this, Player *a2, EntityInteraction *a3)
{
  Player *v3; // r6@1
  Entity **v4; // r5@1
  EntityInteraction *v5; // r8@1
  ItemInstance *v6; // r0@1
  ItemInstance *v7; // r7@1
  int v8; // r0@1
  _DWORD *v14; // r1@8
  _DWORD *v15; // r4@8
  signed int result; // r0@10
  int v17; // r7@14
  _DWORD *v18; // r0@14
  __int64 v19; // r1@14
  void *v20; // r0@16
  unsigned int *v21; // r2@19
  signed int v22; // r1@21
  int v23; // [sp+4h] [bp-34h]@16
  _DWORD *v24; // [sp+8h] [bp-30h]@14
  __int64 v25; // [sp+10h] [bp-28h]@14

  v3 = a2;
  v4 = (Entity **)this;
  v5 = a3;
  v6 = (ItemInstance *)j_Player::getSelectedItem(a2);
  v7 = v6;
  v8 = *((_BYTE *)v6 + 15);
  _ZF = v8 == 0;
  if ( v8 )
    _ZF = *(_DWORD *)v7 == 0;
  if ( _ZF )
    goto LABEL_29;
  if ( j_ItemInstance::isNull(v7) )
  if ( !*((_BYTE *)v7 + 14) )
  if ( j_Entity::isAngry(*v4) )
  __asm { VMOV.F32        S0, #-1.0 }
  _R9 = *(_DWORD *)(*((_DWORD *)*v4 + 12) + 276);
  __asm
  {
    VLDR            S2, [R9,#4]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  v14 = (_DWORD *)(*(_QWORD *)(_R9 + 8) >> 32);
  v15 = (_DWORD *)*(_QWORD *)(_R9 + 8);
  if ( v15 != v14 )
    while ( *v15 != *(_DWORD *)v7 )
    {
      v15 += 2;
      result = 0;
      if ( v14 == v15 )
        return result;
    }
  if ( v15 == v14 )
LABEL_29:
    result = 0;
  else
    if ( j_EntityInteraction::shouldCapture(v5) == 1 )
      v17 = *(_DWORD *)(_R9 + 4);
      v18 = j_operator new(0x10u);
      LODWORD(v19) = sub_1A5AAB2;
      *v18 = v3;
      v18[1] = v4;
      HIDWORD(v19) = sub_1A5A9F0;
      v18[2] = v17;
      v18[3] = v15;
      v24 = v18;
      v25 = v19;
      j_EntityInteraction::capture((int)v5, (int)&v24);
      if ( (_DWORD)v25 )
        ((void (*)(void))v25)();
    sub_21E94B4((void **)&v23, "action.interact.feed");
    j_EntityInteraction::setInteractText();
    v20 = (void *)(v23 - 12);
    if ( (int *)(v23 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v23 - 4);
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
        j_j_j_j__ZdlPv_9(v20);
    result = 1;
  return result;
}


void __fastcall AgeableComponent::setAge(AgeableComponent *this, int a2)
{
  AgeableComponent::setAge(this, a2);
}


unsigned int __fastcall AgeableComponent::initFromDefinition(AgeableComponent *this)
{
  int v1; // r1@1 OVERLAPPED
  signed int v2; // r2@1 OVERLAPPED
  signed int v9; // r3@3
  signed int v10; // r0@3

  *(_QWORD *)&v1 = *(_QWORD *)this;
  __asm
  {
    VMOV.F32        S0, #-20.0
    VMOV.F32        S4, #-1.0
  }
  _R3 = *(_DWORD *)(*(_DWORD *)(*(_QWORD *)this + 48) + 276);
    VLDR            S2, [R3,#4]
    VMUL.F32        S0, S2, S0
    VCMPE.F32       S2, S4
    VCVTR.S32.F32   S0, S0
    VMOV            R3, S0
  if ( (signed int)(*(_QWORD *)this >> 32) < _R3 )
    v2 = _R3;
  __asm { VMRS            APSR_nzcv, FPSCR }
  v9 = 0;
  *((_DWORD *)this + 1) = v2;
  v10 = 0;
  if ( _ZF )
    v9 = 1;
  if ( v2 < 0 )
    v10 = 1;
  return j_j_j__ZN6Entity13setStatusFlagE11EntityFlagsb_1(v1, 11, v10 | v9);
}


void __fastcall AgeableComponent::readAdditionalSaveData(AgeableComponent *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  AgeableComponent *v3; // r4@1
  int v4; // r0@1
  void *v5; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v8, "Age");
  v4 = j_CompoundTag::getInt((int)v2, (const void **)&v8);
  j_AgeableComponent::setAge(v3, v4);
  v5 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
}


_QWORD *__fastcall AgeableComponent::AgeableComponent(_QWORD *result, int a2)
{
  unsigned int v2; // r2@1

  v2 = 2147483648;
  *result = *(_QWORD *)&a2;
  return result;
}


void __fastcall AgeableComponent::setAge(AgeableComponent *this, int a2)
{
  AgeableComponent *v2; // r8@1
  int v3; // r11@1
  __int64 v4; // r0@1
  int v5; // r9@3
  int v9; // r2@3
  double v11; // r0@5
  unsigned int v12; // r0@6
  int v13; // r6@8
  int *v14; // r7@8
  int v15; // r7@9
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  void *v18; // r6@23
  int v19; // r1@23
  void *v20; // r0@23
  void *ptr; // [sp+0h] [bp-58h]@9
  unsigned int v23; // [sp+4h] [bp-54h]@6
  int v24; // [sp+8h] [bp-50h]@6
  int v25; // [sp+Ch] [bp-4Ch]@6
  signed int v26; // [sp+10h] [bp-48h]@6
  int v27; // [sp+14h] [bp-44h]@6
  int v28; // [sp+18h] [bp-40h]@26

  v2 = this;
  v3 = a2;
  v4 = *(_QWORD *)this;
  if ( v3 < 0 || SHIDWORD(v4) > -1 )
  {
    if ( v3 <= -1 && SHIDWORD(v4) >= 0 )
      j_Entity::setStatusFlag(v4, 11, 1);
  }
  else
    v5 = *(_DWORD *)(v4 + 48);
    __asm { VMOV.F32        S16, #-1.0 }
    v9 = 0;
    _R10 = *(_DWORD *)(v5 + 276);
    __asm
    {
      VLDR            S18, [R10,#4]
      VCMPE.F32       S18, S16
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _ZF )
      v9 = 1;
    j_Entity::setStatusFlag(v4, 11, v9);
    if ( !_ZF )
      v24 = 0;
      v25 = 0;
      v26 = 1065353216;
      v27 = 0;
      LODWORD(v11) = &v26;
      v12 = sub_21E6254(v11);
      v23 = v12;
      if ( v12 == 1 )
      {
        v14 = &v28;
        v28 = 0;
      }
      else
        if ( v12 >= 0x40000000 )
          sub_21E57F4();
        v13 = 4 * v12;
        v14 = (int *)j_operator new(4 * v12);
        j___aeabi_memclr4_0((int)v14, v13);
      ptr = v14;
      j_Entity::initParams(*(Entity **)v2, (VariantParameterList *)&ptr);
      j_EntityDefinitionDescriptor::executeTrigger(
        (EntityDefinitionDescriptor *)v5,
        *(Entity **)v2,
        (const DefinitionTrigger *)(_R10 + 20),
        (const VariantParameterList *)&ptr);
      v15 = v24;
      while ( v15 )
        v18 = (void *)v15;
        v19 = *(_DWORD *)(v15 + 8);
        v15 = *(_DWORD *)v15;
        v20 = (void *)(v19 - 12);
        if ( (int *)(v19 - 12) != &dword_28898C0 )
        {
          v16 = (unsigned int *)(v19 - 4);
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
            j_j_j_j__ZdlPv_9(v20);
        }
        j_operator delete(v18);
      j___aeabi_memclr4_0((int)ptr, 4 * v23);
      _ZF = ptr == 0;
      if ( ptr )
        _ZF = &v28 == ptr;
      if ( !_ZF )
        j_operator delete(ptr);
  *((_DWORD *)v2 + 1) = v3;
}


void __fastcall AgeableComponent::tick(AgeableComponent *this)
{
  signed int v1; // r1@1

  v1 = *((_DWORD *)this + 1);
  if ( v1 > -1 )
  {
    if ( v1 >= 1 )
      j_j_j__ZN16AgeableComponent6setAgeEi_0(this, v1 - 1);
  }
  else
    j_j_j__ZN16AgeableComponent6setAgeEi_0(this, v1 + 1);
}


void __fastcall AgeableComponent::tick(AgeableComponent *this)
{
  AgeableComponent::tick(this);
}
