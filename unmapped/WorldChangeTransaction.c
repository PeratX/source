

int __fastcall WorldChangeTransaction::getBlock(WorldChangeTransaction *this, const BlockPos *a2)
{
  __int64 v2; // r8@1
  __int64 v3; // kr00_8@1
  unsigned int v4; // r5@1
  unsigned int v5; // r6@1
  int v6; // r0@1
  int v7; // r10@2
  int v8; // r7@2
  int v9; // r1@4
  bool v10; // zf@4
  int result; // r0@11
  int v12; // [sp+0h] [bp-28h]@1

  v2 = *(_QWORD *)a2;
  v12 = *((_DWORD *)a2 + 2);
  v3 = *(_QWORD *)*((_DWORD *)this + 4);
  v4 = 8976890 * *(_QWORD *)a2 + 981131 * (*(_QWORD *)a2 >> 32) + v12;
  v5 = v4 % (unsigned int)(*(_QWORD *)*((_DWORD *)this + 4) >> 32);
  v6 = *(_DWORD *)(v3 + 4 * v5);
  if ( v6 )
  {
    v7 = *(_DWORD *)v6;
    v8 = *(_DWORD *)(*(_DWORD *)v6 + 24);
    while ( 1 )
    {
      if ( v8 == v4 )
      {
        v9 = *(_DWORD *)(v7 + 4);
        v10 = (_DWORD)v2 == v9;
        if ( (_DWORD)v2 == v9 )
          v10 = HIDWORD(v2) == *(_DWORD *)(v7 + 8);
        if ( v10 && v12 == *(_DWORD *)(v7 + 12) )
          break;
      }
      if ( !*(_DWORD *)v7 )
        result = 0;
        goto LABEL_14;
      v8 = *(_DWORD *)(v3 + 24);
      v6 = v7;
      v7 = *(_DWORD *)v7;
      if ( *(_DWORD *)(v3 + 24) % HIDWORD(v3) != v5 )
    }
    if ( v6 )
      result = *(_DWORD *)v6;
    else
      result = 0;
  }
  else
    result = 0;
LABEL_14:
  if ( result )
    result += 22;
  return result;
}


signed int __fastcall WorldChangeTransaction::setBlock(WorldChangeTransaction *this, const BlockPos *a2, const FullBlock *a3, int a4)
{
  WorldChangeTransaction *v4; // r7@1
  const BlockPos *v5; // r6@1
  const FullBlock *v6; // r5@1
  int v7; // r4@1
  char v9; // [sp+4h] [bp-1Ch]@1

  v4 = this;
  v5 = a2;
  v6 = a3;
  v7 = a4;
  j_BlockSource::getBlockAndData((BlockSource *)&v9, *(const BlockPos **)this, (int)a2);
  return j_WorldChangeTransaction::setBlock(v4, v5, (const FullBlock *)&v9, v6, v7);
}


WorldChangeTransaction *__fastcall WorldChangeTransaction::~WorldChangeTransaction(WorldChangeTransaction *this)
{
  WorldChangeTransaction *v1; // r4@1
  int v2; // r5@1
  void *v3; // r0@2
  void *v4; // r6@3
  void *v5; // r0@4

  v1 = this;
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    v3 = *(void **)(v2 + 8);
    if ( v3 )
    {
      do
      {
        v4 = *(void **)v3;
        j_operator delete(v3);
        v3 = v4;
      }
      while ( v4 );
    }
    j___aeabi_memclr4_0(*(_QWORD *)v2, 4 * (*(_QWORD *)v2 >> 32));
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 12) = 0;
    v5 = *(void **)v2;
    if ( *(_DWORD *)v2 && (void *)(v2 + 24) != v5 )
      j_operator delete(v5);
    j_operator delete((void *)v2);
  }
  *((_DWORD *)v1 + 4) = 0;
  return v1;
}


