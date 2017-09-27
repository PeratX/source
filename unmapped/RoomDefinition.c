

int __fastcall RoomDefinition::RoomDefinition(int a1)
{
  int v1; // r11@1
  int v2; // r4@1
  int v3; // r4@3
  int v4; // r5@3
  int v5; // r7@4
  unsigned int *v6; // r1@5
  unsigned int v7; // r0@7
  unsigned int *v8; // r6@11
  unsigned int v9; // r0@13
  int v10; // r0@22
  unsigned int *v11; // r2@23
  unsigned int v12; // r1@25
  int v14; // [sp+0h] [bp-58h]@1
  int v15; // [sp+4h] [bp-54h]@22
  __int64 v16; // [sp+Ch] [bp-4Ch]@3
  void *ptr; // [sp+18h] [bp-40h]@1

  v1 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  v2 = a1 + 12;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  *(_DWORD *)(v2 + 16) = 0;
  *(_DWORD *)(v2 + 20) = 0;
  *(_DWORD *)(v2 + 24) = 0;
  *(_DWORD *)(v2 + 28) = 0;
  RoomDefinition::RoomDefinition((RoomDefinition *)&v14, -1);
  if ( ptr )
    j_operator delete(ptr);
  v3 = HIDWORD(v16);
  v4 = v16;
  if ( (_DWORD)v16 != HIDWORD(v16) )
  {
    do
    {
      v5 = *(_DWORD *)(v4 + 4);
      if ( v5 )
      {
        v6 = (unsigned int *)(v5 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
        }
        else
          v7 = (*v6)--;
        if ( v7 == 1 )
          v8 = (unsigned int *)(v5 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
          if ( &pthread_create )
          {
            __dmb();
            do
              v9 = __ldrex(v8);
            while ( __strex(v9 - 1, v8) );
          }
          else
            v9 = (*v8)--;
          if ( v9 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
      }
      v4 += 8;
    }
    while ( v4 != v3 );
    v4 = v16;
  }
  if ( v4 )
    j_operator delete((void *)v4);
  v10 = v15;
  if ( v15 )
    v11 = (unsigned int *)(v15 + 8);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 == 1 )
      (*(void (**)(void))(*(_DWORD *)v10 + 12))();
  return v1;
}


int __fastcall RoomDefinition::RoomDefinition(int a1, int a2)
{
  int v2; // r11@1
  char *v3; // r0@1
  int v4; // r8@1
  __int64 v5; // r1@1
  signed int v6; // r1@1
  unsigned int v7; // r6@1
  int v8; // r1@4 OVERLAPPED
  int v9; // r2@4 OVERLAPPED
  int v10; // r12@5
  char *v11; // r3@5
  int v12; // r7@6
  unsigned int *v13; // r7@7
  unsigned int v14; // r4@9

  v2 = a1;
  v3 = 0;
  v4 = a2;
  *(_DWORD *)v2 = 0;
  *(_DWORD *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 8) = *(_DWORD *)(a2 + 8);
  v5 = *(_QWORD *)(a2 + 12);
  *(_DWORD *)(v2 + 12) = 0;
  *(_DWORD *)(v2 + 16) = 0;
  v6 = HIDWORD(v5) - v5;
  *(_DWORD *)(v2 + 20) = 0;
  v7 = v6 >> 3;
  if ( v6 >> 3 )
  {
    if ( v7 >= 0x20000000 )
      sub_21E57F4();
    v3 = (char *)j_operator new(v6);
  }
  *(_DWORD *)(v2 + 12) = v3;
  *(_DWORD *)(v2 + 16) = v3;
  *(_DWORD *)(v2 + 20) = &v3[8 * v7];
  *(_QWORD *)&v8 = *(_QWORD *)(v4 + 12);
  if ( v8 != v9 )
    v10 = -v8;
    v11 = v3;
    do
    {
      *(_DWORD *)v11 = *(_DWORD *)v8;
      v12 = *(_DWORD *)(v8 + 4);
      *((_DWORD *)v11 + 1) = v12;
      if ( v12 )
      {
        v13 = (unsigned int *)(v12 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v14 = __ldrex(v13);
          while ( __strex(v14 + 1, v13) );
        }
        else
          ++*v13;
      }
      v8 += 8;
      v11 += 8;
    }
    while ( v8 != v9 );
    v3 += ((v9 - 8 + v10) & 0xFFFFFFF8) + 8;
  std::vector<bool,std::allocator<bool>>::vector(v2 + 24, v4 + 24);
  *(_QWORD *)(v2 + 44) = *(_QWORD *)(v4 + 44);
  return v2;
}


signed int __fastcall RoomDefinition::isSpecial(RoomDefinition *this)
{
  signed int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_DWORD *)this + 2);
  result = 0;
  if ( v1 > 74 )
    result = 1;
  return result;
}


