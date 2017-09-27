

int __fastcall StructureBlockInfo::StructureBlockInfo(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r1@1
  int v6; // r0@1
  int v8; // [sp+4h] [bp-14h]@1

  v4 = a1;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = a4;
  CompoundTag::clone((CompoundTag *)&v8, a3);
  v5 = v8;
  v8 = 0;
  v6 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v4 + 12) = v5;
  if ( v6 )
  {
    (*(void (**)(void))(*(_DWORD *)v6 + 4))();
    if ( v8 )
      (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  }
  return v4;
}


int __fastcall StructureBlockInfo::StructureBlockInfo(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r1@1
  int v4; // r0@1
  int v6; // [sp+4h] [bp-14h]@1

  v2 = a1;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  CompoundTag::clone((CompoundTag *)&v6, *(_DWORD *)(a2 + 12));
  v3 = v6;
  v6 = 0;
  v4 = *(_DWORD *)(v2 + 12);
  *(_DWORD *)(v2 + 12) = v3;
  if ( v4 )
  {
    (*(void (**)(void))(*(_DWORD *)v4 + 4))();
    if ( v6 )
      (*(void (**)(void))(*(_DWORD *)v6 + 4))();
  }
  return v2;
}
