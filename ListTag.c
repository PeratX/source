

int __fastcall ListTag::get(ListTag *this, int a2)
{
  __int64 v2; // kr00_8@1
  int result; // r0@2

  v2 = *(_QWORD *)((char *)this + 4);
  if ( (HIDWORD(v2) - (signed int)v2) >> 2 <= a2 )
    result = 0;
  else
    result = *(_DWORD *)(v2 + 4 * a2);
  return result;
}


signed int __fastcall ListTag::size(ListTag *this)
{
  return (signed int)((*(_QWORD *)((char *)this + 4) >> 32) - *(_QWORD *)((char *)this + 4)) >> 2;
}


signed int __fastcall ListTag::getId(ListTag *this)
{
  return 9;
}


int __fastcall ListTag::ListTag(int a1)
{
  int v1; // r4@1
  void *v2; // r0@1
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
  *(_QWORD *)v1 = (unsigned int)&off_26E90B4;
  *(_DWORD *)(v1 + 8) = 0;
  *(_DWORD *)(v1 + 12) = 0;
  return v1;
}


const void **__fastcall ListTag::getString(ListTag *this, int a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r4@2
  const void **result; // r0@4

  v2 = *(_QWORD *)((char *)this + 4);
  if ( (HIDWORD(v2) - (signed int)v2) >> 2 <= a2 )
  {
    result = &Util::EMPTY_STRING;
  }
  else
    v3 = *(_DWORD *)(v2 + 4 * a2);
    if ( v3 )
    {
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 24))(v3) == 8 )
        result = (const void **)(v3 + 4);
      else
        result = &Util::EMPTY_STRING;
    }
    else
      result = &Util::EMPTY_STRING;
  return result;
}


int __fastcall ListTag::copy(ListTag *this, int a2)
{
  int v2; // r10@1
  ListTag *v3; // r8@1
  _DWORD *v4; // r4@1
  int v5; // r9@1
  void *v6; // r0@1
  int result; // r0@2
  int i; // r7@2
  __int64 v9; // r0@3
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  int v12; // [sp+0h] [bp-30h]@3
  int v13; // [sp+4h] [bp-2Ch]@1

  v2 = a2;
  v3 = this;
  (*(void (__fastcall **)(int *))(*(_DWORD *)a2 + 44))(&v13);
  v4 = operator new(0x14u);
  Tag::Tag(v4);
  *v4 = &off_26E90B4;
  v4[1] = 0;
  v5 = (int)(v4 + 1);
  *(_DWORD *)(v5 + 4) = 0;
  *(_DWORD *)(v5 + 8) = 0;
  v6 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v13 - 4);
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
  *((_BYTE *)v4 + 16) = *(_BYTE *)(v2 + 16);
  result = *(_QWORD *)(v2 + 4) >> 32;
  for ( i = *(_QWORD *)(v2 + 4); i != result; result = *(_DWORD *)(v2 + 8) )
    (*(void (__fastcall **)(int *))(**(_DWORD **)i + 48))(&v12);
    v9 = *((_QWORD *)v4 + 1);
    if ( (_DWORD)v9 == HIDWORD(v9) )
      std::vector<std::unique_ptr<Tag,std::default_delete<Tag>>,std::allocator<std::unique_ptr<Tag,std::default_delete<Tag>>>>::_M_emplace_back_aux<std::unique_ptr<Tag,std::default_delete<Tag>>>(
        v4 + 1,
        &v12);
      HIDWORD(v9) = v12;
      v12 = 0;
      *(_DWORD *)v9 = HIDWORD(v9);
      v4[2] = v9 + 4;
    if ( v12 )
      (*(void (**)(void))(*(_DWORD *)v12 + 4))();
    v12 = 0;
    i += 4;
  *(_DWORD *)v3 = v4;
  return result;
}


ListTag *__fastcall ListTag::~ListTag(ListTag *this)
{
  ListTag *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED

  v1 = this;
  *(_DWORD *)this = &off_26E90B4;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
    {
      if ( *(_DWORD *)v2 )
        (*(void (**)(void))(**(_DWORD **)v2 + 4))();
      *(_DWORD *)v2 = 0;
      v2 += 4;
    }
    while ( v3 != v2 );
    v2 = (char *)*((_DWORD *)v1 + 1);
  }
  if ( v2 )
    operator delete(v2);
  return v1;
}


