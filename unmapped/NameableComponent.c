

int __fastcall NameableComponent::initFromDefinition(int result)
{
  *(_BYTE *)(result + 4) = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)result + 48) + 356) + 57);
  return result;
}


signed int __fastcall NameableComponent::getInteraction(NameableComponent *this, Player *a2, EntityInteraction *a3)
{
  NameableComponent *v3; // r5@1
  EntityInteraction *v4; // r4@1
  Player *v5; // r6@1
  ItemInstance *v6; // r0@2
  ItemInstance *v7; // r7@2
  int v8; // r0@2
  bool v9; // zf@2
  _DWORD *v10; // r0@10
  __int64 v11; // r1@10
  void *v12; // r0@12
  signed int result; // r0@13
  unsigned int *v14; // r2@15
  signed int v15; // r1@17
  int v16; // [sp+4h] [bp-2Ch]@12
  _DWORD *v17; // [sp+8h] [bp-28h]@10
  __int64 v18; // [sp+10h] [bp-20h]@10

  v3 = this;
  v4 = a3;
  v5 = a2;
  if ( !*((_BYTE *)this + 4) )
    goto LABEL_25;
  v6 = (ItemInstance *)j_Player::getSelectedItem(a2);
  v7 = v6;
  v8 = *((_BYTE *)v6 + 15);
  v9 = v8 == 0;
  if ( v8 )
    v9 = *(_DWORD *)v7 == 0;
  if ( v9
    || j_ItemInstance::isNull(v7)
    || !*((_BYTE *)v7 + 14)
    || *(_DWORD *)v7 != Item::mNameTag
    || j_ItemInstance::hasCustomHoverName(v7) != 1 )
  {
LABEL_25:
    result = 0;
  }
  else
    if ( j_EntityInteraction::shouldCapture(v4) == 1 )
    {
      v10 = j_operator new(8u);
      LODWORD(v11) = sub_1A73574;
      *v10 = v5;
      v10[1] = v3;
      HIDWORD(v11) = sub_1A73450;
      v17 = v10;
      v18 = v11;
      j_EntityInteraction::capture((int)v4, (int)&v17);
      if ( (_DWORD)v18 )
        ((void (*)(void))v18)();
    }
    sub_21E94B4((void **)&v16, "action.interact.name");
    j_EntityInteraction::setInteractText();
    v12 = (void *)(v16 - 12);
    if ( (int *)(v16 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v16 - 4);
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
        j_j_j_j__ZdlPv_9(v12);
    result = 1;
  return result;
}


int __fastcall NameableComponent::NameableComponent(int result, int a2)
{
  *(_DWORD *)result = a2;
  *(_BYTE *)(result + 4) = 1;
  return result;
}


void __fastcall NameableComponent::nameEntity(Entity **a1, const void **a2)
{
  NameableComponent::nameEntity(a1, a2);
}


void __fastcall NameableComponent::nameEntity(Entity **a1, const void **a2)
{
  Entity **v2; // r6@1
  const void **v3; // r5@1
  double v4; // r0@1
  unsigned int v5; // r0@1
  int v6; // r7@3
  int *v7; // r4@3
  int v8; // r10@4
  int v9; // r11@4
  int v10; // r6@4
  int v11; // r7@4
  _DWORD *v12; // r5@5
  __int64 v13; // r8@6
  size_t v14; // r4@7
  int v15; // r4@14
  unsigned int *v16; // r2@16
  signed int v17; // r1@18
  void *v18; // r6@24
  int v19; // r1@24
  void *v20; // r0@24
  Entity *v21; // [sp+0h] [bp-48h]@4
  void *ptr; // [sp+4h] [bp-44h]@4
  unsigned int v23; // [sp+8h] [bp-40h]@1
  int v24; // [sp+Ch] [bp-3Ch]@1
  int v25; // [sp+10h] [bp-38h]@1
  signed int v26; // [sp+14h] [bp-34h]@1
  int v27; // [sp+18h] [bp-30h]@1
  int v28; // [sp+1Ch] [bp-2Ch]@27

  v2 = a1;
  v3 = a2;
  (*(void (**)(void))(*(_DWORD *)*a1 + 200))();
  (*(void (**)(void))(*(_DWORD *)*v2 + 184))();
  j_Entity::setPersistent(*v2);
  v24 = 0;
  v25 = 0;
  v26 = 1065353216;
  v27 = 0;
  LODWORD(v4) = &v26;
  v5 = sub_21E6254(v4);
  v23 = v5;
  if ( v5 == 1 )
  {
    v28 = 0;
    v7 = &v28;
  }
  else
    if ( v5 >= 0x40000000 )
      sub_21E57F4();
    v6 = 4 * v5;
    v7 = (int *)j_operator new(4 * v5);
    j___aeabi_memclr4_0((int)v7, v6);
  ptr = v7;
  j_Entity::initParams(*v2, (VariantParameterList *)&ptr);
  v21 = *v2;
  v8 = *((_DWORD *)*v2 + 12);
  v9 = *(_DWORD *)(v8 + 356);
  v10 = *(_QWORD *)(v9 + 4) >> 32;
  v11 = *(_QWORD *)(v9 + 4);
  if ( v11 == v10 )
LABEL_12:
    j_EntityDefinitionDescriptor::executeTrigger(
      (EntityDefinitionDescriptor *)v8,
      v21,
      (const DefinitionTrigger *)(v9 + 16),
      (const VariantParameterList *)&ptr);
    v12 = *v3;
    while ( 1 )
    {
      v13 = *(_QWORD *)v11;
      if ( (_DWORD)v13 != HIDWORD(v13) )
        break;
LABEL_11:
      v11 += 52;
      if ( v11 == v10 )
        goto LABEL_12;
    }
    v14 = *(v12 - 3);
    while ( *(_DWORD *)(*(_DWORD *)v13 - 12) != v14 || j_memcmp_0(*(const void **)v13, v12, v14) )
      LODWORD(v13) = v13 + 4;
      if ( HIDWORD(v13) == (_DWORD)v13 )
        goto LABEL_11;
      (const DefinitionTrigger *)(v11 + 12),
  v15 = v24;
  while ( v15 )
    v18 = (void *)v15;
    v19 = *(_DWORD *)(v15 + 8);
    v15 = *(_DWORD *)v15;
    v20 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
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
    j_operator delete(v18);
  j___aeabi_memclr4_0((int)ptr, 4 * v23);
  if ( ptr )
    if ( &v28 != ptr )
      j_operator delete(ptr);
}
