

signed int __fastcall EncryptedZipTransforms::readTransform(int a1, int a2)
{
  int v2; // r8@1
  int v3; // r4@1
  signed int v4; // r7@1
  __int64 v5; // kr00_8@1
  int v6; // r1@5
  int v7; // r6@5
  int v8; // r5@5
  signed int v9; // r2@7
  int v10; // r6@9
  void *v11; // r0@9
  void *v12; // r0@12
  int v13; // r0@13
  int v14; // r0@13
  void *v15; // r0@13
  void *v16; // r0@14
  const char *v17; // r1@15
  int v18; // r0@15
  unsigned int v19; // r2@15
  unsigned int v20; // r3@15
  void *v21; // r0@17
  void *v22; // r0@18
  signed int result; // r0@19
  char *v24; // r0@22
  void *v25; // r0@23
  void *v26; // r0@24
  unsigned int *v27; // r2@28
  signed int v28; // r1@30
  unsigned int *v29; // r2@36
  signed int v30; // r1@38
  unsigned int *v31; // r2@40
  signed int v32; // r1@42
  unsigned int *v33; // r2@44
  signed int v34; // r1@46
  unsigned int *v35; // r2@48
  signed int v36; // r1@50
  unsigned int *v37; // r2@52
  signed int v38; // r1@54
  unsigned int *v39; // r2@56
  signed int v40; // r1@58
  unsigned int *v41; // r2@60
  signed int v42; // r1@62
  unsigned int *v43; // r2@64
  signed int v44; // r1@66
  const char *v45; // [sp+0h] [bp-178h]@15
  int v46; // [sp+8h] [bp-170h]@15
  int v47; // [sp+Ch] [bp-16Ch]@13
  int v48; // [sp+10h] [bp-168h]@13
  char v49; // [sp+14h] [bp-164h]@13
  int v50; // [sp+1Ch] [bp-15Ch]@12
  int v51; // [sp+20h] [bp-158h]@17
  int v52; // [sp+24h] [bp-154h]@11
  int v53; // [sp+28h] [bp-150h]@1
  int v54; // [sp+2Ch] [bp-14Ch]@1
  int v55; // [sp+30h] [bp-148h]@1
  int v56; // [sp+34h] [bp-144h]@1
  char v57; // [sp+38h] [bp-140h]@6
  int v58; // [sp+3Ch] [bp-13Ch]@6
  int v59; // [sp+40h] [bp-138h]@6
  int v60; // [sp+44h] [bp-134h]@6
  int v61; // [sp+50h] [bp-128h]@5
  char v62; // [sp+58h] [bp-120h]@1
  int v63; // [sp+5Ch] [bp-11Ch]@2
  unsigned __int8 v64; // [sp+68h] [bp-110h]@5
  _BYTE v65[3]; // [sp+69h] [bp-10Fh]@5
  RakNet *v66; // [sp+15Ch] [bp-1Ch]@1

  v2 = a1;
  v3 = a2;
  v4 = 0;
  v66 = _stack_chk_guard;
  v55 = 0;
  v56 = 0;
  v53 = 0;
  v54 = 0;
  _aeabi_memclr8(&v62, 256);
  v5 = *(_QWORD *)v3;
  if ( (unsigned int)(HIDWORD(v5) - v5) >= 0x100 )
  {
    _aeabi_memcpy(&v62, (const char *)v5, 256);
    v4 = 0;
    if ( v63 == -1680885252 && !v62 )
      v4 = 1;
  }
  sub_21E94B4((void **)&v61, v65);
  v6 = v61;
  v7 = v64;
  v8 = *(_DWORD *)(v61 - 12);
  if ( v8 == v64 )
    mce::UUID::fromString((int)&v57, &v61);
    v53 = *(_DWORD *)&v57;
    v54 = v58;
    v55 = v59;
    v56 = v60;
    v6 = v61;
  v9 = 0;
  if ( v8 == v7 )
    v9 = 1;
  v10 = v4 & v9;
  v11 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v6 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    }
    else
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  if ( v10 != 1 )
    goto LABEL_25;
  (*(void (__fastcall **)(int *))(**(_DWORD **)(v2 + 4) + 8))(&v52);
  if ( *(_DWORD *)(v52 - 12) )
    mce::UUID::asString((mce::UUID *)&v50);
    v12 = (void *)(v50 - 12);
    if ( (int *)(v50 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v50 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
      }
      else
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    Crypto::Symmetric::Symmetric::Symmetric(&v49, 1, 2);
    v13 = Crypto::Symmetric::Symmetric::getKeySize((Crypto::Symmetric::Symmetric *)&v49);
    sub_21E9040((void **)&v48, &v52, 0, v13);
    v14 = Crypto::Symmetric::Symmetric::getBlockSize((Crypto::Symmetric::Symmetric *)&v49);
    sub_21E9040((void **)&v47, &v52, 0, v14);
    Crypto::Symmetric::Symmetric::init((int)&v49);
    v15 = (void *)(v47 - 12);
    if ( (int *)(v47 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v47 - 4);
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
    v16 = (void *)(v48 - 12);
    if ( (int *)(v48 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v48 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    sub_21E91E0((void **)&v46, *(_QWORD *)v3, (*(_QWORD *)v3 >> 32) - *(_QWORD *)v3);
    Crypto::Symmetric::Symmetric::decrypt((int)&v45, (int)&v49);
    v17 = v45;
    v18 = *(_QWORD *)v3;
    v19 = *((_DWORD *)v45 - 3);
    v20 = (*(_QWORD *)v3 >> 32) - v18;
    if ( v19 <= v20 )
      if ( v19 < v20 )
        *(_DWORD *)(v3 + 4) = v18 + v19;
      std::vector<unsigned char,std::allocator<unsigned char>>::_M_default_append(v3, v19 - v20);
      v17 = v45;
      v18 = *(_DWORD *)v3;
      v19 = *((_DWORD *)v45 - 3);
    _aeabi_memcpy(v18, v17, v19);
    v24 = (char *)(v45 - 12);
    if ( (int *)(v45 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v45 - 4);
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    v25 = (void *)(v46 - 12);
    if ( (int *)(v46 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v46 - 4);
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
        v38 = (*v37)--;
      if ( v38 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    Crypto::Symmetric::Symmetric::~Symmetric((Crypto::Symmetric::Symmetric *)&v49);
    v26 = (void *)(v52 - 12);
    if ( (int *)(v52 - 12) != &dword_28898C0 )
      v39 = (unsigned int *)(v52 - 4);
          v40 = __ldrex(v39);
        while ( __strex(v40 - 1, v39) );
        v40 = (*v39)--;
      if ( v40 <= 0 )
        j_j_j_j__ZdlPv_9(v26);
LABEL_25:
    result = 1;
    goto LABEL_26;
  mce::UUID::asString((mce::UUID *)&v51);
  v21 = (void *)(v51 - 12);
  if ( (int *)(v51 - 12) != &dword_28898C0 )
    v41 = (unsigned int *)(v51 - 4);
        v42 = __ldrex(v41);
      while ( __strex(v42 - 1, v41) );
      v42 = (*v41)--;
    if ( v42 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v52 - 12);
  if ( (int *)(v52 - 12) != &dword_28898C0 )
    v43 = (unsigned int *)(v52 - 4);
        v44 = __ldrex(v43);
      while ( __strex(v44 - 1, v43) );
      v44 = (*v43)--;
    if ( v44 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  result = 0;
LABEL_26:
  if ( _stack_chk_guard != v66 )
    _stack_chk_fail(result);
  return result;
}


int __fastcall EncryptedZipTransforms::EncryptedZipTransforms(int result, int a2)
{
  *(_DWORD *)result = &off_26EACBC;
  *(_DWORD *)(result + 4) = a2;
  return result;
}