void __fastcall ListTag::~ListTag(ListTag *this)
{
  ListTag *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED

  v1 = this;
  *(_DWORD *)this = &off_26E90B4;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
    {
      if ( *(_DWORD *)v2 )
        (*(void (**)(void))(**(_DWORD **)v2 + 4))();
      *(_DWORD *)v2 = 0;
      v2 += 4;
    }
    while ( v3 != v2 );
    v2 = (char *)*((_DWORD *)v1 + 1);
  }
  if ( v2 )
    operator delete(v2);
  j_j_j__ZdlPv_5((void *)v1);
}


_DWORD *__fastcall ListTag::toString(ListTag *this, int a2)
{
  int v2; // r6@1
  int *v3; // r5@1
  __int64 v4; // r1@1
  char *v5; // r7@1
  void *v6; // r0@1
  void **v7; // r0@2
  void *v8; // r0@2
  unsigned int *v10; // r2@4
  signed int v11; // r1@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  int v14; // [sp+0h] [bp-D8h]@1
  void **v15; // [sp+4h] [bp-D4h]@1
  int v16; // [sp+8h] [bp-D0h]@3
  void **v17; // [sp+Ch] [bp-CCh]@1
  void **v18; // [sp+10h] [bp-C8h]@2
  int v19; // [sp+2Ch] [bp-ACh]@3
  int v20; // [sp+34h] [bp-A4h]@2
  int v21; // [sp+38h] [bp-A0h]@3

  v2 = a2;
  v3 = (int *)this;
  sub_21D103C((int)&v15, 24);
  v4 = *(_QWORD *)(v2 + 4);
  v5 = sub_21CC440((char *)&v17);
  sub_21CBF38(v5, (int)" entries of type ", 17);
  Tag::getTagName((void **)&v14, *(_BYTE *)(v2 + 16));
  sub_21CBF38(v5, v14, *(_DWORD *)(v14 - 12));
  v6 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v14 - 4);
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
  sub_21CFED8(v3, (int)&v18);
  v7 = off_26D3F84;
  v15 = off_26D3F60;
  *(_DWORD *)((char *)*(off_26D3F60 - 3) + (_DWORD)&v15) = off_26D3F80[0];
  v17 = v7;
  v18 = &off_27734E8;
  v8 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v20 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  v18 = &off_26D40A8;
  sub_21C802C((unsigned int **)&v19);
  v15 = (void **)off_26D3F68;
  *(void ***)((char *)&v15 + *((_DWORD *)off_26D3F68 - 3)) = (void **)off_26D3F6C;
  v16 = 0;
  return sub_21B6560(&v21);
}


signed int __fastcall ListTag::equals(ListTag *this, const Tag *a2)
{
  const Tag *v2; // r5@1
  ListTag *v3; // r4@1
  int v4; // r1@3
  int *v5; // r6@3
  int v6; // r0@3
  int v7; // r5@3
  signed int result; // r0@4
  int v9; // r1@8

  v2 = a2;
  v3 = this;
  if ( Tag::equals(this, a2) != 1 || *((_BYTE *)v3 + 16) != *((_BYTE *)v2 + 16) )
  {
    result = 0;
  }
  else
    v4 = *(_QWORD *)((char *)v2 + 4) >> 32;
    v5 = (int *)*(_QWORD *)((char *)v2 + 4);
    v6 = *(_QWORD *)((char *)v3 + 4) >> 32;
    v7 = *(_QWORD *)((char *)v3 + 4);
    if ( v6 - v7 == v4 - (_DWORD)v5 )
    {
      while ( v7 != v6 )
      {
        v9 = *v5;
        if ( (*(int (**)(void))(**(_DWORD **)v7 + 28))() != 1 )
          return 0;
        v6 = *((_DWORD *)v3 + 2);
        ++v5;
        v7 += 4;
      }
      result = 1;
    }
    else
      result = 0;
  return result;
}


