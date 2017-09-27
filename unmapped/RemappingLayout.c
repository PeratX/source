

int __fastcall RemappingLayout::getAdjustedKey(RemappingLayout *this, int a2)
{
  return a2;
}


void __fastcall RemappingLayout::~RemappingLayout(RemappingLayout *this)
{
  RemappingLayout::~RemappingLayout(this);
}


void __fastcall RemappingLayout::generateIndicesOfDuplicates(__int64 this)
{
  Keymapping *v1; // r0@1
  Keymapping *v2; // r10@1
  int *i; // r11@3
  __int64 v4; // kr08_8@3
  int v5; // r2@6
  int *v6; // r0@6
  int *v7; // r3@7
  _DWORD *v8; // r4@17
  int v9; // r6@17
  int *v10; // r7@17
  int v11; // r0@17
  int *v12; // r0@18
  int v13; // r1@18
  int v14; // r0@21
  int v15; // r0@27
  bool v16; // nf@27
  unsigned __int8 v17; // vf@27
  int v18; // r0@27
  int v19; // r6@30
  int *v20; // r7@30
  int v21; // r0@30
  int *v22; // r0@31
  int v23; // r1@31
  int v24; // r0@34
  int v25; // r0@40
  int v26; // r0@40
  int v27; // r5@50
  int v28; // r8@51
  int v29; // r11@51
  int v30; // r4@51
  unsigned int v31; // r6@51
  const void **v32; // r0@52
  char *v33; // r0@53
  int v34; // r12@53
  int *v35; // r6@53
  int *v36; // r7@53
  int v37; // r2@54
  int *v38; // r0@54
  int *v39; // r3@55
  int v40; // r11@65
  int v41; // r0@66
  void *v42; // r10@67
  char *v43; // r4@67
  signed int v44; // r0@67
  unsigned int v45; // r1@67
  unsigned int v46; // r0@69
  unsigned int v47; // r6@69
  int v48; // r5@76
  int v49; // r0@80
  unsigned int v50; // [sp+0h] [bp-68h]@53
  __int64 v51; // [sp+4h] [bp-64h]@1
  int *j; // [sp+Ch] [bp-5Ch]@53
  Keymapping *v53; // [sp+10h] [bp-58h]@1
  int v54; // [sp+10h] [bp-58h]@51
  char v55; // [sp+14h] [bp-54h]@86
  int v56; // [sp+18h] [bp-50h]@1
  int v57; // [sp+1Ch] [bp-4Ch]@1
  int *v58; // [sp+20h] [bp-48h]@1
  int *v59; // [sp+24h] [bp-44h]@1
  int v60; // [sp+28h] [bp-40h]@1
  char v61; // [sp+2Ch] [bp-3Ch]@86
  int v62; // [sp+30h] [bp-38h]@1
  int v63; // [sp+34h] [bp-34h]@1
  int *v64; // [sp+38h] [bp-30h]@1
  int *v65; // [sp+3Ch] [bp-2Ch]@1
  int v66; // [sp+40h] [bp-28h]@1

  v51 = this;
  v66 = 0;
  v62 = 0;
  v63 = 0;
  v64 = &v62;
  v65 = &v62;
  v60 = 0;
  v56 = 0;
  v57 = 0;
  v58 = &v56;
  v59 = &v56;
  LODWORD(this) = *(_QWORD *)(HIDWORD(this) + 4) >> 32;
  v2 = (Keymapping *)*(_QWORD *)(HIDWORD(this) + 4);
  v53 = (Keymapping *)this;
  if ( v2 != (Keymapping *)this )
  {
    while ( Keymapping::isAssigned(v2) != 1 )
    {
LABEL_48:
      v2 = (Keymapping *)((char *)v2 + 16);
      if ( v2 == v53 )
      {
        v1 = (Keymapping *)(*(_QWORD *)(HIDWORD(v51) + 4) >> 32);
        v2 = (Keymapping *)*(_QWORD *)(HIDWORD(v51) + 4);
        goto LABEL_50;
      }
    }
    v4 = *(_QWORD *)Keymapping::getKeys(v2);
    for ( i = (int *)v4; ; ++i )
      if ( i == (int *)HIDWORD(v4) )
        goto LABEL_48;
      v5 = v63;
      v6 = &v62;
      if ( v63 )
        v7 = &v62;
        do
        {
          v6 = (int *)v5;
          while ( v6[4] < *i )
          {
            v6 = (int *)v6[3];
            if ( !v6 )
            {
              v6 = v7;
              goto LABEL_13;
            }
          }
          v5 = v6[2];
          v7 = v6;
        }
        while ( v5 );
LABEL_13:
      if ( v6 != &v62 )
        if ( *i < v6[4] )
          v6 = &v62;
        if ( v6 != &v62 )
          v8 = operator new(0x14u);
          v9 = *i;
          v10 = &v56;
          v11 = v57;
          v8[4] = *i;
          if ( v11 )
            do
              v10 = (int *)v11;
              v12 = (int *)(v11 + 12);
              v13 = v10[4];
              if ( v9 < v13 )
                v12 = v10 + 2;
              v11 = *v12;
            while ( v11 );
            v14 = (int)v10;
            if ( v9 >= v13 )
              goto LABEL_24;
          if ( v10 != v58 )
            v14 = sub_119CAB8((int)v10);
LABEL_24:
            if ( *(_DWORD *)(v14 + 16) >= v9 )
              goto LABEL_43;
          if ( !v10 )
            goto LABEL_43;
          if ( &v56 == v10 )
            v18 = 1;
          else
            v15 = v10[4];
            v17 = __OFSUB__(v9, v15);
            v16 = v9 - v15 < 0;
            v18 = 0;
            if ( v16 ^ v17 )
              v18 = 1;
          sub_119CAA8(v18, (int)v8, (int)v10, (int)&v56);
          ++v60;
          continue;
      v8 = operator new(0x14u);
      v19 = *i;
      v20 = &v62;
      v21 = v63;
      v8[4] = *i;
      if ( v21 )
          v20 = (int *)v21;
          v22 = (int *)(v21 + 12);
          v23 = v20[4];
          if ( v19 < v23 )
            v22 = v20 + 2;
          v21 = *v22;
        while ( v21 );
        v24 = (int)v20;
        if ( v19 >= v23 )
          goto LABEL_37;
      if ( v20 != v64 )
        break;
LABEL_38:
      if ( !v20 )
LABEL_43:
        operator delete(v8);
        continue;
      if ( &v62 == v20 )
        v26 = 1;
      else
        v25 = v20[4];
        v17 = __OFSUB__(v19, v25);
        v16 = v19 - v25 < 0;
        v26 = 0;
        if ( v16 ^ v17 )
          v26 = 1;
      sub_119CAA8(v26, (int)v8, (int)v20, (int)&v62);
      ++v66;
    v24 = sub_119CAB8((int)v20);
LABEL_37:
    if ( *(_DWORD *)(v24 + 16) >= v19 )
      goto LABEL_43;
    goto LABEL_38;
  }
LABEL_50:
  v27 = v51;
  *(_DWORD *)v51 = 0;
  *(_DWORD *)(v51 + 4) = 0;
  *(_DWORD *)(v51 + 8) = 0;
  if ( v1 != v2 )
    v28 = 0;
    v29 = 0;
    v30 = 0;
    v31 = 0;
    v54 = 0;
    do
      v32 = (const void **)Keymapping::getAction((Keymapping *)((char *)v2 + 16 * v31));
      if ( Remapping::allowRemap(v32) )
        v33 = Keymapping::getKeys((Keymapping *)(*(_DWORD *)(HIDWORD(v51) + 4) + 16 * v31));
        v50 = v31;
        v34 = v29;
        v35 = (int *)(*(_QWORD *)v33 >> 32);
        v36 = (int *)*(_QWORD *)v33;
        for ( j = v35; v36 != v35; ++v36 )
          v37 = v57;
          v38 = &v56;
          if ( v57 )
            v39 = &v56;
              v38 = (int *)v37;
              while ( v38[4] < *v36 )
              {
                v38 = (int *)v38[3];
                if ( !v38 )
                {
                  v38 = v39;
                  goto LABEL_61;
                }
              }
              v37 = v38[2];
              v39 = v38;
            while ( v37 );
LABEL_61:
          if ( v38 != &v56 )
            if ( *v36 < v38[4] )
              v38 = &v56;
            if ( v38 != &v56 )
              v40 = *v36;
              if ( v30 == *(_DWORD *)(v27 + 8) )
                v42 = *(void **)v27;
                v43 = 0;
                v44 = v34 - *(_DWORD *)v27;
                v45 = v44 >> 3;
                if ( !(v44 >> 3) )
                  v45 = 1;
                v46 = v45 + (v44 >> 3);
                v47 = v46;
                if ( 0 != v46 >> 29 )
                  v47 = 0x1FFFFFFF;
                if ( v46 < v45 )
                if ( v47 )
                  if ( v47 >= 0x20000000 )
                    sub_119C874();
                  v43 = (char *)operator new(8 * v47);
                  v34 = v28;
                v48 = (int)&v43[v34 - (_DWORD)v42];
                *(_DWORD *)v48 = v54;
                *(_DWORD *)(v48 + 4) = v40;
                if ( (v34 - (signed int)v42) >> 3 )
                  _aeabi_memmove4(v43, v42);
                v28 = v48 + 8;
                if ( v42 )
                  operator delete(v42);
                v27 = v51;
                v49 = (int)&v43[8 * v47];
                v34 = v28;
                *(_DWORD *)v51 = v43;
                *(_DWORD *)(v51 + 4) = v28;
                v30 = v28;
                v35 = j;
                *(_DWORD *)(v51 + 8) = v49;
              else
                *(_DWORD *)v30 = v54;
                *(_DWORD *)(v30 + 4) = v40;
                v41 = *(_DWORD *)(v27 + 4);
                v28 = v41 + 8;
                *(_DWORD *)(v27 + 4) = v41 + 8;
                v34 = v41 + 8;
                v30 = v41 + 8;
        v31 = v50;
        v29 = v34;
        ++v54;
      ++v31;
      v2 = (Keymapping *)*(_QWORD *)(HIDWORD(v51) + 4);
    while ( v31 < (signed int)((*(_QWORD *)(HIDWORD(v51) + 4) >> 32) - (_DWORD)v2) >> 4 );
  std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase((int)&v55, v57);
  std::_Rb_tree<int,int,std::_Identity<int>,std::less<int>,std::allocator<int>>::_M_erase((int)&v61, v63);
}


