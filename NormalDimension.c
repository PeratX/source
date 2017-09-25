

void __fastcall NormalDimension::~NormalDimension(NormalDimension *this)
{
  Dimension *v1; // r0@1

  v1 = Dimension::~Dimension((Dimension *)this);
  j_j_j__ZdlPv_6(v1);
}


signed int __fastcall NormalDimension::translatePosAcrossDimension(int a1, int a2, int a3, int a4)
{
  int v5; // r5@1
  int v6; // r6@1
  signed int result; // r0@5
  int v15; // [sp+4h] [bp+0h]@1

  _R4 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v5 = a4;
  v6 = a3;
  Level::getDimensionConversionData((Level *)&v15, *(_DWORD *)(a2 + 16));
  Util::convertPointBetweenDimensions(v6, _R4, v5, 0, (int)&v15);
  __asm { VLDR            S0, [R4] }
  _R1 = -31999872;
  __asm
  {
    VLDR            S2, =3.2e7
    VCVTR.S32.F32   S0, S0
  }
  _R2 = -31999872;
  __asm { VMOV            R0, S0 }
  if ( _R0 > -31999872 )
    _R2 = _R0;
    VMOV            S0, R2
    VCVT.F32.S32    S0, S0
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S2 }
    VSTR            S0, [R4]
    VLDR            S0, [R4,#8]
    VMOV            R0, S0
  if ( result > -31999872 )
    _R1 = result;
    VMOV            S0, R1
  __asm { VSTR            S0, [R4,#8] }
  return result;
}


int __fastcall NormalDimension::NormalDimension(int a1, Level *a2)
{
  Level *v2; // r5@1
  int v3; // r4@1
  char *v4; // r0@1
  int v5; // r0@1
  __int16 v6; // r3@1
  _DWORD *v7; // r0@3
  __int64 v8; // r1@3
  _DWORD *v10; // [sp+0h] [bp-48h]@3
  __int64 v11; // [sp+8h] [bp-40h]@3
  char v12; // [sp+10h] [bp-38h]@3

  v2 = a2;
  v3 = a1;
  v4 = Level::getLevelData(a2);
  v5 = LevelData::getGenerator((LevelData *)v4);
  v6 = 256;
  if ( !v5 )
    v6 = 128;
  Dimension::Dimension(v3, (int)v2, 0, v6);
  *(_DWORD *)v3 = &off_27187B4;
  *(_DWORD *)(v3 + 4) = &off_271889C;
  *(_BYTE *)(v3 + 118) = 1;
  *(_BYTE *)(v3 + 108) = Brightness::MAX;
  *(_WORD *)(v3 + 20) = 63;
  v7 = operator new(4u);
  LODWORD(v8) = sub_1903E04;
  *v7 = v2;
  HIDWORD(v8) = sub_1903DC4;
  v10 = v7;
  v11 = v8;
  ThreadLocal<BiomeSource>::ThreadLocal((int)&v12, (int)&v10);
  ThreadLocal<BiomeSource>::operator=(v3 + 24, (int)&v12);
  ThreadLocal<BiomeSource>::~ThreadLocal((int)&v12);
  if ( (_DWORD)v11 )
    ((void (*)(void))v11)();
  return v3;
}


void __fastcall NormalDimension::~NormalDimension(NormalDimension *this)
{
  NormalDimension::~NormalDimension(this);
}
