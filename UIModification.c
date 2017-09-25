

void __fastcall UIModification::insert(int a1, int a2, int a3, Json::Value *this, int a5, int a6, int a7, int a8, int a9, int a10, int a11, char a12)
{
  Json::Value *v12; // r10@1
  int v13; // r8@1
  __int64 v14; // kr00_8@1
  int v15; // r11@1
  int v16; // r6@1
  int *v17; // r4@1
  int *v18; // r5@2
  void *v19; // r4@2
  void *v20; // r6@2
  unsigned int *v21; // r2@4
  signed int v22; // r1@6
  int *v23; // r0@12
  char *v24; // r4@17
  int v25; // r6@17
  unsigned int *v26; // r2@19
  signed int v27; // r1@21
  int *v28; // r0@27
  void *v29; // r0@32
  void *v30; // r0@33
  void *v31; // r0@34
  __int64 v32; // r0@38
  int v33; // r1@40
  int v34; // r2@40
  int v35; // r0@42
  int v36; // r2@43
  int v37; // r7@43
  int v38; // r3@43
  int v39; // r1@43
  int v40; // r5@44
  bool v41; // zf@45
  _DWORD *v42; // r1@45
  int v43; // r4@48
  bool v44; // zf@48
  int v45; // r1@52
  signed int v46; // r0@58
  signed int v47; // r0@58
  unsigned int v48; // r2@58
  unsigned int v49; // r1@60
  unsigned int v50; // r0@60
  bool v51; // cf@62
  int v52; // r4@65
  char *v53; // r6@65
  __int64 v54; // r0@65
  char *v55; // r2@65
  char *v56; // r2@65
  __int64 v57; // kr18_8@66
  int v58; // r5@66
  int v59; // r5@68
  unsigned int *v60; // r2@71
  signed int v61; // r1@73
  unsigned int *v62; // r2@75
  signed int v63; // r1@77
  unsigned int *v64; // r2@79
  signed int v65; // r1@81
  int v66; // r2@93
  signed int v67; // [sp+0h] [bp-68h]@89
  Json::Value *v68; // [sp+4h] [bp-64h]@89
  char v69; // [sp+8h] [bp-60h]@89
  int v70; // [sp+10h] [bp-58h]@2
  int v71; // [sp+14h] [bp-54h]@2
  int v72; // [sp+18h] [bp-50h]@2
  char *v73; // [sp+1Ch] [bp-4Ch]@2
  char *v74; // [sp+20h] [bp-48h]@2
  char *v75; // [sp+24h] [bp-44h]@2
  void **v76; // [sp+28h] [bp-40h]@2
  __int64 v77; // [sp+2Ch] [bp-3Ch]@2

  v12 = this;
  v13 = a1;
  v14 = *(_QWORD *)a5;
  v15 = a3;
  v16 = a2;
  v17 = *(int **)(a5 + 8);
  if ( Json::Value::isNull(this) == 1 )
  {
    v18 = (int *)sub_DBBC94(v15);
    sub_119C854(&v70, (int *)HIDWORD(v14));
    sub_119C854(&v71, v17);
    sub_119C854(&v72, v18);
    v73 = 0;
    v74 = 0;
    v75 = 0;
    v73 = (char *)operator new(0xCu);
    v75 = v73 + 12;
    v74 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v70,
                    (int)&v73,
                    (int)v73);
    UIPackError::UIPackError(&v76, 7, (unsigned __int64 *)&v73);
    PackReport::addError<UIPackError>(v14, (int)&v76);
    v76 = &off_26D9084;
    v20 = (void *)HIDWORD(v77);
    v19 = (void *)v77;
    if ( (_DWORD)v77 != HIDWORD(v77) )
    {
      do
      {
        v23 = (int *)(*(_DWORD *)v19 - 12);
        if ( v23 != &dword_28898C0 )
        {
          v21 = (unsigned int *)(*(_DWORD *)v19 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v22 = __ldrex(v21);
            while ( __strex(v22 - 1, v21) );
          }
          else
            v22 = (*v21)--;
          if ( v22 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v23);
        }
        v19 = (char *)v19 + 4;
      }
      while ( v19 != v20 );
      v19 = (void *)v77;
    }
    if ( v19 )
      operator delete(v19);
    v25 = (int)v74;
    v24 = v73;
    if ( v73 != v74 )
        v28 = (int *)(*(_DWORD *)v24 - 12);
        if ( v28 != &dword_28898C0 )
          v26 = (unsigned int *)(*(_DWORD *)v24 - 4);
              v27 = __ldrex(v26);
            while ( __strex(v27 - 1, v26) );
            v27 = (*v26)--;
          if ( v27 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v28);
        v24 += 4;
      while ( v24 != (char *)v25 );
      v24 = v73;
    if ( v24 )
      operator delete(v24);
    v29 = (void *)(v72 - 12);
    if ( (int *)(v72 - 12) != &dword_28898C0 )
      v60 = (unsigned int *)(v72 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v61 = __ldrex(v60);
        while ( __strex(v61 - 1, v60) );
      else
        v61 = (*v60)--;
      if ( v61 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v29);
    v30 = (void *)(v71 - 12);
    if ( (int *)(v71 - 12) != &dword_28898C0 )
      v62 = (unsigned int *)(v71 - 4);
          v63 = __ldrex(v62);
        while ( __strex(v63 - 1, v62) );
        v63 = (*v62)--;
      if ( v63 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v30);
    v31 = (void *)(v70 - 12);
    if ( (int *)(v70 - 12) != &dword_28898C0 )
      v64 = (unsigned int *)(v70 - 4);
          v65 = __ldrex(v64);
        while ( __strex(v65 - 1, v64) );
        v65 = (*v64)--;
      if ( v65 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v31);
    return;
  }
  if ( v15 == 2 )
    v33 = *(_DWORD *)(v13 + 4);
    v34 = *(_DWORD *)(v13 + 8);
    if ( v33 != v34 || v34 == *(_DWORD *)(v13 + 12) )
      j_j_j__ZNSt6vectorI11UIIndexInfoSaIS0_EE13_M_insert_auxIJRKN4Json5ValueEEEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_(
        v13 + 4,
        v33,
        (int)v12);
      return;
    *(_DWORD *)v34 = -1;
    *(_DWORD *)(v34 + 4) = v12;
    *(_BYTE *)(v34 + 8) = 0;
    v35 = v34 + 12;
    goto LABEL_95;
  if ( v15 != 1 )
    v36 = UIModification::_findIndex((Json::Value **)v13, v16, v15, a5);
    v37 = *(_DWORD *)(v13 + 4);
    v38 = *(_DWORD *)(v13 + 8);
    v39 = -1431655765 * ((v38 - v37) >> 2) >> 2;
    if ( v39 >= 1 )
      v40 = v39 + 1;
        v41 = *(_DWORD *)v37 == v36;
        v42 = (_DWORD *)v37;
        if ( *(_DWORD *)v37 != v36 )
          v42 = (_DWORD *)(v37 + 12);
          v41 = *(_DWORD *)(v37 + 12) == v36;
        if ( v41 )
          goto LABEL_88;
        v42 = (_DWORD *)(v37 + 24);
        v43 = *(_DWORD *)(v37 + 24);
        v44 = v43 == v36;
        if ( v43 != v36 )
          v42 = (_DWORD *)(v37 + 36);
          v44 = *(_DWORD *)(v37 + 36) == v36;
        if ( v44 )
        --v40;
        v37 += 48;
      while ( v40 > 1 );
    v45 = -1431655765 * ((v38 - v37) >> 2);
    if ( v45 == 1 )
      v42 = (_DWORD *)v37;
    else
      if ( v45 == 2 )
        if ( v45 != 3 )
          return;
        if ( *(_DWORD *)v37 == v36 )
        v42 = (_DWORD *)(v37 + 12);
      if ( *v42 == v36 )
LABEL_88:
        if ( v42 == (_DWORD *)v38 )
        v67 = -1;
        v68 = v12;
        v69 = 0;
        if ( v15 == 3 )
          v42 += 3;
        if ( v42 != (_DWORD *)v38 || v38 == *(_DWORD *)(v13 + 12) )
          std::vector<UIIndexInfo,std::allocator<UIIndexInfo>>::_M_insert_aux<UIIndexInfo>(v13 + 4, (int)v42, (int)&v67);
        HIDWORD(v32) = v68;
        v66 = *(_DWORD *)&v69;
        *(_DWORD *)v38 = v67;
        *(_DWORD *)(v38 + 4) = HIDWORD(v32);
        *(_DWORD *)(v38 + 8) = v66;
        LODWORD(v32) = *(_DWORD *)(v13 + 8);
        goto LABEL_94;
      v42 += 3;
    if ( *v42 != v36 )
    goto LABEL_88;
  v32 = *(_QWORD *)(v13 + 8);
  if ( (_DWORD)v32 != HIDWORD(v32) )
    *(_DWORD *)v32 = -1;
    *(_DWORD *)(v32 + 4) = v12;
    *(_BYTE *)(v32 + 8) = 0;
LABEL_94:
    v35 = v32 + 12;
LABEL_95:
    *(_DWORD *)(v13 + 8) = v35;
  v46 = v32 - *(_DWORD *)(v13 + 4);
  v41 = v46 == 0;
  v47 = v46 >> 2;
  v48 = -1431655765 * v47;
  if ( v41 )
    v48 = 1;
  v50 = v48 + -1431655765 * v47;
  v49 = v50;
  if ( v50 > 0x15555555 )
    v50 = 357913941;
  v51 = v49 >= v48;
  LOWORD(v49) = 21846;
  if ( !v51 )
  HIWORD(v49) = 5461;
  if ( v50 >= v49 )
    sub_119C874();
  v52 = 3 * v50;
  v53 = (char *)operator new(12 * v50);
  v54 = *(_QWORD *)(v13 + 4);
  *(_DWORD *)&v53[HIDWORD(v54) - v54] = -1;
  v55 = &v53[HIDWORD(v54) - v54];
  *((_DWORD *)v55 + 1) = v12;
  v55[8] = 0;
  v56 = v53;
  if ( HIDWORD(v54) != (_DWORD)v54 )
    do
      v57 = *(_QWORD *)v54;
      v58 = *(_DWORD *)(v54 + 8);
      LODWORD(v54) = v54 + 12;
      *(_QWORD *)v56 = v57;
      *((_DWORD *)v56 + 2) = v58;
      v56 += 12;
    while ( HIDWORD(v54) != (_DWORD)v54 );
    LODWORD(v54) = *(_DWORD *)(v13 + 4);
  v59 = (int)(v56 + 12);
  if ( (_DWORD)v54 )
    operator delete((void *)v54);
  *(_DWORD *)(v13 + 4) = v53;
  *(_DWORD *)(v13 + 8) = v59;
  *(_DWORD *)(v13 + 12) = &v53[4 * v52];
}