int __fastcall RemappingLayout::RemappingLayout(int result)
{
  *(_QWORD *)result = (unsigned int)&off_26D9544;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  return result;
}


Keymapping *__fastcall RemappingLayout::getKeyMappingByRawInput(int a1)
{
  int v1; // r6@1
  int v2; // r0@1
  Keymapping *v3; // r4@1
  Keymapping *v4; // r6@1
  __int64 v5; // kr00_8@1
  int v6; // r5@1
  int *v7; // r1@4
  __int64 v8; // kr08_8@4
  int v9; // t1@5

  v1 = a1;
  v2 = (*(int (**)(void))(*(_DWORD *)a1 + 28))();
  v5 = *(_QWORD *)(v1 + 4);
  v4 = (Keymapping *)(*(_QWORD *)(v1 + 4) >> 32);
  v3 = (Keymapping *)v5;
  v6 = v2;
  while ( 1 )
  {
    if ( v3 == v4 )
      return 0;
    v8 = *(_QWORD *)Keymapping::getKeys(v3);
    v7 = (int *)v8;
    if ( (_DWORD)v8 != HIDWORD(v8) )
      break;
LABEL_2:
    v3 = (Keymapping *)((char *)v3 + 16);
  }
    v9 = *v7;
    ++v7;
    if ( v9 == v6 )
      return v3;
    if ( (int *)HIDWORD(v8) == v7 )
      goto LABEL_2;
}


