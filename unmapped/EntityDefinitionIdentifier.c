

void __fastcall EntityDefinitionIdentifier::getCanonicalName(EntityDefinitionIdentifier *this, int *a2)
{
  EntityDefinitionIdentifier::getCanonicalName(this, a2);
}


int *__fastcall EntityDefinitionIdentifier::EntityDefinitionIdentifier(int *a1, int *a2)
{
  int *v2; // r4@1
  int *v3; // r5@1

  v2 = a2;
  v3 = a1;
  sub_21E8AF4(a1, a2);
  sub_21E8AF4(v3 + 1, v2 + 1);
  sub_21E8AF4(v3 + 2, v2 + 2);
  return v3;
}


int __fastcall EntityDefinitionIdentifier::EntityDefinitionIdentifier(int result, int a2)
{
  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)a2 = &unk_28898CC;
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = &unk_28898CC;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = &unk_28898CC;
  return result;
}


int *__fastcall EntityDefinitionIdentifier::EntityDefinitionIdentifier(int *a1, int *a2, int *a3, int *a4)
{
  int *v4; // r4@1
  int *v5; // r7@1
  int *v6; // r5@1

  v4 = a4;
  v5 = a3;
  v6 = a1;
  sub_21E8AF4(a1, a2);
  sub_21E8AF4(v6 + 1, v5);
  sub_21E8AF4(v6 + 2, v4);
  return v6;
}


void __fastcall EntityDefinitionIdentifier::getFullName(EntityDefinitionIdentifier *this, int *a2)
{
  EntityDefinitionIdentifier *v2; // r4@1
  int *v3; // r5@1
  int *v4; // r0@1
  const void **v5; // r0@1
  const void **v6; // r0@1
  const void **v7; // r0@1
  const void **v8; // r0@1
  char *v9; // r0@1
  char *v10; // r0@2
  char *v11; // r0@3
  void *v12; // r0@4
  unsigned int *v13; // r2@6
  signed int v14; // r1@8
  unsigned int *v15; // r2@10
  signed int v16; // r1@12
  unsigned int *v17; // r2@14
  signed int v18; // r1@16
  unsigned int *v19; // r2@18
  signed int v20; // r1@20
  int v21; // [sp+4h] [bp-24h]@1
  char *v22; // [sp+8h] [bp-20h]@1
  char *v23; // [sp+Ch] [bp-1Ch]@1
  char *v24; // [sp+10h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  v4 = sub_21E8AF4(&v21, a2);
  sub_21E72F0((const void **)v4, (const void **)&EntityDefinitionIdentifier::NAMESPACE_SEPARATOR);
  v5 = sub_21E72F0((const void **)&v21, (const void **)v3 + 1);
  v22 = (char *)*v5;
  *v5 = &unk_28898CC;
  v6 = sub_21E72F0((const void **)&v22, (const void **)&EntityDefinitionIdentifier::EVENT_BEGIN);
  v23 = (char *)*v6;
  *v6 = &unk_28898CC;
  v7 = sub_21E72F0((const void **)&v23, (const void **)v3 + 2);
  v24 = (char *)*v7;
  *v7 = &unk_28898CC;
  v8 = sub_21E72F0((const void **)&v24, (const void **)&EntityDefinitionIdentifier::EVENT_END);
  *(_DWORD *)v2 = *v8;
  *v8 = &unk_28898CC;
  v9 = v24 - 12;
  if ( (int *)(v24 - 12) != &dword_28898C0 )
  {
    v13 = (unsigned int *)(v24 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
    }
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  }
  v10 = v23 - 12;
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)(v23 - 4);
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = v22 - 12;
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v22 - 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v21 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
}


void __fastcall EntityDefinitionIdentifier::getCanonicalName(EntityDefinitionIdentifier *this, int *a2)
{
  EntityDefinitionIdentifier *v2; // r4@1
  int *v3; // r5@1
  int *v4; // r0@1
  const void **v5; // r0@1
  void *v6; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+0h] [bp-20h]@1

  v2 = this;
  v3 = a2;
  v4 = sub_21E8AF4(&v9, a2);
  sub_21E72F0((const void **)v4, (const void **)&EntityDefinitionIdentifier::NAMESPACE_SEPARATOR);
  v5 = sub_21E72F0((const void **)&v9, (const void **)v3 + 1);
  *(_DWORD *)v2 = *v5;
  *v5 = &unk_28898CC;
  v6 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
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
}


void __fastcall EntityDefinitionIdentifier::getFullName(EntityDefinitionIdentifier *this, int *a2)
{
  EntityDefinitionIdentifier::getFullName(this, a2);
}


int __fastcall EntityDefinitionIdentifier::EntityDefinitionIdentifier(int a1, int *a2)
{
  int v2; // r5@1

  v2 = a1;
  *(_DWORD *)a1 = &unk_28898CC;
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  *(_DWORD *)(a1 + 8) = &unk_28898CC;
  sub_171B76C(a2, a1);
  return v2;
}


void **__fastcall EntityDefinitionIdentifier::EntityDefinitionIdentifier(void **a1, int a2)
{
  int v2; // r4@1
  void **v3; // r5@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4(a1, "minecraft");
  EntityTypeIdWithoutCategories((int *)v3 + 1, v2, 0);
  v3[2] = &unk_28898CC;
  return v3;
}


int __fastcall EntityDefinitionIdentifier::EntityDefinitionIdentifier(int a1, const char *a2)
{
  int v2; // r4@1
  void *v3; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+8h] [bp-28h]@1

  v2 = a1;
  *(_DWORD *)a1 = &unk_28898CC;
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  *(_DWORD *)(a1 + 8) = &unk_28898CC;
  sub_21E94B4((void **)&v7, a2);
  sub_171B76C(&v7, v2);
  v3 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v7 - 4);
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
  return v2;
}


int __fastcall EntityDefinitionIdentifier::EntityDefinitionIdentifier(int result)
{
  *(_DWORD *)result = &unk_28898CC;
  *(_DWORD *)(result + 4) = &unk_28898CC;
  *(_DWORD *)(result + 8) = &unk_28898CC;
  return result;
}
