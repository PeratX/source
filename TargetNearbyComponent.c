

int __fastcall TargetNearbyComponent::TargetNearbyComponent(int result, int a2)
{
  signed int v2; // r2@1

  v2 = -1082130432;
  *(_QWORD *)result = *(_QWORD *)&a2;
  *(_WORD *)(result + 8) = 0;
  return result;
}


void __fastcall TargetNearbyComponent::tick(TargetNearbyComponent *this)
{
  TargetNearbyComponent::tick(this);
}


int __fastcall TargetNearbyComponent::initFromDefinition(int result)
{
  *(_DWORD *)(result + 4) = -1082130432;
  return result;
}


void __fastcall TargetNearbyComponent::tick(TargetNearbyComponent *this)
{
  TargetNearbyComponent *v1; // r5@1
  int v2; // r0@1
  int v3; // r8@1
  int v4; // r0@1
  double v6; // r0@2
  unsigned int v7; // r0@2
  int v8; // r6@4
  int *v9; // r4@4
  char v14; // r0@12
  char v15; // r0@14
  int v16; // r4@16
  unsigned int *v17; // r2@18
  signed int v18; // r1@20
  void *v19; // r6@26
  int v20; // r1@26
  void *v21; // r0@26
  void *ptr; // [sp+0h] [bp-60h]@5
  __int64 v24; // [sp+4h] [bp-5Ch]@2
  int v25; // [sp+Ch] [bp-54h]@2
  signed int v26; // [sp+10h] [bp-50h]@2
  int v27; // [sp+14h] [bp-4Ch]@2
  int v28; // [sp+18h] [bp-48h]@29

  v1 = this;
  v2 = *(_DWORD *)this;
  v3 = *(_DWORD *)(v2 + 48);
  v4 = j_Entity::getTarget((Entity *)v2);
  if ( v4 )
  {
    _R7 = j_AABB::distanceTo((AABB *)(*(_DWORD *)v1 + 264), (const AABB *)(v4 + 264));
    v25 = 0;
    v26 = 1065353216;
    v27 = 0;
    LODWORD(v6) = &v26;
    v7 = sub_21E6254(v6);
    v24 = v7;
    if ( v7 == 1 )
    {
      v28 = 0;
      v9 = &v28;
    }
    else
      if ( v7 >= 0x40000000 )
        sub_21E57F4();
      v8 = 4 * v7;
      v9 = (int *)j_operator new(4 * v7);
      j___aeabi_memclr4_0((int)v9, v8);
    ptr = v9;
    j_Entity::initParams(*(Entity **)v1, (VariantParameterList *)&ptr);
    _R4 = *(_DWORD *)(v3 + 416);
    __asm
      VMOV            S16, R7
      VLDR            S20, [R4,#4]
      VLDR            S18, [R4,#8]
      VCMPE.F32       S16, S20
      VMRS            APSR_nzcv, FPSCR
    if ( _NF ^ _VF && !*((_BYTE *)v1 + 8) )
      j_EntityDefinitionDescriptor::executeTrigger(
        (EntityDefinitionDescriptor *)v3,
        *(Entity **)v1,
        (const DefinitionTrigger *)(_R4 + 12),
        (const VariantParameterList *)&ptr);
      VCMPE.F32       S16, S18
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) && !*((_BYTE *)v1 + 9) )
        (const DefinitionTrigger *)(_R4 + 52),
    __asm { VCMPE.F32       S16, S20 }
    v14 = 0;
      VSTR            S16, [R5,#4]
    if ( _NF ^ _VF )
      v14 = 1;
    __asm { VMRS            APSR_nzcv, FPSCR }
    *((_BYTE *)v1 + 8) = v14;
    v15 = 0;
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v15 = 1;
    *((_BYTE *)v1 + 9) = v15;
    v16 = HIDWORD(v24);
    while ( v16 )
      v19 = (void *)v16;
      v20 = *(_DWORD *)(v16 + 8);
      v16 = *(_DWORD *)v16;
      v21 = (void *)(v20 - 12);
      if ( (int *)(v20 - 12) != &dword_28898C0 )
      {
        v17 = (unsigned int *)(v20 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
        }
        else
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
      }
      j_operator delete(v19);
    j___aeabi_memclr4_0((int)ptr, 4 * v24);
    HIDWORD(v24) = 0;
    _ZF = ptr == 0;
    if ( ptr )
      _ZF = &v28 == ptr;
    if ( !_ZF )
      j_operator delete(ptr);
  }
  else
    *((_DWORD *)v1 + 1) = -1082130432;
    *((_WORD *)v1 + 4) = 0;
}