int __fastcall UIModification::getValue(UIModification *this)
{
  return *(_DWORD *)this;
}


void __fastcall UIModification::replace(int a1, int a2, Json::Value *a3, int a4)
{
  Json::Value *v4; // r9@1
  int v5; // r4@1
  int v6; // r7@1
  __int64 v7; // kr00_8@1
  int v8; // r6@1
  int *v9; // r10@1
  int *v10; // r4@2
  void *v11; // r4@2
  void *v12; // r6@2
  unsigned int *v13; // r2@4
  signed int v14; // r1@6
  int *v15; // r0@12
  char *v16; // r4@17
  int v17; // r6@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  int *v20; // r0@27
  void *v21; // r0@32
  void *v22; // r0@33
  void *v23; // r0@34
  unsigned int *v24; // r2@35
  signed int v25; // r1@37
  int v26; // r0@39
  int v27; // r1@39
  int v28; // r2@39
  int v29; // r3@39
  int v30; // r6@40
  bool v31; // zf@41
  int v32; // r3@41
  int v33; // r5@44
  bool v34; // zf@44
  int v35; // r3@48
  unsigned int *v36; // r2@61
  signed int v37; // r1@63
  unsigned int *v38; // r2@65
  signed int v39; // r1@67
  int v40; // [sp+4h] [bp-54h]@2
  int v41; // [sp+8h] [bp-50h]@2
  int v42; // [sp+Ch] [bp-4Ch]@2
  char *v43; // [sp+10h] [bp-48h]@2
  char *v44; // [sp+14h] [bp-44h]@2
  char *v45; // [sp+18h] [bp-40h]@2
  void **v46; // [sp+1Ch] [bp-3Ch]@2
  __int64 v47; // [sp+20h] [bp-38h]@2

  v4 = a3;
  v5 = a4;
  v6 = a1;
  v7 = *(_QWORD *)a4;
  v8 = a2;
  v9 = *(int **)(a4 + 8);
  if ( Json::Value::isNull(a3) == 1 )
  {
    v10 = (int *)sub_DBBC94(0xBu);
    sub_119C854(&v40, (int *)HIDWORD(v7));
    sub_119C854(&v41, v9);
    sub_119C854(&v42, v10);
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v43 = (char *)operator new(0xCu);
    v45 = v43 + 12;
    v44 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v40,
                    (int)&v43,
                    (int)v43);
    UIPackError::UIPackError(&v46, 7, (unsigned __int64 *)&v43);
    PackReport::addError<UIPackError>(v7, (int)&v46);
    v46 = &off_26D9084;
    v12 = (void *)HIDWORD(v47);
    v11 = (void *)v47;
    if ( (_DWORD)v47 != HIDWORD(v47) )
    {
      do
      {
        v15 = (int *)(*(_DWORD *)v11 - 12);
        if ( v15 != &dword_28898C0 )
        {
          v13 = (unsigned int *)(*(_DWORD *)v11 - 4);
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
            j_j_j_j_j__ZdlPv_9_1(v15);
        }
        v11 = (char *)v11 + 4;
      }
      while ( v11 != v12 );
      v11 = (void *)v47;
    }
    if ( v11 )
      operator delete(v11);
    v17 = (int)v44;
    v16 = v43;
    if ( v43 != v44 )
        v20 = (int *)(*(_DWORD *)v16 - 12);
        if ( v20 != &dword_28898C0 )
          v18 = (unsigned int *)(*(_DWORD *)v16 - 4);
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
            v19 = (*v18)--;
          if ( v19 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v20);
        v16 += 4;
      while ( v16 != (char *)v17 );
      v16 = v43;
    if ( v16 )
      operator delete(v16);
    v21 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v42 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
      else
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v21);
    v22 = (void *)(v41 - 12);
    if ( (int *)(v41 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v41 - 4);
          v39 = __ldrex(v38);
        while ( __strex(v39 - 1, v38) );
        v39 = (*v38)--;
      if ( v39 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v22);
    v23 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v24 = (unsigned int *)(v40 - 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v23);
    return;
  }
  v26 = UIModification::_findIndex((Json::Value **)v6, v8, 0xBu, v5);
  v27 = *(_QWORD *)(v6 + 4) >> 32;
  v28 = *(_QWORD *)(v6 + 4);
  v29 = -1431655765 * ((v27 - v28) >> 2) >> 2;
  if ( v29 >= 1 )
    v30 = v29 + 1;
    do
      v31 = *(_DWORD *)v28 == v26;
      v32 = v28;
      if ( *(_DWORD *)v28 != v26 )
        v32 = v28 + 12;
        v31 = *(_DWORD *)(v28 + 12) == v26;
      if ( v31 )
        goto LABEL_58;
      v32 = v28 + 24;
      v33 = *(_DWORD *)(v28 + 24);
      v34 = v33 == v26;
      if ( v33 != v26 )
        v32 = v28 + 36;
        v34 = *(_DWORD *)(v28 + 36) == v26;
      if ( v34 )
      --v30;
      v28 += 48;
    while ( v30 > 1 );
  v35 = -1431655765 * ((v27 - v28) >> 2);
  if ( v35 == 1 )
    v32 = v28;
