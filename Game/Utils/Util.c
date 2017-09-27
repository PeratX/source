

int *__fastcall Util::stringReplace(int *a1, _BYTE **a2, char **a3, int a4)
{
  _BYTE **v4; // r8@1
  int v5; // r4@1
  _BYTE *v6; // r1@1
  char **v7; // r5@1
  int *v8; // r6@1
  unsigned int v9; // r9@1
  bool v10; // zf@1
  unsigned int v11; // r2@4
  unsigned int v12; // r3@4
  unsigned int v13; // r0@6
  unsigned int v14; // r7@6

  v4 = a2;
  v5 = a4;
  v6 = *a2;
  v7 = a3;
  v8 = a1;
  v9 = *((_DWORD *)v6 - 3);
  v10 = v9 == 0;
  if ( v9 )
    v10 = a4 == 0;
  if ( !v10 )
  {
    v11 = 0;
    v12 = *((_DWORD *)v6 - 3);
    while ( 1 )
    {
      v13 = sub_21E76A0(v8, v6, v11, v12);
      v14 = v13;
      if ( v13 == -1 )
        break;
      --v5;
      sub_21E91FC((const void **)v8, v13, v9, *v7, *((_BYTE **)*v7 - 3));
      if ( !v5 )
      v6 = *v4;
      v12 = *((_DWORD *)*v4 - 3);
      v11 = *((_DWORD *)*v7 - 3) + v14;
    }
  }
  return v8;
}


int *__fastcall Util::stringTrim(int *a1, int *a2, char *a3)
{
  _BYTE *v3; // lr@0
  int v4; // r12@1
  int v5; // r3@1
  bool v6; // zf@1
  int v7; // r4@4
  char *v8; // r10@5
  signed int v9; // r5@5
  int v10; // r9@5
  int v11; // r8@6
  signed int v12; // r2@6
  int v13; // r7@7
  signed int v14; // r11@7
  char *v15; // r6@7
  char *v16; // r5@8
  int v17; // r0@8
  bool v18; // zf@8
  int v19; // r0@11
  bool v20; // zf@11
  int v21; // r0@15
  int v23; // r7@35
  char *v24; // r6@35
  signed int v25; // r6@48
  int v26; // r8@48
  int v27; // r9@48
  int v28; // r10@49
  int v29; // r6@50
  signed int v30; // r0@50
  _BYTE *v31; // r5@50
  _BYTE *v32; // r7@51
  int v33; // r1@51
  bool v34; // zf@51
  int v35; // r1@54
  bool v36; // zf@54
  int v37; // r0@58
  int v38; // r0@70
  bool v39; // nf@70
  unsigned __int8 v40; // vf@70
  int v41; // r0@77
  _BYTE *v42; // r7@77
  char *v43; // [sp+0h] [bp-30h]@5
  int *v44; // [sp+4h] [bp-2Ch]@5
  int *v45; // [sp+8h] [bp-28h]@5

  v4 = *a2;
  v5 = *(_DWORD *)(*a2 - 12);
  v6 = v5 == 0;
  if ( v5 )
  {
    v3 = *(_BYTE **)a3;
    a3 = *(char **)(*(_DWORD *)a3 - 12);
    v6 = a3 == 0;
  }
  if ( v6 )
    return sub_21E8AF4(a1, (int *)&Util::EMPTY_STRING);
  v7 = v5 - 1;
  if ( v5 < 1 )
    v43 = a3;
    v44 = a2;
    v12 = 0;
    v45 = a1;
    goto LABEL_47;
  v44 = a2;
  v45 = a1;
  v8 = &a3[(_DWORD)v3];
  v9 = *((_DWORD *)v3 - 3);
  v43 = a3;
  v10 = (int)&v3[v9];
  if ( v9 >> 2 < 1 )
    while ( 1 )
    {
      if ( v9 == 1 )
      {
        v23 = *(_BYTE *)(v4 + v12);
        v24 = v3;
        goto LABEL_41;
      }
      if ( v9 == 3 )
        if ( *v3 == v23 )
          goto LABEL_45;
        v24 = v3 + 1;
      else
        if ( v9 != 2 )
        {
          v24 = &v3[v9];
        }
      if ( (unsigned __int8)*v24 != v23 )
        ++v24;
LABEL_41:
        if ( (unsigned __int8)*v24 != v23 )
LABEL_45:
      if ( v24 != v8 && ++v12 < v5 )
        continue;
      goto LABEL_47;
    }
  v11 = (v9 >> 2) + 1;
  v12 = 0;
  do
    v13 = *(_BYTE *)(v4 + v12);
    v14 = v11;
    v15 = v3;
      v16 = v15;
      v17 = (unsigned __int8)*v15;
      v18 = v17 == v13;
      if ( v17 != v13 )
        ++v15;
        v18 = (unsigned __int8)v16[1] == v13;
      if ( v18 )
        break;
      v15 = v16 + 2;
      v19 = (unsigned __int8)v16[2];
      v20 = v19 == v13;
      if ( v19 != v13 )
        v15 = v16 + 3;
        v20 = (unsigned __int8)v16[3] == v13;
      if ( v20 )
      --v14;
      v15 = v16 + 4;
      if ( v14 <= 1 )
        v21 = v10 - (_DWORD)v15;
        if ( v10 - (_DWORD)v15 != 1 )
          if ( v21 != 2 )
          {
            if ( v21 != 3 )
            {
              v15 = (char *)v10;
              break;
            }
            if ( (unsigned __int8)*v15 == v13 )
            v15 = v16 + 5;
          }
          if ( (unsigned __int8)*v15 == v13 )
            break;
          ++v15;
        if ( (unsigned __int8)*v15 != v13 )
          v15 = (char *)v10;
    if ( v15 == v8 )
      break;
    ++v12;
  while ( v12 < v5 );
LABEL_47:
  if ( v5 <= v12 )
    v38 = v5 - 1;
    goto LABEL_93;
  v25 = *((_DWORD *)v3 - 3);
  v26 = (int)&v3[v25];
  v27 = (int)&v43[(_DWORD)v3];
  if ( v25 >> 2 < 1 )
      if ( v25 == 1 )
        v41 = *(_BYTE *)(v4 + v7);
        v42 = v3;
        if ( v25 == 3 )
          v41 = *(_BYTE *)(v4 + v7);
          v42 = v3;
          if ( *v3 == v41 )
            goto LABEL_87;
          v42 = v3 + 1;
        else
          if ( v25 != 2 )
            v42 = &v3[v25];
        if ( *v42 == v41 )
          goto LABEL_87;
        ++v42;
      if ( *v42 != v41 )
        v42 = &v3[v25];
LABEL_87:
      if ( v42 == (_BYTE *)v27 )
        v38 = v7;
        goto LABEL_93;
      v38 = v7 - 1;
      v40 = __OFSUB__(v7, v12);
      v6 = v7 == v12;
      v39 = v7-- - v12 < 0;
      if ( (unsigned __int8)(v39 ^ v40) | v6 )
  v28 = (v25 >> 2) + 1;
  while ( 1 )
    v29 = *(_BYTE *)(v4 + v7);
    v30 = v28;
    v31 = v3;
      v32 = v31;
      v33 = *v31;
      v34 = v33 == v29;
      if ( v33 != v29 )
        ++v31;
        v34 = v32[1] == v29;
      if ( v34 )
      v31 = v32 + 2;
      v35 = v32[2];
      v36 = v35 == v29;
      if ( v35 != v29 )
        v31 = v32 + 3;
        v36 = v32[3] == v29;
      if ( v36 )
      --v30;
      v31 = v32 + 4;
      if ( v30 <= 1 )
        v37 = v26 - (_DWORD)v31;
        if ( v26 - (_DWORD)v31 != 1 )
          if ( v37 != 2 )
            if ( v37 != 3 )
              v31 = (_BYTE *)v26;
            if ( *v31 == v29 )
            v31 = v32 + 5;
          if ( *v31 == v29 )
          ++v31;
        if ( *v31 != v29 )
          v31 = (_BYTE *)v26;
    if ( v31 == (_BYTE *)v27 )
    v38 = v7 - 1;
    v40 = __OFSUB__(v7, v12);
    v6 = v7 == v12;
    v39 = v7-- - v12 < 0;
    if ( (unsigned __int8)(v39 ^ v40) | v6 )
      goto LABEL_93;
  v38 = v7;
LABEL_93:
  if ( v5 < (unsigned int)v12 )
    sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v12, v5);
  return (int *)sub_21E9040((void **)v45, v44, v12, 1 - v12 + v38);
}


signed int __fastcall Util::startsWith(_DWORD *a1, _DWORD *a2)
{
  int v2; // r2@1
  int v4; // r3@4

  v2 = *(_DWORD *)(*a2 - 12);
  if ( *(_DWORD *)(*a1 - 12) >= (unsigned int)v2 )
  {
    if ( v2 <= 0 )
      return 1;
    v4 = 0;
    while ( *(_BYTE *)(*a2 + v4) == *(_BYTE *)(*a1 + v4) )
    {
      if ( ++v4 >= v2 )
        return 1;
    }
  }
  return 0;
}


void __fastcall Util::toHex(const void **a1, _DWORD *a2)
{
  Util::toHex(a1, a2);
}


void __fastcall Util::toHex(const void **a1, _DWORD *a2)
{
  const void **v2; // r4@1
  _DWORD *v3; // r11@1
  unsigned int v4; // r7@1
  unsigned int v5; // r9@2
  _DWORD *v6; // r0@3
  unsigned int v7; // r8@3
  int v8; // r1@3 OVERLAPPED
  int v9; // r6@3
  unsigned int v10; // r2@3
  _DWORD *v11; // r0@6
  int v12; // r1@8 OVERLAPPED
  int v13; // r6@8
  unsigned int v14; // r2@8
  _DWORD *v15; // r0@11

  v2 = a1;
  v3 = a2;
  v4 = *(_DWORD *)(*a2 - 12);
  *a1 = &unk_28898CC;
  sub_21E6FCC(a1, 2 * v4);
  if ( v4 )
  {
    v5 = 0;
    do
    {
      v6 = *v2;
      v7 = *(_BYTE *)(*v3 + v5);
      *(_QWORD *)&v8 = *(_QWORD *)((char *)*v2 - 12);
      v9 = v8 + 1;
      if ( v8 + 1 > v10 || *(v6 - 1) >= 1 )
      {
        sub_21E6FCC(v2, v8 + 1);
        v6 = *v2;
        v8 = *((_DWORD *)*v2 - 3);
      }
      *((_BYTE *)v6 + v8) = a0123456789ab_2[v7 >> 4];
      v11 = *v2;
      if ( (int *)((char *)*v2 - 12) != &dword_28898C0 )
        *(v11 - 1) = 0;
        *(v11 - 3) = v9;
        *((_BYTE *)v11 + v9) = byte_26C67B8[0];
        v11 = *v2;
      *(_QWORD *)&v12 = *(_QWORD *)(v11 - 3);
      v13 = v12 + 1;
      if ( v12 + 1 > v14 || *(v11 - 1) >= 1 )
        sub_21E6FCC(v2, v12 + 1);
        v12 = *((_DWORD *)*v2 - 3);
      *((_BYTE *)v11 + v12) = a0123456789ab_2[v7 & 0xF];
      v15 = *v2;
        *(v15 - 1) = 0;
        *(v15 - 3) = v13;
        *((_BYTE *)v15 + v13) = byte_26C67B8[0];
      ++v5;
    }
    while ( v5 < v4 );
  }
}


char *__fastcall Util::toLower(void **a1, int a2, unsigned int a3)
{
  const void **v3; // r4@1
  char *v4; // r5@1
  _DWORD *v5; // r6@3
  int v6; // r7@6
  _BYTE *v7; // r2@7
  char *result; // r0@9
  int v9; // t1@10

  v3 = (const void **)a1;
  sub_21E91E0(a1, a3, a2);
  v4 = (char *)*v3;
  if ( *((_DWORD *)*v3 - 1) <= -1 )
  {
    v5 = *v3;
  }
  else
    sub_21E8010(v3);
    v4 = (char *)*v3;
    if ( *((_DWORD *)*v3 - 1) < 0 )
    {
      v5 = *v3;
    }
    else
      sub_21E8010(v3);
  v6 = *(v5 - 3);
  if ( *(v5 - 1) <= -1 )
    v7 = v5;
    v7 = *v3;
  result = (char *)v5 + v6;
  if ( v4 != (char *)v5 + v6 )
    do
      v9 = (unsigned __int8)*v4++;
      *v7++ = *(_BYTE *)(tolower_tab_ + 2 * v9 + 2);
    while ( result != v4 );
  return result;
}


void __fastcall Util::toNiceString(Util *this, int _R1)
{
  Util::toNiceString(this, _R1);
}


signed int __fastcall Util::isValidPath(int a1, _BYTE *a2)
{
  signed int v2; // r2@2
  int v3; // r3@3
  bool v4; // zf@3

  if ( a1 )
  {
    v2 = 0;
    while ( 1 )
    {
      v3 = *a2;
      v4 = v3 == 10;
      if ( v3 != 10 )
        v4 = v3 == 13;
      if ( v4 )
        break;
      --a1;
      ++a2;
      if ( !a1 )
        goto LABEL_7;
    }
  }
  else
LABEL_7:
    v2 = 1;
  return v2;
}


_DWORD *__fastcall Util::splitLines(int a1, int *a2)
{
  int *v2; // r4@1
  int v3; // r8@1
  char *v4; // r1@1
  int v5; // r0@1
  int v6; // r6@2
  int v7; // r2@4
  __int64 v8; // r0@8
  int v9; // r4@11
  int v10; // r2@13
  __int64 v11; // r0@19
  char *v12; // r0@22
  void **v13; // r0@23
  void *v14; // r0@23
  unsigned int *v16; // r2@25
  signed int v17; // r1@27
  unsigned int *v18; // r2@29
  signed int v19; // r1@31
  _DWORD *v20; // [sp+8h] [bp-E8h]@1
  void **v21; // [sp+Ch] [bp-E4h]@1
  int v22; // [sp+10h] [bp-E0h]@24
  void **v23; // [sp+14h] [bp-DCh]@1
  void **v24; // [sp+18h] [bp-D8h]@23
  int v25; // [sp+34h] [bp-BCh]@24
  int v26; // [sp+3Ch] [bp-B4h]@23
  int v27; // [sp+40h] [bp-B0h]@24

  v2 = a2;
  v3 = a1;
  sub_21D103C((int)&v21, 24);
  sub_21CBF38((char *)&v23, *v2, *(_DWORD *)(*v2 - 12));
  *(_DWORD *)v3 = 0;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  v20 = &unk_28898CC;
  v4 = (char *)*(v21 - 3) + (_DWORD)&v21;
  v5 = *((_DWORD *)v4 + 5);
  if ( !v5 )
  {
    v6 = *((_DWORD *)v4 + 31);
    if ( !v6 )
      sub_21E5824();
    if ( *(_BYTE *)(v6 + 28) )
    {
      v7 = *(_BYTE *)(v6 + 39);
    }
    else
      sub_21B50F0(*((_DWORD *)v4 + 31));
      v7 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v6 + 24))(v6, 10);
    sub_21BBAF0((char *)&v21, (const void **)&v20, v7);
    while ( 1 )
      v5 = *(_DWORD *)((char *)*(v21 - 3) + (_DWORD)&v21 + 20);
      if ( v5 )
        break;
      v8 = *(_QWORD *)(v3 + 4);
      if ( (_DWORD)v8 == HIDWORD(v8) )
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string &>(
          (unsigned __int64 *)v3,
          (int *)&v20);
      else
        *(_DWORD *)(v3 + 4) = sub_21E8AF4((int *)v8, (int *)&v20) + 1;
      v9 = *(_DWORD *)((char *)*(v21 - 3) + (_DWORD)&v21 + 124);
      if ( !v9 )
        sub_21E5824();
      if ( *(_BYTE *)(v9 + 28) )
      {
        v10 = *(_BYTE *)(v9 + 39);
      }
        sub_21B50F0(v9);
        v10 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v9 + 24))(v9, 10);
      sub_21BBAF0((char *)&v21, (const void **)&v20, v10);
  }
  if ( v5 & 2 && *(v20 - 3) )
    v11 = *(_QWORD *)(v3 + 4);
    if ( (_DWORD)v11 == HIDWORD(v11) )
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string &>(
        (unsigned __int64 *)v3,
        (int *)&v20);
      *(_DWORD *)(v3 + 4) = sub_21E8AF4((int *)v11, (int *)&v20) + 1;
  v12 = (char *)(v20 - 3);
  if ( v20 - 3 != &dword_28898C0 )
    v16 = v20 - 1;
    if ( &pthread_create )
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = off_26D3F84;
  v21 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v21) = off_26D3F80[0];
  v23 = v13;
  v24 = &off_27734E8;
  v14 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v26 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v24 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v25);
  v21 = (void **)off_26D3F68;
  *(void ***)((char *)&v21 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v22 = 0;
  return sub_21B6560(&v27);
}


signed int __fastcall Util::toBool(unsigned int *a1, _BYTE *a2)
{
  _BYTE *v2; // r4@1
  signed int v3; // r5@7
  void *v4; // r0@10
  unsigned int *v6; // r2@12
  signed int v7; // r1@14
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  Util::toLower((void **)&v8, *(_DWORD *)(*a1 - 12), *a1);
  if ( sub_21E7D6C((const void **)&v8, "true")
    && sub_21E7D6C((const void **)&v8, "1")
    && sub_21E7D6C((const void **)&v8, "yes") )
  {
    if ( sub_21E7D6C((const void **)&v8, "false")
      && sub_21E7D6C((const void **)&v8, "0")
      && sub_21E7D6C((const void **)&v8, "no") )
    {
      v3 = 0;
    }
    else
      v3 = 1;
      *v2 = 0;
  }
  else
    v3 = 1;
    *v2 = 1;
  v4 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v4);
  return v3;
}


void __fastcall Util::normalizeLineEndings(int *a1)
{
  Util::normalizeLineEndings(a1);
}


int __fastcall Util::splitString(unsigned int *a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  char *v5; // r0@2
  int v6; // r0@2
  __int64 v7; // r0@4
  char *v8; // r0@7
  void **v9; // r0@8
  void *v10; // r0@8
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  char *v16; // [sp+0h] [bp-D8h]@1
  void **v17; // [sp+4h] [bp-D4h]@1
  int v18; // [sp+8h] [bp-D0h]@9
  void **v19; // [sp+Ch] [bp-CCh]@8
  void **v20; // [sp+10h] [bp-C8h]@8
  int v21; // [sp+2Ch] [bp-ACh]@9
  int v22; // [sp+34h] [bp-A4h]@8
  int v23; // [sp+38h] [bp-A0h]@9

  v3 = a3;
  v4 = a2;
  sub_21D12A4((int)&v17, a1, 24);
  v16 = (char *)&unk_28898CC;
  while ( 1 )
  {
    v5 = sub_21BBAF0((char *)&v17, (const void **)&v16, v4);
    v6 = (int)&v5[*(_DWORD *)(*(_DWORD *)v5 - 12)];
    if ( !v6 || *(_DWORD *)(v6 + 20) & 5 )
      break;
    v7 = *(_QWORD *)(v3 + 4);
    if ( (_DWORD)v7 == HIDWORD(v7) )
    {
      std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
        (unsigned __int64 *)v3,
        (int *)&v16);
    }
    else
      sub_21E8AF4((int *)v7, (int *)&v16);
      *(_DWORD *)(v3 + 4) += 4;
  }
  v8 = v16 - 12;
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = off_26D3F84;
  v17 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v17) = off_26D3F80[0];
  v19 = v9;
  v20 = &off_27734E8;
  v10 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v22 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v20 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v21);
  v17 = (void **)off_26D3F68;
  *(void ***)((char *)&v17 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v18 = 0;
  sub_21B6560(&v23);
  return v3;
}


