

void __fastcall webjson::getFieldAsString(int *a1, web::json::value *a2, int *a3, int *a4)
{
  int *v4; // r4@1
  web::json::value *v5; // r6@1
  int *v6; // r5@1
  const void **v7; // r5@3
  int *v8; // r0@4
  void *v9; // r0@4
  unsigned int *v10; // r2@5
  signed int v11; // r1@7
  void *v12; // r0@10
  unsigned int *v13; // r2@13
  signed int v14; // r1@15
  int v15; // [sp+0h] [bp-28h]@4
  int v16; // [sp+4h] [bp-24h]@1

  v4 = a1;
  v5 = a2;
  v6 = a4;
  utility::conversions::to_string_t(&v16, a3);
  if ( web::json::value::type(v5) != 3 || (*(int (**)(void))(**(_DWORD **)v5 + 4))() != 1 )
  {
    sub_119C854(v4, v6);
  }
  else
    v7 = web::json::value::at((int)v5, (const void **)&v16);
    if ( web::json::value::type((web::json::value *)v7) == 2 )
    {
      v8 = (int *)web::json::value::as_string((web::json::value *)v7);
      sub_119C854(&v15, v8);
      utility::conversions::to_utf8string(v4, &v15);
      v9 = (void *)(v15 - 12);
      if ( (int *)(v15 - 12) != &dword_28898C0 )
      {
        v10 = (unsigned int *)(v15 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v11 = __ldrex(v10);
          while ( __strex(v11 - 1, v10) );
        }
        else
          v11 = (*v10)--;
        if ( v11 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v9);
      }
    }
    else
      *v4 = (int)&unk_28898CC;
  v12 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
}


void __fastcall webjson::getFieldAsLocDictionary(double a1, int *a2)
{
  webjson::getFieldAsLocDictionary(a1, a2);
}


void __fastcall webjson::getFieldAsSerializedJson(int *a1, web::json::value *a2, int *a3)
{
  webjson::getFieldAsSerializedJson(a1, a2, a3);
}


void __fastcall webjson::getFieldAsSerializedJson(int *a1, web::json::value *a2, int *a3)
{
  int *v3; // r4@1
  web::json::value *v4; // r5@1
  const void **v5; // r5@3
  void *v6; // r0@4
  void *v7; // r0@5
  void *v8; // r0@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  unsigned int *v11; // r2@16
  signed int v12; // r1@18
  unsigned int *v13; // r2@20
  signed int v14; // r1@22
  int v15; // [sp+0h] [bp-20h]@4
  int v16; // [sp+4h] [bp-1Ch]@4
  int v17; // [sp+8h] [bp-18h]@1

  v3 = a1;
  v4 = a2;
  *a1 = (int)&unk_28898CC;
  utility::conversions::to_string_t(&v17, a3);
  if ( web::json::value::type(v4) == 3 && (*(int (**)(void))(**(_DWORD **)v4 + 4))() == 1 )
  {
    v5 = web::json::value::at((int)v4, (const void **)&v17);
    if ( web::json::value::type((web::json::value *)v5) == 3 )
    {
      web::json::value::serialize((web::json::value *)&v15, (int)v5);
      utility::conversions::to_utf8string(&v16, &v15);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v16);
      v6 = (void *)(v16 - 12);
      if ( (int *)(v16 - 12) != &dword_28898C0 )
      {
        v11 = (unsigned int *)(v16 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
        }
        else
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v6);
      }
      v7 = (void *)(v15 - 12);
      if ( (int *)(v15 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v15 - 4);
            v14 = __ldrex(v13);
          while ( __strex(v14 - 1, v13) );
          v14 = (*v13)--;
        if ( v14 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v7);
    }
  }
  v8 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    else
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v8);
}


int __fastcall webjson::getFieldAsInt(web::json::value *a1, int *a2, int a3)
{
  web::json::value *v3; // r5@1
  int v4; // r4@1
  const void **v5; // r5@3
  void *v6; // r0@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  int v10; // [sp+4h] [bp-1Ch]@1

  v3 = a1;
  v4 = a3;
  utility::conversions::to_string_t(&v10, a2);
  if ( web::json::value::type(v3) == 3 && (*(int (**)(void))(**(_DWORD **)v3 + 4))() == 1 )
  {
    v5 = web::json::value::at((int)v3, (const void **)&v10);
    if ( web::json::value::is_integer((web::json::value *)v5) == 1 )
      v4 = web::json::value::as_integer((web::json::value *)v5);
  }
  v6 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  return v4;
}


