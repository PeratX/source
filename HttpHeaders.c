

int __fastcall HttpHeaders::HttpHeaders(int a1)
{
  int v1; // r7@1
  __int64 v2; // r4@1
  const void **v3; // r9@1
  const void **v4; // r10@1
  const void **v5; // r6@1

  v1 = a1;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v2 = (unsigned int)(a1 + 4);
  *(_DWORD *)(v1 + 12) = v1 + 4;
  *(_DWORD *)(v1 + 16) = v1 + 4;
  *(_DWORD *)(a1 + 24) = &unk_28898CC;
  v3 = (const void **)(a1 + 24);
  *(_DWORD *)(a1 + 32) = &unk_28898CC;
  v4 = (const void **)(a1 + 32);
  *(_DWORD *)(a1 + 36) = &unk_28898CC;
  v5 = (const void **)(a1 + 36);
  *(_DWORD *)(a1 + 28) = 0;
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    a1,
    0);
  *(_DWORD *)(v1 + 8) = 0;
  *(_DWORD *)(v1 + 12) = v2;
  *(_QWORD *)(v1 + 16) = v2;
  sub_21E7EE0(v4, 0, *((_BYTE **)*v4 - 3), 0);
  sub_21E7EE0(v5, 0, *((_BYTE **)*v5 - 3), 0);
  sub_21E7EE0(v3, 0, *((_BYTE **)*v3 - 3), 0);
  return v1;
}


