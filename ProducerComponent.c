

int __fastcall ProducerComponent::allowAttachments(int result, bool a2)
{
  *(_BYTE *)(result + 48) = a2;
  return result;
}


void __fastcall ProducerComponent::~ProducerComponent(ProducerComponent *this)
{
  ProducerComponent::~ProducerComponent(this);
}


int __fastcall ProducerComponent::setStopPower(int result, bool a2)
{
  *(_BYTE *)(result + 49) = a2;
  return result;
}


void __fastcall ProducerComponent::~ProducerComponent(ProducerComponent *this)
{
  ProducerComponent *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2719990;
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall ProducerComponent::ProducerComponent(BaseCircuitComponent *a1)
{
  int result; // r0@1

  result = j_BaseCircuitComponent::BaseCircuitComponent(a1);
  *(_DWORD *)result = &off_2719C04;
  *(_DWORD *)(result + 44) = 0;
  *(_WORD *)(result + 48) = 0;
  return result;
}


signed __int64 __fastcall ProducerComponent::getBaseType(ProducerComponent *this)
{
  return 1129533507LL;
}


int __fastcall ProducerComponent::evaluate(ProducerComponent *this, CircuitSystem *a2, const BlockPos *a3)
{
  *((_DWORD *)this + 9) = *((_DWORD *)this + 11);
  return 0;
}


int __fastcall ProducerComponent::setStrength(int result, int a2)
{
  *(_DWORD *)(result + 44) = a2;
  if ( *(_BYTE *)(result + 17) )
    *(_DWORD *)(result + 36) = a2;
  return result;
}


signed __int64 __fastcall ProducerComponent::getInstanceType(ProducerComponent *this)
{
  return 1129533507LL;
}


signed int __fastcall ProducerComponent::allowConnection(int a1, int a2, int a3)
{
  signed int result; // r0@2
  __int64 v4; // r0@3

  if ( *(_BYTE *)(a1 + 48) )
  {
    result = 1;
  }
  else
    LODWORD(v4) = (*(int (**)(void))(**(_DWORD **)a3 + 40))();
    result = v4 != 1129533506;
  return result;
}
