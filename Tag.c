

void __fastcall Tag::print(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int v5; // r6@1
  void (__fastcall *v6)(int, int *); // r6@1
  int v7; // r0@1
  void *v8; // r0@1
  int v9; // r0@2
  void (__fastcall *v10)(int, char **); // r6@3
  const void **v11; // r0@3
  char *v12; // r0@3
  char *v13; // r0@4
  void (__fastcall *v14)(int, int *); // r6@5
  void *v15; // r0@5
  void *v16; // r0@6
  void *v17; // r0@7
  unsigned int *v18; // r2@9
  signed int v19; // r1@11
  unsigned int *v20; // r2@13
  signed int v21; // r1@15
  unsigned int *v22; // r2@17
  signed int v23; // r1@19
  unsigned int *v24; // r2@21
  signed int v25; // r1@23
  unsigned int *v26; // r2@25
  signed int v27; // r1@27
  unsigned int *v28; // r2@29
  signed int v29; // r1@31
  int v30; // [sp+0h] [bp-30h]@6
  int v31; // [sp+8h] [bp-28h]@5
  char *v32; // [sp+Ch] [bp-24h]@3
  char *v33; // [sp+10h] [bp-20h]@3
  int v34; // [sp+14h] [bp-1Ch]@1
  int v35; // [sp+18h] [bp-18h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  (*(void (__fastcall **)(int *, int))(*(_DWORD *)a1 + 44))(&v35, a1);
  (*(void (__fastcall **)(int, int))(*(_DWORD *)v4 + 8))(v4, v5);
  v6 = *(void (__fastcall **)(int, int *))(*(_DWORD *)v4 + 8);
  v7 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 24))(v3);
  Tag::getTagName((void **)&v34, v7);
  v6(v4, &v34);
  v8 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v34 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
    }
    else
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  }
  v9 = *(_DWORD *)(v35 - 12);
  if ( v9 )
    v10 = *(void (__fastcall **)(int, char **))(*(_DWORD *)v4 + 8);
    v32 = (char *)&unk_28898CC;
    sub_21E6FCC((const void **)&v32, v9 + 2);
    sub_21E7408((const void **)&v32, "(\"", 2u);
    sub_21E72F0((const void **)&v32, (const void **)&v35);
    v11 = sub_21E7408((const void **)&v32, "\")", 2u);
    v33 = (char *)*v11;
    *v11 = &unk_28898CC;
    v10(v4, &v33);
    v12 = v33 - 12;
    if ( (int *)(v33 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v33 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
      }
      else
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    v13 = v32 - 12;
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v28 = (unsigned int *)(v32 - 4);
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
  v14 = *(void (__fastcall **)(int, int *))(*(_DWORD *)v4 + 8);
  sub_21E94B4((void **)&v31, ": ");
  v14(v4, &v31);
  v15 = (void *)(v31 - 12);
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v31 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  (*(void (__fastcall **)(int *, int))(*(_DWORD *)v3 + 20))(&v30, v3);
  PrintStream::println(v4);
  v16 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v30 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  v17 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v35 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
}


int __fastcall Tag::writeNamedTag(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r4@1
  int v5; // r6@1
  void (__fastcall *v6)(int, int); // r7@1
  int v7; // r0@1
  int result; // r0@1

  v3 = a2;
  v4 = a3;
  v5 = a1;
  v6 = *(void (__fastcall **)(int, int))(*(_DWORD *)a3 + 24);
  v7 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 24))(a2);
  v6(v4, v7);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 24))(v3);
  if ( result )
  {
    (*(void (__fastcall **)(int, int))(*(_DWORD *)v4 + 8))(v4, v5);
    result = (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 12))(v3, v4);
  }
  return result;
}


_DWORD *__fastcall Tag::Tag(_DWORD *result)
{
  *result = &off_26E9168;
  return result;
}


void __fastcall Tag::print(int a1, int a2)
{
  Tag::print(a1, a2);
}