int __fastcall webjson::getFieldAsBool(web::json::value *a1, int *a2, int a3)
{
  web::json::value *v3; // r5@1
  int v4; // r4@1
  const void **v5; // r5@3
  void *v6; // r0@5
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  int v10; // [sp+4h] [bp-1Ch]@1

  v3 = a1;
  v4 = a3;
  utility::conversions::to_string_t(&v10, a2);
  if ( web::json::value::type(v3) == 3 && (*(int (**)(void))(**(_DWORD **)v3 + 4))() == 1 )
  {
    v5 = web::json::value::at((int)v3, (const void **)&v10);
    if ( web::json::value::type((web::json::value *)v5) == 1 )
      v4 = web::json::value::as_bool((web::json::value *)v5);
  }
  v6 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
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
      j_j_j_j_j__ZdlPv_9_1(v6);
  return v4;
}


void __fastcall webjson::getFieldAsString(int *a1, web::json::value *a2, int *a3, int *a4)
{
  webjson::getFieldAsString(a1, a2, a3, a4);
}


const void **__fastcall webjson::getFieldAsObject(web::json::value *a1, int *a2)
{
  web::json::value *v2; // r4@1
  int *v3; // r5@1
  char v4; // r0@1
  const void **v5; // r5@6
  const void **v6; // r4@6
  void *v7; // r0@11
  unsigned int *v9; // r2@13
  signed int v10; // r1@15
  int v11; // [sp+4h] [bp-1Ch]@4

  v2 = a1;
  v3 = a2;
  v4 = byte_27D4908;
  __dmb();
  if ( !(v4 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27D4908) )
  {
    web::json::value::value((web::json::value *)&unk_27D4904);
    _cxa_atexit(web::json::value::~value);
    j___cxa_guard_release((unsigned int *)&byte_27D4908);
  }
  utility::conversions::to_string_t(&v11, v3);
  if ( web::json::value::type(v2) == 3 )
    if ( (*(int (**)(void))(**(_DWORD **)v2 + 4))() == 1 )
    {
      v5 = web::json::value::at((int)v2, (const void **)&v11);
      v6 = (const void **)&unk_27D4904;
      if ( web::json::value::type((web::json::value *)v5) == 3 )
        v6 = v5;
    }
    else
  else
    v6 = (const void **)&unk_27D4904;
  v7 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v11 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v7);
  return v6;
}


void __fastcall webjson::getFieldAsObjectArray(int a1, web::json::value *a2, int *a3)
{
  int v3; // r4@1
  web::json::value *v4; // r5@1
  const void **v5; // r5@3
  const web::json::value *v6; // r5@4 OVERLAPPED
  const web::json::value *v7; // r6@4 OVERLAPPED
  __int64 v8; // r0@6
  void *v9; // r0@10
  unsigned int *v10; // r2@12
  signed int v11; // r1@14
  int v12; // [sp+4h] [bp-24h]@1

  v3 = a1;
  v4 = a2;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  utility::conversions::to_string_t(&v12, a3);
  if ( web::json::value::type(v4) == 3 && (*(int (**)(void))(**(_DWORD **)v4 + 4))() == 1 )
  {
    v5 = web::json::value::at((int)v4, (const void **)&v12);
    if ( web::json::value::type((web::json::value *)v5) == 4 )
    {
      for ( *(_QWORD *)&v6 = *(_QWORD *)web::json::value::as_array((web::json::value *)v5);
            v7 != v6;
            v6 = (const web::json::value *)((char *)v6 + 4) )
      {
        if ( web::json::value::type(v6) == 3 )
        {
          v8 = *(_QWORD *)(v3 + 4);
          if ( (_DWORD)v8 == HIDWORD(v8) )
            std::vector<web::json::value,std::allocator<web::json::value>>::_M_emplace_back_aux<web::json::value const&>(
              (unsigned __int64 *)v3,
              v6);
          else
            *(_DWORD *)(v3 + 4) = (char *)web::json::value::value((web::json::value *)v8, v6) + 4;
        }
      }
    }
  }
  v9 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v9);
}


void __fastcall webjson::getFieldAsObjectArray(int a1, web::json::value *a2, int *a3)
{
  webjson::getFieldAsObjectArray(a1, a2, a3);
}


