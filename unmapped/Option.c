

  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


int __fastcall Option::getVec3(Option *this, int a2)
{
  Option *v2; // r4@1
  Vec3Option *v3; // r0@2
  char *v4; // r0@3
  int result; // r0@3

  v2 = this;
  do
  {
    v3 = (Vec3Option *)a2;
    a2 = *(_DWORD *)(a2 + 48);
  }
  while ( a2 );
  v4 = Vec3Option::getValue(v3);
  *(_DWORD *)v2 = *(_DWORD *)v4;
  *((_DWORD *)v2 + 1) = *((_DWORD *)v4 + 1);
  result = *((_DWORD *)v4 + 2);
  *((_DWORD *)v2 + 2) = result;
  return result;
}


  if ( *(_DWORD *)(v8 + 24) && !*(_BYTE *)(v8 + 38) && Option::getOptionOwnerType(v9) == 1 )
{
    v19 = *(_DWORD *)(v8 + 24);
    v20 = Option::getID(v9);
    v21 = *(_DWORD *)(v19 + 8);
    v22 = (Option *)(v19 + 4);
    if ( v21 )
    {
      v23 = v19 + 4;
      do
      {
        v24 = v21;
        while ( *(_DWORD *)(v24 + 16) < v20 )
        {
          v24 = *(_DWORD *)(v24 + 12);
          if ( !v24 )
          {
            v24 = v23;
            goto LABEL_29;
          }
        }
        v21 = *(_DWORD *)(v24 + 8);
        v23 = v24;
      }
      while ( v21 );
    }
    else
      v24 = v19 + 4;
LABEL_29:
    if ( (Option *)v24 != v22 )
      if ( *(_DWORD *)(v24 + 16) > v20 )
        v24 = v19 + 4;
      v25 = v24 == (_DWORD)v22;
      if ( (Option *)v24 != v22 )
        v22 = *(Option **)(v24 + 20);
        v25 = v22 == 0;
      if ( !v25 )
        Option::setOverrideSource(v9, v22);
  }
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  return v9;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


_DWORD *__fastcall Option::_save<glm::detail::tvec3<float>>(Option *a1, int a2, int a3)
{
  int v3; // r5@1
  Option *v4; // r6@1
  int v5; // r7@1
  int v6; // r2@1
  int v7; // r3@1
  int *v8; // r0@1
  int *v9; // r6@1
  __int64 v10; // kr00_8@1
  void *v11; // r0@4
  void *v12; // r0@5
  void **v13; // r0@6
  void *v14; // r0@6
  unsigned int *v16; // r2@8
  signed int v17; // r1@10
  unsigned int *v18; // r2@12
  signed int v19; // r1@14
  unsigned int *v20; // r2@16
  signed int v21; // r1@18
  int v22; // [sp+4h] [bp-DCh]@1
  int v23; // [sp+8h] [bp-D8h]@4
  void **v24; // [sp+Ch] [bp-D4h]@1
  int v25; // [sp+10h] [bp-D0h]@7
  void **v26; // [sp+14h] [bp-CCh]@1
  void **v27; // [sp+18h] [bp-C8h]@1
  int v28; // [sp+34h] [bp-ACh]@7
  int v29; // [sp+3Ch] [bp-A4h]@6
  int v30; // [sp+40h] [bp-A0h]@7

  v3 = a2;
  v4 = a1;
  v5 = a3;
  sub_119CB58((int)&v24, 24);
  operator<<((char *)&v26, v5, v6, v7);
  v8 = (int *)Option::getSaveTag(v4);
  v9 = sub_119C854(&v22, v8) + 1;
  sub_119D48C(v9, (int)&v27);
  v10 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v10 == HIDWORD(v10) )
  {
    std::vector<PropertyFile::Property,std::allocator<PropertyFile::Property>>::_M_emplace_back_aux<PropertyFile::Property const&>(
      (_QWORD *)v3,
      (int)&v22);
  }
  else
    sub_119C854((int *)v10, &v22);
    sub_119C854((int *)(v10 + 4), v9);
    *(_DWORD *)(v3 + 4) += 8;
  v11 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v23 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v11);
  v12 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v22 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v13 = off_26D3F84;
  v24 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v24) = off_26D3F80[0];
  v26 = v13;
  v27 = &off_27734E8;
  v14 = (void *)(v29 - 12);
  if ( (int *)(v29 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v29 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v14);
  v27 = &off_26D40A8;
  sub_119C954((unsigned int **)&v28);
  v24 = (void **)off_26D3F68;
  *(void ***)((char *)&v24 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v25 = 0;
  return sub_119C964(&v30);
}


int __fastcall Option::getFloatMax(Option *this)
{
  Option *v1; // r1@1

  do
  {
    v1 = this;
    this = (Option *)*((_DWORD *)this + 12);
  }
  while ( this );
  return *((_DWORD *)v1 + 18);
}


int __fastcall Option::setOverrideSource(int result, Option *a2)
{
  Option *v2; // r4@1
  int v3; // r5@1
  bool v4; // zf@1
  _DWORD *v5; // r0@7
  __int64 v6; // r1@7
  _DWORD *v7; // r0@7
  __int64 v8; // r1@7
  __int64 *v9; // r0@7
  int v10; // r1@7 OVERLAPPED
  _DWORD *v11; // [sp+4h] [bp-34h]@7
  __int64 v12; // [sp+Ch] [bp-2Ch]@7
  _DWORD *v13; // [sp+14h] [bp-24h]@7
  __int64 v14; // [sp+1Ch] [bp-1Ch]@7
  int v15; // [sp+24h] [bp-14h]@7

  v2 = a2;
  v3 = result;
  v4 = a2 == (Option *)result;
  if ( a2 != (Option *)result )
  {
    result = *(_DWORD *)(result + 48);
    v4 = result == (_DWORD)a2;
  }
  if ( !v4 )
    if ( result )
      result = Option::unregisterObserver((Option *)result, (void *)v3);
    *(_DWORD *)(v3 + 48) = v2;
    if ( v2 )
    {
      v5 = operator new(4u);
      LODWORD(v6) = sub_E5F85E;
      *v5 = v3;
      HIDWORD(v6) = sub_E5F828;
      v13 = v5;
      v14 = v6;
      v7 = operator new(4u);
      HIDWORD(v8) = sub_E5F894;
      *v7 = v3;
      v11 = v7;
      LODWORD(v8) = sub_E5F8D4;
      v12 = v8;
      v9 = (__int64 *)((char *)v2 + 8);
      v15 = v3;
      *(_QWORD *)&v10 = *(_QWORD *)((char *)v2 + 12);
      if ( v10 == HIDWORD(v8) )
      {
        result = (int)std::vector<OptionObserver,std::allocator<OptionObserver>>::_M_emplace_back_aux<void *&,std::function<void ()(Option *)> &,std::function&<void ()(Option *,InputMode)>>(
                        v9,
                        &v15,
                        (int)&v13,
                        (int)&v11);
      }
      else
        __gnu_cxx::new_allocator<OptionObserver>::construct<OptionObserver,void *&,std::function<void ()(Option *)> &,std::function&<void ()(Option *,InputMode)>>(
          (int)v9,
          v10,
          &v15,
          (int)&v13,
          (int)&v11);
        result = *((_DWORD *)v2 + 3) + 36;
        *((_DWORD *)v2 + 3) = result;
      if ( (_DWORD)v12 )
        result = ((int (*)(void))v12)();
      if ( (_DWORD)v14 )
        result = ((int (*)(void))v14)();
    }
  return result;
}


  if ( *(_DWORD *)(v8 + 24) && !*(_BYTE *)(v8 + 38) && Option::getOptionOwnerType(v9) == 1 )
{
    v19 = *(_DWORD *)(v8 + 24);
    v20 = Option::getID(v9);
    v21 = *(_DWORD *)(v19 + 8);
    v22 = (Option *)(v19 + 4);
    if ( v21 )
    {
      v23 = v19 + 4;
      do
      {
        v24 = v21;
        while ( *(_DWORD *)(v24 + 16) < v20 )
        {
          v24 = *(_DWORD *)(v24 + 12);
          if ( !v24 )
          {
            v24 = v23;
            goto LABEL_29;
          }
        }
        v21 = *(_DWORD *)(v24 + 8);
        v23 = v24;
      }
      while ( v21 );
    }
    else
      v24 = v19 + 4;
LABEL_29:
    if ( (Option *)v24 != v22 )
      if ( *(_DWORD *)(v24 + 16) > v20 )
        v24 = v19 + 4;
      v25 = v24 == (_DWORD)v22;
      if ( (Option *)v24 != v22 )
        v22 = *(Option **)(v24 + 20);
        v25 = v22 == 0;
      if ( !v25 )
        Option::setOverrideSource(v9, v22);
  }
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  return v9;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v9 + 24) && !*(_BYTE *)(v9 + 38) && Option::getOptionOwnerType(v10) == 1 )
{
    v20 = *(_DWORD *)(v9 + 24);
    v21 = Option::getID(v10);
    v22 = *(_DWORD *)(v20 + 8);
    v23 = (Option *)(v20 + 4);
    if ( v22 )
    {
      v24 = v20 + 4;
      do
      {
        v25 = v22;
        while ( *(_DWORD *)(v25 + 16) < v21 )
        {
          v25 = *(_DWORD *)(v25 + 12);
          if ( !v25 )
          {
            v25 = v24;
            goto LABEL_29;
          }
        }
        v22 = *(_DWORD *)(v25 + 8);
        v24 = v25;
      }
      while ( v22 );
    }
    else
      v25 = v20 + 4;
LABEL_29:
    if ( (Option *)v25 != v23 )
      if ( *(_DWORD *)(v25 + 16) > v21 )
        v25 = v20 + 4;
      v26 = v25 == (_DWORD)v23;
      if ( (Option *)v25 != v23 )
        v23 = *(Option **)(v25 + 20);
        v26 = v23 == 0;
      if ( !v26 )
        Option::setOverrideSource(v10, v23);
  }
  if ( v31 )
    (*(void (**)(void))(*(_DWORD *)v31 + 4))();
  return v10;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


char *__fastcall Option::getValues(Option *this)
{
  Option *v1; // r1@1
  IntOption *v2; // r0@2

  v1 = this;
  do
  {
    v2 = v1;
    v1 = (Option *)*((_DWORD *)v1 + 12);
  }
  while ( v1 );
  return IntOption::getValues(v2);
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v8 + 24) && !*(_BYTE *)(v8 + 38) && Option::getOptionOwnerType(v9) == 1 )
{
    v19 = *(_DWORD *)(v8 + 24);
    v20 = Option::getID(v9);
    v21 = *(_DWORD *)(v19 + 8);
    v22 = (Option *)(v19 + 4);
    if ( v21 )
    {
      v23 = v19 + 4;
      do
      {
        v24 = v21;
        while ( *(_DWORD *)(v24 + 16) < v20 )
        {
          v24 = *(_DWORD *)(v24 + 12);
          if ( !v24 )
          {
            v24 = v23;
            goto LABEL_29;
          }
        }
        v21 = *(_DWORD *)(v24 + 8);
        v23 = v24;
      }
      while ( v21 );
    }
    else
      v24 = v19 + 4;
LABEL_29:
    if ( (Option *)v24 != v22 )
      if ( *(_DWORD *)(v24 + 16) > v20 )
        v24 = v19 + 4;
      v25 = v24 == (_DWORD)v22;
      if ( (Option *)v24 != v22 )
        v22 = *(Option **)(v24 + 20);
        v25 = v22 == 0;
      if ( !v25 )
        Option::setOverrideSource(v9, v22);
  }
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  return v9;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