void __fastcall Tag::print(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void (__fastcall *v4)(int, int *, int); // r6@1
  void *v5; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v2 = a1;
  v3 = a2;
  v4 = *(void (__fastcall **)(int, int *, int))(*(_DWORD *)a1 + 36);
  sub_21E94B4((void **)&v8, (const char *)&unk_257BC67);
  v4(v2, &v8, v3);
  v5 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
}


void __fastcall Tag::print(int a1, int a2, int a3)
{
  Tag::print(a1, a2, a3);
}


void **__fastcall Tag::newTag(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4@1
  _DWORD *v3; // r5@2
  int v4; // r1@2
  void *v5; // r0@2
  void **result; // r0@3
  _DWORD *v7; // r6@4
  unsigned int *v8; // r2@17
  signed int v9; // r1@19
  int v10; // [sp+8h] [bp-18h]@2

  v2 = a1;
  switch ( a2 )
  {
    case 0:
      v3 = operator new(4u);
      sub_21E94B4((void **)&v10, (const char *)&unk_257BC67);
      v4 = v10;
      *v3 = &off_26E9168;
      v5 = (void *)(v4 - 12);
      if ( (int *)(v4 - 12) != &dword_28898C0 )
      {
        v8 = (unsigned int *)(v4 - 4);
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
          j_j_j_j__ZdlPv_9(v5);
      }
      *v2 = v3;
      result = &off_26D5430;
      *v3 = &off_26D5430;
      return result;
    case 1:
      v7 = operator new(8u);
      result = (void **)ByteTag::ByteTag(v7);
      goto LABEL_16;
    case 2:
      result = (void **)ShortTag::ShortTag(v7);
    case 3:
      result = (void **)IntTag::IntTag(v7);
    case 4:
      v7 = operator new(0x10u);
      result = (void **)Int64Tag::Int64Tag(v7);
    case 5:
      result = (void **)FloatTag::FloatTag(v7);
    case 6:
      result = (void **)DoubleTag::DoubleTag(v7);
    case 7:
      result = (void **)ByteArrayTag::ByteArrayTag(v7);
    case 9:
      v7 = operator new(0x14u);
      result = (void **)ListTag::ListTag(v7);
    case 10:
      v7 = operator new(0x1Cu);
      result = (void **)CompoundTag::CompoundTag(v7);
    case 11:
      result = (void **)IntArrayTag::IntArrayTag(v7);
    case 8:
      result = (void **)StringTag::StringTag(v7);
LABEL_16:
      *v2 = v7;
      break;
    default:
      result = 0;
      *v2 = 0;
  }
  return result;
}


void **__fastcall Tag::getTagName(void **a1, int a2)
{
  void **result; // r0@2

  switch ( a2 )
  {
    case 0:
      result = sub_21E94B4(a1, "TAG_End");
      break;
    case 1:
      result = sub_21E94B4(a1, "TAG_Byte");
    case 2:
      result = sub_21E94B4(a1, "TAG_Short");
    case 3:
      result = sub_21E94B4(a1, "TAG_Int");
    case 4:
      result = sub_21E94B4(a1, "TAG_Long");
    case 5:
      result = sub_21E94B4(a1, "TAG_Float");
    case 6:
      result = sub_21E94B4(a1, "TAG_Double");
    case 7:
      result = sub_21E94B4(a1, "TAG_Byte_Array");
    case 8:
      result = sub_21E94B4(a1, "TAG_String");
    case 9:
      result = sub_21E94B4(a1, "TAG_List");
    case 10:
      result = sub_21E94B4(a1, "TAG_Compound");
    case 11:
      result = sub_21E94B4(a1, "TAG_Int_Array");
    default:
      result = sub_21E94B4(a1, "UNKNOWN");
  }
  return result;
}


