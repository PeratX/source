

int __fastcall OceanMonumentStart::OceanMonumentStart(int a1)
{
  int v1; // r4@1

  v1 = a1;
  j___aeabi_memclr4(a1 + 4, 44);
  *(_DWORD *)v1 = &off_2718D68;
  *(_BYTE *)(v1 + 48) = 0;
  return v1;
}


signed int __fastcall OceanMonumentStart::createMonument(OceanMonumentStart *this, Dimension *a2, Random *a3, int a4, int a5)
{
  OceanMonumentStart *v5; // r9@1
  Random *v7; // r5@1
  Level *v8; // r11@1
  unsigned int v9; // r6@1
  int v10; // r0@1
  signed int v11; // r1@1
  int v12; // r3@2
  int v13; // r3@2
  int v14; // r4@2
  int v17; // r11@3
  signed int v23; // r2@3
  unsigned int v26; // r0@3
  int v27; // r1@3
  int v28; // r0@4
  int v29; // r4@4
  int v30; // r6@4
  MonumentBuilding *v31; // r6@5
  __int64 v32; // r0@5
  signed int result; // r0@9
  MonumentBuilding *v34; // [sp+4h] [bp-2Ch]@5
  int v35; // [sp+8h] [bp-28h]@5

  v5 = this;
  _R8 = a4;
  v7 = a3;
  v8 = (Level *)Dimension::getLevel(a2);
  v9 = Level::getSeed(v8);
  j_Random::_checkThreadId(v7);
  *(_DWORD *)v7 = v9;
  *((_DWORD *)v7 + 625) = 625;
  v10 = 0;
  v11 = 1;
  *((_BYTE *)v7 + 2504) = 0;
  *((_DWORD *)v7 + 627) = 0;
  *((_DWORD *)v7 + 1) = v9;
  do
  {
    v12 = v9 ^ (v9 >> 30);
    v9 = v11++ + 1812433253 * v12;
    v13 = v10 + 1812433253 * v12 + 1;
    v14 = (int)v7 + 4 * v10++;
    *(_DWORD *)(v14 + 8) = v13;
  }
  while ( v10 != 397 );
  *((_DWORD *)v7 + 625) = 624;
  *((_DWORD *)v7 + 628) = 398;
  _R6 = j_Random::_genRandInt32(v7);
  _R4 = j_Random::_genRandInt32(v7);
  v17 = Level::getSeed(v8);
  __asm
    VMOV            S0, R6
    VLDR            D1, =2.32830644e-10
    VMOV            S4, R4
  _R0 = a5;
  __asm { VCVT.F64.U32    D0, S0 }
  v23 = 1;
    VCVT.F64.U32    D2, S4
    VMUL.F64        D0, D0, D1
    VMUL.F64        D1, D2, D1
    VMOV            S4, R8
    VCVT.F32.F64    S0, D0
    VCVT.F32.S32    S4, S4
    VMOV            S6, R0
    VCVT.F32.F64    S2, D1
    VCVT.F32.S32    S6, S6
    VMUL.F32        S0, S0, S4
    VMUL.F32        S2, S2, S6
    VCVTR.U32.F32   S0, S0
    VMOV            R0, S0
    VCVTR.U32.F32   S0, S2
    VMOV            R1, S0
  v26 = _R0 ^ v17 ^ _R1;
  *(_DWORD *)v7 = v26;
  v27 = 0;
  *((_DWORD *)v7 + 1) = v26;
    v28 = v26 ^ (v26 >> 30);
    v29 = (int)v7 + 4 * v27;
    v30 = v27++ + 1812433253 * v28;
    v26 = v23++ + 1812433253 * v28;
    *(_DWORD *)(v29 + 8) = v30 + 1;
  while ( v27 != 397 );
  v35 = (j_Random::_genRandInt32(v7) & 3) + 2;
  v31 = (MonumentBuilding *)j_operator new(0x58u);
  MonumentBuilding::MonumentBuilding(v31, v7, (16 * _R8 | 8) - 29, (16 * a5 | 8) - 29, &v35);
  v34 = v31;
  v32 = *((_QWORD *)v5 + 5);
  if ( (_DWORD)v32 == HIDWORD(v32) )
    std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<MonumentBuilding,std::default_delete<MonumentBuilding>>>(
      (OceanMonumentStart *)((char *)v5 + 36),
      (int *)&v34);
    if ( v34 )
      (*(void (**)(void))(*(_DWORD *)v34 + 4))();
  else
    v34 = 0;
    *(_DWORD *)v32 = v31;
    *((_DWORD *)v5 + 10) = v32 + 4;
  StructureStart::calculateBoundingBox(v5);
  result = 1;
  *((_BYTE *)v5 + 48) = 1;
  return result;
}


OceanMonumentStart *__fastcall OceanMonumentStart::OceanMonumentStart(OceanMonumentStart *this, int a2, int a3, int a4, int a5)
{
  OceanMonumentStart *v5; // r4@1

  v5 = this;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 7) = a4;
  *((_DWORD *)this + 8) = a5;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *(_DWORD *)this = &off_2718D68;
  *((_BYTE *)this + 48) = 0;
  OceanMonumentStart::createMonument(this, (Dimension *)a2, (Random *)a3, a4, a5);
  return v5;
}


void __fastcall OceanMonumentStart::~OceanMonumentStart(OceanMonumentStart *this)
{
  OceanMonumentStart::~OceanMonumentStart(this);
}


int __fastcall OceanMonumentStart::postProcess(OceanMonumentStart *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  OceanMonumentStart *v4; // r7@1
  const BoundingBox *v5; // r8@1
  Random *v6; // r10@1
  BlockSource *v7; // r11@1
  __int64 v8; // kr00_8@2
  int v9; // r6@3
  Dimension *v10; // r0@7

  v4 = this;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( !*((_BYTE *)this + 48) )
  {
    v8 = *(_QWORD *)((char *)this + 36);
    if ( HIDWORD(v8) != (_DWORD)v8 )
    {
      v9 = v8;
      do
      {
        if ( *(_DWORD *)v9 )
          (*(void (**)(void))(**(_DWORD **)v9 + 4))();
        *(_DWORD *)v9 = 0;
        v9 += 4;
      }
      while ( HIDWORD(v8) != v9 );
    }
    *((_DWORD *)v4 + 10) = v8;
    v10 = (Dimension *)BlockSource::getDimension(v7);
    OceanMonumentStart::createMonument(v4, v10, v6, *(_QWORD *)((char *)v4 + 28), *(_QWORD *)((char *)v4 + 28) >> 32);
  }
  return j_j_j__ZN14StructureStart11postProcessEP11BlockSourceR6RandomRK11BoundingBox_0(v4, v7, v6, v5);
}


signed int __fastcall OceanMonumentStart::getType(OceanMonumentStart *this)
{
  return 4;
}


void __fastcall OceanMonumentStart::~OceanMonumentStart(OceanMonumentStart *this)
{
  OceanMonumentStart *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED

  v1 = this;
  *(_DWORD *)this = &off_271946C;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 36);
  if ( v2 != v3 )
  {
    do
    {
      if ( *(_DWORD *)v2 )
        (*(void (**)(void))(**(_DWORD **)v2 + 4))();
      *(_DWORD *)v2 = 0;
      v2 += 4;
    }
    while ( v3 != v2 );
    v2 = (char *)*((_DWORD *)v1 + 9);
  }
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_6((void *)v1);
}
