

CommandOriginData *__fastcall CommandOriginData::~CommandOriginData(CommandOriginData *this)
{
  CommandOriginData *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5

  v1 = this;
  v2 = *((_DWORD *)this + 1);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  return v1;
}


int __fastcall CommandOriginData::CommandOriginData(int result)
{
  *(_DWORD *)(result + 4) = &unk_28898CC;
  return result;
}


int __fastcall CommandOriginData::CommandOriginData(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  *(_BYTE *)a1 = *(_BYTE *)a2;
  EntityInteraction::setInteractText((int *)(a1 + 4), (int *)(a2 + 4));
  if ( *(_BYTE *)v2 == 3 )
    *(_QWORD *)(v2 + 8) = *(_QWORD *)(v3 + 8);
  return v2;
}
