

char *__fastcall StructureSettings::getChunkPos(StructureSettings *this)
{
  return (char *)this + 24;
}


void __fastcall StructureSettings::setIntegrity(StructureSettings *this, float _R1)
{
  __asm
  {
    VMOV            S2, R1
    VLDR            S0, =0.0
    VMOV.F32        S4, #1.0
    VCMPE.F32       S2, #0.0
    VMRS            APSR_nzcv, FPSCR
    VCMPE.F32       S2, S4
  }
  if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
    __asm { VMOVGT.F32      S0, S2 }
  __asm { VMRS            APSR_nzcv, FPSCR }
    __asm { VMOVGT.F32      S0, S4 }
  __asm { VSTR            S0, [R0] }
}


int __fastcall StructureSettings::_calculateBoundingBox(int result, const ChunkPos *a2, int a3)
{
  __int64 v3; // kr00_8@1
  signed int v4; // lr@2
  signed int v5; // r2@2
  signed int v6; // r1@2
  int v7; // r3@2
  signed int v8; // r4@2
  int v9; // r12@2
  int v10; // r3@3

  v3 = *(_QWORD *)a3;
  if ( *(_QWORD *)&ChunkPos::INVALID == *(_QWORD *)a3 )
  {
    v4 = 0x7FFFFFFF;
    *(_DWORD *)result = 0;
    *(_DWORD *)(result + 4) = 0;
    v5 = 0x7FFFFFFF;
    *(_DWORD *)(result + 8) = 0;
    *(_DWORD *)(result + 12) = 0;
    v6 = -2147483647;
    v7 = 0x7FFFFFFF;
    v8 = -2147483647;
    v9 = -2147483647;
  }
  else
    v10 = *(_DWORD *)(a3 + 4);
    v5 = 0;
    *(_DWORD *)(result + 16) = 0;
    v9 = 16 * v10 + 15;
    v6 = 16 * v3 + 15;
    v7 = 16 * v10;
    v4 = 16 * v3;
    v8 = 127;
  *(_DWORD *)result = v4;
  *(_DWORD *)(result + 4) = v5;
  *(_DWORD *)(result + 8) = v7;
  *(_DWORD *)(result + 12) = v6;
  *(_DWORD *)(result + 16) = v8;
  *(_DWORD *)(result + 20) = v9;
  return result;
}


int __fastcall StructureSettings::updateBoundingBoxFromChunkPos(int result)
{
  int v1; // lr@1
  int v2; // r1@2
  int v3; // lr@2
  signed int v4; // r4@2
  int v5; // r2@2
  signed int v6; // r3@2
  int v7; // r12@2
  int v8; // r3@3

  v1 = *(_DWORD *)(result + 24);
  if ( *(_QWORD *)&ChunkPos::INVALID == *(_QWORD *)(result + 24) )
  {
    v2 = -2147483647;
    v3 = 0x7FFFFFFF;
    v4 = 0x7FFFFFFF;
    v5 = 0x7FFFFFFF;
    v6 = -2147483647;
    v7 = -2147483647;
  }
  else
    v8 = *(_DWORD *)(result + 28);
    v7 = 16 * v8 + 15;
    v2 = 16 * v1 + 15;
    v5 = 16 * v8;
    v6 = 127;
    v3 = 16 * v1;
    v4 = 0;
  *(_DWORD *)(result + 32) = v3;
  *(_DWORD *)(result + 36) = v4;
  *(_DWORD *)(result + 40) = v5;
  *(_DWORD *)(result + 44) = v2;
  *(_DWORD *)(result + 48) = v6;
  *(_DWORD *)(result + 52) = v7;
  return result;
}


