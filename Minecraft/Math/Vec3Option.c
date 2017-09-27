

int __fastcall Vec3Option::Vec3Option(int a1, unsigned int a2, unsigned int a3, int a4, int *a5, int *a6, int a7)
{
  int result; // r0@1

  result = Option::Option(a1, a2, a3, a4, a5, a6, 7);
  *(_DWORD *)result = &off_26D9AA4;
  *(_DWORD *)(result + 68) = *(_DWORD *)a7;
  *(_DWORD *)(result + 72) = *(_DWORD *)(a7 + 4);
  *(_DWORD *)(result + 76) = *(_DWORD *)(a7 + 8);
  *(_DWORD *)(result + 80) = *(_DWORD *)a7;
  *(_DWORD *)(result + 84) = *(_DWORD *)(a7 + 4);
  *(_DWORD *)(result + 88) = *(_DWORD *)(a7 + 8);
  return result;
}


int __fastcall Vec3Option::reset(Vec3Option *this)
{
  *((_DWORD *)this + 17) = *((_DWORD *)this + 20);
  *((_DWORD *)this + 18) = *((_DWORD *)this + 21);
  *((_DWORD *)this + 19) = *((_DWORD *)this + 22);
  return j_j_j__ZN6Option24notifyOptionValueChangedEv(this);
}


void __fastcall Vec3Option::~Vec3Option(Vec3Option *this)
{
  Vec3Option::~Vec3Option(this);
}


Option *__fastcall Vec3Option::set(Option *result, int _R1)
{
  char *v7; // r3@2

  __asm
  {
    VLDR            S0, [R1]
    VLDR            S2, [R0,#0x44]
    VCMPE.F32       S2, S0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( !_ZF )
    _R2 = *(_DWORD *)(_R1 + 4);
    v7 = (char *)result + 72;
LABEL_6:
    __asm { VSTR            S0, [R0,#0x44] }
    *(_DWORD *)v7 = _R2;
    *((_DWORD *)result + 19) = *(_DWORD *)(_R1 + 8);
    return (Option *)j_j_j__ZN6Option24notifyOptionValueChangedEv(result);
  __asm { VLDR            S2, [R1,#4] }
  v7 = (char *)result + 72;
    VLDR            S4, [R0,#0x48]
    VMOV            R2, S2
    VCMPE.F32       S4, S2
    goto LABEL_6;
    VLDR            S2, [R1,#8]
    VLDR            S4, [R0,#0x4C]
  return result;
}


void __fastcall Vec3Option::~Vec3Option(Vec3Option *this)
{
  Option *v1; // r0@1

  v1 = Option::~Option(this);
  j_j_j__ZdlPv_4((void *)v1);
}


_DWORD *__fastcall Vec3Option::save(int a1, int a2)
{
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1
  int v5; // [sp+Ch] [bp-Ch]@1

  v3 = *(_DWORD *)(a1 + 68);
  v4 = *(_DWORD *)(a1 + 72);
  v5 = *(_DWORD *)(a1 + 76);
  return Option::_save<glm::detail::tvec3<float>>((Option *)a1, a2, (int)&v3);
}


char *__fastcall Vec3Option::getValue(Vec3Option *this)
{
  return (char *)this + 68;
}


int __fastcall Vec3Option::load(Option *a1, const char **a2)
{
  Option *v2; // r4@1

  v2 = a1;
  Option::read(a2);
  return j_j_j__ZN6Option24notifyOptionValueChangedEv(v2);
}
