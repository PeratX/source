

void **__fastcall Localization::getLanguageCode(Localization *this, int a2)
{
  int *v2; // r5@1
  void **v3; // r4@1
  unsigned int v4; // r0@1

  v2 = (int *)(a2 + 4);
  v3 = (void **)this;
  v4 = sub_21E7904((_DWORD *)(a2 + 4), "_", 0, 1u);
  return sub_21E9040(v3, v2, 0, v4);
}


int *__fastcall Localization::_getSimple(int a1, int a2, const void **a3)
{
  int v3; // r9@1
  int v4; // r0@1
  int v5; // r10@1
  const void **v6; // r8@1
  int v7; // r5@1
  const void *v8; // r6@2
  int v9; // r11@2
  size_t v10; // r4@2
  _DWORD *v11; // r0@4
  size_t v12; // r7@4
  size_t v13; // r2@4
  int v14; // r0@6
  _DWORD *v15; // r1@13
  unsigned int v16; // r4@13
  unsigned int v17; // r6@13
  size_t v18; // r2@13
  int v19; // r0@15
  int *result; // r0@20

  v3 = a1;
  v4 = *(_DWORD *)(a2 + 16);
  v5 = a2 + 12;
  v6 = a3;
  v7 = a2 + 12;
  if ( v4 )
  {
    v8 = *a3;
    v9 = a2 + 12;
    v10 = *((_DWORD *)*a3 - 3);
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
  v16 = *((_DWORD *)*v6 - 3);
  v17 = *(v15 - 3);
  v18 = *((_DWORD *)*v6 - 3);
  if ( v16 > v17 )
    v18 = *(v15 - 3);
  v19 = memcmp(*v6, v15, v18);
  if ( !v19 )
    v19 = v16 - v17;
  if ( v19 < 0 )
    v7 = v5;
LABEL_24:
    *(_BYTE *)v3 = 0;
    result = (int *)&unk_28898CC;
    *(_DWORD *)(v3 + 4) = &unk_28898CC;
  else
    *(_BYTE *)v3 = 1;
    result = sub_21E8AF4((int *)(v3 + 4), (int *)(v7 + 20));
  return result;
}


char *__fastcall Localization::_getStrings(Localization *this)
{
  return (char *)this + 8;
}


char *__fastcall Localization::_replaceTokens(int a1, int *a2, __int64 *a3)
{
  int *v3; // r5@1
  __int64 *v4; // r10@1
  unsigned int v5; // r7@1
  unsigned int v6; // r0@1
  size_t v7; // r6@1
  unsigned int v8; // r3@6
  _BYTE *v9; // r2@7
  unsigned int v10; // r7@9
  unsigned int v11; // r0@9
  unsigned int v12; // r7@14
  unsigned int v13; // r0@14
  size_t v14; // r6@14
  int v15; // r0@19
  unsigned int v16; // r4@20
  unsigned int v17; // r3@20
  _BYTE *v18; // r2@21
  __int64 v19; // r0@23
  unsigned int v20; // r7@25
  unsigned int v21; // r0@25
  bool v22; // zf@27
  int v23; // r7@30
  char *result; // r0@32
  char *v25; // r6@32
  int v26; // r4@33
  int v27; // r1@35
  unsigned int v28; // r3@38
  _BYTE *v29; // r2@39
  unsigned int v30; // r4@39
  __int64 v31; // r0@41

  v3 = a2;
  v4 = a3;
  v5 = sub_21E76A0(a2, "$s", 0, 2u);
  v6 = sub_21E76A0(v3, "$d", 0, 2u);
  v7 = v5;
  if ( v6 < v5 )
    v7 = v6;
  if ( v6 == -1 )
    v7 = v5;
  while ( v7 != -1 )
  {
    v8 = *(_DWORD *)(*v3 - 12);
    if ( v8 < v7 )
      sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::erase", v7, v8);
    v9 = (_BYTE *)(v8 - v7);
    if ( v8 - v7 > 2 )
      v9 = (_BYTE *)2;
    sub_21E7EE0((const void **)v3, v7, v9, 0);
    v10 = sub_21E76A0(v3, "$s", 0, 2u);
    v11 = sub_21E76A0(v3, "$d", 0, 2u);
    v7 = v10;
    if ( v11 < v10 )
      v7 = v11;
    if ( v11 == -1 )
      v7 = v10;
  }
  v12 = sub_21E76A0(v3, "%s", 0, 2u);
  v13 = sub_21E76A0(v3, "%d", 0, 2u);
  v14 = v12;
  if ( v13 < v12 )
    v14 = v13;
  if ( v13 == -1 )
    v14 = v12;
  if ( v14 == -1 )
    v23 = -49;
  else
    v15 = 0;
    do
    {
      v16 = v15;
      v17 = *(_DWORD *)(*v3 - 12);
      if ( v17 < v14 )
        sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::erase", v14, v17);
      v18 = (_BYTE *)(v17 - v14);
      if ( v17 - v14 > 2 )
        v18 = (_BYTE *)2;
      sub_21E7EE0((const void **)v3, v14, v18, 0);
      v19 = *v4;
      if ( v16 < (HIDWORD(v19) - (signed int)v19) >> 2 )
        sub_21E82D8((const void **)v3, v14, *(_DWORD *)(v19 + 4 * v16), *(_BYTE **)(*(_DWORD *)(v19 + 4 * v16) - 12));
      v20 = sub_21E76A0(v3, "%s", 0, 2u);
      v21 = sub_21E76A0(v3, "%d", 0, 2u);
      v14 = v20;
      if ( v21 < v20 )
        v14 = v21;
      v22 = v21 == -1;
      v15 = v16 + 1;
      if ( v22 )
        v14 = v20;
    }
    while ( v14 != -1 );
    v23 = v16 - 48;
  while ( 1 )
    result = sub_21E77E4(v3, 37, 0);
    v25 = result;
    if ( result == (char *)-1 )
      break;
    result = (char *)*v3;
    v26 = (int)(v25 + 1);
    if ( *(_DWORD *)(*v3 - 4) >= 0 )
      sub_21E8010((const void **)v3);
      result = (char *)*v3;
    v27 = (unsigned __int8)result[v26];
    if ( (unsigned int)(v27 - 48) > 9 )
    if ( *((_DWORD *)result - 1) >= 0 )
      v27 = *(_BYTE *)(*v3 + v26);
    v28 = *((_DWORD *)result - 3);
    if ( v28 < (unsigned int)v25 )
      sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::erase", (int)v25, v28);
    v29 = (_BYTE *)(v28 - (_DWORD)v25);
    v30 = v23 + v27;
    if ( v28 - (unsigned int)v25 > 2 )
      v29 = (_BYTE *)2;
    sub_21E7EE0((const void **)v3, (size_t)v25, v29, 0);
    v31 = *v4;
    if ( v30 < (HIDWORD(v31) - (signed int)v31) >> 2 )
      sub_21E82D8(
        (const void **)v3,
        (size_t)v25,
        *(_DWORD *)(v31 + 4 * v30),
        *(_BYTE **)(*(_DWORD *)(v31 + 4 * v30) - 12));
  return result;
}


int __fastcall Localization::Localization(int a1, int *a2)
{
  int v2; // r5@1
  int *v3; // r4@1
  int v4; // r0@1

  v2 = a1;
  *(_BYTE *)a1 = 0;
  v3 = a2;
  sub_21E8AF4((int *)(a1 + 4), a2);
  *(_DWORD *)(v2 + 12) = 0;
  v4 = v2 + 12;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 12) = 0;
  *(_DWORD *)(v4 + 16) = 0;
  *(_DWORD *)(v4 + 8) = v4;
  *(_DWORD *)(v4 + 12) = v4;
  *(_BYTE *)v2 = Localization::_isCommaSeperatedLanguage((const void **)v3);
  return v2;
}


