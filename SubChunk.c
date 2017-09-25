

int __fastcall SubChunk::deserialize(SubChunk *this, IDataInput *a2)
{
  IDataInput *v2; // r4@1
  SubChunk *v3; // r5@1

  v2 = a2;
  v3 = this;
  (*(void (__fastcall **)(IDataInput *))(*(_DWORD *)a2 + 24))(a2);
  (*(void (__fastcall **)(IDataInput *, SubChunk *, signed int))(*(_DWORD *)v2 + 40))(v2, v3, 4096);
  return (*(int (__fastcall **)(IDataInput *, char *, signed int))(*(_DWORD *)v2 + 40))(v2, (char *)v3 + 4096, 2048);
}


int __fastcall SubChunk::SubChunk(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r6@1
  int v5; // r5@1
  int v6; // r3@1
  int v7; // r0@1
  signed int v8; // r2@2

  v3 = a1;
  v4 = a3;
  v5 = a2;
  DirtyTicksCounter::DirtyTicksCounter((DirtyTicksCounter *)(a1 + 10240));
  _aeabi_memclr(v3, 6144);
  v7 = v3 + 6144;
  if ( v4 == 1 )
  {
    v8 = 255;
LABEL_5:
    _aeabi_memset(v7, 4096, v8, v6);
    return v3;
  }
  if ( v5 == 1 )
    v8 = 240;
    goto LABEL_5;
  _aeabi_memclr(v7, 4096);
  return v3;
}


signed int __fastcall SubChunk::scanIsDefaultChunk(SubChunk *this)
{
  char *v1; // r1@1
  int v2; // r3@2
  signed int result; // r0@5
  char *v4; // r2@6
  char *v5; // r1@6
  int v6; // r0@7

  v1 = (char *)this + 4;
  do
  {
    v2 = *((_DWORD *)v1 - 1);
    if ( v1 >= (char *)this + 4096 )
      break;
    v1 += 4;
  }
  while ( !v2 );
  if ( v2 )
    result = 1;
  else
    v4 = (char *)this + 6144;
    v5 = (char *)this + 4100;
    do
    {
      v6 = *((_DWORD *)v5 - 1);
      if ( v5 >= v4 )
        break;
      v5 += 4;
    }
    while ( !v6 );
    result = v6 != 0;
  return result;
}


int __fastcall SubChunk::serialize(SubChunk *this, IDataOutput *a2)
{
  SubChunk *v2; // r5@1
  IDataOutput *v3; // r4@1

  v2 = this;
  v3 = a2;
  (*(void (__fastcall **)(IDataOutput *, _DWORD))(*(_DWORD *)a2 + 24))(a2, SharedConstants::CurrentSubLevelChunkFormat);
  (*(void (__fastcall **)(IDataOutput *, SubChunk *, signed int))(*(_DWORD *)v3 + 40))(v3, v2, 4096);
  return (*(int (__fastcall **)(IDataOutput *, char *, signed int))(*(_DWORD *)v3 + 40))(v3, (char *)v2 + 4096, 2048);
}


_BOOL4 __fastcall SubChunk::hasBlocks(SubChunk *this)
{
  char *v1; // r1@1
  char *v2; // r2@1
  int v3; // r0@2

  v1 = (char *)this + 4;
  v2 = (char *)this + 4096;
  do
  {
    v3 = *((_DWORD *)v1 - 1);
    if ( v1 >= v2 )
      break;
    v1 += 4;
  }
  while ( !v3 );
  return v3 != 0;
}


int __fastcall SubChunk::reset(SubChunk *this, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  SubChunk *v5; // r6@1
  int v6; // r3@1
  int v7; // r0@1
  int result; // r0@2

  v3 = a2;
  v4 = a3;
  v5 = this;
  _aeabi_memclr(this, 6144);
  v7 = (int)v5 + 6144;
  if ( v4 == 1 )
  {
    result = _aeabi_memset(v7, 4096, 255, v6);
  }
  else if ( v3 == 1 )
    result = _aeabi_memset(v7, 4096, 240, v6);
  else
    result = _aeabi_memclr(v7, 4096);
  return result;
}