signed int __fastcall HttpHeaders::parse(HttpHeaders *this, RakNet::BitStream *a2)
{
  RakNet::BitStream *v2; // r5@1
  HttpHeaders *v3; // r4@1
  unsigned __int8 v4; // r7@1
  unsigned int v5; // r0@1
  unsigned int v6; // r8@2
  const void **v7; // r11@2
  int v8; // r9@2
  unsigned __int8 v9; // r7@3
  _DWORD *v10; // r0@5
  int v11; // r1@5 OVERLAPPED
  int v12; // r10@5
  unsigned int v13; // r2@5
  _DWORD *v14; // r0@8
  unsigned __int8 v15; // r7@10
  unsigned int v16; // r0@13
  bool v17; // cf@13
  bool v18; // zf@13
  _DWORD *v19; // r0@13
  int v20; // r1@13 OVERLAPPED
  unsigned int v21; // r2@13 OVERLAPPED
  int v22; // r6@15
  char *v23; // r0@18
  int v24; // r0@20
  unsigned __int8 v25; // r10@20
  int *v26; // r0@23
  int v27; // r3@23
  int v28; // r1@23 OVERLAPPED
  unsigned int v29; // r2@23
  signed int v30; // r0@27
  unsigned int v31; // r2@39
  signed int result; // r0@47
  const void **v33; // [sp+Ch] [bp-34h]@2
  int *v34; // [sp+14h] [bp-2Ch]@2
  unsigned __int8 v35; // [sp+1Bh] [bp-25h]@3

  v2 = a2;
  v3 = this;
  v4 = 0;
  v5 = *(_DWORD *)a2 + 7 - *((_DWORD *)a2 + 2);
  if ( !(v5 >> 3) )
    return *((_DWORD *)v3 + 7);
  v6 = v5 >> 3;
  v7 = (const void **)((char *)v3 + 32);
  v8 = 0;
  v34 = (int *)((char *)v3 + 36);
  v33 = (const void **)((char *)v3 + 24);
  while ( 2 )
  {
    v35 = v4;
    RakNet::BitStream::ReadAlignedBytes(v2, &v35, 1u);
    switch ( *((_DWORD *)v3 + 7) )
    {
      case 6:
        if ( v35 != 10 )
          goto LABEL_49;
        v30 = 7;
        goto LABEL_35;
      case 5:
        HttpHeaders::addHeader((int)v3, v7, v34);
        v30 = 2;
      case 4:
        v24 = *((_DWORD *)v3 + 10);
        *((_DWORD *)v3 + 10) = v24 + 1;
        v25 = v35;
        if ( v35 == 13 )
        {
          v30 = 5;
          goto LABEL_35;
        }
        if ( v35 == 32 )
          if ( !v24 )
            goto def_16573F2;
          v26 = v34;
          v27 = *v34;
          *(_QWORD *)&v28 = *(_QWORD *)(*v34 - 12);
          v22 = v28 + 1;
          if ( v28 + 1 > v31 || *(_DWORD *)(v27 - 4) >= 1 )
          {
            sub_21E6FCC((const void **)v34, v28 + 1);
            v26 = v34;
            goto LABEL_42;
          }
        else
          if ( v35 == 10 )
            goto LABEL_49;
          if ( v28 + 1 > v29 || *(_DWORD *)(v27 - 4) >= 1 )
LABEL_42:
            v27 = *v26;
            v28 = *(_DWORD *)(*v26 - 12);
            goto LABEL_43;
LABEL_43:
        v34 = v26;
        *(_BYTE *)(v27 + v28) = v25;
        v23 = (char *)*v26;
        if ( (int *)(v23 - 12) != &dword_28898C0 )
          goto LABEL_44;
        goto def_16573F2;
      case 3:
        goto LABEL_10;
      case 2:
        sub_21E7EE0(v7, 0, *(_BYTE **)(*((_DWORD *)v3 + 8) - 12), 0);
        sub_21E7EE0((const void **)v34, 0, *(_BYTE **)(*((_DWORD *)v3 + 9) - 12), 0);
        *((_DWORD *)v3 + 7) = 3;
LABEL_10:
        v15 = v35;
        if ( v35 != 13 )
          if ( v35 == 58 )
            v4 = 0;
            v30 = 4;
            *((_DWORD *)v3 + 10) = 0;
            goto LABEL_35;
          v16 = (unsigned __int8)(v35 - 65);
          v17 = v16 >= 0x19;
          v18 = v16 == 25;
          v19 = *v7;
          *(_QWORD *)&v20 = *(_QWORD *)((char *)*v7 - 12);
          if ( v18 || !v17 )
            v15 = v35 + 32;
          v22 = v20 + 1;
          if ( v20 + 1 > v21 || *(v19 - 1) >= 1 )
            sub_21E6FCC(v7, v20 + 1);
            v19 = *v7;
            v20 = *((_DWORD *)*v7 - 3);
          *((_BYTE *)v19 + v20) = v15;
          v4 = 0;
          v23 = (char *)*v7;
          if ( (int *)((char *)*v7 - 12) != &dword_28898C0 )
LABEL_44:
            *((_DWORD *)v23 - 1) = 0;
            *((_DWORD *)v23 - 3) = v22;
            v23[v22] = byte_26C67B8[0];
def_16573F2:
          if ( ++v8 >= v6 )
            return *((_DWORD *)v3 + 7);
          continue;
        v4 = 0;
        if ( !*(_DWORD *)(*((_DWORD *)v3 + 8) - 12) )
          v30 = 6;
LABEL_35:
          *((_DWORD *)v3 + 7) = v30;
          goto def_16573F2;
LABEL_49:
        result = 8;
        *((_DWORD *)v3 + 7) = 8;
        return result;
      case 0:
        v9 = v35;
          *((_DWORD *)v3 + 7) = 1;
          v10 = *v33;
          *(_QWORD *)&v11 = *(_QWORD *)((char *)*v33 - 12);
          v12 = v11 + 1;
          if ( v11 + 1 > v13 || *(v10 - 1) >= 1 )
            sub_21E6FCC(v33, v11 + 1);
            v10 = *v33;
            v11 = *((_DWORD *)*v33 - 3);
          *((_BYTE *)v10 + v11) = v9;
          v14 = *v33;
          if ( (int *)((char *)*v33 - 12) != &dword_28898C0 )
            *(v14 - 1) = 0;
            *(v14 - 3) = v12;
            *((_BYTE *)v14 + v12) = byte_26C67B8[0];
      case 1:
        *((_DWORD *)v3 + 7) = 2;
        return 1;
      default:
    }
  }
}


  if ( HttpHeaders::getState((HttpHeaders *)(v3 + 548)) != 7 )
{
  result = HttpHeaders::getState((HttpHeaders *)(v3 + 548));
  if ( result == 7 )
  {
    result = *(_DWORD *)(v3 + 612);
    if ( result != 1 )
    {
      *(_DWORD *)(v3 + 612) = 5;
      result = *(_DWORD *)(v3 + 504);
      if ( result )
        result = (*(int (__fastcall **)(int, int))(v3 + 508))(v3 + 496, v3 + 460);
    }
  }
  return result;
}