void __fastcall Util::toNiceString(Util *this, int _R1)
{
  Util *v2; // r4@1
  const void **v9; // r0@4
  void *v10; // r0@4
  unsigned int *v11; // r2@5
  signed int v12; // r1@7
  const void **v15; // r0@9
  unsigned int *v16; // r2@11
  signed int v17; // r1@13
  int v18; // [sp+0h] [bp-28h]@9
  int v19; // [sp+4h] [bp-24h]@4

  v2 = this;
  if ( _R1 <= 9999 )
  {
    Util::toString<int,(void *)0,(void *)0>((void **)this, _R1);
    return;
  }
  if ( _R1 > 9999999 )
    _R0 = 1125899907;
    __asm { SMMUL.W         R0, R1, R0 }
    Util::toString<int,(void *)0,(void *)0>((void **)&v18, ((signed int)_R0 >> 18) + (_R0 >> 31));
    v15 = sub_21E7408((const void **)&v18, (char *)&aCdefghjklmnopq[9], 1u);
    *(_DWORD *)v2 = *v15;
    *v15 = &unk_28898CC;
    v10 = (void *)(v18 - 12);
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
        goto LABEL_20;
    }
  else
    _R0 = 274877907;
    Util::toString<int,(void *)0,(void *)0>((void **)&v19, ((signed int)_R0 >> 6) + (_R0 >> 31));
    v9 = sub_21E7408((const void **)&v19, (char *)aKlnopq, 1u);
    *(_DWORD *)v2 = *v9;
    *v9 = &unk_28898CC;
    v10 = (void *)(v19 - 12);
    if ( (int *)(v19 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v19 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
LABEL_20:
        j_j_j_j__ZdlPv_9(v10);
        return;
}


signed int __fastcall Util::endsWith(int *a1, const void **a2)
{
  _DWORD *v2; // r1@1
  int v3; // r2@1
  size_t v4; // r3@1
  int v5; // r4@1
  unsigned int v6; // r0@1
  signed int v7; // r1@1

  v2 = *a2;
  v3 = *(_DWORD *)(*a1 - 12);
  v4 = *(v2 - 3);
  v5 = v3 - v4;
  v6 = sub_21E7848(a1, v2, v3 - v4, v4);
  v7 = 0;
  if ( v6 == v5 )
    v7 = 1;
  return v7;
}


void __fastcall Util::_recordProfanityLocationInWord(int **a1, int a2, _DWORD *a3, int a4, int a5, int a6, unsigned __int64 *a7, int a8)
{
  int *v8; // r9@1
  int v9; // r5@1
  _DWORD *v10; // r4@1
  int v11; // r6@3
  int v12; // r7@3
  int i; // r5@6
  unsigned int v14; // r7@9
  unsigned int v15; // r3@10
  int v16; // r5@11
  int v17; // r6@11
  signed int v18; // r0@11
  signed int v19; // r11@11
  void *v20; // r0@18
  int v21; // r5@19
  int v22; // r6@19
  signed int v23; // r0@19
  int v24; // r7@19
  void *v25; // r0@26
  int v26; // r6@28
  int v27; // r5@28
  unsigned int *v28; // r2@31
  signed int v29; // r1@33
  unsigned int *v30; // r2@35
  signed int v31; // r1@37
  int v32; // [sp+4h] [bp-3Ch]@19
  int v33; // [sp+8h] [bp-38h]@11
  char v34; // [sp+Ch] [bp-34h]@4
  int v35; // [sp+14h] [bp-2Ch]@19
  int v36; // [sp+18h] [bp-28h]@11

  v8 = (int *)a1;
  v9 = a4;
  v10 = a3;
  if ( std::_Hashtable<std::string,std::pair<std::string const,int>,std::allocator<std::pair<std::string const,int>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         a7,
         a1) )
  {
    if ( v9 < a5 )
    {
      v11 = a5 - v9;
      v12 = 8 * v9;
      do
      {
        std::_Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>::_M_emplace_unique<std::pair<int,int> const&>(
          (int)&v34,
          a6,
          (__int64 *)(*v10 + v12));
        v12 += 8;
        --v11;
      }
      while ( v11 );
    }
  }
  else
    for ( i = *(_DWORD *)(a8 + 8); i; i = *(_DWORD *)i )
      v14 = sub_21E76A0(v8, *(_BYTE **)(i + 4), 0, *(_DWORD *)(*(_DWORD *)(i + 4) - 12));
      if ( v14 != -1 )
        v15 = *(_DWORD *)(*v8 - 12);
        if ( v15 < v14 )
          sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v14, v15);
        sub_21E9040((void **)&v33, v8, v14, *(_DWORD *)(*(_DWORD *)(i + 4) - 12));
        v16 = v33;
        v17 = *(_DWORD *)(v33 - 12);
        v18 = j_utf8proc_iterate(v33, *(_DWORD *)(v33 - 12), &v36);
        v19 = 0;
        while ( v18 > 0 )
        {
          v17 -= v18;
          v16 += v18;
          if ( v17 < 1 || v36 != 167 )
          {
            v18 = j_utf8proc_iterate(v16, v17, &v36);
            ++v19;
          }
          else
            v18 = j_utf8proc_iterate(++v16, --v17, &v36);
        }
        v20 = (void *)(v33 - 12);
        if ( (int *)(v33 - 12) != &dword_28898C0 )
          v28 = (unsigned int *)(v33 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v29 = __ldrex(v28);
            while ( __strex(v29 - 1, v28) );
            v29 = (*v28)--;
          if ( v29 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        sub_21E9040((void **)&v32, v8, 0, v14);
        v21 = v32;
        v22 = *(_DWORD *)(v32 - 12);
        v23 = j_utf8proc_iterate(v32, *(_DWORD *)(v32 - 12), &v35);
        v24 = 0;
        while ( v23 > 0 )
          v22 -= v23;
          v21 += v23;
          if ( v22 < 1 || v35 != 167 )
            v23 = j_utf8proc_iterate(v21, v22, &v35);
            ++v24;
            v23 = j_utf8proc_iterate(++v21, --v22, &v35);
        v25 = (void *)(v32 - 12);
        if ( (int *)(v32 - 12) != &dword_28898C0 )
          v30 = (unsigned int *)(v32 - 4);
              v31 = __ldrex(v30);
            while ( __strex(v31 - 1, v30) );
            v31 = (*v30)--;
          if ( v31 <= 0 )
            j_j_j_j__ZdlPv_9(v25);
        if ( v19 >= 1 )
          v26 = v24 + v19;
          v27 = 8 * v24;
          do
            std::_Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>::_M_emplace_unique<std::pair<int,int> const&>(
              (int)&v34,
              a6,
              (__int64 *)(*v10 + v27));
            v27 += 8;
          while ( v24 < v26 );
        return;
}


  if ( Util::isValidIP(*(_DWORD *)(**a2 - 12), **a2, 1, 1) == 1 )
{
    v4 = v2;
    v5 = v3;
LABEL_5:
    sub_119C854(v4, v5);
    goto LABEL_6;
  }
  if ( getaddrinfo((const char *)*v3, 0, 0, &pai) )
  {
    v5 = (int *)&Util::EMPTY_STRING;
    goto LABEL_5;
  v7 = pai;
  v8 = pai == 0;
  *v2 = (int)&unk_28898CC;
  if ( v8 )
    v10 = 0;
    goto LABEL_29;
  v9 = &pthread_create;
  do
    v14 = (int)v7->ai_canonname;
    if ( !v14 )
      goto LABEL_27;
    if ( v7->ai_family == 10 )
    {
      NetworkIdentifier::NetworkIdentifier((int)&v20, v14);
      NetworkIdentifier::getAddress((NetworkIdentifier *)&v17, (int)&v20);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v2, &v17);
      v15 = (void *)(v17 - 12);
      if ( (int *)(v17 - 12) == &dword_28898C0 )
        goto LABEL_27;
      v11 = (unsigned int *)(v17 - 4);
      if ( v9 )
      {
        v12 = v9;
        __dmb();
        do
          v13 = __ldrex(v11);
        while ( __strex(v13 - 1, v11) );
LABEL_14:
        v9 = v12;
        goto LABEL_16;
      }
    }
    else
      NetworkIdentifier::NetworkIdentifier((int)&v19, v14);
      NetworkIdentifier::getAddress((NetworkIdentifier *)&v16, (int)&v19);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v2, &v16);
      v15 = (void *)(v16 - 12);
      if ( (int *)(v16 - 12) == &dword_28898C0 )
      v11 = (unsigned int *)(v16 - 4);
        goto LABEL_14;
    v13 = (*v11)--;
LABEL_16:
    if ( v13 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v15);
LABEL_27:
    v7 = v7->ai_next;
  while ( v7 );
  v10 = pai;
LABEL_29:
  freeaddrinfo(v10);
LABEL_6:
  result = (char *)(_stack_chk_guard - v21);
  if ( _stack_chk_guard != v21 )
    _stack_chk_fail(result);
  return result;
}


signed int __fastcall Util::parseRange<int>(int *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // r6@1
  int *v4; // r7@1
  _DWORD *v5; // r5@1
  char *v6; // r4@1
  char *v7; // r0@2
  int v8; // r2@3
  unsigned int v9; // r3@3
  void *v10; // r0@4
  int *v11; // r11@5
  int v12; // r0@7
  void *v13; // r4@9
  void *v14; // r5@9
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  int *v17; // r0@19
  signed int v18; // r5@25
  void **v19; // r0@27
  void *v20; // r0@27
  unsigned int *v22; // r2@29
  signed int v23; // r1@31
  unsigned int *v24; // r2@37
  signed int v25; // r1@39
  int v26; // [sp+4h] [bp-F4h]@4
  int v27; // [sp+8h] [bp-F0h]@4
  void *v28; // [sp+Ch] [bp-ECh]@5
  void **v29; // [sp+14h] [bp-E4h]@1
  int v30; // [sp+18h] [bp-E0h]@28
  int v31; // [sp+1Ch] [bp-DCh]@5
  void **v32; // [sp+20h] [bp-D8h]@27
  int v33; // [sp+3Ch] [bp-BCh]@28
  int v34; // [sp+44h] [bp-B4h]@27
  int v35; // [sp+48h] [bp-B0h]@28

  v3 = a2;
  v4 = a1;
  v5 = a3;
  sub_21D103C((int)&v29, 24);
  v6 = sub_21E77E4(v4, 91, 0);
  if ( v6 == (char *)-1 )
  {
    v11 = &v31;
    sub_21CBF38((char *)&v31, *v4, *(_DWORD *)(*v4 - 12));
    sub_21B79F4((char *)&v29, v3);
    *v5 = *v3;
LABEL_25:
    v18 = 1;
    goto LABEL_27;
  }
  v7 = sub_21E77E4(v4, 93, (unsigned int)v6);
  if ( v7 != (char *)-1 )
    v8 = (int)(v6 + 1);
    v9 = *(_DWORD *)(*v4 - 12);
    if ( v9 < (unsigned int)(v6 + 1) )
      sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v8, v9);
    sub_21E9040((void **)&v26, v4, v8, (unsigned int)(v7 - 1));
    Util::split((int)&v27, &v26, 44);
    v10 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
    {
      v24 = (unsigned int *)(v26 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
      }
      else
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    }
    sub_21CBF38((char *)&v31, *(_DWORD *)v27, *(_DWORD *)(*(_DWORD *)v27 - 12));
    if ( (unsigned int)(((signed int)v28 - v27) >> 2) >= 2 )
      sub_21CBF38((char *)&v31, (int)" ", 1);
      sub_21CBF38((char *)&v31, *(_DWORD *)(v27 + 4), *(_DWORD *)(*(_DWORD *)(v27 + 4) - 12));
    sub_21B79F4((char *)&v29, v5);
    v12 = *v3;
    if ( *v3 > *v5 )
      *v3 = *v5;
      *v5 = v12;
    v13 = v28;
    v14 = (void *)v27;
    if ( (void *)v27 != v28 )
      do
        v17 = (int *)(*(_DWORD *)v14 - 12);
        if ( v17 != &dword_28898C0 )
        {
          v15 = (unsigned int *)(*(_DWORD *)v14 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
          }
          else
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j__ZdlPv_9(v17);
        }
        v14 = (char *)v14 + 4;
      while ( v14 != v13 );
      v14 = (void *)v27;
    if ( v14 )
      operator delete(v14);
    goto LABEL_25;
  v11 = &v31;
  v18 = 0;
LABEL_27:
  v19 = off_26D3F84;
  v29 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v29) = off_26D3F80[0];
  *v11 = (int)v19;
  v32 = &off_27734E8;
  v20 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v34 - 4);
    if ( &pthread_create )
      __dmb();
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v32 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v33);
  v29 = (void **)off_26D3F68;
  *(void ***)((char *)&v29 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v30 = 0;
  sub_21B6560(&v35);
  return v18;
}


