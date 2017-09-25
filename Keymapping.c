

_BOOL4 __fastcall Keymapping::isAssigned(Keymapping *this)
{
  return **((_DWORD **)this + 1) != 0;
}


signed int __fastcall Keymapping::getKeyCount(Keymapping *this)
{
  return (signed int)((*(_QWORD *)((char *)this + 4) >> 32) - *(_QWORD *)((char *)this + 4)) >> 2;
}


void __fastcall Keymapping::getLocalizedAction(Keymapping *this, int **a2)
{
  I18n::get((int *)this, a2);
}


int __fastcall Keymapping::setKeys(__int64 a1)
{
  LODWORD(a1) = a1 + 4;
  return j_j_j__ZNSt6vectorIiSaIiEEaSERKS1_(a1);
}


char *__fastcall Keymapping::unassign(Keymapping *this)
{
  Keymapping *v1; // r4@1
  _DWORD *v2; // r0@1
  char *result; // r0@2
  char *v4; // r5@3
  __int64 v5; // kr00_8@3
  char *v6; // r7@3
  int v7; // r7@5

  v1 = this;
  v2 = (_DWORD *)*((_DWORD *)this + 1);
  *((_DWORD *)v1 + 2) = v2;
  if ( v2 == *((_DWORD **)v1 + 3) )
  {
    v4 = (char *)operator new(4u);
    v5 = *(_QWORD *)((char *)v1 + 4);
    v6 = &v4[HIDWORD(v5) - v5];
    *(_DWORD *)v6 = 0;
    if ( (HIDWORD(v5) - (signed int)v5) >> 2 )
      _aeabi_memmove4(v4, v5);
    v7 = (int)(v6 + 4);
    if ( (_DWORD)v5 )
      operator delete((void *)v5);
    result = v4 + 4;
    *((_DWORD *)v1 + 1) = v4;
    *((_DWORD *)v1 + 2) = v7;
    *((_DWORD *)v1 + 3) = v4 + 4;
  }
  else
    *v2 = 0;
    result = (char *)(v2 + 1);
    *((_DWORD *)v1 + 2) = result;
  return result;
}


char *__fastcall Keymapping::addKey(Keymapping *this, int a2)
{
  Keymapping *v2; // r4@1
  int v3; // r8@1
  __int64 v4; // r0@1
  char *result; // r0@2
  void *v6; // r6@3
  unsigned int v7; // r2@3
  unsigned int v8; // r1@5
  unsigned int v9; // r5@5
  char *v10; // r7@11 OVERLAPPED
  char *v11; // r8@13
  int v12; // r8@15 OVERLAPPED

  v2 = this;
  v3 = a2;
  v4 = *((_QWORD *)this + 1);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v6 = (void *)*((_DWORD *)v2 + 1);
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
        sub_119C874();
      v10 = (char *)operator new(4 * v9);
      LODWORD(v4) = *(_QWORD *)((char *)v2 + 4) >> 32;
      v6 = (void *)*(_QWORD *)((char *)v2 + 4);
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
    *(_QWORD *)((char *)v2 + 4) = *(_QWORD *)&v10;
    *((_DWORD *)v2 + 3) = result;
  }
  else
    *(_DWORD *)v4 = v3;
    result = (char *)(v4 + 4);
    *((_DWORD *)v2 + 2) = result;
  return result;
}


signed int __fastcall Keymapping::isAltKey(Keymapping *this)
{
  Keymapping *v1; // r1@1
  bool v2; // zf@1
  Keymapping *v3; // r1@5
  signed int v4; // t1@7

  v1 = (Keymapping *)*((_DWORD *)this + 1);
  v2 = *(_DWORD *)v1 == 0;
  if ( *(_DWORD *)v1 )
  {
    this = (Keymapping *)*((_DWORD *)this + 2);
    v2 = v1 == this;
  }
  if ( !v2 )
    if ( *(_DWORD *)v1 < 0 )
      return 1;
    v3 = (Keymapping *)((char *)v1 + 4);
    while ( this != v3 )
    {
      v4 = *(_DWORD *)v3;
      v3 = (Keymapping *)((char *)v3 + 4);
      if ( v4 <= -1 )
        return 1;
    }
  return 0;
}


