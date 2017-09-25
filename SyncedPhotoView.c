

signed int __fastcall SyncedPhotoView::viewPhoto(unsigned __int64 *a1, int **a2)
{
  int *v2; // r5@1
  unsigned __int64 *v3; // r4@1
  int v4; // r6@1
  void *v5; // r0@2
  signed int result; // r0@4
  int v7; // r3@8
  char *v8; // r0@8
  char *v9; // r0@9
  void *v10; // r0@10
  unsigned int *v11; // r2@13
  signed int v12; // r1@15
  unsigned int *v13; // r2@21
  signed int v14; // r1@23
  unsigned int *v15; // r2@25
  signed int v16; // r1@27
  unsigned int *v17; // r2@29
  signed int v18; // r1@31
  void **v19; // [sp+0h] [bp-50h]@8
  int v20; // [sp+4h] [bp-4Ch]@8
  int v21; // [sp+8h] [bp-48h]@8
  char v22; // [sp+Ch] [bp-44h]@8
  int v23; // [sp+10h] [bp-40h]@8
  char *v24; // [sp+14h] [bp-3Ch]@8
  char *v25; // [sp+18h] [bp-38h]@8
  int v26; // [sp+1Ch] [bp-34h]@2
  int v27; // [sp+20h] [bp-30h]@2
  int v28; // [sp+24h] [bp-2Ch]@2

  v2 = (int *)a2;
  v3 = a1;
  v4 = std::_Hashtable<std::string,std::pair<std::string const,SyncedPhotoView::PhotoStatus>,std::allocator<std::pair<std::string const,SyncedPhotoView::PhotoStatus>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         a1,
         a2);
  if ( !v4 )
  {
    sub_21E8AF4(&v26, v2);
    v27 = 0;
    std::_Hashtable<std::string,std::pair<std::string const,SyncedPhotoView::PhotoStatus>,std::allocator<std::pair<std::string const,SyncedPhotoView::PhotoStatus>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_insert<std::pair<std::string const,SyncedPhotoView::PhotoStatus> const&,std::__detail::_AllocNode<std::allocator<std::__detail::_Hash_node<std::pair<std::string const,SyncedPhotoView::PhotoStatus>,true>>>>(
      &v28,
      v3,
      (int **)&v26);
    v4 = v28;
    v5 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
    {
      v11 = (unsigned int *)(v26 - 4);
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
        j_j_j_j__ZdlPv_9(v5);
    }
  }
  if ( *(_DWORD *)(v4 + 8) == 2 )
    result = 2;
  else if ( PhotoStorage::isValidBookPhoto(*((_DWORD *)v3 + 7), (int *)v3 + 8, v2) == 1 )
    *(_DWORD *)(v4 + 8) = 2;
    result = 1;
  else
    result = 0;
    if ( *(_DWORD *)(v4 + 8) != 1 )
      v20 = 2;
      v21 = 1;
      v22 = 0;
      v19 = &off_26E4EB8;
      sub_21E8AF4(&v23, v2);
      v24 = (char *)&unk_28898CC;
      v25 = (char *)&unk_28898CC;
      EntityInteraction::setInteractText((int *)&v25, (int *)v3 + 8);
      *(_DWORD *)(v4 + 8) = 1;
      (*(void (__cdecl **)(_DWORD, void ***, _DWORD, int))(**((_DWORD **)v3 + 9) + 8))(
        *((_DWORD *)v3 + 9),
        &v19,
        *(_DWORD *)(**((_DWORD **)v3 + 9) + 8),
        v7);
      v8 = v25 - 12;
      if ( (int *)(v25 - 12) != &dword_28898C0 )
        v13 = (unsigned int *)(v25 - 4);
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
          j_j_j_j__ZdlPv_9(v8);
      v9 = v24 - 12;
      if ( (int *)(v24 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v24 - 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      v10 = (void *)(v23 - 12);
      if ( (int *)(v23 - 12) != &dword_28898C0 )
        v17 = (unsigned int *)(v23 - 4);
            v18 = __ldrex(v17);
          while ( __strex(v18 - 1, v17) );
          v18 = (*v17)--;
        if ( v18 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      result = 0;
  return result;
}


signed int __fastcall SyncedPhotoView::isLoadedStatus(int a1)
{
  unsigned int v1; // r1@1
  signed int result; // r0@1

  v1 = a1 - 1;
  result = 0;
  if ( v1 < 2 )
    result = 1;
  return result;
}


int __fastcall SyncedPhotoView::SyncedPhotoView(double a1, int *a2, int a3)
{
  int *v3; // r9@1
  int v4; // r7@1
  int v5; // r4@1
  int v6; // r8@1
  unsigned int v7; // r0@1
  int v8; // r6@3
  void *v9; // r5@3

  v3 = a2;
  v4 = HIDWORD(a1);
  v5 = LODWORD(a1);
  *(_DWORD *)(LODWORD(a1) + 8) = 0;
  *(_DWORD *)(LODWORD(a1) + 12) = 0;
  *(_DWORD *)(LODWORD(a1) + 16) = 1065353216;
  LODWORD(a1) += 16;
  v6 = a3;
  *(_DWORD *)(LODWORD(a1) + 4) = 0;
  v7 = sub_21E6254(a1);
  *(_DWORD *)(v5 + 4) = v7;
  if ( v7 == 1 )
  {
    *(_DWORD *)(v5 + 24) = 0;
    v9 = (void *)(v5 + 24);
  }
  else
    if ( v7 >= 0x40000000 )
      sub_21E57F4();
    v8 = 4 * v7;
    v9 = operator new(4 * v7);
    _aeabi_memclr4(v9, v8);
  *(_DWORD *)v5 = v9;
  *(_DWORD *)(v5 + 28) = v4;
  sub_21E8AF4((int *)(v5 + 32), v3);
  *(_DWORD *)(v5 + 36) = v6;
  return v5;
}
