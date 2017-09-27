

char *__fastcall ComponentRenderBatch::addCustomRenderInstance(ComponentRenderBatch *this, CustomRenderComponent *a2)
{
  ComponentRenderBatch *v2; // r4@1
  CustomRenderComponent *v3; // r8@1
  __int64 v4; // r0@1
  char *result; // r0@2
  void *v6; // r5@3
  unsigned int v7; // r2@3
  unsigned int v8; // r1@5
  unsigned int v9; // r6@5
  char *v10; // r7@11 OVERLAPPED
  char *v11; // r8@13
  int v12; // r8@15 OVERLAPPED

  v2 = this;
  v3 = a2;
  v4 = *(_QWORD *)((char *)this + 84);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v6 = (void *)*((_DWORD *)v2 + 20);
    v7 = ((signed int)v4 - (signed int)v6) >> 2;
    if ( !v7 )
      v7 = 1;
    HIDWORD(v4) = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    v9 = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    if ( 0 != HIDWORD(v4) >> 30 )
      v9 = 0x3FFFFFFF;
    if ( v8 < v7 )
    if ( v9 )
    {
      if ( v9 >= 0x40000000 )
        sub_21E57F4();
      v10 = (char *)operator new(4 * v9);
      LODWORD(v4) = *((_QWORD *)v2 + 10) >> 32;
      v6 = (void *)*((_QWORD *)v2 + 10);
    }
    else
      v10 = 0;
    *(_DWORD *)&v10[v4 - (_DWORD)v6] = v3;
    v11 = &v10[v4 - (_DWORD)v6];
    if ( 0 != ((signed int)v4 - (signed int)v6) >> 2 )
      _aeabi_memmove4(v10, v6);
    v12 = (int)(v11 + 4);
    if ( v6 )
      operator delete(v6);
    result = &v10[4 * v9];
    *((_QWORD *)v2 + 10) = *(_QWORD *)&v10;
    *((_DWORD *)v2 + 22) = result;
  }
  else
    *(_DWORD *)v4 = v3;
    result = (char *)(*((_DWORD *)v2 + 21) + 4);
    *((_DWORD *)v2 + 21) = result;
  return result;
}


