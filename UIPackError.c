

void __fastcall UIPackError::~UIPackError(UIPackError *this)
{
  UIPackError::~UIPackError(this);
}


void *__fastcall UIPackError::getLocErrorMessageMap(UIPackError *this)
{
  char v1; // r0@1
  double v2; // r0@3
  void *v3; // r0@3
  void *v4; // r0@4
  void *v5; // r0@5
  void *v6; // r0@6
  void *v7; // r0@7
  void *v8; // r0@8
  void *v9; // r0@9
  void *v10; // r0@10
  void *v11; // r0@11
  unsigned int *v13; // r2@14
  signed int v14; // r1@16
  unsigned int *v15; // r2@18
  signed int v16; // r1@20
  unsigned int *v17; // r2@22
  signed int v18; // r1@24
  unsigned int *v19; // r2@26
  signed int v20; // r1@28
  unsigned int *v21; // r2@30
  signed int v22; // r1@32
  unsigned int *v23; // r2@34
  signed int v24; // r1@36
  unsigned int *v25; // r2@38
  signed int v26; // r1@40
  unsigned int *v27; // r2@42
  signed int v28; // r1@44
  unsigned int *v29; // r2@46
  signed int v30; // r1@48
  int v31; // [sp+24h] [bp-9Ch]@3
  int v32; // [sp+28h] [bp-98h]@3
  int v33; // [sp+2Ch] [bp-94h]@3
  int v34; // [sp+30h] [bp-90h]@3
  int v35; // [sp+34h] [bp-8Ch]@3
  int v36; // [sp+38h] [bp-88h]@3
  int v37; // [sp+3Ch] [bp-84h]@3
  int v38; // [sp+40h] [bp-80h]@3
  int v39; // [sp+44h] [bp-7Ch]@3
  int v40; // [sp+48h] [bp-78h]@3
  int v41; // [sp+4Ch] [bp-74h]@3
  int v42; // [sp+50h] [bp-70h]@3
  int v43; // [sp+54h] [bp-6Ch]@3
  int v44; // [sp+58h] [bp-68h]@3
  int v45; // [sp+5Ch] [bp-64h]@3
  int v46; // [sp+60h] [bp-60h]@3
  int v47; // [sp+64h] [bp-5Ch]@3
  int v48; // [sp+68h] [bp-58h]@3
  char v49; // [sp+6Ch] [bp-54h]@3

  v1 = byte_27ED0F0;
  __dmb();
  if ( !(v1 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27ED0F0) )
  {
    v31 = 1;
    sub_21E94B4((void **)&v32, "uiPackError.invalidChildNames");
    v33 = 2;
    sub_21E94B4((void **)&v34, "uiPackError.parseError");
    v35 = 3;
    sub_21E94B4((void **)&v36, "uiPackError.missingControl");
    v37 = 4;
    sub_21E94B4((void **)&v38, "uiPackError.missingControlTarget");
    v39 = 5;
    sub_21E94B4((void **)&v40, "uiPackError.missingArrayName");
    v41 = 6;
    sub_21E94B4((void **)&v42, "uiPackError.missingCondition");
    v43 = 7;
    sub_21E94B4((void **)&v44, "uiPackError.missingValue");
    v45 = 8;
    sub_21E94B4((void **)&v46, "uiPackError.missingOperation");
    v47 = 9;
    sub_21E94B4((void **)&v48, "uiPackError.invalidOperationName");
    LODWORD(v2) = &unk_27ED0F8;
    std::_Hashtable<int,std::pair<int const,std::string>,std::allocator<std::pair<int const,std::string>>,std::__detail::_Select1st,std::equal_to<int>,std::hash<int>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<false,false,true>>::_Hashtable<std::pair<int const,std::string> const*>(
      v2,
      (unsigned int *)&v49,
      0);
    v3 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
    {
      v13 = (unsigned int *)(v48 - 4);
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
        j_j_j_j__ZdlPv_9(v3);
    }
    v4 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v46 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v4);
    v5 = (void *)(v44 - 12);
    if ( (int *)(v44 - 12) != &dword_28898C0 )
      v17 = (unsigned int *)(v44 - 4);
          v18 = __ldrex(v17);
        while ( __strex(v18 - 1, v17) );
        v18 = (*v17)--;
      if ( v18 <= 0 )
        j_j_j_j__ZdlPv_9(v5);
    v6 = (void *)(v42 - 12);
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v19 = (unsigned int *)(v42 - 4);
          v20 = __ldrex(v19);
        while ( __strex(v20 - 1, v19) );
        v20 = (*v19)--;
      if ( v20 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    v7 = (void *)(v40 - 12);
    if ( (int *)(v40 - 12) != &dword_28898C0 )
      v21 = (unsigned int *)(v40 - 4);
          v22 = __ldrex(v21);
        while ( __strex(v22 - 1, v21) );
        v22 = (*v21)--;
      if ( v22 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    v8 = (void *)(v38 - 12);
    if ( (int *)(v38 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v38 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
    v9 = (void *)(v36 - 12);
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v36 - 4);
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    v10 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)(v34 - 4);
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
    v11 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v32 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v11);
    _cxa_atexit(std::unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int const,std::string>>>::~unordered_map);
    j___cxa_guard_release((unsigned int *)&byte_27ED0F0);
  }
  return &unk_27ED0F8;
}


