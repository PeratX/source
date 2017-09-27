

int __fastcall StructureEntityInfo::StructureEntityInfo(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r2@1
  int v4; // r3@1
  int v5; // r1@1
  int v6; // r0@1
  int v8; // [sp+4h] [bp-14h]@1

  v2 = a1;
  v3 = *(_DWORD *)(a2 + 4);
  v4 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = v3;
  *(_DWORD *)(a1 + 8) = v4;
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(a1 + 24) = 0;
  CompoundTag::clone((CompoundTag *)&v8, *(_DWORD *)(a2 + 24));
  v5 = v8;
  v8 = 0;
  v6 = *(_DWORD *)(v2 + 24);
  *(_DWORD *)(v2 + 24) = v5;
  if ( v6 )
  {
    (*(void (**)(void))(*(_DWORD *)v6 + 4))();
    if ( v8 )
      (*(void (**)(void))(*(_DWORD *)v8 + 4))();
  }
  return v2;
}


int __fastcall StructureEntityInfo::StructureEntityInfo(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  __int64 v5; // kr00_8@1
  int v6; // r1@1
  int v7; // r0@1
  int v9; // [sp+4h] [bp-14h]@1

  v4 = a1;
  v5 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)a1 = v5;
  *(_DWORD *)(a1 + 12) = *(_DWORD *)a3;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a3 + 4);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(a1 + 24) = 0;
  CompoundTag::clone((CompoundTag *)&v9, a4);
  v6 = v9;
  v9 = 0;
  v7 = *(_DWORD *)(v4 + 24);
  *(_DWORD *)(v4 + 24) = v6;
  if ( v7 )
  {
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
    if ( v9 )
      (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  }
  return v4;
}