void __fastcall Localization::_parseFormattedString(int a1, int a2, int *a3)
{
  int *v3; // r5@1
  char v4; // r2@1
  unsigned int v5; // r10@1
  int v6; // r0@1
  unsigned int *v7; // r2@2
  signed int v8; // r1@4
  int v9; // r8@10
  unsigned int v10; // r0@12
  bool v11; // cf@12
  _BYTE *v12; // r0@17
  int v13; // r1@17 OVERLAPPED
  int v14; // r4@17
  unsigned int v15; // r2@17
  _DWORD *v16; // r0@20
  _BYTE *v17; // r0@26
  int v18; // r1@26 OVERLAPPED
  int v19; // r4@26
  unsigned int v20; // r2@26
  _DWORD *v21; // r0@29
  void *v22; // r0@34
  _BYTE *v23; // r0@36
  int v24; // r1@36 OVERLAPPED
  int v25; // r11@36
  unsigned int v26; // r2@36
  _DWORD *v27; // r0@39
  char *v28; // r0@44
  char *v29; // r0@45
  unsigned int *v30; // r2@47
  signed int v31; // r1@49
  unsigned int *v32; // r2@51
  signed int v33; // r1@53
  int v34; // [sp+8h] [bp-18h]@1
  int v35; // [sp+14h] [bp-Ch]@1
  char v36; // [sp+18h] [bp-8h]@31
  int v37; // [sp+1Ch] [bp-4h]@2
  _BYTE *v38; // [sp+20h] [bp+0h]@1
  _BYTE *v39; // [sp+24h] [bp+4h]@1

  v34 = a1;
  v3 = a3;
  v35 = a2;
  v4 = 0;
  v5 = 0;
  v39 = &unk_28898CC;
  v38 = &unk_28898CC;
  v6 = *v3;
  do
  {
    v9 = *(_BYTE *)(v6 + v5);
    if ( v4 & 1 )
    {
      if ( (unsigned __int8)(v9 - 48) < 0xAu )
        goto LABEL_65;
      v10 = (unsigned __int8)((v9 & 0xDF) - 65);
      v11 = v10 >= 0x1A;
      if ( v10 >= 0x1A )
        v11 = (unsigned int)(v9 - 45) >= 2;
      if ( v11 && v9 != 95 )
      {
        Localization::_getSimple((int)&v36, v35, (const void **)&v38);
        if ( v36 )
          sub_21E72F0((const void **)&v39, (const void **)&v37);
        else
          sub_21E72F0((const void **)&v39, (const void **)&v38);
        v22 = (void *)(v37 - 12);
        if ( (int *)(v37 - 12) != &dword_28898C0 )
        {
          v7 = (unsigned int *)(v37 - 4);
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
            j_j_j_j__ZdlPv_9(v22);
        }
        if ( v9 )
          v23 = v39;
          *(_QWORD *)&v24 = *(_QWORD *)(v39 - 12);
          v25 = v24 + 1;
          if ( v24 + 1 > v26 || *((_DWORD *)v39 - 1) >= 1 )
            sub_21E6FCC((const void **)&v39, v24 + 1);
            v23 = v39;
            v24 = *((_DWORD *)v39 - 3);
          v23[v24] = v9;
          v4 = 0;
          v27 = v39;
          if ( (int *)(v39 - 12) != &dword_28898C0 )
            *((_DWORD *)v39 - 1) = 0;
            *(v27 - 3) = v25;
            *((_BYTE *)v27 + v25) = byte_26C67B8[0];
      }
      else
LABEL_65:
        v12 = v38;
        *(_QWORD *)&v13 = *(_QWORD *)(v38 - 12);
        v14 = v13 + 1;
        if ( v13 + 1 > v15 || *((_DWORD *)v38 - 1) >= 1 )
          sub_21E6FCC((const void **)&v38, v13 + 1);
          v12 = v38;
          v13 = *((_DWORD *)v38 - 3);
        v12[v13] = v9;
        v16 = v38;
        if ( (int *)(v38 - 12) == &dword_28898C0 )
          v4 = 1;
          *((_DWORD *)v38 - 1) = 0;
          *(v16 - 3) = v14;
          *((_BYTE *)v16 + v14) = byte_26C67B8[0];
    }
    else if ( *(_BYTE *)(v6 + v5) )
      if ( v9 == 37 )
        sub_21E7EE0((const void **)&v38, 0, *((_BYTE **)v38 - 3), 0);
        v4 = 1;
        v17 = v39;
        *(_QWORD *)&v18 = *(_QWORD *)(v39 - 12);
        v19 = v18 + 1;
        if ( v18 + 1 > v20 || *((_DWORD *)v39 - 1) >= 1 )
          sub_21E6FCC((const void **)&v39, v18 + 1);
          v17 = v39;
          v18 = *((_DWORD *)v39 - 3);
        v17[v18] = v9;
        v4 = 0;
        v21 = v39;
        if ( (int *)(v39 - 12) != &dword_28898C0 )
          *((_DWORD *)v39 - 1) = 0;
          *(v21 - 3) = v19;
          *((_BYTE *)v21 + v19) = byte_26C67B8[0];
    else
      v4 = 0;
    v6 = *v3;
    ++v5;
  }
  while ( v5 <= *(_DWORD *)(*v3 - 12) );
  *(_BYTE *)v34 = 1;
  sub_21E8AF4((int *)(v34 + 4), (int *)&v39);
  v28 = v38 - 12;
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v38 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v31 = __ldrex(v30);
        __strex(v31 - 1, v30);
      while ( &v38 );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = v39 - 12;
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v39 - 4);
        v33 = __ldrex(v32);
        __strex(v33 - 1, v32);
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
}


