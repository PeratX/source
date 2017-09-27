

void __fastcall CapacitorComponent::~CapacitorComponent(CapacitorComponent *this)
{
  CapacitorComponent *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2719990;
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_7((void *)v1);
}


_DWORD *__fastcall CapacitorComponent::CapacitorComponent(BaseCircuitComponent *a1)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)j_ProducerComponent::ProducerComponent(a1);
  *result = &off_2724EA0;
  return result;
}


signed __int64 __fastcall CapacitorComponent::getInstanceType(CapacitorComponent *this)
{
  return 1129530177LL;
}


signed int __fastcall CapacitorComponent::getPoweroutDirection(CapacitorComponent *this)
{
  return 6;
}


signed __int64 __fastcall CapacitorComponent::getBaseType(CapacitorComponent *this)
{
  return 1129530177LL;
}


void __fastcall CapacitorComponent::~CapacitorComponent(CapacitorComponent *this)
{
  CapacitorComponent::~CapacitorComponent(this);
}
