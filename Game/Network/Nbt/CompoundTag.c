

int __fastcall CompoundTag::putByte(int a1, const void **a2, char a3)
{
  char v3; // r6@1
  const void **v4; // r7@1
  char *v5; // r4@1
  _DWORD *v6; // r5@1
  int result; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = std::map<std::string,std::unique_ptr<Tag,std::default_delete<Tag>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>>::operator[](
         a1 + 4,
         a2);
  v6 = operator new(8u);
  ByteTag::ByteTag(v6, (int)v4, v3);
  result = *(_DWORD *)v5;
  *(_DWORD *)v5 = v6;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


int __fastcall CompoundTag::putByteArray(int a1, const void **a2, int a3)
{
  int v3; // r6@1
  const void **v4; // r7@1
  char *v5; // r5@1
  _DWORD *v6; // r4@1
  void *v7; // r0@1
  int result; // r0@3
  __int64 v9; // [sp+0h] [bp-20h]@1
  void *ptr; // [sp+8h] [bp-18h]@1

  v3 = a3;
  v4 = a2;
  v5 = std::map<std::string,std::unique_ptr<Tag,std::default_delete<Tag>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>>::operator[](
         a1 + 4,
         a2);
  v6 = operator new(0x10u);
  v9 = *(_QWORD *)v3;
  v7 = *(void **)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  ptr = v7;
  ByteArrayTag::ByteArrayTag(v6, (int)v4, (int)&v9);
  if ( ptr )
    operator delete[](ptr);
  result = *(_DWORD *)v5;
  *(_DWORD *)v5 = v6;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


int __fastcall CompoundTag::putInt(int a1, const void **a2, int a3)
{
  int v3; // r6@1
  const void **v4; // r7@1
  char *v5; // r4@1
  _DWORD *v6; // r5@1
  int result; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = std::map<std::string,std::unique_ptr<Tag,std::default_delete<Tag>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>>::operator[](
         a1 + 4,
         a2);
  v6 = operator new(8u);
  IntTag::IntTag(v6, (int)v4, v3);
  result = *(_DWORD *)v5;
  *(_DWORD *)v5 = v6;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


int __fastcall CompoundTag::remove(int a1, const void **a2)
{
  int v2; // r4@1
  int v4; // [sp+0h] [bp-10h]@1
  int v5; // [sp+4h] [bp-Ch]@1

  v2 = a1 + 4;
  std::_Rb_tree<std::string,std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>,std::_Select1st<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>>::equal_range(
    (int)&v4,
    a1 + 4,
    a2);
  return std::_Rb_tree<std::string,std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>,std::_Select1st<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>>::_M_erase_aux(
           v2,
           v4,
           v5);
}


__int64 __fastcall CompoundTag::getInt64(int a1, const void **a2)
{
  const void **v2; // r4@1
  int v3; // r5@1
  _DWORD *v4; // r4@2
  int v5; // r9@2
  int v6; // r0@2
  size_t v7; // r6@2
  int v8; // r8@3
  int v9; // r7@4
  _DWORD *v10; // r0@5
  size_t v11; // r5@5
  size_t v12; // r2@5
  int v13; // r0@7
  __int64 result; // r0@14
  _DWORD *v15; // r1@16
  size_t v16; // r2@16
  size_t v17; // r5@16
  int v18; // r0@18

  v2 = a2;
  v3 = a1;
  if ( CompoundTag::contains(a1, a2, 4) == 1 )
  {
    v4 = *v2;
    v5 = v3 + 8;
    v6 = *(_DWORD *)(v3 + 12);
    v7 = *(v4 - 3);
    if ( v6 )
    {
      v8 = v3 + 8;
      do
      {
        v9 = v6;
        while ( 1 )
        {
          v10 = *(_DWORD **)(v9 + 16);
          v11 = *(v10 - 3);
          v12 = *(v10 - 3);
          if ( v11 > v7 )
            v12 = v7;
          v13 = memcmp(v10, v4, v12);
          if ( !v13 )
            v13 = v11 - v7;
          if ( v13 >= 0 )
            break;
          v9 = *(_DWORD *)(v9 + 12);
          if ( !v9 )
          {
            v9 = v8;
            goto LABEL_16;
          }
        }
        v6 = *(_DWORD *)(v9 + 8);
        v8 = v9;
      }
      while ( v6 );
    }
    else
      v9 = v3 + 8;
LABEL_16:
    v15 = *(_DWORD **)(v9 + 16);
    v16 = v7;
    v17 = *(v15 - 3);
    if ( v7 > v17 )
      v16 = *(v15 - 3);
    v18 = memcmp(v4, v15, v16);
    if ( !v18 )
      v18 = v7 - v17;
    if ( v18 >= 0 )
      v5 = v9;
    result = *(_QWORD *)(*(_DWORD *)(v5 + 20) + 8);
  }
  else
    result = 0LL;
  return result;
}


int __fastcall CompoundTag::copy(CompoundTag *this, int a2)
{
  CompoundTag *v2; // r4@1
  int result; // r0@1
  int v4; // [sp+4h] [bp-Ch]@1

  v2 = this;
  CompoundTag::clone((CompoundTag *)&v4, a2);
  result = v4;
  *(_DWORD *)v2 = v4;
  return result;
}


_BOOL4 __fastcall CompoundTag::getBoolean(int a1, const void **a2)
{
  return CompoundTag::getByte(a1, a2) != 0;
}


int __fastcall CompoundTag::put(int a1, const void **a2, int *a3)
{
  int *v3; // r4@1
  int v4; // r6@1
  const void **v5; // r5@1
  char *v6; // r0@1
  char *v7; // r1@1
  int v8; // r2@1
  int result; // r0@1

  v3 = a3;
  v4 = a1;
  v5 = a2;
  (*(void (**)(void))(*(_DWORD *)*a3 + 40))();
  v6 = std::map<std::string,std::unique_ptr<Tag,std::default_delete<Tag>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>>::operator[](
         v4 + 4,
         v5);
  v7 = v6;
  v8 = *v3;
  *v3 = 0;
  result = *(_DWORD *)v6;
  *(_DWORD *)v7 = v8;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


signed int __fastcall CompoundTag::isEmpty(CompoundTag *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 6);
  result = 0;
  if ( !v1 )
    result = 1;
  return result;
}


int __fastcall CompoundTag::CompoundTag(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@1
  int v5; // r1@2
  int v6; // r2@2
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  int v10; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  (*(void (__fastcall **)(int *))(*(_DWORD *)a2 + 44))(&v10);
  Tag::Tag((_DWORD *)v3);
  v4 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v10 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  *(_DWORD *)v3 = &off_26E8F4C;
  *(_DWORD *)(v3 + 8) = 0;
  v5 = v3 + 8;
  *(_DWORD *)(v5 + 4) = 0;
  *(_DWORD *)(v5 + 8) = 0;
  *(_DWORD *)(v5 + 12) = 0;
  *(_DWORD *)(v5 + 16) = 0;
  *(_DWORD *)(v5 + 8) = v5;
  *(_DWORD *)(v5 + 12) = v5;
  v6 = *(_DWORD *)(v2 + 12);
  if ( v6 )
    *(_DWORD *)(v3 + 12) = v6;
    *(_DWORD *)(v3 + 16) = *(_DWORD *)(v2 + 16);
    *(_DWORD *)(v3 + 20) = *(_DWORD *)(v2 + 20);
    *(_DWORD *)(v6 + 4) = v5;
    *(_DWORD *)(v2 + 12) = 0;
    *(_DWORD *)(v2 + 16) = v2 + 8;
    *(_DWORD *)(v2 + 20) = v2 + 8;
    *(_DWORD *)(v3 + 24) = *(_DWORD *)(v2 + 24);
    *(_DWORD *)(v2 + 24) = 0;
  return v3;
}


int __fastcall CompoundTag::putCompound(int a1, const void **a2, int *a3)
{
  int *v3; // r4@1
  int v4; // r6@1
  const void **v5; // r5@1
  char *v6; // r0@1
  char *v7; // r1@1
  int v8; // r2@1
  int result; // r0@1

  v3 = a3;
  v4 = a1;
  v5 = a2;
  (*(void (**)(void))(*(_DWORD *)*a3 + 40))();
  v6 = std::map<std::string,std::unique_ptr<Tag,std::default_delete<Tag>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>>::operator[](
         v4 + 4,
         v5);
  v7 = v6;
  v8 = *v3;
  *v3 = 0;
  result = *(_DWORD *)v6;
  *(_DWORD *)v7 = v8;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


int *__fastcall CompoundTag::getByteArray(int a1, const void **a2)
{
  const void **v2; // r10@1
  int v3; // r5@1
  int v4; // r0@2
  int v5; // r8@2
  int v6; // r7@2
  const void *v7; // r5@3
  int v8; // r9@3
  size_t v9; // r6@3
  _DWORD *v10; // r0@5
  size_t v11; // r4@5
  size_t v12; // r2@5
  int v13; // r0@7
  char v14; // r1@14
  int *result; // r0@16
  _DWORD *v16; // r1@18
  unsigned int v17; // r4@18
  unsigned int v18; // r5@18
  size_t v19; // r2@18
  int v20; // r0@20
  int v21; // r0@25

  v2 = a2;
  v3 = a1;
  if ( CompoundTag::contains(a1, a2, 7) )
  {
    v4 = *(_DWORD *)(v3 + 12);
    v5 = v3 + 8;
    v6 = v3 + 8;
    if ( v4 )
    {
      v7 = *v2;
      v8 = v5;
      v9 = *((_DWORD *)*v2 - 3);
      do
      {
        v6 = v4;
        while ( 1 )
        {
          v10 = *(_DWORD **)(v6 + 16);
          v11 = *(v10 - 3);
          v12 = *(v10 - 3);
          if ( v11 > v9 )
            v12 = v9;
          v13 = memcmp(v10, v7, v12);
          if ( !v13 )
            v13 = v11 - v9;
          if ( v13 >= 0 )
            break;
          v6 = *(_DWORD *)(v6 + 12);
          if ( !v6 )
          {
            v6 = v8;
            goto LABEL_17;
          }
        }
        v4 = *(_DWORD *)(v6 + 8);
        v8 = v6;
      }
      while ( v4 );
    }
LABEL_17:
    if ( v6 == v5 )
      v21 = 0;
    else
      v16 = *(_DWORD **)(v6 + 16);
      v17 = *((_DWORD *)*v2 - 3);
      v18 = *(v16 - 3);
      v19 = *((_DWORD *)*v2 - 3);
      if ( v17 > v18 )
        v19 = *(v16 - 3);
      v20 = memcmp(*v2, v16, v19);
      if ( !v20 )
        v20 = v17 - v18;
      if ( v20 < 0 )
        v6 = v5;
      if ( v6 == v5 )
        v21 = 0;
      else
        v21 = *(_DWORD *)(v6 + 20);
    result = (int *)(v21 + 4);
  }
  else
    v14 = byte_27E9CD0;
    __dmb();
    if ( v14 & 1 )
      result = &dword_27E9CD8;
    else if ( j___cxa_guard_acquire((unsigned int *)&byte_27E9CD0) )
      dword_27E9CD8 = 0;
      unk_27E9CDC = 0;
      unk_27E9CE0 = 0;
      _cxa_atexit(TagMemoryChunk::~TagMemoryChunk);
      j___cxa_guard_release((unsigned int *)&byte_27E9CD0);
  return result;
}


signed int __fastcall CompoundTag::getId(CompoundTag *this)
{
  return 10;
}


int __fastcall CompoundTag::getDouble(int a1, const void **a2)
{
  const void **v2; // r4@1
  int v3; // r5@1
  _DWORD *v5; // r4@2
  int v6; // r9@2
  int v7; // r0@2
  size_t v8; // r6@2
  int v9; // r8@3
  int v10; // r7@4
  _DWORD *v11; // r0@5
  size_t v12; // r5@5
  size_t v13; // r2@5
  int v14; // r0@7
  _DWORD *v19; // r1@16
  size_t v20; // r2@16
  size_t v21; // r5@16
  int v22; // r0@18
  int result; // r0@23

  v2 = a2;
  v3 = a1;
  if ( CompoundTag::contains(a1, a2, 6) == 1 )
  {
    v5 = *v2;
    v6 = v3 + 8;
    v7 = *(_DWORD *)(v3 + 12);
    v8 = *(v5 - 3);
    if ( v7 )
    {
      v9 = v3 + 8;
      do
      {
        v10 = v7;
        while ( 1 )
        {
          v11 = *(_DWORD **)(v10 + 16);
          v12 = *(v11 - 3);
          v13 = *(v11 - 3);
          if ( v12 > v8 )
            v13 = v8;
          v14 = memcmp(v11, v5, v13);
          if ( !v14 )
            v14 = v12 - v8;
          if ( v14 >= 0 )
            break;
          v10 = *(_DWORD *)(v10 + 12);
          if ( !v10 )
          {
            v10 = v9;
            goto LABEL_16;
          }
        }
        v7 = *(_DWORD *)(v10 + 8);
        v9 = v10;
      }
      while ( v7 );
    }
    else
      v10 = v3 + 8;
LABEL_16:
    v19 = *(_DWORD **)(v10 + 16);
    v20 = v8;
    v21 = *(v19 - 3);
    if ( v8 > v21 )
      v20 = *(v19 - 3);
    v22 = memcmp(v5, v19, v20);
    if ( !v22 )
      v22 = v8 - v21;
    if ( v22 >= 0 )
      v6 = v10;
    _R0 = *(_DWORD *)(v6 + 20);
    __asm { VLDR            D0, [R0,#8] }
  }
  else
    __asm { VLDR            D0, =0.0 }
  __asm { VMOV            R0, R1, D0 }
  return result;
}


void __fastcall CompoundTag::load(CompoundTag *this, IDataInput *a2)
{
  CompoundTag::load(this, a2);
}


void __fastcall CompoundTag::clone(CompoundTag *this, int a2)
{
  int v2; // r5@1
  CompoundTag *v3; // r9@1
  _DWORD *v4; // r7@1
  int v5; // r1@1
  void *v6; // r0@1
  int v7; // r6@2
  int v8; // r5@2
  int v9; // r11@3
  char *v10; // r0@4
  _DWORD *v11; // r1@4
  int v12; // r2@4
  int v13; // r0@4
  unsigned int *v14; // r2@10
  signed int v15; // r1@12
  int v16; // [sp+4h] [bp-34h]@4
  int v17; // [sp+8h] [bp-30h]@1

  v2 = a2;
  v3 = this;
  (*(void (__fastcall **)(int *))(*(_DWORD *)a2 + 44))(&v17);
  v4 = operator new(0x1Cu);
  Tag::Tag(v4);
  *v4 = &off_26E8F4C;
  v4[3] = 0;
  v4[4] = 0;
  v4[5] = 0;
  v4[6] = 0;
  v4[2] = 0;
  v4[4] = v4 + 2;
  v4[5] = v4 + 2;
  v5 = v17;
  *(_DWORD *)v3 = v4;
  v6 = (void *)(v5 - 12);
  if ( (int *)(v5 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v5 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
    }
    else
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  v7 = *(_DWORD *)(v2 + 16);
  v8 = v2 + 8;
  if ( v7 != v8 )
    v9 = *(_DWORD *)v3 + 4;
    do
      (*(void (__fastcall **)(int *))(**(_DWORD **)(v7 + 20) + 48))(&v16);
      (*(void (**)(void))(*(_DWORD *)v16 + 40))();
      v10 = std::map<std::string,std::unique_ptr<Tag,std::default_delete<Tag>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>>::operator[](
              v9,
              (const void **)(v7 + 16));
      v11 = v10;
      v12 = v16;
      v16 = 0;
      v13 = *(_DWORD *)v10;
      *v11 = v12;
      if ( v13 )
        (*(void (**)(void))(*(_DWORD *)v13 + 4))();
      if ( v16 )
        (*(void (**)(void))(*(_DWORD *)v16 + 4))();
      v7 = sub_21D4820(v7);
    while ( v7 != v8 );
}


int __fastcall CompoundTag::getInt(int a1, const void **a2)
{
  const void **v2; // r4@1
  int v3; // r5@1
  _DWORD *v4; // r4@2
  int v5; // r9@2
  int v6; // r0@2
  size_t v7; // r6@2
  int v8; // r8@3
  int v9; // r7@4
  _DWORD *v10; // r0@5
  size_t v11; // r5@5
  size_t v12; // r2@5
  int v13; // r0@7
  int result; // r0@14
  _DWORD *v15; // r1@16
  size_t v16; // r2@16
  size_t v17; // r5@16
  int v18; // r0@18

  v2 = a2;
  v3 = a1;
  if ( CompoundTag::contains(a1, a2, 3) == 1 )
  {
    v4 = *v2;
    v5 = v3 + 8;
    v6 = *(_DWORD *)(v3 + 12);
    v7 = *(v4 - 3);
    if ( v6 )
    {
      v8 = v3 + 8;
      do
      {
        v9 = v6;
        while ( 1 )
        {
          v10 = *(_DWORD **)(v9 + 16);
          v11 = *(v10 - 3);
          v12 = *(v10 - 3);
          if ( v11 > v7 )
            v12 = v7;
          v13 = memcmp(v10, v4, v12);
          if ( !v13 )
            v13 = v11 - v7;
          if ( v13 >= 0 )
            break;
          v9 = *(_DWORD *)(v9 + 12);
          if ( !v9 )
          {
            v9 = v8;
            goto LABEL_16;
          }
        }
        v6 = *(_DWORD *)(v9 + 8);
        v8 = v9;
      }
      while ( v6 );
    }
    else
      v9 = v3 + 8;
LABEL_16:
    v15 = *(_DWORD **)(v9 + 16);
    v16 = v7;
    v17 = *(v15 - 3);
    if ( v7 > v17 )
      v16 = *(v15 - 3);
    v18 = memcmp(v4, v15, v16);
    if ( !v18 )
      v18 = v7 - v17;
    if ( v18 >= 0 )
      v5 = v9;
    result = *(_DWORD *)(*(_DWORD *)(v5 + 20) + 4);
  }
  else
    result = 0;
  return result;
}


int __fastcall CompoundTag::putShort(int a1, const void **a2, __int16 a3)
{
  __int16 v3; // r6@1
  const void **v4; // r7@1
  char *v5; // r4@1
  _DWORD *v6; // r5@1
  int result; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = std::map<std::string,std::unique_ptr<Tag,std::default_delete<Tag>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>>::operator[](
         a1 + 4,
         a2);
  v6 = operator new(8u);
  ShortTag::ShortTag(v6, (int)v4, v3);
  result = *(_DWORD *)v5;
  *(_DWORD *)v5 = v6;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


int __fastcall CompoundTag::getByte(int a1, const void **a2)
{
  const void **v2; // r4@1
  int v3; // r5@1
  _DWORD *v4; // r4@2
  int v5; // r9@2
  int v6; // r0@2
  size_t v7; // r6@2
  int v8; // r8@3
  int v9; // r7@4
  _DWORD *v10; // r0@5
  size_t v11; // r5@5
  size_t v12; // r2@5
  int v13; // r0@7
  int result; // r0@14
  _DWORD *v15; // r1@16
  size_t v16; // r2@16
  size_t v17; // r5@16
  int v18; // r0@18

  v2 = a2;
  v3 = a1;
  if ( CompoundTag::contains(a1, a2, 1) == 1 )
  {
    v4 = *v2;
    v5 = v3 + 8;
    v6 = *(_DWORD *)(v3 + 12);
    v7 = *(v4 - 3);
    if ( v6 )
    {
      v8 = v3 + 8;
      do
      {
        v9 = v6;
        while ( 1 )
        {
          v10 = *(_DWORD **)(v9 + 16);
          v11 = *(v10 - 3);
          v12 = *(v10 - 3);
          if ( v11 > v7 )
            v12 = v7;
          v13 = memcmp(v10, v4, v12);
          if ( !v13 )
            v13 = v11 - v7;
          if ( v13 >= 0 )
            break;
          v9 = *(_DWORD *)(v9 + 12);
          if ( !v9 )
          {
            v9 = v8;
            goto LABEL_16;
          }
        }
        v6 = *(_DWORD *)(v9 + 8);
        v8 = v9;
      }
      while ( v6 );
    }
    else
      v9 = v3 + 8;
LABEL_16:
    v15 = *(_DWORD **)(v9 + 16);
    v16 = v7;
    v17 = *(v15 - 3);
    if ( v7 > v17 )
      v16 = *(v15 - 3);
    v18 = memcmp(v4, v15, v16);
    if ( !v18 )
      v18 = v7 - v17;
    if ( v18 >= 0 )
      v5 = v9;
    result = *(_BYTE *)(*(_DWORD *)(v5 + 20) + 4);
  }
  else
    result = 0;
  return result;
}


char *__fastcall CompoundTag::rawView(CompoundTag *this)
{
  return (char *)this + 4;
}


int __fastcall CompoundTag::putFloat(int a1, const void **a2, int a3)
{
  int v3; // r6@1
  const void **v4; // r7@1
  char *v5; // r4@1
  _DWORD *v6; // r5@1
  int result; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = std::map<std::string,std::unique_ptr<Tag,std::default_delete<Tag>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>>::operator[](
         a1 + 4,
         a2);
  v6 = operator new(8u);
  FloatTag::FloatTag(v6, (int)v4, v3);
  result = *(_DWORD *)v5;
  *(_DWORD *)v5 = v6;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


_DWORD *__fastcall CompoundTag::toString(CompoundTag *this, int a2)
{
  int v2; // r6@1
  int *v3; // r5@1
  int v4; // r1@1
  char *v5; // r0@1
  void **v6; // r0@1
  void *v7; // r0@1
  unsigned int *v9; // r2@3
  signed int v10; // r1@5
  void **v11; // [sp+0h] [bp-D0h]@1
  int v12; // [sp+4h] [bp-CCh]@2
  void **v13; // [sp+8h] [bp-C8h]@1
  void **v14; // [sp+Ch] [bp-C4h]@1
  int v15; // [sp+28h] [bp-A8h]@2
  int v16; // [sp+30h] [bp-A0h]@1
  int v17; // [sp+34h] [bp-9Ch]@2

  v2 = a2;
  v3 = (int *)this;
  sub_21D103C((int)&v11, 24);
  v4 = *(_DWORD *)(v2 + 24);
  v5 = sub_21CC440((char *)&v13);
  sub_21CBF38(v5, (int)" entries", 8);
  sub_21CFED8(v3, (int)&v14);
  v6 = off_26D3F84;
  v11 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v11) = off_26D3F80[0];
  v13 = v6;
  v14 = &off_27734E8;
  v7 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
  {
    v9 = (unsigned int *)(v16 - 4);
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
  v14 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v15);
  v11 = (void **)off_26D3F68;
  *(void ***)((char *)&v11 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v12 = 0;
  return sub_21B6560(&v17);
}


CompoundTag *__fastcall CompoundTag::~CompoundTag(CompoundTag *this)
{
  CompoundTag *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E8F4C;
  std::_Rb_tree<std::string,std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>,std::_Select1st<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>>::_M_erase(
    (int)this + 4,
    *((_DWORD *)this + 3));
  return v1;
}


int __fastcall CompoundTag::write(CompoundTag *this, IDataOutput *a2)
{
  IDataOutput *v2; // r4@1
  int v3; // r5@1
  char *v4; // r6@1

  v2 = a2;
  v3 = *((_DWORD *)this + 4);
  v4 = (char *)this + 8;
  while ( (char *)v3 != v4 )
  {
    Tag::writeNamedTag(v3 + 16, *(_DWORD *)(v3 + 20), (int)v2);
    v3 = sub_21D4820(v3);
  }
  return (*(int (__fastcall **)(IDataOutput *, _DWORD))(*(_DWORD *)v2 + 24))(v2, 0);
}


int __fastcall CompoundTag::get(int a1, const void **a2)
{
  const void **v2; // r8@1
  int v3; // r1@1
  int v4; // r9@1
  int v5; // r7@1
  const void *v6; // r5@2
  int v7; // r10@2
  size_t v8; // r4@2
  _DWORD *v9; // r0@4
  size_t v10; // r6@4
  size_t v11; // r2@4
  int v12; // r0@6
  _DWORD *v13; // r1@13
  unsigned int v14; // r4@13
  unsigned int v15; // r5@13
  size_t v16; // r2@13
  int v17; // r0@15
  int result; // r0@20

  v2 = a2;
  v3 = *(_DWORD *)(a1 + 12);
  v4 = a1 + 8;
  v5 = a1 + 8;
  if ( v3 )
  {
    v6 = *v2;
    v7 = a1 + 8;
    v8 = *((_DWORD *)*v2 - 3);
    do
    {
      v5 = v3;
      while ( 1 )
      {
        v9 = *(_DWORD **)(v5 + 16);
        v10 = *(v9 - 3);
        v11 = *(v9 - 3);
        if ( v10 > v8 )
          v11 = v8;
        v12 = memcmp(v9, v6, v11);
        if ( !v12 )
          v12 = v10 - v8;
        if ( v12 >= 0 )
          break;
        v5 = *(_DWORD *)(v5 + 12);
        if ( !v5 )
        {
          v5 = v7;
          goto LABEL_12;
        }
      }
      v3 = *(_DWORD *)(v5 + 8);
      v7 = v5;
    }
    while ( v3 );
  }
LABEL_12:
  if ( v5 == v4 )
    goto LABEL_24;
  v13 = *(_DWORD **)(v5 + 16);
  v14 = *((_DWORD *)*v2 - 3);
  v15 = *(v13 - 3);
  v16 = *((_DWORD *)*v2 - 3);
  if ( v14 > v15 )
    v16 = *(v13 - 3);
  v17 = memcmp(*v2, v13, v16);
  if ( !v17 )
    v17 = v14 - v15;
  if ( v17 < 0 )
    v5 = v4;
LABEL_24:
    result = 0;
  else
    result = *(_DWORD *)(v5 + 20);
  return result;
}


void __fastcall CompoundTag::print(int a1, int a2, int a3)
{
  CompoundTag::print(a1, a2, a3);
}


void __fastcall CompoundTag::load(CompoundTag *this, IDataInput *a2)
{
  CompoundTag *v2; // r4@1
  IDataInput *v3; // r5@1
  char *v4; // r10@1
  int v5; // r4@2
  int v6; // r7@4
  char *v7; // r0@7
  _DWORD *v8; // r1@7
  int v9; // r0@7
  char *v10; // r0@10
  unsigned int *v11; // r2@14
  signed int v12; // r1@16
  int v13; // [sp+0h] [bp-30h]@3
  char *v14; // [sp+4h] [bp-2Ch]@1

  v2 = this;
  v3 = a2;
  v4 = (char *)this + 4;
  std::_Rb_tree<std::string,std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>,std::_Select1st<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>>::_M_erase(
    (int)this + 4,
    *((_DWORD *)this + 3));
  *((_DWORD *)v2 + 4) = (char *)v2 + 8;
  *((_DWORD *)v2 + 3) = 0;
  *((_DWORD *)v2 + 5) = (char *)v2 + 8;
  *((_DWORD *)v2 + 6) = 0;
  v14 = (char *)&unk_28898CC;
  while ( 1 )
  {
    v5 = 0;
    if ( !(*(int (__fastcall **)(IDataInput *))(*(_DWORD *)v3 + 44))(v3) )
      break;
    Tag::readNamedTag(&v13, (int)v3, (int *)&v14);
    v5 = v13;
    v13 = 0;
    if ( !v5 )
    {
      v5 = 0;
      v13 = 0;
    }
    v6 = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 24))(v5);
    if ( v13 )
      (*(void (**)(void))(*(_DWORD *)v13 + 4))();
    if ( !v6 )
    v7 = std::map<std::string,std::unique_ptr<Tag,std::default_delete<Tag>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>>::operator[](
           (int)v4,
           (const void **)&v14);
    v8 = v7;
    v9 = *(_DWORD *)v7;
    *v8 = v5;
    if ( v9 )
      (*(void (**)(void))(*(_DWORD *)v9 + 4))();
  }
  v10 = v14 - 12;
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v14 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  if ( v5 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
}


signed int __fastcall CompoundTag::equals(CompoundTag *this, const Tag *a2)
{
  const Tag *v2; // r9@1
  CompoundTag *v3; // r5@1
  int v4; // r0@3
  int v5; // r5@3
  int v6; // r10@4
  int v7; // r0@5
  int v8; // r7@5
  _DWORD *v9; // r6@6
  int v10; // r11@6
  size_t v11; // r4@6
  _DWORD *v12; // r0@8
  size_t v13; // r8@8
  size_t v14; // r2@8
  int v15; // r0@10
  _DWORD *v16; // r0@17
  _DWORD *v17; // r1@17
  unsigned int v18; // r4@17
  unsigned int v19; // r6@17
  size_t v20; // r2@17
  int v21; // r0@19
  bool v22; // zf@23
  int v23; // r7@26
  signed int result; // r0@28
  int v25; // [sp+0h] [bp-28h]@3

  v2 = a2;
  v3 = this;
  if ( Tag::equals(this, a2) != 1 || *((_DWORD *)v3 + 6) != *((_DWORD *)v2 + 6) )
    return 0;
  v4 = (int)v3 + 8;
  v5 = *((_DWORD *)v3 + 4);
  v25 = v4;
  if ( v5 != v4 )
  {
    v6 = (int)v2 + 8;
    while ( 1 )
    {
      v7 = *((_DWORD *)v2 + 3);
      v8 = (int)v2 + 8;
      if ( v7 )
      {
        v9 = *(_DWORD **)(v5 + 16);
        v10 = (int)v2 + 8;
        v11 = *(v9 - 3);
        do
        {
          v8 = v7;
          while ( 1 )
          {
            v12 = *(_DWORD **)(v8 + 16);
            v13 = *(v12 - 3);
            v14 = *(v12 - 3);
            if ( v13 > v11 )
              v14 = v11;
            v15 = memcmp(v12, v9, v14);
            if ( !v15 )
              v15 = v13 - v11;
            if ( v15 >= 0 )
              break;
            v8 = *(_DWORD *)(v8 + 12);
            if ( !v8 )
            {
              v8 = v10;
              goto LABEL_16;
            }
          }
          v7 = *(_DWORD *)(v8 + 8);
          v10 = v8;
        }
        while ( v7 );
      }
LABEL_16:
      if ( v8 == v6 )
        return 0;
      v16 = *(_DWORD **)(v5 + 16);
      v17 = *(_DWORD **)(v8 + 16);
      v18 = *(v16 - 3);
      v19 = *(v17 - 3);
      v20 = *(v16 - 3);
      if ( v18 > v19 )
        v20 = *(v17 - 3);
      v21 = memcmp(v16, v17, v20);
      if ( !v21 )
        v21 = v18 - v19;
      if ( v21 < 0 )
        v8 = (int)v2 + 8;
      v22 = v8 == v6;
      if ( v8 != v6 )
        v19 = *(_DWORD *)(v8 + 20);
        v22 = v19 == 0;
      if ( v22 )
      v23 = (*(int (__fastcall **)(unsigned int))(*(_DWORD *)v19 + 24))(v19);
      if ( v23 != (*(int (**)(void))(**(_DWORD **)(v5 + 20) + 24))()
        || (*(int (**)(void))(**(_DWORD **)(v5 + 20) + 28))() != 1 )
      v5 = sub_21D4820(v5);
      result = 1;
      if ( v5 == v25 )
        return result;
    }
  }
  return 1;
}


void __fastcall CompoundTag::~CompoundTag(CompoundTag *this)
{
  CompoundTag::~CompoundTag(this);
}


void __fastcall CompoundTag::clone(CompoundTag *this, int a2)
{
  CompoundTag::clone(this, a2);
}


signed int __fastcall CompoundTag::contains(int a1, const void **a2)
{
  int v2; // r11@1
  const void **v3; // r8@1
  int v4; // r1@1
  int v5; // r9@1
  int v6; // r7@1
  const void *v7; // r5@2
  int v8; // r10@2
  size_t v9; // r4@2
  _DWORD *v10; // r0@4
  size_t v11; // r6@4
  size_t v12; // r2@4
  int v13; // r0@6
  _DWORD *v14; // r1@13
  unsigned int v15; // r4@13
  unsigned int v16; // r5@13
  size_t v17; // r2@13
  int v18; // r0@15
  signed int result; // r0@20

  v2 = a1 + 8;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 12);
  v5 = a1 + 8;
  v6 = a1 + 8;
  if ( v4 )
  {
    v7 = *v3;
    v8 = a1 + 8;
    v9 = *((_DWORD *)*v3 - 3);
    do
    {
      v6 = v4;
      while ( 1 )
      {
        v10 = *(_DWORD **)(v6 + 16);
        v11 = *(v10 - 3);
        v12 = *(v10 - 3);
        if ( v11 > v9 )
          v12 = v9;
        v13 = memcmp(v10, v7, v12);
        if ( !v13 )
          v13 = v11 - v9;
        if ( v13 >= 0 )
          break;
        v6 = *(_DWORD *)(v6 + 12);
        if ( !v6 )
        {
          v6 = v8;
          goto LABEL_12;
        }
      }
      v4 = *(_DWORD *)(v6 + 8);
      v8 = v6;
    }
    while ( v4 );
  }
LABEL_12:
  if ( v6 != v2 )
    v14 = *(_DWORD **)(v6 + 16);
    v15 = *((_DWORD *)*v3 - 3);
    v16 = *(v14 - 3);
    v17 = *((_DWORD *)*v3 - 3);
    if ( v15 > v16 )
      v17 = *(v14 - 3);
    v18 = memcmp(*v3, v14, v17);
    if ( !v18 )
      v18 = v15 - v16;
    if ( v18 < 0 )
      v6 = v2;
    v5 = v6;
  result = 0;
  if ( v5 != v2 )
    result = 1;
  return result;
}


void __fastcall CompoundTag::print(int a1, int a2, int a3)
{
  int v3; // r4@1
  int *v4; // r8@1
  int v5; // r6@1
  void *v6; // r0@1
  int i; // r7@2
  void *v8; // r0@4
  void *v9; // r0@5
  unsigned int *v10; // r2@7
  signed int v11; // r1@9
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  unsigned int *v14; // r2@15
  signed int v15; // r1@17
  int v16; // [sp+4h] [bp-2Ch]@4
  int v17; // [sp+Ch] [bp-24h]@1
  int v18; // [sp+10h] [bp-20h]@1

  v3 = a3;
  v4 = (int *)a2;
  v5 = a1;
  Tag::print(a1, a2, a3);
  sub_21E8AF4(&v18, v4);
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)v3 + 8))(v3, &v18);
  sub_21E94B4((void **)&v17, "{");
  PrintStream::println(v3);
  v6 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
    }
    else
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  sub_21E7408((const void **)&v18, "   ", 3u);
  for ( i = *(_DWORD *)(v5 + 16); i != v5 + 8; i = sub_21D4820(i) )
    (*(void (**)(void))(**(_DWORD **)(i + 20) + 36))();
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)v3 + 8))(v3, v4);
  sub_21E94B4((void **)&v16, "}");
  v8 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v16 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v9 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v18 - 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


int __fastcall CompoundTag::getShort(int a1, const void **a2)
{
  const void **v2; // r4@1
  int v3; // r5@1
  _DWORD *v4; // r4@2
  int v5; // r9@2
  int v6; // r0@2
  size_t v7; // r6@2
  int v8; // r8@3
  int v9; // r7@4
  _DWORD *v10; // r0@5
  size_t v11; // r5@5
  size_t v12; // r2@5
  int v13; // r0@7
  int result; // r0@14
  _DWORD *v15; // r1@16
  size_t v16; // r2@16
  size_t v17; // r5@16
  int v18; // r0@18

  v2 = a2;
  v3 = a1;
  if ( CompoundTag::contains(a1, a2, 2) == 1 )
  {
    v4 = *v2;
    v5 = v3 + 8;
    v6 = *(_DWORD *)(v3 + 12);
    v7 = *(v4 - 3);
    if ( v6 )
    {
      v8 = v3 + 8;
      do
      {
        v9 = v6;
        while ( 1 )
        {
          v10 = *(_DWORD **)(v9 + 16);
          v11 = *(v10 - 3);
          v12 = *(v10 - 3);
          if ( v11 > v7 )
            v12 = v7;
          v13 = memcmp(v10, v4, v12);
          if ( !v13 )
            v13 = v11 - v7;
          if ( v13 >= 0 )
            break;
          v9 = *(_DWORD *)(v9 + 12);
          if ( !v9 )
          {
            v9 = v8;
            goto LABEL_16;
          }
        }
        v6 = *(_DWORD *)(v9 + 8);
        v8 = v9;
      }
      while ( v6 );
    }
    else
      v9 = v3 + 8;
LABEL_16:
    v15 = *(_DWORD **)(v9 + 16);
    v16 = v7;
    v17 = *(v15 - 3);
    if ( v7 > v17 )
      v16 = *(v15 - 3);
    v18 = memcmp(v4, v15, v16);
    if ( !v18 )
      v18 = v7 - v17;
    if ( v18 >= 0 )
      v5 = v9;
    LOWORD(result) = *(_WORD *)(*(_DWORD *)(v5 + 20) + 4);
  }
  else
    LOWORD(result) = 0;
  return (signed __int16)result;
}


signed int __fastcall CompoundTag::safeRemove(int a1, const void **a2)
{
  int v2; // r9@1
  int v3; // r10@1
  int v4; // r0@1
  const void **v5; // r8@1
  int v6; // r4@1
  const void *v7; // r6@2
  int v8; // r11@2
  size_t v9; // r5@2
  _DWORD *v10; // r0@4
  size_t v11; // r7@4
  size_t v12; // r2@4
  int v13; // r0@6
  _DWORD *v14; // r1@13
  unsigned int v15; // r5@13
  unsigned int v16; // r6@13
  size_t v17; // r2@13
  int v18; // r0@15
  signed int result; // r0@20
  int v20; // [sp+4h] [bp-2Ch]@20
  int v21; // [sp+8h] [bp-28h]@20

  v2 = a1;
  v3 = a1 + 8;
  v4 = *(_DWORD *)(a1 + 12);
  v5 = a2;
  v6 = v3;
  if ( v4 )
  {
    v7 = *a2;
    v8 = v3;
    v9 = *((_DWORD *)*a2 - 3);
    do
    {
      v6 = v4;
      while ( 1 )
      {
        v10 = *(_DWORD **)(v6 + 16);
        v11 = *(v10 - 3);
        v12 = *(v10 - 3);
        if ( v11 > v9 )
          v12 = v9;
        v13 = memcmp(v10, v7, v12);
        if ( !v13 )
          v13 = v11 - v9;
        if ( v13 >= 0 )
          break;
        v6 = *(_DWORD *)(v6 + 12);
        if ( !v6 )
        {
          v6 = v8;
          goto LABEL_12;
        }
      }
      v4 = *(_DWORD *)(v6 + 8);
      v8 = v6;
    }
    while ( v4 );
  }
LABEL_12:
  if ( v6 == v3 )
    goto LABEL_24;
  v14 = *(_DWORD **)(v6 + 16);
  v15 = *((_DWORD *)*v5 - 3);
  v16 = *(v14 - 3);
  v17 = *((_DWORD *)*v5 - 3);
  if ( v15 > v16 )
    v17 = *(v14 - 3);
  v18 = memcmp(*v5, v14, v17);
  if ( !v18 )
    v18 = v15 - v16;
  if ( v18 < 0 )
    v6 = v3;
LABEL_24:
    result = 0;
  else
    std::_Rb_tree<std::string,std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>,std::_Select1st<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>>::equal_range(
      (int)&v20,
      v2 + 4,
      v5);
    std::_Rb_tree<std::string,std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>,std::_Select1st<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>>::_M_erase_aux(
      v20,
      v21);
    result = 1;
  return result;
}


int *__fastcall CompoundTag::getIntArray(int a1, const void **a2)
{
  const void **v2; // r10@1
  int v3; // r5@1
  int v4; // r0@2
  int v5; // r8@2
  int v6; // r7@2
  const void *v7; // r5@3
  int v8; // r9@3
  size_t v9; // r6@3
  _DWORD *v10; // r0@5
  size_t v11; // r4@5
  size_t v12; // r2@5
  int v13; // r0@7
  char v14; // r1@14
  int *result; // r0@16
  _DWORD *v16; // r1@18
  unsigned int v17; // r4@18
  unsigned int v18; // r5@18
  size_t v19; // r2@18
  int v20; // r0@20
  int v21; // r0@25

  v2 = a2;
  v3 = a1;
  if ( CompoundTag::contains(a1, a2, 11) )
  {
    v4 = *(_DWORD *)(v3 + 12);
    v5 = v3 + 8;
    v6 = v3 + 8;
    if ( v4 )
    {
      v7 = *v2;
      v8 = v5;
      v9 = *((_DWORD *)*v2 - 3);
      do
      {
        v6 = v4;
        while ( 1 )
        {
          v10 = *(_DWORD **)(v6 + 16);
          v11 = *(v10 - 3);
          v12 = *(v10 - 3);
          if ( v11 > v9 )
            v12 = v9;
          v13 = memcmp(v10, v7, v12);
          if ( !v13 )
            v13 = v11 - v9;
          if ( v13 >= 0 )
            break;
          v6 = *(_DWORD *)(v6 + 12);
          if ( !v6 )
          {
            v6 = v8;
            goto LABEL_17;
          }
        }
        v4 = *(_DWORD *)(v6 + 8);
        v8 = v6;
      }
      while ( v4 );
    }
LABEL_17:
    if ( v6 == v5 )
      v21 = 0;
    else
      v16 = *(_DWORD **)(v6 + 16);
      v17 = *((_DWORD *)*v2 - 3);
      v18 = *(v16 - 3);
      v19 = *((_DWORD *)*v2 - 3);
      if ( v17 > v18 )
        v19 = *(v16 - 3);
      v20 = memcmp(*v2, v16, v19);
      if ( !v20 )
        v20 = v17 - v18;
      if ( v20 < 0 )
        v6 = v5;
      if ( v6 == v5 )
        v21 = 0;
      else
        v21 = *(_DWORD *)(v6 + 20);
    result = (int *)(v21 + 4);
  }
  else
    v14 = byte_27E9CD4;
    __dmb();
    if ( v14 & 1 )
      result = &dword_27E9CE4;
    else if ( j___cxa_guard_acquire((unsigned int *)&byte_27E9CD4) )
      dword_27E9CE4 = 0;
      *(_DWORD *)algn_27E9CE8 = 0;
      *(_DWORD *)&algn_27E9CE8[4] = 0;
      _cxa_atexit(TagMemoryChunk::~TagMemoryChunk);
      j___cxa_guard_release((unsigned int *)&byte_27E9CD4);
  return result;
}


int __fastcall CompoundTag::putString(int a1, const void **a2, int *a3)
{
  int *v3; // r6@1
  const void **v4; // r7@1
  char *v5; // r4@1
  _DWORD *v6; // r5@1
  int result; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = std::map<std::string,std::unique_ptr<Tag,std::default_delete<Tag>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>>::operator[](
         a1 + 4,
         a2);
  v6 = operator new(8u);
  StringTag::StringTag(v6, (int)v4, v3);
  result = *(_DWORD *)v5;
  *(_DWORD *)v5 = v6;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


int __fastcall CompoundTag::putBoolean(int a1, const void **a2, char a3)
{
  char v3; // r6@1
  const void **v4; // r7@1
  char *v5; // r4@1
  _DWORD *v6; // r5@1
  int result; // r0@1

  v3 = a3;
  v4 = a2;
  v5 = std::map<std::string,std::unique_ptr<Tag,std::default_delete<Tag>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>>::operator[](
         a1 + 4,
         a2);
  v6 = operator new(8u);
  ByteTag::ByteTag(v6, (int)v4, v3);
  result = *(_DWORD *)v5;
  *(_DWORD *)v5 = v6;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}


void __fastcall CompoundTag::~CompoundTag(CompoundTag *this)
{
  CompoundTag *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_26E8F4C;
  std::_Rb_tree<std::string,std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>,std::_Select1st<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>>::_M_erase(
    (int)this + 4,
    *((_DWORD *)this + 3));
  j_j_j__ZdlPv_5((void *)v1);
}


int __fastcall CompoundTag::getFloat(int a1, const void **a2)
{
  const void **v2; // r4@1
  int v3; // r5@1
  _DWORD *v4; // r4@2
  int v5; // r9@2
  int v6; // r0@2
  size_t v7; // r6@2
  int v8; // r8@3
  int v9; // r7@4
  _DWORD *v10; // r0@5
  size_t v11; // r5@5
  size_t v12; // r2@5
  int v13; // r0@7
  _DWORD *v18; // r1@16
  size_t v19; // r2@16
  size_t v20; // r5@16
  int v21; // r0@18
  int result; // r0@23

  v2 = a2;
  v3 = a1;
  if ( CompoundTag::contains(a1, a2, 5) == 1 )
  {
    v4 = *v2;
    v5 = v3 + 8;
    v6 = *(_DWORD *)(v3 + 12);
    v7 = *(v4 - 3);
    if ( v6 )
    {
      v8 = v3 + 8;
      do
      {
        v9 = v6;
        while ( 1 )
        {
          v10 = *(_DWORD **)(v9 + 16);
          v11 = *(v10 - 3);
          v12 = *(v10 - 3);
          if ( v11 > v7 )
            v12 = v7;
          v13 = memcmp(v10, v4, v12);
          if ( !v13 )
            v13 = v11 - v7;
          if ( v13 >= 0 )
            break;
          v9 = *(_DWORD *)(v9 + 12);
          if ( !v9 )
          {
            v9 = v8;
            goto LABEL_16;
          }
        }
        v6 = *(_DWORD *)(v9 + 8);
        v8 = v9;
      }
      while ( v6 );
    }
    else
      v9 = v3 + 8;
LABEL_16:
    v18 = *(_DWORD **)(v9 + 16);
    v19 = v7;
    v20 = *(v18 - 3);
    if ( v7 > v20 )
      v19 = *(v18 - 3);
    v21 = memcmp(v4, v18, v19);
    if ( !v21 )
      v21 = v7 - v20;
    if ( v21 >= 0 )
      v5 = v9;
    _R0 = *(_DWORD *)(v5 + 20);
    __asm { VLDR            S0, [R0,#4] }
  }
  else
    __asm { VLDR            S0, =0.0 }
  __asm { VMOV            R0, S0 }
  return result;
}


const void **__fastcall CompoundTag::getString(int a1, const void **a2)
{
  const void **v2; // r10@1
  int v3; // r5@1
  int v4; // r0@2
  int v5; // r8@2
  int v6; // r7@2
  const void *v7; // r5@3
  int v8; // r9@3
  size_t v9; // r6@3
  _DWORD *v10; // r0@5
  size_t v11; // r4@5
  size_t v12; // r2@5
  int v13; // r0@7
  const void **result; // r0@14
  _DWORD *v15; // r1@16
  unsigned int v16; // r4@16
  unsigned int v17; // r5@16
  size_t v18; // r2@16
  int v19; // r0@18

  v2 = a2;
  v3 = a1;
  if ( CompoundTag::contains(a1, a2, 8) == 1 )
  {
    v4 = *(_DWORD *)(v3 + 12);
    v5 = v3 + 8;
    v6 = v3 + 8;
    if ( v4 )
    {
      v7 = *v2;
      v8 = v5;
      v9 = *((_DWORD *)*v2 - 3);
      do
      {
        v6 = v4;
        while ( 1 )
        {
          v10 = *(_DWORD **)(v6 + 16);
          v11 = *(v10 - 3);
          v12 = *(v10 - 3);
          if ( v11 > v9 )
            v12 = v9;
          v13 = memcmp(v10, v7, v12);
          if ( !v13 )
            v13 = v11 - v9;
          if ( v13 >= 0 )
            break;
          v6 = *(_DWORD *)(v6 + 12);
          if ( !v6 )
          {
            v6 = v8;
            goto LABEL_15;
          }
        }
        v4 = *(_DWORD *)(v6 + 8);
        v8 = v6;
      }
      while ( v4 );
    }
LABEL_15:
    if ( v6 == v5 )
      goto LABEL_27;
    v15 = *(_DWORD **)(v6 + 16);
    v16 = *((_DWORD *)*v2 - 3);
    v17 = *(v15 - 3);
    v18 = *((_DWORD *)*v2 - 3);
    if ( v16 > v17 )
      v18 = *(v15 - 3);
    v19 = memcmp(*v2, v15, v18);
    if ( !v19 )
      v19 = v16 - v17;
    if ( v19 < 0 )
      v6 = v5;
LABEL_27:
      result = (const void **)4;
    else
      result = (const void **)(*(_DWORD *)(v6 + 20) + 4);
  }
  else
    result = &Util::EMPTY_STRING;
  return result;
}


_DWORD *__fastcall CompoundTag::CompoundTag(_DWORD *a1)
{
  _DWORD *result; // r0@1

  result = Tag::Tag(a1);
  *result = &off_26E8F4C;
  result[3] = 0;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[2] = 0;
  result[4] = result + 2;
  result[5] = result + 2;
  return result;
}


signed int __fastcall CompoundTag::contains(int a1, const void **a2, int a3)
{
  int v3; // r10@1
  int v4; // r0@1
  int v5; // r8@1
  const void **v6; // r9@1
  int v7; // r4@1
  const void *v8; // r6@2
  int v9; // r11@2
  size_t v10; // r5@2
  _DWORD *v11; // r0@4
  size_t v12; // r7@4
  size_t v13; // r2@4
  int v14; // r0@6
  _DWORD *v15; // r1@13
  unsigned int v16; // r5@13
  unsigned int v17; // r6@13
  size_t v18; // r2@13
  int v19; // r0@15
  int v20; // r0@20
  signed int v21; // r5@20

  v3 = a1 + 8;
  v4 = *(_DWORD *)(a1 + 12);
  v5 = a3;
  v6 = a2;
  v7 = v3;
  if ( v4 )
  {
    v8 = *a2;
    v9 = v3;
    v10 = *((_DWORD *)*a2 - 3);
    do
    {
      v7 = v4;
      while ( 1 )
      {
        v11 = *(_DWORD **)(v7 + 16);
        v12 = *(v11 - 3);
        v13 = *(v11 - 3);
        if ( v12 > v10 )
          v13 = v10;
        v14 = memcmp(v11, v8, v13);
        if ( !v14 )
          v14 = v12 - v10;
        if ( v14 >= 0 )
          break;
        v7 = *(_DWORD *)(v7 + 12);
        if ( !v7 )
        {
          v7 = v9;
          goto LABEL_12;
        }
      }
      v4 = *(_DWORD *)(v7 + 8);
      v9 = v7;
    }
    while ( v4 );
  }
LABEL_12:
  if ( v7 == v3 )
    v21 = 0;
  else
    v15 = *(_DWORD **)(v7 + 16);
    v16 = *((_DWORD *)*v6 - 3);
    v17 = *(v15 - 3);
    v18 = *((_DWORD *)*v6 - 3);
    if ( v16 > v17 )
      v18 = *(v15 - 3);
    v19 = memcmp(*v6, v15, v18);
    if ( !v19 )
      v19 = v16 - v17;
    if ( v19 < 0 )
      v7 = v3;
    if ( v7 == v3 )
      v21 = 0;
    else
      v20 = *(_DWORD *)(v7 + 20);
      if ( v20 && (*(int (**)(void))(*(_DWORD *)v20 + 24))() == v5 )
        v21 = 1;
  return v21;
}


int __fastcall CompoundTag::putDouble(int a1, const void **a2, int a3)
{
  const void **v4; // r6@1
  char *v5; // r4@1
  _DWORD *v10; // r0@1
  _DWORD *v11; // r5@1
  int v14; // r0@1
  int v16; // [sp+Ch] [bp-Ch]@0

  _R5 = a3;
  v4 = a2;
  v5 = std::map<std::string,std::unique_ptr<Tag,std::default_delete<Tag>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>>::operator[](
         a1 + 4,
         a2);
  __asm { VMOV            S16, R5 }
  v10 = operator new(0x10u);
  __asm { VCVT.F64.F32    D0, S16 }
  v11 = v10;
  __asm { VMOV            R2, R3, D0 }
  DoubleTag::DoubleTag(v10, (int)v4, _R2);
  v14 = *(_DWORD *)v5;
  *(_DWORD *)v5 = v11;
  if ( !v14 )
    JUMPOUT(__CS__, v16);
  return (*(int (**)(void))(*(_DWORD *)v14 + 4))();
}


int __fastcall CompoundTag::getList(int a1, const void **a2)
{
  const void **v2; // r10@1
  int v3; // r5@1
  int v4; // r0@2
  int v5; // r8@2
  int v6; // r7@2
  const void *v7; // r5@3
  int v8; // r9@3
  size_t v9; // r6@3
  _DWORD *v10; // r0@5
  size_t v11; // r4@5
  size_t v12; // r2@5
  int v13; // r0@7
  _DWORD *v14; // r1@14
  unsigned int v15; // r4@14
  unsigned int v16; // r5@14
  size_t v17; // r2@14
  int v18; // r0@16
  int result; // r0@21

  v2 = a2;
  v3 = a1;
  if ( CompoundTag::contains(a1, a2, 9) != 1 )
    goto LABEL_25;
  v4 = *(_DWORD *)(v3 + 12);
  v5 = v3 + 8;
  v6 = v3 + 8;
  if ( v4 )
  {
    v7 = *v2;
    v8 = v5;
    v9 = *((_DWORD *)*v2 - 3);
    do
    {
      v6 = v4;
      while ( 1 )
      {
        v10 = *(_DWORD **)(v6 + 16);
        v11 = *(v10 - 3);
        v12 = *(v10 - 3);
        if ( v11 > v9 )
          v12 = v9;
        v13 = memcmp(v10, v7, v12);
        if ( !v13 )
          v13 = v11 - v9;
        if ( v13 >= 0 )
          break;
        v6 = *(_DWORD *)(v6 + 12);
        if ( !v6 )
        {
          v6 = v8;
          goto LABEL_13;
        }
      }
      v4 = *(_DWORD *)(v6 + 8);
      v8 = v6;
    }
    while ( v4 );
  }
LABEL_13:
  if ( v6 == v5 )
  v14 = *(_DWORD **)(v6 + 16);
  v15 = *((_DWORD *)*v2 - 3);
  v16 = *(v14 - 3);
  v17 = *((_DWORD *)*v2 - 3);
  if ( v15 > v16 )
    v17 = *(v14 - 3);
  v18 = memcmp(*v2, v14, v17);
  if ( !v18 )
    v18 = v15 - v16;
  if ( v18 < 0 )
    v6 = v5;
LABEL_25:
    result = 0;
  else
    result = *(_DWORD *)(v6 + 20);
  return result;
}


int __fastcall CompoundTag::getAllTags(int result, int a2)
{
  int v2; // r5@1
  int v3; // r8@1
  int v4; // r11@1
  __int64 v5; // r6@2
  int v6; // r9@3
  void *v7; // r10@5
  signed int v8; // r0@5
  unsigned int v9; // r1@5
  unsigned int v10; // r0@7
  unsigned int v11; // r4@7
  void *v12; // r0@13
  signed int v13; // r2@14

  v2 = *(_DWORD *)(result + 16);
  v3 = result + 8;
  v4 = a2;
  if ( v2 != result + 8 )
  {
    HIDWORD(v5) = *(_DWORD *)(a2 + 4);
    do
    {
      v6 = *(_DWORD *)(v2 + 20);
      if ( HIDWORD(v5) == *(_DWORD *)(v4 + 8) )
      {
        v7 = *(void **)v4;
        LODWORD(v5) = 0;
        v8 = HIDWORD(v5) - *(_DWORD *)v4;
        v9 = v8 >> 2;
        if ( !(v8 >> 2) )
          v9 = 1;
        v10 = v9 + (v8 >> 2);
        v11 = v10;
        if ( 0 != v10 >> 30 )
          v11 = 0x3FFFFFFF;
        if ( v10 < v9 )
        if ( v11 )
        {
          if ( v11 >= 0x40000000 )
            sub_21E57F4();
          v12 = operator new(4 * v11);
          HIDWORD(v5) = *(_QWORD *)v4 >> 32;
          v7 = (void *)*(_QWORD *)v4;
          LODWORD(v5) = v12;
        }
        v13 = HIDWORD(v5) - (_DWORD)v7;
        HIDWORD(v5) = v5 + HIDWORD(v5) - (_DWORD)v7;
        *(_DWORD *)(v5 + v13) = v6;
        if ( v13 >> 2 )
          _aeabi_memmove4(v5, v7);
        HIDWORD(v5) += 4;
        if ( v7 )
          operator delete(v7);
        *(_QWORD *)v4 = v5;
        *(_DWORD *)(v4 + 8) = v5 + 4 * v11;
      }
      else
        *(_DWORD *)HIDWORD(v5) = v6;
        HIDWORD(v5) = *(_DWORD *)(v4 + 4) + 4;
        *(_DWORD *)(v4 + 4) = HIDWORD(v5);
      result = sub_21D4820(v2);
      v2 = result;
    }
    while ( result != v3 );
  }
  return result;
}


int __fastcall CompoundTag::CompoundTag(int a1)
{
  int v1; // r4@1
  void *v2; // r0@1
  int result; // r0@2
  unsigned int *v4; // r12@3
  signed int v5; // r1@5
  int v6; // [sp+4h] [bp-1Ch]@1

  v1 = a1;
  sub_21E94B4((void **)&v6, (const char *)&unk_257BC67);
  Tag::Tag((_DWORD *)v1);
  v2 = (void *)(v6 - 12);
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
      j_j_j_j__ZdlPv_9(v2);
  }
  *(_DWORD *)v1 = &off_26E8F4C;
  *(_DWORD *)(v1 + 12) = 0;
  *(_DWORD *)(v1 + 16) = 0;
  *(_DWORD *)(v1 + 20) = 0;
  *(_DWORD *)(v1 + 24) = 0;
  *(_DWORD *)(v1 + 8) = 0;
  result = v1;
  *(_DWORD *)(v1 + 16) = v1 + 8;
  *(_DWORD *)(v1 + 20) = v1 + 8;
  return result;
}


int __fastcall CompoundTag::getCompound(int a1, const void **a2)
{
  const void **v2; // r10@1
  int v3; // r5@1
  int v4; // r0@2
  int v5; // r8@2
  int v6; // r7@2
  const void *v7; // r5@3
  int v8; // r9@3
  size_t v9; // r6@3
  _DWORD *v10; // r0@5
  size_t v11; // r4@5
  size_t v12; // r2@5
  int v13; // r0@7
  _DWORD *v14; // r1@14
  unsigned int v15; // r4@14
  unsigned int v16; // r5@14
  size_t v17; // r2@14
  int v18; // r0@16
  int result; // r0@21

  v2 = a2;
  v3 = a1;
  if ( CompoundTag::contains(a1, a2, 10) != 1 )
    goto LABEL_25;
  v4 = *(_DWORD *)(v3 + 12);
  v5 = v3 + 8;
  v6 = v3 + 8;
  if ( v4 )
  {
    v7 = *v2;
    v8 = v5;
    v9 = *((_DWORD *)*v2 - 3);
    do
    {
      v6 = v4;
      while ( 1 )
      {
        v10 = *(_DWORD **)(v6 + 16);
        v11 = *(v10 - 3);
        v12 = *(v10 - 3);
        if ( v11 > v9 )
          v12 = v9;
        v13 = memcmp(v10, v7, v12);
        if ( !v13 )
          v13 = v11 - v9;
        if ( v13 >= 0 )
          break;
        v6 = *(_DWORD *)(v6 + 12);
        if ( !v6 )
        {
          v6 = v8;
          goto LABEL_13;
        }
      }
      v4 = *(_DWORD *)(v6 + 8);
      v8 = v6;
    }
    while ( v4 );
  }
LABEL_13:
  if ( v6 == v5 )
  v14 = *(_DWORD **)(v6 + 16);
  v15 = *((_DWORD *)*v2 - 3);
  v16 = *(v14 - 3);
  v17 = *((_DWORD *)*v2 - 3);
  if ( v15 > v16 )
    v17 = *(v14 - 3);
  v18 = memcmp(*v2, v14, v17);
  if ( !v18 )
    v18 = v15 - v16;
  if ( v18 < 0 )
    v6 = v5;
LABEL_25:
    result = 0;
  else
    result = *(_DWORD *)(v6 + 20);
  return result;
}


int __fastcall CompoundTag::putInt64(int a1, const void **a2, int a3, int a4)
{
  int v4; // r8@1
  int v5; // r7@1
  const void **v6; // r6@1
  char *v7; // r4@1
  _DWORD *v8; // r5@1
  int result; // r0@1

  v4 = a4;
  v5 = a3;
  v6 = a2;
  v7 = std::map<std::string,std::unique_ptr<Tag,std::default_delete<Tag>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::unique_ptr<Tag,std::default_delete<Tag>>>>>::operator[](
         a1 + 4,
         a2);
  v8 = operator new(0x10u);
  Int64Tag::Int64Tag(v8, (int)v6, v5, v4);
  result = *(_DWORD *)v7;
  *(_DWORD *)v7 = v8;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 4))();
  return result;
}
