

int __fastcall BeaconBeamSection::BeaconBeamSection(int result)
{
  __int64 v1; // kr00_8@1
  int v2; // r1@1

  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  v1 = *(_QWORD *)&qword_283E614;
  v2 = unk_283E61C;
  *(_DWORD *)(result + 4) = Color::WHITE;
  *(_QWORD *)(result + 8) = v1;
  *(_DWORD *)(result + 16) = v2;
  return result;
}
