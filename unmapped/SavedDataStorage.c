

int __fastcall SavedDataStorage::SavedDataStorage(__int64 a1)
{
  int v1; // r4@1
  double v2; // r0@1
  unsigned int v3; // r0@1
  int v4; // r6@3
  void *v5; // r5@3
  int result; // r0@4

  v1 = a1;
  LODWORD(a1) = &off_27198E8;
  *(_QWORD *)v1 = a1;
  *(_DWORD *)(v1 + 16) = 0;
  *(_DWORD *)(v1 + 20) = 0;
  *(_DWORD *)(v1 + 24) = 1065353216;
  HIDWORD(v2) = 10;
  LODWORD(v2) = v1 + 24;
  *(_DWORD *)(LODWORD(v2) + 4) = 0;
  v3 = sub_21E6254(v2);
  *(_DWORD *)(v1 + 12) = v3;
  if ( v3 == 1 )
  {
    *(_DWORD *)(v1 + 32) = 0;
    v5 = (void *)(v1 + 32);
  }
  else
    if ( v3 >= 0x40000000 )
      sub_21E57F4();
    v4 = 4 * v3;
    v5 = j_operator new(4 * v3);
    j___aeabi_memclr4((int)v5, v4);
  result = v1;
  *(_DWORD *)(v1 + 8) = v5;
  return result;
}


void __fastcall SavedDataStorage::~SavedDataStorage(SavedDataStorage *this)
{
  SavedDataStorage *v1; // r10@1
  unsigned __int64 *v2; // r7@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  unsigned __int64 *v5; // r6@11
  int v6; // r1@11
  void *v7; // r0@11
  char *v8; // r0@13

  v1 = this;
  *(_DWORD *)this = &off_27198E8;
  v2 = (unsigned __int64 *)*((_DWORD *)this + 4);
  while ( v2 )
  {
    v5 = v2;
    v6 = *v2 >> 32;
    v2 = (unsigned __int64 *)*v2;
    v7 = (void *)(v6 - 12);
    if ( (int *)(v6 - 12) != &dword_28898C0 )
    {
      v3 = (unsigned int *)(v6 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v4 = __ldrex(v3);
        while ( __strex(v4 - 1, v3) );
      }
      else
        v4 = (*v3)--;
      if ( v4 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
    j_operator delete(v5);
  }
  j___aeabi_memclr4(*((_QWORD *)v1 + 1), 4 * (*((_QWORD *)v1 + 1) >> 32));
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  v8 = (char *)*((_DWORD *)v1 + 2);
  if ( v8 && (char *)v1 + 32 != v8 )
    j_operator delete(v8);
  j_operator delete((void *)v1);
}


int *__fastcall SavedDataStorage::set(int a1, int **a2, int a3)
{
  int v3; // r4@1
  int *result; // r0@1

  v3 = a3;
  result = (int *)std::__detail::_Map_base<std::string,std::pair<std::string const,SavedData *>,std::allocator<std::pair<std::string const,SavedData *>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                    a1 + 8,
                    a2);
  *result = v3;
  return result;
}


int __fastcall SavedDataStorage::save(int result)
{
  SavedDataStorage *v1; // r4@1
  int i; // r5@1
  int v3; // r1@2

  v1 = (SavedDataStorage *)result;
  for ( i = *(_DWORD *)(result + 16); i; i = *(_DWORD *)i )
  {
    v3 = *(_DWORD *)(i + 8);
    result = *(_BYTE *)(v3 + 4);
    if ( *(_BYTE *)(v3 + 4) )
    {
      SavedDataStorage::_save(v1, (const SavedData *)v3);
      result = *(_DWORD *)(i + 8);
      *(_BYTE *)(result + 4) = 0;
    }
  }
  return result;
}


signed int __fastcall SavedDataStorage::loadAndSet(int a1, int a2, int **a3)
{
  int v3; // r7@1
  int v4; // r6@1
  int **v5; // r5@1
  int v6; // r4@1
  signed int v7; // r7@2
  int v8; // r1@3
  int v9; // r1@4
  int v10; // r0@4
  int v11; // r7@5
  int v12; // r8@5
  void *v13; // r0@5
  void *v14; // r0@13
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  int v20; // [sp+8h] [bp-38h]@5
  int v21; // [sp+Ch] [bp-34h]@5
  void **v22; // [sp+10h] [bp-30h]@5
  int v23; // [sp+14h] [bp-2Ch]@5
  int v24; // [sp+18h] [bp-28h]@5
  int *v25; // [sp+1Ch] [bp-24h]@5
  int v26; // [sp+20h] [bp-20h]@4

  v3 = a1;
  v4 = a1 + 8;
  v5 = a3;
  v6 = a2;
  if ( std::_Hashtable<std::string,std::pair<std::string const,SavedData *>,std::allocator<std::pair<std::string const,SavedData *>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)(a1 + 8),
         a3) )
  {
    v7 = 1;
  }
  else
    v8 = *(_DWORD *)(v3 + 4);
    if ( v8 )
    {
      (*(void (__fastcall **)(int *))(*(_DWORD *)v8 + 56))(&v26);
      v9 = v26;
      v7 = 0;
      v10 = *(_DWORD *)(v26 - 12);
      if ( v10 )
      {
        v22 = &off_26E91B8;
        v23 = 0;
        v24 = v10;
        v25 = &v26;
        j_NbtIo::read((NbtIo *)&v21, (IDataInput *)&v22);
        v11 = v21;
        sub_21E94B4((void **)&v20, "data");
        v12 = j_CompoundTag::getCompound(v11, (const void **)&v20);
        v13 = (void *)(v20 - 12);
        if ( (int *)(v20 - 12) != &dword_28898C0 )
        {
          v18 = (unsigned int *)(v20 - 4);
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
            j_j_j_j__ZdlPv_9(v13);
        }
        if ( v12 )
          (*(void (__fastcall **)(int, int))(*(_DWORD *)v6 + 8))(v6, v12);
          v7 = 1;
          *(_DWORD *)std::__detail::_Map_base<std::string,std::pair<std::string const,SavedData *>,std::allocator<std::pair<std::string const,SavedData *>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>,true>::operator[](
                       v4,
                       v5) = v6;
        else
          v7 = 0;
        if ( v21 )
          (*(void (**)(void))(*(_DWORD *)v21 + 4))();
        v9 = v26;
      }
      v14 = (void *)(v9 - 12);
      if ( (int *)(v9 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v9 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v14);
    }
    else
  return v7;
}