void __fastcall Localization::loadFromPack(int a1, int a2, int a3, __int64 *a4)
{
  Localization::loadFromPack(a1, a2, a3, a4);
}


void __fastcall Localization::appendTranslations(int a1, int *a2, __int64 *a3, __int64 *a4, int *a5)
{
  int *v5; // r6@1
  __int64 *v6; // r5@1
  __int64 *v7; // r10@1
  int v8; // r1@1
  unsigned int v9; // r2@1
  unsigned int v10; // r11@3
  char *v11; // r1@12
  signed int v12; // r7@13
  int v13; // r0@17
  _BYTE *v14; // r0@20
  int v15; // r1@20 OVERLAPPED
  int v16; // r7@20
  unsigned int v17; // r2@20
  _DWORD *v18; // r0@23
  _BYTE *v19; // r0@25
  int v20; // r1@25 OVERLAPPED
  int v21; // r7@25
  unsigned int v22; // r2@25
  _DWORD *v23; // r0@28
  unsigned int *v24; // r2@32
  signed int v25; // r1@34
  int v26; // r4@41
  _BYTE *v27; // r8@44
  __int64 v28; // kr00_8@46
  signed int v29; // r4@47
  bool v30; // zf@51
  _BYTE *v31; // r0@57
  int v32; // r1@57 OVERLAPPED
  unsigned int v33; // r2@57
  __int64 v34; // kr08_8@65
  signed int v35; // r0@68
  int *v36; // r0@71
  void *v37; // r0@71
  char *v38; // r0@76
  char *v39; // r0@77
  unsigned int *v40; // r2@79
  signed int v41; // r1@81
  unsigned int *v42; // r2@83
  signed int v43; // r1@85
  int v44; // [sp+Ch] [bp-3Ch]@13
  int v45; // [sp+14h] [bp-34h]@32
  _DWORD *v46; // [sp+18h] [bp-30h]@1
  _DWORD *v47; // [sp+1Ch] [bp-2Ch]@1

  v5 = a2;
  v6 = a3;
  v7 = a4;
  v46 = &unk_28898CC;
  v47 = &unk_28898CC;
  v8 = *a2;
  v9 = *(_DWORD *)(*v5 - 12);
  if ( v9 < 3 )
  {
    v10 = 0;
  }
  else if ( *(_BYTE *)v8 == 239 )
    if ( *(_BYTE *)(v8 + 1) == 187 && *(_BYTE *)(v8 + 2) == 191 )
      v10 = 1;
  else
  if ( v10 )
    v10 = 3;
  if ( v10 <= v9 )
    v44 = a1 + 8;
    v12 = 0;
    while ( 1 )
    {
      v26 = *(_BYTE *)(v8 + v10);
      if ( !*(_BYTE *)(v8 + v10) )
      {
LABEL_44:
        v27 = (_BYTE *)*(v47 - 3);
        if ( v27 )
        {
          if ( *(v46 - 3) )
          {
            v28 = *v6;
            if ( HIDWORD(v28) == (_DWORD)v28 )
            {
              v29 = 1;
            }
            else
              v29 = 0;
              if ( std::__find_if<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
                     v28,
                     (const void **)HIDWORD(v28),
                     (const void **)&v47) == (const void **)HIDWORD(v28) )
                v29 = 1;
            v34 = *v7;
            if ( HIDWORD(v34) == (_DWORD)v34 )
              if ( v29 == 1 )
                goto LABEL_71;
              v30 = std::__find_if<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
                      v34,
                      (const void **)HIDWORD(v34),
                      (const void **)&v47) == (const void **)HIDWORD(v34);
              v35 = 0;
              if ( !v30 )
                v35 = 1;
              if ( v29 & v35 )
              {
LABEL_71:
                sub_21E8AF4(&v45, a5);
                sub_21E72F0((const void **)&v45, (const void **)&v47);
                v36 = (int *)std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::operator[](
                               v44,
                               (const void **)&v45);
                xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                  v36,
                  (int *)&v46);
                v37 = (void *)(v45 - 12);
                if ( (int *)(v45 - 12) != &dword_28898C0 )
                {
                  v24 = (unsigned int *)(v45 - 4);
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
                    j_j_j_j__ZdlPv_9(v37);
                }
                v27 = (_BYTE *)*(v47 - 3);
              }
          }
        }
        else
          v27 = 0;
        sub_21E7EE0((const void **)&v47, 0, v27, 0);
        v12 = 0;
        sub_21E7EE0((const void **)&v46, 0, (_BYTE *)*(v46 - 3), 0);
        goto LABEL_74;
      }
      if ( v26 != 13 )
        if ( v26 == 10 )
          goto LABEL_44;
        if ( v12 == 2 )
          if ( v26 == 9 )
            v12 = 3;
            goto LABEL_74;
          if ( v26 != 35 || v10 >= v9 - 1 || (v13 = v10 + 1, *(_BYTE *)(v8 + v10 + 1) != 35) )
            v19 = v46;
            *(_QWORD *)&v20 = *(_QWORD *)(v46 - 3);
            v21 = v20 + 1;
            if ( v20 + 1 > v22 || *(v46 - 1) >= 1 )
              sub_21E6FCC((const void **)&v46, v20 + 1);
              v19 = v46;
              v20 = *(v46 - 3);
            v19[v20] = v26;
            v23 = v46;
            if ( v46 - 3 != &dword_28898C0 )
              *(v46 - 1) = 0;
              *(v23 - 3) = v21;
              *((_BYTE *)v23 + v21) = byte_26C67B8[0];