_DWORD *__fastcall ListTag::ListTag(_DWORD *a1)
{
  _DWORD *result; // r0@1

  result = Tag::Tag(a1);
  *(_QWORD *)result = (unsigned int)&off_26E90B4;
  result[2] = 0;
  result[3] = 0;
  return result;
}


int __fastcall ListTag::deleteChildren(int result)
{
  int v1; // r4@1
  __int64 v2; // kr00_8@1
  int *v3; // r5@2

  v1 = result;
  v2 = *(_QWORD *)(result + 4);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = (int *)v2;
    do
    {
      result = *v3;
      if ( *v3 )
        result = (*(int (**)(void))(*(_DWORD *)result + 4))();
      *v3 = 0;
      ++v3;
    }
    while ( (int *)HIDWORD(v2) != v3 );
  }
  *(_DWORD *)(v1 + 8) = v2;
  return result;
}


int __fastcall ListTag::getDouble(ListTag *this, int _R1)
{
  __int64 v2; // kr00_8@1
  int result; // r0@5

  v2 = *(_QWORD *)((char *)this + 4);
  __asm { VLDR            D8, =0.0 }
  if ( (HIDWORD(v2) - (signed int)v2) >> 2 > _R1 )
  {
    _R4 = *(_DWORD *)(v2 + 4 * _R1);
    if ( _R4 )
    {
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)_R4 + 24))(_R4) == 6 )
        __asm { VLDREQ          D8, [R4,#8] }
    }
  }
  __asm { VMOV            R0, R1, D8 }
  return result;
}