void __fastcall webjson::getFieldAsStringArray(int a1, web::json::value *a2, int *a3)
{
  int v3; // r8@1
  web::json::value *v4; // r5@1
  const void **v5; // r5@3
  web::json::value *v6; // r5@4
  __int64 v7; // kr00_8@4
  unsigned int *v8; // r2@6
  signed int v9; // r1@8
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  int *v12; // r0@23
  __int64 v13; // r0@23
  int v14; // r1@24
  void *v15; // r0@26
  void *v16; // r0@27
  void *v17; // r0@29
  unsigned int *v18; // r2@31
  signed int v19; // r1@33
  int v20; // [sp+4h] [bp-34h]@10
  void *v21; // [sp+8h] [bp-30h]@23
  int v22; // [sp+Ch] [bp-2Ch]@1

  v3 = a1;
  v4 = a2;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  utility::conversions::to_string_t(&v22, a3);
  if ( web::json::value::type(v4) == 3 && (*(int (**)(void))(**(_DWORD **)v4 + 4))() == 1 )
  {
    v5 = web::json::value::at((int)v4, (const void **)&v22);
    if ( web::json::value::type((web::json::value *)v5) == 4 )
    {
      v7 = *(_QWORD *)web::json::value::as_array((web::json::value *)v5);
      v6 = (web::json::value *)v7;
      if ( (_DWORD)v7 != HIDWORD(v7) )
      {
        do
        {
          if ( web::json::value::type(v6) == 2 )
          {
            v12 = (int *)web::json::value::as_string(v6);
            sub_119C854(&v20, v12);
            utility::conversions::to_utf8string(&v21, &v20);
            v13 = *(_QWORD *)(v3 + 4);
            if ( (_DWORD)v13 == HIDWORD(v13) )
            {
              std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
                (unsigned __int64 *)v3,
                &v21);
              v14 = (int)v21;
            }
            else
              *(_DWORD *)v13 = v21;
              HIDWORD(v13) = &unk_28898CC;
              v21 = &unk_28898CC;
              *(_DWORD *)(v3 + 4) = v13 + 4;
            v15 = (void *)(v14 - 12);
            if ( (int *)(v14 - 12) != &dword_28898C0 )
              v8 = (unsigned int *)(v14 - 4);
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
                j_j_j_j_j__ZdlPv_9_1(v15);
            v16 = (void *)(v20 - 12);
            if ( (int *)(v20 - 12) != &dword_28898C0 )
              v10 = (unsigned int *)(v20 - 4);
                  v11 = __ldrex(v10);
                while ( __strex(v11 - 1, v10) );
                v11 = (*v10)--;
              if ( v11 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v16);
          }
          v6 = (web::json::value *)((char *)v6 + 4);
        }
        while ( v6 != (web::json::value *)HIDWORD(v7) );
      }
    }
  }
  v17 = (void *)(v22 - 12);
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
      j_j_j_j_j__ZdlPv_9_1(v17);
}


int __fastcall webjson::getFieldAsFloat(web::json::value *a1, int *a2, int a3)
{
  web::json::value *v3; // r4@1
  int v5; // r0@1
  const void **v10; // r4@3
  void *v12; // r0@5
  int result; // r0@6
  unsigned int *v14; // r2@7
  signed int v15; // r1@9
  int v16; // [sp+4h] [bp-24h]@1

  v3 = a1;
  _R5 = a3;
  utility::conversions::to_string_t(&v16, a2);
  v5 = web::json::value::type(v3);
  __asm { VMOV            S16, R5 }
  if ( v5 == 3 && (*(int (**)(void))(**(_DWORD **)v3 + 4))() == 1 )
  {
    v10 = web::json::value::at((int)v3, (const void **)&v16);
    if ( !web::json::value::type((web::json::value *)v10) )
    {
      _R0 = web::json::value::as_double((web::json::value *)v10);
      __asm
      {
        VMOV            D0, R0, R1
        VCVT.F32.F64    S16, D0
      }
    }
  }
  v12 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v12);
  __asm { VMOV            R0, S16 }
  return result;
}


void __fastcall webjson::getFieldAsStringArray(int a1, web::json::value *a2, int *a3)
{
  webjson::getFieldAsStringArray(a1, a2, a3);
}