LABEL_30:
            v12 = 2;
          goto LABEL_18;
        if ( v12 != 1 )
          if ( v12 )
          v30 = v26 == 9;
          v12 = 0;
          if ( v26 != 9 )
            v30 = v26 == 32;
          if ( v30 )
            v31 = v47;
            *(_QWORD *)&v32 = *(_QWORD *)(v47 - 3);
            v16 = v32 + 1;
            if ( v32 + 1 > v33 || *(v47 - 1) >= 1 )
              sub_21E6FCC((const void **)&v47, v32 + 1);
              v31 = v47;
              v32 = *(v47 - 3);
            v31[v32] = v26;
            v18 = v47;
            if ( v47 - 3 == &dword_28898C0 )
              v12 = 1;
              goto LABEL_74;
LABEL_36:
            *(v18 - 1) = 0;
            *(v18 - 3) = v16;
            *((_BYTE *)v18 + v16) = byte_26C67B8[0];
            v12 = 1;
LABEL_18:
          v12 = 3;
          v10 = v13;
          goto LABEL_74;
        if ( v26 == 61 )
          goto LABEL_30;
        v14 = v47;
        *(_QWORD *)&v15 = *(_QWORD *)(v47 - 3);
        v16 = v15 + 1;
        if ( v15 + 1 > v17 || *(v47 - 1) >= 1 )
          sub_21E6FCC((const void **)&v47, v15 + 1);
          v14 = v47;
          v15 = *(v47 - 3);
        v14[v15] = v26;
        v18 = v47;
        if ( v47 - 3 != &dword_28898C0 )
          goto LABEL_36;
        v12 = 1;