void **__fastcall HttpHeaders::getStatusCode(HttpHeaders *this, int a2)
{
  int *v2; // r1@1
  int v3; // r12@1
  int v4; // t1@1
  int v5; // r3@1
  int v6; // r4@1
  int v7; // lr@1
  int v8; // r5@2
  bool v9; // zf@3
  _BYTE *v10; // r2@3
  int v11; // r6@6
  bool v12; // zf@6
  int v13; // r2@10
  int v14; // r4@21
  int v15; // r5@21
  int v16; // r6@22
  bool v17; // zf@23
  _BYTE *v18; // r5@23
  int v19; // r7@26
  bool v20; // zf@26
  int v21; // r5@30
  int v23; // r6@42
  unsigned int v24; // r2@42

  v4 = *(_DWORD *)(a2 + 24);
  v2 = (int *)(a2 + 24);
  v3 = v4;
  v5 = *(_DWORD *)(v4 - 12);
  v6 = v4;
  v7 = v4 + v5;
  if ( v5 >> 2 < 1 )
  {
LABEL_10:
    v13 = v7 - v6;
    if ( v7 - v6 == 1 )
    {
      v10 = (_BYTE *)v6;
    }
    else
      if ( v13 == 2 )
      {
        v10 = (_BYTE *)v6;
      }
      else
        if ( v13 != 3 )
          return sub_21E94B4((void **)this, (const char *)&unk_257BC67);
        if ( *(_BYTE *)v6 == 32 )
          goto LABEL_20;
        v10 = (_BYTE *)(v6 + 1);
      if ( *v10 == 32 )
        goto LABEL_20;
      ++v10;
    if ( *v10 == 32 )
      goto LABEL_20;
    return sub_21E94B4((void **)this, (const char *)&unk_257BC67);
  }
  v8 = (v5 >> 2) + 1;
  v6 = v3;
  while ( 1 )
    v9 = *(_BYTE *)v6 == 32;
    v10 = (_BYTE *)v6;
    if ( *(_BYTE *)v6 != 32 )
      v10 = (_BYTE *)(v6 + 1);
      v9 = *(_BYTE *)(v6 + 1) == 32;
    if ( v9 )
      break;
    v10 = (_BYTE *)(v6 + 2);
    v11 = *(_BYTE *)(v6 + 2);
    v12 = v11 == 32;
    if ( v11 != 32 )
      v10 = (_BYTE *)(v6 + 3);
      v12 = *(_BYTE *)(v6 + 3) == 32;
    if ( v12 )
    --v8;
    v6 += 4;
    if ( v8 <= 1 )
      goto LABEL_10;
LABEL_20:
  if ( v10 == (_BYTE *)v7 )
  v14 = (int)(v10 + 1);
  v15 = (v7 - (signed int)(v10 + 1)) >> 2;
  if ( v15 < 1 )
LABEL_30:
    v21 = v7 - v14;
    if ( v7 - v14 == 1 )
      v18 = (_BYTE *)v14;
      if ( v21 == 2 )
        v18 = (_BYTE *)v14;
        if ( v21 != 3 )
        if ( *(_BYTE *)v14 == 32 )
          goto LABEL_41;
        v18 = (_BYTE *)(v14 + 1);
      if ( *v18 == 32 )
        goto LABEL_41;
      ++v18;
    if ( *v18 == 32 )
      goto LABEL_41;
  v16 = v15 + 1;
    v17 = *(_BYTE *)v14 == 32;
    v18 = (_BYTE *)v14;
    if ( *(_BYTE *)v14 != 32 )
      v18 = (_BYTE *)(v14 + 1);
      v17 = *(_BYTE *)(v14 + 1) == 32;
    if ( v17 )
    v18 = (_BYTE *)(v14 + 2);
    v19 = *(_BYTE *)(v14 + 2);
    v20 = v19 == 32;
    if ( v19 != 32 )
      v18 = (_BYTE *)(v14 + 3);
      v20 = *(_BYTE *)(v14 + 3) == 32;
    if ( v20 )
    --v16;
    v14 += 4;
    if ( v16 <= 1 )
      goto LABEL_30;
LABEL_41:
  if ( v18 == (_BYTE *)v7 )
  v23 = (int)&v10[-v3];
  v24 = (unsigned int)&v10[-v3 + 1];
  if ( v5 < v24 )
    sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v24, v5);
  return sub_21E9040((void **)this, v2, v24, (unsigned int)(&v18[~v23] - v3));
}


