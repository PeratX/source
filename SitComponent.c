

signed int __fastcall SitComponent::getInteraction(SitComponent *this, Player *a2, EntityInteraction *a3)
{
  Entity *v3; // r6@1
  int *v4; // r5@1
  EntityInteraction *v5; // r4@1
  char *v6; // r7@1
  Level *v7; // r0@2
  _DWORD *v8; // r0@4
  __int64 v9; // r1@4
  void *v10; // r0@7
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  int v14; // [sp+4h] [bp-3Ch]@7
  int v15; // [sp+Ch] [bp-34h]@13
  _DWORD *v16; // [sp+10h] [bp-30h]@4
  __int64 v17; // [sp+18h] [bp-28h]@4
  __int64 v18; // [sp+20h] [bp-20h]@1

  v3 = a2;
  v4 = (int *)this;
  v5 = a3;
  v6 = j_Entity::getUniqueID(a2);
  j_Entity::getOwnerId((Entity *)&v18, *v4);
  if ( *(_QWORD *)v6 ^ v18 )
    return 0;
  v7 = (Level *)j_Entity::getLevel(v3);
  if ( !j_Level::isClientSide(v7) && j_EntityInteraction::shouldCapture(v5) == 1 )
  {
    v8 = j_operator new(4u);
    LODWORD(v9) = sub_1A8AEC0;
    *v8 = v4;
    HIDWORD(v9) = sub_1A8AE96;
    v16 = v8;
    v17 = v9;
    j_EntityInteraction::capture((int)v5, (int)&v16);
    if ( (_DWORD)v17 )
      ((void (*)(void))v17)();
  }
  if ( j_Entity::isSitting((Entity *)*v4) )
    sub_21E94B4((void **)&v14, "action.interact.stand");
    j_EntityInteraction::setInteractText();
    v10 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) != &dword_28898C0 )
    {
      v11 = (unsigned int *)(v14 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        goto LABEL_20;
      }
LABEL_19:
      v12 = (*v11)--;
LABEL_20:
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
      return 1;
    }
  else
    sub_21E94B4((void **)&v15, "action.interact.sit");
    v10 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v15 - 4);
      goto LABEL_19;
  return 1;
}


void __fastcall SitComponent::_sitEvent(SitComponent *this, int a2)
{
  Entity **v2; // r7@1
  int v3; // r8@1
  double v4; // r0@1
  int v5; // r5@1
  unsigned int v6; // r0@1
  int v7; // r6@3
  int *v8; // r4@3
  Entity *v9; // r1@4
  int v10; // r0@4
  int v11; // r7@7
  unsigned int *v12; // r2@9
  signed int v13; // r1@11
  void *v14; // r6@17
  int v15; // r1@17
  void *v16; // r0@17
  void *ptr; // [sp+4h] [bp-44h]@4
  unsigned int v18; // [sp+8h] [bp-40h]@1
  int v19; // [sp+Ch] [bp-3Ch]@1
  int v20; // [sp+10h] [bp-38h]@1
  signed int v21; // [sp+14h] [bp-34h]@1
  int v22; // [sp+18h] [bp-30h]@1
  int v23; // [sp+1Ch] [bp-2Ch]@20

  v2 = (Entity **)this;
  v3 = a2;
  HIDWORD(v4) = 10;
  v5 = *(_DWORD *)(*(_DWORD *)this + 48);
  v19 = 0;
  v20 = 0;
  v21 = 1065353216;
  v22 = 0;
  LODWORD(v4) = &v21;
  v6 = sub_21E6254(v4);
  v18 = v6;
  if ( v6 == 1 )
  {
    v23 = 0;
    v8 = &v23;
  }
  else
    if ( v6 >= 0x40000000 )
      sub_21E57F4();
    v7 = 4 * v6;
    v8 = (int *)j_operator new(4 * v6);
    j___aeabi_memclr4_0((int)v8, v7);
  ptr = v8;
  j_Entity::initParams(*v2, (VariantParameterList *)&ptr);
  v9 = *v2;
  v10 = *(_DWORD *)(v5 + 388);
  if ( v3 == 1 )
    j_EntityDefinitionDescriptor::executeTrigger(
      (EntityDefinitionDescriptor *)v5,
      v9,
      (const DefinitionTrigger *)(v10 + 4),
      (const VariantParameterList *)&ptr);
      (const DefinitionTrigger *)(v10 + 44),
  v11 = v19;
  while ( v11 )
    v14 = (void *)v11;
    v15 = *(_DWORD *)(v11 + 8);
    v11 = *(_DWORD *)v11;
    v16 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
    {
      v12 = (unsigned int *)(v15 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    }
    j_operator delete(v14);
  j___aeabi_memclr4_0((int)ptr, 4 * v18);
  if ( ptr )
    if ( &v23 != ptr )
      j_operator delete(ptr);
}


_DWORD *__fastcall SitComponent::SitComponent(_DWORD *result, int a2)
{
  *result = a2;
  return result;
}


void __fastcall SitComponent::_sitEvent(SitComponent *this, int a2)
{
  SitComponent::_sitEvent(this, a2);
}