int __fastcall SavedDataStorage::_save(SavedDataStorage *this, const SavedData *a2)
{
  SavedDataStorage *v2; // r6@1
  const SavedData *v3; // r5@1
  int result; // r0@1
  void *v5; // r7@2
  void *v6; // r4@2
  void *v7; // r0@4
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  void *v10; // [sp+0h] [bp-28h]@2
  int v11; // [sp+8h] [bp-20h]@2

  v2 = this;
  v3 = a2;
  result = *((_DWORD *)this + 1);
  if ( result )
  {
    v5 = j_operator new(0x1Cu);
    j_CompoundTag::CompoundTag((int)v5);
    (*(void (__fastcall **)(const SavedData *, void *))(*(_DWORD *)v3 + 12))(v3, v5);
    v6 = j_operator new(0x1Cu);
    j_CompoundTag::CompoundTag((int)v6);
    sub_21E94B4((void **)&v11, "data");
    v10 = v5;
    j_CompoundTag::putCompound((int)v6, (const void **)&v11, (int *)&v10);
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
    v10 = 0;
    v7 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v11 - 4);
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
        j_j_j_j__ZdlPv_9(v7);
    }
    j_LevelStorage::saveData(*((_DWORD *)v2 + 1), (int)v3 + 8, (int)v6);
    result = (*(int (__fastcall **)(void *))(*(_DWORD *)v6 + 4))(v6);
  }
  return result;
}


void __fastcall SavedDataStorage::~SavedDataStorage(SavedDataStorage *this)
{
  SavedDataStorage::~SavedDataStorage(this);
}


SavedDataStorage *__fastcall SavedDataStorage::~SavedDataStorage(SavedDataStorage *this)
{
  SavedDataStorage *v1; // r10@1
  unsigned __int64 *v2; // r7@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  unsigned __int64 *v5; // r6@11
  int v6; // r1@11
  void *v7; // r0@11
  char *v8; // r0@13

  v1 = this;
  *(_DWORD *)this = &off_27198E8;
  v2 = (unsigned __int64 *)*((_DWORD *)this + 4);
  while ( v2 )
  {
    v5 = v2;
    v6 = *v2 >> 32;
    v2 = (unsigned __int64 *)*v2;
    v7 = (void *)(v6 - 12);
    if ( (int *)(v6 - 12) != &dword_28898C0 )
    {
      v3 = (unsigned int *)(v6 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v4 = __ldrex(v3);
        while ( __strex(v4 - 1, v3) );
      }
      else
        v4 = (*v3)--;
      if ( v4 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
    j_operator delete(v5);
  }
  j___aeabi_memclr4(*((_QWORD *)v1 + 1), 4 * (*((_QWORD *)v1 + 1) >> 32));
  *((_DWORD *)v1 + 4) = 0;
  *((_DWORD *)v1 + 5) = 0;
  v8 = (char *)*((_DWORD *)v1 + 2);
  if ( v8 && (char *)v1 + 32 != v8 )
    j_operator delete(v8);
  return v1;
}
