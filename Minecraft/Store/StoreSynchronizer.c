

signed int __fastcall StoreSynchronizer::_purchaseRequiresSync(int a1, const void **a2)
{
  const void **v2; // r4@1
  char *v3; // r6@1
  const void *v4; // r1@1
  size_t v5; // r2@1
  char *v6; // r4@1
  signed int v7; // r5@2
  unsigned int *v9; // r1@6
  signed int v10; // r0@8
  void *s1; // [sp+0h] [bp-18h]@1

  v2 = a2;
  (*(void (__fastcall **)(void **))(**(_DWORD **)a1 + 92))(&s1);
  v3 = (char *)s1;
  v4 = *v2;
  v6 = (char *)s1 - 12;
  v5 = *((_DWORD *)s1 - 3);
  if ( v5 == *((_DWORD *)v4 - 3) )
    v7 = memcmp(s1, v4, v5) != 0;
  else
    v7 = 1;
  if ( (int *)v6 != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v3 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  return v7;
}


void __fastcall StoreSynchronizer::syncAllPurchases(int a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r6@1
  unsigned int v3; // r10@1
  unsigned int v4; // r11@1
  int v5; // r5@1
  int v6; // r4@1
  int v7; // r8@2
  _DWORD *v8; // r9@2
  int v9; // r6@2
  _DWORD *v10; // r1@4
  size_t v11; // r2@4
  int v12; // r7@6
  int v13; // r11@8
  unsigned int v14; // r9@11
  unsigned int v15; // r10@11
  int v16; // r7@11
  int v17; // r4@11
  int v18; // r11@12
  _DWORD *v19; // r8@12
  int v20; // r5@12
  _DWORD *v21; // r1@14
  size_t v22; // r2@14
  int v23; // r6@16
  int v24; // r4@18
  bool v25; // zf@22
  const void **v26; // r5@25
  const void **v27; // r9@25
  unsigned int *v28; // r1@27
  signed int v29; // r0@29
  char *v30; // r6@34
  size_t v31; // r2@34
  char *v32; // r4@34
  signed int v33; // r7@35
  int v34; // r1@39
  int *v35; // r7@39
  const void *v36; // r4@40
  size_t v37; // r6@40
  size_t v38; // r2@41
  _DWORD *v39; // r1@41
  size_t v40; // r11@41
  int v41; // r0@43
  int *v42; // r1@43
  bool v43; // nf@48
  unsigned __int8 v44; // vf@48
  int v45; // r0@48
  _DWORD *v46; // r0@52
  size_t v47; // r11@52
  size_t v48; // r2@52
  int v49; // r0@54
  const void **i; // r4@60
  const void **v51; // r7@60
  void *v52; // r0@63
  char *v53; // r0@65
  unsigned int *v54; // r2@74
  signed int v55; // r1@76
  unsigned int *v56; // r2@78
  signed int v57; // r1@80
  unsigned int *v58; // r2@90
  signed int v59; // r1@92
  unsigned int *v60; // r2@94
  signed int v61; // r1@96
  unsigned __int64 *v62; // [sp+8h] [bp-60h]@2
  int v63; // [sp+8h] [bp-60h]@12
  int v64; // [sp+8h] [bp-60h]@25
  int v65; // [sp+Ch] [bp-5Ch]@1
  char *v66; // [sp+10h] [bp-58h]@65
  int v67; // [sp+14h] [bp-54h]@63
  char v68; // [sp+18h] [bp-50h]@58
  int v69; // [sp+1Ch] [bp-4Ch]@25
  int v70; // [sp+20h] [bp-48h]@25
  int *v71; // [sp+24h] [bp-44h]@25
  int *v72; // [sp+28h] [bp-40h]@25
  int v73; // [sp+2Ch] [bp-3Ch]@25
  void *v74; // [sp+30h] [bp-38h]@11
  void *s1; // [sp+34h] [bp-34h]@1
  void *v76; // [sp+38h] [bp-30h]@34
  int v77; // [sp+3Ch] [bp-2Ch]@61
  int v78; // [sp+40h] [bp-28h]@61

  v2 = a2;
  v65 = a1;
  (*(void (__fastcall **)(void **))(**(_DWORD **)a1 + 20))(&s1);
  v3 = sub_21B417C((int *)s1, *((_DWORD *)s1 - 3), -955291385);
  v4 = *v2 >> 32;
  v5 = v3 % v4;
  v6 = *(_DWORD *)(*v2 + 4 * v5);
  if ( v6 )
  {
    v7 = *(_DWORD *)v6;
    v62 = v2;
    v8 = s1;
    v9 = *(_DWORD *)(*(_DWORD *)v6 + 24);
    while ( 1 )
    {
      if ( v9 == v3 )
      {
        v10 = *(_DWORD **)(v7 + 4);
        v11 = *(v8 - 3);
        if ( v11 == *(v10 - 3) && !memcmp(v8, v10, v11) )
          break;
      }
      v12 = *(_DWORD *)v7;
      if ( *(_DWORD *)v7 )
        v9 = *(_DWORD *)(v12 + 24);
        v6 = v7;
        v7 = *(_DWORD *)v7;
        if ( *(_DWORD *)(v12 + 24) % v4 == v5 )
          continue;
      v13 = 0;
      v2 = v62;
      goto LABEL_10;
    }
    v2 = v62;
    if ( v6 )
      v13 = *(_DWORD *)v6;
    else
  }
  else
    v13 = 0;
LABEL_10:
  if ( v8 - 3 != &dword_28898C0 )
    v54 = v8 - 1;
    if ( &pthread_create )
      __dmb();
      do
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v8 - 3);
  (*(void (__fastcall **)(void **))(**(_DWORD **)(v65 + 4) + 20))(&v74);
  v14 = sub_21B417C((int *)v74, *((_DWORD *)v74 - 3), -955291385);
  v15 = *v2 >> 32;
  v16 = v14 % v15;
  v17 = *(_DWORD *)(*v2 + 4 * v16);
  if ( v17 )
    v63 = v13;
    v18 = *(_DWORD *)v17;
    v19 = v74;
    v20 = *(_DWORD *)(*(_DWORD *)v17 + 24);
      if ( v20 == v14 )
        v21 = *(_DWORD **)(v18 + 4);
        v22 = *(v19 - 3);
        if ( v22 == *(v21 - 3) && !memcmp(v19, v21, v22) )
      v23 = *(_DWORD *)v18;
      if ( *(_DWORD *)v18 )
        v20 = *(_DWORD *)(v23 + 24);
        v17 = v18;
        v18 = *(_DWORD *)v18;
        if ( *(_DWORD *)(v23 + 24) % v15 == v16 )
      goto LABEL_18;
    if ( !v17 )
LABEL_18:
      v24 = 0;
      goto LABEL_19;
    v24 = *(_DWORD *)v17;
LABEL_19:
    v13 = v63;
    v24 = 0;
  if ( v19 - 3 != &dword_28898C0 )
    v56 = v19 - 1;
        v57 = __ldrex(v56);
      while ( __strex(v57 - 1, v56) );
      v57 = (*v56)--;
    if ( v57 <= 0 )
      j_j_j_j__ZdlPv_9(v19 - 3);
  v25 = v13 == 0;
  if ( v13 )
    v25 = v24 == 0;
  if ( !v25 )
    v64 = v24;
    v73 = 0;
    v69 = 0;
    v70 = 0;
    v71 = &v69;
    v72 = &v69;
    v27 = (const void **)(*(_QWORD *)(v13 + 12) >> 32);
    v26 = (const void **)*(_QWORD *)(v13 + 12);
    if ( v26 != v27 )
      while ( 1 )
        (*(void (__fastcall **)(void **))(**(_DWORD **)v65 + 92))(&v76);
        v30 = (char *)v76;
        v32 = (char *)v76 - 12;
        v31 = *((_DWORD *)v76 - 3);
        if ( v31 == *((_DWORD *)*v26 - 3) )
          v33 = memcmp(v76, *v26, v31) != 0;
        else
          v33 = 1;
        if ( (int *)v32 != &dword_28898C0 )
        {
          v28 = (unsigned int *)(v30 - 4);
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
            j_j_j_j__ZdlPv_9(v32);
        }
        if ( v33 != 1 )
          goto LABEL_59;
        v34 = v70;
        v35 = &v69;
        if ( v70 )
          v36 = *v26;
          v37 = *((_DWORD *)*v26 - 3);
          do
            v35 = (int *)v34;
            v38 = v37;
            v39 = *(_DWORD **)(v34 + 16);
            v40 = *(v39 - 3);
            if ( v37 > v40 )
              v38 = *(v39 - 3);
            v41 = memcmp(v36, v39, v38);
            v42 = v35 + 3;
            if ( !v41 )
              v41 = v37 - v40;
            if ( v41 < 0 )
              v42 = v35 + 2;
            v34 = *v42;
          while ( v34 );
          v44 = __OFSUB__(v41, -1);
          v25 = v41 == -1;
          v43 = v41 + 1 < 0;
          v45 = (int)v35;
          if ( !((unsigned __int8)(v43 ^ v44) | v25) )
            goto LABEL_52;
        if ( v35 != v71 )
LABEL_57:
        if ( v35 )
          std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_insert_<std::string const&>(
            (int)&v68,
            0,
            (int)v35,
            v26);
LABEL_59:
        v26 += 4;
        if ( v26 == v27 )
          goto LABEL_60;
      v45 = sub_21D4858((int)v35);
      v36 = *v26;
      v37 = *((_DWORD *)*v26 - 3);
LABEL_52:
      v46 = *(_DWORD **)(v45 + 16);
      v47 = *(v46 - 3);
      v48 = *(v46 - 3);
      if ( v47 > v37 )
        v48 = v37;
      v49 = memcmp(v46, v36, v48);
      if ( !v49 )
        v49 = v47 - v37;
      if ( v49 > -1 )
        goto LABEL_59;
      goto LABEL_57;
LABEL_60:
    v51 = (const void **)(*(_QWORD *)(v64 + 12) >> 32);
    for ( i = (const void **)*(_QWORD *)(v64 + 12); v51 != i; i += 4 )
      std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::equal_range(
        (int)&v77,
        (int)&v68,
        i);
      std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase_aux(
        v77,
        v78);
    if ( !(*(int (**)(void))(**(_DWORD **)(v65 + 4) + 56))() )
      (*(void (__fastcall **)(int *))(**(_DWORD **)v65 + 96))(&v67);
        (const void **)&v67);
      v52 = (void *)(v67 - 12);
      if ( (int *)(v67 - 12) != &dword_28898C0 )
        v60 = (unsigned int *)(v67 - 4);
        if ( &pthread_create )
          __dmb();
            v61 = __ldrex(v60);
          while ( __strex(v61 - 1, v60) );
          v61 = (*v60)--;
        if ( v61 <= 0 )
          j_j_j_j__ZdlPv_9(v52);
    if ( v73 )
      v66 = (char *)&unk_28898CC;
      StoreSynchronizer::_startSync(v65, (int *)&v66);
      v53 = v66 - 12;
      if ( (int *)(v66 - 12) != &dword_28898C0 )
        v58 = (unsigned int *)(v66 - 4);
            v59 = __ldrex(v58);
          while ( __strex(v59 - 1, v58) );
          v59 = (*v58)--;
        if ( v59 <= 0 )
          j_j_j_j__ZdlPv_9(v53);
    std::_Rb_tree<std::string,std::string,std::_Identity<std::string>,std::less<std::string>,std::allocator<std::string>>::_M_erase(
      (int)&v68,
      v70);
}