void __fastcall webjson::getFieldAsLocDictionary(double a1, int *a2)
{
  int *v2; // r6@1
  web::json::value *v3; // r5@1
  int v4; // r9@1
  unsigned int v5; // r0@1
  int v6; // r4@3
  void *v7; // r7@3
  const void **v8; // r5@6
  int v9; // r4@7
  int v10; // r6@7
  int *v11; // r10@8
  unsigned int *v12; // r2@10
  signed int v13; // r1@12
  unsigned int *v14; // r2@14
  signed int v15; // r1@16
  unsigned int *v16; // r2@18
  signed int v17; // r1@20
  unsigned int *v18; // r2@22
  signed int v19; // r1@24
  void *v20; // r0@44
  _BYTE *v21; // r7@45
  int *v22; // r4@45
  int v23; // r0@47
  int i; // r0@50
  int *v25; // r10@54
  int *v26; // r0@54
  void *v27; // r0@54
  void *v28; // r0@55
  _BYTE *v29; // r0@56
  void *v30; // r0@58
  unsigned int *v31; // r2@60
  signed int v32; // r1@62
  int v33; // [sp+8h] [bp-40h]@7
  int v34; // [sp+Ch] [bp-3Ch]@18
  int v35; // [sp+10h] [bp-38h]@14
  int v36; // [sp+14h] [bp-34h]@8
  _BYTE *v37; // [sp+18h] [bp-30h]@22
  int v38; // [sp+1Ch] [bp-2Ch]@4

  v2 = a2;
  v3 = (web::json::value *)HIDWORD(a1);
  v4 = LODWORD(a1);
  *(_DWORD *)(LODWORD(a1) + 8) = 0;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 1065353216;
  LODWORD(a1) += 16;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v5 = sub_119C844(a1);
  *(_DWORD *)(v4 + 4) = v5;
  if ( v5 == 1 )
  {
    *(_DWORD *)(v4 + 24) = 0;
    v7 = (void *)(v4 + 24);
  }
  else
    if ( v5 >= 0x40000000 )
      sub_119C874();
    v6 = 4 * v5;
    v7 = operator new(4 * v5);
    _aeabi_memclr4(v7, v6);
  *(_DWORD *)v4 = v7;
  utility::conversions::to_string_t(&v38, v2);
  if ( web::json::value::type(v3) == 3 && (*(int (**)(void))(**(_DWORD **)v3 + 4))() == 1 )
    v8 = web::json::value::at((int)v3, (const void **)&v38);
    if ( web::json::value::type((web::json::value *)v8) == 3 )
    {
      v9 = web::json::value::as_object((web::json::value *)v8);
      v33 = v9;
      v10 = *(_QWORD *)v9;
      if ( v10 != *(_QWORD *)v9 >> 32 )
      {
        v11 = &v36;
        do
        {
          if ( *(_DWORD *)(*(_DWORD *)v10 - 12) && web::json::value::type((web::json::value *)(v10 + 4)) == 2 )
          {
            sub_119C854(v11, (int *)v10);
            utility::conversions::to_utf8string(&v37, v11);
            v20 = (void *)(v36 - 12);
            if ( (int *)(v36 - 12) != &dword_28898C0 )
            {
              v12 = (unsigned int *)(v36 - 4);
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
                j_j_j_j_j__ZdlPv_9_1(v20);
            }
            v21 = v37;
            v22 = v11;
            if ( *((_DWORD *)v37 - 1) <= -1 )
              v23 = (int)v37;
            else
              sub_119CB68((const void **)&v37);
              v21 = v37;
              if ( *((_DWORD *)v37 - 1) < 0 )
                v23 = (int)v37;
                sub_119CB68((const void **)&v37);
            for ( i = v23 + *(_DWORD *)(v23 - 12); (_BYTE *)i != v21; ++v21 )
              if ( *v21 == 45 )
                *v21 = 95;
            v25 = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                           (unsigned __int64 *)v4,
                           (int **)&v37);
            v26 = (int *)web::json::value::as_string((web::json::value *)(v10 + 4));
            sub_119C854(&v34, v26);
            utility::conversions::to_utf8string(&v35, &v34);
            xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
              v25,
              &v35);
            v11 = v22;
            v9 = v33;
            v27 = (void *)(v35 - 12);
            if ( (int *)(v35 - 12) != &dword_28898C0 )
              v14 = (unsigned int *)(v35 - 4);
                  v15 = __ldrex(v14);
                while ( __strex(v15 - 1, v14) );
                v15 = (*v14)--;
              if ( v15 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v27);
            v28 = (void *)(v34 - 12);
            if ( (int *)(v34 - 12) != &dword_28898C0 )
              v16 = (unsigned int *)(v34 - 4);
                  v17 = __ldrex(v16);
                while ( __strex(v17 - 1, v16) );
                v17 = (*v16)--;
              if ( v17 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v28);
            v29 = v37 - 12;
            if ( (int *)(v37 - 12) != &dword_28898C0 )
              v18 = (unsigned int *)(v37 - 4);
                  v19 = __ldrex(v18);
                while ( __strex(v19 - 1, v18) );
                v19 = (*v18)--;
              if ( v19 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v29);
          }
          v10 += 8;
        }
        while ( v10 != *(_DWORD *)(v9 + 4) );
      }
    }
  v30 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v38 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
    else
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v30);
}