signed int __fastcall WorldChangeTransaction::setBlock(WorldChangeTransaction *this, const BlockPos *a2, const FullBlock *a3, const FullBlock *a4, int a5)
{
  __int64 v5; // r8@1
  unsigned __int64 v6; // kr00_8@1
  unsigned int v7; // r7@1
  unsigned int v8; // r5@1
  int v9; // r0@1
  int v10; // r11@2
  int v11; // r4@2
  int v12; // r1@4
  bool v13; // zf@4
  int v14; // r10@9
  char v15; // r2@11
  char v16; // r1@11
  char v17; // r0@12
  char v18; // r3@12
  signed int result; // r0@12
  const FullBlock *v20; // [sp+0h] [bp-48h]@1
  unsigned __int64 *v21; // [sp+4h] [bp-44h]@1
  const BlockPos *v22; // [sp+8h] [bp-40h]@1
  int v23; // [sp+10h] [bp-38h]@1
  char v24; // [sp+14h] [bp-34h]@12
  int v25; // [sp+1Ch] [bp-2Ch]@12
  char v26; // [sp+20h] [bp-28h]@12
  char v27; // [sp+21h] [bp-27h]@12
  char v28; // [sp+22h] [bp-26h]@12
  char v29; // [sp+23h] [bp-25h]@12

  v20 = a3;
  v22 = a2;
  v5 = *(_QWORD *)a2;
  v23 = *((_DWORD *)a2 + 2);
  v21 = (unsigned __int64 *)*((_DWORD *)this + 4);
  v6 = *v21;
  v7 = 8976890 * *(_QWORD *)a2 + 981131 * (*(_QWORD *)a2 >> 32) + v23;
  v8 = v7 % (*v21 >> 32);
  v9 = *(_DWORD *)(*v21 + 4 * v8);
  if ( !v9 )
    goto LABEL_11;
  v10 = *(_DWORD *)v9;
  v11 = *(_DWORD *)(*(_DWORD *)v9 + 24);
  while ( 1 )
  {
    if ( v11 == v7 )
    {
      v12 = *(_DWORD *)(v10 + 4);
      v13 = (_DWORD)v5 == v12;
      if ( (_DWORD)v5 == v12 )
        v13 = HIDWORD(v5) == *(_DWORD *)(v10 + 8);
      if ( v13 && v23 == *(_DWORD *)(v10 + 12) )
        break;
    }
    v14 = *(_DWORD *)v10;
    if ( *(_DWORD *)v10 )
      v11 = *(_DWORD *)(v14 + 24);
      v9 = v10;
      v10 = *(_DWORD *)v10;
      if ( *(_DWORD *)(v14 + 24) % HIDWORD(v6) == v8 )
        continue;
  }
LABEL_11:
    v15 = *(_BYTE *)a4;
    v16 = *((_BYTE *)a4 + 1);
LABEL_12:
    v17 = *(_BYTE *)v20;
    v18 = *((_BYTE *)v20 + 1);
    v25 = a5;
    v26 = v17;
    v27 = v18;
    v28 = v15;
    v29 = v16;
    return j_std::_Hashtable<BlockPos,std::pair<BlockPos const,BlockChange>,std::allocator<std::pair<BlockPos const,BlockChange>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<BlockPos const&,BlockChange>(
             &v24,
             v21,
             (int)v22,
             (int)&v25);
  result = *(_DWORD *)v9;
  v15 = *(_BYTE *)a4;
  v16 = *((_BYTE *)a4 + 1);
  if ( !result )
    goto LABEL_12;
  *(_DWORD *)(result + 16) = a5;
  *(_BYTE *)(result + 22) = v15;
  *(_BYTE *)(result + 23) = v16;
  return result;
}


