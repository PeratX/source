

void __fastcall EnvironmentSensorComponent::tick(EnvironmentSensorComponent *this)
{
  EnvironmentSensorComponent::tick(this);
}


void __fastcall EnvironmentSensorComponent::tick(EnvironmentSensorComponent *this)
{
  Entity **v1; // r5@1
  double v2; // r0@1
  int v3; // r7@1
  unsigned int v4; // r0@1
  int v5; // r6@3
  int *v6; // r4@3
  const DefinitionTrigger *v7; // r4@4
  const DefinitionTrigger *i; // r6@4
  int v9; // r7@8
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  void *v12; // r6@18
  int v13; // r1@18
  void *v14; // r0@18
  void *ptr; // [sp+4h] [bp-44h]@4
  unsigned int v16; // [sp+8h] [bp-40h]@1
  int v17; // [sp+Ch] [bp-3Ch]@1
  int v18; // [sp+10h] [bp-38h]@1
  signed int v19; // [sp+14h] [bp-34h]@1
  int v20; // [sp+18h] [bp-30h]@1
  int v21; // [sp+1Ch] [bp-2Ch]@21

  v1 = (Entity **)this;
  HIDWORD(v2) = 10;
  v3 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 48) + 312);
  v17 = 0;
  v18 = 0;
  v19 = 1065353216;
  v20 = 0;
  LODWORD(v2) = &v19;
  v4 = sub_21E6254(v2);
  v16 = v4;
  if ( v4 == 1 )
  {
    v21 = 0;
    v6 = &v21;
  }
  else
    if ( v4 >= 0x40000000 )
      sub_21E57F4();
    v5 = 4 * v4;
    v6 = (int *)j_operator new(4 * v4);
    j___aeabi_memclr4_0((int)v6, v5);
  ptr = v6;
  j_Entity::initParams(*v1, (VariantParameterList *)&ptr);
  v7 = (const DefinitionTrigger *)(*(_QWORD *)(v3 + 4) >> 32);
  for ( i = (const DefinitionTrigger *)*(_QWORD *)(v3 + 4); v7 != i; i = (const DefinitionTrigger *)((char *)i + 40) )
    if ( j_DefinitionTrigger::canTrigger(i, *v1, (const VariantParameterList *)&ptr) == 1 )
      j_EntityDefinitionDescriptor::forceExecuteTrigger(
        *((EntityDefinitionDescriptor **)*v1 + 12),
        *v1,
        i,
        (const VariantParameterList *)&ptr);
  v9 = v17;
  while ( v9 )
    v12 = (void *)v9;
    v13 = *(_DWORD *)(v9 + 8);
    v9 = *(_DWORD *)v9;
    v14 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) != &dword_28898C0 )
    {
      v10 = (unsigned int *)(v13 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
      }
      else
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    }
    j_operator delete(v12);
  j___aeabi_memclr4_0((int)ptr, 4 * v16);
  if ( ptr )
    if ( &v21 != ptr )
      j_operator delete(ptr);
}


_DWORD *__fastcall EnvironmentSensorComponent::EnvironmentSensorComponent(_DWORD *result, int a2)
{
  *result = a2;
  return result;
}