LABEL_74:
      v8 = *v5;
      ++v10;
      v9 = *(_DWORD *)(*v5 - 12);
      if ( v10 > v9 )
        v11 = (char *)v46;
        goto LABEL_76;
    }
  v11 = (char *)&unk_28898CC;
LABEL_76:
  v38 = v11 - 12;
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
    else
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v38);
  v39 = (char *)(v47 - 3);
  if ( v47 - 3 != &dword_28898C0 )
    v42 = v47 - 1;
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
}


int __fastcall Localization::appendTranslations(int result, const Localization *a2)
{
  int v2; // r4@1
  char *v3; // r6@1
  int v4; // r5@2
  int *v5; // r0@3

  v2 = *((_DWORD *)a2 + 5);
  v3 = (char *)a2 + 12;
  if ( (const Localization *)v2 != (const Localization *)((char *)a2 + 12) )
  {
    v4 = result + 8;
    do
    {
      v5 = (int *)std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::operator[](
                    v4,
                    (const void **)(v2 + 16));
      EntityInteraction::setInteractText(v5, (int *)(v2 + 20));
      result = sub_21D4820(v2);
      v2 = result;
    }
    while ( (char *)result != v3 );
  }
  return result;
}


void __fastcall Localization::_get(int a1, int a2, int *a3, unsigned __int64 *a4)
{
  int *v4; // r10@0
  int *v5; // r6@1
  int v6; // r5@1
  int v7; // r9@1
  unsigned __int64 *v8; // r7@1
  bool v9; // zf@4
  char *v10; // r0@7
  void *v11; // r0@10
  void *v12; // r0@14
  unsigned int *v13; // r2@22
  signed int v14; // r1@24
  unsigned int *v15; // r2@26
  signed int v16; // r1@28
  unsigned int *v17; // r2@34
  signed int v18; // r1@36
  int *v19; // r4@47
  int *v20; // r6@47
  unsigned int *v21; // r2@49
  signed int v22; // r1@51
  int *v23; // r0@57
  int v24; // [sp+8h] [bp-40h]@10
  char v25; // [sp+Ch] [bp-3Ch]@10
  int v26; // [sp+10h] [bp-38h]@13
  int *v27; // [sp+14h] [bp-34h]@7
  int *v28; // [sp+18h] [bp-30h]@7
  int *i; // [sp+1Ch] [bp-2Ch]@7

  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = a4;
  if ( sub_21E77E4(a3, 37, 0) == (char *)-1 )
    Localization::_getSimple(v7, v6, (const void **)v5);
  else
    Localization::_parseFormattedString(v7, v6, v5);
  v9 = *(_BYTE *)v7 == 0;
  if ( *(_BYTE *)v7 )
  {
    v4 = (int *)(*v8 >> 32);
    v5 = (int *)*v8;
    v9 = v4 == v5;
  }
  if ( !v9 )
    v10 = 0;
    v27 = 0;
    v28 = 0;
    for ( i = 0; v5 != v4; ++v5 )
    {
      if ( *(_BYTE *)*v5 == 37 )
      {
        if ( !*(_DWORD *)(*v5 - 12) )
          sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", 1, 0);
        sub_21E9040((void **)&v24, v5, 1u, 0xFFFFFFFF);
        Localization::_getSimple((int)&v25, v6, (const void **)&v24);
        v11 = (void *)(v24 - 12);
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
            j_j_j_j__ZdlPv_9(v11);
        }
        if ( v25 )
          if ( v28 == i )
            std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
              (unsigned __int64 *)&v27,
              &v26);
            v28 = sub_21E8AF4(v28, &v26) + 1;
          v10 = (char *)(v26 - 12);
          if ( (int *)(v26 - 12) != &dword_28898C0 )
            v15 = (unsigned int *)(v26 - 4);
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
              j_j_j_j__ZdlPv_9(v10);
          continue;
        v12 = (void *)(v26 - 12);
        if ( (int *)(v26 - 12) != &dword_28898C0 )
          v17 = (unsigned int *)(v26 - 4);
              v18 = __ldrex(v17);
            while ( __strex(v18 - 1, v17) );
            v18 = (*v17)--;
          if ( v18 <= 0 )
            j_j_j_j__ZdlPv_9(v12);
      }
      if ( v28 == i )
        v10 = std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
                (unsigned __int64 *)&v27,
                v5);
      else
        v10 = (char *)(sub_21E8AF4(v28, v5) + 1);
        v28 = (int *)v10;
    }
    Localization::_replaceTokens((int)v10, (int *)(v7 + 4), (__int64 *)&v27);
    v20 = v28;
    v19 = v27;
    if ( v27 != v28 )
      do
        v23 = (int *)(*v19 - 12);
        if ( v23 != &dword_28898C0 )
          v21 = (unsigned int *)(*v19 - 4);
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j__ZdlPv_9(v23);
        ++v19;
      while ( v19 != v20 );
      v19 = v27;
    if ( v19 )
      operator delete(v19);
}


