

signed int __fastcall SubpackInfoCollection::getSubpackContentTier(SubpackInfoCollection *this, int a2)
{
  __int64 v2; // kr00_8@2
  signed int result; // r0@3

  if ( a2 < 0 || (v2 = *(_QWORD *)this, -1431655765 * ((HIDWORD(v2) - (signed int)v2) >> 2) <= a2) )
    result = -1;
  else
    result = *(_DWORD *)(v2 + 12 * a2 + 8);
  return result;
}


const void **__fastcall SubpackInfoCollection::getDefaultSubpackName(__int64 *a1, int *a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r0@2
  int *v4; // r1@2
  int v5; // r3@2
  int v6; // t1@4
  const void **result; // r0@5

  v2 = *a1;
  if ( (_DWORD)v2 != HIDWORD(v2) )
  {
    v3 = *a2;
    v4 = (int *)(HIDWORD(v2) - 4);
    v5 = -1431655765 * ((HIDWORD(v2) - (signed int)v2) >> 2);
    while ( v5 >= 1 )
    {
      v6 = *v4;
      v4 -= 3;
      --v5;
      if ( v6 <= v3 )
      {
        result = (const void **)(v2 + 12 * HIDWORD(v2) + 4);
        if ( -1431655765 * ((HIDWORD(v2) - (signed int)v2) >> 2) < HIDWORD(v2) + 1 )
          result = &Util::EMPTY_STRING;
        return result;
      }
    }
  }
  return &Util::EMPTY_STRING;
}


int __fastcall SubpackInfoCollection::getDefaultSubpackIndex(__int64 *a1, int *a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r12@2
  int *v4; // r3@2
  signed int v5; // r1@2
  int result; // r0@4
  int v7; // t1@5

  v2 = *a1;
  if ( (_DWORD)v2 != HIDWORD(v2) )
  {
    v3 = *a2;
    v4 = (int *)(HIDWORD(v2) - 4);
    v5 = -1431655765 * ((HIDWORD(v2) - (signed int)v2) >> 2);
    while ( v5 >= 1 )
    {
      result = v5 - 1;
      if ( -1431655765 * ((HIDWORD(v2) - (signed int)v2) >> 2) >= v5 )
      {
        v7 = *v4;
        v4 -= 3;
        --v5;
        if ( v7 > v3 )
          continue;
      }
      return result;
    }
  }
  return -1;
}


signed int __fastcall SubpackInfoCollection::isCompatibleSubpack(__int64 *a1, const void **a2, _DWORD *a3)
{
  __int64 v3; // kr00_8@1
  _DWORD *v4; // r8@1
  const void *v5; // r10@2
  int v6; // r4@2
  const void **v7; // r5@2
  size_t v8; // r6@2

  v3 = *a1;
  v4 = a3;
  if ( (_DWORD)v3 == HIDWORD(v3) )
    return 0;
  v5 = *a2;
  v6 = 0;
  v7 = (const void **)v3;
  v8 = *((_DWORD *)*a2 - 3);
  while ( 1 )
  {
    if ( *((_DWORD *)*v7 - 3) != v8 )
    {
      ++v6;
      goto LABEL_8;
    }
    if ( !memcmp(*v7, v5, v8) )
      break;
    ++v6;
LABEL_8:
    v7 += 3;
    if ( (const void **)HIDWORD(v3) == v7 )
      return 0;
  }
  if ( v6 < 0 || -1431655765 * ((HIDWORD(v3) - (signed int)v3) >> 2) <= v6 || *(_DWORD *)(v3 + 12 * v6 + 8) <= *v4 )
  return 1;
}


  if ( SubpackInfoCollection::isCompatibleSubpack((__int64 *)(v5 + 308), *(_DWORD *)(v5 + 304), &v7) == 1 )
{
  else
    result = sub_21E8AF4((int *)v3, (int *)&Util::EMPTY_STRING);
  return result;
}


char *__fastcall SubpackInfoCollection::addSubpackInfo(int a1, int *a2)
{
  int v2; // r4@1
  int *v3; // r6@1
  __int64 v4; // kr00_8@1
  char *result; // r0@2

  v2 = a1;
  v3 = a2;
  v4 = *(_QWORD *)(a1 + 4);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    result = j_j_j__ZNSt6vectorI11SubpackInfoSaIS0_EE19_M_emplace_back_auxIJRS0_EEEvDpOT_((_QWORD *)a1, (int)a2);
  }
  else
    sub_21E8AF4((int *)v4, a2);
    sub_21E8AF4((int *)(v4 + 4), v3 + 1);
    *(_DWORD *)(v4 + 8) = v3[2];
    result = (char *)(*(_DWORD *)(v2 + 4) + 12);
    *(_DWORD *)(v2 + 4) = result;
  return result;
}