int __fastcall HttpHeaders::HttpHeaders(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r2@1
  int v5; // r1@1
  _DWORD *v6; // r0@2
  _DWORD *v7; // r2@2
  _DWORD *v8; // r1@3
  _DWORD *v9; // r1@5

  v2 = a1;
  v3 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  v4 = a1 + 4;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 12) = 0;
  *(_DWORD *)(v4 + 16) = 0;
  *(_DWORD *)(v4 + 8) = v4;
  *(_DWORD *)(v4 + 12) = v4;
  v5 = *(_DWORD *)(a2 + 8);
  if ( v5 )
  {
    v6 = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_copy(
           a1,
           v5,
           v4);
    v7 = v6;
    *(_DWORD *)(v2 + 8) = v6;
    do
    {
      v8 = v7;
      v7 = (_DWORD *)v7[2];
    }
    while ( v7 );
    *(_DWORD *)(v2 + 12) = v8;
      v9 = v6;
      v6 = (_DWORD *)v6[3];
    while ( v6 );
    *(_DWORD *)(v2 + 16) = v9;
    *(_DWORD *)(v2 + 20) = *(_DWORD *)(v3 + 20);
  }
  sub_119C854((int *)(v2 + 24), (int *)(v3 + 24));
  *(_DWORD *)(v2 + 28) = *(_DWORD *)(v3 + 28);
  sub_119C854((int *)(v2 + 32), (int *)(v3 + 32));
  sub_119C854((int *)(v2 + 36), (int *)(v3 + 36));
  *(_DWORD *)(v2 + 40) = *(_DWORD *)(v3 + 40);
  return v2;
}


int *__fastcall HttpHeaders::addHeader(int a1, const void **a2, int *a3)
{
  int v3; // r10@1
  int v4; // r0@1
  int v5; // r11@1
  const void **v6; // r9@1
  int v7; // r5@1
  const void *v8; // r7@2
  int v9; // r4@2
  size_t v10; // r6@2
  _DWORD *v11; // r0@4
  size_t v12; // r8@4
  size_t v13; // r2@4
  int v14; // r0@6
  _DWORD *v15; // r1@13
  unsigned int v16; // r4@13
  unsigned int v17; // r6@13
  size_t v18; // r2@13
  int *result; // r0@15
  int *v20; // r0@20
  int *v21; // [sp+0h] [bp-28h]@1

  v3 = a1;
  v21 = a3;
  v4 = *(_DWORD *)(a1 + 8);
  v5 = v3 + 4;
  v6 = a2;
  v7 = v3 + 4;
  if ( v4 )
  {
    v8 = *a2;
    v9 = v3 + 4;
    v10 = *((_DWORD *)*a2 - 3);
    do
    {
      v7 = v4;
      while ( 1 )
      {
        v11 = *(_DWORD **)(v7 + 16);
        v12 = *(v11 - 3);
        v13 = *(v11 - 3);
        if ( v12 > v10 )
          v13 = v10;
        v14 = memcmp(v11, v8, v13);
        if ( !v14 )
          v14 = v12 - v10;
        if ( v14 >= 0 )
          break;
        v7 = *(_DWORD *)(v7 + 12);
        if ( !v7 )
        {
          v7 = v9;
          goto LABEL_12;
        }
      }
      v4 = *(_DWORD *)(v7 + 8);
      v9 = v7;
    }
    while ( v4 );
  }
LABEL_12:
  if ( v7 == v5 )
    goto LABEL_23;
  v15 = *(_DWORD **)(v7 + 16);
  v16 = *((_DWORD *)*v6 - 3);
  v17 = *(v15 - 3);
  v18 = *((_DWORD *)*v6 - 3);
  if ( v16 > v17 )
    v18 = *(v15 - 3);
  result = (int *)memcmp(*v6, v15, v18);
  if ( !result )
    result = (int *)(v16 - v17);
  if ( (signed int)result < 0 )
    v7 = v3 + 4;
LABEL_23:
    v20 = (int *)std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::operator[](
                   v3,
                   v6);
    result = EntityInteraction::setInteractText(v20, v21);
  return result;
}


