

int __fastcall StructureEditorData::StructureEditorData(int a1)
{
  int v1; // r5@1

  v1 = a1;
  *(_DWORD *)a1 = &unk_28898CC;
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  *(_DWORD *)(a1 + 8) = StructureBlockEntity::DEFAULT_STRUCTURE_OFFSET;
  *(_DWORD *)(a1 + 12) = dword_280FF9C;
  *(_DWORD *)(a1 + 16) = dword_280FFA0;
  *(_DWORD *)(a1 + 20) = StructureBlockEntity::DEFAULT_STRUCTURE_SIZE;
  *(_DWORD *)(a1 + 24) = dword_280FF90;
  *(_DWORD *)(a1 + 28) = dword_280FF94;
  *(_DWORD *)(a1 + 32) = 1;
  StructureSettings::StructureSettings(a1 + 40);
  return v1;
}


int __fastcall StructureEditorData::StructureEditorData(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r7@1
  int v5; // r8@1
  unsigned int v6; // r0@1
  int v7; // r2@1
  int v8; // r3@1
  int v9; // r6@1
  int v10; // r7@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &unk_28898CC;
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  v4 = a1 + 4;
  v5 = a1 + 40;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 12) = 0;
  *(_DWORD *)(v4 + 16) = 0;
  *(_DWORD *)(v4 + 20) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  StructureSettings::StructureSettings(a1 + 40);
  EntityInteraction::setInteractText((int *)v2, (int *)v3);
  EntityInteraction::setInteractText((int *)v4, (int *)(v3 + 4));
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v2 + 12) = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v2 + 16) = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(v2 + 20) = *(_DWORD *)(v3 + 20);
  *(_DWORD *)(v2 + 24) = *(_DWORD *)(v3 + 24);
  *(_DWORD *)(v2 + 28) = *(_DWORD *)(v3 + 28);
  v6 = *(_DWORD *)(v3 + 32);
  *(_BYTE *)(v2 + 32) = v6;
  *(_BYTE *)(v2 + 33) = BYTE1(v6);
  *(_BYTE *)(v2 + 34) = v6 >> 16;
  *(_BYTE *)(v2 + 35) = BYTE3(v6);
  v7 = *(_DWORD *)(v3 + 44);
  v8 = *(_DWORD *)(v3 + 48);
  v9 = *(_DWORD *)(v3 + 52);
  v10 = *(_DWORD *)(v3 + 56);
  *(_DWORD *)v5 = *(_DWORD *)(v3 + 40);
  *(_DWORD *)(v5 + 4) = v7;
  *(_DWORD *)(v5 + 8) = v8;
  *(_DWORD *)(v5 + 12) = v9;
  *(_DWORD *)(v5 + 16) = v10;
  *(_QWORD *)(v2 + 64) = *(_QWORD *)(v3 + 64);
  *(_DWORD *)(v2 + 72) = *(_DWORD *)(v3 + 72);
  *(_DWORD *)(v2 + 76) = *(_DWORD *)(v3 + 76);
  *(_DWORD *)(v2 + 80) = *(_DWORD *)(v3 + 80);
  *(_DWORD *)(v2 + 84) = *(_DWORD *)(v3 + 84);
  *(_DWORD *)(v2 + 88) = *(_DWORD *)(v3 + 88);
  *(_DWORD *)(v2 + 92) = *(_DWORD *)(v3 + 92);
  return v2;
}