unsigned int __fastcall RoomDefinition::countOpenings(RoomDefinition *this)
{
  unsigned int v1; // r0@1

  v1 = **((_DWORD **)this + 6);
  return ((v1 >> 5) & 1) + (v1 & 1) + ((v1 >> 1) & 1) + ((v1 >> 2) & 1) + ((v1 >> 3) & 1) + ((v1 >> 4) & 1);
}


int __fastcall RoomDefinition::RoomDefinition(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  char *v4; // r0@1
  int v5; // r7@1
  _DWORD *v6; // r0@1
  int result; // r0@1

  v2 = a2;
  v3 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  v4 = (char *)j_operator new(0x30u);
  *(_DWORD *)(v3 + 12) = v4;
  *(_DWORD *)(v3 + 20) = v4 + 48;
  *(_DWORD *)v4 = 0;
  *((_DWORD *)v4 + 1) = 0;
  *((_DWORD *)v4 + 2) = 0;
  *((_DWORD *)v4 + 3) = 0;
  *((_DWORD *)v4 + 4) = 0;
  *((_DWORD *)v4 + 5) = 0;
  *((_DWORD *)v4 + 6) = 0;
  *((_DWORD *)v4 + 7) = 0;
  *((_DWORD *)v4 + 8) = 0;
  *((_DWORD *)v4 + 9) = 0;
  *((_DWORD *)v4 + 10) = 0;
  *((_DWORD *)v4 + 11) = 0;
  *(_DWORD *)(v3 + 16) = v4 + 48;
  *(_DWORD *)(v3 + 24) = 0;
  v5 = v3 + 24;
  *(_DWORD *)(v5 + 4) = 0;
  *(_DWORD *)(v5 + 8) = 0;
  *(_DWORD *)(v5 + 12) = 0;
  *(_DWORD *)(v5 + 16) = 0;
  v6 = j_operator new(4u);
  *(_DWORD *)(v3 + 40) = v6 + 1;
  *(_DWORD *)(v3 + 24) = v6;
  *(_DWORD *)(v3 + 28) = 0;
  *(_DWORD *)(v3 + 32) = v6;
  *(_DWORD *)(v3 + 36) = 6;
  *v6 = 0;
  result = v3;
  *(_DWORD *)(v3 + 8) = v2;
  *(_BYTE *)(v3 + 44) = 0;
  *(_BYTE *)(v3 + 45) = 0;
  *(_DWORD *)(v3 + 48) = 0;
  return result;
}


unsigned int *__fastcall RoomDefinition::updateOpenings(RoomDefinition *this)
{
  int v1; // r1@1
  unsigned int *result; // r0@1
  unsigned int v3; // r3@1
  unsigned int v4; // r2@3
  unsigned int v5; // r3@5
  unsigned int v6; // r2@7
  unsigned int v7; // r3@9
  unsigned int v8; // r2@11

  v1 = *((_DWORD *)this + 3);
  result = (unsigned int *)*((_DWORD *)this + 6);
  v3 = *result | 1;
  if ( !*(_DWORD *)v1 )
    v3 = *result & 0xFFFFFFFE;
  *result = v3;
  v4 = v3 | 2;
  if ( !*(_DWORD *)(v1 + 8) )
    v4 = v3 & 0xFFFFFFFD;
  *result = v4;
  v5 = v4 | 4;
  if ( !*(_DWORD *)(v1 + 16) )
    v5 = v4 & 0xFFFFFFFB;
  *result = v5;
  v6 = v5 | 8;
  if ( !*(_DWORD *)(v1 + 24) )
    v6 = v5 & 0xFFFFFFF7;
  *result = v6;
  v7 = v6 | 0x10;
  if ( !*(_DWORD *)(v1 + 32) )
    v7 = v6 & 0xFFFFFFEF;
  *result = v7;
  v8 = v7 | 0x20;
  if ( !*(_DWORD *)(v1 + 40) )
    v8 = v7 & 0xFFFFFFDF;
  *result = v8;
  return result;
}


