

void __fastcall EntityMapping::getMappingName(int *a1, int a2, int a3)
{
  EntityMapping::getMappingName(a1, a2, a3);
}


int *__fastcall EntityMapping::EntityMapping(int *a1, int *a2)
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


int *__fastcall EntityMapping::EntityMapping(int *a1, int *a2, int *a3)
{
  int *v3; // r6@1
  int *v4; // r5@1
  int *v5; // r4@1
  void *v6; // r0@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+4h] [bp-1Ch]@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  sub_21E94B4((void **)&v10, "minecraft");
  EntityMapping::EntityMapping(v5, &v10, v3, v4);
  v6 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
    }
    else
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  return v5;
}


int *__fastcall EntityMapping::registerDocumentation(EntityMapping *this, DocumentationSystem *a2)
{
  char *v2; // r0@1
  int v3; // r4@1
  int *result; // r0@1
  int i; // r11@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  unsigned int *v10; // r2@11
  signed int v11; // r1@13
  unsigned int *v12; // r2@15
  signed int v13; // r1@17
  unsigned int *v14; // r2@19
  signed int v15; // r1@21
  unsigned int *v16; // r2@23
  signed int v17; // r1@25
  signed int v18; // r7@51
  char *v19; // r8@51
  void *v20; // r0@51
  char *v21; // r0@52
  void *v22; // r0@53
  char *v23; // r0@54
  void *v24; // r0@55
  void *v25; // r0@56
  const char *v26; // [sp+Ch] [bp-4Ch]@7
  int v27; // [sp+10h] [bp-48h]@3
  const char *v28; // [sp+18h] [bp-40h]@15
  int v29; // [sp+1Ch] [bp-3Ch]@11
  int v30; // [sp+24h] [bp-34h]@19
  int v31; // [sp+2Ch] [bp-2Ch]@23

  v2 = DocumentationSystem::getPage((int)this, (const void **)&DocumentationSystem::NODE_ENTITIES);
  v3 = (int)v2;
  v2[4] = 1;
  sub_21E8190((void **)v2 + 5, "List of Entities and Identifiers", (_BYTE *)0x20);
  sub_21E8190((void **)(v3 + 24), (char *)&unk_257BC67, 0);
  sub_21E8190((void **)(v3 + 28), "Identifier", (_BYTE *)0xA);
  sub_21E8190((void **)(v3 + 32), "Full ID", (_BYTE *)7);
  sub_21E8190((void **)(v3 + 36), "Short ID", (_BYTE *)8);
  result = &ENTITY_TYPE_MAP;
  for ( i = unk_27FE914; i; i = *(_DWORD *)i )
  {
    v18 = *(_DWORD *)(i + 4);
    sub_21E94B4((void **)&v31, (const char *)&unk_257BC67);
    sub_21E94B4((void **)&v30, *(const char **)(i + 12));
    Util::toString<int,(void *)0,(void *)0>((void **)&v28, v18);
    sub_21E94B4((void **)&v29, v28);
    Util::toString<int,(void *)0,(void *)0>((void **)&v26, (unsigned __int8)v18);
    sub_21E94B4((void **)&v27, v26);
    v19 = DocumentationSystem::Node::addNode(v3, &v31, (const void **)&v30, &v29, &v27);
    v20 = (void *)(v27 - 12);
    if ( (int *)(v27 - 12) != &dword_28898C0 )
    {
      v6 = (unsigned int *)(v27 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v7 = __ldrex(v6);
        while ( __strex(v7 - 1, v6) );
      }
      else
        v7 = (*v6)--;
      if ( v7 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    }
    v21 = (char *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v8 = (unsigned int *)(v26 - 4);
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    v22 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
      v10 = (unsigned int *)(v29 - 4);
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    v23 = (char *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v12 = (unsigned int *)(v28 - 4);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    v24 = (void *)(v30 - 12);
    if ( (int *)(v30 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v30 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    v25 = (void *)(v31 - 12);
    if ( (int *)(v31 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v31 - 4);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    result = 0;
    v19[6] = 0;
  }
  return result;
}


void __fastcall EntityMapping::getMappingName(int *a1, int a2, int a3)
{
  int v3; // r5@1
  int *v4; // r4@1
  int *v5; // r0@2
  const void **v6; // r0@2
  void *v7; // r0@2
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int v10; // [sp+0h] [bp-20h]@2

  v3 = a2;
  v4 = a1;
  if ( a3 == 1 )
  {
    v5 = sub_21E8AF4(&v10, (int *)a2);
    sub_21E7408((const void **)v5, ":", 1u);
    v6 = sub_21E72F0((const void **)&v10, (const void **)(v3 + 4));
    *v4 = (int)*v6;
    *v6 = &unk_28898CC;
    v7 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v10 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
  }
  else
    sub_21E8AF4(a1, (int *)(a2 + 4));
}


int __fastcall EntityMapping::initEntityIdentifiers(EntityMapping *this)
{
  return j_j_j__ZN19DocumentationSystem21registerDocumentationERKSsPFvRS_E_0();
}


int *__fastcall EntityMapping::EntityMapping(int *a1, int *a2, int *a3, int *a4)
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