signed int __fastcall Localization::_isCommaSeperatedLanguage(const void **a1)
{
  const void **v1; // r4@1
  int v2; // r1@8
  signed int result; // r0@8

  v1 = a1;
  if ( sub_21E7D6C(a1, "de_DE")
    && sub_21E7D6C(v1, "es_ES")
    && sub_21E7D6C(v1, "fr_CA")
    && sub_21E7D6C(v1, "fr_FR")
    && sub_21E7D6C(v1, "it_IT")
    && sub_21E7D6C(v1, "pt_BR")
    && sub_21E7D6C(v1, "pt_PT") )
  {
    v2 = sub_21E7D6C(v1, "ru_RU");
    result = 0;
    if ( !v2 )
      result = 1;
  }
  else
    result = 1;
  return result;
}


int __fastcall Localization::Localization(int a1, int *a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  int *v5; // r9@1
  bool v6; // zf@1
  int v7; // r7@1
  int v8; // r1@4
  _DWORD *v9; // r0@5
  _DWORD *v10; // r2@5
  _DWORD *v11; // r1@6
  _DWORD *v12; // r1@8

  v3 = a1;
  *(_BYTE *)a1 = 0;
  v4 = a3;
  v5 = a2;
  sub_21E8AF4((int *)(a1 + 4), a2);
  v6 = v4 == 0;
  *(_DWORD *)(v3 + 12) = 0;
  v7 = v3 + 12;
  *(_DWORD *)(v7 + 4) = 0;
  *(_DWORD *)(v7 + 8) = 0;
  *(_DWORD *)(v7 + 12) = 0;
  *(_DWORD *)(v7 + 16) = 0;
  *(_DWORD *)(v7 + 8) = v7;
  *(_DWORD *)(v7 + 12) = v7;
  if ( v4 )
    v6 = v3 == v4;
  if ( !v6 )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
      v3 + 8,
      0);
    *(_DWORD *)(v3 + 16) = 0;
    *(_DWORD *)(v3 + 20) = v7;
    *(_DWORD *)(v3 + 24) = v7;
    *(_DWORD *)(v3 + 28) = 0;
    v8 = *(_DWORD *)(v4 + 16);
    if ( v8 )
    {
      v9 = std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_copy(
             v3 + 8,
             v8,
             v3 + 12);
      v10 = v9;
      *(_DWORD *)(v3 + 16) = v9;
      do
      {
        v11 = v10;
        v10 = (_DWORD *)v10[2];
      }
      while ( v10 );
      *(_DWORD *)(v3 + 20) = v11;
        v12 = v9;
        v9 = (_DWORD *)v9[3];
      while ( v9 );
      *(_DWORD *)(v3 + 24) = v12;
      *(_DWORD *)(v3 + 28) = *(_DWORD *)(v4 + 28);
    }
  }
  *(_BYTE *)v3 = Localization::_isCommaSeperatedLanguage((const void **)v5);
  return v3;
}


void __fastcall Localization::loadFromResourcePackManager(int a1, int *a2, __int64 *a3)
{
  Localization::loadFromResourcePackManager(a1, a2, a3);
}


void **__fastcall Localization::getRegionCode(void **a1, int *a2)
{
  int *v2; // r4@1
  void **v3; // r5@1
  char *v4; // r2@1
  unsigned int v5; // r3@1

  v2 = a2;
  v3 = a1;
  v4 = sub_21E77E4(a2, 95, 0) + 1;
  v5 = *(_DWORD *)(*v2 - 12);
  if ( v5 < (unsigned int)v4 )
    sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", (int)v4, v5);
  return sub_21E9040(v3, v2, (unsigned int)v4, 0xFFFFFFFF);
}


void __fastcall Localization::loadFromPack(int a1, int a2, int a3, __int64 *a4)
{
  int v4; // r5@1
  int v5; // r7@1
  __int64 *v6; // r8@1
  int *v7; // r6@1
  int (__fastcall *v8)(int, int *, char **); // r4@1
  int v9; // r7@1
  void *v10; // r0@1
  char *v11; // r0@4
  unsigned int *v12; // r2@6
  signed int v13; // r1@8
  unsigned int *v14; // r2@10
  signed int v15; // r1@12
  __int64 v16; // [sp+8h] [bp-30h]@3
  int v17; // [sp+10h] [bp-28h]@3
  int v18; // [sp+14h] [bp-24h]@1
  char *v19; // [sp+18h] [bp-20h]@1

  v4 = a1;
  v5 = a3;
  v6 = a4;
  v7 = (int *)a2;
  v19 = (char *)&unk_28898CC;
  v8 = *(int (__fastcall **)(int, int *, char **))(*(_DWORD *)a3 + 40);
  Localization::_getLangFilePath((const void **)&v18, a2, (const void **)(a1 + 4));
  v9 = v8(v5, &v18, &v19);
  v10 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v18 - 4);
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
      j_j_j_j__ZdlPv_9(v10);
  }
  if ( v9 == 1 )
    v16 = 0LL;
    v17 = 0;
    Localization::appendTranslations(v4, (int *)&v19, &v16, v6, v7);
  v11 = v19 - 12;
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v19 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
}


