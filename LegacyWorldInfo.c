

LocalWorldInfo *__fastcall LegacyWorldInfo::LegacyWorldInfo(LocalWorldInfo *a1)
{
  LocalWorldInfo *v1; // r4@1

  v1 = a1;
  LocalWorldInfo::LocalWorldInfo(a1);
  sub_119C884((void **)v1 + 24, (const char *)&unk_257BC67);
  return v1;
}


char *__fastcall LegacyWorldInfo::getIdentifier(LegacyWorldInfo *this)
{
  return (char *)this + 96;
}


int __fastcall LegacyWorldInfo::LegacyWorldInfo(int a1, int *a2, int a3)
{
  int *v3; // r5@1
  int v4; // r4@1

  v3 = a2;
  v4 = a1;
  LocalWorldInfo::LocalWorldInfo(a1, a3);
  sub_119C854((int *)(v4 + 96), v3);
  return v4;
}