signed int __fastcall SubpackInfoCollection::getSubpackIndex(unsigned __int64 *a1, const void **a2)
{
  const void **v2; // r5@1
  const void **v3; // r7@1
  const void *v4; // r8@2
  int v5; // r4@2
  size_t v6; // r6@2

  v2 = (const void **)(*a1 >> 32);
  v3 = (const void **)*a1;
  if ( v3 != v2 )
  {
    v4 = *a2;
    v5 = 0;
    v6 = *((_DWORD *)*a2 - 3);
    do
    {
      if ( *((_DWORD *)*v3 - 3) == v6 )
      {
        if ( !memcmp(*v3, v4, v6) )
          return v5;
        ++v5;
      }
      else
      v3 += 3;
    }
    while ( v2 != v3 );
  }
  return -1;
}


int __fastcall SubpackInfoCollection::isCompatible(__int64 *a1, int *a2)
{
  __int64 v2; // kr00_8@1
  int *v3; // r4@2
  int v4; // r2@2
  int v5; // r0@2
  int v6; // r3@2
  int v7; // r5@4
  int v8; // r4@4
  int result; // r0@6
  int v10; // r12@8
  _DWORD *v11; // r3@8
  int v12; // r1@8
  bool v13; // zf@9
  bool v14; // nf@9
  unsigned __int8 v15; // vf@9
  signed int v16; // r4@12

  v2 = *a1;
  if ( (_DWORD)v2 == HIDWORD(v2) )
    goto LABEL_19;
  v3 = (int *)(HIDWORD(v2) - 4);
  v4 = -1431655765 * ((HIDWORD(v2) - (signed int)v2) >> 2);
  v5 = *a2;
  v6 = v4 + 1;
  while ( --v6 >= 1 )
  {
    v7 = (int)(v3 - 3);
    v8 = *v3;
    v15 = __OFSUB__(v8, v5);
    v13 = v8 == v5;
    v14 = v8 - v5 < 0;
    v3 = (int *)v7;
    if ( (unsigned __int8)(v14 ^ v15) | v13 )
      return 0;
  }
  if ( HIDWORD(v2) - (signed int)v2 < 1 )
LABEL_19:
    result = 0;
  else
    v10 = *a2;
    v11 = (_DWORD *)(v2 + 8);
    v12 = 0;
    do
    {
      v15 = __OFSUB__(v4, v12);
      v13 = v4 == v12;
      v14 = v4 - v12 < 0;
      if ( v4 > v12 )
      {
        v15 = __OFSUB__(*v11, v10);
        v13 = *v11 == v10;
        v14 = *v11 - v10 < 0;
      }
      if ( (unsigned __int8)(v14 ^ v15) | v13 )
        v16 = 0;
      else
        v16 = 1;
      ++v12;
      result |= v16;
      v11 += 3;
    }
    while ( v12 < v4 );
  return result;
}


const void **__fastcall SubpackInfoCollection::getSubpackName(SubpackInfoCollection *this, int a2)
{
  __int64 v2; // kr00_8@2
  const void **result; // r0@3

  if ( a2 < 0 )
  {
    result = &Util::EMPTY_STRING;
  }
  else
    v2 = *(_QWORD *)this;
    if ( -1431655765 * ((HIDWORD(v2) - (signed int)v2) >> 2) <= a2 )
      result = &Util::EMPTY_STRING;
    else
      result = (const void **)(v2 + 12 * a2 + 4);
  return result;
}


const void **__fastcall SubpackInfoCollection::getSubpackFolderName(SubpackInfoCollection *this, int a2)
{
  __int64 v2; // kr00_8@2
  const void **result; // r0@3

  if ( a2 < 0 )
  {
    result = &Util::EMPTY_STRING;
  }
  else
    v2 = *(_QWORD *)this;
    if ( -1431655765 * ((HIDWORD(v2) - (signed int)v2) >> 2) <= a2 )
      result = &Util::EMPTY_STRING;
    else
      result = (const void **)(v2 + 12 * a2);
  return result;
}


