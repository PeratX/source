

_DWORD *__fastcall UploadChunkInfo::UploadChunkInfo(_DWORD *result, int a2, int a3, int a4, __int64 a5)
{
  int *v5; // r1@1

  *result = a2;
  v5 = result + 2;
  *v5 = a3;
  v5[1] = a4;
  *((_QWORD *)v5 + 1) = a5;
  return result;
}


signed int __fastcall UploadChunkInfo::operator<(int *a1, _DWORD *a2)
{
  int v2; // r2@1
  signed int result; // r0@1

  v2 = *a1;
  result = 0;
  if ( v2 < *a2 )
    result = 1;
  return result;
}


signed int __fastcall UploadChunkInfo::isValid(UploadChunkInfo *this)
{
  UploadChunkInfo *v1; // r1@1
  signed int result; // r0@1
  unsigned int v3; // r12@2
  __int64 v4; // kr08_8@2
  signed int v5; // r2@2

  v1 = this;
  result = 0;
  if ( *(_DWORD *)v1 >= 0 )
  {
    v3 = *((_QWORD *)v1 + 1) >> 32;
    v4 = *((_QWORD *)v1 + 2);
    v5 = 0;
    if ( (unsigned int)v4 >= (unsigned int)*((_QWORD *)v1 + 1) )
      v5 = 1;
    if ( HIDWORD(v4) >= v3 )
      result = 1;
    if ( HIDWORD(v4) == v3 )
      result = v5;
  }
  return result;
}


signed int __fastcall UploadChunkInfo::containsByte(UploadChunkInfo *this, int a2)
{
  UploadChunkInfo *v2; // r12@1
  unsigned int v3; // lr@1
  unsigned int v4; // r2@1
  unsigned int v5; // r3@1
  signed int v6; // r4@1
  signed int result; // r0@1
  bool v8; // cf@1
  signed int v9; // r3@1
  bool v10; // zf@8
  __int64 v11; // r2@8

  v2 = this;
  v3 = a2 >> 31;
  v4 = *((_QWORD *)this + 1) >> 32;
  v5 = *((_QWORD *)this + 1);
  v6 = 0;
  result = 0;
  v8 = a2 >= v5;
  v9 = 0;
  if ( !v8 )
    v9 = 1;
  if ( v3 < v4 )
    v6 = 1;
  if ( v4 == a2 >> 31 )
    v6 = v9;
  if ( !v6 )
  {
    v11 = *((_QWORD *)v2 + 2);
    v8 = a2 >= (unsigned int)v11;
    v10 = a2 == (_DWORD)v11;
    LODWORD(v11) = 0;
    if ( v10 || !v8 )
      LODWORD(v11) = 1;
    if ( v3 <= HIDWORD(v11) )
      result = 1;
    if ( HIDWORD(v11) == a2 >> 31 )
      result = v11;
  }
  return result;
}
