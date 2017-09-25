

void __fastcall NbtIo::read(NbtIo *this, IDataInput *a2)
{
  NbtIo::read(this, a2);
}


void __fastcall NbtIo::read(NbtIo *this, IDataInput *a2)
{
  NbtIo *v2; // r4@1
  int v3; // r0@3
  void *v4; // r5@4
  int v5; // r0@4
  char *v6; // r0@6
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  int v9; // [sp+0h] [bp-20h]@1
  char *v10; // [sp+4h] [bp-1Ch]@1

  v2 = this;
  v10 = (char *)&unk_28898CC;
  Tag::readNamedTag(&v9, (int)a2, (int *)&v10);
  if ( v9 && (*(int (**)(void))(*(_DWORD *)v9 + 24))() == 10 )
  {
    v3 = v9;
    v9 = 0;
    *(_DWORD *)v2 = v3;
  }
  else
    v4 = operator new(0x1Cu);
    CompoundTag::CompoundTag((int)v4);
    v5 = v9;
    *(_DWORD *)v2 = v4;
    if ( v5 )
      (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  v6 = v10 - 12;
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v7 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
}