int __fastcall StructureSettings::StructureSettings(int result, int a2, __int16 a3, char a4, int a5, int a6)
{
  int v6; // r12@1

  *(_DWORD *)result = 1065353216;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = a2;
  *(_WORD *)(result + 12) = a3;
  v6 = result + 24;
  *(_BYTE *)(result + 14) = a4;
  *(_BYTE *)(result + 15) = 1;
  *(_DWORD *)(result + 16) = a5;
  *(_QWORD *)v6 = *(_QWORD *)&ChunkPos::INVALID;
  *(_DWORD *)(v6 + 8) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 48) = 0;
  *(_DWORD *)(result + 52) = 0;
  *(_DWORD *)(result + 32) = *(_DWORD *)a6;
  *(_DWORD *)(result + 36) = *(_DWORD *)(a6 + 4);
  *(_DWORD *)(result + 40) = *(_DWORD *)(a6 + 8);
  *(_DWORD *)(result + 44) = *(_DWORD *)(a6 + 12);
  *(_DWORD *)(result + 48) = *(_DWORD *)(a6 + 16);
  *(_DWORD *)(result + 52) = *(_DWORD *)(a6 + 20);
  return result;
}


int __fastcall StructureSettings::StructureSettings(int result)
{
  int v1; // r3@1
  __int64 v2; // r1@1

  *(_DWORD *)result = 1065353216;
  *(_BYTE *)(result + 14) = 0;
  *(_WORD *)(result + 12) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_BYTE *)(result + 15) = 1;
  *(_DWORD *)(result + 16) = 0;
  v1 = *(&ChunkPos::INVALID + 1);
  *(_DWORD *)(result + 24) = ChunkPos::INVALID;
  *(_DWORD *)(result + 28) = v1;
  LODWORD(v2) = 0x7FFFFFFF;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 0;
  HIDWORD(v2) = -2147483647;
  *(_DWORD *)(result + 32) = 0x7FFFFFFF;
  *(_DWORD *)(result + 36) = 0x7FFFFFFF;
  *(_QWORD *)(result + 40) = v2;
  *(_DWORD *)(result + 48) = -2147483647;
  *(_DWORD *)(result + 52) = -2147483647;
  return result;
}


char *__fastcall StructureSettings::getMirror(StructureSettings *this)
{
  return (char *)this + 8;
}


void __fastcall StructureSettings::setIntegrity(StructureSettings *this, float _R1)
{
  StructureSettings::setIntegrity(this, _R1);
}


int __fastcall StructureSettings::getIntegrity(StructureSettings *this)
{
  return *(_DWORD *)this;
}


int __fastcall StructureSettings::setSeed(int result, unsigned int a2)
{
  *(_DWORD *)(result + 4) = a2;
  return result;
}


int __fastcall StructureSettings::setBoundingBox(int result, const BoundingBox *a2)
{
  *(_DWORD *)(result + 32) = *(_DWORD *)a2;
  *(_DWORD *)(result + 36) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 40) = *((_DWORD *)a2 + 2);
  *(_DWORD *)(result + 44) = *((_DWORD *)a2 + 3);
  *(_DWORD *)(result + 48) = *((_DWORD *)a2 + 4);
  *(_DWORD *)(result + 52) = *((_DWORD *)a2 + 5);
  return result;
}


int __fastcall StructureSettings::setIgnoreBlock(int result, const Block *a2)
{
  *(_DWORD *)(result + 16) = a2;
  return result;
}


int __fastcall StructureSettings::ignoreStructureBlocks(int result, bool a2)
{
  *(_BYTE *)(result + 15) = a2;
  return result;
}


int __fastcall StructureSettings::setChunkPos(int result, const ChunkPos *a2)
{
  *(_QWORD *)(result + 24) = *(_QWORD *)a2;
  return result;
}