LABEL_57:
    if ( *(_DWORD *)v32 != v26 )
      return;
    goto LABEL_58;
  if ( v35 == 2 )
  else
    if ( v35 != 3 )
    if ( *(_DWORD *)v28 == v26 )
      goto LABEL_58;
    v32 = v28 + 12;
  if ( *(_DWORD *)v32 != v26 )
    v32 += 12;
    goto LABEL_57;
LABEL_58:
  if ( v32 != v27 )
    *(_DWORD *)v32 = -1;
    *(_DWORD *)(v32 + 4) = v4;
}


Json::Value *__fastcall UIModification::applyModification(UIModification *this)
{
  UIModification *v1; // r4@1
  int v2; // r1@1
  int v3; // r8@1
  int v4; // r5@2
  int v5; // r6@3
  Json::Value *v6; // r0@4
  const Json::Value **v7; // r6@4
  Json::Value *v8; // t1@4
  int v9; // r0@5
  const Json::Value *v10; // r6@5
  const Json::Value *v11; // r0@8
  const Json::Value *v12; // r0@9
  int v14; // [sp+0h] [bp-48h]@6
  char v15; // [sp+8h] [bp-40h]@6
  char v16; // [sp+10h] [bp-38h]@1

  v1 = this;
  Json::Value::Value(&v16, 0);
  v2 = *(_QWORD *)v1 >> 32;
  v3 = *(_QWORD *)v1;
  if ( *((_DWORD *)v1 + 2) - v2 >= 1 )
  {
    v4 = 0;
    do
    {
      v5 = v2 + 12 * v4;
      if ( !*(_BYTE *)(v5 + 8) )
      {
        v8 = *(Json::Value **)(v5 + 4);
        v7 = (const Json::Value **)(v5 + 4);
        v6 = v8;
        if ( v8 )
        {
          v9 = Json::Value::isArray(v6);
          v10 = *v7;
          if ( v9 == 1 )
          {
            Json::Value::begin((Json::Value *)&v15, (int)v10);
            Json::Value::end((Json::Value *)&v14, (int)v10);
            while ( Json::ValueIteratorBase::isEqual(
                      (Json::ValueIteratorBase *)&v15,
                      (const Json::ValueIteratorBase *)&v14) != 1 )
            {
              v11 = (const Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v15);
              Json::Value::append((Json::Value *)&v16, v11);
              Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v15);
            }
          }
          else
            Json::Value::append((Json::Value *)&v16, v10);
        }
        else
          v12 = (const Json::Value *)Json::Value::operator[](v3, *(_DWORD *)(v2 + 12 * v4));
          Json::Value::append((Json::Value *)&v16, v12);
      }
      v2 = *(_QWORD *)((char *)v1 + 4);
      ++v4;
    }
    while ( v4 < -1431655765 * ((signed int)((*(_QWORD *)((char *)v1 + 4) >> 32) - v2) >> 2) );
  }
  Json::Value::operator=(v3, (const Json::Value *)&v16);
  return Json::Value::~Value((Json::Value *)&v16);
}