signed int __fastcall Util::convertPointBetweenDimensions(int _R0, int a2, int a3, int a4, int a5)
{
  int *v6; // r0@8
  int v11; // r0@16
  signed int result; // r0@17
  _DWORD *v13; // r0@19
  int v14; // r0@25

  if ( a3 == a4 )
    goto LABEL_16;
  _R12 = a5;
  if ( a3 == 2 )
  {
    if ( !a4 )
    {
      *(_DWORD *)a2 = *(_DWORD *)a5;
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(a5 + 4);
      v11 = *(_DWORD *)(a5 + 8);
      goto LABEL_17;
    }
    if ( a4 != 2 )
      v6 = (int *)&Vec3::ZERO;
      goto LABEL_25;
  }
  if ( a3 == 1 )
    if ( a4 == 2 )
      v13 = &unk_2820014;
      goto LABEL_23;
    if ( a4 != 1 )
      if ( a4 )
      {
        v6 = (int *)&Vec3::ZERO;
        goto LABEL_25;
      }
      __asm
        VLDR            S0, [R12,#0xC]
        VCVT.F32.S32    S0, S0
        VLDR            S2, [R0]
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(_R0 + 4);
        VLDR            S4, [R0,#8]
        VMUL.F32        S2, S2, S0
        VMUL.F32        S0, S4, S0
      goto LABEL_21;
LABEL_16:
    *(_DWORD *)a2 = *(_DWORD *)_R0;
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(_R0 + 4);
    v11 = *(_DWORD *)(_R0 + 8);
LABEL_17:
    *(_DWORD *)(a2 + 8) = v11;
    return 1;
  if ( !a3 )
      if ( a4 != 1 )
        if ( a4 )
        {
          v6 = (int *)&Vec3::ZERO;
LABEL_25:
          v14 = *v6;
          *(_DWORD *)a2 = *(_DWORD *)v14;
          *(_DWORD *)(a2 + 4) = *(_DWORD *)(v14 + 4);
          *(_DWORD *)(a2 + 8) = *(_DWORD *)(v14 + 8);
          return 0;
        }
        goto LABEL_16;
        VDIV.F32        S2, S2, S0
        VDIV.F32        S0, S4, S0
LABEL_21:
      result = 1;
        VSTR            S2, [R1]
        VSTR            S0, [R1,#8]
      return result;
    v13 = &unk_2820014;
LABEL_23:
    *(_DWORD *)a2 = v13[1];
    *(_DWORD *)(a2 + 4) = v13[2];
    v11 = v13[3];
    goto LABEL_17;
  return 0;
}


_DWORD *__fastcall Util::ProfanityFilter::createProfanityFilter(Util::ProfanityFilter *this)
{
  Util::ProfanityFilter *v1; // r4@1
  _DWORD *result; // r0@1

  v1 = this;
  result = operator new(4u);
  *(_DWORD *)v1 = result;
  *result = &off_26E79D4;
  return result;
}


signed int __fastcall Util::parseRange<float>(int *a1, _DWORD *a2, _DWORD *a3)
{
  int *v4; // r7@1
  char *v6; // r4@1
  char *v7; // r0@2
  int v8; // r2@3
  unsigned int v9; // r3@3
  void *v10; // r0@4
  int *v11; // r11@5
  void *v16; // r4@9
  void *v17; // r5@9
  unsigned int *v18; // r2@11
  signed int v19; // r1@13
  int *v20; // r0@19
  signed int v21; // r5@25
  void **v22; // r0@27
  void *v23; // r0@27
  unsigned int *v25; // r2@29
  signed int v26; // r1@31
  unsigned int *v27; // r2@37
  signed int v28; // r1@39
  int v29; // [sp+4h] [bp-F4h]@4
  int v30; // [sp+8h] [bp-F0h]@4
  void *v31; // [sp+Ch] [bp-ECh]@5
  void **v32; // [sp+14h] [bp-E4h]@1
  int v33; // [sp+18h] [bp-E0h]@28
  int v34; // [sp+1Ch] [bp-DCh]@5
  void **v35; // [sp+20h] [bp-D8h]@27
  int v36; // [sp+3Ch] [bp-BCh]@28
  int v37; // [sp+44h] [bp-B4h]@27
  int v38; // [sp+48h] [bp-B0h]@28

  _R6 = a2;
  v4 = a1;
  _R5 = a3;
  sub_21D103C((int)&v32, 24);
  v6 = sub_21E77E4(v4, 91, 0);
  if ( v6 == (char *)-1 )
  {
    v11 = &v34;
    sub_21CBF38((char *)&v34, *v4, *(_DWORD *)(*v4 - 12));
    sub_21B9078((char *)&v32);
    *_R5 = *_R6;
LABEL_25:
    v21 = 1;
    goto LABEL_27;
  }
  v7 = sub_21E77E4(v4, 93, (unsigned int)v6);
  if ( v7 != (char *)-1 )
    v8 = (int)(v6 + 1);
    v9 = *(_DWORD *)(*v4 - 12);
    if ( v9 < (unsigned int)(v6 + 1) )
      sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v8, v9);
    sub_21E9040((void **)&v29, v4, v8, (unsigned int)(v7 - 1));
    Util::split((int)&v30, &v29, 44);
    v10 = (void *)(v29 - 12);
    if ( (int *)(v29 - 12) != &dword_28898C0 )
    {
      v27 = (unsigned int *)(v29 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
      }
      else
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    }
    sub_21CBF38((char *)&v34, *(_DWORD *)v30, *(_DWORD *)(*(_DWORD *)v30 - 12));
    if ( (unsigned int)(((signed int)v31 - v30) >> 2) >= 2 )
      sub_21CBF38((char *)&v34, (int)" ", 1);
      sub_21CBF38((char *)&v34, *(_DWORD *)(v30 + 4), *(_DWORD *)(*(_DWORD *)(v30 + 4) - 12));
    __asm
      VLDR            S2, [R5]
      VLDR            S0, [R6]
      VCMPE.F32       S0, S2
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm
        VSTRGT          S2, [R6]
        VSTRGT          S0, [R5]
    v16 = v31;
    v17 = (void *)v30;
    if ( (void *)v30 != v31 )
      do
        v20 = (int *)(*(_DWORD *)v17 - 12);
        if ( v20 != &dword_28898C0 )
        {
          v18 = (unsigned int *)(*(_DWORD *)v17 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
          }
          else
            v19 = (*v18)--;
          if ( v19 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        }
        v17 = (char *)v17 + 4;
      while ( v17 != v16 );
      v17 = (void *)v30;
    if ( v17 )
      operator delete(v17);
    goto LABEL_25;
  v11 = &v34;
  v21 = 0;
LABEL_27:
  v22 = off_26D3F84;
  v32 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v32) = off_26D3F80[0];
  *v11 = (int)v22;
  v35 = &off_27734E8;
  v23 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v37 - 4);
    if ( &pthread_create )
      __dmb();
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  v35 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v36);
  v32 = (void **)off_26D3F68;
  *(void ***)((char *)&v32 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v33 = 0;
  sub_21B6560(&v38);
  return v21;
}


void __fastcall Util::_breakIntoWordsAndFindProfanity(int *a1, int a2, __int64 a3, int a4, unsigned __int64 *a5, int a6)
{
  int *v6; // r4@1
  int v7; // r5@1
  int v8; // r6@1
  signed int v9; // r0@1
  int *v10; // r10@2
  unsigned int v11; // r9@2
  int v12; // r8@2
  unsigned int v13; // r2@2
  int v14; // r7@2
  bool v15; // zf@3
  signed int v16; // r4@7
  unsigned int v17; // r3@8
  int v18; // r1@9
  void *v19; // r0@9
  unsigned int *v20; // r2@11
  signed int v21; // r1@13
  signed int v22; // r3@19
  __int64 v23; // kr08_8@20
  unsigned int v24; // r11@20
  int v25; // r0@20
  int v26; // r7@21
  unsigned int v27; // r10@21
  signed int v28; // r11@32
  unsigned int v29; // r3@36
  void **v30; // r0@37
  void *v31; // r0@37
  unsigned int *v32; // r2@39
  signed int v33; // r1@41
  int *v34; // [sp+1Ch] [bp-54h]@2
  __int64 v35; // [sp+20h] [bp-50h]@1
  int v36; // [sp+28h] [bp-48h]@21
  signed int v37; // [sp+2Ch] [bp-44h]@20
  unsigned int v38; // [sp+38h] [bp-38h]@19
  int v39; // [sp+3Ch] [bp-34h]@37
  int v40; // [sp+40h] [bp-30h]@9
  unsigned int v41; // [sp+44h] [bp-2Ch]@1

  v35 = a3;
  v6 = a1;
  v7 = *a1;
  v8 = *(_DWORD *)(*a1 - 12);
  v9 = j_utf8proc_iterate(*a1, v8, (int *)&v41);
  if ( v9 >= 1 )
  {
    v10 = (int *)&v41;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v34 = v6;
    do
    {
      v22 = v9;
      v38 = v13;
      if ( (signed int)v41 > 127 )
      {
        v16 = 0;
      }
      else
        v37 = v9;
        v23 = *(_QWORD *)HIDWORD(v35);
        v24 = v41 % (unsigned int)(*(_QWORD *)HIDWORD(v35) >> 32);
        v25 = *(_DWORD *)(*(_QWORD *)HIDWORD(v35) + 4 * v24);
        if ( v25 )
        {
          v36 = v14;
          v26 = *(_DWORD *)v25;
          v27 = *(_BYTE *)(*(_DWORD *)v25 + 4);
          while ( v41 != v27 )
          {
            if ( *(_DWORD *)v26 )
            {
              v27 = *(_BYTE *)(*(_DWORD *)v26 + 4);
              v25 = v26;
              v26 = *(_DWORD *)v26;
              if ( v27 % HIDWORD(v23) == v24 )
                continue;
            }
            v16 = 0;
            v14 = v36;
            goto LABEL_28;
          }
          v15 = v25 == 0;
          v14 = v36;
          v10 = (int *)&v41;
          if ( v25 )
            v15 = *(_DWORD *)v25 == 0;
          if ( v15 )
          else
            v17 = *(_DWORD *)(*v34 - 12);
            if ( v17 < v13 )
              sub_21E5B04(
                "%s: __pos (which is %zu) > this->size() (which is %zu)",
                (int)"basic_string::substr",
                v13,
                v17);
            sub_21E9040((void **)&v40, v34, v13, v11 - v13);
            Util::_recordProfanityLocationInWord((int **)&v40, v18, (_DWORD *)v35, v36, v12, a4, a5, a6);
            v19 = (void *)(v40 - 12);
            if ( (int *)(v40 - 12) != &dword_28898C0 )
              v20 = (unsigned int *)(v40 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v21 = __ldrex(v20);
                while ( __strex(v21 - 1, v20) );
              }
              else
                v21 = (*v20)--;
              if ( v21 <= 0 )
                j_j_j_j__ZdlPv_9(v19);
            v16 = 1;
        }
        else
          v16 = 0;
LABEL_28:
        v22 = v37;
      v8 -= v22;
      v7 += v22;
      ++v12;
      if ( v16 )
        v14 = v12;
      v28 = v22;
      v9 = j_utf8proc_iterate(v7, v8, v10);
      v11 += v28;
      v13 = v38;
        v13 = v11;
    }
    while ( v9 > 0 );
    if ( v14 != v12 )
      v29 = *(_DWORD *)(*v34 - 12);
      if ( v29 < v13 )
        sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v13, v29);
      v30 = sub_21E9040((void **)&v39, v34, v13, v11 - v13);
      Util::_recordProfanityLocationInWord((int **)v30, a6, (_DWORD *)v35, v14, v12, a4, a5, a6);
      v31 = (void *)(v39 - 12);
      if ( (int *)(v39 - 12) != &dword_28898C0 )
        v32 = (unsigned int *)(v39 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v33 = __ldrex(v32);
          while ( __strex(v33 - 1, v32) );
          v33 = (*v32)--;
        if ( v33 <= 0 )
          j_j_j_j__ZdlPv_9(v31);
  }
}


signed int __fastcall Util::stringIsInVector(unsigned __int64 *a1, _DWORD *a2)
{
  int v2; // r3@1
  int v3; // r12@1
  int v4; // r8@1
  int v5; // r9@2
  int v6; // r4@3
  _BYTE *v7; // r5@4
  _BYTE *v8; // r6@4
  int v9; // r7@4
  _BYTE *v10; // r7@8
  _BYTE *v11; // r6@8
  int v12; // r2@8
  _BYTE *v13; // r7@12
  _BYTE *v14; // r6@12
  int v15; // r2@12
  _BYTE *v16; // r7@16
  _BYTE *v17; // r6@16
  int v18; // r2@16
  unsigned __int8 v19; // vf@20
  int v20; // r0@23
  int v21; // r2@23
  bool v22; // zf@24
  int v23; // r7@27
  bool v24; // zf@27
  int v25; // r0@32
  _BYTE *v26; // r7@34
  int v27; // r6@34
  _BYTE *v28; // r2@36
  int v29; // r4@36
  _BYTE *v30; // r0@38
  _BYTE *v31; // r2@43
  int v32; // r1@45
  _BYTE *v33; // r0@45
  _BYTE *v34; // r2@50
  signed int result; // r0@56

  v3 = *a1 >> 32;
  v2 = *a1;
  v4 = (v3 - v2) >> 4;
  if ( v4 < 1 )
    goto LABEL_31;
  v5 = *(_DWORD *)(*a2 - 12);
  if ( v5 )
  {
    v6 = toupper_tab_ + 2;
    do
    {
      v7 = *(_BYTE **)v2;
      v8 = (_BYTE *)*a2;
      v9 = *(_DWORD *)(*a2 - 12);
      if ( *(_DWORD *)(*(_DWORD *)v2 - 12) == v5 )
      {
        while ( *(_WORD *)(v6 + 2 * *v8) == *(_WORD *)(v6 + 2 * *v7) )
        {
          ++v8;
          ++v7;
          if ( !--v9 )
            goto LABEL_56;
        }
      }
      v10 = (_BYTE *)*a2;
      v11 = *(_BYTE **)(v2 + 4);
      v12 = *(_DWORD *)(*a2 - 12);
      if ( *((_DWORD *)v11 - 3) == v5 )
        while ( *(_WORD *)(v6 + 2 * *v10) == *(_WORD *)(v6 + 2 * *v11) )
          ++v10;
          ++v11;
          if ( !--v12 )
          {
            v2 += 4;
          }
      v13 = (_BYTE *)*a2;
      v14 = *(_BYTE **)(v2 + 8);
      v15 = *(_DWORD *)(*a2 - 12);
      if ( *((_DWORD *)v14 - 3) == v5 )
        while ( *(_WORD *)(v6 + 2 * *v13) == *(_WORD *)(v6 + 2 * *v14) )
          ++v13;
          ++v14;
          if ( !--v15 )
            v2 += 8;
      v16 = (_BYTE *)*a2;
      v17 = *(_BYTE **)(v2 + 12);
      v18 = *(_DWORD *)(*a2 - 12);
      if ( *((_DWORD *)v17 - 3) == v5 )
        while ( *(_WORD *)(v6 + 2 * *v16) == *(_WORD *)(v6 + 2 * *v17) )
          ++v16;
          ++v17;
          if ( !--v18 )
            v2 += 12;
      v19 = __OFSUB__(v4--, 1);
      v2 += 16;
    }
    while ( !((unsigned __int8)((v4 < 0) ^ v19) | (v4 == 0)) );
LABEL_31:
    if ( 1 == (v3 - v2) >> 2 )
      v26 = (_BYTE *)*a2;
      v27 = *(_DWORD *)(*a2 - 12);
    else
      v25 = (v3 - v2) >> 2;
      if ( v25 == 3 )
        v26 = (_BYTE *)*a2;
        v28 = *(_BYTE **)v2;
        v27 = *(_DWORD *)(*a2 - 12);
        v29 = *(_DWORD *)(*(_DWORD *)v2 - 12);
        if ( v29 == v27 )
          if ( !v29 )
          v30 = (_BYTE *)*a2;
          while ( *(_WORD *)(toupper_tab_ + 2 + 2 * *v30) == *(_WORD *)(toupper_tab_ + 2 + 2 * *v28) )
            ++v30;
            ++v28;
            if ( !--v29 )
              goto LABEL_56;
        v2 += 4;
      else
        if ( v25 != 2 )
LABEL_55:
          v2 = v3;
          goto LABEL_56;
      v31 = *(_BYTE **)v2;
      if ( *(_DWORD *)(*(_DWORD *)v2 - 12) == v27 )
        if ( !v27 )
        v32 = v27;
        v33 = v26;
        while ( *(_WORD *)(toupper_tab_ + 2 + 2 * *v33) == *(_WORD *)(toupper_tab_ + 2 + 2 * *v31) )
          ++v33;
          ++v31;
          if ( !--v32 )
      v2 += 4;
    v34 = *(_BYTE **)v2;
    if ( *(_DWORD *)(*(_DWORD *)v2 - 12) == v27 )
      if ( !v27 )
        goto LABEL_56;
      while ( *(_WORD *)(toupper_tab_ + 2 + 2 * *v26) == *(_WORD *)(toupper_tab_ + 2 + 2 * *v34) )
        ++v26;
        ++v34;
        if ( !--v27 )
    goto LABEL_55;
  }
  v20 = v4 + 1;
  v21 = v2;
  while ( 1 )
    v22 = *(_DWORD *)(*(_DWORD *)v21 - 12) == 0;
    v2 = v21;
    if ( *(_DWORD *)(*(_DWORD *)v21 - 12) )
      v2 = v21 + 4;
      v22 = *(_DWORD *)(*(_DWORD *)(v21 + 4) - 12) == 0;
    if ( v22 )
      break;
    v2 = v21 + 8;
    v23 = *(_DWORD *)(*(_DWORD *)(v21 + 8) - 12);
    v24 = v23 == 0;
    if ( v23 )
      v2 = v21 + 12;
      v24 = *(_DWORD *)(*(_DWORD *)(v21 + 12) - 12) == 0;
    if ( v24 )
    v21 += 16;
    --v20;
    if ( v20 <= 1 )
      goto LABEL_31;
LABEL_56:
  result = 0;
  if ( v3 != v2 )
    result = 1;
  return result;
}


char *__fastcall Util::toString(char **a1, const wchar_t **a2)
{
  const wchar_t *v2; // r5@1
  char **v3; // r4@1
  unsigned int v4; // r6@1
  char *result; // r0@2
  char *s; // [sp+8h] [bp-18h]@2

  v2 = *a2;
  v3 = a1;
  v4 = wcstombs(0, *a2, 0);
  if ( v4 == -1 )
  {
    result = (char *)&unk_28898CC;
  }
  else
    sub_21E6E1C(&s, v4, 0);
    wcstombs(s, v2, v4);
    result = s;
  *v3 = result;
  return result;
}


RakNet *__fastcall Util::compress(const void **a1, int *a2)
{
  void **v3; // [sp+0h] [bp-40h]@1
  int v4; // [sp+8h] [bp-38h]@1
  int v5; // [sp+Ch] [bp-34h]@1
  int v6; // [sp+10h] [bp-30h]@1
  int v7; // [sp+14h] [bp-2Ch]@1
  char v8; // [sp+18h] [bp-28h]@1
  int v9; // [sp+1Ch] [bp-24h]@1
  char v10; // [sp+20h] [bp-20h]@1

  *a1 = &unk_28898CC;
  v7 = 0;
  v5 = 0;
  v6 = 0;
  v4 = 0;
  v8 = 2;
  v9 = 7;
  v10 = 0;
  v3 = &off_26EC33C;
  return leveldb::ZlibCompressorBase::compressImpl((int)&v3, *a2, *(_DWORD *)(*a2 - 12), a1);
}


signed int __fastcall Util::utf8substring(const void **a1, int *a2, int a3, signed int a4)
{
  int v4; // r11@1
  const void **v5; // r4@1
  int v6; // r6@1
  int v7; // r7@1
  int v8; // r8@2
  signed int result; // r0@3
  signed int v10; // r5@3
  signed int v11; // r10@6
  _DWORD *v12; // r0@7
  int v13; // r1@7 OVERLAPPED
  char v14; // r11@7
  int v15; // r7@7
  unsigned int v16; // r2@7
  _DWORD *v17; // r0@10
  int i; // r9@15
  signed int v19; // r5@17
  signed int v20; // r10@19
  _DWORD *v21; // r0@20
  int v22; // r1@20 OVERLAPPED
  char v23; // r9@20
  int v24; // r7@20
  unsigned int v25; // r2@20
  _DWORD *v26; // r0@23
  int v27; // [sp+4h] [bp-3Ch]@1
  signed int v28; // [sp+Ch] [bp-34h]@1
  int v29; // [sp+Ch] [bp-34h]@18
  int v30; // [sp+10h] [bp-30h]@4
  int v31; // [sp+10h] [bp-30h]@18
  char v32; // [sp+14h] [bp-2Ch]@3

  v4 = a3;
  v5 = a1;
  v6 = *a2;
  v28 = a4;
  v7 = *(_DWORD *)(*a2 - 12);
  *a1 = &unk_28898CC;
  v27 = a3;
  if ( a4 <= -1 )
  {
    for ( i = 0; ; i = v29 + 1 )
    {
      result = j_utf8proc_iterate(v6, v7, (int *)&v32);
      v19 = result;
      if ( result < 1 )
        break;
      v31 = v7;
      v29 = i;
      if ( i >= v4 )
      {
        v20 = 0;
        do
        {
          v21 = *v5;
          *(_QWORD *)&v22 = *(_QWORD *)((char *)*v5 - 12);
          v23 = *(_BYTE *)(v6 + v20);
          v24 = v22 + 1;
          if ( v22 + 1 > v25 || *(v21 - 1) >= 1 )
          {
            sub_21E6FCC(v5, v22 + 1);
            v21 = *v5;
            v22 = *((_DWORD *)*v5 - 3);
          }
          *((_BYTE *)v21 + v22) = v23;
          v26 = *v5;
          if ( (int *)((char *)*v5 - 12) != &dword_28898C0 )
            *(v26 - 1) = 0;
            *(v26 - 3) = v24;
            *((_BYTE *)v26 + v24) = byte_26C67B8[0];
          ++v20;
        }
        while ( v20 < v19 );
      }
      v6 += v19;
      v7 = v31 - v19;
    }
  }
  else
    v8 = 0;
    do
      v10 = result;
      v30 = v7;
      if ( v8 >= v4 && v8 < v28 )
        v11 = 0;
          v12 = *v5;
          *(_QWORD *)&v13 = *(_QWORD *)((char *)*v5 - 12);
          v14 = *(_BYTE *)(v6 + v11);
          v15 = v13 + 1;
          if ( v13 + 1 > v16 || *(v12 - 1) >= 1 )
            sub_21E6FCC(v5, v13 + 1);
            v12 = *v5;
            v13 = *((_DWORD *)*v5 - 3);
          *((_BYTE *)v12 + v13) = v14;
          v17 = *v5;
            *(v17 - 1) = 0;
            *(v17 - 3) = v15;
            *((_BYTE *)v17 + v15) = byte_26C67B8[0];
          ++v11;
        while ( v11 < v10 );
      v6 += v10;
      v4 = v27;
      ++v8;
      v7 = v30 - v10;
      result = v28;
    while ( v8 < v28 );
  return result;
}


signed int __fastcall Util::stringContains(int *a1, int a2)
{
  signed int v2; // r4@1

  v2 = 0;
  if ( sub_21E77E4(a1, a2, 0) != (char *)-1 )
    v2 = 1;
  return v2;
}


void __fastcall Util::removeIllegalChars(int *a1, int *a2)
{
  int *v2; // r4@1
  _BYTE *v3; // r8@1
  int v4; // r0@1
  int v5; // r9@2
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  _BYTE *v10; // r1@19
  unsigned int v11; // r10@19
  unsigned int v12; // r2@20
  signed int v13; // r5@20
  unsigned int v14; // r3@20
  unsigned int v15; // r11@22
  char *v16; // r0@24
  _BYTE *v17; // r0@25
  char *v18; // [sp+Ch] [bp-44h]@3
  _BYTE *v19; // [sp+14h] [bp-3Ch]@7

  v2 = a1;
  sub_21E8AF4(a1, a2);
  v3 = (_BYTE *)dword_27F74C4;
  v4 = *(_DWORD *)(dword_27F74C4 - 12);
  if ( v4 )
  {
    v5 = dword_27F74C4 + v4;
    do
    {
      sub_21E6E1C(&v19, 1u, *v3);
      sub_21E94B4((void **)&v18, (const char *)&unk_257BC67);
      v10 = v19;
      v11 = *((_DWORD *)v19 - 3);
      if ( v11 )
      {
        v12 = 0;
        v13 = 1;
        v14 = *((_DWORD *)v19 - 3);
        while ( 1 )
        {
          v15 = sub_21E76A0(v2, v10, v12, v14);
          if ( v15 == -1 )
            break;
          sub_21E91FC((const void **)v2, v15, v11, v18, *((_BYTE **)v18 - 3));
          if ( !++v13 )
          v10 = v19;
          v14 = *((_DWORD *)v19 - 3);
          v12 = *((_DWORD *)v18 - 3) + v15;
        }
      }
      EntityInteraction::setInteractText(v2, v2);
      v16 = v18 - 12;
      if ( (int *)(v18 - 12) != &dword_28898C0 )
        v6 = (unsigned int *)(v18 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
        else
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
      v17 = v19 - 12;
      if ( (int *)(v19 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v19 - 4);
            v9 = __ldrex(v8);
          while ( __strex(v9 - 1, v8) );
          v9 = (*v8)--;
        if ( v9 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      ++v3;
    }
    while ( v3 != (_BYTE *)v5 );
  }
}


void __fastcall Util::filterProfanityFromString(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, void *a12, int a13, void *a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, void *a22, int a23, void *a24, int a25, int a26, int a27, int a28, char a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, void *a39, int a40, void *a41, int a42, int a43, int a44, int a45, void *a46, int a47, int a48, void *a49, int a50, int a51, int a52, int a53, int a54, char a55)
{
  Util::filterProfanityFromString(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15,
    a16,
    a17,
    a18,
    a19,
    a20,
    a21,
    a22,
    a23,
    a24,
    a25,
    a26,
    a27,
    a28,
    a29,
    a30,
    a31,
    a32,
    a33,
    a34,
    a35,
    a36,
    a37,
    a38,
    a39,
    a40,
    a41,
    a42,
    a43,
    a44,
    a45,
    a46,
    a47,
    a48,
    a49,
    a50,
    a51,
    a52,
    a53,
    a54,
    a55);
}


int __fastcall Util::simpleFormat(__int64 a1, __int64 *a2)
{
  const void **v2; // r4@1
  _BYTE *v3; // r7@1
  int v4; // r5@1
  char v5; // r11@2
  unsigned int v6; // r9@2
  int v7; // r8@4
  _DWORD *v8; // r0@6
  int v9; // r1@6 OVERLAPPED
  int v10; // r6@6
  unsigned int v11; // r2@6
  _DWORD *v12; // r0@11
  int v13; // r1@11 OVERLAPPED
  int v14; // r6@11
  unsigned int v15; // r2@11
  __int64 v16; // r0@14
  _DWORD *v17; // r0@16
  int v18; // r1@16 OVERLAPPED
  unsigned int v19; // r2@16
  _DWORD *v20; // r0@24
  int v21; // r1@24 OVERLAPPED
  int v22; // r6@24
  unsigned int v23; // r2@24
  unsigned int v24; // r2@30
  __int64 *v26; // [sp+4h] [bp-2Ch]@1

  v2 = (const void **)a1;
  v26 = a2;
  LODWORD(a1) = &unk_28898CC;
  *v2 = &unk_28898CC;
  v3 = (_BYTE *)*(_DWORD *)HIDWORD(a1);
  v4 = *(_DWORD *)(*(_DWORD *)HIDWORD(a1) - 12);
  if ( !v4 )
    return a1;
  v5 = 0;
  v6 = 0;
  LOBYTE(a1) = 0;
  do
  {
    v7 = *v3;
    if ( a1 & 1 )
    {
      if ( v7 == 37 )
      {
        v8 = *v2;
        *(_QWORD *)&v9 = *(_QWORD *)((char *)*v2 - 12);
        v10 = v9 + 1;
        if ( v9 + 1 > v11 || *(v8 - 1) >= 1 )
        {
          sub_21E6FCC(v2, v9 + 1);
          v8 = *v2;
          v9 = *((_DWORD *)*v2 - 3);
        }
        *((_BYTE *)v8 + v9) = 37;
      }
      else
        v16 = *v26;
        if ( (HIDWORD(v16) - (signed int)v16) >> 2 > v6 )
          sub_21E72F0(v2, (const void **)(v16 + 4 * v6));
          LOBYTE(v7) = *v3;
          ++v6;
        v17 = *v2;
        *(_QWORD *)&v18 = *(_QWORD *)((char *)*v2 - 12);
        v10 = v18 + 1;
        if ( v18 + 1 > v19 || *(v17 - 1) >= 1 )
          sub_21E6FCC(v2, v18 + 1);
          v17 = *v2;
          v18 = *((_DWORD *)*v2 - 3);
        *((_BYTE *)v17 + v18) = v7;
      HIDWORD(a1) = *v2;
      LODWORD(a1) = 0;
      if ( (int *)((char *)*v2 - 12) != &dword_28898C0 )
        *(_DWORD *)(HIDWORD(a1) - 4) = 0;
        *(_DWORD *)(HIDWORD(a1) - 12) = v10;
        *(_BYTE *)(HIDWORD(a1) + v10) = byte_26C67B8[0];
      goto LABEL_37;
    }
    if ( v5 & 1 )
      v12 = *v2;
      *(_QWORD *)&v13 = *(_QWORD *)((char *)*v2 - 12);
      v14 = v13 + 1;
      if ( v13 + 1 <= v15 && *(v12 - 1) < 1 )
        goto LABEL_34;
      sub_21E6FCC(v2, v13 + 1);
LABEL_33:
      v13 = *((_DWORD *)*v2 - 3);
LABEL_34:
      *((_BYTE *)v12 + v13) = v7;
        *(_DWORD *)(HIDWORD(a1) - 12) = v14;
        *(_BYTE *)(HIDWORD(a1) + v14) = byte_26C67B8[0];
      v5 = 0;
    if ( v7 == 37 )
      LODWORD(a1) = 1;
    if ( v7 != 127 )
      if ( v13 + 1 <= v24 && *(v12 - 1) < 1 )
      goto LABEL_33;
    v20 = *v2;
    *(_QWORD *)&v21 = *(_QWORD *)((char *)*v2 - 12);
    v22 = v21 + 1;
    if ( v21 + 1 > v23 || *(v20 - 1) >= 1 )
      sub_21E6FCC(v2, v21 + 1);
      v20 = *v2;
      v21 = *((_DWORD *)*v2 - 3);
    *((_BYTE *)v20 + v21) = 127;
    LODWORD(a1) = 0;
    HIDWORD(a1) = *v2;
    if ( (int *)((char *)*v2 - 12) == &dword_28898C0 )
      v5 = 1;
    else
      *(_DWORD *)(HIDWORD(a1) - 4) = 0;
      *(_DWORD *)(HIDWORD(a1) - 12) = v22;
      *(_BYTE *)(HIDWORD(a1) + v22) = byte_26C67B8[0];
LABEL_37:
    --v4;
    ++v3;
  }
  while ( v4 );
  if ( (_DWORD)a1 )
    a1 = *v26;
    if ( (HIDWORD(a1) - (signed int)a1) >> 2 > v6 )
      LODWORD(a1) = sub_21E72F0(v2, (const void **)(a1 + 4 * v6));
  return a1;
}


signed int __fastcall Util::isValidIP(signed int a1, int a2, int a3, int a4)
{
  signed int v4; // r11@1
  int v5; // r4@1
  signed int v6; // r0@1
  int v7; // r1@2
  int v8; // r0@2
  int v9; // r7@4
  int v10; // r1@10
  unsigned int v11; // r6@24
  unsigned int v12; // r8@24
  unsigned int v13; // r2@27
  unsigned int v14; // r10@31
  signed int v15; // r5@31
  int v16; // r9@33
  char *v17; // r7@33
  int v18; // r0@34
  char v19; // r0@37
  bool v20; // zf@41
  char *v21; // r7@44
  char v22; // r1@45
  signed int result; // r0@47
  int v24; // r0@50
  signed int v25; // r1@54
  int v26; // r0@56
  unsigned int v27; // [sp+4h] [bp-6Ch]@24
  signed int v28; // [sp+8h] [bp-68h]@24
  signed int v29; // [sp+10h] [bp-60h]@31
  int (__fastcall *v30)(char *); // [sp+14h] [bp-5Ch]@24
  char v31; // [sp+18h] [bp-58h]@24
  char v32; // [sp+1Eh] [bp-52h]@36
  char v33; // [sp+1Fh] [bp-51h]@36
  char v34[8]; // [sp+20h] [bp-50h]@29
  char v35; // [sp+28h] [bp-48h]@27

  v4 = a1;
  v5 = a2;
  v6 = a1 >> 2;
  if ( v6 >= 1 )
  {
    v7 = v6 + 1;
    v8 = 0;
    while ( *(_BYTE *)(v5 + v8) != 58 )
    {
      v9 = v5 + v8;
      if ( *(_BYTE *)(v5 + v8 + 1) == 58 )
      {
        v8 |= 1u;
        goto LABEL_22;
      }
      if ( *(_BYTE *)(v9 + 2) == 58 )
        v8 |= 2u;
      if ( *(_BYTE *)(v9 + 3) == 58 )
        v8 |= 3u;
      --v7;
      v8 += 4;
      if ( v7 <= 1 )
        goto LABEL_10;
    }
    goto LABEL_22;
  }
  v8 = 0;
LABEL_10:
  v10 = v4 - v8;
  if ( v4 - v8 == 1 )
LABEL_17:
    if ( *(_BYTE *)(v5 + v8) != 58 )
      goto LABEL_23;
  if ( v10 == 2 )
LABEL_15:
    if ( *(_BYTE *)(v5 + v8) == 58 )
      goto LABEL_22;
    ++v8;
    goto LABEL_17;
  if ( v10 != 3 )
    goto LABEL_23;
  if ( *(_BYTE *)(v5 + v8) != 58 )
    goto LABEL_15;
LABEL_22:
  if ( v8 != v4 )
    if ( !a4 )
      return 0;
    v12 = 8;
    v11 = 5;
    v30 = (int (__fastcall *)(char *))sub_165140A;
    v28 = 1;
    v27 = 0xFFFF;
    v31 = 58;
    goto LABEL_27;
LABEL_23:
  if ( a3 != 1 )
    return 0;
  v11 = 4;
  v28 = 0;
  v12 = 4;
  v30 = (int (__fastcall *)(char *))sub_165141C;
  v27 = 255;
  v31 = 46;
LABEL_27:
  _aeabi_memset8(&v35);
  v13 = 0;
  do
    if ( v13 < v11 )
      v34[v13] = 0;
    ++v13;
  while ( v13 < v12 );
  v14 = 0;
  v29 = 0;
  v15 = 0;
    if ( v15 == v4 )
LABEL_41:
      v20 = v4 == 0;
      v15 = v4;
    else
      v16 = v11 - 1;
      v17 = v34;
      while ( 1 )
        v18 = *(_BYTE *)(v5 + v15);
        if ( v18 == (unsigned __int8)v31 )
          break;
        if ( !v16 )
          return 0;
        v32 = *(_BYTE *)(v5 + v15);
        v33 = 0;
        if ( *(_BYTE *)(v5 + v15) == 48 )
        {
          v19 = 48;
        }
        else
          if ( !v30(&v32) )
            return 0;
          v19 = *(_BYTE *)(v5 + v15);
        ++v15;
        *v17++ = v19;
        --v16;
        if ( v4 == v15 )
          goto LABEL_41;
      v20 = v15 == 0;
    if ( v20 )
      v15 = 0;
      v21 = &v35;
      if ( *(_BYTE *)(v15 + v5 - 1) == (unsigned __int8)v31 )
        v22 = 0;
        if ( v15 == v4 )
          v22 = 1;
        result = 0;
        v20 = (((unsigned __int8)v22 | (unsigned __int8)v29) & 1) == 0;
        v29 = v28;
        if ( !v20 )
          return result;
    v24 = v30(v34);
    *(_DWORD *)&v21[4 * v14] = v24;
    if ( v24 == -1 )
    _aeabi_memclr(v34, v11);
    ++v14;
      break;
    if ( v14 == v12 )
    ++v15;
  while ( v14 < v12 );
  v25 = 0;
  if ( v14 < v12 )
    v25 = 1;
  v26 = 0;
  if ( v29 & v25 )
    _aeabi_memclr4(&v21[4 * v14], 4 * v12 - 4 * v14);
    v26 = 0;
  while ( *(_DWORD *)&v21[4 * v26] <= v27 )
    if ( ++v26 >= v12 )
      return 1;
  return 0;
}


int __fastcall Util::getBezier(Util *this, float _R1, float _R2, float _R3, float a5)
{
  int result; // r0@1

  __asm
  {
    VMOV            S0, R0
    VMOV            S2, R1
    VMOV            S4, R2
    VSUB.F32        S6, S2, S0
    VSUB.F32        S4, S4, S2
    VMOV            S8, R3
    VMUL.F32        S6, S6, S8
    VMUL.F32        S4, S4, S8
    VADD.F32        S0, S6, S0
    VADD.F32        S2, S4, S2
    VSUB.F32        S2, S2, S0
    VMUL.F32        S2, S2, S8
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


_DWORD *__fastcall Util::base64_encode(Util *this, const unsigned __int8 *a2, unsigned int a3, int a4)
{
  const void **v4; // r10@1
  unsigned int v5; // r6@1
  const unsigned __int8 *v6; // r9@1
  _DWORD *result; // r0@1
  char *v8; // r1@2
  signed int v9; // r11@2
  _DWORD *v10; // t1@3
  unsigned int v11; // r11@4
  _DWORD *v12; // r0@4
  int v13; // r1@4
  char v14; // r4@4
  int v15; // r5@4
  _DWORD *v16; // r2@7
  int v17; // r0@9
  char v18; // r4@9
  unsigned int v19; // r5@9
  _DWORD *v20; // r0@12
  int v21; // r1@14
  char v22; // r4@14
  int v23; // r5@14
  _DWORD *v24; // r0@17
  int v25; // r1@19
  char v26; // r4@19
  int v27; // r5@19
  signed int i; // r8@29
  _DWORD *v29; // r1@31
  int v30; // r2@31
  char v31; // r9@31
  int v32; // r5@31
  _DWORD *v33; // r0@39
  int v34; // r1@39 OVERLAPPED
  int v35; // r5@39
  unsigned int v36; // r2@39
  _DWORD *v37; // [sp+0h] [bp-38h]@1
  char v38; // [sp+Ah] [bp-2Eh]@4
  unsigned __int8 v39; // [sp+Bh] [bp-2Dh]@4
  unsigned __int8 v40; // [sp+Ch] [bp-2Ch]@4
  unsigned __int8 v41; // [sp+Dh] [bp-2Bh]@2
  unsigned __int8 v42; // [sp+Eh] [bp-2Ah]@4
  unsigned __int8 v43; // [sp+Fh] [bp-29h]@4

  v4 = (const void **)this;
  v5 = a3;
  v6 = a2;
  v37 = (_DWORD *)a4;
  result = &unk_28898CC;
  *v4 = &unk_28898CC;
  if ( a3 )
  {
    v8 = (char *)&v41;
    v9 = 0;
    do
    {
      v10 = (_DWORD *)*v6++;
      result = v10;
      v8[v9++] = (char)v10;
      if ( v9 == 3 )
      {
        v11 = 16 * v41 & 0x30 | ((unsigned int)v42 >> 4);
        v38 = 16 * v41 & 0x30 | (v42 >> 4);
        v39 = (v43 >> 6) & 0xC3 | 4 * (v42 & 0xF);
        v40 = v43 & 0x3F;
        v12 = *v4;
        v13 = *(_QWORD *)((char *)*v4 - 12);
        v14 = *(_BYTE *)(dword_27EE6D8 + ((unsigned int)v41 >> 2));
        v15 = v13 + 1;
        if ( v13 + 1 > (unsigned int)(*(_QWORD *)((char *)*v4 - 12) >> 32) || *(v12 - 1) >= 1 )
        {
          sub_21E6FCC(v4, v13 + 1);
          v12 = *v4;
          v13 = *((_DWORD *)*v4 - 3);
        }
        *((_BYTE *)v12 + v13) = v14;
        v16 = *v4;
        if ( (int *)((char *)*v4 - 12) != &dword_28898C0 )
          *(v16 - 1) = 0;
          *(v16 - 3) = v15;
          *((_BYTE *)v16 + v15) = byte_26C67B8[0];
          v16 = *v4;
        v17 = *(_QWORD *)(v16 - 3);
        v18 = *(_BYTE *)(dword_27EE6D8 + v11);
        v19 = v17 + 1;
        if ( v17 + 1 > (unsigned int)(*(_QWORD *)(v16 - 3) >> 32) || *(v16 - 1) >= 1 )
          sub_21E6FCC(v4, v19);
          v17 = *((_DWORD *)*v4 - 3);
        *((_BYTE *)v16 + v17) = v18;
        v20 = *v4;
          *(v20 - 1) = 0;
          *(v20 - 3) = v19;
          *((_BYTE *)v20 + v19) = byte_26C67B8[0];
          v20 = *v4;
        v21 = *(_QWORD *)(v20 - 3);
        v22 = *(_BYTE *)(dword_27EE6D8 + v39);
        v23 = v21 + 1;
        if ( v21 + 1 > (unsigned int)(*(_QWORD *)(v20 - 3) >> 32) || *(v20 - 1) >= 1 )
          sub_21E6FCC(v4, v21 + 1);
          v21 = *((_DWORD *)*v4 - 3);
        *((_BYTE *)v20 + v21) = v22;
        v24 = *v4;
          *(v24 - 1) = 0;
          *(v24 - 3) = v23;
          *((_BYTE *)v24 + v23) = byte_26C67B8[0];
          v24 = *v4;
        v25 = *(_QWORD *)(v24 - 3);
        v26 = *(_BYTE *)(dword_27EE6D8 + v40);
        v27 = v25 + 1;
        if ( v25 + 1 > (unsigned int)(*(_QWORD *)(v24 - 3) >> 32) || *(v24 - 1) >= 1 )
          sub_21E6FCC(v4, v25 + 1);
          v25 = *((_DWORD *)*v4 - 3);
        *((_BYTE *)v24 + v25) = v26;
        v9 = 0;
        result = *v4;
        v8 = (char *)&v41;
          *(result - 1) = 0;
          *(result - 3) = v27;
          *((_BYTE *)result + v27) = byte_26C67B8[0];
      }
      --v5;
    }
    while ( v5 );
    if ( v9 )
      if ( v9 <= 2 )
        _aeabi_memclr(&v8[v9], 3 - v9);
      result = (_DWORD *)((unsigned int)v41 >> 2);
      v38 = 16 * v41 & 0x30 | (v42 >> 4);
      v39 = (v43 >> 6) & 0xC3 | 4 * (v42 & 0xF);
      v40 = v43 & 0x3F;
      if ( v9 >= 0 )
        for ( i = 0; ; ++i )
          v29 = *v4;
          v30 = *(_QWORD *)((char *)*v4 - 12);
          v31 = *(_BYTE *)(dword_27EE6D8 + (unsigned __int8)result);
          v32 = v30 + 1;
          if ( v30 + 1 > (unsigned int)(*(_QWORD *)((char *)*v4 - 12) >> 32) || *(v29 - 1) >= 1 )
          {
            sub_21E6FCC(v4, v30 + 1);
            v29 = *v4;
            v30 = *((_DWORD *)*v4 - 3);
          }
          *((_BYTE *)v29 + v30) = v31;
          result = *v4;
          if ( (int *)((char *)*v4 - 12) != &dword_28898C0 )
            *(result - 1) = 0;
            *(result - 3) = v32;
            *((_BYTE *)result + v32) = byte_26C67B8[0];
          if ( i >= v9 )
            break;
          LOBYTE(result) = *(&v38 + i);
        result = v37;
        if ( v37 == (_DWORD *)1 )
          do
            v33 = *v4;
            *(_QWORD *)&v34 = *(_QWORD *)((char *)*v4 - 12);
            v35 = v34 + 1;
            if ( v34 + 1 > v36 || *(v33 - 1) >= 1 )
            {
              sub_21E6FCC(v4, v34 + 1);
              v33 = *v4;
              v34 = *((_DWORD *)*v4 - 3);
            }
            *((_BYTE *)v33 + v34) = 61;
            ++v9;
            result = *v4;
            if ( (int *)((char *)*v4 - 12) != &dword_28898C0 )
              *(result - 1) = 0;
              *(result - 3) = v35;
              *((_BYTE *)result + v35) = byte_26C67B8[0];
          while ( v9 < 3 );
  }
  return result;
}


void __fastcall Util::removeAllColorCodes(const void **a1, _DWORD *a2)
{
  Util::removeAllColorCodes(a1, a2);
}


void __fastcall Util::LootTableUtils::fillContainer(Level *a1, Container *a2, Random *a3, unsigned int *a4)
{
  unsigned int *v4; // r7@1
  Random *v5; // r8@1
  Container *v6; // r6@1
  Level *v7; // r4@1
  char *v8; // r5@2
  int v9; // r0@2
  LootTable *v10; // r7@2
  void *v11; // r0@3
  void *v12; // r5@4
  char v13; // [sp+4h] [bp-5Ch]@3
  char v14; // [sp+18h] [bp-48h]@3
  void *v15; // [sp+2Ch] [bp-34h]@5
  int v16; // [sp+30h] [bp-30h]@5
  void *ptr; // [sp+34h] [bp-2Ch]@3
  int v18; // [sp+38h] [bp-28h]@5
  int v19; // [sp+44h] [bp-1Ch]@6

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  if ( !j_Level::isClientSide(a1) )
  {
    v8 = j_Level::getLootTables(v7);
    v9 = (*(int (__fastcall **)(Level *))(*(_DWORD *)v7 + 120))(v7);
    v10 = (LootTable *)j_LootTables::lookupByName((int)v8, v4, v9);
    if ( v10 )
    {
      j_LootTableContext::Builder::Builder((LootTableContext::Builder *)&v13, v7);
      j_LootTableContext::Builder::create((LootTableContext::Builder *)&v14, (int)&v13);
      j_LootTable::fill(v10, v6, v5, (LootTableContext *)&v14);
      v11 = ptr;
      if ( ptr )
      {
        do
        {
          v12 = *(void **)v11;
          j_operator delete(v11);
          v11 = v12;
        }
        while ( v12 );
      }
      j___aeabi_memclr4_0((int)v15, 4 * v16);
      ptr = 0;
      v18 = 0;
      if ( v15 )
        if ( &v19 != v15 )
          j_operator delete(v15);
    }
  }
}


void __fastcall Util::removeAllColorCodes(const void **a1, _DWORD *a2)
{
  const void **v2; // r4@1
  _DWORD *v3; // r5@1
  _BYTE *v4; // r6@1
  int v5; // r7@1
  signed int v6; // r0@2
  int v7; // r9@6
  _DWORD *v8; // r0@11
  int v9; // r1@11 OVERLAPPED
  int v10; // r5@11
  unsigned int v11; // r2@11
  _DWORD *v12; // r0@14
  int v13; // r1@14 OVERLAPPED
  int v14; // r5@14
  unsigned int v15; // r2@14
  unsigned int v16; // r2@19
  _DWORD *v17; // r1@23

  v2 = a1;
  v3 = a2;
  *a1 = &unk_28898CC;
  sub_21E6FCC(a1, *(_DWORD *)(*a2 - 12));
  v4 = (_BYTE *)*v3;
  v5 = *(_DWORD *)(*v3 - 12);
  if ( v5 )
  {
    v6 = 0;
    do
    {
      if ( v6 == 2 )
      {
        v6 = 0;
      }
      else if ( v6 == 1 )
        if ( *v4 != 167 )
        {
          v12 = *v2;
          *(_QWORD *)&v13 = *(_QWORD *)((char *)*v2 - 12);
          v14 = v13 + 1;
          if ( v13 + 1 > v15 || *(v12 - 1) >= 1 )
          {
            sub_21E6FCC(v2, v13 + 1);
            v12 = *v2;
            v13 = *((_DWORD *)*v2 - 3);
          }
          *((_BYTE *)v12 + v13) = -62;
          v8 = *v2;
          if ( (int *)((char *)*v2 - 12) != &dword_28898C0 )
            *(v8 - 1) = 0;
            *(v8 - 3) = v14;
            *((_BYTE *)v8 + v14) = byte_26C67B8[0];
            v8 = *v2;
          *(_QWORD *)&v9 = *(_QWORD *)(v8 - 3);
          LOBYTE(v7) = *v4;
          v10 = v9 + 1;
          if ( v9 + 1 > v16 || *(v8 - 1) >= 1 )
            sub_21E6FCC(v2, v9 + 1);
LABEL_22:
            v9 = *((_DWORD *)*v2 - 3);
LABEL_23:
          *((_BYTE *)v8 + v9) = v7;
          v6 = 0;
          v17 = *v2;
            *(v17 - 1) = 0;
            *(v17 - 3) = v10;
            *((_BYTE *)v17 + v10) = byte_26C67B8[0];
          goto LABEL_25;
        }
        v6 = 2;
      else if ( !v6 )
        v7 = *v4;
        if ( v7 != 194 )
          *(_QWORD *)&v9 = *(_QWORD *)((char *)*v2 - 12);
          if ( v9 + 1 > v11 || *(v8 - 1) >= 1 )
            goto LABEL_22;
          goto LABEL_23;
        v6 = 1;
LABEL_25:
      --v5;
      ++v4;
    }
    while ( v5 );
  }
}


_DWORD *__fastcall Util::toString(Util *this, float a2)
{
  int *v3; // r5@1
  void **v10; // r0@1
  void *v11; // r0@1
  unsigned int *v13; // r2@3
  signed int v14; // r1@5
  void **v15; // [sp+0h] [bp-D0h]@1
  int v16; // [sp+4h] [bp-CCh]@2
  void **v17; // [sp+8h] [bp-C8h]@1
  void **v18; // [sp+Ch] [bp-C4h]@1
  int v19; // [sp+28h] [bp-A8h]@2
  int v20; // [sp+30h] [bp-A0h]@1
  int v21; // [sp+34h] [bp-9Ch]@2

  _R6 = a2;
  v3 = (int *)this;
  sub_21D103C((int)&v15, 24);
  __asm
  {
    VMOV            S0, R6
    VCVT.F64.F32    D0, S0
    VMOV            R2, R3, D0
  }
  *(_DWORD *)((char *)*(v15 - 3) + (_DWORD)&v15 + 12) &= 0xFFFFFEFB;
  sub_21CC9F0((char *)&v17);
  sub_21CFED8(v3, (int)&v18);
  v10 = off_26D3F84;
  v15 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v15) = off_26D3F80[0];
  v17 = v10;
  v18 = &off_27734E8;
  v11 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v20 - 4);
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
      j_j_j_j__ZdlPv_9(v11);
  v18 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v19);
  v15 = (void **)off_26D3F68;
  *(void ***)((char *)&v15 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v16 = 0;
  return sub_21B6560(&v21);
}


        if ( Util::compareNoCase(*((_DWORD *)v12 - 3), v12, *((_DWORD *)*v11 - 3), *v11) == 1 )
{
        ++v11;
        if ( v10 == v11 )
          goto LABEL_9;
      }
      EntityInteraction::setInteractText(&v45, (int *)(*(_DWORD *)(v4 + 100) + 8 * v9));
    }
LABEL_12:
    v13 = *(_DWORD *)(v2 + 56);
    v37 = *(_DWORD *)v3;
    v14 = *(_DWORD *)(v3 + 4);
    v38 = v14;
    if ( v14 )
    {
      v15 = (unsigned int *)(v14 + 8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v16 = __ldrex(v15);
        while ( __strex(v16 + 1, v15) );
      else
        ++*v15;
    sub_DA73B4(&v39, (int *)(v3 + 44));
    v40 = *(_DWORD *)(v3 + 48);
    v17 = *(_DWORD *)(v3 + 52);
    v41 = v17;
    if ( v17 )
      v18 = (unsigned int *)(v17 + 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 + 1, v18) );
        ++*v18;
    v43 = 0;
    v20 = operator new(0x18u);
    *(_DWORD *)v20 = v37;
    *((_DWORD *)v20 + 1) = v38;
    if ( v38 )
      v21 = (unsigned int *)(v38 + 8);
          v22 = __ldrex(v21);
        while ( __strex(v22 + 1, v21) );
        ++*v21;
    *((_DWORD *)v20 + 2) = v2;
    sub_DA73B4((int *)v20 + 3, &v39);
    *((_DWORD *)v20 + 4) = v40;
    v23 = v41;
    v41 = 0;
    *((_DWORD *)v20 + 5) = v23;
    v40 = 0;
    v42 = v20;
    v43 = (void (*)(void))sub_CDADC0;
    v44 = sub_CDAD60;
    ContentCatalogService::fetchFileData(v13, &v45, (int)&v42);
    if ( v43 )
      v43();
    v24 = v41;
    if ( v41 )
      v25 = (unsigned int *)(v41 + 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 == 1 )
        v27 = (unsigned int *)(v24 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 8))(v24);
        if ( &pthread_create )
        {
          __dmb();
          do
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
        }
        else
          v28 = (*v27)--;
        if ( v28 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v24 + 12))(v24);
    v29 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v39 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j_j__ZdlPv_9(v29);
      v30 = (unsigned int *)(v38 + 8);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 == 1 )
        (*(void (**)(void))(*(_DWORD *)v38 + 12))();
    v32 = (void *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v45 - 4);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j_j__ZdlPv_9(v32);
  }
}