int __fastcall UIPackError::UIPackError(int a1)
{
  int v1; // r4@1
  int v2; // r6@1

  v1 = a1;
  *(_DWORD *)a1 = &off_26D9084;
  *(_DWORD *)(a1 + 4) = 0;
  v2 = a1 + 4;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(a1 + 8) = std::__uninitialized_copy<false>::__uninit_copy<__gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string,std::allocator<std::string>>>,std::string *>(
                          0,
                          0);
  *(_DWORD *)(v1 + 16) = 0;
  *(_DWORD *)(v1 + 20) = 4;
  *(_DWORD *)v1 = &off_26EACA4;
  return v1;
}


int *__fastcall UIPackError::getEventErrorMessageMap(UIPackError *this)
{
  char v1; // r0@1
  double v2; // r0@2
  unsigned int v3; // r0@3
  int v4; // r5@5
  int *v5; // r4@5

  v1 = byte_27ED0F4;
  __dmb();
  if ( !(v1 & 1) && j___cxa_guard_acquire(&byte_27ED0F4) )
  {
    unk_27ED11C = 0;
    unk_27ED120 = 0;
    dword_27ED124 = 1065353216;
    LODWORD(v2) = &dword_27ED124;
    unk_27ED128 = 0;
    v3 = sub_21E6254(v2);
    dword_27ED118 = v3;
    if ( v3 == 1 )
    {
      dword_27ED12C = 0;
      v5 = &dword_27ED12C;
    }
    else
      if ( v3 >= 0x40000000 )
        sub_21E57F4();
      v4 = 4 * v3;
      v5 = (int *)operator new(4 * v3);
      _aeabi_memclr4(v5, v4);
    dword_27ED114 = (int)v5;
    _cxa_atexit(std::unordered_map<int,std::string,std::hash<int>,std::equal_to<int>,std::allocator<std::pair<int const,std::string>>>::~unordered_map);
    j___cxa_guard_release(&byte_27ED0F4);
  }
  return &dword_27ED114;
}


void __fastcall UIPackError::~UIPackError(UIPackError *this)
{
  UIPackError *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_26D9084;
  v3 = (void *)(*(_QWORD *)((char *)this + 4) >> 32);
  v2 = (void *)*(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v2 - 12);
      if ( v6 != &dword_28898C0 )
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
          j_j_j_j__ZdlPv_9(v6);
      }
      v2 = (char *)v2 + 4;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 1);
  }
  if ( v2 )
    operator delete(v2);
  operator delete((void *)v1);
}


_DWORD *__fastcall UIPackError::UIPackError(_DWORD *a1, int a2, unsigned __int64 *a3)
{
  _DWORD *v3; // r5@1
  int v4; // r4@1

  v3 = a1;
  v4 = a2;
  *a1 = &off_26D9084;
  std::vector<std::string,std::allocator<std::string>>::vector((int)(a1 + 1), a3);
  v3[4] = v4;
  v3[5] = 4;
  *v3 = &off_26EACA4;
  return v3;
}