IntOption *__fastcall Option::reset(IntOption *result, int a2)
{
  unsigned int v2; // r2@2

  if ( !*((_DWORD *)result + 12) )
  {
    v2 = *((_DWORD *)result + 11);
    if ( v2 != 4 && v2 <= 4 )
    {
      switch ( *((_DWORD *)result + 9) )
      {
        case 5:
        case 6:
          result = (IntOption *)j_j_j__ZN9IntOption5resetEv(result);
          break;
        case 0:
          result = (IntOption *)j_j_j__ZN10BoolOption5resetEv(result);
        case 2:
          result = (IntOption *)j_j_j__ZN11FloatOption5resetEv(result);
        case 3:
          result = (IntOption *)j_j_j__ZN20InputModeFloatOption5resetE9InputMode((int)result, a2);
        case 4:
          result = (IntOption *)j_j_j__ZN12StringOption5resetEv(result);
        case 7:
          result = (IntOption *)j_j_j__ZN10Vec3Option5resetEv(result);
        case 1:
          result = (IntOption *)j_j_j__ZN19InputModeBoolOption5resetE9InputMode((int)result, a2);
      }
    }
  }
  return result;
}


  if ( *(_DWORD *)(v8 + 24) && !*(_BYTE *)(v8 + 38) && Option::getOptionOwnerType(v9) == 1 )
{
    v19 = *(_DWORD *)(v8 + 24);
    v20 = Option::getID(v9);
    v21 = *(_DWORD *)(v19 + 8);
    v22 = (Option *)(v19 + 4);
    if ( v21 )
    {
      v23 = v19 + 4;
      do
      {
        v24 = v21;
        while ( *(_DWORD *)(v24 + 16) < v20 )
        {
          v24 = *(_DWORD *)(v24 + 12);
          if ( !v24 )
          {
            v24 = v23;
            goto LABEL_29;
          }
        }
        v21 = *(_DWORD *)(v24 + 8);
        v23 = v24;
      }
      while ( v21 );
    }
    else
      v24 = v19 + 4;
LABEL_29:
    if ( (Option *)v24 != v22 )
      if ( *(_DWORD *)(v24 + 16) > v20 )
        v24 = v19 + 4;
      v25 = v24 == (_DWORD)v22;
      if ( (Option *)v24 != v22 )
        v22 = *(Option **)(v24 + 20);
        v25 = v22 == 0;
      if ( !v25 )
        Option::setOverrideSource(v9, v22);
  }
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  return v9;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


int __fastcall Option::getIntMax(Option *this)
{
  Option *v1; // r1@1

  do
  {
    v1 = this;
    this = (Option *)*((_DWORD *)this + 12);
  }
  while ( this );
  return *((_DWORD *)v1 + 17);
}


  if ( *(_DWORD *)(v8 + 24) && !*(_BYTE *)(v8 + 38) && Option::getOptionOwnerType(v9) == 1 )
{
    v19 = *(_DWORD *)(v8 + 24);
    v20 = Option::getID(v9);
    v21 = *(_DWORD *)(v19 + 8);
    v22 = (Option *)(v19 + 4);
    if ( v21 )
    {
      v23 = v19 + 4;
      do
      {
        v24 = v21;
        while ( *(_DWORD *)(v24 + 16) < v20 )
        {
          v24 = *(_DWORD *)(v24 + 12);
          if ( !v24 )
          {
            v24 = v23;
            goto LABEL_29;
          }
        }
        v21 = *(_DWORD *)(v24 + 8);
        v23 = v24;
      }
      while ( v21 );
    }
    else
      v24 = v19 + 4;
LABEL_29:
    if ( (Option *)v24 != v22 )
      if ( *(_DWORD *)(v24 + 16) > v20 )
        v24 = v19 + 4;
      v25 = v24 == (_DWORD)v22;
      if ( (Option *)v24 != v22 )
        v22 = *(Option **)(v24 + 20);
        v25 = v22 == 0;
      if ( !v25 )
        Option::setOverrideSource(v9, v22);
  }
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  return v9;
}


  if ( *(_DWORD *)(v8 + 24) && !*(_BYTE *)(v8 + 38) && Option::getOptionOwnerType(v9) == 1 )
{
    v19 = *(_DWORD *)(v8 + 24);
    v20 = Option::getID(v9);
    v21 = *(_DWORD *)(v19 + 8);
    v22 = (Option *)(v19 + 4);
    if ( v21 )
    {
      v23 = v19 + 4;
      do
      {
        v24 = v21;
        while ( *(_DWORD *)(v24 + 16) < v20 )
        {
          v24 = *(_DWORD *)(v24 + 12);
          if ( !v24 )
          {
            v24 = v23;
            goto LABEL_29;
          }
        }
        v21 = *(_DWORD *)(v24 + 8);
        v23 = v24;
      }
      while ( v21 );
    }
    else
      v24 = v19 + 4;
LABEL_29:
    if ( (Option *)v24 != v22 )
      if ( *(_DWORD *)(v24 + 16) > v20 )
        v24 = v19 + 4;
      v25 = v24 == (_DWORD)v22;
      if ( (Option *)v24 != v22 )
        v22 = *(Option **)(v24 + 20);
        v25 = v22 == 0;
      if ( !v25 )
        Option::setOverrideSource(v9, v22);
  }
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  return v9;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