int __fastcall UIModification::UIModification(int a1, Json::Value *a2, char a3)
{
  int v3; // r4@1
  int v4; // r5@1
  unsigned int v5; // r6@1
  __int64 v6; // r0@1
  int v7; // r1@6
  int v8; // r2@6
  int v9; // r3@7
  int v10; // r3@7

  v3 = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  v4 = a1 + 4;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 8) = 0;
  *(_BYTE *)(v4 + 12) = a3;
  v5 = Json::Value::size(a2);
  v6 = *(_QWORD *)(v3 + 4);
  HIDWORD(v6) = -1431655765 * ((HIDWORD(v6) - (signed int)v6) >> 2);
  if ( v5 <= HIDWORD(v6) )
  {
    if ( v5 < HIDWORD(v6) )
      *(_DWORD *)(v3 + 8) = v6 + 12 * v5;
  }
  else
    std::vector<UIIndexInfo,std::allocator<UIIndexInfo>>::_M_default_append(v4, v5 - HIDWORD(v6));
  if ( (signed int)v5 > 0 )
    v7 = 0;
    v8 = 0;
    do
    {
      v9 = *(_DWORD *)v4;
      *(_DWORD *)(v9 + v7) = v8;
      v10 = v9 + v7;
      ++v8;
      v7 += 12;
      *(_DWORD *)(v10 + 4) = 0;
      *(_BYTE *)(v10 + 8) = 0;
    }
    while ( v5 != v8 );
  return v3;
}


int __fastcall UIModification::getValue(UIModification *this)
{
  return *(_DWORD *)this;
}


