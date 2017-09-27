

void __fastcall SpawnData::~SpawnData(SpawnData *this)
{
  SpawnData *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2703B64;
  v2 = *((_DWORD *)this + 3);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall SpawnData::SpawnData(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r1@1
  int v4; // r1@2
  int v5; // r0@2
  int v7; // [sp+4h] [bp-14h]@2

  v2 = a1;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)a1 = &off_2703B64;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = 0;
  v3 = *(_DWORD *)(a2 + 12);
  if ( v3 )
  {
    (*(void (__fastcall **)(int *))(*(_DWORD *)v3 + 48))(&v7);
    v4 = v7;
    v7 = 0;
    v5 = *(_DWORD *)(v2 + 12);
    *(_DWORD *)(v2 + 12) = v4;
    if ( v5 )
    {
      (*(void (**)(void))(*(_DWORD *)v5 + 4))();
      if ( v7 )
        (*(void (**)(void))(*(_DWORD *)v7 + 4))();
    }
  }
  return v2;
}


int __fastcall SpawnData::SpawnData(int result, int a2, int a3)
{
  *(_DWORD *)result = &off_2703B64;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = a3;
  *(_DWORD *)(result + 12) = 0;
  return result;
}


int __fastcall SpawnData::SpawnData(int result)
{
  *(_DWORD *)result = &off_2703B64;
  *(_DWORD *)(result + 4) = -128;
  *(_DWORD *)(result + 8) = 4876;
  *(_DWORD *)(result + 12) = 0;
  return result;
}


void __fastcall SpawnData::save(SpawnData *this, int a2)
{
  SpawnData *v2; // r4@1
  int v3; // r5@1
  void *v4; // r6@1
  void *v5; // r0@3
  int v6; // r6@4
  void *v7; // r0@4
  int v8; // r6@5
  void *v9; // r0@5
  unsigned int *v10; // r2@7
  signed int v11; // r1@9
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  unsigned int *v14; // r2@15
  signed int v15; // r1@17
  int v16; // [sp+4h] [bp-2Ch]@5
  int v17; // [sp+Ch] [bp-24h]@4
  int v18; // [sp+10h] [bp-20h]@1
  int v19; // [sp+18h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0x1Cu);
  CompoundTag::CompoundTag((int)v4);
  *(_DWORD *)v2 = v4;
  sub_21E94B4((void **)&v19, "Properties");
  (*(void (__fastcall **)(int *))(**(_DWORD **)(v3 + 12) + 48))(&v18);
  CompoundTag::put((int)v4, (const void **)&v19, &v18);
  if ( v18 )
    (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  v18 = 0;
  v5 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v19 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = *(_DWORD *)v2;
  sub_21E94B4((void **)&v17, "Type");
  CompoundTag::putInt(v6, (const void **)&v17, *(_DWORD *)(v3 + 8));
  v7 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v17 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = *(_DWORD *)v2;
  sub_21E94B4((void **)&v16, "Weight");
  CompoundTag::putInt(v8, (const void **)&v16, *(_DWORD *)(v3 + 4));
  v9 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


SpawnData *__fastcall SpawnData::~SpawnData(SpawnData *this)
{
  SpawnData *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2703B64;
  v2 = *((_DWORD *)this + 3);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 3) = 0;
  return v1;
}


void __fastcall SpawnData::save(SpawnData *this, int a2)
{
  SpawnData::save(this, a2);
}


int __fastcall SpawnData::SpawnData(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r7@1
  void *v4; // r0@1
  int v5; // r6@2
  void *v6; // r0@2
  int v7; // r5@3
  void *v8; // r0@3
  int v9; // r1@5
  int v10; // r0@5
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  unsigned int *v16; // r2@18
  signed int v17; // r1@20
  int v18; // [sp+4h] [bp-34h]@5
  int v19; // [sp+Ch] [bp-2Ch]@3
  int v20; // [sp+14h] [bp-24h]@2
  int v21; // [sp+1Ch] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v21, "Weight");
  *(_DWORD *)(v3 + 4) = CompoundTag::getInt(v2, (const void **)&v21);
  v4 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v21 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
    }
    else
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  }
  *(_DWORD *)v3 = &off_2703B64;
  sub_21E94B4((void **)&v20, "Type");
  v5 = CompoundTag::getInt(v2, (const void **)&v20);
  v6 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v20 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  *(_DWORD *)(v3 + 8) = v5;
  *(_DWORD *)(v3 + 12) = 0;
  sub_21E94B4((void **)&v19, "Properties");
  v7 = CompoundTag::getCompound(v2, (const void **)&v19);
  v8 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v19 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  if ( v7 )
    (*(void (__fastcall **)(int *, int))(*(_DWORD *)v7 + 48))(&v18, v7);
    v9 = v18;
    v18 = 0;
    v10 = *(_DWORD *)(v3 + 12);
    *(_DWORD *)(v3 + 12) = v9;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
      if ( v18 )
        (*(void (**)(void))(*(_DWORD *)v18 + 4))();
  return v3;
}


void __fastcall SpawnData::~SpawnData(SpawnData *this)
{
  SpawnData::~SpawnData(this);
}