char *__fastcall Option::registerObserver(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r3@1
  __int64 *v5; // r0@1
  int v6; // r1@1 OVERLAPPED
  int v7; // r2@1
  char *result; // r0@2
  int v9; // [sp+4h] [bp-Ch]@1

  v3 = a1;
  v4 = a3;
  v9 = a2;
  v5 = (__int64 *)(a1 + 8);
  *(_QWORD *)&v6 = *(_QWORD *)(v3 + 12);
  if ( v6 == v7 )
  {
    result = std::vector<OptionObserver,std::allocator<OptionObserver>>::_M_emplace_back_aux<void *&,std::function<void ()(Option *,InputMode)> &>(
               v5,
               &v9,
               v4);
  }
  else
    __gnu_cxx::new_allocator<OptionObserver>::construct<OptionObserver,void *&,std::function<void ()(Option *,InputMode)> &>(
      (int)v5,
      v6,
      &v9,
      v4);
    result = (char *)(*(_DWORD *)(v3 + 12) + 36);
    *(_DWORD *)(v3 + 12) = result;
  return result;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


void __fastcall Option::~Option(Option *this)
{
  Option *v1; // r0@1

  v1 = Option::~Option(this);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall Option::set(int result, unsigned int a2, int a3)
{
  int v3; // r3@1

  v3 = *(_DWORD *)(result + 48);
  if ( v3 )
    JUMPOUT(v3 == 0, Option::set);
  else
    result = j_j_j__ZN20InputModeFloatOption3setE9InputModef(result, a2, a3);
  return result;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v11) == 1 )
{
    v21 = *(_DWORD *)(v7 + 24);
    v22 = Option::getID(v11);
    v23 = *(_DWORD *)(v21 + 8);
    v24 = (Option *)(v21 + 4);
    if ( v23 )
    {
      v25 = v21 + 4;
      do
      {
        v26 = v23;
        while ( *(_DWORD *)(v26 + 16) < v22 )
        {
          v26 = *(_DWORD *)(v26 + 12);
          if ( !v26 )
          {
            v26 = v25;
            goto LABEL_29;
          }
        }
        v23 = *(_DWORD *)(v26 + 8);
        v25 = v26;
      }
      while ( v23 );
    }
    else
      v26 = v21 + 4;
LABEL_29:
    if ( (Option *)v26 != v24 )
      if ( *(_DWORD *)(v26 + 16) > v22 )
        v26 = v21 + 4;
      v27 = v26 == (_DWORD)v24;
      if ( (Option *)v26 != v24 )
        v24 = *(Option **)(v26 + 20);
        v27 = v24 == 0;
      if ( !v27 )
        Option::setOverrideSource(v11, v24);
  }
  if ( v32 )
    (*(void (**)(void))(*(_DWORD *)v32 + 4))();
  return v11;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


char *__fastcall Option::getTelemetryProperty(Option *this)
{
  return (char *)this + 24;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


int __fastcall Option::getFloat(int a1, unsigned int a2)
{
  int v2; // r2@1

  do
  {
    v2 = a1;
    a1 = *(_DWORD *)(a1 + 48);
  }
  while ( a1 );
  return j_j_j__ZNK20InputModeFloatOption8getValueE9InputMode(v2, a2);
}


int __fastcall Option::getInt(Option *this)
{
  Option *v1; // r1@1

  do
  {
    v1 = this;
    this = (Option *)*((_DWORD *)this + 12);
  }
  while ( this );
  return j_j_j__ZNK9IntOption8getValueEv(v1);
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


void __fastcall Option::registerLock(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  int v5; // r5@1
  void (__fastcall *v6)(int, int, signed int); // r3@2
  int v7; // r0@5
  int v8; // r5@5
  void (__fastcall *v9)(int, int, signed int); // r3@6
  int v10; // [sp+0h] [bp-18h]@5
  int v11; // [sp+4h] [bp-14h]@1

  v3 = a1;
  v11 = a2;
  v4 = *(_DWORD *)(a1 + 4);
  v5 = a3;
  if ( v4 )
  {
    *(_DWORD *)(a1 + 4) = 0;
    v6 = *(void (__fastcall **)(int, int, signed int))(v4 + 8);
    if ( v6 )
      v6(v4, v4, 3);
    operator delete((void *)v4);
  }
  std::make_unique<OptionLock,void *&,std::function<bool ()(void)> &>(&v10, &v11, v5);
  v7 = v10;
  v10 = 0;
  v8 = *(_DWORD *)(v3 + 4);
  *(_DWORD *)(v3 + 4) = v7;
  if ( v8 )
    v9 = *(void (__fastcall **)(int, int, signed int))(v8 + 8);
    if ( v9 )
      v9(v8, v8, 3);
    j_j_j__ZdlPv_4((void *)v8);
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


_BOOL4 __fastcall Option::read(const char **a1)
{
  return sscanf(*a1, "%f %f %f") != 0;
}


int __fastcall Option::setOptionType(int result, int a2)
{
  *(_DWORD *)(result + 36) = a2;
  return result;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


char *__fastcall Option::getCaptionId(Option *this)
{
  return (char *)this + 40;
}


int __fastcall Option::load(int result, int a2)
{
  int v2; // r8@1
  _DWORD *v3; // r5@1
  size_t v4; // r6@1
  int v5; // r9@2
  int v6; // r10@3
  int v7; // r4@4
  _DWORD *v8; // r0@5
  size_t v9; // r7@5
  size_t v10; // r2@5
  _DWORD *v11; // r1@16
  size_t v12; // r2@16
  size_t v13; // r7@16

  v2 = result;
  v3 = *(_DWORD **)(result + 20);
  v4 = *(v3 - 3);
  if ( v4 )
  {
    result = *(_DWORD *)(a2 + 8);
    v5 = a2 + 4;
    if ( result )
    {
      v6 = a2 + 4;
      do
      {
        v7 = result;
        while ( 1 )
        {
          v8 = *(_DWORD **)(v7 + 16);
          v9 = *(v8 - 3);
          v10 = *(v8 - 3);
          if ( v9 > v4 )
            v10 = v4;
          result = memcmp(v8, v3, v10);
          if ( !result )
            result = v9 - v4;
          if ( result >= 0 )
            break;
          v7 = *(_DWORD *)(v7 + 12);
          if ( !v7 )
          {
            v7 = v6;
            goto LABEL_15;
          }
        }
        result = *(_DWORD *)(v7 + 8);
        v6 = v7;
      }
      while ( result );
    }
    else
      v7 = a2 + 4;
LABEL_15:
    if ( v7 != v5 )
      v11 = *(_DWORD **)(v7 + 16);
      v12 = v4;
      v13 = *(v11 - 3);
      if ( v4 > v13 )
        v12 = *(v11 - 3);
      result = memcmp(v3, v11, v12);
      if ( !result )
        result = v4 - v13;
      if ( result < 0 )
        v7 = v5;
      if ( v7 != v5 )
        result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v2 + 12))(v2, v7 + 20);
  }
  return result;
}


signed int __fastcall Option::isType(int a1, int a2)
{
  int v2; // r2@1
  signed int result; // r0@1

  v2 = *(_DWORD *)(a1 + 36);
  result = 0;
  if ( v2 == a2 )
    result = 1;
  return result;
}


_DWORD *__fastcall Option::_save<std::string>(Option *a1, int a2, int *a3)
{
  int v3; // r5@1
  Option *v4; // r6@1
  int *v5; // r7@1
  int *v6; // r0@1
  int *v7; // r6@1
  __int64 v8; // kr00_8@1
  void *v9; // r0@4
  void *v10; // r0@5
  void **v11; // r0@6
  void *v12; // r0@6
  unsigned int *v14; // r2@8
  signed int v15; // r1@10
  unsigned int *v16; // r2@12
  signed int v17; // r1@14
  unsigned int *v18; // r2@16
  signed int v19; // r1@18
  int v20; // [sp+4h] [bp-DCh]@1
  int v21; // [sp+8h] [bp-D8h]@4
  void **v22; // [sp+Ch] [bp-D4h]@1
  int v23; // [sp+10h] [bp-D0h]@7
  void **v24; // [sp+14h] [bp-CCh]@1
  void **v25; // [sp+18h] [bp-C8h]@1
  int v26; // [sp+34h] [bp-ACh]@7
  int v27; // [sp+3Ch] [bp-A4h]@6
  int v28; // [sp+40h] [bp-A0h]@7

  v3 = a2;
  v4 = a1;
  v5 = a3;
  sub_119CB58((int)&v22, 24);
  sub_119C904((char *)&v24, *v5, *(_DWORD *)(*v5 - 12));
  v6 = (int *)Option::getSaveTag(v4);
  v7 = sub_119C854(&v20, v6) + 1;
  sub_119D48C(v7, (int)&v25);
  v8 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v8 == HIDWORD(v8) )
  {
    std::vector<PropertyFile::Property,std::allocator<PropertyFile::Property>>::_M_emplace_back_aux<PropertyFile::Property const&>(
      (_QWORD *)v3,
      (int)&v20);
  }
  else
    sub_119C854((int *)v8, &v20);
    sub_119C854((int *)(v8 + 4), v7);
    *(_DWORD *)(v3 + 4) += 8;
  v9 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v21 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v20 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = off_26D3F84;
  v22 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v22) = off_26D3F80[0];
  v24 = v11;
  v25 = &off_27734E8;
  v12 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v27 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v25 = &off_26D40A8;
  sub_119C954((unsigned int **)&v26);
  v22 = (void **)off_26D3F68;
  *(void ***)((char *)&v22 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v23 = 0;
  return sub_119C964(&v28);
}


_DWORD *__fastcall Option::_save<int>(Option *a1, int a2, int a3)
{
  int v3; // r5@1
  Option *v4; // r6@1
  int v5; // r7@1
  int *v6; // r0@1
  int *v7; // r6@1
  __int64 v8; // kr00_8@1
  void *v9; // r0@4
  void *v10; // r0@5
  void **v11; // r0@6
  void *v12; // r0@6
  unsigned int *v14; // r2@8
  signed int v15; // r1@10
  unsigned int *v16; // r2@12
  signed int v17; // r1@14
  unsigned int *v18; // r2@16
  signed int v19; // r1@18
  int v20; // [sp+4h] [bp-DCh]@1
  int v21; // [sp+8h] [bp-D8h]@4
  void **v22; // [sp+Ch] [bp-D4h]@1
  int v23; // [sp+10h] [bp-D0h]@7
  void **v24; // [sp+14h] [bp-CCh]@1
  void **v25; // [sp+18h] [bp-C8h]@1
  int v26; // [sp+34h] [bp-ACh]@7
  int v27; // [sp+3Ch] [bp-A4h]@6
  int v28; // [sp+40h] [bp-A0h]@7

  v3 = a2;
  v4 = a1;
  v5 = a3;
  sub_119CB58((int)&v22, 24);
  sub_119C914((int)&v24, v5);
  v6 = (int *)Option::getSaveTag(v4);
  v7 = sub_119C854(&v20, v6) + 1;
  sub_119D48C(v7, (int)&v25);
  v8 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v8 == HIDWORD(v8) )
  {
    std::vector<PropertyFile::Property,std::allocator<PropertyFile::Property>>::_M_emplace_back_aux<PropertyFile::Property const&>(
      (_QWORD *)v3,
      (int)&v20);
  }
  else
    sub_119C854((int *)v8, &v20);
    sub_119C854((int *)(v8 + 4), v7);
    *(_DWORD *)(v3 + 4) += 8;
  v9 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v21 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v9);
  v10 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v20 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v11 = off_26D3F84;
  v22 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v22) = off_26D3F80[0];
  v24 = v11;
  v25 = &off_27734E8;
  v12 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v27 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  v25 = &off_26D40A8;
  sub_119C954((unsigned int **)&v26);
  v22 = (void **)off_26D3F68;
  *(void ***)((char *)&v22 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v23 = 0;
  return sub_119C964(&v28);
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


signed int __fastcall Option::unregisterLock(Option *this, void *a2)
{
  Option *v2; // r2@1
  int v3; // r4@1
  signed int result; // r0@2
  void (__fastcall *v5)(int, int, signed int); // r3@4

  v2 = this;
  v3 = *((_DWORD *)this + 1);
  if ( v3 )
  {
    result = 0;
    if ( *(void **)(v3 + 16) == a2 )
    {
      *((_DWORD *)v2 + 1) = 0;
      v5 = *(void (__fastcall **)(int, int, signed int))(v3 + 8);
      if ( v5 )
        v5(v3, v3, 3);
      operator delete((void *)v3);
      result = 1;
    }
  }
  else
  return result;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v8 + 24) && !*(_BYTE *)(v8 + 38) && Option::getOptionOwnerType(v9) == 1 )
{
    v19 = *(_DWORD *)(v8 + 24);
    v20 = Option::getID(v9);
    v21 = *(_DWORD *)(v19 + 8);
    v22 = (Option *)(v19 + 4);
    if ( v21 )
    {
      v23 = v19 + 4;
      do
      {
        v24 = v21;
        while ( *(_DWORD *)(v24 + 16) < v20 )
        {
          v24 = *(_DWORD *)(v24 + 12);
          if ( !v24 )
          {
            v24 = v23;
            goto LABEL_29;
          }
        }
        v21 = *(_DWORD *)(v24 + 8);
        v23 = v24;
      }
      while ( v21 );
    }
    else
      v24 = v19 + 4;
LABEL_29:
    if ( (Option *)v24 != v22 )
      if ( *(_DWORD *)(v24 + 16) > v20 )
        v24 = v19 + 4;
      v25 = v24 == (_DWORD)v22;
      if ( (Option *)v24 != v22 )
        v22 = *(Option **)(v24 + 20);
        v25 = v22 == 0;
      if ( !v25 )
        Option::setOverrideSource(v9, v22);
  }
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  return v9;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


int __fastcall Option::requestSave(int result)
{
  if ( *(_DWORD *)(result + 60) )
    result = (*(int (__fastcall **)(_DWORD, _DWORD))(result + 64))(result + 52, 0);
  return result;
}


int __fastcall Option::getFloat(Option *this)
{
  Option *v1; // r1@1

  do
  {
    v1 = this;
    this = (Option *)*((_DWORD *)this + 12);
  }
  while ( this );
  return j_j_j__ZNK11FloatOption8getValueEv(v1);
}


int __fastcall Option::getValueNameMap(Option *this)
{
  Option *v1; // r1@1

  do
  {
    v1 = this;
    this = (Option *)*((_DWORD *)this + 12);
  }
  while ( this );
  return *((_DWORD *)v1 + 29);
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v8 + 24) && !*(_BYTE *)(v8 + 38) && Option::getOptionOwnerType(v9) == 1 )
{
    v19 = *(_DWORD *)(v8 + 24);
    v20 = Option::getID(v9);
    v21 = *(_DWORD *)(v19 + 8);
    v22 = (Option *)(v19 + 4);
    if ( v21 )
    {
      v23 = v19 + 4;
      do
      {
        v24 = v21;
        while ( *(_DWORD *)(v24 + 16) < v20 )
        {
          v24 = *(_DWORD *)(v24 + 12);
          if ( !v24 )
          {
            v24 = v23;
            goto LABEL_29;
          }
        }
        v21 = *(_DWORD *)(v24 + 8);
        v23 = v24;
      }
      while ( v21 );
    }
    else
      v24 = v19 + 4;
LABEL_29:
    if ( (Option *)v24 != v22 )
      if ( *(_DWORD *)(v24 + 16) > v20 )
        v24 = v19 + 4;
      v25 = v24 == (_DWORD)v22;
      if ( (Option *)v24 != v22 )
        v22 = *(Option **)(v24 + 20);
        v25 = v22 == 0;
      if ( !v25 )
        Option::setOverrideSource(v9, v22);
  }
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  return v9;
}


  if ( *(_DWORD *)(v9 + 24) && !*(_BYTE *)(v9 + 38) && Option::getOptionOwnerType(v10) == 1 )
{
    v20 = *(_DWORD *)(v9 + 24);
    v21 = Option::getID(v10);
    v22 = *(_DWORD *)(v20 + 8);
    v23 = (Option *)(v20 + 4);
    if ( v22 )
    {
      v24 = v20 + 4;
      do
      {
        v25 = v22;
        while ( *(_DWORD *)(v25 + 16) < v21 )
        {
          v25 = *(_DWORD *)(v25 + 12);
          if ( !v25 )
          {
            v25 = v24;
            goto LABEL_29;
          }
        }
        v22 = *(_DWORD *)(v25 + 8);
        v24 = v25;
      }
      while ( v22 );
    }
    else
      v25 = v20 + 4;
LABEL_29:
    if ( (Option *)v25 != v23 )
      if ( *(_DWORD *)(v25 + 16) > v21 )
        v25 = v20 + 4;
      v26 = v25 == (_DWORD)v23;
      if ( (Option *)v25 != v23 )
        v23 = *(Option **)(v25 + 20);
        v26 = v23 == 0;
      if ( !v26 )
        Option::setOverrideSource(v10, v23);
  }
  if ( v31 )
    (*(void (**)(void))(*(_DWORD *)v31 + 4))();
  return v10;
}


void __fastcall Option::registerLock(int a1, int a2, int a3)
{
  Option::registerLock(a1, a2, a3);
}