int *__fastcall Keymapping::Keymapping(int *a1, int *a2, __int64 *a3)
{
  __int64 *v3; // r5@1
  int *v4; // r4@1
  __int64 v5; // r0@1
  char *v6; // r6@1
  signed int v7; // r0@1
  unsigned int v8; // r7@1
  __int64 v9; // kr00_8@4
  int v10; // r5@4

  v3 = a3;
  v4 = a1;
  sub_119C854(a1, a2);
  v5 = *v3;
  v6 = 0;
  v4[1] = 0;
  v4[2] = 0;
  v7 = HIDWORD(v5) - v5;
  v4[3] = 0;
  v8 = v7 >> 2;
  if ( v7 >> 2 )
  {
    if ( v8 >= 0x40000000 )
      sub_119C874();
    v6 = (char *)operator new(v7);
  }
  v4[1] = (int)v6;
  v4[2] = (int)v6;
  v4[3] = (int)&v6[4 * v8];
  v9 = *v3;
  v10 = (HIDWORD(v9) - (signed int)v9) >> 2;
  if ( 0 != v10 )
    _aeabi_memmove4(v6, v9);
  v4[2] = (int)&v6[4 * v10];
  return v4;
}


int *__fastcall Keymapping::Keymapping(int *a1, int *a2, int a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  _DWORD *v5; // r0@1
  int v6; // r1@1
  int *result; // r0@1

  v3 = a3;
  v4 = a1;
  sub_119C854(a1, a2);
  v4[1] = 0;
  v4[2] = 0;
  v4[3] = 0;
  v5 = operator new(4u);
  v4[1] = (int)v5;
  v6 = (int)(v5 + 1);
  v4[3] = (int)(v5 + 1);
  *v5 = v3;
  result = v4;
  v4[2] = v6;
  return result;
}


      if ( Keymapping::getKeyCount(v11) )
{
        v13 = Keymapping::getKeys(v11);
        sub_119C914((int)&v31, **(_DWORD **)v13);
        if ( (signed int)((*(_QWORD *)v13 >> 32) - *(_QWORD *)v13) >= 5 )
        {
          v14 = 1;
          do
          {
            sub_119C904((char *)&v31, (int)",", 1);
            sub_119C914((int)&v31, *(_DWORD *)(*(_DWORD *)v13 + 4 * v14++));
          }
          while ( v14 < (signed int)((*(_QWORD *)v13 >> 32) - *(_QWORD *)v13) >> 2 );
        }
      }
      else
      {
        sub_119C914((int)&v31, 0);
      v15 = *v26;
      (*(void (__fastcall **)(char **, RemappingLayout *, int))(*(_DWORD *)v2 + 16))(&v27, v2, v12);
      sub_119D48C((int *)&v28, (int)&v32);
      v16 = *(_QWORD *)(v15 + 4);
      if ( (_DWORD)v16 == HIDWORD(v16) )
        std::vector<PropertyFile::Property,std::allocator<PropertyFile::Property>>::_M_emplace_back_aux<PropertyFile::Property>(
          (unsigned __int64 *)v15,
          (int)&v27);
        v17 = (int)v28;
        *(_DWORD *)v16 = v27;
        HIDWORD(v16) = &unk_28898CC;
        v27 = (char *)&unk_28898CC;
        *(_DWORD *)(v16 + 4) = v28;
        v28 = &unk_28898CC;
        *(_DWORD *)(v15 + 4) = v16 + 8;
      v18 = (void *)(v17 - 12);
      if ( (int *)(v17 - 12) != &dword_28898C0 )
        v5 = (unsigned int *)(v17 - 4);
        if ( &pthread_create )
          __dmb();
            v6 = __ldrex(v5);
          while ( __strex(v6 - 1, v5) );
        else
          v6 = (*v5)--;
        if ( v6 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v18);
      v19 = v27 - 12;
      if ( (int *)(v27 - 12) != &dword_28898C0 )
        v7 = (unsigned int *)(v27 - 4);
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v19);
      v29 = v25;
      *(_DWORD *)((char *)*(v25 - 3) + (_DWORD)&v29) = v23;
      v31 = v22;
      v32 = &off_27734E8;
      v20 = (void *)(v34 - 12);
      if ( (int *)(v34 - 12) != &dword_28898C0 )
        v9 = (unsigned int *)(v34 - 4);
            v10 = __ldrex(v9);
          while ( __strex(v10 - 1, v9) );
          v10 = (*v9)--;
        if ( v10 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v20);
      v32 = &off_26D40A8;
      sub_119C954((unsigned int **)&v33);
      v29 = v21;
      *(_DWORD *)((char *)*(v21 - 3) + (_DWORD)&v29) = v24;
      v30 = 0;
      sub_119C964(&v35);
      ++v4;
      result = RemappingLayout::getNumKeymappings(v2);
    }
    while ( v4 < result );
  }
  return result;
}