int __fastcall RemappingLayout::setMapping(int result, const void **a2, unsigned int a3)
{
  __int64 v3; // r6@1
  unsigned int v4; // r4@1
  const void **v5; // r5@1
  size_t v6; // r2@2

  v3 = *(_QWORD *)(result + 4);
  v4 = a3;
  v5 = a2;
  if ( (_DWORD)v3 != HIDWORD(v3) )
  {
    while ( 1 )
    {
      result = *(_DWORD *)Keymapping::getAction((Keymapping *)v3);
      v6 = *(_DWORD *)(result - 12);
      if ( v6 == *((_DWORD *)*v5 - 3) )
      {
        result = memcmp((const void *)result, *v5, v6);
        if ( !result )
          break;
      }
      LODWORD(v3) = v3 + 16;
      if ( HIDWORD(v3) == (_DWORD)v3 )
        return result;
    }
    result = j_j_j__ZN10Keymapping7setKeysERKSt6vectorIiSaIiEE(__PAIR__(v4, (unsigned int)v3));
  }
  return result;
}


void __fastcall RemappingLayout::~RemappingLayout(RemappingLayout *this)
{
  RemappingLayout *v1; // r0@1

  v1 = RemappingLayout::~RemappingLayout(this);
  j_j_j__ZdlPv_4((void *)v1);
}