signed int __fastcall Tag::equals(Tag *this, const Tag *a2)
{
  Tag *v2; // r5@1
  const Tag *v3; // r4@1
  int v4; // r6@1
  int v5; // r6@2
  signed int v6; // r4@2
  char *v7; // r5@2
  size_t v8; // r2@2
  char *v9; // r0@6
  unsigned int *v10; // r2@7
  signed int v11; // r1@9
  unsigned int *v13; // r1@13
  signed int v14; // r0@15
  char *v15; // [sp+4h] [bp-24h]@2
  _DWORD *v16; // [sp+8h] [bp-20h]@2

  v2 = this;
  v3 = a2;
  v4 = (*(int (**)(void))(*(_DWORD *)this + 24))();
  if ( v4 == (*(int (__fastcall **)(const Tag *))(*(_DWORD *)v3 + 24))(v3) )
  {
    (*(void (__fastcall **)(_DWORD **, Tag *))(*(_DWORD *)v2 + 44))(&v16, v2);
    (*(void (__fastcall **)(char **, const Tag *))(*(_DWORD *)v3 + 44))(&v15, v3);
    v5 = (int)v15;
    v6 = 0;
    v7 = v15 - 12;
    v8 = *(v16 - 3);
    if ( v8 == *((_DWORD *)v15 - 3) && !memcmp(v16, v15, v8) )
      v6 = 1;
    if ( (int *)v7 != &dword_28898C0 )
    {
      v13 = (unsigned int *)(v5 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
    v9 = (char *)(v16 - 3);
    if ( v16 - 3 != &dword_28898C0 )
      v10 = v16 - 1;
          v11 = __ldrex(v10);
        while ( __strex(v11 - 1, v10) );
        v11 = (*v10)--;
      if ( v11 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
  }
  else
  return v6;
}


void **__fastcall Tag::readNamedTag(int *a1, int a2, int *a3)
{
  int v3; // r5@1
  int *v4; // r8@1
  int *v5; // r6@1
  int v6; // r7@1
  void *v7; // r0@2
  int v8; // r6@3
  void **result; // r0@4
  _DWORD *v10; // r5@5
  int v11; // r1@5
  void *v12; // r0@5
  unsigned int *v13; // r2@8
  signed int v14; // r1@10
  unsigned int *v15; // r2@12
  signed int v16; // r1@14
  int v17; // [sp+4h] [bp-2Ch]@3
  int v18; // [sp+8h] [bp-28h]@2
  int v19; // [sp+10h] [bp-20h]@5

  v3 = a2;
  v4 = a1;
  v5 = a3;
  v6 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 24))(a2);
  if ( v6 )
  {
    (*(void (__fastcall **)(int *, int))(*(_DWORD *)v3 + 8))(&v18, v3);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v5, &v18);
    v7 = (void *)(v18 - 12);
    if ( (int *)(v18 - 12) != &dword_28898C0 )
    {
      v13 = (unsigned int *)(v18 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v14 = __ldrex(v13);
        while ( __strex(v14 - 1, v13) );
      }
      else
        v14 = (*v13)--;
      if ( v14 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
    Tag::newTag(&v17, v6);
    v8 = v17;
    if ( v17 )
      (*(void (__fastcall **)(int, int))(*(_DWORD *)v17 + 16))(v17, v3);
      result = 0;
      *v4 = v8;
      v17 = 0;
    else
      *v4 = 0;
  }
  else
    v10 = operator new(4u);
    sub_21E94B4((void **)&v19, (const char *)&unk_257BC67);
    v11 = v19;
    *v10 = &off_26E9168;
    v12 = (void *)(v11 - 12);
    if ( (int *)(v11 - 12) != &dword_28898C0 )
      v15 = (unsigned int *)(v11 - 4);
          v16 = __ldrex(v15);
        while ( __strex(v16 - 1, v15) );
        v16 = (*v15)--;
      if ( v16 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    *v4 = (int)v10;
    result = &off_26D5430;
    *v10 = &off_26D5430;
  return result;
}