void __fastcall StoreSynchronizer::syncAllPurchases(int a1, unsigned __int64 *a2)
{
  StoreSynchronizer::syncAllPurchases(a1, a2);
}


void __fastcall StoreSynchronizer::_startSync(int a1, int *a2)
{
  int v2; // r4@1
  void (__fastcall *v3)(int, char **, void **); // r7@1
  int v4; // ST04_4@1
  void *v5; // r6@1
  __int64 v6; // r0@1
  void *v7; // r0@3
  char *v8; // r0@4
  unsigned int *v9; // r2@6
  signed int v10; // r1@8
  unsigned int *v11; // r2@10
  signed int v12; // r1@12
  int v13; // [sp+8h] [bp-30h]@1
  void *v14; // [sp+Ch] [bp-2Ch]@1
  void (*v15)(void); // [sp+14h] [bp-24h]@1
  char *v16; // [sp+1Ch] [bp-1Ch]@1

  v2 = *(_DWORD *)a1;
  v3 = *(void (__fastcall **)(int, char **, void **))(**(_DWORD **)a1 + 88);
  v4 = a1;
  v16 = (char *)&unk_28898CC;
  sub_21E8AF4(&v13, a2);
  v15 = 0;
  v5 = operator new(8u);
  *(_DWORD *)v5 = v4;
  sub_21E8AF4((int *)v5 + 1, &v13);
  LODWORD(v6) = sub_13ACDB0;
  v14 = v5;
  HIDWORD(v6) = sub_13AC9FC;
  *(_QWORD *)&v15 = v6;
  v3(v2, &v16, &v14);
  if ( v15 )
    v15();
  v7 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v13 - 4);
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
  v8 = v16 - 12;
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v16 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
}