RemappingLayout *__fastcall RemappingLayout::~RemappingLayout(RemappingLayout *this)
{
  RemappingLayout *v1; // r10@1
  int v2; // r5@1
  int v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  void *v6; // r0@11
  int *v7; // r0@13
  int v8; // r5@18
  int v9; // r7@18
  unsigned int *v10; // r2@20
  signed int v11; // r1@22
  void *v12; // r0@28
  int *v13; // r0@30

  v1 = this;
  *(_DWORD *)this = &off_26D9544;
  v3 = *((_QWORD *)this + 2) >> 32;
  v2 = *((_QWORD *)this + 2);
  if ( v2 != v3 )
  {
    do
    {
      v6 = *(void **)(v2 + 4);
      if ( v6 )
        operator delete(v6);
      v7 = (int *)(*(_DWORD *)v2 - 12);
      if ( v7 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
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
          j_j_j_j_j__ZdlPv_9_1(v7);
      }
      v2 += 16;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 4);
  }
  if ( v2 )
    operator delete((void *)v2);
  v9 = *(_QWORD *)((char *)v1 + 4) >> 32;
  v8 = *(_QWORD *)((char *)v1 + 4);
  if ( v8 != v9 )
      v12 = *(void **)(v8 + 4);
      if ( v12 )
        operator delete(v12);
      v13 = (int *)(*(_DWORD *)v8 - 12);
      if ( v13 != &dword_28898C0 )
        v10 = (unsigned int *)(*(_DWORD *)v8 - 4);
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v13);
      v8 += 16;
    while ( v8 != v9 );
    v8 = *((_DWORD *)v1 + 1);
  if ( v8 )
    operator delete((void *)v8);
  return v1;
}


int *__fastcall RemappingLayout::getKeymappingByAction(int a1, int a2, const void **a3)
{
  int v3; // r5@1
  int v4; // r7@1
  const void **v5; // r6@1
  int v6; // r4@1
  _DWORD *v7; // r0@2
  size_t v8; // r2@2
  int *result; // r0@5
  __int64 v10; // r0@6
  char *v11; // r6@6
  signed int v12; // r0@6
  unsigned int v13; // r7@6
  __int64 v14; // kr08_8@9
  int v15; // r5@9

  v4 = *(_QWORD *)(a2 + 4) >> 32;
  v3 = *(_QWORD *)(a2 + 4);
  v5 = a3;
  v6 = a1;
  if ( v3 == v4 )
  {
LABEL_5:
    result = Keymapping::Keymapping((int *)v6, (int *)&Util::EMPTY_STRING, 0);
  }
  else
    while ( 1 )
    {
      v7 = *(_DWORD **)Keymapping::getAction((Keymapping *)v3);
      v8 = *(v7 - 3);
      if ( v8 == *((_DWORD *)*v5 - 3) && !memcmp(v7, *v5, v8) )
        break;
      v3 += 16;
      if ( v4 == v3 )
        goto LABEL_5;
    }
    sub_119C854((int *)v6, (int *)v3);
    v10 = *(_QWORD *)(v3 + 4);
    v11 = 0;
    *(_DWORD *)(v6 + 4) = 0;
    *(_DWORD *)(v6 + 8) = 0;
    v12 = HIDWORD(v10) - v10;
    *(_DWORD *)(v6 + 12) = 0;
    v13 = v12 >> 2;
    if ( v12 >> 2 )
      if ( v13 >= 0x40000000 )
        sub_119C874();
      v11 = (char *)operator new(v12);
    *(_DWORD *)(v6 + 4) = v11;
    *(_DWORD *)(v6 + 8) = v11;
    *(_DWORD *)(v6 + 12) = &v11[4 * v13];
    v14 = *(_QWORD *)(v3 + 4);
    v15 = (HIDWORD(v14) - (signed int)v14) >> 2;
    if ( 0 != v15 )
      _aeabi_memmove4(v11, v14);
    result = (int *)&v11[4 * v15];
    *(_DWORD *)(v6 + 8) = result;
  return result;
}


