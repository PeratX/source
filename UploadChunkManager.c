

char *__fastcall UploadChunkManager::getMissingChunks(UploadChunkManager *this)
{
  return (char *)this + 16;
}


int __fastcall UploadChunkManager::getChunkInfo(int result, int a2, int a3)
{
  int v3; // r12@1
  int v4; // lr@1
  int v5; // r2@5
  int v6; // r3@5
  int v7; // r4@5
  int v8; // r5@5
  int v9; // r12@5

  v3 = *(_QWORD *)(a2 + 16) >> 32;
  v4 = *(_QWORD *)(a2 + 16);
  if ( v4 == v3 )
  {
LABEL_4:
    *(_DWORD *)result = -1;
    *(_DWORD *)(result + 8) = -1;
    *(_DWORD *)(result + 12) = -1;
    *(_DWORD *)(result + 16) = 0;
    *(_DWORD *)(result + 20) = 0;
  }
  else
    while ( *(_DWORD *)v4 != a3 )
    {
      v4 += 24;
      if ( v3 == v4 )
        goto LABEL_4;
    }
    v5 = *(_DWORD *)(v4 + 4);
    v6 = *(_DWORD *)(v4 + 8);
    v7 = *(_DWORD *)(v4 + 12);
    v8 = *(_DWORD *)(v4 + 16);
    v9 = *(_DWORD *)(v4 + 20);
    *(_DWORD *)result = *(_DWORD *)v4;
    *(_DWORD *)(result + 4) = v5;
    *(_DWORD *)(result + 8) = v6;
    *(_DWORD *)(result + 12) = v7;
    *(_DWORD *)(result + 16) = v8;
    *(_DWORD *)(result + 20) = v9;
  return result;
}


