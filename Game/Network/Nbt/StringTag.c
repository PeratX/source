

void __fastcall StringTag::~StringTag(StringTag *this)
{
  StringTag *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E912C;
  v2 = *((_DWORD *)this + 1);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  operator delete((void *)v1);
}


_DWORD *__fastcall StringTag::toString(StringTag *this, int a2)
{
  int v2; // r6@1
  int *v3; // r5@1
  void **v4; // r0@1
  void *v5; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  void **v9; // [sp+0h] [bp-D0h]@1
  int v10; // [sp+4h] [bp-CCh]@2
  void **v11; // [sp+8h] [bp-C8h]@1
  void **v12; // [sp+Ch] [bp-C4h]@1
  int v13; // [sp+28h] [bp-A8h]@2
  int v14; // [sp+30h] [bp-A0h]@1
  int v15; // [sp+34h] [bp-9Ch]@2

  v2 = a2;
  v3 = (int *)this;
  sub_21D103C((int)&v9, 24);
  sub_21CBF38((char *)&v11, *(_DWORD *)(v2 + 4), *(_DWORD *)(*(_DWORD *)(v2 + 4) - 12));
  sub_21CFED8(v3, (int)&v12);
  v4 = off_26D3F84;
  v9 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v9) = off_26D3F80[0];
  v11 = v4;
  v12 = &off_27734E8;
  v5 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v12 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v13);
  v9 = (void **)off_26D3F68;
  *(void ***)((char *)&v9 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v10 = 0;
  return sub_21B6560(&v15);
}


StringTag *__fastcall StringTag::~StringTag(StringTag *this)
{
  StringTag *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26E912C;
  v2 = *((_DWORD *)this + 1);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
  return v1;
}


void __fastcall StringTag::copy(StringTag *this, int a2)
{
  StringTag::copy(this, a2);
}


void __fastcall StringTag::load(StringTag *this, IDataInput *a2)
{
  StringTag *v2; // r4@1
  void *v3; // r0@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-1Ch]@1

  v2 = this;
  (*(void (__fastcall **)(int *))(*(_DWORD *)a2 + 8))(&v6);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v2 + 1,
    &v6);
  v3 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v6 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v3);
  }
}


void __fastcall StringTag::copy(StringTag *this, int a2)
{
  StringTag *v2; // r4@1
  int *v3; // r5@1
  _DWORD *v4; // r6@1
  int v5; // r1@1
  void *v6; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@1

  v2 = this;
  v3 = (int *)(a2 + 4);
  (*(void (__fastcall **)(int *))(*(_DWORD *)a2 + 44))(&v9);
  v4 = operator new(8u);
  Tag::Tag(v4);
  *v4 = &off_26E912C;
  sub_21E8AF4(v4 + 1, v3);
  v5 = v9;
  *(_DWORD *)v2 = v4;
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v5 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
}


signed int __fastcall StringTag::equals(StringTag *this, const Tag *a2)
{
  const Tag *v2; // r4@1
  StringTag *v3; // r5@1
  _DWORD *v4; // r0@2
  _DWORD *v5; // r1@2
  signed int v6; // r4@2
  size_t v7; // r2@2
  signed int result; // r0@5

  v2 = a2;
  v3 = this;
  if ( Tag::equals(this, a2) == 1 )
  {
    v4 = (_DWORD *)*((_DWORD *)v3 + 1);
    v5 = (_DWORD *)*((_DWORD *)v2 + 1);
    v6 = 0;
    v7 = *(v4 - 3);
    if ( v7 == *(v5 - 3) && !memcmp(v4, v5, v7) )
      v6 = 1;
    result = v6;
  }
  else
    result = 0;
  return result;
}


_DWORD *__fastcall StringTag::StringTag(_DWORD *a1)
{
  _DWORD *result; // r0@1
  __int64 v2; // r1@1

  result = Tag::Tag(a1);
  HIDWORD(v2) = &unk_28898CC;
  LODWORD(v2) = &off_26E912C;
  *(_QWORD *)result = v2;
  return result;
}


_DWORD *__fastcall StringTag::StringTag(_DWORD *a1, int a2, int *a3)
{
  int *v3; // r4@1
  _DWORD *v4; // r5@1

  v3 = a3;
  v4 = a1;
  Tag::Tag(a1);
  *v4 = &off_26E912C;
  sub_21E8AF4(v4 + 1, v3);
  return v4;
}


void __fastcall StringTag::load(StringTag *this, IDataInput *a2)
{
  StringTag::load(this, a2);
}


void __fastcall StringTag::~StringTag(StringTag *this)
{
  StringTag::~StringTag(this);
}


signed int __fastcall StringTag::getId(StringTag *this)
{
  return 8;
}