char *__fastcall StructureSettings::getBoundingBox(StructureSettings *this)
{
  StructureSettings *v1; // r1@1
  char *result; // r0@1
  int v3; // t1@1
  unsigned int v4; // r2@4
  int v5; // r4@5

  v1 = this;
  v3 = *((_DWORD *)this + 8);
  result = (char *)this + 32;
  if ( *((_DWORD *)result + 3) < v3
    || *((_DWORD *)v1 + 12) < *((_DWORD *)v1 + 9)
    || *((_DWORD *)v1 + 13) < *((_DWORD *)v1 + 10) )
  {
    v4 = *((_QWORD *)v1 + 3);
    if ( __PAIR__((unsigned int)(*((_QWORD *)v1 + 3) >> 32) ^ *(&ChunkPos::INVALID + 1), v4) != *(_QWORD *)&ChunkPos::INVALID )
    {
      v5 = 16 * *((_DWORD *)v1 + 7);
      *((_DWORD *)v1 + 8) = 16 * v4;
      *((_DWORD *)v1 + 9) = 0;
      *((_DWORD *)v1 + 10) = v5;
      *((_DWORD *)v1 + 11) = 16 * v4 + 15;
      *((_DWORD *)v1 + 12) = 127;
      *((_DWORD *)v1 + 13) = v5 + 15;
    }
  }
  return result;
}


char *__fastcall StructureSettings::getBoundingBoxConst(StructureSettings *this)
{
  return (char *)this + 32;
}


char *__fastcall StructureSettings::getRotation(StructureSettings *this)
{
  return (char *)this + 12;
}


signed int __fastcall StructureSettings::retrieveRandom(StructureSettings *this, Random *a2)
{
  StructureSettings *v2; // r7@1
  Random *v3; // r4@1
  unsigned int v4; // r6@1
  unsigned int v5; // r0@2
  int *v6; // r1@2
  signed int v7; // r2@2
  signed int v8; // r3@2
  int v9; // r0@3
  int v10; // r5@3
  Random *v11; // r0@5
  signed int v12; // r1@5
  signed int v13; // r2@5
  int v14; // r7@6
  int v15; // r5@6
  signed int result; // r0@7
  unsigned int v17; // [sp+0h] [bp-9E8h]@2
  unsigned int v18; // [sp+4h] [bp-9E4h]@2
  int v19; // [sp+8h] [bp-9E0h]@2
  int v20; // [sp+9C4h] [bp-24h]@2
  char v21; // [sp+9C8h] [bp-20h]@2
  int v22; // [sp+9CCh] [bp-1Ch]@2
  int v23; // [sp+9D0h] [bp-18h]@4

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 1);
  if ( !v4 )
  {
    v5 = sub_21E67AC((int)&Random::mRandomDevice);
    v17 = v5;
    v20 = 625;
    v21 = 0;
    v22 = 0;
    v6 = &v19;
    v7 = 1;
    v8 = -397;
    v18 = v5;
    do
    {
      v9 = v5 ^ (v5 >> 30);
      v10 = v8++ + 1812433253 * v9;
      v5 = v7++ + 1812433253 * v9;
      *v6 = v10 + 398;
      ++v6;
    }
    while ( v8 );
    v20 = 624;
    v23 = 398;
    j___aeabi_memcpy4((int)v3, (int)&v17, 2516);
    v4 = *((_DWORD *)v2 + 1);
  }
  j_Random::_checkThreadId(v3);
  *(_DWORD *)v3 = v4;
  *((_DWORD *)v3 + 625) = 625;
  *((_BYTE *)v3 + 2504) = 0;
  *((_DWORD *)v3 + 627) = 0;
  v11 = (Random *)((char *)v3 + 8);
  v12 = 1;
  v13 = -397;
  *((_DWORD *)v3 + 1) = v4;
  do
    v14 = v4 ^ (v4 >> 30);
    v15 = v13++ + 1812433253 * v14;
    v4 = v12++ + 1812433253 * v14;
    *(_DWORD *)v11 = v15 + 398;
    v11 = (Random *)((char *)v11 + 4);
  while ( v13 );
  *((_DWORD *)v3 + 625) = 624;
  result = 398;
  *((_DWORD *)v3 + 628) = 398;
  return result;
}


int __fastcall StructureSettings::setRotation(int result, Rotation a2)
{
  *(_WORD *)(result + 12) = a2;
  return result;
}


int __fastcall StructureSettings::setMirror(int result, int a2)
{
  *(_DWORD *)(result + 8) = a2;
  return result;
}


int __fastcall StructureSettings::setIgnoreEntities(int result, bool a2)
{
  *(_BYTE *)(result + 14) = a2;
  return result;
}