int __fastcall Option::set(int result, unsigned int a2, int a3)
{
  int v3; // r3@1

  v3 = *(_DWORD *)(result + 48);
  if ( v3 )
    JUMPOUT(v3 == 0, Option::setCoerceValueCallback);
  else
    result = j_j_j__ZN19InputModeBoolOption3setE9InputModeb(result, a2, a3);
  return result;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


int __fastcall Option::setRequestSaveCallback(int result, int a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r12@1
  int v4; // r1@1
  int (__cdecl *v5)(_DWORD, _DWORD, _DWORD, _DWORD); // r3@1
  __int64 v6; // [sp+0h] [bp-18h]@1
  int (__cdecl *v7)(_DWORD, _DWORD, _DWORD, _DWORD); // [sp+8h] [bp-10h]@1
  int v8; // [sp+Ch] [bp-Ch]@1

  v2 = *(_QWORD *)a2;
  v3 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = 0;
  v4 = *(_DWORD *)(a2 + 12);
  v6 = *(_QWORD *)(result + 52);
  *(_QWORD *)(result + 52) = v2;
  v7 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(result + 60);
  v5 = v7;
  *(_DWORD *)(result + 60) = v3;
  v8 = *(_DWORD *)(result + 64);
  *(_DWORD *)(result + 64) = v4;
  if ( v5 )
    result = v5(&v6, &v6, 3, v5);
  return result;
}


  if ( Option::getBool(a2) == 1 )
{
    v4 = *(_DWORD *)(v3 + 220);
    v5 = v3 + 216;
    v6 = *(_DWORD *)(v3 + 104);
    for ( i = v3 + 216; v4; v4 = *(_DWORD *)(v4 + 8) )
      i = v4;
    if ( i != v5 && !*(_BYTE *)(i + 16) )
      v5 = i;
    v8 = ClientInstance::getSceneFactory(*(ClientInstance **)(v5 + 20));
    v9 = operator new(4u);
    LODWORD(v10) = sub_C21AF0;
    *v9 = v2;
    HIDWORD(v10) = sub_C21ACE;
    v16 = v9;
    v17 = v10;
    SceneFactory::createCellularDataWarningScreen((unsigned __int64 *)&v18, v8, (int)&v16);
    SceneStack::pushScreen(v6, (int)&v18, 0);
    v11 = v19;
    if ( v19 )
    {
      v12 = (unsigned int *)(v19 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
      }
      else
        v13 = (*v12)--;
      if ( v13 == 1 )
        v14 = (unsigned int *)(v11 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
        if ( &pthread_create )
        {
          __dmb();
          do
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
        }
        else
          v15 = (*v14)--;
        if ( v15 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
    }
    if ( (_DWORD)v17 )
      ((void (*)(void))v17)();
  }
}


int __fastcall Option::getIntMin(Option *this)
{
  Option *v1; // r1@1

  do
  {
    v1 = this;
    this = (Option *)*((_DWORD *)this + 12);
  }
  while ( this );
  return *((_DWORD *)v1 + 18);
}


  if ( *(_DWORD *)(v8 + 24) && !*(_BYTE *)(v8 + 38) && Option::getOptionOwnerType(v9) == 1 )
{
    v19 = *(_DWORD *)(v8 + 24);
    v20 = Option::getID(v9);
    v21 = *(_DWORD *)(v19 + 8);
    v22 = (Option *)(v19 + 4);
    if ( v21 )
    {
      v23 = v19 + 4;
      do
      {
        v24 = v21;
        while ( *(_DWORD *)(v24 + 16) < v20 )
        {
          v24 = *(_DWORD *)(v24 + 12);
          if ( !v24 )
          {
            v24 = v23;
            goto LABEL_29;
          }
        }
        v21 = *(_DWORD *)(v24 + 8);
        v23 = v24;
      }
      while ( v21 );
    }
    else
      v24 = v19 + 4;
LABEL_29:
    if ( (Option *)v24 != v22 )
      if ( *(_DWORD *)(v24 + 16) > v20 )
        v24 = v19 + 4;
      v25 = v24 == (_DWORD)v22;
      if ( (Option *)v24 != v22 )
        v22 = *(Option **)(v24 + 20);
        v25 = v22 == 0;
      if ( !v25 )
        Option::setOverrideSource(v9, v22);
  }
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  return v9;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v9 + 24) && !*(_BYTE *)(v9 + 38) && Option::getOptionOwnerType(v10) == 1 )
{
    v20 = *(_DWORD *)(v9 + 24);
    v21 = Option::getID(v10);
    v22 = *(_DWORD *)(v20 + 8);
    v23 = (Option *)(v20 + 4);
    if ( v22 )
    {
      v24 = v20 + 4;
      do
      {
        v25 = v22;
        while ( *(_DWORD *)(v25 + 16) < v21 )
        {
          v25 = *(_DWORD *)(v25 + 12);
          if ( !v25 )
          {
            v25 = v24;
            goto LABEL_29;
          }
        }
        v22 = *(_DWORD *)(v25 + 8);
        v24 = v25;
      }
      while ( v22 );
    }
    else
      v25 = v20 + 4;
LABEL_29:
    if ( (Option *)v25 != v23 )
      if ( *(_DWORD *)(v25 + 16) > v21 )
        v25 = v20 + 4;
      v26 = v25 == (_DWORD)v23;
      if ( (Option *)v25 != v23 )
        v23 = *(Option **)(v25 + 20);
        v26 = v23 == 0;
      if ( !v26 )
        Option::setOverrideSource(v10, v23);
  }
  if ( v31 )
    (*(void (**)(void))(*(_DWORD *)v31 + 4))();
  return v10;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v10 + 24) && !*(_BYTE *)(v10 + 38) && Option::getOptionOwnerType(v11) == 1 )
{
    v21 = *(_DWORD *)(v10 + 24);
    v22 = Option::getID(v11);
    v23 = *(_DWORD *)(v21 + 8);
    v24 = (Option *)(v21 + 4);
    if ( v23 )
    {
      v25 = v21 + 4;
      do
      {
        v26 = v23;
        while ( *(_DWORD *)(v26 + 16) < v22 )
        {
          v26 = *(_DWORD *)(v26 + 12);
          if ( !v26 )
          {
            v26 = v25;
            goto LABEL_29;
          }
        }
        v23 = *(_DWORD *)(v26 + 8);
        v25 = v26;
      }
      while ( v23 );
    }
    else
      v26 = v21 + 4;
LABEL_29:
    if ( (Option *)v26 != v24 )
      if ( *(_DWORD *)(v26 + 16) > v22 )
        v26 = v21 + 4;
      v27 = v26 == (_DWORD)v24;
      if ( (Option *)v26 != v24 )
        v24 = *(Option **)(v26 + 20);
        v27 = v24 == 0;
      if ( !v27 )
        Option::setOverrideSource(v11, v24);
  }
  if ( v32 )
    (*(void (**)(void))(*(_DWORD *)v32 + 4))();
  return v11;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v9 + 24) && !*(_BYTE *)(v9 + 38) && Option::getOptionOwnerType(v10) == 1 )
{
    v20 = *(_DWORD *)(v9 + 24);
    v21 = Option::getID(v10);
    v22 = *(_DWORD *)(v20 + 8);
    v23 = (Option *)(v20 + 4);
    if ( v22 )
    {
      v24 = v20 + 4;
      do
      {
        v25 = v22;
        while ( *(_DWORD *)(v25 + 16) < v21 )
        {
          v25 = *(_DWORD *)(v25 + 12);
          if ( !v25 )
          {
            v25 = v24;
            goto LABEL_29;
          }
        }
        v22 = *(_DWORD *)(v25 + 8);
        v24 = v25;
      }
      while ( v22 );
    }
    else
      v25 = v20 + 4;
LABEL_29:
    if ( (Option *)v25 != v23 )
      if ( *(_DWORD *)(v25 + 16) > v21 )
        v25 = v20 + 4;
      v26 = v25 == (_DWORD)v23;
      if ( (Option *)v25 != v23 )
        v23 = *(Option **)(v25 + 20);
        v26 = v23 == 0;
      if ( !v26 )
        Option::setOverrideSource(v10, v23);
  }
  if ( v31 )
    (*(void (**)(void))(*(_DWORD *)v31 + 4))();
  return v10;
}


int __fastcall Option::Option(int a1, unsigned int a2, unsigned int a3, int a4, int *a5, int *a6, int a7)
{
  int v7; // r4@1
  unsigned __int64 v8; // r6@1
  int v9; // r9@1
  int v10; // r10@1

  v7 = a1;
  v8 = __PAIR__(a3, a2);
  v9 = a4;
  *(_DWORD *)a1 = &off_26D99E0;
  *(_DWORD *)(a1 + 4) = 0;
  v10 = a1 + 4;
  *(_DWORD *)(v10 + 4) = 0;
  *(_DWORD *)(v10 + 8) = 0;
  *(_DWORD *)(v10 + 12) = 0;
  sub_119C854((int *)(a1 + 20), a6);
  sub_119C884((void **)(v7 + 24), (const char *)&unk_257BC67);
  *(_QWORD *)(v7 + 28) = v8;
  *(_DWORD *)(v7 + 36) = a7;
  sub_119C854((int *)(v7 + 40), a5);
  *(_DWORD *)(v7 + 60) = 0;
  *(_DWORD *)(v7 + 44) = v9;
  *(_DWORD *)(v7 + 48) = 0;
  return v7;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


_DWORD *__fastcall Option::_save<bool>(Option *a1, int a2)
{
  int v2; // r5@1
  Option *v3; // r6@1
  int *v4; // r0@1
  int *v5; // r6@1
  __int64 v6; // kr00_8@1
  void *v7; // r0@4
  void *v8; // r0@5
  void **v9; // r0@6
  void *v10; // r0@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  unsigned int *v14; // r2@12
  signed int v15; // r1@14
  unsigned int *v16; // r2@16
  signed int v17; // r1@18
  int v18; // [sp+4h] [bp-DCh]@1
  int v19; // [sp+8h] [bp-D8h]@4
  void **v20; // [sp+Ch] [bp-D4h]@1
  int v21; // [sp+10h] [bp-D0h]@7
  void **v22; // [sp+14h] [bp-CCh]@1
  void **v23; // [sp+18h] [bp-C8h]@1
  int v24; // [sp+34h] [bp-ACh]@7
  int v25; // [sp+3Ch] [bp-A4h]@6
  int v26; // [sp+40h] [bp-A0h]@7

  v2 = a2;
  v3 = a1;
  sub_119CB58((int)&v20, 24);
  sub_119D6CC((char *)&v22);
  v4 = (int *)Option::getSaveTag(v3);
  v5 = sub_119C854(&v18, v4) + 1;
  sub_119D48C(v5, (int)&v23);
  v6 = *(_QWORD *)(v2 + 4);
  if ( (_DWORD)v6 == HIDWORD(v6) )
  {
    std::vector<PropertyFile::Property,std::allocator<PropertyFile::Property>>::_M_emplace_back_aux<PropertyFile::Property const&>(
      (_QWORD *)v2,
      (int)&v18);
  }
  else
    sub_119C854((int *)v6, &v18);
    sub_119C854((int *)(v6 + 4), v5);
    *(_DWORD *)(v2 + 4) += 8;
  v7 = (void *)(v19 - 12);
  if ( (int *)(v19 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v19 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v18 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
  v9 = off_26D3F84;
  v20 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v20) = off_26D3F80[0];
  v22 = v9;
  v23 = &off_27734E8;
  v10 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v25 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v10);
  v23 = &off_26D40A8;
  sub_119C954((unsigned int **)&v24);
  v20 = (void **)off_26D3F68;
  *(void ***)((char *)&v20 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v21 = 0;
  return sub_119C964(&v26);
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v11) == 1 )
{
    v25 = *(_DWORD *)(v7 + 24);
    v26 = Option::getID(v11);
    v27 = *(_DWORD *)(v25 + 8);
    v28 = (Option *)(v25 + 4);
    if ( v27 )
    {
      v29 = v25 + 4;
      do
      {
        v30 = v27;
        while ( *(_DWORD *)(v30 + 16) < v26 )
        {
          v30 = *(_DWORD *)(v30 + 12);
          if ( !v30 )
          {
            v30 = v29;
            goto LABEL_29;
          }
        }
        v27 = *(_DWORD *)(v30 + 8);
        v29 = v30;
      }
      while ( v27 );
    }
    else
      v30 = v25 + 4;
LABEL_29:
    if ( (Option *)v30 != v28 )
      if ( *(_DWORD *)(v30 + 16) > v26 )
        v30 = v25 + 4;
      _ZF = v30 == (_DWORD)v28;
      if ( (Option *)v30 != v28 )
        v28 = *(Option **)(v30 + 20);
        _ZF = v28 == 0;
      if ( !_ZF )
        Option::setOverrideSource(v11, v28);
  }
  if ( v37 )
    (*(void (**)(void))(*(_DWORD *)v37 + 4))();
  return v11;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


int __fastcall Option::toggle(int result)
{
  int v1; // r1@1

  v1 = *(_DWORD *)(result + 48);
  if ( v1 )
    JUMPOUT(v1 == 0, Option::reset);
  else
    result = j_j_j__ZN10BoolOption6toggleEv((BoolOption *)result);
  return result;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v11) == 1 )
{
    v21 = *(_DWORD *)(v7 + 24);
    v22 = Option::getID(v11);
    v23 = *(_DWORD *)(v21 + 8);
    v24 = (Option *)(v21 + 4);
    if ( v23 )
    {
      v25 = v21 + 4;
      do
      {
        v26 = v23;
        while ( *(_DWORD *)(v26 + 16) < v22 )
        {
          v26 = *(_DWORD *)(v26 + 12);
          if ( !v26 )
          {
            v26 = v25;
            goto LABEL_29;
          }
        }
        v23 = *(_DWORD *)(v26 + 8);
        v25 = v26;
      }
      while ( v23 );
    }
    else
      v26 = v21 + 4;
LABEL_29:
    if ( (Option *)v26 != v24 )
      if ( *(_DWORD *)(v26 + 16) > v22 )
        v26 = v21 + 4;
      v27 = v26 == (_DWORD)v24;
      if ( (Option *)v26 != v24 )
        v24 = *(Option **)(v26 + 20);
        v27 = v24 == 0;
      if ( !v27 )
        Option::setOverrideSource(v11, v24);
  }
  if ( v32 )
    (*(void (**)(void))(*(_DWORD *)v32 + 4))();
  return v11;
}