void __fastcall Localization::appendTranslations(int a1, int *a2, __int64 *a3, __int64 *a4, int *a5)
{
  Localization::appendTranslations(a1, a2, a3, a4, a5);
}


signed int __fastcall Localization::isFormattedString(int *a1)
{
  signed int v1; // r4@1

  v1 = 0;
  if ( sub_21E77E4(a1, 37, 0) != (char *)-1 )
    v1 = 1;
  return v1;
}


int __fastcall Localization::getCommaSeperator(Localization *this)
{
  return *(_BYTE *)this;
}


void **__fastcall Localization::getLanguageCode(void **a1, int *a2)
{
  int *v2; // r4@1
  void **v3; // r5@1
  unsigned int v4; // r0@1

  v2 = a2;
  v3 = a1;
  v4 = sub_21E7904(a2, "_", 0, 1u);
  return sub_21E9040(v3, v2, 0, v4);
}


signed int __fastcall Localization::getStringIdExists(int a1, const void **a2)
{
  int v2; // r11@1
  const void **v3; // r8@1
  int v4; // r1@1
  int v5; // r9@1
  int v6; // r7@1
  const void *v7; // r5@2
  int v8; // r10@2
  size_t v9; // r4@2
  _DWORD *v10; // r0@4
  size_t v11; // r6@4
  size_t v12; // r2@4
  int v13; // r0@6
  _DWORD *v14; // r1@13
  unsigned int v15; // r4@13
  unsigned int v16; // r5@13
  size_t v17; // r2@13
  int v18; // r0@15
  signed int result; // r0@20

  v2 = a1 + 12;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 16);
  v5 = a1 + 12;
  v6 = a1 + 12;
  if ( v4 )
  {
    v7 = *v3;
    v8 = a1 + 12;
    v9 = *((_DWORD *)*v3 - 3);
    do
    {
      v6 = v4;
      while ( 1 )
      {
        v10 = *(_DWORD **)(v6 + 16);
        v11 = *(v10 - 3);
        v12 = *(v10 - 3);
        if ( v11 > v9 )
          v12 = v9;
        v13 = memcmp(v10, v7, v12);
        if ( !v13 )
          v13 = v11 - v9;
        if ( v13 >= 0 )
          break;
        v6 = *(_DWORD *)(v6 + 12);
        if ( !v6 )
        {
          v6 = v8;
          goto LABEL_12;
        }
      }
      v4 = *(_DWORD *)(v6 + 8);
      v8 = v6;
    }
    while ( v4 );
  }
LABEL_12:
  if ( v6 != v2 )
    v14 = *(_DWORD **)(v6 + 16);
    v15 = *((_DWORD *)*v3 - 3);
    v16 = *(v14 - 3);
    v17 = *((_DWORD *)*v3 - 3);
    if ( v15 > v16 )
      v17 = *(v14 - 3);
    v18 = memcmp(*v3, v14, v17);
    if ( !v18 )
      v18 = v15 - v16;
    if ( v18 < 0 )
      v6 = v2;
    v5 = v6;
  result = 0;
  if ( v5 != v2 )
    result = 1;
  return result;
}


