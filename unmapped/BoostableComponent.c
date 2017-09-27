

int __fastcall BoostableComponent::tick(BoostableComponent *this)
{
  BoostableComponent *v1; // r4@1
  int v2; // r0@2
  AttributeInstance *v3; // r0@3
  unsigned int *v4; // r1@4
  unsigned int v5; // r2@6
  int v6; // r5@9
  unsigned int *v7; // r1@10
  unsigned int v8; // r0@12
  unsigned int *v9; // r6@16
  unsigned int v10; // r0@18
  int *v11; // r5@23 OVERLAPPED
  int *v12; // r6@23 OVERLAPPED
  int v13; // r1@27
  int v15; // [sp+0h] [bp-18h]@3
  int v16; // [sp+4h] [bp-14h]@3

  v1 = this;
  if ( *((_BYTE *)this + 4) )
  {
    v2 = *((_DWORD *)this + 2);
    *((_DWORD *)v1 + 2) = v2 + 1;
    if ( v2 > *((_DWORD *)v1 + 3) )
    {
      *((_BYTE *)v1 + 4) = 0;
      v3 = (AttributeInstance *)(*(int (**)(void))(**(_DWORD **)v1 + 1000))();
      v15 = BoostableComponent::SPEED_MODIFIER_BOOSTING;
      v16 = dword_27FD0E4;
      if ( dword_27FD0E4 )
      {
        v4 = (unsigned int *)(dword_27FD0E4 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 + 1, v4) );
        }
        else
          ++*v4;
      }
      AttributeInstance::removeModifier(v3, (const AttributeModifier **)&v15);
      v6 = v16;
      if ( v16 )
        v7 = (unsigned int *)(v16 + 4);
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
          v8 = (*v7)--;
        if ( v8 == 1 )
          v9 = (unsigned int *)(v6 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
          if ( &pthread_create )
          {
            __dmb();
            do
              v10 = __ldrex(v9);
            while ( __strex(v10 - 1, v9) );
          }
          else
            v10 = (*v9)--;
          if ( v10 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
      for ( *(_QWORD *)&v11 = *(_QWORD *)(*(_DWORD *)v1 + 476); v12 != v11; ++v11 )
        if ( Entity::hasCategory(*v11, 1) == 1 )
          (*(void (__cdecl **)(int))(*(_DWORD *)*v11 + 1480))(*v11);
    }
  }
  v13 = *((_BYTE *)v1 + 4);
  return (*(int (__cdecl **)(_DWORD))(**(_DWORD **)v1 + 796))(*(_DWORD *)v1);
}


signed int __fastcall BoostableComponent::_canUseItem(BoostableComponent *this, ItemInstance *a2)
{
  int *v2; // r0@1
  int *v3; // r2@1
  signed int result; // r0@2
  int v5; // r1@3
  int v6; // t1@4

  v3 = (int *)(*(_QWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 48) + 284) + 4) >> 32);
  v2 = (int *)*(_QWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 48) + 284) + 4);
  if ( v2 == v3 )
  {
    result = 0;
  }
  else
    v5 = *(_DWORD *)a2;
    do
    {
      v6 = *v2;
      v2 += 3;
      if ( v6 == v5 )
        return 1;
    }
    while ( v3 != v2 );
  return result;
}