int __fastcall RemappingLayout::getKeymappingByIndex(RemappingLayout *this, unsigned int a2)
{
  RemappingLayout *v2; // r4@1
  unsigned int v3; // r8@1
  __int64 v4; // r0@1
  int v5; // r7@2
  unsigned int v6; // r6@2
  int v7; // r5@2
  const void **v8; // r0@3

  v2 = this;
  v3 = a2;
  v4 = *(_QWORD *)((char *)this + 4);
  if ( HIDWORD(v4) != (_DWORD)v4 )
  {
    v5 = 0;
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = (const void **)Keymapping::getAction((Keymapping *)(v4 + v5));
      if ( Remapping::allowRemap(v8) == 1 )
      {
        if ( v7 == v3 )
        {
          LODWORD(v4) = *((_DWORD *)v2 + 1) + 16 * v6;
          return v4;
        }
        ++v7;
      }
      v4 = *(_QWORD *)((char *)v2 + 4);
      v5 += 16;
      ++v6;
    }
    while ( v6 < (HIDWORD(v4) - (signed int)v4) >> 4 );
  }
  return v4;
}


char *__fastcall RemappingLayout::unassignKeyAtIndex(RemappingLayout *this, unsigned int a2)
{
  RemappingLayout *v2; // r4@1
  unsigned int v3; // r8@1
  __int64 v4; // r0@1
  int v5; // r7@2
  unsigned int v6; // r6@2
  int v7; // r5@2
  const void **v8; // r0@3

  v2 = this;
  v3 = a2;
  v4 = *(_QWORD *)((char *)this + 4);
  if ( HIDWORD(v4) != (_DWORD)v4 )
  {
    v5 = 0;
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = (const void **)Keymapping::getAction((Keymapping *)(v4 + v5));
      if ( Remapping::allowRemap(v8) == 1 )
      {
        if ( v7 == v3 )
        {
          LODWORD(v4) = *((_DWORD *)v2 + 1);
          return j_j_j__ZN10Keymapping8unassignEv((Keymapping *)(v4 + 16 * v6));
        }
        ++v7;
      }
      v4 = *(_QWORD *)((char *)v2 + 4);
      v5 += 16;
      ++v6;
    }
    while ( v6 < (HIDWORD(v4) - (signed int)v4) >> 4 );
  }
  v6 = 0;
  return j_j_j__ZN10Keymapping8unassignEv((Keymapping *)(v4 + 16 * v6));
}


int __fastcall RemappingLayout::defaultKeyAtIndex(RemappingLayout *this, unsigned int a2)
{
  RemappingLayout *v2; // r4@1
  unsigned int v3; // r8@1
  __int64 v4; // r0@1
  int v5; // r7@2
  unsigned int v6; // r6@2
  int v7; // r5@2
  const void **v8; // r0@3

  v2 = this;
  v3 = a2;
  v4 = *(_QWORD *)((char *)this + 4);
  if ( HIDWORD(v4) != (_DWORD)v4 )
  {
    v5 = 0;
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = (const void **)Keymapping::getAction((Keymapping *)(v4 + v5));
      if ( Remapping::allowRemap(v8) == 1 )
      {
        if ( v7 == v3 )
        {
          LODWORD(v4) = *((_DWORD *)v2 + 1);
          return j_j_j__ZN10KeymappingaSERKS_((int *)(v4 + 16 * v6), (int *)(*((_DWORD *)v2 + 4) + 16 * v6));
        }
        ++v7;
      }
      v4 = *(_QWORD *)((char *)v2 + 4);
      v5 += 16;
      ++v6;
    }
    while ( v6 < (HIDWORD(v4) - (signed int)v4) >> 4 );
  }
  v6 = 0;
  return j_j_j__ZN10KeymappingaSERKS_((int *)(v4 + 16 * v6), (int *)(*((_DWORD *)v2 + 4) + 16 * v6));
}