int __fastcall UploadChunkManager::_generateMissingChunks(int result, int a2, unsigned int a3)
{
  char *v3; // r5@1
  unsigned __int64 v4; // r6@1
  bool v5; // zf@1
  int v6; // r8@4
  unsigned int v7; // r4@4
  void *v8; // r0@9
  int v9; // r0@11
  int v10; // r4@11
  unsigned int v11; // r3@12
  unsigned int v12; // r10@12
  int v13; // r11@12
  signed int v14; // r2@14
  signed int v15; // r1@14
  unsigned int v16; // r8@14
  unsigned int v17; // r9@14
  unsigned __int64 v18; // kr10_8@22
  unsigned int v19; // r6@24
  int v20; // r0@24
  unsigned int v21; // r1@24
  unsigned int v22; // r2@26
  unsigned int v23; // r0@26
  bool v24; // cf@28
  char *v25; // r0@31
  char *v26; // r1@31
  _BYTE *v27; // r0@31
  _BYTE *v28; // r12@31
  int v29; // r2@31
  char *v30; // r10@31
  _DWORD *v31; // r7@32
  char *v32; // lr@32
  int v33; // r2@32
  int v34; // r3@32
  int v35; // r4@32
  int v36; // r5@32
  int v37; // r6@32
  int v38; // r1@37
  int v39; // [sp+4h] [bp-34h]@12
  char *v40; // [sp+8h] [bp-30h]@31
  int v41; // [sp+Ch] [bp-2Ch]@31

  v3 = *(char **)(result + 16);
  *(_DWORD *)(result + 20) = v3;
  *(_DWORD *)(result + 12) = 0;
  v4 = *(_QWORD *)result;
  v5 = *(_QWORD *)result == 0LL;
  if ( *(_QWORD *)result )
  {
    a3 = *(_DWORD *)(result + 8);
    v5 = a3 == 0;
  }
  if ( !v5 )
    v6 = result;
    v7 = v4 / a3 + 1;
    if ( v7 >= 0xAAAAAAB )
      sub_21E5A04("vector::reserve");
    result = *(_DWORD *)(result + 24);
    if ( -1431655765 * ((result - (signed int)v3) >> 3) >= v7 )
      goto LABEL_52;
    if ( (unsigned int)(v4 / a3) == -1 )
      v3 = 0;
    else
      v3 = (char *)operator new(24 * v7);
    v8 = *(void **)(v6 + 16);
    if ( v8 )
      operator delete(v8);
    v9 = 3 * v7;
    v10 = v6;
    *(_DWORD *)(v6 + 16) = v3;
    *(_DWORD *)(v6 + 20) = v3;
    result = (int)&v3[8 * v9];
    *(_DWORD *)(v6 + 24) = result;
    v4 = *(_QWORD *)v6;
    if ( *(_QWORD *)v6 )
    {
LABEL_52:
      v11 = 0;
      v12 = 0;
      v13 = 0;
      v10 = v6;
      v39 = v6;
      while ( 1 )
      {
        v14 = 0;
        v15 = 0;
        v16 = (__PAIR__(v12, *(_DWORD *)(v10 + 8)) + v11) >> 32;
        v17 = *(_DWORD *)(v10 + 8) + v11;
        if ( (unsigned int)v4 < v17 )
          v15 = 1;
        if ( HIDWORD(v4) < v16 )
          v14 = 1;
        if ( HIDWORD(v4) == v16 )
          v14 = v15;
        if ( v14 )
        {
          v16 = HIDWORD(v4);
          v17 = v4;
        }
        v18 = __PAIR__(v16, v17) - 1;
        if ( v3 == (char *)result )
          v19 = v11;
          v20 = (signed int)&v3[-*(_DWORD *)(v10 + 16)] >> 3;
          v21 = -1431655765 * v20;
          if ( v3 == *(char **)(v10 + 16) )
            v21 = 1;
          v22 = v21 + -1431655765 * v20;
          v23 = v22;
          if ( v22 > 0xAAAAAAA )
            v23 = 178956970;
          v24 = v22 >= v21;
          LOWORD(v21) = -21845;
          if ( !v24 )
          HIWORD(v21) = 2730;
          if ( v23 >= v21 )
            sub_21E57F4();
          v41 = 3 * v23;
          v25 = (char *)operator new(24 * v23);
          v26 = v25;
          v40 = v25;
          v28 = (_BYTE *)(*(_QWORD *)(v10 + 16) >> 32);
          v27 = (_BYTE *)*(_QWORD *)(v10 + 16);
          *(_DWORD *)&v40[v28 - v27] = v13;
          v29 = (int)&v26[v28 - v27];
          *(_DWORD *)(v29 + 8) = v19;
          *(_DWORD *)(v29 + 12) = v12;
          v30 = v26;
          *(_QWORD *)(v29 + 16) = v18;
          if ( v28 != v27 )
          {
            do
            {
              v31 = v27;
              v32 = v30;
              v27 += 24;
              v30 += 24;
              v33 = v31[1];
              v34 = v31[2];
              v35 = v31[3];
              v36 = v31[4];
              v37 = v31[5];
              *(_DWORD *)v32 = *v31;
              *((_DWORD *)v32 + 1) = v33;
              *((_DWORD *)v32 + 2) = v34;
              *((_DWORD *)v32 + 3) = v35;
              *((_DWORD *)v32 + 4) = v36;
              *((_DWORD *)v32 + 5) = v37;
            }
            while ( v28 != v27 );
            v27 = *(_BYTE **)(v39 + 16);
          }
          v3 = v30 + 24;
          if ( v27 )
            operator delete(v27);
          v10 = v39;
          *(_DWORD *)(v39 + 16) = v40;
          *(_DWORD *)(v39 + 20) = v3;
          *(_DWORD *)(v39 + 24) = &v40[8 * v41];
        else
          *(_DWORD *)v3 = v13;
          *((_DWORD *)v3 + 2) = v11;
          *((_DWORD *)v3 + 3) = v12;
          *((_QWORD *)v3 + 2) = v18;
          v3 = (char *)(*(_DWORD *)(v10 + 20) + 24);
          *(_DWORD *)(v10 + 20) = v3;
        v4 = *(_QWORD *)v10;
        result = 0;
        v38 = 0;
        ++v13;
        if ( v17 >= (unsigned int)*(_QWORD *)v10 )
          result = 1;
        if ( v16 >= HIDWORD(v4) )
          v38 = 1;
        if ( v16 == HIDWORD(v4) )
          v38 = result;
        if ( v38 )
          break;
        result = *(_DWORD *)(v10 + 24);
        v11 = v17;
        v12 = v16;
      }
    }
    *(_DWORD *)(v10 + 12) = v13;
  return result;
}


