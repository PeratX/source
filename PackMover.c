

void __fastcall PackMover::copyPack(int a1, char a2, int *a3, char a4, int a5, int a6)
{
  PackMover::copyPack(a1, a2, a3, a4, a5, a6);
}


void __fastcall PackMover::copyPack(PackManifest *a1, int *a2, char a3, int a4, int a5)
{
  PackMover::copyPack(a1, a2, a3, a4, a5);
}


void __fastcall PackMover::copyPack(PackManifest *a1, int *a2, char a3, int a4, int a5)
{
  int v5; // r6@1
  char v6; // r8@1
  int *v7; // r9@1
  PackManifest *v8; // r4@1
  int v9; // r7@1
  char *v10; // r4@1
  void (__fastcall *v11)(char *, int, signed int); // r3@1
  char v12; // [sp+Ch] [bp-2Ch]@2
  void (*v13)(void); // [sp+14h] [bp-24h]@1
  int v14; // [sp+18h] [bp-20h]@2

  v5 = a4;
  v6 = a3;
  v7 = a2;
  v8 = a1;
  v9 = PackManifest::getManifestOrigin(a1);
  v10 = PackManifest::getLocation(v8);
  v13 = 0;
  v11 = *(void (__fastcall **)(char *, int, signed int))(a5 + 8);
  if ( v11 )
  {
    v11(&v12, a5, 2);
    v14 = *(_DWORD *)(a5 + 12);
    v13 = *(void (**)(void))(a5 + 8);
  }
  if ( v9 != 1 )
    LOBYTE(v9) = 0;
  PackMover::copyPack((int)v10, v9, v7, v6, v5, (int)&v12);
  if ( v13 )
    v13();
}