void __fastcall Localization::_getLangFilePath(const void **a1, int a2, const void **a3)
{
  const void **v3; // r4@1
  const void **v4; // r5@1
  const void **v5; // r0@1
  char *v6; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  char *v9; // [sp+0h] [bp-20h]@1

  v3 = a1;
  v4 = a3;
  v9 = (char *)&unk_28898CC;
  sub_21E6FCC((const void **)&v9, *((_DWORD *)*a3 - 3) + 6);
  sub_21E7408((const void **)&v9, "texts/", 6u);
  sub_21E72F0((const void **)&v9, v4);
  v5 = sub_21E7408((const void **)&v9, ".lang", 5u);
  *v3 = *v5;
  *v5 = &unk_28898CC;
  v6 = v9 - 12;
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


_BOOL4 __fastcall Localization::get(int a1, int *a2, int *a3, unsigned __int64 *a4)
{
  int *v4; // r5@1
  int *v5; // r4@1
  int v6; // r4@3
  void *v7; // r0@3
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  unsigned __int8 v11; // [sp+0h] [bp-20h]@1
  int v12; // [sp+4h] [bp-1Ch]@2

  v4 = a2;
  v5 = a3;
  Localization::_get((int)&v11, a1, a2, a4);
  if ( v11 )
    v4 = &v12;
  EntityInteraction::setInteractText(v5, v4);
  v6 = v11;
  v7 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v12 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  return v6 != 0;
}


void __fastcall Localization::_parseFormattedString(int a1, int a2, int *a3)
{
  Localization::_parseFormattedString(a1, a2, a3);
}


void __fastcall Localization::loadFromResourcePackManager(int a1, int *a2, __int64 *a3)
{
  int *v3; // r6@1
  int v4; // r1@1
  void (__fastcall *v5)(int *, int *, char **); // r4@1
  char *v6; // r0@1
  char *v7; // r0@2
  int v8; // r6@3 OVERLAPPED
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  void *v11; // r0@13
  void *v12; // r5@14
  void *v13; // r11@14
  unsigned int *v14; // r2@16
  signed int v15; // r1@18
  int *v16; // r0@24
  int v17; // r5@30 OVERLAPPED
  unsigned int *v18; // r2@32
  signed int v19; // r1@34
  unsigned int *v20; // r2@36
  signed int v21; // r1@38
  int v22; // r1@48
  void *v23; // r0@48
  int *v24; // r0@49
  unsigned int *v25; // r2@55
  signed int v26; // r1@57
  unsigned int *v27; // r2@59
  signed int v28; // r1@61
  int v29; // [sp+8h] [bp-60h]@3
  int v30; // [sp+Ch] [bp-5Ch]@1
  __int64 *v31; // [sp+10h] [bp-58h]@1
  int v32; // [sp+18h] [bp-50h]@5
  void *v33; // [sp+1Ch] [bp-4Ch]@13
  void *v34; // [sp+20h] [bp-48h]@13
  int v35; // [sp+24h] [bp-44h]@13
  char *v36; // [sp+28h] [bp-40h]@1
  char *v37; // [sp+2Ch] [bp-3Ch]@1
  int v38; // [sp+30h] [bp-38h]@1
  int v39; // [sp+34h] [bp-34h]@1
  int v40; // [sp+38h] [bp-30h]@3

  v3 = a2;
  v31 = a3;
  v4 = *a2;
  v30 = a1;
  v5 = *(void (__fastcall **)(int *, int *, char **))(v4 + 16);
  Localization::_getLangFilePath((const void **)&v36, v4, (const void **)(a1 + 4));
  v37 = v36;
  v36 = (char *)&unk_28898CC;
  v38 = 0;
  v5(&v39, v3, &v37);
  v6 = v37 - 12;
  if ( (int *)(v37 - 12) != &dword_28898C0 )
  {
    v25 = (unsigned int *)(v37 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    }
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  v7 = v36 - 12;
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v36 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = v39;
  v29 = v40;
  if ( v39 != v40 )
    do
      v33 = 0;
      v34 = 0;
      v35 = 0;
      sub_21E94B4((void **)&v32, (const char *)&unk_257BC67);
      Localization::appendTranslations(v30, (int *)(v8 + 4), v31, (__int64 *)&v33, &v32);
      v11 = (void *)(v32 - 12);
      if ( (int *)(v32 - 12) != &dword_28898C0 )
      {
        v9 = (unsigned int *)(v32 - 4);
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
          j_j_j_j__ZdlPv_9(v11);
      }
      v12 = v34;
      v13 = v33;
      if ( v33 != v34 )
        do
          v16 = (int *)(*(_DWORD *)v13 - 12);
          if ( v16 != &dword_28898C0 )
          {
            v14 = (unsigned int *)(*(_DWORD *)v13 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v15 = __ldrex(v14);
              while ( __strex(v15 - 1, v14) );
            }
            else
              v15 = (*v14)--;
            if ( v15 <= 0 )
              j_j_j_j__ZdlPv_9(v16);
          }
          v13 = (char *)v13 + 4;
        while ( v13 != v12 );
        v13 = v33;
      if ( v13 )
        operator delete(v13);
      v8 += 8;
    while ( v8 != v29 );
    *(_QWORD *)(&v8 - 1) = *(_QWORD *)&v39;
    if ( v39 != v40 )
        v22 = *(_DWORD *)(v17 + 4);
        v23 = (void *)(v22 - 12);
        if ( (int *)(v22 - 12) != &dword_28898C0 )
          v18 = (unsigned int *)(v22 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
          else
            v19 = (*v18)--;
          if ( v19 <= 0 )
            j_j_j_j__ZdlPv_9(v23);
        v24 = (int *)(*(_DWORD *)v17 - 12);
        if ( v24 != &dword_28898C0 )
          v20 = (unsigned int *)(*(_DWORD *)v17 - 4);
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
            v21 = (*v20)--;
          if ( v21 <= 0 )
            j_j_j_j__ZdlPv_9(v24);
        v17 += 8;
      while ( v17 != v8 );
      v8 = v39;
  if ( v8 )
    operator delete((void *)v8);
}


void __fastcall Localization::_get(int a1, int a2, int *a3, unsigned __int64 *a4)
{
  Localization::_get(a1, a2, a3, a4);
}


void __fastcall Localization::_getLangFilePath(const void **a1, int a2, const void **a3)
{
  Localization::_getLangFilePath(a1, a2, a3);
}