char *__fastcall Option::getString(Option *this)
{
  Option *v1; // r1@1
  StringOption *v2; // r0@2

  v1 = this;
  do
  {
    v2 = v1;
    v1 = (Option *)*((_DWORD *)v1 + 12);
  }
  while ( v1 );
  return StringOption::getValue(v2);
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v9 + 24) && !*(_BYTE *)(v9 + 38) && Option::getOptionOwnerType(v10) == 1 )
{
    v20 = *(_DWORD *)(v9 + 24);
    v21 = Option::getID(v10);
    v22 = *(_DWORD *)(v20 + 8);
    v23 = (Option *)(v20 + 4);
    if ( v22 )
    {
      v24 = v20 + 4;
      do
      {
        v25 = v22;
        while ( *(_DWORD *)(v25 + 16) < v21 )
        {
          v25 = *(_DWORD *)(v25 + 12);
          if ( !v25 )
          {
            v25 = v24;
            goto LABEL_29;
          }
        }
        v22 = *(_DWORD *)(v25 + 8);
        v24 = v25;
      }
      while ( v22 );
    }
    else
      v25 = v20 + 4;
LABEL_29:
    if ( (Option *)v25 != v23 )
      if ( *(_DWORD *)(v25 + 16) > v21 )
        v25 = v20 + 4;
      v26 = v25 == (_DWORD)v23;
      if ( (Option *)v25 != v23 )
        v23 = *(Option **)(v25 + 20);
        v26 = v23 == 0;
      if ( !v26 )
        Option::setOverrideSource(v10, v23);
  }
  if ( v31 )
    (*(void (**)(void))(*(_DWORD *)v31 + 4))();
  return v10;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


int __fastcall Option::set(int result, int a2)
{
  int v2; // r2@1

  v2 = *(_DWORD *)(result + 48);
  if ( v2 )
    JUMPOUT(v2 == 0, Option::set);
  else
    result = j_j_j__ZN9IntOption3setEi((IntOption *)result, a2);
  return result;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


char *__fastcall Option::registerObserver(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r3@1
  __int64 *v5; // r0@1
  int v6; // r1@1 OVERLAPPED
  int v7; // r2@1
  char *result; // r0@2
  int v9; // [sp+4h] [bp-Ch]@1

  v3 = a1;
  v4 = a3;
  v9 = a2;
  v5 = (__int64 *)(a1 + 8);
  *(_QWORD *)&v6 = *(_QWORD *)(v3 + 12);
  if ( v6 == v7 )
  {
    result = std::vector<OptionObserver,std::allocator<OptionObserver>>::_M_emplace_back_aux<void *&,std::function<void ()(Option *)> &>(
               v5,
               &v9,
               v4);
  }
  else
    __gnu_cxx::new_allocator<OptionObserver>::construct<OptionObserver,void *&,std::function<void ()(Option *)> &>(
      (int)v5,
      v6,
      &v9,
      v4);
    result = (char *)(*(_DWORD *)(v3 + 12) + 36);
    *(_DWORD *)(v3 + 12) = result;
  return result;
}


int __fastcall Option::setCoerceValueCallback(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  void (__fastcall *v4)(int *); // r3@1
  int result; // r0@3
  int v6; // [sp+0h] [bp-20h]@2
  int (*v7)(void); // [sp+8h] [bp-18h]@1
  int v8; // [sp+Ch] [bp-14h]@2

  v2 = a1;
  v3 = a2;
  v7 = 0;
  v4 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v4 )
  {
    v4(&v6);
    v8 = *(_DWORD *)(v3 + 12);
    v7 = *(int (**)(void))(v3 + 8);
  }
  result = StringOption::setCoerceValueCallback(v2, (int)&v6);
  if ( v7 )
    result = v7();
  return result;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


_DWORD *__fastcall Option::_save<float>(Option *a1, int a2, int a3)
{
  int v3; // r5@1
  Option *v4; // r6@1
  int *v12; // r0@1
  int *v13; // r6@1
  __int64 v14; // kr00_8@1
  void *v15; // r0@4
  void *v16; // r0@5
  void **v17; // r0@6
  void *v18; // r0@6
  unsigned int *v20; // r2@8
  signed int v21; // r1@10
  unsigned int *v22; // r2@12
  signed int v23; // r1@14
  unsigned int *v24; // r2@16
  signed int v25; // r1@18
  int v26; // [sp+4h] [bp-DCh]@1
  int v27; // [sp+8h] [bp-D8h]@4
  void **v28; // [sp+Ch] [bp-D4h]@1
  int v29; // [sp+10h] [bp-D0h]@7
  void **v30; // [sp+14h] [bp-CCh]@1
  void **v31; // [sp+18h] [bp-C8h]@1
  int v32; // [sp+34h] [bp-ACh]@7
  int v33; // [sp+3Ch] [bp-A4h]@6
  int v34; // [sp+40h] [bp-A0h]@7

  v3 = a2;
  v4 = a1;
  _R7 = a3;
  sub_119CB58((int)&v28, 24);
  __asm
  {
    VMOV            S0, R7
    VCVT.F64.F32    D0, S0
    VMOV            R2, R3, D0
  }
  sub_119D56C((char *)&v30);
  v12 = (int *)Option::getSaveTag(v4);
  v13 = sub_119C854(&v26, v12) + 1;
  sub_119D48C(v13, (int)&v31);
  v14 = *(_QWORD *)(v3 + 4);
  if ( (_DWORD)v14 == HIDWORD(v14) )
    std::vector<PropertyFile::Property,std::allocator<PropertyFile::Property>>::_M_emplace_back_aux<PropertyFile::Property const&>(
      (_QWORD *)v3,
      (int)&v26);
  else
    sub_119C854((int *)v14, &v26);
    sub_119C854((int *)(v14 + 4), v13);
    *(_DWORD *)(v3 + 4) += 8;
  v15 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v27 - 4);
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
      j_j_j_j_j__ZdlPv_9_1(v15);
  v16 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v26 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v16);
  v17 = off_26D3F84;
  v28 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v28) = off_26D3F80[0];
  v30 = v17;
  v31 = &off_27734E8;
  v18 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v33 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v31 = &off_26D40A8;
  sub_119C954((unsigned int **)&v32);
  v28 = (void **)off_26D3F68;
  *(void ***)((char *)&v28 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v29 = 0;
  return sub_119C964(&v34);
}


char *__fastcall Option::getSaveTag(Option *this)
{
  return (char *)this + 20;
}


  if ( *(_DWORD *)(v9 + 24) && !*(_BYTE *)(v9 + 38) && Option::getOptionOwnerType(v10) == 1 )
{
    v20 = *(_DWORD *)(v9 + 24);
    v21 = Option::getID(v10);
    v22 = *(_DWORD *)(v20 + 8);
    v23 = (Option *)(v20 + 4);
    if ( v22 )
    {
      v24 = v20 + 4;
      do
      {
        v25 = v22;
        while ( *(_DWORD *)(v25 + 16) < v21 )
        {
          v25 = *(_DWORD *)(v25 + 12);
          if ( !v25 )
          {
            v25 = v24;
            goto LABEL_29;
          }
        }
        v22 = *(_DWORD *)(v25 + 8);
        v24 = v25;
      }
      while ( v22 );
    }
    else
      v25 = v20 + 4;
LABEL_29:
    if ( (Option *)v25 != v23 )
      if ( *(_DWORD *)(v25 + 16) > v21 )
        v25 = v20 + 4;
      v26 = v25 == (_DWORD)v23;
      if ( (Option *)v25 != v23 )
        v23 = *(Option **)(v25 + 20);
        v26 = v23 == 0;
      if ( !v26 )
        Option::setOverrideSource(v10, v23);
  }
  if ( v31 )
    (*(void (**)(void))(*(_DWORD *)v31 + 4))();
  return v10;
}


int __fastcall Option::canModify(Option *this)
{
  int result; // r0@2
  int v2; // r0@3

  if ( *((_DWORD *)this + 12) )
  {
    result = 0;
  }
  else
    v2 = *((_DWORD *)this + 1);
    if ( v2 )
    {
      if ( !*(_DWORD *)(v2 + 8) )
        sub_119C8E4();
      result = (*(int (**)(void))(v2 + 12))();
    }
    else
      result = 1;
  return result;
}