void __fastcall PackMover::copyPack(int a1, char a2, int *a3, char a4, int a5, int a6)
{
  int v6; // r4@1
  int *v7; // r5@1
  char v8; // r7@1
  char v9; // r9@1
  int v10; // r8@1
  unsigned int *v11; // r0@2
  unsigned int v12; // r1@4
  void *v13; // r5@7
  int v14; // r0@7
  __int64 v15; // r1@7
  void (__fastcall *v16)(char *, int, signed int); // r3@7
  unsigned int *v17; // r0@10
  unsigned int v18; // r1@12
  _DWORD *v19; // r0@15
  void (*v20)(void); // r1@15
  int v21; // r1@15
  int v22; // r4@17
  unsigned int *v23; // r1@18
  unsigned int v24; // r0@20
  unsigned int *v25; // r5@24
  unsigned int v26; // r0@26
  void *v27; // r0@35
  void *v28; // r0@36
  int v29; // r4@37
  unsigned int *v30; // r1@38
  unsigned int v31; // r0@40
  unsigned int *v32; // r5@44
  unsigned int v33; // r0@46
  int v34; // r4@51
  unsigned int *v35; // r1@52
  unsigned int v36; // r0@54
  unsigned int *v37; // r5@58
  unsigned int v38; // r0@60
  unsigned int *v39; // r2@66
  signed int v40; // r1@68
  unsigned int *v41; // r2@70
  signed int v42; // r1@72
  char v43; // [sp+8h] [bp-88h]@8
  void (*v44)(void); // [sp+10h] [bp-80h]@7
  int v45; // [sp+14h] [bp-7Ch]@8
  int v46; // [sp+18h] [bp-78h]@9
  int v47; // [sp+1Ch] [bp-74h]@9
  _DWORD *v48; // [sp+20h] [bp-70h]@15
  void (*v49)(void); // [sp+28h] [bp-68h]@15
  int (__fastcall *v50)(int *); // [sp+2Ch] [bp-64h]@15
  int v51; // [sp+30h] [bp-60h]@1
  int v52; // [sp+34h] [bp-5Ch]@1
  int v53; // [sp+38h] [bp-58h]@7
  int v54; // [sp+3Ch] [bp-54h]@7
  char v55; // [sp+40h] [bp-50h]@7
  int v56; // [sp+44h] [bp-4Ch]@7
  char v57; // [sp+48h] [bp-48h]@7
  int v58; // [sp+4Ch] [bp-44h]@7
  void *v59; // [sp+50h] [bp-40h]@7
  void (*v60)(void); // [sp+58h] [bp-38h]@7
  char v61; // [sp+63h] [bp-2Dh]@1
  int v62; // [sp+64h] [bp-2Ch]@1
  int v63; // [sp+68h] [bp-28h]@1
  char v64; // [sp+6Ch] [bp-24h]@1

  v6 = a1;
  v7 = a3;
  v8 = a2;
  v61 = 0;
  v9 = a4;
  std::__shared_ptr<bool,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<bool>,bool>(
    (int)&v62,
    (int)&v64,
    &v61);
  v51 = v62;
  v10 = TaskGroup::DISK;
  v52 = v63;
  if ( v63 )
  {
    v11 = (unsigned int *)(v63 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 + 1, v11) );
    }
    else
      ++*v11;
  }
  sub_21E8AF4(&v53, (int *)v6);
  v54 = *(_DWORD *)(v6 + 4);
  v55 = v8;
  sub_21E8AF4(&v56, v7);
  v57 = v9;
  v58 = a5;
  v60 = 0;
  v13 = operator new(0x20u);
  *(_DWORD *)v13 = v51;
  v14 = v52;
  v52 = 0;
  v51 = 0;
  *((_DWORD *)v13 + 1) = v14;
  sub_21E8AF4((int *)v13 + 2, &v53);
  *((_DWORD *)v13 + 3) = v54;
  *((_BYTE *)v13 + 16) = v55;
  sub_21E8AF4((int *)v13 + 5, &v56);
  HIDWORD(v15) = sub_158231C;
  *((_QWORD *)v13 + 3) = *(_QWORD *)&v57;
  LODWORD(v15) = sub_1582D2C;
  v59 = v13;
  *(_QWORD *)&v60 = v15;
  v44 = 0;
  v16 = *(void (__fastcall **)(char *, int, signed int))(a6 + 8);
  if ( v16 )
    v16(&v43, a6, 2);
    v45 = *(_DWORD *)(a6 + 12);
    v44 = *(void (**)(void))(a6 + 8);
  v46 = v62;
  v47 = v63;
    v17 = (unsigned int *)(v63 + 4);
        v18 = __ldrex(v17);
      while ( __strex(v18 + 1, v17) );
      ++*v17;
  v49 = 0;
  v19 = operator new(0x18u);
  *(_QWORD *)v19 = *(_QWORD *)&v43;
  v20 = v44;
  v19[2] = v20;
  v19[3] = v45;
  v19[4] = v46;
  v21 = v47;
  v47 = 0;
  v19[5] = v21;
  v46 = 0;
  v48 = v19;
  v49 = (void (*)(void))sub_1582FC4;
  v50 = sub_1582FB0;
  TaskGroup::queue(v10, (int)&v59, (int)&v48, 1u, 0xFFFFFFFF);
  if ( v49 )
    v49();
  v22 = v47;
  if ( v47 )
    v23 = (unsigned int *)(v47 + 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 == 1 )
      v25 = (unsigned int *)(v22 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
      if ( &pthread_create )
      {
        __dmb();
        do
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
      }
      else
        v26 = (*v25)--;
      if ( v26 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
  if ( v44 )
    v44();
  if ( v60 )
    v60();
  v27 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v56 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = (void *)(v53 - 12);
  if ( (int *)(v53 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v53 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = v52;
  if ( v52 )
    v30 = (unsigned int *)(v52 + 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 == 1 )
      v32 = (unsigned int *)(v29 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 8))(v29);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v29 + 12))(v29);
  v34 = v63;
    v35 = (unsigned int *)(v63 + 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 == 1 )
      v37 = (unsigned int *)(v34 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 8))(v34);
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
        v38 = (*v37)--;
      if ( v38 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v34 + 12))(v34);
}