int __fastcall BoostableComponent::initFromDefinition(int result)
{
  __asm { VMOV.F32        S0, #20.0 }
  _R1 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)result + 48) + 284);
  __asm
  {
    VLDR            S2, [R1,#0x10]
    VMUL.F32        S0, S2, S0
    VCVTR.S32.F32   S0, S0
    VSTR            S0, [R0,#0xC]
  }
  *(_DWORD *)(result + 16) = *(_DWORD *)(_R1 + 24);
  return result;
}


int __fastcall BoostableComponent::BoostableComponent(int result, int a2)
{
  *(_DWORD *)result = a2;
  *(_BYTE *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 1065353216;
  return result;
}


signed int __fastcall BoostableComponent::itemUseText(int a1, int a2, int *a3)
{
  int *v3; // r4@1
  signed int result; // r0@2
  void *v5; // r0@3
  void *v6; // r0@4
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  unsigned int *v9; // r2@10
  signed int v10; // r1@12
  int v11; // [sp+8h] [bp-28h]@3
  int v12; // [sp+Ch] [bp-24h]@3

  v3 = a3;
  if ( *(_BYTE *)(a1 + 4) )
  {
    result = 0;
  }
  else
    sub_21E94B4((void **)&v11, "action.interact.boost");
    I18n::get(&v12, (int **)&v11);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v12);
    v5 = (void *)(v12 - 12);
    if ( (int *)(v12 - 12) != &dword_28898C0 )
    {
      v7 = (unsigned int *)(v12 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v8 = __ldrex(v7);
        while ( __strex(v8 - 1, v7) );
      }
      else
        v8 = (*v7)--;
      if ( v8 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    }
    v6 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v9 = (unsigned int *)(v11 - 4);
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
        v10 = (*v9)--;
      if ( v10 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    result = 1;
  return result;
}


signed int __fastcall BoostableComponent::onItemInteract(BoostableComponent *this, ItemInstance *a2, Player *a3)
{
  Player *v3; // r4@1
  BoostableComponent *v4; // r6@1
  ItemInstance *v5; // r5@1
  _BOOL4 v6; // r0@1
  bool v7; // zf@1
  signed int result; // r0@4
  __int64 v9; // r0@5
  int v10; // t1@6

  v3 = a3;
  v4 = this;
  v5 = a2;
  v6 = Entity::isRiding(a3);
  v7 = v6 == 1;
  if ( v6 == 1 )
    v7 = *((_BYTE *)v4 + 4) == 0;
  if ( v7 )
  {
    v9 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v4 + 48) + 284) + 4);
    if ( (_DWORD)v9 == HIDWORD(v9) )
    {
      result = 0;
    }
    else
      while ( 1 )
      {
        v10 = *(_DWORD *)v9;
        LODWORD(v9) = v9 + 12;
        if ( v10 == *(_DWORD *)v5 )
          break;
        if ( HIDWORD(v9) == (_DWORD)v9 )
          return 0;
      }
      BoostableComponent::boost(v4, v3);
      BoostableComponent::_useItem(v4, v5, v3);
      result = 1;
  }
  else
    result = 0;
  return result;
}


void __fastcall BoostableComponent::boost(BoostableComponent *this, Player *a2)
{
  BoostableComponent::boost(this, a2);
}