int __fastcall Option::getFloatMin(Option *this)
{
  Option *v1; // r1@1

  do
  {
    v1 = this;
    this = (Option *)*((_DWORD *)this + 12);
  }
  while ( this );
  return *((_DWORD *)v1 + 17);
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v8 + 24) && !*(_BYTE *)(v8 + 38) && Option::getOptionOwnerType(v9) == 1 )
{
    v19 = *(_DWORD *)(v8 + 24);
    v20 = Option::getID(v9);
    v21 = *(_DWORD *)(v19 + 8);
    v22 = (Option *)(v19 + 4);
    if ( v21 )
    {
      v23 = v19 + 4;
      do
      {
        v24 = v21;
        while ( *(_DWORD *)(v24 + 16) < v20 )
        {
          v24 = *(_DWORD *)(v24 + 12);
          if ( !v24 )
          {
            v24 = v23;
            goto LABEL_29;
          }
        }
        v21 = *(_DWORD *)(v24 + 8);
        v23 = v24;
      }
      while ( v21 );
    }
    else
      v24 = v19 + 4;
LABEL_29:
    if ( (Option *)v24 != v22 )
      if ( *(_DWORD *)(v24 + 16) > v20 )
        v24 = v19 + 4;
      v25 = v24 == (_DWORD)v22;
      if ( (Option *)v24 != v22 )
        v22 = *(Option **)(v24 + 20);
        v25 = v22 == 0;
      if ( !v25 )
        Option::setOverrideSource(v9, v22);
  }
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  return v9;
}


void __fastcall Option::~Option(Option *this)
{
  Option::~Option(this);
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


int __fastcall Option::getBool(Option *this)
{
  Option *v1; // r1@1

  do
  {
    v1 = this;
    this = (Option *)*((_DWORD *)this + 12);
  }
  while ( this );
  return j_j_j__ZNK10BoolOption8getValueEv(v1);
}


signed int __fastcall Option::read(const void **a1, signed int *a2)
{
  signed int *v2; // r4@1
  const void **v3; // r5@1
  signed int v5; // r0@6

  v2 = a2;
  v3 = a1;
  if ( sub_119C9E8(a1, "true") && sub_119C9E8(v3, "YES") )
  {
    if ( sub_119C9E8(v3, "false") && sub_119C9E8(v3, "NO") )
      return sscanf((const char *)*v3, "%f", v2) != 0;
    v5 = 0;
  }
  else
    v5 = 1065353216;
  *v2 = v5;
  return 1;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v8 + 24) && !*(_BYTE *)(v8 + 38) && Option::getOptionOwnerType(v9) == 1 )
{
    v19 = *(_DWORD *)(v8 + 24);
    v20 = Option::getID(v9);
    v21 = *(_DWORD *)(v19 + 8);
    v22 = (Option *)(v19 + 4);
    if ( v21 )
    {
      v23 = v19 + 4;
      do
      {
        v24 = v21;
        while ( *(_DWORD *)(v24 + 16) < v20 )
        {
          v24 = *(_DWORD *)(v24 + 12);
          if ( !v24 )
          {
            v24 = v23;
            goto LABEL_29;
          }
        }
        v21 = *(_DWORD *)(v24 + 8);
        v23 = v24;
      }
      while ( v21 );
    }
    else
      v24 = v19 + 4;
LABEL_29:
    if ( (Option *)v24 != v22 )
      if ( *(_DWORD *)(v24 + 16) > v20 )
        v24 = v19 + 4;
      v25 = v24 == (_DWORD)v22;
      if ( (Option *)v24 != v22 )
        v22 = *(Option **)(v24 + 20);
        v25 = v22 == 0;
      if ( !v25 )
        Option::setOverrideSource(v9, v22);
  }
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  return v9;
}


  if ( *(_DWORD *)(v8 + 24) && !*(_BYTE *)(v8 + 38) && Option::getOptionOwnerType(v9) == 1 )
{
    v19 = *(_DWORD *)(v8 + 24);
    v20 = Option::getID(v9);
    v21 = *(_DWORD *)(v19 + 8);
    v22 = (Option *)(v19 + 4);
    if ( v21 )
    {
      v23 = v19 + 4;
      do
      {
        v24 = v21;
        while ( *(_DWORD *)(v24 + 16) < v20 )
        {
          v24 = *(_DWORD *)(v24 + 12);
          if ( !v24 )
          {
            v24 = v23;
            goto LABEL_29;
          }
        }
        v21 = *(_DWORD *)(v24 + 8);
        v23 = v24;
      }
      while ( v21 );
    }
    else
      v24 = v19 + 4;
LABEL_29:
    if ( (Option *)v24 != v22 )
      if ( *(_DWORD *)(v24 + 16) > v20 )
        v24 = v19 + 4;
      v25 = v24 == (_DWORD)v22;
      if ( (Option *)v24 != v22 )
        v22 = *(Option **)(v24 + 20);
        v25 = v22 == 0;
      if ( !v25 )
        Option::setOverrideSource(v9, v22);
  }
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  return v9;
}


int __fastcall Option::reset(int result)
{
  if ( !*(_DWORD *)(result + 48) )
    result = (int)j_j_j__ZN6Option5resetE9InputMode((IntOption *)result, 0);
  return result;
}


  if ( *(_DWORD *)(v9 + 24) && !*(_BYTE *)(v9 + 38) && Option::getOptionOwnerType(v10) == 1 )
{
    v20 = *(_DWORD *)(v9 + 24);
    v21 = Option::getID(v10);
    v22 = *(_DWORD *)(v20 + 8);
    v23 = (Option *)(v20 + 4);
    if ( v22 )
    {
      v24 = v20 + 4;
      do
      {
        v25 = v22;
        while ( *(_DWORD *)(v25 + 16) < v21 )
        {
          v25 = *(_DWORD *)(v25 + 12);
          if ( !v25 )
          {
            v25 = v24;
            goto LABEL_29;
          }
        }
        v22 = *(_DWORD *)(v25 + 8);
        v24 = v25;
      }
      while ( v22 );
    }
    else
      v25 = v20 + 4;
LABEL_29:
    if ( (Option *)v25 != v23 )
      if ( *(_DWORD *)(v25 + 16) > v21 )
        v25 = v20 + 4;
      v26 = v25 == (_DWORD)v23;
      if ( (Option *)v25 != v23 )
        v23 = *(Option **)(v25 + 20);
        v26 = v23 == 0;
      if ( !v26 )
        Option::setOverrideSource(v10, v23);
  }
  if ( v31 )
    (*(void (**)(void))(*(_DWORD *)v31 + 4))();
  return v10;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v8 + 24) && !*(_BYTE *)(v8 + 38) && Option::getOptionOwnerType(v9) == 1 )
{
    v19 = *(_DWORD *)(v8 + 24);
    v20 = Option::getID(v9);
    v21 = *(_DWORD *)(v19 + 8);
    v22 = (Option *)(v19 + 4);
    if ( v21 )
    {
      v23 = v19 + 4;
      do
      {
        v24 = v21;
        while ( *(_DWORD *)(v24 + 16) < v20 )
        {
          v24 = *(_DWORD *)(v24 + 12);
          if ( !v24 )
          {
            v24 = v23;
            goto LABEL_29;
          }
        }
        v21 = *(_DWORD *)(v24 + 8);
        v23 = v24;
      }
      while ( v21 );
    }
    else
      v24 = v19 + 4;
LABEL_29:
    if ( (Option *)v24 != v22 )
      if ( *(_DWORD *)(v24 + 16) > v20 )
        v24 = v19 + 4;
      v25 = v24 == (_DWORD)v22;
      if ( (Option *)v24 != v22 )
        v22 = *(Option **)(v24 + 20);
        v25 = v22 == 0;
      if ( !v25 )
        Option::setOverrideSource(v9, v22);
  }
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  return v9;
}


  if ( Option::canModify(**a1) != 1 )
{
  if ( !*(_DWORD *)(*v3 - 12) )
  {
    v13 = *v2;
    sub_21E94B4((void **)&v25, "options.defaultName");
    I18n::get(&v26, (int **)&v25);
    if ( !Option::hasOverrideSource(v13) )
      StringOption::set((int)v13, (const void **)&v26);
    v14 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
    {
      v16 = (unsigned int *)(v26 - 4);
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
        j_j_j_j__ZdlPv_9(v14);
    }
    v15 = (void *)(v25 - 12);
    if ( (int *)(v25 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v25 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    return 0;
  }
  v5 = *(I18n **)v2[1];
  v23 = 0LL;
  v24 = 0;
  v6 = Util::ProfanityFilter::findProfanity(v5, v3, (unsigned __int64 *)&v23);
  v7 = v23;
  if ( (_DWORD)v23 != HIDWORD(v23) )
    do
      v10 = (int *)(*(_DWORD *)v7 - 12);
      if ( v10 != &dword_28898C0 )
        v8 = (unsigned int *)(*(_DWORD *)v7 - 4);
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
      LODWORD(v7) = v7 + 4;
    while ( (_DWORD)v7 != HIDWORD(v7) );
    LODWORD(v7) = v23;
  if ( (_DWORD)v7 )
    operator delete((void *)v7);
  if ( v6 != 1 )
    return 1;
  Util::ProfanityFilter::getProfanityModalData((Util::ProfanityFilter *)&v22);
  v21 = 0;
  LODWORD(v11) = &v20;
  MinecraftScreenController::_displayCustomModalPopup((int)v4, (int)&v22, v11);
  if ( v21 )
    v21();
  ModalScreenData::~ModalScreenData((ModalScreenData *)&v22);
  return 0;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v8 + 24) && !*(_BYTE *)(v8 + 38) && Option::getOptionOwnerType(v9) == 1 )
{
    v19 = *(_DWORD *)(v8 + 24);
    v20 = Option::getID(v9);
    v21 = *(_DWORD *)(v19 + 8);
    v22 = (Option *)(v19 + 4);
    if ( v21 )
    {
      v23 = v19 + 4;
      do
      {
        v24 = v21;
        while ( *(_DWORD *)(v24 + 16) < v20 )
        {
          v24 = *(_DWORD *)(v24 + 12);
          if ( !v24 )
          {
            v24 = v23;
            goto LABEL_29;
          }
        }
        v21 = *(_DWORD *)(v24 + 8);
        v23 = v24;
      }
      while ( v21 );
    }
    else
      v24 = v19 + 4;
LABEL_29:
    if ( (Option *)v24 != v22 )
      if ( *(_DWORD *)(v24 + 16) > v20 )
        v24 = v19 + 4;
      v25 = v24 == (_DWORD)v22;
      if ( (Option *)v24 != v22 )
        v22 = *(Option **)(v24 + 20);
        v25 = v22 == 0;
      if ( !v25 )
        Option::setOverrideSource(v9, v22);
  }
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  return v9;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


int __fastcall Option::registerTelemetryProperty(int a1, int *a2)
{
  int v2; // r4@1

  v2 = a1;
  EntityInteraction::setInteractText((int *)(a1 + 24), a2);
  return v2;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


Option *__fastcall Option::~Option(Option *this)
{
  Option *v1; // r4@1
  Option *v2; // r0@1
  void (*v3)(void); // r3@3
  int v4; // r1@5
  void *v5; // r0@5
  int v6; // r1@6
  void *v7; // r0@6
  int v8; // r1@7
  void *v9; // r0@7
  int v10; // r5@8 OVERLAPPED
  int v11; // r6@8 OVERLAPPED
  void (*v12)(void); // r3@9
  void (*v13)(void); // r3@11
  int v14; // r5@17
  void (__fastcall *v15)(_DWORD, _DWORD, signed int); // r3@18
  unsigned int *v17; // r2@22
  signed int v18; // r1@24
  unsigned int *v19; // r2@26
  signed int v20; // r1@28
  unsigned int *v21; // r2@30
  signed int v22; // r1@32

  v1 = this;
  *(_DWORD *)this = &off_26D99E0;
  v2 = (Option *)*((_DWORD *)this + 12);
  if ( v2 )
    Option::unregisterObserver(v2, (void *)v1);
  v3 = (void (*)(void))*((_DWORD *)v1 + 15);
  if ( v3 )
    v3();
  v4 = *((_DWORD *)v1 + 10);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
  {
    v17 = (unsigned int *)(v4 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v5);
  }
  v6 = *((_DWORD *)v1 + 6);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v6 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  v8 = *((_DWORD *)v1 + 5);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v8 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
  *(_QWORD *)&v10 = *((_QWORD *)v1 + 1);
  if ( v10 != v11 )
    do
      v12 = *(void (**)(void))(v10 + 28);
      if ( v12 )
        v12();
      v13 = *(void (**)(void))(v10 + 12);
      if ( v13 )
        v13();
      v10 += 36;
    while ( v11 != v10 );
    v10 = *((_DWORD *)v1 + 2);
  if ( v10 )
    operator delete((void *)v10);
  v14 = *((_DWORD *)v1 + 1);
  if ( v14 )
    v15 = *(void (__fastcall **)(_DWORD, _DWORD, signed int))(v14 + 8);
    if ( v15 )
      v15(*((_DWORD *)v1 + 1), *((_DWORD *)v1 + 1), 3);
    operator delete((void *)v14);
  *((_DWORD *)v1 + 1) = 0;
  return v1;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


int __fastcall Option::setCoerceSaveValueCallback(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  void (__fastcall *v4)(int *); // r3@1
  int result; // r0@3
  int v6; // [sp+0h] [bp-20h]@2
  int (*v7)(void); // [sp+8h] [bp-18h]@1
  int v8; // [sp+Ch] [bp-14h]@2

  v2 = a1;
  v3 = a2;
  v7 = 0;
  v4 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v4 )
  {
    v4(&v6);
    v8 = *(_DWORD *)(v3 + 12);
    v7 = *(int (**)(void))(v3 + 8);
  }
  result = IntOption::setCoerceSaveValueCallback(v2, (int)&v6);
  if ( v7 )
    result = v7();
  return result;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v11) == 1 )
{
    v21 = *(_DWORD *)(v7 + 24);
    v22 = Option::getID(v11);
    v23 = *(_DWORD *)(v21 + 8);
    v24 = (Option *)(v21 + 4);
    if ( v23 )
    {
      v25 = v21 + 4;
      do
      {
        v26 = v23;
        while ( *(_DWORD *)(v26 + 16) < v22 )
        {
          v26 = *(_DWORD *)(v26 + 12);
          if ( !v26 )
          {
            v26 = v25;
            goto LABEL_29;
          }
        }
        v23 = *(_DWORD *)(v26 + 8);
        v25 = v26;
      }
      while ( v23 );
    }
    else
      v26 = v21 + 4;
LABEL_29:
    if ( (Option *)v26 != v24 )
      if ( *(_DWORD *)(v26 + 16) > v22 )
        v26 = v21 + 4;
      v27 = v26 == (_DWORD)v24;
      if ( (Option *)v26 != v24 )
        v24 = *(Option **)(v26 + 20);
        v27 = v24 == 0;
      if ( !v27 )
        Option::setOverrideSource(v11, v24);
  }
  if ( v32 )
    (*(void (**)(void))(*(_DWORD *)v32 + 4))();
  return v11;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v8 + 24) && !*(_BYTE *)(v8 + 38) && Option::getOptionOwnerType(v9) == 1 )
{
    v19 = *(_DWORD *)(v8 + 24);
    v20 = Option::getID(v9);
    v21 = *(_DWORD *)(v19 + 8);
    v22 = (Option *)(v19 + 4);
    if ( v21 )
    {
      v23 = v19 + 4;
      do
      {
        v24 = v21;
        while ( *(_DWORD *)(v24 + 16) < v20 )
        {
          v24 = *(_DWORD *)(v24 + 12);
          if ( !v24 )
          {
            v24 = v23;
            goto LABEL_29;
          }
        }
        v21 = *(_DWORD *)(v24 + 8);
        v23 = v24;
      }
      while ( v21 );
    }
    else
      v24 = v19 + 4;
LABEL_29:
    if ( (Option *)v24 != v22 )
      if ( *(_DWORD *)(v24 + 16) > v20 )
        v24 = v19 + 4;
      v25 = v24 == (_DWORD)v22;
      if ( (Option *)v24 != v22 )
        v22 = *(Option **)(v24 + 20);
        v25 = v22 == 0;
      if ( !v25 )
        Option::setOverrideSource(v9, v22);
  }
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  return v9;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