void __fastcall StoreSynchronizer::syncPurchase(int a1, const void **a2)
{
  StoreSynchronizer::syncPurchase(a1, a2);
}


int __fastcall StoreSynchronizer::create(_DWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r5@1
  _DWORD *v3; // r4@1
  __int64 v4; // r0@1
  int v5; // r6@2
  void *v6; // r0@2
  int v7; // r2@3
  int v8; // r8@4
  int v9; // r6@6
  void *v10; // r0@6
  bool v11; // zf@8
  _DWORD *v12; // r0@11
  _DWORD *v13; // r5@11
  OculusSyncService *v14; // r6@11
  int result; // r0@11
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  int v20; // [sp+0h] [bp-30h]@6
  int v21; // [sp+4h] [bp-2Ch]@2

  v2 = a2;
  v3 = a1;
  v4 = *a2;
  if ( HIDWORD(v4) - (_DWORD)v4 != 8 )
    goto LABEL_33;
  (*(void (__fastcall **)(int *))(**(_DWORD **)v4 + 20))(&v21);
  v5 = sub_21E7D6C((const void **)&v21, "oculus.store");
  v6 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v21 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  v7 = *(_DWORD *)v2;
  if ( v5 )
    v8 = 0;
  else
    v8 = *(_DWORD *)v7;
  (*(void (__fastcall **)(int *))(**(_DWORD **)(v7 + 4) + 20))(&v20);
  v9 = sub_21E7D6C((const void **)&v20, "uwp.store");
  v10 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v20 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  if ( v9 )
  v11 = v8 == 0;
  if ( v8 )
    v9 = *(_DWORD *)(*(_DWORD *)v2 + 4);
    v11 = v9 == 0;
  if ( v11 )
LABEL_33:
    result = 0;
    *v3 = 0;
    v12 = operator new(0xCu);
    v13 = v12;
    *v12 = v8;
    v12[1] = v9;
    v12[2] = 0;
    v14 = (OculusSyncService *)operator new(0x28u);
    OculusSyncService::OculusSyncService(v14);
    result = v13[2];
    v13[2] = v14;
    if ( result )
      result = (*(int (**)(void))(*(_DWORD *)result + 4))();
    *v3 = v13;
  return result;
}