int __fastcall UploadChunkManager::confirmChunkReceived(int result, const UploadChunkInfo *a2)
{
  int v2; // r8@1
  int v3; // r12@1
  __int64 v4; // kr08_8@2
  bool v5; // zf@4
  signed int v6; // r1@10
  int v7; // lr@11
  int v8; // r2@12
  int v9; // r4@12
  int v10; // r5@12
  int v11; // r6@12
  int v12; // r7@12

  v3 = *(_QWORD *)(result + 16) >> 32;
  v2 = *(_QWORD *)(result + 16);
  if ( v2 != v3 )
  {
    v4 = *((_QWORD *)a2 + 1);
    while ( 1 )
    {
      if ( *(_DWORD *)v2 == *(_DWORD *)a2 )
      {
        v5 = *(_QWORD *)(v2 + 8) == v4;
        if ( *(_QWORD *)(v2 + 8) == v4 )
          v5 = *(_QWORD *)(v2 + 16) == *((_QWORD *)a2 + 2);
        if ( v5 )
          break;
      }
      v2 += 24;
      if ( v3 == v2 )
        return result;
    }
    if ( v2 + 24 != v3 )
      v6 = v3 - (v2 + 24);
      if ( v6 >= 1 )
        v7 = -1431655765 * (v6 >> 3) + 1;
        do
        {
          --v7;
          v8 = *(_DWORD *)(v2 + 28);
          v9 = *(_DWORD *)(v2 + 32);
          v10 = *(_DWORD *)(v2 + 36);
          v11 = *(_DWORD *)(v2 + 40);
          v12 = *(_DWORD *)(v2 + 44);
          *(_DWORD *)v2 = *(_DWORD *)(v2 + 24);
          *(_DWORD *)(v2 + 4) = v8;
          *(_DWORD *)(v2 + 8) = v9;
          *(_DWORD *)(v2 + 12) = v10;
          *(_DWORD *)(v2 + 16) = v11;
          *(_DWORD *)(v2 + 20) = v12;
          v2 += 24;
        }
        while ( v7 > 1 );
        v3 = *(_DWORD *)(result + 20);
    *(_DWORD *)(result + 20) = v3 - 24;
  }
  return result;
}


int __fastcall UploadChunkManager::getProgress(UploadChunkManager *this)
{
  signed int v1; // r1@1
  int result; // r0@2
  __int64 v7; // r2@3
  unsigned __int64 v8; // r4@4
  unsigned __int64 v9; // r0@4

  v1 = *((_DWORD *)this + 3);
  if ( v1 >= 1 )
  {
    v7 = *((_QWORD *)this + 2);
    if ( (_DWORD)v7 == HIDWORD(v7) )
    {
      v8 = *(_QWORD *)this;
      v9 = *(_QWORD *)this;
    }
    else
      v9 = *((_DWORD *)this + 2)
         * (unsigned __int64)(unsigned int)(v1 - -1431655765 * ((HIDWORD(v7) - (signed int)v7) >> 3));
    _R6 = _aeabi_ul2f(v9, HIDWORD(v9));
    _R0 = _aeabi_ul2f(v8, HIDWORD(v8));
    __asm
      VMOV            S0, R0
      VMOV            S2, R6
      VDIV.F32        S0, S2, S0
      VMOV            R0, S0
  }
  else
      VLDRLT          S0, =0.0
      VMOVLT          R0, S0
  return result;
}


int __fastcall UploadChunkManager::reset(UploadChunkManager *this, int a2, unsigned __int64 a3)
{
  *(_QWORD *)this = a3;
  return j_j_j__ZN18UploadChunkManager22_generateMissingChunksEv(this, a2, a3);
}


int __fastcall UploadChunkManager::reset(UploadChunkManager *this, int a2, unsigned __int64 a3, unsigned int a4)
{
  *(_QWORD *)this = a3;
  *((_DWORD *)this + 2) = a4;
  return j_j_j__ZN18UploadChunkManager22_generateMissingChunksEv(this, a4, a3);
}


int __fastcall UploadChunkManager::UploadChunkManager(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  return result;
}


unsigned __int64 __fastcall UploadChunkManager::getDownloadedBytes(UploadChunkManager *this)
{
  signed int v1; // r1@1
  unsigned __int64 result; // r0@2
  __int64 v3; // r2@3

  v1 = *((_DWORD *)this + 3);
  if ( v1 >= 1 )
  {
    v3 = *((_QWORD *)this + 2);
    if ( (_DWORD)v3 == HIDWORD(v3) )
      result = *(_QWORD *)this;
    else
      result = (unsigned int)(v1 - -1431655765 * ((HIDWORD(v3) - (signed int)v3) >> 3))
             * (unsigned __int64)*((_DWORD *)this + 2);
  }
  else
    result = 0LL;
  return result;
}


UploadChunkManager *__fastcall UploadChunkManager::UploadChunkManager(UploadChunkManager *this, int a2, __int64 a3, int a4)
{
  UploadChunkManager *v4; // r4@1

  v4 = this;
  *(_QWORD *)this = a3;
  *((_QWORD *)this + 1) = (unsigned int)a4;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  UploadChunkManager::_generateMissingChunks(this, 0, a3);
  return v4;
}
