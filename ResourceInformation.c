

int *__fastcall ResourceInformation::ResourceInformation(int *a1, int *a2, int a3, int a4, int a5, int *a6)
{
  int v6; // r5@1
  int v7; // r6@1
  int *v8; // r4@1
  int v9; // r1@1
  int v10; // r12@1
  __int16 v11; // r1@1
  int v12; // r2@1
  int v13; // r3@1
  int v14; // r6@1

  v6 = a4;
  v7 = a3;
  v8 = a1;
  sub_21E8AF4(a1, a2);
  v9 = *(_DWORD *)v7;
  *((_WORD *)v8 + 4) = *(_WORD *)(v7 + 4);
  v8[1] = v9;
  sub_21E8AF4(v8 + 3, (int *)(v7 + 8));
  sub_21E8AF4(v8 + 4, (int *)(v7 + 12));
  sub_21E8AF4(v8 + 5, (int *)(v7 + 16));
  v10 = (int)(v8 + 8);
  v11 = *(_WORD *)(v7 + 20);
  *((_BYTE *)v8 + 26) = *(_BYTE *)(v7 + 22);
  *((_WORD *)v8 + 12) = v11;
  v12 = *(_DWORD *)(v6 + 4);
  v13 = *(_DWORD *)(v6 + 8);
  v14 = *(_DWORD *)(v6 + 12);
  *(_DWORD *)v10 = *(_DWORD *)v6;
  *(_DWORD *)(v10 + 4) = v12;
  *(_DWORD *)(v10 + 8) = v13;
  *(_DWORD *)(v10 + 12) = v14;
  v8[12] = a5;
  sub_21E8AF4(v8 + 13, a6);
  return v8;
}


int *__fastcall ResourceInformation::ResourceInformation(int *a1, int *a2, int a3, int a4, const void **a5, int *a6)
{
  int v6; // r5@1
  int v7; // r6@1
  int *v8; // r4@1
  int v9; // r1@1
  int v10; // lr@1
  __int16 v11; // r1@1
  int v12; // r1@1
  int v13; // r3@1
  int v14; // r6@1
  unsigned __int64 *v15; // r0@1
  int v16; // r2@1

  v6 = a4;
  v7 = a3;
  v8 = a1;
  sub_21E8AF4(a1, a2);
  v9 = *(_DWORD *)v7;
  *((_WORD *)v8 + 4) = *(_WORD *)(v7 + 4);
  v8[1] = v9;
  sub_21E8AF4(v8 + 3, (int *)(v7 + 8));
  sub_21E8AF4(v8 + 4, (int *)(v7 + 12));
  sub_21E8AF4(v8 + 5, (int *)(v7 + 16));
  v10 = (int)(v8 + 8);
  v11 = *(_WORD *)(v7 + 20);
  *((_BYTE *)v8 + 26) = *(_BYTE *)(v7 + 22);
  *((_WORD *)v8 + 12) = v11;
  v12 = *(_DWORD *)(v6 + 4);
  v13 = *(_DWORD *)(v6 + 8);
  v14 = *(_DWORD *)(v6 + 12);
  *(_DWORD *)v10 = *(_DWORD *)v6;
  *(_DWORD *)(v10 + 4) = v12;
  *(_DWORD *)(v10 + 8) = v13;
  *(_DWORD *)(v10 + 12) = v14;
  v15 = (unsigned __int64 *)j_std::__find_if<std::string const*,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
                              (int)&unk_287E72C,
                              (const void **)dword_287E748,
                              a5);
  v16 = ((char *)v15 - (char *)&unk_287E72C) >> 2;
  if ( v15 == dword_287E748 )
    v16 = 0;
  v8[12] = v16;
  sub_21E8AF4(v8 + 13, a6);
  return v8;
}


signed int __fastcall ResourceInformation::satisfies(ResourceInformation *this, const PackIdVersion *a2)
{
  signed int result; // r0@3

  if ( *((_QWORD *)this + 4) != *(_QWORD *)a2 || *((_QWORD *)this + 5) != *((_QWORD *)a2 + 1) )
    result = 0;
  else
    result = j_SemVersion::satisfies(
               (ResourceInformation *)((char *)this + 4),
               (const PackIdVersion *)((char *)a2 + 16));
  return result;
}


ResourceInformation *__fastcall ResourceInformation::~ResourceInformation(ResourceInformation *this)
{
  ResourceInformation *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  int v8; // r1@4
  void *v9; // r0@4
  int *v10; // r0@5
  unsigned int *v12; // r2@7
  signed int v13; // r1@9
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  unsigned int *v16; // r2@15
  signed int v17; // r1@17
  unsigned int *v18; // r2@19
  signed int v19; // r1@21
  unsigned int *v20; // r2@23
  signed int v21; // r1@25

  v1 = this;
  v2 = *((_DWORD *)this + 13);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v12 = (unsigned int *)(v2 - 4);
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
      j_j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 5);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v4 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 4);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v6 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j_j__ZdlPv_9(v7);
  v8 = *((_DWORD *)v1 + 3);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v8 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v10 = (int *)(*(_DWORD *)v1 - 12);
  if ( v10 != &dword_28898C0 )
    v20 = (unsigned int *)(*(_DWORD *)v1 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
  return v1;
}


int *__fastcall ResourceInformation::ResourceInformation(int *a1, int *a2)
{
  int *v2; // r4@1
  int *v3; // r8@1
  int v4; // r1@1
  int v5; // r3@1
  int v6; // r5@1
  int v7; // r6@1
  int v8; // r7@1

  v2 = a2;
  v3 = a1;
  sub_21E8AF4(a1, a2);
  SemVersion::SemVersion((int)(v3 + 1), (int)(v2 + 1));
  v4 = (int)(v3 + 8);
  v5 = v2[9];
  v6 = v2[10];
  v7 = v2[11];
  v8 = v2[12];
  *(_DWORD *)v4 = v2[8];
  *(_DWORD *)(v4 + 4) = v5;
  *(_DWORD *)(v4 + 8) = v6;
  *(_DWORD *)(v4 + 12) = v7;
  *(_DWORD *)(v4 + 16) = v8;
  sub_21E8AF4(v3 + 13, v2 + 13);
  return v3;
}


int __fastcall ResourceInformation::ResourceTypeFromString(const void **a1)
{
  unsigned __int64 *v1; // r0@1
  int v2; // r1@1

  v1 = (unsigned __int64 *)j_std::__find_if<std::string const*,__gnu_cxx::__ops::_Iter_equals_val<std::string const>>(
                             (int)&unk_287E72C,
                             (const void **)dword_287E748,
                             a1);
  v2 = ((char *)v1 - (char *)&unk_287E72C) >> 2;
  if ( v1 == dword_287E748 )
    v2 = 0;
  return v2;
}


char *__fastcall ResourceInformation::StringFromResourceType(signed int a1)
{
  char *v1; // r1@1

  v1 = (char *)&unk_287E72C;
  if ( a1 > -1 )
    v1 = (char *)&unk_287E72C + 4 * a1;
  if ( (unsigned int)a1 >= 7 )
    v1 = (char *)&unk_287E72C;
  return v1;
}
