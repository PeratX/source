

char *__fastcall RequestTelemetry::getRequestDetails(RequestTelemetry *this)
{
  return (char *)this + 4;
}


int __fastcall RequestTelemetry::getResponseTime(RequestTelemetry *this, int _R1)
{
  int result; // r0@1

  __asm
  {
    VLDR            D0, [R0,#0x10]
    VLDR            D1, [R0,#0x18]
    VSUB.F64        D0, D1, D0
    VMOV            R0, R1, D0
  }
  return result;
}


int __fastcall RequestTelemetry::getRequestType(RequestTelemetry *this)
{
  return *(_DWORD *)this;
}


int __fastcall RequestTelemetry::setResponseComplete(RequestTelemetry *this, int a2)
{
  int result; // r0@1

  *((_DWORD *)this + 2) = a2;
  result = getTimeS();
  __asm
  {
    VMOV            D0, R0, R1
    VSTR            D0, [R4,#0x18]
  }
  return result;
}


int __fastcall RequestTelemetry::RequestTelemetry(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int result; // r0@1

  v3 = a1;
  *(_DWORD *)a1 = a2;
  sub_119C854((int *)(a1 + 4), a3);
  *(_DWORD *)(v3 + 8) = 0;
  _R0 = getTimeS();
  __asm { VMOV            D0, R0, R1 }
  result = v3;
  __asm { VSTR            D0, [R4,#0x10] }
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 28) = 0;
  return result;
}
