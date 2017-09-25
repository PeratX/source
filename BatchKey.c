

int __fastcall BatchKey::BatchKey(int a1, int a2, int a3, int a4, int a5, int a6, int *a7)
{
  int v7; // r6@1
  int v8; // r12@1
  int *v9; // r8@1
  int v10; // r0@1
  int v11; // r1@1
  int v12; // r2@1
  int v13; // r3@1
  char *v14; // r0@1
  unsigned int *v16; // r2@3
  signed int v17; // r1@5
  char *v18; // [sp+4h] [bp-34h]@1
  int v19; // [sp+8h] [bp-30h]@1

  v7 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v8 = a1 + 16;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)&a2;
  v9 = (int *)(a1 + 52);
  v10 = *(_DWORD *)a4;
  v11 = *(_DWORD *)(a4 + 4);
  v12 = *(_DWORD *)(a4 + 8);
  v13 = *(_DWORD *)(a4 + 12);
  *(_DWORD *)v8 = v10;
  *(_DWORD *)(v8 + 4) = v11;
  *(_DWORD *)(v8 + 8) = v12;
  *(_DWORD *)(v8 + 12) = v13;
  *(_DWORD *)(v7 + 32) = *(_DWORD *)a6;
  *(_DWORD *)(v7 + 36) = *(_DWORD *)(a6 + 4);
  *(_DWORD *)(v7 + 40) = *(_DWORD *)(a6 + 8);
  *(_DWORD *)(v7 + 44) = *(_DWORD *)(a6 + 12);
  *(_WORD *)(v7 + 48) = *(_WORD *)(a6 + 16);
  sub_21E8AF4(v9, a7);
  *(_DWORD *)(v7 + 56) = &unk_28898CC;
  *(_DWORD *)(v7 + 60) = 0;
  *(_DWORD *)(v7 + 64) = &unk_28898CC;
  *(_DWORD *)(v7 + 68) = 0;
  EntityInteraction::setInteractText((int *)(v7 + 56), (int *)a5);
  *(_DWORD *)(v7 + 60) = *(_DWORD *)(a5 + 4);
  v18 = (char *)&unk_28898CC;
  v19 = 0;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v7 + 64),
    (int *)&v18);
  *(_DWORD *)(v7 + 68) = v19;
  v14 = v18 - 12;
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v18 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  }
  return v7;
}


int __fastcall BatchKey::BatchKey(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r0@1
  char *v6; // r0@1
  char *v7; // r0@2
  unsigned int *v9; // r2@4
  signed int v10; // r1@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  char *v13; // [sp+0h] [bp-30h]@2
  int v14; // [sp+4h] [bp-2Ch]@2
  char *v15; // [sp+8h] [bp-28h]@1
  int v16; // [sp+Ch] [bp-24h]@1

  v4 = a1;
  v5 = a1 + 8;
  *(_DWORD *)v4 = 0;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 28) = 0;
  *(_DWORD *)(v4 + 20) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  *(_DWORD *)v5 = a2;
  *(_DWORD *)(v5 + 4) = a3;
  *(_DWORD *)(v5 + 8) = 0;
  *(_DWORD *)(v4 + 32) = *(_DWORD *)a4;
  *(_DWORD *)(v4 + 36) = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(v4 + 40) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(v4 + 44) = *(_DWORD *)(a4 + 12);
  *(_WORD *)(v4 + 48) = *(_WORD *)(a4 + 16);
  sub_21E94B4((void **)(v4 + 52), (const char *)&unk_257BC67);
  *(_DWORD *)(v4 + 56) = &unk_28898CC;
  *(_DWORD *)(v4 + 60) = 0;
  *(_DWORD *)(v4 + 64) = &unk_28898CC;
  *(_DWORD *)(v4 + 68) = 0;
  v15 = (char *)&unk_28898CC;
  v16 = 0;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)(v4 + 56),
    (int *)&v15);
  *(_DWORD *)(v4 + 60) = v16;
  v6 = v15 - 12;
  if ( (int *)(v15 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  v13 = (char *)&unk_28898CC;
  v14 = 0;
    (int *)(v4 + 64),
    (int *)&v13);
  *(_DWORD *)(v4 + 68) = v14;
  v7 = v13 - 12;
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v13 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  return v4;
}


int __fastcall BatchKey::BatchKey(int a1, int a2, int a3, int a4, int a5, int a6, int *a7, int a8)
{
  int v8; // r7@1

  v8 = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  *(_DWORD *)(a1 + 8) = a4;
  *(_DWORD *)(a1 + 12) = 1065353216;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)a8;
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a8 + 4);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a8 + 8);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a8 + 12);
  *(_WORD *)(a1 + 48) = *(_WORD *)(a8 + 16);
  sub_21E8AF4((int *)(a1 + 52), a7);
  *(_DWORD *)(v8 + 56) = &unk_28898CC;
  *(_DWORD *)(v8 + 60) = 0;
  *(_DWORD *)(v8 + 64) = &unk_28898CC;
  *(_DWORD *)(v8 + 68) = 0;
  EntityInteraction::setInteractText((int *)(v8 + 56), (int *)a5);
  *(_DWORD *)(v8 + 60) = *(_DWORD *)(a5 + 4);
  EntityInteraction::setInteractText((int *)(v8 + 64), (int *)a6);
  *(_DWORD *)(v8 + 68) = *(_DWORD *)(a6 + 4);
  return v8;
}