void __fastcall BoostableComponent::boost(BoostableComponent *this, Player *a2)
{
  int *v2; // r4@1
  int v3; // r5@1
  void (__fastcall *v4)(int, signed int, char *, signed int); // r7@1
  int v5; // r0@1
  unsigned int *v6; // r1@2
  unsigned int v7; // r2@4
  signed int v8; // r5@7
  int v9; // r6@7
  unsigned int *v10; // r1@8
  unsigned int v11; // r0@10
  unsigned int *v12; // r7@14
  unsigned int v13; // r0@16
  AttributeInstance *v14; // r0@22
  unsigned int *v15; // r1@23
  unsigned int v16; // r2@25
  int v17; // r4@28
  unsigned int *v18; // r1@29
  unsigned int v19; // r0@31
  unsigned int *v20; // r5@35
  unsigned int v21; // r0@37
  int v22; // [sp+4h] [bp-34h]@22
  int v23; // [sp+8h] [bp-30h]@22
  int v24; // [sp+Ch] [bp-2Ch]@1
  int v25; // [sp+10h] [bp-28h]@1
  char v26; // [sp+14h] [bp-24h]@1

  v2 = (int *)this;
  *((_BYTE *)this + 4) = 1;
  *((_DWORD *)this + 2) = 0;
  (*(void (__fastcall **)(Player *, _DWORD))(*(_DWORD *)a2 + 1480))(a2, *((_DWORD *)this + 4));
  v3 = *v2;
  v4 = *(void (__fastcall **)(int, signed int, char *, signed int))(*(_DWORD *)*v2 + 556);
  Entity::getAttachPos((AABB *)&v26, *v2, 3, 0);
  v4(v3, 20, &v26, -1);
  v5 = (*(int (__cdecl **)(int))(*(_DWORD *)*v2 + 1000))(*v2);
  v24 = BoostableComponent::SPEED_MODIFIER_BOOSTING;
  v25 = dword_27FD0E4;
  if ( dword_27FD0E4 )
  {
    v6 = (unsigned int *)(dword_27FD0E4 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 + 1, v6) );
    }
    else
      ++*v6;
  }
  v8 = AttributeInstance::hasModifier(v5, &v24);
  v9 = v25;
  if ( v25 )
    v10 = (unsigned int *)(v25 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  if ( !v8 )
    v14 = (AttributeInstance *)(*(int (__cdecl **)(int))(*(_DWORD *)*v2 + 1000))(*v2);
    v22 = BoostableComponent::SPEED_MODIFIER_BOOSTING;
    v23 = dword_27FD0E4;
    if ( dword_27FD0E4 )
      v15 = (unsigned int *)(dword_27FD0E4 + 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 + 1, v15) );
        ++*v15;
    AttributeInstance::addModifier(v14, (const AttributeModifier **)&v22);
    v17 = v23;
    if ( v23 )
      v18 = (unsigned int *)(v23 + 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 == 1 )
        v20 = (unsigned int *)(v17 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 8))(v17);
        if ( &pthread_create )
        {
          __dmb();
          do
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
        }
        else
          v21 = (*v20)--;
        if ( v21 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v17 + 12))(v17);
}


int __fastcall BoostableComponent::_useItem(BoostableComponent *this, ItemInstance *a2, Player *a3)
{
  ItemInstance *v3; // r4@1
  int result; // r0@1
  int v5; // r5@1
  __int64 v6; // kr00_8@1
  int v7; // r1@2
  int v8; // r1@7
  int *v9; // r0@9
  int v10; // [sp+4h] [bp-5Ch]@9
  char v11; // [sp+8h] [bp-58h]@8
  int v12; // [sp+10h] [bp-50h]@16
  void *v13; // [sp+2Ch] [bp-34h]@14
  void *ptr; // [sp+3Ch] [bp-24h]@12

  v3 = a2;
  v6 = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 48) + 284) + 4);
  result = *(_QWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 48) + 284) + 4) >> 32;
  v5 = v6;
  if ( (_DWORD)v6 != result )
  {
    v7 = *(_DWORD *)a2;
    while ( *(_DWORD *)v5 != v7 )
    {
      v5 += 12;
      if ( result == v5 )
        return result;
    }
    ItemInstance::hurtAndBreak(v3, *(_DWORD *)(v5 + 8), a3);
    result = *((_BYTE *)v3 + 14);
    if ( !*((_BYTE *)v3 + 14) )
      v8 = *(_DWORD *)(v5 + 4);
      if ( v8 )
      {
        ItemInstance::ItemInstance((ItemInstance *)&v11, v8);
        if ( ItemInstance::hasUserData(v3) == 1 )
        {
          v9 = (int *)ItemInstance::getUserData(v3);
          CompoundTag::clone((CompoundTag *)&v10, *v9);
          ItemInstance::setUserData((int)&v11, &v10);
          if ( v10 )
            (*(void (**)(void))(*(_DWORD *)v10 + 4))();
          v10 = 0;
        }
        ItemInstance::operator=((int)v3, (int)&v11);
        if ( ptr )
          operator delete(ptr);
        if ( v13 )
          operator delete(v13);
        result = v12;
        if ( v12 )
          result = (*(int (**)(void))(*(_DWORD *)v12 + 4))();
      }
  }
  return result;
}
