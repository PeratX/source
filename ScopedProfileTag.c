

ScopedProfileTag *__fastcall ScopedProfileTag::ScopedProfileTag(ScopedProfileTag *this, const char *a2, const char *a3, int a4)
{
  ScopedProfileTag *v4; // r7@1
  int v5; // r4@1
  const char *v6; // r5@1
  const char *v7; // r6@1
  PerfTimer *v8; // r0@1

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = (PerfTimer *)ThreadLocal<PerfTimer>::getLocal((int)&PerfTimer::test);
  PerfTimer::push(v8, v7, v6, v5);
  return v4;
}


ScopedProfileTag *__fastcall ScopedProfileTag::~ScopedProfileTag(ScopedProfileTag *this)
{
  ScopedProfileTag *v1; // r4@1
  _DWORD *v2; // r0@1
  int v3; // r5@1
  int v4; // r0@1
  int v11; // r6@3

  v1 = this;
  v2 = ThreadLocal<PerfTimer>::getLocal((int)&PerfTimer::test);
  v3 = (int)v2;
  v4 = v2[48];
  if ( v4 )
  {
    *(_DWORD *)(v3 + 192) = v4 - 1;
    _R6 = *(_DWORD *)(*(_DWORD *)(v3 + 4) - 4);
    _R0 = getTimeS();
    __asm
    {
      VMOV            D0, R0, R1
      VLDR            D1, [R6,#0x18]
      VSUB.F64        D0, D0, D1
      VSTR            D0, [R6,#0x10]
    }
    if ( !*(_DWORD *)(v3 + 192) )
      ++*(_DWORD *)(v3 + 4528);
      v11 = *(_DWORD *)(*(_DWORD *)(v3 + 4) - 4);
      PerfTimer::serialize((PerfTimer *)v3, *(const char ***)(*(_DWORD *)(v3 + 4) - 4));
      PerfTimer::releaseNodeChildren(v3, v11);
    *(_DWORD *)(v3 + 4) -= 4;
  }
  return v1;
}
