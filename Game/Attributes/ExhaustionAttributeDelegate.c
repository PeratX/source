

void __fastcall ExhaustionAttributeDelegate::~ExhaustionAttributeDelegate(ExhaustionAttributeDelegate *this)
{
  AttributeInstanceDelegate *v1; // r0@1

  v1 = j_AttributeInstanceDelegate::~AttributeInstanceDelegate(this);
  j_j_j__ZdlPv_7((void *)v1);
}


_DWORD *__fastcall ExhaustionAttributeDelegate::ExhaustionAttributeDelegate(AttributeInstanceDelegate *a1, const AttributeInstance *a2)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)j_AttributeInstanceDelegate::AttributeInstanceDelegate(a1, a2);
  *result = &off_271A3B0;
  return result;
}


char *__fastcall ExhaustionAttributeDelegate::tick(ExhaustionAttributeDelegate *this)
{
  char *result; // r0@1
  AttributeInstance *v2; // r4@1
  __int64 v3; // r2@2
  __int64 i; // r4@3
  int v11; // r1@4
  int v12; // [sp+0h] [bp-48h]@3

  result = (char *)j_AttributeInstanceDelegate::_getMutableInstance(this);
  v2 = (AttributeInstance *)result;
  if ( result )
  {
    result = (char *)j_AttributeInstance::getCurrentValue((AttributeInstance *)result);
    __asm { VMOV            S2, R0 }
    _R1 = &FoodConstants::MAX_EXHAUSTION;
    __asm
    {
      VLDR            S0, [R1]
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( !(_NF ^ _VF) )
      __asm { VMOV            R0, S0 }
      LODWORD(v3) = 9;
      j_InstantaneousAttributeBuff::InstantaneousAttributeBuff((int)&v12, _R0 ^ 0x80000000, v3);
      j_AttributeInstance::addBuff(v2, (const AttributeBuff *)&v12);
      j_InstantaneousAttributeBuff::~InstantaneousAttributeBuff((InstantaneousAttributeBuff *)&v12);
      result = j_AttributeInstance::getListeners(v2);
      for ( i = *(_QWORD *)result; HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 8 )
      {
        result = (char *)j_AttributeInstanceHandle::getMutableInstance((AttributeInstanceHandle *)i);
        if ( result )
          result = (char *)j_AttributeInstance::notify((AttributeInstance *)result, v11, 0LL);
      }
  }
  return result;
}


void __fastcall ExhaustionAttributeDelegate::~ExhaustionAttributeDelegate(ExhaustionAttributeDelegate *this)
{
  ExhaustionAttributeDelegate::~ExhaustionAttributeDelegate(this);
}