signed int __fastcall SubpackInfoCollection::hasSubpacks(SubpackInfoCollection *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *(_QWORD *)this;
  result = 0;
  if ( (_DWORD)v1 != HIDWORD(v1) )
    result = 1;
  return result;
}


    if ( SubpackInfoCollection::hasSubpacks((SubpackInfoCollection *)v20) )
{
    v22 = *(_DWORD *)(v8 + 116);
  }
  if ( !SubpackInfoCollection::isCompatibleSubpack((__int64 *)v20, v22, &v34) )
  {
    v23 = *(_DWORD *)(v8 + 116);
    goto LABEL_12;
LABEL_9:
  v23 = SubpackInfoCollection::getDefaultSubpackIndex((__int64 *)v20, &v34);
LABEL_12:
  *(_DWORD *)(v21 + 304) = v23;
LABEL_13:
  v24 = v6[1];
  v25 = *(_QWORD *)(v24 + 24);
  if ( (_DWORD)v25 == HIDWORD(v25) )
    v26 = *(void **)(v24 + 20);
    v27 = ((signed int)v25 - (signed int)v26) >> 2;
    if ( !v27 )
      v27 = 1;
    HIDWORD(v25) = v27 + (((signed int)v25 - (signed int)v26) >> 2);
    v29 = v27 + (((signed int)v25 - (signed int)v26) >> 2);
    if ( 0 != HIDWORD(v25) >> 30 )
      v29 = 0x3FFFFFFF;
    if ( v28 < v27 )
    if ( v29 )
    {
      if ( v29 >= 0x40000000 )
        sub_21E57F4();
      v30 = (char *)operator new(4 * v29);
      LODWORD(v25) = *(_QWORD *)(v24 + 20) >> 32;
      v26 = (void *)*(_QWORD *)(v24 + 20);
    }
    else
      v30 = 0;
    v31 = &v30[v25 - (_DWORD)v26];
    *(_DWORD *)&v30[v25 - (_DWORD)v26] = v21;
    if ( 0 != ((signed int)v25 - (signed int)v26) >> 2 )
      _aeabi_memmove4(v30, v26);
    if ( v26 )
      operator delete(v26);
    *(_DWORD *)(v24 + 20) = v30;
    *(_DWORD *)(v24 + 24) = v31 + 4;
    *(_DWORD *)(v24 + 28) = &v30[4 * v29];
  else
    *(_DWORD *)v25 = v21;
    *(_DWORD *)(v24 + 24) += 4;
  v32 = *(_QWORD *)(v9 + 84);
  if ( (_DWORD)v32 == HIDWORD(v32) )
    std::vector<std::unique_ptr<PackContentItem,std::default_delete<PackContentItem>>,std::allocator<std::unique_ptr<PackContentItem,std::default_delete<PackContentItem>>>>::_M_emplace_back_aux<std::unique_ptr<PackContentItem,std::default_delete<PackContentItem>>>(
      (_QWORD *)(v9 + 80),
      (int *)&v36);
    result = v36;
    if ( v36 )
      result = (void *)(*(int (__cdecl **)(void *))(*(_DWORD *)v36 + 4))(v36);
    v36 = 0;
    *(_DWORD *)v32 = v21;
    result = (void *)(v32 + 4);
    *(_DWORD *)(v9 + 84) = result;
  return result;
}


signed int __fastcall SubpackInfoCollection::_isValidSubpackIndex(SubpackInfoCollection *this, int a2)
{
  SubpackInfoCollection *v2; // r2@1
  signed int result; // r0@1

  v2 = this;
  result = 0;
  if ( a2 >= 0 && -1431655765 * ((signed int)((*(_QWORD *)v2 >> 32) - *(_QWORD *)v2) >> 2) > a2 )
    result = 1;
  return result;
}


int __fastcall SubpackInfoCollection::isCompatibleSubpack(__int64 *a1, int a2, _DWORD *a3)
{
  __int64 v3; // kr00_8@2
  int result; // r0@4

  result = 0;
  if ( a2 >= 0 )
  {
    v3 = *a1;
    if ( -1431655765 * ((HIDWORD(v3) - (signed int)v3) >> 2) > a2 && *(_DWORD *)(v3 + 12 * a2 + 8) > *a3 )
      result = 1;
  }
  return result;
}