char *__fastcall Keymapping::unassign(Keymapping *this, int a2)
{
  Keymapping *v2; // r4@1
  char *result; // r0@1
  int *v4; // r2@1
  char *v5; // r7@1
  int v6; // r3@1
  int v7; // r6@2
  int v8; // r3@9
  int v9; // r6@20
  void *v10; // r5@23
  __int64 v11; // kr08_8@23
  char *v12; // r7@23
  int v13; // r7@25

  v2 = this;
  v4 = (int *)(*(_QWORD *)((char *)this + 4) >> 32);
  result = (char *)*(_QWORD *)((char *)this + 4);
  v5 = result;
  v6 = ((char *)v4 - result) >> 4;
  if ( v6 < 1 )
  {
LABEL_8:
    if ( 1 != ((char *)v4 - v5) >> 2 )
    {
      v8 = ((char *)v4 - v5) >> 2;
      if ( v8 != 2 )
      {
        if ( v8 != 3 )
        {
LABEL_16:
          a2 = *v4;
          v5 = (char *)v4;
          goto LABEL_20;
        }
        if ( *(_DWORD *)v5 == a2 )
        v5 += 4;
      }
      if ( *(_DWORD *)v5 == a2 )
        goto LABEL_20;
      v5 += 4;
    }
    if ( *(_DWORD *)v5 == a2 )
      goto LABEL_20;
    goto LABEL_16;
  }
  v7 = v6 + 1;
  while ( *(_DWORD *)v5 != a2 )
    if ( *((_DWORD *)v5 + 1) == a2 )
      break;
    if ( *((_DWORD *)v5 + 2) == a2 )
      v5 += 8;
    if ( *((_DWORD *)v5 + 3) == a2 )
      v5 += 12;
    --v7;
    v5 += 16;
    if ( v7 <= 1 )
      goto LABEL_8;
LABEL_20:
  v9 = *(v4 - 1);
  *(v4 - 1) = a2;
  *(_DWORD *)v5 = v9;
  *((_DWORD *)v2 + 2) = v4 - 1;
  if ( (int *)result == v4 - 1 )
    if ( result == *((char **)v2 + 3) )
      v10 = operator new(4u);
      v11 = *(_QWORD *)((char *)v2 + 4);
      v12 = (char *)v10 + HIDWORD(v11) - v11;
      *(_DWORD *)v12 = 0;
      if ( (HIDWORD(v11) - (signed int)v11) >> 2 )
        _aeabi_memmove4(v10, v11);
      v13 = (int)(v12 + 4);
      if ( (_DWORD)v11 )
        operator delete((void *)v11);
      result = (char *)v10 + 4;
      *((_DWORD *)v2 + 1) = v10;
      *((_DWORD *)v2 + 2) = v13;
      *((_DWORD *)v2 + 3) = (char *)v10 + 4;
    else
      *(_DWORD *)result = 0;
      *((_DWORD *)v2 + 2) = v4;
  return result;
}


char *__fastcall Keymapping::getKeys(Keymapping *this)
{
  return (char *)this + 4;
}