signed int __fastcall Util::_convertPointFromOverworld(int _R0, int a2, int a3, int _R3)
{
  int v4; // r0@4
  signed int result; // r0@6

  if ( a3 == 2 )
  {
    *(_DWORD *)a2 = dword_2820018;
    *(_DWORD *)(a2 + 4) = dword_282001C;
    v4 = dword_2820020;
    goto LABEL_6;
  }
  if ( a3 == 1 )
    __asm
    {
      VMOV            S0, R3
      VCVT.F32.S32    S0, S0
      VLDR            S2, [R0]
    }
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(_R0 + 4);
    __asm { VLDR            S4, [R0,#8] }
    result = 1;
      VDIV.F32        S2, S2, S0
      VDIV.F32        S0, S4, S0
      VSTR            S2, [R1]
      VSTR            S0, [R1,#8]
  else
    if ( !a3 )
      *(_DWORD *)a2 = *(_DWORD *)_R0;
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(_R0 + 4);
      v4 = *(_DWORD *)(_R0 + 8);
LABEL_6:
      *(_DWORD *)(a2 + 8) = v4;
      return 1;
    *(_QWORD *)a2 = *(_QWORD *)&Vec3::ZERO;
    *(_DWORD *)(a2 + 8) = dword_2822498;
    result = 0;
  return result;
}


int __fastcall Util::hashCode(_BYTE **a1)
{
  _BYTE *v1; // r1@1
  int result; // r0@1
  int v3; // r2@1
  int v4; // t1@2

  v1 = *a1;
  result = 0;
  v3 = *((_DWORD *)v1 - 3);
  if ( v3 > 0 )
  {
    do
    {
      v4 = *v1++;
      --v3;
      result = 31 * result + v4;
    }
    while ( v3 );
  }
  return result;
}


int __fastcall Util::countWordOccurrences(__int64 a1, __int64 a2)
{
  int v2; // r4@1
  bool v3; // zf@2
  __int64 *v5; // [sp+8h] [bp-Ch]@2
  int v6; // [sp+Ch] [bp-8h]@3
  __int64 v7; // [sp+14h] [bp+0h]@1
  __int64 v8; // [sp+1Ch] [bp+8h]@1
  __int64 *v9; // [sp+24h] [bp+10h]@2
  int v10; // [sp+28h] [bp+14h]@2
  __int64 *v11; // [sp+2Ch] [bp+18h]@2
  int v12; // [sp+30h] [bp+1Ch]@2
  __int64 *v13; // [sp+34h] [bp+20h]@2
  int v14; // [sp+38h] [bp+24h]@2
  __int64 *v15; // [sp+3Ch] [bp+28h]@2
  int v16; // [sp+40h] [bp+2Ch]@2

  v2 = 0;
  v8 = a1;
  v7 = a2;
  while ( 1 )
  {
    v15 = &v8;
    v16 = 0;
    v13 = &v8;
    v14 = a1;
    v11 = &v7;
    v12 = 0;
    v9 = &v7;
    v10 = a2;
    std::__search<gsl::details::span_iterator<gsl::span<char const,-1>,false>,gsl::details::span_iterator<gsl::span<char const,-1>,false>,__gnu_cxx::__ops::_Iter_equal_to_iter>(
      (int)&v5,
      (int)&v15,
      (int)&v13,
      (unsigned __int64 *)&v11,
      (int)&v9);
    LODWORD(a1) = v8;
    v3 = v5 == &v8;
    if ( v5 == &v8 )
      v3 = v6 == (_DWORD)v8;
    if ( v3 )
      break;
    LODWORD(a2) = v7;
    ++v2;
  }
  return v2;
}


void __fastcall Util::freeStringMemory(int *a1)
{
  Util::freeStringMemory(a1);
}


void __fastcall Util::LootTableUtils::fillContainer(Level *a1, Container *a2, Random *a3, unsigned int *a4)
{
  Util::LootTableUtils::fillContainer(a1, a2, a3, a4);
}


unsigned int __fastcall Util::split(int a1, int *a2, int a3)
{
  int v3; // r11@1
  int *v4; // r6@1
  int v5; // r10@1
  unsigned int result; // r0@1
  unsigned int v7; // r5@2
  char *v8; // r7@3
  unsigned int v9; // r3@3
  __int64 v10; // r0@6
  int v11; // r1@7
  void *v12; // r0@9
  unsigned int *v13; // r2@12
  signed int v14; // r1@14
  void *v15; // [sp+4h] [bp-34h]@6

  v3 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v4 = a2;
  *(_DWORD *)(a1 + 8) = 0;
  v5 = a3;
  result = *(_DWORD *)(*a2 - 12);
  if ( result )
  {
    v7 = 0;
    do
    {
      v8 = sub_21E77E4(v4, v5, v7);
      v9 = *(_DWORD *)(*v4 - 12);
      if ( v8 == (char *)-1 )
        v8 = *(char **)(*v4 - 12);
      if ( v9 < v7 )
        sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v7, v9);
      sub_21E9040(&v15, v4, v7, (unsigned int)&v8[-v7]);
      v10 = *(_QWORD *)(v3 + 4);
      if ( (_DWORD)v10 == HIDWORD(v10) )
      {
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
          (unsigned __int64 *)v3,
          &v15);
        v11 = (int)v15;
      }
      else
        *(_DWORD *)v10 = v15;
        HIDWORD(v10) = &unk_28898CC;
        v15 = &unk_28898CC;
        *(_DWORD *)(v3 + 4) = v10 + 4;
      v12 = (void *)(v11 - 12);
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v11 - 4);
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
          j_j_j_j__ZdlPv_9(v12);
      v7 = (unsigned int)(v8 + 1);
      result = *(_DWORD *)(*v4 - 12);
    }
    while ( (unsigned int)(v8 + 1) < result );
  }
  return result;
}