int __fastcall ComponentRenderBatch::ComponentRenderBatch(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r1@1
  int v4; // r2@1
  int v5; // r3@1
  int v6; // r6@1
  int v7; // r7@1
  int v8; // r4@1
  int v9; // r0@1
  int v10; // r3@1
  int v11; // r6@1
  int v12; // r7@1
  char *v13; // r6@1
  __int64 v14; // r0@1
  signed int v15; // r0@1
  unsigned int v16; // r7@1
  __int64 v17; // kr00_8@4
  int v18; // r7@4
  __int64 v19; // r0@6
  char *v20; // r6@6
  signed int v21; // r0@6
  unsigned int v22; // r7@6
  __int64 v23; // kr08_8@9
  int v24; // r7@9
  __int64 v25; // r0@11
  char *v26; // r6@11
  signed int v27; // r0@11
  unsigned int v28; // r7@11
  __int64 v29; // kr10_8@14
  int v30; // r5@14

  v2 = a2;
  v4 = *(_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 4);
  v6 = *(_DWORD *)(a2 + 8);
  v7 = *(_DWORD *)(a2 + 12);
  v3 = a2 + 16;
  v8 = a1;
  *(_DWORD *)a1 = v4;
  *(_DWORD *)(a1 + 4) = v5;
  *(_DWORD *)(a1 + 8) = v6;
  *(_DWORD *)(a1 + 12) = v7;
  v9 = a1 + 16;
  v10 = *(_DWORD *)(v3 + 4);
  v11 = *(_DWORD *)(v3 + 8);
  v12 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)v9 = *(_DWORD *)v3;
  *(_DWORD *)(v9 + 4) = v10;
  *(_DWORD *)(v9 + 8) = v11;
  *(_DWORD *)(v9 + 12) = v12;
  *(_DWORD *)(v8 + 32) = *(_DWORD *)(v2 + 32);
  *(_DWORD *)(v8 + 36) = *(_DWORD *)(v2 + 36);
  *(_DWORD *)(v8 + 40) = *(_DWORD *)(v2 + 40);
  *(_DWORD *)(v8 + 44) = *(_DWORD *)(v2 + 44);
  *(_WORD *)(v8 + 48) = *(_WORD *)(v2 + 48);
  sub_21E8AF4((int *)(v8 + 52), (int *)(v2 + 52));
  sub_21E8AF4((int *)(v8 + 56), (int *)(v2 + 56));
  *(_DWORD *)(v8 + 60) = *(_DWORD *)(v2 + 60);
  sub_21E8AF4((int *)(v8 + 64), (int *)(v2 + 64));
  *(_DWORD *)(v8 + 68) = *(_DWORD *)(v2 + 68);
  v13 = 0;
  *(_QWORD *)(v8 + 72) = *(_QWORD *)(v2 + 72);
  v14 = *(_QWORD *)(v2 + 80);
  *(_DWORD *)(v8 + 80) = 0;
  *(_DWORD *)(v8 + 84) = 0;
  v15 = HIDWORD(v14) - v14;
  *(_DWORD *)(v8 + 88) = 0;
  v16 = v15 >> 2;
  if ( v15 >> 2 )
  {
    if ( v16 >= 0x40000000 )
      sub_21E57F4();
    v13 = (char *)operator new(v15);
  }
  *(_DWORD *)(v8 + 80) = v13;
  *(_DWORD *)(v8 + 84) = v13;
  *(_DWORD *)(v8 + 88) = &v13[4 * v16];
  v17 = *(_QWORD *)(v2 + 80);
  v18 = (HIDWORD(v17) - (signed int)v17) >> 2;
  if ( 0 != v18 )
    _aeabi_memmove4(v13, v17);
  *(_DWORD *)(v8 + 84) = &v13[4 * v18];
  v19 = *(_QWORD *)(v2 + 92);
  v20 = 0;
  *(_DWORD *)(v8 + 92) = 0;
  *(_DWORD *)(v8 + 96) = 0;
  v21 = HIDWORD(v19) - v19;
  *(_DWORD *)(v8 + 100) = 0;
  v22 = v21 >> 2;
  if ( v21 >> 2 )
    if ( v22 >= 0x40000000 )
    v20 = (char *)operator new(v21);
  *(_DWORD *)(v8 + 92) = v20;
  *(_DWORD *)(v8 + 96) = v20;
  *(_DWORD *)(v8 + 100) = &v20[4 * v22];
  v23 = *(_QWORD *)(v2 + 92);
  v24 = (HIDWORD(v23) - (signed int)v23) >> 2;
  if ( 0 != v24 )
    _aeabi_memmove4(v20, v23);
  *(_DWORD *)(v8 + 96) = &v20[4 * v24];
  v25 = *(_QWORD *)(v2 + 104);
  v26 = 0;
  *(_DWORD *)(v8 + 104) = 0;
  *(_DWORD *)(v8 + 108) = 0;
  v27 = HIDWORD(v25) - v25;
  *(_DWORD *)(v8 + 112) = 0;
  v28 = v27 >> 2;
  if ( v27 >> 2 )
    if ( v28 >= 0x40000000 )
    v26 = (char *)operator new(v27);
  *(_DWORD *)(v8 + 104) = v26;
  *(_DWORD *)(v8 + 108) = v26;
  *(_DWORD *)(v8 + 112) = &v26[4 * v28];
  v29 = *(_QWORD *)(v2 + 104);
  v30 = (HIDWORD(v29) - (signed int)v29) >> 2;
  if ( 0 != v30 )
    _aeabi_memmove4(v26, v29);
  *(_DWORD *)(v8 + 108) = &v26[4 * v30];
  return v8;
}