int __fastcall Option::notifyOptionValueChanged(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  __int64 i; // r6@1
  int result; // r0@5

  v2 = a1;
  v3 = a2;
  for ( i = *(_QWORD *)(a1 + 8); HIDWORD(i) != (_DWORD)i; LODWORD(i) = i + 36 )
  {
    if ( *(_DWORD *)(i + 28) )
      (*(void (__fastcall **)(_DWORD, int, int))(i + 32))(i + 20, v2, v3);
  }
  result = *(_DWORD *)(v2 + 60);
  if ( result )
    result = (*(int (__fastcall **)(int, _DWORD))(v2 + 64))(v2 + 52, 0);
  return result;
}


int __fastcall Option::setCoerceValueCallback(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  void (__fastcall *v4)(int *); // r3@1
  int result; // r0@3
  int v6; // [sp+0h] [bp-20h]@2
  int (*v7)(void); // [sp+8h] [bp-18h]@1
  int v8; // [sp+Ch] [bp-14h]@2

  v2 = a1;
  v3 = a2;
  v7 = 0;
  v4 = *(void (__fastcall **)(int *))(a2 + 8);
  if ( v4 )
  {
    v4(&v6);
    v8 = *(_DWORD *)(v3 + 12);
    v7 = *(int (**)(void))(v3 + 8);
  }
  result = BoolOption::setCoerceValueCallback(v2, (int)&v6);
  if ( v7 )
    result = v7();
  return result;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v9 + 24) && !*(_BYTE *)(v9 + 38) && Option::getOptionOwnerType(v10) == 1 )
{
    v20 = *(_DWORD *)(v9 + 24);
    v21 = Option::getID(v10);
    v22 = *(_DWORD *)(v20 + 8);
    v23 = (Option *)(v20 + 4);
    if ( v22 )
    {
      v24 = v20 + 4;
      do
      {
        v25 = v22;
        while ( *(_DWORD *)(v25 + 16) < v21 )
        {
          v25 = *(_DWORD *)(v25 + 12);
          if ( !v25 )
          {
            v25 = v24;
            goto LABEL_29;
          }
        }
        v22 = *(_DWORD *)(v25 + 8);
        v24 = v25;
      }
      while ( v22 );
    }
    else
      v25 = v20 + 4;
LABEL_29:
    if ( (Option *)v25 != v23 )
      if ( *(_DWORD *)(v25 + 16) > v21 )
        v25 = v20 + 4;
      v26 = v25 == (_DWORD)v23;
      if ( (Option *)v25 != v23 )
        v23 = *(Option **)(v25 + 20);
        v26 = v23 == 0;
      if ( !v26 )
        Option::setOverrideSource(v10, v23);
  }
  if ( v31 )
    (*(void (**)(void))(*(_DWORD *)v31 + 4))();
  return v10;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v6 + 24) && !*(_BYTE *)(v6 + 38) && Option::getOptionOwnerType(v10) == 1 )
{
    v24 = *(_DWORD *)(v6 + 24);
    v25 = Option::getID(v10);
    v26 = *(_DWORD *)(v24 + 8);
    v27 = (Option *)(v24 + 4);
    if ( v26 )
    {
      v28 = v24 + 4;
      do
      {
        v29 = v26;
        while ( *(_DWORD *)(v29 + 16) < v25 )
        {
          v29 = *(_DWORD *)(v29 + 12);
          if ( !v29 )
          {
            v29 = v28;
            goto LABEL_29;
          }
        }
        v26 = *(_DWORD *)(v29 + 8);
        v28 = v29;
      }
      while ( v26 );
    }
    else
      v29 = v24 + 4;
LABEL_29:
    if ( (Option *)v29 != v27 )
      if ( *(_DWORD *)(v29 + 16) > v25 )
        v29 = v24 + 4;
      _ZF = v29 == (_DWORD)v27;
      if ( (Option *)v29 != v27 )
        v27 = *(Option **)(v29 + 20);
        _ZF = v27 == 0;
      if ( !_ZF )
        Option::setOverrideSource(v10, v27);
  }
  if ( v36 )
    (*(void (**)(void))(*(_DWORD *)v36 + 4))();
  return v10;
}


