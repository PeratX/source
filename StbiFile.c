

int __fastcall StbiFile::eof(StbiFile *this, void *a2)
{
  int v2; // r0@1
  int v3; // r4@1
  char v5; // [sp+4h] [bp-24h]@1
  void (*v6)(void); // [sp+Ch] [bp-1Ch]@3
  unsigned __int8 v7; // [sp+14h] [bp-14h]@1
  __int64 v8; // [sp+18h] [bp-10h]@1

  v8 = 0LL;
  Core::FileImpl::getRemainingSize((Core::FileImpl *)&v5, *(unsigned __int64 **)this);
  v2 = v7;
  v7 |= 2u;
  v3 = ~v2 & 1;
  if ( !v8 )
    v3 = 1;
  if ( v6 )
    v6();
  return v3;
}


signed int __fastcall StbiFile::read(StbiFile *this, void *a2, char *a3, int a4)
{
  char v4; // r0@1
  signed int v5; // r4@1
  char v7; // [sp+Ch] [bp-24h]@1
  void (*v8)(void); // [sp+14h] [bp-1Ch]@3
  char v9; // [sp+1Ch] [bp-14h]@1
  int v10; // [sp+20h] [bp-10h]@1

  Core::FileImpl::read(
    (Core::FileImpl *)&v7,
    *(void **)this,
    __PAIR__((unsigned int)a2, a4),
    (unsigned __int64 *)a3,
    (signed int)a3 >> 31,
    (unsigned __int64 *)&v10);
  v4 = v9;
  v5 = v10;
  v9 |= 2u;
  if ( !(v4 & 1) )
    v5 = -1;
  if ( v8 )
    v8();
  return v5;
}


int __fastcall StbiFile::skip(StbiFile *this, void *a2, int a3)
{
  int result; // r0@1
  char v4; // [sp+4h] [bp-1Ch]@1
  int (*v5)(void); // [sp+Ch] [bp-14h]@1
  unsigned __int8 v6; // [sp+14h] [bp-Ch]@1

  Core::FileImpl::skip((Core::FileImpl *)&v4, *(_DWORD *)this, (signed int)a2);
  result = v6 | 2;
  v6 |= 2u;
  if ( v5 )
    result = v5();
  return result;
}