StoreSynchronizer *__fastcall StoreSynchronizer::~StoreSynchronizer(StoreSynchronizer *this)
{
  StoreSynchronizer *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  v2 = *((_DWORD *)this + 2);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 2) = 0;
  return v1;
}


int __fastcall StoreSynchronizer::StoreSynchronizer(int a1, int r1_0, __int64 a2)
{
  int v3; // r4@1
  OculusSyncService *v4; // r6@1
  int v5; // r0@1

  v3 = a1;
  *(_QWORD *)a1 = *(__int64 *)((char *)&a2 - 4);
  *(_DWORD *)(a1 + 8) = 0;
  v4 = (OculusSyncService *)operator new(0x28u);
  OculusSyncService::OculusSyncService(v4);
  v5 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = v4;
  if ( v5 )
    (*(void (**)(void))(*(_DWORD *)v5 + 4))();
  return v3;
}


void __fastcall StoreSynchronizer::_startSync(int a1, int *a2)
{
  StoreSynchronizer::_startSync(a1, a2);
}


void __fastcall StoreSynchronizer::syncPurchase(int a1, const void **a2)
{
  int v2; // r8@1
  const void **v3; // r4@1
  char *v4; // r5@1
  size_t v5; // r2@1
  char *v6; // r6@1
  signed int v7; // r7@2
  unsigned int *v8; // r1@8
  signed int v9; // r0@10
  void *s1; // [sp+0h] [bp-20h]@1

  v2 = a1;
  v3 = a2;
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)a1 + 92))(&s1);
  v4 = (char *)s1;
  v6 = (char *)s1 - 12;
  v5 = *((_DWORD *)s1 - 3);
  if ( v5 == *((_DWORD *)*v3 - 3) )
    v7 = memcmp(s1, *v3, v5) != 0;
  else
    v7 = 1;
  if ( (int *)v6 != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v4 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  if ( v7 == 1 )
    StoreSynchronizer::_startSync(v2, (int *)v3);
}


int __fastcall StoreSynchronizer::update(StoreSynchronizer *this)
{
  int result; // r0@1

  result = *((_DWORD *)this + 2);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 8))();
  return result;
}