_BOOL4 __fastcall Option::hasOverrideSource(Option *this)
{
  return *((_DWORD *)this + 12) != 0;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


int __fastcall Option::getBool(int a1, unsigned int a2)
{
  int v2; // r2@1

  do
  {
    v2 = a1;
    a1 = *(_DWORD *)(a1 + 48);
  }
  while ( a1 );
  return j_j_j__ZNK19InputModeBoolOption8getValueE9InputMode(v2, a2);
}


signed int __fastcall Option::unregisterObserver(Option *this, void *a2)
{
  void *v2; // r6@1
  int v3; // r7@1
  char *v4; // r10@1
  int v5; // r5@1
  int v6; // r1@1
  int v7; // r1@2
  int v8; // r2@4
  void *v9; // r3@4
  bool v10; // zf@4
  int v11; // r1@9
  char v12; // r4@17
  void **v13; // r1@24
  void **v14; // r11@25
  void **v15; // r9@26
  void *v16; // r1@27
  __int64 v17; // r0@30
  void *v18; // r12@30
  void *v19; // lr@30
  void (__fastcall *v20)(__int64 *, __int64 *, signed int); // r3@30
  __int64 v21; // r0@32
  void *v22; // r12@32
  void *v23; // lr@32
  void (__fastcall *v24)(__int64 *, __int64 *, signed int); // r3@32
  signed int result; // r0@37
  Option *v26; // [sp+4h] [bp-3Ch]@30
  __int64 v27; // [sp+8h] [bp-38h]@30
  void (__fastcall *v28)(__int64 *, __int64 *, signed int); // [sp+10h] [bp-30h]@30
  int v29; // [sp+14h] [bp-2Ch]@30

  v2 = a2;
  v4 = (char *)this + 8;
  v3 = *((_DWORD *)this + 2);
  v5 = *((_DWORD *)this + 3);
  v6 = 954437177 * ((v5 - v3) >> 2) >> 2;
  if ( v6 < 1 )
  {
LABEL_9:
    v11 = 954437177 * ((v5 - v3) >> 2);
    if ( v11 != 1 )
    {
      if ( v11 != 2 )
      {
        if ( v11 != 3 )
          goto LABEL_17;
        if ( *(void **)v3 == v2 )
        {
          v12 = 1;
          goto LABEL_23;
        }
        v3 += 36;
      }
      if ( *(void **)v3 == v2 )
        v12 = 1;
        goto LABEL_23;
      v3 += 36;
    }
    if ( *(void **)v3 == v2 )
      v12 = 1;
      goto LABEL_23;
LABEL_17:
    v12 = 0;
    v3 = *((_DWORD *)this + 3);
    goto LABEL_23;
  }
  v7 = v6 + 1;
  while ( *(void **)v3 != v2 )
    v8 = v3 + 36;
    v9 = *(void **)(v3 + 36);
    v10 = v9 == v2;
    if ( v9 != v2 )
      v8 = v3 + 72;
      v10 = *(_DWORD *)(v3 + 72) == (_DWORD)v2;
    if ( v10 || (v8 = v3 + 108, *(void **)(v3 + 108) == v2) )
      v3 = v8;
    --v7;
    v3 += 144;
    if ( v7 <= 1 )
      goto LABEL_9;
  v12 = 1;
LABEL_23:
  if ( v3 == v5 )
  else
    v13 = (void **)(v3 + 36);
    if ( v3 + 36 != v5 )
      v14 = (void **)v3;
      do
        v15 = v14;
        while ( 1 )
          v14 = v13;
          v16 = *v13;
          if ( v16 != v2 )
            break;
          v13 = v14 + 9;
          v15 = v14;
          if ( (void **)v5 == v14 + 9 )
            goto LABEL_35;
        *(_DWORD *)v3 = v16;
        v26 = this;
        v17 = *((_QWORD *)v15 + 5);
        v18 = v15[12];
        v15[12] = 0;
        v19 = v15[13];
        v27 = *(_QWORD *)(v3 + 4);
        *(_QWORD *)(v3 + 4) = v17;
        v28 = *(void (__fastcall **)(__int64 *, __int64 *, signed int))(v3 + 12);
        v20 = v28;
        *(_DWORD *)(v3 + 12) = v18;
        v29 = *(_DWORD *)(v3 + 16);
        *(_DWORD *)(v3 + 16) = v19;
        if ( v20 )
          v20(&v27, &v27, 3);
        v21 = *((_QWORD *)v15 + 7);
        v22 = v15[16];
        v15[16] = 0;
        v23 = v15[17];
        v27 = *(_QWORD *)(v3 + 20);
        *(_QWORD *)(v3 + 20) = v21;
        v28 = *(void (__fastcall **)(__int64 *, __int64 *, signed int))(v3 + 28);
        v24 = v28;
        *(_DWORD *)(v3 + 28) = v22;
        v29 = *(_DWORD *)(v3 + 32);
        *(_DWORD *)(v3 + 32) = v23;
        if ( v24 )
          v24(&v27, &v27, 3);
        this = v26;
        v13 = v14 + 9;
      while ( v14 + 9 != (void **)v5 );
LABEL_35:
    v5 = *((_DWORD *)this + 3);
  std::vector<OptionObserver,std::allocator<OptionObserver>>::erase((int)v4, v3, v5);
  result = (unsigned __int8)v12;
  if ( v12 )
    result = 1;
  return result;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


signed int __fastcall Option::read(int *a1, _BYTE *a2)
{
  _BYTE *v2; // r4@1
  signed int v3; // r5@7
  void *v4; // r0@10
  unsigned int *v6; // r2@12
  signed int v7; // r1@14
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  Util::stringTrim(&v8, a1);
  if ( sub_119C9E8((const void **)&v8, "true")
    && sub_119C9E8((const void **)&v8, "1")
    && sub_119C9E8((const void **)&v8, "YES") )
  {
    if ( sub_119C9E8((const void **)&v8, "false")
      && sub_119C9E8((const void **)&v8, "0")
      && sub_119C9E8((const void **)&v8, "NO") )
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
      j_j_j_j_j__ZdlPv_9_1(v4);
  return v3;
}


  if ( *(_DWORD *)(v9 + 24) && !*(_BYTE *)(v9 + 38) && Option::getOptionOwnerType(v10) == 1 )
{
    v20 = *(_DWORD *)(v9 + 24);
    v21 = Option::getID(v10);
    v22 = *(_DWORD *)(v20 + 8);
    v23 = (Option *)(v20 + 4);
    if ( v22 )
    {
      v24 = v20 + 4;
      do
      {
        v25 = v22;
        while ( *(_DWORD *)(v25 + 16) < v21 )
        {
          v25 = *(_DWORD *)(v25 + 12);
          if ( !v25 )
          {
            v25 = v24;
            goto LABEL_29;
          }
        }
        v22 = *(_DWORD *)(v25 + 8);
        v24 = v25;
      }
      while ( v22 );
    }
    else
      v25 = v20 + 4;
LABEL_29:
    if ( (Option *)v25 != v23 )
      if ( *(_DWORD *)(v25 + 16) > v21 )
        v25 = v20 + 4;
      v26 = v25 == (_DWORD)v23;
      if ( (Option *)v25 != v23 )
        v23 = *(Option **)(v25 + 20);
        v26 = v23 == 0;
      if ( !v26 )
        Option::setOverrideSource(v10, v23);
  }
  if ( v31 )
    (*(void (**)(void))(*(_DWORD *)v31 + 4))();
  return v10;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


  if ( *(_DWORD *)(v8 + 24) && !*(_BYTE *)(v8 + 38) && Option::getOptionOwnerType(v9) == 1 )
{
    v19 = *(_DWORD *)(v8 + 24);
    v20 = Option::getID(v9);
    v21 = *(_DWORD *)(v19 + 8);
    v22 = (Option *)(v19 + 4);
    if ( v21 )
    {
      v23 = v19 + 4;
      do
      {
        v24 = v21;
        while ( *(_DWORD *)(v24 + 16) < v20 )
        {
          v24 = *(_DWORD *)(v24 + 12);
          if ( !v24 )
          {
            v24 = v23;
            goto LABEL_29;
          }
        }
        v21 = *(_DWORD *)(v24 + 8);
        v23 = v24;
      }
      while ( v21 );
    }
    else
      v24 = v19 + 4;
LABEL_29:
    if ( (Option *)v24 != v22 )
      if ( *(_DWORD *)(v24 + 16) > v20 )
        v24 = v19 + 4;
      v25 = v24 == (_DWORD)v22;
      if ( (Option *)v24 != v22 )
        v22 = *(Option **)(v24 + 20);
        v25 = v22 == 0;
      if ( !v25 )
        Option::setOverrideSource(v9, v22);
  }
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  return v9;
}


  if ( *(_DWORD *)(v8 + 24) && !*(_BYTE *)(v8 + 38) && Option::getOptionOwnerType(v9) == 1 )
{
    v19 = *(_DWORD *)(v8 + 24);
    v20 = Option::getID(v9);
    v21 = *(_DWORD *)(v19 + 8);
    v22 = (Option *)(v19 + 4);
    if ( v21 )
    {
      v23 = v19 + 4;
      do
      {
        v24 = v21;
        while ( *(_DWORD *)(v24 + 16) < v20 )
        {
          v24 = *(_DWORD *)(v24 + 12);
          if ( !v24 )
          {
            v24 = v23;
            goto LABEL_29;
          }
        }
        v21 = *(_DWORD *)(v24 + 8);
        v23 = v24;
      }
      while ( v21 );
    }
    else
      v24 = v19 + 4;
LABEL_29:
    if ( (Option *)v24 != v22 )
      if ( *(_DWORD *)(v24 + 16) > v20 )
        v24 = v19 + 4;
      v25 = v24 == (_DWORD)v22;
      if ( (Option *)v24 != v22 )
        v22 = *(Option **)(v24 + 20);
        v25 = v22 == 0;
      if ( !v25 )
        Option::setOverrideSource(v9, v22);
  }
  if ( v30 )
    (*(void (**)(void))(*(_DWORD *)v30 + 4))();
  return v9;
}


char *__fastcall Option::registerObserver(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r12@1
  __int64 *v6; // r0@1
  int v7; // r1@1 OVERLAPPED
  int v8; // r2@1
  char *result; // r0@2
  int v10; // [sp+4h] [bp-Ch]@1

  v4 = a1;
  v5 = a3;
  v10 = a2;
  v6 = (__int64 *)(a1 + 8);
  *(_QWORD *)&v7 = *(_QWORD *)(v4 + 12);
  if ( v7 == v8 )
  {
    result = std::vector<OptionObserver,std::allocator<OptionObserver>>::_M_emplace_back_aux<void *&,std::function<void ()(Option *)> &,std::function&<void ()(Option *,InputMode)>>(
               v6,
               &v10,
               v5,
               a4);
  }
  else
    __gnu_cxx::new_allocator<OptionObserver>::construct<OptionObserver,void *&,std::function<void ()(Option *)> &,std::function&<void ()(Option *,InputMode)>>(
      (int)v6,
      v7,
      &v10,
      v5,
      a4);
    result = (char *)(*(_DWORD *)(v4 + 12) + 36);
    *(_DWORD *)(v4 + 12) = result;
  return result;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}


signed int __fastcall Option::read(const void **a1, _DWORD *a2)
{
  _DWORD *v2; // r4@1
  const void **v3; // r5@1
  signed int result; // r0@5

  v2 = a2;
  v3 = a1;
  if ( sub_119C9E8(a1, "true") && sub_119C9E8(v3, "YES") )
  {
    if ( sub_119C9E8(v3, "false") && sub_119C9E8(v3, "NO") )
    {
      result = sscanf((const char *)*v3, "%d", v2) != 0;
    }
    else
      *v2 = 0;
      result = 1;
  }
  else
    result = 1;
    *v2 = 1;
  return result;
}


int __fastcall Option::notifyOptionValueChanged(Option *this)
{
  Option *v1; // r4@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  int result; // r0@5

  v1 = this;
  for ( *(_QWORD *)&v2 = *((_QWORD *)this + 1); v3 != v2; v2 += 36 )
  {
    if ( *(_DWORD *)(v2 + 12) )
      (*(void (__fastcall **)(int, Option *))(v2 + 16))(v2 + 4, v1);
  }
  result = *((_DWORD *)v1 + 15);
  if ( result )
    result = (*((int (__fastcall **)(_DWORD, _DWORD))v1 + 16))((char *)v1 + 52, 0);
  return result;
}


  if ( *(_DWORD *)(v7 + 24) && !*(_BYTE *)(v7 + 38) && Option::getOptionOwnerType(v8) == 1 )
{
    v18 = *(_DWORD *)(v7 + 24);
    v19 = Option::getID(v8);
    v20 = *(_DWORD *)(v18 + 8);
    v21 = (Option *)(v18 + 4);
    if ( v20 )
    {
      v22 = v18 + 4;
      do
      {
        v23 = v20;
        while ( *(_DWORD *)(v23 + 16) < v19 )
        {
          v23 = *(_DWORD *)(v23 + 12);
          if ( !v23 )
          {
            v23 = v22;
            goto LABEL_29;
          }
        }
        v20 = *(_DWORD *)(v23 + 8);
        v22 = v23;
      }
      while ( v20 );
    }
    else
      v23 = v18 + 4;
LABEL_29:
    if ( (Option *)v23 != v21 )
      if ( *(_DWORD *)(v23 + 16) > v19 )
        v23 = v18 + 4;
      v24 = v23 == (_DWORD)v21;
      if ( (Option *)v23 != v21 )
        v21 = *(Option **)(v23 + 20);
        v24 = v21 == 0;
      if ( !v24 )
        Option::setOverrideSource(v8, v21);
  }
  if ( v29 )
    (*(void (**)(void))(*(_DWORD *)v29 + 4))();
  return v8;
}