signed int __fastcall RoomDefinition::findSource(RoomDefinition *this, int a2)
{
  RoomDefinition *v2; // r5@1
  int v3; // r4@1
  int v4; // r1@2
  int v5; // r0@2
  bool v6; // zf@3
  int v7; // r0@8
  bool v8; // zf@9
  int v9; // r0@14
  bool v10; // zf@15
  int v11; // r0@20
  bool v12; // zf@21
  int v13; // r0@26
  bool v14; // zf@27
  int v15; // r0@32
  bool v16; // zf@33

  v2 = this;
  v3 = a2;
  if ( *((_BYTE *)this + 45) )
    return 1;
  *((_DWORD *)this + 12) = a2;
  v4 = *((_DWORD *)this + 3);
  v5 = *(_DWORD *)v4;
  if ( *(_DWORD *)v4 )
  {
    v6 = (**((_BYTE **)v2 + 6) & 1) == 0;
    if ( **((_BYTE **)v2 + 6) & 1 )
      v6 = *(_DWORD *)(v5 + 48) == v3;
    if ( !v6 )
    {
      if ( RoomDefinition::findSource((RoomDefinition *)v5, v3) )
        return 1;
      v4 = *((_DWORD *)v2 + 3);
    }
  }
  v7 = *(_DWORD *)(v4 + 8);
  if ( v7 )
    v8 = (**((_BYTE **)v2 + 6) & 2) == 0;
    if ( **((_BYTE **)v2 + 6) & 2 )
      v8 = *(_DWORD *)(v7 + 48) == v3;
    if ( !v8 )
      if ( RoomDefinition::findSource((RoomDefinition *)v7, v3) )
  v9 = *(_DWORD *)(v4 + 16);
  if ( v9 )
    v10 = (**((_BYTE **)v2 + 6) & 4) == 0;
    if ( **((_BYTE **)v2 + 6) & 4 )
      v10 = *(_DWORD *)(v9 + 48) == v3;
    if ( !v10 )
      if ( RoomDefinition::findSource((RoomDefinition *)v9, v3) )
  v11 = *(_DWORD *)(v4 + 24);
  if ( v11 )
    v12 = (**((_BYTE **)v2 + 6) & 8) == 0;
    if ( **((_BYTE **)v2 + 6) & 8 )
      v12 = *(_DWORD *)(v11 + 48) == v3;
    if ( !v12 )
      if ( RoomDefinition::findSource((RoomDefinition *)v11, v3) )
  v13 = *(_DWORD *)(v4 + 32);
  if ( v13 )
    v14 = (**((_BYTE **)v2 + 6) & 0x10) == 0;
    if ( **((_BYTE **)v2 + 6) & 0x10 )
      v14 = *(_DWORD *)(v13 + 48) == v3;
    if ( !v14 )
      if ( !RoomDefinition::findSource((RoomDefinition *)v13, v3) )
      {
        v4 = *((_DWORD *)v2 + 3);
        goto LABEL_32;
      }
      return 1;
LABEL_32:
  v15 = *(_DWORD *)(v4 + 40);
  if ( v15 )
    v16 = (**((_BYTE **)v2 + 6) & 0x20) == 0;
    if ( **((_BYTE **)v2 + 6) & 0x20 )
      v16 = *(_DWORD *)(v15 + 48) == v3;
    if ( !v16 && RoomDefinition::findSource((RoomDefinition *)v15, v3) )
  return 0;
}