ComponentRenderBatch *__fastcall ComponentRenderBatch::~ComponentRenderBatch(ComponentRenderBatch *this)
{
  ComponentRenderBatch *v1; // r5@1
  void *v2; // r0@1
  void *v3; // r0@3
  void *v4; // r0@5
  int v5; // r1@7
  void *v6; // r0@7
  int v7; // r1@8
  void *v8; // r0@8
  int v9; // r1@9
  void *v10; // r0@9
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  unsigned int *v14; // r2@15
  signed int v15; // r1@17
  unsigned int *v16; // r2@19
  signed int v17; // r1@21

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 26);
  if ( v2 )
    operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 23);
  if ( v3 )
    operator delete(v3);
  v4 = (void *)*((_DWORD *)v1 + 20);
  if ( v4 )
    operator delete(v4);
  v5 = *((_DWORD *)v1 + 16);
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v5 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  v7 = *((_DWORD *)v1 + 14);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v7 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = *((_DWORD *)v1 + 13);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v9 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  return v1;
}


char *__fastcall ComponentRenderBatch::addTextInstance(ComponentRenderBatch *this, TextComponent *a2)
{
  ComponentRenderBatch *v2; // r4@1
  TextComponent *v3; // r8@1
  __int64 v4; // r0@1
  char *result; // r0@2
  void *v6; // r5@3
  unsigned int v7; // r2@3
  unsigned int v8; // r1@5
  unsigned int v9; // r6@5
  char *v10; // r7@11 OVERLAPPED
  char *v11; // r8@13
  int v12; // r8@15 OVERLAPPED

  v2 = this;
  v3 = a2;
  v4 = *(_QWORD *)((char *)this + 108);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v6 = (void *)*((_DWORD *)v2 + 26);
    v7 = ((signed int)v4 - (signed int)v6) >> 2;
    if ( !v7 )
      v7 = 1;
    HIDWORD(v4) = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    v9 = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    if ( 0 != HIDWORD(v4) >> 30 )
      v9 = 0x3FFFFFFF;
    if ( v8 < v7 )
    if ( v9 )
    {
      if ( v9 >= 0x40000000 )
        sub_21E57F4();
      v10 = (char *)operator new(4 * v9);
      LODWORD(v4) = *((_QWORD *)v2 + 13) >> 32;
      v6 = (void *)*((_QWORD *)v2 + 13);
    }
    else
      v10 = 0;
    *(_DWORD *)&v10[v4 - (_DWORD)v6] = v3;
    v11 = &v10[v4 - (_DWORD)v6];
    if ( 0 != ((signed int)v4 - (signed int)v6) >> 2 )
      _aeabi_memmove4(v10, v6);
    v12 = (int)(v11 + 4);
    if ( v6 )
      operator delete(v6);
    result = &v10[4 * v9];
    *((_QWORD *)v2 + 13) = *(_QWORD *)&v10;
    *((_DWORD *)v2 + 28) = result;
  }
  else
    *(_DWORD *)v4 = v3;
    result = (char *)(*((_DWORD *)v2 + 27) + 4);
    *((_DWORD *)v2 + 27) = result;
  return result;
}


int __fastcall ComponentRenderBatch::end(int *a1, int a2)
{
  int *v2; // r2@1
  int result; // r0@1

  v2 = a1;
  result = *a1;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int, int *))(*(_DWORD *)a2 + 48))(a2, v2);
  return result;
}


char *__fastcall ComponentRenderBatch::addSpriteInstance(ComponentRenderBatch *this, SpriteComponent *a2)
{
  ComponentRenderBatch *v2; // r4@1
  SpriteComponent *v3; // r8@1
  __int64 v4; // r0@1
  char *result; // r0@2
  void *v6; // r5@3
  unsigned int v7; // r2@3
  unsigned int v8; // r1@5
  unsigned int v9; // r6@5
  char *v10; // r7@11 OVERLAPPED
  char *v11; // r8@13
  int v12; // r8@15 OVERLAPPED

  v2 = this;
  v3 = a2;
  v4 = *((_QWORD *)this + 12);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v6 = (void *)*((_DWORD *)v2 + 23);
    v7 = ((signed int)v4 - (signed int)v6) >> 2;
    if ( !v7 )
      v7 = 1;
    HIDWORD(v4) = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    v9 = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    if ( 0 != HIDWORD(v4) >> 30 )
      v9 = 0x3FFFFFFF;
    if ( v8 < v7 )
    if ( v9 )
    {
      if ( v9 >= 0x40000000 )
        sub_21E57F4();
      v10 = (char *)operator new(4 * v9);
      LODWORD(v4) = *(_QWORD *)((char *)v2 + 92) >> 32;
      v6 = (void *)*(_QWORD *)((char *)v2 + 92);
    }
    else
      v10 = 0;
    *(_DWORD *)&v10[v4 - (_DWORD)v6] = v3;
    v11 = &v10[v4 - (_DWORD)v6];
    if ( 0 != ((signed int)v4 - (signed int)v6) >> 2 )
      _aeabi_memmove4(v10, v6);
    v12 = (int)(v11 + 4);
    if ( v6 )
      operator delete(v6);
    result = &v10[4 * v9];
    *(_QWORD *)((char *)v2 + 92) = *(_QWORD *)&v10;
    *((_DWORD *)v2 + 25) = result;
  }
  else
    *(_DWORD *)v4 = v3;
    result = (char *)(*((_DWORD *)v2 + 24) + 4);
    *((_DWORD *)v2 + 24) = result;
  return result;
}