RakNet *__fastcall UIModification::move(Json::Value **a1, int a2, unsigned int a3, int a4, int a5)
{
  Json::Value **v5; // r8@1
  int v6; // r9@1
  unsigned int v7; // r10@1
  int v8; // r0@1
  int v9; // r7@1
  int v10; // r1@1
  Json::Value *v11; // r0@1
  int v12; // r3@1
  Json::Value *v13; // r2@1
  int v14; // r3@2
  bool v15; // zf@3
  int v16; // r6@3
  int v17; // r4@6
  bool v18; // zf@6
  int v19; // r3@10
  int v20; // r2@25
  int v21; // r3@25
  Json::Value *v22; // r7@27
  void *v23; // r0@29
  void *v24; // r0@30
  unsigned int *v25; // r2@31
  signed int v26; // r1@33
  int v27; // r0@36
  int v28; // r2@36
  int v29; // r3@36
  int v30; // r1@36
  int v31; // r7@37
  bool v32; // zf@38
  int v33; // r1@38
  int v34; // r4@41
  bool v35; // zf@41
  int v36; // r1@45
  int v37; // r2@60
  int v38; // r3@60
  __int64 v39; // r2@60
  __int64 v40; // r2@60
  int v41; // r6@62
  int v42; // r1@64
  int v43; // r3@64
  char *v44; // r0@67
  RakNet *result; // r0@68
  unsigned int *v46; // r2@70
  signed int v47; // r1@72
  unsigned int *v48; // r2@77
  signed int v49; // r1@79
  int v50; // [sp+0h] [bp-68h]@62
  int v51; // [sp+4h] [bp-64h]@62
  char v52; // [sp+8h] [bp-60h]@62
  int v53; // [sp+10h] [bp-58h]@29
  int v54; // [sp+14h] [bp-54h]@29
  char *v55; // [sp+18h] [bp-50h]@27
  void *v56; // [sp+1Ch] [bp-4Ch]@27
  int v57; // [sp+20h] [bp-48h]@23
  int v58; // [sp+24h] [bp-44h]@23
  char v59; // [sp+28h] [bp-40h]@23
  int v60; // [sp+2Ch] [bp-3Ch]@1
  int v61; // [sp+30h] [bp-38h]@60
  int v62; // [sp+34h] [bp-34h]@60
  int v63; // [sp+38h] [bp-30h]@60
  RakNet *v64; // [sp+40h] [bp-28h]@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v64 = _stack_chk_guard;
  v8 = UIModification::_findIndex(a1, a2, a3, a5);
  v9 = v8;
  v60 = v8;
  v10 = (int)v5[1];
  v11 = v5[2];
  v12 = -1431655765 * (((signed int)v11 - v10) >> 2) >> 2;
  v13 = v5[1];
  if ( v12 >= 1 )
  {
    v14 = v12 + 1;
    v13 = v5[1];
    do
    {
      v15 = *(_DWORD *)v13 == v9;
      v16 = (int)v13;
      if ( *(_DWORD *)v13 != v9 )
      {
        v16 = (int)v13 + 12;
        v15 = *((_DWORD *)v13 + 3) == v9;
      }
      if ( v15 )
        goto LABEL_20;
      v16 = (int)v13 + 24;
      v17 = *((_DWORD *)v13 + 6);
      v18 = v17 == v9;
      if ( v17 != v9 )
        v16 = (int)v13 + 36;
        v18 = *((_DWORD *)v13 + 9) == v9;
      if ( v18 )
      --v14;
      v13 = (Json::Value *)((char *)v13 + 48);
    }
    while ( v14 > 1 );
  }
  v19 = -1431655765 * ((v11 - v13) >> 2);
  if ( v19 == 1 )
    v16 = (int)v13;
  else
    if ( v19 == 2 )
    else
      if ( v19 != 3 )
        goto LABEL_68;
      if ( *(_DWORD *)v13 == v9 )
      v16 = (int)v13 + 12;
    if ( *(_DWORD *)v16 == v9 )
      goto LABEL_20;
    v16 += 12;
  if ( *(_DWORD *)v16 != v9 )
    goto LABEL_68;
LABEL_20:
  if ( (Json::Value *)v16 == v11 )
  if ( v7 == 5 )
    *(_BYTE *)(v16 + 8) = 1;
    std::vector<UIIndexInfo,std::allocator<UIIndexInfo>>::emplace_back<int &>((int)(v5 + 1), &v60);
LABEL_51:
    sub_DBD5A8((int)v5, v9);
  if ( v7 == 6 )
    v57 = v9;
    v58 = 0;
    v59 = 0;
    if ( (Json::Value *)v10 != v11 || v11 == v5[3] )
      std::vector<UIIndexInfo,std::allocator<UIIndexInfo>>::_M_insert_aux<UIIndexInfo>((int)(v5 + 1), v10, (int)&v57);
      v20 = v58;
      v21 = *(_DWORD *)&v59;
      *(_DWORD *)v11 = v57;
      *((_DWORD *)v11 + 1) = v20;
      *((_DWORD *)v11 + 2) = v21;
      v5[2] = (Json::Value *)((char *)v5[2] + 12);
    goto LABEL_51;
  v55 = (char *)&unk_28898CC;
  v56 = 0;
  v22 = (Json::Value *)Json::Value::operator[](v6, "target_control");
  if ( Json::Value::isNull(v22) || Json::Value::isString(v22) != 1 )
    v56 = Json::Value::operator[](v6, "target");
    sub_119C884((void **)&v53, (const char *)&unk_257BC67);
    Json::Value::asString(&v54, (int)v22, &v53);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v55,
      &v54);
    v23 = (void *)(v54 - 12);
    if ( (int *)(v54 - 12) != &dword_28898C0 )
      v48 = (unsigned int *)(v54 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v49 = __ldrex(v48);
        while ( __strex(v49 - 1, v48) );
      else
        v49 = (*v48)--;
      if ( v49 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v23);
    v24 = (void *)(v53 - 12);
    if ( (int *)(v53 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v53 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v24);
  v27 = UIModification::_findIndex(v5, (int)&v55, v7, a5);
  v28 = *(_QWORD *)(v5 + 1) >> 32;
  v29 = *(_QWORD *)(v5 + 1);
  v30 = -1431655765 * ((v28 - v29) >> 2) >> 2;
  if ( v30 >= 1 )
    v31 = v30 + 1;
      v32 = *(_DWORD *)v29 == v27;
      v33 = v29;
      if ( *(_DWORD *)v29 != v27 )
        v33 = v29 + 12;
        v32 = *(_DWORD *)(v29 + 12) == v27;
      if ( v32 )
        goto LABEL_57;
      v33 = v29 + 24;
      v34 = *(_DWORD *)(v29 + 24);
      v35 = v34 == v27;
      if ( v34 != v27 )
        v33 = v29 + 36;
        v35 = *(_DWORD *)(v29 + 36) == v27;
      if ( v35 )
      --v31;
      v29 += 48;
    while ( v31 > 1 );
  v36 = -1431655765 * ((v28 - v29) >> 2);
  if ( v36 == 1 )
    v33 = v29;
    goto LABEL_56;
  if ( v36 == 2 )
    goto LABEL_53;
  if ( v36 != 3 )
    goto LABEL_67;
  v33 = v29;
  if ( *(_DWORD *)v29 != v27 )
    v33 = v29 + 12;
LABEL_53:
    if ( *(_DWORD *)v33 == v27 )
      goto LABEL_57;
    v33 += 12;
LABEL_56:
    if ( *(_DWORD *)v33 != v27 )
      goto LABEL_67;
LABEL_57:
  if ( v33 != v28 )
    if ( v7 == 7 )
      v33 += 12;
    else if ( v7 == 9 )
      v37 = *(_DWORD *)(v16 + 4);
      v38 = *(_DWORD *)(v16 + 8);
      v61 = *(_DWORD *)v16;
      v62 = v37;
      v63 = v38;
      v39 = *(_QWORD *)v33;
      *(_BYTE *)(v16 + 8) = *(_BYTE *)(v33 + 8);
      *(_QWORD *)v16 = v39;
      v40 = *(_QWORD *)&v61;
      *(_BYTE *)(v33 + 8) = v63;
      *(_QWORD *)v33 = v40;
    v41 = v60;
    v50 = v60;
    v51 = 0;
    v52 = 0;
    if ( v33 != v28 || (Json::Value *)v28 == v5[3] )
      std::vector<UIIndexInfo,std::allocator<UIIndexInfo>>::_M_insert_aux<UIIndexInfo>((int)(v5 + 1), v33, (int)&v50);
      v42 = v51;
      v43 = *(_DWORD *)&v52;
      *(_DWORD *)v28 = v50;
      *(_DWORD *)(v28 + 4) = v42;
      *(_DWORD *)(v28 + 8) = v43;
    sub_DBD5A8((int)v5, v41);
LABEL_67:
  v44 = v55 - 12;
  if ( (int *)(v55 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v55 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v44);
LABEL_68:
  result = (RakNet *)(_stack_chk_guard - v64);
  if ( _stack_chk_guard != v64 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall UIModification::replace(int a1, int a2, Json::Value *a3, int a4)
{
  UIModification::replace(a1, a2, a3, a4);
}


int __fastcall UIModification::_findIndex(Json::Value **a1, int a2, unsigned int a3, int a4)
{
  int v4; // r5@1
  Json::Value *v5; // r6@1
  int v6; // r11@1
  char ***v7; // r7@2
  int v8; // r9@2
  Json::Value *v9; // r4@3
  void **v10; // r6@3
  Json::Value *v11; // r0@4
  int *v12; // r0@6
  int v13; // r4@6
  void *v14; // r4@6
  void *v15; // r6@6
  char *v16; // r1@7
  int v17; // r10@7
  unsigned int *v18; // r2@8
  signed int v19; // r7@10
  char *v20; // r5@14
  int *v21; // r0@15
  char *v22; // r4@20
  int v23; // r6@20
  unsigned int *v24; // r2@22
  signed int v25; // r1@24
  int *v26; // r0@30
  void *v27; // r0@35
  void *v28; // r0@36
  void *v29; // r0@37
  void *v30; // r0@38
  Json::Value *v31; // r0@40
  int v32; // r4@40
  int v33; // r7@40
  const char **v34; // r4@44
  int v35; // r0@47
  unsigned int *v36; // r2@50
  signed int v37; // r1@52
  Json::Value *v38; // r10@58
  const char *v39; // r0@61
  void **v40; // r10@61
  char *v41; // r0@61
  Json::Value *v42; // r6@61
  char **v43; // r2@63
  _BYTE *v44; // r3@64
  signed int v45; // r4@67
  _BYTE *v46; // r0@70
  bool v47; // zf@71
  int *v48; // r0@77
  int v49; // r4@77
  void *v50; // r4@77
  void *v51; // r7@77
  unsigned int *v52; // r2@79
  signed int v53; // r1@81
  int *v54; // r0@87
  char *v55; // r4@92
  int v56; // r7@92
  unsigned int *v57; // r2@94
  signed int v58; // r1@96
  int *v59; // r0@102
  void *v60; // r0@107
  void *v61; // r0@108
  void *v62; // r0@109
  void *v63; // r0@110
  void *v64; // r0@111
  Json::Value *v66; // r5@116
  const char *v67; // r0@119
  const char *v68; // r0@120
  int v69; // r8@120
  const char **v70; // r0@120
  unsigned int *v71; // r2@125
  signed int v72; // r1@127
  unsigned int *v73; // r2@129
  signed int v74; // r1@131
  unsigned int *v75; // r2@133
  signed int v76; // r1@135
  unsigned int *v77; // r2@137
  signed int v78; // r1@139
  unsigned int *v79; // r2@141
  signed int v80; // r1@143
  unsigned int *v81; // r2@145
  signed int v82; // r1@147
  unsigned int *v83; // r2@149
  signed int v84; // r1@151
  unsigned int *v85; // r2@153
  signed int v86; // r1@155
  unsigned int *v87; // r2@157
  signed int v88; // r1@159
  int v89; // [sp+4h] [bp-10Ch]@2
  int v90; // [sp+8h] [bp-108h]@41
  unsigned int v91; // [sp+Ch] [bp-104h]@1
  Json::Value *v92; // [sp+10h] [bp-100h]@2
  Json::Value *v93; // [sp+10h] [bp-100h]@6
  int v94; // [sp+14h] [bp-FCh]@77
  int v95; // [sp+18h] [bp-F8h]@77
  int v96; // [sp+1Ch] [bp-F4h]@77
  int v97; // [sp+20h] [bp-F0h]@77
  char *v98; // [sp+24h] [bp-ECh]@77
  char *v99; // [sp+28h] [bp-E8h]@77
  char *v100; // [sp+2Ch] [bp-E4h]@77
  void **v101; // [sp+30h] [bp-E0h]@77
  __int64 v102; // [sp+34h] [bp-DCh]@77
  int v103; // [sp+48h] [bp-C8h]@77
  int v104; // [sp+4Ch] [bp-C4h]@6
  int v105; // [sp+50h] [bp-C0h]@6
  int v106; // [sp+54h] [bp-BCh]@6
  char *v107; // [sp+58h] [bp-B8h]@6
  char *v108; // [sp+5Ch] [bp-B4h]@6
  char *v109; // [sp+60h] [bp-B0h]@6
  void **v110; // [sp+64h] [bp-ACh]@6
  __int64 v111; // [sp+68h] [bp-A8h]@6
  int v112; // [sp+7Ch] [bp-94h]@6
  char v113; // [sp+80h] [bp-90h]@118
  char v114; // [sp+88h] [bp-88h]@117
  char v115; // [sp+90h] [bp-80h]@45
  char v116; // [sp+98h] [bp-78h]@45
  char v117; // [sp+A0h] [bp-70h]@41
  char v118; // [sp+A8h] [bp-68h]@41
  char v119; // [sp+B0h] [bp-60h]@40
  _BYTE *v120; // [sp+C4h] [bp-4Ch]@3
  char v121; // [sp+C8h] [bp-48h]@3
  char v122; // [sp+D0h] [bp-40h]@60
  char v123; // [sp+D8h] [bp-38h]@2
  char v124; // [sp+E0h] [bp-30h]@2
  char v125; // [sp+E8h] [bp-28h]@7

  v4 = a2;
  v5 = *a1;
  v6 = a4;
  v91 = a3;
  if ( *(_DWORD *)(*(_DWORD *)a2 - 12) )
  {
    v7 = (char ***)a2;
    v89 = a4;
    Json::Value::begin((Json::Value *)&v124, (int)v5);
    v92 = v5;
    Json::Value::end((Json::Value *)&v123, (int)v5);
    v8 = 0;
    if ( !Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v124, (const Json::ValueIteratorBase *)&v123) )
    {
      v9 = (Json::Value *)&v121;
      v10 = (void **)&v120;
      do
      {
        v38 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v124);
        if ( !Json::Value::isNull(v38) && Json::Value::isObject(v38) == 1 )
        {
          Json::Value::begin((Json::Value *)&v122, (int)v38);
          Json::Value::end(v9, (int)v38);
          if ( !Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v122, v9) )
          {
            v39 = (const char *)Json::ValueIteratorBase::memberName((Json::ValueIteratorBase *)&v122);
            sub_119C884(v10, v39);
            v40 = v10;
            v41 = sub_119C8B4((int *)v10, 64, 0);
            v42 = v9;
            if ( v41 == (char *)-1 )
              v41 = (char *)*((_DWORD *)v120 - 3);
            v43 = *v7;
            if ( *(*v7 - 3) == v41 )
            {
              v44 = v120;
              if ( v41 )
              {
                while ( *(_BYTE *)v43 == *v44 )
                {
                  v43 = (char **)((char *)v43 + 1);
                  ++v44;
                  if ( !--v41 )
                    goto LABEL_67;
                }
                v45 = 0;
              }
              else
LABEL_67:
                v45 = 2;
            }
            else
              v45 = 0;
            v46 = v120 - 12;
            if ( (int *)(v120 - 12) != &dword_28898C0 )
              v36 = (unsigned int *)(v120 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v37 = __ldrex(v36);
                while ( __strex(v37 - 1, v36) );
                v37 = (*v36)--;
              if ( v37 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v46);
            v47 = v45 == 0;
            v9 = v42;
            v10 = v40;
            if ( !v47 )
              break;
          }
        }
        Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v124);
        ++v8;
      }
      while ( Json::ValueIteratorBase::isEqual((Json::ValueIteratorBase *)&v124, (const Json::ValueIteratorBase *)&v123) != 1 );
    }
    v6 = v89;
    v4 = (int)v7;
    v5 = v92;
  }
  else
    v11 = *(Json::Value **)(a2 + 4);
    if ( v11 && !Json::Value::isNull(v11) )
      v31 = Json::Value::Value((Json::Value *)&v119, *(const Json::Value **)(v4 + 4));
      v32 = Json::Value::isArray(v31);
      v33 = Json::Value::isObject((Json::Value *)&v119);
      if ( (v32 | v33) == 1 )
        Json::Value::begin((Json::Value *)&v118, (int)v5);
        Json::Value::end((Json::Value *)&v117, (int)v5);
        v90 = v4;
        if ( v32 )
          v8 = 0;
          while ( !Json::ValueIteratorBase::isEqual(
                     (Json::ValueIteratorBase *)&v118,
                     (const Json::ValueIteratorBase *)&v117) )
            v34 = (const char **)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v118);
            if ( !Json::Value::isNull((Json::Value *)v34) )
              Json::Value::begin((Json::Value *)&v116, (int)&v119);
              Json::Value::end((Json::Value *)&v115, (int)&v119);
              while ( !Json::ValueIteratorBase::isEqual(
                         (Json::ValueIteratorBase *)&v116,
                         (const Json::ValueIteratorBase *)&v115) )
                v35 = Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v116);
                if ( Json::Value::operator==(v35, v34) )
                  break;
                Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v116);
            ++v8;
            Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v118);
        else
            v66 = (Json::Value *)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v118);
            if ( !(Json::Value::isNull(v66) | v33 ^ 1) )
              Json::Value::begin((Json::Value *)&v114, (int)&v119);
              while ( 1 )
                Json::Value::end((Json::Value *)&v113, (int)&v119);
                if ( Json::ValueIteratorBase::isEqual(
                       (Json::ValueIteratorBase *)&v114,
                       (const Json::ValueIteratorBase *)&v113) == 1 )
                v67 = (const char *)Json::ValueIteratorBase::memberName((Json::ValueIteratorBase *)&v114);
                if ( Json::Value::isMember(v66, v67) == 1 )
                  v68 = (const char *)Json::ValueIteratorBase::memberName((Json::ValueIteratorBase *)&v114);
                  v69 = Json::Value::operator[](v66, v68);
                  v70 = (const char **)Json::ValueIteratorBase::deref((Json::ValueIteratorBase *)&v114);
                  if ( Json::Value::operator==(v69, v70) )
                    goto LABEL_123;
                Json::ValueIteratorBase::increment((Json::ValueIteratorBase *)&v114);
