

signed __int64 __fastcall PulseCapacitor::getInstanceType(PulseCapacitor *this)
{
  return 1296257091LL;
}


int __fastcall PulseCapacitor::setStrength(int result, int a2)
{
  *(_DWORD *)(result + 44) = a2;
  *(_BYTE *)(result + 51) = a2 != 0;
  return result;
}


int __fastcall PulseCapacitor::evaluate(PulseCapacitor *this, CircuitSystem *a2, const BlockPos *a3)
{
  PulseCapacitor *v3; // r4@1
  int result; // r0@1

  v3 = this;
  j_ProducerComponent::evaluate(this, a2, a3);
  result = *((_BYTE *)v3 + 51);
  *((_BYTE *)v3 + 50) = result;
  *((_BYTE *)v3 + 51) = 0;
  *((_DWORD *)v3 + 11) = 0;
  return result;
}


int __fastcall PulseCapacitor::canConsumerPower(PulseCapacitor *this)
{
  return 0;
}


void __fastcall PulseCapacitor::~PulseCapacitor(PulseCapacitor *this)
{
  PulseCapacitor *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2719990;
  v2 = (void *)*((_DWORD *)this + 1);
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall PulseCapacitor::~PulseCapacitor(PulseCapacitor *this)
{
  PulseCapacitor::~PulseCapacitor(this);
}


int __fastcall PulseCapacitor::getPoweroutDirection(PulseCapacitor *this)
{
  return Facing::OPPOSITE_FACING[(*(int (**)(void))(*(_DWORD *)this + 12))()];
}


int __fastcall PulseCapacitor::consumePowerAnyDirection(PulseCapacitor *this)
{
  return 0;
}


signed int __fastcall PulseCapacitor::allowConnection(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r1@1
  signed int result; // r0@1

  v3 = *(_BYTE *)(a3 + 16);
  v4 = Facing::OPPOSITE_FACING[(*(int (**)(void))(*(_DWORD *)a1 + 12))()];
  result = 0;
  if ( v3 == v4 )
    result = 1;
  return result;
}


_DWORD *__fastcall PulseCapacitor::PulseCapacitor(CapacitorComponent *a1)
{
  _DWORD *result; // r0@1

  result = j_CapacitorComponent::CapacitorComponent(a1);
  *result = &off_2719C6C;
  *((_WORD *)result + 25) = 0;
  return result;
}
