

__int64 __fastcall UIAnimAlpha::clone(UIAnimAlpha *this, int a2)
{
  UIAnimAlpha *v2; // r4@1
  int v3; // r6@1
  void *v4; // r5@1
  __int64 result; // r0@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0x3Cu);
  UIAnim::UIAnim((int)v4, v3);
  *(_DWORD *)v4 = &off_26DFC0C;
  result = *(_QWORD *)(v3 + 52);
  *(_QWORD *)((char *)v4 + 52) = result;
  *(_DWORD *)v2 = v4;
  return result;
}


void __fastcall UIAnimAlpha::~UIAnimAlpha(UIAnimAlpha *this)
{
  UIAnimAlpha::~UIAnimAlpha(this);
}


int __fastcall UIAnimAlpha::UIAnimAlpha(int a1, int a2, int a3, unsigned __int64 *a4)
{
  int v4; // r5@1
  int v5; // r6@1
  void *v11; // r0@1
  void *v13; // r0@2
  unsigned int *v15; // r2@4
  signed int v16; // r1@6
  unsigned int *v17; // r2@8
  signed int v18; // r1@10
  int v19; // [sp+8h] [bp-20h]@2
  int v20; // [sp+10h] [bp-18h]@1

  v4 = a3;
  v5 = a1;
  UIAnim::UIAnim(a1, 0, a3, a3, a4);
  *(_DWORD *)v5 = &off_26DFC0C;
  *(_DWORD *)(v5 + 52) = 1065353216;
  *(_DWORD *)(v5 + 56) = 1065353216;
  sub_119C884((void **)&v20, "from");
  _R0 = UIResolvedDef::getAsFloat(v4, (int **)&v20, 1065353216);
  __asm
  {
    VMOV            S0, R0
    VSTR            S0, [R6,#0x34]
  }
  v11 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v20 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v11);
  sub_119C884((void **)&v19, "to");
  _R0 = UIResolvedDef::getAsFloat(v4, (int **)&v19, 1065353216);
    VSTR            S0, [R6,#0x38]
  v13 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v19 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v13);
  return v5;
}


void __fastcall UIAnimAlpha::~UIAnimAlpha(UIAnimAlpha *this)
{
  UIAnimAlpha *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  void (*v6)(void); // r3@3
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  unsigned int *v9; // r2@10
  signed int v10; // r1@12

  v1 = this;
  *(_DWORD *)this = &off_26DFBE4;
  v2 = *((_DWORD *)this + 12);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  v4 = *((_DWORD *)v1 + 11);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  v6 = (void (*)(void))*((_DWORD *)v1 + 5);
  if ( v6 )
    v6();
  operator delete((void *)v1);
}


int __fastcall UIAnimAlpha::_reset(UIAnimAlpha *this, UIControl *a2)
{
  signed int v2; // r2@1

  v2 = 0;
  if ( *((_WORD *)this + 17) != 0xFFFF )
    v2 = 1;
  *((_DWORD *)this + 7) = v2;
  *((_DWORD *)this + 2) = 0;
  return j_j_j__ZN9UIControl8setAlphaEf(a2, *((float *)this + 13));
}


signed int __fastcall UIAnimAlpha::tick(UIAnimAlpha *this, UIControl *a2, float _R2)
{
  UIControl *v7; // r5@1
  float v9; // r0@8
  signed int result; // r0@8

  __asm
  {
    VMOV            S0, R2
    VLDR            S2, [R0,#8]
    VMOV.F32        S18, #1.0
    VLDR            S16, =0.0
    VADD.F32        S0, S2, S0
    VLDR            S2, =0.01
  }
  v7 = a2;
    VSTR            S0, [R0,#8]
    VLDR            S4, [R0,#0x28]
    VCMPE.F32       S4, S2
    VMRS            APSR_nzcv, FPSCR
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S2, S4 }
    VDIV.F32        S0, S0, S2
    VCMPE.F32       S0, #0.0
    VCMPE.F32       S0, S18
    __asm { VMOVGT.F32      S16, S0 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S16, S18 }
  if ( !*((_DWORD *)this + 5) )
    sub_119C8E4();
  __asm { VMOV            R3, S16 }
  v9 = COERCE_FLOAT((*((int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))this + 6))((char *)this + 12, *(_QWORD *)((char *)this + 52), *(_QWORD *)((char *)this + 52) >> 32, _R3));
  UIControl::setAlpha(v7, v9);
  __asm { VCMPE.F32       S16, S18 }
  result = 0;
  if ( _NF ^ _VF )
    result = 1;
  return result;
}