int __fastcall WorldChangeTransaction::WorldChangeTransaction(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4@1
  double v6; // r0@1
  unsigned int v8; // r0@1
  int v9; // r7@3
  void *v10; // r6@3

  v5 = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  *(_DWORD *)(a1 + 8) = a4;
  *(_DWORD *)(a1 + 12) = a5;
  LODWORD(v6) = j_operator new(0x1Cu);
  _R5 = LODWORD(v6);
  *(_DWORD *)(LODWORD(v6) + 20) = 0;
  *(_DWORD *)(LODWORD(v6) + 24) = 0;
  *(_DWORD *)(LODWORD(v6) + 8) = 0;
  *(_DWORD *)(LODWORD(v6) + 12) = 0;
  *(_DWORD *)LODWORD(v6) = 0;
  *(_DWORD *)(LODWORD(v6) + 4) = 0;
  *(_DWORD *)(LODWORD(v6) + 16) = 0;
  LODWORD(v6) += 16;
  *(_DWORD *)LODWORD(v6) = 1065353216;
  *(_DWORD *)(_R5 + 20) = 0;
  v8 = sub_21E6254(v6);
  *(_DWORD *)(_R5 + 4) = v8;
  if ( v8 == 1 )
  {
    *(_DWORD *)(_R5 + 24) = 0;
    v10 = (void *)(_R5 + 24);
  }
  else
    if ( v8 >= 0x40000000 )
      sub_21E57F4();
    v9 = 4 * v8;
    v10 = j_operator new(4 * v8);
    j___aeabi_memclr4_0((int)v10, v9);
  *(_DWORD *)_R5 = v10;
  *(_DWORD *)(v5 + 16) = _R5;
  __asm
    VLDR            S0, =64.0
    VLDR            S2, [R5,#0x10]
    VDIV.F32        S0, S0, S2
    VMOV            R0, S0
  _R0 = j_ceilf_0(_R0);
    VMOV            S0, R0
    VCVTR.U32.F32   S0, S0
    VMOV            R1, S0
  LODWORD(_R0) = _R5;
  j_std::_Hashtable<BlockPos,std::pair<BlockPos const,BlockChange>,std::allocator<std::pair<BlockPos const,BlockChange>>,std::__detail::_Select1st,std::equal_to<BlockPos>,std::hash<BlockPos>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::rehash(_R0);
  return v5;
}


signed int __fastcall WorldChangeTransaction::apply(WorldChangeTransaction *this)
{
  WorldChangeTransaction *v1; // r4@1
  _DWORD *v2; // r0@1
  signed int v3; // r5@2
  int v4; // r8@2
  _DWORD *v5; // r7@2
  int k; // r0@5
  int i; // r7@14
  int v11; // r0@15
  _DWORD *v12; // r5@16
  signed int v13; // r6@17
  char *v14; // r7@19
  signed int result; // r0@19
  _DWORD *j; // r5@20
  char v20; // [sp+4h] [bp-1Ch]@15
  char v21; // [sp+5h] [bp-1Bh]@15

  v1 = this;
  v2 = (_DWORD *)*((_DWORD *)this + 3);
  if ( !v2 )
  {
    v4 = (int)v1 + 16;
    goto LABEL_14;
  }
  v3 = 16;
  v4 = (int)v1 + 16;
  v5 = *(_DWORD **)(*((_DWORD *)v1 + 4) + 8);
  if ( !*((_DWORD *)v1 + 1) )
    v3 = 8;
  if ( !v5 )
LABEL_14:
    for ( i = *(_DWORD *)(*(_DWORD *)v4 + 8); i; i = *(_DWORD *)i )
    {
      v11 = *(_DWORD *)v1;
      v20 = *(_BYTE *)(i + 22);
      v21 = *(_BYTE *)(i + 23);
      j_BlockSource::setBlockAndData(v11, (BlockPos *)(i + 4), (int)&v20, *(_DWORD *)(i + 16), *((_DWORD *)v1 + 2));
    }
    v12 = (_DWORD *)*((_DWORD *)v1 + 3);
    if ( v12 )
      v13 = 20;
      if ( !*((_DWORD *)v1 + 1) )
        v13 = 12;
      v14 = *(char **)(*(_DWORD *)v4 + 8);
      result = 1;
      if ( !v14 )
        return result;
      (*(void (__fastcall **)(_DWORD, char *, char *, char *))(*v12 + v13))(
        *((_DWORD *)v1 + 3),
        v14 + 4,
        v14 + 20,
        v14 + 22);
      for ( j = *(_DWORD **)v14; j; j = (_DWORD *)*j )
        (*(void (**)(void))(**((_DWORD **)v1 + 3) + v13))();
    return 1;
  for ( k = (*(int (**)(void))(*v2 + v3))(); !k; k = (*(int (**)(void))(**((_DWORD **)v1 + 3) + v3))() )
    v5 = (_DWORD *)*v5;
    if ( !v5 )
      goto LABEL_14;
  return 0;
}
