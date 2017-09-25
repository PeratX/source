

signed int __fastcall MineshaftStart::getType(MineshaftStart *this)
{
  return 3;
}


int __fastcall MineshaftStart::MineshaftStart(int a1, int a2, Random *a3, __int64 *a4)
{
  int v4; // r4@1
  __int64 *v5; // r7@1
  Random *v6; // r9@1
  int v7; // r8@1
  __int64 v8; // r1@1
  int v9; // r12@1
  Dimension *v10; // r0@1
  void *v11; // r6@1
  int (__fastcall *v12)(void *, char *); // r5@1
  int v13; // r0@1
  int v18; // r10@1
  char v19; // r2@1
  __int64 v20; // kr08_8@5
  void *v21; // r7@5
  __int64 v22; // r0@5
  int v23; // r0@8
  int v24; // r2@9
  int v25; // r0@9
  int v26; // r1@9
  signed int v27; // kr00_4@9
  __int64 v28; // r0@9
  unsigned int v29; // r6@10
  void *v31; // [sp+8h] [bp-38h]@5
  char v32; // [sp+Ch] [bp-34h]@5
  char v33; // [sp+Dh] [bp-33h]@5
  char v34; // [sp+Eh] [bp-32h]@5
  char v35; // [sp+Fh] [bp-31h]@5
  char v36; // [sp+14h] [bp-2Ch]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = *a4;
  v9 = a1 + 28;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)v9 = __PAIR__(HIDWORD(v8), (unsigned int)v8);
  *(_DWORD *)(v9 + 8) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)a1 = &off_2723798;
  v10 = j_Dimension::getBiomes((Dimension *)v7);
  v11 = j_ThreadLocal<BiomeSource>::getLocal((int)v10);
  v12 = *(int (__fastcall **)(void *, char *))(*(_DWORD *)v11 + 36);
  j_BlockPos::BlockPos((int)&v36, v5, 0);
  v13 = v12(v11, &v36);
  __asm { VMOV.F32        S2, #0.5 }
  v18 = *(_DWORD *)(v13 + 264);
  v19 = 0;
  __asm { VMOV.F32        S0, #1.0 }
  if ( v18 == 8 )
    v19 = 5;
    __asm { VMOVEQ.F32      S0, S2 }
  v32 = *(_BYTE *)(Block::mWoodPlanks + 4);
  v33 = v19;
  v34 = *(_BYTE *)(Block::mFence + 4);
  v35 = v19;
  __asm { VSTR            S0, [SP,#0x40+var_30] }
  v20 = *v5;
  v21 = j_operator new(0x38u);
  j_MineshaftRoom::MineshaftRoom((int)v21, (int)&v32, 0, v6, 16 * v20 | 2, 16 * HIDWORD(v20) | 2);
  v31 = v21;
  v22 = *(_QWORD *)(v4 + 40);
  if ( (_DWORD)v22 == HIDWORD(v22) )
  {
    j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<MineshaftRoom,std::default_delete<MineshaftRoom>>>(
      (_QWORD *)(v4 + 36),
      (int *)&v31);
  }
  else
    v31 = 0;
    *(_DWORD *)v22 = v21;
    *(_DWORD *)(v4 + 40) = v22 + 4;
  (*(void (__fastcall **)(void *, void *, int, Random *))(*(_DWORD *)v21 + 16))(v21, v21, v4 + 36, v6);
  j_StructureStart::calculateBoundingBox((StructureStart *)v4);
  v23 = *(_WORD *)(v7 + 20);
    v24 = *(_DWORD *)(v4 + 20);
    v25 = v23 + 5;
    v26 = *(_DWORD *)(v4 + 8);
    v27 = v24 + 1 - v26;
    *(_DWORD *)(v4 + 8) = v26 + v25 - v24 + v27 / 2;
    *(_DWORD *)(v4 + 20) = v25 + v27 / 2;
    v28 = *(_QWORD *)(v4 + 36);
    if ( HIDWORD(v28) != (_DWORD)v28 )
    {
      v29 = 0;
      do
      {
        (*(void (**)(void))(**(_DWORD **)(v28 + 4 * v29) + 8))();
        v28 = *(_QWORD *)(v4 + 36);
        ++v29;
      }
      while ( v29 < (HIDWORD(v28) - (signed int)v28) >> 2 );
    }
    j_StructureStart::moveToLevel((StructureStart *)v4, v6, v23 - 10);
  if ( v31 )
    (*(void (**)(void))(*(_DWORD *)v31 + 4))();
  return v4;
}


int __fastcall MineshaftStart::_moveToSurface(MineshaftStart *this, int a2)
{
  MineshaftStart *v2; // r4@1
  int v3; // r1@1
  int v4; // r2@1
  int v5; // r0@1
  signed int v6; // kr00_4@1
  __int64 v7; // r0@1
  unsigned int v8; // r6@2

  v2 = this;
  v3 = a2 + 5;
  v4 = *((_DWORD *)this + 5);
  v5 = *((_DWORD *)this + 2);
  v6 = v4 + 1 - v5;
  *((_DWORD *)v2 + 2) = v5 + v3 - v4 + v6 / 2;
  *((_DWORD *)v2 + 5) = v3 + v6 / 2;
  v7 = *(_QWORD *)((char *)v2 + 36);
  if ( HIDWORD(v7) != (_DWORD)v7 )
  {
    v8 = 0;
    do
    {
      (*(void (**)(void))(**(_DWORD **)(v7 + 4 * v8) + 8))();
      v7 = *(_QWORD *)((char *)v2 + 36);
      ++v8;
    }
    while ( v8 < (HIDWORD(v7) - (signed int)v7) >> 2 );
  }
  return v7;
}


void __fastcall MineshaftStart::~MineshaftStart(MineshaftStart *this)
{
  MineshaftStart::~MineshaftStart(this);
}


void __fastcall MineshaftStart::~MineshaftStart(MineshaftStart *this)
{
  MineshaftStart *v1; // r4@1
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
  j_j_j__ZdlPv_7((void *)v1);
}
