

int __fastcall MobSpawnRules::getPopulationCap(int a1, _BYTE *a2)
{
  int v2; // r2@1

  v2 = a1 + 24;
  if ( !*a2 )
    v2 = a1 + 28;
  return *(_DWORD *)v2;
}


int __fastcall MobSpawnRules::setPopulationCap(int result, __int64 a2)
{
  *(_QWORD *)(result + 24) = a2;
  return result;
}


int __fastcall MobSpawnRules::setDifficultyRange(int result, __int64 a2)
{
  *(_QWORD *)(result + 32) = a2;
  return result;
}


int __fastcall MobSpawnRules::setRarity(int result, int a2)
{
  *(_DWORD *)(result + 20) = a2;
  return result;
}


int __fastcall MobSpawnRules::setHeightRange(int result, __int64 a2)
{
  *(_QWORD *)(result + 12) = a2;
  return result;
}


int __fastcall MobSpawnRules::getSpawnCount(int a1, int a2, BlockSource *this, Random *a4, int a5)
{
  int v5; // r6@1
  int v6; // r7@1
  int v7; // r0@1
  Random *v8; // r9@1
  BlockSource *v9; // r5@1
  unsigned int v10; // r4@11
  Level *v11; // r0@13
  int v12; // r0@13
  Dimension *v13; // r0@15
  int v14; // r4@15
  int v15; // r8@15
  Weather *v16; // r0@16
  int result; // r0@20
  int v23; // r4@23
  Dimension v28; // [sp+4h] [bp-2Ch]@17
  unsigned __int8 v29; // [sp+8h] [bp-28h]@17
  Dimension v30; // [sp+Ch] [bp-24h]@17
  Dimension v31; // [sp+10h] [bp-20h]@17

  v5 = a2;
  v6 = a1;
  v7 = *(_DWORD *)(a2 + 12);
  v8 = a4;
  v9 = this;
  if ( v7 < *(_DWORD *)(v6 + 12) || v7 > *(_DWORD *)(v6 + 16) || *(_BYTE *)(a2 + 1) && !*(_BYTE *)(v6 + 42) )
    goto LABEL_26;
  if ( *(_BYTE *)(a2 + 2) && !*(_BYTE *)(v6 + 43) )
  if ( *(_DWORD *)a2 & 0xFF && !*(_BYTE *)(v6 + 40) )
  if ( *(_DWORD *)a2 >= 0x1000000u && !*(_BYTE *)(v6 + 41) )
  v10 = *(_DWORD *)(v6 + 20);
  if ( (signed int)v10 >= 1 )
  {
    if ( Random::_genRandInt32(a4) % v10 )
      goto LABEL_26;
  }
  v11 = (Level *)BlockSource::getLevel(v9);
  v12 = Level::getDifficulty(v11);
  if ( v12 < *(_DWORD *)(v6 + 32) || v12 > *(_DWORD *)(v6 + 36) )
  v13 = (Dimension *)BlockSource::getDimension(v9);
  v14 = *(_DWORD *)(v5 + 4);
  v15 = (int)v13;
  if ( *(_BYTE *)(v6 + 8) )
    v16 = (Weather *)Dimension::getWeather(v13);
    if ( Weather::isLightning(v16) == 1 )
    {
      Dimension::getSkyDarken(&v31, v15);
      Dimension::getSkyDarken(&v30, v15);
      LOBYTE(v30) = 10;
      BlockSource::getRawBrightness((BlockSource *)&v29, v9, v5 + 8, 1);
      v14 = v29;
      Dimension::getSkyDarken(&v28, v15);
      LOBYTE(v28) = v31;
    }
  if ( v14 >= *(_DWORD *)v6 && v14 <= *(_DWORD *)(v6 + 4) )
    if ( *(_DWORD *)(v6 + 52) )
      result = (*(int (__fastcall **)(int, int, BlockSource *, Random *))(v6 + 56))(v6 + 44, v5, v9, v8);
    else
      _R0 = Random::_genRandInt32(v8);
      __asm
      {
        VMOV            S0, R0
        VLDR            D1, =2.32830644e-10
        VCVT.F64.U32    D0, S0
      }
      v23 = *(_QWORD *)(a5 + 20);
      _R0 = (*(_QWORD *)(a5 + 20) >> 32) - v23;
        VMUL.F64        D0, D0, D1
        VCVT.F32.F64    S0, D0
        VMOV            S2, R0
        VMUL.F32        S0, S0, S0
        VCVT.F32.S32    S2, S2
        VMUL.F32        S0, S0, S2
        VMOV            R0, S0
      _R0 = roundf(_R0);
        VCVTR.S32.F32   S0, S0
      result = _R0 + v23;
  else
LABEL_26:
    result = 0;
  return result;
}


int __fastcall MobSpawnRules::setUndergroundSpawner(int result)
{
  *(_BYTE *)(result + 41) = 1;
  return result;
}


int __fastcall MobSpawnRules::setBrightnessRange(int result, __int64 a2, bool a3)
{
  *(_QWORD *)result = a2;
  *(_BYTE *)(result + 8) = a3;
  return result;
}


int __fastcall MobSpawnRules::setSpawnCountCallback(int a1, int a2)
{
  int v2; // r12@0
  int v3; // lr@0
  int v4; // r4@1
  int v5; // r0@1
  int v6; // r5@1
  void (__fastcall *v7)(int *); // r3@1
  int v8; // r1@2
  int v9; // r5@4
  void (__cdecl *v10)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@4
  int v12; // [sp+0h] [bp-20h]@2
  int v13; // [sp+4h] [bp-1Ch]@2
  void (__cdecl *v14)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-18h]@1
  int v15; // [sp+Ch] [bp-14h]@2

  v4 = a1;
  v5 = 0;
  v6 = a2;
  v14 = 0;
  v7 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v7 )
  {
    v7(&v12);
    v5 = *(_DWORD *)(v6 + 12);
    v15 = *(_DWORD *)(v6 + 12);
    v8 = *(_DWORD *)(v6 + 8);
    v14 = *(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v6 + 8);
    v3 = v13;
    v2 = v12;
  }
  else
    v8 = 0;
  v9 = v4 + 44;
  *(_QWORD *)&v12 = *(_QWORD *)(v4 + 44);
  *(_DWORD *)v9 = v2;
  *(_DWORD *)(v9 + 4) = v3;
  v14 = *(void (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v4 + 52);
  v10 = v14;
  *(_DWORD *)(v4 + 52) = v8;
  v15 = *(_DWORD *)(v4 + 56);
  *(_DWORD *)(v4 + 56) = v5;
  if ( v10 )
    v10(&v12, &v12, 3, v10);
  return v4;
}


int __fastcall MobSpawnRules::MobSpawnRules(int result)
{
  __int64 v1; // r1@1

  LODWORD(v1) = 0;
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 15;
  HIDWORD(v1) = 255;
  *(_BYTE *)(result + 8) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_QWORD *)(result + 12) = v1;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = -1;
  *(_DWORD *)(result + 28) = -1;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 3;
  *(_DWORD *)(result + 40) = 0;
  return result;
}


int __fastcall MobSpawnRules::setSurfaceSpawner(int result)
{
  *(_BYTE *)(result + 40) = 1;
  return result;
}


int __fastcall MobSpawnRules::setUnderwaterSpawner(int result)
{
  *(_BYTE *)(result + 42) = 1;
  return result;
}


int __fastcall MobSpawnRules::setLavaSpawner(int result)
{
  *(_BYTE *)(result + 43) = 1;
  return result;
}
