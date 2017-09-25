

void __fastcall HellDimension::~HellDimension(HellDimension *this)
{
  HellDimension::~HellDimension(this);
}


int __fastcall HellDimension::HellDimension(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1
  __int64 v5; // r1@1
  _DWORD *v7; // [sp+0h] [bp-48h]@1
  __int64 v8; // [sp+8h] [bp-40h]@1
  char v9; // [sp+10h] [bp-38h]@1

  v2 = a2;
  v3 = a1;
  Dimension::Dimension(a1, a2, 1, 128);
  *(_DWORD *)v3 = &off_27186B4;
  *(_DWORD *)(v3 + 4) = &off_271879C;
  *(_WORD *)(v3 + 20) = 32;
  v4 = operator new(4u);
  LODWORD(v5) = sub_1903BE4;
  *v4 = v2;
  HIDWORD(v5) = sub_1903BA0;
  v7 = v4;
  v8 = v5;
  ThreadLocal<BiomeSource>::ThreadLocal((int)&v9, (int)&v7);
  ThreadLocal<BiomeSource>::operator=(v3 + 24, (int)&v9);
  ThreadLocal<BiomeSource>::~ThreadLocal((int)&v9);
  if ( (_DWORD)v8 )
    ((void (*)(void))v8)();
  return v3;
}


int __fastcall HellDimension::showSky(HellDimension *this)
{
  return 0;
}


int __fastcall HellDimension::mayRespawn(HellDimension *this)
{
  return 0;
}


signed int __fastcall HellDimension::translatePosAcrossDimension(int a1, int a2, int a3, int a4)
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
  Util::convertPointBetweenDimensions(v6, _R4, v5, 1, (int)&v15);
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


int __fastcall HellDimension::init(HellDimension *this)
{
  HellDimension *v1; // r4@1
  int result; // r0@1

  v1 = this;
  Dimension::init((Dimension *)this);
  Dimension::setUltraWarm((Dimension *)v1, 1);
  Dimension::setCeiling((Dimension *)v1, 1);
  result = (unsigned __int8)Brightness::MIN;
  *((_BYTE *)v1 + 108) = Brightness::MIN;
  return result;
}


signed int __fastcall HellDimension::getTimeOfDay(HellDimension *this, int a2, float a3)
{
  return 1056964608;
}


int __fastcall HellDimension::isValidSpawn(HellDimension *this, int a2, int a3)
{
  return 0;
}


signed int __fastcall HellDimension::getMaxFogEnd(HellDimension *this)
{
  return 1119879168;
}


void __fastcall HellDimension::~HellDimension(HellDimension *this)
{
  Dimension *v1; // r0@1

  v1 = Dimension::~Dimension((Dimension *)this);
  j_j_j__ZdlPv_6(v1);
}


int __fastcall HellDimension::getFogColor(int result, float a2)
{
  __int64 v2; // r1@1

  LODWORD(v2) = 1045220557;
  HIDWORD(v2) = 1022739087;
  *(_QWORD *)result = v2;
  *(_QWORD *)(result + 8) = 4575657222431163023LL;
  return result;
}


int __fastcall HellDimension::isNaturalDimension(HellDimension *this)
{
  return 0;
}


int __fastcall HellDimension::updateLightRamp(int result)
{
  Dimension *v1; // r4@1

  v1 = (Dimension *)result;
  __asm
  {
    VMOV.F32        S16, #1.0
    VLDR            S20, =0.9
    VMOV.F32        S18, #3.0
    VLDR            S22, =0.1
  }
  _R5 = -1;
  LOBYTE(result) = Brightness::MAX;
  do
    ++_R5;
    result = (unsigned __int8)result;
    __asm
    {
      VMOV            S0, R0
      VMOV            S2, R5
      VCVT.F32.U32    S0, S0
      VCVT.F32.S32    S2, S2
      VDIV.F32        S0, S2, S0
      VSUB.F32        S2, S16, S0
      VMUL.F32        S2, S2, S18
      VADD.F32        S2, S2, S16
      VDIV.F32        S0, S0, S2
      VMUL.F32        S0, S0, S20
      VADD.F32        S0, S0, S22
      VMOV            R2, S0
    }
    Dimension::setBrightnessRamp(v1, _R5, _R2);
    result = (unsigned __int8)Brightness::MAX;
  while ( _R5 < (unsigned __int8)Brightness::MAX );
  return result;
}


signed int __fastcall HellDimension::getMaxFogStart(HellDimension *this)
{
  return 1092616192;
}


signed int __fastcall HellDimension::isFoggyAt(HellDimension *this, int a2, int a3)
{
  return 1;
}
