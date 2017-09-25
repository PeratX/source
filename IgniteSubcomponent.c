

_DWORD *__fastcall IgniteSubcomponent::IgniteSubcomponent(_DWORD *result)
{
  *result = &off_271EBA0;
  return result;
}


void __fastcall IgniteSubcomponent::doOnHitEffect(__int64 this)
{
  int v1; // r4@1
  unsigned int v2; // r0@1
  int v3; // r6@3
  int *v4; // r5@3
  int v5; // r6@4
  int v6; // r5@4
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

  v15 = 0;
  v16 = 0;
  v17 = 1065353216;
  v18 = 0;
  LODWORD(this) = &v17;
  v1 = HIDWORD(this);
  v2 = sub_21E6254(*(double *)&this);
  v14 = v2;
  if ( v2 == 1 )
  {
    v19 = 0;
    v4 = &v19;
  }
  else
    if ( v2 >= 0x40000000 )
      sub_21E57F4();
    v3 = 4 * v2;
    v4 = (int *)j_operator new(4 * v2);
    j___aeabi_memclr4_0((int)v4, v3);
  ptr = v4;
  v5 = *(_DWORD *)(v1 + 16);
  v6 = *(_DWORD *)(*(_DWORD *)(v5 + 48) + 252);
  j_Entity::initParams(*(Entity **)(v1 + 16), (VariantParameterList *)&ptr);
  j_EntityDefinitionDescriptor::executeTrigger(
    *(EntityDefinitionDescriptor **)(v5 + 48),
    (Entity *)v5,
    (const DefinitionTrigger *)(v6 + 4),
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


void __fastcall IgniteSubcomponent::doOnHitEffect(__int64 this)
{
  IgniteSubcomponent::doOnHitEffect(this);
}
