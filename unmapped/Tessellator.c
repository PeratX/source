

int __fastcall Tessellator::quad(Tessellator *this, unsigned int a2, int a3)
{
  int result; // r0@2

  if ( a3 )
    result = Tessellator::quad(this, a2 + 3, a2 + 2, a2 + 1, a2);
  else
    result = Tessellator::quad(this, a2, a2 + 1, a2 + 2, a2 + 3);
  return result;
}


int __fastcall Tessellator::addOffset(int result, const Vec3 *_R1)
{
  __asm
  {
    VLDR            S0, [R1]
    VLDR            S2, [R0,#0x44]
    VADD.F32        S0, S2, S0
    VSTR            S0, [R0,#0x44]
    VLDR            S0, [R1,#4]
    VLDR            S2, [R0,#0x48]
    VSTR            S0, [R0,#0x48]
    VLDR            S0, [R1,#8]
    VLDR            S2, [R0,#0x4C]
    VSTR            S0, [R0,#0x4C]
  }
  return result;
}


int __fastcall Tessellator::clear(int result)
{
  int v1; // r3@1
  int v2; // r1@1

  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 256) = 0;
  *(_DWORD *)(result + 260) = 0;
  *(_BYTE *)(result + 237) = 0;
  *(_BYTE *)(result + 264) = 0;
  *(_BYTE *)(result + 40) = 0;
  *(_DWORD *)(result + 32) = *(_DWORD *)(result + 28);
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  v1 = mce::VertexFormat::EMPTY;
  v2 = unk_27E8CB0;
  *(_BYTE *)(result + 60) = unk_27E8CB4;
  *(_DWORD *)(result + 56) = v2;
  *(_DWORD *)(result + 52) = v1;
  return result;
}


int __fastcall Tessellator::tex1(int result, __int64 *a2)
{
  _KR00_8 = *a2;
  __asm
  {
    VMOV.F32        S6, #1.0
    VLDR            S2, =0.0
    VMOV            S4, R1
    VMOV            S0, R2
    VMOV.F32        S8, S2
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S4, #0.0
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S8, S0 }
    VCMPE.F32       S0, S6
    __asm { VMOVGT.F32      S2, S4 }
    VCMPE.F32       S4, S6
    __asm { VMOVGT.F32      S8, S6 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S2, S6 }
  *(_QWORD *)(result + 112) = _KR00_8;
    VSTR            S8, [R0,#0x70]
    VSTR            S2, [R0,#0x74]
  if ( !*(_DWORD *)result )
    result = j_j_j__ZN3mce12VertexFormat11enableFieldENS_11VertexFieldE((_BYTE *)(result + 52), 4);
  return result;
}


int __fastcall Tessellator::setOffset(int result, const Vec3 *a2)
{
  *(_DWORD *)(result + 68) = *(_DWORD *)a2;
  *(_DWORD *)(result + 72) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 76) = *((_DWORD *)a2 + 2);
  return result;
}


signed int __fastcall Tessellator::vertexUV(Tessellator *this, const Vec3 *a2, __int64 _R2)
{
  Tessellator *v7; // r4@1
  const Vec3 *v8; // r5@1

  __asm
  {
    VMOV            S2, R2
    VLDR            S0, =0.0
    VMOV            S4, R3
  }
  v7 = this;
  __asm { VCMPE.F32       S2, #0.0 }
  v8 = a2;
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S8, S0
    VCMPE.F32       S4, #0.0
    VMOV.F32        S6, #1.0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S8, S2 }
    VCMPE.F32       S2, S6
    __asm { VMOVGT.F32      S0, S4 }
    VCMPE.F32       S4, S6
    __asm { VMOVGT.F32      S8, S6 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S0, S6 }
  *((_QWORD *)this + 13) = _R2;
    VSTR            S8, [R4,#0x68]
    VSTR            S0, [R4,#0x6C]
  if ( !*(_DWORD *)this )
    mce::VertexFormat::enableField((_BYTE *)this + 52, 3);
  return j_j_j__ZN11Tessellator6vertexEfff(v7, *(float *)v8, *((float *)v8 + 1), *((float *)v8 + 2));
}


int __fastcall Tessellator::color(int result, const Color *_R1)
{
  int v8; // r1@2
  int v10; // r1@2

  if ( !*(_BYTE *)(result + 236) )
  {
    __asm
    {
      VLDR            S0, =255.0
      VLDR            S6, [R1,#8]
      VLDR            S2, [R1]
      VLDR            S4, [R1,#4]
      VMUL.F32        S6, S6, S0
      VLDR            S8, [R1,#0xC]
      VMUL.F32        S2, S2, S0
      VMUL.F32        S4, S4, S0
      VMUL.F32        S0, S8, S0
      VCVTR.U32.F32   S6, S6
      VCVTR.U32.F32   S2, S2
      VCVTR.U32.F32   S4, S4
      VCVTR.U32.F32   S0, S0
      VMOV            R1, S6
      VMOV            R2, S0
    }
    v8 = (_R1 << 16) | (_R2 << 24);
    __asm { VMOV            R2, S2 }
    v10 = v8 | _R2;
    __asm { VMOV            R2, S4 }
    *(_DWORD *)(result + 128) = v10 | (_R2 << 8);
    if ( !*(_DWORD *)result )
      result = j_j_j__ZN3mce12VertexFormat11enableFieldENS_11VertexFieldE((_BYTE *)(result + 52), 1);
  }
  return result;
}


signed int __fastcall Tessellator::vertexUV(Tessellator *this, float a2, float a3, float a4, float a5, float a6)
{
  Tessellator *v10; // r7@1
  float v11; // r4@1
  float v12; // r5@1
  float v13; // r6@1

  __asm
  {
    VLDR            S0, [SP,#0x18+arg_0]
    VMOV.F32        S6, #1.0
    VLDR            S2, =0.0
  }
  v10 = this;
    VCMPE.F32       S0, #0.0
    VLDR            S4, [SP,#0x18+arg_4]
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S8, S2
    VCMPE.F32       S4, #0.0
  v11 = a4;
  v12 = a3;
  v13 = a2;
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S8, S0 }
    VCMPE.F32       S0, S6
    __asm { VMOVGT.F32      S2, S4 }
    VCMPE.F32       S4, S6
    __asm { VMOVGT.F32      S8, S6 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S2, S6 }
    VSTR            S0, [R7,#0x68]
    VSTR            S4, [R7,#0x6C]
    VSTR            S8, [R7,#0x68]
    VSTR            S2, [R7,#0x6C]
  if ( !*(_DWORD *)this )
    mce::VertexFormat::enableField((_BYTE *)this + 52, 3);
  return j_j_j__ZN11Tessellator6vertexEfff(v10, v13, v12, v11);
}


int __fastcall Tessellator::begin(int a1, char a2, int a3, char a4)
{
  int v4; // r4@1
  int v5; // r5@1
  int result; // r0@1
  bool v7; // zf@1
  int v8; // r6@5
  int v9; // r0@5

  v4 = a1;
  v5 = a3;
  result = *(_BYTE *)(a1 + 264);
  v7 = result == 0;
  if ( !result )
  {
    result = *(_BYTE *)(v4 + 237);
    v7 = result == 0;
  }
  if ( v7 )
    *(_DWORD *)(v4 + 48) = 0;
    *(_DWORD *)(v4 + 256) = 0;
    *(_DWORD *)(v4 + 260) = 0;
    *(_BYTE *)(v4 + 237) = 0;
    *(_BYTE *)(v4 + 264) = 0;
    *(_BYTE *)(v4 + 40) = 0;
    *(_DWORD *)(v4 + 32) = *(_DWORD *)(v4 + 28);
    *(_DWORD *)v4 = 0;
    *(_DWORD *)(v4 + 4) = 0;
    *(_DWORD *)(v4 + 8) = 0;
    v8 = mce::VertexFormat::EMPTY;
    v9 = unk_27E8CB0;
    *(_BYTE *)(v4 + 60) = unk_27E8CB4;
    *(_DWORD *)(v4 + 56) = v9;
    *(_DWORD *)(v4 + 52) = v8;
    *(_BYTE *)(v4 + 267) = a2;
    *(_BYTE *)(v4 + 236) = 0;
    *(_BYTE *)(v4 + 264) = 1;
    *(_BYTE *)(v4 + 265) = a4;
    if ( *(_BYTE *)(v4 + 238) )
      mce::VertexFormat::disableHalfFloats((mce::VertexFormat *)(v4 + 52));
    mce::VertexFormat::enableField((_BYTE *)(v4 + 52), 0);
    *(_DWORD *)(v4 + 44) = 0;
    *(_DWORD *)(v4 + 64) = v5;
    *(_DWORD *)(v4 + 164) = 0;
    result = *(_DWORD *)(v4 + 140);
    *(_DWORD *)(v4 + 144) = result;
  return result;
}


int __fastcall Tessellator::scale2d(int result, float _R1, float _R2)
{
  __asm
  {
    VMOV            S0, R1
    VLDR            S2, [R0,#0x5C]
    VMUL.F32        S0, S2, S0
    VMOV            S2, R2
    VSTR            S0, [R0,#0x5C]
    VLDR            S0, [R0,#0x60]
    VMUL.F32        S0, S0, S2
    VSTR            S0, [R0,#0x60]
  }
  return result;
}


int __fastcall Tessellator::tilt(int result)
{
  *(_BYTE *)(result + 169) = 1;
  return result;
}


int __fastcall Tessellator::addRotationOffset(Tessellator *a1, int a2, const Vec3 *a3)
{
  Tessellator *v3; // r5@1
  const Vec3 *v4; // r4@1
  float *v5; // r0@1
  int v7; // [sp+4h] [bp-14h]@1

  v3 = a1;
  v4 = a3;
  v7 = a2;
  v5 = (float *)mce::Radian::asFloat((mce::Radian *)&v7);
  return Tessellator::addRotationOffset(v3, *v5, v4);
}


int __fastcall Tessellator::color(int result, int a2, int a3, int a4, int a5)
{
  signed int v5; // r4@2
  __int16 v6; // r1@6
  int v7; // lr@6
  int v11; // r2@8
  signed int v12; // r1@8
  int v14; // r1@12
  int v17; // r1@16
  signed int v18; // r2@16

  if ( !*(_BYTE *)(result + 236) )
  {
    LOBYTE(v5) = 0;
    if ( a2 > 0 )
      LOBYTE(v5) = a2;
    v5 = (unsigned __int8)v5;
    if ( a2 > 255 )
      v5 = 255;
    v6 = 0;
    v7 = 0;
    if ( a3 > 0 )
      v6 = a3;
    _VF = __OFSUB__(a3, 255);
    _ZF = a3 == 255;
    _NF = a3 - 255 < 0;
    v11 = 0;
    v12 = (unsigned __int16)(v6 << 8);
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v12 = 65280;
    if ( a4 > 0 )
      v11 = a4;
    _R2 = v11 << 16;
    v14 = v12 | v5;
    __asm { UXTB16.W        R2, R2 }
      _R2 = 16711680;
    if ( a5 > 0 )
      v7 = a5;
    v17 = v14 | _R2;
    v18 = v7 << 24;
    if ( a5 > 255 )
      v18 = -16777216;
    *(_DWORD *)(result + 128) = v17 | v18;
    if ( !*(_DWORD *)result )
      result = j_j_j__ZN3mce12VertexFormat11enableFieldENS_11VertexFieldE((_BYTE *)(result + 52), 1);
  }
  return result;
}


int __fastcall Tessellator::quad(Tessellator *this, int a2)
{
  int v2; // r3@1
  int result; // r0@2

  v2 = *((_DWORD *)this + 65);
  if ( a2 )
    result = Tessellator::quad(this, v2 - 1, v2 - 2, v2 - 3, v2 - 4);
  else
    result = Tessellator::quad(this, v2 - 4, v2 - 3, v2 - 2, v2 - 1);
  return result;
}


int __fastcall Tessellator::resetTessellateIntercept(int result)
{
  int v1; // r4@1
  int (*v2)(void); // r3@1

  v1 = result;
  *(_BYTE *)(result + 238) = 0;
  v2 = *(int (**)(void))(result + 248);
  if ( v2 )
  {
    result = v2();
    *(_DWORD *)(v1 + 248) = 0;
    *(_DWORD *)(v1 + 252) = 0;
  }
  return result;
}


int __fastcall Tessellator::CurrentVertexPointers::nextVertex(Tessellator::CurrentVertexPointers *this)
{
  Tessellator::CurrentVertexPointers *v1; // r4@1
  int v2; // r5@1
  int v3; // r5@1
  int v4; // r0@2
  int v5; // r5@4
  int v6; // r0@5
  int v7; // r5@7
  int v8; // r0@8
  int v9; // r5@10
  int v10; // r0@11
  int v11; // r5@13
  int result; // r0@14

  v1 = this;
  v2 = *(_DWORD *)this;
  *(_DWORD *)this = mce::VertexFormat::getVertexSize(*((mce::VertexFormat **)this + 6)) + v2;
  v3 = *((_DWORD *)v1 + 1);
  if ( v3 )
    v4 = mce::VertexFormat::getVertexSize(*((mce::VertexFormat **)v1 + 6)) + v3;
  else
    v4 = 0;
  *((_DWORD *)v1 + 1) = v4;
  v5 = *((_DWORD *)v1 + 2);
  if ( v5 )
    v6 = mce::VertexFormat::getVertexSize(*((mce::VertexFormat **)v1 + 6)) + v5;
    v6 = 0;
  *((_DWORD *)v1 + 2) = v6;
  v7 = *((_DWORD *)v1 + 3);
  if ( v7 )
    v8 = mce::VertexFormat::getVertexSize(*((mce::VertexFormat **)v1 + 6)) + v7;
    v8 = 0;
  *((_DWORD *)v1 + 3) = v8;
  v9 = *((_DWORD *)v1 + 4);
  if ( v9 )
    v10 = mce::VertexFormat::getVertexSize(*((mce::VertexFormat **)v1 + 6)) + v9;
    v10 = 0;
  *((_DWORD *)v1 + 4) = v10;
  v11 = *((_DWORD *)v1 + 5);
  if ( v11 )
  {
    result = mce::VertexFormat::getVertexSize(*((mce::VertexFormat **)v1 + 6)) + v11;
    *((_DWORD *)v1 + 5) = result;
  }
    result = 0;
    *((_DWORD *)v1 + 5) = 0;
  return result;
}


mce::Mesh *__fastcall Tessellator::end(Tessellator *this, const char *a2, bool a3, int a4)
{
  const char *v4; // r5@1
  mce::Mesh *v5; // r4@1
  int v6; // r0@1
  int v7; // r6@1
  int v8; // r2@3
  bool v9; // zf@3
  int v10; // r2@9
  int v11; // r0@9
  int v13; // r2@12
  int v14; // r0@12
  char v15; // [sp+14h] [bp-74h]@11

  v4 = a2;
  v5 = this;
  v6 = *((_DWORD *)a2 + 66);
  v7 = a4;
  if ( !(_BYTE)v6 || a2[237] )
    return mce::Mesh::Mesh(v5);
  v8 = *((_DWORD *)a2 + 64);
  v9 = v8 == 0;
  if ( v8 )
    v9 = *(_DWORD *)a2 == 0;
  if ( v9 )
  {
    *((_BYTE *)a2 + 264) = 0;
  }
  if ( a2[238] )
    *((_DWORD *)a2 + 12) = 0;
    *((_DWORD *)a2 + 64) = 0;
    *((_DWORD *)a2 + 65) = 0;
    *((_BYTE *)a2 + 237) = 0;
    *((_BYTE *)a2 + 40) = 0;
    *((_DWORD *)a2 + 8) = *((_DWORD *)a2 + 7);
    *(_DWORD *)a2 = 0;
    *((_DWORD *)a2 + 1) = 0;
    *((_DWORD *)a2 + 2) = 0;
    v10 = mce::VertexFormat::EMPTY;
    v11 = unk_27E8CB0;
    *((_BYTE *)a2 + 60) = unk_27E8CB4;
    *((_DWORD *)a2 + 14) = v11;
    *((_DWORD *)a2 + 13) = v10;
  mce::Mesh::Mesh(
    (mce::Buffer *)&v15,
    (int)(a2 + 52),
    v8,
    *((_DWORD *)a2 + 12),
    a2[44],
    BYTE3(v6),
    *((unsigned __int8 **)a2 + 7),
    a4);
  if ( !v7 )
    *((_DWORD *)v4 + 12) = 0;
    *((_DWORD *)v4 + 64) = 0;
    *((_DWORD *)v4 + 65) = 0;
    *((_BYTE *)v4 + 237) = 0;
    *((_BYTE *)v4 + 264) = 0;
    *((_BYTE *)v4 + 40) = 0;
    *((_DWORD *)v4 + 8) = *((_DWORD *)v4 + 7);
    *(_DWORD *)v4 = 0;
    *((_DWORD *)v4 + 1) = 0;
    *((_DWORD *)v4 + 2) = 0;
    v13 = mce::VertexFormat::EMPTY;
    v14 = unk_27E8CB0;
    *((_BYTE *)v4 + 60) = unk_27E8CB4;
    *((_DWORD *)v4 + 14) = v14;
    *((_DWORD *)v4 + 13) = v13;
  mce::Mesh::Mesh(v5, (int)&v15);
  return (mce::Mesh *)mce::Mesh::~Mesh((mce::Mesh *)&v15);
}


void __fastcall Tessellator::trim(Tessellator *this)
{
  Tessellator *v1; // r1@1
  void *v2; // r0@1

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 7);
  *((_DWORD *)v1 + 7) = 0;
  *((_DWORD *)v1 + 8) = 0;
  *((_DWORD *)v1 + 9) = 0;
  if ( v2 )
    j_j_j__ZdlPv_4(v2);
}


int __fastcall Tessellator::_tex(int result, __int64 *a2, int a3)
{
  _KR00_8 = *a2;
  __asm
  {
    VMOV.F32        S4, #1.0
    VLDR            S0, =0.0
  }
  _R1 = result + 8 * a3;
    VMOV            S2, R3
    VMOV.F32        S6, S0
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S2, S4
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S6, S2 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S6, S4 }
  *(_QWORD *)(_R1 + 104) = _KR00_8;
    VSTR            S6, [R1,#0x68]
    VLDR            S2, [R1,#0x6C]
    __asm { VMOVGT.F32      S0, S2 }
    __asm { VMOVGT.F32      S0, S4 }
  __asm { VSTR            S0, [R1,#0x6C] }
  if ( !*(_DWORD *)result )
    result = j_j_j__ZN3mce12VertexFormat11enableFieldENS_11VertexFieldE(
               (_BYTE *)(result + 52),
               (unsigned __int8)(a3 + 3));
  return result;
}


int __fastcall Tessellator::cancel(int result)
{
  *(_BYTE *)(result + 264) = 0;
  return result;
}


int __fastcall Tessellator::setTessellateIntercept(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  *(_BYTE *)(a1 + 238) = 1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 240;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 240);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 248);
  v10 = v13;
  *(_DWORD *)(v4 + 248) = v8;
  v14 = *(_DWORD *)(v4 + 252);
  *(_DWORD *)(v4 + 252) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


int __fastcall Tessellator::triggerIntercept(Tessellator *this, const mce::MaterialPtr *a2, const mce::TexturePtr *a3)
{
  Tessellator *v3; // r4@1
  int v4; // r0@1
  bool v5; // zf@1
  int v6; // r2@5
  int result; // r0@5

  v3 = this;
  v4 = *((_BYTE *)this + 238);
  v5 = v4 == 0;
  if ( v4 )
    v5 = *((_DWORD *)v3 + 62) == 0;
  if ( !v5 )
    (*((void (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))v3 + 63))((char *)v3 + 240, v3, a2, a3);
  *((_DWORD *)v3 + 12) = 0;
  *((_DWORD *)v3 + 64) = 0;
  *((_DWORD *)v3 + 65) = 0;
  *((_BYTE *)v3 + 237) = 0;
  *((_BYTE *)v3 + 264) = 0;
  *((_BYTE *)v3 + 40) = 0;
  *((_DWORD *)v3 + 8) = *((_DWORD *)v3 + 7);
  *(_DWORD *)v3 = 0;
  *((_DWORD *)v3 + 1) = 0;
  *((_DWORD *)v3 + 2) = 0;
  v6 = mce::VertexFormat::EMPTY;
  result = unk_27E8CB0;
  *((_BYTE *)v3 + 60) = unk_27E8CB4;
  *((_DWORD *)v3 + 14) = result;
  *((_DWORD *)v3 + 13) = v6;
  return result;
}


int __fastcall Tessellator::quad(Tessellator *this, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  Tessellator *v5; // r4@1
  unsigned int v6; // r8@1
  unsigned int v7; // r11@1
  unsigned int v8; // r9@1
  char *v9; // r0@3
  int v10; // r3@3
  int v11; // r2@3
  int v12; // r1@3
  unsigned int v13; // r6@3
  int v14; // r5@3
  int v15; // r1@5
  int v16; // r2@5
  int v17; // r0@5
  int v18; // r6@5
  unsigned int v19; // r3@5
  int v20; // r3@9
  int v21; // r2@15
  int v22; // r6@15
  unsigned int v23; // r3@15
  int v24; // r0@19
  int result; // r0@26
  int v26; // r0@29

  v5 = this;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  if ( *((_BYTE *)this + 267) == 1 && *((_BYTE *)this + 168) )
  {
    v9 = (char *)this + 28;
    v10 = *((_DWORD *)v5 + 7);
    v11 = *((_DWORD *)v5 + 8);
    v12 = *((_DWORD *)v5 + 11);
    v13 = v11 - v10 + 4 * v12;
    v14 = 4 * v12;
    if ( v11 - v10 >= v13 )
    {
      if ( v11 - v10 > v13 )
      {
        v11 = v10 + v13;
        *((_DWORD *)v5 + 8) = v10 + v13;
      }
    }
    else
      std::vector<unsigned char,std::allocator<unsigned char>>::_M_default_append((int)v9, 4 * v12);
      v11 = *((_DWORD *)v5 + 8);
      v12 = *((_DWORD *)v5 + 11);
    v26 = v11 - v14;
    switch ( v12 )
      case 4:
        *(_DWORD *)v26 = v8;
        *(_DWORD *)(v26 + 4) = v7;
        *(_DWORD *)(v26 + 8) = v6;
        *(_DWORD *)(v26 + 12) = a5;
        break;
      case 2:
        *(_WORD *)v26 = v8;
        *(_WORD *)(v26 + 2) = v7;
        *(_WORD *)(v26 + 4) = v6;
        *(_WORD *)(v26 + 6) = a5;
      case 1:
        *(_BYTE *)v26 = v8;
        *(_BYTE *)(v26 + 1) = v7;
        *(_BYTE *)(v26 + 2) = v6;
        *(_BYTE *)(v26 + 3) = a5;
    result = *((_DWORD *)v5 + 12) + 4;
  }
  else
    v15 = *((_DWORD *)this + 7);
    v16 = *((_DWORD *)this + 11);
    v17 = *((_DWORD *)this + 8);
    v18 = 3 * v16;
    v19 = v17 - v15 + 3 * v16;
    if ( v17 - v15 >= v19 )
      if ( v17 - v15 > v19 )
        v17 = v15 + v19;
        *((_DWORD *)v5 + 8) = v15 + v19;
      std::vector<unsigned char,std::allocator<unsigned char>>::_M_default_append((int)v5 + 28, 3 * v16);
      v17 = *(_QWORD *)((char *)v5 + 28) >> 32;
      v15 = *(_QWORD *)((char *)v5 + 28);
      v16 = *((_DWORD *)v5 + 11);
    v20 = v17 - v18;
    switch ( v16 )
        *(_DWORD *)v20 = v8;
        *(_DWORD *)(v20 + 4) = v7;
        *(_DWORD *)(v20 + 8) = v6;
        *(_WORD *)v20 = v8;
        *(_WORD *)(v20 + 2) = v7;
        *(_WORD *)(v20 + 4) = v6;
        *(_BYTE *)v20 = v8;
        *(_BYTE *)(v20 + 1) = v7;
        *(_BYTE *)(v20 + 2) = v6;
        v17 = *(_QWORD *)((char *)v5 + 28) >> 32;
        v15 = *(_QWORD *)((char *)v5 + 28);
    *((_DWORD *)v5 + 12) += 3;
    v21 = *((_DWORD *)v5 + 11);
    v22 = 3 * v21;
    v23 = v17 - v15 + 3 * v21;
    if ( v17 - v15 >= v23 )
      if ( v17 - v15 > v23 )
        v17 = v15 + v23;
        *((_DWORD *)v5 + 8) = v15 + v23;
      std::vector<unsigned char,std::allocator<unsigned char>>::_M_default_append((int)v5 + 28, 3 * v21);
      v17 = *((_DWORD *)v5 + 8);
      v21 = *((_DWORD *)v5 + 11);
    v24 = v17 - v22;
    switch ( v21 )
        *(_DWORD *)v24 = a5;
        *(_DWORD *)(v24 + 4) = v8;
        *(_DWORD *)(v24 + 8) = v6;
        *(_WORD *)v24 = a5;
        *(_WORD *)(v24 + 2) = v8;
        *(_WORD *)(v24 + 4) = v6;
        *(_BYTE *)v24 = a5;
        *(_BYTE *)(v24 + 1) = v8;
        *(_BYTE *)(v24 + 2) = v6;
    result = *((_DWORD *)v5 + 12) + 3;
  *((_DWORD *)v5 + 12) = result;
  return result;
}


int __fastcall Tessellator::scale3d(int result, float _R1, float _R2, float _R3)
{
  __asm
  {
    VMOV            S0, R1
    VLDR            S2, [R0,#0x50]
    VMUL.F32        S0, S2, S0
    VMOV            S2, R2
    VSTR            S0, [R0,#0x50]
    VLDR            S0, [R0,#0x54]
    VMUL.F32        S0, S0, S2
    VMOV            S2, R3
    VSTR            S0, [R0,#0x54]
    VLDR            S0, [R0,#0x58]
    VSTR            S0, [R0,#0x58]
  }
  return result;
}


int __fastcall Tessellator::color(int result, int a2)
{
  if ( !*(_BYTE *)(result + 236) )
  {
    *(_DWORD *)(result + 128) = ((unsigned int)a2 >> 16) & 0xFF | a2 & 0xFF00 | (a2 << 16) | 0xFF000000;
    if ( !*(_DWORD *)result )
      result = j_j_j__ZN3mce12VertexFormat11enableFieldENS_11VertexFieldE((_BYTE *)(result + 52), 1);
  }
  return result;
}


int __fastcall Tessellator::colorABGR(int result, int a2)
{
  if ( !*(_BYTE *)(result + 236) )
  {
    *(_DWORD *)(result + 128) = a2;
    if ( !*(_DWORD *)result )
      result = j_j_j__ZN3mce12VertexFormat11enableFieldENS_11VertexFieldE((_BYTE *)(result + 52), 1);
  }
  return result;
}


signed int __fastcall Tessellator::vertex(Tessellator *this, const Vec3 *a2)
{
  return j_j_j__ZN11Tessellator6vertexEfff(
           this,
           COERCE_FLOAT(*(_QWORD *)a2),
           COERCE_FLOAT(*(_QWORD *)a2 >> 32),
           *((float *)a2 + 2));
}


void __fastcall Tessellator::trim(Tessellator *this)
{
  Tessellator::trim(this);
}


int __fastcall Tessellator::draw(char *a1, int a2, int a3, int a4)
{
  char *v4; // r4@1
  int v5; // r5@1
  int result; // r0@1
  int v7; // r6@1
  int v8; // r7@1
  int v9; // r2@5
  char v10; // [sp+Ch] [bp-7Ch]@4

  v4 = a1;
  v5 = a4;
  result = (unsigned __int8)a1[264];
  v7 = a3;
  v8 = a2;
  if ( result )
  {
    result = (unsigned __int8)v4[237];
    if ( !v4[237] )
    {
      if ( *((_DWORD *)v4 + 64) )
      {
        Tessellator::end((Tessellator *)&v10, v4, a3, 1);
        mce::Mesh::render((mce::Buffer *)&v10, v8, v7, v5, 0, 0);
        mce::Mesh::~Mesh((mce::Mesh *)&v10);
      }
      *((_DWORD *)v4 + 12) = 0;
      *((_DWORD *)v4 + 64) = 0;
      *((_DWORD *)v4 + 65) = 0;
      v4[237] = 0;
      v4[264] = 0;
      v4[40] = 0;
      *((_DWORD *)v4 + 8) = *((_DWORD *)v4 + 7);
      *(_DWORD *)v4 = 0;
      *((_DWORD *)v4 + 1) = 0;
      *((_DWORD *)v4 + 2) = 0;
      v9 = mce::VertexFormat::EMPTY;
      result = unk_27E8CB0;
      v4[60] = unk_27E8CB4;
      *((_DWORD *)v4 + 14) = result;
      *((_DWORD *)v4 + 13) = v9;
    }
  }
  return result;
}


int __fastcall Tessellator::noColor(int result)
{
  *(_BYTE *)(result + 236) = 1;
  return result;
}


int __fastcall Tessellator::enableColor(int result)
{
  *(_BYTE *)(result + 236) = 0;
  return result;
}


int __fastcall Tessellator::tex(int result, float _R1, float _R2)
{
  __asm
  {
    VMOV            S2, R1
    VLDR            S0, =0.0
    VMOV            S4, R2
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S8, S0
    VCMPE.F32       S4, #0.0
    VMOV.F32        S6, #1.0
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S8, S2 }
    VCMPE.F32       S2, S6
    __asm { VMOVGT.F32      S0, S4 }
    VCMPE.F32       S4, S6
    __asm { VMOVGT.F32      S8, S6 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S0, S6 }
  *(_QWORD *)(result + 104) = *(_QWORD *)&_R1;
    VSTR            S8, [R0,#0x68]
    VSTR            S0, [R0,#0x6C]
  if ( !*(_DWORD *)result )
    result = j_j_j__ZN3mce12VertexFormat11enableFieldENS_11VertexFieldE((_BYTE *)(result + 52), 3);
  return result;
}


int __fastcall Tessellator::tex2(int result, float _R1, float _R2)
{
  __asm
  {
    VMOV            S2, R1
    VLDR            S0, =0.0
    VMOV            S4, R2
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S8, S0
    VCMPE.F32       S4, #0.0
    VMOV.F32        S6, #1.0
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S8, S2 }
    VCMPE.F32       S2, S6
    __asm { VMOVGT.F32      S0, S4 }
    VCMPE.F32       S4, S6
    __asm { VMOVGT.F32      S8, S6 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S0, S6 }
  *(_QWORD *)(result + 120) = *(_QWORD *)&_R1;
    VSTR            S8, [R0,#0x78]
    VSTR            S0, [R0,#0x7C]
  if ( !*(_DWORD *)result )
    result = j_j_j__ZN3mce12VertexFormat11enableFieldENS_11VertexFieldE((_BYTE *)(result + 52), 5);
  return result;
}


int __fastcall Tessellator::normal(Tessellator *this, const Vec3 *_R1)
{
  Tessellator *v6; // r4@1
  float v8; // r0@1
  int v18; // [sp+Ch] [bp-1Ch]@0

  __asm { VLDR            S16, =127.0 }
  v6 = this;
  __asm
  {
    VLDR            S0, [R1]
    VLDR            S18, [R1,#4]
    VMUL.F32        S0, S0, S16
    VLDR            S20, [R1,#8]
    VMOV            R0, S0
  }
  v8 = ceilf(_R0);
  __asm { VMUL.F32        S0, S18, S16 }
  _R5 = v8;
  __asm { VMOV            R0, S0 }
  _R0 = ceilf(_R0);
    VMUL.F32        S0, S20, S16
    VMOV            S16, R0
    VMOV            S18, R5
    VMOV            R1, S0
  _R0 = ceilf(_R1);
    VCVTR.S32.F32   S2, S18
    VMOV            S0, R0
    VCVTR.S32.F32   S4, S16
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S2
  *((_BYTE *)v6 + 132) = _R0;
  __asm { VMOV            R0, S4 }
  *((_BYTE *)v6 + 133) = _R0;
  *((_BYTE *)v6 + 134) = _R0;
  *((_BYTE *)v6 + 135) = 0;
  if ( *(_DWORD *)v6 )
    JUMPOUT(__CS__, v18);
  return j_j_j__ZN3mce12VertexFormat11enableFieldENS_11VertexFieldE((_BYTE *)v6 + 52, 2);
}


int __fastcall Tessellator::triangle(Tessellator *this, unsigned int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v4; // r8@1
  Tessellator *v5; // r4@1
  char *v6; // r0@1
  int v7; // r3@1
  int v8; // t1@1
  unsigned int v9; // r10@1
  unsigned int v10; // r9@1
  int v11; // r1@1
  int v12; // r2@1
  int v13; // r5@1
  unsigned int v14; // r6@1
  bool v15; // cf@1
  bool v16; // zf@1
  int v17; // r0@5
  int result; // r0@12

  v4 = a4;
  v5 = this;
  v8 = *((_DWORD *)this + 7);
  v6 = (char *)this + 28;
  v7 = v8;
  v9 = a2;
  v10 = a3;
  v11 = *((_DWORD *)v6 + 4);
  v12 = *((_DWORD *)v6 + 1);
  v13 = 3 * v11;
  v14 = v12 - v8 + 3 * v11;
  v15 = v12 - v8 >= v14;
  v16 = v12 - v8 == v14;
  if ( v12 - v8 >= v14 )
  {
    if ( !v16 && v15 )
    {
      v12 = v7 + v14;
      *((_DWORD *)v5 + 8) = v7 + v14;
    }
  }
  else
    std::vector<unsigned char,std::allocator<unsigned char>>::_M_default_append((int)v6, 3 * v11);
    v12 = *((_DWORD *)v5 + 8);
    v11 = *((_DWORD *)v5 + 11);
  v17 = v12 - v13;
  switch ( v11 )
    case 4:
      *(_DWORD *)v17 = v9;
      *(_DWORD *)(v17 + 4) = v10;
      *(_DWORD *)(v17 + 8) = v4;
      break;
    case 2:
      *(_WORD *)v17 = v9;
      *(_WORD *)(v17 + 2) = v10;
      *(_WORD *)(v17 + 4) = v4;
    case 1:
      *(_BYTE *)v17 = v9;
      *(_BYTE *)(v17 + 1) = v10;
      *(_BYTE *)(v17 + 2) = v4;
  result = *((_DWORD *)v5 + 12) + 3;
  *((_DWORD *)v5 + 12) = result;
  return result;
}


signed int __fastcall Tessellator::vertex(Tessellator *this, float a2, float a3, float a4)
{
  int v7; // r5@1
  signed int result; // r0@1
  void **v9; // r6@2
  int v10; // r7@2
  int v11; // r5@2
  unsigned int v12; // r7@3
  int v13; // r5@3
  int v14; // r9@4
  char *v15; // r8@5
  int v16; // r9@7
  int v17; // r5@13
  unsigned int v18; // r0@13
  int v19; // r1@13 OVERLAPPED
  int v20; // r2@13
  unsigned int v21; // r2@13
  int v22; // r5@17
  int v23; // r0@20
  Tessellator::CurrentVertexPointers *v24; // r0@20
  int v25; // r2@20
  int v26; // r3@20
  int v27; // r7@20
  int v28; // r1@20
  int v29; // r3@20
  int v30; // r6@20
  int v31; // r7@20
  int v36; // r0@23
  const float *v37; // r1@24
  int v38; // r0@25
  int v39; // r5@26
  const float *v40; // r1@26
  const float *v41; // r1@26
  const float *v42; // r1@26
  int v43; // r5@27
  int v50; // r5@29
  int v57; // r5@31
  _DWORD *v64; // r0@33
  _DWORD *v65; // r0@35
  unsigned int v66; // r0@38
  int v67; // r1@41
  __int64 v68; // r0@42
  float v69; // r2@43
  float v70; // r3@43
  float v71; // r7@43
  unsigned __int64 v72; // [sp+4h] [bp-84h]@4
  int v73; // [sp+Ch] [bp-7Ch]@3
  char v74; // [sp+10h] [bp-78h]@42
  float v75; // [sp+14h] [bp-74h]@43
  float v76; // [sp+18h] [bp-70h]@43
  float v77; // [sp+1Ch] [bp-6Ch]@43
  char v78; // [sp+20h] [bp-68h]@20
  float v79; // [sp+3Ch] [bp-4Ch]@26

  _R4 = this;
  _R10 = a3;
  _R8 = __PAIR__(LODWORD(a4), LODWORD(a2));
  v7 = *((_DWORD *)this + 65);
  result = mce::RenderDevice::getMaxVertexCount(mce::Singleton<mce::RenderDevice>::mInstance);
  if ( v7 != result )
  {
    ++*((_DWORD *)_R4 + 65);
    v9 = (void **)((char *)_R4 + 28);
    v10 = *((_DWORD *)_R4 + 7);
    v11 = *((_DWORD *)_R4 + 16);
    if ( v11 )
    {
      v73 = *((_DWORD *)_R4 + 7);
      v12 = mce::VertexFormat::getVertexSize((Tessellator *)((char *)_R4 + 52)) * v11;
      v13 = *((_DWORD *)_R4 + 7);
      if ( *((_DWORD *)_R4 + 9) - v13 < v12 )
      {
        HIDWORD(v72) = HIDWORD(_R8);
        v14 = *((_DWORD *)_R4 + 8);
        if ( v12 )
        {
          LODWORD(v72) = _R8;
          v15 = (char *)operator new(v12);
        }
        else
          v15 = 0;
        v16 = v14 - v13;
        if ( v16 )
          _aeabi_memmove(v15, v13);
        if ( *v9 )
          operator delete(*v9);
        *((_DWORD *)_R4 + 7) = v15;
        *((_DWORD *)_R4 + 8) = &v15[v16];
        *((_DWORD *)_R4 + 9) = &v15[v12];
        _R8 = v72;
      }
      v10 = v73;
      *((_DWORD *)_R4 + 16) = 0;
    }
    v17 = *((_DWORD *)_R4 + 64) + 1;
    v18 = mce::VertexFormat::getVertexSize((Tessellator *)((char *)_R4 + 52)) * v17;
    *(_QWORD *)&v19 = *(_QWORD *)((char *)_R4 + 28);
    v21 = v20 - v19;
    if ( v18 <= v21 )
      if ( v18 < v21 )
        *((_DWORD *)_R4 + 8) = v18 + v19;
    else
      std::vector<unsigned char,std::allocator<unsigned char>>::_M_default_append((int)_R4 + 28, v18 - v21);
    v22 = *((_DWORD *)_R4 + 7);
    if ( *(_DWORD *)_R4 && v10 == v22 )
      Tessellator::CurrentVertexPointers::nextVertex(_R4);
      v23 = mce::VertexFormat::getVertexSize((Tessellator *)((char *)_R4 + 52));
      v24 = Tessellator::CurrentVertexPointers::CurrentVertexPointers(
              (Tessellator::CurrentVertexPointers *)&v78,
              (unsigned __int8 *)(v22 + v23 * *((_DWORD *)_R4 + 64)),
              (Tessellator *)((char *)_R4 + 52));
      v25 = *(_DWORD *)v24;
      v26 = *((_DWORD *)v24 + 1);
      v27 = *((_DWORD *)v24 + 2);
      v24 = (Tessellator::CurrentVertexPointers *)((char *)v24 + 12);
      *(_DWORD *)_R4 = v25;
      *((_DWORD *)_R4 + 1) = v26;
      *((_DWORD *)_R4 + 2) = v27;
      v28 = (int)_R4 + 12;
      v29 = *((_DWORD *)v24 + 1);
      v30 = *((_DWORD *)v24 + 2);
      v31 = *((_DWORD *)v24 + 3);
      *(_DWORD *)v28 = *(_DWORD *)v24;
      *(_DWORD *)(v28 + 4) = v29;
      *(_DWORD *)(v28 + 8) = v30;
      *(_DWORD *)(v28 + 12) = v31;
    __asm
      VMOV            S0, R9
      VMOV            S2, R10
      VMOV            S4, R8
    if ( *((_BYTE *)_R4 + 169) )
      __asm
        VLDR            S8, [R4,#0xB4]
        VLDR            S14, [R4,#0xC4]
        VLDR            S6, [R4,#0xB0]
        VMUL.F32        S8, S8, S4
        VLDR            S1, [R4,#0xC0]
        VMUL.F32        S14, S14, S2
        VLDR            S10, [R4,#0xAC]
        VMUL.F32        S6, S6, S4
        VLDR            S12, [R4,#0xBC]
        VMUL.F32        S1, S1, S2
        VMUL.F32        S4, S10, S4
        VLDR            S10, [R4,#0xD4]
        VMUL.F32        S2, S12, S2
        VLDR            S12, [R4,#0xD0]
        VMUL.F32        S10, S10, S0
        VMUL.F32        S12, S12, S0
        VADD.F32        S8, S14, S8
        VLDR            S14, [R4,#0xCC]
        VADD.F32        S6, S1, S6
        VMUL.F32        S0, S14, S0
        VADD.F32        S2, S2, S4
        VADD.F32        S4, S8, S10
        VLDR            S10, [R4,#0xDC]
        VADD.F32        S6, S6, S12
        VADD.F32        S8, S2, S0
        VLDR            S2, [R4,#0xE0]
        VLDR            S0, [R4,#0xE4]
        VADD.F32        S0, S4, S0
        VADD.F32        S2, S6, S2
      VLDR            S12, [R4,#0x50]
      VLDR            S14, [R4,#0x54]
      VMUL.F32        S4, S12, S4
      VLDR            S6, [R4,#0x44]
      VMUL.F32        S2, S14, S2
      VLDR            S8, [R4,#0x48]
      VLDR            S1, [R4,#0x58]
      VLDR            S10, [R4,#0x4C]
      VMUL.F32        S0, S1, S0
      VLDR            S3, [R4,#0x5C]
      VLDR            S5, [R4,#0x60]
    v36 = *((_BYTE *)_R4 + 266);
      VADD.F32        S4, S4, S6
      VADD.F32        S2, S2, S8
      VADD.F32        S16, S0, S10
      VMUL.F32        S20, S4, S3
      VMUL.F32        S18, S2, S5
    if ( _ZF || mce::VertexFormat::halfFloatsDisabled((Tessellator *)((char *)_R4 + 52)) )
      v38 = *(_DWORD *)_R4;
        VSTR            S20, [R0]
        VSTR            S18, [R0,#4]
        VSTR            S16, [R0,#8]
      v39 = *(_DWORD *)_R4;
      __asm { VSTR            S20, [SP,#0x88+var_4C] }
      *(_WORD *)v39 = glm::detail::toFloat16((glm::detail *)&v79, v37);
      __asm { VSTR            S18, [SP,#0x88+var_4C] }
      *(_WORD *)(v39 + 2) = glm::detail::toFloat16((glm::detail *)&v79, v40);
      __asm { VSTR            S16, [SP,#0x88+var_4C] }
      *(_WORD *)(v39 + 4) = glm::detail::toFloat16((glm::detail *)&v79, v41);
      v79 = 1.0;
      *(_WORD *)(v39 + 6) = glm::detail::toFloat16((glm::detail *)&v79, v42);
    v43 = *((_DWORD *)_R4 + 3);
    if ( v43 )
        VLDR            S22, =65535.0
        VLDR            S0, [R4,#0x68]
        VMUL.F32        S0, S0, S22
        VMOV            R0, S0
      _R0 = ceilf(_R0);
        VMOV            S0, R0
        VCVTR.U32.F32   S0, S0
      *(_WORD *)v43 = _R0;
        VLDR            S0, [R4,#0x6C]
      *(_WORD *)(v43 + 2) = _R0;
    v50 = *((_DWORD *)_R4 + 4);
    if ( v50 )
        VLDR            S0, [R4,#0x70]
      *(_WORD *)v50 = _R0;
        VLDR            S0, [R4,#0x74]
      *(_WORD *)(v50 + 2) = _R0;
    v57 = *((_DWORD *)_R4 + 5);
    if ( v57 )
        VLDR            S0, [R4,#0x78]
      *(_WORD *)v57 = _R0;
        VLDR            S0, [R4,#0x7C]
      *(_WORD *)(v57 + 2) = _R0;
    v64 = (_DWORD *)*((_DWORD *)_R4 + 1);
    if ( v64 )
      *v64 = *((_DWORD *)_R4 + 32);
    v65 = (_DWORD *)*((_DWORD *)_R4 + 2);
    if ( v65 )
      *v65 = *((_DWORD *)_R4 + 33);
    ++*((_DWORD *)_R4 + 64);
    result = *((_BYTE *)_R4 + 265);
    if ( *((_BYTE *)_R4 + 265) )
      v66 = (unsigned __int8)(*((_BYTE *)_R4 + 267) - 1);
      if ( v66 > 3 )
        LOBYTE(result) = 0;
      else
        result = 0x2000304u >> 8 * v66;
      __asm { VLDR            S0, [R4,#0x98] }
      result = (unsigned __int8)result;
        VADD.F32        S0, S0, S20
        VSTR            S0, [R4,#0x98]
        VLDR            S2, [R4,#0x9C]
        VADD.F32        S2, S2, S18
        VSTR            S2, [R4,#0x9C]
        VLDR            S4, [R4,#0xA0]
        VADD.F32        S4, S4, S16
        VSTR            S4, [R4,#0xA0]
      v67 = *((_DWORD *)_R4 + 41) + 1;
      *((_DWORD *)_R4 + 41) = v67;
      if ( v67 == (unsigned __int8)result )
        __asm
          VMOV            S8, R0
          VMOV.F32        S6, #1.0
          VCVT.F32.U32    S8, S8
        *((_DWORD *)_R4 + 41) = 0;
        v74 = *((_BYTE *)_R4 + 136);
          VDIV.F32        S6, S6, S8
          VMUL.F32        S0, S0, S6
          VMUL.F32        S2, S2, S6
          VMUL.F32        S4, S4, S6
          VSTR            S0, [SP,#0x88+var_74]
          VSTR            S2, [SP,#0x88+var_70]
          VSTR            S4, [SP,#0x88+var_6C]
        v68 = *((_QWORD *)_R4 + 18);
        if ( (_DWORD)v68 == HIDWORD(v68) )
          std::vector<TessellatorQuadInfo,std::allocator<TessellatorQuadInfo>>::_M_emplace_back_aux<TessellatorQuadInfo>(
            (unsigned __int64 *)((char *)_R4 + 140),
            (int)&v74);
          v69 = v75;
          v70 = v76;
          v71 = v77;
          *(_DWORD *)v68 = *(_DWORD *)&v74;
          *(float *)(v68 + 4) = v69;
          *(float *)(v68 + 8) = v70;
          *(float *)(v68 + 12) = v71;
          *((_DWORD *)_R4 + 36) += 16;
        *((_QWORD *)_R4 + 19) = *(_QWORD *)&Vec3::ZERO;
        *((_DWORD *)_R4 + 40) = dword_2822498;
        result = 6;
        *((_BYTE *)_R4 + 136) = 6;
  }
  return result;
}


int __fastcall Tessellator::overrideTessellateIntercept(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int result; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  int (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v11; // [sp+0h] [bp-20h]@2
  int v12; // [sp+4h] [bp-1Ch]@2
  int (__cdecl *v13)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v14; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  result = 0;
  v6 = a2;
  v13 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v11);
    result = *(_DWORD *)(v6 + 12);
    v14 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v12;
    v2 = v11;
  }
  else
    v8 = 0;
  v9 = v4 + 240;
  *(_QWORD *)&v11 = *(_QWORD *)(v4 + 240);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v13 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 248);
  v10 = v13;
  *(_DWORD *)(v4 + 248) = v8;
  v14 = *(_DWORD *)(v4 + 252);
  *(_DWORD *)(v4 + 252) = result;
  if ( v10 )
    result = v10(&v11, &v11, 3, v10);
  return result;
}


char *__fastcall Tessellator::getOffset(Tessellator *this)
{
  return (char *)this + 68;
}


int __fastcall Tessellator::begin(Tessellator *this, int a2, bool a3)
{
  Tessellator *v3; // r4@1
  int v4; // r5@1
  int result; // r0@1
  bool v6; // zf@1
  int v7; // r3@5
  int v8; // r0@5

  v3 = this;
  v4 = a2;
  result = *((_BYTE *)this + 264);
  v6 = result == 0;
  if ( !result )
  {
    result = *((_BYTE *)v3 + 237);
    v6 = result == 0;
  }
  if ( v6 )
    *((_DWORD *)v3 + 12) = 0;
    *((_DWORD *)v3 + 64) = 0;
    *((_DWORD *)v3 + 65) = 0;
    *((_BYTE *)v3 + 237) = 0;
    *((_BYTE *)v3 + 264) = 0;
    *((_BYTE *)v3 + 40) = 0;
    *((_DWORD *)v3 + 8) = *((_DWORD *)v3 + 7);
    *(_DWORD *)v3 = 0;
    *((_DWORD *)v3 + 1) = 0;
    *((_DWORD *)v3 + 2) = 0;
    v7 = mce::VertexFormat::EMPTY;
    v8 = unk_27E8CB0;
    *((_BYTE *)v3 + 60) = unk_27E8CB4;
    *((_DWORD *)v3 + 14) = v8;
    *((_DWORD *)v3 + 13) = v7;
    *((_BYTE *)v3 + 267) = 1;
    *((_BYTE *)v3 + 236) = 0;
    *((_BYTE *)v3 + 264) = 1;
    *((_BYTE *)v3 + 265) = a3;
    if ( *((_BYTE *)v3 + 238) )
      mce::VertexFormat::disableHalfFloats((Tessellator *)((char *)v3 + 52));
    mce::VertexFormat::enableField((_BYTE *)v3 + 52, 0);
    *((_DWORD *)v3 + 11) = 0;
    *((_DWORD *)v3 + 16) = v4;
    *((_DWORD *)v3 + 41) = 0;
    result = *((_DWORD *)v3 + 35);
    *((_DWORD *)v3 + 36) = result;
  return result;
}


int __fastcall Tessellator::tex1(int result, float _R1, float _R2)
{
  __asm
  {
    VMOV            S2, R1
    VLDR            S0, =0.0
    VMOV            S4, R2
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
    VMOV.F32        S8, S0
    VCMPE.F32       S4, #0.0
    VMOV.F32        S6, #1.0
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S8, S2 }
    VCMPE.F32       S2, S6
    __asm { VMOVGT.F32      S0, S4 }
    VCMPE.F32       S4, S6
    __asm { VMOVGT.F32      S8, S6 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S0, S6 }
  *(_QWORD *)(result + 112) = *(_QWORD *)&_R1;
    VSTR            S8, [R0,#0x70]
    VSTR            S0, [R0,#0x74]
  if ( !*(_DWORD *)result )
    result = j_j_j__ZN3mce12VertexFormat11enableFieldENS_11VertexFieldE((_BYTE *)(result + 52), 4);
  return result;
}


char *__fastcall Tessellator::setOffset(Tessellator *this, float a2, float a3, float a4)
{
  char *v4; // r0@1

  v4 = (char *)this + 68;
  *(float *)v4 = a2;
  *((float *)v4 + 1) = a3;
  *((float *)v4 + 2) = a4;
  return v4 + 12;
}


int __fastcall Tessellator::addRotationOffset(Tessellator *this, float a2, const Vec3 *_R2)
{
  Tessellator *v4; // r4@1
  int result; // r0@1
  float v13; // [sp+0h] [bp-C8h]@1
  int v14; // [sp+Ch] [bp-BCh]@1
  int v15; // [sp+1Ch] [bp-ACh]@1
  int v16; // [sp+2Ch] [bp-9Ch]@1
  int v17; // [sp+30h] [bp-98h]@1
  int v18; // [sp+34h] [bp-94h]@1
  int v19; // [sp+38h] [bp-90h]@1
  int v20; // [sp+3Ch] [bp-8Ch]@1
  int v21; // [sp+40h] [bp-88h]@1
  int v22; // [sp+44h] [bp-84h]@1
  int v23; // [sp+48h] [bp-80h]@1
  int v24; // [sp+4Ch] [bp-7Ch]@1
  int v25; // [sp+50h] [bp-78h]@1
  int v26; // [sp+54h] [bp-74h]@1
  int v27; // [sp+58h] [bp-70h]@1
  int v28; // [sp+5Ch] [bp-6Ch]@1
  int v29; // [sp+60h] [bp-68h]@1
  int v30; // [sp+64h] [bp-64h]@1
  int v31; // [sp+68h] [bp-60h]@1
  int v32; // [sp+6Ch] [bp-5Ch]@1
  int v33; // [sp+70h] [bp-58h]@1
  int v34; // [sp+74h] [bp-54h]@1
  int v35; // [sp+78h] [bp-50h]@1
  int v36; // [sp+7Ch] [bp-4Ch]@1

  _R6 = a2;
  v4 = this;
  __asm
  {
    VLDR            S16, [R2]
    VLDR            S18, [R2,#4]
    VLDR            S20, [R2,#8]
  }
  _aeabi_memclr8(&v13, 60);
    VLDR            S0, =0.017453
    VMOV            S2, R6
    VMUL.F32        S0, S2, S0
    VMOV            R6, S0
  _R0 = cosf(_R6);
    VMUL.F32        S0, S16, S16
    VMUL.F32        S2, S18, S18
    VMUL.F32        S4, S20, S20
    VMOV            S22, R0
    VADD.F32        S0, S2, S0
    VMOV.F32        S2, #1.0
    VADD.F32        S0, S0, S4
    VSUB.F32        S24, S2, S22
    VSQRT.F32       S0, S0
    VDIV.F32        S0, S2, S0
    VMUL.F32        S16, S0, S16
    VMUL.F32        S18, S0, S18
    VMUL.F32        S20, S0, S20
    VMUL.F32        S26, S16, S24
    VMUL.F32        S28, S18, S24
  _R0 = sinf(_R6);
    VMUL.F32        S2, S20, S24
    VMOV            S0, R0
    VMUL.F32        S4, S26, S16
    VMUL.F32        S6, S20, S0
    VMUL.F32        S8, S26, S18
    VMUL.F32        S10, S18, S0
    VMUL.F32        S12, S26, S20
    VMUL.F32        S14, S28, S16
    VMUL.F32        S1, S2, S16
    VMUL.F32        S3, S2, S18
    VMUL.F32        S2, S2, S20
    VMUL.F32        S0, S16, S0
    VMUL.F32        S5, S28, S18
    VMUL.F32        S7, S28, S20
    VADD.F32        S4, S4, S22
    VADD.F32        S8, S8, S6
    VSUB.F32        S12, S12, S10
    VSUB.F32        S6, S14, S6
    VADD.F32        S10, S1, S10
    VSUB.F32        S14, S3, S0
    VADD.F32        S1, S5, S22
    VADD.F32        S0, S7, S0
    VSTR            S4, [SP,#0xC8+var_C8]
    VADD.F32        S2, S2, S22
    VSTR            S8, [SP,#0xC8+var_C4]
    VSTR            S12, [SP,#0xC8+var_C0]
  v14 = 0;
    VSTR            S6, [SP,#0xC8+var_B8]
    VSTR            S1, [SP,#0xC8+var_B4]
    VSTR            S0, [SP,#0xC8+var_B0]
  v15 = 0;
    VSTR            S10, [SP,#0xC8+var_A8]
    VSTR            S14, [SP,#0xC8+var_A4]
    VSTR            S2, [SP,#0xC8+var_A0]
  v18 = 0;
  v19 = 0;
  v16 = 0;
  v17 = 0;
  v20 = 1065353216;
  glm::detail::operator*<float>((int)&v21, (int)&v13, (int)v4 + 172);
  *((_DWORD *)v4 + 43) = v21;
  *((_DWORD *)v4 + 44) = v22;
  *((_DWORD *)v4 + 45) = v23;
  *((_DWORD *)v4 + 46) = v24;
  *((_DWORD *)v4 + 47) = v25;
  *((_DWORD *)v4 + 48) = v26;
  *((_DWORD *)v4 + 49) = v27;
  *((_DWORD *)v4 + 50) = v28;
  *((_DWORD *)v4 + 51) = v29;
  *((_DWORD *)v4 + 52) = v30;
  *((_DWORD *)v4 + 53) = v31;
  *((_DWORD *)v4 + 54) = v32;
  *((_DWORD *)v4 + 55) = v33;
  *((_DWORD *)v4 + 56) = v34;
  *((_DWORD *)v4 + 57) = v35;
  result = v36;
  *((_DWORD *)v4 + 58) = v36;
  return result;
}


int __fastcall Tessellator::resetScale(int result)
{
  *(_DWORD *)(result + 80) = 1065353216;
  *(_DWORD *)(result + 84) = 1065353216;
  *(_DWORD *)(result + 88) = 1065353216;
  *(_DWORD *)(result + 92) = 1065353216;
  *(_DWORD *)(result + 96) = 1065353216;
  return result;
}


int __fastcall Tessellator::tex(int result, __int64 *a2)
{
  _KR00_8 = *a2;
  __asm
  {
    VMOV.F32        S6, #1.0
    VLDR            S2, =0.0
    VMOV            S4, R1
    VMOV            S0, R2
    VMOV.F32        S8, S2
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S4, #0.0
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S8, S0 }
    VCMPE.F32       S0, S6
    __asm { VMOVGT.F32      S2, S4 }
    VCMPE.F32       S4, S6
    __asm { VMOVGT.F32      S8, S6 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S2, S6 }
  *(_QWORD *)(result + 104) = _KR00_8;
    VSTR            S8, [R0,#0x68]
    VSTR            S2, [R0,#0x6C]
  if ( !*(_DWORD *)result )
    result = j_j_j__ZN3mce12VertexFormat11enableFieldENS_11VertexFieldE((_BYTE *)(result + 52), 3);
  return result;
}


unsigned int __fastcall Tessellator::getPolygonCount(Tessellator *this)
{
  Tessellator *v1; // r1@1
  unsigned int v4; // r1@3
  unsigned int result; // r0@4

  v1 = this;
  _R0 = *((_DWORD *)this + 12);
  _ZF = _R0 == 0;
  if ( !_R0 )
    _R0 = *((_DWORD *)v1 + 64);
  v4 = *((_BYTE *)v1 + 267);
  if ( _ZF )
  {
    switch ( v4 )
    {
      case 1u:
        result = j_j_j__ZN3mce13PolygonHelper27calculateIndexCountForQuadsEj((mce::PolygonHelper *)_R0, v4);
        break;
      case 2u:
        _R1 = 1431655766;
        __asm { SMMUL.W         R0, R0, R1 }
        result = _R0 + (_R0 >> 31);
      case 3u:
        result = _R0 - 2;
      case 4u:
        result = _R0 / 2;
      case 5u:
        result = _R0 - 1;
    }
  }
  else
    result = 0;
  return result;
}


Tessellator::CurrentVertexPointers *__fastcall Tessellator::CurrentVertexPointers::CurrentVertexPointers(Tessellator::CurrentVertexPointers *this, unsigned __int8 *a2, const mce::VertexFormat *a3)
{
  Tessellator::CurrentVertexPointers *v3; // r4@1
  const mce::VertexFormat *v4; // r6@1
  unsigned __int8 *v5; // r5@1
  int v6; // r0@6
  int v7; // r0@9
  int v8; // r0@12

  v3 = this;
  v4 = a3;
  v5 = a2;
  *((_DWORD *)this + 6) = a3;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &a2[mce::VertexFormat::getFieldOffset((int)a3, 0)];
  if ( mce::VertexFormat::hasField(v4, 1) == 1 )
    *((_DWORD *)v3 + 1) = &v5[mce::VertexFormat::getFieldOffset((int)v4, 1)];
  if ( mce::VertexFormat::hasField(v4, 2) )
    *((_DWORD *)v3 + 2) = &v5[mce::VertexFormat::getFieldOffset((int)v4, 2)];
  if ( mce::VertexFormat::hasField(v4, 3) )
    v6 = (int)&v5[mce::VertexFormat::getFieldOffset((int)v4, 3)];
  else
    v6 = 0;
  *((_DWORD *)v3 + 3) = v6;
  if ( mce::VertexFormat::hasField(v4, 4) )
    v7 = (int)&v5[mce::VertexFormat::getFieldOffset((int)v4, 4)];
    v7 = 0;
  *((_DWORD *)v3 + 4) = v7;
  if ( mce::VertexFormat::hasField(v4, 5) )
    v8 = (int)&v5[mce::VertexFormat::getFieldOffset((int)v4, 5)];
    v8 = 0;
  *((_DWORD *)v3 + 5) = v8;
  return v3;
}


int __fastcall Tessellator::draw(char *a1, int a2, int a3, int a4, int a5)
{
  char *v5; // r4@1
  int v6; // r5@1
  int result; // r0@1
  int v8; // r6@1
  int v9; // r7@1
  int v10; // r2@5
  char v11; // [sp+10h] [bp-80h]@4

  v5 = a1;
  v6 = a4;
  result = (unsigned __int8)a1[264];
  v8 = a3;
  v9 = a2;
  if ( result )
  {
    result = (unsigned __int8)v5[237];
    if ( !v5[237] )
    {
      if ( *((_DWORD *)v5 + 64) )
      {
        Tessellator::end((Tessellator *)&v11, v5, a3, 1);
        mce::Mesh::render((mce::Buffer *)&v11, v9, v8, v6, a5, 0, 0);
        mce::Mesh::~Mesh((mce::Mesh *)&v11);
      }
      *((_DWORD *)v5 + 12) = 0;
      *((_DWORD *)v5 + 64) = 0;
      *((_DWORD *)v5 + 65) = 0;
      v5[237] = 0;
      v5[264] = 0;
      v5[40] = 0;
      *((_DWORD *)v5 + 8) = *((_DWORD *)v5 + 7);
      *(_DWORD *)v5 = 0;
      *((_DWORD *)v5 + 1) = 0;
      *((_DWORD *)v5 + 2) = 0;
      v10 = mce::VertexFormat::EMPTY;
      result = unk_27E8CB0;
      v5[60] = unk_27E8CB4;
      *((_DWORD *)v5 + 14) = result;
      *((_DWORD *)v5 + 13) = v10;
    }
  }
  return result;
}


int __fastcall Tessellator::color(int result, int a2, int a3)
{
  int v3; // r12@2
  unsigned int v4; // r3@2
  int v11; // r1@2
  int v12; // r3@2
  signed int v13; // r3@4

  if ( !*(_BYTE *)(result + 236) )
  {
    v3 = a2 & 0xFF00;
    v4 = ((unsigned int)a2 >> 16) & 0xFF;
    _R1 = a2 << 16;
    __asm { UXTB16.W        R1, R1 }
    v11 = _R1 | v4 | v3;
    v12 = a3;
    if ( a3 <= 0 )
      v12 = 0;
    v13 = v12 << 24;
    if ( a3 > 255 )
      v13 = -16777216;
    *(_DWORD *)(result + 128) = v11 | v13;
    if ( !*(_DWORD *)result )
      result = j_j_j__ZN3mce12VertexFormat11enableFieldENS_11VertexFieldE((_BYTE *)(result + 52), 1);
  }
  return result;
}


int __fastcall Tessellator::setRotationOffset(Tessellator *this, float _R1, const Vec3 *a3)
{
  Tessellator *v7; // r4@1
  int result; // r0@1

  __asm
  {
    VLDR            S0, =0.017453
    VMOV            S2, R1
  }
  v7 = this;
  _R5 = a3;
    VMUL.F32        S0, S2, S0
    VMOV            R6, S0
  _R0 = cosf(_R6);
    VLDR            S0, [R5]
    VMOV            S16, R0
    VLDR            S2, [R5,#4]
    VMUL.F32        S6, S0, S0
    VLDR            S4, [R5,#8]
    VMUL.F32        S8, S2, S2
    VMUL.F32        S10, S4, S4
    VADD.F32        S6, S8, S6
    VMOV.F32        S8, #1.0
    VADD.F32        S6, S6, S10
    VSUB.F32        S18, S8, S16
    VSQRT.F32       S6, S6
    VDIV.F32        S6, S8, S6
    VMUL.F32        S20, S6, S0
    VMUL.F32        S22, S6, S2
    VMUL.F32        S24, S6, S4
    VMUL.F32        S26, S20, S18
    VMUL.F32        S28, S22, S18
  _R0 = sinf(_R6);
    VMUL.F32        S2, S24, S18
    VMOV            S0, R0
  result = 0;
    VMUL.F32        S4, S26, S20
    VMUL.F32        S6, S24, S0
    VMUL.F32        S8, S26, S22
    VMUL.F32        S10, S22, S0
    VMUL.F32        S12, S26, S24
    VMUL.F32        S14, S28, S20
    VMUL.F32        S1, S2, S20
    VMUL.F32        S3, S2, S22
    VMUL.F32        S2, S2, S24
    VMUL.F32        S0, S20, S0
    VMUL.F32        S5, S28, S22
    VMUL.F32        S7, S28, S24
    VADD.F32        S4, S4, S16
    VADD.F32        S8, S8, S6
    VSUB.F32        S12, S12, S10
    VSUB.F32        S6, S14, S6
    VADD.F32        S10, S1, S10
    VSUB.F32        S14, S3, S0
    VADD.F32        S1, S5, S16
    VADD.F32        S0, S7, S0
    VSTR            S4, [R4,#0xAC]
    VADD.F32        S2, S2, S16
    VSTR            S8, [R4,#0xB0]
    VSTR            S12, [R4,#0xB4]
  *((_DWORD *)v7 + 46) = 0;
    VSTR            S6, [R4,#0xBC]
    VSTR            S1, [R4,#0xC0]
    VSTR            S0, [R4,#0xC4]
  *((_DWORD *)v7 + 50) = 0;
    VSTR            S10, [R4,#0xCC]
    VSTR            S14, [R4,#0xD0]
    VSTR            S2, [R4,#0xD4]
  *((_DWORD *)v7 + 54) = 0;
  *((_DWORD *)v7 + 55) = 0;
  *((_DWORD *)v7 + 56) = 0;
  *((_DWORD *)v7 + 57) = 0;
  *((_DWORD *)v7 + 58) = 1065353216;
  return result;
}


int __fastcall Tessellator::addOffset(int result, float _R1, float _R2, float _R3)
{
  __asm
  {
    VMOV            S0, R1
    VLDR            S2, [R0,#0x44]
    VADD.F32        S0, S2, S0
    VMOV            S2, R2
    VSTR            S0, [R0,#0x44]
    VLDR            S0, [R0,#0x48]
    VADD.F32        S0, S0, S2
    VMOV            S2, R3
    VSTR            S0, [R0,#0x48]
    VLDR            S0, [R0,#0x4C]
    VSTR            S0, [R0,#0x4C]
  }
  return result;
}


unsigned int __fastcall Tessellator::_allocateIndices(Tessellator *this, int a2)
{
  Tessellator *v2; // r7@1
  char *v3; // r0@1
  int v4; // r3@1
  int v5; // t1@1
  int v6; // r2@1
  int v7; // r6@1
  unsigned int v8; // r4@1
  unsigned int v9; // r6@1
  bool v10; // cf@1
  bool v11; // zf@1

  v2 = this;
  v5 = *((_DWORD *)this + 7);
  v3 = (char *)this + 28;
  v4 = v5;
  v6 = *((_DWORD *)v3 + 1);
  v7 = *((_DWORD *)v3 + 4);
  v8 = v6 - v5 + v7 * a2;
  v9 = v7 * a2;
  v10 = v6 - v5 >= v8;
  v11 = v6 - v5 == v8;
  if ( v6 - v5 >= v8 )
  {
    if ( !v11 && v10 )
    {
      v6 = v4 + v8;
      *((_DWORD *)v2 + 8) = v4 + v8;
    }
  }
  else
    std::vector<unsigned char,std::allocator<unsigned char>>::_M_default_append((int)v3, v9);
    v6 = *((_DWORD *)v2 + 8);
  return v6 - v9;
}


Tessellator *__fastcall Tessellator::~Tessellator(Tessellator *this)
{
  Tessellator *v1; // r4@1
  void (*v2)(void); // r3@1
  void *v3; // r0@3
  void *v4; // r0@5

  v1 = this;
  v2 = (void (*)(void))*((_DWORD *)this + 62);
  if ( v2 )
    v2();
  v3 = (void *)*((_DWORD *)v1 + 35);
  if ( v3 )
    operator delete(v3);
  v4 = (void *)*((_DWORD *)v1 + 7);
  if ( v4 )
    operator delete(v4);
  return v1;
}


int __fastcall Tessellator::voidBeginAndEndCalls(int result, bool a2)
{
  *(_BYTE *)(result + 237) = a2;
  return result;
}


int __fastcall Tessellator::resetTilt(Tessellator *this)
{
  char *v1; // r4@1
  int result; // r0@1
  signed __int64 v3; // [sp+0h] [bp-58h]@1
  int v4; // [sp+8h] [bp-50h]@1
  int v5; // [sp+Ch] [bp-4Ch]@1
  int v6; // [sp+10h] [bp-48h]@1
  int v7; // [sp+14h] [bp-44h]@1
  int v8; // [sp+18h] [bp-40h]@1
  int v9; // [sp+1Ch] [bp-3Ch]@1
  int v10; // [sp+20h] [bp-38h]@1
  int v11; // [sp+24h] [bp-34h]@1
  int v12; // [sp+28h] [bp-30h]@1
  int v13; // [sp+2Ch] [bp-2Ch]@1
  int v14; // [sp+30h] [bp-28h]@1
  int v15; // [sp+34h] [bp-24h]@1
  int v16; // [sp+38h] [bp-20h]@1
  int v17; // [sp+3Ch] [bp-1Ch]@1
  int v18; // [sp+40h] [bp-18h]@1
  int v19; // [sp+44h] [bp-14h]@1
  int v20; // [sp+48h] [bp-10h]@1
  int v21; // [sp+4Ch] [bp-Ch]@1

  *((_BYTE *)this + 169) = 0;
  *((_DWORD *)this + 43) = 1065353216;
  v1 = (char *)this + 172;
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 1) = 0;
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 5) = -1084378153;
  *((_DWORD *)v1 + 6) = -1090519041;
  *((_DWORD *)v1 + 7) = 0;
  *((_DWORD *)v1 + 8) = 0;
  *((_DWORD *)v1 + 9) = 1056964607;
  *((_DWORD *)v1 + 10) = -1084378153;
  *((_DWORD *)v1 + 11) = 0;
  *((_DWORD *)v1 + 12) = 0;
  *((_DWORD *)v1 + 13) = 0;
  *((_DWORD *)v1 + 14) = 0;
  *((_DWORD *)v1 + 15) = 1065353216;
  v3 = 4575657221408423936LL;
  v4 = 0;
  v5 = 1110704128;
  glm::rotate<float>((int)&v6, (int)this + 172, (int)&v5, (int)&v3);
  *(_DWORD *)v1 = v6;
  *((_DWORD *)v1 + 1) = v7;
  *((_DWORD *)v1 + 2) = v8;
  *((_DWORD *)v1 + 3) = v9;
  *((_DWORD *)v1 + 4) = v10;
  *((_DWORD *)v1 + 5) = v11;
  *((_DWORD *)v1 + 6) = v12;
  *((_DWORD *)v1 + 7) = v13;
  *((_DWORD *)v1 + 8) = v14;
  *((_DWORD *)v1 + 9) = v15;
  *((_DWORD *)v1 + 10) = v16;
  *((_DWORD *)v1 + 11) = v17;
  *((_DWORD *)v1 + 12) = v18;
  *((_DWORD *)v1 + 13) = v19;
  *((_DWORD *)v1 + 14) = v20;
  result = v21;
  *((_DWORD *)v1 + 15) = v21;
  return result;
}


int __fastcall Tessellator::normal(Tessellator *this, float _R1, float a3, float a4)
{
  Tessellator *v8; // r4@1
  float v12; // r0@1
  int v22; // [sp+14h] [bp-14h]@0

  __asm
  {
    VLDR            S16, =127.0
    VMOV            S0, R1
  }
  v8 = this;
  _R5 = a4;
  __asm { VMUL.F32        S0, S0, S16 }
  _R6 = a3;
  __asm { VMOV            R0, S0 }
  v12 = ceilf(_R0);
  __asm { VMOV            S0, R6 }
  _R7 = v12;
    VMUL.F32        S0, S0, S16
    VMOV            R0, S0
  _R0 = ceilf(_R0);
    VMOV            S0, R5
    VMOV            S18, R7
    VMOV            S16, R0
    VMOV            R1, S0
  _R0 = ceilf(_R1);
    VCVTR.S32.F32   S2, S18
    VMOV            S0, R0
    VCVTR.S32.F32   S4, S16
    VCVTR.S32.F32   S0, S0
    VMOV            R0, S2
  *((_BYTE *)v8 + 132) = _R0;
  __asm { VMOV            R0, S4 }
  *((_BYTE *)v8 + 133) = _R0;
  *((_BYTE *)v8 + 134) = _R0;
  *((_BYTE *)v8 + 135) = 0;
  if ( *(_DWORD *)v8 )
    JUMPOUT(__CS__, v22);
  return j_j_j__ZN3mce12VertexFormat11enableFieldENS_11VertexFieldE((_BYTE *)v8 + 52, 2);
}


int __fastcall Tessellator::Tessellator(int a1)
{
  int v1; // r4@1
  int v2; // r8@1
  int v3; // r7@1
  int v5; // [sp+4h] [bp-6Ch]@1
  signed int v6; // [sp+8h] [bp-68h]@1
  int v7; // [sp+Ch] [bp-64h]@1
  int v8; // [sp+10h] [bp-60h]@1
  int v9; // [sp+14h] [bp-5Ch]@1
  int v10; // [sp+18h] [bp-58h]@1
  int v11; // [sp+1Ch] [bp-54h]@1
  int v12; // [sp+20h] [bp-50h]@1
  int v13; // [sp+24h] [bp-4Ch]@1
  int v14; // [sp+28h] [bp-48h]@1
  int v15; // [sp+2Ch] [bp-44h]@1
  int v16; // [sp+30h] [bp-40h]@1
  int v17; // [sp+34h] [bp-3Ch]@1
  int v18; // [sp+38h] [bp-38h]@1
  int v19; // [sp+3Ch] [bp-34h]@1
  int v20; // [sp+40h] [bp-30h]@1
  int v21; // [sp+44h] [bp-2Ch]@1
  int v22; // [sp+48h] [bp-28h]@1
  int v23; // [sp+4Ch] [bp-24h]@1
  int v24; // [sp+50h] [bp-20h]@1

  v1 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  v2 = a1 + 28;
  *(_BYTE *)(v2 + 12) = 0;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = 0;
  mce::VertexFormat::VertexFormat((mce::VertexFormat *)(a1 + 52));
  *(_DWORD *)(v1 + 72) = 0;
  *(_DWORD *)(v1 + 76) = 0;
  *(_DWORD *)(v1 + 64) = 0;
  *(_DWORD *)(v1 + 68) = 0;
  *(_DWORD *)(v1 + 80) = 1065353216;
  *(_DWORD *)(v1 + 84) = 1065353216;
  *(_DWORD *)(v1 + 88) = 1065353216;
  *(_DWORD *)(v1 + 92) = 1065353216;
  *(_DWORD *)(v1 + 96) = 1065353216;
  *(_DWORD *)(v1 + 100) = 1065353216;
  *(_DWORD *)(v1 + 104) = 0;
  *(_DWORD *)(v1 + 108) = 0;
  *(_DWORD *)(v1 + 112) = 0;
  *(_DWORD *)(v1 + 116) = 0;
  *(_DWORD *)(v1 + 120) = 0;
  *(_DWORD *)(v1 + 124) = 0;
  *(_DWORD *)(v1 + 128) = 0;
  *(_DWORD *)(v1 + 132) = 0;
  *(_BYTE *)(v1 + 136) = 6;
  *(_BYTE *)(v1 + 169) = 0;
  *(_DWORD *)(v1 + 140) = 0;
  v3 = v1 + 140;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  *(_DWORD *)(v3 + 12) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 20) = 0;
  *(_DWORD *)(v3 + 24) = 0;
  _aeabi_memclr4(v1 + 172, 44);
  *(_DWORD *)(v1 + 204) = 0;
  *(_DWORD *)(v1 + 196) = 0;
  *(_DWORD *)(v1 + 200) = 0;
  *(_BYTE *)(v1 + 236) = 0;
  *(_BYTE *)(v1 + 237) = 0;
  *(_BYTE *)(v1 + 238) = 0;
  *(_DWORD *)(v1 + 248) = 0;
  *(_BYTE *)(v1 + 267) = 0;
  *(_WORD *)(v1 + 264) = 0;
  *(_DWORD *)(v1 + 256) = 0;
  *(_DWORD *)(v1 + 260) = 0;
  *(_DWORD *)(v1 + 188) = 0;
  *(_DWORD *)(v1 + 180) = 0;
  *(_DWORD *)(v1 + 184) = 0;
  *(_QWORD *)(v1 + 172) = 1065353216LL;
  *(_DWORD *)(v1 + 192) = -1084378153;
  *(_DWORD *)(v1 + 196) = -1090519041;
  *(_DWORD *)(v1 + 208) = 1056964607;
  *(_DWORD *)(v1 + 212) = -1084378153;
  *(_DWORD *)(v1 + 224) = 0;
  *(_DWORD *)(v1 + 228) = 0;
  *(_DWORD *)(v1 + 216) = 0;
  *(_DWORD *)(v1 + 220) = 0;
  *(_DWORD *)(v1 + 232) = 1065353216;
  v5 = 0;
  v6 = 1065353216;
  v7 = 0;
  v8 = 1110704128;
  glm::rotate<float>((int)&v9, v1 + 172, (int)&v8, (int)&v5);
  *(_DWORD *)(v1 + 172) = v9;
  *(_DWORD *)(v1 + 176) = v10;
  *(_DWORD *)(v1 + 180) = v11;
  *(_DWORD *)(v1 + 184) = v12;
  *(_DWORD *)(v1 + 188) = v13;
  *(_DWORD *)(v1 + 192) = v14;
  *(_DWORD *)(v1 + 196) = v15;
  *(_DWORD *)(v1 + 200) = v16;
  *(_DWORD *)(v1 + 204) = v17;
  *(_DWORD *)(v1 + 208) = v18;
  *(_DWORD *)(v1 + 212) = v19;
  *(_DWORD *)(v1 + 216) = v20;
  *(_DWORD *)(v1 + 220) = v21;
  *(_DWORD *)(v1 + 224) = v22;
  *(_DWORD *)(v1 + 228) = v23;
  *(_DWORD *)(v1 + 232) = v24;
  *(_BYTE *)(v1 + 266) = mce::RenderDevice::checkFeatureSupport();
  return v1;
}


int __fastcall Tessellator::tex2(int result, __int64 *a2)
{
  _KR00_8 = *a2;
  __asm
  {
    VMOV.F32        S6, #1.0
    VLDR            S2, =0.0
    VMOV            S4, R1
    VMOV            S0, R2
    VMOV.F32        S8, S2
    VCMPE.F32       S0, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S4, #0.0
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S8, S0 }
    VCMPE.F32       S0, S6
    __asm { VMOVGT.F32      S2, S4 }
    VCMPE.F32       S4, S6
    __asm { VMOVGT.F32      S8, S6 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S2, S6 }
  *(_QWORD *)(result + 120) = _KR00_8;
    VSTR            S8, [R0,#0x78]
    VSTR            S2, [R0,#0x7C]
  if ( !*(_DWORD *)result )
    result = j_j_j__ZN3mce12VertexFormat11enableFieldENS_11VertexFieldE((_BYTE *)(result + 52), 5);
  return result;
}


int __fastcall Tessellator::draw(char *a1, int a2, int a3)
{
  char *v3; // r4@1
  int v4; // r5@1
  int result; // r0@1
  int v6; // r6@1
  int v7; // r2@5
  char v8; // [sp+8h] [bp+0h]@4

  v3 = a1;
  v4 = a3;
  result = (unsigned __int8)a1[264];
  v6 = a2;
  if ( result )
  {
    result = (unsigned __int8)v3[237];
    if ( !v3[237] )
    {
      if ( *((_DWORD *)v3 + 64) )
      {
        Tessellator::end((Tessellator *)&v8, v3, a3, 1);
        mce::Mesh::render((mce::Buffer *)&v8, v6, v4, 0, 0);
        mce::Mesh::~Mesh((mce::Mesh *)&v8);
      }
      *((_DWORD *)v3 + 12) = 0;
      *((_DWORD *)v3 + 64) = 0;
      *((_DWORD *)v3 + 65) = 0;
      v3[237] = 0;
      v3[264] = 0;
      v3[40] = 0;
      *((_DWORD *)v3 + 8) = *((_DWORD *)v3 + 7);
      *(_DWORD *)v3 = 0;
      *((_DWORD *)v3 + 1) = 0;
      *((_DWORD *)v3 + 2) = 0;
      v7 = mce::VertexFormat::EMPTY;
      result = unk_27E8CB0;
      v3[60] = unk_27E8CB4;
      *((_DWORD *)v3 + 14) = result;
      *((_DWORD *)v3 + 13) = v7;
    }
  }
  return result;
}


int __fastcall Tessellator::color(int result, float _R1, float _R2, float _R3, float a5)
{
  int v11; // r1@2
  int v13; // r1@2

  if ( !*(_BYTE *)(result + 236) )
  {
    __asm
    {
      VMOV            S4, R2
      VLDR            S8, =255.0
      VLDR            S0, [SP,#arg_0]
      VMOV            S6, R1
      VMUL.F32        S4, S4, S8
      VMUL.F32        S0, S0, S8
      VMUL.F32        S6, S6, S8
      VMOV            S2, R3
      VMUL.F32        S2, S2, S8
      VCVTR.U32.F32   S4, S4
      VCVTR.U32.F32   S0, S0
      VCVTR.U32.F32   S6, S6
      VCVTR.U32.F32   S2, S2
      VMOV            R1, S4
      VMOV            R2, S6
    }
    v11 = _R2 | (_R1 << 8);
    __asm { VMOV            R2, S2 }
    v13 = v11 | (_R2 << 16);
    __asm { VMOV            R2, S0 }
    *(_DWORD *)(result + 128) = v13 | (_R2 << 24);
    if ( !*(_DWORD *)result )
      result = j_j_j__ZN3mce12VertexFormat11enableFieldENS_11VertexFieldE((_BYTE *)(result + 52), 1);
  }
  return result;
}


int __fastcall Tessellator::color(int result, int a2, int a3, int a4, int a5)
{
  if ( !*(_BYTE *)(result + 236) )
  {
    *(_DWORD *)(result + 128) = a2 | (a3 << 8) | (a4 << 16) | (a5 << 24);
    if ( !*(_DWORD *)result )
      result = j_j_j__ZN3mce12VertexFormat11enableFieldENS_11VertexFieldE((_BYTE *)(result + 52), 1);
  }
  return result;
}


int __fastcall Tessellator::quadFacing(int result, signed __int8 a2)
{
  if ( !*(_DWORD *)(result + 164) )
    *(_BYTE *)(result + 136) = a2;
  return result;
}


char *__fastcall Tessellator::beginIndices(Tessellator *this, int a2)
{
  Tessellator *v2; // r4@1
  signed int v3; // r2@1
  mce::PolygonHelper *v4; // r0@1
  __int64 v5; // kr00_8@7
  int v6; // r8@7
  unsigned int v7; // r6@7
  char *result; // r0@7
  char *v9; // r9@9
  void *v10; // r0@13

  v2 = this;
  *((_BYTE *)this + 40) = 1;
  v3 = 4;
  v4 = (mce::PolygonHelper *)*((_DWORD *)this + 64);
  if ( (unsigned int)v4 < 0x10000 )
    v3 = 2;
  *((_DWORD *)v2 + 11) = v3;
  if ( !a2 )
  {
    if ( *((_BYTE *)v2 + 267) == 1 )
      a2 = *((_DWORD *)v2 + 11) * mce::PolygonHelper::calculateIndexCountForQuads(v4, 1u);
    else
      a2 = 0;
  }
  v5 = *(_QWORD *)((char *)v2 + 28);
  v6 = HIDWORD(v5) - v5;
  v7 = HIDWORD(v5) - v5 + a2;
  result = (char *)(*((_DWORD *)v2 + 9) - v5);
  if ( (unsigned int)result < v7 )
    if ( v7 )
      v9 = (char *)operator new(HIDWORD(v5) - v5 + a2);
      v9 = 0;
    if ( HIDWORD(v5) != (_DWORD)v5 )
      _aeabi_memmove(v9, v5);
    v10 = (void *)*((_DWORD *)v2 + 7);
    if ( v10 )
      operator delete(v10);
    result = &v9[v6];
    *((_DWORD *)v2 + 7) = v9;
    *((_DWORD *)v2 + 8) = &v9[v6];
    *((_DWORD *)v2 + 9) = &v9[v7];
  return result;
}


int __fastcall Tessellator::init(Tessellator *this)
{
  Tessellator *v1; // r4@1
  int result; // r0@1

  v1 = this;
  result = mce::RenderDevice::checkFeatureSupport();
  *((_BYTE *)v1 + 168) = result;
  return result;
}


char *__fastcall Tessellator::getVertexFormat(Tessellator *this)
{
  return (char *)this + 52;
}