void __fastcall ListTag::print(int a1, int a2, int a3)
{
  int v3; // r4@1
  int *v4; // r8@1
  int v5; // r6@1
  void *v6; // r0@1
  int v7; // r5@2
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
  v7 = *(_QWORD *)(v5 + 4);
  if ( v7 != *(_QWORD *)(v5 + 4) >> 32 )
    do
      (*(void (**)(void))(**(_DWORD **)v7 + 36))();
      v7 += 4;
    while ( v7 != *(_DWORD *)(v5 + 8) );
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


    if ( ListTag::size(v7) >= 1 )
{
      v9 = ListTag::get(v7, 0);
      if ( (*(int (**)(void))(*(_DWORD *)v9 + 24))() == 8 )
      {
        v11 = *(_DWORD *)(v9 + 4);
        v10 = (int *)(v9 + 4);
        if ( *(_DWORD *)(v11 - 12) )
        {
          sub_21E9040((void **)&v76, v10, 1u, 0xFFFFFFFF);
          EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v77, &v76);
          EntityDefinitionIdentifier::operator=(v3, &v77);
          v12 = (void *)(v79 - 12);
          if ( (int *)(v79 - 12) != &dword_28898C0 )
          {
            v60 = (unsigned int *)(v79 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v61 = __ldrex(v60);
              while ( __strex(v61 - 1, v60) );
            }
            else
              v61 = (*v60)--;
            if ( v61 <= 0 )
              j_j_j_j__ZdlPv_9(v12);
          }
          v13 = (void *)(v78 - 12);
          if ( (int *)(v78 - 12) != &dword_28898C0 )
            v62 = (unsigned int *)(v78 - 4);
                v63 = __ldrex(v62);
              while ( __strex(v63 - 1, v62) );
              v63 = (*v62)--;
            if ( v63 <= 0 )
              j_j_j_j__ZdlPv_9(v13);
          v14 = (void *)(v77 - 12);
          if ( (int *)(v77 - 12) != &dword_28898C0 )
            v64 = (unsigned int *)(v77 - 4);
                v65 = __ldrex(v64);
              while ( __strex(v65 - 1, v64) );
              v65 = (*v64)--;
            if ( v65 <= 0 )
              j_j_j_j__ZdlPv_9(v14);
          v15 = (void *)(v76 - 12);
          if ( (int *)(v76 - 12) != &dword_28898C0 )
            v66 = (unsigned int *)(v76 - 4);
                v67 = __ldrex(v66);
              while ( __strex(v67 - 1, v66) );
              v67 = (*v66)--;
            if ( v67 <= 0 )
              j_j_j_j__ZdlPv_9(v15);
        }
      }
    }
  }
  sub_21E94B4((void **)&v75, "id");
  v16 = CompoundTag::contains(v4, (const void **)&v75);
  v17 = (void *)(v75 - 12);
  if ( (int *)(v75 - 12) != &dword_28898C0 )
  {
    v44 = (unsigned int *)(v75 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
    else
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  if ( v16 == 1 )
    sub_21E94B4((void **)&v74, "id");
    v18 = CompoundTag::getInt(v4, (const void **)&v74);
    v19 = (void *)(v74 - 12);
    if ( (int *)(v74 - 12) != &dword_28898C0 )
      v52 = (unsigned int *)(v74 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v53 = __ldrex(v52);
        while ( __strex(v53 - 1, v52) );
      else
        v53 = (*v52)--;
      if ( v53 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
    if ( !*((_DWORD *)*_R7 - 3) )
      EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v71, v18);
      EntityDefinitionIdentifier::operator=(v3, &v71);
      v20 = (void *)(v73 - 12);
      if ( (int *)(v73 - 12) != &dword_28898C0 )
        v54 = (unsigned int *)(v73 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v55 = __ldrex(v54);
          while ( __strex(v55 - 1, v54) );
        else
          v55 = (*v54)--;
        if ( v55 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      v21 = (void *)(v72 - 12);
      if ( (int *)(v72 - 12) != &dword_28898C0 )
        v56 = (unsigned int *)(v72 - 4);
            v57 = __ldrex(v56);
          while ( __strex(v57 - 1, v56) );
          v57 = (*v56)--;
        if ( v57 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
      v22 = (void *)(v71 - 12);
      if ( (int *)(v71 - 12) != &dword_28898C0 )
        v58 = (unsigned int *)(v71 - 4);
            v59 = __ldrex(v58);
          while ( __strex(v59 - 1, v58) );
          v59 = (*v58)--;
        if ( v59 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
  if ( *((_DWORD *)*_R7 - 3) )
    EntityTypeResolveAlias((void **)&v70, _R7, 0);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)_R7,
      &v70);
    v23 = (void *)(v70 - 12);
    if ( (int *)(v70 - 12) != &dword_28898C0 )
      v46 = (unsigned int *)(v70 - 4);
          v47 = __ldrex(v46);
          _R7 = (const void **)__strex(v47 - 1, v46);
        while ( _R7 );
        v47 = (*v46)--;
      if ( v47 <= 0 )
        j_j_j_j__ZdlPv_9(v23);
    sub_21E94B4((void **)&v69, "Pos");
    v24 = (ListTag *)CompoundTag::getList(v4, (const void **)&v69);
    v25 = (void *)(v69 - 12);
    if ( (int *)(v69 - 12) != &dword_28898C0 )
      v48 = (unsigned int *)(v69 - 4);
          v49 = __ldrex(v48);
          _R7 = (const void **)__strex(v49 - 1, v48);
        v49 = (*v48)--;
      if ( v49 <= 0 )
        j_j_j_j__ZdlPv_9(v25);
    sub_21E94B4((void **)&v68, "Rotation");
    v26 = (ListTag *)CompoundTag::getList(v4, (const void **)&v68);
    v27 = (void *)(v68 - 12);
    if ( (int *)(v68 - 12) != &dword_28898C0 )
      v50 = (unsigned int *)(v68 - 4);
          v51 = __ldrex(v50);
          _R7 = (const void **)__strex(v51 - 1, v50);
        v51 = (*v50)--;
      if ( v51 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    *(_DWORD *)v5 = ListTag::getFloat(v24, 0);
    v28 = 1;
    _R0 = ListTag::getFloat(v24, 1);
    __asm
      VMOV.F32        S0, #-5.0
      VLDR            S4, =266.0
      VMOV            S2, R0
      VCMPE.F32       S2, S0
      VMRS            APSR_nzcv, FPSCR
      VCMPE.F32       S2, S4
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      __asm { VMOVGT.F32      S0, S2 }
    __asm { VMRS            APSR_nzcv, FPSCR }
      __asm { VMOVGT.F32      S0, S4 }
    __asm { VSTR            S0, [R9,#4] }
    *(_DWORD *)(v5 + 8) = ListTag::getFloat(v24, 2);
    if ( v26 )
      _R0 = ListTag::getFloat(v26, 0);
      __asm
        VMOV            S0, R0
        VLDR            D1, =360.0
        VCVT.F64.F32    D0, S0
        VMOV            R4, R7, D1
        VMOV            R0, R1, D0
      _R0 = COERCE_UNSIGNED_INT64(fmod(_R0, COERCE_DOUBLE(__PAIR__((unsigned int)_R7, _R4))));
      __asm { VMOV            D0, R0, R1 }
      v28 = 1;
        VCVT.F32.F64    S0, D0
        VSTR            S0, [R8,#4]
      _R0 = ListTag::getFloat(v26, 1);
        VMOV            D0, R0, R1
        VSTR            S0, [R8]
  else
    v28 = 0;
  return v28;
}


int __fastcall ListTag::write(ListTag *this, IDataOutput *a2)
{
  IDataOutput *v2; // r4@1
  ListTag *v3; // r5@1
  __int64 v4; // kr00_8@1
  void (__fastcall *v5)(IDataOutput *, int); // r6@1
  int v6; // r1@2
  int result; // r0@4
  int *v8; // r5@4
  int *i; // r6@4
  __int64 v10; // kr08_8@4
  int v11; // t1@5

  v2 = a2;
  v3 = this;
  v4 = *(_QWORD *)((char *)this + 4);
  v5 = *(void (__fastcall **)(IDataOutput *, int))(*(_DWORD *)a2 + 24);
  if ( (_DWORD)v4 == HIDWORD(v4) )
    v6 = 0;
  else
    v6 = (*(int (**)(void))(**(_DWORD **)v4 + 24))();
  v5(v2, v6);
  result = (*(int (__fastcall **)(IDataOutput *, signed int))(*(_DWORD *)v2 + 32))(
             v2,
             (signed int)((*(_QWORD *)((char *)v3 + 4) >> 32) - *(_QWORD *)((char *)v3 + 4)) >> 2);
  v10 = *(_QWORD *)((char *)v3 + 4);
  v8 = (int *)(*(_QWORD *)((char *)v3 + 4) >> 32);
  for ( i = (int *)v10; v8 != i; result = (*(int (**)(void))(*(_DWORD *)v11 + 12))() )
  {
    v11 = *i;
    ++i;
  }
  return result;
}


void __fastcall ListTag::print(int a1, int a2, int a3)
{
  ListTag::print(a1, a2, a3);
}


int __fastcall ListTag::getCompound(ListTag *this, unsigned int a2)
{
  __int64 v2; // kr00_8@1
  unsigned int v3; // r4@1
  int result; // r0@3

  v2 = *(_QWORD *)((char *)this + 4);
  v3 = a2;
  if ( (HIDWORD(v2) - (signed int)v2) >> 2 <= a2 || (*(int (**)(void))(**(_DWORD **)(v2 + 4 * a2) + 24))() != 10 )
    result = 0;
  else
    result = *(_DWORD *)(v2 + 4 * v3);
  return result;
}


char *__fastcall ListTag::add(int a1, int *a2)
{
  int *v2; // r5@1
  int v3; // r4@1
  __int64 v4; // r0@1
  char *result; // r0@2

  v2 = a2;
  v3 = a1;
  *(_BYTE *)(a1 + 16) = (*(int (**)(void))(*(_DWORD *)*a2 + 24))();
  v4 = *(_QWORD *)(v3 + 8);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    result = j_j_j__ZNSt6vectorISt10unique_ptrI3TagSt14default_deleteIS1_EESaIS4_EE19_M_emplace_back_auxIJS4_EEEvDpOT_(
               (_QWORD *)(v3 + 4),
               v2);
  }
  else
    HIDWORD(v4) = *v2;
    *v2 = 0;
    *(_DWORD *)v4 = HIDWORD(v4);
    result = (char *)(*(_DWORD *)(v3 + 8) + 4);
    *(_DWORD *)(v3 + 8) = result;
  return result;
}


int __fastcall ListTag::load(ListTag *this, IDataInput *a2)
{
  IDataInput *v2; // r10@1
  ListTag *v3; // r5@1
  int result; // r0@1
  signed int v5; // r11@1
  int *v6; // r9@1
  int *v7; // r7@1
  int *v8; // r4@2
  signed int v9; // r6@8
  __int64 v10; // r0@11
  int v11; // [sp+0h] [bp-28h]@10

  v2 = a2;
  v3 = this;
  *((_BYTE *)this + 16) = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)a2 + 24))(a2);
  result = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)v2 + 32))(v2);
  v5 = result;
  v6 = (int *)*((_DWORD *)v3 + 1);
  v7 = (int *)*((_DWORD *)v3 + 2);
  if ( v7 != v6 )
  {
    v8 = (int *)*((_DWORD *)v3 + 1);
    do
    {
      result = *v8;
      if ( *v8 )
        result = (*(int (**)(void))(*(_DWORD *)result + 4))();
      *v8 = 0;
      ++v8;
    }
    while ( v7 != v8 );
  }
  *((_DWORD *)v3 + 2) = v6;
  if ( v5 >= 1 )
    result = *((_BYTE *)v3 + 16);
    if ( *((_BYTE *)v3 + 16) )
      v9 = 0;
      do
      {
        result = (*(int (__fastcall **)(IDataInput *))(*(_DWORD *)v2 + 44))(v2);
        if ( !result )
          break;
        Tag::newTag(&v11, *((_BYTE *)v3 + 16));
        result = v11;
        if ( !v11 )
        (*(void (**)(void))(*(_DWORD *)v11 + 16))();
        v10 = *((_QWORD *)v3 + 1);
        if ( (_DWORD)v10 == HIDWORD(v10) )
        {
          std::vector<std::unique_ptr<Tag,std::default_delete<Tag>>,std::allocator<std::unique_ptr<Tag,std::default_delete<Tag>>>>::_M_emplace_back_aux<std::unique_ptr<Tag,std::default_delete<Tag>>>(
            (ListTag *)((char *)v3 + 4),
            &v11);
        }
        else
          HIDWORD(v10) = v11;
          v11 = 0;
          *(_DWORD *)v10 = HIDWORD(v10);
          *((_DWORD *)v3 + 2) = v10 + 4;
        if ( v11 )
          result = (*(int (**)(void))(*(_DWORD *)v11 + 4))();
        ++v9;
      }
      while ( v9 < v5 );
  return result;
}


void __fastcall ListTag::~ListTag(ListTag *this)
{
  ListTag::~ListTag(this);
}


int __fastcall ListTag::getFloat(ListTag *this, int a2)
{
  __int64 v2; // kr00_8@1
  int result; // r0@5

  v2 = *(_QWORD *)((char *)this + 4);
  __asm { VLDR            S16, =0.0 }
  if ( (HIDWORD(v2) - (signed int)v2) >> 2 > a2 )
  {
    _R4 = *(_DWORD *)(v2 + 4 * a2);
    if ( _R4 )
    {
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)_R4 + 24))(_R4) == 5 )
        __asm { VLDREQ          S16, [R4,#4] }
    }
  }
  __asm { VMOV            R0, S16 }
  return result;
}


int __fastcall ListTag::getInt(ListTag *this, int a2)
{
  __int64 v2; // kr00_8@1
  int v3; // r4@2
  int result; // r0@4

  v2 = *(_QWORD *)((char *)this + 4);
  if ( (HIDWORD(v2) - (signed int)v2) >> 2 > a2
    && (v3 = *(_DWORD *)(v2 + 4 * a2)) != 0
    && (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 24))(v3) == 3 )
  {
    result = *(_DWORD *)(v3 + 4);
  }
  else
    result = 0;
  return result;
}