LABEL_123:
        v4 = v90;
      else
        v8 = 0;
      Json::Value::~Value((Json::Value *)&v119);
    else
      v93 = v5;
      v12 = (int *)sub_DBBC94(v91);
      sub_119C854(&v112, v12);
      v13 = *(_QWORD *)v6;
      sub_119C854(&v104, (int *)(*(_QWORD *)v6 >> 32));
      sub_119C854(&v105, *(int **)(v6 + 8));
      sub_119C854(&v106, &v112);
      v107 = 0;
      v108 = 0;
      v109 = 0;
      v107 = (char *)operator new(0xCu);
      v109 = v107 + 12;
      v108 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                       (int)&v104,
                       (int)&v107,
                       (int)v107);
      UIPackError::UIPackError(&v110, 6, (unsigned __int64 *)&v107);
      PackReport::addError<UIPackError>(v13, (int)&v110);
      v110 = &off_26D9084;
      v15 = (void *)HIDWORD(v111);
      v14 = (void *)v111;
      if ( (_DWORD)v111 != HIDWORD(v111) )
        v16 = &v125;
        v17 = v4;
        do
          v21 = (int *)(*(_DWORD *)v14 - 12);
          if ( v21 != &dword_28898C0 )
            v18 = (unsigned int *)(*(_DWORD *)v14 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v19 = __ldrex(v18);
              while ( __strex(v19 - 1, v18) );
              v19 = (*v18)--;
            if ( v19 <= 0 )
              v20 = v16;
              j_j_j_j_j__ZdlPv_9_1(v21);
              v16 = v20;
          v14 = (char *)v14 + 4;
        while ( v14 != v15 );
        v14 = (void *)v111;
        v4 = v17;
      if ( v14 )
        operator delete(v14);
      v23 = (int)v108;
      v22 = v107;
      if ( v107 != v108 )
          v26 = (int *)(*(_DWORD *)v22 - 12);
          if ( v26 != &dword_28898C0 )
            v24 = (unsigned int *)(*(_DWORD *)v22 - 4);
                v25 = __ldrex(v24);
              while ( __strex(v25 - 1, v24) );
              v25 = (*v24)--;
            if ( v25 <= 0 )
              j_j_j_j_j__ZdlPv_9_1(v26);
          v22 += 4;
        while ( v22 != (char *)v23 );
        v22 = v107;
      v5 = v93;
      if ( v22 )
        operator delete(v22);
      v27 = (void *)(v106 - 12);
      if ( (int *)(v106 - 12) != &dword_28898C0 )
        v81 = (unsigned int *)(v106 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v82 = __ldrex(v81);
          while ( __strex(v82 - 1, v81) );
          v82 = (*v81)--;
        if ( v82 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v27);
      v28 = (void *)(v105 - 12);
      if ( (int *)(v105 - 12) != &dword_28898C0 )
        v83 = (unsigned int *)(v105 - 4);
            v84 = __ldrex(v83);
          while ( __strex(v84 - 1, v83) );
          v84 = (*v83)--;
        if ( v84 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v28);
      v29 = (void *)(v104 - 12);
      if ( (int *)(v104 - 12) != &dword_28898C0 )
        v85 = (unsigned int *)(v104 - 4);
            v86 = __ldrex(v85);
          while ( __strex(v86 - 1, v85) );
          v86 = (*v85)--;
        if ( v86 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v29);
      v30 = (void *)(v112 - 12);
      if ( (int *)(v112 - 12) != &dword_28898C0 )
        v87 = (unsigned int *)(v112 - 4);
            v88 = __ldrex(v87);
          while ( __strex(v88 - 1, v87) );
          v88 = (*v87)--;
        if ( v88 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v30);
      v8 = 0;
  if ( v8 >= Json::Value::size(v5) && *(_DWORD *)(*(_DWORD *)v4 - 12) )
    v48 = (int *)sub_DBBC94(v91);
    sub_119C854(&v103, v48);
    v49 = *(_QWORD *)v6;
    sub_119C854(&v94, (int *)(*(_QWORD *)v6 >> 32));
    sub_119C854(&v95, *(int **)(v6 + 8));
    sub_119C854(&v96, (int *)v4);
    sub_119C854(&v97, &v103);
    v98 = 0;
    v99 = 0;
    v100 = 0;
    v98 = (char *)operator new(0x10u);
    v100 = v98 + 16;
    v99 = (char *)std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                    (int)&v94,
                    (int)&v98,
                    (int)v98);
    UIPackError::UIPackError(&v101, 4, (unsigned __int64 *)&v98);
    PackReport::addError<UIPackError>(v49, (int)&v101);
    v101 = &off_26D9084;
    v51 = (void *)HIDWORD(v102);
    v50 = (void *)v102;
    if ( (_DWORD)v102 != HIDWORD(v102) )
        v54 = (int *)(*(_DWORD *)v50 - 12);
        if ( v54 != &dword_28898C0 )
          v52 = (unsigned int *)(*(_DWORD *)v50 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v53 = __ldrex(v52);
            while ( __strex(v53 - 1, v52) );
          else
            v53 = (*v52)--;
          if ( v53 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v54);
        v50 = (char *)v50 + 4;
      while ( v50 != v51 );
      v50 = (void *)v102;
    if ( v50 )
      operator delete(v50);
    v56 = (int)v99;
    v55 = v98;
    if ( v98 != v99 )
        v59 = (int *)(*(_DWORD *)v55 - 12);
        if ( v59 != &dword_28898C0 )
          v57 = (unsigned int *)(*(_DWORD *)v55 - 4);
              v58 = __ldrex(v57);
            while ( __strex(v58 - 1, v57) );
            v58 = (*v57)--;
          if ( v58 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v59);
        v55 += 4;
      while ( v55 != (char *)v56 );
      v55 = v98;
    if ( v55 )
      operator delete(v55);
    v60 = (void *)(v97 - 12);
    if ( (int *)(v97 - 12) != &dword_28898C0 )
      v71 = (unsigned int *)(v97 - 4);
      if ( &pthread_create )
        __dmb();
          v72 = __ldrex(v71);
        while ( __strex(v72 - 1, v71) );
        v72 = (*v71)--;
      if ( v72 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v60);
    v61 = (void *)(v96 - 12);
    if ( (int *)(v96 - 12) != &dword_28898C0 )
      v73 = (unsigned int *)(v96 - 4);
          v74 = __ldrex(v73);
        while ( __strex(v74 - 1, v73) );
        v74 = (*v73)--;
      if ( v74 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v61);
    v62 = (void *)(v95 - 12);
    if ( (int *)(v95 - 12) != &dword_28898C0 )
      v75 = (unsigned int *)(v95 - 4);
          v76 = __ldrex(v75);
        while ( __strex(v76 - 1, v75) );
        v76 = (*v75)--;
      if ( v76 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v62);
    v63 = (void *)(v94 - 12);
    if ( (int *)(v94 - 12) != &dword_28898C0 )
      v77 = (unsigned int *)(v94 - 4);
          v78 = __ldrex(v77);
        while ( __strex(v78 - 1, v77) );
        v78 = (*v77)--;
      if ( v78 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v63);
    v64 = (void *)(v103 - 12);
    if ( (int *)(v103 - 12) != &dword_28898C0 )
      v79 = (unsigned int *)(v103 - 4);
          v80 = __ldrex(v79);
        while ( __strex(v80 - 1, v79) );
        v80 = (*v79)--;
      if ( v80 <= 0 )
        j_j_j_j_j__ZdlPv_9_1(v64);
  return v8;
}


char *__fastcall UIModification::getIndicies(UIModification *this)
{
  return (char *)this + 4;
}


void __fastcall UIModification::insert(int a1, int a2, int a3, Json::Value *this, int a5, int a6, int a7, int a8, int a9, int a10, int a11, char a12)
{
  UIModification::insert(a1, a2, a3, this, a5, a6, a7, a8, a9, a10, a11, a12);
}


int __fastcall UIModification::remove(Json::Value **a1, int a2, int a3)
{
  Json::Value **v3; // r4@1
  int result; // r0@1
  int v5; // r3@1
  int v6; // lr@1
  int v7; // r2@1
  int v8; // r4@2
  bool v9; // zf@3
  int v10; // r2@3
  int v11; // r1@6
  bool v12; // zf@6
  int v13; // r2@10

  v3 = a1;
  result = UIModification::_findIndex(a1, a2, 0xAu, a3);
  v6 = *(_QWORD *)(v3 + 1) >> 32;
  v5 = *(_QWORD *)(v3 + 1);
  v7 = -1431655765 * ((v6 - v5) >> 2) >> 2;
  if ( v7 >= 1 )
  {
    v8 = v7 + 1;
    do
    {
      v9 = *(_DWORD *)v5 == result;
      v10 = v5;
      if ( *(_DWORD *)v5 != result )
      {
        v10 = v5 + 12;
        v9 = *(_DWORD *)(v5 + 12) == result;
      }
      if ( v9 )
        goto LABEL_20;
      v10 = v5 + 24;
      v11 = *(_DWORD *)(v5 + 24);
      v12 = v11 == result;
      if ( v11 != result )
        v10 = v5 + 36;
        v12 = *(_DWORD *)(v5 + 36) == result;
      if ( v12 )
      --v8;
      v5 += 48;
    }
    while ( v8 > 1 );
  }
  v13 = -1431655765 * ((v6 - v5) >> 2);
  if ( v13 == 1 )
    v10 = v5;
    goto LABEL_19;
  if ( v13 == 2 )
  else
    if ( v13 != 3 )
      return result;
    if ( *(_DWORD *)v5 == result )
      goto LABEL_20;
    v10 = v5 + 12;
  if ( *(_DWORD *)v10 != result )
    v10 += 12;
LABEL_19:
    if ( *(_DWORD *)v10 != result )
LABEL_20:
  if ( v10 != v6 )
    result = 1;
    *(_BYTE *)(v10 + 8) = 1;
  return result;
}