char *__fastcall RemappingLayout::unassignKey(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r9@1
  __int64 v5; // r0@1
  int v6; // r8@1
  int v7; // r4@2
  unsigned int v8; // r7@2
  int v9; // r6@2
  const void **v10; // r0@3

  v3 = a1;
  v4 = a2;
  v5 = *(_QWORD *)(a1 + 4);
  v6 = a3;
  if ( HIDWORD(v5) != (_DWORD)v5 )
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
    do
    {
      v10 = (const void **)Keymapping::getAction((Keymapping *)(v5 + v7));
      if ( Remapping::allowRemap(v10) == 1 )
      {
        if ( v9 == v4 )
        {
          LODWORD(v5) = *(_DWORD *)(v3 + 4);
          return j_j_j__ZN10Keymapping8unassignEi((Keymapping *)(v5 + 16 * v8), v6);
        }
        ++v9;
      }
      v5 = *(_QWORD *)(v3 + 4);
      v7 += 16;
      ++v8;
    }
    while ( v8 < (HIDWORD(v5) - (signed int)v5) >> 4 );
  }
  v8 = 0;
  return j_j_j__ZN10Keymapping8unassignEi((Keymapping *)(v5 + 16 * v8), v6);
}


void __fastcall RemappingLayout::generateIndicesOfDuplicates(__int64 this)
{
  RemappingLayout::generateIndicesOfDuplicates(this);
}


void __fastcall RemappingLayout::setMapping(int a1, const void **a2, int a3)
{
  int v3; // r7@1
  int v4; // r6@1
  const void **v5; // r5@1
  char *v6; // r4@1
  __int64 v7; // r6@1
  _DWORD *v8; // r0@2
  size_t v9; // r2@2
  char *v10; // [sp+0h] [bp-20h]@1
  char *v11; // [sp+4h] [bp-1Ch]@1
  char *v12; // [sp+8h] [bp-18h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (char *)operator new(4u);
  v10 = v6;
  v12 = v6 + 4;
  *(_DWORD *)v6 = v4;
  v11 = v6 + 4;
  v7 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v7 != HIDWORD(v7) )
  {
    while ( 1 )
    {
      v8 = *(_DWORD **)Keymapping::getAction((Keymapping *)v7);
      v9 = *(v8 - 3);
      if ( v9 == *((_DWORD *)*v5 - 3) && !memcmp(v8, *v5, v9) )
        break;
      LODWORD(v7) = v7 + 16;
      if ( HIDWORD(v7) == (_DWORD)v7 )
        goto LABEL_7;
    }
    Keymapping::setKeys(__PAIR__(&v10, (unsigned int)v7));
    v6 = v10;
  }
LABEL_7:
  if ( v6 )
    operator delete(v6);
}


int __fastcall RemappingLayout::_getAdjustedRemappableIndex(RemappingLayout *this, unsigned int a2)
{
  RemappingLayout *v2; // r6@1
  unsigned int v3; // r8@1
  __int64 v4; // r0@1
  int v5; // r4@1
  int v6; // r7@2
  int v7; // r5@2
  const void **v8; // r0@3

  v2 = this;
  v3 = a2;
  v4 = *(_QWORD *)((char *)this + 4);
  v5 = 0;
  if ( HIDWORD(v4) == (_DWORD)v4 )
    return 0;
  v6 = 0;
  v7 = 0;
  while ( 1 )
  {
    v8 = (const void **)Keymapping::getAction((Keymapping *)(v4 + v5));
    if ( Remapping::allowRemap(v8) == 1 )
      break;
LABEL_6:
    v4 = *(_QWORD *)((char *)v2 + 4);
    v5 += 16;
    if ( ++v6 >= (unsigned int)((HIDWORD(v4) - (signed int)v4) >> 4) )
      return 0;
  }
  if ( v7 != v3 )
    ++v7;
    goto LABEL_6;
  return v6;
}


void __fastcall RemappingLayout::setMapping(int a1, const void **a2, int a3)
{
  RemappingLayout::setMapping(a1, a2, a3);
}


int __fastcall RemappingLayout::getNumKeymappings(RemappingLayout *this)
{
  Keymapping *v1; // r5@1 OVERLAPPED
  Keymapping *v2; // r6@1 OVERLAPPED
  int v3; // r4@1
  const void **v4; // r0@2

  *(_QWORD *)&v1 = *(_QWORD *)((char *)this + 4);
  v3 = 0;
  while ( v2 != v1 )
  {
    v4 = (const void **)Keymapping::getAction(v1);
    v1 = (Keymapping *)((char *)v1 + 16);
    if ( Remapping::allowRemap(v4) )
      ++v3;
  }
  return v3;
}