void __fastcall Util::removeIllegalChars(int *a1, int *a2)
{
  Util::removeIllegalChars(a1, a2);
}


__int64 *__fastcall Util::trimVectorStrings(__int64 *a1)
{
  __int64 *v1; // r4@1
  __int64 v2; // r0@1
  int v3; // r6@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r7@11
  void *v7; // r0@11
  int v9; // [sp+4h] [bp-2Ch]@3

  v1 = a1;
  v2 = *a1;
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = 0;
    do
    {
      v6 = (int *)(v2 + 4 * v3);
      Util::stringTrim(&v9, v6);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v6, &v9);
      v7 = (void *)(v9 - 12);
      if ( (int *)(v9 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v9 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v5 = __ldrex(v4);
          while ( __strex(v5 - 1, v4) );
        }
        else
          v5 = (*v4)--;
        if ( v5 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
      }
      v2 = *v1;
      ++v3;
    }
    while ( v3 != (HIDWORD(v2) - (signed int)v2) >> 2 );
  }
  return v1;
}


char *__fastcall Util::appendUtf8Character(const void **a1, unsigned int a2)
{
  const void **v2; // r11@1
  char *result; // r0@1
  char *v4; // r5@1
  int *v5; // r7@2
  _DWORD *v6; // r0@3
  int v7; // r1@3 OVERLAPPED
  char v8; // r4@3
  int v9; // r6@3
  unsigned int v10; // r2@3
  int v11; // [sp+0h] [bp-28h]@1

  v2 = a1;
  v11 = 0;
  result = (char *)j_utf8proc_encode_char(a2, (int)&v11);
  v4 = result;
  if ( (signed int)result >= 1 )
  {
    v5 = &v11;
    do
    {
      v6 = *v2;
      *(_QWORD *)&v7 = *(_QWORD *)((char *)*v2 - 12);
      v8 = *(_BYTE *)v5;
      v9 = v7 + 1;
      if ( v7 + 1 > v10 || *(v6 - 1) >= 1 )
      {
        sub_21E6FCC(v2, v7 + 1);
        v6 = *v2;
        v7 = *((_DWORD *)*v2 - 3);
      }
      *((_BYTE *)v6 + v7) = v8;
      result = (char *)*v2;
      if ( (int *)((char *)*v2 - 12) != &dword_28898C0 )
        *((_DWORD *)result - 1) = 0;
        *((_DWORD *)result - 3) = v9;
        result[v9] = byte_26C67B8[0];
      --v4;
      v5 = (int *)((char *)v5 + 1);
    }
    while ( v4 );
  }
  return result;
}


void __fastcall Util::stringTrim(int *a1, int *a2)
{
  int *v2; // r4@1
  int *v3; // r5@1
  void *v4; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5
  int v7; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v7, " \t\n\r");
  Util::stringTrim(v3, v2, (char *)&v7);
  v4 = (void *)(v7 - 12);
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
      j_j_j_j__ZdlPv_9(v4);
  }
}


int __fastcall Util::getPoint(Util *this, float _R1, float _R2, float a4)
{
  int result; // r0@1

  __asm
  {
    VMOV            S0, R0
    VMOV            S2, R1
    VMOV            S4, R2
    VSUB.F32        S2, S2, S0
    VMUL.F32        S2, S2, S4
    VADD.F32        S0, S2, S0
    VMOV            R0, S0
  }
  return result;
}


wchar_t *__fastcall Util::toWideString(wchar_t **a1, const char **a2)
{
  const char *v2; // r5@1
  wchar_t **v3; // r4@1
  unsigned int v4; // r6@1
  wchar_t *result; // r0@2
  wchar_t *pwcs; // [sp+8h] [bp-18h]@2

  v2 = *a2;
  v3 = a1;
  v4 = mbstowcs(0, *a2, 0);
  if ( v4 == -1 )
  {
    result = (wchar_t *)&unk_28898DC;
  }
  else
    sub_21EB1DC(&pwcs, v4, 0);
    mbstowcs(pwcs, v2, v4);
    result = pwcs;
  *v3 = result;
  return result;
}


signed int __fastcall Util::decompress(const void **a1, int *a2)
{
  const void **v2; // r4@1
  int *v3; // r5@1
  void **v5; // [sp+0h] [bp-40h]@1
  int v6; // [sp+8h] [bp-38h]@1
  int v7; // [sp+Ch] [bp-34h]@1
  int v8; // [sp+10h] [bp-30h]@1
  int v9; // [sp+14h] [bp-2Ch]@1
  char v10; // [sp+18h] [bp-28h]@1
  int v11; // [sp+1Ch] [bp-24h]@1
  char v12; // [sp+20h] [bp-20h]@1

  v2 = a1;
  v3 = a2;
  *a1 = &unk_28898CC;
  sub_21E6FCC(a1, 6 * *(_DWORD *)(*a2 - 12));
  v8 = 0;
  v9 = 0;
  v6 = 0;
  v7 = 0;
  v10 = 2;
  v11 = 7;
  v12 = 0;
  v5 = &off_26EC33C;
  return leveldb::ZlibCompressorBase::decompress((int)&v5, *v3, *(_DWORD *)(*v3 - 12), v2);
}


void __fastcall Util::_recordProfanityLocationInWord(int **a1, int a2, _DWORD *a3, int a4, int a5, int a6, unsigned __int64 *a7, int a8)
{
  Util::_recordProfanityLocationInWord(a1, a2, a3, a4, a5, a6, a7, a8);
}


void __fastcall Util::normalizeLineEndings(int *a1)
{
  int *v1; // r4@1
  _BYTE *v2; // r1@1
  unsigned int v3; // r5@1
  unsigned int v4; // r2@2
  signed int v5; // r7@2
  unsigned int v6; // r3@2
  unsigned int v7; // r6@4
  _BYTE *v8; // r0@7
  _BYTE *v9; // r1@8
  unsigned int v10; // r5@8
  unsigned int v11; // r2@9
  signed int v12; // r7@9
  unsigned int v13; // r3@9
  unsigned int v14; // r6@11
  _BYTE *v15; // r0@14
  unsigned int *v16; // r2@16
  signed int v17; // r1@18
  unsigned int *v18; // r2@20
  signed int v19; // r1@22
  _BYTE *v20; // [sp+Ch] [bp-34h]@8
  _BYTE *v21; // [sp+14h] [bp-2Ch]@1

  v1 = a1;
  sub_21E94B4((void **)&v21, "\r\n");
  v2 = v21;
  v3 = *((_DWORD *)v21 - 3);
  if ( v3 )
  {
    v4 = 0;
    v5 = 1;
    v6 = *((_DWORD *)v21 - 3);
    while ( 1 )
    {
      v7 = sub_21E76A0(v1, v2, v4, v6);
      if ( v7 == -1 )
        break;
      sub_21E91FC((const void **)v1, v7, v3, (char *)Util::NEW_LINE, *(_BYTE **)(Util::NEW_LINE - 12));
      if ( !++v5 )
      v2 = v21;
      v6 = *((_DWORD *)v21 - 3);
      v4 = *(_DWORD *)(Util::NEW_LINE - 12) + v7;
    }
    v2 = v21;
  }
  v8 = v2 - 12;
  if ( (int *)(v2 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v20, "\r");
  v9 = v20;
  v10 = *((_DWORD *)v20 - 3);
  if ( v10 )
    v11 = 0;
    v12 = 1;
    v13 = *((_DWORD *)v20 - 3);
      v14 = sub_21E76A0(v1, v9, v11, v13);
      if ( v14 == -1 )
      sub_21E91FC((const void **)v1, v14, v10, (char *)Util::NEW_LINE, *(_BYTE **)(Util::NEW_LINE - 12));
      if ( !++v12 )
      v9 = v20;
      v13 = *((_DWORD *)v20 - 3);
      v11 = *(_DWORD *)(Util::NEW_LINE - 12) + v14;
    v9 = v20;
  v15 = v9 - 12;
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v9 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
}


int __fastcall Util::utf8len(int *a1, int a2)
{
  int v2; // r4@1
  int v3; // r7@1
  int v4; // r5@1
  signed int v5; // r0@1
  int v6; // r6@1
  int v8; // [sp+0h] [bp-18h]@1

  v2 = *a1;
  v3 = a2;
  v4 = *(_DWORD *)(*a1 - 12);
  v5 = j_utf8proc_iterate(*a1, v4, &v8);
  v6 = 0;
  if ( v5 >= 1 )
  {
    if ( v3 )
    {
      do
      {
        v4 -= v5;
        v2 += v5;
        v5 = j_utf8proc_iterate(v2, v4, &v8);
        ++v6;
      }
      while ( v5 > 0 );
    }
    else
        if ( v4 < 1 || v8 != 167 )
        {
          v5 = j_utf8proc_iterate(v2, v4, &v8);
          ++v6;
        }
        else
          v5 = j_utf8proc_iterate(++v2, --v4, &v8);
  }
  return v6;
}


__int64 __fastcall Util::u64FromString(const char **a1)
{
  const char *v1; // r8@1
  unsigned int v2; // r12@1
  __int64 result; // r0@1
  int v4; // r3@2
  unsigned int v5; // r4@2
  char v6; // r6@3
  unsigned int v7; // r5@3
  char v8; // r2@3
  int v9; // r7@3
  unsigned int v10; // r2@3

  v1 = *a1;
  LODWORD(result) = atoi(*a1);
  v2 = *((_DWORD *)v1 - 3);
  result = (signed int)result;
  if ( v2 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v6 = v4 & 0x38;
      v7 = v1[v5];
      v8 = 32 - (v4 & 0x38);
      v9 = (v4 & 0x38) - 32;
      v4 += 8;
      v10 = v7 >> v8;
      if ( v9 >= 0 )
        v10 = v7 << v9;
      ++v5;
      result += __PAIR__(v10, v7 << v6);
    }
    while ( v5 < v2 );
  }
  return result;
}


