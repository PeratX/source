

void __fastcall EntityDamageByBlockSource::getDeathMessage(int a1, int a2, int *a3, int a4)
{
  int v4; // r6@1
  int v5; // r4@1
  int v6; // r0@1
  int v7; // r5@1
  __int64 v8; // r5@4
  int v9; // r1@4
  void *v10; // r0@4
  unsigned int *v11; // r2@5
  signed int v12; // r1@7
  __int64 v13; // r5@14
  int v14; // r1@14
  int v15; // [sp+4h] [bp-3Ch]@9
  int v16; // [sp+8h] [bp-38h]@14
  int v17; // [sp+Ch] [bp-34h]@4
  char v18; // [sp+10h] [bp-30h]@4

  v4 = a2;
  v5 = a1;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = a4;
  if ( v6 == 22 )
  {
    sub_21E8AF4(&v16, a3);
    LODWORD(v13) = operator new(4u);
    HIDWORD(v13) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                     (int)&v16,
                     (int)&v17,
                     v13);
    sub_21E94B4((void **)v5, "death.attack.magma");
    *(_QWORD *)(v5 + 4) = v13;
    v14 = v16;
    *(_DWORD *)(v5 + 12) = v13 + 4;
    v10 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) == &dword_28898C0 )
      return;
    v11 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      goto LABEL_21;
    }
  }
  else if ( v6 != 1 || *(_BYTE *)(a2 + 8) != *(_BYTE *)(Block::mCactus + 4) )
    sub_21E8AF4(&v15, a3);
    EntityDamageSource::getDeathMessage(v5, v4, &v15, v7);
    v10 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) == &dword_28898C0 )
    v11 = (unsigned int *)(v15 - 4);
  else
    sub_21E8AF4(&v17, a3);
    LODWORD(v8) = operator new(4u);
    HIDWORD(v8) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v17,
                    (int)&v18,
                    v8);
    sub_21E94B4((void **)v5, "death.attack.cactus");
    *(_QWORD *)(v5 + 4) = v8;
    v9 = v17;
    *(_DWORD *)(v5 + 12) = v8 + 4;
    v10 = (void *)(v9 - 12);
    if ( (int *)(v9 - 12) == &dword_28898C0 )
    v11 = (unsigned int *)(v9 - 4);
  v12 = (*v11)--;
LABEL_21:
  if ( v12 <= 0 )
    j_j_j_j__ZdlPv_9(v10);
}


int __fastcall EntityDamageByBlockSource::getBlock(int result, int a2)
{
  *(_BYTE *)result = *(_BYTE *)(a2 + 8);
  *(_BYTE *)(result + 1) = *(_BYTE *)(a2 + 9);
  return result;
}


int __fastcall EntityDamageByBlockSource::EntityDamageByBlockSource(int result, int a2, int a3)
{
  *(_DWORD *)result = &off_26F1500;
  *(_DWORD *)(result + 4) = a3;
  *(_BYTE *)(result + 8) = *(_BYTE *)a2;
  *(_BYTE *)(result + 9) = *(_BYTE *)(a2 + 1);
  return result;
}


signed int __fastcall EntityDamageByBlockSource::isBlockSource(EntityDamageByBlockSource *this)
{
  return 1;
}


void __fastcall EntityDamageByBlockSource::getDeathMessage(int a1, int a2, int *a3, int a4)
{
  EntityDamageByBlockSource::getDeathMessage(a1, a2, a3, a4);
}