int __fastcall ComponentRenderBatch::begin(int *a1, int a2)
{
  int *v2; // r2@1
  int result; // r0@1

  v2 = a1;
  result = *a1;
  if ( result == 1 )
    result = (*(int (__fastcall **)(int, int *))(*(_DWORD *)a2 + 44))(a2, v2);
  return result;
}


int __fastcall ComponentRenderBatch::ComponentRenderBatch(int a1, int a2)
{
  int v2; // r7@1
  int v3; // r1@1
  int v4; // r2@1
  int v5; // r3@1
  int v6; // r5@1
  int v7; // r6@1
  int v8; // r4@1
  int v9; // r0@1
  int v10; // r3@1
  int v11; // r5@1
  int v12; // r6@1

  v2 = a2;
  v4 = *(_DWORD *)a2;
  v5 = *(_DWORD *)(a2 + 4);
  v6 = *(_DWORD *)(a2 + 8);
  v7 = *(_DWORD *)(a2 + 12);
  v3 = a2 + 16;
  v8 = a1;
  *(_DWORD *)a1 = v4;
  *(_DWORD *)(a1 + 4) = v5;
  *(_DWORD *)(a1 + 8) = v6;
  *(_DWORD *)(a1 + 12) = v7;
  v9 = a1 + 16;
  v10 = *(_DWORD *)(v3 + 4);
  v11 = *(_DWORD *)(v3 + 8);
  v12 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)v9 = *(_DWORD *)v3;
  *(_DWORD *)(v9 + 4) = v10;
  *(_DWORD *)(v9 + 8) = v11;
  *(_DWORD *)(v9 + 12) = v12;
  *(_DWORD *)(v8 + 32) = *(_DWORD *)(v2 + 32);
  *(_DWORD *)(v8 + 36) = *(_DWORD *)(v2 + 36);
  *(_DWORD *)(v8 + 40) = *(_DWORD *)(v2 + 40);
  *(_DWORD *)(v8 + 44) = *(_DWORD *)(v2 + 44);
  *(_WORD *)(v8 + 48) = *(_WORD *)(v2 + 48);
  sub_21E8AF4((int *)(v8 + 52), (int *)(v2 + 52));
  sub_21E8AF4((int *)(v8 + 56), (int *)(v2 + 56));
  *(_DWORD *)(v8 + 60) = *(_DWORD *)(v2 + 60);
  sub_21E8AF4((int *)(v8 + 64), (int *)(v2 + 64));
  *(_DWORD *)(v8 + 68) = *(_DWORD *)(v2 + 68);
  *(_WORD *)(v8 + 72) = 0;
  _aeabi_memclr4(v8 + 76, 40);
  return v8;
}


int __fastcall ComponentRenderBatch::getNumInstances(ComponentRenderBatch *this)
{
  return ((signed int)((*(_QWORD *)((char *)this + 92) >> 32) - *(_QWORD *)((char *)this + 92)) >> 2)
       + ((signed int)((*((_QWORD *)this + 10) >> 32) - *((_QWORD *)this + 10)) >> 2)
       + ((signed int)((*((_QWORD *)this + 13) >> 32) - *((_QWORD *)this + 13)) >> 2);
}