void __fastcall Util::filterProfanityFromString(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, void *a12, int a13, void *a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, void *a22, int a23, void *a24, int a25, int a26, int a27, int a28, char a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, void *a39, int a40, void *a41, int a42, int a43, int a44, int a45, void *a46, int a47, int a48, void *a49, int a50, int a51, int a52, int a53, int a54, char a55)
{
  int *v55; // r11@1
  double v56; // r0@2
  int *v57; // r2@2
  int v58; // r8@2
  int v59; // r3@2
  int v60; // r4@4
  signed int v61; // r1@4
  unsigned int v62; // r6@7
  _DWORD *v63; // r0@7
  _DWORD *v64; // r10@8
  unsigned __int8 v65; // r4@8
  _DWORD *v66; // r8@10
  int v67; // r6@13
  int v68; // r10@13
  bool v69; // zf@15
  int v70; // r6@18
  int v71; // r4@20
  int v72; // r4@21
  _BYTE *v73; // r0@22
  int v74; // r1@22
  char v75; // r7@22
  int v76; // r5@22
  _DWORD *v77; // r0@25
  _BYTE *v78; // r0@27
  int v79; // r1@27
  char v80; // r7@27
  int v81; // r5@27
  _DWORD *v82; // r0@30
  _BYTE *v83; // r0@34
  int v84; // r1@34
  int v85; // r5@34
  __int16 v86; // r7@34
  _DWORD *v87; // r0@37
  _BYTE *v88; // r0@39
  int v89; // r1@39
  int v90; // r5@39
  __int16 v91; // r7@39
  _DWORD *v92; // r0@42
  int *v93; // r4@46
  signed int v94; // r1@46
  int *v95; // r6@48
  int v96; // r5@48
  unsigned int v97; // r1@48
  unsigned int v98; // r0@50
  unsigned int v99; // r7@50
  char *v100; // r0@55
  char *v101; // r8@55
  int v102; // r2@55
  _BYTE *v103; // r0@55
  _QWORD *v104; // r1@55
  __int64 v105; // r2@56
  unsigned int v106; // r1@57
  int *v107; // r4@58
  int v108; // r0@60
  char *v109; // r4@61
  int v110; // r5@64
  unsigned int v111; // r1@64
  unsigned int v112; // r0@66
  unsigned int v113; // r7@66
  char *v114; // r0@71
  char *v115; // r8@71
  unsigned int v116; // r2@71
  char *v117; // r1@71
  void *v118; // r0@71
  char *v119; // r6@71
  __int64 v120; // r2@72
  char *v121; // r4@74
  _BYTE *v122; // r0@79
  int v123; // r1@79
  int v124; // r5@79
  __int16 v125; // r7@79
  _DWORD *v126; // r0@82
  int *v127; // r7@85
  int *v128; // r4@87
  int v129; // r5@87
  unsigned int v130; // r1@87
  unsigned int v131; // r0@89
  unsigned int v132; // r6@89
  _DWORD *v133; // r8@94
  int v134; // r2@94
  int v135; // r0@94
  int *v136; // r5@94
  _QWORD *v137; // r1@94
  __int64 v138; // r2@95
  unsigned int v139; // r1@96
  int *v140; // r5@97
  double v141; // r0@104
  __int64 v142; // r2@104
  int v143; // r1@104
  char *v144; // r5@104
  int v145; // r6@104
  signed int v146; // r0@104
  int v147; // r1@104
  int v148; // r4@104
  double v149; // r0@111
  __int64 v150; // r2@111
  int v151; // r1@111
  char *v152; // r5@111
  int v153; // r7@111
  signed int v154; // r0@111
  int v155; // r1@111
  int v156; // r6@111
  int v157; // r4@118
  int v158; // r5@119
  __int64 v159; // kr28_8@120
  void *v160; // r0@121
  void *v161; // r4@122
  void *v162; // r0@126
  void *v163; // r4@127
  void *v164; // r0@131
  void *v165; // r4@132
  char *v166; // r0@140
  char *v167; // r0@141
  char *v168; // r0@142
  unsigned int *v169; // r2@144
  signed int v170; // r1@146
  unsigned int *v171; // r2@148
  signed int v172; // r1@150
  unsigned int *v173; // r2@152
  signed int v174; // r1@154
  char *v175; // [sp+1Ch] [bp-134h]@64
  char **v176; // [sp+20h] [bp-130h]@2
  unsigned __int64 *v177; // [sp+24h] [bp-12Ch]@2
  int v178; // [sp+28h] [bp-128h]@2
  int v179; // [sp+2Ch] [bp-124h]@8
  int v180; // [sp+2Ch] [bp-124h]@48
  int v181; // [sp+30h] [bp-120h]@7
  signed int v182; // [sp+34h] [bp-11Ch]@7
  int v183; // [sp+3Ch] [bp-114h]@2
  void *v184; // [sp+50h] [bp-100h]@111
  int v185; // [sp+54h] [bp-FCh]@123
  void *v186; // [sp+58h] [bp-F8h]@121
  int v187; // [sp+5Ch] [bp-F4h]@123
  int v188; // [sp+68h] [bp-E8h]@124
  void *v189; // [sp+78h] [bp-D8h]@104
  int v190; // [sp+7Ch] [bp-D4h]@128
  void *v191; // [sp+80h] [bp-D0h]@126
  int v192; // [sp+84h] [bp-CCh]@128
  int v193; // [sp+90h] [bp-C0h]@129
  char v194; // [sp+94h] [bp-BCh]@104
  int v195; // [sp+98h] [bp-B8h]@104
  int v196; // [sp+9Ch] [bp-B4h]@104
  int *v197; // [sp+A0h] [bp-B0h]@104
  int *v198; // [sp+A4h] [bp-ACh]@104
  int v199; // [sp+A8h] [bp-A8h]@104
  int v200; // [sp+ACh] [bp-A4h]@2
  void *v201; // [sp+BCh] [bp-94h]@2
  unsigned int v202; // [sp+C0h] [bp-90h]@7
  void *v203; // [sp+C4h] [bp-8Ch]@131
  int v204; // [sp+C8h] [bp-88h]@133
  int v205; // [sp+D4h] [bp-7Ch]@134
  void *v206; // [sp+D8h] [bp-78h]@2
  char *v207; // [sp+DCh] [bp-74h]@2
  char *v208; // [sp+E0h] [bp-70h]@2
  void *ptr; // [sp+E4h] [bp-6Ch]@2
  int *v210; // [sp+E8h] [bp-68h]@2
  char *v211; // [sp+ECh] [bp-64h]@2
  _BYTE *v212; // [sp+F0h] [bp-60h]@2
  _BYTE *v213; // [sp+F4h] [bp-5Ch]@2
  char *v214; // [sp+F8h] [bp-58h]@2
  int v215; // [sp+118h] [bp-38h]@104
  int v216; // [sp+128h] [bp-28h]@111

  v55 = (int *)a2;
  if ( !*(_DWORD *)(*(_DWORD *)a2 - 12) )
  {
    sub_21E8AF4((int *)a1, (int *)a2);
    return;
  }
  v176 = (char **)a1;
  v177 = (unsigned __int64 *)a3;
  v178 = a4;
  sub_21E8AF4((int *)&v214, (int *)a2);
  HIDWORD(v56) = ".,_-+\"'\\/*#=<>?|`~!^ \n\t\r.,_-+'\\/*#=<>?|`~! \n\t\r";
  v212 = &unk_28898CC;
  v213 = &unk_28898CC;
  v210 = 0;
  v211 = 0;
  v206 = 0;
  v207 = 0;
  v208 = 0;
  ptr = 0;
  LODWORD(v56) = &v201;
  std::_Hashtable<char,char,std::allocator<char>,std::__detail::_Identity,std::equal_to<char>,std::hash<char>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,true,true>>::_Hashtable<char const*>(
    v56,
    " \n\t\r.,_-+'\\/*#=<>?|`~! \n\t\r",
    0);
  v57 = &v200;
  v58 = *v55;
  v59 = *(_DWORD *)(*v55 - 12);
  v183 = 0;
  while ( 1 )
    v60 = v59;
    v61 = j_utf8proc_iterate(v58, v59, v57);
    if ( v61 < 1 )
      break;
    v58 += v61;
    if ( v200 == 167 )
    {
      v59 = v60 - v61 - 1;
      ++v58;
      v57 = &v200;
      v183 += v61 + 1;
    }
    else
      if ( (unsigned int)(v200 - 1) >= 0x7F )
      {
        v67 = v183;
        v181 = v60 - v61;
        v68 = v61 + v183;
        v182 = v61;
LABEL_21:
        v72 = v67;
        do
        {
          v73 = v213;
          v74 = *(_QWORD *)(v213 - 12);
          v75 = *(_BYTE *)(*v55 + v72);
          v76 = v74 + 1;
          if ( v74 + 1 > (unsigned int)(*(_QWORD *)(v213 - 12) >> 32) || *((_DWORD *)v213 - 1) >= 1 )
          {
            sub_21E6FCC((const void **)&v213, v74 + 1);
            v73 = v213;
            v74 = *((_DWORD *)v213 - 3);
          }
          v73[v74] = v75;
          v77 = v213;
          if ( (int *)(v213 - 12) != &dword_28898C0 )
            *((_DWORD *)v213 - 1) = 0;
            *(v77 - 3) = v76;
            *((_BYTE *)v77 + v76) = byte_26C67B8[0];
          v78 = v212;
          v79 = *(_QWORD *)(v212 - 12);
          v80 = *(_BYTE *)(*v55 + v72);
          v81 = v79 + 1;
          if ( v79 + 1 > (unsigned int)(*(_QWORD *)(v212 - 12) >> 32) || *((_DWORD *)v212 - 1) >= 1 )
            sub_21E6FCC((const void **)&v212, v79 + 1);
            v78 = v212;
            v79 = *((_DWORD *)v212 - 3);
          v78[v79] = v80;
          v82 = v212;
          if ( (int *)(v212 - 12) != &dword_28898C0 )
            *((_DWORD *)v212 - 1) = 0;
            *(v82 - 3) = v81;
            *((_BYTE *)v82 + v81) = byte_26C67B8[0];
          ++v72;
        }
        while ( v72 < v68 );
      }
      else
        v62 = (unsigned __int8)v200 % v202;
        v63 = (_DWORD *)*((_DWORD *)v201 + v62);
        if ( v63 )
          v64 = (_DWORD *)*v63;
          v179 = v58;
          v65 = *(_BYTE *)(*v63 + 4);
          while ( (unsigned __int8)v200 != v65 )
            v66 = (_DWORD *)*v64;
            if ( *v64 )
            {
              v65 = *((_BYTE *)v66 + 4);
              v63 = v64;
              v64 = (_DWORD *)*v64;
              if ( *((_BYTE *)v66 + 4) % v202 == v62 )
                continue;
            }
            goto LABEL_19;
          v69 = v63 == 0;
          if ( v63 )
            v69 = *v63 == 0;
          if ( v69 )
LABEL_19:
            v67 = v183;
            v58 = v179;
            v68 = v61 + v183;
            if ( (unsigned int)(v200 - 1) >= 0x7F )
              goto LABEL_21;
            goto LABEL_20;
          v58 = v179;
          v68 = v61 + v183;
          v70 = v183;
          do
            v122 = v213;
            v123 = *(_QWORD *)(v213 - 12);
            v124 = v123 + 1;
            v125 = *(_WORD *)(tolower_tab_ + 2 * *(_BYTE *)(*v55 + v70) + 2);
            if ( v123 + 1 > (unsigned int)(*(_QWORD *)(v213 - 12) >> 32) || *((_DWORD *)v213 - 1) >= 1 )
              sub_21E6FCC((const void **)&v213, v123 + 1);
              v122 = v213;
              v123 = *((_DWORD *)v213 - 3);
            v122[v123] = v125;
            v126 = v213;
            if ( (int *)(v213 - 12) != &dword_28898C0 )
              *((_DWORD *)v213 - 1) = 0;
              *(v126 - 3) = v124;
              *((_BYTE *)v126 + v124) = byte_26C67B8[0];
            ++v70;
          while ( v70 < v68 );
          v127 = v210;
          if ( (char *)v210 != v211 )
            *v210 = v183;
            v127[1] = v182;
            v210 = v127 + 2;
            goto LABEL_63;
          v128 = (int *)ptr;
          v129 = ((char *)v210 - (_BYTE *)ptr) >> 3;
          v130 = ((char *)v210 - (_BYTE *)ptr) >> 3;
          if ( !v129 )
            v130 = 1;
          v131 = v130 + (((char *)v210 - (_BYTE *)ptr) >> 3);
          v132 = v130 + (((char *)v210 - (_BYTE *)ptr) >> 3);
          if ( 0 != v131 >> 29 )
            v132 = 0x1FFFFFFF;
          if ( v131 < v130 )
          if ( v132 >= 0x20000000 )
            sub_21E57F4();
          v133 = operator new(8 * v132);
          v134 = (int)v133;
          v133[2 * v129] = v183;
          v135 = (int)&v133[2 * v129];
          v136 = v128;
          *(_DWORD *)(v135 + 4) = v182;
          v137 = v133;
          if ( v128 != v127 )
            do
              v138 = *(_QWORD *)v136;
              v136 += 2;
              *v137 = v138;
              ++v137;
            while ( v127 != v136 );
            v139 = (unsigned int)v133 + (((char *)(v127 - 2) - (char *)v128) & 0xFFFFFFF8);
            v128 = (int *)ptr;
            v134 = v139 + 8;
          v140 = (int *)(v134 + 8);
          if ( v128 )
            operator delete(v128);
          ptr = v133;
          v210 = v140;
          v211 = (char *)&v133[2 * v132];
          goto LABEL_77;
LABEL_20:
        v71 = v67;
          v83 = v213;
          v84 = *(_QWORD *)(v213 - 12);
          v85 = v84 + 1;
          v86 = *(_WORD *)(tolower_tab_ + 2 * *(_BYTE *)(*v55 + v71) + 2);
          if ( v84 + 1 > (unsigned int)(*(_QWORD *)(v213 - 12) >> 32) || *((_DWORD *)v213 - 1) >= 1 )
            sub_21E6FCC((const void **)&v213, v84 + 1);
            v83 = v213;
            v84 = *((_DWORD *)v213 - 3);
          v83[v84] = v86;
          v87 = v213;
            *(v87 - 3) = v85;
            *((_BYTE *)v87 + v85) = byte_26C67B8[0];
          v88 = v212;
          v89 = *(_QWORD *)(v212 - 12);
          v90 = v89 + 1;
          v91 = *(_WORD *)(tolower_tab_ + 2 * *(_BYTE *)(*v55 + v71) + 2);
          if ( v89 + 1 > (unsigned int)(*(_QWORD *)(v212 - 12) >> 32) || *((_DWORD *)v212 - 1) >= 1 )
            sub_21E6FCC((const void **)&v212, v89 + 1);
            v88 = v212;
            v89 = *((_DWORD *)v212 - 3);
          v88[v89] = v91;
          v92 = v212;
            *(v92 - 3) = v90;
            *((_BYTE *)v92 + v90) = byte_26C67B8[0];
          ++v71;
        while ( v71 < v68 );
      v93 = v210;
      v94 = v182;
      if ( (char *)v210 == v211 )
        v95 = (int *)ptr;
        v180 = v58;
        v96 = ((char *)v210 - (_BYTE *)ptr) >> 3;
        v97 = ((char *)v210 - (_BYTE *)ptr) >> 3;
        if ( !v96 )
          v97 = 1;
        v98 = v97 + (((char *)v210 - (_BYTE *)ptr) >> 3);
        v99 = v97 + (((char *)v210 - (_BYTE *)ptr) >> 3);
        if ( 0 != v98 >> 29 )
          v99 = 0x1FFFFFFF;
        if ( v98 < v97 )
        if ( v99 >= 0x20000000 )
          sub_21E57F4();
        v100 = (char *)operator new(8 * v99);
        v101 = v100;
        v102 = (int)v100;
        *(_DWORD *)&v100[8 * v96] = v183;
        *(_DWORD *)&v100[8 * v96 + 4] = v182;
        v103 = v95;
        v104 = (_QWORD *)v102;
        if ( v95 != v93 )
            v105 = *(_QWORD *)v95;
            v95 += 2;
            *v104 = v105;
            ++v104;
          while ( v93 != v95 );
          v106 = (unsigned int)&v101[((char *)(v93 - 2) - v103) & 0xFFFFFFF8];
          v103 = ptr;
          v102 = v106 + 8;
        v107 = (int *)(v102 + 8);
        if ( v103 )
          operator delete(v103);
        ptr = v101;
        v210 = v107;
        v108 = (int)&v101[8 * v99];
        v58 = v180;
        v94 = v182;
        v211 = (char *)v108;
        *v210 = v67;
        v93[1] = v182;
        v210 = v93 + 2;
      v109 = v207;
      if ( v207 == v208 )
        v175 = (char *)v206;
        v179 = v58;
        v110 = (v207 - (_BYTE *)v206) >> 3;
        v111 = (v207 - (_BYTE *)v206) >> 3;
        if ( !v110 )
          v111 = 1;
        v112 = v111 + ((v207 - (_BYTE *)v206) >> 3);
        v113 = v111 + ((v207 - (_BYTE *)v206) >> 3);
        if ( 0 != v112 >> 29 )
          v113 = 0x1FFFFFFF;
        if ( v112 < v111 )
        if ( v113 >= 0x20000000 )
        v114 = (char *)operator new(8 * v113);
        v115 = v114;
        *(_DWORD *)&v114[8 * v110] = v67;
        v116 = (unsigned int)v114;
        *(_DWORD *)&v114[8 * v110 + 4] = v182;
        v117 = v114;
        v118 = v175;
        v119 = v175;
        if ( v175 != v109 )
            v120 = *(_QWORD *)v119;
            v119 += 8;
            *(_QWORD *)v117 = v120;
            v117 += 8;
          while ( v109 != v119 );
          v118 = v206;
          v116 = (unsigned int)&v115[((v109 - 8 - v175) & 0xFFFFFFF8) + 8];
        v121 = (char *)(v116 + 8);
        if ( v118 )
          operator delete(v118);
        v206 = v115;
        v207 = v121;
        v208 = &v115[8 * v113];
LABEL_77:
        v183 = v68;
        v58 = v179;
        goto LABEL_78;
      *(_DWORD *)v207 = v67;
      *((_DWORD *)v109 + 1) = v94;
      v207 = v109 + 8;
LABEL_63:
      v183 = v68;
LABEL_78:
      v59 = v181;
  HIDWORD(v141) = " \n\t\r.,_-+'\\/*#=<>?|`~! \n\t\r";
  v199 = 0;
  v195 = 0;
  v196 = 0;
  v197 = &v195;
  v198 = &v195;
  LODWORD(v141) = &v189;
    v141,
    ".,_-+'\\/*#=<>?|`~! \n\t\r",
  LODWORD(v142) = &v206;
  HIDWORD(v142) = &v189;
  Util::_breakIntoWordsAndFindProfanity((int *)&v212, v143, v142, (int)&v194, v177, v178);
  v144 = v212;
  v145 = *((_DWORD *)v212 - 3);
  v146 = j_utf8proc_iterate((int)v212, *((_DWORD *)v212 - 3), &v215);
  v148 = 0;
  while ( v146 > 0 )
    v145 -= v146;
    v144 += v146;
    if ( v145 < 1 || v215 != 167 )
      v146 = j_utf8proc_iterate((int)v144, v145, &v215);
      ++v148;
      v146 = j_utf8proc_iterate((int)++v144, --v145, &v215);
  Util::_recordProfanityLocationInWord((int **)&v212, v147, &v206, 0, v148, (int)&v194, v177, v178);
  HIDWORD(v149) = ".,_-+'\\/*#=<>?|`~! \n\t\r";
  LODWORD(v149) = &v184;
    v149,
    "",
  LODWORD(v150) = &ptr;
  HIDWORD(v150) = &v184;
  Util::_breakIntoWordsAndFindProfanity((int *)&v213, v151, v150, (int)&v194, v177, v178);
  v152 = v212;
  v153 = *((_DWORD *)v212 - 3);
  v154 = j_utf8proc_iterate((int)v212, *((_DWORD *)v212 - 3), &v216);
  v156 = 0;
  while ( v154 > 0 )
    v153 -= v154;
    v152 += v154;
    if ( v153 < 1 || v216 != 167 )
      v154 = j_utf8proc_iterate((int)v152, v153, &v216);
      ++v156;
      v154 = j_utf8proc_iterate((int)++v152, --v153, &v216);
  Util::_recordProfanityLocationInWord((int **)&v213, v155, &ptr, 0, v156, (int)&v194, v177, v178);
  v157 = (int)v197;
  if ( v197 != &v195 )
    v158 = 0;
    do
      v159 = *(_QWORD *)(v157 + 16);
      sub_21E91FC((const void **)&v214, v159 - v158, *(_QWORD *)(v157 + 16) >> 32, "*", (_BYTE *)1);
      v158 = v158 + HIDWORD(v159) - 1;
      v157 = sub_21D4820(v157);
    while ( (int *)v157 != &v195 );
  *v176 = v214;
  v214 = (char *)&unk_28898CC;
  v160 = v186;
  if ( v186 )
      v161 = *(void **)v160;
      operator delete(v160);
      v160 = v161;
    while ( v161 );
  _aeabi_memclr4(v184, 4 * v185);
  v186 = 0;
  v187 = 0;
  if ( v184 && &v188 != v184 )
    operator delete(v184);
  v162 = v191;
  if ( v191 )
      v163 = *(void **)v162;
      operator delete(v162);
      v162 = v163;
    while ( v163 );
  _aeabi_memclr4(v189, 4 * v190);
  v191 = 0;
  v192 = 0;
  if ( v189 && &v193 != v189 )
    operator delete(v189);
  std::_Rb_tree<std::pair<int,int>,std::pair<int,int>,std::_Identity<std::pair<int,int>>,std::less<std::pair<int,int>>,std::allocator<std::pair<int,int>>>::_M_erase(
    (int)&v194,
    v196);
  v164 = v203;
  if ( v203 )
      v165 = *(void **)v164;
      operator delete(v164);
      v164 = v165;
    while ( v165 );
  _aeabi_memclr4(v201, 4 * v202);
  v203 = 0;
  v204 = 0;
  if ( v201 && &v205 != v201 )
    operator delete(v201);
  if ( v206 )
    operator delete(v206);
  if ( ptr )
    operator delete(ptr);
  v166 = v212 - 12;
  if ( (int *)(v212 - 12) != &dword_28898C0 )
    v169 = (unsigned int *)(v212 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v170 = __ldrex(v169);
      while ( __strex(v170 - 1, v169) );
      v170 = (*v169)--;
    if ( v170 <= 0 )
      j_j_j_j__ZdlPv_9(v166);
  v167 = v213 - 12;
  if ( (int *)(v213 - 12) != &dword_28898C0 )
    v171 = (unsigned int *)(v213 - 4);
        v172 = __ldrex(v171);
      while ( __strex(v172 - 1, v171) );
      v172 = (*v171)--;
    if ( v172 <= 0 )
      j_j_j_j__ZdlPv_9(v167);
  v168 = v214 - 12;
  if ( (int *)(v214 - 12) != &dword_28898C0 )
    v173 = (unsigned int *)(v214 - 4);
        v174 = __ldrex(v173);
      while ( __strex(v174 - 1, v173) );
      v174 = (*v173)--;
    if ( v174 <= 0 )
      j_j_j_j__ZdlPv_9(v168);
}


signed int __fastcall Util::_convertPointFromNether(int _R0, int a2, int a3, int _R3)
{
  signed int result; // r0@4
  int v9; // r0@5

  if ( a3 == 2 )
  {
    *(_DWORD *)a2 = dword_2820018;
    *(_DWORD *)(a2 + 4) = dword_282001C;
    v9 = dword_2820020;
LABEL_7:
    *(_DWORD *)(a2 + 8) = v9;
    return 1;
  }
  if ( a3 == 1 )
    *(_DWORD *)a2 = *(_DWORD *)_R0;
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(_R0 + 4);
    v9 = *(_DWORD *)(_R0 + 8);
    goto LABEL_7;
  if ( a3 )
    *(_QWORD *)a2 = *(_QWORD *)&Vec3::ZERO;
    *(_DWORD *)(a2 + 8) = dword_2822498;
    result = 0;
  else
    __asm
    {
      VMOV            S0, R3
      VCVT.F32.S32    S0, S0
      VLDR            S2, [R0]
    }
    __asm { VLDR            S4, [R0,#8] }
    result = 1;
      VMUL.F32        S2, S2, S0
      VMUL.F32        S0, S4, S0
      VSTR            S2, [R1]
      VSTR            S0, [R1,#8]
  return result;
}


int __fastcall Util::toHex(Util *this, char a2)
{
  return (unsigned __int8)a0123456789ab_2[(unsigned __int8)this & 0xF];
}


void __fastcall Util::freeStringMemory(int *a1)
{
  char *v1; // r0@1
  unsigned int *v2; // r2@3
  signed int v3; // r1@5
  char *v4; // [sp+4h] [bp-1Ch]@1

  v4 = (char *)&unk_28898CC;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(a1, (int *)&v4);
  v1 = v4 - 12;
  if ( (int *)(v4 - 12) != &dword_28898C0 )
  {
    v2 = (unsigned int *)(v4 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v3 = __ldrex(v2);
      while ( __strex(v3 - 1, v2) );
    }
    else
      v3 = (*v2)--;
    if ( v3 <= 0 )
      j_j_j_j__ZdlPv_9(v1);
  }
}


char *__fastcall Util::toUpper(void **a1, int a2, unsigned int a3)
{
  const void **v3; // r4@1
  char *v4; // r5@1
  _DWORD *v5; // r6@3
  int v6; // r7@6
  _BYTE *v7; // r2@7
  char *result; // r0@9
  int v9; // t1@10

  v3 = (const void **)a1;
  sub_21E91E0(a1, a3, a2);
  v4 = (char *)*v3;
  if ( *((_DWORD *)*v3 - 1) <= -1 )
  {
    v5 = *v3;
  }
  else
    sub_21E8010(v3);
    v4 = (char *)*v3;
    if ( *((_DWORD *)*v3 - 1) < 0 )
    {
      v5 = *v3;
    }
    else
      sub_21E8010(v3);
  v6 = *(v5 - 3);
  if ( *(v5 - 1) <= -1 )
    v7 = v5;
    v7 = *v3;
  result = (char *)v5 + v6;
  if ( v4 != (char *)v5 + v6 )
    do
      v9 = (unsigned __int8)*v4++;
      *v7++ = *(_BYTE *)(toupper_tab_ + 2 * v9 + 2);
    while ( result != v4 );
  return result;
}


void **__fastcall Util::boolToString(Util *this, int a2)
{
  const char *v2; // r3@1

  v2 = "true";
  if ( !a2 )
    v2 = "false";
  return sub_21E94B4((void **)this, v2);
}


int __fastcall Util::ProfanityFilter::findProfanity(I18n *a1, unsigned int *a2, unsigned __int64 *a3)
{
  I18n *v3; // r5@1
  unsigned __int64 *v4; // r4@1
  int v5; // r9@1
  void *v6; // r5@1
  void *v7; // r7@1
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  int *v10; // r0@11
  __int64 v12; // [sp+4h] [bp-34h]@1
  int v13; // [sp+Ch] [bp-2Ch]@1

  v3 = a1;
  v4 = a3;
  v12 = 0LL;
  v13 = 0;
  Util::splitString(a2, 32, (int)&v12);
  v5 = Util::ProfanityFilter::findProfanity(v3, (int)&v12, v4);
  v7 = (void *)HIDWORD(v12);
  v6 = (void *)v12;
  if ( (_DWORD)v12 != HIDWORD(v12) )
  {
    do
    {
      v10 = (int *)(*(_DWORD *)v6 - 12);
      if ( v10 != &dword_28898C0 )
      {
        v8 = (unsigned int *)(*(_DWORD *)v6 - 4);
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
          j_j_j_j__ZdlPv_9(v10);
      }
      v6 = (char *)v6 + 4;
    }
    while ( v6 != v7 );
    v6 = (void *)v12;
  }
  if ( v6 )
    operator delete(v6);
  return v5;
}


signed int __fastcall Util::isValidUTF8(int *a1)
{
  int v1; // r4@1
  int v2; // r5@1
  signed int v3; // r0@1
  signed int v4; // r1@3
  char v6; // [sp+4h] [bp-14h]@1

  v1 = *a1;
  v2 = *(_DWORD *)(*a1 - 12);
  v3 = j_utf8proc_iterate(*a1, v2, (int *)&v6);
  if ( v3 >= 1 )
  {
    do
    {
      v2 -= v3;
      v1 += v3;
      v3 = j_utf8proc_iterate(v1, v2, (int *)&v6);
    }
    while ( v3 > 0 );
  }
  v4 = 0;
  if ( v3 != -3 )
    v4 = 1;
  return v4;
}


void Util::format(Util *this, const char *a2, __int64 a3, ...)
{
  int *v3; // r8@1
  const char *v4; // r6@1
  int v5; // r0@1
  int v6; // r7@1
  int v7; // r4@3
  char *v8; // r5@4
  int *v9; // r1@5
  int v10; // r0@9
  __int64 v11; // [sp+28h] [bp-8h]@1

  v3 = (int *)this;
  v11 = a3;
  v4 = a2;
  v5 = vsnprintf(0, 0, a2, &v11);
  v6 = v5;
  if ( v5 <= -1 )
  {
    v9 = (int *)&Util::EMPTY_STRING;
LABEL_7:
    sub_21E8AF4(v3, v9);
    return;
  }
  if ( !v5 )
    goto LABEL_7;
  v7 = v5 + 1;
  if ( v5 == -1 )
    v8 = 0;
  else
    v8 = (char *)operator new(v5 + 1);
  _aeabi_memclr(v8, v6 + 1);
  v10 = vsnprintf(v8, v6 + 1, v4, &v11);
  if ( v6 != v10 || v10 >= v7 )
    sub_21E8AF4(v3, (int *)&Util::EMPTY_STRING);
    sub_21E94B4((void **)v3, v8);
  if ( v8 )
    operator delete(v8);
}


void __fastcall Util::stringTrim(int *a1, int *a2)
{
  Util::stringTrim(a1, a2);
}


void __fastcall Util::formatTickDuration(Util *this, int _R1)
{
  Util::formatTickDuration(this, _R1);
}


signed int __fastcall Util::_convertPointFromEnd(int a1, int a2, int a3, int a4)
{
  int v4; // r0@3

  if ( !a3 )
  {
    *(_DWORD *)a2 = *(_DWORD *)a4;
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a4 + 4);
    v4 = *(_DWORD *)(a4 + 8);
    goto LABEL_5;
  }
  if ( a3 == 2 )
    *(_DWORD *)a2 = *(_DWORD *)a1;
    *(_DWORD *)(a2 + 4) = *(_DWORD *)(a1 + 4);
    v4 = *(_DWORD *)(a1 + 8);
LABEL_5:
    *(_DWORD *)(a2 + 8) = v4;
    return 1;
  *(_QWORD *)a2 = *(_QWORD *)&Vec3::ZERO;
  *(_DWORD *)(a2 + 8) = dword_2822498;
  return 0;
}


char *__fastcall Util::base64_decode(const void **a1, int *a2)
{
  int *v2; // r2@1
  const void **v3; // r9@1
  char *result; // r0@1
  unsigned int v5; // r3@1
  signed int v6; // r10@3
  char *v7; // r6@4
  signed int v8; // r11@4
  char *v9; // r0@8
  char *v10; // r7@8
  char *v11; // r0@8
  unsigned int v12; // r5@8
  char *v13; // r0@8
  unsigned int v14; // r6@8
  unsigned __int8 v15; // r0@8
  int v16; // r4@8
  int v17; // r5@8
  _DWORD *v18; // r0@8
  int v19; // r1@8 OVERLAPPED
  int v20; // r7@8
  unsigned int v21; // r2@8
  _DWORD *v22; // r0@11
  int v23; // r1@13 OVERLAPPED
  int v24; // r7@13
  unsigned int v25; // r2@13
  _DWORD *v26; // r0@16
  int v27; // r1@18 OVERLAPPED
  int v28; // r7@18
  unsigned int v29; // r2@18
  bool v30; // zf@23
  char *v31; // r0@30
  char *v32; // r8@30
  char *v33; // r0@30
  unsigned int v34; // r7@30
  char *v35; // r0@30
  unsigned int v36; // r5@30
  char *v37; // r0@30
  int v38; // r6@30
  int i; // r7@31
  _DWORD *v40; // r0@33
  int v41; // r1@33 OVERLAPPED
  int v42; // r5@33
  unsigned int v43; // r2@33
  unsigned __int64 v44; // [sp+10h] [bp-38h]@1
  char v45; // [sp+19h] [bp-2Fh]@8
  char v46; // [sp+1Ah] [bp-2Eh]@8
  char v47; // [sp+1Bh] [bp-2Dh]@8
  unsigned __int8 v48; // [sp+1Ch] [bp-2Ch]@4
  unsigned __int8 v49; // [sp+1Dh] [bp-2Bh]@8
  unsigned __int8 v50; // [sp+1Eh] [bp-2Ah]@8
  unsigned __int8 v51; // [sp+1Fh] [bp-29h]@8

  v2 = a2;
  v3 = a1;
  result = (char *)*a2;
  v5 = *(_DWORD *)(*a2 - 12);
  v44 = __PAIR__((unsigned int)a2, v5);
  *v3 = &unk_28898CC;
  if ( v5 )
  {
    result = (char *)(unsigned __int8)*result;
    if ( result == (char *)61 )
    {
      v6 = 0;
    }
    else
      v7 = (char *)&v48;
      v8 = 1;
      do
      {
        if ( (unsigned __int8)((unsigned __int8)result | 4) != 47 && !(result[ctype_ + 1] & 7) )
          break;
        v7[v6++] = (char)result;
        if ( v6 == 4 )
        {
          v9 = sub_21E77E4(&dword_27EE6D8, v48, 0);
          v10 = v9;
          v48 = (unsigned __int8)v9;
          v11 = sub_21E77E4(&dword_27EE6D8, v49, 0);
          v12 = (unsigned int)v11;
          v49 = (unsigned __int8)v11;
          v13 = sub_21E77E4(&dword_27EE6D8, v50, 0);
          v14 = (unsigned int)v13;
          v50 = (unsigned __int8)v13;
          v15 = (unsigned int)sub_21E77E4(&dword_27EE6D8, v51, 0);
          v51 = v15;
          v16 = (v12 >> 4) & 3 | 4 * (_DWORD)v10;
          v45 = (v12 >> 4) & 3 | 4 * (_BYTE)v10;
          v17 = (v14 >> 2) & 0xF | 16 * v12;
          v46 = v17;
          v47 = v15 + ((_BYTE)v14 << 6);
          v18 = *v3;
          *(_QWORD *)&v19 = *(_QWORD *)((char *)*v3 - 12);
          v20 = v19 + 1;
          if ( v19 + 1 > v21 || *(v18 - 1) >= 1 )
          {
            sub_21E6FCC(v3, v19 + 1);
            v18 = *v3;
            v19 = *((_DWORD *)*v3 - 3);
          }
          *((_BYTE *)v18 + v19) = v16;
          v22 = *v3;
          if ( (int *)((char *)*v3 - 12) != &dword_28898C0 )
            *(v22 - 1) = 0;
            *(v22 - 3) = v20;
            *((_BYTE *)v22 + v20) = byte_26C67B8[0];
            v22 = *v3;
          *(_QWORD *)&v23 = *(_QWORD *)(v22 - 3);
          v24 = v23 + 1;
          if ( v23 + 1 > v25 || *(v22 - 1) >= 1 )
            sub_21E6FCC(v3, v23 + 1);
            v23 = *((_DWORD *)*v3 - 3);
          *((_BYTE *)v22 + v23) = v17;
          v26 = *v3;
            *(v26 - 1) = 0;
            *(v26 - 3) = v24;
            *((_BYTE *)v26 + v24) = byte_26C67B8[0];
            v26 = *v3;
          *(_QWORD *)&v27 = *(_QWORD *)(v26 - 3);
          v28 = v27 + 1;
          if ( v27 + 1 > v29 || *(v26 - 1) >= 1 )
            sub_21E6FCC(v3, v27 + 1);
            v27 = *((_DWORD *)*v3 - 3);
          *((_BYTE *)v26 + v27) = v47;
          v7 = (char *)&v48;
          v6 = 0;
          result = (char *)*v3;
          v2 = (int *)HIDWORD(v44);
          v5 = v44;
            *((_DWORD *)result - 1) = 0;
            *((_DWORD *)result - 3) = v28;
            result[v28] = byte_26C67B8[0];
        }
        v30 = v5 == v8;
        if ( v5 != v8 )
          result = (char *)*(_BYTE *)(*v2 + v8++);
          v30 = result == (char *)61;
      }
      while ( !v30 );
    if ( v6 )
      if ( v6 <= 3 )
        _aeabi_memclr(&v48 + v6, 4 - v6);
      v31 = sub_21E77E4(&dword_27EE6D8, v48, 0);
      v32 = v31;
      v48 = (unsigned __int8)v31;
      v33 = sub_21E77E4(&dword_27EE6D8, v49, 0);
      v34 = (unsigned int)v33;
      v49 = (unsigned __int8)v33;
      v35 = sub_21E77E4(&dword_27EE6D8, v50, 0);
      v36 = (unsigned int)v35;
      v50 = (unsigned __int8)v35;
      v37 = sub_21E77E4(&dword_27EE6D8, v51, 0);
      v51 = (unsigned __int8)v37;
      v38 = (v34 >> 4) & 3 | 4 * (_DWORD)v32;
      v45 = (v34 >> 4) & 3 | 4 * (_BYTE)v32;
      result = &v37[64 * v36];
      v46 = (v36 >> 2) & 0xF | 16 * v34;
      v47 = (char)result;
      if ( v6 >= 2 )
        for ( i = 1; ; ++i )
          v40 = *v3;
          *(_QWORD *)&v41 = *(_QWORD *)((char *)*v3 - 12);
          v42 = v41 + 1;
          if ( v41 + 1 > v43 || *(v40 - 1) >= 1 )
            sub_21E6FCC(v3, v41 + 1);
            v40 = *v3;
            v41 = *((_DWORD *)*v3 - 3);
          *((_BYTE *)v40 + v41) = v38;
            *((_DWORD *)result - 3) = v42;
            result[v42] = byte_26C67B8[0];
          if ( i >= v6 - 1 )
            break;
          LOBYTE(v38) = *(&v45 + i);
  }
  return result;
}


void __fastcall Util::_breakIntoWordsAndFindProfanity(int *a1, int a2, __int64 a3, int a4, unsigned __int64 *a5, int a6)
{
  Util::_breakIntoWordsAndFindProfanity(a1, a2, a3, a4, a5, a6);
}


signed int __fastcall Util::decompress(const void **a1, int *a2, _BYTE *a3)
{
  const void **v3; // r4@1
  int *v4; // r6@1
  _BYTE *v5; // r5@1
  signed int result; // r0@1
  void **v7; // [sp+0h] [bp-40h]@1
  int v8; // [sp+8h] [bp-38h]@1
  int v9; // [sp+Ch] [bp-34h]@1
  int v10; // [sp+10h] [bp-30h]@1
  int v11; // [sp+14h] [bp-2Ch]@1
  char v12; // [sp+18h] [bp-28h]@1
  int v13; // [sp+1Ch] [bp-24h]@1
  char v14; // [sp+20h] [bp-20h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  *a1 = &unk_28898CC;
  sub_21E6FCC(a1, 6 * *(_DWORD *)(*a2 - 12));
  v10 = 0;
  v11 = 0;
  v8 = 0;
  v9 = 0;
  v12 = 2;
  v13 = 7;
  v14 = 0;
  v7 = &off_26EC33C;
  result = leveldb::ZlibCompressorBase::decompress((int)&v7, *v4, *(_DWORD *)(*v4 - 12), v3);
  *v5 = result;
  return result;
}


    if ( Util::compareNoCase(*(_DWORD *)(*(_DWORD *)(v3 + 4) - 12), *(_BYTE **)(v3 + 4), 9, "Thumbnail") == 1 )
{
      v6 = *(_DWORD *)(v2 + 44);
      v7 = operator new(4u);
      *v7 = v2;
      v11 = v7;
      v12 = sub_CF4EC8;
      v13 = sub_CF4EB2;
      ContentCatalogService::fetchFileData(v6, (int *)v3, (int)&v11);
      if ( v12 )
        v12((void **)&v11, &v11, 3);
      v5 = 1;
    }
    v3 += 8;
  }
  while ( v4 != v3 );
  a2 = v10;
  if ( v5 & 1 )
  {
    v8 = 0;
  else
LABEL_16:
    v8 = 1;
    *(_BYTE *)(v2 + 50) = 1;
  EntityInteraction::setInteractText((int *)(v2 + 36), (int *)a2);
  result = 1;
  *(_BYTE *)(v2 + 51) = 1;
  if ( !v8 )
    result = *(_DWORD *)(*(_DWORD *)(v2 + 36) - 12);
    if ( result )
    {
      result = 1;
      *(_BYTE *)(v2 + 55) = 1;
  return result;
}


void __fastcall Util::formatTickDuration(Util *this, int _R1)
{
  Util *v2; // r4@1
  signed int v14; // r5@1
  signed int v15; // r1@1
  const void **v16; // r0@2
  __int64 v17; // kr00_8@2
  unsigned int v18; // r1@2
  const void **v19; // r0@4
  const void **v20; // r0@5
  __int64 v21; // kr08_8@5
  unsigned int v22; // r1@5
  const void **v23; // r0@7
  void *v24; // r0@9
  void *v25; // r0@10
  void *v26; // r0@11
  unsigned int *v27; // r2@12
  signed int v28; // r1@14
  void *v29; // r0@17
  void *v30; // r0@18
  unsigned int *v31; // r2@21
  signed int v32; // r1@23
  unsigned int *v33; // r2@25
  signed int v34; // r1@27
  unsigned int *v35; // r2@29
  signed int v36; // r1@31
  unsigned int *v37; // r2@33
  signed int v38; // r1@35
  int v39; // [sp+4h] [bp-2Ch]@5
  int v40; // [sp+8h] [bp-28h]@5
  unsigned int v41; // [sp+Ch] [bp-24h]@5
  int v42; // [sp+10h] [bp-20h]@2
  int v43; // [sp+14h] [bp-1Ch]@2
  unsigned int v44; // [sp+18h] [bp-18h]@2

  v2 = this;
  _R0 = 1717986919;
  _R3 = 458129845;
  __asm
  {
    SMMUL.W         R0, R1, R0
    SMMUL.W         R1, R1, R3
  }
  _R0 = ((signed int)_R0 >> 3) + (_R0 >> 31);
  _R2 = -2004318071;
  __asm { SMMLA.W         R2, R2, R0, R0 }
  v14 = _R0 - 60 * (((signed int)_R2 >> 5) + (_R2 >> 31));
  v15 = ((signed int)_R1 >> 7) + (_R1 >> 31);
  if ( v14 > 9 )
    Util::toString<int,(void *)0,(void *)0>((void **)&v40, v15);
    v20 = sub_21E7408((const void **)&v40, ":", 1u);
    v41 = (unsigned int)*v20;
    *v20 = &unk_28898CC;
    Util::toString<int,(void *)0,(void *)0>((void **)&v39, v14);
    v21 = *(_QWORD *)(v41 - 12);
    v22 = *(_DWORD *)(v39 - 12) + v21;
    if ( v22 > HIDWORD(v21) && v22 <= *(_DWORD *)(v39 - 8) )
      v23 = sub_21E82D8((const void **)&v39, 0, v41, (_BYTE *)v21);
    else
      v23 = sub_21E72F0((const void **)&v41, (const void **)&v39);
    *(_DWORD *)v2 = *v23;
    *v23 = &unk_28898CC;
    v29 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
    {
      v35 = (unsigned int *)(v39 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
      }
      else
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j__ZdlPv_9(v29);
    }
    v30 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v41 - 4);
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
        v38 = (*v37)--;
      if ( v38 <= 0 )
        j_j_j_j__ZdlPv_9(v30);
    v26 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v40 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        goto LABEL_42;
      goto LABEL_41;
  else
    Util::toString<int,(void *)0,(void *)0>((void **)&v43, v15);
    v16 = sub_21E7408((const void **)&v43, ":0", 2u);
    v44 = (unsigned int)*v16;
    *v16 = &unk_28898CC;
    Util::toString<int,(void *)0,(void *)0>((void **)&v42, v14);
    v17 = *(_QWORD *)(v44 - 12);
    v18 = *(_DWORD *)(v42 - 12) + v17;
    if ( v18 > HIDWORD(v17) && v18 <= *(_DWORD *)(v42 - 8) )
      v19 = sub_21E82D8((const void **)&v42, 0, v44, (_BYTE *)v17);
      v19 = sub_21E72F0((const void **)&v44, (const void **)&v42);
    *(_DWORD *)v2 = *v19;
    *v19 = &unk_28898CC;
    v24 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v42 - 4);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    v25 = (void *)(v44 - 12);
    if ( (int *)(v44 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v44 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    v26 = (void *)(v43 - 12);
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v43 - 4);
LABEL_41:
      v28 = (*v27)--;
LABEL_42:
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
      return;
}


signed int __fastcall Util::toInt(unsigned int *a1, int *a2, int a3, int a4)
{
  int *v4; // r4@1
  int v5; // r5@1
  int v6; // r6@1
  signed int result; // r0@2
  int v8; // [sp+4h] [bp-14h]@1

  v4 = a2;
  v5 = a4;
  v6 = a3;
  v8 = *a2;
  if ( Util::toInt<int,(void *)0>(a1, &v8) )
  {
    result = 1;
  }
  else if ( v8 >= v6 )
    if ( v8 <= v5 )
    {
      *v4 = v8;
      result = 0;
    }
    else
      result = 3;
  else
    result = 2;
  return result;
}


signed int __fastcall Util::compareNoCase(int a1, _BYTE *a2, int a3, _BYTE *a4)
{
  if ( a1 == a3 )
  {
    if ( !a1 )
      return 1;
    while ( *(_WORD *)(toupper_tab_ + 2 + 2 * *a4) == *(_WORD *)(toupper_tab_ + 2 + 2 * *a2) )
    {
      ++a4;
      --a1;
      ++a2;
      if ( !a1 )
        return 1;
    }
  }
  return 0;
}


signed int __fastcall Util::ProfanityFilter::getProfanityModalData(Util::ProfanityFilter *this)
{
  Util::ProfanityFilter *v1; // r4@1
  signed int result; // r0@1

  v1 = this;
  *(_DWORD *)this = &unk_28898CC;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = &unk_28898CC;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = &unk_28898CC;
  *((_DWORD *)this + 9) = &unk_28898CC;
  *((_DWORD *)this + 10) = &unk_28898CC;
  *((_DWORD *)this + 11) = &unk_28898CC;
  *((_DWORD *)this + 12) = 1;
  *((_BYTE *)this + 52) = 0;
  sub_21E8190((void **)this, "profanity_filter.title", (_BYTE *)0x16);
  sub_21E8190((void **)v1 + 4, "profanity_filter.msg", (_BYTE *)0x14);
  sub_21E8190((void **)v1 + 10, "gui.close", (_BYTE *)9);
  result = 2;
  *((_DWORD *)v1 + 12) = 2;
  return result;
}


_DWORD *__fastcall Util::getFilesizeString(Util *this, int a2, unsigned __int64 a3)
{
  int *v3; // r5@1
  unsigned int v4; // r7@1
  unsigned int v5; // r4@1
  char *v11; // r1@1
  void *v13; // r0@2
  void *v14; // r0@3
  int v15; // r0@4
  void *v16; // r0@7
  void *v17; // r0@8
  void *v18; // r0@10
  void *v19; // r0@11
  char *v21; // r0@14
  int *v22; // r0@14
  Localization *v23; // r0@14
  _BYTE *v24; // r4@15
  int v25; // r0@17
  int i; // r0@20
  char *v27; // r0@24
  void **v28; // r0@25
  void *v29; // r0@25
  unsigned int *v31; // r2@27
  signed int v32; // r1@29
  unsigned int *v33; // r2@31
  signed int v34; // r1@33
  unsigned int *v35; // r2@35
  signed int v36; // r1@37
  unsigned int *v37; // r2@39
  signed int v38; // r1@41
  unsigned int *v39; // r2@51
  signed int v40; // r1@53
  unsigned int *v41; // r2@55
  signed int v42; // r1@57
  unsigned int *v43; // r2@59
  signed int v44; // r1@61
  unsigned int *v45; // r2@63
  signed int v46; // r1@65
  int v47; // [sp+4h] [bp-104h]@6
  int v48; // [sp+8h] [bp-100h]@6
  int v49; // [sp+10h] [bp-F8h]@7
  int v50; // [sp+14h] [bp-F4h]@7
  int v51; // [sp+1Ch] [bp-ECh]@2
  int v52; // [sp+20h] [bp-E8h]@2
  _DWORD *v53; // [sp+24h] [bp-E4h]@1
  void **v54; // [sp+28h] [bp-E0h]@1
  int v55; // [sp+2Ch] [bp-DCh]@26
  void **v56; // [sp+30h] [bp-D8h]@1
  void **v57; // [sp+34h] [bp-D4h]@14
  int v58; // [sp+50h] [bp-B8h]@26
  int v59; // [sp+58h] [bp-B0h]@25
  int v60; // [sp+5Ch] [bp-ACh]@26

  v3 = (int *)this;
  v4 = HIDWORD(a3);
  v5 = a3;
  sub_21D103C((int)&v54, 24);
  *(_DWORD *)((char *)*(v56 - 3) + (_DWORD)&v56 + 12) = *(_DWORD *)((char *)*(v56 - 3) + (_DWORD)&v56 + 12) & 0xFFFFFEFB | 4;
  _R0 = _aeabi_ul2f(v5, v4);
  __asm { VMOV            S16, R0 }
  v11 = (char *)*(v56 - 3) + (_DWORD)&v56;
  v53 = &unk_28898CC;
  *((_DWORD *)v11 + 3) |= 0x400u;
  if ( (v5 >> 20) | (v4 << 12) | (v4 >> 20) )
  {
    __asm
    {
      VLDR            S0, =1.0737e9
      VCMPE.F32       S16, S0
      VMRS            APSR_nzcv, FPSCR
    }
    if ( _NF ^ _VF )
      sub_21E94B4((void **)&v49, "playscreen.fileSize.MB");
      I18n::get(&v50, (int **)&v49);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)&v53,
        &v50);
      v16 = (void *)(v50 - 12);
      if ( (int *)(v50 - 12) != &dword_28898C0 )
      {
        v39 = (unsigned int *)(v50 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
          {
            v40 = __ldrex(v39);
            _R3 = v40 - 1;
          }
          while ( __strex(v40 - 1, v39) );
        }
        else
          v40 = *v39;
          _R3 = *v39 - 1;
          *v39 = _R3;
        if ( v40 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
      }
      v17 = (void *)(v49 - 12);
      if ( (int *)(v49 - 12) != &dword_28898C0 )
        v41 = (unsigned int *)(v49 - 4);
            v42 = __ldrex(v41);
            _R3 = v42 - 1;
          while ( __strex(v42 - 1, v41) );
          v42 = *v41;
          _R3 = *v41 - 1;
          *v41 = _R3;
        if ( v42 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      __asm { VLDR            S0, =9.5367e-7 }
    else
      sub_21E94B4((void **)&v47, "playscreen.fileSize.GB");
      I18n::get(&v48, (int **)&v47);
        &v48);
      v18 = (void *)(v48 - 12);
      if ( (int *)(v48 - 12) != &dword_28898C0 )
        v43 = (unsigned int *)(v48 - 4);
            v44 = __ldrex(v43);
            _R3 = v44 - 1;
          while ( __strex(v44 - 1, v43) );
          v44 = *v43;
          _R3 = *v43 - 1;
          *v43 = _R3;
        if ( v44 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
      v19 = (void *)(v47 - 12);
      if ( (int *)(v47 - 12) != &dword_28898C0 )
        v45 = (unsigned int *)(v47 - 4);
            v46 = __ldrex(v45);
            _R3 = v46 - 1;
          while ( __strex(v46 - 1, v45) );
          v46 = *v45;
          _R3 = *v45 - 1;
          *v45 = _R3;
        if ( v46 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      __asm { VLDR            S0, =9.3132e-10 }
    __asm { VMUL.F32        S0, S16, S0 }
    v15 = 1;
  }
  else
    sub_21E94B4((void **)&v51, "playscreen.fileSize.MB");
    I18n::get(&v52, (int **)&v51);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v53,
      &v52);
    v13 = (void *)(v52 - 12);
    if ( (int *)(v52 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v52 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v36 = __ldrex(v35);
          _R3 = v36 - 1;
        while ( __strex(v36 - 1, v35) );
      else
        v36 = *v35;
        _R3 = *v35 - 1;
        *v35 = _R3;
      if ( v36 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    v14 = (void *)(v51 - 12);
    if ( (int *)(v51 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v51 - 4);
          v38 = __ldrex(v37);
          _R3 = v38 - 1;
        while ( __strex(v38 - 1, v37) );
        v38 = *v37;
        _R3 = *v37 - 1;
        *v37 = _R3;
      if ( v38 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
    __asm { VLDR            S0, =9.5367e-7 }
    v15 = 2;
  __asm
    VCVT.F64.F32    D0, S0
    VMOV            R2, R3, D0
  *(_DWORD *)((char *)*(v56 - 3) + (_DWORD)&v56 + 4) = v15;
  v21 = sub_21CC9F0((char *)&v56);
  sub_21CBF38(v21, (int)v53, *(v53 - 3));
  v22 = sub_21CFED8(v3, (int)&v57);
  v23 = (Localization *)I18n::getCurrentLanguage((I18n *)v22);
  if ( Localization::getCommaSeperator(v23) == 1 )
    v24 = (_BYTE *)*v3;
    if ( *(_DWORD *)(*v3 - 4) <= -1 )
      v25 = *v3;
      sub_21E8010((const void **)v3);
      v24 = (_BYTE *)*v3;
      if ( *(_DWORD *)(*v3 - 4) < 0 )
        v25 = *v3;
        sub_21E8010((const void **)v3);
    for ( i = v25 + *(_DWORD *)(v25 - 12); (_BYTE *)i != v24; ++v24 )
      if ( *v24 == 46 )
        *v24 = 44;
  v27 = (char *)(v53 - 3);
  if ( v53 - 3 != &dword_28898C0 )
    v31 = v53 - 1;
    if ( &pthread_create )
      __dmb();
      do
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = off_26D3F84;
  v54 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v54) = off_26D3F80[0];
  v56 = v28;
  v57 = &off_27734E8;
  v29 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v59 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  v57 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v58);
  v54 = (void **)off_26D3F68;
  *(void ***)((char *)&v54 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v55 = 0;
  return sub_21B6560(&v60);
}


int *__fastcall Util::fromHex(int *a1, _DWORD *a2)
{
  _DWORD *v2; // r8@1
  int *v3; // r4@1
  unsigned int v4; // r0@1
  int *result; // r0@2
  unsigned int v6; // r6@3
  unsigned int v7; // r7@4
  unsigned int v8; // r5@4

  v2 = a2;
  v3 = a1;
  v4 = *(_DWORD *)(*a2 - 12);
  if ( v4 & 1 )
  {
    result = sub_21E8AF4(v3, (int *)&Util::EMPTY_STRING);
  }
  else
    *v3 = (int)&unk_28898CC;
    sub_21E849C((char *)v3, v4 >> 1, 0);
    result = (int *)*v3;
    if ( *(_DWORD *)(*v3 - 12) )
    {
      v6 = 0;
      do
      {
        v7 = *(_BYTE *)(*v2 + 2 * v6);
        v8 = *(_BYTE *)(*v2 + 2 * v6 + 1);
        if ( *(result - 1) >= 0 )
        {
          sub_21E8010((const void **)v3);
          result = (int *)*v3;
        }
        *((_BYTE *)result + v6++) = ((v8 & 0xF) + (v8 >> 6) + 8 * (v8 >> 6)) | 16 * (v7 + (v7 >> 6) + 8 * (v7 >> 6));
        result = (int *)*v3;
      }
      while ( v6 < *(_DWORD *)(*v3 - 12) );
    }
  return result;
}


void *__fastcall Util::safeString(Util *this, const char *a2)
{
  void *result; // r0@2

  if ( a2 )
    result = sub_21E94B4((void **)this, a2);
  else
    result = sub_21E8AF4((int *)this, (int *)&Util::EMPTY_STRING);
  return result;
}


int __fastcall Util::ProfanityFilter::findProfanity(I18n *a1, int a2, unsigned __int64 *a3)
{
  unsigned __int64 *v3; // r7@1
  int v4; // r8@1
  I18n *v5; // r9@1
  int v6; // r0@1
  const void **v7; // r4@1
  const void **v8; // r6@1
  unsigned int v9; // r5@2
  unsigned int v10; // r7@2
  size_t v11; // r2@2
  int v12; // r0@4
  int v13; // r9@14
  int *v14; // r5@14
  int *v15; // r7@14
  unsigned int *v16; // r2@16
  signed int v17; // r1@18
  int *v18; // r0@24
  char *v19; // r0@29
  unsigned int *v21; // r2@31
  signed int v22; // r1@33
  int *v23; // [sp+4h] [bp-34h]@1
  int *v24; // [sp+8h] [bp-30h]@1
  int *v25; // [sp+Ch] [bp-2Ch]@1
  void *s2; // [sp+10h] [bp-28h]@1

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = I18n::getCurrentLanguage(a1);
  Localization::getFullLanguageCode((Localization *)&s2, v6);
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v7 = (const void **)(*v3 >> 32);
  v8 = (const void **)*v3;
  if ( v8 == v7 )
    goto LABEL_41;
  do
  {
    v9 = *((_DWORD *)*v8 - 3);
    v10 = *((_DWORD *)s2 - 3);
    v11 = *((_DWORD *)*v8 - 3);
    if ( v9 > v10 )
      v11 = *((_DWORD *)s2 - 3);
    v12 = memcmp(*v8, s2, v11);
    if ( !v12 )
      v12 = v9 - v10;
    if ( v12 )
    {
      if ( v24 == v25 )
      {
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
          (unsigned __int64 *)&v23,
          (int *)v8);
      }
      else
        sub_21E8AF4(v24, (int *)v8);
        ++v24;
    }
    ++v8;
  }
  while ( v7 != v8 );
  if ( v24 == v25 )
LABEL_41:
    std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
      (unsigned __int64 *)&v23,
      (int *)&s2);
  else
    sub_21E8AF4(v24, (int *)&s2);
    ++v24;
  v13 = (*(int (__fastcall **)(I18n *, int, int **))(*(_DWORD *)v5 + 8))(v5, v4, &v23);
  v15 = v24;
  v14 = v23;
  if ( v23 != v24 )
    do
      v18 = (int *)(*v14 - 12);
      if ( v18 != &dword_28898C0 )
        v16 = (unsigned int *)(*v14 - 4);
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
          j_j_j_j__ZdlPv_9(v18);
      ++v14;
    while ( v14 != v15 );
    v14 = v23;
  if ( v14 )
    operator delete(v14);
  v19 = (char *)s2 - 12;
  if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)((char *)s2 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  return v13;
}


_DWORD *__fastcall Util::split(int a1, unsigned int *a2, unsigned __int64 *a3, int a4)
{
  int v4; // r11@1
  int *v5; // r5@1
  int v6; // r6@1
  _DWORD *v7; // r0@4
  _DWORD *v8; // r9@4
  unsigned int v9; // r11@5
  unsigned int *v10; // r2@6
  signed int v11; // r1@8
  unsigned int *v12; // r2@14
  signed int v13; // r1@16
  _BYTE *v14; // r1@24
  __int64 v15; // r2@24
  char v16; // r5@24
  int v17; // r6@24
  _DWORD *v18; // r0@27
  _DWORD *v19; // r2@29
  const void **v20; // r6@29
  const void **v21; // r8@29
  unsigned int v22; // r0@30
  unsigned int v23; // r2@30
  unsigned int v24; // r3@33
  int v25; // r0@33
  int v26; // r2@33
  void *v27; // r0@34
  unsigned int *v28; // r2@37
  signed int v29; // r1@39
  unsigned int v30; // r0@45
  unsigned int v31; // r1@46
  __int64 v32; // kr08_8@47
  char *v33; // r1@48
  char *v34; // r0@50
  __int64 v35; // r0@52
  char *v36; // r0@56
  __int64 v37; // r0@60
  char *v38; // r0@63
  unsigned int *v39; // r2@66
  signed int v40; // r1@68
  int v41; // r2@75
  char *v42; // r0@77
  int v43; // r0@77
  char *v44; // r0@78
  void **v45; // r0@79
  void *v46; // r0@79
  unsigned int *v48; // r2@81
  signed int v49; // r1@83
  unsigned int *v50; // r2@85
  signed int v51; // r1@87
  int v52; // [sp+Ch] [bp-104h]@1
  int v53; // [sp+10h] [bp-100h]@1
  unsigned __int64 *v54; // [sp+14h] [bp-FCh]@1
  char *v55; // [sp+18h] [bp-F8h]@47
  int v56; // [sp+1Ch] [bp-F4h]@34
  _DWORD *v57; // [sp+20h] [bp-F0h]@29
  _BYTE *v58; // [sp+24h] [bp-ECh]@4
  _DWORD *v59; // [sp+28h] [bp-E8h]@1
  void **v60; // [sp+2Ch] [bp-E4h]@1
  int v61; // [sp+30h] [bp-E0h]@80
  void **v62; // [sp+34h] [bp-DCh]@79
  void **v63; // [sp+38h] [bp-D8h]@79
  int v64; // [sp+5Ch] [bp-B4h]@79

  v4 = a1;
  v52 = a4;
  v54 = a3;
  v53 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v5 = (int *)&v60;
  sub_21D12A4((int)&v60, a2, 24);
  v59 = &unk_28898CC;
  v6 = *(_DWORD *)((char *)*(v60 - 3) + (_DWORD)&v60 + 124);
  if ( !v6 )
LABEL_2:
    sub_21E5824();
  while ( 1 )
  {
    if ( *(_BYTE *)(v6 + 28) )
    {
      v41 = *(_BYTE *)(v6 + 39);
    }
    else
      sub_21B50F0(v6);
      v41 = (*(int (__fastcall **)(int, signed int))(*(_DWORD *)v6 + 24))(v6, 10);
    v42 = sub_21BBAF0((char *)v5, (const void **)&v59, v41);
    v43 = (int)&v42[*(_DWORD *)(*(_DWORD *)v42 - 12)];
    if ( !v43 || *(_DWORD *)(v43 + 20) & 5 )
      break;
    v7 = v59;
    v8 = &unk_28898CC;
    v58 = &unk_28898CC;
    if ( *(v59 - 3) )
      v9 = 0;
      do
      {
        if ( *(v7 - 1) >= 0 )
        {
          sub_21E8010((const void **)&v59);
          v7 = v59;
        }
        v14 = v58;
        v15 = *(_QWORD *)(v58 - 12);
        v16 = *((_BYTE *)v7 + v9);
        v17 = v15 + 1;
        if ( (unsigned int)(v15 + 1) > HIDWORD(v15) || *((_DWORD *)v58 - 1) >= 1 )
          sub_21E6FCC((const void **)&v58, v15 + 1);
          v14 = v58;
          LODWORD(v15) = *((_DWORD *)v58 - 3);
        v14[v15] = v16;
        v18 = v58;
        if ( (int *)(v58 - 12) != &dword_28898C0 )
          *((_DWORD *)v58 - 1) = 0;
          *(v18 - 3) = v17;
          *((_BYTE *)v18 + v17) = byte_26C67B8[0];
        v19 = &unk_28898CC;
        v57 = &unk_28898CC;
        v20 = (const void **)(*v54 >> 32);
        v21 = (const void **)*v54;
        if ( v21 != v20 )
          do
          {
            v22 = *((_DWORD *)v58 - 3);
            v23 = *((_DWORD *)*v21 - 3);
            if ( v22 >= v23 && v23 > *(v57 - 3) && !sub_21E7CB0((int *)&v58, v22 - v23, v23, v21) )
            {
              v24 = *((_DWORD *)v58 - 3);
              v25 = *((_DWORD *)*v21 - 3);
              v26 = v24 - v25;
              if ( v24 < v24 - v25 )
                sub_21E5B04(
                  "%s: __pos (which is %zu) > this->size() (which is %zu)",
                  (int)"basic_string::substr",
                  v26,
                  v24);
              sub_21E9040((void **)&v56, (int *)&v58, v26, 0xFFFFFFFF);
              xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                (int *)&v57,
                &v56);
              v27 = (void *)(v56 - 12);
              if ( (int *)(v56 - 12) != &dword_28898C0 )
              {
                v28 = (unsigned int *)(v56 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v29 = __ldrex(v28);
                  while ( __strex(v29 - 1, v28) );
                }
                else
                  v29 = (*v28)--;
                if ( v29 <= 0 )
                  j_j_j_j__ZdlPv_9(v27);
              }
            }
            ++v21;
          }
          while ( v21 != v20 );
          v19 = v57;
        v30 = *(v19 - 3);
        if ( v30 )
          v31 = *((_DWORD *)v58 - 3);
          if ( v31 > v30 )
            sub_21E9040((void **)&v55, (int *)&v58, 0, v31 - v30);
            v32 = *(_QWORD *)(v53 + 4);
            if ( (_DWORD)v32 == HIDWORD(v32) )
              std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
                (unsigned __int64 *)v53,
                &v55);
              v33 = v55;
            else
              *(_DWORD *)v32 = v55;
              v33 = (char *)&unk_28898CC;
              v55 = (char *)&unk_28898CC;
              *(_DWORD *)(v53 + 4) = v32 + 4;
            v34 = v33 - 12;
            if ( (int *)(v33 - 12) != &dword_28898C0 )
              v12 = (unsigned int *)(v33 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v13 = __ldrex(v12);
                while ( __strex(v13 - 1, v12) );
              else
                v13 = (*v12)--;
              if ( v13 <= 0 )
                j_j_j_j__ZdlPv_9(v34);
          if ( v52 == 1 )
            v35 = *(_QWORD *)(v53 + 4);
            if ( (_DWORD)v35 == HIDWORD(v35) )
              std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
                (int *)&v57);
              *(_DWORD *)(v53 + 4) = sub_21E8AF4((int *)v35, (int *)&v57) + 1;
          sub_21E7EE0((const void **)&v58, 0, *((_BYTE **)v58 - 3), 0);
        v36 = (char *)(v19 - 3);
        if ( v19 - 3 != &dword_28898C0 )
          v10 = v19 - 1;
          if ( &pthread_create )
            __dmb();
            do
              v11 = __ldrex(v10);
            while ( __strex(v11 - 1, v10) );
          else
            v11 = (*v10)--;
          if ( v11 <= 0 )
            j_j_j_j__ZdlPv_9(v36);
        v7 = v59;
        ++v9;
      }
      while ( v9 < *(v59 - 3) );
      v8 = v58;
      v5 = (int *)&v60;
      v4 = v53;
    if ( *(v8 - 3) )
      v37 = *(_QWORD *)(v4 + 4);
      if ( (_DWORD)v37 == HIDWORD(v37) )
        std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
          (unsigned __int64 *)v4,
          (int *)&v58);
      else
        *(_DWORD *)(v4 + 4) = sub_21E8AF4((int *)v37, (int *)&v58) + 1;
    v38 = v58 - 12;
    if ( (int *)(v58 - 12) != &dword_28898C0 )
      v39 = (unsigned int *)(v58 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
        v40 = (*v39)--;
      if ( v40 <= 0 )
        j_j_j_j__ZdlPv_9(v38);
    v6 = *(int *)((char *)v5 + (_DWORD)*(v60 - 3) + 124);
    if ( !v6 )
      goto LABEL_2;
  }
  v44 = (char *)(v59 - 3);
  if ( v59 - 3 != &dword_28898C0 )
    v48 = v59 - 1;
    if ( &pthread_create )
      __dmb();
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  v45 = off_26D3F84;
  v60 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)v5) = off_26D3F80[0];
  v62 = v45;
  v63 = &off_27734E8;
  v46 = (void *)(v64 - 12);
  if ( (int *)(v64 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v64 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v46);
  v63 = &off_26D40A8;
  sub_21C802C((unsigned int **)v5 + 10);
  v60 = (void **)off_26D3F68;
  *(int *)((char *)v5 + *((_DWORD *)off_26D3F68 - 3)) = (int)off_26D3F6C;
  v61 = 0;
  return sub_21B6560(v5 + 13);
}


void Util::format(Util *this, const char *a2, __int64 a3, ...)
{
  Util::format(this, a2, a3);
}