char *__fastcall HttpHeaders::getStatusLine(HttpHeaders *this)
{
  return (char *)this + 24;
}


signed int __fastcall HttpHeaders::getHeader(int a1, const void **a2, int *a3)
{
  const void **v3; // r9@1
  int v4; // r1@1
  int v5; // r10@1
  int *v6; // r8@1
  int v7; // r4@1
  const void *v8; // r6@2
  int v9; // r11@2
  size_t v10; // r5@2
  _DWORD *v11; // r0@4
  size_t v12; // r7@4
  size_t v13; // r2@4
  int v14; // r0@6
  _DWORD *v15; // r1@13
  unsigned int v16; // r5@13
  unsigned int v17; // r6@13
  size_t v18; // r2@13
  int v19; // r0@15
  signed int result; // r0@20

  v3 = a2;
  v4 = *(_DWORD *)(a1 + 8);
  v5 = a1 + 4;
  v6 = a3;
  v7 = a1 + 4;
  if ( v4 )
  {
    v8 = *v3;
    v9 = a1 + 4;
    v10 = *((_DWORD *)*v3 - 3);
    do
    {
      v7 = v4;
      while ( 1 )
      {
        v11 = *(_DWORD **)(v7 + 16);
        v12 = *(v11 - 3);
        v13 = *(v11 - 3);
        if ( v12 > v10 )
          v13 = v10;
        v14 = memcmp(v11, v8, v13);
        if ( !v14 )
          v14 = v12 - v10;
        if ( v14 >= 0 )
          break;
        v7 = *(_DWORD *)(v7 + 12);
        if ( !v7 )
        {
          v7 = v9;
          goto LABEL_12;
        }
      }
      v4 = *(_DWORD *)(v7 + 8);
      v9 = v7;
    }
    while ( v4 );
  }
LABEL_12:
  if ( v7 == v5 )
    goto LABEL_24;
  v15 = *(_DWORD **)(v7 + 16);
  v16 = *((_DWORD *)*v3 - 3);
  v17 = *(v15 - 3);
  v18 = *((_DWORD *)*v3 - 3);
  if ( v16 > v17 )
    v18 = *(v15 - 3);
  v19 = memcmp(*v3, v15, v18);
  if ( !v19 )
    v19 = v16 - v17;
  if ( v19 < 0 )
    v7 = v5;
LABEL_24:
    result = 0;
  else
    EntityInteraction::setInteractText(v6, (int *)(v7 + 20));
    result = 1;
  return result;
}


HttpHeaders *__fastcall HttpHeaders::~HttpHeaders(HttpHeaders *this)
{
  HttpHeaders *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15

  v1 = this;
  v2 = *((_DWORD *)this + 9);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 8);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v4 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 6);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v6 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (int)v1,
    *((_DWORD *)v1 + 2));
  return v1;
}


char *__fastcall HttpHeaders::clear(HttpHeaders *this)
{
  HttpHeaders *v1; // r4@1

  v1 = this;
  *((_DWORD *)this + 7) = 0;
  std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
    (int)this,
    *((_DWORD *)this + 2));
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = (char *)v1 + 4;
  *((_DWORD *)v1 + 4) = (char *)v1 + 4;
  *((_DWORD *)v1 + 5) = 0;
  sub_21E7EE0((const void **)v1 + 8, 0, *(_BYTE **)(*((_DWORD *)v1 + 8) - 12), 0);
  sub_21E7EE0((const void **)v1 + 9, 0, *(_BYTE **)(*((_DWORD *)v1 + 9) - 12), 0);
  return sub_21E7EE0((const void **)v1 + 6, 0, *(_BYTE **)(*((_DWORD *)v1 + 6) - 12), 0);
}
