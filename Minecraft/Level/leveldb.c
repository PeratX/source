

int leveldb::Log(int result, leveldb::Logger *a2, __int64 a3, ...)
{
  __int64 v3; // [sp+10h] [bp-8h]@1

  v3 = a3;
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 8))();
  return result;
}


void __fastcall leveldb::Version::LevelFileNumIterator::~LevelFileNumIterator(leveldb::Version::LevelFileNumIterator *this)
{
  leveldb::Version::LevelFileNumIterator::~LevelFileNumIterator(this);
}


void __fastcall leveldb::InternalKeyComparator::FindShortSuccessor(int a1, unsigned int *a2)
{
  leveldb::InternalKeyComparator::FindShortSuccessor(a1, a2);
}


signed int __fastcall leveldb::ParseFileName(const void **a1, int a2, signed int *a3)
{
  const void *v3; // r6@1
  signed int *v4; // r5@1
  int v5; // r4@1
  unsigned int v6; // r7@1
  const void *v7; // r0@5
  size_t v8; // r2@5
  const char *v9; // r1@5
  signed int v10; // r1@9
  signed int result; // r0@12
  signed int v12; // r1@18
  signed int v13; // r2@18
  signed int v14; // r2@24
  signed int v15; // r0@27
  signed int v16; // r0@31
  bool v17; // zf@31
  int v18; // [sp+0h] [bp-28h]@15
  const void *v19; // [sp+8h] [bp-20h]@1
  unsigned int v20; // [sp+Ch] [bp-1Ch]@1

  v3 = *a1;
  v4 = a3;
  v19 = v3;
  v5 = a2;
  v6 = *((_DWORD *)v3 - 3);
  v20 = v6;
  if ( v6 == 3 )
  {
    v7 = v3;
    v8 = 3;
    v9 = "LOG";
    goto LABEL_7;
  }
  if ( v6 == 4 )
    v10 = 0;
    if ( *(_DWORD *)v3 != 1262702412 )
      v10 = 1;
    if ( !v10 )
    {
      *(_DWORD *)v5 = 0;
      *(_DWORD *)(v5 + 4) = 0;
      result = 1;
      *a3 = 1;
      return result;
    }
    goto LABEL_15;
  if ( v6 != 7 )
    if ( v6 >= 9 && !j_memcmp_0(v3, "MANIFEST-", 9u) )
      v19 = (char *)v3 + 9;
      v20 = v6 - 9;
      v16 = j_leveldb::ConsumeDecimalNumber((int)&v19, (int)&v18);
      v17 = v16 == 1;
      if ( v16 == 1 )
        v17 = v20 == 0;
      if ( v17 )
      {
        v15 = 3;
        goto LABEL_36;
      }
      return 0;
LABEL_15:
    if ( j_leveldb::ConsumeDecimalNumber((int)&v19, (int)&v18) == 1 )
      if ( v20 == 6 )
        if ( !j_memcmp_0(v19, ".dbtmp", 6u) )
        {
          v15 = 5;
          goto LABEL_36;
        }
      else if ( v20 == 4 )
        v12 = 0;
        v13 = 0;
        if ( *(_DWORD *)v19 != 1735355438 )
          v13 = 1;
        if ( !v13 )
          *v4 = 0;
          goto LABEL_39;
        if ( *(_DWORD *)v19 != 1953723182 )
          v12 = 1;
        if ( !v12 )
          goto LABEL_43;
        v14 = 0;
        if ( *(_DWORD *)v19 != 1650748462 )
          v14 = 1;
        if ( !v14 )
LABEL_43:
          v15 = 2;
LABEL_36:
          *v4 = v15;
LABEL_39:
          *(_QWORD *)v5 = *(_QWORD *)&v18;
          return 1;
    return 0;
  if ( !j_memcmp_0(v3, "CURRENT", 7u) )
    *(_DWORD *)v5 = 0;
    *(_DWORD *)(v5 + 4) = 0;
    *v4 = 4;
    return 1;
  v7 = v3;
  v8 = 7;
  v9 = "LOG.old";
LABEL_7:
  if ( j_memcmp_0(v7, v9, v8) )
  *(_DWORD *)v5 = 0;
  *(_DWORD *)(v5 + 4) = 0;
  *v4 = 6;
  return 1;
}


void __fastcall leveldb::PosixLogger::~PosixLogger(leveldb::PosixLogger *this)
{
  leveldb::Logger *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_27260C0;
  j_fclose(*((FILE **)this + 1));
  j_leveldb::Logger::~Logger(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


const void **__fastcall leveldb::AppendInternalKey(const void **a1, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r4@1
  const void **v3; // r5@1
  __int64 v4; // r2@1

  v2 = a2;
  v3 = a1;
  sub_21E7408(a1, (char *)*a2, *a2 >> 32);
  HIDWORD(v4) = (signed __int64)v2[1] >> 24;
  LODWORD(v4) = *((_DWORD *)v2 + 4) | (*((_DWORD *)v2 + 2) << 8);
  return j_j_j__ZN7leveldb10PutFixed64EPSsy_0(v3, *((_DWORD *)v2 + 3) << 8, v4);
}


void __fastcall leveldb::log::Writer::AddRecord(_DWORD *a1, int a2, unsigned __int64 *a3)
{
  unsigned int v3; // r5@1
  unsigned int v4; // r6@1
  _DWORD *v5; // r11@1
  int v6; // r4@1
  char v7; // r9@1
  int v8; // r1@2
  void (__fastcall *v9)(void **); // r3@4
  char *v10; // r8@7
  signed int v11; // r0@7
  int v12; // r2@13
  const char *v13; // r1@17
  void *v14; // r7@18
  leveldb::Status *v15; // r0@18
  leveldb::Status *v16; // [sp+4h] [bp-34h]@17
  void *v17; // [sp+8h] [bp-30h]@4
  int v18; // [sp+Ch] [bp-2Ch]@4
  void *ptr; // [sp+10h] [bp-28h]@4

  v3 = *a3 >> 32;
  v4 = *a3;
  v5 = a1;
  v6 = a2;
  v7 = 1;
  *a1 = 0;
  do
  {
    v8 = *(_DWORD *)(v6 + 4);
    if ( 0x8000 - v8 <= 6 )
    {
      if ( 0x8000 - v8 >= 1 )
      {
        v9 = *(void (__fastcall **)(void **))(**(_DWORD **)v6 + 8);
        v17 = &unk_262EBB8;
        v18 = 0x8000 - v8;
        v9(&ptr);
        if ( ptr )
          j_operator delete[](ptr);
      }
      v8 = 0;
      *(_DWORD *)(v6 + 4) = 0;
    }
    v10 = (char *)(32761 - v8);
    v11 = 3;
    if ( v3 < 32761 - v8 )
      v10 = (char *)v3;
    if ( (char *)v3 == v10 )
      v11 = 4;
    if ( v7 & 1 )
      v11 = 2;
    v12 = v11;
      v12 = 1;
    if ( !(v7 & 1) )
      v12 = v11;
    j_leveldb::log::Writer::EmitPhysicalRecord((int)&v16, v6, v12, v4, v10);
    if ( v16 )
      v14 = j_leveldb::Status::CopyState(v16, v13);
      v15 = v16;
      *v5 = v14;
      if ( v15 )
        j_operator delete[]((void *)v15);
    else
      v14 = 0;
      break;
    v3 -= (unsigned int)v10;
    v4 += (unsigned int)v10;
    v7 = 0;
  }
  while ( !v14 );
}


void __fastcall leveldb::TableBuilder::Flush(leveldb::TableBuilder *this, const char *a2)
{
  leveldb::TableBuilder::Flush(this, a2);
}


void __fastcall leveldb::InternalFilterPolicy::~InternalFilterPolicy(leveldb::InternalFilterPolicy *this)
{
  leveldb::InternalFilterPolicy::~InternalFilterPolicy(this);
}


int __fastcall leveldb::DBImpl::MaybeScheduleCompaction(leveldb::DBImpl *this)
{
  leveldb::DBImpl *v1; // r4@1
  int result; // r0@1
  int v3; // r6@2
  int v4; // r6@4
  int v5; // r0@6

  v1 = this;
  result = *((_BYTE *)this + 1264);
  if ( !result )
  {
    v3 = *((_DWORD *)v1 + 279);
    result = vFFFF0FA0();
    if ( !v3 )
    {
      if ( *((_DWORD *)v1 + 283) || (v4 = *((_DWORD *)v1 + 317), result = vFFFF0FA0(), !v4) )
      {
        result = *((_DWORD *)v1 + 320);
        if ( !result )
        {
          v5 = *((_DWORD *)v1 + 283);
          _ZF = v5 == 0;
          if ( !v5 )
            _ZF = *((_DWORD *)v1 + 318) == 0;
          if ( !_ZF )
            goto LABEL_15;
          __asm { VMOV.F64        D0, #1.0 }
          _R0 = *(_DWORD *)(*((_DWORD *)v1 + 319) + 200);
          __asm
          {
            VLDR            D1, [R0,#0x70]
            VCMPE.F64       D1, D0
            VMRS            APSR_nzcv, FPSCR
          }
          if ( !(_NF ^ _VF) || (result = *(_DWORD *)(_R0 + 100)) != 0 )
LABEL_15:
            *((_BYTE *)v1 + 1264) = 1;
            result = (*(int (**)(void))(**((_DWORD **)v1 + 1) + 60))();
        }
      }
    }
  }
  return result;
}


int __fastcall leveldb::Version::LevelFileNumIterator::Next(int result)
{
  ++*(_DWORD *)(result + 32);
  return result;
}


void __fastcall leveldb::Iterator::~Iterator(leveldb::Iterator *this)
{
  leveldb::Iterator *v1; // r4@1
  void (__fastcall *v2)(_DWORD, _DWORD); // r2@1
  int v3; // r5@2
  int v4; // r6@3

  v1 = this;
  *(_DWORD *)this = &off_2725D40;
  v2 = (void (__fastcall *)(_DWORD, _DWORD))*((_DWORD *)this + 1);
  if ( v2 )
  {
    v2(*((_QWORD *)this + 1), *((_QWORD *)this + 1) >> 32);
    v3 = *((_DWORD *)v1 + 4);
    if ( v3 )
    {
      do
      {
        ((void (__fastcall *)(_DWORD, _DWORD))*(_QWORD *)v3)(*(_QWORD *)v3 >> 32, *(_DWORD *)(v3 + 8));
        v4 = *(_DWORD *)(v3 + 12);
        j_operator delete((void *)v3);
        v3 = v4;
      }
      while ( v4 );
    }
  }
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall leveldb::Table::ReadFilter(int a1, __int64 *a2)
{
  int v2; // r4@1
  void *v3; // r0@1
  __int64 v4; // r2@2
  int v5; // r5@6
  void *v6; // r0@8
  void *ptr; // [sp+8h] [bp-48h]@4
  void *v8; // [sp+Ch] [bp-44h]@4
  int v9; // [sp+10h] [bp-40h]@4
  char v10; // [sp+15h] [bp-3Bh]@6
  char v11; // [sp+18h] [bp-38h]@2
  char v12; // [sp+19h] [bp-37h]@2
  int v13; // [sp+1Ch] [bp-34h]@2
  int v14; // [sp+20h] [bp-30h]@2
  void *v15; // [sp+24h] [bp-2Ch]@1
  int v16; // [sp+28h] [bp-28h]@1
  signed int v17; // [sp+2Ch] [bp-24h]@1
  signed int v18; // [sp+30h] [bp-20h]@1
  signed int v19; // [sp+34h] [bp-1Ch]@1
  __int64 v20; // [sp+38h] [bp-18h]@1

  v2 = a1;
  v20 = *a2;
  v18 = -1;
  v19 = -1;
  v16 = -1;
  v17 = -1;
  j_leveldb::BlockHandle::DecodeFrom(&v15, &v16, (int)&v20);
  v3 = v15;
  if ( v15 )
    goto LABEL_11;
  v11 = 0;
  v12 = 1;
  v13 = 0;
  v14 = 0;
  LODWORD(v4) = *(_DWORD *)v2;
  HIDWORD(v4) = &v11;
  if ( *(_BYTE *)(*(_DWORD *)v2 + 6) )
    v11 = 1;
  v8 = &unk_257BC67;
  v9 = 0;
  j_leveldb::ReadBlock(&ptr, *(_DWORD *)(v4 + 1076), v4, (int)&v16, (int)&v8);
  v3 = ptr;
  if ( ptr )
  {
LABEL_11:
    j_operator delete[](v3);
  }
  else
    v5 = *(_DWORD *)v2;
    if ( v10 )
      *(_DWORD *)(v5 + 1092) = v8;
    v6 = j_operator new(0x14u);
    *(_DWORD *)(*(_DWORD *)v2 + 1088) = j_leveldb::FilterBlockReader::FilterBlockReader(
                                          (int)v6,
                                          *(_DWORD *)(v5 + 1068),
                                          (int)&v8);
}


int __fastcall leveldb::GetLengthPrefixedSlice(_BYTE *a1, unsigned int a2, int a3)
{
  _BYTE *v3; // r0@2
  int v4; // r12@2
  int v5; // t1@2
  int v6; // r7@3
  int v7; // r5@3
  int v8; // lr@3
  char v9; // r4@4
  bool v10; // cf@4
  int v11; // r3@7
  int v12; // t1@7

  if ( (unsigned int)a1 >= a2 )
    return 0;
  v5 = *a1;
  v3 = a1 + 1;
  v4 = v5;
  if ( v5 & 0x80 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = v7 + 7;
      v10 = (unsigned int)(v7 + 7) >= 0x1C;
      if ( (unsigned int)(v7 + 7) <= 0x1C )
        v10 = (unsigned int)v3 >= a2;
      if ( v10 )
        return v8;
      v12 = *v3++;
      v11 = v12;
      v6 |= (v4 & 0x7F) << v7;
      LOBYTE(v4) = v12;
      v7 += 7;
      if ( !(v12 & 0x80) )
      {
        v4 = (v11 << v9) | v6;
        break;
      }
    }
  }
  v8 = (int)&v3[v4];
  if ( (unsigned int)&v3[v4] > a2 )
  *(_DWORD *)a3 = v3;
  *(_DWORD *)(a3 + 4) = v4;
  return v8;
}


int __fastcall leveldb::WriteBatchInternal::Sequence(leveldb::WriteBatchInternal *this, const leveldb::WriteBatch *a2)
{
  int *v2; // r1@1
  int result; // r0@1
  int v4; // r1@1

  v2 = *(int **)this;
  result = **(_DWORD **)this;
  v4 = v2[1];
  return result;
}


const void **__fastcall leveldb::Footer::EncodeTo(signed __int64 *a1, const void **a2)
{
  signed __int64 *v2; // r5@1
  const void **v3; // r4@1
  int v4; // r1@1
  int v5; // r1@1
  int v6; // r1@1

  v2 = a1;
  v3 = a2;
  j_leveldb::PutVarint64(a2, (int)a2, *a1);
  j_leveldb::PutVarint64(v3, v4, v2[1]);
  j_leveldb::PutVarint64(v3, v5, v2[2]);
  j_leveldb::PutVarint64(v3, v6, v2[3]);
  sub_21E849C((char *)v3, 0x28u, 0);
  j_leveldb::PutFixed32(v3, -1954481321);
  return j_j_j__ZN7leveldb10PutFixed32EPSsj_0(v3, -616073948);
}


signed int __fastcall leveldb::ConsumeDecimalNumber(int a1, int a2)
{
  int v2; // r2@1
  signed int v3; // r12@1
  int v4; // r10@2
  int v5; // r3@2
  unsigned int v6; // lr@2
  unsigned int v7; // r5@2
  int v8; // r7@2
  signed int v9; // r11@2
  unsigned int v10; // r6@3
  signed int v11; // r4@4
  signed int v12; // r2@6
  int v13; // r2@13
  signed int result; // r0@20

  v2 = *(_DWORD *)(a1 + 4);
  v3 = 0;
  if ( v2 )
  {
    v4 = *(_DWORD *)a1;
    v5 = v2 - 1;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      v10 = *(_BYTE *)(v4 + v8) - 48;
      if ( (unsigned __int8)v10 > 9u )
      {
        v13 = v8;
        goto LABEL_17;
      }
      v11 = 0;
      if ( v7 > 0x19999999 )
        v11 = 1;
      v12 = 0;
      if ( v6 > 0x99999999 )
        v12 = 1;
      if ( v7 != 429496729 )
        v12 = v11;
      if ( v12 )
        goto LABEL_20;
      if ( !(v7 ^ 0x19999999 | v6 ^ 0x99999999) && v10 > 5 )
        break;
      v13 = v8 + 1;
      *(_DWORD *)a1 = v8 + v4 + 1;
      *(_DWORD *)(a1 + 4) = v5--;
      ++v8;
      v7 = (__PAIR__((10 * (unsigned __int64)v6 >> 32) + 10 * v7, 10 * v6) + (signed int)v10) >> 32;
      v6 = 10 * v6 + v10;
      if ( v5 == -1 )
    }
    result = 0;
  }
  else
    v13 = 0;
LABEL_17:
    *(_DWORD *)a2 = v6;
    *(_DWORD *)(a2 + 4) = v7;
    if ( v13 > 0 )
      v3 = 1;
    v9 = v3;
LABEL_20:
    result = v9;
  return result;
}


signed int __fastcall leveldb::Version::LevelFileNumIterator::Valid(leveldb::Version::LevelFileNumIterator *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *(_QWORD *)((char *)this + 28);
  result = 0;
  if ( HIDWORD(v1) < (signed int)((*(_QWORD *)v1 >> 32) - *(_QWORD *)v1) >> 2 )
    result = 1;
  return result;
}


RakNet *__fastcall leveldb::AppendEscapedStringTo(const void **a1, int a2)
{
  const void **v2; // r5@1
  int v3; // r4@1
  unsigned int v4; // r10@2
  char v5; // r6@3
  _DWORD *v6; // r0@4
  int v7; // r1@4 OVERLAPPED
  int v8; // r7@4
  unsigned int v9; // r2@4
  _DWORD *v10; // r0@7
  unsigned int v11; // r0@9
  RakNet *result; // r0@11
  int v13; // [sp+0h] [bp-38h]@2
  char s; // [sp+6h] [bp-32h]@9
  RakNet *v15; // [sp+10h] [bp-28h]@1

  v2 = a1;
  v3 = a2;
  v15 = _stack_chk_guard;
  if ( *(_DWORD *)(a2 + 4) )
  {
    v4 = 0;
    v13 = byte_26C67B8[0];
    do
    {
      v5 = *(_BYTE *)(*(_DWORD *)v3 + v4);
      if ( (unsigned __int8)(v5 - 32) > 0x5Eu )
      {
        j_snprintf(&s, 0xAu, "\\x%02x", *(_BYTE *)(*(_DWORD *)v3 + v4), v13);
        v11 = j_strlen_0(&s);
        sub_21E7408(v2, &s, v11);
      }
      else
        v6 = *v2;
        *(_QWORD *)&v7 = *(_QWORD *)((char *)*v2 - 12);
        v8 = v7 + 1;
        if ( v7 + 1 > v9 || *(v6 - 1) >= 1 )
        {
          sub_21E6FCC(v2, v7 + 1);
          v6 = *v2;
          v7 = *((_DWORD *)*v2 - 3);
        }
        *((_BYTE *)v6 + v7) = v5;
        v10 = *v2;
        if ( (int *)((char *)*v2 - 12) != &dword_28898C0 )
          *(v10 - 1) = 0;
          *(v10 - 3) = v8;
          *((_BYTE *)v10 + v8) = v13;
      ++v4;
    }
    while ( v4 < *(_DWORD *)(v3 + 4) );
  }
  result = (RakNet *)(_stack_chk_guard - v15);
  if ( _stack_chk_guard != v15 )
    j___stack_chk_fail_0((int)result);
  return result;
}


_DWORD *__fastcall leveldb::Env::NewAppendableFile(_DWORD *a1, int a2, int *a3)
{
  int v4; // [sp+0h] [bp-18h]@1
  int v5; // [sp+4h] [bp-14h]@1
  const char *v6; // [sp+8h] [bp-10h]@1
  int v7; // [sp+Ch] [bp-Ch]@1

  v6 = "NewAppendableFile";
  v7 = 17;
  v4 = *a3;
  v5 = *(_DWORD *)(v4 - 12);
  return j_leveldb::Status::Status(a1, 3, (int)&v6, (int)&v4);
}


char *__fastcall leveldb::TableBuilder::WriteBlock(int *a1, int a2, int a3)
{
  int *v3; // r10@1
  int v4; // r8@1
  leveldb::BlockBuilder *v5; // r9@1
  int v6; // r4@1
  const void **v7; // r7@1
  int v8; // r5@1
  int v9; // r3@2
  unsigned int v10; // r4@2
  __int64 v11; // r0@2 OVERLAPPED
  _DWORD *v12; // r0@2
  unsigned int v13; // r3@2
  int v14; // r2@2
  int *v15; // r0@3
  _DWORD *v17; // [sp+0h] [bp-38h]@3
  int v18; // [sp+4h] [bp-34h]@3
  void *v19; // [sp+8h] [bp-30h]@1
  int v20; // [sp+Ch] [bp-2Ch]@1
  int v21; // [sp+10h] [bp-28h]@1
  unsigned int v22; // [sp+14h] [bp-24h]@2

  v3 = a1;
  v4 = a3;
  v5 = (leveldb::BlockBuilder *)a2;
  v6 = *a1;
  j_leveldb::BlockBuilder::Finish((leveldb::BlockBuilder *)&v21, a2);
  v7 = (const void **)(v6 + 2272);
  v19 = &unk_257BC67;
  v20 = 0;
  v8 = *(_DWORD *)(v6 + 40);
  if ( v8
    && (v9 = v6 + 2272,
        v10 = v22,
        (*(void (__fastcall **)(int, int, unsigned int, int))(*(_DWORD *)v8 + 8))(v8, v21, v22, v9),
        v11 = *(_QWORD *)(v8 + 8),
        *(_DWORD *)(v8 + 8) = v11 + v10,
        *(_DWORD *)(v8 + 12) = __CFADD__((_DWORD)v11, v10) + HIDWORD(v11),
        v12 = *v7,
        *(__int64 *)((char *)&v11 + 4) = *(_QWORD *)(v8 + 16),
        v13 = *((_DWORD *)*v7 - 3),
        *(_DWORD *)(v8 + 16) = HIDWORD(v11) + v13,
        *(_DWORD *)(v8 + 20) = __CFADD__(HIDWORD(v11), v13) + v14,
        v13 < v22 - (v22 >> 3)) )
  {
    v17 = v12;
    v18 = *(v12 - 3);
    v15 = (int *)&v17;
  }
  else
    v8 = 0;
    v15 = &v21;
  *(_QWORD *)&v19 = *(_QWORD *)v15;
  j_leveldb::TableBuilder::WriteRawBlock((int)v3, (int)&v19, v8, v4);
  sub_21E7EE0(v7, 0, *((_BYTE **)*v7 - 3), 0);
  return j_leveldb::BlockBuilder::Reset(v5);
}


leveldb::WriteBatch *__fastcall leveldb::DB::Delete(int a1, int a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r4@1
  int v6; // r8@1
  int v7; // r6@1
  char v9; // [sp+4h] [bp-1Ch]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  j_leveldb::WriteBatch::WriteBatch((leveldb::WriteBatch *)&v9);
  j_leveldb::WriteBatch::Delete((const void **)&v9, v5);
  (*(void (__fastcall **)(int, int, int, char *))(*(_DWORD *)v7 + 16))(v4, v7, v6, &v9);
  return j_leveldb::WriteBatch::~WriteBatch((leveldb::WriteBatch *)&v9);
}


int __fastcall leveldb::FilterBlockBuilder::FilterBlockBuilder(int result, const leveldb::FilterPolicy *a2)
{
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = &unk_28898CC;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = &unk_28898CC;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)(result + 36) = 0;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  return result;
}


void __fastcall leveldb::PosixLogger::~PosixLogger(leveldb::PosixLogger *this)
{
  leveldb::PosixLogger::~PosixLogger(this);
}


void __fastcall leveldb::WriteStringToFile(leveldb::Status **a1, int a2, int a3, int a4)
{
  leveldb::WriteStringToFile(a1, a2, a3, a4);
}


void __fastcall leveldb::InternalKeyComparator::FindShortSuccessor(int a1, unsigned int *a2)
{
  int *v2; // r4@1
  int v3; // r5@1
  int v4; // r1@1
  int v5; // r0@1
  unsigned int v6; // r6@1
  int v7; // r0@2
  int (__cdecl *v8)(int, int *); // r3@2
  int v9; // r1@2
  void *v10; // r0@4
  unsigned int *v11; // r2@6
  signed int v12; // r1@8
  int v13; // [sp+0h] [bp-Ch]@2
  int v14; // [sp+4h] [bp-8h]@2
  int v15; // [sp+Ch] [bp+0h]@1
  int v16; // [sp+10h] [bp+4h]@1
  int v17; // [sp+14h] [bp+8h]@1

  v2 = (int *)a2;
  v3 = a1;
  v4 = *a2;
  v5 = *(_DWORD *)(v4 - 12);
  v16 = v4;
  v6 = v5 - 8;
  v17 = v5 - 8;
  sub_21E91E0((void **)&v15, v4, v5 - 8);
  (*(void (**)(void))(**(_DWORD **)(v3 + 4) + 20))();
  if ( *(_DWORD *)(v15 - 12) < v6 )
  {
    v7 = *(_DWORD *)(v3 + 4);
    v8 = *(int (__cdecl **)(int, int *))(*(_DWORD *)v7 + 8);
    v13 = v15;
    v14 = *(_DWORD *)(v15 - 12);
    if ( v8(v7, &v16) <= -1 )
    {
      j_leveldb::PutFixed64((const void **)&v15, v9, -255LL);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v2, &v15);
    }
  }
  v10 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v15 - 4);
    if ( &pthread_create )
      __dmb();
      do
      {
        v12 = __ldrex(v11);
        __strex(v12 - 1, v11);
      }
      while ( &v15 );
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
}


int __fastcall leveldb::InternalFilterPolicy::KeyMayMatch(int a1, __int64 *a2)
{
  int v2; // r0@1
  __int64 v3; // kr00_8@1
  int (__cdecl *v4)(int, int *); // r3@1
  int v6; // [sp+0h] [bp-10h]@1
  int v7; // [sp+4h] [bp-Ch]@1

  v2 = *(_DWORD *)(a1 + 4);
  v3 = *a2;
  v4 = *(int (__cdecl **)(int, int *))(*(_DWORD *)v2 + 16);
  v6 = *a2;
  v7 = HIDWORD(v3) - 8;
  return v4(v2, &v6);
}


leveldb::TableBuilder *__fastcall leveldb::TableBuilder::~TableBuilder(leveldb::TableBuilder *this)
{
  leveldb::TableBuilder *v1; // r4@1
  int v2; // r0@1
  void *v3; // r5@1
  leveldb::TableBuilder::Rep *v4; // r0@4

  v1 = this;
  v2 = *(_DWORD *)this;
  v3 = *(void **)(v2 + 2244);
  if ( v3 )
  {
    j_leveldb::FilterBlockBuilder::~FilterBlockBuilder(*(leveldb::FilterBlockBuilder **)(v2 + 2244));
    j_operator delete(v3);
    v2 = *(_DWORD *)v1;
  }
  if ( v2 )
    v4 = j_leveldb::TableBuilder::Rep::~Rep((leveldb::TableBuilder::Rep *)v2);
    j_operator delete((void *)v4);
  return v1;
}


int __fastcall leveldb::Block::Iter::key(int result, int a2)
{
  int v2; // r1@1

  v2 = *(_DWORD *)(a2 + 44);
  *(_DWORD *)result = v2;
  *(_DWORD *)(result + 4) = *(_DWORD *)(v2 - 12);
  return result;
}


RakNet *__fastcall leveldb::DescriptorFileName(int *a1, int *a2)
{
  int *v2; // r5@1
  int *v3; // r4@1
  unsigned int v4; // r0@1
  RakNet *result; // r0@1
  char s; // [sp+8h] [bp-78h]@1
  RakNet *v7; // [sp+6Ch] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  v7 = _stack_chk_guard;
  j_snprintf(&s, 0x64u, "/MANIFEST-%06llu");
  sub_21E8AF4(v2, v3);
  v4 = j_strlen_0(&s);
  sub_21E7408((const void **)v2, &s, v4);
  result = (RakNet *)(_stack_chk_guard - v7);
  if ( _stack_chk_guard != v7 )
    j___stack_chk_fail_0((int)result);
  return result;
}


int __fastcall leveldb::TableBuilder::FileSize(leveldb::TableBuilder *this)
{
  int v1; // r1@1
  int result; // r0@1
  int v3; // r1@1

  v1 = *(_DWORD *)this;
  result = *(_DWORD *)(*(_DWORD *)this + 2152);
  v3 = *(_DWORD *)(v1 + 2156);
  return result;
}


_DWORD *__fastcall leveldb::WriteBatch::Iterate(leveldb::WriteBatch *this, leveldb::WriteBatch::Handler *a2, int a3)
{
  leveldb::WriteBatch::Handler *v3; // r10@1
  int v4; // r6@1
  int v5; // r2@1
  leveldb::WriteBatch *v6; // r8@1
  unsigned int v7; // r0@1
  int *v8; // r2@2
  int *v9; // r3@2
  _BYTE *v10; // r1@3
  int v11; // r0@3
  signed int i; // r5@3
  int v13; // r2@6
  _DWORD *result; // r0@16
  void *v15; // [sp+0h] [bp-88h]@17
  int v16; // [sp+4h] [bp-84h]@17
  const char *v17; // [sp+8h] [bp-80h]@17
  int v18; // [sp+Ch] [bp-7Ch]@17
  void *v19; // [sp+10h] [bp-78h]@18
  int v20; // [sp+14h] [bp-74h]@18
  const char *v21; // [sp+18h] [bp-70h]@18
  int v22; // [sp+1Ch] [bp-6Ch]@18
  void *v23; // [sp+20h] [bp-68h]@20
  int v24; // [sp+24h] [bp-64h]@20
  const char *v25; // [sp+28h] [bp-60h]@20
  int v26; // [sp+2Ch] [bp-5Ch]@20
  void *v27; // [sp+30h] [bp-58h]@19
  int v28; // [sp+34h] [bp-54h]@19
  const char *v29; // [sp+38h] [bp-50h]@19
  int v30; // [sp+3Ch] [bp-4Ch]@19
  void *v31; // [sp+40h] [bp-48h]@3
  int v32; // [sp+44h] [bp-44h]@3
  void *v33; // [sp+48h] [bp-40h]@3
  int v34; // [sp+4Ch] [bp-3Ch]@3
  void *v35; // [sp+50h] [bp-38h]@2
  int v36; // [sp+54h] [bp-34h]@2
  const char *v37; // [sp+58h] [bp-30h]@2
  int v38; // [sp+5Ch] [bp-2Ch]@2
  _BYTE *v39; // [sp+60h] [bp-28h]@1
  int v40; // [sp+64h] [bp-24h]@1

  v3 = a2;
  v4 = a3;
  v5 = *(_DWORD *)a2;
  v6 = this;
  v39 = (_BYTE *)v5;
  v7 = *(_DWORD *)(v5 - 12);
  v40 = v7;
  if ( v7 <= 0xB )
  {
    v8 = (int *)&v37;
    v9 = (int *)&v35;
    v37 = "malformed WriteBatch (too small)";
    v38 = 32;
    v35 = &unk_257BC67;
    v36 = 0;
    return j_leveldb::Status::Status(v6, 2, (int)v8, (int)v9);
  }
  v10 = (_BYTE *)(v5 + 12);
  v11 = v7 - 12;
  i = 0;
  v39 = (_BYTE *)(v5 + 12);
  v33 = &unk_257BC67;
  v40 = v11;
  v34 = 0;
  v31 = &unk_257BC67;
  v32 = 0;
  if ( v11 )
    for ( i = 1; ; ++i )
    {
      v13 = *v10;
      v39 = v10 + 1;
      v40 = v11 - 1;
      if ( v13 )
      {
        if ( v13 != 1 )
        {
          v8 = (int *)&v21;
          v9 = (int *)&v19;
          v21 = "unknown WriteBatch tag";
          v22 = 22;
          v19 = &unk_257BC67;
          v20 = 0;
          return j_leveldb::Status::Status(v6, 2, (int)v8, (int)v9);
        }
        if ( j_leveldb::GetLengthPrefixedSlice((int)&v39, (int)&v33) != 1
          || j_leveldb::GetLengthPrefixedSlice((int)&v39, (int)&v31) != 1 )
          v8 = (int *)&v29;
          v9 = (int *)&v27;
          v29 = "bad WriteBatch Put";
          v30 = 18;
          v27 = &unk_257BC67;
          v28 = 0;
        (*(void (__fastcall **)(int, void **, void **))(*(_DWORD *)v4 + 8))(v4, &v33, &v31);
      }
      else
        if ( j_leveldb::GetLengthPrefixedSlice((int)&v39, (int)&v33) != 1 )
          v8 = (int *)&v25;
          v9 = (int *)&v23;
          v25 = "bad WriteBatch Delete";
          v26 = 21;
          v23 = &unk_257BC67;
          v24 = 0;
        (*(void (__fastcall **)(int, void **))(*(_DWORD *)v4 + 12))(v4, &v33);
      v11 = v40;
      if ( !v40 )
        v5 = *(_DWORD *)v3;
        break;
      v10 = v39;
    }
  if ( i != *(_DWORD *)(v5 + 8) )
    v8 = (int *)&v17;
    v9 = (int *)&v15;
    v17 = "WriteBatch has wrong count";
    v18 = 26;
    v15 = &unk_257BC67;
    v16 = 0;
  result = 0;
  *(_DWORD *)v6 = 0;
  return result;
}


void __fastcall leveldb::SequentialFileEncrypted::~SequentialFileEncrypted(leveldb::SequentialFileEncrypted *this)
{
  leveldb::SequentialFileEncrypted::~SequentialFileEncrypted(this);
}


RakNet *__fastcall leveldb::SSTTableFileName(int *a1, int *a2)
{
  int *v2; // r5@1
  int *v3; // r4@1
  unsigned int v4; // r0@1
  RakNet *result; // r0@1
  char s; // [sp+10h] [bp-78h]@1
  RakNet *v7; // [sp+74h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  v7 = _stack_chk_guard;
  j_snprintf(&s, 0x64u, "/%06llu.%s");
  sub_21E8AF4(v2, v3);
  v4 = j_strlen_0(&s);
  sub_21E7408((const void **)v2, &s, v4);
  result = (RakNet *)(_stack_chk_guard - v7);
  if ( _stack_chk_guard != v7 )
    j___stack_chk_fail_0((int)result);
  return result;
}


signed int __fastcall leveldb::GetVarint64(int a1, _QWORD *a2)
{
  signed int v2; // r2@1
  int v3; // r5@2
  int v4; // r4@2
  int v5; // r9@2
  unsigned int v6; // r12@2
  unsigned int v7; // r8@2
  signed int v8; // lr@2
  unsigned int v9; // r6@3
  unsigned int v10; // r7@4
  unsigned int v11; // r3@4
  bool v12; // cf@7
  signed int result; // r0@10
  unsigned int v14; // r7@11
  __int64 v15; // r2@13

  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 < 1 )
  {
    result = 0;
  }
  else
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = *(_DWORD *)a1 + v2;
    v7 = *(_DWORD *)a1 + 1;
    v8 = 0;
    while ( 1 )
    {
      v9 = *(_BYTE *)(v7 - 1);
      if ( !(v9 & 0x80) )
        break;
      v10 = v9 & 0x7F;
      v11 = v10 >> (32 - v3);
      if ( v3 - 32 >= 0 )
        v11 = v10 << (v3 - 32);
      if ( (unsigned int)(v3 + 7) <= 0x3F )
      {
        v4 |= v10 << v3;
        v5 |= v11;
        v12 = v7 >= v6;
        v3 += 7;
        ++v7;
        if ( !v12 )
          continue;
      }
      goto LABEL_14;
    }
    v14 = v9 >> (32 - v3);
    if ( v3 - 32 >= 0 )
      v14 = v9 << (v3 - 32);
    v8 = 1;
    HIDWORD(v15) = v14 | v5;
    LODWORD(v15) = (v9 << v3) | v4;
    *a2 = v15;
    *(_DWORD *)a1 = v7;
    *(_DWORD *)(a1 + 4) = v6 - v7;
LABEL_14:
    result = v8;
  return result;
}


int __fastcall leveldb::MemTableIterator::SeekToLast(leveldb::MemTableIterator *this)
{
  leveldb::MemTableIterator *v1; // r8@1
  int v2; // r4@1
  int v3; // r0@1
  int v4; // r7@3
  int v5; // r5@4
  int result; // r0@6

  v1 = this;
  v2 = *(_QWORD *)(*((_DWORD *)this + 5) + 12);
  v3 = (*(_QWORD *)(*((_DWORD *)this + 5) + 12) >> 32) - 1;
LABEL_3:
  v4 = v3 + 1;
  do
  {
    v5 = *(_DWORD *)(v2 + 4 * v4);
    vFFFF0FA0();
    if ( v5 )
    {
      v3 = v4 - 1;
      v2 = v5;
      goto LABEL_3;
    }
    --v4;
  }
  while ( v4 );
  *((_DWORD *)v1 + 6) = v2;
  result = *(_DWORD *)(*((_DWORD *)v1 + 5) + 12);
  if ( v2 == result )
    v2 = 0;
  return result;
}


leveldb::WriteBatch *__fastcall leveldb::DBImpl::BuildBatchGroup(int a1, _DWORD *a2)
{
  int v2; // r5@1
  const leveldb::WriteBatch *v3; // r2@1
  int v4; // r9@1
  leveldb::WriteBatch *v5; // r6@1
  unsigned int v6; // r4@1
  int v7; // r10@1
  int v8; // r1@1
  int v9; // r11@1
  int v10; // t1@4
  int v11; // r8@7
  leveldb::WriteBatch *v12; // r1@9
  leveldb::WriteBatch *v13; // r7@12
  int v15; // [sp+0h] [bp-30h]@5
  const leveldb::WriteBatch *v16; // [sp+4h] [bp-2Ch]@3
  _DWORD *v17; // [sp+8h] [bp-28h]@1

  v2 = a1;
  v17 = a2;
  v3 = (const leveldb::WriteBatch *)0x100000;
  v4 = **(_DWORD **)(a1 + 1168);
  v5 = *(leveldb::WriteBatch **)(v4 + 4);
  v6 = *(_DWORD *)(*(_DWORD *)v5 - 12);
  *a2 = v4;
  v7 = *(_DWORD *)(a1 + 1176);
  v8 = *(_DWORD *)(a1 + 1180);
  v9 = *(_DWORD *)(a1 + 1168) + 4;
  if ( v6 <= 0x20000 )
    v3 = (const leveldb::WriteBatch *)(v6 + 0x20000);
  v16 = v3;
  if ( v9 == v7 )
  {
    v10 = *(_DWORD *)(v8 + 4);
    v8 += 4;
    v9 = v10;
    v7 = v10 + 512;
  }
  v15 = v8;
  while ( v9 != *(_DWORD *)(v2 + 1184) )
    v11 = *(_DWORD *)v9;
    if ( *(_BYTE *)(*(_DWORD *)v9 + 8) )
    {
      if ( !*(_BYTE *)(v4 + 8) )
        break;
    }
    v12 = *(leveldb::WriteBatch **)(v11 + 4);
    if ( v12 )
      v6 += *(_DWORD *)(*(_DWORD *)v12 - 12);
      if ( v6 > (unsigned int)v16 )
        return v5;
      if ( v5 == *(leveldb::WriteBatch **)(v4 + 4) )
      {
        v13 = *(leveldb::WriteBatch **)(v2 + 1200);
        j_leveldb::WriteBatchInternal::Append(*(leveldb::WriteBatchInternal **)(v2 + 1200), v5, v3);
        v12 = *(leveldb::WriteBatch **)(v11 + 4);
        v5 = v13;
      }
      j_leveldb::WriteBatchInternal::Append(v5, v12, v3);
    v9 += 4;
    *v17 = v11;
    if ( v7 == v9 )
      v9 = *(_DWORD *)(v15 + 4);
      v15 += 4;
      v7 = v9 + 512;
  return v5;
}


const void **__fastcall leveldb::CurrentFileName(int *a1, int *a2)
{
  int *v2; // r0@1

  v2 = sub_21E8AF4(a1, a2);
  return sub_21E7408((const void **)v2, "/CURRENT", 8u);
}


_DWORD *__fastcall leveldb::BlockHandle::DecodeFrom(_DWORD *a1, _QWORD *a2, int a3)
{
  int v3; // r5@1
  _DWORD *v4; // r4@1
  _QWORD *v5; // r6@1
  _DWORD *result; // r0@3
  void *v7; // [sp+0h] [bp-20h]@4
  int v8; // [sp+4h] [bp-1Ch]@4
  const char *v9; // [sp+8h] [bp-18h]@4
  int v10; // [sp+Ch] [bp-14h]@4

  v3 = a3;
  v4 = a1;
  v5 = a2;
  if ( j_leveldb::GetVarint64(a3, a2) != 1 || j_leveldb::GetVarint64(v3, v5 + 1) != 1 )
  {
    v9 = "bad block handle";
    v10 = 16;
    v7 = &unk_257BC67;
    v8 = 0;
    result = j_leveldb::Status::Status(v4, 2, (int)&v9, (int)&v7);
  }
  else
    result = 0;
    *v4 = 0;
  return result;
}


RakNet *__fastcall leveldb::Table::Open(_DWORD *a1, int a2, int a3, int a4, __int64 a5, _DWORD *a6)
{
  _DWORD *v6; // r4@1
  int v7; // r6@1
  signed int v8; // r3@1
  int v9; // r10@1
  int v10; // r2@1 OVERLAPPED
  signed int v11; // r1@4
  void *v12; // r1@7
  void *v13; // r1@8
  void *v14; // r1@8
  void *v15; // r0@8
  leveldb::Status *v16; // r1@9
  leveldb::Status *v17; // r1@22
  void *v18; // r0@22
  void *v19; // r8@33
  leveldb *v20; // r9@35
  signed int v21; // r1@35
  signed int v22; // r2@35
  signed int v23; // r3@35
  int v24; // r12@35
  int v25; // r0@35
  int v26; // r0@36
  int v27; // r1@36
  int v28; // r2@38
  _DWORD *v29; // r0@38
  void *v30; // r0@40
  RakNet *result; // r0@43
  leveldb::Status *v32; // [sp+10h] [bp-B8h]@22
  char v33; // [sp+14h] [bp-B4h]@20
  char v34; // [sp+15h] [bp-B3h]@20
  int v35; // [sp+18h] [bp-B0h]@20
  int v36; // [sp+1Ch] [bp-ACh]@20
  void *v37; // [sp+20h] [bp-A8h]@20
  int v38; // [sp+24h] [bp-A4h]@20
  leveldb::Status *v39; // [sp+2Ch] [bp-9Ch]@9
  int v40; // [sp+30h] [bp-98h]@9
  signed int v41; // [sp+34h] [bp-94h]@9
  signed int v42; // [sp+38h] [bp-90h]@9
  signed int v43; // [sp+3Ch] [bp-8Ch]@9
  signed int v44; // [sp+40h] [bp-88h]@9
  signed int v45; // [sp+44h] [bp-84h]@9
  signed int v46; // [sp+48h] [bp-80h]@9
  signed int v47; // [sp+4Ch] [bp-7Ch]@9
  void *ptr; // [sp+54h] [bp-74h]@8
  __int64 v49; // [sp+58h] [bp-70h]@8
  __int64 v50; // [sp+60h] [bp-68h]@7
  const char *v51; // [sp+68h] [bp-60h]@7
  int v52; // [sp+6Ch] [bp-5Ch]@7
  RakNet *v53; // [sp+A0h] [bp-28h]@1

  v6 = a1;
  v7 = a3;
  v8 = 0;
  v9 = a2;
  v53 = _stack_chk_guard;
  v10 = 0;
  *a6 = 0;
  if ( (unsigned int)a5 > 0x2F )
    v8 = 1;
  if ( HIDWORD(a5) )
    v11 = 1;
  else
    v11 = v8;
  if ( v11 )
  {
    v13 = &unk_257BC67;
    v49 = *(_QWORD *)(&v10 - 1);
    (*(void (__fastcall **)(void **, int, _DWORD, _DWORD))(*(_DWORD *)v7 + 8))(
      &ptr,
      v7,
      a5 - 48,
      (unsigned __int64)(a5 - 48) >> 32);
    v15 = ptr;
    if ( ptr )
      goto LABEL_48;
    v46 = -1;
    v47 = -1;
    v44 = -1;
    v45 = -1;
    v42 = -1;
    v43 = -1;
    v40 = -1;
    v41 = -1;
    j_leveldb::Footer::DecodeFrom(&v39, &v40, (int)&v49);
    v16 = v39;
    if ( ptr == (void *)v39 )
    {
      v14 = ptr;
    }
    else
      if ( ptr )
      {
        j_operator delete[](ptr);
        v16 = v39;
      }
      if ( v16 )
        v15 = j_leveldb::Status::CopyState(v16, (const char *)v16);
        v14 = (void *)v39;
      else
        v14 = 0;
        v15 = 0;
      ptr = v15;
    if ( v14 )
      j_operator delete[](v14);
      v15 = ptr;
    if ( v15 )
    v33 = 0;
    v37 = &unk_257BC67;
    v38 = 0;
    v34 = 1;
    v35 = 0;
    v36 = 0;
    if ( *(_BYTE *)(v9 + 6) )
      v33 = 1;
    j_leveldb::ReadBlock(&v32, v7, __PAIR__(&v33, v9), (int)&v44, (int)&v37);
    v17 = v32;
    v18 = ptr;
    if ( ptr == (void *)v32 )
        v17 = v32;
      if ( v17 )
        v18 = j_leveldb::Status::CopyState(v17, (const char *)v17);
        v14 = (void *)v32;
        v18 = 0;
      ptr = v18;
      v18 = ptr;
    if ( !v18 )
      v19 = j_operator new(0x10u);
      j_leveldb::Block::Block((int)v19, (int)&v37);
        j_leveldb::Block::~Block((int)v19);
        j_operator delete(v19);
        v20 = (leveldb *)j_operator new(0x460u);
        j_leveldb::Options::Options(v20);
        *((_DWORD *)v20 + 268) = 0;
        j___aeabi_memcpy4_0((int)v20, v9, 1072);
        *((_DWORD *)v20 + 269) = v7;
        v21 = v41;
        v22 = v42;
        v23 = v43;
        v24 = (int)v20 + 1096;
        *(_DWORD *)v24 = v40;
        *(_DWORD *)(v24 + 4) = v21;
        *(_DWORD *)(v24 + 8) = v22;
        *(_DWORD *)(v24 + 12) = v23;
        *(_DWORD *)(v24 + 16) = v19;
        v25 = *(_DWORD *)(v9 + 24);
        if ( v25 )
        {
          v26 = (*(int (**)(void))(*(_DWORD *)v25 + 28))();
        }
        else
          v26 = 0;
          v27 = 0;
        v28 = (int)v20 + 1080;
        *(_DWORD *)v28 = v26;
        *(_DWORD *)(v28 + 4) = v27;
        *(_DWORD *)(v28 + 8) = 0;
        *((_DWORD *)v20 + 273) = 0;
        v29 = j_operator new(4u);
        *v29 = v20;
        *a6 = v29;
        j_leveldb::Table::ReadMeta((int)v29, (int)&v40);
LABEL_48:
      v30 = j_leveldb::Status::CopyState((leveldb::Status *)v15, (const char *)v14);
      v30 = 0;
    *v6 = v30;
      j_operator delete[](ptr);
  }
    v51 = "file is too short to be an sstable";
    v12 = &unk_257BC67;
    v52 = 34;
    v50 = *(_QWORD *)(&v10 - 1);
    j_leveldb::Status::Status(a1, 2, (int)&v51, (int)&v50);
  result = (RakNet *)(_stack_chk_guard - v53);
  if ( _stack_chk_guard != v53 )
    j___stack_chk_fail_0((int)result);
  return result;
}


RakNet *__fastcall leveldb::PutVarint64(const void **a1, int a2, signed __int64 a3)
{
  signed int v3; // r12@1
  char *v4; // r12@6
  int v5; // lr@7
  bool v6; // zf@7
  RakNet *result; // r0@11
  char v8; // [sp+2h] [bp-16h]@6
  RakNet *v9; // [sp+Ch] [bp-Ch]@1

  v3 = 0;
  v9 = _stack_chk_guard;
  if ( (unsigned int)a3 < 0x80 )
    v3 = 1;
  if ( HIDWORD(a3) )
    v3 = 0;
  if ( v3 )
  {
    v4 = &v8;
    LOBYTE(v5) = a3;
  }
  else
    do
    {
      *v4++ = a3 | 0x80;
      v5 = a3 >> 7;
      LODWORD(a3) = (unsigned __int64)(a3 >> 14) | (HIDWORD(a3) >> 14);
      HIDWORD(a3) >>= 7;
      v6 = (_DWORD)a3 == 0;
      LODWORD(a3) = v5;
    }
    while ( !v6 );
  *v4 = v5;
  sub_21E7408(a1, &v8, v4 + 1 - &v8);
  result = (RakNet *)(_stack_chk_guard - v9);
  if ( _stack_chk_guard != v9 )
    j___stack_chk_fail_0((int)result);
  return result;
}


int __fastcall leveldb::Env::Default(leveldb::Env *this)
{
  j_pthread_once((pthread_once_t *)&unk_28392C4, (void (*)(void))sub_1B48F38);
  return dword_28392C8;
}


void __fastcall leveldb::TableBuilder::Flush(leveldb::TableBuilder *this, const char *a2)
{
  int *v2; // r4@1
  int v3; // r5@1
  leveldb::Status *v4; // r0@1
  void *v5; // r0@2
  const char *v6; // r1@5
  leveldb::Status *v7; // r0@5
  void *v8; // r0@6
  leveldb::Status *v9; // r1@7
  void *v10; // r0@8
  void *v11; // r0@12
  leveldb::FilterBlockBuilder *v12; // r0@17
  void *ptr; // [sp+4h] [bp-14h]@8

  v2 = (int *)this;
  v3 = *(_DWORD *)this;
  v4 = *(leveldb::Status **)(*(_DWORD *)this + 2160);
  if ( v4 && (v5 = j_leveldb::Status::CopyState(v4, a2)) != 0 )
  {
    j_j_j__ZdaPv_4(v5);
  }
  else if ( *(_DWORD *)(*(_DWORD *)(v3 + 2168) - 12) )
    j_leveldb::TableBuilder::WriteBlock(v2, v3 + 2164, v3 + 2256);
    v7 = *(leveldb::Status **)(*v2 + 2160);
    if ( v7 && (v8 = j_leveldb::Status::CopyState(v7, v6)) != 0 )
    {
      j_operator delete[](v8);
    }
    else
      *(_BYTE *)(v3 + 2248) = 1;
      (*(void (__fastcall **)(void **))(**(_DWORD **)(v3 + 2144) + 16))(&ptr);
      v10 = *(void **)(v3 + 2160);
      v9 = (leveldb::Status *)ptr;
      if ( v10 != ptr )
      {
        if ( v10 )
        {
          j_operator delete[](v10);
          v9 = (leveldb::Status *)ptr;
        }
        if ( v9 )
          v11 = j_leveldb::Status::CopyState(v9, (const char *)v9);
        else
          v11 = 0;
        *(_DWORD *)(v3 + 2160) = v11;
        v10 = ptr;
      }
      if ( v10 )
        j_operator delete[](v10);
    v12 = *(leveldb::FilterBlockBuilder **)(v3 + 2244);
    if ( v12 )
      j_leveldb::FilterBlockBuilder::StartBlock(v12, (int)v9, *(_QWORD *)(v3 + 2152));
}


void __fastcall leveldb::MemTableIterator::Seek(int result, int a2)
{
  leveldb::MemTableIterator::Seek(result, a2);
}


int __fastcall leveldb::DBImpl::FinishCompactionOutputFile(leveldb::Status **a1, int a2, int a3, int a4)
{
  int v4; // r11@1
  int v5; // r7@1
  leveldb::Status **v6; // r4@1
  unsigned __int64 v7; // kr08_8@1
  int v8; // r0@1
  unsigned int v9; // r1@1
  int v10; // r6@1
  leveldb::Status *v11; // r0@3
  leveldb::Status *v12; // r1@3
  leveldb::Status *v13; // r1@7
  int v14; // r5@12
  int v15; // r0@12
  unsigned int v16; // r1@12
  unsigned int v17; // r8@12
  leveldb::TableBuilder *v18; // r0@12
  leveldb::TableBuilder *v19; // r0@13
  void *v20; // r0@15
  leveldb::Status *v21; // r1@15
  leveldb::Status *v22; // r1@19
  leveldb::Status *v23; // r0@26
  leveldb::Status *v24; // r1@26
  leveldb::Status *v25; // r1@30
  int v26; // r0@35
  int result; // r0@37
  char *v28; // r0@39
  leveldb::Iterator *v29; // r9@39
  leveldb::Status *v30; // r0@39
  leveldb::Status *v31; // r1@39
  leveldb::Status *v32; // r1@43
  __int64 v33; // r2@50
  unsigned int v34; // [sp+1Ch] [bp-44h]@1
  leveldb::Status *v35; // [sp+20h] [bp-40h]@39
  char v36; // [sp+24h] [bp-3Ch]@39
  char v37; // [sp+25h] [bp-3Bh]@39
  int v38; // [sp+28h] [bp-38h]@39
  int v39; // [sp+2Ch] [bp-34h]@39
  leveldb::Status *v40; // [sp+30h] [bp-30h]@26
  leveldb::Status *v41; // [sp+34h] [bp-2Ch]@15
  leveldb::Status *v42; // [sp+38h] [bp-28h]@3

  v4 = a2;
  v5 = a3;
  v6 = a1;
  v7 = *(_QWORD *)(*(_DWORD *)(a3 + 20) - 24);
  (*(void (__fastcall **)(leveldb::Status **, int))(*(_DWORD *)a4 + 40))(a1, a4);
  v8 = j_leveldb::TableBuilder::NumEntries(*(leveldb::TableBuilder **)(v5 + 32));
  v34 = v9;
  v10 = v8;
  if ( *v6 )
  {
    j_leveldb::TableBuilder::Abandon(*(leveldb::TableBuilder **)(v5 + 32));
  }
  else
    j_leveldb::TableBuilder::Finish((leveldb::TableBuilder *)&v42, *(leveldb::TableBuilder **)(v5 + 32));
    v11 = *v6;
    v12 = v42;
    if ( *v6 != v42 )
    {
      if ( v11 )
      {
        j_operator delete[]((void *)v11);
        v12 = v42;
      }
      if ( v12 )
        v13 = (leveldb::Status *)j_leveldb::Status::CopyState(v12, (const char *)v12);
        v11 = v42;
      else
        v11 = 0;
        v13 = 0;
      *v6 = v13;
    }
    if ( v11 )
      j_operator delete[]((void *)v11);
  v14 = j_leveldb::TableBuilder::FileSize(*(leveldb::TableBuilder **)(v5 + 32));
  v15 = *(_DWORD *)(v5 + 20);
  v17 = v16;
  *(_DWORD *)(v15 - 16) = v14;
  *(_DWORD *)(v15 - 12) = v16;
  *(_QWORD *)(v5 + 40) += __PAIR__(v16, v14);
  v18 = *(leveldb::TableBuilder **)(v5 + 32);
  if ( v18 )
    v19 = j_leveldb::TableBuilder::~TableBuilder(v18);
    j_operator delete((void *)v19);
  *(_DWORD *)(v5 + 32) = 0;
  if ( !*v6 )
    (*(void (__fastcall **)(leveldb::Status **))(**(_DWORD **)(v5 + 28) + 20))(&v41);
    v20 = (void *)*v6;
    v21 = v41;
    if ( *v6 == v41 )
      v22 = *v6;
    else
      if ( v20 )
        j_operator delete[](v20);
        v21 = v41;
      if ( v21 )
        v20 = j_leveldb::Status::CopyState(v21, (const char *)v21);
        v22 = v41;
        v22 = 0;
        v20 = 0;
      *v6 = (leveldb::Status *)v20;
    if ( v22 )
      j_operator delete[]((void *)v22);
      v20 = (void *)*v6;
    if ( !v20 )
      (*(void (__fastcall **)(leveldb::Status **))(**(_DWORD **)(v5 + 28) + 12))(&v40);
      v23 = *v6;
      v24 = v40;
      if ( *v6 != v40 )
        if ( v23 )
        {
          j_operator delete[]((void *)v23);
          v24 = v40;
        }
        if ( v24 )
          v25 = (leveldb::Status *)j_leveldb::Status::CopyState(v24, (const char *)v24);
          v23 = v40;
        else
          v23 = 0;
          v25 = 0;
        *v6 = v25;
      if ( v23 )
        j_operator delete[]((void *)v23);
  v26 = *(_DWORD *)(v5 + 28);
  if ( v26 )
    (*(void (**)(void))(*(_DWORD *)v26 + 4))();
  *(_DWORD *)(v5 + 28) = 0;
  result = v34 | v10;
  if ( __PAIR__(v34, v10) )
    result = (int)*v6;
    if ( !*v6 )
      v28 = *(char **)(v4 + 1104);
      v36 = 0;
      v37 = 1;
      v38 = 0;
      v39 = 0;
      v29 = j_leveldb::TableCache::NewIterator(v28, (int)&v36, v7, __PAIR__(v17, v14), 0);
      (*(void (__fastcall **)(leveldb::Status **, leveldb::Iterator *))(*(_DWORD *)v29 + 40))(&v35, v29);
      v30 = *v6;
      v31 = v35;
      if ( *v6 != v35 )
        if ( v30 )
          j_operator delete[]((void *)v30);
          v31 = v35;
        if ( v31 )
          v32 = (leveldb::Status *)j_leveldb::Status::CopyState(v31, (const char *)v31);
          v30 = v35;
          v30 = 0;
          v32 = 0;
        *v6 = v32;
      if ( v30 )
        j_operator delete[]((void *)v30);
      if ( v29 )
        (*(void (__fastcall **)(leveldb::Iterator *))(*(_DWORD *)v29 + 4))(v29);
      result = (int)*v6;
      HIDWORD(v33) = HIDWORD(v7);
      if ( !*v6 )
        LODWORD(v33) = v7;
        result = j_leveldb::Log(
                   *(leveldb **)(v4 + 36),
                   (leveldb::Logger *)"Generated table #%llu@%d: %lld keys, %lld bytes",
                   v33,
                   **(_DWORD **)v5);
  return result;
}


void __fastcall leveldb::Version::Get(void **a1, int a2, int a3, int a4, int a5, int a6)
{
  int *v6; // r6@1
  int *v7; // r7@1
  int *v8; // r8@1
  __int64 v9; // kr00_8@1
  int *v10; // r5@1
  int *v11; // r4@1
  int v12; // r9@1
  unsigned int v13; // r2@1
  int v14; // r10@2
  int v15; // r10@2
  int v16; // r11@2
  int v17; // t1@2
  signed int v18; // r0@2
  unsigned int v19; // r11@3
  unsigned int v20; // r7@4
  unsigned int v21; // r4@4
  int v22; // r8@4
  int i; // r0@4
  int v24; // r0@11
  int v25; // r0@11
  int (__fastcall *v26)(int, int *, int *); // r3@11
  int v27; // r1@11
  unsigned int v28; // r0@11
  unsigned int v29; // r8@11
  signed int v30; // r10@16
  char *v31; // r0@16
  int *v32; // r1@16
  char *v33; // r5@16
  int *v34; // r4@17
  unsigned int v35; // r10@20
  int v36; // r5@23
  int v37; // r11@24
  int (__fastcall *v38)(int, int *, int *); // r3@24
  int v39; // r0@24
  int (__fastcall *v40)(int, int *, int *); // r3@25
  int v41; // r0@25
  int *v42; // r6@28
  signed int v43; // r5@28
  int v44; // r4@28
  unsigned int v45; // r0@28
  unsigned int v46; // r1@30
  unsigned int v47; // r8@30
  int v48; // r11@39
  unsigned int v49; // r1@45
  int v50; // r11@45
  int v51; // r6@46
  const char *v52; // r1@50
  const char *v53; // r1@51
  leveldb::Status *v54; // r10@51
  int *v55; // r4@63
  const char *v56; // r1@65
  const char *v57; // r1@66
  leveldb::Status *v58; // r0@66
  void *v59; // r0@67
  void **v60; // [sp+24h] [bp-88h]@1
  unsigned __int64 v61; // [sp+28h] [bp-84h]@1
  int *v62; // [sp+30h] [bp-7Ch]@4
  int v63; // [sp+34h] [bp-78h]@3
  int v64; // [sp+34h] [bp-78h]@28
  int v65; // [sp+38h] [bp-74h]@1
  int *ptr; // [sp+3Ch] [bp-70h]@13
  int v67; // [sp+44h] [bp-68h]@1
  unsigned int v68; // [sp+48h] [bp-64h]@4
  int v69; // [sp+4Ch] [bp-60h]@1
  int *v70; // [sp+50h] [bp-5Ch]@4
  unsigned int v71; // [sp+50h] [bp-5Ch]@15
  void *v72; // [sp+54h] [bp-58h]@63
  int v73; // [sp+58h] [bp-54h]@63
  void *v74; // [sp+5Ch] [bp-50h]@63
  int v75; // [sp+60h] [bp-4Ch]@63
  const char *v76; // [sp+64h] [bp-48h]@65
  int v77; // [sp+68h] [bp-44h]@65
  leveldb::Status *v78; // [sp+6Ch] [bp-40h]@65
  void *v79; // [sp+70h] [bp-3Ch]@67
  int v80; // [sp+74h] [bp-38h]@67
  void *v81; // [sp+78h] [bp-34h]@67
  int v82; // [sp+7Ch] [bp-30h]@67
  leveldb::Status *v83; // [sp+80h] [bp-2Ch]@67
  leveldb::Status *v84; // [sp+84h] [bp-28h]@50
  int v85; // [sp+88h] [bp-24h]@6
  int v86; // [sp+8Ch] [bp-20h]@6
  __int64 v87; // [sp+90h] [bp-1Ch]@50
  int v88; // [sp+98h] [bp-14h]@50
  int v89; // [sp+9Ch] [bp-10h]@11
  int v90; // [sp+A0h] [bp-Ch]@11
  int v91; // [sp+A4h] [bp-8h]@1
  int v92; // [sp+A8h] [bp-4h]@25
  int v93; // [sp+ACh] [bp+0h]@1
  int v94; // [sp+B0h] [bp+4h]@24
  int v95; // [sp+B4h] [bp+8h]@11
  int v96; // [sp+B8h] [bp+Ch]@1
  int v97; // [sp+BCh] [bp+10h]@1
  int v98; // [sp+C4h] [bp+18h]@1
  int v99; // [sp+C8h] [bp+1Ch]@1

  v67 = a3;
  v6 = &v96;
  v69 = a2;
  v7 = &v93;
  v60 = a1;
  v8 = &v91;
  v9 = *(_QWORD *)(a4 + 4);
  v10 = 0;
  v98 = v9;
  v11 = 0;
  v99 = HIDWORD(v9) - v9;
  v96 = v9;
  v97 = -8 - v9 + HIDWORD(v9);
  v12 = *(_DWORD *)(*(_DWORD *)a2 + 20);
  *(_DWORD *)a6 = 0;
  *(_DWORD *)(a6 + 4) = -1;
  v61 = 0xFFFFFFFFLL;
  v13 = 0;
  v65 = 0;
  while ( 1 )
  {
    v14 = v69 + 12 * v13;
    v17 = *(_DWORD *)(v14 + 16);
    v15 = v14 + 16;
    v16 = v17;
    v18 = *(_DWORD *)(v15 + 4) - v17;
    if ( !(v18 >> 2) )
      goto LABEL_62;
    v63 = v16;
    v19 = v18 >> 2;
    if ( v13 )
      break;
    if ( v19 >= 0x40000000 )
      sub_21E5A04("vector::reserve");
    v68 = 0;
    v71 = v18 >> 2;
    if ( (v65 - (signed int)v10) >> 2 >= v19 )
    {
      v35 = 0;
      ptr = v10;
    }
    else
      v30 = (char *)v11 - (char *)v10;
      v31 = (char *)j_operator new(v18);
      v32 = v10;
      v33 = v31;
      if ( v11 != v32 )
      {
        v34 = v32;
        j___aeabi_memmove4_0((int)v31, (int)v32);
        v32 = v34;
      }
      if ( v32 )
        j_operator delete(v32);
      v11 = (int *)&v33[4 * (v30 >> 2)];
      ptr = (int *)v33;
      v65 = (int)&v33[4 * v71];
    v36 = v63;
    do
      v37 = *(_DWORD *)(v36 + 4 * v35);
      v38 = *(int (__fastcall **)(int, int *, int *))(*(_DWORD *)v12 + 8);
      v39 = *(_DWORD *)(*(_DWORD *)(v37 + 24) - 12);
      v93 = *(_DWORD *)(v37 + 24);
      v94 = v39 - 8;
      if ( v38(v12, v6, v7) >= 0 )
        v40 = *(int (__fastcall **)(int, int *, int *))(*(_DWORD *)v12 + 8);
        v41 = *(_DWORD *)(*(_DWORD *)(v37 + 28) - 12);
        v91 = *(_DWORD *)(v37 + 28);
        v92 = v41 - 8;
        if ( v40(v12, v6, v8) <= 0 )
        {
          if ( v11 == (int *)v65 )
          {
            v42 = 0;
            v64 = v36;
            v43 = (char *)v11 - (char *)ptr;
            v44 = v11 - ptr;
            v45 = v44;
            if ( !(v43 >> 2) )
              v45 = 1;
            v46 = v45 + (v43 >> 2);
            v47 = v45 + (v43 >> 2);
            if ( 0 != v46 >> 30 )
              v47 = 0x3FFFFFFF;
            if ( v46 < v45 )
            if ( v47 )
            {
              if ( v47 >= 0x40000000 )
                sub_21E57F4();
              v42 = (int *)j_operator new(4 * v47);
            }
            v42[v44] = v37;
            if ( v44 )
              j___aeabi_memmove4_0((int)v42, (int)ptr);
            v48 = (int)&v42[v44 + 1];
            if ( ptr )
              j_operator delete(ptr);
            v65 = (int)&v42[v47];
            ptr = v42;
            v36 = v64;
            v6 = &v96;
            v7 = &v93;
            v8 = &v91;
            v11 = (int *)v48;
          }
          else
            *v11 = v37;
            ++v11;
        }
      ++v35;
    while ( v35 < v71 );
    v10 = ptr;
    if ( ptr != v11 )
      v29 = v11 - ptr;
      v62 = v11;
      j_std::__introsort_loop<__gnu_cxx::__normal_iterator<leveldb::FileMetaData **,std::vector<leveldb::FileMetaData *,std::allocator<leveldb::FileMetaData *>>>,int,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(leveldb::FileMetaData *,leveldb::FileMetaData *)>>(
        (char *)ptr,
        v11,
        2 * (31 - __clz(v29)),
        (int (__fastcall *)(int, int))&loc_1B3F38A);
      j_std::__final_insertion_sort<__gnu_cxx::__normal_iterator<leveldb::FileMetaData **,std::vector<leveldb::FileMetaData *,std::allocator<leveldb::FileMetaData *>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(leveldb::FileMetaData *,leveldb::FileMetaData *)>>(
        ptr,
      goto LABEL_45;
    v13 = 0;
LABEL_62:
    if ( (signed int)++v13 >= 7 )
      v54 = 0;
      v74 = &unk_257BC67;
      v75 = 0;
      v72 = &unk_257BC67;
      v73 = 0;
      j_leveldb::Status::Status(v60, 1, (int)&v74, (int)&v72);
      v55 = v10;
      goto LABEL_76;
  }
  v20 = v18 >> 2;
  v62 = v11;
  v21 = 0;
  v70 = v10;
  v68 = v13;
  v22 = *(_DWORD *)v69 + 16;
  for ( i = v63; ; i = *(_DWORD *)v15 )
    v85 = *(_DWORD *)(*(_DWORD *)(i + 4 * ((v20 + v21) >> 1)) + 28);
    v86 = *(_DWORD *)(v85 - 12);
    if ( j_leveldb::InternalKeyComparator::Compare(v22, (unsigned __int64 *)&v85, (unsigned __int64 *)&v98) >= 0 )
      v20 = (v20 + v21) >> 1;
      v21 = ((v20 + v21) >> 1) + 1;
    if ( v21 >= v20 )
  if ( v20 >= v19 )
    v6 = &v96;
    v7 = &v93;
    v8 = &v91;
    v13 = v68;
    v11 = v62;
    goto LABEL_62;
  v24 = *(_DWORD *)(v63 + 4 * v20);
  v95 = v24;
  v25 = *(_DWORD *)(v24 + 24);
  v26 = *(int (__fastcall **)(int, int *, int *))(*(_DWORD *)v12 + 8);
  v27 = *(_DWORD *)(v25 - 12);
  v89 = v25;
  v90 = v27 - 8;
  v28 = v26(v12, &v96, &v89);
  v10 = &v95;
  v29 = (v28 >> 31) ^ 1;
  if ( (v28 & 0x80000000) != 0 )
    v10 = 0;
  ptr = v70;
LABEL_45:
  v50 = HIDWORD(v61);
  v49 = v61;
  if ( !v29 )
LABEL_60:
  v51 = 0;
    if ( v50 && !*(_DWORD *)a6 )
      *(_DWORD *)a6 = v50;
      *(_DWORD *)(a6 + 4) = v49;
    v50 = v10[v51];
    v85 = 0;
    v86 = v12;
    v87 = *(_QWORD *)&v96;
    v88 = a5;
    j_leveldb::TableCache::Get(
      (int *)&v84,
      *(char **)(*(_DWORD *)v69 + 12),
      v67,
      *(_DWORD *)(v50 + 12),
      *(_QWORD *)(v50 + 8),
      *(_QWORD *)(v50 + 16),
      (int)&v98,
      (int)&v85,
      (void (__fastcall *)(int, char *, char *))sub_1B3F7E0);
    if ( v84 )
      v54 = (leveldb::Status *)j_leveldb::Status::CopyState(v84, v52);
      if ( v84 )
        j_operator delete[]((void *)v84);
      if ( v54 )
        v55 = ptr;
        *v60 = j_leveldb::Status::CopyState(v54, v53);
        goto LABEL_76;
    if ( v85 == 3 )
    if ( v85 == 2 )
      v81 = &unk_257BC67;
      v82 = 0;
      v79 = &unk_257BC67;
      v80 = 0;
      j_leveldb::Status::Status(&v83, 1, (int)&v81, (int)&v79);
      v59 = 0;
      v55 = ptr;
      if ( !v83 )
        goto LABEL_75;
      v54 = (leveldb::Status *)j_leveldb::Status::CopyState(v83, (const char *)v83);
      v58 = v83;
      goto LABEL_69;
    if ( v85 == 1 )
      *v60 = 0;
    v49 = v68;
    if ( ++v51 >= v29 )
      v13 = v68;
      v6 = &v96;
      v10 = ptr;
      v7 = &v93;
      v8 = &v91;
      v61 = __PAIR__(v50, v68);
      goto LABEL_60;
  v76 = "corrupted key for ";
  v77 = 18;
  j_leveldb::Status::Status(&v78, 2, (int)&v76, (int)&v96);
  v55 = ptr;
  if ( !v78 )
    goto LABEL_74;
  v54 = (leveldb::Status *)j_leveldb::Status::CopyState(v78, v56);
  v58 = v78;
LABEL_69:
  if ( v58 )
    j_operator delete[]((void *)v58);
  if ( v54 )
    v59 = j_leveldb::Status::CopyState(v54, v57);
    goto LABEL_75;
LABEL_74:
  v54 = 0;
  v59 = 0;
LABEL_75:
  *v60 = v59;
LABEL_76:
  if ( v55 )
    j_operator delete(v55);
    j_operator delete[]((void *)v54);
}


const void **__fastcall leveldb::WriteBatchInternal::Append(leveldb::WriteBatchInternal *this, leveldb::WriteBatch *a2, const leveldb::WriteBatch *a3)
{
  leveldb::WriteBatch *v3; // r5@1
  const void **v4; // r4@1
  const void *v5; // r0@1
  unsigned int v6; // r2@1
  char *v7; // r6@1

  v3 = a2;
  v4 = (const void **)this;
  v5 = *(const void **)this;
  v6 = *((_DWORD *)v5 + 2);
  v7 = (char *)(*(_DWORD *)(*(_DWORD *)a2 + 8) + v6);
  if ( *((_DWORD *)v5 - 1) >= 0 )
  {
    sub_21E8010(v4);
    v5 = *v4;
  }
  j_leveldb::EncodeFixed32((leveldb *)((char *)v5 + 8), v7, v6);
  return sub_21E7408(v4, (char *)(*(_DWORD *)v3 + 12), *(_DWORD *)(*(_DWORD *)v3 - 12) - 12);
}


void __fastcall leveldb::DBImpl::WriteLevel0Table(leveldb::DBImpl *this, leveldb::MemTable *a2, leveldb::VersionEdit *a3, leveldb::Version *a4, int a5)
{
  leveldb::DBImpl::WriteLevel0Table(this, a2, a3, a4, a5);
}


void __fastcall leveldb::DestroyDB(_DWORD *a1, int *a2, int a3)
{
  int v3; // r6@1
  _DWORD *v4; // r5@1
  int *v5; // r9@1
  _DWORD *v6; // r4@3
  const char *v7; // r1@4
  leveldb::Status *v8; // r0@4
  int v9; // r0@5
  int v10; // r11@6
  unsigned int *v11; // r2@8
  signed int v12; // r1@10
  unsigned int *v13; // r2@12
  char *v14; // r1@14
  void (__fastcall *v15)(leveldb::Status **, int, char **); // r8@26
  const void **v16; // r0@26
  char *v17; // r0@26
  char *v18; // r0@27
  void *v19; // r1@41
  leveldb::Status *v20; // r0@41
  void *v21; // r0@43
  _DWORD *v22; // r6@44
  unsigned int *v23; // r2@46
  signed int v24; // r1@48
  int *v25; // r0@54
  unsigned int *v26; // r2@61
  signed int v27; // r1@63
  void *v28; // [sp+Ch] [bp-6Ch]@38
  void *v29; // [sp+10h] [bp-68h]@36
  void *v30; // [sp+14h] [bp-64h]@34
  char *v31; // [sp+18h] [bp-60h]@12
  char *v32; // [sp+1Ch] [bp-5Ch]@8
  leveldb::Status *v33; // [sp+20h] [bp-58h]@26
  int v34; // [sp+24h] [bp-54h]@24
  char v35; // [sp+28h] [bp-50h]@24
  leveldb::Status *v36; // [sp+34h] [bp-44h]@4
  int v37; // [sp+38h] [bp-40h]@4
  int v38; // [sp+3Ch] [bp-3Ch]@4
  void *ptr; // [sp+40h] [bp-38h]@1
  _DWORD *v40; // [sp+44h] [bp-34h]@1
  _DWORD *v41; // [sp+48h] [bp-30h]@1
  int v42; // [sp+4Ch] [bp-2Ch]@1

  v3 = *(_DWORD *)(a3 + 8);
  v4 = a1;
  v5 = a2;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  (*(void (__fastcall **)(void **, int, int *, _DWORD **))(*(_DWORD *)v3 + 28))(&ptr, v3, a2, &v40);
  if ( ptr )
    j_operator delete[](ptr);
  v6 = v40;
  if ( v40 == v41 )
  {
    *v4 = 0;
  }
  else
    j_leveldb::LockFileName(&v37, v5);
    (*(void (__fastcall **)(leveldb::Status **, int, int *, int *))(*(_DWORD *)v3 + 52))(&v36, v3, &v37, &v38);
    v8 = v36;
    if ( v36 )
      goto LABEL_71;
    v9 = (int)v40;
    if ( v41 != v40 )
    {
      v10 = 0;
      while ( 1 )
      {
        if ( j_leveldb::ParseFileName((const void **)(v9 + 4 * v10), (int)&v35, &v34) == 1 && v34 != 1 )
        {
          v15 = *(void (__fastcall **)(leveldb::Status **, int, char **))(*(_DWORD *)v3 + 32);
          sub_21E8AF4((int *)&v31, v5);
          sub_21E7408((const void **)&v31, "/", 1u);
          v16 = sub_21E72F0((const void **)&v31, (const void **)&v40[v10]);
          v32 = (char *)*v16;
          *v16 = &unk_28898CC;
          v15(&v33, v3, &v32);
          v17 = v32 - 12;
          if ( (int *)(v32 - 12) != &dword_28898C0 )
          {
            v11 = (unsigned int *)(v32 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v12 = __ldrex(v11);
              while ( __strex(v12 - 1, v11) );
            }
            else
              v12 = (*v11)--;
            if ( v12 <= 0 )
              j_j_j_j__ZdlPv_9(v17);
          }
          v14 = v31;
          v18 = v31 - 12;
          if ( (int *)(v31 - 12) != &dword_28898C0 )
            v13 = (unsigned int *)(v31 - 4);
                v14 = (char *)__ldrex(v13);
              while ( __strex((unsigned int)(v14 - 1), v13) );
              v14 = (char *)(*v13)--;
            if ( (signed int)v14 <= 0 )
              j_j_j_j__ZdlPv_9(v18);
          if ( v36 )
            goto LABEL_31;
          if ( v33 )
            break;
        }
LABEL_33:
        v9 = (int)v40;
        if ( ++v10 >= (unsigned int)(v41 - v40) )
          goto LABEL_34;
      }
      v36 = (leveldb::Status *)j_leveldb::Status::CopyState(v33, v14);
LABEL_31:
      if ( v33 )
        j_operator delete[]((void *)v33);
      goto LABEL_33;
    }
LABEL_34:
    (*(void (__fastcall **)(void **, int, int))(*(_DWORD *)v3 + 56))(&v30, v3, v38);
    if ( v30 )
      j_operator delete[](v30);
    (*(void (__fastcall **)(void **, int, int *))(*(_DWORD *)v3 + 32))(&v29, v3, &v37);
    if ( v29 )
      j_operator delete[](v29);
    (*(void (__fastcall **)(void **, int, int *))(*(_DWORD *)v3 + 40))(&v28, v3, v5);
    if ( v28 )
      j_operator delete[](v28);
LABEL_71:
      v19 = j_leveldb::Status::CopyState(v8, v7);
      v20 = v36;
      *v4 = v19;
      if ( v20 )
        j_operator delete[]((void *)v20);
    else
      *v4 = 0;
    v21 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v26 = (unsigned int *)(v37 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v27 = __ldrex(v26);
        while ( __strex(v27 - 1, v26) );
      else
        v27 = (*v26)--;
      if ( v27 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    v6 = v41;
    v22 = v40;
    if ( v40 != v41 )
      do
        v25 = (int *)(*v22 - 12);
        if ( v25 != &dword_28898C0 )
          v23 = (unsigned int *)(*v22 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v24 = __ldrex(v23);
            while ( __strex(v24 - 1, v23) );
          else
            v24 = (*v23)--;
          if ( v24 <= 0 )
            j_j_j_j__ZdlPv_9(v25);
        ++v22;
      while ( v22 != v6 );
      v6 = v40;
  if ( v6 )
    j_operator delete(v6);
}


signed int __fastcall leveldb::Block::Iter::ParseNextKey(int a1)
{
  int v1; // r4@1
  int v2; // r0@1
  int v3; // r1@1
  int v4; // r2@1
  int v5; // r1@2
  const char *v6; // r7@2
  char *v7; // r0@3
  unsigned int *v8; // r3@3
  int v9; // r2@3
  char *v10; // r6@4
  leveldb *v11; // r0@11
  signed int result; // r0@23
  __int64 v13; // r0@24
  unsigned int v14; // r1@24
  unsigned int v15; // r2@24
  unsigned int v16; // r3@25
  int v17; // r6@25
  int v18; // [sp+0h] [bp-20h]@3
  char v19[4]; // [sp+4h] [bp-1Ch]@3
  char v20[4]; // [sp+8h] [bp-18h]@3

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(_QWORD *)(v1 + 48) + (*(_QWORD *)(v1 + 48) >> 32) - v2;
  *(_DWORD *)(v1 + 36) = v3;
  v4 = *(_DWORD *)(v1 + 28);
  if ( v3 >= v4 )
  {
    *(_DWORD *)(v1 + 36) = v4;
    *(_DWORD *)(v1 + 40) = *(_DWORD *)(v1 + 32);
    return 0;
  }
  v5 = v3 + v2;
  v6 = (const char *)(v2 + v4);
  if ( v2 + v4 - v5 < 3 )
    goto LABEL_22;
  *(_DWORD *)v20 = *(_BYTE *)v5;
  v7 = (char *)(v5 + 1);
  v8 = (unsigned int *)*(_BYTE *)(v5 + 1);
  *(_DWORD *)v19 = v8;
  v9 = *(_BYTE *)(v5 + 2);
  v18 = v9;
  if ( (char)(v20[0] | v9 | (unsigned __int8)v8) < 0 )
    if ( *(_BYTE *)v5 & 0x80 )
    {
      v7 = j_leveldb::GetVarint32PtrFallback((leveldb *)v5, v6, v20, v8);
      if ( !v7 )
        goto LABEL_22;
    }
    else
      *(_DWORD *)v20 = *(_BYTE *)v5;
    if ( v7 >= v6 || *v7 & 0x80 )
      v11 = (leveldb *)j_leveldb::GetVarint32PtrFallback((leveldb *)v7, v6, v19, v8);
      if ( !v11 )
      *(_DWORD *)v19 = (unsigned __int8)*v7;
      v11 = (leveldb *)(v7 + 1);
    if ( v11 < (leveldb *)v6 )
      v9 = *(_BYTE *)v11;
      if ( !(v9 & 0x80) )
      {
        v18 = *(_BYTE *)v11;
        v10 = (char *)v11 + 1;
LABEL_18:
        v8 = *(unsigned int **)v19;
        goto LABEL_19;
      }
    v10 = j_leveldb::GetVarint32PtrFallback(v11, v6, (const char *)&v18, v8);
    if ( v10 )
      v9 = v18;
      goto LABEL_18;
LABEL_22:
    j_leveldb::Block::Iter::CorruptionError(v1);
  v10 = (char *)(v5 + 3);
LABEL_19:
  if ( !v10 || v6 - v10 < (unsigned int)v8 + v9 || *(_DWORD *)(*(_DWORD *)(v1 + 44) - 12) < *(_DWORD *)v20 )
  sub_21E849C((char *)(v1 + 44), *(size_t *)v20, 0);
  sub_21E7408((const void **)(v1 + 44), v10, *(unsigned int *)v19);
  HIDWORD(v13) = v18;
  LODWORD(v13) = &v10[*(_DWORD *)v19];
  *(_QWORD *)(v1 + 48) = v13;
  v14 = *(_DWORD *)(v1 + 32);
  v15 = *(_DWORD *)(v1 + 40) + 1;
  if ( v15 < v14 )
    v16 = *(_DWORD *)(v1 + 36);
    v17 = *(_QWORD *)(v1 + 24) + (*(_QWORD *)(v1 + 24) >> 32);
    while ( *(_DWORD *)(v17 + 4 * v15) < v16 )
      *(_DWORD *)(v1 + 40) = v15++;
      result = 1;
      if ( v15 >= v14 )
        return result;
  return 1;
}


char *__fastcall leveldb::VersionSet::Builder::SaveTo(__int64 this)
{
  int v1; // r5@1
  int v2; // r10@1
  int v3; // r7@1
  int v4; // r6@1
  int v5; // r8@2
  int *v6; // r11@2
  unsigned int v7; // r4@2
  int v8; // r9@3
  int v9; // r1@3
  int v10; // r1@3
  int v11; // t1@3
  int v12; // r7@4
  int *v13; // r9@4
  int v14; // t1@4
  char *v15; // r0@5
  signed int v16; // r7@7
  void **v17; // r1@9
  signed int v18; // r7@9
  int v19; // r0@11
  int v20; // r4@12
  char *result; // r0@12
  int *v22; // r8@15
  int v23; // r10@16
  int v24; // r5@17
  int v25; // r9@17
  int v26; // r7@17
  int (__fastcall *v27)(int, int *, int *); // r3@17
  int v28; // r0@17
  int v29; // r0@17
  __int64 v30; // r2@20
  bool v31; // cf@20
  __int64 v32; // r0@20
  bool v33; // zf@22
  signed int v34; // r1@22
  int v35; // t1@31
  int v36; // t1@34
  int v37; // [sp+4h] [bp-54h]@4
  _DWORD *v38; // [sp+8h] [bp-50h]@5
  char *v39; // [sp+Ch] [bp-4Ch]@7
  __int64 v40; // [sp+10h] [bp-48h]@1
  void **v41; // [sp+18h] [bp-40h]@4
  char *v42; // [sp+18h] [bp-40h]@12
  int *v43; // [sp+1Ch] [bp-3Ch]@2
  int v44; // [sp+20h] [bp-38h]@2
  int v45; // [sp+24h] [bp-34h]@17
  int v46; // [sp+28h] [bp-30h]@17
  int v47; // [sp+2Ch] [bp-2Ch]@17
  int v48; // [sp+30h] [bp-28h]@17

  v2 = HIDWORD(this);
  v1 = this;
  v3 = 0;
  v4 = *(_DWORD *)this + 16;
  v40 = this;
  do
  {
    v44 = v3;
    v5 = *(_DWORD *)(v1 + 28 * v3 + 32);
    v6 = (int *)*(_QWORD *)(*(_DWORD *)(v1 + 4) + 12 * v3 + 16);
    v43 = (int *)(*(_QWORD *)(*(_DWORD *)(v1 + 4) + 12 * v3 + 16) >> 32);
    v7 = *(_DWORD *)(v5 + 20) + v43 - v6;
    if ( v7 >= 0x40000000 )
      sub_21E5A04("vector::reserve");
    v8 = v2 + 12 * v3;
    v9 = v2 + 12 * v3;
    v11 = *(_DWORD *)(v9 + 24);
    v10 = v9 + 24;
    if ( (v11 - *(_DWORD *)(v8 + 16)) >> 2 < v7 )
    {
      v37 = *(_DWORD *)(v8 + 16);
      v41 = (void **)(v8 + 16);
      v44 = v3;
      v14 = *(_DWORD *)(v8 + 20);
      v13 = (int *)(v8 + 20);
      v12 = v14;
      if ( v7 )
      {
        v38 = (_DWORD *)v10;
        v15 = (char *)j_operator new(4 * v7);
      }
      else
        v15 = 0;
      v39 = v15;
      v16 = v12 - v37;
      if ( v16 )
        j___aeabi_memmove4_0((int)v15, v37);
      v17 = v41;
      v18 = v16 >> 2;
      if ( *v41 )
        j_operator delete(*v41);
        v17 = v41;
      v19 = (int)&v39[4 * v18];
      *v17 = v39;
      v3 = v44;
      *v13 = v19;
      *v38 = &v39[4 * v7];
    }
    v20 = *(_DWORD *)(v5 + 12);
    result = (char *)(v5 + 4);
    v42 = (char *)(v5 + 4);
    while ( (char *)v20 != result )
      v22 = v6;
      if ( (char *)v43 - (char *)v6 >= 1 )
        v23 = v43 - v6;
        v22 = v6;
        do
        {
          while ( 1 )
          {
            v24 = *(_DWORD *)(v20 + 16);
            v25 = v23 >> 1;
            v26 = v22[v23 >> 1];
            v27 = *(int (__fastcall **)(int, int *, int *))(*(_DWORD *)v4 + 8);
            v47 = *(_DWORD *)(v24 + 24);
            v48 = *(_DWORD *)(v47 - 12);
            v28 = *(_DWORD *)(v26 + 24);
            v45 = v28;
            v46 = *(_DWORD *)(v28 - 12);
            v29 = v27(v4, &v47, &v45);
            if ( v29 )
              break;
            v32 = *(_QWORD *)(v26 + 8);
            v30 = *(_QWORD *)(v24 + 8);
            v31 = (unsigned int)v30 >= (unsigned int)v32;
            LODWORD(v32) = 0;
            if ( !v31 )
              LODWORD(v32) = 1;
            v31 = HIDWORD(v30) >= HIDWORD(v32);
            v33 = HIDWORD(v30) == HIDWORD(v32);
            v34 = 0;
              v34 = 1;
            if ( v33 )
              v34 = v32;
            if ( !v34 )
              goto LABEL_29;
LABEL_27:
            v23 >>= 1;
            if ( v25 <= 0 )
              goto LABEL_30;
          }
          if ( v29 <= -1 )
            goto LABEL_27;
LABEL_29:
          v23 = v23 - 1 - v25;
          v22 += v25 + 1;
        }
        while ( v23 > 0 );
LABEL_30:
      v2 = HIDWORD(v40);
      v1 = v40;
      while ( v22 != v6 )
        v35 = *v6;
        ++v6;
        j_leveldb::VersionSet::Builder::MaybeAddFile(v40, SHIDWORD(v40), v44, v35);
      j_leveldb::VersionSet::Builder::MaybeAddFile(v40, SHIDWORD(v40), v44, *(_DWORD *)(v20 + 16));
      v20 = sub_21D4820(v20);
      result = v42;
    for ( ; v43 != v6; result = j_leveldb::VersionSet::Builder::MaybeAddFile(v1, v2, v3, v36) )
      v36 = *v6;
      ++v6;
    ++v3;
  }
  while ( v3 < 7 );
  return result;
}


int __fastcall leveldb::WritableFileEncrypted::Close(leveldb::WritableFileEncrypted *this, int a2)
{
  leveldb::WritableFileEncrypted *v2; // r5@1
  int result; // r0@1
  int v4; // r4@1
  int v5; // r1@1
  const char *v6; // r1@2
  void *v7; // r1@3
  void *v8; // r0@3
  void *ptr; // [sp+4h] [bp-14h]@2

  v2 = this;
  result = 0;
  v4 = a2;
  *(_DWORD *)v2 = 0;
  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 )
  {
    (*(void (__fastcall **)(void **))(*(_DWORD *)v5 + 12))(&ptr);
    if ( ptr )
    {
      v7 = j_leveldb::Status::CopyState((leveldb::Status *)ptr, v6);
      v8 = ptr;
      *(_DWORD *)v2 = v7;
      if ( v8 )
        j_operator delete[](v8);
    }
    result = 0;
    *(_DWORD *)(v4 + 4) = 0;
  }
  return result;
}


void __fastcall leveldb::WriteStringToFile(leveldb::Status **a1, int a2, int a3, int a4)
{
  sub_1B48CD6(a1, a2, a3, a4, 0);
}


void __fastcall leveldb::VersionEdit::Clear(leveldb::VersionEdit *this)
{
  leveldb::VersionEdit *v1; // r8@1
  __int64 v2; // kr00_8@1
  int v3; // r7@2
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int v8; // r1@19
  void *v9; // r0@19
  int v10; // r1@20
  void *v11; // r0@20

  v1 = this;
  sub_21E7EE0((const void **)this, 0, *(_BYTE **)(*(_DWORD *)this - 12), 0);
  j___aeabi_memclr8_0((int)v1 + 8, 37);
  j_std::_Rb_tree<std::pair<int,unsigned long long>,std::pair<int,unsigned long long>,std::_Identity<std::pair<int,unsigned long long>>,std::less<std::pair<int,unsigned long long>>,std::allocator<std::pair<int,unsigned long long>>>::_M_erase(
    (int)v1 + 60,
    *((_DWORD *)v1 + 17));
  *((_DWORD *)v1 + 17) = 0;
  *((_DWORD *)v1 + 18) = (char *)v1 + 64;
  *((_DWORD *)v1 + 19) = (char *)v1 + 64;
  *((_DWORD *)v1 + 20) = 0;
  v2 = *(_QWORD *)((char *)v1 + 84);
  if ( HIDWORD(v2) != (_DWORD)v2 )
  {
    v3 = v2;
    do
    {
      v8 = *(_DWORD *)(v3 + 36);
      v9 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v8 - 4);
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
          j_j_j_j__ZdlPv_9(v9);
      }
      v10 = *(_DWORD *)(v3 + 32);
      v11 = (void *)(v10 - 12);
      if ( (int *)(v10 - 12) != &dword_28898C0 )
        v6 = (unsigned int *)(v10 - 4);
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      v3 += 40;
    }
    while ( v3 != HIDWORD(v2) );
  }
  *((_DWORD *)v1 + 22) = v2;
}


void *__fastcall leveldb::NewTwoLevelIterator(int a1, int a2, int a3, int a4)
{
  int v4; // r5@1
  int v5; // r6@1
  __int64 v6; // r7@1
  void *v7; // r4@1
  int v8; // r12@1
  int v9; // r1@1
  int v10; // r2@1
  int v11; // r0@2
  int v13; // [sp+0h] [bp-20h]@3

  v4 = a1;
  v5 = a4;
  HIDWORD(v6) = a3;
  LODWORD(v6) = a2;
  v7 = j_operator new(0x50u);
  j_leveldb::Iterator::Iterator((leveldb::Iterator *)v7);
  v8 = (int)v7 + 28;
  *(_DWORD *)v7 = &off_2725DDC;
  *(_QWORD *)((char *)v7 + 20) = v6;
  v9 = *(_DWORD *)(v5 + 4);
  v10 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)v8 = *(_DWORD *)v5;
  *(_DWORD *)(v8 + 4) = v9;
  *(_DWORD *)(v8 + 8) = v10;
  *((_DWORD *)v7 + 10) = 0;
  *((_DWORD *)v7 + 13) = &unk_257BC67;
  *((_DWORD *)v7 + 14) = 0;
  *((_DWORD *)v7 + 11) = v4;
  if ( v4 )
  {
    v11 = (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
    *((_BYTE *)v7 + 48) = v11;
    if ( v11 )
    {
      (*(void (__fastcall **)(int *))(**((_DWORD **)v7 + 11) + 32))(&v13);
      *(_QWORD *)((char *)v7 + 52) = *(_QWORD *)&v13;
    }
  }
  else
    *((_BYTE *)v7 + 48) = 0;
  *((_DWORD *)v7 + 17) = &unk_257BC67;
  *((_DWORD *)v7 + 18) = 0;
  *((_DWORD *)v7 + 15) = 0;
  *((_BYTE *)v7 + 64) = 0;
  *((_DWORD *)v7 + 19) = &unk_28898CC;
  return v7;
}


int __fastcall leveldb::EncodeFixed32(int result, char *a2, unsigned int a3)
{
  *(_DWORD *)result = a2;
  return result;
}


void __fastcall leveldb::InternalFilterPolicy::~InternalFilterPolicy(leveldb::InternalFilterPolicy *this)
{
  void *v1; // r0@1

  v1 = (void *)j_leveldb::FilterPolicy::~FilterPolicy(this);
  j_j_j__ZdlPv_7(v1);
}


void *__fastcall leveldb::Version::NewConcatenatingIterator(int a1, int a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  int v5; // r4@1
  leveldb::Iterator *v6; // r0@1
  int v7; // r7@1
  int v8; // r0@1
  int v9; // r1@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = (leveldb::Iterator *)j_operator new(0x34u);
  v7 = *(_DWORD *)v3;
  v8 = j_leveldb::Iterator::Iterator(v6);
  *(_DWORD *)v8 = &off_2725C94;
  *(_DWORD *)(v8 + 20) = &off_2726110;
  *(_DWORD *)(v8 + 24) = *(_DWORD *)(v7 + 20);
  v9 = v3 + 12 * v4;
  *(_DWORD *)(v8 + 28) = v9 + 16;
  *(_DWORD *)(v8 + 32) = (signed int)((*(_QWORD *)(v9 + 16) >> 32) - *(_QWORD *)(v9 + 16)) >> 2;
  return j_j_j__ZN7leveldb19NewTwoLevelIteratorEPNS_8IteratorEPFS1_PvRKNS_11ReadOptionsERKNS_5SliceEES2_S5__0(
           v8,
           (int)sub_1B3EE40,
           *(_DWORD *)(*(_DWORD *)v3 + 12),
           v5);
}


RakNet *__fastcall leveldb::EscapeString(const void **a1, int a2)
{
  *a1 = &unk_28898CC;
  return j_leveldb::AppendEscapedStringTo(a1, a2);
}


void __fastcall leveldb::Version::ForEachOverlapping(int a1, int a2, int a3, int a4, int a5, int a6, int (__fastcall *a7)(int, signed int, int))
{
  int v7; // r10@1
  int v8; // r1@1 OVERLAPPED
  int v9; // r2@1 OVERLAPPED
  unsigned int v10; // r4@1
  int v11; // r6@2
  char *v12; // r0@3
  int v13; // r3@3
  char *v14; // r8@6
  int *v15; // r7@7
  int *v16; // r4@7
  unsigned int v17; // r9@7
  int v18; // r5@8
  int (__fastcall *v19)(int, __int64 *, int *); // r3@8
  int v20; // r0@8
  int (__fastcall *v21)(int, __int64 *, int *); // r3@9
  int v22; // r0@9
  char *v23; // r7@12
  signed int v24; // r6@12
  int v25; // r4@12
  unsigned int v26; // r0@12
  unsigned int v27; // r1@14
  unsigned int v28; // r10@14
  char *v29; // r5@27
  unsigned int v30; // r7@28
  int v31; // r4@28
  signed int v32; // r4@31
  int v33; // r5@32
  int v34; // r0@32
  int v35; // r5@32
  int v36; // t1@32
  signed int v37; // r1@32
  unsigned int v38; // r8@33
  unsigned int v39; // r4@33
  int v40; // r11@33
  int v41; // r5@40
  int (*v42)(void); // r3@40
  int v43; // r2@40
  char *ptr; // [sp+0h] [bp-68h]@6
  int v45; // [sp+4h] [bp-64h]@2
  int v46; // [sp+8h] [bp-60h]@1
  unsigned int v47; // [sp+Ch] [bp-5Ch]@33
  int v48; // [sp+10h] [bp-58h]@5
  signed int v49; // [sp+10h] [bp-58h]@33
  int v50; // [sp+14h] [bp-54h]@40
  int v51; // [sp+18h] [bp-50h]@40
  int v52; // [sp+1Ch] [bp-4Ch]@7
  int v53; // [sp+20h] [bp-48h]@9
  int v54; // [sp+24h] [bp-44h]@7
  int v55; // [sp+28h] [bp-40h]@8
  unsigned __int64 v56; // [sp+2Ch] [bp-3Ch]@1
  int v57; // [sp+30h] [bp-38h]@1
  __int64 v58; // [sp+34h] [bp-34h]@1
  int v59; // [sp+3Ch] [bp-2Ch]@35
  int v60; // [sp+40h] [bp-28h]@35

  v7 = a1;
  v46 = a1;
  v58 = *(_QWORD *)&a2;
  LODWORD(v56) = a4;
  v57 = a5;
  *(_QWORD *)&v8 = *(_QWORD *)(a1 + 16);
  v10 = (v9 - v8) >> 2;
  if ( v10 >= 0x40000000 )
    sub_21E5A04("vector::reserve");
  v11 = *(_DWORD *)(*(_DWORD *)a1 + 20);
  v45 = *(_DWORD *)(*(_DWORD *)a1 + 20);
  if ( v10 )
  {
    v12 = (char *)j_operator new(v9 - v8);
    *(_QWORD *)&v8 = *(_QWORD *)(v7 + 16);
    v13 = (int)&v12[4 * v10];
  }
  else
    v12 = 0;
    v13 = 0;
  v48 = v13;
  if ( v9 == v8 )
    v14 = v12;
    ptr = v12;
    v15 = &v54;
    v16 = &v52;
    v17 = 0;
    do
    {
      v18 = *(_DWORD *)(v8 + 4 * v17);
      v19 = *(int (__fastcall **)(int, __int64 *, int *))(*(_DWORD *)v11 + 8);
      v20 = *(_DWORD *)(*(_DWORD *)(v18 + 24) - 12);
      v54 = *(_DWORD *)(v18 + 24);
      v55 = v20 - 8;
      if ( v19(v11, &v58, v15) >= 0 )
      {
        v21 = *(int (__fastcall **)(int, __int64 *, int *))(*(_DWORD *)v11 + 8);
        v22 = *(_DWORD *)(*(_DWORD *)(v18 + 28) - 12);
        v52 = *(_DWORD *)(v18 + 28);
        v53 = v22 - 8;
        if ( v21(v11, &v58, v16) <= 0 )
        {
          if ( v14 == (char *)v48 )
          {
            v23 = 0;
            v24 = v14 - ptr;
            v25 = (v14 - ptr) >> 2;
            v26 = (v14 - ptr) >> 2;
            if ( !v25 )
              v26 = 1;
            v27 = v26 + (v24 >> 2);
            v28 = v26 + (v24 >> 2);
            if ( 0 != v27 >> 30 )
              v28 = 0x3FFFFFFF;
            if ( v27 < v26 )
            if ( v28 )
            {
              if ( v28 >= 0x40000000 )
                sub_21E57F4();
              v23 = (char *)j_operator new(4 * v28);
            }
            *(_DWORD *)&v23[4 * v25] = v18;
            if ( v25 )
              j___aeabi_memmove4_0((int)v23, (int)ptr);
            v14 = &v23[4 * v25 + 4];
            if ( ptr )
              j_operator delete(ptr);
            ptr = v23;
            v48 = (int)&v23[4 * v28];
            v15 = &v54;
            v7 = v46;
            v11 = v45;
            v16 = &v52;
          }
          else
            *(_DWORD *)v14 = v18;
            v14 += 4;
        }
      }
      v8 = *(_QWORD *)(v7 + 16);
      ++v17;
    }
    while ( v17 < (signed int)((*(_QWORD *)(v7 + 16) >> 32) - v8) >> 2 );
  v29 = ptr;
  if ( ptr != v14 )
    v30 = (v14 - ptr) >> 2;
    j_std::__introsort_loop<__gnu_cxx::__normal_iterator<leveldb::FileMetaData **,std::vector<leveldb::FileMetaData *,std::allocator<leveldb::FileMetaData *>>>,int,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(leveldb::FileMetaData *,leveldb::FileMetaData *)>>(
      ptr,
      v14,
      2 * (31 - __clz(v30)),
      (int (__fastcall *)(int, int))&loc_1B3F38A);
    j_std::__final_insertion_sort<__gnu_cxx::__normal_iterator<leveldb::FileMetaData **,std::vector<leveldb::FileMetaData *,std::allocator<leveldb::FileMetaData *>>>,__gnu_cxx::__ops::_Iter_comp_iter<bool (*)(leveldb::FileMetaData *,leveldb::FileMetaData *)>>(
      (int *)ptr,
      (int *)v14,
    v31 = 0;
    if ( v30 )
      while ( a7(a6, 0, *(_DWORD *)&ptr[4 * v31]) )
        if ( ++v31 >= v30 )
          goto LABEL_31;
      goto LABEL_44;
LABEL_31:
  v32 = 1;
  do
    v33 = v7 + 12 * v32;
    v36 = *(_DWORD *)(v33 + 16);
    v35 = v33 + 16;
    v34 = v36;
    v37 = *(_DWORD *)(v35 + 4) - v36;
    if ( v37 >> 2 )
      v38 = v37 >> 2;
      v49 = v32;
      v39 = 0;
      v40 = *(_DWORD *)v7 + 16;
      v47 = v37 >> 2;
      while ( 1 )
        v59 = *(_DWORD *)(*(_DWORD *)(v34 + 4 * ((v38 + v39) >> 1)) + 28);
        v60 = *(_DWORD *)(v59 - 12);
        if ( j_leveldb::InternalKeyComparator::Compare(v40, (unsigned __int64 *)&v59, &v56) >= 0 )
          v38 = (v38 + v39) >> 1;
        else
          v39 = ((v38 + v39) >> 1) + 1;
        if ( v39 >= v38 )
          break;
        v34 = *(_DWORD *)v35;
      v7 = v46;
      v32 = v49;
      if ( v38 < v47 )
        v41 = *(_DWORD *)(*(_DWORD *)v35 + 4 * v38);
        v42 = *(int (**)(void))(*(_DWORD *)v11 + 8);
        v43 = *(_DWORD *)(*(_DWORD *)(v41 + 24) - 12);
        v50 = *(_DWORD *)(v41 + 24);
        v51 = v43 - 8;
        if ( v42() >= 0 && a7(a6, v49, v41) != 1 )
    ++v32;
  while ( v32 < 7 );
  if ( ptr )
LABEL_44:
    j_operator delete(v29);
}


leveldb::port::Mutex *__fastcall leveldb::port::Mutex::~Mutex(leveldb::port::Mutex *this)
{
  leveldb::port::Mutex *v1; // r4@1
  int v2; // r0@1
  char *v4; // r0@3

  v1 = this;
  v2 = j_pthread_mutex_destroy((pthread_mutex_t *)this);
  if ( v2 )
  {
    v4 = j_strerror(v2);
    j_fprintf((FILE *)((char *)&_sF + 168), "pthread %s: %s\n", "destroy mutex", v4);
    j_abort();
  }
  return v1;
}


leveldb::Iterator *__fastcall leveldb::TableCache::NewIterator(char *a1, int a2, unsigned __int64 a3, __int64 a4, int ***a5)
{
  int v5; // r5@1
  char *v6; // r4@1
  const leveldb::Status *v7; // r1@3
  leveldb::Iterator *v8; // r5@4
  void *v9; // r7@7
  int **v10; // r6@7
  void *ptr; // [sp+10h] [bp-4h]@3
  void *v13; // [sp+14h] [bp+0h]@3

  v5 = a2;
  v6 = a1;
  if ( a5 )
    *a5 = 0;
  v13 = 0;
  j_leveldb::TableCache::FindTable(&ptr, a1, a3, a4, (int *)&v13);
  if ( ptr )
  {
    v8 = (leveldb::Iterator *)j_leveldb::NewErrorIterator((leveldb *)&ptr, v7);
    if ( ptr )
      j_operator delete[](ptr);
  }
  else
    v9 = v13;
    v10 = *(int ***)((*(int (**)(void))(**((_DWORD **)v6 + 3) + 20))() + 4);
    v8 = (leveldb::Iterator *)j_leveldb::Table::NewIterator(v10, v5);
    j_leveldb::Iterator::RegisterCleanup(v8, (void (__cdecl *)(void *, void *))sub_1B3DBFC, *((void **)v6 + 3), v9);
    if ( a5 )
      *a5 = v10;
  return v8;
}


unsigned int __fastcall leveldb::VersionEdit::EncodeTo(int a1, const void **a2)
{
  int v2; // r11@1
  const void **v3; // r4@1
  unsigned int v4; // r0@1
  unsigned int v5; // r0@2
  int v6; // r1@5
  unsigned int v7; // r0@6
  int v8; // r1@7
  unsigned int v9; // r0@7
  int v10; // r1@10
  int v11; // r1@12
  unsigned int v12; // r5@14
  int i; // r6@16
  int v14; // r1@17
  unsigned int result; // r0@19
  int v16; // r5@19
  int v17; // r6@20
  unsigned int v18; // r7@20
  int v19; // r5@21
  int v20; // r1@21
  int v21; // r1@21
  int v22; // [sp+4h] [bp-44h]@21
  int v23; // [sp+8h] [bp-40h]@21
  int v24; // [sp+Ch] [bp-3Ch]@21
  int v25; // [sp+10h] [bp-38h]@21
  int v26; // [sp+14h] [bp-34h]@15
  int v27; // [sp+18h] [bp-30h]@15
  int v28; // [sp+1Ch] [bp-2Ch]@2
  int v29; // [sp+20h] [bp-28h]@2

  v2 = a1;
  v3 = a2;
  v4 = *(_WORD *)(a1 + 40);
  if ( (_BYTE)v4 )
  {
    j_leveldb::PutVarint32(a2, 1u);
    v28 = *(_DWORD *)v2;
    v29 = *(_DWORD *)(v28 - 12);
    j_leveldb::PutLengthPrefixedSlice(v3, (int)&v28);
    v5 = *(_BYTE *)(v2 + 41);
  }
  else
    v5 = v4 >> 8;
  if ( v5 )
    j_leveldb::PutVarint32(v3, 2u);
    j_leveldb::PutVarint64(v3, v6, *(_QWORD *)(v2 + 8));
  v7 = *(_WORD *)(v2 + 42);
  if ( (_BYTE)v7 )
    j_leveldb::PutVarint32(v3, 9u);
    j_leveldb::PutVarint64(v3, v8, *(_QWORD *)(v2 + 16));
    v9 = *(_BYTE *)(v2 + 43);
    v9 = v7 >> 8;
  if ( v9 )
    j_leveldb::PutVarint32(v3, 3u);
    j_leveldb::PutVarint64(v3, v10, *(_QWORD *)(v2 + 24));
  if ( *(_BYTE *)(v2 + 44) )
    j_leveldb::PutVarint32(v3, 4u);
    j_leveldb::PutVarint64(v3, v11, *(_QWORD *)(v2 + 32));
  if ( *(_QWORD *)(v2 + 48) >> 32 != (unsigned int)*(_QWORD *)(v2 + 48) )
    v12 = 0;
    do
    {
      j_leveldb::PutVarint32(v3, 5u);
      j_leveldb::PutVarint32(v3, *(_DWORD *)(*(_DWORD *)(v2 + 48) + 8 * v12));
      v26 = *(_DWORD *)(*(_DWORD *)(v2 + 48) + 8 * v12 + 4);
      v27 = *(_DWORD *)(v26 - 12);
      j_leveldb::PutLengthPrefixedSlice(v3, (int)&v26);
      ++v12;
    }
    while ( v12 < (signed int)((*(_QWORD *)(v2 + 48) >> 32) - *(_QWORD *)(v2 + 48)) >> 3 );
  for ( i = *(_DWORD *)(v2 + 72); i != v2 + 64; i = sub_21D4820(i) )
    j_leveldb::PutVarint32(v3, 6u);
    j_leveldb::PutVarint32(v3, *(_DWORD *)(i + 16));
    j_leveldb::PutVarint64(v3, v14, *(_QWORD *)(i + 24));
  result = *(_QWORD *)(v2 + 84) >> 32;
  v16 = *(_QWORD *)(v2 + 84);
  if ( result != v16 )
    v17 = 0;
    v18 = 0;
      j_leveldb::PutVarint32(v3, 7u);
      j_leveldb::PutVarint32(v3, *(_DWORD *)(*(_DWORD *)(v2 + 84) + v17));
      v19 = v16 + v17;
      j_leveldb::PutVarint64(v3, v20, *(_QWORD *)(v19 + 16));
      j_leveldb::PutVarint64(v3, v21, *(_QWORD *)(v19 + 24));
      v24 = *(_DWORD *)(v19 + 32);
      v25 = *(_DWORD *)(v24 - 12);
      j_leveldb::PutLengthPrefixedSlice(v3, (int)&v24);
      v22 = *(_DWORD *)(v19 + 36);
      v23 = *(_DWORD *)(v22 - 12);
      j_leveldb::PutLengthPrefixedSlice(v3, (int)&v22);
      v16 = *(_QWORD *)(v2 + 84);
      v17 += 40;
      ++v18;
      result = -858993459 * ((signed int)((*(_QWORD *)(v2 + 84) >> 32) - v16) >> 3);
    while ( v18 < result );
  return result;
}


_DWORD *__fastcall leveldb::WriteBatchInternal::InsertInto(leveldb::WriteBatchInternal *this, const leveldb::WriteBatch *a2, leveldb::MemTable *a3)
{
  int v3; // r3@1
  void **v5; // [sp+0h] [bp-20h]@1
  int v6; // [sp+8h] [bp-18h]@1
  int v7; // [sp+Ch] [bp-14h]@1
  leveldb::MemTable *v8; // [sp+10h] [bp-10h]@1

  v5 = &off_2725CF4;
  v3 = *(_DWORD *)(*(_DWORD *)a2 + 4);
  v6 = **(_DWORD **)a2;
  v7 = v3;
  v8 = a3;
  return j_leveldb::WriteBatch::Iterate(this, a2, (int)&v5);
}


int __fastcall leveldb::Table::ApproximateOffsetOf(int **a1)
{
  int **v1; // r5@1
  _DWORD *v2; // r4@1
  int *v3; // r1@3
  int v4; // r5@3
  int v5; // r6@3
  int *v6; // r0@4
  int v7; // r6@4
  void *ptr; // [sp+4h] [bp-2Ch]@2
  char v10; // [sp+8h] [bp-28h]@2
  int v11; // [sp+10h] [bp-20h]@2
  signed int v12; // [sp+14h] [bp-1Ch]@2
  signed int v13; // [sp+18h] [bp-18h]@2
  signed int v14; // [sp+1Ch] [bp-14h]@2

  v1 = a1;
  v2 = j_leveldb::Block::NewIterator((*a1)[278], **a1);
  (*(void (**)(void))(*v2 + 20))();
  if ( (*(int (__fastcall **)(_DWORD *))(*v2 + 8))(v2) == 1 )
  {
    v13 = -1;
    v14 = -1;
    v11 = -1;
    v12 = -1;
    (*(void (__fastcall **)(char *, _DWORD *))(*v2 + 36))(&v10, v2);
    j_leveldb::BlockHandle::DecodeFrom(&ptr, &v11, (int)&v10);
    if ( ptr )
    {
      v3 = *v1;
      v4 = (*v1)[274];
      v5 = v3[275];
      j_operator delete[](ptr);
    }
    else
      v4 = v11;
  }
  else
    v6 = *v1;
    v4 = (*v1)[274];
    v7 = v6[275];
    if ( !v2 )
      return v4;
  (*(void (__fastcall **)(_DWORD *))(*v2 + 4))(v2);
  return v4;
}


RakNet *__fastcall leveldb::SetCurrentFile(__int64 a1, int *a2)
{
  int *v2; // r10@1
  unsigned int v3; // r0@1
  int v4; // r4@1
  int v5; // r9@1
  int v6; // r8@1
  unsigned int v7; // r0@1
  void **v8; // r0@1
  const void **v9; // r0@1
  int v10; // r4@1
  void *v11; // r0@2
  void (__fastcall *v12)(leveldb::Status **, _DWORD, int *, int *); // r4@4
  leveldb::Status *v13; // r0@4
  leveldb::Status *v14; // r1@4
  void *v15; // r1@8
  void *v16; // r0@13
  void *v17; // r0@17
  void *v18; // r0@18
  RakNet *result; // r0@19
  unsigned int *v20; // r1@21
  signed int v21; // r0@23
  unsigned int *v22; // r2@25
  signed int v23; // r1@27
  unsigned int *v24; // r2@29
  signed int v25; // r1@31
  unsigned int *v26; // r2@33
  signed int v27; // r1@35
  unsigned int *v28; // r2@52
  signed int v29; // r1@54
  __int64 v30; // [sp+Ch] [bp-28h]@1
  void *ptr; // [sp+14h] [bp-20h]@15
  int v32; // [sp+18h] [bp-1Ch]@4
  leveldb::Status *v33; // [sp+1Ch] [bp-18h]@4
  int v34; // [sp+20h] [bp-14h]@1
  int v35; // [sp+24h] [bp-10h]@1
  int v36; // [sp+28h] [bp-Ch]@1
  int v37; // [sp+2Ch] [bp-8h]@1
  int v38; // [sp+30h] [bp-4h]@1
  char v39; // [sp+34h] [bp+0h]@1
  RakNet *v40; // [sp+98h] [bp+64h]@1

  v30 = a1;
  v2 = a2;
  v40 = _stack_chk_guard;
  j_snprintf(&v39, 0x64u, "/MANIFEST-%06llu");
  sub_21E8AF4(&v38, v2);
  v3 = j_strlen_0(&v39);
  sub_21E7408((const void **)&v38, &v39, v3);
  v4 = v38;
  v5 = *(_DWORD *)(*v2 - 12);
  v6 = *(_DWORD *)(v38 - 12);
  j_snprintf(&v39, 0x64u, "/%06llu.%s");
  sub_21E8AF4(&v37, v2);
  v7 = j_strlen_0(&v39);
  sub_21E7408((const void **)&v37, &v39, v7);
  v8 = sub_21E91E0((void **)&v34, v4 + v5 + 1, v6 - (v5 + 1));
  v9 = sub_21E7408((const void **)v8, "\n", 1u);
  v10 = (int)*v9;
  *v9 = &unk_28898CC;
  v35 = v10;
  v36 = *(_DWORD *)(v10 - 12);
  j_leveldb::WriteStringToFileSync((leveldb::Status **)v30, SHIDWORD(v30), (int)&v35, (int)&v37);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v20 = (unsigned int *)(v10 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    }
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9((void *)(v10 - 12));
  }
  v11 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v34 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  if ( *(_DWORD *)v30 )
    goto LABEL_62;
  v12 = *(void (__fastcall **)(leveldb::Status **, _DWORD, int *, int *))(*(_DWORD *)HIDWORD(v30) + 48);
  sub_21E8AF4(&v32, v2);
  sub_21E7408((const void **)&v32, "/CURRENT", 8u);
  v12(&v33, HIDWORD(v30), &v37, &v32);
  v13 = *(leveldb::Status **)v30;
  v14 = v33;
  if ( *(leveldb::Status **)v30 != v33 )
    if ( v13 )
      j_operator delete[]((void *)v13);
      v14 = v33;
    if ( v14 )
      v15 = j_leveldb::Status::CopyState(v14, (const char *)v14);
      v13 = v33;
      v13 = 0;
      v15 = 0;
    *(_DWORD *)v30 = v15;
  if ( v13 )
    j_operator delete[]((void *)v13);
  v16 = (void *)(v32 - 12);
  if ( (int *)(v32 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v32 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
LABEL_62:
    (*(void (__fastcall **)(void **, _DWORD, int *))(*(_DWORD *)HIDWORD(v30) + 32))(&ptr, HIDWORD(v30), &v37);
    if ( ptr )
      j_operator delete[](ptr);
  v17 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v37 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v38 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  result = (RakNet *)(_stack_chk_guard - v40);
  if ( _stack_chk_guard != v40 )
    j___stack_chk_fail_0((int)result);
  return result;
}


leveldb::Table *__fastcall leveldb::Table::~Table(leveldb::Table *this)
{
  leveldb::Table *v1; // r4@1
  int v2; // r5@1
  void *v3; // r0@2
  void *v4; // r0@4
  int v5; // r0@6
  void *v6; // r0@7
  void *v7; // r0@8

  v1 = this;
  v2 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    v3 = *(void **)(v2 + 1088);
    if ( v3 )
      j_operator delete(v3);
    v4 = *(void **)(v2 + 1092);
    if ( v4 )
      j_operator delete[](v4);
    v5 = *(_DWORD *)(v2 + 1112);
    if ( v5 )
    {
      v6 = (void *)j_leveldb::Block::~Block(v5);
      j_operator delete(v6);
    }
    v7 = *(void **)(v2 + 1072);
    if ( v7 )
      j_operator delete[](v7);
    j_operator delete((void *)v2);
  }
  return v1;
}


leveldb::Iterator *__fastcall leveldb::DBImpl::TEST_NewInternalIterator(leveldb::DBImpl *this)
{
  char v2; // [sp+0h] [bp-20h]@1
  char v3; // [sp+1h] [bp-1Fh]@1
  int v4; // [sp+4h] [bp-1Ch]@1
  int v5; // [sp+8h] [bp-18h]@1
  char v6; // [sp+Ch] [bp-14h]@1
  char v7; // [sp+10h] [bp-10h]@1

  v2 = 0;
  v3 = 1;
  v4 = 0;
  v5 = 0;
  return j_leveldb::DBImpl::NewInternalIterator((int)this, (int)&v2, &v7, (int *)&v6);
}


signed int __fastcall leveldb::ZlibCompressorBase::inflate(int a1, int a2, int a3, const void **a4)
{
  const void **v4; // r4@1
  signed int v5; // r1@1
  signed int v6; // r5@3
  int v7; // r1@4
  int v8; // r2@4
  void (__fastcall *v9)(_DWORD, int); // r3@4
  int v10; // r1@7
  int v11; // r2@7
  void (__fastcall *v12)(_DWORD, int); // r3@7
  RakNet *v14; // [sp+4h] [bp-10064h]@1
  __int64 v15; // [sp+8h] [bp-10060h]@1
  char *v16; // [sp+14h] [bp-10054h]@4
  int v17; // [sp+18h] [bp-10050h]@4
  int v18; // [sp+28h] [bp-10040h]@1
  int v19; // [sp+2Ch] [bp-1003Ch]@1
  int v20; // [sp+30h] [bp-10038h]@1
  char v21; // [sp+40h] [bp-10028h]@4

  v4 = a4;
  v14 = _stack_chk_guard;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v15 = *(_QWORD *)&a2;
  v5 = 15;
  if ( *(_BYTE *)(a1 + 32) )
    v5 = -15;
  v6 = j_j_inflateInit2_((int)&v15, v5, "1.2.8", 56);
  if ( !v6 )
  {
    while ( 1 )
    {
      v16 = &v21;
      v17 = 0x10000;
      v6 = j_j_inflate((int)&v15, 0);
      if ( v6 == 2 )
        v6 = -3;
      if ( v6 <= -1 )
        break;
      sub_21E7408(v4, &v21, 0x10000 - v17);
      if ( v6 == 1 && v17 )
      {
        j_j_inflateEnd((int)&v15, v10, v11, v12);
        v6 = 0;
        goto LABEL_11;
      }
    }
    j_j_inflateEnd((int)&v15, v7, v8, v9);
  }
LABEL_11:
  if ( _stack_chk_guard != v14 )
    j___stack_chk_fail_0(_stack_chk_guard - v14);
  return v6;
}


int __fastcall leveldb::Block::~Block(int a1)
{
  int v1; // r4@1

  v1 = a1;
  if ( *(_BYTE *)(a1 + 12) && *(_DWORD *)a1 )
    j_operator delete[](*(void **)a1);
  return v1;
}


RakNet *__fastcall leveldb::TempFileName(int *a1, int *a2)
{
  int *v2; // r5@1
  int *v3; // r4@1
  unsigned int v4; // r0@1
  RakNet *result; // r0@1
  char s; // [sp+10h] [bp-78h]@1
  RakNet *v7; // [sp+74h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  v7 = _stack_chk_guard;
  j_snprintf(&s, 0x64u, "/%06llu.%s");
  sub_21E8AF4(v2, v3);
  v4 = j_strlen_0(&s);
  sub_21E7408((const void **)v2, &s, v4);
  result = (RakNet *)(_stack_chk_guard - v7);
  if ( _stack_chk_guard != v7 )
    j___stack_chk_fail_0((int)result);
  return result;
}


leveldb::VersionSet *__fastcall leveldb::VersionSet::~VersionSet(leveldb::VersionSet *this)
{
  leveldb::VersionSet *v1; // r5@1
  int v2; // r0@1
  int v3; // r1@1
  leveldb::Version *v4; // r0@3
  leveldb::log::Writer *v5; // r0@4
  void *v6; // r0@5
  int v7; // r0@6
  int v8; // r1@8
  void *v9; // r0@8
  int v10; // r1@9
  void *v11; // r0@9
  int v12; // r1@10
  void *v13; // r0@10
  int v14; // r1@11
  void *v15; // r0@11
  int v16; // r1@12
  void *v17; // r0@12
  int v18; // r1@13
  void *v19; // r0@13
  int v20; // r1@14
  void *v21; // r0@14
  int v22; // r1@15
  void *v23; // r0@15
  unsigned int *v25; // r2@17
  signed int v26; // r1@19
  unsigned int *v27; // r2@21
  signed int v28; // r1@23
  unsigned int *v29; // r2@25
  signed int v30; // r1@27
  unsigned int *v31; // r2@29
  signed int v32; // r1@31
  unsigned int *v33; // r2@33
  signed int v34; // r1@35
  unsigned int *v35; // r2@37
  signed int v36; // r1@39
  unsigned int *v37; // r2@41
  signed int v38; // r1@43
  unsigned int *v39; // r2@45
  signed int v40; // r1@47

  v1 = this;
  v2 = *((_DWORD *)this + 50);
  v3 = *(_DWORD *)(v2 + 12) - 1;
  *(_DWORD *)(v2 + 12) = v3;
  if ( v2 && !v3 )
  {
    v4 = j_leveldb::Version::~Version((leveldb::Version *)v2);
    j_operator delete((void *)v4);
  }
  v5 = (leveldb::log::Writer *)*((_DWORD *)v1 + 17);
  if ( v5 )
    v6 = (void *)j_leveldb::log::Writer::~Writer(v5);
    j_operator delete(v6);
  v7 = *((_DWORD *)v1 + 16);
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  v8 = *((_DWORD *)v1 + 57);
  v9 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v8 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    }
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = *((_DWORD *)v1 + 56);
  v11 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v10 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = *((_DWORD *)v1 + 55);
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v12 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = *((_DWORD *)v1 + 54);
  v15 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v14 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = *((_DWORD *)v1 + 53);
  v17 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v16 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  v18 = *((_DWORD *)v1 + 52);
  v19 = (void *)(v18 - 12);
  if ( (int *)(v18 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v18 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = *((_DWORD *)v1 + 51);
  v21 = (void *)(v20 - 12);
  if ( (int *)(v20 - 12) != &dword_28898C0 )
    v37 = (unsigned int *)(v20 - 4);
        v38 = __ldrex(v37);
      while ( __strex(v38 - 1, v37) );
      v38 = (*v37)--;
    if ( v38 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  j_leveldb::Version::~Version((leveldb::VersionSet *)((char *)v1 + 72));
  j_leveldb::Comparator::~Comparator((leveldb::VersionSet *)((char *)v1 + 16));
  v22 = *((_DWORD *)v1 + 1);
  v23 = (void *)(v22 - 12);
  if ( (int *)(v22 - 12) != &dword_28898C0 )
    v39 = (unsigned int *)(v22 - 4);
        v40 = __ldrex(v39);
      while ( __strex(v40 - 1, v39) );
      v40 = (*v39)--;
    if ( v40 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  return v1;
}


int __fastcall leveldb::InternalKeyComparator::Compare(int a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  int v3; // r0@1
  unsigned __int64 *v4; // r4@1
  unsigned __int64 *v5; // r5@1
  unsigned __int64 v6; // r2@1 OVERLAPPED
  int (__cdecl *v7)(int, int *, int *, _DWORD); // r12@1
  int v8; // r1@1
  __int64 v9; // r0@1
  unsigned __int64 v10; // kr00_8@2
  signed int v11; // r4@2
  int v12; // r0@2
  unsigned int v13; // r2@2
  unsigned int v14; // r12@2
  unsigned int v15; // r5@2
  unsigned int v16; // r3@2
  int v18; // [sp+0h] [bp-20h]@1
  int v19; // [sp+4h] [bp-1Ch]@1
  int v20; // [sp+8h] [bp-18h]@1
  int v21; // [sp+Ch] [bp-14h]@1

  v3 = *(_DWORD *)(a1 + 4);
  v4 = a2;
  v5 = a3;
  v6 = *a2;
  v7 = *(int (__cdecl **)(int, int *, int *, _DWORD))(*(_DWORD *)v3 + 8);
  v8 = (*a2 >> 32) - 8;
  v20 = v6;
  v21 = v8;
  *(unsigned __int64 *)((char *)&v6 - 4) = *v5;
  v18 = *v5;
  v19 = v6 - 8;
  LODWORD(v9) = v7(v3, &v20, &v18, HIDWORD(v6));
  if ( !(_DWORD)v9 )
  {
    v10 = *v4;
    v11 = 0;
    v12 = *v5 + (*v5 >> 32);
    v13 = *(_DWORD *)(v12 - 8);
    v14 = *(_DWORD *)(v12 - 4);
    v9 = (unsigned int)(v10 + HIDWORD(v10));
    v15 = *(_DWORD *)(v10 + HIDWORD(v10) - 8);
    v16 = *(_DWORD *)(v9 - 4);
    LODWORD(v9) = 0;
    if ( v15 > v13 )
      v11 = 1;
    if ( v16 > v14 )
      HIDWORD(v9) = 1;
    if ( v16 == v14 )
      HIDWORD(v9) = v11;
    if ( HIDWORD(v9) )
    {
      LODWORD(v9) = -1;
    }
    else
      HIDWORD(v9) = 0;
      if ( v15 < v13 )
        HIDWORD(v9) = 1;
      if ( v16 < v14 )
        LODWORD(v9) = 1;
      if ( v16 == v14 )
        LODWORD(v9) = HIDWORD(v9);
  }
  return v9;
}


void __fastcall leveldb::SequentialFileEncrypted::~SequentialFileEncrypted(leveldb::SequentialFileEncrypted *this)
{
  void *v1; // r0@1

  v1 = (void *)j_leveldb::SequentialFileEncrypted::~SequentialFileEncrypted(this);
  j_j_j__ZdlPv_7(v1);
}


void __fastcall leveldb::Footer::DecodeFrom(_DWORD *a1, _QWORD *a2, int a3)
{
  leveldb::Footer::DecodeFrom(a1, a2, a3);
}


void __fastcall leveldb::InternalKeyComparator::~InternalKeyComparator(leveldb::InternalKeyComparator *this)
{
  leveldb::InternalKeyComparator::~InternalKeyComparator(this);
}


void __fastcall leveldb::Version::Get(void **a1, int a2, int a3, int a4, int a5, int a6)
{
  leveldb::Version::Get(a1, a2, a3, a4, a5, a6);
}


RakNet *__fastcall leveldb::TableFileName(int *a1, int *a2)
{
  int *v2; // r5@1
  int *v3; // r4@1
  unsigned int v4; // r0@1
  RakNet *result; // r0@1
  char s; // [sp+10h] [bp-78h]@1
  RakNet *v7; // [sp+74h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  v7 = _stack_chk_guard;
  j_snprintf(&s, 0x64u, "/%06llu.%s");
  sub_21E8AF4(v2, v3);
  v4 = j_strlen_0(&s);
  sub_21E7408((const void **)v2, &s, v4);
  result = (RakNet *)(_stack_chk_guard - v7);
  if ( _stack_chk_guard != v7 )
    j___stack_chk_fail_0((int)result);
  return result;
}


leveldb::Iterator *__fastcall leveldb::DBImpl::NewInternalIterator(int a1, int a2, _QWORD *a3, int *a4)
{
  int v4; // r5@1
  int *v5; // r9@1
  _QWORD *v6; // r4@1
  leveldb::port::Mutex *v7; // r10@1
  _DWORD *v8; // r8@1
  __int64 v9; // r6@1
  _DWORD *v10; // r0@1
  void *v11; // r4@1
  leveldb::MemTable *v12; // r0@1
  int v13; // r11@2
  int v14; // r0@2
  int v15; // r3@5
  leveldb::Iterator *v16; // r4@5
  int v17; // r0@5
  int v19; // [sp+4h] [bp-34h]@2
  void *ptr; // [sp+8h] [bp-30h]@1
  char *v21; // [sp+Ch] [bp-2Ch]@1
  _DWORD *v22; // [sp+10h] [bp-28h]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  HIDWORD(v9) = a2;
  v7 = (leveldb::port::Mutex *)(a1 + 1112);
  v8 = j_operator new(0x10u);
  j_leveldb::port::Mutex::Lock(v7);
  *v6 = *(_QWORD *)(*(_DWORD *)(v4 + 1276) + 40);
  LODWORD(v9) = j_leveldb::MemTable::NewIterator(*(leveldb::MemTable **)(v4 + 1128));
  v10 = j_operator new(4u);
  v11 = v10;
  *v10 = v9;
  ++v10;
  ptr = v11;
  v21 = (char *)v10;
  v22 = v10;
  ++*(_DWORD *)(*(_DWORD *)(v4 + 1128) + 8);
  v12 = *(leveldb::MemTable **)(v4 + 1132);
  if ( v12 )
  {
    v19 = HIDWORD(v9);
    v13 = j_leveldb::MemTable::NewIterator(v12);
    LODWORD(v9) = j_operator new(8u);
    v14 = *(_DWORD *)v11;
    *(_DWORD *)(v9 + 4) = v13;
    *(_DWORD *)v9 = v14;
    if ( v11 )
      j_operator delete(v11);
    HIDWORD(v9) = v9 + 8;
    *(_QWORD *)&ptr = v9;
    v22 = (_DWORD *)(v9 + 8);
    HIDWORD(v9) = v19;
    ++*(_DWORD *)(*(_DWORD *)(v4 + 1132) + 8);
  }
  j_leveldb::Version::AddIterators(*(_DWORD *)(*(_DWORD *)(v4 + 1276) + 200), SHIDWORD(v9), (int)&ptr);
  v16 = (leveldb::Iterator *)j_leveldb::NewMergingIterator(
                               (leveldb *)(v4 + 8),
                               (const leveldb::Comparator *)ptr,
                               (leveldb::Iterator **)((v21 - (_BYTE *)ptr) >> 2),
                               v15);
  j_leveldb::Version::Ref(*(leveldb::Version **)(*(_DWORD *)(v4 + 1276) + 200));
  *v8 = v7;
  v8[2] = *(_DWORD *)(v4 + 1128);
  v8[3] = *(_DWORD *)(v4 + 1132);
  v8[1] = *(_DWORD *)(*(_DWORD *)(v4 + 1276) + 200);
  j_leveldb::Iterator::RegisterCleanup(v16, (void (__cdecl *)(void *, void *))sub_1B36A68, v8, 0);
  v17 = *(_DWORD *)(v4 + 1156) + 1;
  *(_DWORD *)(v4 + 1156) = v17;
  *v5 = v17;
  j_leveldb::port::Mutex::Unlock((leveldb::port::Mutex *)(v4 + 1112));
  if ( ptr )
    j_operator delete(ptr);
  return v16;
}


void __fastcall leveldb::DBImpl::OpenCompactionOutputFile(_DWORD *a1, int a2, int a3)
{
  int v3; // r8@1
  leveldb::port::Mutex *v4; // r9@1
  int v5; // r10@1
  int v6; // r0@1
  __int64 v7; // r6@1
  int v8; // r4@1
  __int64 v9; // r1@1
  int v10; // r2@1
  signed int v11; // r2@2
  __int64 v12; // kr08_8@2
  signed int v13; // r3@2
  int *v14; // r2@8
  signed int v15; // r1@11
  signed int v16; // r2@13
  int v17; // r0@13
  signed int v18; // r2@20
  bool v19; // cf@20
  __int64 v20; // r0@20
  int v21; // r5@29
  __int64 v22; // r0@29
  _QWORD *v23; // r0@37
  __int64 v24; // kr10_8@38
  int v25; // r1@39
  int v26; // r2@39
  int v27; // r3@39
  char *v28; // r0@41
  char *v29; // r0@42
  _DWORD *v30; // r0@44
  void *v31; // r0@45
  unsigned int *v32; // r2@47
  signed int v33; // r1@49
  unsigned int *v34; // r2@51
  signed int v35; // r1@53
  unsigned int *v36; // r2@55
  signed int v37; // r1@57
  _DWORD *v38; // [sp+4h] [bp-44h]@1
  __int64 v39; // [sp+8h] [bp-40h]@38
  int v40; // [sp+10h] [bp-38h]@39
  int v41; // [sp+14h] [bp-34h]@39
  char *v42; // [sp+18h] [bp-30h]@38
  _BYTE **v43; // [sp+1Ch] [bp-2Ch]@38

  v3 = a2;
  v4 = (leveldb::port::Mutex *)(a2 + 1112);
  v38 = a1;
  v5 = a3;
  j_leveldb::port::Mutex::Lock((leveldb::port::Mutex *)(a2 + 1112));
  v6 = *(_DWORD *)(v3 + 1276);
  v7 = *(_QWORD *)(v6 + 24);
  v8 = v3 + 1244;
  HIDWORD(v9) = (unsigned __int64)(v7 + 1) >> 32;
  LODWORD(v9) = v7 + 1;
  *(_QWORD *)(v6 + 24) = v9;
  v10 = *(_DWORD *)(v3 + 1248);
  if ( !v10 )
    goto LABEL_73;
  do
  {
    v8 = v10;
    v11 = 0;
    v12 = *(_QWORD *)(v8 + 16);
    v13 = 0;
    if ( (unsigned int)v7 < (unsigned int)v12 )
      v11 = 1;
    if ( HIDWORD(v7) < HIDWORD(v12) )
      v13 = 1;
    if ( HIDWORD(v7) == HIDWORD(v12) )
      v13 = v11;
    v14 = (int *)(v8 + 12);
    if ( v13 )
      v14 = (int *)(v8 + 8);
    v10 = *v14;
  }
  while ( v10 );
  v15 = 0;
  if ( (unsigned int)v7 >= (unsigned int)v12 )
    v15 = 1;
  v16 = 0;
  v17 = v8;
  if ( HIDWORD(v7) >= HIDWORD(v12) )
    v16 = 1;
  if ( HIDWORD(v7) == HIDWORD(v12) )
    v16 = v15;
  if ( !v16 )
LABEL_73:
    if ( v8 == *(_DWORD *)(v3 + 1252) )
    {
LABEL_27:
      if ( v8 )
      {
        if ( v3 + 1244 == v8 )
        {
          v21 = 1;
        }
        else
          v22 = *(_QWORD *)(v8 + 16);
          v21 = 0;
          v19 = (unsigned int)v7 >= (unsigned int)v22;
          LODWORD(v22) = 0;
          if ( !v19 )
            LODWORD(v22) = 1;
          if ( HIDWORD(v7) < HIDWORD(v22) )
            v21 = 1;
          if ( HIDWORD(v7) == HIDWORD(v22) )
            v21 = v22;
        v23 = j_operator new(0x18u);
        v23[2] = v7;
        sub_21D4928(v21, (int)v23, v8, v3 + 1244);
        ++*(_DWORD *)(v3 + 1260);
      }
      goto LABEL_38;
    }
    v17 = sub_21D4858(v8);
  v20 = *(_QWORD *)(v17 + 16);
  v18 = 0;
  v19 = (unsigned int)v20 >= (unsigned int)v7;
  LODWORD(v20) = 0;
  if ( v19 )
    LODWORD(v20) = 1;
  if ( HIDWORD(v20) >= HIDWORD(v7) )
    v18 = 1;
  if ( HIDWORD(v20) == HIDWORD(v7) )
    v18 = v20;
  if ( !v18 )
    goto LABEL_27;
LABEL_38:
  v42 = (char *)&unk_28898CC;
  v43 = (_BYTE **)&unk_28898CC;
  v39 = v7;
  sub_21E7EE0((const void **)&v42, 0, (_BYTE *)dword_28898C0, 0);
  sub_21E7EE0((const void **)&v43, 0, *(v43 - 3), 0);
  v24 = *(_QWORD *)(v5 + 20);
  if ( (_DWORD)v24 == HIDWORD(v24) )
    j_std::vector<leveldb::DBImpl::CompactionState::Output,std::allocator<leveldb::DBImpl::CompactionState::Output>>::_M_emplace_back_aux<leveldb::DBImpl::CompactionState::Output const&>(
      (unsigned __int64 *)(v5 + 16),
      (int)&v39);
  else
    v25 = HIDWORD(v39);
    v26 = v40;
    v27 = v41;
    *(_DWORD *)v24 = v39;
    *(_DWORD *)(v24 + 4) = v25;
    *(_DWORD *)(v24 + 8) = v26;
    *(_DWORD *)(v24 + 12) = v27;
    sub_21E8AF4((int *)(v24 + 16), (int *)&v42);
    sub_21E8AF4((int *)(v24 + 20), (int *)&v43);
    *(_DWORD *)(v5 + 20) += 24;
  j_leveldb::port::Mutex::Unlock(v4);
  v28 = (char *)(v43 - 3);
  if ( (int *)(v43 - 3) != &dword_28898C0 )
    v32 = (unsigned int *)(v43 - 1);
    if ( &pthread_create )
      __dmb();
      do
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
    else
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v29 = v42 - 12;
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v34 = (unsigned int *)(v42 - 4);
        v35 = __ldrex(v34);
      while ( __strex(v35 - 1, v34) );
      v35 = (*v34)--;
    if ( v35 <= 0 )
      j_j_j_j__ZdlPv_9(v29);
  j_leveldb::TableFileName((int *)&v39, (int *)(v3 + 1100));
  (*(void (__fastcall **)(_DWORD *))(**(_DWORD **)(v3 + 4) + 16))(v38);
  if ( !*v38 )
    v30 = j_operator new(4u);
    *(_DWORD *)(v5 + 32) = j_leveldb::TableBuilder::TableBuilder(v30, v3 + 24, *(_DWORD *)(v5 + 28));
  v31 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v39 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
}


int __fastcall leveldb::Compaction::ReleaseInputs(leveldb::Compaction *this)
{
  leveldb::Compaction *v1; // r4@1
  int result; // r0@1
  int v3; // r1@2
  leveldb::Version *v4; // r0@3

  v1 = this;
  result = *((_DWORD *)this + 4);
  if ( result )
  {
    v3 = *(_DWORD *)(result + 12) - 1;
    *(_DWORD *)(result + 12) = v3;
    if ( !v3 )
    {
      v4 = j_leveldb::Version::~Version((leveldb::Version *)result);
      j_operator delete((void *)v4);
    }
    result = 0;
    *((_DWORD *)v1 + 4) = 0;
  }
  return result;
}


signed int __fastcall leveldb::Version::OverlapInLevel(int *a1, int a2, __int64 *a3, int a4)
{
  int v4; // lr@1
  int v5; // r3@1
  int *v6; // r0@1
  int v8; // [sp+0h] [bp-10h]@1

  v4 = *a1;
  v8 = a4;
  v5 = 0;
  v6 = &a1[3 * a2];
  if ( a2 > 0 )
    v5 = 1;
  return j_leveldb::SomeFileOverlapsRange(v4 + 16, v5, (unsigned __int64 *)v6 + 2, a3, v8);
}


leveldb::VersionEdit *__fastcall leveldb::VersionEdit::~VersionEdit(leveldb::VersionEdit *this)
{
  leveldb::VersionEdit *v1; // r11@1
  int v2; // r5@1 OVERLAPPED
  int v3; // r6@1 OVERLAPPED
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  int v8; // r1@19
  void *v9; // r0@19
  int v10; // r1@20
  void *v11; // r0@20
  int v12; // r5@25
  int v13; // r7@25
  unsigned int *v14; // r2@27
  signed int v15; // r1@29
  int v16; // r1@35
  void *v17; // r0@35
  int *v18; // r0@40
  unsigned int *v20; // r2@42
  signed int v21; // r1@44

  v1 = this;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 84);
  if ( v2 != v3 )
  {
    do
    {
      v8 = *(_DWORD *)(v2 + 36);
      v9 = (void *)(v8 - 12);
      if ( (int *)(v8 - 12) != &dword_28898C0 )
      {
        v4 = (unsigned int *)(v8 - 4);
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
          j_j_j_j__ZdlPv_9(v9);
      }
      v10 = *(_DWORD *)(v2 + 32);
      v11 = (void *)(v10 - 12);
      if ( (int *)(v10 - 12) != &dword_28898C0 )
        v6 = (unsigned int *)(v10 - 4);
            v7 = __ldrex(v6);
          while ( __strex(v7 - 1, v6) );
          v7 = (*v6)--;
        if ( v7 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
      v2 += 40;
    }
    while ( v2 != v3 );
    v2 = *((_DWORD *)v1 + 21);
  }
  if ( v2 )
    j_operator delete((void *)v2);
  j_std::_Rb_tree<std::pair<int,unsigned long long>,std::pair<int,unsigned long long>,std::_Identity<std::pair<int,unsigned long long>>,std::less<std::pair<int,unsigned long long>>,std::allocator<std::pair<int,unsigned long long>>>::_M_erase(
    (int)v1 + 60,
    *((_DWORD *)v1 + 17));
  v13 = *((_QWORD *)v1 + 6) >> 32;
  v12 = *((_QWORD *)v1 + 6);
  if ( v12 != v13 )
      v16 = *(_DWORD *)(v12 + 4);
      v17 = (void *)(v16 - 12);
      if ( (int *)(v16 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v16 - 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
      v12 += 8;
    while ( v12 != v13 );
    v12 = *((_DWORD *)v1 + 12);
  if ( v12 )
    j_operator delete((void *)v12);
  v18 = (int *)(*(_DWORD *)v1 - 12);
  if ( v18 != &dword_28898C0 )
    v20 = (unsigned int *)(*(_DWORD *)v1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
    else
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v18);
  return v1;
}


leveldb::Iterator *__fastcall leveldb::MemTableIterator::~MemTableIterator(leveldb::MemTableIterator *this)
{
  leveldb::Iterator *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2725C4C;
  v2 = *((_DWORD *)this + 7);
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
  j_leveldb::Iterator::~Iterator(v1);
  return v1;
}


int __fastcall leveldb::DBImpl::ReleaseSnapshot(leveldb::DBImpl *this, const leveldb::Snapshot *a2)
{
  leveldb::port::Mutex *v2; // r4@1
  const leveldb::Snapshot *v3; // r5@1
  __int64 v4; // r0@1

  v2 = (leveldb::DBImpl *)((char *)this + 1112);
  v3 = a2;
  j_leveldb::port::Mutex::Lock((leveldb::DBImpl *)((char *)this + 1112));
  v4 = *((_QWORD *)v3 + 2);
  *(_DWORD *)(v4 + 20) = HIDWORD(v4);
  *(_DWORD *)(*((_DWORD *)v3 + 5) + 16) = v4;
  if ( v3 )
    (*(void (__fastcall **)(const leveldb::Snapshot *))(*(_DWORD *)v3 + 4))(v3);
  return j_j_j__ZN7leveldb4port5Mutex6UnlockEv_0(v2);
}


int __fastcall leveldb::Version::LevelFileNumIterator::key(int result, int a2)
{
  int v2; // r1@1

  v2 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)*(_QWORD *)(a2 + 28) + 4 * (*(_QWORD *)(a2 + 28) >> 32)) + 28);
  *(_DWORD *)result = v2;
  *(_DWORD *)(result + 4) = *(_DWORD *)(v2 - 12);
  return result;
}


void __fastcall leveldb::MemTableIterator::Seek(int a1, int a2)
{
  const void **v2; // r6@1
  int v3; // r4@1
  int v4; // r5@1
  const void *v5; // r6@1
  _DWORD *v6; // r11@1
  int v7; // r0@1
  int v8; // r9@3
  _DWORD *v9; // r8@4
  unsigned int *v10; // r3@4
  unsigned __int64 v11; // r0@5
  int v12; // [sp+4h] [bp-44h]@1
  unsigned __int64 v13; // [sp+10h] [bp-38h]@6
  unsigned __int64 v14; // [sp+18h] [bp-30h]@8
  char v15[4]; // [sp+20h] [bp-28h]@9

  v12 = a1;
  v2 = (const void **)(a1 + 28);
  v3 = a2;
  sub_21E7EE0((const void **)(a1 + 28), 0, *(_BYTE **)(*(_DWORD *)(a1 + 28) - 12), 0);
  j_leveldb::PutVarint32(v2, *(_DWORD *)(v3 + 4));
  sub_21E7408(v2, (char *)*(_QWORD *)v3, *(_QWORD *)v3 >> 32);
  v4 = (int)*(v2 - 2);
  v5 = *v2;
  v6 = (_DWORD *)*(_QWORD *)(v4 + 12);
  v7 = (*(_QWORD *)(v4 + 12) >> 32) - 1;
LABEL_3:
  v8 = v7 + 1;
  do
  {
    v9 = (_DWORD *)v6[v8];
    vFFFF0FA0();
    if ( v9 )
    {
      LODWORD(v11) = *v9;
      HIDWORD(v11) = *(_BYTE *)*v9;
      if ( BYTE4(v11) & 0x80 )
      {
        LODWORD(v11) = j_leveldb::GetVarint32PtrFallback(
                         (leveldb *)v11,
                         (const char *)(v11 + 5),
                         (const char *)&v13,
                         v10);
        HIDWORD(v11) = v13;
      }
      else
        LODWORD(v13) = *(_BYTE *)*v9;
        LODWORD(v11) = v11 + 1;
      v14 = v11;
      HIDWORD(v11) = *(_BYTE *)v5;
        LODWORD(v11) = j_leveldb::GetVarint32PtrFallback((leveldb *)v5, (const char *)v5 + 5, v15, v10);
        HIDWORD(v11) = *(_DWORD *)v15;
        *(_DWORD *)v15 = *(_BYTE *)v5;
        LODWORD(v11) = (char *)v5 + 1;
      v13 = v11;
      if ( j_leveldb::InternalKeyComparator::Compare(v4, &v14, &v13) < 0 )
        v7 = v8 - 1;
        v6 = v9;
        goto LABEL_3;
    }
    --v8;
  }
  while ( v8 );
  *(_DWORD *)(v12 + 24) = v9;
}


int __fastcall leveldb::TableCache::TableCache(int a1, int *a2, int a3, leveldb *a4)
{
  int v4; // r5@1
  int v5; // r6@1
  leveldb *v6; // r4@1
  unsigned int v7; // r1@1

  v4 = a3;
  v5 = a1;
  v6 = a4;
  *(_DWORD *)a1 = *(_DWORD *)(a3 + 8);
  sub_21E8AF4((int *)(a1 + 4), a2);
  *(_DWORD *)(v5 + 8) = v4;
  *(_DWORD *)(v5 + 12) = j_leveldb::NewLRUCache(v6, v7);
  return v5;
}


RakNet *__fastcall leveldb::Status::ToString(leveldb::Status *this, unsigned int **a2)
{
  void **v2; // r4@1
  unsigned int **v3; // r5@1
  unsigned int v4; // r3@2
  char *v5; // r6@3
  RakNet *result; // r0@7
  char s; // [sp+6h] [bp-32h]@5
  RakNet *v8; // [sp+24h] [bp-14h]@1

  v2 = (void **)this;
  v3 = a2;
  v8 = _stack_chk_guard;
  if ( *a2 )
  {
    v4 = *((_BYTE *)*a2 + 4);
    if ( v4 >= 6 )
    {
      v5 = &s;
      j_snprintf(&s, 0x1Eu, "Unknown code(%d): ");
    }
    else
      v5 = off_27260F0[v4];
    sub_21E94B4(v2, v5);
    sub_21E7408((const void **)v2, (char *)*v3 + 5, **v3);
  }
  else
    sub_21E94B4((void **)this, "OK");
  result = (RakNet *)(_stack_chk_guard - v8);
  if ( _stack_chk_guard != v8 )
    j___stack_chk_fail_0((int)result);
  return result;
}


signed int __fastcall leveldb::log::Reader::ReadPhysicalRecord(int a1, int a2, int a3, unsigned int a4)
{
  int v4; // r4@1
  int v5; // r7@1
  unsigned int v6; // r6@1
  _QWORD *v7; // r5@2
  __int64 v8; // r10@2
  int v9; // r0@3
  int v10; // ST00_4@4
  unsigned int v11; // r1@4
  void *v12; // r0@4
  bool v13; // cf@5
  char *v14; // r5@9
  _BYTE *v15; // r1@9
  signed int v16; // r10@9
  unsigned int v17; // r9@9
  int v18; // r7@9
  bool v19; // zf@12
  int v20; // r0@17
  unsigned int v21; // r7@18
  unsigned int v22; // r5@18
  __int64 v23; // kr08_8@18
  signed int v24; // r4@18
  signed int v25; // r3@18
  signed int v26; // r2@30
  int v27; // r7@30
  __int64 v28; // kr10_8@31
  unsigned int v29; // r1@31
  unsigned int v30; // kr18_4@31
  signed int v31; // r3@31
  char *v32; // r0@39
  int v33; // off@40
  __int64 v34; // r0@42
  __int64 v35; // kr30_8@42
  unsigned __int64 v36; // kr40_8@42
  signed int v37; // r3@42
  signed int v38; // r1@44
  void *v39; // r0@51
  unsigned int v40; // r5@54
  int v41; // r0@54
  unsigned int v42; // r7@55
  unsigned int v43; // r6@55
  __int64 v44; // kr48_8@55
  signed int v45; // r4@55
  signed int v46; // r3@55
  int v48; // [sp+4h] [bp-3Ch]@1
  void *v49; // [sp+8h] [bp-38h]@17
  int v50; // [sp+Ch] [bp-34h]@17
  void *v51; // [sp+10h] [bp-30h]@4
  int v52; // [sp+14h] [bp-2Ch]@17
  void *ptr; // [sp+18h] [bp-28h]@17

  v4 = a1;
  v5 = a1 + 16;
  v6 = *(_DWORD *)(a1 + 20);
  v48 = a2;
  if ( v6 >= 7 )
  {
LABEL_9:
    v14 = *(char **)v5;
    v15 = (_BYTE *)(*(_DWORD *)v5 + 6);
    v16 = *v15;
    v17 = *(_BYTE *)(*(_DWORD *)v5 + 4) | (*(_BYTE *)(*(_DWORD *)v5 + 5) << 8);
    v18 = v17 + 7;
    if ( v17 + 7 > v6 )
    {
      *(_DWORD *)(v4 + 16) = &unk_257BC67;
      *(_DWORD *)(v4 + 20) = 0;
      if ( *(_BYTE *)(v4 + 24) )
      {
        v16 = 5;
      }
      else
        v51 = "bad record length";
        v52 = 17;
        v49 = &unk_257BC67;
        v50 = 0;
        j_leveldb::Status::Status(&ptr, 2, (int)&v51, (int)&v49);
        v20 = *(_DWORD *)(v4 + 4);
        if ( v20 )
        {
          v21 = *(_DWORD *)(v4 + 48);
          v22 = *(_DWORD *)(v4 + 52);
          v23 = *(_QWORD *)(v4 + 40) - v6 - *(_DWORD *)(v4 + 20);
          v24 = 0;
          v25 = 0;
          if ( HIDWORD(v23) < v22 )
            v24 = 1;
          if ( (unsigned int)v23 < v21 )
            v25 = 1;
          if ( HIDWORD(v23) != v22 )
            v25 = v24;
          if ( !v25 )
            (*(void (__cdecl **)(int))(*(_DWORD *)v20 + 8))(v20);
        }
        if ( ptr )
          j_operator delete[](ptr);
        v16 = 6;
      return v16;
    }
    v19 = v16 == 0;
    if ( !*v15 )
      v19 = v17 == 0;
    if ( v19 )
      v16 = 6;
      *(_QWORD *)(v4 + 16) = (unsigned int)&unk_257BC67;
    v32 = v14;
    if ( *(_BYTE *)(v4 + 8) )
      v33 = __ROR4__(*(_DWORD *)v14 + 1568478504, 17);
      if ( j_leveldb::crc32c::Extend(0, (unsigned int)v15, (const char *)(v17 + 1), a4) != v33 )
        v40 = *(_DWORD *)(v4 + 20);
        *(_DWORD *)(v4 + 16) = &unk_257BC67;
        *(_DWORD *)(v4 + 20) = 0;
        v51 = "checksum mismatch";
        v41 = *(_DWORD *)(v4 + 4);
        if ( v41 )
          v42 = *(_DWORD *)(v4 + 48);
          v43 = *(_DWORD *)(v4 + 52);
          v44 = *(_QWORD *)(v4 + 40) - v40 - *(_DWORD *)(v4 + 20);
          v45 = 0;
          v46 = 0;
          if ( HIDWORD(v44) < v43 )
            v45 = 1;
          if ( (unsigned int)v44 < v42 )
            v46 = 1;
          if ( HIDWORD(v44) != v43 )
            v46 = v45;
          if ( !v46 )
            (*(void (__cdecl **)(int))(*(_DWORD *)v41 + 8))(v41);
        return 6;
      v6 = *(_QWORD *)(v4 + 16) >> 32;
      v32 = (char *)*(_QWORD *)(v4 + 16);
    HIDWORD(v34) = v6 - v18;
    LODWORD(v34) = &v32[v18];
    *(_QWORD *)(v4 + 16) = v34;
    v35 = *(_QWORD *)(v4 + 48);
    v36 = __PAIR__(-1 - (unsigned int)(v17 > 0xFFFFFFF9), -7 - v17) - (v6 - v18) + *(_QWORD *)(v4 + 40);
    v37 = 0;
    if ( HIDWORD(v36) >= HIDWORD(v35) )
      v37 = 1;
    v38 = 0;
    if ( (unsigned int)v36 >= (unsigned int)v35 )
      v38 = 1;
    if ( HIDWORD(v36) != HIDWORD(v35) )
      v38 = v37;
    if ( v38 )
      *(_DWORD *)v48 = v14 + 7;
      *(_DWORD *)(v48 + 4) = v17;
    else
      *(_DWORD *)v48 = &unk_257BC67;
      *(_DWORD *)(v48 + 4) = 0;
    return v16;
  }
  v7 = (_QWORD *)(a1 + 40);
  HIDWORD(v8) = 0;
  LODWORD(v8) = &unk_257BC67;
  while ( 1 )
    v9 = *(_BYTE *)(v4 + 24);
    *(_QWORD *)(v4 + 16) = v8;
    if ( v9 )
      return 5;
    v10 = *(_DWORD *)(v4 + 12);
    (*(void (__fastcall **)(void **))(**(_DWORD **)v4 + 8))(&v51);
    v6 = *(_DWORD *)(v4 + 20);
    v11 = (*v7 + (unsigned __int64)v6) >> 32;
    a4 = *(_DWORD *)v7 + v6;
    *(_DWORD *)v7 = a4;
    *(_DWORD *)(v4 + 44) = v11;
    v12 = v51;
    if ( v51 )
      break;
    v13 = v6 >= 0x8000;
    if ( v6 < 0x8000 )
      *(_BYTE *)(v4 + 24) = 1;
      v13 = v6 >= 7;
    if ( v13 )
      goto LABEL_9;
  v26 = 0;
  *(_DWORD *)(v4 + 16) = &unk_257BC67;
  *(_DWORD *)(v4 + 20) = 0;
  v27 = *(_DWORD *)(v4 + 4);
  if ( !v27 )
    goto LABEL_69;
  v28 = *(_QWORD *)(v4 + 48);
  v30 = a4 - 0x8000;
  v29 = (__PAIR__(v11, a4) - 0x8000) >> 32;
  v31 = 0;
  if ( v30 >= (unsigned int)v28 )
    v31 = 1;
  if ( v29 >= HIDWORD(v28) )
    v26 = 1;
  if ( v29 == HIDWORD(v28) )
    v26 = v31;
  if ( v26 )
    (*(void (__fastcall **)(_DWORD, signed int, void **))(*(_DWORD *)v27 + 8))(*(_DWORD *)(v4 + 4), 0x8000, &v51);
    v39 = v51;
    *(_BYTE *)(v4 + 24) = 1;
    if ( v39 )
      j_operator delete[](v39);
  else
LABEL_69:
    j_operator delete[](v12);
  return 5;
}


const void **__fastcall leveldb::VersionEdit::DebugString(leveldb::VersionEdit *this, int a2)
{
  const void **v2; // r4@1
  int v3; // r5@1
  unsigned int v4; // r0@1
  unsigned int v5; // r0@2
  __int64 v6; // r2@5
  unsigned int v7; // r0@6
  __int64 v8; // r2@7
  unsigned int v9; // r0@7
  __int64 v10; // r2@10
  __int64 v11; // r2@12
  unsigned int v12; // r7@14
  unsigned int *v13; // r2@15
  signed int v14; // r1@17
  int v15; // r2@23
  void *v16; // r0@23
  int i; // r6@25
  int v18; // r2@26
  __int64 v19; // r2@26
  int v20; // r6@27
  unsigned int v21; // r11@28
  unsigned int *v22; // r2@29
  signed int v23; // r1@31
  unsigned int *v24; // r2@33
  signed int v25; // r1@35
  int v26; // r2@45
  int v27; // r9@45
  __int64 v28; // r2@45
  __int64 v29; // r2@45
  void *v30; // r0@45
  void *v31; // r0@46
  int v33; // [sp+Ch] [bp-3Ch]@33
  int v34; // [sp+10h] [bp-38h]@29
  int v35; // [sp+14h] [bp-34h]@15

  v2 = (const void **)this;
  v3 = a2;
  *(_DWORD *)this = &unk_28898CC;
  sub_21E7408((const void **)this, "VersionEdit {", 0xDu);
  v4 = *(_WORD *)(v3 + 40);
  if ( (_BYTE)v4 )
  {
    sub_21E7408(v2, "\n  Comparator: ", 0xFu);
    sub_21E72F0(v2, (const void **)v3);
    v5 = *(_BYTE *)(v3 + 41);
  }
  else
    v5 = v4 >> 8;
  if ( v5 )
    sub_21E7408(v2, "\n  LogNumber: ", 0xEu);
    v6 = *(_QWORD *)(v3 + 8);
    j_leveldb::AppendNumberTo(v2);
  v7 = *(_WORD *)(v3 + 42);
  if ( (_BYTE)v7 )
    sub_21E7408(v2, "\n  PrevLogNumber: ", 0x12u);
    v8 = *(_QWORD *)(v3 + 16);
    v9 = *(_BYTE *)(v3 + 43);
    v9 = v7 >> 8;
  if ( v9 )
    sub_21E7408(v2, "\n  NextFile: ", 0xDu);
    v10 = *(_QWORD *)(v3 + 24);
  if ( *(_BYTE *)(v3 + 44) )
    sub_21E7408(v2, "\n  LastSeq: ", 0xCu);
    v11 = *(_QWORD *)(v3 + 32);
  if ( *(_QWORD *)(v3 + 48) >> 32 != (unsigned int)*(_QWORD *)(v3 + 48) )
    v12 = 0;
    do
    {
      sub_21E7408(v2, "\n  CompactPointer: ", 0x13u);
      v15 = *(_DWORD *)(*(_DWORD *)(v3 + 48) + 8 * v12);
      j_leveldb::AppendNumberTo(v2);
      sub_21E7408(v2, " ", 1u);
      j_leveldb::InternalKey::DebugString((leveldb::InternalKey *)&v35, (int *)(*(_DWORD *)(v3 + 48) + 8 * v12 + 4));
      sub_21E72F0(v2, (const void **)&v35);
      v16 = (void *)(v35 - 12);
      if ( (int *)(v35 - 12) != &dword_28898C0 )
      {
        v13 = (unsigned int *)(v35 - 4);
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
          j_j_j_j__ZdlPv_9(v16);
      }
      ++v12;
    }
    while ( v12 < (signed int)((*(_QWORD *)(v3 + 48) >> 32) - *(_QWORD *)(v3 + 48)) >> 3 );
  for ( i = *(_DWORD *)(v3 + 72); i != v3 + 64; i = sub_21D4820(i) )
    sub_21E7408(v2, "\n  DeleteFile: ", 0xFu);
    v18 = *(_DWORD *)(i + 16);
    sub_21E7408(v2, " ", 1u);
    v19 = *(_QWORD *)(i + 24);
  v20 = *(_QWORD *)(v3 + 84);
  if ( *(_QWORD *)(v3 + 84) >> 32 != v20 )
    v21 = 0;
      sub_21E7408(v2, "\n  AddFile: ", 0xCu);
      v26 = *(_DWORD *)(*(_DWORD *)(v3 + 84) + 40 * v21);
      v27 = v20 + 40 * v21;
      v28 = *(_QWORD *)(v27 + 16);
      v29 = *(_QWORD *)(v27 + 24);
      j_leveldb::InternalKey::DebugString((leveldb::InternalKey *)&v34, (int *)(v27 + 32));
      sub_21E72F0(v2, (const void **)&v34);
      v30 = (void *)(v34 - 12);
      if ( (int *)(v34 - 12) != &dword_28898C0 )
        v22 = (unsigned int *)(v34 - 4);
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j__ZdlPv_9(v30);
      sub_21E7408(v2, " .. ", 4u);
      j_leveldb::InternalKey::DebugString((leveldb::InternalKey *)&v33, (int *)(v27 + 36));
      sub_21E72F0(v2, (const void **)&v33);
      v31 = (void *)(v33 - 12);
      if ( (int *)(v33 - 12) != &dword_28898C0 )
        v24 = (unsigned int *)(v33 - 4);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j__ZdlPv_9(v31);
      v20 = *(_QWORD *)(v3 + 84);
      ++v21;
    while ( v21 < -858993459 * ((signed int)((*(_QWORD *)(v3 + 84) >> 32) - v20) >> 3) );
  return sub_21E7408(v2, "\n}\n", 3u);
}


void __fastcall leveldb::ReadBlock(_DWORD *a1, int a2, __int64 a3, int a4, int a5)
{
  int v5; // r4@1
  int v6; // r6@1
  void *v7; // r9@1
  unsigned int v8; // r3@1
  const char *v9; // r1@2
  void *v10; // r0@3
  unsigned int v11; // r5@5
  unsigned int v12; // r4@5
  int v13; // off@6
  int v14; // r0@7
  int v15; // r2@8
  int v16; // r4@9
  leveldb::Status *v17; // r1@14
  void *v18; // r0@14
  void *v19; // r1@18
  int v20; // r1@21
  void *v21; // r0@22
  int v22; // r4@23
  int v23; // r5@24
  void *v24; // r7@24
  int v25; // r0@24
  int v26; // r0@25
  signed int v27; // r5@27
  char *v28; // r0@29
  unsigned int *v29; // r2@45
  signed int v30; // r1@47
  unsigned int *v31; // r2@49
  signed int v32; // r1@51
  __int64 v33; // [sp+Ch] [bp-8Ch]@1
  _DWORD *v34; // [sp+14h] [bp-84h]@1
  void *v35; // [sp+18h] [bp-80h]@28
  int v36; // [sp+1Ch] [bp-7Ch]@28
  const char *v37; // [sp+20h] [bp-78h]@28
  int v38; // [sp+24h] [bp-74h]@28
  int v39; // [sp+28h] [bp-70h]@22
  _DWORD *v40; // [sp+2Ch] [bp-6Ch]@21
  void *v41; // [sp+30h] [bp-68h]@12
  int v42; // [sp+34h] [bp-64h]@12
  const char *v43; // [sp+38h] [bp-60h]@12
  int v44; // [sp+3Ch] [bp-5Ch]@12
  void *v45; // [sp+40h] [bp-58h]@14
  int v46; // [sp+44h] [bp-54h]@14
  const char *v47; // [sp+48h] [bp-50h]@14
  int v48; // [sp+4Ch] [bp-4Ch]@14
  leveldb::Status *v49; // [sp+50h] [bp-48h]@14
  void *v50; // [sp+54h] [bp-44h]@13
  int v51; // [sp+58h] [bp-40h]@13
  const char *v52; // [sp+5Ch] [bp-3Ch]@13
  int v53; // [sp+60h] [bp-38h]@13
  void *ptr; // [sp+64h] [bp-34h]@1
  unsigned int v55; // [sp+68h] [bp-30h]@1
  int v56; // [sp+6Ch] [bp-2Ch]@1

  v5 = a2;
  v33 = a3;
  v34 = a1;
  *(_DWORD *)a5 = &unk_257BC67;
  *(_DWORD *)(a5 + 4) = 0;
  *(_WORD *)(a5 + 8) = 0;
  v6 = *(_DWORD *)(a4 + 8);
  v55 = (unsigned int)&unk_257BC67;
  v7 = j_operator new[](v6 + 5);
  v56 = 0;
  (*(void (__fastcall **)(void **, int, _DWORD, _DWORD))(*(_DWORD *)v5 + 8))(
    &ptr,
    v5,
    *(_QWORD *)a4,
    *(_QWORD *)a4 >> 32);
  if ( ptr )
  {
    j_operator delete[](v7);
    if ( ptr )
    {
      v10 = j_leveldb::Status::CopyState((leveldb::Status *)ptr, v9);
LABEL_41:
      *v34 = v10;
      goto LABEL_42;
    }
    goto LABEL_40;
  }
  if ( v56 != v6 + 5 )
    v52 = "truncated block read";
    v53 = 20;
    v50 = &unk_257BC67;
    v51 = 0;
    j_leveldb::Status::Status(v34, 2, (int)&v52, (int)&v50);
    goto LABEL_42;
  v11 = v55;
  v12 = v55 + v6;
  if ( *(_BYTE *)HIDWORD(v33) )
    v13 = __ROR4__(*(_DWORD *)(v12 + 1) + 1568478504, 17);
    if ( j_leveldb::crc32c::Extend(0, v55, (const char *)(v6 + 1), v8) != v13 )
      j_operator delete[](v7);
      v47 = "block checksum mismatch";
      v48 = 23;
      v45 = &unk_257BC67;
      v46 = 0;
      j_leveldb::Status::Status(&v49, 2, (int)&v47, (int)&v45);
      v17 = v49;
      v18 = ptr;
      if ( ptr == (void *)v49 )
      {
        v19 = ptr;
      }
      else
        if ( ptr )
        {
          j_operator delete[](ptr);
          v17 = v49;
        }
        if ( v17 )
          v18 = j_leveldb::Status::CopyState(v17, (const char *)v17);
          v19 = (void *)v49;
        else
          v19 = 0;
          v18 = 0;
        ptr = v18;
      if ( v19 )
        j_operator delete[](v19);
        v18 = ptr;
      if ( v18 )
        v10 = j_leveldb::Status::CopyState((leveldb::Status *)v18, (const char *)v19);
        goto LABEL_41;
LABEL_40:
      v10 = 0;
      goto LABEL_41;
  v14 = *(_BYTE *)v12;
  if ( !*(_BYTE *)v12 )
    if ( (void *)v11 == v7 )
      *(_DWORD *)a5 = v7;
      *(_DWORD *)(a5 + 4) = v6;
      *(_WORD *)(a5 + 8) = 257;
    else
      *(_DWORD *)a5 = v11;
      *(_WORD *)(a5 + 8) = 0;
  v15 = 0;
  while ( 1 )
    v16 = *(_DWORD *)(v33 + 40 + v15);
    if ( !v16 )
LABEL_12:
      v43 = "encountered a block compressed with an unknown decompressor";
      v44 = 59;
      v41 = &unk_257BC67;
      v42 = 0;
      j_leveldb::Status::Status(v34, 3, (int)&v43, (int)&v41);
    if ( *(_BYTE *)(v16 + 24) == v14 )
      break;
    v15 += 4;
    if ( v15 == 1024 )
      goto LABEL_12;
  v40 = &unk_28898CC;
  v20 = *(_DWORD *)(HIDWORD(v33) + 8);
  if ( v20 )
    (*(void (__fastcall **)(int *))(*(_DWORD *)v20 + 8))(&v39);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v40,
      &v39);
    v21 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v39 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
  v22 = (*(int (__fastcall **)(int, unsigned int, int, _DWORD **))(*(_DWORD *)v16 + 12))(v16, v11, v6, &v40);
  if ( v22 == 1 )
    v23 = (int)v40;
    v24 = j_operator new[](*(v40 - 3));
    j___aeabi_memcpy_0((int)v24, v23, *(_DWORD *)(v23 - 12));
    v25 = *(_DWORD *)(v23 - 12);
    *(_DWORD *)a5 = v24;
    *(_DWORD *)(a5 + 4) = v25;
    *(_WORD *)(a5 + 8) = 257;
  j_operator delete[](v7);
  v26 = *(_DWORD *)(HIDWORD(v33) + 8);
  if ( v26 )
    (*(void (__cdecl **)(int, _DWORD **, _DWORD))(*(_DWORD *)v26 + 12))(v26, &v40, *(_DWORD *)(*(_DWORD *)v26 + 12));
  v27 = 0;
  if ( !v22 )
    v37 = "corrupted compressed block contents";
    v38 = 35;
    v35 = &unk_257BC67;
    v36 = 0;
    j_leveldb::Status::Status(v34, 2, (int)&v37, (int)&v35);
    v27 = 1;
  v28 = (char *)(v40 - 3);
  if ( v40 - 3 != &dword_28898C0 )
    v29 = v40 - 1;
    if ( &pthread_create )
      __dmb();
      do
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  if ( !v27 )
LABEL_42:
    j_operator delete[](ptr);
}


void __fastcall leveldb::VersionSet::GetRange2(int a1, _QWORD *a2, unsigned __int64 *a3, const void **a4, const void **a5)
{
  leveldb::VersionSet::GetRange2(a1, a2, a3, a4, a5);
}


RakNet *__fastcall leveldb::PosixLogger::Logv(__int64 a1, void *a2)
{
  int v2; // r0@1
  char v3; // r11@1
  int v4; // r1@1
  char *v5; // r0@3
  signed int v6; // r9@4
  char *v7; // r5@6
  int v8; // r0@6
  char *v9; // r10@6
  unsigned int v10; // r8@6
  RakNet *result; // r0@16
  __int64 v12; // [sp+24h] [bp-26Ch]@1
  int v13; // [sp+2Ch] [bp-264h]@1
  int v14; // [sp+30h] [bp-260h]@1
  struct tm tp; // [sp+38h] [bp-258h]@6
  time_t timer; // [sp+64h] [bp-22Ch]@6
  struct timeval tv; // [sp+68h] [bp-228h]@6
  __gnuc_va_list arg; // [sp+70h] [bp-220h]@1
  char v19; // [sp+74h] [bp-21Ch]@3
  RakNet *v20; // [sp+268h] [bp-28h]@1

  v12 = a1;
  v20 = _stack_chk_guard;
  arg = a2;
  v2 = (*(int (**)(void))(a1 + 8))();
  v3 = 1;
  v13 = v4;
  v14 = v2;
  while ( 1 )
  {
    v5 = &v19;
    if ( v3 & 1 )
    {
      v6 = 500;
    }
    else
      v6 = 30000;
      v5 = (char *)j_operator new[](0x7530u);
    v7 = v5;
    j_gettimeofday(&tv, 0);
    timer = tv.tv_sec;
    j_localtime_r(&timer, &tp);
    v8 = j_snprintf(
           v7,
           v6,
           "%04d/%02d/%02d-%02d:%02d:%02d.%06d %llx ",
           tp.tm_year + 1900,
           tp.tm_mon + 1,
           tp.tm_mday,
           tp.tm_hour,
           tp.tm_min,
           tp.tm_sec,
           tv.tv_usec,
           v14,
           v13);
    v9 = &v7[v8];
    v10 = (unsigned int)&v7[v6];
    if ( v8 < v6 )
      v9 += j_vsnprintf(&v7[v8], v10 - (_DWORD)v9, (const char *)HIDWORD(v12), arg);
    if ( (unsigned int)v9 < v10 )
      break;
    if ( !(v3 & 1) )
      v9 = (char *)(v10 - 1);
    v3 = 0;
  }
  if ( v9 == v7 || *(v9 - 1) != 10 )
    *v9++ = 10;
  j_fwrite(v7, 1u, v9 - v7, *(FILE **)(v12 + 4));
  j_fflush(*(FILE **)(v12 + 4));
  if ( v7 != &v19 )
    j_operator delete[](v7);
  result = (RakNet *)(_stack_chk_guard - v20);
  if ( _stack_chk_guard != v20 )
    j___stack_chk_fail_0((int)result);
  return result;
}


int __fastcall leveldb::BlockBuilder::Add(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r9@1
  int v5; // r8@1
  int v6; // r0@1
  char *v7; // r10@1
  unsigned int v8; // r1@2
  unsigned int v9; // r6@2
  unsigned int v10; // r7@5
  char *v11; // r0@9
  int v12; // r11@9
  _BYTE *v13; // r7@12
  unsigned int v14; // r2@12
  unsigned int v15; // r1@14
  unsigned int v16; // r5@14
  char *v17; // r6@20
  int v18; // r11@22
  int v19; // r11@24
  unsigned int v20; // r6@28
  int result; // r0@28

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v7 = (char *)(a1 + 28);
  v6 = *(_DWORD *)(a1 + 28);
  if ( *(_DWORD *)(v3 + 20) >= *(_DWORD *)(*(_DWORD *)v3 + 32) )
  {
    v11 = (char *)*(_QWORD *)(v3 + 12);
    v12 = *(_DWORD *)(*(_DWORD *)(v3 + 4) - 12);
    if ( v11 == (char *)(*(_QWORD *)(v3 + 12) >> 32) )
    {
      v13 = *(_BYTE **)(v3 + 8);
      v14 = (v11 - v13) >> 2;
      if ( !v14 )
        v14 = 1;
      v15 = v14 + ((v11 - v13) >> 2);
      v16 = v14 + ((v11 - v13) >> 2);
      if ( 0 != v15 >> 30 )
        v16 = 0x3FFFFFFF;
      if ( v15 < v14 )
      if ( v16 )
      {
        if ( v16 >= 0x40000000 )
          sub_21E57F4();
        v17 = (char *)j_operator new(4 * v16);
        v11 = (char *)(*(_QWORD *)(v3 + 8) >> 32);
        v13 = (_BYTE *)*(_QWORD *)(v3 + 8);
      }
      else
        v17 = 0;
      *(_DWORD *)&v17[v11 - v13] = v12;
      v18 = (int)&v17[v11 - v13];
      if ( 0 != (v11 - v13) >> 2 )
        j___aeabi_memmove4_0((int)v17, (int)v13);
      v19 = v18 + 4;
      if ( v13 )
        j_operator delete(v13);
      *(_DWORD *)(v3 + 8) = v17;
      *(_DWORD *)(v3 + 12) = v19;
      *(_DWORD *)(v3 + 16) = &v17[4 * v16];
    }
    else
      *(_DWORD *)v11 = v12;
      *(_DWORD *)(v3 + 12) = v11 + 4;
    v10 = 0;
    *(_DWORD *)(v3 + 20) = 0;
    v9 = *(_DWORD *)(v4 + 4);
  }
  else
    v8 = *(_DWORD *)(v6 - 12);
    if ( v9 < v8 )
      v8 = *(_DWORD *)(v4 + 4);
    if ( v8 )
      v10 = 0;
      do
        if ( *(_BYTE *)(v6 + v10) != *(_BYTE *)(*(_DWORD *)v4 + v10) )
          break;
        ++v10;
      while ( v10 < v8 );
  j_leveldb::PutVarint32((const void **)(v3 + 4), v10);
  v20 = v9 - v10;
  j_leveldb::PutVarint32((const void **)(v3 + 4), v20);
  j_leveldb::PutVarint32((const void **)(v3 + 4), *(_DWORD *)(v5 + 4));
  sub_21E7408((const void **)(v3 + 4), (char *)(*(_DWORD *)v4 + v10), v20);
  sub_21E7408((const void **)(v3 + 4), (char *)*(_QWORD *)v5, *(_QWORD *)v5 >> 32);
  sub_21E849C(v7, v10, 0);
  sub_21E7408((const void **)v7, (char *)(*(_DWORD *)v4 + v10), v20);
  result = *(_DWORD *)(v3 + 20) + 1;
  *(_DWORD *)(v3 + 20) = result;
  return result;
}


void __fastcall leveldb::DBImpl::InstallCompactionResults(leveldb::VersionSet *a1, int a2, int a3)
{
  leveldb::DBImpl::InstallCompactionResults(a1, a2, a3);
}


int __fastcall leveldb::Version::Ref(int result)
{
  ++*(_DWORD *)(result + 12);
  return result;
}


unsigned int __fastcall leveldb::Hash(leveldb *this, const char *a2, unsigned int a3, unsigned int a4)
{
  leveldb *v4; // r3@1
  const char *v5; // lr@1
  unsigned int result; // r0@1
  int v7; // r1@2
  unsigned int v8; // r3@3
  int v9; // t1@3
  bool v10; // cf@3
  bool v11; // zf@3
  int v12; // r2@5

  v4 = this;
  v5 = &a2[(_DWORD)this];
  result = -962287725 * (_DWORD)a2 ^ a3;
  if ( (signed int)a2 >= 4 )
  {
    do
    {
      v7 = (int)v4 + 4;
      v9 = *(_DWORD *)v4;
      v8 = (unsigned int)v4 + 8;
      v10 = v8 >= (unsigned int)v5;
      v11 = v8 == (_DWORD)v5;
      v4 = (leveldb *)v7;
      result = -962287725 * (result + v9) ^ (-962287725 * (result + v9) >> 16);
    }
    while ( v11 || !v10 );
  }
  else
    v7 = (int)v4;
  v12 = (int)&v5[-v7];
  if ( &v5[-v7] != (const char *)1 )
    if ( v12 != 2 )
      if ( v12 != 3 )
        return result;
      result += *(_BYTE *)(v7 + 2) << 16;
    result += *(_BYTE *)(v7 + 1) << 8;
  return -962287725 * (result + *(_BYTE *)v7) ^ (-962287725 * (result + *(_BYTE *)v7) >> 24);
}


int __fastcall leveldb::VersionSet::VersionSet(unsigned int a1, int *a2, int a3, unsigned int a4, int a5)
{
  int v5; // r6@1
  unsigned __int64 v6; // r4@1
  int v7; // r0@1
  int v8; // r1@2
  leveldb::Version *v9; // r0@3
  int v10; // r0@4

  v5 = a3;
  v6 = __PAIR__(a4, a1);
  *(_DWORD *)a1 = *(_DWORD *)(a3 + 8);
  sub_21E8AF4((int *)(a1 + 4), a2);
  *(_DWORD *)(v6 + 8) = v5;
  *(_DWORD *)(v6 + 12) = HIDWORD(v6);
  *(_DWORD *)(v6 + 16) = &off_2726110;
  *(_DWORD *)(v6 + 20) = *(_DWORD *)(a5 + 4);
  *(_DWORD *)(v6 + 28) = 0;
  *(_DWORD *)(v6 + 24) = 2;
  j___aeabi_memclr8_0(v6 + 32, 40);
  *(_DWORD *)(v6 + 72) = v6;
  *(_DWORD *)(v6 + 76) = v6 + 72;
  *(_DWORD *)(v6 + 80) = v6 + 72;
  j___aeabi_memclr4_0(v6 + 84, 92);
  *(_DWORD *)(v6 + 176) = -1;
  *(_QWORD *)(v6 + 184) = -4616189618054758400LL;
  *(_DWORD *)(v6 + 192) = -1;
  *(_DWORD *)(v6 + 200) = 0;
  *(_DWORD *)(v6 + 204) = &unk_28898CC;
  *(_DWORD *)(v6 + 208) = &unk_28898CC;
  *(_DWORD *)(v6 + 212) = &unk_28898CC;
  *(_DWORD *)(v6 + 216) = &unk_28898CC;
  *(_DWORD *)(v6 + 220) = &unk_28898CC;
  *(_DWORD *)(v6 + 224) = &unk_28898CC;
  *(_DWORD *)(v6 + 228) = &unk_28898CC;
  HIDWORD(v6) = j_operator new(0x80u);
  *(_QWORD *)HIDWORD(v6) = v6;
  *(_DWORD *)(HIDWORD(v6) + 8) = HIDWORD(v6);
  j___aeabi_memclr4_0(HIDWORD(v6) + 12, 92);
  *(_DWORD *)(HIDWORD(v6) + 104) = -1;
  *(_QWORD *)(HIDWORD(v6) + 112) = -4616189618054758400LL;
  *(_DWORD *)(HIDWORD(v6) + 120) = -1;
  v7 = *(_DWORD *)(v6 + 200);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 12) - 1;
    *(_DWORD *)(v7 + 12) = v8;
    if ( !v8 )
    {
      v9 = j_leveldb::Version::~Version((leveldb::Version *)v7);
      j_operator delete((void *)v9);
    }
  }
  *(_DWORD *)(v6 + 200) = HIDWORD(v6);
  ++*(_DWORD *)(HIDWORD(v6) + 12);
  v10 = *(_DWORD *)(v6 + 80);
  *(_DWORD *)(HIDWORD(v6) + 4) = v6 + 72;
  *(_DWORD *)(HIDWORD(v6) + 8) = v10;
  *(_DWORD *)(v10 + 4) = HIDWORD(v6);
  *(_DWORD *)(*(_DWORD *)(HIDWORD(v6) + 4) + 8) = HIDWORD(v6);
  return v6;
}


_DWORD *__fastcall leveldb::Table::BlockReader(int **a1, int a2, __int64 *a3)
{
  int **v3; // r5@1
  int v4; // r8@1
  void *v5; // r4@1
  char *v6; // r1@1
  char *v7; // r1@3
  int v8; // r0@3
  void *v9; // r6@3
  _DWORD *v10; // r7@4
  __int64 v11; // r2@5
  leveldb::Status *v12; // r1@5
  void *v13; // r0@5
  __int64 v14; // r2@10
  leveldb::Status *v15; // r1@10
  void *v16; // r0@10
  bool v17; // zf@29
  leveldb::Iterator *v18; // r0@35
  _DWORD *v19; // r5@35
  leveldb::Status *v21; // [sp+8h] [bp-28h]@5
  leveldb::Status *v22; // [sp+Ch] [bp-24h]@10
  char *v23; // [sp+10h] [bp-20h]@3
  int v24; // [sp+14h] [bp-1Ch]@3
  void *v25; // [sp+18h] [bp-18h]@2
  int v26; // [sp+1Ch] [bp-14h]@2
  char v27; // [sp+20h] [bp-10h]@29
  void *ptr; // [sp+24h] [bp-Ch]@1
  __int64 v29; // [sp+28h] [bp-8h]@1
  signed int v30; // [sp+30h] [bp+0h]@1
  int v31; // [sp+34h] [bp+4h]@1
  signed int v32; // [sp+38h] [bp+8h]@1
  signed int v33; // [sp+3Ch] [bp+Ch]@1
  char v34; // [sp+44h] [bp+14h]@3
  int v35; // [sp+4Ch] [bp+1Ch]@3
  RakNet *v36; // [sp+54h] [bp+24h]@1

  v3 = a1;
  v4 = a2;
  v36 = _stack_chk_guard;
  v5 = (void *)(*a1)[6];
  v32 = -1;
  v33 = -1;
  v30 = -1;
  v31 = -1;
  v29 = *a3;
  j_leveldb::BlockHandle::DecodeFrom(&ptr, &v30, (int)&v29);
  if ( ptr )
    goto LABEL_37;
  v25 = &unk_257BC67;
  v26 = 0;
  if ( v5 )
  {
    j_leveldb::EncodeFixed64((leveldb *)&v34, v6, *((_QWORD *)*v3 + 135));
    j_leveldb::EncodeFixed64((leveldb *)&v35, v7, *(unsigned __int64 *)&v30);
    v23 = &v34;
    v24 = 16;
    v8 = (*(int (__fastcall **)(void *, char **))(*(_DWORD *)v5 + 12))(v5, &v23);
    v9 = (void *)v8;
    if ( v8 )
    {
      v10 = (_DWORD *)(*(int (__fastcall **)(void *, int))(*(_DWORD *)v5 + 20))(v5, v8);
      goto LABEL_34;
    }
    LODWORD(v14) = *v3;
    HIDWORD(v14) = v4;
    j_leveldb::ReadBlock(&v22, (*v3)[269], v14, (int)&v30, (int)&v25);
    v15 = v22;
    v16 = ptr;
    if ( ptr == (void *)v22 )
      v6 = (char *)ptr;
    else
      if ( ptr )
      {
        j_operator delete[](ptr);
        v15 = v22;
      }
      if ( v15 )
        v16 = j_leveldb::Status::CopyState(v15, (const char *)v15);
        v6 = (char *)v22;
      else
        v6 = 0;
        v16 = 0;
      ptr = v16;
    if ( v6 )
      j_operator delete[](v6);
      v16 = ptr;
    if ( v16 )
      v10 = 0;
      v10 = j_operator new(0x10u);
      j_leveldb::Block::Block((int)v10, (int)&v25);
      v17 = v27 == 0;
      if ( v27 )
        v17 = *(_BYTE *)(v4 + 1) == 0;
      if ( !v17 )
        v9 = (void *)(*(int (__fastcall **)(void *, char **, _DWORD *, _DWORD))(*(_DWORD *)v5 + 8))(
                       v5,
                       &v23,
                       v10,
                       v10[1]);
        goto LABEL_34;
  }
  else
    LODWORD(v11) = *v3;
    HIDWORD(v11) = v4;
    j_leveldb::ReadBlock(&v21, (*v3)[269], v11, (int)&v30, (int)&v25);
    v12 = v21;
    v13 = ptr;
    if ( ptr == (void *)v21 )
        v12 = v21;
      if ( v12 )
        v13 = j_leveldb::Status::CopyState(v12, (const char *)v12);
        v6 = (char *)v21;
        v13 = 0;
      ptr = v13;
      v13 = ptr;
    if ( v13 )
      goto LABEL_37;
    v10 = j_operator new(0x10u);
    j_leveldb::Block::Block((int)v10, (int)&v25);
  v9 = 0;
LABEL_34:
  if ( !v10 )
LABEL_37:
    v19 = j_leveldb::NewErrorIterator((leveldb *)&ptr, (const leveldb::Status *)v6);
    goto LABEL_38;
  v18 = (leveldb::Iterator *)j_leveldb::Block::NewIterator((int)v10, **v3);
  v19 = v18;
  if ( v9 )
    j_leveldb::Iterator::RegisterCleanup(v18, (void (__cdecl *)(void *, void *))sub_1B461CA, v5, v9);
    j_leveldb::Iterator::RegisterCleanup(v18, (void (__cdecl *)(void *, void *))sub_1B461B6, v10, 0);
LABEL_38:
    j_operator delete[](ptr);
  if ( _stack_chk_guard != v36 )
    j___stack_chk_fail_0(_stack_chk_guard - v36);
  return v19;
}


void __fastcall leveldb::DBImpl::TEST_CompactRange(int a1, int a2, __int64 *a3, __int64 *a4)
{
  leveldb::DBImpl::TEST_CompactRange(a1, a2, a3, a4);
}


leveldb::WriteBatch *__fastcall leveldb::DBImpl::Delete(int a1, int a2, int a3, int a4)
{
  int v4; // r7@1
  int v5; // r4@1
  int v6; // r8@1
  int v7; // r6@1
  char v9; // [sp+4h] [bp-1Ch]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  j_leveldb::WriteBatch::WriteBatch((leveldb::WriteBatch *)&v9);
  j_leveldb::WriteBatch::Delete((const void **)&v9, v5);
  (*(void (__fastcall **)(int, int, int, char *))(*(_DWORD *)v7 + 16))(v4, v7, v6, &v9);
  return j_leveldb::WriteBatch::~WriteBatch((leveldb::WriteBatch *)&v9);
}


int __fastcall leveldb::FilterBlockBuilder::Finish(leveldb::FilterBlockBuilder *this, int a2)
{
  int v2; // r6@1
  leveldb::FilterBlockBuilder *v3; // r8@1
  const void **v4; // r5@3
  __int64 v5; // r0@3
  int v6; // r7@3
  unsigned int v7; // r4@4
  _DWORD *v8; // r0@6
  int v9; // r1@6 OVERLAPPED
  int v10; // r6@6
  unsigned int v11; // r2@6
  _DWORD *v12; // r0@9
  int result; // r0@11

  v2 = a2;
  v3 = this;
  if ( (unsigned int)*(_QWORD *)(a2 + 8) != *(_QWORD *)(a2 + 8) >> 32 )
    j_leveldb::FilterBlockBuilder::GenerateFilter((leveldb::FilterBlockBuilder *)a2);
  v4 = (const void **)(v2 + 20);
  LODWORD(v5) = *(_QWORD *)(v2 + 36);
  v6 = *(_DWORD *)(*(_DWORD *)(v2 + 20) - 12);
  if ( *(_QWORD *)(v2 + 36) >> 32 != (_DWORD)v5 )
  {
    v7 = 0;
    do
    {
      j_leveldb::PutFixed32((const void **)(v2 + 20), *(_DWORD *)(v5 + 4 * v7));
      v5 = *(_QWORD *)(v2 + 36);
      ++v7;
    }
    while ( v7 < (HIDWORD(v5) - (signed int)v5) >> 2 );
  }
  j_leveldb::PutFixed32((const void **)(v2 + 20), v6);
  v8 = *v4;
  *(_QWORD *)&v9 = *(_QWORD *)((char *)*v4 - 12);
  v10 = v9 + 1;
  if ( v9 + 1 > v11 || *(v8 - 1) >= 1 )
    sub_21E6FCC(v4, v9 + 1);
    v8 = *v4;
    v9 = *((_DWORD *)*v4 - 3);
  *((_BYTE *)v8 + v9) = 11;
  v12 = *v4;
  if ( (int *)((char *)*v4 - 12) != &dword_28898C0 )
    *(v12 - 1) = 0;
    *(v12 - 3) = v10;
    *((_BYTE *)v12 + v10) = byte_26C67B8[0];
    v12 = *v4;
  *(_DWORD *)v3 = v12;
  result = *(v12 - 3);
  *((_DWORD *)v3 + 1) = result;
  return result;
}


int __fastcall leveldb::Table::InternalGet(_DWORD *a1, int **a2, int a3, int a4, int a5, void (__fastcall *a6)(int, char *, char *))
{
  _DWORD *v6; // r9@1
  int **v7; // r7@1
  int v8; // r6@1
  int v9; // r8@1
  _DWORD *v10; // r4@1
  _DWORD *v11; // r5@2
  int v12; // r1@3
  _DWORD *v13; // r7@5
  const char *v14; // r1@7
  void *v15; // r5@8
  leveldb::Status *v16; // r0@8
  int result; // r0@12
  int v18; // r5@15
  const char *v19; // r1@19
  void *v20; // r1@20
  leveldb::Status *v21; // r0@20
  leveldb::Status *v22; // [sp+4h] [bp-5Ch]@19
  leveldb::Status *v23; // [sp+8h] [bp-58h]@7
  char v24; // [sp+Ch] [bp-54h]@6
  char v25; // [sp+14h] [bp-4Ch]@6
  char v26; // [sp+1Ch] [bp-44h]@5
  void *ptr; // [sp+24h] [bp-3Ch]@3
  unsigned int v28; // [sp+28h] [bp-38h]@2
  unsigned int v29; // [sp+2Ch] [bp-34h]@2
  signed int v30; // [sp+30h] [bp-30h]@2
  signed int v31; // [sp+34h] [bp-2Ch]@2
  char v32; // [sp+38h] [bp-28h]@2

  v6 = a1;
  v7 = a2;
  *a1 = 0;
  v8 = a4;
  v9 = a3;
  v10 = j_leveldb::Block::NewIterator((*a2)[278], **a2);
  (*(void (**)(void))(*v10 + 20))();
  if ( (*(int (__fastcall **)(_DWORD *))(*v10 + 8))(v10) != 1 )
  {
LABEL_19:
    (*(void (__fastcall **)(leveldb::Status **, _DWORD *))(*v10 + 40))(&v22, v10);
    if ( v22 )
    {
      v20 = j_leveldb::Status::CopyState(v22, v19);
      v21 = v22;
      *v6 = v20;
      if ( v21 )
        j_operator delete[]((void *)v21);
    }
    goto LABEL_22;
  }
  (*(void (__fastcall **)(char *, _DWORD *))(*v10 + 36))(&v32, v10);
  v11 = (_DWORD *)(*v7)[272];
  v30 = -1;
  v31 = -1;
  v28 = -1;
  v29 = -1;
  if ( !v11 )
    goto LABEL_5;
  j_leveldb::BlockHandle::DecodeFrom(&ptr, &v28, (int)&v32);
  if ( ptr )
    j_operator delete[](ptr);
  v18 = j_leveldb::FilterBlockReader::KeyMayMatch(v11, v12, v28, v29, v8);
    if ( !v18 )
      goto LABEL_19;
  else if ( v18 != 1 )
    goto LABEL_19;
LABEL_5:
  (*(void (__fastcall **)(char *, _DWORD *))(*v10 + 36))(&v26, v10);
  v13 = j_leveldb::Table::BlockReader(v7, v9, (__int64 *)&v26);
  (*(void (**)(void))(*v13 + 20))();
  if ( (*(int (__fastcall **)(_DWORD *))(*v13 + 8))(v13) == 1 )
    (*(void (__fastcall **)(char *, _DWORD *))(*v13 + 32))(&v25, v13);
    (*(void (__fastcall **)(char *, _DWORD *))(*v13 + 36))(&v24, v13);
    a6(a5, &v25, &v24);
  (*(void (__fastcall **)(leveldb::Status **, _DWORD *))(*v13 + 40))(&v23, v13);
  if ( v23 )
    v15 = j_leveldb::Status::CopyState(v23, v14);
    v16 = v23;
    *v6 = v15;
    if ( v16 )
      j_operator delete[]((void *)v16);
  else
    v15 = 0;
  result = (*(int (__fastcall **)(_DWORD *))(*v13 + 4))(v13);
  if ( !v15 )
  if ( v10 )
LABEL_22:
    result = (*(int (__fastcall **)(_DWORD *))(*v10 + 4))(v10);
  return result;
}


int __fastcall leveldb::MemTableIterator::SeekToFirst(leveldb::MemTableIterator *this)
{
  leveldb::MemTableIterator *v1; // r4@1
  int v2; // r5@1
  int result; // r0@1

  v1 = this;
  v2 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 5) + 12) + 4);
  result = vFFFF0FA0();
  *((_DWORD *)v1 + 6) = v2;
  return result;
}


leveldb::log::Reader *__fastcall leveldb::log::Reader::Reader(leveldb::log::Reader *this, int r1_0, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  leveldb::log::Reader *v5; // r4@1
  char v6; // r0@1

  v5 = this;
  *(_QWORD *)this = *(__int64 *)((char *)&a2 - 4);
  *((_BYTE *)this + 8) = BYTE4(a2);
  *(_QWORD *)((char *)this + 12) = __PAIR__(&unk_257BC67, (unsigned int)j_operator new[](0x8000u));
  *((_DWORD *)v5 + 5) = 0;
  *((_BYTE *)v5 + 24) = 0;
  *((_DWORD *)v5 + 8) = 0;
  *((_DWORD *)v5 + 9) = 0;
  *((_DWORD *)v5 + 10) = 0;
  *((_DWORD *)v5 + 11) = 0;
  v6 = a3 | BYTE4(a3);
  *((_QWORD *)v5 + 6) = a3;
  if ( a3 )
    v6 = 1;
  *((_BYTE *)v5 + 56) = v6;
  return v5;
}


const void **__fastcall leveldb::WriteBatch::Delete(const void **a1, int a2)
{
  const void **v2; // r5@1
  int v3; // r4@1
  const void *v4; // r0@1
  signed int v5; // r2@1
  char *v6; // r6@1
  _DWORD *v7; // r0@3
  int v8; // r1@3 OVERLAPPED
  int v9; // r6@3
  unsigned int v10; // r2@3
  _DWORD *v11; // r0@6

  v2 = a1;
  v3 = a2;
  v4 = *a1;
  v5 = *((_DWORD *)v4 - 1);
  v6 = (char *)(*((_DWORD *)v4 + 2) + 1);
  if ( v5 >= 0 )
  {
    sub_21E8010(v2);
    v4 = *v2;
  }
  j_leveldb::EncodeFixed32((leveldb *)((char *)v4 + 8), v6, v5);
  v7 = *v2;
  *(_QWORD *)&v8 = *(_QWORD *)((char *)*v2 - 12);
  v9 = v8 + 1;
  if ( v8 + 1 > v10 || *(v7 - 1) >= 1 )
    sub_21E6FCC(v2, v8 + 1);
    v7 = *v2;
    v8 = *((_DWORD *)*v2 - 3);
  *((_BYTE *)v7 + v8) = 0;
  v11 = *v2;
  if ( (int *)((char *)*v2 - 12) != &dword_28898C0 )
    *(v11 - 1) = 0;
    *(v11 - 3) = v9;
    *((_BYTE *)v11 + v9) = byte_26C67B8[0];
  return j_j_j__ZN7leveldb22PutLengthPrefixedSliceEPSsRKNS_5SliceE_0(v2, v3);
}


int __fastcall leveldb::MemTable::Add(int a1, int a2, unsigned __int64 a3, int a4, int a5, int a6)
{
  int v6; // r10@1
  leveldb *v7; // r5@1
  int v8; // r8@1
  unsigned int v9; // r9@1
  int v10; // r7@1
  int v11; // r6@1
  unsigned __int64 v12; // r2@1
  unsigned int v13; // r1@1
  int v14; // r0@1
  unsigned int v15; // r2@2
  char *v16; // r6@2
  char *v17; // r4@4
  int v18; // r4@4
  unsigned __int64 v19; // r2@4
  char *v20; // r1@4
  unsigned int v21; // r2@4
  char *v22; // r0@4
  char *v24; // [sp+0h] [bp-28h]@4

  v6 = a1;
  v7 = *(leveldb **)(a6 + 4);
  v8 = HIDWORD(a3);
  v9 = a3;
  v10 = *(_DWORD *)(a5 + 4);
  v11 = (int)v7 + v10 + j_leveldb::VarintLength((leveldb *)(v10 + 8), 0, a3) + 8;
  v13 = v11 + j_leveldb::VarintLength(v7, 0, v12);
  v14 = *(_DWORD *)(v6 + 16);
  if ( v14 >= v13 )
  {
    v16 = *(char **)(v6 + 12);
    v15 = (unsigned int)&v16[v13];
    *(_DWORD *)(v6 + 12) = &v16[v13];
    *(_DWORD *)(v6 + 16) = v14 - v13;
  }
  else
    v16 = j_leveldb::Arena::AllocateFallback((leveldb::Arena *)(v6 + 12), v13);
  v17 = j_leveldb::EncodeVarint32((leveldb *)v16, (char *)(v10 + 8), v15);
  j___aeabi_memcpy_0((int)v17, *(_DWORD *)a5, v10);
  v18 = (int)&v17[v10];
  LODWORD(v19) = a4 | (v9 << 8);
  HIDWORD(v19) = (v8 << 8) | (v9 >> 24);
  j_leveldb::EncodeFixed64((leveldb *)v18, v20, v19);
  v22 = j_leveldb::EncodeVarint32((leveldb *)(v18 + 8), (char *)v7, v21);
  j___aeabi_memcpy_0((int)v22, *(_DWORD *)a6, (int)v7);
  v24 = v16;
  return j_leveldb::SkipList<char const*,leveldb::MemTable::KeyComparator>::Insert(v6 + 36, (int *)&v24);
}


void __fastcall leveldb::DBImpl::DeleteObsoleteFiles(leveldb::DBImpl *this)
{
  leveldb::DBImpl *v1; // r10@1
  int v2; // r1@2
  int *v3; // r0@3
  int *v4; // r2@3
  int *v5; // r1@4
  int *v6; // r1@6
  _DWORD *v7; // r7@10
  _DWORD *v8; // r9@10
  __int64 *v9; // r6@11
  unsigned int v10; // r8@11
  unsigned int *v11; // r2@12
  signed int v12; // r1@14
  unsigned int *v13; // r2@16
  signed int v14; // r1@18
  char *v15; // r1@28
  __int64 v16; // r2@29
  int v17; // r1@30
  unsigned int v18; // r7@30
  signed int v19; // r3@30
  bool v20; // cf@32
  bool v21; // zf@32
  signed int v22; // r7@32
  bool v23; // zf@36
  int *v24; // r4@40
  __int64 *v25; // lr@40
  int v26; // r6@40
  int *v27; // r0@40
  int *v28; // r7@41
  unsigned int v29; // r5@43
  signed int v30; // r6@43
  bool v31; // zf@45
  signed int v32; // r5@45
  unsigned int v33; // r3@54
  signed int v34; // r0@54
  signed int v35; // r1@56
  int v36; // r6@62
  unsigned int v37; // r5@65
  signed int v38; // r6@65
  bool v39; // zf@67
  signed int v40; // r5@67
  __int64 v41; // kr28_8@78
  signed int v42; // r1@78
  signed int v43; // r3@80
  int v44; // r7@89
  void (__fastcall *v45)(void **, _DWORD, char **); // r5@89
  const void **v46; // r0@89
  char *v47; // r0@91
  void *v48; // r0@92
  unsigned int *v49; // r2@96
  signed int v50; // r1@98
  int *v51; // r0@104
  int v52; // [sp+20h] [bp-68h]@16
  char *v53; // [sp+24h] [bp-64h]@12
  void *v54; // [sp+28h] [bp-60h]@89
  char *v55; // [sp+2Ch] [bp-5Ch]@28
  unsigned __int64 v56; // [sp+30h] [bp-58h]@11
  void *ptr; // [sp+38h] [bp-50h]@8
  _DWORD *v58; // [sp+3Ch] [bp-4Ch]@8
  _DWORD *v59; // [sp+40h] [bp-48h]@8
  int v60; // [sp+44h] [bp-44h]@8
  char v61; // [sp+48h] [bp-40h]@3
  int v62; // [sp+4Ch] [bp-3Ch]@2
  int *v63; // [sp+50h] [bp-38h]@2
  int *v64; // [sp+54h] [bp-34h]@2
  int *v65; // [sp+58h] [bp-30h]@2
  int v66; // [sp+5Ch] [bp-2Ch]@2

  v1 = this;
  if ( !*((_DWORD *)this + 320) )
  {
    v66 = 0;
    v62 = 0;
    v63 = 0;
    v64 = &v62;
    v65 = &v62;
    v2 = *((_DWORD *)this + 312);
    if ( v2 )
    {
      v3 = (int *)j_std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::_M_copy(
                    (int)&v61,
                    v2,
                    (int)&v62);
      v4 = v3;
      v63 = v3;
      do
      {
        v5 = v4;
        v4 = (int *)v4[2];
      }
      while ( v4 );
      v64 = v5;
        v6 = v3;
        v3 = (int *)v3[3];
      while ( v3 );
      v65 = v6;
      v66 = *((_DWORD *)v1 + 315);
    }
    j_leveldb::VersionSet::AddLiveFiles(*((_DWORD *)v1 + 319), (int)&v61);
    v58 = 0;
    v59 = 0;
    v60 = 0;
    (*(void (__fastcall **)(void **))(**((_DWORD **)v1 + 1) + 28))(&ptr);
    if ( ptr )
      j_operator delete[](ptr);
    v8 = v59;
    v7 = v58;
    if ( v59 != v58 )
      v9 = (__int64 *)&v56;
      v10 = 0;
        if ( j_leveldb::ParseFileName((const void **)&v7[v10], (int)v9, (signed int *)&v55) == 1 )
        {
          LODWORD(v16) = v55;
          switch ( v55 )
          {
            case 0u:
              v17 = *((_DWORD *)v1 + 319);
              v18 = *(_QWORD *)(v17 + 48) >> 32;
              v19 = 0;
              if ( (unsigned int)v56 < (unsigned int)*(_QWORD *)(v17 + 48) )
                v19 = 1;
              v20 = HIDWORD(v56) >= v18;
              v21 = HIDWORD(v56) == v18;
              v22 = 0;
              if ( !v20 )
                v22 = 1;
              if ( v21 )
                v22 = v19;
              v23 = v22 == 0;
              if ( v22 )
                v23 = *(_QWORD *)(v17 + 56) == v56;
              if ( !v23 )
              {
                LODWORD(v16) = 0;
                goto LABEL_89;
              }
              goto def_1B33B36;
            case 2u:
              v24 = &v62;
              v25 = v9;
              v26 = (int)v63;
              v27 = &v62;
              if ( !v63 )
                goto LABEL_77;
              v15 = (char *)v56;
              v28 = &v62;
              do
                v27 = (int *)v26;
                while ( 1 )
                {
                  v29 = *((_QWORD *)v27 + 2) >> 32;
                  v30 = 0;
                  if ( (unsigned int)*((_QWORD *)v27 + 2) < (unsigned int)v56 )
                    v30 = 1;
                  v20 = v29 >= HIDWORD(v56);
                  v31 = v29 == HIDWORD(v56);
                  v32 = 0;
                  if ( !v20 )
                    v32 = 1;
                  if ( v31 )
                    v32 = v30;
                  if ( !v32 )
                    break;
                  v27 = (int *)v27[3];
                  if ( !v27 )
                    goto LABEL_76;
                }
                v26 = v27[2];
                v28 = v27;
              while ( v26 );
              goto LABEL_77;
            case 3u:
              v33 = *(_QWORD *)(*((_DWORD *)v1 + 319) + 32) >> 32;
              v34 = 0;
              if ( (unsigned int)v56 < (unsigned int)*(_QWORD *)(*((_DWORD *)v1 + 319) + 32) )
                v34 = 1;
              v35 = 0;
              if ( HIDWORD(v56) < v33 )
                v35 = 1;
              if ( HIDWORD(v56) == v33 )
                v35 = v34;
              if ( !v35 )
                goto def_1B33B36;
              LODWORD(v16) = 3;
              goto LABEL_89;
            case 5u:
              v36 = (int)v63;
              break;
            default:
          }
          while ( 2 )
            v27 = (int *)v36;
            while ( 1 )
            {
              v37 = *((_QWORD *)v27 + 2) >> 32;
              v38 = 0;
              if ( (unsigned int)*((_QWORD *)v27 + 2) < (unsigned int)v56 )
                v38 = 1;
              v20 = v37 >= HIDWORD(v56);
              v39 = v37 == HIDWORD(v56);
              v40 = 0;
                v40 = 1;
              if ( v39 )
                v40 = v38;
              if ( !v40 )
                break;
              v27 = (int *)v27[3];
              if ( !v27 )
LABEL_76:
                v27 = v28;
            }
            v36 = v27[2];
            v28 = v27;
            if ( v36 )
              continue;
            break;
LABEL_77:
          v9 = v25;
          if ( v27 == v24 )
            goto LABEL_112;
          v41 = *((_QWORD *)v27 + 2);
          v42 = 0;
          if ( (unsigned int)v56 < (unsigned int)v41 )
            v42 = 1;
          v43 = 0;
          if ( HIDWORD(v56) < HIDWORD(v41) )
            v43 = 1;
          if ( HIDWORD(v56) == HIDWORD(v41) )
            v43 = v42;
          v15 = (char *)&v62;
          if ( v43 )
            v27 = &v62;
          if ( v27 == &v62 )
LABEL_112:
            if ( v55 == (char *)2 )
              j_leveldb::TableCache::Evict(*((leveldb::TableCache **)v1 + 276), v15, v56);
              LODWORD(v16) = v55;
LABEL_89:
            HIDWORD(v16) = HIDWORD(v56);
            j_leveldb::Log(*((leveldb **)v1 + 9), (leveldb::Logger *)"Delete type=%d #%lld\n", v16, v56);
            v44 = *((_DWORD *)v1 + 1);
            v45 = *(void (__fastcall **)(void **, _DWORD, char **))(*(_DWORD *)v44 + 32);
            sub_21E8AF4(&v52, (int *)v1 + 275);
            sub_21E7408((const void **)&v52, "/", 1u);
            v46 = sub_21E72F0((const void **)&v52, (const void **)&v58[v10]);
            v53 = (char *)*v46;
            *v46 = &unk_28898CC;
            v45(&v54, v44, &v53);
            if ( v54 )
              j_operator delete[](v54);
            v47 = v53 - 12;
            if ( (int *)(v53 - 12) != &dword_28898C0 )
              v11 = (unsigned int *)(v53 - 4);
              if ( &pthread_create )
                __dmb();
                do
                  v12 = __ldrex(v11);
                while ( __strex(v12 - 1, v11) );
              else
                v12 = (*v11)--;
              if ( v12 <= 0 )
                j_j_j_j__ZdlPv_9(v47);
            v48 = (void *)(v52 - 12);
            if ( (int *)(v52 - 12) != &dword_28898C0 )
              v13 = (unsigned int *)(v52 - 4);
                  v14 = __ldrex(v13);
                while ( __strex(v14 - 1, v13) );
                v14 = (*v13)--;
              if ( v14 <= 0 )
                j_j_j_j__ZdlPv_9(v48);
        }
def_1B33B36:
        v8 = v59;
        v7 = v58;
        ++v10;
      while ( v10 < v59 - v58 );
    if ( v7 != v8 )
        v51 = (int *)(*v7 - 12);
        if ( v51 != &dword_28898C0 )
          v49 = (unsigned int *)(*v7 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v50 = __ldrex(v49);
            while ( __strex(v50 - 1, v49) );
          else
            v50 = (*v49)--;
          if ( v50 <= 0 )
            j_j_j_j__ZdlPv_9(v51);
        ++v7;
      while ( v7 != v8 );
      v8 = v58;
    if ( v8 )
      j_operator delete(v8);
    j_std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::_M_erase(
      (int)&v61,
      (int)v63);
  }
}


void *__fastcall leveldb::SanitizeOptions(int a1, int *a2, int a3, int a4, int a5)
{
  int v5; // r6@1
  int *v6; // r9@1
  int v7; // r7@1
  int v8; // r4@1
  signed int v9; // r1@1
  signed int v10; // r0@3
  signed int v11; // r0@4
  signed int v12; // r0@8
  signed int v13; // r0@9
  signed int v14; // r0@13
  signed int v15; // r0@14
  signed int v16; // r0@18
  signed int v17; // r0@19
  int v18; // r6@26
  void (__fastcall *v19)(void **, int, int *, int *); // r7@26
  void *v20; // r0@28
  void *v21; // r0@29
  int v22; // r5@30
  void (__fastcall *v23)(void **, int, int *, int); // r7@30
  void *v24; // r0@30
  void *v25; // r0@31
  void *result; // r0@33
  unsigned int *v27; // r2@36
  signed int v28; // r1@38
  unsigned int *v29; // r2@40
  signed int v30; // r1@42
  unsigned int *v31; // r2@44
  int v32; // [sp+0h] [bp-40h]@30
  void *v33; // [sp+4h] [bp-3Ch]@30
  int v34; // [sp+8h] [bp-38h]@26
  int v35; // [sp+Ch] [bp-34h]@26
  void *v36; // [sp+10h] [bp-30h]@26
  void *ptr; // [sp+14h] [bp-2Ch]@24

  v5 = a3;
  v6 = a2;
  v7 = a4;
  v8 = a1;
  j___aeabi_memcpy4_0(a1, a5, 1068);
  *(_DWORD *)v8 = v5;
  v9 = 50001;
  if ( !*(_DWORD *)(a5 + 1068) )
    v7 = *(_DWORD *)(a5 + 1068);
  *(_DWORD *)(v8 + 1068) = v7;
  v10 = *(_DWORD *)(v8 + 20);
  if ( v10 < 50001 )
  {
    if ( v10 > 73 )
      goto LABEL_8;
    v11 = 74;
  }
  else
    v11 = 50000;
  *(_DWORD *)(v8 + 20) = v11;
LABEL_8:
  v12 = *(_DWORD *)(v8 + 16);
  if ( v12 <= 0x40000000 )
    if ( v12 >= 0x10000 )
      goto LABEL_13;
    v13 = 0x10000;
    v13 = 0x40000000;
  *(_DWORD *)(v8 + 16) = v13;
LABEL_13:
  v14 = *(_DWORD *)(v8 + 36);
  if ( v14 <= 0x40000000 )
    if ( v14 >= 0x100000 )
      goto LABEL_18;
    v15 = 0x100000;
    v15 = 0x40000000;
  *(_DWORD *)(v8 + 36) = v15;
LABEL_18:
  v16 = *(_DWORD *)(v8 + 28);
  if ( v16 <= 0x400000 )
    if ( v16 >= 1024 )
      goto LABEL_23;
    v17 = 1024;
    v17 = 0x400000;
  *(_DWORD *)(v8 + 28) = v17;
LABEL_23:
  if ( !*(_DWORD *)(v8 + 12) )
    (*(void (__fastcall **)(void **))(**(_DWORD **)(a5 + 8) + 36))(&ptr);
    if ( ptr )
      j_operator delete[](ptr);
    v18 = *(_DWORD *)(a5 + 8);
    v19 = *(void (__fastcall **)(void **, int, int *, int *))(*(_DWORD *)v18 + 48);
    j_leveldb::InfoLogFileName(&v35, v6);
    j_leveldb::OldInfoLogFileName(&v34, v6);
    v19(&v36, v18, &v35, &v34);
    if ( v36 )
      j_operator delete[](v36);
    v20 = (void *)(v34 - 12);
    if ( (int *)(v34 - 12) != &dword_28898C0 )
    {
      v27 = (unsigned int *)(v34 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
      }
      else
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v20);
    }
    v21 = (void *)(v35 - 12);
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v29 = (unsigned int *)(v35 - 4);
          v30 = __ldrex(v29);
        while ( __strex(v30 - 1, v29) );
        v30 = (*v29)--;
      if ( v30 <= 0 )
        j_j_j_j__ZdlPv_9(v21);
    v22 = *(_DWORD *)(a5 + 8);
    v23 = *(void (__fastcall **)(void **, int, int *, int))(*(_DWORD *)v22 + 72);
    j_leveldb::InfoLogFileName(&v32, v6);
    v23(&v33, v22, &v32, v8 + 12);
    v9 = v32;
    v24 = (void *)(v32 - 12);
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v32 - 4);
          v9 = __ldrex(v31);
        while ( __strex(v9 - 1, v31) );
        v9 = (*v31)--;
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v24);
    v25 = v33;
    if ( v33 )
      *(_DWORD *)(v8 + 12) = 0;
      j_operator delete[](v25);
  result = *(void **)(v8 + 24);
  if ( !result )
    result = j_leveldb::NewLRUCache((leveldb *)0x800000, v9);
    *(_DWORD *)(v8 + 24) = result;
  return result;
}


const void **__fastcall leveldb::PutLengthPrefixedSlice(const void **a1, int a2)
{
  unsigned __int64 *v2; // r5@1
  const void **v3; // r4@1
  unsigned int v4; // r0@1
  char *v5; // r0@2
  unsigned int v6; // r1@7
  char v8; // [sp+3h] [bp-15h]@2
  char v9; // [sp+4h] [bp-14h]@2
  char v10; // [sp+5h] [bp-13h]@4
  char v11; // [sp+6h] [bp-12h]@6
  char v12; // [sp+7h] [bp-11h]@8
  int v13; // [sp+8h] [bp-10h]@9

  v2 = (unsigned __int64 *)a2;
  v3 = a1;
  v4 = *(_DWORD *)(a2 + 4);
  if ( v4 > 0x7F )
  {
    if ( v4 >> 14 )
    {
      if ( 0 == v4 >> 21 )
      {
        v8 = v4 | 0x80;
        v9 = (v4 >> 7) | 0x80;
        v10 = v4 >> 14;
        v5 = &v11;
      }
      else
        v10 = (v4 >> 14) | 0x80;
        v6 = v4 >> 21;
        if ( v4 >> 28 )
        {
          v11 = v6 | 0x80;
          v12 = v4 >> 28;
          v5 = (char *)&v13;
        }
        else
          v11 = v6;
          v5 = &v12;
    }
    else
      v8 = v4 | 0x80;
      v9 = v4 >> 7;
      v5 = &v10;
  }
  else
    v8 = v4;
    v5 = &v9;
  sub_21E7408(v3, &v8, v5 - &v8);
  return sub_21E7408(v3, (char *)*v2, *v2 >> 32);
}


void __fastcall leveldb::Block::Iter::~Iter(int a1)
{
  leveldb::Block::Iter::~Iter(a1);
}


signed int __fastcall leveldb::Compaction::ShouldStopBefore(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r11@1
  int *v4; // r2@1
  int v5; // r0@1
  int v6; // r3@1
  unsigned int v7; // r1@1
  int v8; // r9@1
  int v9; // r10@2
  int (__fastcall *v10)(int, int, int *); // r3@3
  int v11; // r1@4
  _BYTE *v12; // r1@8
  int v13; // r2@10 OVERLAPPED
  signed int result; // r0@10
  signed int v15; // r1@10
  signed int v16; // r3@10
  bool v17; // zf@12
  bool v18; // nf@12
  unsigned __int8 v19; // vf@12
  signed int v20; // r2@12
  int v21; // [sp+4h] [bp-2Ch]@3
  int v22; // [sp+8h] [bp-28h]@3

  v2 = a1;
  v3 = a2;
  v4 = *(int **)(a1 + 16);
  v6 = *(_QWORD *)(a1 + 144) >> 32;
  v5 = *(_QWORD *)(a1 + 144);
  v7 = *(_DWORD *)(v2 + 156);
  v8 = *v4;
  if ( v7 >= (v6 - v5) >> 2 )
  {
    v9 = v2 + 168;
    v12 = (_BYTE *)(v2 + 160);
  }
  else
    do
    {
      v10 = *(int (__fastcall **)(int, int, int *))(*(_DWORD *)(v8 + 16) + 8);
      v21 = *(_DWORD *)(*(_DWORD *)(v5 + 4 * v7) + 28);
      v22 = *(_DWORD *)(v21 - 12);
      if ( v10(v8 + 16, v3, &v21) < 1 )
        break;
      v11 = *(_DWORD *)(v2 + 156);
      if ( *(_BYTE *)(v2 + 160) )
      {
        v5 = *(_DWORD *)(v2 + 144);
        *(_QWORD *)v9 += *(_QWORD *)(*(_DWORD *)(v5 + 4 * v11) + 16);
      }
      else
      v7 = v11 + 1;
      *(_DWORD *)(v2 + 156) = v7;
    }
    while ( v7 < (*(_DWORD *)(v2 + 148) - v5) >> 2 );
  *v12 = 1;
  *(_QWORD *)(&v13 - 1) = *(_QWORD *)v9;
  result = 0;
  v15 = 0;
  v16 = 10 * *(_DWORD *)(*(_DWORD *)(v8 + 8) + 36);
  if ( (unsigned int)*(_QWORD *)v9 <= 10 * *(_DWORD *)(*(_DWORD *)(v8 + 8) + 36) )
    v15 = 1;
  v19 = __OFSUB__(v13, v16 >> 31);
  v17 = v13 == v16 >> 31;
  v18 = v13 - (v16 >> 31) < 0;
  v20 = 0;
  if ( (unsigned __int8)(v18 ^ v19) | v17 )
    v20 = 1;
  if ( v17 )
    v20 = v15;
  if ( !v20 )
    *(_DWORD *)v9 = 0;
    *(_DWORD *)(v9 + 4) = 0;
    result = 1;
  return result;
}


signed int __fastcall leveldb::FilterBlockBuilder::StartBlock(leveldb::FilterBlockBuilder *this, int a2, unsigned __int64 a3)
{
  leveldb::FilterBlockBuilder *v3; // r4@1
  unsigned int v4; // r5@1
  signed int v5; // r1@1
  bool v6; // cf@1
  bool v7; // zf@1
  signed int result; // r0@1
  int v9; // r6@6
  signed int v10; // r1@10

  v3 = this;
  v4 = (signed __int64)a3 >> 11;
  v5 = 0;
  v6 = v4 >= (signed int)((*(_QWORD *)((char *)this + 36) >> 32) - *(_QWORD *)((char *)this + 36)) >> 2;
  v7 = v4 == (signed int)((*(_QWORD *)((char *)this + 36) >> 32) - *(_QWORD *)((char *)this + 36)) >> 2;
  result = 0;
  if ( v7 || !v6 )
    result = 1;
  if ( 0 == HIDWORD(a3) >> 11 )
    v5 = result;
  if ( !v5 )
  {
    v9 = HIDWORD(a3) >> 11;
    do
    {
      j_leveldb::FilterBlockBuilder::GenerateFilter(v3);
      result = 0;
      if ( v4 > (signed int)((*(_QWORD *)((char *)v3 + 36) >> 32) - *(_QWORD *)((char *)v3 + 36)) >> 2 )
        result = 1;
      if ( v9 )
        v10 = 1;
      else
        v10 = result;
    }
    while ( v10 );
  }
  return result;
}


void *__fastcall leveldb::Block::Iter::CorruptionError(int a1)
{
  int v1; // r4@1
  leveldb::Status *v2; // r0@1
  leveldb::Status *v3; // r1@1
  void *v4; // r1@5
  int v5; // r4@10
  int v6; // t1@10
  void *result; // r0@10
  void *v8; // [sp+4h] [bp-24h]@1
  int v9; // [sp+8h] [bp-20h]@1
  const char *v10; // [sp+Ch] [bp-1Ch]@1
  int v11; // [sp+10h] [bp-18h]@1
  leveldb::Status *v12; // [sp+14h] [bp-14h]@1

  v1 = a1;
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 32);
  v10 = "bad entry in block";
  v11 = 18;
  v8 = &unk_257BC67;
  v9 = 0;
  j_leveldb::Status::Status(&v12, 2, (int)&v10, (int)&v8);
  v2 = *(leveldb::Status **)(v1 + 56);
  v3 = v12;
  if ( v2 != v12 )
  {
    if ( v2 )
    {
      j_operator delete[]((void *)v2);
      v3 = v12;
    }
    if ( v3 )
      v4 = j_leveldb::Status::CopyState(v3, (const char *)v3);
      v2 = v12;
    else
      v2 = 0;
      v4 = 0;
    *(_DWORD *)(v1 + 56) = v4;
  }
  if ( v2 )
    j_operator delete[]((void *)v2);
  v6 = *(_DWORD *)(v1 + 44);
  v5 = v1 + 44;
  sub_21E7EE0((const void **)v5, 0, *(_BYTE **)(v6 - 12), 0);
  result = &unk_257BC67;
  *(_DWORD *)(v5 + 4) = &unk_257BC67;
  *(_DWORD *)(v5 + 8) = 0;
  return result;
}


void __fastcall leveldb::VersionEdit::DecodeFrom(_DWORD *a1, leveldb::VersionEdit *a2, __int64 *a3)
{
  leveldb::VersionEdit *v3; // r9@1
  __int64 *v4; // r6@1
  int v5; // r7@2
  int *v6; // r10@2
  int *v7; // r5@2
  unsigned int *v8; // r2@3
  signed int v9; // r1@5
  unsigned int *v10; // r2@7
  signed int v11; // r1@9
  unsigned int *v12; // r2@11
  signed int v13; // r1@13
  unsigned int *v14; // r2@15
  signed int v15; // r1@17
  const char *v16; // r0@35
  bool v17; // zf@36
  void *v18; // r0@38
  char *v19; // r4@50
  __int64 v20; // r0@52
  int *v21; // r6@53
  int v22; // r1@53
  char *v23; // r4@55
  char *v24; // r10@60
  __int64 v25; // r0@67
  int v26; // r12@68
  int v27; // r3@68
  int v28; // r4@68
  int v29; // r5@68
  int v30; // r6@68
  int v31; // r7@68
  int *v32; // r6@68
  int v33; // r1@68
  void *v34; // r0@73
  void *v35; // r0@76
  int *v36; // r0@77
  const char *v37; // r1@82
  void *v38; // r1@83
  void *v39; // r0@83
  char *v40; // r0@87
  char *v41; // r0@88
  char *v42; // r0@89
  unsigned int *v43; // r2@91
  signed int v44; // r1@93
  unsigned int *v45; // r2@95
  signed int v46; // r1@97
  unsigned int *v47; // r2@99
  signed int v48; // r1@101
  _DWORD *v49; // [sp+54h] [bp-D4h]@1
  int *v50; // [sp+58h] [bp-D0h]@2
  const char *v51; // [sp+5Ch] [bp-CCh]@82
  size_t v52; // [sp+60h] [bp-C8h]@82
  const char *v53; // [sp+64h] [bp-C4h]@82
  int v54; // [sp+68h] [bp-C0h]@82
  void *ptr; // [sp+6Ch] [bp-BCh]@82
  char *v56; // [sp+70h] [bp-B8h]@67
  int v57; // [sp+78h] [bp-B0h]@67
  int v58; // [sp+7Ch] [bp-ACh]@67
  int v59; // [sp+80h] [bp-A8h]@67
  int v60; // [sp+84h] [bp-A4h]@67
  int v61; // [sp+88h] [bp-A0h]@67
  int v62; // [sp+8Ch] [bp-9Ch]@67
  int *v63; // [sp+90h] [bp-98h]@15
  int *v64; // [sp+94h] [bp-94h]@67
  char *v65; // [sp+98h] [bp-90h]@58
  int v66; // [sp+A0h] [bp-88h]@2
  char *v67; // [sp+A8h] [bp-80h]@52
  int *v68; // [sp+ACh] [bp-7Ch]@2
  int v69; // [sp+B0h] [bp-78h]@3
  char *v70; // [sp+B4h] [bp-74h]@1
  void *v71; // [sp+B8h] [bp-70h]@1
  int v72; // [sp+BCh] [bp-6Ch]@1
  int v73; // [sp+C0h] [bp-68h]@1
  int v74; // [sp+C4h] [bp-64h]@1
  int v75; // [sp+C8h] [bp-60h]@61
  int v76; // [sp+CCh] [bp-5Ch]@67
  int v77; // [sp+D0h] [bp-58h]@1
  int v78; // [sp+D4h] [bp-54h]@1
  char *v79; // [sp+D8h] [bp-50h]@1
  char *v80; // [sp+DCh] [bp-4Ch]@1
  char v81; // [sp+E0h] [bp-48h]@56
  int v82; // [sp+ECh] [bp-3Ch]@1
  __int64 v83; // [sp+F0h] [bp-38h]@1
  char *v84; // [sp+FCh] [bp-2Ch]@49
  _BYTE *v85; // [sp+100h] [bp-28h]@51

  v3 = a2;
  v49 = a1;
  v4 = a3;
  j_leveldb::VersionEdit::Clear(a2);
  v83 = *v4;
  v73 = 0;
  v74 = 0x40000000;
  v77 = 0;
  v78 = 0;
  v79 = (char *)&unk_28898CC;
  v80 = (char *)&unk_28898CC;
  v70 = (char *)&unk_28898CC;
  v71 = &unk_257BC67;
  v72 = 0;
  if ( j_leveldb::GetVarint32((int)&v83, &v82) != 1 )
  {
LABEL_80:
    if ( HIDWORD(v83) )
    {
      v16 = "invalid tag";
      goto def_1B3E0F2;
    }
    *v49 = 0;
    goto LABEL_87;
  }
  v5 = (int)v3 + 60;
  v6 = &v66;
  v7 = (int *)&v68;
  v50 = &dword_28898C0;
  while ( 2 )
    v16 = "unknown tag";
    switch ( (_DWORD)"unknown tag" )
      case 1:
        v17 = j_leveldb::GetLengthPrefixedSlice((int)&v83, (int)&v71) == 1;
        v16 = "comparator name";
        if ( !v17 )
          goto def_1B3E0F2;
        sub_21E91E0((void **)&v69, (unsigned int)v71, v72);
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
          (int *)v3,
          &v69);
        v18 = (void *)(v69 - 12);
        if ( (int *)(v69 - 12) != v50 )
        {
          v8 = (unsigned int *)(v69 - 4);
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
            j_j_j_j__ZdlPv_9(v18);
        }
        *((_BYTE *)v3 + 40) = 1;
        goto LABEL_79;
      case 2:
        v17 = j_leveldb::GetVarint64((int)&v83, (_QWORD *)v3 + 1) == 1;
        v16 = "log number";
        *((_BYTE *)v3 + 41) = 1;
      case 3:
        v17 = j_leveldb::GetVarint64((int)&v83, (_QWORD *)v3 + 3) == 1;
        v16 = "next file number";
        *((_BYTE *)v3 + 43) = 1;
      case 4:
        v17 = j_leveldb::GetVarint64((int)&v83, (_QWORD *)v3 + 4) == 1;
        v16 = "last sequence number";
        *((_BYTE *)v3 + 44) = 1;
      case 5:
        if ( j_leveldb::GetVarint32((int)&v83, (int *)&v84) == 1 )
          v19 = v84;
          v16 = "compaction pointer";
          if ( (unsigned int)v84 > 6 )
            goto def_1B3E0F2;
          v84 = (char *)&unk_257BC67;
          v85 = 0;
          if ( !j_leveldb::GetLengthPrefixedSlice((int)&v83, (int)&v84) )
            v16 = "compaction pointer";
          sub_21E8190((void **)&v70, v84, v85);
          v67 = v19;
          sub_21E8AF4(v7, (int *)&v70);
          v20 = *(_QWORD *)((char *)v3 + 52);
          if ( (_DWORD)v20 == HIDWORD(v20) )
            j_std::vector<std::pair<int,leveldb::InternalKey>,std::allocator<std::pair<int,leveldb::InternalKey>>>::_M_emplace_back_aux<std::pair<int,leveldb::InternalKey>>(
              (unsigned __int64 *)v3 + 6,
              (int)&v67);
            v22 = (int)v68;
            v21 = v50;
            *(_DWORD *)v20 = v67;
            *(_DWORD *)(v20 + 4) = v68;
            HIDWORD(v20) = v50 + 3;
            v68 = v50 + 3;
            *((_DWORD *)v3 + 13) = v20 + 8;
          v34 = (void *)(v22 - 12);
          if ( (int *)(v22 - 12) != v21 )
            v10 = (unsigned int *)(v22 - 4);
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
              j_j_j_j__ZdlPv_9(v34);
          v50 = v21;
LABEL_79:
          if ( !j_leveldb::GetVarint32((int)&v83, &v82) )
            goto LABEL_80;
          continue;
        v16 = "compaction pointer";
def_1B3E0F2:
        v53 = "VersionEdit";
        v51 = v16;
        *v49 = 0;
        v54 = 11;
        v52 = j_strlen_0(v16);
        j_leveldb::Status::Status(&ptr, 2, (int)&v53, (int)&v51);
        if ( ptr )
          v38 = j_leveldb::Status::CopyState((leveldb::Status *)ptr, v37);
          v39 = ptr;
          v17 = ptr == 0;
          *v49 = v38;
          if ( !v17 )
            j_operator delete[](v39);
LABEL_87:
        v40 = v70 - 12;
        if ( (int *)(v70 - 12) != &dword_28898C0 )
          v43 = (unsigned int *)(v70 - 4);
              v44 = __ldrex(v43);
            while ( __strex(v44 - 1, v43) );
            v44 = (*v43)--;
          if ( v44 <= 0 )
            j_j_j_j__ZdlPv_9(v40);
        v41 = v80 - 12;
        if ( (int *)(v80 - 12) != &dword_28898C0 )
          v45 = (unsigned int *)(v80 - 4);
              v46 = __ldrex(v45);
            while ( __strex(v46 - 1, v45) );
            v46 = (*v45)--;
          if ( v46 <= 0 )
            j_j_j_j__ZdlPv_9(v41);
        v42 = v79 - 12;
        if ( (int *)(v79 - 12) != &dword_28898C0 )
          v47 = (unsigned int *)(v79 - 4);
              v48 = __ldrex(v47);
            while ( __strex(v48 - 1, v47) );
            v48 = (*v47)--;
          if ( v48 <= 0 )
            j_j_j_j__ZdlPv_9(v42);
        return;
      case 6:
        if ( j_leveldb::GetVarint32((int)&v83, (int *)&v84) != 1 )
          v16 = "deleted file";
        v23 = v84;
        v16 = "deleted file";
        if ( (unsigned int)v84 > 6 )
        v17 = j_leveldb::GetVarint64((int)&v83, &v81) == 1;
        v65 = v23;
        *(_QWORD *)v6 = *(_QWORD *)&v81;
        j_std::_Rb_tree<std::pair<int,unsigned long long>,std::pair<int,unsigned long long>,std::_Identity<std::pair<int,unsigned long long>>,std::less<std::pair<int,unsigned long long>>,std::allocator<std::pair<int,unsigned long long>>>::_M_insert_unique<std::pair<int,unsigned long long>>(
          (int)&v84,
          v5,
          (int)&v65);
      case 7:
          v16 = "new-file entry";
        v24 = v84;
        v16 = "new-file entry";
        v17 = j_leveldb::GetVarint64((int)&v83, &v75) == 1;
        v17 = j_leveldb::GetVarint64((int)&v83, &v77) == 1;
        v84 = (char *)&unk_257BC67;
        v85 = 0;
        if ( !j_leveldb::GetLengthPrefixedSlice((int)&v83, (int)&v84) )
        sub_21E8190((void **)&v79, v84, v85);
        sub_21E8190((void **)&v80, v84, v85);
        v56 = v24;
        v57 = v73;
        v58 = v74;
        v59 = v75;
        v60 = v76;
        v61 = v77;
        v62 = v78;
        sub_21E8AF4((int *)&v63, (int *)&v79);
        sub_21E8AF4((int *)&v64, (int *)&v80);
        v25 = *((_QWORD *)v3 + 11);
        if ( (_DWORD)v25 == HIDWORD(v25) )
          j_std::vector<std::pair<int,leveldb::FileMetaData>,std::allocator<std::pair<int,leveldb::FileMetaData>>>::_M_emplace_back_aux<std::pair<int,leveldb::FileMetaData>>(
            (unsigned __int64 *)((char *)v3 + 84),
            (int)&v56);
          v33 = (int)v64;
          v32 = v50;
        else
          *(_DWORD *)v25 = v56;
          v26 = v25 + 8;
          v27 = v58;
          v28 = v59;
          v29 = v60;
          v30 = v61;
          v31 = v62;
          *(_DWORD *)v26 = v57;
          *(_DWORD *)(v26 + 4) = v27;
          *(_DWORD *)(v26 + 8) = v28;
          *(_DWORD *)(v26 + 12) = v29;
          *(_DWORD *)(v26 + 16) = v30;
          *(_DWORD *)(v26 + 20) = v31;
          *(_DWORD *)(v25 + 32) = v63;
          HIDWORD(v25) = v50 + 3;
          v63 = v50 + 3;
          *(_DWORD *)(v25 + 36) = v64;
          v64 = v50 + 3;
          *((_DWORD *)v3 + 22) += 40;
        v6 = &v66;
        v35 = (void *)(v33 - 12);
        if ( (int *)(v33 - 12) != v32 )
          v12 = (unsigned int *)(v33 - 4);
              v13 = __ldrex(v12);
            while ( __strex(v13 - 1, v12) );
            v13 = (*v12)--;
          if ( v13 <= 0 )
            j_j_j_j__ZdlPv_9(v35);
        v7 = (int *)&v68;
        v36 = v63 - 3;
        if ( v63 - 3 != v32 )
          v14 = (unsigned int *)(v63 - 1);
              v15 = __ldrex(v14);
            while ( __strex(v15 - 1, v14) );
            v15 = (*v14)--;
          if ( v15 <= 0 )
            j_j_j_j__ZdlPv_9(v36);
        v5 = (int)v3 + 60;
        v50 = v32;
      case 9:
        v17 = j_leveldb::GetVarint64((int)&v83, (_QWORD *)v3 + 2) == 1;
        v16 = "previous log number";
        *((_BYTE *)v3 + 42) = 1;
      default:
        goto def_1B3E0F2;
}


char *__fastcall leveldb::FilterBlockBuilder::GenerateFilter(leveldb::FilterBlockBuilder *this)
{
  leveldb::FilterBlockBuilder *v1; // r4@1
  char *v2; // r0@1
  _BYTE *v3; // r7@1
  __int64 v4; // kr00_8@1
  signed int v5; // r1@1
  unsigned int v6; // r6@2
  int v7; // r10@2
  char *v8; // r0@4
  int v9; // r8@4
  char *result; // r0@5
  unsigned int v11; // r1@6
  unsigned int v12; // r5@6
  char *v13; // r9@10 OVERLAPPED
  int v14; // r10@13
  int v15; // r10@15 OVERLAPPED
  int v16; // r1@18
  unsigned int v17; // r2@18
  int v18; // r0@22
  __int64 v19; // kr18_8@23
  int v20; // r7@23
  int v21; // r3@23
  int v22; // r1@23
  int v23; // r2@23
  char *v24; // r0@24
  __int64 v25; // r10@24
  _BYTE *v26; // r9@26
  unsigned int v27; // r2@26
  unsigned int v28; // r1@28
  unsigned int v29; // r5@28
  _BYTE *v30; // r5@35
  unsigned int v31; // r2@35
  unsigned int v32; // r1@37
  unsigned int v33; // r7@37
  char *v34; // r6@43
  int v35; // r11@45
  int v36; // r1@50
  int v37; // r8@52
  int v38; // r8@54

  v1 = this;
  v4 = *((_QWORD *)this + 1);
  v2 = (char *)(*((_QWORD *)this + 1) >> 32);
  v3 = (_BYTE *)v4;
  v5 = (signed int)&v2[-v4];
  if ( (signed int)&v2[-v4] >> 2 )
  {
    v6 = v5 >> 2;
    v7 = *(_DWORD *)(*((_DWORD *)v1 + 1) - 12);
    if ( v2 == *((char **)v1 + 4) )
    {
      v11 = v5 >> 1;
      v12 = v11;
      if ( v11 >> 30 )
        v12 = 0x3FFFFFFF;
      if ( v11 < v6 )
      v13 = 0;
      if ( v12 )
      {
        if ( v12 >= 0x40000000 )
          goto LABEL_57;
        v13 = (char *)j_operator new(4 * v12);
        v2 = (char *)(*((_QWORD *)v1 + 1) >> 32);
        v3 = (_BYTE *)*((_QWORD *)v1 + 1);
      }
      *(_DWORD *)&v13[v2 - v3] = v7;
      v14 = (int)&v13[v2 - v3];
      if ( 0 != (v2 - v3) >> 2 )
        j___aeabi_memmove4_0((int)v13, (int)v3);
      v15 = v14 + 4;
      if ( v3 )
        j_operator delete(v3);
      *((_QWORD *)v1 + 1) = *(_QWORD *)&v13;
      *((_DWORD *)v1 + 4) = &v13[4 * v12];
    }
    else
      *(_DWORD *)v2 = v7;
      *((_DWORD *)v1 + 3) = v2 + 4;
    v16 = *((_DWORD *)v1 + 6);
    v17 = (*((_DWORD *)v1 + 7) - v16) >> 3;
    if ( v6 <= v17 )
      if ( v6 < v17 )
        *((_DWORD *)v1 + 7) = v16 + 8 * v6;
      j_std::vector<leveldb::Slice,std::allocator<leveldb::Slice>>::_M_default_append((int)v1 + 24, v6 - v17);
    v18 = 0;
    do
      v19 = *(_QWORD *)((char *)v1 + 4);
      v20 = *(_DWORD *)(HIDWORD(v19) + 4 * v18);
      v21 = *((_DWORD *)v1 + 6);
      v22 = *(_DWORD *)(HIDWORD(v19) + 4 * v18 + 4);
      *(_DWORD *)(v21 + 8 * v18) = v19 + v20;
      v23 = v21 + 8 * v18++;
      *(_DWORD *)(v23 + 4) = v22 - v20;
    while ( v6 != v18 );
    v24 = (char *)*((_QWORD *)v1 + 5);
    HIDWORD(v25) = *(_DWORD *)(*((_DWORD *)v1 + 5) - 12);
    if ( v24 != (char *)(*((_QWORD *)v1 + 5) >> 32) )
      *(_DWORD *)v24 = HIDWORD(v25);
      *((_DWORD *)v1 + 10) = v24 + 4;
LABEL_50:
      v36 = *((_DWORD *)v1 + 6);
      (*(void (**)(void))(**(_DWORD **)v1 + 12))();
      *((_DWORD *)v1 + 7) = *((_DWORD *)v1 + 6);
      sub_21E7EE0((const void **)v1 + 1, 0, *(_BYTE **)(*((_DWORD *)v1 + 1) - 12), 0);
      result = (char *)*((_DWORD *)v1 + 2);
      *((_DWORD *)v1 + 3) = result;
      return result;
    v26 = (_BYTE *)*((_DWORD *)v1 + 9);
    v27 = (v24 - v26) >> 2;
    if ( !v27 )
      v27 = 1;
    v28 = v27 + ((v24 - v26) >> 2);
    v29 = v27 + ((v24 - v26) >> 2);
    if ( 0 != v28 >> 30 )
      v29 = 0x3FFFFFFF;
    if ( v28 < v27 )
    if ( !v29 )
      LODWORD(v25) = 0;
      goto LABEL_45;
    if ( v29 < 0x40000000 )
      LODWORD(v25) = j_operator new(4 * v29);
      v24 = (char *)(*(_QWORD *)((char *)v1 + 36) >> 32);
      v26 = (_BYTE *)*(_QWORD *)((char *)v1 + 36);
LABEL_45:
      *(_DWORD *)(v25 + v24 - v26) = HIDWORD(v25);
      v35 = v25 + v24 - v26;
      if ( 0 != (v24 - v26) >> 2 )
        j___aeabi_memmove4_0(v25, (int)v26);
      HIDWORD(v25) += 4;
      if ( v26 )
        j_operator delete(v26);
      *(_QWORD *)((char *)v1 + 36) = v25;
      *((_DWORD *)v1 + 11) = v25 + 4 * v29;
      goto LABEL_50;
LABEL_57:
    sub_21E57F4();
  }
  v8 = (char *)*((_QWORD *)v1 + 5);
  v9 = *(_DWORD *)(*((_DWORD *)v1 + 5) - 12);
  if ( v8 != (char *)(*((_QWORD *)v1 + 5) >> 32) )
    *(_DWORD *)v8 = v9;
    result = v8 + 4;
    *((_DWORD *)v1 + 10) = result;
    return result;
  v30 = (_BYTE *)*((_DWORD *)v1 + 9);
  v31 = (v8 - v30) >> 2;
  if ( !v31 )
    v31 = 1;
  v32 = v31 + ((v8 - v30) >> 2);
  v33 = v31 + ((v8 - v30) >> 2);
  if ( 0 != v32 >> 30 )
    v33 = 0x3FFFFFFF;
  if ( v32 < v31 )
  if ( v33 )
    if ( v33 >= 0x40000000 )
      goto LABEL_57;
    v34 = (char *)j_operator new(4 * v33);
    v8 = (char *)(*(_QWORD *)((char *)v1 + 36) >> 32);
    v30 = (_BYTE *)*(_QWORD *)((char *)v1 + 36);
  else
    v34 = 0;
  *(_DWORD *)&v34[v8 - v30] = v9;
  v37 = (int)&v34[v8 - v30];
  if ( 0 != (v8 - v30) >> 2 )
    j___aeabi_memmove4_0((int)v34, (int)v30);
  v38 = v37 + 4;
  if ( v30 )
    j_operator delete(v30);
  result = &v34[4 * v33];
  *((_DWORD *)v1 + 9) = v34;
  *((_DWORD *)v1 + 10) = v38;
  *((_DWORD *)v1 + 11) = result;
  return result;
}


signed int __fastcall leveldb::Version::PickLevelForMemTableOutput(int a1, __int64 *a2, int a3)
{
  int v3; // r8@1
  __int64 *v4; // r5@1
  __int64 *v5; // r11@1
  signed int v6; // r10@1
  void *v7; // r7@3
  unsigned int v8; // r1@4
  unsigned int v9; // r0@4
  unsigned int v10; // r3@5
  int v11; // r4@6
  unsigned __int64 v12; // kr00_8@6
  bool v13; // cf@7
  signed int v14; // r1@7
  signed int v15; // r3@7
  bool v16; // zf@9
  bool v17; // nf@9
  unsigned __int8 v18; // vf@9
  signed int v19; // r0@9
  signed int v20; // r0@15
  unsigned int v21; // r2@16
  signed int v22; // r1@16
  unsigned int v23; // r6@17
  int v24; // r5@18
  unsigned __int64 v25; // kr08_8@18
  signed int v26; // r2@19
  signed int v27; // r3@19
  char *v28; // r0@29
  char *v29; // r0@30
  unsigned int *v31; // r2@32
  signed int v32; // r1@34
  unsigned int *v33; // r2@36
  signed int v34; // r1@38
  char *v35; // [sp+8h] [bp-48h]@2
  char *v36; // [sp+Ch] [bp-44h]@2
  __int64 v37; // [sp+10h] [bp-40h]@2
  int v38; // [sp+18h] [bp-38h]@2
  int v39; // [sp+1Ch] [bp-34h]@2
  int v40; // [sp+20h] [bp-30h]@2

  v3 = a1;
  v4 = (__int64 *)a3;
  v5 = a2;
  v6 = 0;
  if ( !j_leveldb::SomeFileOverlapsRange(*(_DWORD *)a1 + 16, 0, (unsigned __int64 *)(a1 + 16), a2, a3) )
  {
    v36 = (char *)&unk_28898CC;
    v37 = *v5;
    v39 = 0xFFFFFF;
    v38 = -1;
    v40 = 1;
    j_leveldb::AppendInternalKey((const void **)&v36, (unsigned __int64 *)&v37);
    v35 = (char *)&unk_28898CC;
    v37 = *v4;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    j_leveldb::AppendInternalKey((const void **)&v35, (unsigned __int64 *)&v37);
    v37 = 0LL;
    if ( !j_leveldb::SomeFileOverlapsRange(*(_DWORD *)v3 + 16, 1, (unsigned __int64 *)(v3 + 28), v5, (int)v4) )
    {
      j_leveldb::Version::GetOverlappingInputs((int *)v3, 2u, (int *)&v36, (void **)&v35, (int)&v37);
      v7 = (void *)v37;
      v6 = 0;
      if ( HIDWORD(v37) == (_DWORD)v37 )
      {
        v8 = 0;
        v9 = 0;
      }
      else
        v10 = 0;
        do
        {
          v11 = *(_DWORD *)(v37 + 4 * v10++);
          v12 = __PAIR__(v9, v8) + *(_QWORD *)(v11 + 16);
          v9 = (__PAIR__(v9, v8) + *(_QWORD *)(v11 + 16)) >> 32;
          v8 = v12;
        }
        while ( v10 < (HIDWORD(v37) - (signed int)v37) >> 2 );
      v13 = v8 >= 10 * *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 8) + 36);
      v16 = v8 == 10 * *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 8) + 36);
      v14 = 0;
      v15 = 10 * *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 8) + 36);
      if ( v16 || !v13 )
        v14 = 1;
      v18 = __OFSUB__(v9, v15 >> 31);
      v16 = v9 == v15 >> 31;
      v17 = ((v9 - (v15 >> 31)) & 0x80000000) != 0;
      v19 = 0;
      if ( (unsigned __int8)(v17 ^ v18) | v16 )
        v19 = 1;
      if ( v16 )
        v19 = v14;
      if ( v19 )
        v6 = 1;
        if ( !j_leveldb::SomeFileOverlapsRange(*(_DWORD *)v3 + 16, 1, (unsigned __int64 *)(v3 + 40), v5, (int)v4) )
          j_leveldb::Version::GetOverlappingInputs((int *)v3, 3u, (int *)&v36, (void **)&v35, (int)&v37);
          v7 = (void *)v37;
          v20 = 0;
          if ( HIDWORD(v37) == (_DWORD)v37 )
          {
            v21 = 0;
            v22 = 0;
          }
          else
            v23 = 0;
            do
            {
              v24 = *(_DWORD *)(v37 + 4 * v23++);
              v25 = __PAIR__(v22, v21) + *(_QWORD *)(v24 + 16);
              v22 = (__PAIR__((unsigned int)v22, v21) + *(_QWORD *)(v24 + 16)) >> 32;
              v21 = v25;
            }
            while ( v23 < (HIDWORD(v37) - (signed int)v37) >> 2 );
          v6 = 2;
          v13 = v21 >= 10 * *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 8) + 36);
          v16 = v21 == 10 * *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 8) + 36);
          v26 = 0;
          v27 = 10 * *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 8) + 36);
          if ( !v16 && v13 )
            v26 = 1;
          if ( v22 > v27 >> 31 )
            v20 = 1;
          if ( v22 == v27 >> 31 )
            v20 = v26;
          if ( v20 )
            v6 = 1;
      if ( v7 )
        j_operator delete(v7);
    }
    v28 = v35 - 12;
    if ( (int *)(v35 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v35 - 4);
      if ( &pthread_create )
        __dmb();
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j__ZdlPv_9(v28);
    v29 = v36 - 12;
    if ( (int *)(v36 - 12) != &dword_28898C0 )
      v33 = (unsigned int *)(v36 - 4);
          v34 = __ldrex(v33);
        while ( __strex(v34 - 1, v33) );
        v34 = (*v33)--;
      if ( v34 <= 0 )
        j_j_j_j__ZdlPv_9(v29);
  }
  return v6;
}


leveldb::log::Writer *__fastcall leveldb::log::Writer::Writer(leveldb::log::Writer *this, leveldb::WritableFile *a2, unsigned __int64 a3)
{
  leveldb::log::Writer *v3; // r4@1
  unsigned int v4; // r3@1
  unsigned int v5; // r3@1
  unsigned int v6; // r3@1
  unsigned int v7; // r3@1
  char v9; // [sp+7h] [bp-11h]@1

  LODWORD(a3) = a3 & 0x7FFF;
  v3 = this;
  *(_QWORD *)this = *(_QWORD *)&a2;
  v9 = 0;
  *((_DWORD *)this + 2) = j_leveldb::crc32c::Extend(0, (unsigned int)&v9, (const char *)1, HIDWORD(a3));
  v9 = 1;
  *((_DWORD *)v3 + 3) = j_leveldb::crc32c::Extend(0, (unsigned int)&v9, (const char *)1, v4);
  v9 = 2;
  *((_DWORD *)v3 + 4) = j_leveldb::crc32c::Extend(0, (unsigned int)&v9, (const char *)1, v5);
  v9 = 3;
  *((_DWORD *)v3 + 5) = j_leveldb::crc32c::Extend(0, (unsigned int)&v9, (const char *)1, v6);
  v9 = 4;
  *((_DWORD *)v3 + 6) = j_leveldb::crc32c::Extend(0, (unsigned int)&v9, (const char *)1, v7);
  return v3;
}


int __fastcall leveldb::NewDBIterator(leveldb *this, leveldb::DBImpl *a2, const leveldb::Comparator *a3, leveldb::Iterator *a4, unsigned __int64 a5, unsigned int a6)
{
  leveldb *v6; // r6@1
  const leveldb::Comparator *v7; // r4@1
  leveldb::DBImpl *v8; // r5@1
  leveldb::Iterator *v9; // r0@1
  int result; // r0@1
  unsigned int v11; // r1@1
  bool v12; // zf@1
  int v13; // r1@6

  v6 = this;
  v7 = a3;
  v8 = a2;
  v9 = (leveldb::Iterator *)j_operator new(0x48u);
  result = j_leveldb::Iterator::Iterator(v9);
  *(_DWORD *)result = &off_2725C04;
  *(_DWORD *)(result + 20) = v6;
  *(_DWORD *)(result + 24) = v8;
  *(_DWORD *)(result + 36) = HIDWORD(a5);
  *(_DWORD *)(result + 28) = v7;
  *(_DWORD *)(result + 32) = a5;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = &unk_28898CC;
  *(_DWORD *)(result + 48) = &unk_28898CC;
  v11 = a6 & 0x7FFFFFFF;
  *(_DWORD *)(result + 52) = 0;
  *(_BYTE *)(result + 56) = 0;
  v12 = (a6 & 0x7FFFFFFF) == 0x7FFFFFFF;
  *(_DWORD *)(result + 60) = a6 & 0x7FFFFFFF;
  if ( (a6 & 0x7FFFFFFF) != 0x7FFFFFFF )
    v12 = v11 == 0;
  if ( v12 )
  {
    v11 = 1;
    *(_DWORD *)(result + 60) = 1;
  }
  v13 = (16807 * v11 & 0x7FFFFFFF) + (unsigned __int64)(16807LL * v11 >> 31);
  if ( v13 < 0 )
    v13 -= 0x7FFFFFFF;
  *(_DWORD *)(result + 60) = v13;
  *(_DWORD *)(result + 64) = v13 & 0x1FFFFF;
  return result;
}


int __fastcall leveldb::crc32c::Extend(leveldb::crc32c *this, unsigned int a2, const char *a3, unsigned int a4)
{
  leveldb::crc32c *v4; // r6@1
  const char *v5; // r5@1
  const char *v6; // r4@1
  char v7; // r0@1
  char v8; // r7@3
  int result; // r0@7
  int v10; // r12@8
  const char *v11; // r1@8
  unsigned int v12; // r2@8
  int v13; // t1@10
  int v14; // r3@14
  unsigned int v15; // r2@14
  int v16; // r6@14
  int v17; // r0@14
  unsigned int v18; // r2@14
  unsigned int v19; // r2@14
  unsigned int v20; // r0@14
  int v21; // t1@16
  int v22; // t1@18

  v4 = this;
  v5 = a3;
  v6 = (const char *)a2;
  v7 = byte_28392C0;
  __dmb();
  if ( !(v7 & 1) && j_j___cxa_guard_acquire_0((unsigned int *)&byte_28392C0) )
  {
    v8 = 0;
    if ( j_leveldb::port::AcceleratedCRC32C(0, (unsigned int)"TestCRCBuffer", (const char *)0xD, a4) == -591635974 )
      v8 = 1;
    byte_28392BC = v8;
    j_j___cxa_guard_release_0((unsigned int *)&byte_28392C0);
  }
  if ( byte_28392BC )
    result = j_j_j__ZN7leveldb4port17AcceleratedCRC32CEjPKcj_0(v4, (unsigned int)v6, v5, a4);
  else
    v10 = (int)&v5[(_DWORD)v6];
    v11 = (const char *)((unsigned int)(v6 + 3) & 0xFFFFFFFC);
    v12 = ~(unsigned int)v4;
    if ( v11 > &v5[(signed int)v6] || v11 == v6 )
    {
      v11 = v6;
    }
    else
      do
      {
        v13 = *v6++;
        v12 = dword_262EBC0[v13 ^ (unsigned __int8)v12] ^ (v12 >> 8);
      }
      while ( v11 != v6 );
    for ( ;
          v10 - (signed int)v11 > 15;
          v12 = dword_262EFC0[(unsigned __int8)v20] ^ dword_262F3C0[(unsigned __int16)v20 >> 8] ^ dword_262F7C0[(v20 >> 16) & 0xFF] ^ dword_262EBC0[v20 >> 24] )
      v14 = *((_DWORD *)v11 + 1);
      v15 = v12 ^ *(_DWORD *)v11;
      v16 = *((_DWORD *)v11 + 2);
      v17 = *((_DWORD *)v11 + 3);
      v11 += 16;
      v18 = dword_262EBC0[v15 >> 24] ^ dword_262F3C0[(unsigned __int16)v15 >> 8] ^ dword_262EFC0[(unsigned __int8)v15] ^ dword_262F7C0[(v15 >> 16) & 0xFF] ^ v14;
      v19 = dword_262EBC0[v18 >> 24] ^ dword_262EFC0[(unsigned __int8)v18] ^ dword_262F3C0[(unsigned __int16)v18 >> 8] ^ dword_262F7C0[(v18 >> 16) & 0xFF] ^ v16;
      v20 = v17 ^ dword_262F7C0[(v19 >> 16) & 0xFF] ^ dword_262EFC0[(unsigned __int8)v19] ^ dword_262F3C0[(unsigned __int16)v19 >> 8] ^ dword_262EBC0[v19 >> 24];
          v10 - (signed int)v11 > 3;
          v12 = dword_262EBC0[(v12 ^ v21) >> 24] ^ dword_262F7C0[((v12 ^ v21) >> 16) & 0xFF] ^ dword_262F3C0[(unsigned __int16)(v12 ^ v21) >> 8] ^ dword_262EFC0[(unsigned __int8)(v12 ^ v21)] )
      v21 = *(_DWORD *)v11;
      v11 += 4;
    for ( ; (const char *)v10 != v11; v12 = dword_262EBC0[v22 ^ (unsigned __int8)v12] ^ (v12 >> 8) )
      v22 = *v11++;
    result = ~v12;
  return result;
}


void __fastcall leveldb::DBImpl::~DBImpl(leveldb::DBImpl *this)
{
  leveldb::DBImpl *v1; // r0@1

  v1 = j_leveldb::DBImpl::~DBImpl(this);
  j_j_j__ZdlPv_7((void *)v1);
}


char *__fastcall leveldb::GetVarint32PtrFallback(leveldb *this, const char *a2, const char *a3, unsigned int *a4)
{
  char *result; // r0@2
  char *v5; // r12@3
  unsigned int v6; // r3@3
  int v7; // lr@3
  int v8; // r4@4
  bool v9; // cf@5

  if ( this < (leveldb *)a2 )
  {
    v5 = (char *)this + 1;
    v6 = 0;
    v7 = 0;
    result = 0;
    while ( 1 )
    {
      v8 = (unsigned __int8)*(v5 - 1);
      if ( !(v8 & 0x80) )
        break;
      v9 = v5 >= a2;
      if ( v5 < a2 )
      {
        v7 |= (v8 & 0x7F) << v6;
        ++v5;
        v6 += 7;
        v9 = v6 >= 0x1D;
      }
      if ( v9 )
        return result;
    }
    *(_DWORD *)a3 = (v8 << v6) | v7;
    result = v5;
  }
  else
  return result;
}


int __fastcall leveldb::FindFile(int a1, _QWORD *a2, unsigned __int64 *a3)
{
  _DWORD *v3; // r5@1
  int v4; // r11@1
  unsigned __int64 *v5; // r9@1
  int v6; // r7@1
  __int64 v7; // r0@1
  unsigned int v8; // r4@2
  int v10; // [sp+4h] [bp-2Ch]@4
  int v11; // [sp+8h] [bp-28h]@4

  v3 = a2;
  v4 = a1;
  v7 = *a2;
  v5 = a3;
  v6 = 0;
  HIDWORD(v7) -= v7;
  if ( SHIDWORD(v7) >> 2 )
  {
    v6 = SHIDWORD(v7) >> 2;
    v8 = 0;
    while ( 1 )
    {
      v10 = *(_DWORD *)(*(_DWORD *)(v7 + 4 * ((v8 + v6) >> 1)) + 28);
      v11 = *(_DWORD *)(v10 - 12);
      if ( j_leveldb::InternalKeyComparator::Compare(v4, (unsigned __int64 *)&v10, v5) >= 0 )
        v6 = (v8 + v6) >> 1;
      else
        v8 = ((v8 + v6) >> 1) + 1;
      if ( v8 >= v6 )
        break;
      LODWORD(v7) = *v3;
    }
  }
  return v6;
}


leveldb::VersionEdit *__fastcall leveldb::DBImpl::BackgroundCompaction(leveldb::DBImpl *this)
{
  leveldb::DBImpl *v1; // r4@1
  leveldb::VersionEdit *result; // r0@2
  int v3; // r9@5
  leveldb::VersionSet *v4; // r0@5
  void *v5; // r8@6
  char v6; // r0@6
  int *v7; // r1@10
  int v8; // r6@10
  leveldb *v9; // r7@10
  const char *v10; // r5@11
  signed int v11; // r0@11
  int *v12; // r1@14
  const char *v13; // r10@15
  signed int v14; // r11@15
  void *v15; // r0@19
  char *v16; // r0@21
  char *v17; // r0@23
  int v18; // r6@27
  int v19; // r11@27
  __int64 v20; // r1@27
  _DWORD *v21; // r11@27
  int v22; // t1@27
  unsigned __int64 v23; // r2@27
  void *v24; // r0@27
  char *v25; // r1@27
  void *v26; // r1@31
  _DWORD *v27; // r0@32
  int v28; // r6@32
  const char *v29; // r1@32
  leveldb::Status *v30; // r5@32
  void *v31; // r0@32
  __int64 v32; // ST1C_8@54
  __int64 v33; // r5@54
  leveldb *v34; // r10@54
  int v35; // r7@54
  void *v36; // r0@54
  int v37; // r6@56
  int v38; // r0@56
  int v39; // r6@57
  leveldb *v40; // r5@58
  __int64 v41; // r2@58
  char *v42; // r0@58
  int v43; // r6@60
  char *v44; // r0@67
  unsigned int *v45; // r2@70
  signed int v46; // r1@72
  unsigned int *v47; // r2@78
  signed int v48; // r1@80
  unsigned int *v49; // r2@82
  signed int v50; // r1@84
  unsigned int *v51; // r2@86
  signed int v52; // r1@88
  unsigned int *v53; // r2@97
  signed int v54; // r1@99
  unsigned int *v55; // r2@107
  signed int v56; // r1@109
  signed int v57; // [sp+20h] [bp-C0h]@14
  char *v58; // [sp+24h] [bp-BCh]@58
  leveldb::Status *v59; // [sp+28h] [bp-B8h]@32
  int v60; // [sp+2Ch] [bp-B4h]@54
  char *v61; // [sp+30h] [bp-B0h]@27
  void *ptr; // [sp+34h] [bp-ACh]@24
  int v63; // [sp+38h] [bp-A8h]@19
  const char *v64; // [sp+3Ch] [bp-A4h]@15
  const char *v65; // [sp+40h] [bp-A0h]@11
  char *v66; // [sp+44h] [bp-9Ch]@5
  char v67; // [sp+48h] [bp-98h]@27
  int v68; // [sp+50h] [bp-90h]@27
  __int64 v69; // [sp+58h] [bp-88h]@27
  RakNet *v70; // [sp+B8h] [bp-28h]@1

  v1 = this;
  v70 = _stack_chk_guard;
  if ( *((_DWORD *)this + 283) )
  {
    result = (leveldb::VersionEdit *)(_stack_chk_guard - v70);
    if ( _stack_chk_guard == v70 )
      return j_j_j__ZN7leveldb6DBImpl15CompactMemTableEv_0(v1);
LABEL_69:
    j___stack_chk_fail_0((int)result);
  }
  v3 = *((_DWORD *)this + 318);
  v66 = (char *)&unk_28898CC;
  v4 = (leveldb::VersionSet *)*((_DWORD *)this + 319);
  if ( v3 )
    v5 = j_leveldb::VersionSet::CompactRange(
           v4,
           *(_DWORD *)v3,
           (const leveldb::InternalKey *)*(_QWORD *)(v3 + 8),
           (const leveldb::InternalKey *)(*(_QWORD *)(v3 + 8) >> 32));
    v6 = 0;
    if ( !v5 )
      v6 = 1;
    *(_BYTE *)(v3 + 4) = v6;
    if ( v5 )
      EntityInteraction::setInteractText((int *)&v66, (int *)(*(_DWORD *)(*((_DWORD *)v5 + 31) - 4) + 28));
    v7 = *(int **)(v3 + 8);
    v8 = *(_DWORD *)v3;
    v9 = (leveldb *)*((_DWORD *)v1 + 9);
    if ( v7 )
    {
      j_leveldb::InternalKey::DebugString((leveldb::InternalKey *)&v65, v7);
      v10 = v65;
      v11 = 1;
    }
    else
      v11 = 0;
      v10 = "(begin)";
    v57 = v11;
    v12 = *(int **)(v3 + 12);
    if ( v12 )
      j_leveldb::InternalKey::DebugString((leveldb::InternalKey *)&v64, v12);
      v13 = v64;
      v14 = 1;
      v14 = 0;
      v13 = "(end)";
    if ( *(_BYTE *)(v3 + 4) )
      j_leveldb::Log(
        v9,
        (leveldb::Logger *)"Manual compaction at level-%d from %s .. %s; will stop at %s\n",
        __PAIR__((unsigned int)v10, v8),
        v13,
        "(end)");
      j_leveldb::InternalKey::DebugString((leveldb::InternalKey *)&v63, (int *)&v66);
        v63);
      v15 = (void *)(v63 - 12);
      if ( (int *)(v63 - 12) != &dword_28898C0 )
      {
        v51 = (unsigned int *)(v63 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
        }
        else
          v52 = (*v51)--;
        if ( v52 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      }
    if ( v14 == 1 )
      v16 = (char *)(v64 - 12);
      if ( (int *)(v64 - 12) != &dword_28898C0 )
        v47 = (unsigned int *)(v64 - 4);
            v48 = __ldrex(v47);
          while ( __strex(v48 - 1, v47) );
          v48 = (*v47)--;
        if ( v48 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
    if ( v57 == 1 )
      v17 = (char *)(v65 - 12);
      if ( (int *)(v65 - 12) != &dword_28898C0 )
        v49 = (unsigned int *)(v65 - 4);
            v50 = __ldrex(v49);
          while ( __strex(v50 - 1, v49) );
          v50 = (*v49)--;
        if ( v50 <= 0 )
          j_j_j_j__ZdlPv_9(v17);
  else
    v5 = j_leveldb::VersionSet::PickCompaction(v4);
  ptr = 0;
  if ( v5 )
    if ( v3 || j_leveldb::Compaction::IsTrivialMove((leveldb::Compaction *)v5) != 1 )
      v27 = j_operator new(0x30u);
      v28 = (int)v27;
      *v27 = v5;
      v27[10] = 0;
      v27[11] = 0;
      v27[8] = 0;
      v27[6] = 0;
      v27[7] = 0;
      v27[4] = 0;
      v27[5] = 0;
      j_leveldb::DBImpl::DoCompactionWork(&v59, (int)v1, (int)v27);
      v30 = v59;
      v31 = ptr;
      if ( ptr == (void *)v59 )
        v30 = (leveldb::Status *)ptr;
      else
        if ( ptr )
          j_operator delete[](ptr);
        if ( v30 )
          v31 = j_leveldb::Status::CopyState(v30, v29);
          v31 = 0;
        ptr = v31;
      if ( v30 )
        j_operator delete[]((void *)v30);
        v31 = ptr;
      if ( v31 && !*((_DWORD *)v1 + 320) )
        *((_DWORD *)v1 + 320) = j_leveldb::Status::CopyState((leveldb::Status *)v31, 0);
        j_leveldb::port::CondVar::SignalAll((leveldb::DBImpl *)((char *)v1 + 1120));
      j_leveldb::DBImpl::CleanupCompaction((int)v1, v28);
      j_leveldb::Compaction::ReleaseInputs((leveldb::Compaction *)v5);
      j_leveldb::DBImpl::DeleteObsoleteFiles(v1);
      v18 = **((_DWORD **)v5 + 30);
      v19 = **((_DWORD **)v5 + 30);
      v22 = *(_DWORD *)(v19 + 8);
      v21 = (_DWORD *)(v19 + 8);
      LODWORD(v20) = v22;
      HIDWORD(v20) = *(_DWORD *)(v18 + 12);
      v68 = *(_DWORD *)v5;
      v69 = v20;
      j_std::_Rb_tree<std::pair<int,unsigned long long>,std::pair<int,unsigned long long>,std::_Identity<std::pair<int,unsigned long long>>,std::less<std::pair<int,unsigned long long>>,std::allocator<std::pair<int,unsigned long long>>>::_M_insert_unique<std::pair<int,unsigned long long>>(
        (int)&v67,
        (int)v5 + 84,
        (int)&v68);
      HIDWORD(v23) = *(_DWORD *)(v18 + 12);
      LODWORD(v23) = *v21;
      j_leveldb::VersionEdit::AddFile(
        (leveldb::VersionEdit *)((char *)v5 + 24),
        *(_DWORD *)v5 + 1,
        v23,
        *(_QWORD *)(v18 + 16),
        (const leveldb::InternalKey *)(v18 + 24),
        (const leveldb::InternalKey *)(v18 + 28));
      j_leveldb::VersionSet::LogAndApply(
        (leveldb::VersionSet *)&v61,
        *((leveldb::VersionEdit **)v1 + 319),
        (leveldb::port::Mutex *)((char *)v5 + 24),
        (leveldb::DBImpl *)((char *)v1 + 1112));
      v24 = ptr;
      v25 = v61;
      if ( ptr == v61 )
        v26 = ptr;
          v25 = v61;
        if ( v25 )
          v24 = j_leveldb::Status::CopyState((leveldb::Status *)v25, v25);
          v26 = v61;
          v26 = 0;
          v24 = 0;
        ptr = v24;
      if ( v26 )
        j_operator delete[](v26);
        v24 = ptr;
      if ( v24 && !*((_DWORD *)v1 + 320) )
        *((_DWORD *)v1 + 320) = j_leveldb::Status::CopyState((leveldb::Status *)v24, 0);
      v32 = *(_QWORD *)v21;
      v33 = *(_QWORD *)(v18 + 16);
      v34 = (leveldb *)*((_DWORD *)v1 + 9);
      v35 = *(_DWORD *)v5;
      j_leveldb::Status::ToString((leveldb::Status *)&v60, (unsigned int **)&ptr);
      j_leveldb::VersionSet::LevelSummary(*((_DWORD *)v1 + 319), (char *)&v68);
      j_leveldb::Log(v34, (leveldb::Logger *)"Moved #%lld to level-%d %lld bytes %s: %s\n", v32, v35 + 1);
      v36 = (void *)(v60 - 12);
      if ( (int *)(v60 - 12) != &dword_28898C0 )
        v53 = (unsigned int *)(v60 - 4);
            v54 = __ldrex(v53);
          while ( __strex(v54 - 1, v53) );
          v54 = (*v53)--;
        if ( v54 <= 0 )
          j_j_j_j__ZdlPv_9(v36);
    j_leveldb::Compaction::~Compaction((leveldb::Compaction *)v5);
    j_operator delete(v5);
    if ( ptr )
      v37 = *((_DWORD *)v1 + 279);
      v38 = vFFFF0FA0();
      if ( !v37 )
        v39 = *((_DWORD *)v1 + 317);
        vFFFF0FA0(v38);
        if ( !v39 )
          v40 = (leveldb *)*((_DWORD *)v1 + 9);
          j_leveldb::Status::ToString((leveldb::Status *)&v58, (unsigned int **)&ptr);
          LODWORD(v41) = v58;
          j_leveldb::Log(v40, (leveldb::Logger *)"Compaction error: %s", v41);
          v42 = v58 - 12;
          if ( (int *)(v58 - 12) != &dword_28898C0 )
          {
            v55 = (unsigned int *)(v58 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v56 = __ldrex(v55);
              while ( __strex(v56 - 1, v55) );
            }
            else
              v56 = (*v55)--;
            if ( v56 <= 0 )
              j_j_j_j__ZdlPv_9(v42);
          }
    v43 = *((_DWORD *)v1 + 318);
      *(_BYTE *)(v43 + 4) = 1;
    else if ( !*(_BYTE *)(v43 + 4) )
      EntityInteraction::setInteractText((int *)(v43 + 16), (int *)&v66);
      *(_DWORD *)(v43 + 8) = v43 + 16;
    *((_DWORD *)v1 + 318) = 0;
  if ( ptr )
    j_operator delete[](ptr);
  v44 = v66 - 12;
  if ( (int *)(v66 - 12) != &dword_28898C0 )
    v45 = (unsigned int *)(v66 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v46 = __ldrex(v45);
      while ( __strex(v46 - 1, v45) );
      v46 = (*v45)--;
    if ( v46 <= 0 )
      j_j_j_j__ZdlPv_9(v44);
  result = (leveldb::VersionEdit *)(_stack_chk_guard - v70);
  if ( _stack_chk_guard != v70 )
    goto LABEL_69;
  return result;
}


leveldb::FilterBlockBuilder *__fastcall leveldb::FilterBlockBuilder::~FilterBlockBuilder(leveldb::FilterBlockBuilder *this)
{
  leveldb::FilterBlockBuilder *v1; // r5@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r1@5
  void *v5; // r0@5
  void *v6; // r0@6
  int v7; // r1@8
  void *v8; // r0@8
  unsigned int *v10; // r2@10
  signed int v11; // r1@12
  unsigned int *v12; // r2@14
  signed int v13; // r1@16

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 9);
  if ( v2 )
    j_operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 6);
  if ( v3 )
    j_operator delete(v3);
  v4 = *((_DWORD *)v1 + 5);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v4 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)*((_DWORD *)v1 + 2);
  if ( v6 )
    j_operator delete(v6);
  v7 = *((_DWORD *)v1 + 1);
  v8 = (void *)(v7 - 12);
  if ( (int *)(v7 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v7 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v8);
  return v1;
}


void __fastcall leveldb::ReadBlock(_DWORD *a1, int a2, __int64 a3, int a4, int a5)
{
  leveldb::ReadBlock(a1, a2, a3, a4, a5);
}


leveldb::log::Writer *__fastcall leveldb::log::Writer::Writer(leveldb::log::Writer *this, leveldb::WritableFile *a2, int a3, unsigned int a4)
{
  leveldb::log::Writer *v4; // r4@1
  unsigned int v5; // r3@1
  unsigned int v6; // r3@1
  unsigned int v7; // r3@1
  unsigned int v8; // r3@1
  char v10; // [sp+7h] [bp-11h]@1

  v4 = this;
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = 0;
  v10 = 0;
  *((_DWORD *)this + 2) = j_leveldb::crc32c::Extend(0, (unsigned int)&v10, (const char *)1, a4);
  v10 = 1;
  *((_DWORD *)v4 + 3) = j_leveldb::crc32c::Extend(0, (unsigned int)&v10, (const char *)1, v5);
  v10 = 2;
  *((_DWORD *)v4 + 4) = j_leveldb::crc32c::Extend(0, (unsigned int)&v10, (const char *)1, v6);
  v10 = 3;
  *((_DWORD *)v4 + 5) = j_leveldb::crc32c::Extend(0, (unsigned int)&v10, (const char *)1, v7);
  v10 = 4;
  *((_DWORD *)v4 + 6) = j_leveldb::crc32c::Extend(0, (unsigned int)&v10, (const char *)1, v8);
  return v4;
}


char *__fastcall leveldb::EncodeVarint32(leveldb *this, char *a2, unsigned int a3)
{
  char *result; // r0@2
  unsigned int v4; // r2@7

  if ( (unsigned int)a2 > 0x7F )
  {
    if ( (unsigned int)a2 >> 14 )
    {
      if ( 0 == (unsigned int)a2 >> 21 )
      {
        *(_BYTE *)this = (unsigned __int8)a2 | 0x80;
        *((_BYTE *)this + 1) = ((unsigned int)a2 >> 7) | 0x80;
        *((_BYTE *)this + 2) = (unsigned int)a2 >> 14;
        result = (char *)this + 3;
      }
      else
        *((_BYTE *)this + 2) = ((unsigned int)a2 >> 14) | 0x80;
        v4 = (unsigned int)a2 >> 21;
        if ( (unsigned int)a2 >> 28 )
        {
          *((_BYTE *)this + 3) = v4 | 0x80;
          *((_BYTE *)this + 4) = (unsigned int)a2 >> 28;
          result = (char *)this + 5;
        }
        else
          *((_BYTE *)this + 3) = v4;
          result = (char *)this + 4;
    }
    else
      *(_BYTE *)this = (unsigned __int8)a2 | 0x80;
      *((_BYTE *)this + 1) = (unsigned int)a2 >> 7;
      result = (char *)this + 2;
  }
  else
    *(_BYTE *)this = (_BYTE)a2;
    result = (char *)this + 1;
  return result;
}


void __fastcall leveldb::WriteStringToFileSync(leveldb::Status **a1, int a2, int a3, int a4)
{
  leveldb::WriteStringToFileSync(a1, a2, a3, a4);
}


int __fastcall leveldb::MemTableIterator::key(leveldb::MemTableIterator *this, int a2, int a3, unsigned int *a4)
{
  leveldb::MemTableIterator *v4; // r4@1
  __int64 v5; // r0@1
  char v7[4]; // [sp+4h] [bp-Ch]@2

  v4 = this;
  LODWORD(v5) = **(_DWORD **)(a2 + 24);
  HIDWORD(v5) = *(_BYTE *)v5;
  if ( BYTE4(v5) & 0x80 )
  {
    LODWORD(v5) = j_leveldb::GetVarint32PtrFallback((leveldb *)v5, (const char *)(v5 + 5), v7, a4);
    HIDWORD(v5) = *(_DWORD *)v7;
  }
  else
    *(_DWORD *)v7 = *(_BYTE *)v5;
    LODWORD(v5) = v5 + 1;
  *(_QWORD *)v4 = v5;
  return v5;
}


char *__fastcall leveldb::BlockBuilder::Reset(leveldb::BlockBuilder *this)
{
  leveldb::BlockBuilder *v1; // r4@1
  char *v2; // r5@1
  _DWORD *v3; // r0@1
  char *v4; // r5@3
  __int64 v5; // kr00_8@3

  v1 = this;
  v2 = (char *)this + 4;
  sub_21E7EE0((const void **)this + 1, 0, *(_BYTE **)(*((_DWORD *)this + 1) - 12), 0);
  v3 = (_DWORD *)*((_DWORD *)v2 + 1);
  *((_DWORD *)v2 + 2) = v3;
  if ( v3 == *((_DWORD **)v2 + 3) )
  {
    v4 = (char *)j_operator new(4u);
    v5 = *((_QWORD *)v1 + 1);
    *(_DWORD *)&v4[HIDWORD(v5) - v5] = 0;
    if ( 0 != (HIDWORD(v5) - (signed int)v5) >> 2 )
      j___aeabi_memmove4_0((int)v4, v5);
    if ( (_DWORD)v5 )
      j_operator delete((void *)v5);
    *((_DWORD *)v1 + 2) = v4;
    *((_DWORD *)v1 + 3) = &v4[HIDWORD(v5) - v5 + 4];
    *((_DWORD *)v1 + 4) = v4 + 4;
  }
  else
    *v3 = 0;
    *((_DWORD *)v1 + 3) = v3 + 1;
  *((_DWORD *)v1 + 5) = 0;
  *((_BYTE *)v1 + 24) = 0;
  return sub_21E7EE0((const void **)v1 + 7, 0, *(_BYTE **)(*((_DWORD *)v1 + 7) - 12), 0);
}


leveldb::RandomAccessFileEncrypted *__fastcall leveldb::RandomAccessFileEncrypted::~RandomAccessFileEncrypted(leveldb::RandomAccessFileEncrypted *this)
{
  leveldb::RandomAccessFileEncrypted *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_2724CD4;
  v2 = *((_DWORD *)this + 2);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 1);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  j_leveldb::RandomAccessFile::~RandomAccessFile(v1);
  return v1;
}


void __fastcall leveldb::VersionSet::SetupOtherInputs(leveldb::VersionSet *this, leveldb::Compaction *a2)
{
  leveldb::VersionSet *v2; // r9@1
  leveldb::Compaction *v3; // r11@1
  char *v4; // r10@1
  unsigned int v5; // r8@1
  unsigned int v6; // r5@2
  __int64 v7; // kr00_8@2
  unsigned int v8; // r2@3
  unsigned int v9; // r3@3
  int v10; // r7@4
  unsigned __int64 v11; // kr08_8@4
  __int64 v12; // kr10_8@5
  unsigned int v13; // r7@6
  unsigned int v14; // r3@6
  unsigned int v15; // r6@7
  int v16; // r4@8
  unsigned __int64 v17; // kr18_8@8
  void *v18; // r0@9
  signed int v19; // lr@9
  unsigned int v20; // r10@10
  unsigned int v21; // r2@10
  unsigned int v22; // r6@11
  int v23; // r1@12
  unsigned __int64 v24; // kr20_8@12
  int v25; // r2@14
  signed int v26; // r3@14
  signed int v27; // r1@14
  bool v28; // zf@16
  bool v29; // nf@16
  unsigned __int8 v30; // vf@16
  signed int v31; // r1@16
  void *v32; // r0@21
  __int64 v33; // r2@22
  char *v34; // r0@25
  char *v35; // r0@26
  void *v36; // r0@32
  __int64 v37; // r0@33
  int v38; // r1@34
  void *v39; // r0@36
  char *v40; // r0@37
  char *v41; // r0@38
  char *v42; // r0@39
  char *v43; // r0@40
  unsigned int *v44; // r2@42
  signed int v45; // r1@44
  unsigned int *v46; // r2@46
  signed int v47; // r1@48
  unsigned int *v48; // r2@50
  signed int v49; // r1@52
  unsigned int *v50; // r2@54
  signed int v51; // r1@56
  unsigned int *v52; // r2@58
  signed int v53; // r1@60
  unsigned int *v54; // r2@62
  signed int v55; // r1@64
  unsigned int *v56; // r2@90
  signed int v57; // r1@92
  unsigned int *v58; // r2@94
  signed int v59; // r1@96
  char *v60; // [sp+1Ch] [bp-44h]@9
  unsigned __int64 *v61; // [sp+20h] [bp-40h]@1
  int v62; // [sp+30h] [bp-30h]@32
  __int64 ptr; // [sp+34h] [bp-2Ch]@21
  int v64; // [sp+3Ch] [bp-24h]@21
  char *v65; // [sp+40h] [bp-20h]@21
  char *v66; // [sp+44h] [bp-1Ch]@21
  __int64 v67; // [sp+48h] [bp-18h]@2
  int v68; // [sp+50h] [bp-10h]@2
  char *v69; // [sp+54h] [bp-Ch]@1
  char *v70; // [sp+58h] [bp-8h]@1
  _DWORD *v71; // [sp+5Ch] [bp-4h]@1
  char *v72; // [sp+60h] [bp+0h]@1

  v2 = this;
  v3 = a2;
  v4 = (char *)a2 + 120;
  v5 = *(_DWORD *)a2;
  v71 = &unk_28898CC;
  v72 = (char *)&unk_28898CC;
  j_leveldb::VersionSet::GetRange((int)this, (__int64 *)a2 + 15, (const void **)&v72, (const void **)&v71);
  v61 = (unsigned __int64 *)((char *)v3 + 132);
  j_leveldb::Version::GetOverlappingInputs(*((int **)v2 + 50), v5 + 1, (int *)&v72, (void **)&v71, (int)v3 + 132);
  v69 = (char *)&unk_28898CC;
  v70 = (char *)&unk_28898CC;
  j_leveldb::VersionSet::GetRange2(
    (int)v2,
    v4,
    (unsigned __int64 *)((char *)v3 + 132),
    (const void **)&v70,
    (const void **)&v69);
  if ( (unsigned int)*(_QWORD *)((char *)v3 + 132) != *(_QWORD *)((char *)v3 + 132) >> 32 )
  {
    v6 = 0;
    v67 = 0LL;
    v68 = 0;
    j_leveldb::Version::GetOverlappingInputs(*((int **)v2 + 50), v5, (int *)&v70, (void **)&v69, (int)&v67);
    v7 = *((_QWORD *)v3 + 15);
    if ( HIDWORD(v7) != (_DWORD)v7 )
    {
      v8 = 0;
      v6 = 0;
      v9 = 0;
      do
      {
        v10 = *(_DWORD *)(v7 + 4 * v8++);
        v11 = __PAIR__(v9, v6) + *(_QWORD *)(v10 + 16);
        v9 = (__PAIR__(v9, v6) + *(_QWORD *)(v10 + 16)) >> 32;
        v6 = v11;
      }
      while ( v8 < (HIDWORD(v7) - (signed int)v7) >> 2 );
    }
    v12 = *(_QWORD *)((char *)v3 + 132);
    if ( HIDWORD(v12) == (_DWORD)v12 )
      v13 = 0;
      v14 = 0;
    else
      v15 = 0;
        v16 = *(_DWORD *)(v12 + 4 * v15++);
        v17 = __PAIR__(v14, v13) + *(_QWORD *)(v16 + 16);
        v14 = (__PAIR__(v14, v13) + *(_QWORD *)(v16 + 16)) >> 32;
        v13 = v17;
      while ( v15 < HIDWORD(v12) );
    v60 = v4;
    v18 = (void *)v67;
    v19 = HIDWORD(v67) - v67;
    if ( HIDWORD(v67) == (_DWORD)v67 )
      v20 = 0;
      v21 = 0;
      v22 = 0;
        v23 = *(_DWORD *)(v67 + 4 * v22++);
        v24 = __PAIR__(v21, v20) + *(_QWORD *)(v23 + 16);
        v21 = (__PAIR__(v21, v20) + *(_QWORD *)(v23 + 16)) >> 32;
        v20 = v24;
      while ( v22 < v19 >> 2 );
    if ( v19 > (unsigned int)(HIDWORD(v7) - v7) )
      v25 = v14 + __CFADD__(v20, v13) + v21;
      v26 = 0;
      v27 = 25 * *(_DWORD *)(*((_DWORD *)v2 + 2) + 36);
      if ( v20 + v13 >= v27 )
        v26 = 1;
      v30 = __OFSUB__(v25, v27 >> 31);
      v28 = v25 == v27 >> 31;
      v29 = v25 - (v27 >> 31) < 0;
      v31 = 0;
      if ( !(v29 ^ v30) )
        v31 = 1;
      if ( v28 )
        v31 = v26;
      if ( !v31 )
        v65 = (char *)&unk_28898CC;
        v66 = (char *)&unk_28898CC;
        j_leveldb::VersionSet::GetRange((int)v2, &v67, (const void **)&v66, (const void **)&v65);
        ptr = 0LL;
        v64 = 0;
        j_leveldb::Version::GetOverlappingInputs(*((int **)v2 + 50), v5 + 1, (int *)&v66, (void **)&v65, (int)&ptr);
        v32 = (void *)ptr;
        if ( (HIDWORD(ptr) - (signed int)ptr) >> 2 == (signed int)((*(_QWORD *)((char *)v3 + 132) >> 32)
                                                                 - *(_QWORD *)((char *)v3 + 132)) >> 2 )
        {
          HIDWORD(v33) = (signed int)((*((_QWORD *)v3 + 15) >> 32) - *((_QWORD *)v3 + 15)) >> 2;
          LODWORD(v33) = v5;
          j_leveldb::Log(
            *(leveldb **)(*((_DWORD *)v2 + 2) + 12),
            (leveldb::Logger *)"Expanding@%d %d+%d (%ld+%ld bytes) to %d+%d (%ld+%ld bytes)\n",
            v33,
            (HIDWORD(ptr) - (signed int)ptr) >> 2,
            v6,
            v13,
            (HIDWORD(v67) - (signed int)v67) >> 2,
            v20,
            v13);
          EntityInteraction::setInteractText((int *)&v72, (int *)&v66);
          EntityInteraction::setInteractText((int *)&v71, (int *)&v65);
          j_std::vector<leveldb::FileMetaData *,std::allocator<leveldb::FileMetaData *>>::operator=(__PAIR__(&v67, (unsigned int)v60));
          j_std::vector<leveldb::FileMetaData *,std::allocator<leveldb::FileMetaData *>>::operator=(__PAIR__(&ptr, (unsigned int)v61));
          j_leveldb::VersionSet::GetRange2((int)v2, v60, v61, (const void **)&v70, (const void **)&v69);
          v32 = (void *)ptr;
        }
        if ( v32 )
          j_operator delete(v32);
        v34 = v65 - 12;
        if ( (int *)(v65 - 12) != &dword_28898C0 )
          v56 = (unsigned int *)(v65 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v57 = __ldrex(v56);
            while ( __strex(v57 - 1, v56) );
          }
          else
            v57 = (*v56)--;
          if ( v57 <= 0 )
            j_j_j_j__ZdlPv_9(v34);
        v35 = v66 - 12;
        if ( (int *)(v66 - 12) != &dword_28898C0 )
          v58 = (unsigned int *)(v66 - 4);
              v59 = __ldrex(v58);
            while ( __strex(v59 - 1, v58) );
            v59 = (*v58)--;
          if ( v59 <= 0 )
            j_j_j_j__ZdlPv_9(v35);
        v18 = (void *)v67;
    if ( v18 )
      j_operator delete(v18);
  }
  if ( (signed int)(v5 + 2) <= 6 )
    j_leveldb::Version::GetOverlappingInputs(*((int **)v2 + 50), v5 + 2, (int *)&v70, (void **)&v69, (int)v3 + 144);
  sub_21E91E0((void **)&v62, (unsigned int)v71, *(v71 - 3));
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v2 + v5 + 51,
    &v62);
  v36 = (void *)(v62 - 12);
  if ( (int *)(v62 - 12) != &dword_28898C0 )
    v44 = (unsigned int *)(v62 - 4);
    if ( &pthread_create )
      __dmb();
        v45 = __ldrex(v44);
      while ( __strex(v45 - 1, v44) );
      v45 = (*v44)--;
    if ( v45 <= 0 )
      j_j_j_j__ZdlPv_9(v36);
  LODWORD(v67) = v5;
  sub_21E8AF4((int *)&v67 + 1, (int *)&v71);
  v37 = *(_QWORD *)((char *)v3 + 76);
  if ( (_DWORD)v37 == HIDWORD(v37) )
    j_std::vector<std::pair<int,leveldb::InternalKey>,std::allocator<std::pair<int,leveldb::InternalKey>>>::_M_emplace_back_aux<std::pair<int,leveldb::InternalKey>>(
      (unsigned __int64 *)v3 + 9,
      (int)&v67);
    v38 = HIDWORD(v67);
  else
    *(_QWORD *)v37 = v67;
    HIDWORD(v37) = &unk_28898CC;
    HIDWORD(v67) = &unk_28898CC;
    *((_DWORD *)v3 + 19) = v37 + 8;
  v39 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v46 = (unsigned int *)(v38 - 4);
        v47 = __ldrex(v46);
      while ( __strex(v47 - 1, v46) );
      v47 = (*v46)--;
    if ( v47 <= 0 )
      j_j_j_j__ZdlPv_9(v39);
  v40 = v69 - 12;
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v48 = (unsigned int *)(v69 - 4);
        v49 = __ldrex(v48);
      while ( __strex(v49 - 1, v48) );
      v49 = (*v48)--;
    if ( v49 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  v41 = v70 - 12;
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v50 = (unsigned int *)(v70 - 4);
        v51 = __ldrex(v50);
      while ( __strex(v51 - 1, v50) );
      v51 = (*v50)--;
    if ( v51 <= 0 )
      j_j_j_j__ZdlPv_9(v41);
  v42 = (char *)(v71 - 3);
  if ( v71 - 3 != &dword_28898C0 )
    v52 = v71 - 1;
        v53 = __ldrex(v52);
      while ( __strex(v53 - 1, v52) );
      v53 = (*v52)--;
    if ( v53 <= 0 )
      j_j_j_j__ZdlPv_9(v42);
  v43 = v72 - 12;
  if ( (int *)(v72 - 12) != &dword_28898C0 )
    v54 = (unsigned int *)(v72 - 4);
        v55 = __ldrex(v54);
      while ( __strex(v55 - 1, v54) );
      v55 = (*v54)--;
    if ( v55 <= 0 )
      j_j_j_j__ZdlPv_9(v43);
}


void __fastcall leveldb::InternalKeyComparator::FindShortestSeparator(int a1, unsigned int *a2, __int64 *a3)
{
  leveldb::InternalKeyComparator::FindShortestSeparator(a1, a2, a3);
}


leveldb::Status *__fastcall leveldb::TableBuilder::WriteRawBlock(int a1, int a2, int a3, int a4)
{
  int v4; // r6@1
  int v5; // r4@1
  int v6; // r5@1
  unsigned int v7; // r3@1
  leveldb::Status *result; // r0@1
  leveldb::Status *v9; // r1@1
  leveldb::Status *v10; // r1@6
  char v11; // r0@13
  leveldb::crc32c *v12; // r0@15
  unsigned int v13; // r3@15
  int v14; // off@15
  unsigned int v15; // r2@15
  void (__fastcall *v16)(leveldb::Status **); // r3@15
  leveldb::Status *v17; // r1@15
  leveldb::Status *v18; // r1@20
  __int64 v19; // r1@26
  char *v20; // [sp+0h] [bp-28h]@15
  int v21; // [sp+4h] [bp-24h]@15
  leveldb::Status *v22; // [sp+8h] [bp-20h]@15
  char v23; // [sp+Fh] [bp-19h]@15
  int v24; // [sp+10h] [bp-18h]@15
  leveldb::Status *v25; // [sp+14h] [bp-14h]@1

  v4 = *(_DWORD *)a1;
  v5 = a2;
  v6 = a3;
  *(_QWORD *)a4 = *(_QWORD *)(*(_DWORD *)a1 + 2152);
  *(_QWORD *)(a4 + 8) = *(_DWORD *)(a2 + 4);
  (*(void (__fastcall **)(leveldb::Status **))(**(_DWORD **)(v4 + 2144) + 8))(&v25);
  result = *(leveldb::Status **)(v4 + 2160);
  v9 = v25;
  if ( result == v25 )
  {
    v10 = *(leveldb::Status **)(v4 + 2160);
  }
  else
    if ( result )
    {
      j_operator delete[]((void *)result);
      v9 = v25;
    }
    if ( v9 )
      result = (leveldb::Status *)j_leveldb::Status::CopyState(v9, (const char *)v9);
    else
      result = 0;
    *(_DWORD *)(v4 + 2160) = result;
    v10 = v25;
  if ( v10 )
    j_operator delete[]((void *)v10);
    result = *(leveldb::Status **)(v4 + 2160);
  if ( !result )
    if ( v6 )
      v11 = *(_BYTE *)(v6 + 24);
      v11 = 0;
    v23 = v11;
    v12 = (leveldb::crc32c *)j_leveldb::crc32c::Extend(0, *(_QWORD *)v5, (const char *)(*(_QWORD *)v5 >> 32), v7);
    v14 = __ROR4__(j_leveldb::crc32c::Extend(v12, (unsigned int)&v23, (const char *)1, v13), 15);
    j_leveldb::EncodeFixed32((leveldb *)&v24, (char *)(v14 - 1568478504), v15);
    v16 = *(void (__fastcall **)(leveldb::Status **))(**(_DWORD **)(v4 + 2144) + 8);
    v20 = &v23;
    v21 = 5;
    v16(&v22);
    v17 = v22;
    if ( result == v22 )
      v18 = *(leveldb::Status **)(v4 + 2160);
      if ( result )
      {
        j_operator delete[]((void *)result);
        v17 = v22;
      }
      if ( v17 )
        result = (leveldb::Status *)j_leveldb::Status::CopyState(v17, (const char *)v17);
      else
        result = 0;
      *(_DWORD *)(v4 + 2160) = result;
      v18 = v22;
    if ( v18 )
      j_operator delete[]((void *)v18);
      result = *(leveldb::Status **)(v4 + 2160);
    if ( !result )
      result = (leveldb::Status *)(v4 + 2152);
      HIDWORD(v19) = (*(_QWORD *)(v4 + 2152) + (unsigned __int64)(unsigned int)(*(_DWORD *)(v5 + 4) + 5)) >> 32;
      LODWORD(v19) = *(_DWORD *)(v4 + 2152) + *(_DWORD *)(v5 + 4) + 5;
      *(_QWORD *)(v4 + 2152) = v19;
  return result;
}


int __fastcall leveldb::DBImpl::BackgroundCall(leveldb::DBImpl *this)
{
  leveldb::DBImpl *v1; // r5@1
  leveldb::port::Mutex *v2; // r4@1
  int v3; // r0@1
  int v4; // r7@1
  int v5; // r7@4
  int v6; // r0@4
  int v9; // r7@8
  int v10; // r7@10
  int v11; // r0@12
  bool v12; // zf@12

  v1 = this;
  v2 = (leveldb::DBImpl *)((char *)this + 1112);
  v3 = j_leveldb::port::Mutex::Lock((leveldb::DBImpl *)((char *)this + 1112));
  v4 = *((_DWORD *)v1 + 279);
  vFFFF0FA0(v3);
  if ( !v4 && !*((_DWORD *)v1 + 320) )
    j_leveldb::DBImpl::BackgroundCompaction(v1);
  *((_BYTE *)v1 + 1264) = 0;
  v5 = *((_DWORD *)v1 + 317);
  v6 = vFFFF0FA0();
  _ZF = v5 == 0;
  if ( !v5 )
  {
    v6 = *((_BYTE *)v1 + 1264);
    _ZF = v6 == 0;
  }
  if ( _ZF )
    v9 = *((_DWORD *)v1 + 279);
    vFFFF0FA0(v6);
    if ( !v9 )
    {
      if ( *((_DWORD *)v1 + 283) || (v10 = *((_DWORD *)v1 + 317), vFFFF0FA0(), !v10) )
      {
        if ( !*((_DWORD *)v1 + 320) )
        {
          v11 = *((_DWORD *)v1 + 283);
          v12 = v11 == 0;
          if ( !v11 )
            v12 = *((_DWORD *)v1 + 318) == 0;
          if ( !v12 )
            goto LABEL_22;
          __asm { VMOV.F64        D0, #1.0 }
          _R0 = *(_DWORD *)(*((_DWORD *)v1 + 319) + 200);
          __asm
          {
            VLDR            D1, [R0,#0x70]
            VCMPE.F64       D1, D0
            VMRS            APSR_nzcv, FPSCR
          }
          if ( !(_NF ^ _VF) || *(_DWORD *)(_R0 + 100) )
LABEL_22:
            *((_BYTE *)v1 + 1264) = 1;
            (*(void (**)(void))(**((_DWORD **)v1 + 1) + 60))();
        }
      }
    }
  j_leveldb::port::CondVar::SignalAll((leveldb::DBImpl *)((char *)v1 + 1120));
  return j_j_j__ZN7leveldb4port5Mutex6UnlockEv_0(v2);
}


RakNet *__fastcall leveldb::LogFileName(int *a1, int *a2)
{
  int *v2; // r5@1
  int *v3; // r4@1
  unsigned int v4; // r0@1
  RakNet *result; // r0@1
  char s; // [sp+10h] [bp-78h]@1
  RakNet *v7; // [sp+74h] [bp-14h]@1

  v2 = a1;
  v3 = a2;
  v7 = _stack_chk_guard;
  j_snprintf(&s, 0x64u, "/%06llu.%s");
  sub_21E8AF4(v2, v3);
  v4 = j_strlen_0(&s);
  sub_21E7408((const void **)v2, &s, v4);
  result = (RakNet *)(_stack_chk_guard - v7);
  if ( _stack_chk_guard != v7 )
    j___stack_chk_fail_0((int)result);
  return result;
}


leveldb::WriteBatch *__fastcall leveldb::WriteBatch::~WriteBatch(leveldb::WriteBatch *this)
{
  leveldb::WriteBatch *v1; // r5@1
  int v2; // r1@1
  int *v3; // r0@1
  unsigned int *v5; // r2@3
  signed int v6; // r1@5

  v1 = this;
  v2 = *(_DWORD *)this;
  v3 = (int *)(*(_DWORD *)this - 12);
  if ( v3 != &dword_28898C0 )
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


char *__fastcall leveldb::VersionSet::Builder::MaybeAddFile(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // r11@1
  __int64 *v5; // r12@1
  int v6; // r3@1
  int v7; // lr@1
  int v8; // r3@1
  int v9; // r7@1
  __int64 v10; // kr00_8@2
  int v11; // r4@2
  unsigned int v12; // r0@4
  signed int v13; // r3@4
  bool v14; // cf@6
  bool v15; // zf@6
  signed int v16; // r0@6
  unsigned int v17; // r3@15
  signed int v18; // r4@15
  __int64 v19; // kr18_8@15
  char *result; // r0@15
  int v21; // r7@24
  char *v22; // r0@24
  int v23; // r7@24
  char *v24; // t1@24
  void **v25; // r9@26
  _BYTE *v26; // r8@26
  unsigned int v27; // r2@26
  unsigned int v28; // r1@28
  unsigned int v29; // r5@28
  char *v30; // r6@34
  int v31; // r4@36
  int v32; // r4@38

  v4 = (_DWORD *)a4;
  v5 = (__int64 *)(a4 + 8);
  v6 = a1 + 28 * a3;
  v7 = v6 + 12;
  v8 = *(_DWORD *)(v6 + 16);
  v9 = v7;
  if ( v8 )
  {
    v10 = *v5;
    v11 = v7;
    do
    {
      v9 = v8;
      while ( 1 )
      {
        v12 = *(_QWORD *)(v9 + 16) >> 32;
        v13 = 0;
        if ( (unsigned int)*(_QWORD *)(v9 + 16) < (unsigned int)v10 )
          v13 = 1;
        v14 = v12 >= HIDWORD(v10);
        v15 = v12 == HIDWORD(v10);
        v16 = 0;
        if ( !v14 )
          v16 = 1;
        if ( v15 )
          v16 = v13;
        if ( !v16 )
          break;
        v9 = *(_DWORD *)(v9 + 12);
        if ( !v9 )
        {
          v9 = v11;
          goto LABEL_14;
        }
      }
      v8 = *(_DWORD *)(v9 + 8);
      v11 = v9;
    }
    while ( v8 );
  }
LABEL_14:
  if ( v9 == v7 )
    goto LABEL_45;
  v17 = *(_QWORD *)(v9 + 16) >> 32;
  v18 = 0;
  v19 = *v5;
  result = 0;
  if ( (unsigned int)*v5 < (unsigned int)*(_QWORD *)(v9 + 16) )
    result = (char *)1;
  if ( HIDWORD(v19) < v17 )
    v18 = 1;
  if ( HIDWORD(v19) == v17 )
    v18 = (signed int)result;
  if ( v18 )
    v9 = v7;
LABEL_45:
    ++*v4;
    v21 = a2 + 12 * a3;
    v24 = *(char **)(v21 + 20);
    v23 = v21 + 20;
    v22 = v24;
    if ( v24 == *(char **)(v23 + 4) )
      v25 = (void **)(v23 - 4);
      v26 = *(_BYTE **)(v23 - 4);
      v27 = (v22 - v26) >> 2;
      if ( !v27 )
        v27 = 1;
      v28 = v27 + ((v22 - v26) >> 2);
      v29 = v27 + ((v22 - v26) >> 2);
      if ( 0 != v28 >> 30 )
        v29 = 0x3FFFFFFF;
      if ( v28 < v27 )
      if ( v29 )
        if ( v29 >= 0x40000000 )
          sub_21E57F4();
        v30 = (char *)j_operator new(4 * v29);
        v26 = *v25;
        v22 = *(char **)v23;
      else
        v30 = 0;
      v31 = (int)&v30[v22 - v26];
      *(_DWORD *)&v30[v22 - v26] = v4;
      if ( 0 != (v22 - v26) >> 2 )
        j___aeabi_memmove4_0((int)v30, (int)v26);
      v32 = v31 + 4;
      if ( v26 )
        j_operator delete(v26);
      *v25 = v30;
      result = &v30[4 * v29];
      *(_DWORD *)v23 = v32;
      *(_DWORD *)(v23 + 4) = result;
    else
      *(_DWORD *)v22 = v4;
      result = (char *)(*(_DWORD *)v23 + 4);
      *(_DWORD *)v23 = result;
  return result;
}


void __fastcall leveldb::Table::ReadMeta(int a1, int a2)
{
  int v2; // r4@1
  __int64 v3; // r2@1
  void *v4; // r0@6
  void *v5; // r5@6
  leveldb *v6; // r0@6
  int v7; // r0@6
  _DWORD *v8; // r6@6
  const char *v9; // r0@6
  char *v10; // r7@6
  unsigned int v11; // r0@6
  void (__fastcall *v12)(_DWORD *, void **); // r2@6
  size_t v13; // r2@7
  char *v14; // r0@12
  unsigned int *v15; // r2@14
  signed int v16; // r1@16
  char v17; // [sp+8h] [bp-58h]@9
  void *s1; // [sp+10h] [bp-50h]@7
  int v19; // [sp+14h] [bp-4Ch]@7
  void *v20; // [sp+18h] [bp-48h]@6
  int v21; // [sp+1Ch] [bp-44h]@6
  void *s2; // [sp+24h] [bp-3Ch]@6
  void *ptr; // [sp+28h] [bp-38h]@4
  void *v24; // [sp+2Ch] [bp-34h]@4
  int v25; // [sp+30h] [bp-30h]@4
  char v26; // [sp+38h] [bp-28h]@2
  char v27; // [sp+39h] [bp-27h]@2
  int v28; // [sp+3Ch] [bp-24h]@2
  int v29; // [sp+40h] [bp-20h]@2

  v2 = a1;
  LODWORD(v3) = *(_DWORD *)a1;
  if ( !*(_DWORD *)(*(_DWORD *)a1 + 1068) )
    return;
  v26 = 0;
  v27 = 1;
  v28 = 0;
  v29 = 0;
  if ( *(_BYTE *)(v3 + 6) )
    v26 = 1;
  v24 = &unk_257BC67;
  v25 = 0;
  HIDWORD(v3) = &v26;
  j_leveldb::ReadBlock(&ptr, *(_DWORD *)(v3 + 1076), v3, a2, (int)&v24);
  if ( ptr )
  {
    j_operator delete[](ptr);
  }
  v4 = j_operator new(0x10u);
  v5 = v4;
  v6 = (leveldb *)j_leveldb::Block::Block((int)v4, (int)&v24);
  v7 = j_leveldb::BytewiseComparator(v6);
  v8 = j_leveldb::Block::NewIterator((int)v5, v7);
  sub_21E94B4(&s2, "filter.");
  v9 = (const char *)(*(int (**)(void))(**(_DWORD **)(*(_DWORD *)v2 + 1068) + 8))();
  v10 = (char *)v9;
  v11 = j_strlen_0(v9);
  sub_21E7408((const void **)&s2, v10, v11);
  v12 = *(void (__fastcall **)(_DWORD *, void **))(*v8 + 20);
  v20 = s2;
  v21 = *((_DWORD *)s2 - 3);
  v12(v8, &v20);
  if ( (*(int (__fastcall **)(_DWORD *))(*v8 + 8))(v8) == 1 )
    (*(void (__fastcall **)(void **, _DWORD *))(*v8 + 32))(&s1, v8);
    v13 = *((_DWORD *)s2 - 3);
    if ( v19 == v13 && !j_memcmp_0(s1, s2, v13) )
    {
      (*(void (__fastcall **)(char *, _DWORD *))(*v8 + 36))(&v17, v8);
      j_leveldb::Table::ReadFilter(v2, (__int64 *)&v17);
    }
  else if ( !v8 )
    goto LABEL_12;
  (*(void (__fastcall **)(_DWORD *))(*v8 + 4))(v8);
LABEL_12:
  j_leveldb::Block::~Block((int)v5);
  j_operator delete(v5);
  v14 = (char *)s2 - 12;
  if ( (int *)((char *)s2 - 12) != &dword_28898C0 )
    v15 = (unsigned int *)((char *)s2 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
}


void __fastcall leveldb::DBImpl::TEST_CompactRange(int a1, int a2, __int64 *a3, __int64 *a4)
{
  int v4; // r4@1
  __int64 *v5; // r5@1
  char *v6; // r0@2
  char *v7; // r0@6
  int **v8; // r9@10
  int *v12; // r0@12
  int v13; // r5@16
  int v14; // r5@18
  int v15; // r0@20
  int v18; // r11@30
  char *v19; // r0@34
  char *v20; // r0@35
  char *v21; // r0@36
  unsigned int *v22; // r2@38
  signed int v23; // r1@40
  unsigned int *v24; // r2@42
  signed int v25; // r1@44
  unsigned int *v26; // r2@46
  signed int v27; // r1@48
  unsigned int *v28; // r2@50
  signed int v29; // r1@52
  unsigned int *v30; // r2@54
  signed int v31; // r1@56
  char *v32; // [sp+4h] [bp-6Ch]@6
  char *v33; // [sp+8h] [bp-68h]@2
  int v34; // [sp+Ch] [bp-64h]@1
  char v35; // [sp+10h] [bp-60h]@1
  int *v36; // [sp+14h] [bp-5Ch]@3
  int *v37; // [sp+18h] [bp-58h]@7
  char *v38; // [sp+1Ch] [bp-54h]@1
  char *v39; // [sp+20h] [bp-50h]@1
  char *v40; // [sp+24h] [bp-4Ch]@1
  __int64 v41; // [sp+28h] [bp-48h]@2
  int v42; // [sp+30h] [bp-40h]@2
  int v43; // [sp+34h] [bp-3Ch]@2
  int v44; // [sp+38h] [bp-38h]@2

  v4 = a1;
  v5 = a4;
  v40 = (char *)&unk_28898CC;
  v38 = (char *)&unk_28898CC;
  v39 = (char *)&unk_28898CC;
  v34 = a2;
  v35 = 0;
  if ( a3 )
  {
    v33 = (char *)&unk_28898CC;
    v41 = *a3;
    v43 = 0xFFFFFF;
    v42 = -1;
    v44 = 1;
    j_leveldb::AppendInternalKey((const void **)&v33, (unsigned __int64 *)&v41);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v40,
      (int *)&v33);
    v6 = v33 - 12;
    if ( (int *)(v33 - 12) != &dword_28898C0 )
    {
      v28 = (unsigned int *)(v33 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v29 = __ldrex(v28);
        while ( __strex(v29 - 1, v28) );
      }
      else
        v29 = (*v28)--;
      if ( v29 <= 0 )
        j_j_j_j__ZdlPv_9(v6);
    }
    v36 = (int *)&v40;
  }
  else
    v36 = 0;
  if ( v5 )
    v32 = (char *)&unk_28898CC;
    v41 = *v5;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    j_leveldb::AppendInternalKey((const void **)&v32, (unsigned __int64 *)&v41);
      (int *)&v39,
      (int *)&v32);
    v7 = v32 - 12;
    if ( (int *)(v32 - 12) != &dword_28898C0 )
      v30 = (unsigned int *)(v32 - 4);
          v31 = __ldrex(v30);
        while ( __strex(v31 - 1, v30) );
        v31 = (*v30)--;
      if ( v31 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    v37 = (int *)&v39;
    v37 = 0;
  j_leveldb::port::Mutex::Lock((leveldb::port::Mutex *)(v4 + 1112));
  if ( v35 )
    v8 = (int **)(v4 + 1272);
    __asm { VMOV.F64        D8, #1.0 }
    do
      v18 = *(_DWORD *)(v4 + 1116);
      vFFFF0FA0();
      if ( v18 )
        break;
      v12 = *(int **)(v4 + 1272);
      if ( *(_DWORD *)(v4 + 1280) )
        goto LABEL_32;
      if ( v12 )
        j_leveldb::port::CondVar::Wait((leveldb::port::CondVar *)(v4 + 1120));
        *(_DWORD *)(v4 + 1272) = &v34;
        if ( !*(_BYTE *)(v4 + 1264) )
        {
          v13 = *(_DWORD *)(v4 + 1116);
          vFFFF0FA0();
          if ( !v13 )
          {
            if ( *(_DWORD *)(v4 + 1132) || (v14 = *(_DWORD *)(v4 + 1268), vFFFF0FA0(), !v14) )
            {
              if ( !*(_DWORD *)(v4 + 1280) )
              {
                v15 = *(_DWORD *)(v4 + 1132);
                _ZF = v15 == 0;
                if ( !v15 )
                  _ZF = *v8 == 0;
                if ( !_ZF )
                  goto LABEL_80;
                _R0 = *(_DWORD *)(*(_DWORD *)(v4 + 1276) + 200);
                __asm
                {
                  VLDR            D0, [R0,#0x70]
                  VCMPE.F64       D0, D8
                  VMRS            APSR_nzcv, FPSCR
                }
                if ( !(_NF ^ _VF) || *(_DWORD *)(_R0 + 100) )
LABEL_80:
                  *(_BYTE *)(v4 + 1264) = 1;
                  (*(void (**)(void))(**(_DWORD **)(v4 + 4) + 60))();
              }
            }
          }
        }
    while ( !v35 );
  v12 = *v8;
LABEL_32:
  if ( v12 == &v34 )
    *v8 = 0;
  j_leveldb::port::Mutex::Unlock((leveldb::port::Mutex *)(v4 + 1112));
  v19 = v38 - 12;
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v38 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
    else
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = v39 - 12;
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v39 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = v40 - 12;
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v40 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
}


int (**__fastcall leveldb::DecompressAllocator::prune(leveldb::DecompressAllocator *this))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  leveldb::DecompressAllocator *v1; // r8@1
  pthread_mutex_t *v2; // r4@1
  int v3; // r0@2
  __int64 v4; // kr00_8@3
  char *v5; // r1@4
  _DWORD *v6; // r7@4
  unsigned int *v7; // r2@5
  signed int v8; // r6@7
  char *v9; // r5@11
  int *v10; // r0@12
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@14
  char v12; // [sp+8h] [bp-28h]@4

  v1 = this;
  v2 = (pthread_mutex_t *)((char *)this + 4);
  if ( &pthread_create )
  {
    v3 = j_pthread_mutex_lock_0(v2);
    if ( v3 )
      sub_21E5E14(v3);
  }
  v4 = *((_QWORD *)v1 + 1);
  if ( HIDWORD(v4) != (_DWORD)v4 )
    v5 = &v12;
    v6 = (_DWORD *)v4;
    do
    {
      v10 = (int *)(*v6 - 12);
      if ( v10 != &dword_28898C0 )
      {
        v7 = (unsigned int *)(*v6 - 4);
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
          v9 = v5;
          j_j_j_j__ZdlPv_9(v10);
          v5 = v9;
      }
      ++v6;
    }
    while ( v6 != (_DWORD *)HIDWORD(v4) );
  *((_DWORD *)v1 + 3) = v4;
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))j_pthread_mutex_unlock_0(v2);
  return result;
}


int __fastcall leveldb::port::Mutex::Lock(leveldb::port::Mutex *this)
{
  int result; // r0@1
  char *v2; // r0@2

  result = j_pthread_mutex_lock_0((pthread_mutex_t *)this);
  if ( result )
  {
    v2 = j_strerror(result);
    j_fprintf((FILE *)((char *)&_sF + 168), "pthread %s: %s\n", "lock", v2);
    j_abort();
  }
  return result;
}


_DWORD *__fastcall leveldb::TableBuilder::TableBuilder(_DWORD *a1, int a2, int a3)
{
  _DWORD *v3; // r8@1
  int v4; // r7@1
  int v5; // r6@1
  _DWORD *v6; // r5@1
  leveldb::FilterBlockBuilder *v7; // r0@1
  const leveldb::FilterPolicy *v8; // r6@1
  leveldb::FilterBlockBuilder *v9; // r0@2

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v6 = j_operator new(0x8E8u);
  j___aeabi_memcpy4_0((int)v6, v5, 1072);
  j___aeabi_memcpy4_0((int)(v6 + 268), v5, 1072);
  v6[536] = v4;
  v6[538] = 0;
  v6[539] = 0;
  v6[540] = 0;
  j_leveldb::BlockBuilder::BlockBuilder((int)(v6 + 541), (int)v6);
  j_leveldb::BlockBuilder::BlockBuilder((int)(v6 + 549), (int)(v6 + 268));
  v6[557] = &unk_28898CC;
  v6[558] = 0;
  v7 = 0;
  v6[559] = 0;
  *((_BYTE *)v6 + 2240) = 0;
  v8 = *(const leveldb::FilterPolicy **)(v5 + 1068);
  if ( v8 )
  {
    v9 = (leveldb::FilterBlockBuilder *)j_operator new(0x30u);
    v7 = (leveldb::FilterBlockBuilder *)j_leveldb::FilterBlockBuilder::FilterBlockBuilder(v9, v8);
  }
  v6[561] = v7;
  *((_BYTE *)v6 + 2248) = 0;
  v6[564] = -1;
  v6[565] = -1;
  v6[566] = -1;
  v6[567] = -1;
  v6[568] = &unk_28898CC;
  v6[276] = 1;
  *v3 = v6;
  if ( v7 )
    j_leveldb::FilterBlockBuilder::StartBlock(v7, 1, 0LL);
  return v3;
}


void __fastcall leveldb::Iterator::~Iterator(leveldb::Iterator *this)
{
  leveldb::Iterator::~Iterator(this);
}


void __fastcall leveldb::Footer::DecodeFrom(_DWORD *a1, _QWORD *a2, int a3)
{
  int v3; // r5@1
  int v4; // r6@1
  _QWORD *v5; // r7@1
  _DWORD *v6; // r4@1
  void **v7; // r8@4
  leveldb::Status *v8; // r1@6
  leveldb::Status *v9; // r0@6
  const char *v10; // r1@11
  void *v11; // r1@22
  void *v12; // r0@22
  __int64 v13; // r0@25
  leveldb::Status *v14; // [sp+0h] [bp-40h]@9
  void *ptr; // [sp+4h] [bp-3Ch]@4
  void *v16; // [sp+8h] [bp-38h]@5
  int v17; // [sp+Ch] [bp-34h]@5
  const char *v18; // [sp+10h] [bp-30h]@5
  int v19; // [sp+14h] [bp-2Ch]@5
  void *v20; // [sp+18h] [bp-28h]@6
  int v21; // [sp+1Ch] [bp-24h]@6
  const char *v22; // [sp+20h] [bp-20h]@6
  int v23; // [sp+24h] [bp-1Ch]@6

  v3 = a3;
  v4 = *(_DWORD *)a3;
  v5 = a2;
  v6 = a1;
  if ( *(_QWORD *)(*(_DWORD *)a3 + 40) != -2646017456237118633LL )
  {
    v18 = "not an sstable (bad magic number)";
    v19 = 33;
    v16 = &unk_257BC67;
    v17 = 0;
    j_leveldb::Status::Status(a1, 2, (int)&v18, (int)&v16);
    return;
  }
  if ( j_leveldb::GetVarint64(a3, a2) != 1 || j_leveldb::GetVarint64(v3, v5 + 1) != 1 )
    v7 = &ptr;
    v22 = "bad block handle";
    v23 = 16;
    v20 = &unk_257BC67;
    v21 = 0;
    j_leveldb::Status::Status(&ptr, 2, (int)&v22, (int)&v20);
    v9 = (leveldb::Status *)ptr;
    if ( ptr )
      goto LABEL_22;
  else
    ptr = 0;
  if ( j_leveldb::GetVarint64(v3, v5 + 2) != 1 || j_leveldb::GetVarint64(v3, v5 + 3) != 1 )
    j_leveldb::Status::Status(&v14, 2, (int)&v22, (int)&v20);
    v9 = v14;
    v9 = 0;
    v14 = 0;
  v10 = (const char *)ptr;
  if ( ptr == (void *)v9 )
    v8 = v9;
    {
      j_operator delete[](ptr);
      v9 = v14;
    }
    if ( v9 )
      v9 = (leveldb::Status *)j_leveldb::Status::CopyState(v9, v10);
    else
      v9 = 0;
    v8 = v14;
    ptr = (void *)v9;
  if ( v8 )
    j_operator delete[]((void *)v8);
  if ( !v9 )
    v13 = *(_QWORD *)v3;
    *(_DWORD *)v3 = v4 + 48;
    *(_DWORD *)(v3 + 4) = v13 + HIDWORD(v13) - (v4 + 48);
    *v6 = 0;
LABEL_22:
  v11 = j_leveldb::Status::CopyState(v9, (const char *)v8);
  v12 = *v7;
  *v6 = v11;
  if ( v12 )
    j_operator delete[](v12);
}


void __fastcall leveldb::WritableFileEncrypted::Append(int a1, int a2, unsigned __int64 *a3)
{
  int v3; // r5@1
  int v4; // r4@1
  __int64 v5; // r0@1
  void *v6; // r0@1
  void *v7; // r0@2
  unsigned int *v8; // r2@4
  signed int v9; // r1@6
  unsigned int *v10; // r2@8
  signed int v11; // r1@10
  __int64 v12; // [sp+0h] [bp-28h]@1
  int v13; // [sp+8h] [bp-20h]@1
  int v14; // [sp+10h] [bp-18h]@1

  v3 = a2;
  v4 = a1;
  sub_21E91E0((void **)&v14, *a3, *a3 >> 32);
  (*(void (__fastcall **)(int *))(**(_DWORD **)(v3 + 8) + 12))(&v13);
  LODWORD(v5) = v13;
  HIDWORD(v5) = *(_DWORD *)(v13 - 12);
  v12 = v5;
  (*(void (__fastcall **)(int))(**(_DWORD **)(v3 + 4) + 8))(v4);
  v6 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
  {
    v8 = (unsigned int *)(v13 - 4);
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
      j_j_j_j__ZdlPv_9(v6);
  }
  v7 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v10 = (unsigned int *)(v14 - 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
}


void __fastcall leveldb::Version::Unref(leveldb::Version *this)
{
  int v1; // r1@1
  leveldb::Version *v2; // r0@3

  v1 = *((_DWORD *)this + 3) - 1;
  *((_DWORD *)this + 3) = v1;
  if ( this )
  {
    if ( !v1 )
    {
      v2 = j_leveldb::Version::~Version(this);
      j_j_j__ZdlPv_7((void *)v2);
    }
  }
}


int __fastcall leveldb::MemTable::~MemTable(leveldb::MemTable *this)
{
  leveldb::MemTable *v1; // r4@1

  v1 = this;
  j_leveldb::Comparator::~Comparator((leveldb::MemTable *)((char *)this + 36));
  j_leveldb::Arena::~Arena((leveldb::MemTable *)((char *)v1 + 12));
  return j_j_j__ZN7leveldb10ComparatorD2Ev_0(v1);
}


void __fastcall leveldb::Block::Iter::~Iter(int a1)
{
  int v1; // r4@1
  void *v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  unsigned int *v5; // r12@5
  signed int v6; // r1@7

  v1 = a1;
  *(_DWORD *)a1 = &off_272614C;
  v2 = *(void **)(a1 + 56);
  if ( v2 )
    j_operator delete[](v2);
  v3 = *(_DWORD *)(v1 + 44);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v3 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  j_leveldb::Iterator::~Iterator((leveldb::Iterator *)v1);
  j_operator delete((void *)v1);
}


int __fastcall leveldb::BlockBuilder::CurrentSizeEstimate(leveldb::BlockBuilder *this)
{
  return *((_DWORD *)this + 3)
       + *(_DWORD *)(*(_QWORD *)((char *)this + 4) - 12)
       + 4
       - (*(_QWORD *)((char *)this + 4) >> 32);
}


signed int __fastcall leveldb::Version::LevelFileNumIterator::value(leveldb::Version::LevelFileNumIterator *this, int a2)
{
  int v2; // r4@1
  leveldb::Version::LevelFileNumIterator *v3; // r5@1
  signed int result; // r0@1

  v2 = a2;
  v3 = this;
  j_leveldb::EncodeFixed64(
    (leveldb *)(a2 + 36),
    (char *)(*(_QWORD *)(a2 + 28) >> 32),
    *(_QWORD *)(*(_DWORD *)(*(_DWORD *)*(_QWORD *)(a2 + 28) + 4 * (*(_QWORD *)(a2 + 28) >> 32)) + 8));
    (leveldb *)(v2 + 44),
    (char *)(*(_QWORD *)(v2 + 28) >> 32),
    *(_QWORD *)(*(_DWORD *)(*(_DWORD *)*(_QWORD *)(v2 + 28) + 4 * (*(_QWORD *)(v2 + 28) >> 32)) + 16));
  result = 16;
  *(_DWORD *)v3 = v2 + 36;
  *((_DWORD *)v3 + 1) = 16;
  return result;
}


void __fastcall leveldb::DBImpl::CompactRange(int a1, __int64 *a2, __int64 *a3)
{
  leveldb::DBImpl::CompactRange(a1, a2, a3);
}


int __fastcall leveldb::Version::LevelFileNumIterator::Seek(int result, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // r4@1
  unsigned __int64 *v3; // r10@1
  unsigned int v4; // r7@1
  int v5; // r2@1
  signed int v6; // r1@1
  int v7; // r6@2
  unsigned int v8; // r5@2
  int v9; // [sp+0h] [bp-30h]@2
  int v10; // [sp+4h] [bp-2Ch]@4
  int v11; // [sp+8h] [bp-28h]@4

  v2 = *(unsigned __int64 **)(result + 28);
  v3 = a2;
  v4 = 0;
  v5 = *v2;
  v6 = (*v2 >> 32) - v5;
  if ( v6 >> 2 )
  {
    v7 = result + 20;
    v4 = v6 >> 2;
    v8 = 0;
    v9 = result;
    while ( 1 )
    {
      v10 = *(_DWORD *)(*(_DWORD *)(v5 + 4 * ((v4 + v8) >> 1)) + 28);
      v11 = *(_DWORD *)(v10 - 12);
      if ( j_leveldb::InternalKeyComparator::Compare(v7, (unsigned __int64 *)&v10, v3) >= 0 )
        v4 = (v4 + v8) >> 1;
      else
        v8 = ((v4 + v8) >> 1) + 1;
      if ( v8 >= v4 )
        break;
      v5 = *(_DWORD *)v2;
    }
    result = v9;
  }
  *(_DWORD *)(result + 32) = v4;
  return result;
}


void __fastcall leveldb::VersionSet::SetupOtherInputs(leveldb::VersionSet *this, leveldb::Compaction *a2)
{
  leveldb::VersionSet::SetupOtherInputs(this, a2);
}


__int64 __fastcall leveldb::VersionSet::MaxNextLevelOverlappingBytes(leveldb::VersionSet *this)
{
  leveldb::VersionSet *v1; // r1@1
  void *v2; // r0@1
  unsigned int v3; // r10@1
  __int64 v4; // r8@1
  int *v5; // r12@1
  int v6; // r11@2
  unsigned int v7; // r7@3
  int v8; // r0@4
  __int64 v9; // r2@5
  unsigned int v10; // r4@6
  int v11; // r5@7
  signed int v12; // r6@8
  signed int v13; // r5@10
  __int64 v14; // kr00_8@12
  leveldb::VersionSet *v16; // [sp+4h] [bp-34h]@1
  _BYTE *v17; // [sp+8h] [bp-30h]@1
  _BYTE *v18; // [sp+Ch] [bp-2Ch]@1
  int v19; // [sp+10h] [bp-28h]@1

  v1 = this;
  v2 = 0;
  v16 = v1;
  v3 = 1;
  v17 = 0;
  v18 = 0;
  v4 = 0LL;
  v19 = 0;
  v5 = (int *)*((_DWORD *)v1 + 50);
  do
  {
    v6 = 3 * v3++;
    if ( *(_QWORD *)&v5[v6 + 4] >> 32 != (unsigned int)*(_QWORD *)&v5[v6 + 4] )
    {
      v7 = 0;
      do
      {
        v8 = *(_DWORD *)(v5[v6 + 4] + 4 * v7);
        j_leveldb::Version::GetOverlappingInputs(v5, v3, (int *)(v8 + 24), (void **)(v8 + 28), (int)&v17);
        v2 = v17;
        if ( v18 == v17 )
        {
          v9 = 0LL;
        }
        else
          v10 = 0;
          do
          {
            v11 = *(_DWORD *)&v17[4 * v10++];
            v9 += *(_QWORD *)(v11 + 16);
          }
          while ( v10 < (v18 - v17) >> 2 );
        v12 = 0;
        if ( (unsigned int)v9 > (unsigned int)v4 )
          v12 = 1;
        v13 = 0;
        ++v7;
        v5 = (int *)*((_DWORD *)v16 + 50);
        if ( SHIDWORD(v9) > SHIDWORD(v4) )
          v13 = 1;
        v14 = *(_QWORD *)&v5[v6 + 4];
        if ( HIDWORD(v9) == HIDWORD(v4) )
          v13 = v12;
        if ( v13 )
          v4 = v9;
      }
      while ( v7 < (HIDWORD(v14) - (signed int)v14) >> 2 );
    }
  }
  while ( v3 != 6 );
  if ( v2 )
    j_operator delete(v2);
  return v4;
}


int __fastcall leveldb::VersionSet::AddLiveFiles(int a1, int a2)
{
  int v2; // r7@1
  int v3; // r1@1
  int result; // r0@1
  int v5; // r5@2
  int v6; // r0@3
  int v7; // r0@4
  int v8; // r10@4
  int v9; // r4@4
  int v10; // r8@5
  int v11; // r11@6
  int v12; // r6@6
  unsigned __int64 *v13; // r9@6
  unsigned int v14; // r1@7
  unsigned int v15; // r2@7
  int v16; // r12@7
  int v17; // r4@7
  signed int v18; // r6@8
  __int64 v19; // kr08_8@8
  signed int v20; // r5@8
  int *v21; // r6@14
  signed int v22; // r3@17
  signed int v23; // r0@19
  int v24; // r0@23
  unsigned int v25; // r3@27
  bool v26; // cf@27
  signed int v27; // r0@27
  bool v28; // zf@29
  signed int v29; // r1@29
  int v30; // r4@35
  int v31; // r7@36
  unsigned __int64 v32; // r2@36
  __int64 v33; // r0@36
  _QWORD *v34; // r0@44
  int v35; // [sp+0h] [bp-38h]@1
  int v36; // [sp+4h] [bp-34h]@1
  int v37; // [sp+8h] [bp-30h]@4
  int *v38; // [sp+Ch] [bp-2Ch]@4
  int *v39; // [sp+10h] [bp-28h]@4

  v2 = a2;
  v3 = *(_DWORD *)(a1 + 76);
  result = a1 + 72;
  v36 = v3;
  v35 = result;
  if ( v3 != result )
  {
    v5 = v2 + 4;
    do
    {
      v6 = 0;
      do
      {
        v37 = v6;
        v7 = v36 + 12 * v6;
        v8 = *(_DWORD *)(v7 + 16);
        v39 = (int *)(v7 + 16);
        v9 = *(_DWORD *)(v7 + 20);
        v38 = (int *)(v7 + 20);
        if ( v9 != v8 )
        {
          v10 = 0;
          while ( 1 )
          {
            v11 = v5;
            v12 = *(_DWORD *)(v2 + 8);
            v13 = (unsigned __int64 *)(*(_DWORD *)(v8 + 4 * v10) + 8);
            if ( v12 )
            {
              v14 = *v13 >> 32;
              v15 = *v13;
              v16 = v9;
              v17 = v5;
              do
              {
                v11 = v12;
                v18 = 0;
                v19 = *(_QWORD *)(v11 + 16);
                v20 = 0;
                if ( v15 < (unsigned int)v19 )
                  v18 = 1;
                if ( v14 < HIDWORD(v19) )
                  v20 = 1;
                if ( v14 == HIDWORD(v19) )
                  v20 = v18;
                v21 = (int *)(v11 + 12);
                if ( v20 )
                  v21 = (int *)(v11 + 8);
                v12 = *v21;
              }
              while ( v12 );
              v22 = 0;
              if ( v15 >= (unsigned int)v19 )
                v22 = 1;
              v23 = 0;
              v5 = v17;
              if ( v14 >= HIDWORD(v19) )
                v23 = 1;
              v9 = v16;
              if ( v14 == HIDWORD(v19) )
                v23 = v22;
              v28 = v23 == 0;
              v24 = v11;
              if ( !v28 )
                goto LABEL_27;
            }
            if ( v11 != *(_DWORD *)(v2 + 12) )
              break;
LABEL_34:
            if ( v11 )
              v30 = v2;
              if ( v5 == v11 )
                v31 = 1;
              else
                v33 = *(_QWORD *)(v11 + 16);
                v31 = 0;
                v32 = *v13;
                v26 = (unsigned int)*v13 >= (unsigned int)v33;
                LODWORD(v33) = 0;
                if ( !v26 )
                  LODWORD(v33) = 1;
                if ( HIDWORD(v32) < HIDWORD(v33) )
                  v31 = 1;
                if ( HIDWORD(v32) == HIDWORD(v33) )
                  v31 = v33;
              v34 = j_operator new(0x18u);
              v34[2] = *v13;
              sub_21D4928(v31, (int)v34, v11, v5);
              v2 = v30;
              ++*(_DWORD *)(v30 + 20);
              v8 = *v39;
              v9 = *v38;
LABEL_45:
            if ( ++v10 >= (unsigned int)((v9 - v8) >> 2) )
              goto LABEL_46;
          }
          v24 = sub_21D4858(v11);
          v14 = *v13 >> 32;
          v15 = *v13;
LABEL_27:
          v25 = *(_QWORD *)(v24 + 16) >> 32;
          v26 = (unsigned int)*(_QWORD *)(v24 + 16) >= v15;
          v27 = 0;
          if ( v26 )
            v27 = 1;
          v26 = v25 >= v14;
          v28 = v25 == v14;
          v29 = 0;
            v29 = 1;
          if ( v28 )
            v29 = v27;
          if ( v29 )
            goto LABEL_45;
          goto LABEL_34;
        }
LABEL_46:
        v6 = v37 + 1;
      }
      while ( v37 != 6 );
      result = *(_DWORD *)(v36 + 4);
      v36 = result;
    }
    while ( result != v35 );
  }
  return result;
}


void *__fastcall leveldb::Arena::AllocateNewBlock(leveldb::Arena *this, unsigned int a2)
{
  unsigned int v2; // r8@1
  leveldb::Arena *v3; // r4@1
  void *v4; // r9@1
  __int64 v5; // r0@1
  void *v6; // r7@3
  unsigned int v7; // r2@3
  unsigned int v8; // r1@5
  unsigned int v9; // r6@5
  char *v10; // r5@11
  char *v11; // r11@13

  v2 = a2;
  v3 = this;
  v4 = j_operator new[](a2);
  v5 = *(_QWORD *)((char *)v3 + 12);
  if ( (_DWORD)v5 == HIDWORD(v5) )
  {
    v6 = (void *)*((_DWORD *)v3 + 2);
    v7 = ((signed int)v5 - (signed int)v6) >> 2;
    if ( !v7 )
      v7 = 1;
    HIDWORD(v5) = v7 + (((signed int)v5 - (signed int)v6) >> 2);
    v9 = v7 + (((signed int)v5 - (signed int)v6) >> 2);
    if ( 0 != HIDWORD(v5) >> 30 )
      v9 = 0x3FFFFFFF;
    if ( v8 < v7 )
    if ( v9 )
    {
      if ( v9 >= 0x40000000 )
        sub_21E57F4();
      v10 = (char *)j_operator new(4 * v9);
      LODWORD(v5) = *((_QWORD *)v3 + 1) >> 32;
      v6 = (void *)*((_QWORD *)v3 + 1);
    }
    else
      v10 = 0;
    v11 = &v10[v5 - (_DWORD)v6];
    *(_DWORD *)&v10[v5 - (_DWORD)v6] = v4;
    if ( 0 != ((signed int)v5 - (signed int)v6) >> 2 )
      j___aeabi_memmove4_0((int)v10, (int)v6);
    if ( v6 )
      j_operator delete(v6);
    *((_DWORD *)v3 + 2) = v10;
    *((_DWORD *)v3 + 3) = v11 + 4;
    *((_DWORD *)v3 + 4) = &v10[4 * v9];
  }
  else
    *(_DWORD *)v5 = v4;
    *((_DWORD *)v3 + 3) += 4;
  *((_DWORD *)v3 + 5) += v2 + 4;
  return v4;
}


void __fastcall leveldb::DBImpl::OpenCompactionOutputFile(_DWORD *a1, int a2, int a3)
{
  leveldb::DBImpl::OpenCompactionOutputFile(a1, a2, a3);
}


void __fastcall leveldb::VersionSet::LogAndApply(leveldb::VersionSet *this, leveldb::VersionEdit *a2, leveldb::port::Mutex *a3, leveldb::port::Mutex *a4)
{
  leveldb::port::Mutex *v4; // r10@1
  leveldb::VersionEdit *v5; // r11@1
  __int64 v6; // r1@2
  __int64 v7; // r1@4
  int v8; // r0@5
  int v9; // r2@5
  __int64 v10; // kr00_8@5
  leveldb::Version *v11; // r6@5
  signed int v12; // r8@5
  signed int v13; // r9@5
  __int64 v14; // r2@5
  __int64 v15; // r0@5
  __int64 v16; // r0@5
  int v22; // r0@8
  int v23; // r2@8
  __int64 v24; // r0@10
  unsigned int v25; // r7@11
  unsigned int v26; // r3@11
  int v27; // r5@12
  signed int v29; // r0@13
  __int64 v30; // r2@19
  void *v31; // r0@19
  __int64 v32; // r1@20
  void *v33; // r0@20
  leveldb::Status *v34; // r1@20
  leveldb::Status *v35; // r1@24
  leveldb::log::Writer *v36; // r7@31
  int v37; // r2@31
  unsigned int v38; // r3@31
  leveldb::Status *v39; // r0@31
  leveldb::Status *v40; // r1@31
  unsigned int *v41; // r1@35
  int v42; // r1@41
  void *v43; // r0@41
  leveldb::Status *v44; // r1@41
  leveldb::Status *v45; // r1@45
  void *v46; // r0@52
  leveldb::Status *v47; // r1@52
  leveldb::Status *v48; // r1@56
  leveldb *v49; // r7@63
  __int64 v50; // r2@63
  char *v51; // r0@63
  char *v52; // r0@64
  __int64 v53; // r0@67
  __int64 v54; // ST00_8@67
  void *v55; // r0@67
  leveldb::Status *v56; // r1@67
  unsigned int *v57; // r1@71
  unsigned int *v58; // r2@72
  signed int v59; // r1@74
  unsigned int *v60; // r2@76
  signed int v61; // r1@78
  leveldb::log::Writer *v62; // r0@86
  void *v63; // r0@87
  int v64; // r0@88
  int v65; // r0@93
  int v66; // r1@94
  leveldb::Version *v67; // r0@95
  int v68; // r0@96
  char *v69; // r0@97
  unsigned int *v70; // r2@99
  signed int v71; // r1@101
  unsigned int *v72; // r2@107
  signed int v73; // r1@109
  leveldb::port::Mutex *v74; // [sp+14h] [bp-14Ch]@3
  unsigned int **v75; // [sp+18h] [bp-148h]@3
  void *ptr; // [sp+1Ch] [bp-144h]@90
  leveldb::Status *v77; // [sp+20h] [bp-140h]@67
  char *v78; // [sp+24h] [bp-13Ch]@63
  leveldb::Status *v79; // [sp+28h] [bp-138h]@52
  void *v80; // [sp+2Ch] [bp-134h]@41
  int v81; // [sp+30h] [bp-130h]@41
  leveldb::Status *v82; // [sp+34h] [bp-12Ch]@41
  void *v83; // [sp+38h] [bp-128h]@41
  leveldb::Status *v84; // [sp+3Ch] [bp-124h]@31
  leveldb::Status *v85; // [sp+40h] [bp-120h]@20
  int v86; // [sp+44h] [bp-11Ch]@19
  _DWORD *v87; // [sp+48h] [bp-118h]@5

  v4 = a3;
  v5 = a2;
  if ( !*((_BYTE *)a3 + 41) )
  {
    v6 = *((_QWORD *)a2 + 6);
    *((_BYTE *)v4 + 41) = 1;
    *((_QWORD *)v4 + 1) = v6;
  }
  v74 = a4;
  v75 = (unsigned int **)this;
  if ( !*((_BYTE *)v4 + 42) )
    v7 = *((_QWORD *)v5 + 7);
    *((_BYTE *)v4 + 42) = 1;
    *((_QWORD *)v4 + 2) = v7;
  v8 = *((_DWORD *)v5 + 6);
  v9 = *((_DWORD *)v5 + 7);
  *((_BYTE *)v4 + 43) = 1;
  *((_DWORD *)v4 + 7) = v9;
  *((_DWORD *)v4 + 6) = v8;
  v10 = *((_QWORD *)v5 + 5);
  *((_BYTE *)v4 + 44) = 1;
  *((_QWORD *)v4 + 4) = v10;
  v11 = (leveldb::Version *)j_operator new(0x80u);
  *(_DWORD *)v11 = v5;
  *((_DWORD *)v11 + 1) = v11;
  *((_DWORD *)v11 + 2) = v11;
  j___aeabi_memclr4_0((int)v11 + 12, 92);
  v12 = -1;
  v13 = 0;
  *((_DWORD *)v11 + 26) = -1;
  *((_DWORD *)v11 + 28) = 0;
  *((_DWORD *)v11 + 29) = -1074790400;
  *((_DWORD *)v11 + 30) = -1;
  LODWORD(v14) = *((_DWORD *)v5 + 50);
  j_leveldb::VersionSet::Builder::Builder((leveldb::VersionSet::Builder *)&v87, v5, v14);
  LODWORD(v15) = &v87;
  v16 = __PAIR__((unsigned int)v4, j_leveldb::VersionSet::Builder::Apply(v15));
  LODWORD(v16) = &v87;
  j_leveldb::VersionSet::Builder::SaveTo(v16);
  j_leveldb::VersionSet::Builder::~Builder((leveldb::VersionSet::Builder *)&v87);
  __asm
    VMOV.F64        D8, #-1.0
    VMOV.F64        D9, #0.25
    VMOV.F64        D11, #10.0
    VLDR            D10, =1.048576e7
  do
    while ( 1 )
    {
      v22 = *(_QWORD *)((char *)v11 + 12 * v13 + 16) >> 32;
      v23 = *(_QWORD *)((char *)v11 + 12 * v13 + 16);
      if ( v13 )
        break;
      v13 = 1;
      _R0 = (v22 - v23) >> 2;
      __asm
      {
        VMOV            S0, R0
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D9
        VCMPE.F64       D0, D8
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        v12 = 0;
        __asm { VMOVGT.F64      D8, D0 }
    }
    if ( v22 == v23 )
      v24 = 0LL;
    else
      v25 = 0;
      v26 = (v22 - v23) >> 2;
      do
        v27 = *(_DWORD *)(v23 + 4 * v25++);
        v24 += *(_QWORD *)(v27 + 16);
      while ( v25 < v26 );
    _R0 = j___aeabi_ul2d(v24, SHIDWORD(v24));
    __asm
      VMOV.F64        D1, D10
      VMOV            D0, R0, R1
    v29 = v13;
    if ( !(_NF ^ _VF) )
        __asm { VMUL.F64        D1, D1, D11 }
        --v29;
      while ( v29 > 1 );
      VDIV.F64        D0, D0, D1
      VCMPE.F64       D0, D8
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v12 = v13;
      __asm { VMOVGT.F64      D8, D0 }
    ++v13;
  while ( v13 != 6 );
  *((_DWORD *)v11 + 30) = v12;
  __asm { VSTR            D8, [R6,#0x70] }
  v87 = &unk_28898CC;
  *v75 = 0;
  if ( !*((_DWORD *)v5 + 17) )
    v30 = *((_QWORD *)v5 + 4);
    j_leveldb::DescriptorFileName(&v86, (int *)v5 + 1);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v87,
      &v86);
    v31 = (void *)(v86 - 12);
    if ( (int *)(v86 - 12) != &dword_28898C0 )
      v58 = (unsigned int *)(v86 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v59 = __ldrex(v58);
        while ( __strex(v59 - 1, v58) );
      else
        v59 = (*v58)--;
      if ( v59 <= 0 )
        j_j_j_j__ZdlPv_9(v31);
    v32 = *((_QWORD *)v5 + 3);
    *((_BYTE *)v4 + 43) = 1;
    *((_QWORD *)v4 + 3) = v32;
    (*(void (__fastcall **)(leveldb::Status **))(**(_DWORD **)v5 + 16))(&v85);
    v33 = *v75;
    v34 = v85;
    if ( (leveldb::Status *)*v75 == v85 )
      v35 = (leveldb::Status *)*v75;
      if ( v33 )
        j_operator delete[](v33);
        v34 = v85;
      if ( v34 )
        v33 = j_leveldb::Status::CopyState(v34, (const char *)v34);
        v35 = v85;
        v35 = 0;
        v33 = 0;
      *v75 = (unsigned int *)v33;
    if ( v35 )
      j_operator delete[]((void *)v35);
      v33 = *v75;
    if ( !v33 )
      v36 = (leveldb::log::Writer *)j_operator new(0x1Cu);
      j_leveldb::log::Writer::Writer(v36, *((leveldb::WritableFile **)v5 + 16), v37, v38);
      *((_DWORD *)v5 + 17) = v36;
      j_leveldb::VersionSet::WriteSnapshot((leveldb::VersionSet *)&v84, v5, (int)v36);
      v39 = (leveldb::Status *)*v75;
      v40 = v84;
      if ( (leveldb::Status *)*v75 != v84 )
        if ( v39 )
        {
          j_operator delete[]((void *)v39);
          v40 = v84;
        }
        if ( v40 )
          v41 = (unsigned int *)j_leveldb::Status::CopyState(v40, (const char *)v40);
          v39 = v84;
        else
          v39 = 0;
          v41 = 0;
        *v75 = v41;
      if ( v39 )
        j_operator delete[]((void *)v39);
  j_leveldb::port::Mutex::Unlock(v74);
  if ( !*v75 )
    v83 = &unk_28898CC;
    j_leveldb::VersionEdit::EncodeTo((int)v4, (const void **)&v83);
    v42 = *((_DWORD *)v5 + 17);
    v80 = v83;
    v81 = *((_DWORD *)v83 - 3);
    j_leveldb::log::Writer::AddRecord(&v82, v42, (unsigned __int64 *)&v80);
    v43 = *v75;
    v44 = v82;
    if ( (leveldb::Status *)*v75 == v82 )
      v45 = (leveldb::Status *)*v75;
      if ( v43 )
        j_operator delete[](v43);
        v44 = v82;
      if ( v44 )
        v43 = j_leveldb::Status::CopyState(v44, (const char *)v44);
        v45 = v82;
        v45 = 0;
        v43 = 0;
      *v75 = (unsigned int *)v43;
    if ( v45 )
      j_operator delete[]((void *)v45);
      v43 = *v75;
    if ( v43 )
      goto LABEL_125;
    (*(void (__fastcall **)(leveldb::Status **))(**((_DWORD **)v5 + 16) + 20))(&v79);
    v46 = *v75;
    v47 = v79;
    if ( (leveldb::Status *)*v75 == v79 )
      v48 = (leveldb::Status *)*v75;
      if ( v46 )
        j_operator delete[](v46);
        v47 = v79;
      if ( v47 )
        v46 = j_leveldb::Status::CopyState(v47, (const char *)v47);
        v48 = v79;
        v48 = 0;
        v46 = 0;
      *v75 = (unsigned int *)v46;
    if ( v48 )
      j_operator delete[]((void *)v48);
      v46 = *v75;
    if ( v46 )
LABEL_125:
      v49 = *(leveldb **)(*((_DWORD *)v5 + 2) + 12);
      j_leveldb::Status::ToString((leveldb::Status *)&v78, v75);
      LODWORD(v50) = v78;
      j_leveldb::Log(v49, (leveldb::Logger *)"MANIFEST write: %s\n", v50);
      v51 = v78 - 12;
      if ( (int *)(v78 - 12) != &dword_28898C0 )
        v72 = (unsigned int *)(v78 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v73 = __ldrex(v72);
          while ( __strex(v73 - 1, v72) );
          v73 = (*v72)--;
        if ( v73 <= 0 )
          j_j_j_j__ZdlPv_9(v51);
    v52 = (char *)v83 - 12;
    if ( (int *)((char *)v83 - 12) != &dword_28898C0 )
      v60 = (unsigned int *)((char *)v83 - 4);
          v61 = __ldrex(v60);
        while ( __strex(v61 - 1, v60) );
        v61 = (*v60)--;
      if ( v61 <= 0 )
        j_j_j_j__ZdlPv_9(v52);
    if ( !*v75 && *(v87 - 3) )
      HIDWORD(v53) = *(_DWORD *)v5;
      v54 = *((_QWORD *)v5 + 4);
      LODWORD(v53) = &v77;
      j_leveldb::SetCurrentFile(v53, (int *)v5 + 1);
      v55 = *v75;
      v56 = v77;
      if ( (leveldb::Status *)*v75 != v77 )
        if ( v55 )
          j_operator delete[](v55);
          v56 = v77;
        if ( v56 )
          v57 = (unsigned int *)j_leveldb::Status::CopyState(v56, (const char *)v56);
          v55 = (void *)v77;
          v55 = 0;
          v57 = 0;
        *v75 = v57;
      if ( v55 )
        j_operator delete[](v55);
  j_leveldb::port::Mutex::Lock(v74);
  if ( *v75 )
    j_leveldb::Version::~Version(v11);
    j_operator delete((void *)v11);
    if ( *(v87 - 3) )
      v62 = (leveldb::log::Writer *)*((_DWORD *)v5 + 17);
      if ( v62 )
        v63 = (void *)j_leveldb::log::Writer::~Writer(v62);
        j_operator delete(v63);
      v64 = *((_DWORD *)v5 + 16);
      if ( v64 )
        (*(void (__cdecl **)(int, _DWORD))(*(_DWORD *)v64 + 4))(v64, *(_DWORD *)(*(_DWORD *)v64 + 4));
      *((_DWORD *)v5 + 16) = 0;
      *((_DWORD *)v5 + 17) = 0;
      (*(void (__fastcall **)(void **))(**(_DWORD **)v5 + 32))(&ptr);
      if ( ptr )
        j_operator delete[](ptr);
  else
    v65 = *((_DWORD *)v5 + 50);
    if ( v65 )
      v66 = *(_DWORD *)(v65 + 12) - 1;
      *(_DWORD *)(v65 + 12) = v66;
      if ( !v66 )
        v67 = j_leveldb::Version::~Version((leveldb::Version *)v65);
        j_operator delete((void *)v67);
    *((_DWORD *)v5 + 50) = v11;
    ++*((_DWORD *)v11 + 3);
    v68 = *((_DWORD *)v5 + 20);
    *((_DWORD *)v11 + 2) = v68;
    *((_DWORD *)v11 + 1) = (char *)v5 + 72;
    *(_DWORD *)(v68 + 4) = v11;
    *(_DWORD *)(*((_DWORD *)v11 + 1) + 8) = v11;
    *((_QWORD *)v5 + 6) = *((_QWORD *)v4 + 1);
    *((_QWORD *)v5 + 7) = *((_QWORD *)v4 + 2);
  v69 = (char *)(v87 - 3);
  if ( v87 - 3 != &dword_28898C0 )
    v70 = v87 - 1;
    if ( &pthread_create )
      __dmb();
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v69);
}


void __fastcall leveldb::VersionEdit::AddFile(leveldb::VersionEdit *this, int a2, unsigned __int64 a3, unsigned __int64 a4, const leveldb::InternalKey *a5, const leveldb::InternalKey *a6)
{
  leveldb::VersionEdit::AddFile(this, a2, a3, a4, a5, a6);
}


void __fastcall leveldb::RandomAccessFileEncrypted::~RandomAccessFileEncrypted(leveldb::RandomAccessFileEncrypted *this)
{
  leveldb::RandomAccessFileEncrypted::~RandomAccessFileEncrypted(this);
}


void __fastcall leveldb::DBImpl::RecoverLogFile(leveldb::DBImpl *this, leveldb::Version *a2, unsigned __int64 a3, int a4, bool *a5, leveldb::VersionEdit *a6, unsigned __int64 *a7)
{
  leveldb::DBImpl::RecoverLogFile(this, a2, a3, (leveldb::VersionEdit *)a4, (unsigned __int64 *)a5, a6, a7);
}


int __fastcall leveldb::DBImpl::GetProperty(int a1, unsigned __int64 *a2, const void **a3)
{
  int v3; // r10@1
  int *v4; // r11@1
  unsigned __int64 *v5; // r4@1
  int v6; // r7@1
  leveldb::port::Mutex *v7; // r8@1
  unsigned __int64 v8; // kr00_8@1
  signed int v11; // r2@23
  signed int v12; // r0@26
  int v13; // r0@29
  _BYTE *v14; // r0@29
  unsigned int v15; // r0@31
  unsigned __int64 *v16; // r9@31
  int v19; // r4@32
  int v20; // r1@33
  signed int v21; // r0@33
  signed int v23; // r1@35
  __int64 v24; // r0@40
  unsigned int v29; // r0@40
  unsigned __int64 *v30; // r6@44
  int v31; // r8@45
  int v32; // r1@46
  signed int v33; // r0@46
  bool v34; // zf@48
  signed int v35; // r1@48
  unsigned int v36; // r0@55
  unsigned int v37; // r0@55
  __int64 v38; // r0@55
  unsigned int v40; // r0@55
  unsigned int v42; // r0@55
  unsigned int v44; // r0@55
  unsigned int v46; // r0@55
  int v47; // r4@58
  leveldb::MemTable *v48; // r0@58
  leveldb::MemTable *v49; // r0@60
  int v50; // r4@61
  unsigned int v51; // r0@62
  void *v52; // r0@64
  unsigned int *v53; // r2@66
  signed int v54; // r1@68
  char v55; // [sp+30h] [bp-130h]@44
  int v56; // [sp+34h] [bp-12Ch]@64
  int v57; // [sp+38h] [bp-128h]@21
  int v58; // [sp+3Ch] [bp-124h]@25
  int v59; // [sp+40h] [bp-120h]@1
  int v60; // [sp+44h] [bp-11Ch]@1
  char s; // [sp+4Ch] [bp-114h]@29
  RakNet *v62; // [sp+114h] [bp-4Ch]@1

  v3 = a1;
  v4 = (int *)a3;
  v5 = a2;
  v6 = 0;
  v62 = _stack_chk_guard;
  sub_21E7EE0(a3, 0, *((_BYTE **)*a3 - 3), 0);
  v7 = (leveldb::port::Mutex *)(v3 + 1112);
  j_leveldb::port::Mutex::Lock((leveldb::port::Mutex *)(v3 + 1112));
  v8 = *v5;
  _CF = (unsigned int)(*v5 >> 32) >= 8;
  v59 = *v5;
  v60 = HIDWORD(v8);
  if ( !_CF )
    goto LABEL_5;
  if ( j_memcmp_0((const void *)v8, "leveldb.", 8u) )
  {
    v6 = 0;
  }
  v59 = v8 + 8;
  v60 = HIDWORD(v8) - 8;
  if ( (unsigned int)(HIDWORD(v8) - 8) < 0x12 )
    if ( SHIDWORD(v8) <= 16 )
    {
      if ( HIDWORD(v8) != 13 )
      {
        if ( HIDWORD(v8) != 16 )
          goto LABEL_5;
        if ( j_memcmp_0((const void *)(v8 + 8), "sstables", 8u) )
        {
          v6 = 0;
        }
        j_leveldb::Version::DebugString((leveldb::Version *)&v56, *(_DWORD *)(*(_DWORD *)(v3 + 1276) + 200));
        xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v4, &v56);
        v52 = (void *)(v56 - 12);
        if ( (int *)(v56 - 12) != &dword_28898C0 )
          v53 = (unsigned int *)(v56 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v54 = __ldrex(v53);
            while ( __strex(v54 - 1, v53) );
          }
          else
            v54 = (*v53)--;
          if ( v54 <= 0 )
            j_j_j_j__ZdlPv_9(v52);
        goto LABEL_65;
      }
      v6 = 0;
      if ( !j_memcmp_0((const void *)(v8 + 8), "stats", 5u) )
        j_snprintf(
          &s,
          0xC8u,
          "                               Compactions\n"
          "Level  Files Size(MB) Time(sec) Read(MB) Write(MB)\n"
          "--------------------------------------------------\n");
        v15 = j_strlen_0(&s);
        sub_21E7408((const void **)v4, &s, v15);
        v16 = (unsigned __int64 *)(v3 + 1304);
        __asm
          VLDR            D8, =9.53674316e-7
          VLDR            D9, =0.000001
        do
          v19 = j_leveldb::VersionSet::NumLevelFiles(*(leveldb::VersionSet **)(v3 + 1276), v6);
          if ( v19 > 0 )
            goto LABEL_75;
          v20 = *((_DWORD *)v16 - 3);
          v21 = 0;
          if ( !*((_DWORD *)v16 - 4) )
            v21 = 1;
          _ZF = v20 == 0;
          _NF = v20 < 0;
          v23 = 0;
          if ( _NF )
            v23 = 1;
          if ( _ZF )
            v23 = v21;
          if ( !v23 )
LABEL_75:
            v24 = j_leveldb::VersionSet::NumLevelBytes((leveldb::VersionSet *)*(_DWORD *)(v3 + 1276), v6);
            _R0 = j___aeabi_l2d(v24, SHIDWORD(v24));
            __asm { VMOV            D10, R0, R1 }
            _R0 = j___aeabi_l2d(*v16, *v16 >> 32);
            __asm { VMOV            D11, R0, R1 }
            _R6 = j___aeabi_l2d(*(v16 - 2), *(v16 - 2) >> 32);
            _R0 = j___aeabi_l2d(*(v16 - 1), *(v16 - 1) >> 32);
            __asm
            {
              VMOV            D0, R0, R1
              VMOV            D1, R6, R8
              VMUL.F64        D2, D10, D8
              VMUL.F64        D3, D11, D8
              VMUL.F64        D0, D0, D8
              VMUL.F64        D1, D1, D9
              VSTR            D2, [SP,#0x160+var_158]
              VSTR            D1, [SP,#0x160+var_150]
              VSTR            D0, [SP,#0x160+var_148]
              VSTR            D3, [SP,#0x160+var_140]
            }
            j_snprintf(&s, 0xC8u, "%3d %8d %8.0f %9.2f %8.2f %9.2f\n", v6, v19);
            v29 = j_strlen_0(&s);
            sub_21E7408((const void **)v4, &s, v29);
          ++v6;
          v16 += 3;
        while ( v6 != 7 );
        v6 = 1;
        v7 = (leveldb::port::Mutex *)(v3 + 1112);
      goto LABEL_5;
    }
    if ( HIDWORD(v8) == 17 )
      if ( !j_memcmp_0((const void *)(v8 + 8), "jsonstats", 9u) )
        sub_21E7408((const void **)v4, "{\n", 2u);
        sub_21E7408((const void **)v4, "\"levels\"", 8u);
        sub_21E7408((const void **)v4, ": [\n", 4u);
        v30 = (unsigned __int64 *)(v3 + 1304);
        v55 = 1;
          v31 = j_leveldb::VersionSet::NumLevelFiles(*(leveldb::VersionSet **)(v3 + 1276), v6);
          if ( v31 > 0 )
            goto LABEL_76;
          v32 = *((_DWORD *)v30 - 3);
          v33 = 0;
          if ( !*((_DWORD *)v30 - 4) )
            v33 = 1;
          v34 = v32 == 0;
          _NF = v32 < 0;
          v35 = 0;
            v35 = 1;
          if ( v34 )
            v35 = v33;
          if ( !v35 )
LABEL_76:
            if ( !(v55 & 1) )
              sub_21E7408((const void **)v4, ",\n", 2u);
            sub_21E7408((const void **)v4, "{\n", 2u);
            sub_21E7408((const void **)v4, "\"level\"", 7u);
            j_snprintf(&s, 0xC8u, ": %3d,\n", v6);
            v36 = j_strlen_0(&s);
            sub_21E7408((const void **)v4, &s, v36);
            sub_21E7408((const void **)v4, "\"files\"", 7u);
            j_snprintf(&s, 0xC8u, ": %3d,\n", v31);
            v37 = j_strlen_0(&s);
            sub_21E7408((const void **)v4, &s, v37);
            v38 = j_leveldb::VersionSet::NumLevelBytes((leveldb::VersionSet *)*(_DWORD *)(v3 + 1276), v6);
            _R0 = j___aeabi_l2d(v38, SHIDWORD(v38));
              VSTR            D0, [SP,#0x160+var_160]
            j_snprintf(&s, 0xC8u, "\"sizeMB\": %0.3f,\n");
            v40 = j_strlen_0(&s);
            sub_21E7408((const void **)v4, &s, v40);
            _R0 = j___aeabi_l2d(*(v30 - 2), *(v30 - 2) >> 32);
              VMUL.F64        D0, D0, D9
            j_snprintf(&s, 0xC8u, "\"tsec\": %0.3f,\n");
            v42 = j_strlen_0(&s);
            sub_21E7408((const void **)v4, &s, v42);
            _R0 = j___aeabi_l2d(*(v30 - 1), *(v30 - 1) >> 32);
            j_snprintf(&s, 0xC8u, "\"readMB\": %0.3f,\n");
            v44 = j_strlen_0(&s);
            sub_21E7408((const void **)v4, &s, v44);
            _R0 = j___aeabi_l2d(*v30, *v30 >> 32);
            j_snprintf(&s, 0xC8u, "\"writeMB\": %0.3f\n");
            v46 = j_strlen_0(&s);
            sub_21E7408((const void **)v4, &s, v46);
            sub_21E7408((const void **)v4, "}", 1u);
            v55 = 0;
          v30 += 3;
        sub_21E7408((const void **)v4, "]\n", 2u);
        sub_21E7408((const void **)v4, "}", 1u);
        v6 = 0;
    if ( HIDWORD(v8) != 32 )
LABEL_19:
    if ( j_memcmp_0((const void *)(v8 + 8), "approximate-memory-usage", 0x18u) )
    v47 = (*(int (**)(void))(**(_DWORD **)(v3 + 48) + 36))();
    v48 = *(leveldb::MemTable **)(v3 + 1128);
    if ( v48 )
      v47 += j_leveldb::MemTable::ApproximateMemoryUsage(v48);
    v49 = *(leveldb::MemTable **)(v3 + 1132);
    if ( v49 )
      v50 = v47 + j_leveldb::MemTable::ApproximateMemoryUsage(v49);
    j_snprintf(&s, 0x32u, "%llu");
    v51 = j_strlen_0(&s);
    sub_21E7408((const void **)v4, &s, v51);
    goto LABEL_65;
  if ( j_memcmp_0((const void *)(v8 + 8), "num-files-at-level", 0x12u) )
    goto LABEL_19;
  v59 = v8 + 26;
  v60 = HIDWORD(v8) - 26;
  if ( j_leveldb::ConsumeDecimalNumber((int)&v59, (int)&v57) != 1 )
  if ( !v60 )
    v11 = 0;
    if ( (unsigned int)v57 > 6 )
      v11 = 1;
    v12 = v58 ? 1 : v11;
    if ( !v12 )
      v13 = j_leveldb::VersionSet::NumLevelFiles(*(leveldb::VersionSet **)(v3 + 1276), v57);
      j_snprintf(&s, 0x64u, "%d", v13);
      v14 = (_BYTE *)j_strlen_0(&s);
      sub_21E8190((void **)v4, &s, v14);
LABEL_65:
      v6 = 1;
LABEL_5:
  j_leveldb::port::Mutex::Unlock(v7);
  if ( _stack_chk_guard != v62 )
    j___stack_chk_fail_0(_stack_chk_guard - v62);
  return v6;
}


RakNet *__fastcall leveldb::DBImpl::Get(leveldb::Status **a1, int a2, int a3, int a4, int a5)
{
  leveldb::Status **v5; // r11@1
  int v6; // r7@1
  int v7; // r4@1
  leveldb::port::Mutex *v8; // r6@1
  int v9; // r1@1
  int v10; // r0@2
  __int64 *v11; // r1@2
  unsigned int v12; // r7@4
  unsigned int v13; // r4@4
  __int64 v14; // r8@4
  leveldb::Version *v15; // r0@4
  leveldb::port::Mutex *v16; // r9@10
  leveldb::Version *v17; // r10@16
  leveldb::Status *v18; // r0@17
  leveldb::Status *v19; // r1@17
  leveldb::Status *v20; // r1@21
  int v21; // r5@32
  int v22; // r5@34
  signed int v28; // r0@42
  int v29; // r1@46
  RakNet *result; // r0@49
  int v31; // [sp+Ch] [bp-11Ch]@2
  int v32; // [sp+10h] [bp-118h]@4
  int v33; // [sp+14h] [bp-114h]@1
  int v34; // [sp+18h] [bp-110h]@1
  leveldb::Version *v35; // [sp+1Ch] [bp-10Ch]@6
  leveldb::Status *v36; // [sp+20h] [bp-108h]@17
  char v37; // [sp+24h] [bp-104h]@17
  void *ptr; // [sp+2Ch] [bp-FCh]@6
  int v39; // [sp+38h] [bp-F0h]@7
  RakNet *v40; // [sp+100h] [bp-28h]@1

  v5 = a1;
  v6 = a3;
  v7 = a2;
  v8 = (leveldb::port::Mutex *)(a2 + 1112);
  v34 = a4;
  v33 = a3;
  v40 = _stack_chk_guard;
  *a1 = 0;
  j_leveldb::port::Mutex::Lock((leveldb::port::Mutex *)(a2 + 1112));
  v9 = *(_DWORD *)(v6 + 4);
  if ( v9 )
  {
    v10 = *(_DWORD *)(v7 + 1276);
    v31 = v7 + 1276;
    v11 = (__int64 *)(v9 + 8);
  }
  else
    v11 = (__int64 *)(v10 + 40);
  v12 = *(_DWORD *)(v7 + 1128);
  v32 = v7;
  v13 = *(_DWORD *)(v7 + 1132);
  v14 = *v11;
  v15 = *(leveldb::Version **)(v10 + 200);
  ++*(_DWORD *)(v12 + 8);
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  v35 = v15;
  j_leveldb::Version::Ref(v15);
  j_leveldb::port::Mutex::Unlock(v8);
  j_leveldb::LookupKey::LookupKey((int)&ptr, v34, v14, SHIDWORD(v14));
  if ( j_leveldb::MemTable::Get(__PAIR__(&ptr, v12), __PAIR__((unsigned int)v5, a5)) )
    j_leveldb::port::Mutex::Lock(v8);
    if ( ptr != &v39 && ptr )
      j_operator delete[](ptr);
    v16 = v8;
LABEL_16:
    v17 = v35;
    goto LABEL_42;
  if ( v13 && j_leveldb::MemTable::Get(__PAIR__(&ptr, v13), __PAIR__((unsigned int)v5, a5)) )
    goto LABEL_16;
  v17 = v35;
  j_leveldb::Version::Get((void **)&v36, (int)v35, v33, (int)&ptr, a5, (int)&v37);
  v18 = *v5;
  v19 = v36;
  if ( *v5 == v36 )
    if ( v18 )
    {
      j_operator delete[]((void *)v18);
      v19 = v36;
    }
    if ( v19 )
      v20 = (leveldb::Status *)j_leveldb::Status::CopyState(v19, (const char *)v19);
      v18 = v36;
    else
      v18 = 0;
      v20 = 0;
    *v5 = v20;
  if ( v18 )
    j_operator delete[]((void *)v18);
  j_leveldb::port::Mutex::Lock(v16);
  if ( ptr != &v39 && ptr )
    j_operator delete[](ptr);
  if ( j_leveldb::Version::UpdateStats((int)v35, (int)&v37) == 1 && !*(_BYTE *)(v32 + 1264) )
    v21 = *(_DWORD *)(v32 + 1116);
    vFFFF0FA0();
    if ( !v21 )
      if ( *(_DWORD *)(v32 + 1132) || (v22 = *(_DWORD *)(v32 + 1268), vFFFF0FA0(), !v22) )
      {
        if ( !*(_DWORD *)(v32 + 1280) )
        {
          if ( *(_DWORD *)(v32 + 1132) )
            goto LABEL_53;
          if ( *(_DWORD *)(v32 + 1272) )
          __asm { VMOV.F64        D0, #1.0 }
          _R0 = *(_DWORD *)(*(_DWORD *)v31 + 200);
          __asm
          {
            VLDR            D1, [R0,#0x70]
            VCMPE.F64       D1, D0
            VMRS            APSR_nzcv, FPSCR
          }
          if ( !(_NF ^ _VF) || *(_DWORD *)(_R0 + 100) )
LABEL_53:
            *(_BYTE *)(v32 + 1264) = 1;
            (*(void (**)(void))(**(_DWORD **)(v32 + 4) + 60))();
        }
      }
LABEL_42:
  v28 = *(_DWORD *)(v12 + 8);
  *(_DWORD *)(v12 + 8) = v28 - 1;
  if ( v12 && v28 <= 1 )
    j_leveldb::MemTable::~MemTable((leveldb::MemTable *)v12);
    j_operator delete((void *)v12);
    v29 = *(_DWORD *)(v13 + 8);
    _VF = __OFSUB__(v29--, 1);
    *(_DWORD *)(v13 + 8) = v29;
    if ( (unsigned __int8)((v29 < 0) ^ _VF) | (v29 == 0) )
      j_leveldb::MemTable::~MemTable((leveldb::MemTable *)v13);
      j_operator delete((void *)v13);
  j_leveldb::Version::Unref(v17);
  j_leveldb::port::Mutex::Unlock(v16);
  result = (RakNet *)(_stack_chk_guard - v40);
  if ( _stack_chk_guard != v40 )
    j___stack_chk_fail_0((int)result);
  return result;
}


void __fastcall leveldb::DBImpl::DeleteObsoleteFiles(leveldb::DBImpl *this)
{
  leveldb::DBImpl::DeleteObsoleteFiles(this);
}


_DWORD *__fastcall leveldb::NewBloomFilterPolicy(leveldb *this, int a2)
{
  _DWORD *result; // r0@1

  _R4 = this;
  __asm
  {
    VLDR            D1, =0.69
    VMOV            S0, R4
    VCVT.F64.S32    D0, S0
    VMUL.F64        D0, D0, D1
    VCVTR.U32.F64   S16, D0
  }
  result = j_operator new(0xCu);
  __asm { VMOV            R2, S16 }
  if ( !_R2 )
    _R2 = 1;
  if ( _R2 > 0x1E )
    _R2 = 30;
  *result = &off_2725E10;
  result[1] = _R4;
  result[2] = _R2;
  return result;
}


leveldb::Iterator *__fastcall leveldb::Version::LevelFileNumIterator::~LevelFileNumIterator(leveldb::Version::LevelFileNumIterator *this)
{
  leveldb::Iterator *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_2725C94;
  j_leveldb::Comparator::~Comparator((leveldb::Version::LevelFileNumIterator *)((char *)this + 20));
  return j_j_j__ZN7leveldb8IteratorD2Ev_0(v1);
}


void __fastcall leveldb::DBImpl::CleanupCompaction(int a1, int a2)
{
  int v2; // r11@1
  int v3; // r6@1
  leveldb::TableBuilder *v4; // r0@1
  leveldb::TableBuilder *v5; // r0@2
  leveldb::TableBuilder *v6; // r0@3
  int v7; // r0@4
  void *v8; // r5@6
  int v9; // r7@6
  int v10; // r9@7
  int v11; // r4@7
  unsigned int v12; // r6@7
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  unsigned int *v15; // r2@15
  signed int v16; // r1@17
  int v17; // r1@27
  void *v18; // r0@27
  int v19; // r1@28
  void *v20; // r0@28

  v2 = a2;
  v3 = a1;
  v4 = *(leveldb::TableBuilder **)(a2 + 32);
  if ( v4 )
  {
    j_leveldb::TableBuilder::Abandon(v4);
    v5 = *(leveldb::TableBuilder **)(v2 + 32);
    if ( v5 )
    {
      v6 = j_leveldb::TableBuilder::~TableBuilder(v5);
      j_operator delete((void *)v6);
    }
  }
  v7 = *(_DWORD *)(v2 + 28);
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  v8 = (void *)(*(_QWORD *)(v2 + 16) >> 32);
  v9 = *(_QWORD *)(v2 + 16);
  if ( v8 != (void *)v9 )
    v10 = v3 + 1240;
    v11 = 0;
    v12 = 0;
    do
      j_std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::erase(
        v10,
        (__int64 *)(v9 + v11));
      v8 = (void *)(*(_QWORD *)(v2 + 16) >> 32);
      v9 = *(_QWORD *)(v2 + 16);
      v11 += 24;
      ++v12;
    while ( v12 < -1431655765 * (((signed int)v8 - v9) >> 3) );
  if ( (void *)v9 != v8 )
      v17 = *(_DWORD *)(v9 + 20);
      v18 = (void *)(v17 - 12);
      if ( (int *)(v17 - 12) != &dword_28898C0 )
      {
        v13 = (unsigned int *)(v17 - 4);
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
          j_j_j_j__ZdlPv_9(v18);
      }
      v19 = *(_DWORD *)(v9 + 16);
      v20 = (void *)(v19 - 12);
      if ( (int *)(v19 - 12) != &dword_28898C0 )
        v15 = (unsigned int *)(v19 - 4);
            v16 = __ldrex(v15);
          while ( __strex(v16 - 1, v15) );
          v16 = (*v15)--;
        if ( v16 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      v9 += 24;
    while ( (void *)v9 != v8 );
    v8 = *(void **)(v2 + 16);
  if ( v8 )
    j_operator delete(v8);
  j_operator delete((void *)v2);
}


int __fastcall leveldb::Version::GetOverlappingInputs(int *a1, unsigned int a2, int *a3, void **a4, int a5)
{
  int *v5; // r6@1
  unsigned int v6; // r11@1
  void **v7; // r10@1
  int v8; // r1@1
  int v9; // r2@2
  int v10; // r2@4
  int *v11; // r9@5
  int v12; // r1@7
  int result; // r0@7
  int v14; // r9@7
  int v15; // t1@7
  int v16; // r7@7
  unsigned int v17; // r4@8
  int v18; // r5@9
  int v19; // r1@9
  int v20; // r1@9
  __int64 v21; // r0@13
  void *v22; // r10@15
  char *v23; // r11@15
  signed int v24; // r1@15
  unsigned int v25; // r2@15
  unsigned int v26; // r1@17
  unsigned int v27; // r6@17
  char *v28; // r5@24
  int v29; // r5@26
  unsigned __int64 v30; // [sp+0h] [bp-58h]@1
  void **v31; // [sp+8h] [bp-50h]@1
  int v32; // [sp+10h] [bp-48h]@9
  int v33; // [sp+14h] [bp-44h]@9
  int v34; // [sp+18h] [bp-40h]@9
  int v35; // [sp+1Ch] [bp-3Ch]@9
  void *v36; // [sp+20h] [bp-38h]@1
  int v37; // [sp+24h] [bp-34h]@1
  void *v38; // [sp+28h] [bp-30h]@1
  int v39; // [sp+2Ch] [bp-2Ch]@1

  v5 = a3;
  v6 = a2;
  v7 = a4;
  *(_DWORD *)(a5 + 4) = *(_DWORD *)a5;
  v8 = 0;
  v38 = &unk_257BC67;
  v31 = a4;
  v30 = __PAIR__((unsigned int)a3, v6);
  v39 = 0;
  v36 = &unk_257BC67;
  v37 = 0;
  if ( a3 )
  {
    v9 = *(_DWORD *)(*a3 - 12);
    v38 = (void *)*v5;
    v8 = v9 - 8;
    v39 = v9 - 8;
  }
  if ( a4 )
    v10 = *((_DWORD *)*a4 - 3);
    v36 = *a4;
    v8 = v10 - 8;
  v11 = &a1[3 * v6];
    v37 = v8;
  v12 = *a1;
  v15 = v11[4];
  v14 = (int)(v11 + 4);
  result = v15;
  v16 = *(_DWORD *)(v12 + 20);
  if ( *(_DWORD *)(v14 + 4) != v15 )
    v17 = 0;
    do
    {
      v18 = *(_DWORD *)(result + 4 * v17++);
      v19 = *(_DWORD *)(*(_DWORD *)(v18 + 24) - 12);
      v34 = *(_DWORD *)(v18 + 24);
      v35 = v19 - 8;
      v20 = *(_DWORD *)(*(_DWORD *)(v18 + 28) - 12);
      v32 = *(_DWORD *)(v18 + 28);
      v33 = v20 - 8;
      if ( v5 && (*(int (__fastcall **)(int, int *, void **))(*(_DWORD *)v16 + 8))(v16, &v32, &v38) < 0
        || v7 && (*(int (__fastcall **)(int, int *, void **))(*(_DWORD *)v16 + 8))(v16, &v34, &v36) > 0 )
      {
        goto LABEL_37;
      }
      v21 = *(_QWORD *)(a5 + 4);
      if ( (_DWORD)v21 == HIDWORD(v21) )
        v22 = *(void **)a5;
        v23 = 0;
        v24 = v21 - *(_DWORD *)a5;
        v25 = v24 >> 2;
        if ( !(v24 >> 2) )
          v25 = 1;
        v26 = v25 + (v24 >> 2);
        v27 = v26;
        if ( 0 != v26 >> 30 )
          v27 = 0x3FFFFFFF;
        if ( v26 < v25 )
        if ( v27 )
        {
          if ( v27 >= 0x40000000 )
            sub_21E57F4();
          v23 = (char *)j_operator new(4 * v27);
          LODWORD(v21) = *(_QWORD *)a5 >> 32;
          v22 = (void *)*(_QWORD *)a5;
        }
        *(_DWORD *)&v23[v21 - (_DWORD)v22] = v18;
        v28 = &v23[v21 - (_DWORD)v22];
        if ( ((signed int)v21 - (signed int)v22) >> 2 )
          j___aeabi_memmove4_0((int)v23, (int)v22);
        v29 = (int)(v28 + 4);
        if ( v22 )
          j_operator delete(v22);
        *(_DWORD *)a5 = v23;
        *(_DWORD *)(a5 + 4) = v29;
        *(_DWORD *)(a5 + 8) = &v23[4 * v27];
        v7 = v31;
        v5 = (int *)HIDWORD(v30);
        v6 = v30;
      else
        *(_DWORD *)v21 = v18;
        *(_DWORD *)(a5 + 4) += 4;
      if ( v6 )
      if ( v5 && (*(int (__fastcall **)(_DWORD, int *, void **))(*(_DWORD *)v16 + 8))(v16, &v34, &v38) <= -1 )
        *(_QWORD *)&v38 = *(_QWORD *)&v34;
        if ( !v7 || (*(int (__fastcall **)(int, int *, void **))(*(_DWORD *)v16 + 8))(v16, &v32, &v36) < 1 )
          goto LABEL_37;
        *(_QWORD *)&v36 = *(_QWORD *)&v32;
      v17 = 0;
      *(_DWORD *)(a5 + 4) = *(_DWORD *)a5;
LABEL_37:
      result = *(_DWORD *)v14;
    }
    while ( v17 < (*(_DWORD *)(v14 + 4) - *(_DWORD *)v14) >> 2 );
  return result;
}


int __fastcall leveldb::WriteBatchInternal::SetSequence(leveldb::WriteBatchInternal *this, leveldb::WriteBatch *a2, unsigned __int64 a3)
{
  const void **v3; // r6@1
  unsigned int v4; // r4@1
  leveldb *v5; // r0@1
  unsigned int v6; // r5@1
  char *v7; // r1@1

  v3 = (const void **)this;
  v4 = HIDWORD(a3);
  v5 = *(leveldb **)this;
  v6 = a3;
  v7 = (char *)*((_DWORD *)v5 - 1);
  if ( (signed int)v7 >= 0 )
  {
    sub_21E8010(v3);
    v5 = (leveldb *)*v3;
  }
  return j_j_j__ZN7leveldb13EncodeFixed64EPcy_0(v5, v7, __PAIR__(v4, v6));
}


void __fastcall leveldb::DBImpl::InstallCompactionResults(leveldb::VersionSet *a1, int a2, int a3)
{
  int v3; // r10@1
  int v4; // r5@1
  __int64 v5; // r2@1
  signed int v6; // ST00_4@1
  int v7; // ST04_4@1
  __int64 v8; // ST08_8@1
  __int64 v9; // r0@1
  __int64 v10; // r0@1
  int v11; // r12@2
  int v12; // r7@2
  int v13; // r6@2
  int v14; // r8@2
  unsigned __int64 v15; // r2@4
  int v16; // r0@4
  leveldb::VersionSet *v17; // [sp+18h] [bp-28h]@1

  v3 = a3;
  v4 = a2;
  v17 = a1;
  HIDWORD(v5) = **(_DWORD **)a3;
  v6 = (signed int)((*(_QWORD *)(*(_DWORD *)a3 + 132) >> 32) - *(_QWORD *)(*(_DWORD *)a3 + 132)) >> 2;
  v7 = **(_DWORD **)a3 + 1;
  v8 = *(_QWORD *)(a3 + 40);
  LODWORD(v5) = (signed int)((*(_QWORD *)(*(_DWORD *)a3 + 120) >> 32) - *(_QWORD *)(*(_DWORD *)a3 + 120)) >> 2;
  j_leveldb::Log(
    *(leveldb **)(a2 + 36),
    (leveldb::Logger *)"Compacted %d@%d + %d@%d files => %lld bytes",
    v5,
    v6,
    v7,
    v8);
  LODWORD(v9) = *(_DWORD *)v3;
  HIDWORD(v9) = *(_DWORD *)v3 + 24;
  j_leveldb::Compaction::AddInputDeletions(v9);
  v10 = *(_QWORD *)(v3 + 16);
  if ( HIDWORD(v10) != (_DWORD)v10 )
  {
    v11 = *(_DWORD *)v3;
    v12 = 0;
    v13 = 0;
    v14 = **(_DWORD **)v3 + 1;
    while ( 1 )
    {
      LODWORD(v15) = *(_DWORD *)(v10 + v12);
      v16 = v10 + v12;
      HIDWORD(v15) = *(_DWORD *)(v16 + 4);
      j_leveldb::VersionEdit::AddFile(
        (leveldb::VersionEdit *)(v11 + 24),
        v14,
        v15,
        *(_QWORD *)(v16 + 8),
        (const leveldb::InternalKey *)(v16 + 16),
        (const leveldb::InternalKey *)(v16 + 20));
      v10 = *(_QWORD *)(v3 + 16);
      if ( ++v13 >= (unsigned int)(-1431655765 * ((HIDWORD(v10) - (signed int)v10) >> 3)) )
        break;
      v12 += 24;
      v11 = *(_DWORD *)v3;
    }
  }
  j_leveldb::VersionSet::LogAndApply(
    v17,
    *(leveldb::VersionEdit **)(v4 + 1276),
    (leveldb::port::Mutex *)(*(_DWORD *)v3 + 24),
    (leveldb::port::Mutex *)(v4 + 1112));
}


leveldb::VersionEdit *__fastcall leveldb::DB::Open(leveldb::DBImpl *a1, int a2, int *a3, _DWORD *a4)
{
  leveldb::DBImpl *v4; // r8@1
  _DWORD *v5; // r10@1
  int *v6; // r4@1
  int v7; // r7@1
  void *v8; // r9@1
  leveldb::Status *v9; // r0@3
  int v10; // r0@4
  __int64 v11; // r2@4
  int v12; // r7@4
  int *v13; // r1@4
  int v14; // r4@4
  void (__fastcall *v15)(leveldb::Status **, int, int *, leveldb::WritableFile **); // r5@4
  leveldb::Status *v16; // r0@4
  leveldb::Status *v17; // r1@4
  void *v18; // r1@8
  void *v19; // r0@13
  int v20; // r0@15
  leveldb::WritableFile *v21; // r4@15
  leveldb::log::Writer *v22; // r0@15
  int v23; // r2@15
  unsigned int v24; // r3@15
  leveldb::MemTable *v25; // r0@15
  leveldb::MemTable *v26; // r0@15
  int v27; // r1@15
  __int64 v28; // r1@18
  leveldb::Status *v29; // r1@18
  leveldb::Status *v30; // r1@22
  int v31; // r5@30
  int v32; // r5@32
  int v33; // r0@34
  unsigned int *v36; // r2@42
  signed int v37; // r1@44
  int v42; // [sp+0h] [bp-A0h]@4
  leveldb::Status *v43; // [sp+4h] [bp-9Ch]@18
  int v44; // [sp+8h] [bp-98h]@4
  leveldb::Status *v45; // [sp+Ch] [bp-94h]@4
  leveldb::WritableFile *v46; // [sp+10h] [bp-90h]@4
  char v47; // [sp+17h] [bp-89h]@1
  void *v48; // [sp+18h] [bp-88h]@1
  int v49; // [sp+20h] [bp-80h]@15
  int v50; // [sp+24h] [bp-7Ch]@15
  int v51; // [sp+28h] [bp-78h]@18
  int v52; // [sp+2Ch] [bp-74h]@18
  char v53; // [sp+41h] [bp-5Fh]@15
  char v54; // [sp+42h] [bp-5Eh]@18
  int v55; // [sp+48h] [bp-58h]@1
  int v56; // [sp+4Ch] [bp-54h]@1
  int v57; // [sp+50h] [bp-50h]@1
  int v58; // [sp+58h] [bp-48h]@1
  int v59; // [sp+5Ch] [bp-44h]@1
  int *v60; // [sp+60h] [bp-40h]@1
  int *v61; // [sp+64h] [bp-3Ch]@1
  int v62; // [sp+68h] [bp-38h]@1
  int v63; // [sp+6Ch] [bp-34h]@1
  int v64; // [sp+70h] [bp-30h]@1
  int v65; // [sp+74h] [bp-2Ch]@1

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  *a4 = 0;
  v8 = j_operator new(0x5B0u);
  j_leveldb::DBImpl::DBImpl((int)v8, v7, v6);
  j_leveldb::port::Mutex::Lock((leveldb::port::Mutex *)((char *)v8 + 1112));
  v48 = &unk_28898CC;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v62 = 0;
  v58 = 0;
  v59 = 0;
  v60 = &v58;
  v61 = &v58;
  v63 = 0;
  v64 = 0;
  v65 = 0;
  j_leveldb::VersionEdit::Clear((leveldb::VersionEdit *)&v48);
  v47 = 0;
  j_leveldb::DBImpl::Recover(v4, (leveldb::VersionEdit *)v8, (bool *)&v48, (bool *)&v47);
  if ( !*(_DWORD *)v4 )
  {
    if ( *((_DWORD *)v8 + 282) )
    {
      v9 = 0;
    }
    else
      v10 = *((_DWORD *)v8 + 319);
      v11 = *(_QWORD *)(v10 + 24);
      v42 = *(_QWORD *)(v10 + 24);
      *(_QWORD *)(v10 + 24) = v11 + 1;
      v12 = *(_DWORD *)(v7 + 8);
      v13 = v6;
      v14 = HIDWORD(v11);
      v15 = *(void (__fastcall **)(leveldb::Status **, int, int *, leveldb::WritableFile **))(*(_DWORD *)v12 + 16);
      j_leveldb::LogFileName(&v44, v13);
      v15(&v45, v12, &v44, &v46);
      v16 = *(leveldb::Status **)v4;
      v17 = v45;
      if ( *(leveldb::Status **)v4 != v45 )
      {
        if ( v16 )
        {
          j_operator delete[]((void *)v16);
          v17 = v45;
        }
        if ( v17 )
          v18 = j_leveldb::Status::CopyState(v17, (const char *)v17);
          v16 = v45;
        else
          v16 = 0;
          v18 = 0;
        *(_DWORD *)v4 = v18;
      }
      if ( v16 )
        j_operator delete[]((void *)v16);
      v19 = (void *)(v44 - 12);
      if ( (int *)(v44 - 12) != &dword_28898C0 )
        v36 = (unsigned int *)(v44 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v37 = __ldrex(v36);
          while ( __strex(v37 - 1, v36) );
          v37 = (*v36)--;
        if ( v37 <= 0 )
          j_j_j_j__ZdlPv_9(v19);
      v9 = *(leveldb::Status **)v4;
      if ( !*(_DWORD *)v4 )
        v53 = 1;
        v20 = v14;
        v21 = v46;
        v50 = v20;
        *((_DWORD *)v8 + 285) = v46;
        *((_DWORD *)v8 + 286) = v42;
        *((_DWORD *)v8 + 287) = v20;
        v49 = v42;
        v22 = (leveldb::log::Writer *)j_operator new(0x1Cu);
        *((_DWORD *)v8 + 288) = j_leveldb::log::Writer::Writer(v22, v21, v23, v24);
        v25 = (leveldb::MemTable *)j_operator new(0x3Cu);
        v26 = j_leveldb::MemTable::MemTable(v25, (const leveldb::InternalKeyComparator *)((char *)v8 + 8));
        v27 = *((_DWORD *)v26 + 2);
        *((_DWORD *)v8 + 282) = v26;
        *((_DWORD *)v26 + 2) = v27 + 1;
        v9 = *(leveldb::Status **)v4;
    if ( !v9 && v47 )
      v54 = 1;
      v51 = 0;
      v52 = 0;
      HIDWORD(v28) = *((_DWORD *)v8 + 287);
      LODWORD(v28) = *((_DWORD *)v8 + 286);
      v53 = 1;
      *(_QWORD *)&v49 = v28;
      j_leveldb::VersionSet::LogAndApply(
        (leveldb::VersionSet *)&v43,
        *((leveldb::VersionEdit **)v8 + 319),
        (leveldb::port::Mutex *)&v48,
        (leveldb::port::Mutex *)((char *)v8 + 1112));
      v29 = v43;
      if ( *(leveldb::Status **)v4 == v43 )
        v30 = *(leveldb::Status **)v4;
      else
        if ( v9 )
          j_operator delete[]((void *)v9);
          v29 = v43;
        if ( v29 )
          v9 = (leveldb::Status *)j_leveldb::Status::CopyState(v29, (const char *)v29);
          v30 = v43;
          v30 = 0;
          v9 = 0;
        *(_DWORD *)v4 = v9;
      if ( v30 )
        j_operator delete[]((void *)v30);
    if ( !v9 )
      j_leveldb::DBImpl::DeleteObsoleteFiles((leveldb::DBImpl *)v8);
      if ( !*((_BYTE *)v8 + 1264) )
        v31 = *((_DWORD *)v8 + 279);
        vFFFF0FA0();
        if ( !v31 )
          if ( *((_DWORD *)v8 + 283) || (v32 = *((_DWORD *)v8 + 317), vFFFF0FA0(), !v32) )
          {
            if ( !*((_DWORD *)v8 + 320) )
            {
              v33 = *((_DWORD *)v8 + 283);
              _ZF = v33 == 0;
              if ( !v33 )
                _ZF = *((_DWORD *)v8 + 318) == 0;
              if ( !_ZF )
                goto LABEL_56;
              __asm { VMOV.F64        D0, #1.0 }
              _R0 = *(_DWORD *)(*((_DWORD *)v8 + 319) + 200);
              __asm
              {
                VLDR            D1, [R0,#0x70]
                VCMPE.F64       D1, D0
                VMRS            APSR_nzcv, FPSCR
              }
              if ( !(_NF ^ _VF) || *(_DWORD *)(_R0 + 100) )
LABEL_56:
                *((_BYTE *)v8 + 1264) = 1;
                (*(void (**)(void))(**((_DWORD **)v8 + 1) + 60))();
            }
          }
  }
  j_leveldb::port::Mutex::Unlock((leveldb::port::Mutex *)((char *)v8 + 1112));
  if ( *(_DWORD *)v4 )
    (*(void (__fastcall **)(void *))(*(_DWORD *)v8 + 4))(v8);
  else
    *v5 = v8;
  return j_leveldb::VersionEdit::~VersionEdit((leveldb::VersionEdit *)&v48);
}


int __fastcall leveldb::SequentialFileEncrypted::~SequentialFileEncrypted(leveldb::SequentialFileEncrypted *this)
{
  leveldb::SequentialFileEncrypted *v1; // r4@1
  int v2; // r0@1
  int v3; // r5@3
  unsigned int *v4; // r1@4
  unsigned int v5; // r0@6
  unsigned int *v6; // r6@10
  unsigned int v7; // r0@12
  int v8; // r5@17
  unsigned int *v9; // r1@18
  unsigned int v10; // r0@20
  unsigned int *v11; // r6@24
  unsigned int v12; // r0@26

  v1 = this;
  *(_DWORD *)this = &off_2724CA0;
  v2 = *((_DWORD *)this + 1);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 2) = 0;
  v3 = *((_DWORD *)v1 + 3);
  *((_DWORD *)v1 + 3) = 0;
  if ( v3 )
  {
    v4 = (unsigned int *)(v3 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 == 1 )
      v6 = (unsigned int *)(v3 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
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
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
  }
  v8 = *((_DWORD *)v1 + 3);
  if ( v8 )
    v9 = (unsigned int *)(v8 + 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  return j_j_j__ZN7leveldb14SequentialFileD2Ev_0(v1);
}


void __fastcall leveldb::DecompressAllocator::~DecompressAllocator(leveldb::DecompressAllocator *this)
{
  leveldb::DecompressAllocator *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_2725D24;
  v3 = (void *)(*((_QWORD *)this + 1) >> 32);
  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v2 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
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
          j_j_j_j__ZdlPv_9(v6);
      }
      v2 = (char *)v2 + 4;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 2);
  }
  if ( v2 )
    j_operator delete(v2);
  j_operator delete((void *)v1);
}


leveldb::WriteBatch *__fastcall leveldb::DB::Put(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r7@1
  int v6; // r4@1
  int v7; // r8@1
  int v8; // r6@1
  const void *v10[7]; // [sp+4h] [bp-1Ch]@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  j_leveldb::WriteBatch::WriteBatch((leveldb::WriteBatch *)v10);
  j_leveldb::WriteBatch::Put(v10, v6, a5);
  (*(void (__fastcall **)(int, int, int, const void **))(*(_DWORD *)v8 + 16))(v5, v8, v7, v10);
  return j_leveldb::WriteBatch::~WriteBatch((leveldb::WriteBatch *)v10);
}


int __fastcall leveldb::port::Mutex::Unlock(leveldb::port::Mutex *this)
{
  int result; // r0@1
  char *v2; // r0@2

  result = j_pthread_mutex_unlock_0((pthread_mutex_t *)this);
  if ( result )
  {
    v2 = j_strerror(result);
    j_fprintf((FILE *)((char *)&_sF + 168), "pthread %s: %s\n", "unlock", v2);
    j_abort();
  }
  return result;
}


int __fastcall leveldb::FilterBlockReader::KeyMayMatch(_DWORD *a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  int v5; // r1@1
  unsigned int v6; // r4@1
  char v7; // lr@1
  signed int v8; // r2@1
  bool v9; // nf@1
  unsigned int v10; // r1@1
  int v11; // r1@8
  unsigned int v12; // r12@8
  unsigned int v13; // r3@8
  int v14; // lr@9
  unsigned int v16; // [sp+0h] [bp-10h]@13
  unsigned int v17; // [sp+4h] [bp-Ch]@13

  v5 = *(_QWORD *)(a1 + 3) >> 32;
  v6 = (a3 >> v5) | (a4 << (32 - v5));
  v7 = v5 - 32;
  v8 = 0;
  v9 = v5 - 32 < 0;
  v10 = a4 >> v5;
  if ( !v9 )
    v6 = a4 >> v7;
  if ( v6 >= (unsigned int)*(_QWORD *)(a1 + 3) )
    v8 = 1;
  if ( v10 )
  if ( v8 )
    return 1;
  v11 = a1[2];
  v12 = *(_DWORD *)(v11 + 4 * v6);
  v13 = *(_DWORD *)(v11 + 4 * v6 + 4);
  if ( v13 < v12 || (v14 = a1[1], v13 > v11 - v14) )
  {
    if ( v13 == v12 )
      return 0;
  }
  v16 = v14 + v12;
  v17 = v13 - v12;
  return (*(int (__cdecl **)(_DWORD, int))(*(_DWORD *)*a1 + 16))(*a1, a5);
}


const void **__fastcall leveldb::PutVarint32(const void **a1, unsigned int a2)
{
  char *v2; // r2@2
  unsigned int v3; // r2@7
  char v5; // [sp+3h] [bp-Dh]@2
  char v6; // [sp+4h] [bp-Ch]@2
  char v7; // [sp+5h] [bp-Bh]@4
  char v8; // [sp+6h] [bp-Ah]@6
  char v9; // [sp+7h] [bp-9h]@8
  int v10; // [sp+8h] [bp-8h]@9

  if ( a2 > 0x7F )
  {
    if ( a2 >> 14 )
    {
      if ( 0 == a2 >> 21 )
      {
        v5 = a2 | 0x80;
        v6 = (a2 >> 7) | 0x80;
        v7 = a2 >> 14;
        v2 = &v8;
      }
      else
        v7 = (a2 >> 14) | 0x80;
        v3 = a2 >> 21;
        if ( a2 >> 28 )
        {
          v8 = v3 | 0x80;
          v9 = a2 >> 28;
          v2 = (char *)&v10;
        }
        else
          v8 = v3;
          v2 = &v9;
    }
    else
      v5 = a2 | 0x80;
      v6 = a2 >> 7;
      v2 = &v7;
  }
  else
    v5 = a2;
    v2 = &v6;
  return sub_21E7408(a1, &v5, v2 - &v5);
}


signed int __fastcall leveldb::log::Reader::SkipToInitialBlock(leveldb::log::Reader *this)
{
  leveldb::log::Reader *v1; // r7@1
  __int64 v2; // r0@1
  char *v3; // r6@1
  unsigned int v4; // r2@1
  __int64 v5; // r0@1
  int v6; // r3@1
  int v7; // r4@1
  int v8; // r1@5
  __int64 v9; // kr18_8@6
  __int64 v10; // r2@6
  signed int v11; // r5@6
  signed int v12; // r7@6
  signed int result; // r0@14
  void *ptr; // [sp+0h] [bp-18h]@4

  v1 = this;
  v3 = (char *)this + 48;
  LODWORD(v2) = *((_DWORD *)this + 12);
  HIDWORD(v2) = *((_DWORD *)v3 + 1);
  v4 = v2 & 0x7FFF;
  v5 = v2 - (v2 & 0x7FFF);
  v6 = (unsigned __int64)(v5 + 0x8000) >> 32;
  v7 = v5 + 0x8000;
  if ( v4 <= 0x7FFA )
  {
    v6 = HIDWORD(v5);
    v7 = v5;
  }
  *((_DWORD *)v3 - 2) = v7;
  *((_DWORD *)v3 - 1) = v6;
  if ( v7 | v6 && ((*(void (__fastcall **)(void **))(**(_DWORD **)v1 + 12))(&ptr), ptr) )
    v8 = *((_DWORD *)v1 + 1);
    if ( !v8 )
      goto LABEL_20;
    v9 = *(_QWORD *)v3;
    v10 = *((_QWORD *)v3 - 1) - v7 - *((_DWORD *)v1 + 5);
    v11 = 0;
    v12 = 0;
    if ( HIDWORD(v10) < (unsigned int)(*(_QWORD *)v3 >> 32) )
      v11 = 1;
    if ( (unsigned int)v10 < (unsigned int)v9 )
      v12 = 1;
    if ( HIDWORD(v10) != HIDWORD(v9) )
      v12 = v11;
    if ( !v12 )
    {
      (*(void (__fastcall **)(int, int, void **))(*(_DWORD *)v8 + 8))(v8, v7, &ptr);
      if ( ptr )
        j_operator delete[](ptr);
    }
    else
LABEL_20:
      j_operator delete[](ptr);
    result = 0;
  else
    result = 1;
  return result;
}


void __fastcall leveldb::Table::ReadFilter(int a1, __int64 *a2)
{
  leveldb::Table::ReadFilter(a1, a2);
}


int __fastcall leveldb::port::CondVar::Wait(leveldb::port::CondVar *this)
{
  int result; // r0@1
  char *v2; // r0@2

  result = j_pthread_cond_wait((pthread_cond_t *)this, *((pthread_mutex_t **)this + 1));
  if ( result )
  {
    v2 = j_strerror(result);
    j_fprintf((FILE *)((char *)&_sF + 168), "pthread %s: %s\n", "wait", v2);
    j_abort();
  }
  return result;
}


void __fastcall leveldb::InternalKey::DebugString(leveldb::InternalKey *this, int *a2)
{
  leveldb::InternalKey::DebugString(this, a2);
}


int __fastcall leveldb::VersionSet::MarkFileNumberUsed(leveldb::VersionSet *this, int a2, unsigned __int64 a3)
{
  unsigned int v3; // t1@1
  __int64 v4; // r0@1 OVERLAPPED
  unsigned int v5; // lr@1
  signed int v6; // r12@1
  int v7; // r2@8
  int v8; // kr00_4@8

  v3 = *((_DWORD *)this + 6);
  v4 = (unsigned int)this + 24;
  v5 = *(_DWORD *)(v4 + 4);
  v6 = 0;
  if ( v3 > (unsigned int)a3 )
    v6 = 1;
  if ( v5 > HIDWORD(a3) )
    HIDWORD(v4) = 1;
  if ( v5 == HIDWORD(a3) )
    HIDWORD(v4) = v6;
  if ( !HIDWORD(v4) )
  {
    v8 = a3 + 1;
    v7 = (a3 + 1) >> 32;
    HIDWORD(v4) = v8;
    *(_QWORD *)v4 = *(__int64 *)((char *)&v4 + 4);
  }
  return v4;
}


int __fastcall leveldb::TableBuilder::NumEntries(leveldb::TableBuilder *this)
{
  int v1; // r1@1
  int result; // r0@1
  int v3; // r1@1

  v1 = *(_DWORD *)this;
  result = *(_DWORD *)(*(_DWORD *)this + 2232);
  v3 = *(_DWORD *)(v1 + 2236);
  return result;
}


int __fastcall leveldb::VersionSet::NumLevelFiles(leveldb::VersionSet *this, int a2)
{
  __int64 v2; // kr00_8@1

  v2 = *(_QWORD *)(*((_DWORD *)this + 50) + 12 * a2 + 16);
  return (HIDWORD(v2) - (signed int)v2) >> 2;
}


leveldb::DBImpl *__fastcall leveldb::DBImpl::~DBImpl(leveldb::DBImpl *this)
{
  leveldb::DBImpl *v1; // r4@1
  leveldb::port::Mutex *v2; // r5@1
  int v3; // r0@1
  leveldb::VersionSet *v4; // r0@6
  leveldb::VersionSet *v5; // r0@7
  int v6; // r0@8
  int v7; // r1@9
  unsigned __int8 v8; // vf@9
  void *v9; // r0@11
  int v10; // r0@12
  int v11; // r1@13
  void *v12; // r0@15
  leveldb::WriteBatch *v13; // r0@16
  leveldb::WriteBatch *v14; // r0@17
  leveldb::log::Writer *v15; // r0@18
  void *v16; // r0@19
  int v17; // r0@20
  leveldb::TableCache *v18; // r0@22
  leveldb::TableCache *v19; // r0@23
  unsigned int v20; // r0@24
  bool v21; // zf@24
  unsigned int v22; // r1@24
  int v23; // r0@29
  void *v24; // r0@31
  void *v25; // r0@33
  unsigned int v26; // r6@34
  unsigned int v27; // r1@34
  unsigned int v28; // r7@35
  void *v29; // t1@36
  int v30; // r1@39
  void *v31; // r0@39
  unsigned int *v33; // r2@41
  signed int v34; // r1@43
  void *ptr; // [sp+4h] [bp-1Ch]@4

  v1 = this;
  v2 = (leveldb::DBImpl *)((char *)this + 1112);
  *(_DWORD *)this = &off_2725B50;
  v3 = j_leveldb::port::Mutex::Lock((leveldb::DBImpl *)((char *)this + 1112));
  vFFFF0FA0(v3);
  *((_DWORD *)v1 + 317) = 0;
  vFFFF0FA0();
  *((_DWORD *)v1 + 279) = v1;
  while ( *((_BYTE *)v1 + 1264) )
    j_leveldb::port::CondVar::Wait((leveldb::DBImpl *)((char *)v1 + 1120));
  j_leveldb::port::Mutex::Unlock(v2);
  if ( *((_DWORD *)v1 + 277) )
  {
    (*(void (__fastcall **)(void **))(**((_DWORD **)v1 + 1) + 56))(&ptr);
    if ( ptr )
      j_operator delete[](ptr);
  }
  v4 = (leveldb::VersionSet *)*((_DWORD *)v1 + 319);
  if ( v4 )
    v5 = j_leveldb::VersionSet::~VersionSet(v4);
    j_operator delete((void *)v5);
  v6 = *((_DWORD *)v1 + 282);
  if ( v6 )
    v7 = *(_DWORD *)(v6 + 8);
    v8 = __OFSUB__(v7--, 1);
    *(_DWORD *)(v6 + 8) = v7;
    if ( (unsigned __int8)((v7 < 0) ^ v8) | (v7 == 0) )
    {
      v9 = (void *)j_leveldb::MemTable::~MemTable((leveldb::MemTable *)v6);
      j_operator delete(v9);
    }
  v10 = *((_DWORD *)v1 + 283);
  if ( v10 )
    v11 = *(_DWORD *)(v10 + 8);
    v8 = __OFSUB__(v11--, 1);
    *(_DWORD *)(v10 + 8) = v11;
    if ( (unsigned __int8)((v11 < 0) ^ v8) | (v11 == 0) )
      v12 = (void *)j_leveldb::MemTable::~MemTable((leveldb::MemTable *)v10);
      j_operator delete(v12);
  v13 = (leveldb::WriteBatch *)*((_DWORD *)v1 + 300);
  if ( v13 )
    v14 = j_leveldb::WriteBatch::~WriteBatch(v13);
    j_operator delete((void *)v14);
  v15 = (leveldb::log::Writer *)*((_DWORD *)v1 + 288);
  if ( v15 )
    v16 = (void *)j_leveldb::log::Writer::~Writer(v15);
    j_operator delete(v16);
  v17 = *((_DWORD *)v1 + 285);
  if ( v17 )
    (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  v18 = (leveldb::TableCache *)*((_DWORD *)v1 + 276);
  if ( v18 )
    v19 = j_leveldb::TableCache::~TableCache(v18);
    j_operator delete((void *)v19);
  v20 = *((_WORD *)v1 + 548);
  v21 = (unsigned __int8)v20 == 0;
  v22 = v20 >> 8;
  if ( (_BYTE)v20 )
    v20 = *((_DWORD *)v1 + 9);
    v21 = v20 == 0;
  if ( !v21 )
    (*(void (**)(void))(*(_DWORD *)v20 + 4))();
    v22 = *((_BYTE *)v1 + 1097);
  if ( v22 )
    v23 = *((_DWORD *)v1 + 12);
    if ( v23 )
      (*(void (**)(void))(*(_DWORD *)v23 + 4))();
  v24 = (void *)*((_DWORD *)v1 + 320);
  if ( v24 )
    j_operator delete[](v24);
  j_std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::_M_erase(
    (int)v1 + 1240,
    *((_DWORD *)v1 + 312));
  v25 = (void *)*((_DWORD *)v1 + 290);
  if ( v25 )
    v26 = *((_DWORD *)v1 + 299);
    v27 = *((_DWORD *)v1 + 295);
    if ( v27 < v26 + 4 )
      v28 = v27 - 4;
      do
      {
        v29 = *(void **)(v28 + 4);
        v28 += 4;
        j_operator delete(v29);
      }
      while ( v28 < v26 );
      v25 = (void *)*((_DWORD *)v1 + 290);
    j_operator delete(v25);
  j_leveldb::port::CondVar::~CondVar((leveldb::DBImpl *)((char *)v1 + 1120));
  j_leveldb::port::Mutex::~Mutex(v2);
  v30 = *((_DWORD *)v1 + 275);
  v31 = (void *)(v30 - 12);
  if ( (int *)(v30 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v30 - 4);
    if ( &pthread_create )
      __dmb();
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
    else
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
  j_leveldb::FilterPolicy::~FilterPolicy((leveldb::DBImpl *)((char *)v1 + 16));
  j_leveldb::Comparator::~Comparator((leveldb::DBImpl *)((char *)v1 + 8));
  return v1;
}


leveldb::Iterator *__fastcall leveldb::Iterator::~Iterator(leveldb::Iterator *this)
{
  leveldb::Iterator *v1; // r4@1
  void (__fastcall *v2)(_DWORD, _DWORD); // r2@1
  int v3; // r5@2
  int v4; // r6@3

  v1 = this;
  *(_DWORD *)this = &off_2725D40;
  v2 = (void (__fastcall *)(_DWORD, _DWORD))*((_DWORD *)this + 1);
  if ( v2 )
  {
    v2(*((_QWORD *)this + 1), *((_QWORD *)this + 1) >> 32);
    v3 = *((_DWORD *)v1 + 4);
    if ( v3 )
    {
      do
      {
        ((void (__fastcall *)(_DWORD, _DWORD))*(_QWORD *)v3)(*(_QWORD *)v3 >> 32, *(_DWORD *)(v3 + 8));
        v4 = *(_DWORD *)(v3 + 12);
        j_operator delete((void *)v3);
        v3 = v4;
      }
      while ( v4 );
    }
  }
  return v1;
}


void *__fastcall leveldb::Status::CopyState(leveldb::Status *this, const char *a2)
{
  leveldb::Status *v2; // r4@1
  int v3; // r5@1
  void *v4; // r6@1

  v2 = this;
  v3 = *(_DWORD *)this + 5;
  v4 = j_operator new[](v3);
  j___aeabi_memcpy_0((int)v4, (int)v2, v3);
  return v4;
}


leveldb::WriteBatch *__fastcall leveldb::DBImpl::Put(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // r7@1
  int v6; // r4@1
  int v7; // r8@1
  int v8; // r6@1
  const void *v10[7]; // [sp+4h] [bp-1Ch]@1

  v5 = a1;
  v6 = a4;
  v7 = a3;
  v8 = a2;
  j_leveldb::WriteBatch::WriteBatch((leveldb::WriteBatch *)v10);
  j_leveldb::WriteBatch::Put(v10, v6, a5);
  (*(void (__fastcall **)(int, int, int, const void **))(*(_DWORD *)v8 + 16))(v5, v8, v7, v10);
  return j_leveldb::WriteBatch::~WriteBatch((leveldb::WriteBatch *)v10);
}


_DWORD *__fastcall leveldb::VersionSet::MakeInputIterator(leveldb::VersionSet *this, leveldb::Compaction *a2)
{
  leveldb::VersionSet *v2; // r10@1
  leveldb::Compaction *v3; // r8@1
  int v4; // r4@1
  char *v5; // r11@1
  char *v6; // r5@2
  int v7; // r7@2
  int v8; // r0@2
  int v9; // r6@2
  signed __int64 v10; // r0@4
  unsigned int v11; // kr00_4@4
  int v12; // r3@8
  const leveldb::Comparator *v13; // r9@8
  leveldb::Iterator *v14; // r0@10
  int v15; // r0@10
  unsigned int v16; // r7@10
  __int64 v17; // r0@16
  leveldb::Iterator *v18; // r0@18
  int v19; // r0@18
  unsigned int v20; // r6@20
  _DWORD *v21; // r4@23
  char v23; // [sp+10h] [bp-30h]@1
  char v24; // [sp+11h] [bp-2Fh]@1
  int v25; // [sp+14h] [bp-2Ch]@1
  int v26; // [sp+18h] [bp-28h]@1

  v2 = this;
  v25 = 0;
  v26 = 0;
  v3 = a2;
  v23 = *(_BYTE *)(*((_DWORD *)this + 2) + 6);
  v24 = 0;
  v5 = (char *)a2 + 120;
  v4 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 )
  {
    v6 = (char *)a2 + 124;
    v7 = *((_DWORD *)a2 + 31);
    v8 = 2;
    v9 = *((_DWORD *)a2 + 30);
  }
  else
    v8 = ((v7 - v9) >> 2) + 1;
  v11 = v8;
  v10 = 4LL * (unsigned int)v8;
  if ( !is_mul_ok(4u, v11) )
    HIDWORD(v10) = 1;
  if ( HIDWORD(v10) )
    LODWORD(v10) = -1;
  v13 = (const leveldb::Comparator *)j_operator new[](v10);
  if ( v9 == v7 )
    v16 = 0;
  else if ( v4 )
    v14 = (leveldb::Iterator *)j_operator new(0x34u);
    v15 = j_leveldb::Iterator::Iterator(v14);
    *(_DWORD *)v15 = &off_2725C94;
    *(_DWORD *)(v15 + 20) = &off_2726110;
    *(_DWORD *)(v15 + 24) = *((_DWORD *)v2 + 5);
    *(_DWORD *)(v15 + 28) = v5;
    *(_DWORD *)(v15 + 32) = (*(_DWORD *)v6 - *(_DWORD *)v5) >> 2;
    v16 = 1;
    *(_DWORD *)v13 = j_leveldb::NewTwoLevelIterator(v15, (int)sub_1B3EE40, *((_DWORD *)v2 + 3), (int)&v23);
  else if ( v7 == v9 )
    do
    {
      *((_DWORD *)v13 + v16) = j_leveldb::TableCache::NewIterator(
                                 *((char **)v2 + 3),
                                 (int)&v23,
                                 *(_QWORD *)(*(_DWORD *)(v9 + 4 * v16) + 8),
                                 *(_QWORD *)(*(_DWORD *)(v9 + 4 * v16) + 16),
                                 0);
      ++v16;
      v9 = *(_DWORD *)v5;
    }
    while ( v16 < (*(_DWORD *)v6 - *(_DWORD *)v5) >> 2 );
  v17 = *(_QWORD *)((char *)v3 + 132);
  if ( (_DWORD)v17 != HIDWORD(v17) )
    if ( *(_DWORD *)v3 == -1 )
      if ( HIDWORD(v17) != (_DWORD)v17 )
      {
        v20 = 0;
        do
        {
          *((_DWORD *)v13 + v16 + v20) = j_leveldb::TableCache::NewIterator(
                                           *((char **)v2 + 3),
                                           (int)&v23,
                                           *(_QWORD *)(*(_DWORD *)(v17 + 4 * v20) + 8),
                                           *(_QWORD *)(*(_DWORD *)(v17 + 4 * v20) + 16),
                                           0);
          ++v20;
          v17 = *(_QWORD *)((char *)v3 + 132);
        }
        while ( v20 < (HIDWORD(v17) - (signed int)v17) >> 2 );
        v16 += v20;
      }
    else
      v18 = (leveldb::Iterator *)j_operator new(0x34u);
      v19 = j_leveldb::Iterator::Iterator(v18);
      *(_DWORD *)v19 = &off_2725C94;
      *(_DWORD *)(v19 + 20) = &off_2726110;
      *(_DWORD *)(v19 + 24) = *((_DWORD *)v2 + 5);
      *(_DWORD *)(v19 + 28) = (char *)v3 + 132;
      *(_DWORD *)(v19 + 32) = (signed int)((*(_QWORD *)((char *)v3 + 132) >> 32) - *(_QWORD *)((char *)v3 + 132)) >> 2;
      *((_DWORD *)v13 + v16++) = j_leveldb::NewTwoLevelIterator(v19, (int)sub_1B3EE40, *((_DWORD *)v2 + 3), (int)&v23);
  v21 = j_leveldb::NewMergingIterator((leveldb::VersionSet *)((char *)v2 + 16), v13, (leveldb::Iterator **)v16, v12);
  j_operator delete[]((void *)v13);
  return v21;
}


leveldb::VersionEdit *__fastcall leveldb::DBImpl::CompactMemTable(leveldb::DBImpl *this)
{
  leveldb::DBImpl *v1; // r4@1
  leveldb::Version *v2; // r6@1
  void *v3; // r0@1
  int v4; // r6@2
  void *v5; // r0@3
  char *v6; // r1@3
  void *v7; // r1@7
  __int64 v8; // r1@13
  leveldb::Status *v9; // r1@13
  void *v10; // r1@17
  int v12; // r0@29
  signed int v13; // r1@29
  void *v14; // r0@31
  leveldb::Status *v15; // [sp+4h] [bp-8Ch]@13
  void *v16; // [sp+8h] [bp-88h]@3
  int v17; // [sp+Ch] [bp-84h]@3
  const char *v18; // [sp+10h] [bp-80h]@3
  int v19; // [sp+14h] [bp-7Ch]@3
  char *v20; // [sp+18h] [bp-78h]@3
  void *ptr; // [sp+1Ch] [bp-74h]@1
  void *v22; // [sp+20h] [bp-70h]@1
  __int64 v23; // [sp+28h] [bp-68h]@13
  int v24; // [sp+30h] [bp-60h]@13
  int v25; // [sp+34h] [bp-5Ch]@13
  char v26; // [sp+49h] [bp-47h]@13
  char v27; // [sp+4Ah] [bp-46h]@13
  int v28; // [sp+50h] [bp-40h]@1
  int v29; // [sp+54h] [bp-3Ch]@1
  int v30; // [sp+58h] [bp-38h]@1
  int v31; // [sp+60h] [bp-30h]@1
  int v32; // [sp+64h] [bp-2Ch]@1
  int *v33; // [sp+68h] [bp-28h]@1
  int *v34; // [sp+6Ch] [bp-24h]@1
  int v35; // [sp+70h] [bp-20h]@1
  int v36; // [sp+74h] [bp-1Ch]@1
  int v37; // [sp+78h] [bp-18h]@1
  int v38; // [sp+7Ch] [bp-14h]@1

  v1 = this;
  v22 = &unk_28898CC;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v35 = 0;
  v31 = 0;
  v32 = 0;
  v33 = &v31;
  v34 = &v31;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  j_leveldb::VersionEdit::Clear((leveldb::VersionEdit *)&v22);
  v2 = *(leveldb::Version **)(*((_DWORD *)v1 + 319) + 200);
  j_leveldb::Version::Ref(*(leveldb::Version **)(*((_DWORD *)v1 + 319) + 200));
  j_leveldb::DBImpl::WriteLevel0Table(
    (leveldb::DBImpl *)&ptr,
    v1,
    *((leveldb::VersionEdit **)v1 + 283),
    (leveldb::Version *)&v22,
    (int)v2);
  j_leveldb::Version::Unref(v2);
  v3 = ptr;
  if ( ptr )
    goto LABEL_35;
  v4 = *((_DWORD *)v1 + 279);
  vFFFF0FA0();
  if ( v4 )
  {
    v18 = "Deleting DB during memtable compaction";
    v19 = 38;
    v16 = &unk_257BC67;
    v17 = 0;
    j_leveldb::Status::Status(&v20, 5, (int)&v18, (int)&v16);
    v5 = ptr;
    v6 = v20;
    if ( ptr != v20 )
    {
      if ( ptr )
      {
        j_operator delete[](ptr);
        v6 = v20;
      }
      if ( v6 )
        v7 = j_leveldb::Status::CopyState((leveldb::Status *)v6, v6);
        v5 = v20;
      else
        v5 = 0;
        v7 = 0;
      ptr = v7;
    }
    if ( v5 )
      j_operator delete[](v5);
  }
  v27 = 1;
  v24 = 0;
  v25 = 0;
  HIDWORD(v8) = *((_DWORD *)v1 + 287);
  LODWORD(v8) = *((_DWORD *)v1 + 286);
  v26 = 1;
  v23 = v8;
  j_leveldb::VersionSet::LogAndApply(
    (leveldb::VersionSet *)&v15,
    *((leveldb::VersionEdit **)v1 + 319),
    (leveldb::port::Mutex *)&v22,
    (leveldb::DBImpl *)((char *)v1 + 1112));
  v9 = v15;
  if ( ptr == (void *)v15 )
    v10 = ptr;
  else
    if ( ptr )
      j_operator delete[](ptr);
      v9 = v15;
    if ( v9 )
      v3 = j_leveldb::Status::CopyState(v9, (const char *)v9);
      v10 = (void *)v15;
    else
      v10 = 0;
      v3 = 0;
    ptr = v3;
  if ( v10 )
    j_operator delete[](v10);
    v3 = ptr;
  if ( v3 )
LABEL_35:
    if ( !*((_DWORD *)v1 + 320) )
      *((_DWORD *)v1 + 320) = j_leveldb::Status::CopyState((leveldb::Status *)v3, 0);
      j_leveldb::port::CondVar::SignalAll((leveldb::DBImpl *)((char *)v1 + 1120));
    v12 = *((_DWORD *)v1 + 283);
    v13 = *(_DWORD *)(v12 + 8);
    *(_DWORD *)(v12 + 8) = v13 - 1;
    if ( v12 && v13 <= 1 )
      v14 = (void *)j_leveldb::MemTable::~MemTable((leveldb::MemTable *)v12);
      j_operator delete(v14);
    *((_DWORD *)v1 + 283) = 0;
    vFFFF0FA0();
    *((_DWORD *)v1 + 284) = 0;
    j_leveldb::DBImpl::DeleteObsoleteFiles(v1);
    j_operator delete[](ptr);
  return j_leveldb::VersionEdit::~VersionEdit((leveldb::VersionEdit *)&v22);
}


void *__fastcall leveldb::Table::NewIterator(int **a1, int a2)
{
  int **v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r0@1

  v2 = a1;
  v3 = a2;
  v4 = j_leveldb::Block::NewIterator((*a1)[278], **a1);
  return j_j_j__ZN7leveldb19NewTwoLevelIteratorEPNS_8IteratorEPFS1_PvRKNS_11ReadOptionsERKNS_5SliceEES2_S5__0(
           (int)v4,
           (int)leveldb::Table::BlockReader,
           (int)v2,
           v3);
}


const void **__fastcall leveldb::InfoLogFileName(int *a1, int *a2)
{
  int *v2; // r0@1

  v2 = sub_21E8AF4(a1, a2);
  return sub_21E7408((const void **)v2, "/LOG", 4u);
}


const void **__fastcall leveldb::FilterBlockBuilder::AddKey(int a1, __int64 *a2)
{
  int v2; // r7@1
  int v3; // r2@1
  const void **v4; // r4@1
  __int64 v5; // r8@1
  __int64 v6; // r0@1
  int v7; // r11@1
  void *v8; // r10@3
  unsigned int v9; // r2@3
  unsigned int v10; // r1@5
  unsigned int v11; // r5@5
  char *v12; // r6@11
  char *v13; // r11@13
  int v14; // r11@15

  v2 = a1;
  v4 = (const void **)(a1 + 4);
  v3 = *(_DWORD *)(a1 + 4);
  v5 = *a2;
  v6 = *(_QWORD *)(a1 + 12);
  v7 = *(_DWORD *)(v3 - 12);
  if ( (_DWORD)v6 == HIDWORD(v6) )
  {
    v8 = *(void **)(v2 + 8);
    v9 = ((signed int)v6 - (signed int)v8) >> 2;
    if ( !v9 )
      v9 = 1;
    HIDWORD(v6) = v9 + (((signed int)v6 - (signed int)v8) >> 2);
    v11 = v9 + (((signed int)v6 - (signed int)v8) >> 2);
    if ( 0 != HIDWORD(v6) >> 30 )
      v11 = 0x3FFFFFFF;
    if ( v10 < v9 )
    if ( v11 )
    {
      if ( v11 >= 0x40000000 )
        sub_21E57F4();
      v12 = (char *)j_operator new(4 * v11);
      LODWORD(v6) = *(_QWORD *)(v2 + 8) >> 32;
      v8 = (void *)*(_QWORD *)(v2 + 8);
    }
    else
      v12 = 0;
    *(_DWORD *)&v12[v6 - (_DWORD)v8] = v7;
    v13 = &v12[v6 - (_DWORD)v8];
    if ( 0 != ((signed int)v6 - (signed int)v8) >> 2 )
      j___aeabi_memmove4_0((int)v12, (int)v8);
    v14 = (int)(v13 + 4);
    if ( v8 )
      j_operator delete(v8);
    *(_DWORD *)(v2 + 8) = v12;
    *(_DWORD *)(v2 + 12) = v14;
    *(_DWORD *)(v2 + 16) = &v12[4 * v11];
  }
  else
    *(_DWORD *)v6 = v7;
    *(_DWORD *)(v2 + 12) = v6 + 4;
  return sub_21E7408(v4, (char *)v5, HIDWORD(v5));
}


leveldb::log::Reader *__fastcall leveldb::log::Reader::~Reader(leveldb::log::Reader *this)
{
  leveldb::log::Reader *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  v2 = (void *)*((_DWORD *)this + 3);
  if ( v2 )
    j_operator delete[](v2);
  return v1;
}


int __fastcall leveldb::DBImpl::NewIterator(int a1, int a2)
{
  unsigned __int64 *v2; // r6@1
  int v3; // r4@1
  int v4; // r5@1
  leveldb::Iterator *v5; // r2@1
  int v6; // r0@1
  leveldb::Iterator *v8; // [sp+Ch] [bp-1Ch]@1
  char v9; // [sp+10h] [bp-18h]@1

  v2 = (unsigned __int64 *)&v9;
  v3 = a2;
  v4 = a1;
  v5 = j_leveldb::DBImpl::NewInternalIterator(a1, a2, &v9, (int *)&v8);
  v6 = *(_DWORD *)(v3 + 4);
  if ( v6 )
    v2 = (unsigned __int64 *)(v6 + 8);
  return j_leveldb::NewDBIterator((leveldb *)v4, *(leveldb::DBImpl **)(v4 + 12), v5, v8, *v2, (unsigned int)v8);
}


int __fastcall leveldb::EncodeFixed64(int result, char *a2, unsigned __int64 a3)
{
  *(_QWORD *)result = a3;
  return result;
}


void *__fastcall leveldb::VersionSet::PickCompaction(leveldb::VersionSet *this)
{
  leveldb::VersionSet *v1; // r9@1
  void *v7; // r6@4
  int v8; // r0@4
  signed int v9; // r0@4
  int v10; // r8@2
  void *v11; // r5@2
  int v12; // r0@2
  int v13; // r7@2
  signed int v14; // r0@2
  int v15; // r4@2
  int v16; // r0@5
  int v17; // r6@5
  int *v18; // r10@6
  int v19; // r7@6
  unsigned int v20; // r9@6
  int v21; // r1@7
  int v22; // r8@7
  __int64 v23; // r0@11
  signed int v24; // r3@14
  unsigned int v25; // r2@14
  unsigned int v26; // r3@16
  unsigned int v27; // r11@16
  char *v28; // r10@22
  char *v29; // r7@24
  int v30; // r8@25
  int v31; // r0@31
  char *v32; // r0@32
  char *v33; // r0@33
  unsigned int *v35; // r2@36
  signed int v36; // r1@38
  unsigned int *v37; // r2@40
  signed int v38; // r1@42
  int v39; // [sp+4h] [bp-4Ch]@6
  _DWORD *v40; // [sp+8h] [bp-48h]@6
  leveldb::VersionSet *v41; // [sp+Ch] [bp-44h]@6
  char *v42; // [sp+10h] [bp-40h]@32
  char *v43; // [sp+14h] [bp-3Ch]@32
  int v44; // [sp+18h] [bp-38h]@8
  int v45; // [sp+1Ch] [bp-34h]@8
  int v46; // [sp+20h] [bp-30h]@8
  int v47; // [sp+24h] [bp-2Ch]@8

  v1 = this;
  __asm { VMOV.F64        D0, #1.0 }
  _R0 = *((_DWORD *)this + 50);
  __asm
  {
    VLDR            D1, [R0,#0x70]
    VCMPE.F64       D1, D0
    VMRS            APSR_nzcv, FPSCR
  }
  if ( _NF ^ _VF )
    v11 = 0;
    if ( !*(_DWORD *)(_R0 + 100) )
      return v11;
    v10 = *(_DWORD *)(_R0 + 104);
    v7 = j_operator new(0xD0u);
    v8 = *((_DWORD *)v1 + 2);
    *(_DWORD *)v7 = v10;
    v9 = *(_DWORD *)(v8 + 36);
    *((_DWORD *)v7 + 2) = v9;
    *((_DWORD *)v7 + 3) = v9 >> 31;
    *((_DWORD *)v7 + 4) = 0;
    *((_DWORD *)v7 + 6) = &unk_28898CC;
    *((_DWORD *)v7 + 18) = 0;
    *((_DWORD *)v7 + 19) = 0;
    *((_DWORD *)v7 + 20) = 0;
    *((_DWORD *)v7 + 23) = 0;
    *((_DWORD *)v7 + 24) = 0;
    *((_DWORD *)v7 + 25) = 0;
    *((_DWORD *)v7 + 26) = 0;
    *((_DWORD *)v7 + 22) = 0;
    *((_DWORD *)v7 + 24) = (char *)v7 + 88;
    *((_DWORD *)v7 + 25) = (char *)v7 + 88;
    *((_DWORD *)v7 + 27) = 0;
    *((_DWORD *)v7 + 28) = 0;
    *((_DWORD *)v7 + 29) = 0;
    j_leveldb::VersionEdit::Clear((leveldb::VersionEdit *)((char *)v7 + 24));
    j___aeabi_memclr8_0((int)v7 + 168, 36);
    j___aeabi_memclr4_0((int)v7 + 120, 41);
    j_std::vector<leveldb::FileMetaData *,std::allocator<leveldb::FileMetaData *>>::push_back(
      (int)v7 + 120,
      (int *)(*((_DWORD *)v1 + 50) + 100));
    v11 = v7;
  else
    v10 = *(_DWORD *)(_R0 + 120);
    v11 = j_operator new(0xD0u);
    v12 = *((_DWORD *)v1 + 2);
    v13 = 0;
    *(_DWORD *)v11 = v10;
    v14 = *(_DWORD *)(v12 + 36);
    *((_DWORD *)v11 + 2) = v14;
    *((_DWORD *)v11 + 3) = v14 >> 31;
    *((_DWORD *)v11 + 4) = 0;
    *((_DWORD *)v11 + 6) = &unk_28898CC;
    *((_DWORD *)v11 + 18) = 0;
    *((_DWORD *)v11 + 19) = 0;
    *((_DWORD *)v11 + 20) = 0;
    *((_DWORD *)v11 + 23) = 0;
    *((_DWORD *)v11 + 24) = 0;
    *((_DWORD *)v11 + 25) = 0;
    *((_DWORD *)v11 + 26) = 0;
    *((_DWORD *)v11 + 22) = 0;
    *((_DWORD *)v11 + 24) = (char *)v11 + 88;
    *((_DWORD *)v11 + 25) = (char *)v11 + 88;
    *((_DWORD *)v11 + 27) = 0;
    *((_DWORD *)v11 + 28) = 0;
    *((_DWORD *)v11 + 29) = 0;
    j_leveldb::VersionEdit::Clear((leveldb::VersionEdit *)((char *)v11 + 24));
    j___aeabi_memclr8_0((int)v11 + 168, 36);
    v15 = (int)v11 + 120;
    j___aeabi_memclr4_0((int)v11 + 120, 41);
    v16 = *((_DWORD *)v1 + 50);
    v17 = 3 * v10;
    if ( *(_QWORD *)(v16 + 12 * v10 + 16) >> 32 != (unsigned int)*(_QWORD *)(v16 + 12 * v10 + 16) )
    {
      v40 = (char *)v11 + 120;
      v39 = v10;
      v18 = (int *)((char *)v1 + 4 * v10 + 204);
      v19 = (int)v1 + 16;
      v41 = v1;
      v20 = 0;
      while ( 1 )
      {
        v21 = *v18;
        v22 = *(_DWORD *)(*(_DWORD *)(v16 + 4 * v17 + 16) + 4 * v20);
        if ( !*(_DWORD *)(*v18 - 12) )
          break;
        v46 = *(_DWORD *)(v22 + 28);
        v47 = *(_DWORD *)(v46 - 12);
        v44 = v21;
        v45 = *(_DWORD *)(v21 - 12);
        if ( j_leveldb::InternalKeyComparator::Compare(v19, (unsigned __int64 *)&v46, (unsigned __int64 *)&v44) >= 1 )
        ++v20;
        v16 = *((_DWORD *)v41 + 50);
        if ( v20 >= (signed int)((*(_QWORD *)(v16 + 4 * v17 + 16) >> 32) - *(_QWORD *)(v16 + 4 * v17 + 16)) >> 2 )
        {
          v13 = *((_DWORD *)v11 + 31);
LABEL_13:
          v1 = v41;
          v15 = (int)v11 + 120;
          v10 = v39;
          goto LABEL_29;
        }
      }
      v23 = *(_QWORD *)((char *)v11 + 124);
      if ( (_DWORD)v23 != HIDWORD(v23) )
        *(_DWORD *)v23 = v22;
        v13 = *((_DWORD *)v11 + 31) + 4;
        *((_DWORD *)v11 + 31) = v13;
        goto LABEL_13;
      v15 = (int)v11 + 120;
      HIDWORD(v23) = *v40;
      v24 = v23 - *v40;
      v25 = v24 >> 2;
      if ( !(v24 >> 2) )
        v25 = 1;
      v26 = v25 + (v24 >> 2);
      v27 = v26;
      if ( 0 != v26 >> 30 )
        v27 = 0x3FFFFFFF;
      if ( v26 < v25 )
      if ( v27 )
        if ( v27 >= 0x40000000 )
          sub_21E57F4();
        v28 = (char *)j_operator new(4 * v27);
        LODWORD(v23) = *((_QWORD *)v11 + 15) >> 32;
        HIDWORD(v23) = *((_QWORD *)v11 + 15);
      else
        v28 = 0;
      v29 = &v28[v23 - HIDWORD(v23)];
      *(_DWORD *)v29 = v22;
      if ( 0 != ((signed int)v23 - HIDWORD(v23)) >> 2 )
        v30 = HIDWORD(v23);
        j___aeabi_memmove4_0((int)v28, SHIDWORD(v23));
        HIDWORD(v23) = v30;
      v13 = (int)(v29 + 4);
      v1 = v41;
      v10 = v39;
      if ( HIDWORD(v23) )
        j_operator delete((void *)HIDWORD(v23));
      *((_DWORD *)v11 + 30) = v28;
      *((_DWORD *)v11 + 31) = v13;
      *((_DWORD *)v11 + 32) = &v28[4 * v27];
    }
LABEL_29:
    if ( *((_DWORD *)v11 + 30) == v13 )
      j_std::vector<leveldb::FileMetaData *,std::allocator<leveldb::FileMetaData *>>::push_back(
        v15,
        *(int **)(*((_DWORD *)v1 + 50) + 4 * v17 + 16));
  v31 = *((_DWORD *)v1 + 50);
  *((_DWORD *)v11 + 4) = v31;
  ++*(_DWORD *)(v31 + 12);
  if ( !v10 )
    v42 = (char *)&unk_28898CC;
    v43 = (char *)&unk_28898CC;
    j_leveldb::VersionSet::GetRange((int)v1, (__int64 *)v11 + 15, (const void **)&v43, (const void **)&v42);
    j_leveldb::Version::GetOverlappingInputs(*((int **)v1 + 50), 0, (int *)&v43, (void **)&v42, (int)v11 + 120);
    v32 = v42 - 12;
    if ( (int *)(v42 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v42 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j__ZdlPv_9(v32);
    v33 = v43 - 12;
    if ( (int *)(v43 - 12) != &dword_28898C0 )
      v37 = (unsigned int *)(v43 - 4);
          v38 = __ldrex(v37);
        while ( __strex(v38 - 1, v37) );
        v38 = (*v37)--;
      if ( v38 <= 0 )
        j_j_j_j__ZdlPv_9(v33);
  j_leveldb::VersionSet::SetupOtherInputs(v1, (leveldb::Compaction *)v11);
  return v11;
}


RakNet *__fastcall leveldb::DBImpl::Recover(leveldb::DBImpl *this, leveldb::VersionEdit *a2, bool *a3, bool *a4)
{
  leveldb::DBImpl *v4; // r11@1
  leveldb::VersionEdit *v5; // r6@1
  bool *v6; // r9@1
  int *v7; // r10@1
  bool *v8; // r8@1
  int v9; // r5@3
  void (__fastcall *v10)(leveldb::Status **, int, leveldb::Status **, char *); // r7@3
  leveldb::Status *v11; // r1@3
  char *v12; // r0@3
  leveldb::Status *v13; // r0@4
  int v14; // r4@5
  int (__fastcall *v15)(int, int *); // r7@5
  int v16; // r5@5
  void *v17; // r0@5
  int *v18; // r2@8
  int *v19; // r3@8
  leveldb::Status *v20; // r1@10
  unsigned int *v21; // r2@17
  leveldb::Status *v22; // r1@31
  RakNet *result; // r0@45
  int v24; // r1@47
  leveldb::Status *v25; // r1@47
  leveldb::Status *v26; // r0@47
  leveldb::Status *v27; // r1@51
  unsigned int *v28; // r2@52
  signed int v29; // r1@54
  int v30; // r0@67
  __int64 *v31; // r7@68
  int v32; // r5@68
  unsigned int v33; // r4@68
  unsigned int v34; // r0@71
  unsigned int v35; // r7@71
  signed int v36; // r2@71
  signed int v37; // r3@71
  void *v38; // r1@81
  int v39; // r12@81
  signed int v40; // r3@81
  unsigned int v41; // r2@81
  unsigned int v42; // lr@83
  unsigned int v43; // r3@83
  unsigned int v44; // r7@89
  void *v45; // r0@89
  int v46; // r0@90
  int v47; // r7@91
  int v48; // r7@93
  __int64 v49; // r2@98
  void *v50; // r0@98
  unsigned int *v51; // r2@99
  signed int v52; // r1@101
  unsigned int v53; // r4@103
  unsigned __int64 *v54; // r10@106
  unsigned int v55; // r7@106
  int v56; // r0@107
  leveldb::Status *v57; // r1@109
  leveldb::Status *v58; // r0@109
  leveldb::Status *v59; // r1@113
  int v60; // r0@121
  int v61; // r0@121
  unsigned int v62; // t1@121
  unsigned int v63; // r6@121
  signed int v64; // r7@121
  bool v65; // cf@123
  bool v66; // zf@123
  signed int v67; // r6@123
  void *v68; // r4@134
  void *v69; // r6@134
  unsigned int *v70; // r2@136
  signed int v71; // r1@138
  int *v72; // r0@144
  int v73; // [sp+18h] [bp-108h]@68
  unsigned int v74; // [sp+18h] [bp-108h]@90
  __int64 ptr; // [sp+1Ch] [bp-104h]@67
  __int64 v76; // [sp+24h] [bp-FCh]@47
  unsigned int v77; // [sp+2Ch] [bp-F4h]@47
  unsigned int v78; // [sp+30h] [bp-F0h]@47
  leveldb::Status *v79; // [sp+34h] [bp-ECh]@109
  int v80; // [sp+38h] [bp-E8h]@98
  int v81; // [sp+3Ch] [bp-E4h]@98
  int v82; // [sp+40h] [bp-E0h]@98
  char *v83; // [sp+44h] [bp-DCh]@98
  size_t v84; // [sp+48h] [bp-D8h]@98
  int v85; // [sp+4Ch] [bp-D4h]@69
  unsigned int v86; // [sp+50h] [bp-D0h]@68
  unsigned int v87; // [sp+54h] [bp-CCh]@71
  char v88; // [sp+58h] [bp-C8h]@67
  int v89; // [sp+5Ch] [bp-C4h]@67
  int v90; // [sp+60h] [bp-C0h]@67
  int *v91; // [sp+64h] [bp-BCh]@67
  int *v92; // [sp+68h] [bp-B8h]@67
  int v93; // [sp+6Ch] [bp-B4h]@67
  leveldb::Status *v94; // [sp+70h] [bp-B0h]@47
  _BYTE *v95; // [sp+74h] [bp-ACh]@47
  _BYTE *v96; // [sp+78h] [bp-A8h]@47
  int v97; // [sp+7Ch] [bp-A4h]@47
  unsigned __int64 v98; // [sp+80h] [bp-A0h]@47
  leveldb::Status *v99; // [sp+88h] [bp-98h]@31
  const char *v100; // [sp+8Ch] [bp-94h]@8
  int v101; // [sp+90h] [bp-90h]@8
  int v102; // [sp+94h] [bp-8Ch]@8
  int v103; // [sp+98h] [bp-88h]@8
  const char *v104; // [sp+9Ch] [bp-84h]@15
  int v105; // [sp+A0h] [bp-80h]@15
  int v106; // [sp+A4h] [bp-7Ch]@15
  int v107; // [sp+A8h] [bp-78h]@15
  leveldb::Status *v108; // [sp+ACh] [bp-74h]@10
  int v109; // [sp+B0h] [bp-70h]@5
  leveldb::Status *v110; // [sp+B4h] [bp-6Ch]@3
  leveldb::Status *v111; // [sp+B8h] [bp-68h]@3
  void *v112; // [sp+BCh] [bp-64h]@1
  char s; // [sp+C4h] [bp-5Ch]@98
  RakNet *v114; // [sp+F8h] [bp-28h]@1

  v4 = this;
  v5 = a2;
  v6 = a4;
  v7 = (int *)((char *)a2 + 1100);
  v8 = a3;
  v114 = _stack_chk_guard;
  (*(void (__fastcall **)(void **))(**((_DWORD **)a2 + 1) + 36))(&v112);
  if ( v112 )
    j_operator delete[](v112);
  v9 = *((_DWORD *)v5 + 1);
  v10 = *(void (__fastcall **)(leveldb::Status **, int, leveldb::Status **, char *))(*(_DWORD *)v9 + 52);
  j_leveldb::LockFileName((int *)&v110, v7);
  v10(&v111, v9, &v110, (char *)v5 + 1108);
  v11 = v110;
  v12 = (char *)v110 - 12;
  if ( (int *)((char *)v110 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)((char *)v110 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v11 = (leveldb::Status *)__ldrex(v21);
      while ( __strex((unsigned int)v11 - 1, v21) );
    }
    else
      v11 = (leveldb::Status *)(*v21)--;
    if ( (signed int)v11 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  }
  v13 = v111;
  if ( v111 )
    goto LABEL_42;
  v14 = *((_DWORD *)v5 + 1);
  v15 = *(int (__fastcall **)(int, int *))(*(_DWORD *)v14 + 24);
  j_leveldb::CurrentFileName(&v109, v7);
  v16 = v15(v14, &v109);
  v17 = (void *)(v109 - 12);
  if ( (int *)(v109 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v109 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v17);
  if ( v16 )
    if ( *((_BYTE *)v5 + 29) )
      v18 = &v102;
      v102 = *v7;
      v19 = (int *)&v100;
      v103 = *(_DWORD *)(v102 - 12);
      v100 = "exists (error_if_exists is true)";
      v101 = 32;
LABEL_16:
      j_leveldb::Status::Status(v4, 4, (int)v18, (int)v19);
      goto LABEL_43;
  else
    if ( !*((_BYTE *)v5 + 28) )
      v18 = &v106;
      v106 = *v7;
      v19 = (int *)&v104;
      v107 = *(_DWORD *)(v106 - 12);
      v104 = "does not exist (create_if_missing is false)";
      v105 = 43;
      goto LABEL_16;
    j_leveldb::DBImpl::NewDB((leveldb::DBImpl *)&v108, (int)v5);
    v20 = v108;
    v13 = v111;
    if ( v111 == v108 )
      v11 = v111;
      if ( v111 )
      {
        j_operator delete[]((void *)v111);
        v20 = v108;
      }
      if ( v20 )
        v13 = (leveldb::Status *)j_leveldb::Status::CopyState(v20, (const char *)v20);
        v11 = v108;
      else
        v11 = 0;
        v13 = 0;
      v111 = v13;
    if ( v11 )
      j_operator delete[]((void *)v11);
      v13 = v111;
    if ( v13 )
      goto LABEL_42;
  j_leveldb::VersionSet::Recover((leveldb::VersionSet *)&v99, *((bool **)v5 + 319), v6);
  v22 = v99;
  if ( v111 == v99 )
    v11 = v111;
    if ( v111 )
      j_operator delete[]((void *)v111);
      v22 = v99;
    if ( v22 )
      v13 = (leveldb::Status *)j_leveldb::Status::CopyState(v22, (const char *)v22);
      v11 = v99;
      v11 = 0;
      v13 = 0;
    v111 = v13;
  if ( v11 )
    j_operator delete[]((void *)v11);
  if ( v13 )
LABEL_42:
    *(_DWORD *)v4 = j_leveldb::Status::CopyState(v13, (const char *)v11);
    goto LABEL_43;
  v98 = 0LL;
  v24 = *((_DWORD *)v5 + 319);
  v78 = *(_DWORD *)(v24 + 48);
  v77 = *(_DWORD *)(v24 + 52);
  HIDWORD(v76) = *(_DWORD *)(v24 + 56);
  LODWORD(v76) = *(_DWORD *)(v24 + 60);
  v95 = 0;
  v96 = 0;
  v97 = 0;
  (*(void (__fastcall **)(leveldb::Status **))(**((_DWORD **)v5 + 1) + 28))(&v94);
  v25 = v94;
  v26 = v111;
  if ( v111 == v94 )
    v27 = v111;
      v25 = v94;
    if ( v25 )
      v26 = (leveldb::Status *)j_leveldb::Status::CopyState(v25, (const char *)v25);
      v27 = v94;
      v27 = 0;
      v26 = 0;
    v111 = v26;
  if ( v27 )
    j_operator delete[]((void *)v27);
    v26 = v111;
  if ( v26 )
    *(_DWORD *)v4 = j_leveldb::Status::CopyState(v26, (const char *)v27);
    v93 = 0;
    v89 = 0;
    v90 = 0;
    ptr = 0LL;
    v91 = &v89;
    v92 = &v89;
    j_leveldb::VersionSet::AddLiveFiles(*((_DWORD *)v5 + 319), (int)&v88);
    v30 = (int)v95;
    if ( v96 != v95 )
      v31 = (__int64 *)&v86;
      v73 = 0;
      v32 = 0;
      v33 = 0;
      HIDWORD(ptr) = 0;
        if ( j_leveldb::ParseFileName((const void **)(v30 + v32), (int)v31, &v85) == 1 )
        {
          j_std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::erase(
            (int)&v88,
            v31);
          if ( !v85 )
          {
            v35 = v87;
            v34 = v86;
            v36 = 0;
            v37 = 0;
            if ( v86 >= v78 )
              v36 = 1;
            if ( v87 >= v77 )
              v37 = 1;
            if ( v87 == v77 )
              v37 = v36;
            if ( v37 || v76 == __PAIR__(v86, v87) )
            {
              if ( HIDWORD(ptr) == v73 )
              {
                v38 = (void *)ptr;
                v39 = 0;
                v40 = HIDWORD(ptr) - ptr;
                v41 = (HIDWORD(ptr) - (signed int)ptr) >> 3;
                HIDWORD(ptr) = (HIDWORD(ptr) - (signed int)ptr) >> 3;
                if ( !(v40 >> 3) )
                  v41 = 1;
                v43 = v41 + (v40 >> 3);
                v42 = v43;
                if ( 0 != v43 >> 29 )
                  v43 = 0x1FFFFFFF;
                if ( v42 < v41 )
                if ( v43 )
                {
                  if ( v43 >= 0x20000000 )
                    sub_21E57F4();
                  v44 = v43;
                  v45 = j_operator new(8 * v43);
                  v43 = v44;
                  v39 = (int)v45;
                  v35 = v87;
                  v34 = v86;
                  v38 = (void *)ptr;
                }
                v74 = v43;
                *(_DWORD *)(v39 + 8 * HIDWORD(ptr)) = v34;
                v46 = v39 + 8 * HIDWORD(ptr);
                *(_DWORD *)(v46 + 4) = v35;
                if ( HIDWORD(ptr) )
                  v47 = v39;
                  HIDWORD(ptr) = v39 + 8 * HIDWORD(ptr);
                  j___aeabi_memmove8(v39, (int)v38);
                  v46 = HIDWORD(ptr);
                  v39 = v47;
                HIDWORD(ptr) = v46 + 8;
                if ( v38 )
                  v48 = v39;
                  j_operator delete(v38);
                  v39 = v48;
                v73 = v39 + 8 * v74;
                LODWORD(ptr) = v39;
              }
              else
                *(_DWORD *)HIDWORD(ptr) = v86;
                *(_DWORD *)(HIDWORD(ptr) + 4) = v35;
                HIDWORD(ptr) += 8;
            }
            v31 = (__int64 *)&v86;
          }
        }
        v30 = (int)v95;
        v32 += 4;
        ++v33;
      while ( v33 < (v96 - v95) >> 2 );
    if ( v93 )
      j_snprintf(&s, 0x32u, "%d missing files; e.g.");
      v83 = &s;
      v84 = j_strlen_0(&s);
      v49 = *((_QWORD *)v91 + 2);
      j_leveldb::TableFileName(&v80, v7);
      v81 = v80;
      v82 = *(_DWORD *)(v80 - 12);
      j_leveldb::Status::Status(v4, 2, (int)&v83, (int)&v81);
      v50 = (void *)(v80 - 12);
      if ( (int *)(v80 - 12) != &dword_28898C0 )
        v51 = (unsigned int *)(v80 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
        else
          v52 = (*v51)--;
        if ( v52 <= 0 )
          j_j_j_j__ZdlPv_9(v50);
      v53 = (HIDWORD(ptr) - (signed int)ptr) >> 3;
      if ( HIDWORD(ptr) != (_DWORD)ptr )
        j_std::__introsort_loop<__gnu_cxx::__normal_iterator<unsigned long long *,std::vector<unsigned long long,std::allocator<unsigned long long>>>,int,__gnu_cxx::__ops::_Iter_less_iter>(
          ptr,
          SHIDWORD(ptr),
          2 * (31 - __clz(v53)));
        j_std::__final_insertion_sort<__gnu_cxx::__normal_iterator<unsigned long long *,std::vector<unsigned long long,std::allocator<unsigned long long>>>,__gnu_cxx::__ops::_Iter_less_iter>(ptr);
      if ( v53 )
        v54 = (unsigned __int64 *)ptr;
        v55 = 0;
        while ( 1 )
          v56 = 0;
          if ( v53 - 1 == v55 )
            v56 = 1;
          j_leveldb::DBImpl::RecoverLogFile(
            (leveldb::DBImpl *)&v79,
            v5,
            *v54,
            v56,
            v6,
            (leveldb::VersionEdit *)v8,
            &v98);
          v57 = v79;
          v58 = v111;
          if ( v111 == v79 )
            v59 = v111;
          else
            if ( v111 )
              j_operator delete[]((void *)v111);
              v57 = v79;
            if ( v57 )
              v58 = (leveldb::Status *)j_leveldb::Status::CopyState(v57, (const char *)v57);
              v59 = v79;
            else
              v59 = 0;
              v58 = 0;
            v111 = v58;
          if ( v59 )
            j_operator delete[]((void *)v59);
            v58 = v111;
          if ( v58 )
            break;
          j_leveldb::VersionSet::MarkFileNumberUsed(*((leveldb::VersionSet **)v5 + 319), (int)v59, *v54);
          ++v55;
          ++v54;
          if ( v55 >= v53 )
            goto LABEL_121;
        *(_DWORD *)v4 = j_leveldb::Status::CopyState(v58, (const char *)v59);
LABEL_121:
        v60 = *((_DWORD *)v5 + 319);
        v62 = *(_DWORD *)(v60 + 40);
        v61 = v60 + 40;
        v63 = *(_DWORD *)(v61 + 4);
        v64 = 0;
        if ( v62 >= (unsigned int)v98 )
          v64 = 1;
        v65 = v63 >= HIDWORD(v98);
        v66 = v63 == HIDWORD(v98);
        v67 = 0;
        if ( v65 )
          v67 = 1;
        if ( v66 )
          v67 = v64;
        if ( !v67 )
          *(_QWORD *)v61 = v98;
        *(_DWORD *)v4 = 0;
    if ( (_DWORD)ptr )
      j_operator delete((void *)ptr);
    j_std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::_M_erase(
      (int)&v88,
      v90);
  v69 = v96;
  v68 = v95;
  if ( v95 != v96 )
    do
      v72 = (int *)(*(_DWORD *)v68 - 12);
      if ( v72 != &dword_28898C0 )
        v70 = (unsigned int *)(*(_DWORD *)v68 - 4);
            v71 = __ldrex(v70);
          while ( __strex(v71 - 1, v70) );
          v71 = (*v70)--;
        if ( v71 <= 0 )
          j_j_j_j__ZdlPv_9(v72);
      v68 = (char *)v68 + 4;
    while ( v68 != v69 );
    v68 = v95;
  if ( v68 )
    j_operator delete(v68);
LABEL_43:
    j_operator delete[]((void *)v111);
  result = (RakNet *)(_stack_chk_guard - v114);
  if ( _stack_chk_guard != v114 )
    j___stack_chk_fail_0((int)result);
  return result;
}


leveldb::port::Mutex *__fastcall leveldb::port::Mutex::Mutex(leveldb::port::Mutex *this)
{
  leveldb::port::Mutex *v1; // r4@1
  int v2; // r0@1
  char *v4; // r0@3

  v1 = this;
  v2 = j_pthread_mutex_init((pthread_mutex_t *)this, 0);
  if ( v2 )
  {
    v4 = j_strerror(v2);
    j_fprintf((FILE *)((char *)&_sF + 168), "pthread %s: %s\n", "init mutex", v4);
    j_abort();
  }
  return v1;
}


int __fastcall leveldb::MemTable::NewIterator(leveldb::MemTable *this)
{
  leveldb::MemTable *v1; // r4@1
  leveldb::Iterator *v2; // r0@1
  int result; // r0@1

  v1 = this;
  v2 = (leveldb::Iterator *)j_operator new(0x20u);
  result = j_leveldb::Iterator::Iterator(v2);
  *(_DWORD *)result = &off_2725C4C;
  *(_DWORD *)(result + 20) = (char *)v1 + 36;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = &unk_28898CC;
  return result;
}


const void **__fastcall leveldb::PutFixed64(const void **a1, int a2, __int64 a3)
{
  __int64 v4; // [sp+0h] [bp-10h]@1

  v4 = a3;
  return sub_21E7408(a1, (char *)&v4, 8u);
}


int __fastcall leveldb::port::AcceleratedCRC32C(leveldb::port *this, unsigned int a2, const char *a3, unsigned int a4)
{
  return 0;
}


void __fastcall leveldb::Version::LevelFileNumIterator::~LevelFileNumIterator(leveldb::Version::LevelFileNumIterator *this)
{
  leveldb::Iterator *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_2725C94;
  j_leveldb::Comparator::~Comparator((leveldb::Version::LevelFileNumIterator *)((char *)this + 20));
  j_leveldb::Iterator::~Iterator(v1);
  j_j_j__ZdlPv_7((void *)v1);
}


RakNet *__fastcall leveldb::ParsedInternalKey::DebugString(leveldb::ParsedInternalKey *this, int a2)
{
  void **v2; // r4@1
  unsigned __int64 *v3; // r5@1
  int v4; // ST00_4@1
  void *v5; // r0@1
  void *v6; // r0@2
  unsigned int v7; // r0@3
  RakNet *result; // r0@3
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  int v13; // [sp+Ch] [bp-5Ch]@1
  int v14; // [sp+10h] [bp-58h]@1
  int v15; // [sp+14h] [bp-54h]@1
  int v16; // [sp+18h] [bp-50h]@1
  char s; // [sp+22h] [bp-46h]@1
  RakNet *v18; // [sp+54h] [bp-14h]@1

  v2 = (void **)this;
  v3 = (unsigned __int64 *)a2;
  v18 = _stack_chk_guard;
  v4 = *(_DWORD *)(a2 + 8);
  j_snprintf(&s, 0x32u, "' @ %llu : %d");
  sub_21E94B4(v2, "'");
  sub_21E91E0((void **)&v13, *v3, *v3 >> 32);
  v14 = v13;
  v15 = *(_DWORD *)(v13 - 12);
  j_leveldb::EscapeString((const void **)&v16, (int)&v14);
  sub_21E72F0((const void **)v2, (const void **)&v16);
  v5 = (void *)(v16 - 12);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = (void *)(v13 - 12);
  if ( (int *)(v13 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v13 - 4);
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  v7 = j_strlen_0(&s);
  sub_21E7408((const void **)v2, &s, v7);
  result = (RakNet *)(_stack_chk_guard - v18);
  if ( _stack_chk_guard != v18 )
    j___stack_chk_fail_0((int)result);
  return result;
}


int __fastcall leveldb::BlockBuilder::Finish(leveldb::BlockBuilder *this, int a2)
{
  int v2; // r5@1
  leveldb::BlockBuilder *v3; // r4@1
  __int64 v4; // r0@1
  unsigned int v5; // r7@1
  int v6; // r0@4
  int result; // r0@4

  v2 = a2;
  v3 = this;
  v4 = *(_QWORD *)(a2 + 8);
  v5 = 0;
  if ( HIDWORD(v4) != (_DWORD)v4 )
  {
    do
    {
      j_leveldb::PutFixed32((const void **)(v2 + 4), *(_DWORD *)(v4 + 4 * v5));
      v4 = *(_QWORD *)(v2 + 8);
      ++v5;
      HIDWORD(v4) -= v4;
    }
    while ( v5 < SHIDWORD(v4) >> 2 );
    v5 = SHIDWORD(v4) >> 2;
  }
  j_leveldb::PutFixed32((const void **)(v2 + 4), v5);
  *(_BYTE *)(v2 + 24) = 1;
  v6 = *(_DWORD *)(v2 + 4);
  *(_DWORD *)v3 = v6;
  result = *(_DWORD *)(v6 - 12);
  *((_DWORD *)v3 + 1) = result;
  return result;
}


RakNet *__fastcall leveldb::ZlibCompressorBase::compressImpl(int a1, int a2, unsigned int a3, const void **a4)
{
  int v4; // r7@1
  const void **v5; // r4@1
  unsigned int v6; // r5@1
  int v7; // r9@1
  int v8; // r6@1
  unsigned int v9; // r0@1
  int v10; // r3@1
  int v11; // r2@5
  int v12; // r2@8
  int v13; // r2@10
  int v14; // r1@10
  RakNet *result; // r0@10
  RakNet *v16; // [sp+14h] [bp-20064h]@1
  int v17; // [sp+18h] [bp-20060h]@1
  unsigned int v18; // [sp+1Ch] [bp-2005Ch]@1
  char *v19; // [sp+24h] [bp-20054h]@1
  int v20; // [sp+28h] [bp-20050h]@1
  int v21; // [sp+38h] [bp-20040h]@1
  int v22; // [sp+3Ch] [bp-2003Ch]@1
  char v23; // [sp+50h] [bp-20028h]@1
  int v24; // [sp+20050h] [bp-28h]@5

  v4 = a1;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  v16 = _stack_chk_guard;
  v8 = *((_DWORD *)*a4 - 3);
  v9 = j_j_compressBound(a3);
  sub_21E6FCC(v5, v9 + v8);
  v21 = 0;
  v22 = 0;
  v17 = v7;
  v18 = v6;
  v19 = &v23;
  v20 = 0x20000;
  v10 = 15;
  if ( *(_BYTE *)(v4 + 32) )
    v10 = -15;
  j_j_deflateInit2_((int)&v17, *(_DWORD *)(v4 + 28), 8, v10, 8, 0, "1.2.8", 56);
  while ( v18 )
  {
    j_j_deflate((int)&v17, 0);
    if ( !v20 )
    {
      v11 = (int)*v5 + *((_DWORD *)*v5 - 3);
      j_std::string::_M_replace_dispatch<unsigned char *>(v5, v11, v11, (int)&v23, (int)&v24);
      v19 = &v23;
      v20 = 0x20000;
    }
  }
  do
      v12 = (int)*v5 + *((_DWORD *)*v5 - 3);
      j_std::string::_M_replace_dispatch<unsigned char *>(v5, v12, v12, (int)&v23, (int)&v24);
  while ( !j_j_deflate((int)&v17, 4u) );
  v13 = (int)*v5 + *((_DWORD *)*v5 - 3);
  j_std::string::_M_replace_dispatch<unsigned char *>(v5, v13, v13, (int)&v23, (int)(&v23 + -v20 + 0x20000));
  j_j_deflateEnd((int)&v17, v14);
  result = (RakNet *)(_stack_chk_guard - v16);
  if ( _stack_chk_guard != v16 )
    j___stack_chk_fail_0((int)result);
  return result;
}


signed int __fastcall leveldb::Compaction::IsBaseLevelForKey(int a1, int a2)
{
  int v2; // r11@1
  int v3; // r5@1
  int v4; // r2@2
  int v5; // r6@2
  int v6; // r8@4
  int v7; // r7@4
  int v8; // r3@4
  int v9; // r7@4
  int v10; // t1@4
  int v11; // r2@4
  unsigned int v12; // r1@4
  unsigned int *v13; // r8@4
  unsigned int v14; // t1@4
  int v15; // r9@7
  int (__fastcall *v16)(int, int, int *); // r3@7
  int v17; // r0@7
  int (__fastcall *v18)(int, int, int *); // r3@8
  int v19; // r0@8
  int v21; // [sp+0h] [bp-38h]@1
  int v22; // [sp+4h] [bp-34h]@8
  int v23; // [sp+8h] [bp-30h]@8
  int v24; // [sp+Ch] [bp-2Ch]@7
  int v25; // [sp+10h] [bp-28h]@7

  v2 = a2;
  v21 = a1;
  v3 = *(_DWORD *)a1 + 2;
  if ( v3 <= 6 )
  {
    v4 = *(_DWORD *)(a1 + 16);
    v5 = *(_DWORD *)(*(_DWORD *)v4 + 20);
    while ( 2 )
    {
      v6 = a1 + 4 * v3;
      v7 = v4 + 12 * v3;
      v10 = *(_DWORD *)(v7 + 16);
      v9 = v7 + 16;
      v8 = v10;
      v11 = *(_DWORD *)(v9 + 4);
      v14 = *(_DWORD *)(v6 + 176);
      v13 = (unsigned int *)(v6 + 176);
      v12 = v14;
      while ( v12 < (v11 - v8) >> 2 )
      {
        v15 = *(_DWORD *)(v8 + 4 * v12);
        v16 = *(int (__fastcall **)(int, int, int *))(*(_DWORD *)v5 + 8);
        v17 = *(_DWORD *)(*(_DWORD *)(v15 + 28) - 12);
        v24 = *(_DWORD *)(v15 + 28);
        v25 = v17 - 8;
        if ( v16(v5, v2, &v24) < 1 )
        {
          v18 = *(int (__fastcall **)(int, int, int *))(*(_DWORD *)v5 + 8);
          v19 = *(_DWORD *)(*(_DWORD *)(v15 + 24) - 12);
          v22 = *(_DWORD *)(v15 + 24);
          v23 = v19 - 8;
          if ( v18(v5, v2, &v22) > -1 )
            return 0;
          break;
        }
        v12 = *v13 + 1;
        *v13 = v12;
        v8 = *(_DWORD *)v9;
        v11 = *(_DWORD *)(v9 + 4);
      }
      if ( ++v3 <= 6 )
        a1 = v21;
        v4 = *(_DWORD *)(v21 + 16);
        continue;
      break;
    }
  }
  return 1;
}


signed int __fastcall leveldb::Version::RecordReadSample(int a1, int a2, unsigned int a3)
{
  int v3; // r5@1
  signed int v4; // r4@2
  int v5; // r0@5
  int v6; // r1@6
  unsigned __int8 v7; // vf@6
  int v9; // [sp+Ch] [bp-1Ch]@4
  int v10; // [sp+10h] [bp-18h]@11
  int v11; // [sp+14h] [bp-14h]@4

  v3 = a1;
  if ( a3 >= 8 )
  {
    v4 = 0;
    if ( (*(_DWORD *)(a2 + a3 - 8) & 0xFEu) <= 1 )
    {
      v11 = 0;
      j_leveldb::Version::ForEachOverlapping(
        a1,
        a2,
        a3 - 8,
        a3,
        (int)&v9,
        (int (__fastcall *)(int, signed int, int))sub_1B3F8E4);
      if ( v11 >= 2 )
      {
        v5 = v9;
        if ( v9 )
        {
          v6 = *(_DWORD *)(v9 + 4);
          v7 = __OFSUB__(v6--, 1);
          *(_DWORD *)(v9 + 4) = v6;
          if ( (unsigned __int8)((v6 < 0) ^ v7) | (v6 == 0) )
          {
            if ( *(_DWORD *)(v3 + 100) )
            {
              v4 = 0;
            }
            else
              *(_DWORD *)(v3 + 100) = v5;
              v4 = 1;
              *(_DWORD *)(v3 + 104) = v10;
          }
          else
            v4 = 0;
        }
        else
          v4 = 0;
      }
    }
  }
  else
  return v4;
}


leveldb *__fastcall leveldb::Options::Options(leveldb *a1)
{
  leveldb *v1; // r4@1
  leveldb::Env *v2; // r0@1
  int v3; // r0@1
  int v4; // r0@1
  int v5; // r0@1

  v1 = a1;
  v2 = (leveldb::Env *)j_leveldb::BytewiseComparator(a1);
  *(_DWORD *)v1 = v2;
  *((_WORD *)v1 + 2) = 0;
  *((_BYTE *)v1 + 6) = 0;
  v3 = j_leveldb::Env::Default(v2);
  *((_DWORD *)v1 + 267) = 0;
  *((_DWORD *)v1 + 2) = v3;
  *((_DWORD *)v1 + 3) = 0;
  v4 = (int)v1 + 16;
  *(_DWORD *)v4 = 0x400000;
  *(_DWORD *)(v4 + 4) = 1000;
  *(_DWORD *)(v4 + 8) = 0;
  v5 = (int)v1 + 28;
  *(_DWORD *)v5 = 4096;
  *(_DWORD *)(v5 + 4) = 16;
  *(_DWORD *)(v5 + 8) = 0x200000;
  j___aeabi_memclr4_0((int)v1 + 40, 1025);
  return v1;
}


void __fastcall leveldb::VersionSet::GetRange2(int a1, _QWORD *a2, unsigned __int64 *a3, const void **a4, const void **a5)
{
  _QWORD *v5; // r4@1
  unsigned __int64 *v6; // r11@1
  int v7; // r1@1 OVERLAPPED
  int v8; // r2@1 OVERLAPPED
  int v9; // r10@1
  const void **v10; // r9@1
  void *v11; // r7@1
  unsigned int v12; // r6@1
  void *v13; // r0@3
  int v14; // r4@4
  void *ptr; // [sp+0h] [bp-30h]@1
  char *v16; // [sp+4h] [bp-2Ch]@1
  char *v17; // [sp+8h] [bp-28h]@1

  v5 = a2;
  v6 = a3;
  *(_QWORD *)&v7 = *a2;
  v9 = a1;
  v10 = a4;
  v11 = 0;
  ptr = 0;
  v16 = 0;
  v12 = (v8 - v7) >> 2;
  v17 = 0;
  if ( v12 )
  {
    if ( v12 >= 0x40000000 )
      sub_21E57F4();
    v13 = j_operator new(v8 - v7);
    *(_QWORD *)&v7 = *v5;
    v11 = v13;
  }
  ptr = v11;
  v16 = (char *)v11;
  v17 = (char *)v11 + 4 * v12;
  v14 = (v8 - v7) >> 2;
  if ( 0 != v14 )
    j___aeabi_memmove4_0((int)v11, v7);
  v16 = (char *)v11 + 4 * v14;
  j_std::vector<leveldb::FileMetaData *,std::allocator<leveldb::FileMetaData *>>::_M_range_insert<__gnu_cxx::__normal_iterator<leveldb::FileMetaData * const*,std::vector<leveldb::FileMetaData *,std::allocator<leveldb::FileMetaData *>>>>(
    (int)&ptr,
    (int)v11 + 4 * v14,
    *v6,
    *v6 >> 32);
  j_leveldb::VersionSet::GetRange(v9, (__int64 *)&ptr, v10, a5);
  if ( ptr )
    j_operator delete(ptr);
}


int __fastcall leveldb::FilterBlockReader::FilterBlockReader(int result, int a2, int a3)
{
  unsigned int v3; // r3@1
  int v4; // r12@2
  int v5; // r2@2
  unsigned int v6; // r3@2
  int v7; // r2@2

  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  v3 = *(_DWORD *)(a3 + 4);
  if ( v3 >= 5 )
  {
    v4 = *(_DWORD *)a3;
    v5 = *(_DWORD *)a3 + v3;
    v6 = v3 - 5;
    *(_DWORD *)(result + 16) = *(_BYTE *)(v5 - 1);
    v7 = *(_DWORD *)(v5 - 5);
    if ( v6 >= v7 )
    {
      *(_DWORD *)(result + 4) = v4;
      *(_DWORD *)(result + 8) = v4 + v7;
      *(_DWORD *)(result + 12) = (v6 - v7) >> 2;
    }
  }
  return result;
}


signed int __fastcall leveldb::Version::UpdateStats(int a1, int a2)
{
  int v2; // r2@1
  int v3; // r3@2
  unsigned __int8 v4; // vf@2
  signed int result; // r0@5

  v2 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2
    && (v3 = *(_DWORD *)(v2 + 4),
        v4 = __OFSUB__(v3, 1),
        --v3,
        *(_DWORD *)(v2 + 4) = v3,
        (unsigned __int8)((v3 < 0) ^ v4) | (v3 == 0))
    && !*(_DWORD *)(a1 + 100) )
  {
    *(_DWORD *)(a1 + 100) = v2;
    *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 4);
    result = 1;
  }
  else
    result = 0;
  return result;
}


void __fastcall leveldb::VersionSet::Recover(leveldb::VersionSet *this, bool *a2, _BYTE *a3)
{
  leveldb::VersionSet *v3; // r10@1
  bool *v4; // r9@1
  _BYTE *v5; // r11@1
  int v6; // r4@1
  int *v7; // r7@1
  char *v8; // r1@1
  char *v9; // r0@1
  _BYTE *v10; // r0@4
  int v11; // r1@4
  int v12; // r4@5
  const void **v13; // r0@8
  void *v14; // r0@8
  __int64 v15; // r2@9
  leveldb::Status *v16; // r1@9
  void *v17; // r0@9
  void *v18; // r1@13
  unsigned int *v19; // r2@15
  const char *v20; // r1@29
  void *v21; // r0@30
  unsigned int *v22; // r2@31
  signed int v23; // r1@33
  __int64 v24; // r2@35
  unsigned int v25; // r11@35
  leveldb::log::Reader *v26; // r0@35
  unsigned int v27; // r8@36
  char v28; // r6@36
  char v29; // r5@36
  char v30; // r7@36
  __int64 *v31; // r4@37
  int v32; // r5@37
  int v33; // r7@37
  int v34; // r1@37
  unsigned int *v35; // r2@40
  signed int v36; // r1@42
  unsigned int *v37; // r2@44
  __int64 v38; // r0@46
  const char *v39; // r0@64
  int *v40; // r0@65
  leveldb::Status *v41; // r1@65
  void *v42; // r0@65
  void *v43; // r1@69
  int v44; // r8@77
  int v45; // r11@77
  int v46; // r6@77
  __int64 v47; // kr10_8@77
  unsigned int v48; // r9@77
  __int64 v49; // kr18_8@77
  int v50; // r0@77
  int v51; // r0@79
  unsigned int v52; // r0@81
  unsigned int v53; // r0@83
  signed int v54; // r10@85
  int v55; // r0@85
  unsigned int v56; // r0@89
  signed int v57; // r0@93
  char v58; // r1@93
  char *v60; // r0@105
  const char *v61; // r1@106
  leveldb::Status *v62; // r0@108
  leveldb::Status *v63; // r1@112
  void *v64; // r0@112
  void *v65; // r1@116
  leveldb::Status *v66; // r1@117
  void *v67; // r1@121
  leveldb::Status *v68; // r1@122
  signed int v69; // r1@136
  unsigned int v70; // r3@136
  int *v71; // r8@136
  signed int v72; // r6@136
  signed int v73; // r5@136
  unsigned int v74; // r7@136
  signed int v75; // r12@136
  signed int v76; // r1@142
  unsigned int v77; // r2@148
  signed int v78; // r3@151
  signed int v79; // r7@153
  signed int v80; // r3@158
  int v81; // r3@164
  unsigned int v82; // r7@164
  _DWORD *v83; // r11@168
  signed int v84; // r9@168
  signed int v85; // r6@168
  __int64 v86; // r0@168
  int v91; // r0@171
  int v92; // r2@171
  __int64 v93; // r0@173
  unsigned int v94; // r7@174
  unsigned int v95; // r3@174
  int v96; // r4@175
  signed int v98; // r0@176
  int v99; // r0@181
  int v100; // r1@182
  leveldb::Version *v101; // r0@183
  int v102; // r0@184
  void *v103; // r0@187
  char *v104; // r0@189
  char *v105; // r0@192
  unsigned int *v106; // r2@194
  signed int v107; // r1@196
  unsigned int *v108; // r2@202
  signed int v109; // r1@204
  unsigned int *v110; // r2@210
  signed int v111; // r1@212
  unsigned __int64 v112; // [sp+8h] [bp-2D8h]@0
  leveldb::VersionSet *v113; // [sp+14h] [bp-2CCh]@37
  _BYTE *v114; // [sp+18h] [bp-2C8h]@35
  bool *v115; // [sp+20h] [bp-2C0h]@37
  int v116; // [sp+20h] [bp-2C0h]@168
  unsigned __int64 v117; // [sp+3Ch] [bp-2A4h]@77
  int v118; // [sp+44h] [bp-29Ch]@77
  int v119; // [sp+48h] [bp-298h]@52
  unsigned int v120; // [sp+4Ch] [bp-294h]@60
  unsigned int v121; // [sp+4Ch] [bp-294h]@168
  __int64 v122; // [sp+50h] [bp-290h]@37
  char v123; // [sp+58h] [bp-288h]@37
  unsigned int v124; // [sp+5Ch] [bp-284h]@36
  unsigned int v125; // [sp+60h] [bp-280h]@36
  int v126; // [sp+64h] [bp-27Ch]@36
  int v127; // [sp+68h] [bp-278h]@36
  unsigned int v128; // [sp+6Ch] [bp-274h]@37
  unsigned int v129; // [sp+6Ch] [bp-274h]@111
  unsigned int v130; // [sp+70h] [bp-270h]@36
  unsigned int v131; // [sp+74h] [bp-26Ch]@36
  void *v132; // [sp+78h] [bp-268h]@112
  int v133; // [sp+7Ch] [bp-264h]@112
  const char *v134; // [sp+80h] [bp-260h]@112
  int v135; // [sp+84h] [bp-25Ch]@112
  leveldb::Status *v136; // [sp+88h] [bp-258h]@112
  void *v137; // [sp+8Ch] [bp-254h]@122
  int v138; // [sp+90h] [bp-250h]@122
  const char *v139; // [sp+94h] [bp-24Ch]@122
  int v140; // [sp+98h] [bp-248h]@122
  leveldb::Status *v141; // [sp+9Ch] [bp-244h]@122
  void *v142; // [sp+A0h] [bp-240h]@117
  int v143; // [sp+A4h] [bp-23Ch]@117
  const char *v144; // [sp+A8h] [bp-238h]@117
  int v145; // [sp+ACh] [bp-234h]@117
  leveldb::Status *v146; // [sp+B0h] [bp-230h]@117
  const char *v147; // [sp+B4h] [bp-22Ch]@65
  size_t v148; // [sp+B8h] [bp-228h]@65
  int v149; // [sp+BCh] [bp-224h]@44
  int v150; // [sp+C0h] [bp-220h]@65
  int v151; // [sp+C4h] [bp-21Ch]@65
  leveldb::Status *v152; // [sp+C8h] [bp-218h]@65
  leveldb::Status *v153; // [sp+CCh] [bp-214h]@52
  void *v154; // [sp+D0h] [bp-210h]@52
  int v155; // [sp+D8h] [bp-208h]@77
  unsigned int v156; // [sp+DCh] [bp-204h]@77
  __int64 v157; // [sp+E0h] [bp-200h]@77
  __int64 v158; // [sp+E8h] [bp-1F8h]@77
  __int64 v159; // [sp+F0h] [bp-1F0h]@77
  char v160; // [sp+F8h] [bp-1E8h]@63
  unsigned __int8 v161; // [sp+F9h] [bp-1E7h]@77
  unsigned __int16 v162; // [sp+FAh] [bp-1E6h]@77
  unsigned __int8 v163; // [sp+FCh] [bp-1E4h]@77
  int v164; // [sp+100h] [bp-1E0h]@52
  int v165; // [sp+104h] [bp-1DCh]@52
  int v166; // [sp+108h] [bp-1D8h]@52
  int v167; // [sp+110h] [bp-1D0h]@52
  int v168; // [sp+114h] [bp-1CCh]@52
  int *v169; // [sp+118h] [bp-1C8h]@52
  int *v170; // [sp+11Ch] [bp-1C4h]@52
  int v171; // [sp+120h] [bp-1C0h]@52
  int v172; // [sp+124h] [bp-1BCh]@52
  int v173; // [sp+128h] [bp-1B8h]@52
  int v174; // [sp+12Ch] [bp-1B4h]@52
  char *v175; // [sp+134h] [bp-1ACh]@35
  void *v176; // [sp+138h] [bp-1A8h]@35
  int v177; // [sp+13Ch] [bp-1A4h]@35
  char v178; // [sp+140h] [bp-1A0h]@35
  char v179; // [sp+180h] [bp-160h]@35
  void **v180; // [sp+184h] [bp-15Ch]@35
  char v181; // [sp+188h] [bp-158h]@35
  int v182; // [sp+254h] [bp-8Ch]@30
  int v183; // [sp+258h] [bp-88h]@30
  int v184; // [sp+25Ch] [bp-84h]@30
  const char *v185; // [sp+260h] [bp-80h]@30
  int v186; // [sp+264h] [bp-7Ch]@30
  leveldb::Status *v187; // [sp+268h] [bp-78h]@9
  leveldb::SequentialFile *v188; // [sp+26Ch] [bp-74h]@35
  int v189; // [sp+270h] [bp-70h]@8
  char *v190; // [sp+274h] [bp-6Ch]@8
  void *v191; // [sp+278h] [bp-68h]@14
  int v192; // [sp+27Ch] [bp-64h]@14
  const char *v193; // [sp+280h] [bp-60h]@14
  int v194; // [sp+284h] [bp-5Ch]@14
  char *v195; // [sp+288h] [bp-58h]@1
  void *ptr; // [sp+28Ch] [bp-54h]@1
  _BYTE *v197; // [sp+290h] [bp-50h]@1

  v3 = this;
  v4 = a2;
  v5 = a3;
  v197 = &unk_28898CC;
  v7 = (int *)(a2 + 4);
  v6 = *(_DWORD *)a2;
  j_leveldb::CurrentFileName((int *)&v195, (int *)a2 + 1);
  j_leveldb::ReadFileToString((leveldb::Status **)&ptr, v6, (int)&v195, (const void **)&v197);
  v8 = v195;
  v9 = v195 - 12;
  if ( (int *)(v195 - 12) != &dword_28898C0 )
  {
    v19 = (unsigned int *)(v195 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = (char *)__ldrex(v19);
      while ( __strex((unsigned int)(v8 - 1), v19) );
    }
    else
      v8 = (char *)(*v19)--;
    if ( (signed int)v8 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  }
  if ( ptr )
    *(_DWORD *)v3 = j_leveldb::Status::CopyState((leveldb::Status *)ptr, v8);
    goto LABEL_190;
  v10 = v197;
  v11 = *((_DWORD *)v197 - 3);
  if ( !v11 )
    goto LABEL_226;
  v12 = v11 - 1;
  if ( *((_DWORD *)v197 - 1) >= 0 )
    sub_21E8010((const void **)&v197);
    v10 = v197;
  if ( v10[v12] != 10 )
LABEL_226:
    v193 = "CURRENT file does not end with newline";
    v194 = 38;
    v191 = &unk_257BC67;
    v192 = 0;
    j_leveldb::Status::Status(v3, 2, (int)&v193, (int)&v191);
  sub_21E849C((char *)&v197, *((_DWORD *)v10 - 3) - 1, 0);
  sub_21E8AF4(&v189, v7);
  sub_21E7408((const void **)&v189, "/", 1u);
  v13 = sub_21E72F0((const void **)&v189, (const void **)&v197);
  v190 = (char *)*v13;
  *v13 = &unk_28898CC;
  v14 = (void *)(v189 - 12);
  if ( (int *)(v189 - 12) != &dword_28898C0 )
    v35 = (unsigned int *)(v189 - 4);
        v36 = __ldrex(v35);
      while ( __strex(v36 - 1, v35) );
      v36 = (*v35)--;
    if ( v36 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  (*(void (__fastcall **)(leveldb::Status **))(**(_DWORD **)v4 + 8))(&v187);
  v16 = v187;
  v17 = ptr;
  if ( ptr == (void *)v187 )
    v18 = ptr;
  else
    if ( ptr )
      j_operator delete[](ptr);
      v16 = v187;
    if ( v16 )
      v17 = j_leveldb::Status::CopyState(v16, (const char *)v16);
      v18 = (void *)v187;
      v18 = 0;
      v17 = 0;
    ptr = v17;
  if ( v18 )
    j_operator delete[](v18);
    v17 = ptr;
  if ( v17 )
    v20 = (const char *)*((_BYTE *)v17 + 4);
    if ( v20 == (const char *)1 )
      v185 = "CURRENT points to a non-existent file";
      v186 = 37;
      j_leveldb::Status::ToString((leveldb::Status *)&v182, (unsigned int **)&ptr);
      v183 = v182;
      v184 = *(_DWORD *)(v182 - 12);
      j_leveldb::Status::Status(v3, 2, (int)&v185, (int)&v183);
      v21 = (void *)(v182 - 12);
      if ( (int *)(v182 - 12) != &dword_28898C0 )
      {
        v22 = (unsigned int *)(v182 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v23 = __ldrex(v22);
          while ( __strex(v23 - 1, v22) );
        }
        else
          v23 = (*v22)--;
        if ( v23 <= 0 )
          j_j_j_j__ZdlPv_9(v21);
      }
      *(_DWORD *)v3 = j_leveldb::Status::CopyState((leveldb::Status *)v17, v20);
    goto LABEL_189;
  LODWORD(v15) = *((_DWORD *)v4 + 50);
  v114 = v5;
  j_leveldb::VersionSet::Builder::Builder((leveldb::VersionSet::Builder *)&v181, (leveldb::VersionSet *)v4, v15);
  LODWORD(v24) = &v179;
  v25 = 0;
  HIDWORD(v24) = 1;
  *(_DWORD *)&v179 = &off_2725CC8;
  v180 = &ptr;
  v26 = j_leveldb::log::Reader::Reader((leveldb::log::Reader *)&v178, v188, v24, 0LL, v112);
  v176 = &unk_257BC67;
  v177 = 0;
  v175 = (char *)&unk_28898CC;
  if ( j_leveldb::log::Reader::ReadRecord((int)v26, (int)&v176, (const void **)&v175) == 1 )
    v27 = 0;
    v28 = 0;
    v29 = 0;
    v127 = 0;
    v126 = 0;
    v125 = 0;
    v124 = 0;
    v131 = 0;
    v30 = 0;
    v130 = 0;
    if ( !ptr )
      v31 = (__int64 *)&v176;
      v32 = 0;
      v33 = 0;
      v25 = 0;
      v34 = 0;
      v115 = v4;
      v113 = v3;
      v128 = 0;
      v127 = 0;
      v126 = 0;
      v125 = 0;
      v124 = 0;
      v123 = 0;
      v122 = 0LL;
        v119 = v34;
        v154 = &unk_28898CC;
        v164 = 0;
        v165 = 0;
        v166 = 0;
        v167 = 0;
        v168 = 0;
        v171 = 0;
        v169 = &v167;
        v170 = &v167;
        v172 = 0;
        v173 = 0;
        v174 = 0;
        j_leveldb::VersionEdit::Clear((leveldb::VersionEdit *)&v154);
        j_leveldb::VersionEdit::DecodeFrom(&v153, (leveldb::VersionEdit *)&v154, v31);
        v38 = __PAIR__((unsigned int)v153, (unsigned int)ptr);
        if ( ptr == (void *)v153 )
          HIDWORD(v38) = ptr;
          if ( ptr )
          {
            j_operator delete[](ptr);
            HIDWORD(v38) = v153;
          }
          if ( HIDWORD(v38) )
            LODWORD(v38) = j_leveldb::Status::CopyState((leveldb::Status *)HIDWORD(v38), (const char *)HIDWORD(v38));
          else
            v38 = 0LL;
          ptr = (void *)v38;
        v120 = v25;
        if ( HIDWORD(v38) )
          j_operator delete[]((void *)HIDWORD(v38));
          LODWORD(v38) = ptr;
        if ( !(_DWORD)v38 )
          if ( v160 )
            v39 = (const char *)(*(int (**)(void))(**((_DWORD **)v115 + 5) + 12))();
            if ( sub_21E7D6C((const void **)&v154, v39) )
            {
              v40 = sub_21E8AF4(&v149, (int *)&v154);
              sub_21E7408((const void **)v40, " does not match existing comparator ", 0x24u);
              v150 = v149;
              v151 = *(_DWORD *)(v149 - 12);
              v147 = (const char *)(*(int (**)(void))(**((_DWORD **)v115 + 5) + 12))();
              v148 = j_strlen_0(v147);
              j_leveldb::Status::Status(&v152, 4, (int)&v150, (int)&v147);
              v41 = v152;
              v42 = ptr;
              if ( ptr != (void *)v152 )
              {
                if ( ptr )
                {
                  j_operator delete[](ptr);
                  v41 = v152;
                }
                if ( v41 )
                  v43 = j_leveldb::Status::CopyState(v41, (const char *)v41);
                  v42 = (void *)v152;
                else
                  v42 = 0;
                  v43 = 0;
                ptr = v43;
              }
              if ( v42 )
                j_operator delete[](v42);
              HIDWORD(v38) = v149;
              LODWORD(v38) = v149 - 12;
              if ( (int *)(v149 - 12) != &dword_28898C0 )
                v37 = (unsigned int *)(v149 - 4);
                if ( &pthread_create )
                  __dmb();
                  do
                    HIDWORD(v38) = __ldrex(v37);
                  while ( __strex(HIDWORD(v38) - 1, v37) );
                  HIDWORD(v38) = (*v37)--;
                if ( SHIDWORD(v38) <= 0 )
                  j_j_j_j__ZdlPv_9((void *)v38);
            }
          if ( !ptr )
            LODWORD(v38) = &v181;
            j_leveldb::VersionSet::Builder::Apply(v38);
        v118 = v155;
        v44 = v161;
        v45 = HIDWORD(v157);
        v117 = __PAIR__(v156, (unsigned int)v157);
        v46 = v163;
        v47 = v158;
        v48 = v162;
        v49 = v159;
        j_leveldb::VersionEdit::~VersionEdit((leveldb::VersionEdit *)&v154);
        v50 = v126;
        if ( v46 )
          v50 = HIDWORD(v49);
        v126 = v50;
        v51 = v127;
          v51 = v49;
        v127 = v51;
        v52 = v124;
        if ( v48 >= 0x100 )
          v52 = HIDWORD(v47);
        v31 = (__int64 *)&v176;
        v124 = v52;
        v53 = v125;
          v53 = v47;
        v54 = v48;
        v125 = v53;
        v55 = v33;
        if ( v48 )
          v55 = v45;
        v33 = v55;
          v32 = v117;
        v56 = v128;
        if ( v44 )
          v56 = HIDWORD(v117);
        v25 = v120;
        v128 = v56;
          v25 = v118;
        v57 = j_leveldb::log::Reader::ReadRecord((int)&v178, (int)&v176, (const void **)&v175);
        v123 |= v46 != 0;
        v58 = 0;
        if ( v48 > 0xFF )
          v58 = 1;
        BYTE4(v122) |= v58;
        LOBYTE(v122) = v122 | (v44 != 0);
          v54 = 1;
        _ZF = v57 == 1;
        v34 = v119 | v54;
        if ( v57 == 1 )
          _ZF = ptr == 0;
      while ( _ZF );
      if ( !(v34 & 1) )
        v33 = v34 & 1;
      v130 = v33;
        v32 = v34 & 1;
      v131 = v32;
      v3 = v113;
      v4 = v115;
      v27 = v128;
      v28 = v123;
      v29 = BYTE4(v122);
      v30 = v122;
  v60 = v175 - 12;
  if ( (int *)(v175 - 12) != &dword_28898C0 )
    v110 = (unsigned int *)(v175 - 4);
        v111 = __ldrex(v110);
      while ( __strex(v111 - 1, v110) );
      v111 = (*v110)--;
    if ( v111 <= 0 )
      j_j_j_j__ZdlPv_9(v60);
  j_leveldb::log::Reader::~Reader((leveldb::log::Reader *)&v178);
  j_leveldb::log::Reader::Reporter::~Reporter((leveldb::log::Reader::Reporter *)&v179);
  if ( v188 )
    (*(void (**)(void))(*(_DWORD *)v188 + 4))();
  v188 = 0;
  v62 = (leveldb::Status *)ptr;
    goto LABEL_187;
  if ( !(v29 & 1) )
    v144 = "no meta-nextfile entry in descriptor";
    v145 = 36;
    v142 = &unk_257BC67;
    v143 = 0;
    j_leveldb::Status::Status(&v146, 2, (int)&v144, (int)&v142);
    v66 = v146;
    v64 = ptr;
    if ( ptr != (void *)v146 )
      if ( ptr )
        j_operator delete[](ptr);
        v66 = v146;
      if ( v66 )
        v67 = j_leveldb::Status::CopyState(v66, (const char *)v66);
        v64 = (void *)v146;
LABEL_132:
        ptr = v67;
        goto LABEL_133;
LABEL_131:
      v64 = 0;
      v67 = 0;
      goto LABEL_132;
LABEL_133:
    v129 = v27;
    goto LABEL_134;
  if ( !(v30 & 1) )
    v139 = "no meta-lognumber entry in descriptor";
    v140 = 37;
    v137 = &unk_257BC67;
    v138 = 0;
    j_leveldb::Status::Status(&v141, 2, (int)&v139, (int)&v137);
    v68 = v141;
    if ( ptr != (void *)v141 )
        v68 = v141;
      if ( v68 )
        v67 = j_leveldb::Status::CopyState(v68, (const char *)v68);
        v64 = (void *)v141;
        goto LABEL_132;
      goto LABEL_131;
    goto LABEL_133;
  v129 = v27;
  if ( v28 & 1 )
    goto LABEL_136;
  v134 = "no last-sequence-number entry in descriptor";
  v135 = 43;
  v132 = &unk_257BC67;
  v133 = 0;
  j_leveldb::Status::Status(&v136, 2, (int)&v134, (int)&v132);
  v63 = v136;
  v64 = ptr;
  if ( ptr != (void *)v136 )
      v63 = v136;
    if ( v63 )
      v65 = j_leveldb::Status::CopyState(v63, (const char *)v63);
      v64 = (void *)v136;
      v65 = 0;
    ptr = v65;
LABEL_134:
  if ( v64 )
    j_operator delete[](v64);
LABEL_136:
  v69 = 0;
  v71 = (int *)(v4 + 24);
  v70 = *((_DWORD *)v4 + 6);
  v72 = 0;
  v73 = 0;
  v74 = *((_DWORD *)v4 + 7);
  v75 = 0;
  if ( v70 <= v131 )
    v69 = 1;
  if ( v74 <= v130 )
    v72 = 1;
  if ( v74 == v130 )
    v72 = v69;
  v76 = 0;
  if ( v70 > v131 )
    v76 = 1;
  if ( v74 > v130 )
    v73 = 1;
    v73 = v76;
  v77 = (__PAIR__(v130, v131) + 1) >> 32;
  v61 = (const char *)(v131 + 1);
  if ( v73 )
    v77 = *((_DWORD *)v4 + 7);
    v61 = (const char *)*((_DWORD *)v4 + 6);
  if ( v72 )
    goto LABEL_227;
  v78 = 0;
  if ( (unsigned int)v61 > v25 )
    v78 = 1;
  v79 = 0;
  if ( v77 > v129 )
    v79 = 1;
  if ( v77 == v129 )
    v79 = v78;
  if ( !v79 )
LABEL_227:
    v80 = 0;
    if ( (unsigned int)v61 > v25 )
      v80 = 1;
    if ( v77 > v129 )
      v75 = 1;
    if ( v77 == v129 )
      v75 = v80;
    v82 = (__PAIR__(v129, v25) + 1) >> 32;
    v81 = v25 + 1;
    if ( v75 )
      v82 = v77;
      v81 = (int)v61;
    *v71 = v81;
    *((_DWORD *)v4 + 7) = v82;
  if ( !ptr )
    v121 = v25;
    v83 = j_operator new(0x80u);
    *v83 = v4;
    v116 = (int)v4;
    v83[1] = v83;
    v83[2] = v83;
    j___aeabi_memclr4_0((int)(v83 + 3), 92);
    v84 = -1;
    v85 = 0;
    v83[26] = -1;
    HIDWORD(v86) = v83;
    v83[28] = 0;
    v83[29] = -1074790400;
    LODWORD(v86) = &v181;
    v83[30] = -1;
    j_leveldb::VersionSet::Builder::SaveTo(v86);
    __asm
      VMOV.F64        D8, #-1.0
      VMOV.F64        D9, #0.25
      VMOV.F64        D11, #10.0
      VLDR            D10, =1.048576e7
    do
      while ( 1 )
        v91 = *(_QWORD *)&v83[3 * v85 + 4] >> 32;
        v92 = *(_QWORD *)&v83[3 * v85 + 4];
        if ( v85 )
          break;
        v85 = 1;
        _R0 = (v91 - v92) >> 2;
        __asm
          VMOV            S0, R0
          VCVT.F64.U32    D0, S0
          VMUL.F64        D0, D0, D9
          VCMPE.F64       D0, D8
          VMRS            APSR_nzcv, FPSCR
        if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
          v84 = 0;
          __asm { VMOVGT.F64      D8, D0 }
      if ( v91 == v92 )
        v93 = 0LL;
      else
        v94 = 0;
        v95 = (v91 - v92) >> 2;
        do
          v96 = *(_DWORD *)(v92 + 4 * v94++);
          v93 += *(_QWORD *)(v96 + 16);
        while ( v94 < v95 );
      _R0 = j___aeabi_ul2d(v93, SHIDWORD(v93));
      __asm
        VMOV.F64        D1, D10
        VMOV            D0, R0, R1
      v98 = v85;
      if ( !(_NF ^ _VF) )
          __asm { VMUL.F64        D1, D1, D11 }
          --v98;
        while ( v98 > 1 );
        VDIV.F64        D0, D0, D1
        VCMPE.F64       D0, D8
        VMRS            APSR_nzcv, FPSCR
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        v84 = v85;
        __asm { VMOVGT.F64      D8, D0 }
      ++v85;
    while ( v85 != 6 );
    v83[30] = v84;
    __asm { VSTR            D8, [R11,#0x70] }
    v99 = *(_DWORD *)(v116 + 200);
    if ( v99 )
      v100 = *(_DWORD *)(v99 + 12) - 1;
      *(_DWORD *)(v99 + 12) = v100;
      if ( !v100 )
        v101 = j_leveldb::Version::~Version((leveldb::Version *)v99);
        j_operator delete((void *)v101);
    *(_DWORD *)(v116 + 200) = v83;
    ++v83[3];
    v102 = *(_DWORD *)(v116 + 80);
    v83[2] = v102;
    v83[1] = v116 + 72;
    *(_DWORD *)(v102 + 4) = v83;
    *(_DWORD *)(v83[1] + 8) = v83;
    *(_DWORD *)(v116 + 36) = v124;
    *(_DWORD *)(v116 + 32) = v125;
    *(_QWORD *)v71 = __PAIR__(v124, v125) + 1;
    *(_DWORD *)(v116 + 44) = v126;
    *(_DWORD *)(v116 + 40) = v127;
    *(_DWORD *)(v116 + 52) = v129;
    *(_DWORD *)(v116 + 48) = v121;
    *(_DWORD *)(v116 + 60) = v130;
    *(_DWORD *)(v116 + 56) = v131;
    if ( !j_leveldb::VersionSet::ReuseManifest(v116, &v190, (const void **)&v197) )
      *v114 = 1;
    v62 = (leveldb::Status *)ptr;
      v103 = 0;
      goto LABEL_188;
LABEL_187:
  v103 = j_leveldb::Status::CopyState(v62, v61);
LABEL_188:
  *(_DWORD *)v3 = v103;
  j_leveldb::VersionSet::Builder::~Builder((leveldb::VersionSet::Builder *)&v181);
LABEL_189:
  v104 = v190 - 12;
  if ( (int *)(v190 - 12) != &dword_28898C0 )
    v108 = (unsigned int *)(v190 - 4);
        v109 = __ldrex(v108);
      while ( __strex(v109 - 1, v108) );
      v109 = (*v108)--;
    if ( v109 <= 0 )
      j_j_j_j__ZdlPv_9(v104);
LABEL_190:
    j_operator delete[](ptr);
  v105 = v197 - 12;
  if ( (int *)(v197 - 12) != &dword_28898C0 )
    v106 = (unsigned int *)(v197 - 4);
        v107 = __ldrex(v106);
      while ( __strex(v107 - 1, v106) );
      v107 = (*v106)--;
    if ( v107 <= 0 )
      j_j_j_j__ZdlPv_9(v105);
}


void __fastcall leveldb::Version::ForEachOverlapping(int a1, int a2, int a3, int a4, int a5, int a6, int (__fastcall *a7)(int, signed int, int))
{
  leveldb::Version::ForEachOverlapping(a1, a2, a3, a4, a5, a6, a7);
}


void __fastcall leveldb::SequentialFileEncrypted::Read(int a1, int a2, int a3, unsigned __int64 *a4, int a5)
{
  int v5; // r6@1
  unsigned __int64 *v6; // r7@1
  int v7; // r6@1
  int *v8; // r4@1
  void *v9; // r0@2
  unsigned int *v10; // r1@4
  signed int v11; // r0@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  int v14; // [sp+8h] [bp-30h]@1
  int v15; // [sp+10h] [bp-28h]@1

  v5 = a2;
  v6 = a4;
  (*(void (__cdecl **)(int))(**(_DWORD **)(a2 + 4) + 8))(a1);
  sub_21E91E0((void **)&v15, *v6, *v6 >> 32);
  (*(void (__fastcall **)(int *))(**(_DWORD **)(v5 + 8) + 16))(&v14);
  v7 = v14;
  v8 = (int *)(v14 - 12);
  j___aeabi_memcpy_0(a5, v14, *(_DWORD *)(v14 - 12));
  if ( v8 != &dword_28898C0 )
  {
    v10 = (unsigned int *)(v7 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  }
  v9 = (void *)(v15 - 12);
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v15 - 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
}


leveldb::Compaction *__fastcall leveldb::Compaction::~Compaction(leveldb::Compaction *this)
{
  leveldb::Compaction *v1; // r4@1
  int v2; // r0@1
  int v3; // r1@2
  leveldb::Version *v4; // r0@3
  void *v5; // r0@4
  void *v6; // r0@6
  void *v7; // r0@8

  v1 = this;
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 12) - 1;
    *(_DWORD *)(v2 + 12) = v3;
    if ( !v3 )
    {
      v4 = j_leveldb::Version::~Version((leveldb::Version *)v2);
      j_operator delete((void *)v4);
    }
  }
  v5 = (void *)*((_DWORD *)v1 + 36);
  if ( v5 )
    j_operator delete(v5);
  v6 = (void *)*((_DWORD *)v1 + 33);
  if ( v6 )
    j_operator delete(v6);
  v7 = (void *)*((_DWORD *)v1 + 30);
  if ( v7 )
    j_operator delete(v7);
  j_leveldb::VersionEdit::~VersionEdit((leveldb::Compaction *)((char *)v1 + 24));
  return v1;
}


leveldb::VersionSet::Builder *__fastcall leveldb::VersionSet::Builder::~Builder(leveldb::VersionSet::Builder *this)
{
  int v1; // r2@1
  int v2; // r5@2
  unsigned int v3; // r4@2
  char *v4; // r11@4
  int v5; // r8@4
  int v6; // r6@6
  int v7; // r10@6
  char *v8; // r5@6
  signed int v9; // r8@9
  char *v10; // r4@9
  int v11; // r5@9
  unsigned int v12; // r0@9
  unsigned int v13; // r1@11
  unsigned int v14; // r7@11
  int v15; // r4@27
  int v16; // r6@27
  unsigned int *v17; // r2@28
  signed int v18; // r1@30
  unsigned int *v19; // r2@32
  signed int v20; // r1@34
  int v21; // r5@44
  signed int v22; // r0@44
  int v23; // r1@46
  void *v24; // r0@46
  int v25; // r1@47
  void *v26; // r0@47
  int v27; // r0@53
  int v28; // r1@53
  leveldb::Version *v29; // r0@55
  leveldb::VersionSet::Builder *v30; // r4@56
  leveldb::VersionSet::Builder *v32; // [sp+4h] [bp-3Ch]@1
  int v33; // [sp+Ch] [bp-34h]@4
  int v34; // [sp+10h] [bp-30h]@6

  v32 = this;
  v1 = 0;
  do
  {
    v2 = *((_DWORD *)v32 + 7 * v1 + 8);
    v3 = *(_DWORD *)(v2 + 20);
    if ( v3 >= 0x40000000 )
      sub_21E5A04("vector::reserve");
    if ( v3 )
    {
      v33 = v1;
      v4 = (char *)j_operator new(4 * v3);
      v5 = (int)&v4[4 * v3];
    }
    else
      v4 = 0;
      v5 = 0;
    v6 = *(_DWORD *)(v2 + 12);
    v7 = v2 + 4;
    v34 = v2;
    v8 = v4;
    if ( v6 == v7 )
      goto LABEL_61;
    do
      if ( v8 == (char *)v5 )
      {
        v9 = v8 - v4;
        v10 = 0;
        v11 = (v8 - v4) >> 2;
        v12 = v11;
        if ( !(v9 >> 2) )
          v12 = 1;
        v13 = v12 + (v9 >> 2);
        v14 = v12 + (v9 >> 2);
        if ( 0 != v13 >> 30 )
          v14 = 0x3FFFFFFF;
        if ( v13 < v12 )
        if ( v14 )
        {
          if ( v14 >= 0x40000000 )
            sub_21E57F4();
          v10 = (char *)j_operator new(4 * v14);
        }
        *(_DWORD *)&v10[4 * v11] = *(_DWORD *)(v6 + 16);
        if ( v11 )
          j___aeabi_memmove4_0((int)v10, (int)v4);
        v8 = &v10[4 * v11];
        if ( v4 )
          j_operator delete(v4);
        v5 = (int)&v10[4 * v14];
        v4 = v10;
      }
      else
        *(_DWORD *)v8 = *(_DWORD *)(v6 + 16);
      v8 += 4;
      v6 = sub_21D4820(v6);
    while ( v6 != v7 );
    if ( v34 )
LABEL_61:
      j_std::_Rb_tree<leveldb::FileMetaData *,leveldb::FileMetaData *,std::_Identity<leveldb::FileMetaData *>,leveldb::VersionSet::Builder::BySmallestKey,std::allocator<leveldb::FileMetaData *>>::_M_erase(
        v34,
        *(_DWORD *)(v34 + 8));
      j_operator delete((void *)v34);
    if ( (v8 - v4) >> 2 )
      v15 = (v8 - v4) >> 2;
      v16 = 0;
      do
        v21 = *(_DWORD *)&v4[4 * v16];
        v22 = (*(_DWORD *)v21)--;
        if ( v21 && v22 <= 1 )
          v23 = *(_DWORD *)(v21 + 28);
          v24 = (void *)(v23 - 12);
          if ( (int *)(v23 - 12) != &dword_28898C0 )
          {
            v17 = (unsigned int *)(v23 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v18 = __ldrex(v17);
              while ( __strex(v18 - 1, v17) );
            }
            else
              v18 = (*v17)--;
            if ( v18 <= 0 )
              j_j_j_j__ZdlPv_9(v24);
          }
          v25 = *(_DWORD *)(v21 + 24);
          v26 = (void *)(v25 - 12);
          if ( (int *)(v25 - 12) != &dword_28898C0 )
            v19 = (unsigned int *)(v25 - 4);
                v20 = __ldrex(v19);
              while ( __strex(v20 - 1, v19) );
              v20 = (*v19)--;
            if ( v20 <= 0 )
              j_j_j_j__ZdlPv_9(v26);
          j_operator delete((void *)v21);
        ++v16;
      while ( v16 != v15 );
    if ( v4 )
      j_operator delete(v4);
    v1 = v33 + 1;
  }
  while ( v33 + 1 < 7 );
  v27 = *((_DWORD *)v32 + 1);
  v28 = *(_DWORD *)(v27 + 12) - 1;
  *(_DWORD *)(v27 + 12) = v28;
  if ( v27 && !v28 )
    v29 = j_leveldb::Version::~Version((leveldb::Version *)v27);
    j_operator delete((void *)v29);
  v30 = v32;
  j_std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::_M_erase(
    (int)v32 + 176,
    *((_DWORD *)v32 + 46));
    (int)v30 + 148,
    *((_DWORD *)v30 + 39));
    (int)v30 + 120,
    *((_DWORD *)v30 + 32));
    (int)v30 + 92,
    *((_DWORD *)v30 + 25));
    (int)v30 + 64,
    *((_DWORD *)v30 + 18));
    (int)v30 + 36,
    *((_DWORD *)v30 + 11));
    (int)v30 + 8,
    *((_DWORD *)v30 + 4));
  return v32;
}


int __fastcall leveldb::DBImpl::SuspendCompaction(leveldb::DBImpl *this, int a2, __int64 a3)
{
  leveldb::DBImpl *v3; // r4@1
  __int64 v4; // r2@1

  v3 = this;
  j_leveldb::Log(*((leveldb **)this + 9), (leveldb::Logger *)"BG suspend compaction\n", a3);
  j_leveldb::port::Mutex::Lock((leveldb::DBImpl *)((char *)v3 + 1112));
  vFFFF0FA0();
  *((_DWORD *)v3 + 317) = v3;
  j_leveldb::port::Mutex::Unlock((leveldb::DBImpl *)((char *)v3 + 1112));
  return j_leveldb::Log(*((leveldb **)v3 + 9), (leveldb::Logger *)"BG suspended\n", v4);
}


void __fastcall leveldb::InternalKeyComparator::~InternalKeyComparator(leveldb::InternalKeyComparator *this)
{
  void *v1; // r0@1

  v1 = (void *)j_leveldb::Comparator::~Comparator(this);
  j_j_j__ZdlPv_7(v1);
}


signed int __fastcall leveldb::Block::Iter::SeekToFirst(int a1)
{
  int v1; // r4@1

  v1 = a1;
  sub_21E7EE0((const void **)(a1 + 44), 0, *(_BYTE **)(*(_DWORD *)(a1 + 44) - 12), 0);
  *(_DWORD *)(v1 + 40) = 0;
  *(_DWORD *)(v1 + 48) = *(_QWORD *)(v1 + 24) + *(_DWORD *)(*(_QWORD *)(v1 + 24) + (*(_QWORD *)(v1 + 24) >> 32));
  *(_DWORD *)(v1 + 52) = 0;
  return j_j_j__ZN7leveldb5Block4Iter12ParseNextKeyEv_0(v1);
}


void *__fastcall leveldb::DBImpl::TEST_CompactMemTable(leveldb::DBImpl *this, int a2)
{
  int v2; // r6@1
  void **v3; // r4@1
  void (__cdecl *v4)(leveldb::DBImpl *); // r7@1
  void *result; // r0@1
  leveldb::Status *v6; // r0@3
  const char *v7; // r1@6
  void *v8; // r0@9
  char v9; // [sp+0h] [bp-18h]@1

  v2 = a2;
  v3 = (void **)this;
  v4 = *(void (__cdecl **)(leveldb::DBImpl *))(*(_DWORD *)a2 + 16);
  v9 = 0;
  v4(this);
  result = *v3;
  if ( !*v3 )
  {
    j_leveldb::port::Mutex::Lock((leveldb::port::Mutex *)(v2 + 1112));
    if ( *(_DWORD *)(v2 + 1132) )
    {
      while ( 1 )
      {
        v6 = *(leveldb::Status **)(v2 + 1280);
        if ( v6 )
          break;
        j_leveldb::port::CondVar::Wait((leveldb::port::CondVar *)(v2 + 1120));
        if ( !*(_DWORD *)(v2 + 1132) )
          goto LABEL_12;
      }
      v7 = (const char *)*v3;
      if ( *v3 != (void *)v6 )
        if ( v7 && (j_operator delete[](*v3), (v6 = *(leveldb::Status **)(v2 + 1280)) == 0) )
          v8 = 0;
        else
          v8 = j_leveldb::Status::CopyState(v6, v7);
        *v3 = v8;
    }
LABEL_12:
    result = (void *)j_leveldb::port::Mutex::Unlock((leveldb::port::Mutex *)(v2 + 1112));
  }
  return result;
}


char *__fastcall leveldb::Iterator::RegisterCleanup(leveldb::Iterator *this, void (__cdecl *a2)(void *, void *), void *a3, void *a4)
{
  void (__cdecl *v4)(void *, void *); // r6@1
  leveldb::Iterator *v5; // r7@1
  char *result; // r0@1
  int v7; // t1@1
  void *v8; // r4@1
  void *v9; // r5@1

  v4 = a2;
  v5 = this;
  v7 = *((_DWORD *)this + 1);
  result = (char *)this + 4;
  v8 = a4;
  v9 = a3;
  if ( v7 )
  {
    result = (char *)j_operator new(0x10u);
    *((_DWORD *)result + 3) = *((_DWORD *)v5 + 4);
    *((_DWORD *)v5 + 4) = result;
  }
  *(_DWORD *)result = v4;
  *((_DWORD *)result + 1) = v9;
  *((_DWORD *)result + 2) = v8;
  return result;
}


int __fastcall leveldb::BytewiseComparator(leveldb *this)
{
  j_leveldb::port::InitOnce((pthread_once_t *)&unk_28392B4, (void (*)(void))sub_1B4890C);
  return dword_28392B8;
}


leveldb::WritableFileEncrypted *__fastcall leveldb::WritableFileEncrypted::~WritableFileEncrypted(leveldb::WritableFileEncrypted *this)
{
  leveldb::WritableFileEncrypted *v1; // r4@1
  int v2; // r1@1
  const char *v3; // r1@2
  void *v4; // r5@3
  int v5; // r5@9
  unsigned int *v6; // r1@10
  unsigned int v7; // r0@12
  unsigned int *v8; // r6@16
  unsigned int v9; // r0@18
  void *ptr; // [sp+0h] [bp-18h]@2

  v1 = this;
  *(_DWORD *)this = &off_2724CE8;
  v2 = *((_DWORD *)this + 1);
  if ( v2 )
  {
    (*(void (__fastcall **)(void **))(*(_DWORD *)v2 + 12))(&ptr);
    if ( ptr )
    {
      v4 = j_leveldb::Status::CopyState((leveldb::Status *)ptr, v3);
      if ( ptr )
        j_operator delete[](ptr);
      *((_DWORD *)v1 + 1) = 0;
      if ( v4 )
        j_operator delete[](v4);
    }
    else
  }
  v5 = *((_DWORD *)v1 + 3);
  if ( v5 )
    v6 = (unsigned int *)(v5 + 4);
    if ( &pthread_create )
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
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
  j_leveldb::WritableFile::~WritableFile(v1);
  return v1;
}


void __fastcall leveldb::DBImpl::CompactRange(int a1, __int64 *a2, __int64 *a3)
{
  int v3; // r6@1
  leveldb::port::Mutex *v4; // r8@1
  __int64 *v5; // r4@1
  __int64 *v6; // r5@1
  signed int v7; // r10@1
  int *v8; // r7@1
  signed int v9; // ST04_4@1
  signed int v10; // r11@1
  signed int v11; // r9@1
  signed int v12; // r7@1
  int v13; // r7@13
  signed int v14; // [sp+0h] [bp-30h]@1
  void *ptr; // [sp+8h] [bp-28h]@1

  v3 = a1;
  v4 = (leveldb::port::Mutex *)(a1 + 1112);
  v5 = a3;
  v6 = a2;
  j_leveldb::port::Mutex::Lock((leveldb::port::Mutex *)(a1 + 1112));
  v7 = 1;
  v8 = *(int **)(*(_DWORD *)(v3 + 1276) + 200);
  j_leveldb::Version::OverlapInLevel(*(int **)(*(_DWORD *)(v3 + 1276) + 200), 1, v6, (int)v5);
  v9 = j_leveldb::Version::OverlapInLevel(v8, 2, v6, (int)v5);
  v14 = j_leveldb::Version::OverlapInLevel(v8, 3, v6, (int)v5);
  v10 = j_leveldb::Version::OverlapInLevel(v8, 4, v6, (int)v5);
  v11 = j_leveldb::Version::OverlapInLevel(v8, 5, v6, (int)v5);
  v12 = j_leveldb::Version::OverlapInLevel(v8, 6, v6, (int)v5);
  j_leveldb::port::Mutex::Unlock(v4);
  j_leveldb::DBImpl::TEST_CompactMemTable((leveldb::DBImpl *)&ptr, v3);
  if ( v9 )
    v7 = 2;
  if ( v14 )
    v7 = 3;
  if ( v10 )
    v7 = 4;
  if ( v11 )
    v7 = 5;
  if ( v12 )
    v7 = 6;
  if ( ptr )
    j_operator delete[](ptr);
  v13 = 0;
  do
    j_leveldb::DBImpl::TEST_CompactRange(v3, v13++, v6, v5);
  while ( v7 != v13 );
}


int __fastcall leveldb::MemTable::KeyComparator::operator()(int a1, int a2, int a3, unsigned int *a4)
{
  int v4; // r5@1
  int v5; // r2@1
  int v6; // r4@1
  char *v7; // r0@2
  unsigned __int64 v8; // r0@4
  unsigned __int64 v10; // [sp+4h] [bp-24h]@2
  char *v11; // [sp+Ch] [bp-1Ch]@4
  int v12; // [sp+10h] [bp-18h]@4
  char v13[4]; // [sp+14h] [bp-14h]@5

  v4 = a3;
  v5 = *(_BYTE *)a2;
  v6 = a1;
  if ( v5 & 0x80 )
  {
    v7 = j_leveldb::GetVarint32PtrFallback(
           (leveldb *)a2,
           (const char *)(a2 + 5),
           (const char *)&v10,
           (unsigned int *)(a2 + 5));
    v5 = v10;
  }
  else
    LODWORD(v10) = *(_BYTE *)a2;
    v7 = (char *)(a2 + 1);
  v11 = v7;
  v12 = v5;
  HIDWORD(v8) = *(_BYTE *)v4;
  if ( BYTE4(v8) & 0x80 )
    LODWORD(v8) = j_leveldb::GetVarint32PtrFallback((leveldb *)v4, (const char *)(v4 + 5), v13, a4);
    HIDWORD(v8) = *(_DWORD *)v13;
    *(_DWORD *)v13 = *(_BYTE *)v4;
    LODWORD(v8) = v4 + 1;
  v10 = v8;
  return j_leveldb::InternalKeyComparator::Compare(v6, (unsigned __int64 *)&v11, &v10);
}


leveldb::port::CondVar *__fastcall leveldb::port::CondVar::~CondVar(leveldb::port::CondVar *this)
{
  leveldb::port::CondVar *v1; // r4@1
  int v2; // r0@1
  char *v4; // r0@3

  v1 = this;
  v2 = j_pthread_cond_destroy((pthread_cond_t *)this);
  if ( v2 )
  {
    v4 = j_strerror(v2);
    j_fprintf((FILE *)((char *)&_sF + 168), "pthread %s: %s\n", "destroy cv", v4);
    j_abort();
  }
  return v1;
}


_DWORD *__fastcall leveldb::MemTableIterator::Prev(leveldb::MemTableIterator *this)
{
  __int64 v1; // kr00_8@1
  _DWORD *v2; // r10@1
  int v3; // r0@1
  int v4; // r9@3
  _DWORD *v5; // r6@4
  unsigned int *v6; // r3@4
  int v7; // r4@5
  unsigned __int64 v8; // r0@5
  _DWORD *result; // r0@13
  leveldb::MemTableIterator *v10; // [sp+4h] [bp-4h]@1
  unsigned __int64 v11; // [sp+8h] [bp+0h]@6
  unsigned __int64 v12; // [sp+10h] [bp+8h]@8
  char v13[4]; // [sp+18h] [bp+10h]@9

  v10 = this;
  v1 = *(_QWORD *)((char *)this + 20);
  v2 = (_DWORD *)*(_QWORD *)(v1 + 12);
  v3 = (*(_QWORD *)(v1 + 12) >> 32) - 1;
LABEL_3:
  v4 = v3 + 1;
  do
  {
    v5 = (_DWORD *)v2[v4];
    vFFFF0FA0();
    if ( v5 )
    {
      LODWORD(v8) = *v5;
      v7 = *(_DWORD *)HIDWORD(v1);
      HIDWORD(v8) = *(_BYTE *)*v5;
      if ( BYTE4(v8) & 0x80 )
      {
        LODWORD(v8) = j_leveldb::GetVarint32PtrFallback((leveldb *)v8, (const char *)(v8 + 5), (const char *)&v11, v6);
        HIDWORD(v8) = v11;
      }
      else
        LODWORD(v11) = *(_BYTE *)*v5;
        LODWORD(v8) = v8 + 1;
      v12 = v8;
      HIDWORD(v8) = *(_BYTE *)v7;
        LODWORD(v8) = j_leveldb::GetVarint32PtrFallback((leveldb *)v7, (const char *)(v7 + 5), v13, v6);
        HIDWORD(v8) = *(_DWORD *)v13;
        *(_DWORD *)v13 = *(_BYTE *)v7;
        LODWORD(v8) = v7 + 1;
      v11 = v8;
      if ( j_leveldb::InternalKeyComparator::Compare(v1, &v12, &v11) < 0 )
        v3 = v4 - 1;
        v2 = v5;
        goto LABEL_3;
    }
    --v4;
  }
  while ( v4 );
  *((_DWORD *)v10 + 6) = v2;
  result = *(_DWORD **)(*((_DWORD *)v10 + 5) + 12);
  if ( v2 == result )
    v2 = 0;
  return result;
}


int __fastcall leveldb::VersionSet::GetRange(int a1, __int64 *a2, const void **a3, const void **a4)
{
  const void **v4; // r4@1
  int v5; // r5@1
  __int64 *v6; // r11@1
  __int64 v7; // r0@1
  int v8; // r7@2
  unsigned int v9; // r8@2
  int v10; // r5@3
  int (__fastcall *v11)(int, int *, int *); // r3@4
  int v12; // r5@6
  int v13; // t1@6
  int (__fastcall *v14)(int, int *, int *); // r3@6
  int *v15; // r0@7
  int *v16; // r1@7
  int *v18; // [sp+4h] [bp-3Ch]@1
  int *v19; // [sp+8h] [bp-38h]@1
  int v20; // [sp+Ch] [bp-34h]@4
  int v21; // [sp+10h] [bp-30h]@4
  int v22; // [sp+14h] [bp-2Ch]@4
  int v23; // [sp+18h] [bp-28h]@4

  v4 = a4;
  v5 = a1;
  v6 = a2;
  v18 = (int *)a3;
  v19 = (int *)a4;
  sub_21E7EE0(a3, 0, *((_BYTE **)*a3 - 3), 0);
  sub_21E7EE0(v4, 0, *((_BYTE **)*v4 - 3), 0);
  v7 = *v6;
  if ( HIDWORD(v7) != (_DWORD)v7 )
  {
    v8 = v5 + 16;
    v9 = 0;
    do
    {
      v10 = *(_DWORD *)(v7 + 4 * v9);
      if ( v9 )
      {
        v11 = *(int (__fastcall **)(int, int *, int *))(*(_DWORD *)v8 + 8);
        v22 = *(_DWORD *)(v10 + 24);
        v23 = *(_DWORD *)(v22 - 12);
        v20 = *v18;
        v21 = *(_DWORD *)(v20 - 12);
        if ( v11(v8, &v22, &v20) <= -1 )
          EntityInteraction::setInteractText(v18, (int *)(v10 + 24));
        v13 = *(_DWORD *)(v10 + 28);
        v12 = v10 + 28;
        v14 = *(int (__fastcall **)(int, int *, int *))(*(_DWORD *)v8 + 8);
        v22 = v13;
        v23 = *(_DWORD *)(v13 - 12);
        v20 = *v19;
        if ( v14(v8, &v22, &v20) < 1 )
          goto LABEL_10;
        v15 = v19;
        v16 = (int *)v12;
      }
      else
        EntityInteraction::setInteractText(v18, (int *)(v10 + 24));
        v16 = (int *)(v10 + 28);
      EntityInteraction::setInteractText(v15, v16);
LABEL_10:
      v7 = *v6;
      ++v9;
    }
    while ( v9 < (HIDWORD(v7) - (signed int)v7) >> 2 );
  }
  return v7;
}


signed int __fastcall leveldb::ZlibCompressorBase::_window(leveldb::ZlibCompressorBase *this)
{
  int v1; // r1@1
  signed int result; // r0@1

  v1 = *((_BYTE *)this + 32);
  result = 15;
  if ( v1 )
    result = -15;
  return result;
}


signed int __fastcall leveldb::GetVarint32(int a1, int *a2)
{
  signed int v2; // r3@1
  int v3; // r2@2
  unsigned int v4; // r12@2
  int v5; // lr@2
  _BYTE *v6; // r3@3
  signed int result; // r0@4
  int v8; // r7@5
  int v9; // r6@5
  char v10; // r5@6
  signed int v11; // r2@6
  bool v12; // cf@6
  int v13; // r2@9
  int v14; // t1@9

  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 < 1 )
  {
    result = 0;
  }
  else
    v3 = *(_DWORD *)a1;
    v4 = *(_DWORD *)a1 + v2;
    v5 = **(_BYTE **)a1;
    if ( v5 & 0x80 )
    {
      v6 = (_BYTE *)(v3 + 1);
      v8 = 0;
      v9 = 0;
      while ( 1 )
      {
        v10 = v9 + 7;
        v11 = 0;
        v12 = (unsigned int)(v9 + 7) >= 0x1C;
        if ( (unsigned int)(v9 + 7) <= 0x1C )
          v12 = (unsigned int)v6 >= v4;
        if ( v12 )
          break;
        v14 = *v6++;
        v13 = v14;
        v8 |= (v5 & 0x7F) << v9;
        LOBYTE(v5) = v14;
        v9 += 7;
        if ( !(v14 & 0x80) )
        {
          *a2 = (v13 << v10) | v8;
          goto LABEL_11;
        }
      }
    }
    else
      *a2 = v5;
LABEL_11:
      v11 = 1;
      *(_DWORD *)a1 = v6;
      *(_DWORD *)(a1 + 4) = v4 - (_DWORD)v6;
    result = v11;
  return result;
}


void __fastcall leveldb::VersionEdit::Clear(leveldb::VersionEdit *this)
{
  leveldb::VersionEdit::Clear(this);
}


_QWORD *__fastcall leveldb::Block::Iter::value(_QWORD *result, int a2)
{
  *result = *(_QWORD *)(a2 + 48);
  return result;
}


int __fastcall leveldb::Arena::Arena(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 20) = 0;
  return result;
}


int __fastcall leveldb::Compaction::Compaction(int a1, int a2, int a3)
{
  int v3; // r4@1
  signed int v4; // r1@1

  v3 = a1;
  *(_DWORD *)a1 = a3;
  v4 = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a1 + 8) = v4;
  *(_DWORD *)(a1 + 12) = v4 >> 31;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = &unk_28898CC;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(v3 + 96) = v3 + 88;
  *(_DWORD *)(v3 + 100) = v3 + 88;
  *(_DWORD *)(a1 + 108) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 116) = 0;
  j_leveldb::VersionEdit::Clear((leveldb::VersionEdit *)(a1 + 24));
  *(_DWORD *)(v3 + 120) = 0;
  *(_DWORD *)(v3 + 124) = 0;
  *(_DWORD *)(v3 + 128) = 0;
  *(_DWORD *)(v3 + 132) = 0;
  *(_DWORD *)(v3 + 136) = 0;
  *(_DWORD *)(v3 + 140) = 0;
  *(_BYTE *)(v3 + 160) = 0;
  *(_DWORD *)(v3 + 152) = 0;
  *(_DWORD *)(v3 + 156) = 0;
  *(_DWORD *)(v3 + 144) = 0;
  *(_DWORD *)(v3 + 148) = 0;
  j___aeabi_memclr8_0(v3 + 168, 36);
  return v3;
}


int __fastcall leveldb::DBImpl::DBImpl(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int v4; // r7@1
  int *v5; // r6@1
  int v6; // r3@1
  int v7; // r0@1
  int v8; // r0@1
  char v9; // r0@1
  char v10; // r0@3
  char *v11; // r0@5
  char *v12; // r6@5
  unsigned int v13; // r7@5
  char *v14; // r0@5
  leveldb::WriteBatch *v15; // r0@5
  int v16; // r5@5
  void *v17; // r6@5
  void *v18; // r0@5

  v3 = a1;
  v4 = a2;
  v5 = a3;
  *(_DWORD *)a1 = &off_2725B50;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 8);
  v6 = a1;
  v7 = *(_DWORD *)a2;
  *(_DWORD *)(v3 + 8) = &off_2726110;
  *(_DWORD *)(v3 + 12) = v7;
  v8 = *(_DWORD *)(a2 + 1068);
  *(_DWORD *)(v6 + 16) = &off_2726130;
  *(_DWORD *)(v3 + 20) = v8;
  j_leveldb::SanitizeOptions(v3 + 24, a3, v3 + 8, v6 + 16, a2);
  v9 = 0;
  if ( *(_DWORD *)(v3 + 36) != *(_DWORD *)(v4 + 12) )
    v9 = 1;
  *(_BYTE *)(v3 + 1096) = v9;
  v10 = 0;
  if ( *(_DWORD *)(v3 + 48) != *(_DWORD *)(v4 + 24) )
    v10 = 1;
  *(_BYTE *)(v3 + 1097) = v10;
  sub_21E8AF4((int *)(v3 + 1100), v5);
  *(_DWORD *)(v3 + 1108) = 0;
  j_leveldb::port::Mutex::Mutex((leveldb::port::Mutex *)(v3 + 1112));
  *(_DWORD *)(v3 + 1116) = 0;
  j_leveldb::port::CondVar::CondVar((leveldb::port::CondVar *)(v3 + 1120), (leveldb::port::Mutex *)(v3 + 1112));
  *(_DWORD *)(v3 + 1128) = 0;
  *(_DWORD *)(v3 + 1132) = 0;
  j___aeabi_memclr4_0(v3 + 1140, 60);
  *(_DWORD *)(v3 + 1164) = 8;
  v11 = (char *)j_operator new(0x20u);
  v12 = v11;
  *(_DWORD *)(v3 + 1160) = v11;
  v13 = (2 * *(_DWORD *)(v3 + 1164) - 2) & 0xFFFFFFFC;
  v14 = (char *)j_operator new(0x200u);
  *(_DWORD *)&v12[v13] = v14;
  *(_DWORD *)(v3 + 1168) = v14;
  *(_DWORD *)(v3 + 1172) = v14;
  *(_DWORD *)(v3 + 1176) = v14 + 512;
  *(_DWORD *)(v3 + 1180) = &v12[v13];
  *(_DWORD *)(v3 + 1184) = v14;
  *(_DWORD *)(v3 + 1188) = v14;
  *(_DWORD *)(v3 + 1192) = v14 + 512;
  *(_DWORD *)(v3 + 1196) = &v12[v13];
  v15 = (leveldb::WriteBatch *)j_operator new(4u);
  *(_DWORD *)(v3 + 1200) = j_leveldb::WriteBatch::WriteBatch(v15);
  *(_DWORD *)(v3 + 1208) = &off_2725BE0;
  *(_DWORD *)(v3 + 1224) = v3 + 1208;
  *(_DWORD *)(v3 + 1228) = v3 + 1208;
  *(_DWORD *)(v3 + 1244) = 0;
  *(_DWORD *)(v3 + 1248) = 0;
  *(_DWORD *)(v3 + 1252) = 0;
  *(_DWORD *)(v3 + 1256) = 0;
  *(_DWORD *)(v3 + 1260) = 0;
  *(_DWORD *)(v3 + 1252) = v3 + 1244;
  *(_DWORD *)(v3 + 1256) = v3 + 1244;
  *(_BYTE *)(v3 + 1264) = 0;
  *(_DWORD *)(v3 + 1268) = 0;
  *(_DWORD *)(v3 + 1272) = 0;
  *(_DWORD *)(v3 + 1280) = 0;
  *(_DWORD *)(v3 + 1308) = 0;
  *(_DWORD *)(v3 + 1304) = 0;
  *(_DWORD *)(v3 + 1300) = 0;
  *(_DWORD *)(v3 + 1296) = 0;
  *(_DWORD *)(v3 + 1292) = 0;
  *(_DWORD *)(v3 + 1288) = 0;
  *(_DWORD *)(v3 + 1332) = 0;
  *(_DWORD *)(v3 + 1328) = 0;
  *(_DWORD *)(v3 + 1324) = 0;
  *(_DWORD *)(v3 + 1320) = 0;
  *(_DWORD *)(v3 + 1316) = 0;
  *(_DWORD *)(v3 + 1312) = 0;
  *(_DWORD *)(v3 + 1356) = 0;
  *(_DWORD *)(v3 + 1352) = 0;
  *(_DWORD *)(v3 + 1348) = 0;
  *(_DWORD *)(v3 + 1344) = 0;
  *(_DWORD *)(v3 + 1340) = 0;
  *(_DWORD *)(v3 + 1336) = 0;
  *(_DWORD *)(v3 + 1380) = 0;
  *(_DWORD *)(v3 + 1376) = 0;
  *(_DWORD *)(v3 + 1372) = 0;
  *(_DWORD *)(v3 + 1368) = 0;
  *(_DWORD *)(v3 + 1364) = 0;
  *(_DWORD *)(v3 + 1360) = 0;
  *(_DWORD *)(v3 + 1404) = 0;
  *(_DWORD *)(v3 + 1400) = 0;
  *(_DWORD *)(v3 + 1396) = 0;
  *(_DWORD *)(v3 + 1392) = 0;
  *(_DWORD *)(v3 + 1388) = 0;
  *(_DWORD *)(v3 + 1384) = 0;
  *(_DWORD *)(v3 + 1428) = 0;
  *(_DWORD *)(v3 + 1424) = 0;
  *(_DWORD *)(v3 + 1420) = 0;
  *(_DWORD *)(v3 + 1416) = 0;
  *(_DWORD *)(v3 + 1412) = 0;
  *(_DWORD *)(v3 + 1408) = 0;
  *(_DWORD *)(v3 + 1448) = 0;
  *(_DWORD *)(v3 + 1452) = 0;
  *(_DWORD *)(v3 + 1444) = 0;
  *(_DWORD *)(v3 + 1440) = 0;
  *(_DWORD *)(v3 + 1436) = 0;
  *(_DWORD *)(v3 + 1432) = 0;
  vFFFF0FA0();
  *(_DWORD *)(v3 + 1136) = 0;
  v16 = *(_DWORD *)(v3 + 44);
  v17 = j_operator new(0x10u);
  j_leveldb::TableCache::TableCache((int)v17, (int *)(v3 + 1100), v3 + 24, (leveldb *)(v16 - 10));
  *(_DWORD *)(v3 + 1104) = v17;
  v18 = j_operator new(0xE8u);
  *(_DWORD *)(v3 + 1276) = j_leveldb::VersionSet::VersionSet(
                             (unsigned int)v18,
                             (int *)(v3 + 1100),
                             v3 + 24,
                             (unsigned int)v17,
                             v3 + 8);
  return v3;
}


void __fastcall leveldb::SequentialFileEncrypted::Read(int a1, int a2, int a3, unsigned __int64 *a4, int a5)
{
  leveldb::SequentialFileEncrypted::Read(a1, a2, a3, a4, a5);
}


void __fastcall leveldb::BuildTable(leveldb::Status **a1, int *a2, unsigned int a3, int a4, char *a5, int a6, int a7)
{
  leveldb::BuildTable(a1, a2, a3, a4, a5, a6, a7);
}


signed int __fastcall leveldb::Block::Iter::Prev(int a1)
{
  int v1; // r4@1
  __int64 v2; // kr00_8@1
  __int64 v3; // r6@1
  int v4; // r9@2
  int v5; // r1@3
  int v6; // r3@5
  bool v7; // cf@5
  signed int result; // r0@8
  signed int v9; // r1@9

  v1 = a1;
  v2 = *(_QWORD *)(a1 + 24);
  v3 = *(_QWORD *)(a1 + 36);
  if ( *(_DWORD *)(v2 + HIDWORD(v2) + 4 * HIDWORD(v3)) >= (unsigned int)v3 )
  {
    v5 = -4 * HIDWORD(v3);
    while ( HIDWORD(v3) )
    {
      v6 = HIDWORD(v3) - 1;
      *(_DWORD *)(a1 + 40) = HIDWORD(v3) - 1;
      v5 += 4;
      v7 = *(_DWORD *)(v2 + HIDWORD(v2) - 4 + 4 * HIDWORD(v3)--) >= (unsigned int)v3;
      if ( !v7 )
      {
        v4 = -v5;
        HIDWORD(v3) = v6;
        goto LABEL_7;
      }
    }
    *(_DWORD *)(a1 + 36) = HIDWORD(v2);
    result = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(v1 + 40) = result;
  }
  else
    v4 = 4 * HIDWORD(v3);
LABEL_7:
    sub_21E7EE0((const void **)(a1 + 44), 0, *(_BYTE **)(*(_DWORD *)(a1 + 44) - 12), 0);
    *(_DWORD *)(v1 + 40) = HIDWORD(v3);
    *(_DWORD *)(v1 + 48) = *(_QWORD *)(v1 + 24) + *(_DWORD *)((*(_QWORD *)(v1 + 24) >> 32) + *(_QWORD *)(v1 + 24) + v4);
    *(_DWORD *)(v1 + 52) = 0;
    do
      result = j_leveldb::Block::Iter::ParseNextKey(v1);
      if ( result != 1 )
        break;
      result = *(_QWORD *)(v1 + 48) + (*(_QWORD *)(v1 + 48) >> 32) - *(_DWORD *)(v1 + 24);
      v9 = 0;
      if ( result < (unsigned int)v3 )
        v9 = 1;
      if ( 0 != result >> 31 )
        v9 = 0;
    while ( v9 );
  return result;
}


void __fastcall leveldb::DBImpl::RecoverLogFile(leveldb::DBImpl *this, leveldb::Version *a2, __int64 a3, leveldb::VersionEdit *a4, unsigned __int64 *a5, leveldb::Version *a6, unsigned __int64 *a7)
{
  leveldb::Version *v7; // r9@1
  unsigned int **v8; // r10@1
  __int64 v9; // r4@1
  leveldb *v10; // r5@3
  __int64 v11; // r2@3
  char *v12; // r0@3
  __int64 v13; // r2@6
  int v14; // r0@6
  void **v15; // r8@8
  void *v16; // r6@9
  unsigned int *v17; // r2@10
  void *v18; // r1@12
  int v19; // r7@20
  leveldb::WriteBatchInternal *v20; // r7@25
  unsigned int *v21; // r0@27
  leveldb::Status *v22; // r1@27
  leveldb::WriteBatchInternal *v23; // r8@39
  leveldb *v24; // r7@39
  __int64 v25; // r2@39
  char *v26; // r0@39
  int v27; // r0@42
  leveldb::WriteBatchInternal *v28; // r2@42
  int v29; // r7@42
  const leveldb::WriteBatch *v30; // r1@42
  const leveldb::WriteBatch *v31; // r8@42
  int v32; // r0@42
  unsigned __int64 v33; // r2@42
  unsigned __int64 v34; // r0@42
  signed int v35; // r7@42
  bool v36; // cf@44
  signed int v37; // r2@44
  void *v38; // r0@51
  leveldb::Status *v39; // r1@51
  unsigned int *v40; // r1@55
  signed int v41; // r0@60
  leveldb::VersionEdit *v42; // r8@24
  bool v43; // zf@69
  __int64 v44; // r2@76
  void *v45; // r6@76
  leveldb::log::Writer *v46; // r0@81
  leveldb::log::Writer *v47; // r0@81
  unsigned int *v48; // r2@84
  signed int v49; // r1@86
  leveldb::MemTable *v50; // r0@92
  leveldb::MemTable *v51; // r0@92
  void *v52; // r0@96
  leveldb::Status *v53; // r1@96
  unsigned int *v54; // r1@100
  int v55; // r0@105
  unsigned __int8 v56; // vf@105
  char *v57; // r0@108
  char *v58; // r0@110
  unsigned int *v59; // r2@112
  signed int v60; // r1@114
  unsigned int *v61; // r2@120
  signed int v62; // r1@122
  unsigned __int64 v63; // [sp+8h] [bp-E8h]@0
  leveldb::InternalKeyComparator *v64; // [sp+14h] [bp-DCh]@8
  int v65; // [sp+20h] [bp-D0h]@8
  leveldb::Status *v66; // [sp+24h] [bp-CCh]@96
  void *v67; // [sp+28h] [bp-C8h]@76
  void *v68; // [sp+2Ch] [bp-C4h]@74
  char *v69; // [sp+30h] [bp-C0h]@10
  leveldb::Status *v70; // [sp+3Ch] [bp-B4h]@51
  leveldb::Status *v71; // [sp+40h] [bp-B0h]@27
  void *v72; // [sp+44h] [bp-ACh]@21
  int v73; // [sp+48h] [bp-A8h]@21
  const char *v74; // [sp+4Ch] [bp-A4h]@21
  int v75; // [sp+50h] [bp-A0h]@21
  void *ptr; // [sp+54h] [bp-9Ch]@21
  char v77; // [sp+58h] [bp-98h]@8
  void *v78; // [sp+5Ch] [bp-94h]@8
  unsigned int v79; // [sp+60h] [bp-90h]@8
  char *v80; // [sp+64h] [bp-8Ch]@8
  char *v81; // [sp+68h] [bp-88h]@3
  void **v82; // [sp+ACh] [bp-44h]@6
  int v83; // [sp+B0h] [bp-40h]@6
  int v84; // [sp+B4h] [bp-3Ch]@6
  char *v85; // [sp+B8h] [bp-38h]@6
  int v86; // [sp+BCh] [bp-34h]@8
  leveldb::SequentialFile *v87; // [sp+C0h] [bp-30h]@8
  char *v88; // [sp+C4h] [bp-2Ch]@1

  v7 = a2;
  v8 = (unsigned int **)this;
  v9 = a3;
  j_leveldb::LogFileName((int *)&v88, (int *)a2 + 275);
  (*(void (__fastcall **)(unsigned int **))(**((_DWORD **)v7 + 1) + 8))(v8);
  if ( *v8 )
  {
    if ( !*((_BYTE *)v7 + 30) )
    {
      v10 = (leveldb *)*((_DWORD *)v7 + 9);
      j_leveldb::Status::ToString((leveldb::Status *)&v81, v8);
      LODWORD(v11) = v81;
      j_leveldb::Log(v10, (leveldb::Logger *)"Ignoring error %s", v11);
      v12 = v81 - 12;
      if ( (int *)(v81 - 12) != &dword_28898C0 )
      {
        v48 = (unsigned int *)(v81 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v49 = __ldrex(v48);
          while ( __strex(v49 - 1, v48) );
        }
        else
          v49 = (*v48)--;
        if ( v49 <= 0 )
          j_j_j_j__ZdlPv_9(v12);
      }
      if ( *v8 )
        j_operator delete[](*v8);
        *v8 = 0;
    }
  }
  else
    LODWORD(v13) = &v82;
    HIDWORD(v13) = 1;
    v82 = &off_2725BF0;
    v83 = *((_DWORD *)v7 + 1);
    v84 = *((_DWORD *)v7 + 9);
    v85 = v88;
    v14 = *((_BYTE *)v7 + 30);
    if ( *((_BYTE *)v7 + 30) )
      v14 = (int)v8;
    v86 = v14;
    j_leveldb::log::Reader::Reader((leveldb::log::Reader *)&v81, v87, v13, 0LL, v63);
    j_leveldb::Log(*((leveldb **)v7 + 9), (leveldb::Logger *)"Recovering log #%llu", v9);
    v15 = (void **)&v77;
    v80 = (char *)&unk_28898CC;
    v78 = &unk_257BC67;
    v79 = 0;
    j_leveldb::WriteBatch::WriteBatch((leveldb::WriteBatch *)&v77);
    v64 = (leveldb::Version *)((char *)v7 + 8);
    v65 = 0;
LABEL_9:
    v16 = 0;
    while ( j_leveldb::log::Reader::ReadRecord((int)&v81, (int)&v78, (const void **)&v80) == 1 )
      while ( 1 )
        if ( *v8 )
          v42 = (leveldb::VersionEdit *)v16;
          goto LABEL_66;
        v19 = v79;
        if ( v79 > 0xB )
          break;
        v74 = "log record too small";
        v75 = 20;
        v72 = &unk_257BC67;
        v73 = 0;
        j_leveldb::Status::Status(&ptr, 2, (int)&v74, (int)&v72);
        sub_1B348B8((int)&v82, v19, (unsigned int **)&ptr);
        if ( ptr )
          j_operator delete[](ptr);
        if ( !j_leveldb::log::Reader::ReadRecord((int)&v81, (int)&v78, (const void **)&v80) )
      v20 = (leveldb::WriteBatchInternal *)v15;
      j_leveldb::WriteBatchInternal::SetContents(v15, (unsigned __int64 *)&v78);
      if ( !v16 )
        v16 = j_operator new(0x3Cu);
        j_leveldb::MemTable::MemTable((leveldb::MemTable *)v16, v64);
        ++*((_DWORD *)v16 + 2);
      j_leveldb::WriteBatchInternal::InsertInto(
        (leveldb::WriteBatchInternal *)&v71,
        (const leveldb::WriteBatch *)v15,
        (leveldb::MemTable *)v16);
      v21 = *v8;
      v22 = v71;
      if ( (leveldb::Status *)*v8 == v71 )
        v18 = *v8;
      else
        if ( v21 )
          j_operator delete[](v21);
          v22 = v71;
        if ( v22 )
          v21 = (unsigned int *)j_leveldb::Status::CopyState(v22, (const char *)v22);
          v18 = (void *)v71;
          v18 = 0;
          v21 = 0;
        *v8 = v21;
      if ( v18 )
        j_operator delete[](v18);
        v21 = *v8;
      if ( v21 )
        v42 = (leveldb::VersionEdit *)v16;
        if ( *((_BYTE *)v7 + 30) )
        v23 = v20;
        v24 = (leveldb *)*((_DWORD *)v7 + 9);
        j_leveldb::Status::ToString((leveldb::Status *)&v69, v8);
        LODWORD(v25) = v69;
        j_leveldb::Log(v24, (leveldb::Logger *)"Ignoring error %s", v25);
        v18 = v69;
        v26 = v69 - 12;
        if ( (int *)(v69 - 12) != &dword_28898C0 )
          v17 = (unsigned int *)(v69 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v18 = (void *)__ldrex(v17);
            while ( __strex((unsigned int)v18 - 1, v17) );
          }
          else
            v18 = (void *)(*v17)--;
          if ( (signed int)v18 <= 0 )
            j_j_j_j__ZdlPv_9(v26);
        v20 = v23;
          j_operator delete[](*v8);
          *v8 = 0;
      v27 = j_leveldb::WriteBatchInternal::Sequence(v20, (const leveldb::WriteBatch *)v18);
      v28 = v20;
      v29 = v27;
      v31 = v30;
      v32 = j_leveldb::WriteBatchInternal::Count(v28, v30);
      v33 = *a7;
      v34 = __PAIR__((unsigned int)v31, v29) + v32 - 1;
      v35 = 0;
      if ( HIDWORD(v34) <= *a7 >> 32 )
        v35 = 1;
      v36 = (unsigned int)v34 >= (unsigned int)v33;
      v43 = (_DWORD)v34 == (_DWORD)v33;
      v37 = 0;
      if ( v43 || !v36 )
        v37 = 1;
      if ( HIDWORD(v34) != HIDWORD(v33) )
        v37 = v35;
      if ( !v37 )
        *a7 = v34;
      v15 = (void **)&v77;
      if ( (unsigned int)j_leveldb::MemTable::ApproximateMemoryUsage((leveldb::MemTable *)v16) > *((_DWORD *)v7 + 10) )
        *(_BYTE *)a5 = 1;
        j_leveldb::DBImpl::WriteLevel0Table((leveldb::DBImpl *)&v70, v7, (leveldb::VersionEdit *)v16, a6, 0);
        v38 = *v8;
        v39 = v70;
        if ( (leveldb::Status *)*v8 != v70 )
          if ( v38 )
            j_operator delete[](v38);
            v39 = v70;
          if ( v39 )
            v40 = (unsigned int *)j_leveldb::Status::CopyState(v39, (const char *)v39);
            v38 = (void *)v70;
            v38 = 0;
            v40 = 0;
          *v8 = v40;
        if ( v38 )
          j_operator delete[](v38);
        ++v65;
        v41 = *((_DWORD *)v16 + 2);
        *((_DWORD *)v16 + 2) = v41 - 1;
        if ( v16 && v41 <= 1 )
          j_leveldb::MemTable::~MemTable((leveldb::MemTable *)v16);
          j_operator delete(v16);
          v42 = 0;
        goto LABEL_9;
    v42 = (leveldb::VersionEdit *)v16;
LABEL_66:
    if ( v87 )
      (*(void (**)(void))(*(_DWORD *)v87 + 4))();
    if ( !*v8 )
      v43 = v65 == 0;
      if ( !v65 )
        v43 = a4 == (leveldb::VersionEdit *)1;
      if ( v43 && *((_BYTE *)v7 + 1088) )
        (*(void (__fastcall **)(void **))(**((_DWORD **)v7 + 1) + 44))(&v68);
        if ( v68 )
          j_operator delete[](v68);
          (*(void (__fastcall **)(void **))(**((_DWORD **)v7 + 1) + 20))(&v67);
          v45 = v67;
          if ( v67 )
            j_operator delete[](v67);
          if ( v68 )
            j_operator delete[](v68);
          if ( !v45 )
            LODWORD(v44) = v88;
            j_leveldb::Log(*((leveldb **)v7 + 9), (leveldb::Logger *)"Reusing old log %s \n", v44);
            v46 = (leveldb::log::Writer *)j_operator new(0x1Cu);
            v47 = j_leveldb::log::Writer::Writer(v46, *((leveldb::WritableFile **)v7 + 285), *(unsigned __int64 *)&v69);
            *((_QWORD *)v7 + 143) = v9;
            *((_DWORD *)v7 + 288) = v47;
            if ( v42 )
            {
              *((_DWORD *)v7 + 282) = v42;
            }
            else
              v50 = (leveldb::MemTable *)j_operator new(0x3Cu);
              v51 = j_leveldb::MemTable::MemTable(v50, v64);
              *((_DWORD *)v7 + 282) = v51;
              ++*((_DWORD *)v51 + 2);
            v42 = 0;
    if ( v42 )
      if ( !*v8 )
        j_leveldb::DBImpl::WriteLevel0Table((leveldb::DBImpl *)&v66, v7, v42, a6, 0);
        v52 = *v8;
        v53 = v66;
        if ( (leveldb::Status *)*v8 != v66 )
          if ( v52 )
            j_operator delete[](v52);
            v53 = v66;
          if ( v53 )
            v54 = (unsigned int *)j_leveldb::Status::CopyState(v53, (const char *)v53);
            v52 = (void *)v66;
            v52 = 0;
            v54 = 0;
          *v8 = v54;
        if ( v52 )
          j_operator delete[](v52);
      v55 = *((_DWORD *)v42 + 2);
      v56 = __OFSUB__(v55--, 1);
      *((_DWORD *)v42 + 2) = v55;
      if ( (unsigned __int8)((v55 < 0) ^ v56) | (v55 == 0) )
        j_leveldb::MemTable::~MemTable(v42);
        j_operator delete((void *)v42);
    j_leveldb::WriteBatch::~WriteBatch((leveldb::WriteBatch *)&v77);
    v57 = v80 - 12;
    if ( (int *)(v80 - 12) != &dword_28898C0 )
      v61 = (unsigned int *)(v80 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v62 = __ldrex(v61);
        while ( __strex(v62 - 1, v61) );
        v62 = (*v61)--;
      if ( v62 <= 0 )
        j_j_j_j__ZdlPv_9(v57);
    j_leveldb::log::Reader::~Reader((leveldb::log::Reader *)&v81);
    j_leveldb::log::Reader::Reporter::~Reporter((leveldb::log::Reader::Reporter *)&v82);
  v58 = v88 - 12;
  if ( (int *)(v88 - 12) != &dword_28898C0 )
    v59 = (unsigned int *)(v88 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v60 = __ldrex(v59);
      while ( __strex(v60 - 1, v59) );
    else
      v60 = (*v59)--;
    if ( v60 <= 0 )
      j_j_j_j__ZdlPv_9(v58);
}


void *__fastcall leveldb::Block::Iter::Seek(int a1)
{
  int v1; // r5@1
  int v2; // r0@1
  unsigned int v3; // r9@1
  unsigned int v4; // r8@2
  __int64 v5; // kr00_8@3
  const char *v6; // r11@3
  unsigned int v7; // r10@3
  int v8; // r4@3
  int v9; // r1@3
  int v10; // r6@4
  char *v11; // r0@4
  unsigned int *v12; // r3@4
  int v13; // r2@4
  char *v14; // r0@5
  char *v15; // r0@12
  int v16; // r7@24
  void *result; // r0@29
  int v18; // r0@33
  int v19; // [sp+4h] [bp-4Ch]@2
  int v20; // [sp+Ch] [bp-44h]@1
  int v21; // [sp+10h] [bp-40h]@33
  int v22; // [sp+14h] [bp-3Ch]@33
  char *v23; // [sp+18h] [bp-38h]@24
  unsigned int *v24; // [sp+1Ch] [bp-34h]@24
  char v25[4]; // [sp+20h] [bp-30h]@4
  char v26[4]; // [sp+24h] [bp-2Ch]@4
  char v27[4]; // [sp+28h] [bp-28h]@4

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 32);
  v3 = v2 - 1;
  v20 = v1;
  if ( v2 == 1 )
  {
    v16 = v1 + 20;
    v4 = 0;
LABEL_31:
    sub_21E7EE0((const void **)(v1 + 44), 0, *(_BYTE **)(*(_DWORD *)(v1 + 44) - 12), 0);
    *(_DWORD *)(v1 + 40) = v4;
    *(_DWORD *)(v1 + 48) = *(_QWORD *)(v1 + 24)
                         + *(_DWORD *)((*(_QWORD *)(v1 + 24) >> 32) + *(_QWORD *)(v1 + 24) + 4 * v4);
    *(_DWORD *)(v1 + 52) = 0;
    do
    {
      result = (void *)j_leveldb::Block::Iter::ParseNextKey(v1);
      if ( result != (void *)1 )
        break;
      v18 = *(_DWORD *)(v1 + 44);
      v21 = v18;
      v22 = *(_DWORD *)(v18 - 12);
      result = (void *)(*(int (**)(void))(**(_DWORD **)v16 + 8))();
    }
    while ( (signed int)result < 0 );
  }
  else
    v19 = v1 + 20;
    while ( 1 )
      v5 = *(_QWORD *)(v1 + 24);
      v6 = (const char *)(v5 + HIDWORD(v5));
      v7 = (v3 + v4 + 1) >> 1;
      v8 = *(_DWORD *)(v5 + HIDWORD(v5) + 4 * v7);
      v9 = v5 + v8;
      if ( (signed int)v5 + HIDWORD(v5) - ((signed int)v5 + v8) < 3 )
      v10 = *(_BYTE *)v9;
      *(_DWORD *)v27 = v10;
      v11 = (char *)(v9 + 1);
      v12 = (unsigned int *)*(_BYTE *)(v9 + 1);
      *(_DWORD *)v26 = v12;
      v13 = *(_BYTE *)(v9 + 2);
      *(_DWORD *)v25 = v13;
      if ( (char)(v13 | (unsigned __int8)v12 | v10) < 0 )
      {
        if ( v8 >= SHIDWORD(v5) || *(_BYTE *)v9 & 0x80 )
        {
          v11 = j_leveldb::GetVarint32PtrFallback((leveldb *)v9, v6, v27, v12);
          if ( !v11 )
            break;
        }
        else
          *(_DWORD *)v27 = *(_BYTE *)v9;
        if ( v11 >= v6 || *v11 & 0x80 )
          v15 = j_leveldb::GetVarint32PtrFallback((leveldb *)v11, v6, v26, v12);
          if ( !v15 )
          *(_DWORD *)v26 = (unsigned __int8)*v11;
          v15 = v11 + 1;
        if ( v15 >= v6 || (v13 = (unsigned __int8)*v15, v13 & 0x80) )
          v14 = j_leveldb::GetVarint32PtrFallback((leveldb *)v15, v6, v25, v12);
          if ( !v14 )
          v13 = *(_DWORD *)v25;
          *(_DWORD *)v25 = (unsigned __int8)*v15;
          v14 = v15 + 1;
        v10 = *(_DWORD *)v27;
        v12 = *(unsigned int **)v26;
      }
      else
        v14 = (char *)(v9 + 3);
      if ( v6 - v14 < (unsigned int)v12 + v13 )
        v14 = 0;
      if ( v10 || !v14 )
      v23 = v14;
      v24 = v12;
      v16 = v19;
      if ( (*(int (**)(void))(**(_DWORD **)v19 + 8))() >= 0 )
        v3 = v7 - 1;
        v4 = (v3 + v4 + 1) >> 1;
      v1 = v20;
      if ( v4 >= v3 )
        goto LABEL_31;
    result = j_leveldb::Block::Iter::CorruptionError(v20);
  return result;
}


void *__fastcall leveldb::NewLRUCache(leveldb *this, unsigned int a2)
{
  leveldb *v2; // r8@1
  void *v3; // r4@1
  int v4; // r6@1
  int v5; // r5@2
  _DWORD *v6; // r0@2
  unsigned int v7; // r0@3

  v2 = this;
  v3 = j_operator new(0x718u);
  v4 = 0;
  *(_DWORD *)v3 = &off_2725E5C;
  do
  {
    v5 = (int)v3 + v4;
    j_leveldb::port::Mutex::Mutex((leveldb::port::Mutex *)((char *)v3 + v4 + 12));
    *(_DWORD *)(v5 + 16) = 0;
    *(_DWORD *)(v5 + 112) = 0;
    v6 = j_operator new[](0x10u);
    *v6 = 0;
    v6[1] = 0;
    v4 += 112;
    v6[2] = 0;
    v6[3] = 0;
    *(_DWORD *)(v5 + 116) = v6;
    *(_DWORD *)(v5 + 108) = 4;
    *(_DWORD *)(v5 + 32) = v5 + 20;
    *(_DWORD *)(v5 + 36) = v5 + 20;
    *(_DWORD *)(v5 + 76) = v5 + 64;
    *(_DWORD *)(v5 + 80) = v5 + 64;
  }
  while ( v4 != 1792 );
  j_leveldb::port::Mutex::Mutex((leveldb::port::Mutex *)((char *)v3 + 1800));
  *((_DWORD *)v3 + 452) = 0;
  *((_DWORD *)v3 + 453) = 0;
  v7 = ((unsigned int)v2 + 15) >> 4;
  *((_DWORD *)v3 + 2) = v7;
  *((_DWORD *)v3 + 30) = v7;
  *((_DWORD *)v3 + 58) = v7;
  *((_DWORD *)v3 + 86) = v7;
  *((_DWORD *)v3 + 114) = v7;
  *((_DWORD *)v3 + 142) = v7;
  *((_DWORD *)v3 + 170) = v7;
  *((_DWORD *)v3 + 198) = v7;
  *((_DWORD *)v3 + 226) = v7;
  *((_DWORD *)v3 + 254) = v7;
  *((_DWORD *)v3 + 282) = v7;
  *((_DWORD *)v3 + 310) = v7;
  *((_DWORD *)v3 + 338) = v7;
  *((_DWORD *)v3 + 366) = v7;
  *((_DWORD *)v3 + 394) = v7;
  *((_DWORD *)v3 + 422) = v7;
  return v3;
}


leveldb::Version *__fastcall leveldb::Version::~Version(leveldb::Version *this)
{
  leveldb::Version *v1; // r5@1
  int v2; // r10@1
  __int64 v3; // r0@1
  int v4; // r4@2
  int v5; // r0@2
  int v6; // r4@2
  int v7; // t1@2
  int v8; // r1@2
  unsigned int v9; // r9@3
  unsigned int *v10; // r2@4
  signed int v11; // r1@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  int v14; // r7@20
  signed int v15; // r2@20
  int v16; // r1@22
  void *v17; // r0@22
  int v18; // r1@23
  void *v19; // r0@23
  void *v20; // r0@27
  void *v21; // r0@29
  void *v22; // r0@31
  void *v23; // r0@33
  void *v24; // r0@35
  void *v25; // r0@37
  void *v26; // r0@39

  v1 = this;
  v2 = 0;
  v3 = *(_QWORD *)((char *)this + 4);
  *(_DWORD *)(HIDWORD(v3) + 4) = v3;
  *(_DWORD *)(*((_DWORD *)v1 + 1) + 8) = HIDWORD(v3);
  do
  {
    v4 = (int)v1 + 12 * v2;
    v7 = *(_DWORD *)(v4 + 16);
    v6 = v4 + 16;
    v5 = v7;
    v8 = *(_DWORD *)(v6 + 4);
    if ( v8 != v7 )
    {
      v9 = 0;
      do
      {
        v14 = *(_DWORD *)(v5 + 4 * v9);
        v15 = (*(_DWORD *)v14)--;
        if ( v14 && v15 <= 1 )
        {
          v16 = *(_DWORD *)(v14 + 28);
          v17 = (void *)(v16 - 12);
          if ( (int *)(v16 - 12) != &dword_28898C0 )
          {
            v10 = (unsigned int *)(v16 - 4);
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
              j_j_j_j__ZdlPv_9(v17);
          }
          v18 = *(_DWORD *)(v14 + 24);
          v19 = (void *)(v18 - 12);
          if ( (int *)(v18 - 12) != &dword_28898C0 )
            v12 = (unsigned int *)(v18 - 4);
                v13 = __ldrex(v12);
              while ( __strex(v13 - 1, v12) );
              v13 = (*v12)--;
            if ( v13 <= 0 )
              j_j_j_j__ZdlPv_9(v19);
          j_operator delete((void *)v14);
          v5 = *(_DWORD *)v6;
          v8 = *(_DWORD *)(v6 + 4);
        }
        ++v9;
      }
      while ( v9 < (v8 - v5) >> 2 );
    }
    ++v2;
  }
  while ( v2 != 7 );
  v20 = (void *)*((_DWORD *)v1 + 22);
  if ( v20 )
    j_operator delete(v20);
  v21 = (void *)*((_DWORD *)v1 + 19);
  if ( v21 )
    j_operator delete(v21);
  v22 = (void *)*((_DWORD *)v1 + 16);
  if ( v22 )
    j_operator delete(v22);
  v23 = (void *)*((_DWORD *)v1 + 13);
  if ( v23 )
    j_operator delete(v23);
  v24 = (void *)*((_DWORD *)v1 + 10);
  if ( v24 )
    j_operator delete(v24);
  v25 = (void *)*((_DWORD *)v1 + 7);
  if ( v25 )
    j_operator delete(v25);
  v26 = (void *)*((_DWORD *)v1 + 4);
  if ( v26 )
    j_operator delete(v26);
  return v1;
}


int __fastcall leveldb::Compaction::AddInputDeletions(__int64 this)
{
  int v1; // r4@1
  int v2; // r5@1
  int v3; // r2@1
  unsigned int v4; // r7@2
  unsigned int v5; // r0@3
  unsigned int v6; // r2@3
  __int64 v7; // r0@4
  unsigned int v8; // r7@5
  unsigned int v9; // r0@6
  unsigned int v10; // r2@6
  int v12; // [sp+0h] [bp-38h]@3
  unsigned __int64 v13; // [sp+8h] [bp-30h]@3
  char v14; // [sp+14h] [bp-24h]@3

  v1 = this;
  v2 = HIDWORD(this) + 60;
  v3 = *(_QWORD *)(this + 120) >> 32;
  LODWORD(this) = *(_QWORD *)(this + 120);
  if ( v3 != (_DWORD)this )
  {
    v4 = 0;
    do
    {
      v6 = *(_QWORD *)(*(_DWORD *)(this + 4 * v4) + 8) >> 32;
      v5 = *(_QWORD *)(*(_DWORD *)(this + 4 * v4) + 8);
      v12 = *(_DWORD *)v1;
      v13 = __PAIR__(v6, v5);
      j_std::_Rb_tree<std::pair<int,unsigned long long>,std::pair<int,unsigned long long>,std::_Identity<std::pair<int,unsigned long long>>,std::less<std::pair<int,unsigned long long>>,std::allocator<std::pair<int,unsigned long long>>>::_M_insert_unique<std::pair<int,unsigned long long>>(
        (int)&v14,
        v2,
        (int)&v12);
      this = *(_QWORD *)(v1 + 120);
      ++v4;
    }
    while ( v4 < (HIDWORD(this) - (signed int)this) >> 2 );
  }
  v7 = *(_QWORD *)(v1 + 132);
  if ( HIDWORD(v7) != (_DWORD)v7 )
    v8 = 0;
      v10 = *(_QWORD *)(*(_DWORD *)(v7 + 4 * v8) + 8) >> 32;
      v9 = *(_QWORD *)(*(_DWORD *)(v7 + 4 * v8) + 8);
      v12 = *(_DWORD *)v1 + 1;
      v13 = __PAIR__(v10, v9);
      v7 = *(_QWORD *)(v1 + 132);
      ++v8;
    while ( v8 < (HIDWORD(v7) - (signed int)v7) >> 2 );
  return v7;
}


signed int __fastcall leveldb::Version::DebugString(leveldb::Version *this, int a2)
{
  const void **v2; // r5@1
  int v3; // r4@1
  int v4; // r8@2
  signed int result; // r0@2
  signed int v6; // t1@2
  _DWORD *v7; // r8@2
  int v8; // t1@2
  unsigned int v9; // r7@3
  unsigned int *v10; // r2@4
  signed int v11; // r1@6
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  _DWORD *v14; // r0@20
  int v15; // r1@20 OVERLAPPED
  int v16; // r10@20
  unsigned int v17; // r2@20
  _DWORD *v18; // r0@23
  __int64 v19; // r2@25
  _DWORD *v20; // r0@25
  int v21; // r1@25 OVERLAPPED
  int v22; // r4@25
  unsigned int v23; // r2@25
  _DWORD *v24; // r0@28
  __int64 v25; // r2@30
  void *v26; // r0@30
  void *v27; // r0@31
  int v28; // [sp+0h] [bp-48h]@1
  int v29; // [sp+Ch] [bp-3Ch]@2
  _DWORD *v30; // [sp+10h] [bp-38h]@2
  int v31; // [sp+14h] [bp-34h]@8
  int v32; // [sp+18h] [bp-30h]@4

  v28 = a2;
  v2 = (const void **)this;
  v3 = 0;
  *(_DWORD *)this = &unk_28898CC;
  do
  {
    v29 = v3;
    sub_21E7408(v2, "--- level ", 0xAu);
    j_leveldb::AppendNumberTo(v2);
    sub_21E7408(v2, " ---\n", 5u);
    v4 = v28 + 12 * v3;
    v6 = *(_DWORD *)(v4 + 20);
    v4 += 20;
    result = v6;
    v30 = (_DWORD *)v4;
    v8 = *(_DWORD *)(v4 - 4);
    v7 = (_DWORD *)(v4 - 4);
    if ( result != v8 )
    {
      v9 = 0;
      do
      {
        v14 = *v2;
        *(_QWORD *)&v15 = *(_QWORD *)((char *)*v2 - 12);
        v16 = v15 + 1;
        if ( v15 + 1 > v17 || *(v14 - 1) >= 1 )
        {
          sub_21E6FCC(v2, v15 + 1);
          v14 = *v2;
          v15 = *((_DWORD *)*v2 - 3);
        }
        *((_BYTE *)v14 + v15) = 32;
        v18 = *v2;
        if ( (int *)((char *)*v2 - 12) != &dword_28898C0 )
          *(v18 - 1) = 0;
          *(v18 - 3) = v16;
          *((_BYTE *)v18 + v16) = byte_26C67B8[0];
        v19 = *(_QWORD *)(*(_DWORD *)(*v7 + 4 * v9) + 8);
        j_leveldb::AppendNumberTo(v2);
        v20 = *v2;
        *(_QWORD *)&v21 = *(_QWORD *)((char *)*v2 - 12);
        v22 = v21 + 1;
        if ( v21 + 1 > v23 || *(v20 - 1) >= 1 )
          sub_21E6FCC(v2, v21 + 1);
          v20 = *v2;
          v21 = *((_DWORD *)*v2 - 3);
        *((_BYTE *)v20 + v21) = 58;
        v24 = *v2;
          *(v24 - 1) = 0;
          *(v24 - 3) = v22;
          *((_BYTE *)v24 + v22) = byte_26C67B8[0];
        v25 = *(_QWORD *)(*(_DWORD *)(*v7 + 4 * v9) + 16);
        sub_21E7408(v2, "[", 1u);
        j_leveldb::InternalKey::DebugString((leveldb::InternalKey *)&v32, (int *)(*(_DWORD *)(*v7 + 4 * v9) + 24));
        sub_21E72F0(v2, (const void **)&v32);
        v26 = (void *)(v32 - 12);
        if ( (int *)(v32 - 12) != &dword_28898C0 )
          v10 = (unsigned int *)(v32 - 4);
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
            j_j_j_j__ZdlPv_9(v26);
        sub_21E7408(v2, " .. ", 4u);
        j_leveldb::InternalKey::DebugString((leveldb::InternalKey *)&v31, (int *)(*(_DWORD *)(*v7 + 4 * v9) + 28));
        sub_21E72F0(v2, (const void **)&v31);
        v27 = (void *)(v31 - 12);
        if ( (int *)(v31 - 12) != &dword_28898C0 )
          v12 = (unsigned int *)(v31 - 4);
              v13 = __ldrex(v12);
            while ( __strex(v13 - 1, v12) );
            v13 = (*v12)--;
          if ( v13 <= 0 )
            j_j_j_j__ZdlPv_9(v27);
        sub_21E7408(v2, "]\n", 2u);
        ++v9;
        result = *v30 - *v7;
      }
      while ( v9 < result >> 2 );
    }
    v3 = v29 + 1;
  }
  while ( v29 != 6 );
  return result;
}


signed int __fastcall leveldb::log::Reader::ReadRecord(int a1, int a2, const void **a3)
{
  int v3; // r6@1
  const void **v4; // r10@1
  int v5; // r8@1
  unsigned int v6; // r2@1
  int v7; // r4@1
  unsigned int v8; // r3@1
  unsigned int v9; // r0@1
  unsigned int v10; // r1@1
  signed int v11; // r7@1
  bool v12; // cf@1
  signed int v13; // r2@1
  unsigned __int64 v14; // kr00_8@8
  int v15; // r3@8
  int v16; // r5@8
  _QWORD *v17; // r9@10
  int v18; // r1@12
  __int64 v19; // kr18_8@13
  unsigned __int64 v20; // kr10_8@13
  signed int v21; // r6@13
  signed int v22; // r7@15
  char v23; // r5@23
  unsigned int v24; // r2@23
  signed int v25; // r3@23
  char v26; // r7@23
  _BYTE *v27; // r11@27
  int v28; // r4@27
  unsigned int v29; // r8@27
  unsigned int v30; // r7@32
  int v31; // r0@33
  __int64 v32; // kr30_8@34
  unsigned __int64 v33; // kr28_8@34
  signed int v34; // r3@34
  signed int v35; // r1@36
  int v36; // r4@47
  int v37; // r0@49
  __int64 v38; // r2@50
  unsigned __int64 v39; // kr38_8@50
  signed int v40; // r7@50
  signed int v41; // r2@52
  void *v42; // r0@58
  bool v43; // zf@59
  unsigned int v44; // r4@60
  int v45; // r0@60
  __int64 v46; // kr48_8@61
  unsigned __int64 v47; // kr40_8@61
  signed int v48; // r3@61
  signed int v49; // r1@63
  char *v50; // r0@73
  int v51; // r0@75
  unsigned __int64 v52; // kr50_8@76
  signed int v53; // r1@78
  const void **v54; // r5@87
  unsigned int v55; // r10@88
  signed int v56; // r7@89
  int v57; // r0@89
  __int64 v58; // kr68_8@90
  unsigned __int64 v59; // kr60_8@90
  signed int v60; // r3@90
  signed int v61; // r4@102
  __int64 v62; // r0@104 OVERLAPPED
  int v63; // r2@104
  int v65; // [sp+4h] [bp-84h]@21
  _QWORD *v66; // [sp+8h] [bp-80h]@23
  unsigned __int64 v67; // [sp+Ch] [bp-7Ch]@23
  unsigned __int64 *v68; // [sp+14h] [bp-74h]@1
  char *v69; // [sp+18h] [bp-70h]@23
  unsigned int v70; // [sp+1Ch] [bp-6Ch]@23
  void *v71; // [sp+24h] [bp-64h]@33
  int v72; // [sp+28h] [bp-60h]@49
  void *ptr; // [sp+2Ch] [bp-5Ch]@49
  char *v74; // [sp+30h] [bp-58h]@33
  size_t v75; // [sp+34h] [bp-54h]@33
  char s[4]; // [sp+38h] [bp-50h]@11
  int v77; // [sp+3Ch] [bp-4Ch]@33
  RakNet *v78; // [sp+60h] [bp-28h]@1

  v3 = a1;
  v4 = a3;
  v5 = a2;
  v78 = _stack_chk_guard;
  v7 = a1 + 32;
  v6 = *(_DWORD *)(a1 + 32);
  v8 = *(_DWORD *)(a1 + 36);
  v9 = *(_DWORD *)(a1 + 52);
  v10 = *(_DWORD *)(v7 + 16);
  v68 = (unsigned __int64 *)(v7 + 16);
  v11 = 0;
  v12 = v6 >= v10;
  v13 = 0;
  if ( !v12 )
    v13 = 1;
  if ( v8 < v9 )
    v11 = 1;
  if ( v8 == v9 )
    v11 = v13;
  if ( v11 )
  {
    v14 = __PAIR__(v9, v10) - (v10 & 0x7FFF);
    v15 = (v14 + 0x8000) >> 32;
    v16 = v14 + 0x8000;
    if ( (*(_DWORD *)(v7 + 16) & 0x7FFFu) <= 0x7FFA )
    {
      v15 = (__PAIR__(v9, v10) - (v10 & 0x7FFF)) >> 32;
      v16 = *(_DWORD *)(v7 + 16) - (*(_DWORD *)(v7 + 16) & 0x7FFF);
    }
    *(_DWORD *)(v3 + 40) = v16;
    v17 = (_QWORD *)(v3 + 40);
    *(_DWORD *)(v3 + 44) = v15;
    if ( v16 | v15 )
      (*(void (__fastcall **)(char *))(**(_DWORD **)v3 + 12))(s);
      if ( *(_DWORD *)s )
      {
        v18 = *(_DWORD *)(v3 + 4);
        if ( !v18 )
          goto LABEL_114;
        v20 = *v68;
        v19 = *v17 - v16 - *(_DWORD *)(v3 + 20);
        v21 = 0;
        if ( HIDWORD(v19) < *v68 >> 32 )
          v21 = 1;
        v22 = 0;
        if ( (unsigned int)v19 < (unsigned int)v20 )
          v22 = 1;
        if ( HIDWORD(v19) != HIDWORD(v20) )
          v22 = v21;
        if ( !v22 )
        {
          (*(void (__fastcall **)(int, int, char *))(*(_DWORD *)v18 + 8))(v18, v16, s);
          if ( *(_DWORD *)s )
            j_operator delete[](*(void **)s);
        }
        else
LABEL_114:
          j_operator delete[](*(void **)s);
        v61 = 0;
        goto LABEL_109;
      }
    v65 = v7;
  }
  else
  v23 = 0;
  sub_21E7EE0(v4, 0, *((_BYTE **)*v4 - 3), 0);
  v26 = 0;
  *(_DWORD *)v5 = &unk_257BC67;
  *(_DWORD *)(v5 + 4) = 0;
  v66 = (_QWORD *)v5;
  v69 = (char *)&unk_257BC67;
  v70 = 0;
  v67 = 0LL;
  do
LABEL_27:
    while ( 1 )
      v25 = j_leveldb::log::Reader::ReadPhysicalRecord(v3, (int)&v69, v24, v25);
      v27 = (_BYTE *)v70;
      v29 = (*v17 - 7LL - *(_DWORD *)(v3 + 20) - (unsigned __int64)v70) >> 32;
      v28 = *(_DWORD *)v17 - 7 - *(_DWORD *)(v3 + 20) - v70;
      v24 = *(_BYTE *)(v3 + 56);
      if ( *(_BYTE *)(v3 + 56) )
        break;
      switch ( v25 )
        case 2:
LABEL_31:
          if ( v26 & 1 )
          {
            v30 = *((_DWORD *)*v4 - 3);
            if ( v30 )
            {
              *(_DWORD *)s = "partial record without end(2)";
              v77 = 29;
              v74 = (char *)&unk_257BC67;
              v75 = 0;
              j_leveldb::Status::Status(&v71, 2, (int)s, (int)&v74);
              v31 = *(_DWORD *)(v3 + 4);
              if ( v31 )
              {
                v33 = *v68;
                v32 = *v17 - v30 - *(_DWORD *)(v3 + 20);
                v34 = 0;
                if ( HIDWORD(v32) < *v68 >> 32 )
                  v34 = 1;
                v35 = 0;
                if ( (unsigned int)v32 < (unsigned int)v33 )
                  v35 = 1;
                if ( HIDWORD(v32) != HIDWORD(v33) )
                  v35 = v34;
                if ( !v35 )
                  (*(void (**)(void))(*(_DWORD *)v31 + 8))();
              }
              if ( v71 )
                j_operator delete[](v71);
              v23 = 0;
            }
          }
          sub_21E8190((void **)v4, v69, v27);
          v26 = 1;
          v67 = __PAIR__(v28, v29);
          continue;
        case 6:
LABEL_59:
          v43 = (v26 & 1) == 0;
          v26 = 0;
          if ( v43 )
            continue;
          v44 = *((_DWORD *)*v4 - 3);
          *(_DWORD *)s = "error in middle of record";
          v77 = 25;
          v74 = (char *)&unk_257BC67;
          v75 = 0;
          j_leveldb::Status::Status(&v71, 2, (int)s, (int)&v74);
          v45 = *(_DWORD *)(v3 + 4);
          if ( v45 )
            v47 = *v68;
            v46 = *v17 - v44 - *(_DWORD *)(v3 + 20);
            v48 = 0;
            if ( HIDWORD(v46) < *v68 >> 32 )
              v48 = 1;
            v49 = 0;
            if ( (unsigned int)v46 < (unsigned int)v47 )
              v49 = 1;
            if ( HIDWORD(v46) != HIDWORD(v47) )
              v49 = v48;
            if ( !v49 )
              (*(void (**)(void))(*(_DWORD *)v45 + 8))();
          v42 = v71;
          goto LABEL_24;
        case 3:
            sub_21E7408(v4, v69, v70);
            v26 = 1;
          *(_DWORD *)s = "missing start of fragmented record(1)";
          v77 = 37;
          v50 = (char *)&unk_257BC67;
          goto LABEL_75;
        case 4:
            LODWORD(v62) = *v4;
            HIDWORD(v62) = *((_DWORD *)*v4 - 3);
            *v66 = v62;
            HIDWORD(v62) = HIDWORD(v67);
            v63 = v67;
            *(_QWORD *)v65 = *(__int64 *)((char *)&v62 + 4);
LABEL_105:
            v61 = 1;
            goto LABEL_109;
          *(_DWORD *)s = "missing start of fragmented record(2)";
LABEL_75:
          v74 = v50;
          v51 = *(_DWORD *)(v3 + 4);
          if ( v51 )
            v52 = *v68;
            v24 = (*v17 - (unsigned int)v27 - (unsigned __int64)*(_DWORD *)(v3 + 20)) >> 32;
            v25 = 0;
            if ( v24 < *v68 >> 32 )
              v25 = 1;
            v53 = 0;
            if ( *(_DWORD *)v17 - (signed int)v27 - *(_DWORD *)(v3 + 20) < (unsigned int)v52 )
              v53 = 1;
            if ( v24 != HIDWORD(v52) )
              v53 = v25;
            if ( !v53 )
              (*(void (**)(void))(*(_DWORD *)v51 + 8))();
          if ( v71 )
            j_operator delete[](v71);
          v23 = 0;
          break;
        case 1:
LABEL_87:
          v54 = v4;
            v55 = *((_DWORD *)*v4 - 3);
            if ( v55 )
              *(_DWORD *)s = "partial record without end(1)";
              v56 = 0;
              v57 = *(_DWORD *)(v3 + 4);
              if ( v57 )
                v59 = *v68;
                v58 = *v17 - v55 - *(_DWORD *)(v3 + 20);
                v60 = 0;
                if ( HIDWORD(v58) < *v68 >> 32 )
                  v60 = 1;
                if ( (unsigned int)v58 < (unsigned int)v59 )
                  v56 = 1;
                if ( HIDWORD(v58) != HIDWORD(v59) )
                  v56 = v60;
                if ( !v56 )
                  (*(void (**)(void))(*(_DWORD *)v57 + 8))();
          sub_21E7EE0(v54, 0, *((_BYTE **)*v54 - 3), 0);
          *v66 = *(_QWORD *)&v69;
          *(_DWORD *)v65 = v28;
          *(_DWORD *)(v65 + 4) = v29;
          goto LABEL_105;
        case 5:
          goto LABEL_101;
        default:
def_1B3A578:
          j_snprintf(s, 0x28u, "unknown record type %u");
            v36 = *((_DWORD *)*v4 - 3);
          else
            v36 = 0;
          v74 = s;
          v75 = j_strlen_0(s);
          v71 = &unk_257BC67;
          v72 = 0;
          j_leveldb::Status::Status(&ptr, 2, (int)&v74, (int)&v71);
          v37 = *(_DWORD *)(v3 + 4);
          if ( v37 )
            v39 = *v68;
            v38 = *v17 - (unsigned int)&v27[v36] - *(_DWORD *)(v3 + 20);
            v40 = 0;
            if ( HIDWORD(v38) < *v68 >> 32 )
              v40 = 1;
            v12 = (unsigned int)v38 >= (unsigned int)v39;
            v41 = 0;
            if ( !v12 )
              v41 = 1;
            if ( HIDWORD(v38) != HIDWORD(v39) )
              v41 = v40;
            if ( !v41 )
              (*(void (**)(void))(*(_DWORD *)v37 + 8))();
          v42 = ptr;
LABEL_24:
          if ( v42 )
            j_operator delete[](v42);
          sub_21E7EE0(v4, 0, *((_BYTE **)*v4 - 3), 0);
  while ( v25 == 3 );
  *(_BYTE *)(v3 + 56) = v23;
  switch ( v25 )
    case 4:
      goto LABEL_27;
    case 2:
      goto LABEL_31;
    default:
      goto def_1B3A578;
    case 6:
      goto LABEL_59;
    case 1:
      goto LABEL_87;
    case 5:
      break;
LABEL_101:
  if ( v26 & 1 )
    v61 = 0;
    sub_21E7EE0(v4, 0, *((_BYTE **)*v4 - 3), 0);
LABEL_109:
  if ( _stack_chk_guard != v78 )
    j___stack_chk_fail_0(_stack_chk_guard - v78);
  return v61;
}


signed int __fastcall leveldb::SomeFileOverlapsRange(int a1, int a2, unsigned __int64 *a3, __int64 *a4, int a5)
{
  int v5; // r6@1
  int v6; // r10@1
  int v7; // r9@1
  __int64 *v8; // r7@1
  unsigned __int64 *v9; // r5@1
  char *v10; // r1@3
  unsigned int v11; // r7@3
  int v12; // r0@3
  signed int v13; // r2@3
  unsigned int v14; // r8@4
  char *v15; // r0@11
  unsigned int *v16; // r2@12
  signed int v17; // r1@14
  int v18; // r1@16
  unsigned int v19; // r4@18
  int v20; // r6@19
  int (__fastcall *v21)(int, __int64 *, __int64 *); // r3@19
  int v22; // r0@19
  int (__fastcall *v23)(int, int, __int64 *); // r3@20
  int v24; // r0@20
  unsigned __int64 v25; // r0@24
  int v26; // r0@26
  int (__fastcall *v27)(int, int, __int64 *); // r3@26
  int v28; // r1@26
  int v29; // r1@26
  signed int result; // r0@26
  int v31; // r6@29
  int v32; // r0@31
  int (__fastcall *v33)(int, int, __int64 *); // r3@31
  int v34; // r1@31
  int v35; // r0@35
  int (__fastcall *v36)(int, __int64 *, __int64 *); // r3@35
  int v37; // r1@35
  char *v38; // [sp+4h] [bp-4Ch]@3
  int v39; // [sp+8h] [bp-48h]@3
  char *v40; // [sp+Ch] [bp-44h]@3
  __int64 v41; // [sp+10h] [bp-40h]@3
  int v42; // [sp+18h] [bp-38h]@3
  int v43; // [sp+1Ch] [bp-34h]@3
  int v44; // [sp+20h] [bp-30h]@3

  v5 = a1;
  v6 = a5;
  v7 = *(_DWORD *)(a1 + 4);
  v8 = a4;
  v9 = a3;
  if ( !a2 )
  {
    v18 = *a3;
    if ( *a3 >> 32 != v18 )
    {
      if ( a4 )
      {
        v19 = 0;
        if ( a5 )
        {
          while ( 1 )
          {
            v20 = *(_DWORD *)(v18 + 4 * v19);
            v21 = *(int (__fastcall **)(int, __int64 *, __int64 *))(*(_DWORD *)v7 + 8);
            v22 = *(_DWORD *)(*(_DWORD *)(v20 + 28) - 12);
            LODWORD(v41) = *(_DWORD *)(v20 + 28);
            HIDWORD(v41) = v22 - 8;
            if ( v21(v7, v8, &v41) <= 0 )
            {
              v23 = *(int (__fastcall **)(int, int, __int64 *))(*(_DWORD *)v7 + 8);
              v24 = *(_DWORD *)(*(_DWORD *)(v20 + 24) - 12);
              LODWORD(v41) = *(_DWORD *)(v20 + 24);
              HIDWORD(v41) = v24 - 8;
              if ( v23(v7, a5, &v41) >= 0 )
                break;
            }
            v18 = *v9;
            if ( ++v19 >= (signed int)((*v9 >> 32) - v18) >> 2 )
              return 0;
          }
        }
        else
            v35 = *(_DWORD *)(*(_DWORD *)(v18 + 4 * v19) + 28);
            v36 = *(int (__fastcall **)(int, __int64 *, __int64 *))(*(_DWORD *)v7 + 8);
            v37 = *(_DWORD *)(v35 - 12);
            LODWORD(v41) = v35;
            HIDWORD(v41) = v37 - 8;
            if ( v36(v7, v8, &v41) <= 0 )
              break;
            ++v19;
            result = 0;
            if ( v19 >= (signed int)((*v9 >> 32) - v18) >> 2 )
              return result;
      }
      else
        v31 = 0;
        while ( a5 )
          v32 = *(_DWORD *)(*(_DWORD *)(v18 + 4 * v31) + 24);
          v33 = *(int (__fastcall **)(int, int, __int64 *))(*(_DWORD *)v7 + 8);
          v34 = *(_DWORD *)(v32 - 12);
          LODWORD(v41) = v32;
          HIDWORD(v41) = v34 - 8;
          if ( v33(v7, a5, &v41) > -1 )
            break;
          v18 = *v9;
          if ( ++v31 >= (unsigned int)((signed int)((*v9 >> 32) - v18) >> 2) )
            return 0;
      return 1;
    }
    return 0;
  }
  if ( a4 )
    v40 = (char *)&unk_28898CC;
    v41 = *a4;
    v43 = 0xFFFFFF;
    v42 = -1;
    v44 = 1;
    j_leveldb::AppendInternalKey((const void **)&v40, (unsigned __int64 *)&v41);
    v10 = v40;
    v11 = 0;
    v38 = v40;
    v39 = *((_DWORD *)v40 - 3);
    v12 = *v9;
    v13 = (*v9 >> 32) - v12;
    if ( v13 >> 2 )
      v11 = v13 >> 2;
      v14 = 0;
      while ( 1 )
        LODWORD(v41) = *(_DWORD *)(*(_DWORD *)(v12 + 4 * ((v11 + v14) >> 1)) + 28);
        HIDWORD(v41) = *(_DWORD *)(v41 - 12);
        if ( j_leveldb::InternalKeyComparator::Compare(v5, (unsigned __int64 *)&v41, (unsigned __int64 *)&v38) >= 0 )
          v11 = (v11 + v14) >> 1;
          v14 = ((v11 + v14) >> 1) + 1;
        if ( v14 >= v11 )
          break;
        v12 = *(_DWORD *)v9;
      v10 = v40;
      v6 = a5;
    v15 = v10 - 12;
    if ( (int *)(v10 - 12) != &dword_28898C0 )
      v16 = (unsigned int *)(v10 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 <= 0 )
        j_j_j_j__ZdlPv_9(v15);
  else
  v25 = *v9;
  if ( v11 >= (HIDWORD(v25) - (signed int)v25) >> 2 )
  if ( !v6 )
    return 1;
  v26 = *(_DWORD *)(*(_DWORD *)(v25 + 4 * v11) + 24);
  v27 = *(int (__fastcall **)(int, int, __int64 *))(*(_DWORD *)v7 + 8);
  v28 = *(_DWORD *)(v26 - 12);
  LODWORD(v41) = v26;
  HIDWORD(v41) = v28 - 8;
  v29 = v27(v7, v6, &v41);
  result = 0;
  if ( v29 > -1 )
    result = 1;
  return result;
}


signed int __fastcall leveldb::VersionSet::ReuseManifest(int a1, _DWORD *a2, const void **a3)
{
  int v3; // r4@1
  _DWORD *v4; // r5@1
  signed int v5; // r6@1
  signed int v6; // r0@2
  bool v7; // zf@2
  signed int v8; // r0@8
  signed int v9; // r1@8
  bool v10; // cf@10
  bool v11; // zf@10
  signed int v12; // r0@10
  __int64 v13; // r2@15
  leveldb *v14; // r6@15
  __int64 v15; // r2@16
  char *v16; // r0@16
  leveldb::log::Writer *v17; // r0@18
  unsigned int *v19; // r2@22
  signed int v20; // r1@24
  char *v21; // [sp+4h] [bp-34h]@16
  void *v22; // [sp+8h] [bp-30h]@15
  void *ptr; // [sp+Ch] [bp-2Ch]@6
  unsigned __int64 v24; // [sp+10h] [bp-28h]@2
  char v25; // [sp+18h] [bp-20h]@2
  int v26; // [sp+20h] [bp-18h]@2

  v3 = a1;
  v4 = a2;
  v5 = 0;
  if ( *(_BYTE *)(*(_DWORD *)(a1 + 8) + 1064) )
  {
    v24 = 0LL;
    v6 = j_leveldb::ParseFileName(a3, (int)&v25, &v26);
    v7 = v26 == 3;
    if ( v26 == 3 )
      v7 = v6 == 1;
    if ( v7 )
    {
      (*(void (__fastcall **)(void **))(**(_DWORD **)v3 + 44))(&ptr);
      if ( ptr )
      {
        j_operator delete[](ptr);
        v5 = 0;
      }
      else
        v8 = *(_DWORD *)(*(_DWORD *)(v3 + 8) + 36);
        v9 = 0;
        if ( (unsigned int)v24 >= v8 )
          v9 = 1;
        v10 = HIDWORD(v24) >= v8 >> 31;
        v11 = HIDWORD(v24) == v8 >> 31;
        v12 = 0;
        if ( v10 )
          v12 = 1;
        if ( v11 )
          v12 = v9;
        if ( !v12 )
        {
          (*(void (__fastcall **)(void **))(**(_DWORD **)v3 + 20))(&v22);
          v14 = *(leveldb **)(*(_DWORD *)(v3 + 8) + 12);
          if ( v22 )
          {
            j_leveldb::Status::ToString((leveldb::Status *)&v21, (unsigned int **)&v22);
            LODWORD(v15) = v21;
            j_leveldb::Log(v14, (leveldb::Logger *)"Reuse MANIFEST: %s\n", v15);
            v16 = v21 - 12;
            if ( (int *)(v21 - 12) != &dword_28898C0 )
            {
              v19 = (unsigned int *)(v21 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v20 = __ldrex(v19);
                while ( __strex(v20 - 1, v19) );
              }
              else
                v20 = (*v19)--;
              if ( v20 <= 0 )
                j_j_j_j__ZdlPv_9(v16);
            }
            v5 = 0;
          }
          else
            LODWORD(v13) = *v4;
            j_leveldb::Log(v14, (leveldb::Logger *)"Reusing MANIFEST %s\n", v13);
            v17 = (leveldb::log::Writer *)j_operator new(0x1Cu);
            *(_DWORD *)(v3 + 68) = j_leveldb::log::Writer::Writer(v17, *(leveldb::WritableFile **)(v3 + 64), v24);
            v5 = 1;
            *(_QWORD *)(v3 + 32) = *(_QWORD *)&v25;
            j_operator delete[](v22);
        }
    }
  }
  return v5;
}


int __fastcall leveldb::EnvPosixTestHelper::SetReadOnlyMMapLimit(int result, int a2)
{
  dword_27B57D0 = result;
  return result;
}


char *__fastcall leveldb::DBImpl::DoCompactionWork(leveldb::Status **a1, int a2, int a3)
{
  leveldb::Status **v3; // r9@1
  int v4; // r8@1
  int v5; // r10@1
  int v6; // r0@1
  unsigned int v7; // r1@1
  __int64 v8; // r2@1
  int v9; // r0@1
  _QWORD *v10; // r0@2
  _DWORD *v11; // r7@4
  const char *v12; // r11@5
  const char *v13; // r5@7
  leveldb::Status **v14; // r4@7
  unsigned int v15; // r9@7
  int v16; // r1@7
  int v17; // r11@7
  __int64 v18; // r0@9
  bool v19; // cf@9
  __int64 v20; // r2@9
  leveldb::Status *v21; // r0@12
  leveldb::Status *v22; // r1@12
  leveldb::Status *v23; // r1@16
  char *v24; // r1@24 OVERLAPPED
  unsigned int v25; // r3@24
  unsigned int v26; // r2@24
  _BYTE *v27; // r2@24 OVERLAPPED
  int (*v28)(void); // r3@26
  int v29; // r0@26
  signed __int64 v30; // r2@26
  __int64 v31; // kr18_8@29
  signed int v32; // r2@29
  bool v33; // zf@31
  signed int v34; // r3@31
  signed int v35; // r1@37
  signed int v36; // r0@39
  signed int v37; // r0@44
  leveldb::TableBuilder *v38; // r0@47
  leveldb::Status *v39; // r0@48
  leveldb::Status *v40; // r1@48
  leveldb::Status *v41; // r1@52
  __int64 v42; // r0@61
  leveldb::TableBuilder *v43; // r5@63
  unsigned int v44; // r0@63
  unsigned int v45; // r1@63
  __int64 v46; // r2@63
  signed int v47; // r0@63
  bool v48; // zf@65
  signed int v49; // r1@65
  leveldb::Status *v50; // r0@70
  leveldb::Status *v51; // r1@70
  leveldb::Status *v52; // r1@74
  int v53; // r5@84
  int v54; // r5@88
  leveldb::Status *v55; // r0@89
  leveldb::Status *v56; // r1@89
  leveldb::Status *v57; // r1@93
  leveldb::Status *v58; // r0@100
  leveldb::Status *v59; // r1@100
  leveldb::Status *v60; // r1@104
  leveldb::Status *v61; // r0@111
  leveldb::Status *v62; // r1@111
  leveldb::Status *v63; // r1@115
  int v64; // r9@122
  unsigned int v65; // r1@122
  unsigned int v66; // r11@122
  int v67; // r1@122 OVERLAPPED
  int v68; // r2@122
  signed int v69; // r2@122
  signed int v70; // r2@123
  signed int v71; // r3@123
  unsigned int v72; // r5@123
  __int64 v73; // r6@123
  unsigned int v74; // r4@124
  __int64 v75; // kr30_8@127
  int v76; // r2@128
  int v77; // r3@129
  unsigned __int64 v78; // kr38_8@129
  __int64 v79; // kr40_8@130
  unsigned int v80; // r4@131
  __int64 *v81; // r1@132
  unsigned int v82; // r2@132
  __int64 v83; // kr48_8@133
  unsigned __int64 v84; // kr50_8@133
  int v85; // r0@134
  int v86; // r1@134
  int v87; // r2@134
  int v88; // r1@134
  int v89; // r2@134
  leveldb::Status *v90; // r0@134
  leveldb::Status *v91; // r1@135
  leveldb::Status *v92; // r1@139
  leveldb *v93; // r5@148
  __int64 v94; // r2@148
  char *v95; // r0@148
  char *result; // r0@149
  unsigned int *v97; // r2@151
  signed int v98; // r1@153
  unsigned int v99; // [sp+Ch] [bp-114h]@1
  int v100; // [sp+10h] [bp-110h]@1
  __int64 *v101; // [sp+14h] [bp-10Ch]@4
  signed __int64 v102; // [sp+20h] [bp-100h]@5
  char v103; // [sp+28h] [bp-F8h]@5
  leveldb::Status **v104; // [sp+28h] [bp-F8h]@120
  unsigned int v105; // [sp+2Ch] [bp-F4h]@5
  unsigned int v106; // [sp+30h] [bp-F0h]@4
  leveldb::port::Mutex *v107; // [sp+34h] [bp-ECh]@4
  leveldb::Status *v108; // [sp+38h] [bp-E8h]@135
  leveldb::Status *v109; // [sp+3Ch] [bp-E4h]@111
  leveldb::Status *v110; // [sp+40h] [bp-E0h]@100
  void *v111; // [sp+44h] [bp-DCh]@89
  int v112; // [sp+48h] [bp-D8h]@89
  const char *v113; // [sp+4Ch] [bp-D4h]@89
  int v114; // [sp+50h] [bp-D0h]@89
  leveldb::Status *v115; // [sp+54h] [bp-CCh]@89
  leveldb::Status *v116; // [sp+58h] [bp-C8h]@70
  char v117; // [sp+5Ch] [bp-C4h]@63
  leveldb::Status *v118; // [sp+64h] [bp-BCh]@48
  void *v119; // [sp+68h] [bp-B8h]@26
  int v120; // [sp+6Ch] [bp-B4h]@26
  leveldb::Status *v121; // [sp+70h] [bp-B0h]@12
  _BYTE **v122; // [sp+74h] [bp-ACh]@4
  __int64 v123; // [sp+78h] [bp-A8h]@4
  __int64 v124; // [sp+80h] [bp-A0h]@24
  int v125; // [sp+88h] [bp-98h]@24
  char *v126; // [sp+94h] [bp-8Ch]@5
  _BYTE *v127; // [sp+98h] [bp-88h]@23
  RakNet *v128; // [sp+F8h] [bp-28h]@1

  v3 = a1;
  v4 = a2;
  v5 = a3;
  v128 = _stack_chk_guard;
  v6 = (*(int (**)(void))(**(_DWORD **)(a2 + 4) + 76))();
  v99 = v7;
  v100 = v6;
  HIDWORD(v8) = **(_DWORD **)v5;
  LODWORD(v8) = (signed int)((*(_QWORD *)(*(_DWORD *)v5 + 120) >> 32) - *(_QWORD *)(*(_DWORD *)v5 + 120)) >> 2;
  j_leveldb::Log(
    *(leveldb **)(v4 + 36),
    (leveldb::Logger *)"Compacting %d@%d + %d@%d files",
    v8,
    (signed int)((*(_QWORD *)(*(_DWORD *)v5 + 132) >> 32) - *(_QWORD *)(*(_DWORD *)v5 + 132)) >> 2,
    HIDWORD(v8) + 1);
  v9 = *(_DWORD *)(v4 + 1228);
  if ( v9 == v4 + 1208 )
    v10 = (_QWORD *)(*(_DWORD *)(v4 + 1276) + 40);
  else
    v10 = (_QWORD *)(v9 + 8);
  *(_QWORD *)(v5 + 8) = *v10;
  v101 = (__int64 *)(v5 + 8);
  v107 = (leveldb::port::Mutex *)(v4 + 1112);
  j_leveldb::port::Mutex::Unlock((leveldb::port::Mutex *)(v4 + 1112));
  v11 = j_leveldb::VersionSet::MakeInputIterator(*(leveldb::VersionSet **)(v4 + 1276), *(leveldb::Compaction **)v5);
  (*(void (**)(void))(*v11 + 12))();
  *v3 = 0;
  v123 = (unsigned int)&unk_257BC67;
  v106 = 0;
  v122 = (_BYTE **)&unk_28898CC;
  if ( (*(int (__fastcall **)(_DWORD *))(*v11 + 8))(v11) == 1 )
  {
    v12 = (const char *)&v126;
    v102 = 0xFFFFFFFFFFFFFFLL;
    v105 = 0;
    v103 = 0;
    while ( 1 )
    {
      v53 = *(_DWORD *)(v4 + 1116);
      vFFFF0FA0();
      if ( v53 )
        goto LABEL_87;
      if ( *(_DWORD *)(v4 + 1136) )
      {
        v13 = v12;
        v14 = v3;
        v15 = (*(int (**)(void))(**(_DWORD **)(v4 + 4) + 76))();
        v17 = v16;
        j_leveldb::port::Mutex::Lock(v107);
        if ( *(_DWORD *)(v4 + 1132) )
        {
          j_leveldb::DBImpl::CompactMemTable((leveldb::DBImpl *)v4);
          j_leveldb::port::CondVar::SignalAll((leveldb::port::CondVar *)(v4 + 1120));
        }
        j_leveldb::port::Mutex::Unlock(v107);
        LODWORD(v18) = (*(int (**)(void))(**(_DWORD **)(v4 + 4) + 76))();
        v19 = v106 >= v15;
        LODWORD(v20) = v106 - v15;
        v3 = v14;
        HIDWORD(v20) = v105 - (v17 + !v19);
        v12 = v13;
        v105 = (unsigned __int64)(v18 + v20) >> 32;
        v106 = v18 + v20;
      }
      (*(void (__fastcall **)(const char *, _DWORD *))(*v11 + 32))(v12, v11);
      if ( j_leveldb::Compaction::ShouldStopBefore(*(_DWORD *)v5, (int)v12) == 1 && *(_DWORD *)(v5 + 32) )
        j_leveldb::DBImpl::FinishCompactionOutputFile(&v121, v4, v5, (int)v11);
        v21 = *v3;
        v22 = v121;
        if ( *v3 == v121 )
          v23 = *v3;
        else
          if ( v21 )
          {
            j_operator delete[]((void *)v21);
            v22 = v121;
          }
          if ( v22 )
            v21 = (leveldb::Status *)j_leveldb::Status::CopyState(v22, (const char *)v22);
            v23 = v121;
          else
            v23 = 0;
            v21 = 0;
          *v3 = v21;
        if ( v23 )
          j_operator delete[]((void *)v23);
          v21 = *v3;
        if ( v21 )
          goto LABEL_87;
      if ( (unsigned int)v127 < 8
        || (v24 = v126,
            v25 = *(_DWORD *)&v127[(_DWORD)v126 - 8],
            v26 = *(_DWORD *)&v127[(_DWORD)v126 - 4],
            LODWORD(v124) = (v25 >> 8) | (v26 << 24),
            HIDWORD(v124) = v26 >> 8,
            v27 = v127 - 8,
            v125 = (unsigned __int8)v25,
            LODWORD(v123) = v126,
            HIDWORD(v123) = v127 - 8,
            (unsigned __int8)v25 >= 2u) )
        v103 = 0;
        sub_21E7EE0((const void **)&v122, 0, *(v122 - 3), 0);
        v102 = 0xFFFFFFFFFFFFFFLL;
        goto LABEL_47;
      if ( !(v103 & 1) )
        goto LABEL_28;
      v28 = *(int (**)(void))(**(_DWORD **)(v4 + 12) + 8);
      v119 = v122;
      v120 = (int)*(v122 - 3);
      v29 = v28();
      v30 = v102;
      if ( v29 )
        break;
LABEL_29:
      v31 = *v101;
      v19 = (unsigned int)v30 >= (unsigned int)*v101;
      v33 = (_DWORD)v30 == (unsigned int)*v101;
      v32 = 0;
      if ( !v33 && v19 )
        v32 = 1;
      v19 = HIDWORD(v30) >= HIDWORD(v31);
      v33 = HIDWORD(v30) == HIDWORD(v31);
      v34 = 0;
        v34 = 1;
      if ( v33 )
        v34 = v32;
      if ( !v34 )
        v102 = v124;
        v103 = 1;
        goto LABEL_81;
      v103 = 1;
      if ( v125 )
      else
        v35 = 0;
        LODWORD(v102) = v124;
        if ( (unsigned int)v124 > (unsigned int)v31 )
          v35 = 1;
        v36 = 0;
        HIDWORD(v102) = HIDWORD(v124);
        if ( HIDWORD(v124) > HIDWORD(v31) )
          v36 = 1;
        if ( HIDWORD(v124) == HIDWORD(v31) )
          v36 = v35;
        if ( !v36 )
          v37 = j_leveldb::Compaction::IsBaseLevelForKey(*(_DWORD *)v5, (int)&v123);
          v102 = v124;
          v103 = 1;
          if ( v37 )
            goto LABEL_81;
LABEL_47:
      v38 = *(leveldb::TableBuilder **)(v5 + 32);
      if ( !v38 )
        j_leveldb::DBImpl::OpenCompactionOutputFile(&v118, v4, v5);
        v39 = *v3;
        v40 = v118;
        if ( *v3 == v118 )
          v41 = *v3;
          if ( v39 )
            j_operator delete[]((void *)v39);
            v40 = v118;
          if ( v40 )
            v39 = (leveldb::Status *)j_leveldb::Status::CopyState(v40, (const char *)v40);
            v41 = v118;
            v41 = 0;
            v39 = 0;
          *v3 = v39;
        if ( v41 )
          j_operator delete[]((void *)v41);
          v39 = *v3;
        if ( v39 )
        v38 = *(leveldb::TableBuilder **)(v5 + 32);
      LODWORD(v42) = j_leveldb::TableBuilder::NumEntries(v38);
      if ( !v42 )
        sub_21E8190((void **)(*(_DWORD *)(v5 + 20) - 8), v126, v127);
      sub_21E8190((void **)(*(_DWORD *)(v5 + 20) - 4), v126, v127);
      v43 = *(leveldb::TableBuilder **)(v5 + 32);
      (*(void (__fastcall **)(char *, _DWORD *))(*v11 + 36))(&v117, v11);
      j_leveldb::TableBuilder::Add(v43, v12, (int)&v117);
      v44 = j_leveldb::TableBuilder::FileSize(*(leveldb::TableBuilder **)(v5 + 32));
      v46 = *(_QWORD *)(*(_DWORD *)v5 + 8);
      v19 = v44 >= (unsigned int)v46;
      v47 = 0;
      if ( !v19 )
        v47 = 1;
      v19 = v45 >= HIDWORD(v46);
      v48 = v45 == HIDWORD(v46);
      v49 = 0;
        v49 = 1;
      if ( v48 )
        v49 = v47;
      if ( !v49 )
        j_leveldb::DBImpl::FinishCompactionOutputFile(&v116, v4, v5, (int)v11);
        v50 = *v3;
        v51 = v116;
        if ( *v3 == v116 )
          v52 = *v3;
          if ( v50 )
            j_operator delete[]((void *)v50);
            v51 = v116;
          if ( v51 )
            v50 = (leveldb::Status *)j_leveldb::Status::CopyState(v51, (const char *)v51);
            v52 = v116;
            v52 = 0;
            v50 = 0;
          *v3 = v50;
        if ( v52 )
          j_operator delete[]((void *)v52);
          v50 = *v3;
        if ( v50 )
LABEL_81:
      (*(void (__fastcall **)(_DWORD *))(*v11 + 24))(v11);
      if ( !(*(int (__fastcall **)(_DWORD *))(*v11 + 8))(v11) )
    }
    *(_QWORD *)&v24 = v123;
LABEL_28:
    sub_21E8190((void **)&v122, v24, v27);
    v30 = 0xFFFFFFFFFFFFFFLL;
    goto LABEL_29;
  }
  v105 = 0;
LABEL_87:
  if ( !*v3 )
    v54 = *(_DWORD *)(v4 + 1116);
    vFFFF0FA0();
    if ( v54 )
      v113 = "Deleting DB during compaction";
      v114 = 29;
      v111 = &unk_257BC67;
      v112 = 0;
      j_leveldb::Status::Status(&v115, 5, (int)&v113, (int)&v111);
      v55 = *v3;
      v56 = v115;
      if ( *v3 != v115 )
        if ( v55 )
          j_operator delete[]((void *)v55);
          v56 = v115;
        if ( v56 )
          v57 = (leveldb::Status *)j_leveldb::Status::CopyState(v56, (const char *)v56);
          v55 = v115;
          v55 = 0;
          v57 = 0;
        *v3 = v57;
      if ( v55 )
        j_operator delete[]((void *)v55);
    if ( !*v3 )
      if ( !*(_DWORD *)(v5 + 32) )
        goto LABEL_161;
      j_leveldb::DBImpl::FinishCompactionOutputFile(&v110, v4, v5, (int)v11);
      v58 = *v3;
      v59 = v110;
      if ( *v3 == v110 )
        v60 = *v3;
        if ( v58 )
          j_operator delete[]((void *)v58);
          v59 = v110;
        if ( v59 )
          v58 = (leveldb::Status *)j_leveldb::Status::CopyState(v59, (const char *)v59);
          v60 = v110;
          v60 = 0;
          v58 = 0;
        *v3 = v58;
      if ( v60 )
        j_operator delete[]((void *)v60);
        v58 = *v3;
      if ( !v58 )
LABEL_161:
        (*(void (__fastcall **)(leveldb::Status **, _DWORD *))(*v11 + 40))(&v109, v11);
        v61 = *v3;
        v62 = v109;
        if ( *v3 != v109 )
          if ( v61 )
            j_operator delete[]((void *)v61);
            v62 = v109;
          if ( v62 )
            v63 = (leveldb::Status *)j_leveldb::Status::CopyState(v62, (const char *)v62);
            v61 = v109;
            v61 = 0;
            v63 = 0;
          *v3 = v63;
        if ( v61 )
          j_operator delete[]((void *)v61);
  v104 = v3;
  if ( v11 )
    (*(void (__fastcall **)(_DWORD *))(*v11 + 4))(v11);
  v64 = (*(int (**)(void))(**(_DWORD **)(v4 + 4) + 76))();
  v66 = v65;
  *(_QWORD *)&v67 = *(_QWORD *)(*(_DWORD *)v5 + 120);
  v69 = v68 - v67;
  if ( v69 < 1 )
    v72 = 0;
    HIDWORD(v73) = 0;
    v70 = v69 >> 2;
    v71 = 0;
    do
      LODWORD(v73) = *(_DWORD *)(v67 + 4 * v71++);
      v74 = *(_QWORD *)(v73 + 16) >> 32;
      LODWORD(v73) = *(_QWORD *)(v73 + 16);
      HIDWORD(v73) = (__PAIR__(v74, v72) + v73) >> 32;
      v72 += v73;
    while ( v71 < v70 );
  v75 = *(_QWORD *)(*(_DWORD *)v5 + 132);
  if ( HIDWORD(v75) - (signed int)v75 > 0 )
    v76 = 0;
      v77 = *(_DWORD *)(v75 + 4 * v76++);
      v78 = __PAIR__(HIDWORD(v73), v72) + *(_QWORD *)(v77 + 16);
      HIDWORD(v73) = (__PAIR__(HIDWORD(v73), v72) + *(_QWORD *)(v77 + 16)) >> 32;
      v72 = v78;
    while ( v76 < (HIDWORD(v75) - (signed int)v75) >> 2 );
  v79 = *(_QWORD *)(v5 + 16);
  if ( HIDWORD(v79) == (_DWORD)v79 )
    v80 = 0;
    LODWORD(v73) = 0;
    v81 = (__int64 *)(v79 + 8);
    v82 = 0;
      v83 = *v81;
      v81 += 3;
      ++v82;
      v84 = __PAIR__(v73, v80) + v83;
      LODWORD(v73) = (__PAIR__((unsigned int)v73, v80) + v83) >> 32;
      v80 = v84;
    while ( v82 < -1431655765 * ((HIDWORD(v79) - (signed int)v79) >> 3) );
  j_leveldb::port::Mutex::Lock(v107);
  v85 = v4 + 24 * **(_DWORD **)v5;
  *(_QWORD *)(v85 + 1312) += __PAIR__(v66, v64) - (__PAIR__(v105, v106) + __PAIR__(v99, v100));
  v86 = *(_DWORD *)(v85 + 1320);
  v87 = *(_DWORD *)(v85 + 1324);
  *(_DWORD *)(v85 + 1320) = v86 + v72;
  *(_DWORD *)(v85 + 1324) = HIDWORD(v73) + __CFADD__(v86, v72) + v87;
  v88 = *(_DWORD *)(v85 + 1328);
  v89 = *(_DWORD *)(v85 + 1332);
  *(_DWORD *)(v85 + 1328) = v88 + v80;
  *(_DWORD *)(v85 + 1332) = v73 + __CFADD__(v88, v80) + v89;
  v90 = *v104;
  if ( *v104 )
    goto LABEL_162;
  j_leveldb::DBImpl::InstallCompactionResults((leveldb::VersionSet *)&v108, v4, v5);
  v91 = v108;
  if ( *v104 == v108 )
    v92 = *v104;
    if ( v90 )
      j_operator delete[]((void *)v90);
      v91 = v108;
    if ( v91 )
      v90 = (leveldb::Status *)j_leveldb::Status::CopyState(v91, (const char *)v91);
      v92 = v108;
    else
      v92 = 0;
      v90 = 0;
    *v104 = v90;
  if ( v92 )
    j_operator delete[]((void *)v92);
    v90 = *v104;
  if ( v90 )
LABEL_162:
    if ( !*(_DWORD *)(v4 + 1280) )
      *(_DWORD *)(v4 + 1280) = j_leveldb::Status::CopyState(v90, 0);
      j_leveldb::port::CondVar::SignalAll((leveldb::port::CondVar *)(v4 + 1120));
  v93 = *(leveldb **)(v4 + 36);
  LODWORD(v94) = j_leveldb::VersionSet::LevelSummary(*(_DWORD *)(v4 + 1276), (char *)&v126);
  j_leveldb::Log(v93, (leveldb::Logger *)"compacted to: %s", v94);
  v95 = (char *)(v122 - 3);
  if ( (int *)(v122 - 3) != &dword_28898C0 )
    v97 = (unsigned int *)(v122 - 1);
    if ( &pthread_create )
      __dmb();
      do
        v98 = __ldrex(v97);
      while ( __strex(v98 - 1, v97) );
      v98 = (*v97)--;
    if ( v98 <= 0 )
      j_j_j_j__ZdlPv_9(v95);
  result = (char *)(_stack_chk_guard - v128);
  if ( _stack_chk_guard != v128 )
    j___stack_chk_fail_0((int)result);
  return result;
}


signed int __fastcall leveldb::MemTable::Get(__int64 a1, __int64 a2)
{
  int v2; // r5@1
  int v3; // r4@1
  _DWORD *v4; // r6@1
  int v5; // r0@1
  int v6; // r11@3
  _DWORD *v7; // r10@4
  unsigned int *v8; // r3@4
  unsigned __int64 v9; // r0@5
  int v10; // r0@14
  int v11; // r1@14
  int v12; // r4@15
  char *v13; // r0@16
  int (*v14)(void); // r3@17
  __int64 v15; // r1@17
  unsigned int *v16; // r3@17
  int v17; // r0@18
  _BYTE *v18; // r2@21
  char *v19; // r1@22
  leveldb::Status *v21; // r1@24
  leveldb::Status *v22; // r0@24
  void *v23; // r1@28
  char *v24; // r0@29
  __int64 v25; // [sp+4h] [bp-44h]@1
  __int64 v26; // [sp+Ch] [bp-3Ch]@1
  __int64 v27; // [sp+1Ch] [bp-2Ch]@24
  void *v28; // [sp+24h] [bp-24h]@24
  int v29; // [sp+28h] [bp-20h]@24
  leveldb::Status *v30; // [sp+2Ch] [bp-1Ch]@24
  int v31; // [sp+30h] [bp-18h]@17
  int v32; // [sp+34h] [bp-14h]@17
  int v33; // [sp+38h] [bp-10h]@17
  int v34; // [sp+3Ch] [bp-Ch]@17
  unsigned __int64 v35; // [sp+40h] [bp-8h]@6
  unsigned __int64 v36; // [sp+48h] [bp+0h]@8
  char v37[4]; // [sp+50h] [bp+8h]@9

  v25 = a2;
  v2 = a1 + 36;
  v26 = a1;
  v3 = *(_DWORD *)HIDWORD(a1);
  v4 = (_DWORD *)*(_QWORD *)(a1 + 48);
  v5 = (*(_QWORD *)(a1 + 48) >> 32) - 1;
LABEL_3:
  v6 = v5 + 1;
  do
  {
    v7 = (_DWORD *)v4[v6];
    vFFFF0FA0();
    if ( v7 )
    {
      LODWORD(v9) = *v7;
      HIDWORD(v9) = *(_BYTE *)*v7;
      if ( BYTE4(v9) & 0x80 )
      {
        LODWORD(v9) = j_leveldb::GetVarint32PtrFallback((leveldb *)v9, (const char *)(v9 + 5), (const char *)&v35, v8);
        HIDWORD(v9) = v35;
      }
      else
        LODWORD(v35) = *(_BYTE *)*v7;
        LODWORD(v9) = v9 + 1;
      v36 = v9;
      HIDWORD(v9) = *(_BYTE *)v3;
        LODWORD(v9) = j_leveldb::GetVarint32PtrFallback((leveldb *)v3, (const char *)(v3 + 5), v37, v8);
        HIDWORD(v9) = *(_DWORD *)v37;
        *(_DWORD *)v37 = *(_BYTE *)v3;
        LODWORD(v9) = v3 + 1;
      v35 = v9;
      if ( j_leveldb::InternalKeyComparator::Compare(v2, &v36, &v35) < 0 )
        v5 = v6 - 1;
        v4 = v7;
        goto LABEL_3;
    }
    --v6;
  }
  while ( v6 );
  if ( !v7 )
    return 0;
  v10 = *v7;
  v11 = *(_BYTE *)*v7;
  if ( v11 & 0x80 )
    v13 = j_leveldb::GetVarint32PtrFallback((leveldb *)v10, (const char *)(v10 + 5), (const char *)&v35, v8);
    v11 = v35;
    v12 = (int)v13;
  else
    LODWORD(v35) = *(_BYTE *)*v7;
    v12 = v10 + 1;
  v14 = *(int (**)(void))(**(_DWORD **)(v26 + 4) + 8);
  v33 = v12;
  v34 = v11 - 8;
  v15 = *(_QWORD *)(HIDWORD(v26) + 4);
  v31 = v15;
  v32 = -8 - v15 + HIDWORD(v15);
  if ( v14() )
  v17 = v35 + v12;
  if ( !*(_BYTE *)(v35 + v12 - 8) )
    v28 = &unk_257BC67;
    v29 = 0;
    v27 = (unsigned int)&unk_257BC67;
    j_leveldb::Status::Status(&v30, 1, (int)&v28, (int)&v27);
    v21 = v30;
    v22 = (leveldb::Status *)*(_DWORD *)HIDWORD(v25);
    if ( *(leveldb::Status **)HIDWORD(v25) != v30 )
      if ( v22 )
        j_operator delete[]((void *)v22);
        v21 = v30;
      if ( v21 )
        v23 = j_leveldb::Status::CopyState(v21, (const char *)v21);
        v22 = v30;
        v22 = 0;
        v23 = 0;
      *(_DWORD *)HIDWORD(v25) = v23;
    if ( v22 )
      j_operator delete[]((void *)v22);
    return 1;
  if ( *(_BYTE *)(v35 + v12 - 8) != 1 )
  if ( (_DWORD)v25 )
    v18 = (_BYTE *)*(_BYTE *)v17;
    if ( (unsigned __int8)v18 & 0x80 )
      v24 = j_leveldb::GetVarint32PtrFallback((leveldb *)v17, (const char *)(v17 + 5), (const char *)&v36, v16);
      v18 = (_BYTE *)v36;
      v19 = v24;
    else
      LODWORD(v36) = *(_BYTE *)v17;
      v19 = (char *)(v17 + 1);
    sub_21E8190((void **)v25, v19, v18);
  return 1;
}


_DWORD *__fastcall leveldb::NewEmptyIterator(leveldb *this)
{
  _DWORD *result; // r0@1

  result = j_operator new(0x18u);
  result[4] = 0;
  *(_QWORD *)result = (unsigned int)&off_2725D74;
  result[5] = 0;
  return result;
}


void __fastcall leveldb::RepairDB(leveldb::Status **a1, int *a2, int a3)
{
  leveldb::Status **v3; // r8@1
  int v4; // r4@1
  int *v5; // r5@1
  leveldb::FilterPolicy *v6; // r10@1
  int v7; // r2@1
  int v8; // r0@1
  char v9; // r0@1
  char v10; // r0@3
  void *v11; // r0@5
  leveldb::Status *v12; // r0@5
  const char *v13; // r1@5
  char *v14; // r0@6
  int v15; // r5@7
  unsigned int v16; // r9@7
  signed int v17; // r2@8
  int v18; // r3@8
  int *v19; // r1@10
  int v20; // r0@12
  int v21; // r1@12
  unsigned int v22; // r7@12
  signed int v23; // r6@12
  signed int v24; // r4@14
  void *v25; // r10@27
  char *v26; // r7@27
  unsigned int v27; // r4@27
  unsigned int v28; // r3@29
  unsigned int v29; // r6@29
  bool v30; // cf@31
  int v31; // r4@36
  _BYTE *v32; // r4@38
  void *v33; // r4@41
  char *v34; // r7@41
  unsigned int v35; // r6@41
  unsigned int v36; // r3@43
  unsigned int v37; // r10@43
  int v38; // r6@50
  _BYTE *v39; // r6@52
  leveldb::Status *v40; // r0@58
  void *v41; // r4@62
  void *v42; // r6@62
  signed int v43; // r1@66
  int *v44; // r0@72
  _DWORD *v45; // r0@78
  int *v46; // r9@79
  int v47; // r8@79
  leveldb::Status *v48; // r11@79
  unsigned int *v49; // r2@80
  signed int v50; // r1@82
  unsigned int *v51; // r2@84
  signed int v52; // r1@86
  unsigned int *v53; // r2@88
  signed int v54; // r1@90
  unsigned int *v55; // r2@100
  signed int v56; // r1@102
  unsigned int *v57; // r2@104
  signed int v58; // r1@106
  unsigned int *v59; // r2@108
  signed int v60; // r1@110
  unsigned int *v61; // r2@112
  signed int v62; // r1@114
  int v63; // r2@136
  int v64; // r3@136
  __int64 v65; // r4@136
  leveldb::MemTable *v66; // r9@137
  leveldb::Status *v67; // r8@138
  unsigned int *v68; // r2@139
  signed int v69; // r1@141
  unsigned int *v70; // r2@143
  signed int v71; // r1@145
  int v72; // r6@155
  leveldb *v73; // r4@156
  __int64 v74; // kr20_8@156
  char *v75; // r0@156
  leveldb::Status *v76; // r1@159
  void *v77; // r0@159
  void *v78; // r1@163
  leveldb *v79; // r4@170
  char *v80; // r0@170
  leveldb::Status *v81; // r5@176
  __int64 v82; // r0@178
  int v83; // r11@178
  leveldb::Status *v84; // r1@178
  void *v85; // r0@178
  void *v86; // r1@182
  int v87; // r0@190
  unsigned __int8 v88; // vf@190
  void **v89; // r7@193
  int v90; // r0@195
  void *v91; // r5@197
  char *v92; // r6@197
  unsigned int v93; // r2@197
  unsigned int v94; // r1@199
  unsigned int v95; // r4@199
  void **v96; // r9@205
  int v97; // r7@207
  int v98; // r3@207
  _BYTE *v99; // r7@209
  leveldb *v100; // r4@212
  __int64 v101; // r5@212
  void *v102; // r0@212
  char *v103; // r0@213
  char *v104; // r0@214
  char *v105; // r0@215
  char *v106; // r0@217
  leveldb *v107; // r4@219
  unsigned int v108; // r5@219
  unsigned int v109; // r6@219
  void *v110; // r0@219
  void *v111; // r0@222
  _DWORD *v112; // r0@224
  int *v113; // r11@225
  int v114; // r10@225
  unsigned int *v115; // r2@226
  signed int v116; // r1@228
  unsigned int *v117; // r2@230
  signed int v118; // r1@232
  unsigned int *v119; // r2@234
  signed int v120; // r1@236
  unsigned int *v121; // r2@250
  signed int v122; // r1@252
  unsigned int *v123; // r2@254
  signed int v124; // r1@256
  unsigned int *v125; // r2@258
  signed int v126; // r1@260
  signed int v127; // r1@274
  signed int v128; // r1@278
  unsigned int *v129; // r2@282
  signed int v130; // r1@284
  unsigned int v131; // r9@290
  unsigned int v132; // r5@290
  void *v133; // r0@291
  void *v134; // r0@292
  void *v135; // r0@296
  char *v136; // r0@297
  leveldb *v137; // r7@298
  unsigned int v138; // r4@298
  unsigned int v139; // r5@298
  leveldb::Status *v140; // r4@298
  char *v141; // r0@298
  int v142; // r11@303
  leveldb::Iterator *v143; // r10@303
  char v144; // r9@304
  unsigned int *v145; // r2@305
  signed int v146; // r1@307
  _BYTE *v147; // r2@312
  char *v148; // r1@313
  unsigned int v149; // r0@314
  unsigned int v150; // r5@314 OVERLAPPED
  unsigned int v151; // r6@314 OVERLAPPED
  signed int v152; // r0@316
  signed int v153; // r1@318
  leveldb *v154; // r5@325
  __int64 v155; // r6@325
  void *v156; // r0@325
  leveldb::Status *v157; // r1@328
  leveldb::Status *v158; // r0@328
  leveldb::Status *v159; // r1@332
  leveldb *v160; // r7@337
  unsigned __int64 v161; // r5@337
  void *v162; // r0@337
  leveldb::TableBuilder *v163; // r9@342
  signed int v164; // r7@342
  leveldb::Iterator *v165; // r5@342
  leveldb::Status *v166; // r1@346
  leveldb::SequentialFile *v167; // r0@346
  leveldb::SequentialFile *v168; // r1@350
  unsigned int *v169; // r2@352
  signed int v170; // r1@354
  unsigned int *v171; // r2@357
  signed int v172; // r1@359
  __int64 v173; // r0@366
  leveldb::Status *v174; // r1@368
  leveldb::SequentialFile *v175; // r0@368
  leveldb::SequentialFile *v176; // r1@372
  unsigned int *v177; // r2@381
  unsigned int *v178; // r2@385
  leveldb::Status *v179; // r1@397
  leveldb::SequentialFile *v180; // r0@397
  int *v181; // r4@398
  leveldb::SequentialFile *v182; // r1@401
  char *v183; // r0@409
  char *v184; // r0@415
  char *v185; // r0@416
  char *v186; // r0@420
  char *v187; // r0@421
  char *v188; // r0@422
  leveldb::Status **v189; // r4@424
  __int64 v190; // r6@425
  int *v191; // r9@426
  char *v192; // r1@429
  unsigned int v193; // r2@429
  __int64 v194; // kr40_8@430
  signed int v195; // r4@430
  signed int v196; // r0@430
  const char *v197; // r0@439
  unsigned int v198; // r4@439
  int v199; // r0@439
  unsigned int v200; // r3@439
  unsigned int *v201; // r2@439
  char *v202; // r0@439
  unsigned int v203; // r4@440
  char *v204; // r0@440
  signed int v205; // r5@441
  const leveldb::InternalKey *v206; // r0@442
  __int64 v207; // kr48_8@442
  leveldb::Status *v208; // r1@443
  leveldb::Status *v209; // r0@443
  leveldb::Status *v210; // r1@447
  char *v211; // r0@453
  leveldb::Status *v212; // r1@455
  leveldb::Status *v213; // r0@455
  leveldb::Status *v214; // r1@459
  leveldb::SequentialFile *v215; // r0@467
  unsigned int v216; // r6@469
  unsigned int *v217; // r2@470
  signed int v218; // r1@472
  unsigned int *v219; // r2@474
  signed int v220; // r1@476
  leveldb::Status **v221; // r0@486
  char *v222; // r0@486
  char *v223; // r0@487
  unsigned int v224; // r4@489
  void (__fastcall *v225)(leveldb::Status **, unsigned int, void **, leveldb::Status **); // r6@489
  leveldb::Status *v226; // r1@489
  leveldb::Status *v227; // r0@489
  leveldb::Status *v228; // r1@493
  char *v229; // r0@499
  __int64 v230; // r0@500
  leveldb::Status *v231; // r1@502
  leveldb::Status *v232; // r1@506
  signed int v233; // r1@509
  unsigned int *v234; // r2@511
  signed int v235; // r1@513
  char *v236; // r0@518
  leveldb::Status *v237; // r0@519
  leveldb::Status *v238; // r1@519
  leveldb::Status *v239; // r1@523
  __int64 v240; // r2@530
  unsigned int v241; // r7@531
  unsigned int v242; // r6@531
  char *v243; // r0@532
  unsigned int v244; // r1@532
  __int64 v245; // kr50_8@533
  unsigned __int64 v246; // kr58_8@533
  leveldb::TableCache *v247; // r0@536
  leveldb *v248; // r0@537
  bool v249; // zf@537
  unsigned int v250; // r1@537
  void *v251; // r4@544
  void *v252; // r6@544
  unsigned int *v253; // r2@546
  signed int v254; // r1@548
  unsigned int *v255; // r2@550
  signed int v256; // r1@552
  int v257; // r1@562
  void *v258; // r0@562
  int v259; // r1@563
  void *v260; // r0@563
  int *v261; // r4@572
  int *v262; // r6@572
  unsigned int *v263; // r2@574
  signed int v264; // r1@576
  int *v265; // r0@582
  char *v266; // r0@587
  unsigned int *v267; // r2@589
  signed int v268; // r1@591
  signed int v269; // r1@599
  unsigned int *v270; // r2@613
  signed int v271; // r1@615
  signed int v272; // [sp+0h] [bp-678h]@1
  unsigned __int64 v273; // [sp+8h] [bp-670h]@0
  int v274; // [sp+10h] [bp-668h]@0
  leveldb::Status **v275; // [sp+34h] [bp-644h]@78
  leveldb::VersionEdit *v276; // [sp+44h] [bp-634h]@5
  leveldb::FilterPolicy *v277; // [sp+48h] [bp-630h]@1
  leveldb::FilterPolicy *v278; // [sp+48h] [bp-630h]@78
  int v279; // [sp+68h] [bp-610h]@137
  int v280; // [sp+68h] [bp-610h]@303
  int v281; // [sp+74h] [bp-604h]@137
  unsigned __int64 v282; // [sp+80h] [bp-5F8h]@137
  char *v283; // [sp+88h] [bp-5F0h]@1
  unsigned int v284; // [sp+8Ch] [bp-5ECh]@1
  void **v285; // [sp+90h] [bp-5E8h]@1
  int v286; // [sp+94h] [bp-5E4h]@1
  void **v287; // [sp+98h] [bp-5E0h]@1
  int v288; // [sp+9Ch] [bp-5DCh]@1
  int v289; // [sp+A0h] [bp-5D8h]@1
  char v290; // [sp+A6h] [bp-5D2h]@303
  leveldb *v291; // [sp+ACh] [bp-5CCh]@1
  int v292; // [sp+B8h] [bp-5C0h]@3
  unsigned __int16 v293; // [sp+4D0h] [bp-1A8h]@3
  leveldb::TableCache *v294; // [sp+4D4h] [bp-1A4h]@5
  void *v295; // [sp+4D8h] [bp-1A0h]@5
  int v296; // [sp+4E0h] [bp-198h]@440
  int v297; // [sp+4E4h] [bp-194h]@440
  unsigned __int64 v298; // [sp+4F0h] [bp-188h]@440
  __int64 v299; // [sp+4F8h] [bp-180h]@440
  char v300; // [sp+500h] [bp-178h]@439
  char v301; // [sp+501h] [bp-177h]@440
  char v302; // [sp+503h] [bp-175h]@440
  char v303; // [sp+504h] [bp-174h]@440
  int v304; // [sp+508h] [bp-170h]@5
  int v305; // [sp+50Ch] [bp-16Ch]@5
  int v306; // [sp+510h] [bp-168h]@5
  int v307; // [sp+518h] [bp-160h]@5
  int v308; // [sp+51Ch] [bp-15Ch]@5
  int *v309; // [sp+520h] [bp-158h]@5
  int *v310; // [sp+524h] [bp-154h]@5
  int v311; // [sp+528h] [bp-150h]@5
  int v312; // [sp+52Ch] [bp-14Ch]@5
  int v313; // [sp+530h] [bp-148h]@5
  int v314; // [sp+534h] [bp-144h]@5
  void *v315; // [sp+538h] [bp-140h]@5
  int *v316; // [sp+53Ch] [bp-13Ch]@10
  int *v317; // [sp+540h] [bp-138h]@10
  void *v318; // [sp+544h] [bp-134h]@41
  _BYTE *v319; // [sp+548h] [bp-130h]@25
  char *v320; // [sp+54Ch] [bp-12Ch]@25
  void *v321; // [sp+550h] [bp-128h]@27
  _BYTE *v322; // [sp+554h] [bp-124h]@22
  char *v323; // [sp+558h] [bp-120h]@22
  void *v324; // [sp+55Ch] [bp-11Ch]@341
  _BYTE *v325; // [sp+560h] [bp-118h]@425
  unsigned __int64 v326; // [sp+568h] [bp-110h]@5
  leveldb::Status *v327; // [sp+574h] [bp-104h]@424
  leveldb::Status *v328; // [sp+578h] [bp-100h]@8
  int v329; // [sp+57Ch] [bp-FCh]@156
  void *ptr; // [sp+580h] [bp-F8h]@5
  _BYTE *v331; // [sp+584h] [bp-F4h]@5
  unsigned __int64 v332; // [sp+588h] [bp-F0h]@5
  __int64 v333; // [sp+590h] [bp-E8h]@290
  char *v334; // [sp+598h] [bp-E0h]@234
  char *v335; // [sp+59Ch] [bp-DCh]@230
  unsigned int v336; // [sp+5A0h] [bp-D8h]@303
  unsigned int v337; // [sp+5A4h] [bp-D4h]@303
  void *v338; // [sp+5C0h] [bp-B8h]@137
  _BYTE *v339; // [sp+5C4h] [bp-B4h]@137
  leveldb *v340; // [sp+5C8h] [bp-B0h]@137
  __int64 v341; // [sp+5D0h] [bp-A8h]@137
  char *v342; // [sp+5D8h] [bp-A0h]@139
  signed int v343; // [sp+5DCh] [bp-9Ch]@178
  unsigned __int64 v344; // [sp+5E0h] [bp-98h]@178
  __int64 v345; // [sp+5E8h] [bp-90h]@178
  char *v346; // [sp+5F0h] [bp-88h]@108
  char *v347; // [sp+5F4h] [bp-84h]@104
  __int64 v348; // [sp+5F8h] [bp-80h]@339
  int v349; // [sp+600h] [bp-78h]@337
  leveldb::Status *v350; // [sp+604h] [bp-74h]@328
  void *v351; // [sp+608h] [bp-70h]@327
  int v352; // [sp+60Ch] [bp-6Ch]@305
  int v353; // [sp+610h] [bp-68h]@88
  void *v354; // [sp+614h] [bp-64h]@136
  int v355; // [sp+618h] [bp-60h]@79
  int v356; // [sp+61Ch] [bp-5Ch]@100
  leveldb::Status *v357; // [sp+620h] [bp-58h]@5
  int v358; // [sp+624h] [bp-54h]@156
  __int64 v359; // [sp+628h] [bp-50h]@8
  leveldb::Status *v360; // [sp+634h] [bp-44h]@178
  leveldb::Status *v361; // [sp+638h] [bp-40h]@143
  leveldb::Status *v362; // [sp+63Ch] [bp-3Ch]@159
  leveldb::Status *v363; // [sp+640h] [bp-38h]@156
  leveldb::Status *v364; // [sp+644h] [bp-34h]@137
  leveldb::Status *v365; // [sp+648h] [bp-30h]@112
  leveldb::SequentialFile *v366; // [sp+64Ch] [bp-2Ch]@137
  leveldb::Status *v367; // [sp+650h] [bp-28h]@80

  v3 = a1;
  v4 = a3;
  v5 = a2;
  sub_21E8AF4((int *)&v283, a2);
  v6 = (leveldb::FilterPolicy *)&v287;
  v284 = *(_DWORD *)(v4 + 8);
  v7 = *(_DWORD *)v4;
  v285 = &off_2726110;
  v286 = v7;
  v8 = *(_DWORD *)(v4 + 1068);
  v287 = &off_2726130;
  v288 = v8;
  v277 = (leveldb::FilterPolicy *)&v287;
  j_leveldb::SanitizeOptions((int)&v289, v5, (int)&v285, (int)&v287, v4);
  v9 = 0;
  if ( v291 != *(leveldb **)(v4 + 12) )
    v9 = 1;
  LOBYTE(v293) = v9;
  v10 = 0;
  if ( v292 != *(_DWORD *)(v4 + 24) )
    v10 = 1;
  HIBYTE(v293) = v10;
  v295 = &unk_28898CC;
  v304 = 0;
  v305 = 0;
  v306 = 0;
  v311 = 0;
  v308 = 0;
  v307 = 0;
  v309 = &v307;
  v310 = &v307;
  v312 = 0;
  v313 = 0;
  v314 = 0;
  v276 = (leveldb::VersionEdit *)&v295;
  j_leveldb::VersionEdit::Clear((leveldb::VersionEdit *)&v295);
  j___aeabi_memclr8_0((int)&v315, 48);
  v326 = 1LL;
  v11 = j_operator new(0x10u);
  v294 = (leveldb::TableCache *)j_leveldb::TableCache::TableCache((int)v11, (int *)&v283, (int)&v289, (leveldb *)0xA);
  ptr = 0;
  v331 = 0;
  LODWORD(v332) = 0;
  (*(void (__fastcall **)(leveldb::Status **))(*(_DWORD *)v284 + 28))(&v357);
  v12 = v357;
  v13 = (const char *)&v326;
  if ( v357 )
  {
LABEL_58:
    v40 = (leveldb::Status *)j_leveldb::Status::CopyState(v12, v13);
    goto LABEL_59;
  }
  v14 = (char *)ptr;
  if ( ptr == v331 )
    v342 = v283;
    v343 = *((_DWORD *)v283 - 3);
    v338 = "repair found no files";
    v339 = (_BYTE *)21;
    j_leveldb::Status::Status(v3, 5, (int)&v342, (int)&v338);
    goto LABEL_60;
  v15 = 0;
  v16 = 0;
  do
    if ( j_leveldb::ParseFileName((const void **)&v14[v15], (int)&v359, (signed int *)&v328) != 1 )
      goto LABEL_56;
    v17 = (signed int)v328;
    if ( v328 == (leveldb::Status *)3 )
    {
      v19 = (int *)((char *)ptr + v15);
      if ( v316 == v317 )
      {
        j_std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string const&>(
          (unsigned __int64 *)&v315,
          v19);
      }
      else
        sub_21E8AF4(v316, v19);
        ++v316;
    }
    else
      v20 = HIDWORD(v359);
      v21 = v359;
      v22 = (unsigned __int64)(v359 + 1) >> 32;
      v18 = v359 + 1;
      v23 = 0;
      if ( (signed int)v359 + 1 <= (unsigned int)v326 )
        v23 = 1;
      v24 = 0;
      if ( v22 <= HIDWORD(v326) )
        v24 = 1;
      if ( v22 == HIDWORD(v326) )
        v24 = v23;
      if ( !v24 )
        v326 = __PAIR__(v22, v18);
      if ( v328 == (leveldb::Status *)2 )
        v17 = (signed int)v319;
        v18 = (int)v320;
        if ( v319 != v320 )
        {
          *(_DWORD *)v319 = v359;
          *(_DWORD *)(v17 + 4) = v20;
          v319 = (_BYTE *)(v17 + 8);
          goto LABEL_56;
        }
        v33 = v318;
        v34 = 0;
        v277 = v6;
        v35 = (v319 - (_BYTE *)v318) >> 3;
        if ( !v35 )
          v35 = 1;
        v36 = v35 + ((v319 - (_BYTE *)v318) >> 3);
        v37 = v35 + ((v319 - (_BYTE *)v318) >> 3);
        if ( 0 != v36 >> 29 )
          v37 = 0x1FFFFFFF;
        v30 = v36 >= v35;
        v18 = 0x1FFFFFFF;
        if ( !v30 )
        if ( v37 )
          if ( v37 >= 0x20000000 )
            goto LABEL_621;
          v34 = (char *)j_operator new(8 * v37);
          v20 = HIDWORD(v359);
          v21 = v359;
          v33 = v318;
          v17 = (signed int)v319;
        v17 -= (signed int)v33;
        v38 = (int)&v34[v17];
        *(_DWORD *)&v34[v17] = v21;
        *(_DWORD *)&v34[v17 + 4] = v20;
        if ( v17 >> 3 )
          j___aeabi_memmove8((int)v34, (int)v33);
        v39 = (_BYTE *)(v38 + 8);
        if ( v33 )
          j_operator delete(v33);
        v318 = v34;
        v319 = v39;
        v320 = &v34[8 * v37];
        if ( v328 )
        v17 = (signed int)v322;
        v18 = (int)v323;
        if ( v322 != v323 )
          *(_DWORD *)v322 = v359;
          v322 = (_BYTE *)(v17 + 8);
        v25 = v321;
        v26 = 0;
        v27 = (v322 - (_BYTE *)v321) >> 3;
        if ( !v27 )
          v27 = 1;
        v28 = v27 + ((v322 - (_BYTE *)v321) >> 3);
        v29 = v27 + ((v322 - (_BYTE *)v321) >> 3);
        if ( 0 != v28 >> 29 )
          v29 = 0x1FFFFFFF;
        v30 = v28 >= v27;
        if ( v29 )
          if ( v29 >= 0x20000000 )
          v26 = (char *)j_operator new(8 * v29);
          v25 = v321;
          v17 = (signed int)v322;
        v17 -= (signed int)v25;
        v31 = (int)&v26[v17];
        *(_DWORD *)&v26[v17] = v21;
        *(_DWORD *)&v26[v17 + 4] = v20;
          j___aeabi_memmove8((int)v26, (int)v25);
        v32 = (_BYTE *)(v31 + 8);
        if ( v25 )
          j_operator delete(v25);
        v321 = v26;
        v322 = v32;
        v323 = &v26[8 * v29];
      v6 = v277;
LABEL_56:
    v14 = (char *)ptr;
    v15 += 4;
    ++v16;
    v13 = (const char *)(v331 - (_BYTE *)ptr);
  while ( v16 < (v331 - (_BYTE *)ptr) >> 2 );
    goto LABEL_58;
  v40 = 0;
LABEL_59:
  *v3 = v40;
LABEL_60:
    j_operator delete[]((void *)v357);
  v41 = ptr;
  v42 = v331;
  if ( ptr != v331 )
    do
      v44 = (int *)(*(_DWORD *)v41 - 12);
      if ( v44 != &dword_28898C0 )
        v17 = *(_DWORD *)v41 - 4;
        if ( &pthread_create )
          __dmb();
          do
          {
            v43 = __ldrex((unsigned int *)v17);
            v18 = v43 - 1;
          }
          while ( __strex(v43 - 1, (unsigned int *)v17) );
        else
          v43 = *(_DWORD *)v17;
          v18 = *(_DWORD *)v17 - 1;
          *(_DWORD *)v17 = v18;
        if ( v43 <= 0 )
          j_j_j_j__ZdlPv_9(v44);
      v41 = (char *)v41 + 4;
    while ( v41 != v42 );
    v41 = ptr;
  if ( v41 )
    j_operator delete(v41);
  if ( !*v3 )
    v45 = v321;
    v275 = v3;
    v278 = v6;
    if ( v322 == v321 )
      goto LABEL_224;
    v46 = &v355;
    v47 = 0;
    v48 = (leveldb::Status *)&dword_28898C0;
    while ( 2 )
      v63 = v45[2 * v47];
      v64 = v45[2 * v47 + 1];
      j_leveldb::LogFileName(v46, (int *)&v283);
      v65 = *((_QWORD *)v321 + v47);
      j_leveldb::LogFileName((int *)&v367, (int *)&v283);
      (*(void (__fastcall **)(void **))(*(_DWORD *)v284 + 8))(&v354);
      if ( v354 )
        goto LABEL_217;
      v338 = &off_2725C80;
      v339 = (_BYTE *)v284;
      v340 = v291;
      v279 = v47;
      v341 = v65;
      v282 = __PAIR__(v65, HIDWORD(v65));
      j_leveldb::log::Reader::Reader((leveldb::log::Reader *)&ptr, v366, (unsigned int)&v338, 0LL, v273);
      v365 = (leveldb::Status *)&unk_28898CC;
      LODWORD(v359) = &unk_257BC67;
      HIDWORD(v359) = 0;
      v281 = 0;
      j_leveldb::WriteBatch::WriteBatch((leveldb::WriteBatch *)&v364);
      v66 = (leveldb::MemTable *)j_operator new(0x3Cu);
      j_leveldb::MemTable::MemTable(v66, (const leveldb::InternalKeyComparator *)&v285);
      ++*((_DWORD *)v66 + 2);
      if ( j_leveldb::log::Reader::ReadRecord((int)&ptr, (int)&v359, (const void **)&v365) != 1 )
        goto LABEL_176;
      while ( 2 )
        v67 = v48;
        while ( 2 )
          v72 = HIDWORD(v359);
          if ( HIDWORD(v359) <= 0xB )
            v357 = (leveldb::Status *)"log record too small";
            v358 = 20;
            v328 = (leveldb::Status *)&unk_257BC67;
            v329 = 0;
            j_leveldb::Status::Status(&v363, 2, (int)&v357, (int)&v328);
            v73 = v340;
            v74 = v341;
            j_leveldb::Status::ToString((leveldb::Status *)&v342, (unsigned int **)&v363);
            j_leveldb::Log(v73, (leveldb::Logger *)"Log #%llu: dropping %d bytes; %s", v74, v72, v342);
            v75 = v342 - 12;
            if ( (leveldb::Status *)(v342 - 12) != v67 )
            {
              v68 = (unsigned int *)(v342 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v69 = __ldrex(v68);
                while ( __strex(v69 - 1, v68) );
              }
              else
                v69 = (*v68)--;
              if ( v69 <= 0 )
                j_j_j_j__ZdlPv_9(v75);
            }
            if ( v363 )
              j_operator delete[]((void *)v363);
            goto LABEL_173;
          j_leveldb::WriteBatchInternal::SetContents((void **)&v364, (unsigned __int64 *)&v359);
          j_leveldb::WriteBatchInternal::InsertInto(
            (leveldb::WriteBatchInternal *)&v362,
            (const leveldb::WriteBatch *)&v364,
            v66);
          v76 = v362;
          v77 = v354;
          if ( v354 == (void *)v362 )
            v78 = v354;
            v48 = v67;
          else
            if ( v354 )
              j_operator delete[](v354);
              v76 = v362;
            if ( v76 )
              v77 = j_leveldb::Status::CopyState(v76, (const char *)v76);
              v78 = (void *)v362;
            else
              v78 = 0;
              v77 = 0;
            v354 = v77;
          if ( v78 )
            j_operator delete[](v78);
            v77 = v354;
          if ( v77 )
            v79 = v291;
            j_leveldb::Status::ToString((leveldb::Status *)&v361, (unsigned int **)&v354);
            j_leveldb::Log(v79, (leveldb::Logger *)"Log #%llu: ignoring %s", __PAIR__(v282, HIDWORD(v282)), v361);
            v80 = (char *)v361 - 12;
            if ( (leveldb::Status *)((char *)v361 - 12) != v48 )
              v70 = (unsigned int *)((char *)v361 - 4);
                  v71 = __ldrex(v70);
                while ( __strex(v71 - 1, v70) );
                v71 = (*v70)--;
              if ( v71 <= 0 )
                j_j_j_j__ZdlPv_9(v80);
            v67 = v48;
              v354 = 0;
LABEL_173:
            if ( !j_leveldb::log::Reader::ReadRecord((int)&ptr, (int)&v359, (const void **)&v365) )
              v48 = v67;
              goto LABEL_176;
            continue;
          break;
        v281 += j_leveldb::WriteBatchInternal::Count(
                  (leveldb::WriteBatchInternal *)&v364,
                  (const leveldb::WriteBatch *)v78);
        if ( j_leveldb::log::Reader::ReadRecord((int)&ptr, (int)&v359, (const void **)&v365) )
          continue;
        break;
LABEL_176:
      v81 = v48;
      if ( v366 )
        (*(void (**)(void))(*(_DWORD *)v366 + 4))();
      v342 = 0;
      v343 = 0x40000000;
      v345 = 0LL;
      v346 = (char *)&unk_28898CC;
      v347 = (char *)&unk_28898CC;
      v82 = v326++;
      v344 = v82;
      v83 = j_leveldb::MemTable::NewIterator(v66);
      j_leveldb::BuildTable(&v360, (int *)&v283, v284, (int)&v289, (char *)v294, v83, (int)&v342);
      v84 = v360;
      v85 = v354;
      if ( v354 == (void *)v360 )
        v47 = v279;
        if ( v354 )
          j_operator delete[](v354);
          v84 = v360;
        if ( v84 )
          v86 = j_leveldb::Status::CopyState(v84, (const char *)v84);
          v85 = (void *)v360;
          v85 = 0;
          v86 = 0;
        v354 = v86;
      if ( v85 )
        j_operator delete[](v85);
      if ( v83 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v83 + 4))(v83);
      v87 = *((_DWORD *)v66 + 2);
      v88 = __OFSUB__(v87--, 1);
      *((_DWORD *)v66 + 2) = v87;
      if ( (unsigned __int8)((v87 < 0) ^ v88) | (v87 == 0) )
        j_leveldb::MemTable::~MemTable(v66);
        j_operator delete((void *)v66);
      v48 = v81;
      v89 = &v338;
      if ( !v354 && v345 )
        v90 = (int)v319;
          *(_QWORD *)v319 = v344;
          v319 = (_BYTE *)(v90 + 8);
          goto LABEL_212;
        v91 = v318;
        v92 = 0;
        v93 = (v319 - (_BYTE *)v318) >> 3;
        if ( !v93 )
          v93 = 1;
        v94 = v93 + ((v319 - (_BYTE *)v318) >> 3);
        v95 = v93 + ((v319 - (_BYTE *)v318) >> 3);
        if ( 0 != v94 >> 29 )
          v95 = 0x1FFFFFFF;
        if ( v94 < v93 )
        if ( v95 )
          if ( v95 < 0x20000000 )
            v96 = &v338;
            v92 = (char *)j_operator new(8 * v95);
            v91 = v318;
            v90 = (int)v319;
            goto LABEL_207;
LABEL_621:
          sub_21E57F4();
        v96 = &v338;
LABEL_207:
        v97 = (int)&v92[v90 - (_DWORD)v91];
        v98 = HIDWORD(v344);
        *(_DWORD *)&v92[v90 - (_DWORD)v91] = v344;
        *(_DWORD *)(v97 + 4) = v98;
        if ( (v90 - (signed int)v91) >> 3 )
          j___aeabi_memmove8((int)v92, (int)v91);
        v99 = (_BYTE *)(v97 + 8);
        if ( v91 )
          j_operator delete(v91);
        v318 = v92;
        v319 = v99;
        v89 = v96;
        v320 = &v92[8 * v95];
LABEL_212:
      v100 = v291;
      v101 = v344;
      j_leveldb::Status::ToString((leveldb::Status *)&v356, (unsigned int **)&v354);
      v273 = v101;
      v274 = v356;
      j_leveldb::Log(
        v100,
        (leveldb::Logger *)"Log #%llu: %d ops saved to Table #%llu %s",
        __PAIR__(v282, HIDWORD(v282)),
        v281);
      v102 = (void *)(v356 - 12);
      if ( (leveldb::Status *)(v356 - 12) != v48 )
        v55 = (unsigned int *)(v356 - 4);
            v56 = __ldrex(v55);
          while ( __strex(v56 - 1, v55) );
          v56 = (*v55)--;
        if ( v56 <= 0 )
          j_j_j_j__ZdlPv_9(v102);
      v46 = &v355;
      v103 = v347 - 12;
      if ( (leveldb::Status *)(v347 - 12) != v48 )
        v57 = (unsigned int *)(v347 - 4);
            v58 = __ldrex(v57);
          while ( __strex(v58 - 1, v57) );
          v58 = (*v57)--;
        if ( v58 <= 0 )
          j_j_j_j__ZdlPv_9(v103);
      v104 = v346 - 12;
      if ( (leveldb::Status *)(v346 - 12) != v48 )
        v59 = (unsigned int *)(v346 - 4);
            v60 = __ldrex(v59);
          while ( __strex(v60 - 1, v59) );
          v60 = (*v59)--;
        if ( v60 <= 0 )
          j_j_j_j__ZdlPv_9(v104);
      j_leveldb::WriteBatch::~WriteBatch((leveldb::WriteBatch *)&v364);
      v105 = (char *)v365 - 12;
      if ( (leveldb::Status *)((char *)v365 - 12) != v48 )
        v61 = (unsigned int *)((char *)v365 - 4);
            v62 = __ldrex(v61);
          while ( __strex(v62 - 1, v61) );
          v62 = (*v61)--;
        if ( v62 <= 0 )
          j_j_j_j__ZdlPv_9(v105);
      j_leveldb::log::Reader::~Reader((leveldb::log::Reader *)&ptr);
      j_leveldb::log::Reader::Reporter::~Reporter((leveldb::log::Reader::Reporter *)v89);
LABEL_217:
      v106 = (char *)v367 - 12;
      if ( (leveldb::Status *)((char *)v367 - 12) != v48 )
        v49 = (unsigned int *)((char *)v367 - 4);
            v50 = __ldrex(v49);
          while ( __strex(v50 - 1, v49) );
          v50 = (*v49)--;
        if ( v50 <= 0 )
          j_j_j_j__ZdlPv_9(v106);
        v107 = v291;
        v108 = *((_DWORD *)v321 + 2 * v47);
        v109 = *((_DWORD *)v321 + 2 * v47 + 1);
        j_leveldb::Status::ToString((leveldb::Status *)&v353, (unsigned int **)&v354);
        j_leveldb::Log(v107, (leveldb::Logger *)"Log #%llu: ignoring conversion error: %s", __PAIR__(v109, v108), v353);
        v110 = (void *)(v353 - 12);
        if ( (leveldb::Status *)(v353 - 12) != v48 )
          v53 = (unsigned int *)(v353 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v54 = __ldrex(v53);
            while ( __strex(v54 - 1, v53) );
            v54 = (*v53)--;
          if ( v54 <= 0 )
            j_j_j_j__ZdlPv_9(v110);
      sub_1B3D484((int)&v283, (const char **)v46);
        j_operator delete[](v354);
      v111 = (void *)(v355 - 12);
      if ( (leveldb::Status *)(v355 - 12) != v48 )
        v51 = (unsigned int *)(v355 - 4);
            v52 = __ldrex(v51);
          while ( __strex(v52 - 1, v51) );
          v52 = (*v51)--;
        if ( v52 <= 0 )
          j_j_j_j__ZdlPv_9(v111);
      v45 = v321;
      if ( ++v47 < (unsigned int)((v322 - (_BYTE *)v321) >> 3) )
        continue;
      break;
LABEL_224:
    v112 = v318;
    if ( v319 != v318 )
      v113 = (int *)&v361;
      v114 = 0;
      while ( 1 )
        v131 = v112[2 * v114];
        v132 = v112[2 * v114 + 1];
        ptr = 0;
        v331 = (_BYTE *)0x40000000;
        v333 = 0LL;
        v334 = (char *)&unk_28898CC;
        v335 = (char *)&unk_28898CC;
        v332 = __PAIR__(v132, v131);
        j_leveldb::TableFileName(v113, (int *)&v283);
        (*(void (__fastcall **)(leveldb::Status **))(*(_DWORD *)v284 + 44))(&v360);
        if ( v360 )
          j_leveldb::SSTTableFileName(&v356, (int *)&v283);
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            v113,
            &v356);
          v133 = (void *)(v356 - 12);
          if ( (int *)(v356 - 12) != &dword_28898C0 )
            v171 = (unsigned int *)(v356 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v172 = __ldrex(v171);
              while ( __strex(v172 - 1, v171) );
              v172 = (*v171)--;
            if ( v172 <= 0 )
              j_j_j_j__ZdlPv_9(v133);
          (*(void (__fastcall **)(void **))(*(_DWORD *)v284 + 44))(&v338);
          v134 = v338;
          if ( v338 || v360 && (j_operator delete[]((void *)v360), v360 = 0, (v134 = v338) != 0) )
            j_operator delete[](v134);
            if ( v360 )
              break;
        v142 = 0;
        BYTE1(v338) = 1;
        v339 = 0;
        v340 = 0;
        LOBYTE(v338) = v290;
        v280 = v114;
        v143 = j_leveldb::TableCache::NewIterator((char *)v294, (int)&v338, v332, v333, 0);
        v336 = 0;
        v337 = 0;
        (*(void (**)(void))(*(_DWORD *)v143 + 12))();
        if ( (*(int (__fastcall **)(leveldb::Iterator *))(*(_DWORD *)v143 + 8))(v143) == 1 )
          v142 = 0;
          v144 = 1;
            (*(void (__fastcall **)(void **, leveldb::Iterator *))(*(_DWORD *)v143 + 32))(&v338, v143);
            v147 = v339;
            if ( (unsigned int)v339 < 8 || (v148 = (char *)v338, (*(_DWORD *)&v339[(_DWORD)v338 - 8] & 0xFEu) >= 2) )
              v154 = v291;
              v155 = v332;
              j_leveldb::EscapeString((const void **)&v352, (int)&v338);
              j_leveldb::Log(v154, (leveldb::Logger *)"Table #%llu: unparsable key %s", v155, v352);
              v156 = (void *)(v352 - 12);
              if ( (int *)(v352 - 12) != &dword_28898C0 )
                v145 = (unsigned int *)(v352 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v146 = __ldrex(v145);
                  while ( __strex(v146 - 1, v145) );
                }
                else
                  v146 = (*v145)--;
                if ( v146 <= 0 )
                  j_j_j_j__ZdlPv_9(v156);
              v149 = *(_DWORD *)&v339[(_DWORD)v338 - 4];
              ++v142;
              v150 = (*(_DWORD *)&v339[(_DWORD)v338 - 8] >> 8) | (v149 << 24);
              v151 = v149 >> 8;
              if ( v144 & 1 )
                sub_21E8190((void **)&v334, (char *)v338, v339);
                v148 = (char *)v338;
                v147 = v339;
              sub_21E8190((void **)&v335, v148, v147);
              v144 = 0;
              v152 = 0;
              if ( v150 <= v336 )
                v152 = 1;
              v153 = 0;
              if ( v151 <= v337 )
                v153 = 1;
              if ( v151 == v337 )
                v153 = v152;
              if ( !v153 )
                *(_QWORD *)&v336 = *(_QWORD *)&v150;
                v144 = 0;
            (*(void (__fastcall **)(leveldb::Iterator *))(*(_DWORD *)v143 + 24))(v143);
          while ( (*(int (__fastcall **)(leveldb::Iterator *))(*(_DWORD *)v143 + 8))(v143) );
        (*(void (__fastcall **)(void **, leveldb::Iterator *))(*(_DWORD *)v143 + 40))(&v351, v143);
        if ( v351 )
          j_operator delete[](v351);
          (*(void (__fastcall **)(leveldb::Status **, leveldb::Iterator *))(*(_DWORD *)v143 + 40))(&v350, v143);
          v157 = v350;
          v158 = v360;
          if ( v360 != v350 )
              j_operator delete[]((void *)v360);
              v157 = v350;
            if ( v157 )
              v159 = (leveldb::Status *)j_leveldb::Status::CopyState(v157, (const char *)v157);
              v158 = v350;
              v158 = 0;
              v159 = 0;
            v360 = v159;
          if ( v158 )
            j_operator delete[]((void *)v158);
        (*(void (__fastcall **)(leveldb::Iterator *))(*(_DWORD *)v143 + 4))(v143);
        v160 = v291;
        v161 = v332;
        j_leveldb::Status::ToString((leveldb::Status *)&v349, (unsigned int **)&v360);
        j_leveldb::Log(
          v160,
          (leveldb::Logger *)"Table #%llu: %d entries %s",
          __PAIR__(HIDWORD(v161), (unsigned int)v161),
          v142,
          v349);
        v162 = (void *)(v349 - 12);
        if ( (int *)(v349 - 12) != &dword_28898C0 )
          v169 = (unsigned int *)(v349 - 4);
              v170 = __ldrex(v169);
            while ( __strex(v170 - 1, v169) );
            v170 = (*v169)--;
          if ( v170 <= 0 )
            j_j_j_j__ZdlPv_9(v162);
        v113 = (int *)&v361;
          v342 = (char *)ptr;
          v343 = (signed int)v331;
          v344 = v332;
          v345 = v333;
          sub_21E8AF4((int *)&v346, (int *)&v334);
          sub_21E8AF4((int *)&v347, (int *)&v335);
          v348 = *(_QWORD *)&v336;
          ++v326;
          j_leveldb::TableFileName((int *)&v328, (int *)&v283);
          (*(void (__fastcall **)(leveldb::SequentialFile **))(*(_DWORD *)v284 + 16))(&v366);
          if ( v366 )
            j_operator delete[]((void *)v366);
            goto LABEL_415;
          v163 = (leveldb::TableBuilder *)j_operator new(4u);
          j_leveldb::TableBuilder::TableBuilder(v163, (int)&v289, (int)v367);
          BYTE1(v338) = 1;
          v164 = 0;
          v339 = 0;
          v340 = 0;
          LOBYTE(v338) = v290;
          v165 = j_leveldb::TableCache::NewIterator((char *)v294, (int)&v338, v344, v345, 0);
          (*(void (**)(void))(*(_DWORD *)v165 + 12))();
          if ( (*(int (__fastcall **)(leveldb::Iterator *))(*(_DWORD *)v165 + 8))(v165) == 1 )
            v164 = 0;
              (*(void (__fastcall **)(__int64 *, leveldb::Iterator *))(*(_DWORD *)v165 + 32))(&v359, v165);
              (*(void (__fastcall **)(leveldb::Status **, leveldb::Iterator *))(*(_DWORD *)v165 + 36))(&v357, v165);
              j_leveldb::TableBuilder::Add(v163, (const char *)&v359, (int)&v357);
              (*(void (__fastcall **)(leveldb::Iterator *))(*(_DWORD *)v165 + 24))(v165);
              ++v164;
            while ( (*(int (__fastcall **)(leveldb::Iterator *))(*(_DWORD *)v165 + 8))(v165) );
          (*(void (__fastcall **)(leveldb::Iterator *))(*(_DWORD *)v165 + 4))(v165);
          sub_1B3D484((int)&v283, (const char **)&v361);
          if ( v164 )
            j_leveldb::TableBuilder::Finish((leveldb::TableBuilder *)&v365, v163);
            v166 = v365;
            v167 = v366;
            if ( v366 == v365 )
              v168 = v366;
              if ( v366 )
                j_operator delete[]((void *)v366);
                v166 = v365;
              if ( v166 )
                v167 = (leveldb::SequentialFile *)j_leveldb::Status::CopyState(v166, (const char *)v166);
                v168 = v365;
                v168 = 0;
                v167 = 0;
              v366 = v167;
            if ( v168 )
              j_operator delete[]((void *)v168);
              v167 = v366;
            if ( !v167 )
              LODWORD(v173) = j_leveldb::TableBuilder::FileSize(v163);
              v345 = v173;
            j_leveldb::TableBuilder::Abandon(v163);
          j_leveldb::TableBuilder::~TableBuilder(v163);
          j_operator delete((void *)v163);
          if ( !v366 )
            (*(void (__fastcall **)(leveldb::Status **))(*(_DWORD *)v367 + 12))(&v364);
            v174 = v364;
            v175 = v366;
            if ( v366 != v364 )
                v174 = v364;
              if ( v174 )
                v176 = (leveldb::SequentialFile *)j_leveldb::Status::CopyState(v174, (const char *)v174);
                v175 = v364;
                v175 = 0;
                v176 = 0;
              v366 = v176;
            if ( v175 )
              j_operator delete[]((void *)v175);
          if ( v367 )
            (*(void (**)(void))(*(_DWORD *)v367 + 4))();
          v367 = 0;
          if ( v164 < 1 )
LABEL_410:
            if ( !v366 )
              goto LABEL_415;
          else if ( !v366 )
            j_leveldb::TableFileName((int *)&v338, (int *)&v283);
            (*(void (__fastcall **)(leveldb::Status **))(*(_DWORD *)v284 + 48))(&v363);
            v179 = v363;
            v180 = v366;
            if ( v366 == v363 )
              v182 = v366;
              v181 = &dword_28898C0;
                v179 = v363;
              if ( v179 )
                v180 = (leveldb::SequentialFile *)j_leveldb::Status::CopyState(v179, (const char *)v179);
                v182 = v363;
                v182 = 0;
                v180 = 0;
              v366 = v180;
            if ( v182 )
              j_operator delete[]((void *)v182);
              v180 = v366;
            if ( !v180 )
              j_leveldb::Log(v291, (leveldb::Logger *)"Table #%llu: %d entries repaired", v344, v164);
              sub_1B3D6D0((int)&v324, (int)&v342);
            v183 = (char *)v338 - 12;
            if ( (int *)((char *)v338 - 12) != v181 )
              v129 = (unsigned int *)((char *)v338 - 4);
                  v130 = __ldrex(v129);
                while ( __strex(v130 - 1, v129) );
                v130 = (*v129)--;
              if ( v130 <= 0 )
                j_j_j_j__ZdlPv_9(v183);
            goto LABEL_410;
          (*(void (__fastcall **)(leveldb::Status **))(*(_DWORD *)v284 + 32))(&v362);
          if ( v362 )
            j_operator delete[]((void *)v362);
LABEL_415:
          v140 = (leveldb::Status *)&dword_28898C0;
          v184 = (char *)v328 - 12;
          if ( (int *)((char *)v328 - 12) != &dword_28898C0 )
            v121 = (unsigned int *)((char *)v328 - 4);
                v122 = __ldrex(v121);
              while ( __strex(v122 - 1, v121) );
              v122 = (*v121)--;
            if ( v122 <= 0 )
              j_j_j_j__ZdlPv_9(v184);
          v114 = v280;
          v185 = v347 - 12;
          if ( (int *)(v347 - 12) != &dword_28898C0 )
            v123 = (unsigned int *)(v347 - 4);
                v124 = __ldrex(v123);
              while ( __strex(v124 - 1, v123) );
              v124 = (*v123)--;
            if ( v124 <= 0 )
              j_j_j_j__ZdlPv_9(v185);
          v141 = v346 - 12;
          if ( (int *)(v346 - 12) == &dword_28898C0 )
            goto LABEL_418;
          v125 = (unsigned int *)(v346 - 4);
              v126 = __ldrex(v125);
            while ( __strex(v126 - 1, v125) );
LABEL_263:
            if ( v126 <= 0 )
              j_j_j_j__ZdlPv_9(v141);
LABEL_262:
          v126 = (*v125)--;
          goto LABEL_263;
        sub_1B3D6D0((int)&v324, (int)&ptr);
        v140 = (leveldb::Status *)&dword_28898C0;
        v114 = v280;
LABEL_418:
          j_operator delete[]((void *)v360);
        v186 = (char *)v361 - 12;
        if ( (leveldb::Status *)((char *)v361 - 12) != v140 )
          v115 = (unsigned int *)((char *)v361 - 4);
              v116 = __ldrex(v115);
            while ( __strex(v116 - 1, v115) );
            v116 = (*v115)--;
          if ( v116 <= 0 )
            j_j_j_j__ZdlPv_9(v186);
        v187 = v335 - 12;
        if ( (leveldb::Status *)(v335 - 12) != v140 )
          v117 = (unsigned int *)(v335 - 4);
              v118 = __ldrex(v117);
            while ( __strex(v118 - 1, v117) );
            v118 = (*v117)--;
          if ( v118 <= 0 )
            j_j_j_j__ZdlPv_9(v187);
        v188 = v334 - 12;
        if ( (leveldb::Status *)(v334 - 12) != v140 )
          v119 = (unsigned int *)(v334 - 4);
              v120 = __ldrex(v119);
            while ( __strex(v120 - 1, v119) );
            v120 = (*v119)--;
          if ( v120 <= 0 )
            j_j_j_j__ZdlPv_9(v188);
        v112 = v318;
        if ( ++v114 >= (unsigned int)((v319 - (_BYTE *)v318) >> 3) )
          goto LABEL_424;
      j_leveldb::TableFileName(&v355, (int *)&v283);
      sub_1B3D484((int)&v283, (const char **)&v355);
      v135 = (void *)(v355 - 12);
      if ( (int *)(v355 - 12) != &dword_28898C0 )
        v177 = (unsigned int *)(v355 - 4);
            v127 = __ldrex(v177);
          while ( __strex(v127 - 1, v177) );
          v127 = (*v177)--;
        if ( v127 <= 0 )
          j_j_j_j__ZdlPv_9(v135);
      j_leveldb::SSTTableFileName((int *)&v354, (int *)&v283);
      sub_1B3D484((int)&v283, (const char **)&v354);
      v136 = (char *)v354 - 12;
      if ( (int *)((char *)v354 - 12) != &dword_28898C0 )
        v178 = (unsigned int *)((char *)v354 - 4);
            v128 = __ldrex(v178);
          while ( __strex(v128 - 1, v178) );
          v128 = (*v178)--;
        if ( v128 <= 0 )
          j_j_j_j__ZdlPv_9(v136);
      v137 = v291;
      v138 = HIDWORD(v332);
      v139 = v332;
      j_leveldb::Status::ToString((leveldb::Status *)&v353, (unsigned int **)&v360);
      j_leveldb::Log(v137, (leveldb::Logger *)"Table #%llu: dropped: %s", __PAIR__(v138, v139), v353);
      v140 = (leveldb::Status *)&dword_28898C0;
      v141 = (char *)(v353 - 12);
      if ( (int *)(v353 - 12) == &dword_28898C0 )
        goto LABEL_418;
      v125 = (unsigned int *)(v353 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v126 = __ldrex(v125);
        while ( __strex(v126 - 1, v125) );
        goto LABEL_263;
      goto LABEL_262;
LABEL_424:
    j_leveldb::TempFileName((int *)&v338, (int *)&v283);
    (*(void (__fastcall **)(leveldb::Status **))(*(_DWORD *)v284 + 16))(&v327);
    v189 = v275;
    if ( !v327 )
      LODWORD(v190) = 0;
      if ( v325 == v324 )
        v191 = (int *)&v295;
        HIDWORD(v190) = 0;
        v192 = (char *)v324 + 32;
        v193 = 0;
          v194 = *(_QWORD *)v192;
          v195 = 0;
          v196 = 0;
          v192 += 40;
          ++v193;
          if ( (unsigned int)v190 < (unsigned int)v194 )
            v195 = 1;
          if ( HIDWORD(v190) < HIDWORD(v194) )
            v196 = 1;
          if ( HIDWORD(v190) == HIDWORD(v194) )
            v196 = v195;
          if ( v196 )
            v190 = v194;
        while ( v193 < -858993459 * ((v325 - (_BYTE *)v324) >> 3) );
      v197 = (const char *)(*(int (**)(void))(*(_DWORD *)v286 + 12))();
      v198 = (unsigned int)v197;
      v199 = j_strlen_0(v197);
      v300 = 1;
      sub_21E91E0(&ptr, v198, v199);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        v191,
        (int *)&ptr);
      v201 = (unsigned int *)&dword_28898C0;
      v202 = (char *)ptr - 12;
      if ( (int *)((char *)ptr - 12) != &dword_28898C0 )
        v201 = (unsigned int *)((char *)ptr - 4);
            v233 = __ldrex(v201);
            v200 = v233 - 1;
          while ( __strex(v233 - 1, v201) );
          v233 = *v201;
          v200 = *v201 - 1;
          *v201 = v200;
        if ( v233 <= 0 )
          j_j_j_j__ZdlPv_9(v202);
      v203 = 0;
      v301 = 1;
      v297 = 0;
      v296 = 0;
      v302 = 1;
      v298 = v326;
      v303 = 1;
      v299 = v190;
      v204 = (char *)v324;
      if ( v325 != v324 )
        v205 = 28;
          v206 = (const leveldb::InternalKey *)&v204[v205];
          v207 = *(_QWORD *)((char *)v206 - 12);
          j_leveldb::VersionEdit::AddFile(
            (leveldb::VersionEdit *)v191,
            0,
            *(_QWORD *)((char *)v206 - 20),
            *(_QWORD *)((char *)v206 - 12),
            (const leveldb::InternalKey *)((char *)v206 - 4),
            v206);
          v204 = (char *)v324;
          v205 += 40;
          ++v203;
        while ( v203 < -858993459 * ((v325 - (_BYTE *)v324) >> 3) );
      j_leveldb::log::Writer::Writer((leveldb::log::Writer *)&ptr, (leveldb::WritableFile *)v359, (int)v201, v200);
      v357 = (leveldb::Status *)&unk_28898CC;
      j_leveldb::VersionEdit::EncodeTo((int)v191, (const void **)&v357);
      v342 = (char *)v357;
      v343 = *((_DWORD *)v357 - 3);
      j_leveldb::log::Writer::AddRecord(&v328, (int)&ptr, (unsigned __int64 *)&v342);
      v208 = v328;
      v209 = v327;
      if ( v327 == v328 )
        v189 = v275;
        if ( v327 )
          j_operator delete[]((void *)v327);
          v208 = v328;
        if ( v208 )
          v210 = (leveldb::Status *)j_leveldb::Status::CopyState(v208, (const char *)v208);
          v209 = v328;
          v209 = 0;
          v210 = 0;
        v327 = v210;
      if ( v209 )
        j_operator delete[]((void *)v209);
      v211 = (char *)v357 - 12;
      if ( (int *)((char *)v357 - 12) != &dword_28898C0 )
        v234 = (unsigned int *)((char *)v357 - 4);
            v235 = __ldrex(v234);
          while ( __strex(v235 - 1, v234) );
          v235 = (*v234)--;
        if ( v235 <= 0 )
          j_j_j_j__ZdlPv_9(v211);
      j_leveldb::log::Writer::~Writer((leveldb::log::Writer *)&ptr);
      if ( !v327 )
        (*(void (__fastcall **)(leveldb::Status **))(*(_DWORD *)v359 + 12))(&v367);
        v212 = v367;
        v213 = v327;
        if ( v327 != v367 )
          if ( v327 )
            j_operator delete[]((void *)v327);
            v212 = v367;
          if ( v212 )
            v214 = (leveldb::Status *)j_leveldb::Status::CopyState(v212, (const char *)v212);
            v213 = v367;
            v213 = 0;
            v214 = 0;
          v327 = v214;
        if ( v213 )
          j_operator delete[]((void *)v213);
      v276 = (leveldb::VersionEdit *)v191;
      if ( (_DWORD)v359 )
        (*(void (**)(void))(*(_DWORD *)v359 + 4))();
      LODWORD(v359) = 0;
      if ( v327 )
        (*(void (__fastcall **)(leveldb::SequentialFile **))(*(_DWORD *)v284 + 32))(&v366);
        v215 = v366;
        if ( v316 != v315 )
          v216 = 0;
            sub_21E8AF4((int *)&v364, (int *)&v283);
            sub_21E7408((const void **)&v364, "/", 1u);
            v221 = (leveldb::Status **)sub_21E72F0((const void **)&v364, (const void **)v315 + v216);
            v365 = *v221;
            *v221 = (leveldb::Status *)&unk_28898CC;
            sub_1B3D484((int)&v283, (const char **)&v365);
            v222 = (char *)v365 - 12;
            if ( (int *)((char *)v365 - 12) != &dword_28898C0 )
              v217 = (unsigned int *)((char *)v365 - 4);
                  v218 = __ldrex(v217);
                while ( __strex(v218 - 1, v217) );
                v218 = (*v217)--;
              if ( v218 <= 0 )
                j_j_j_j__ZdlPv_9(v222);
            v223 = (char *)v364 - 12;
            if ( (int *)((char *)v364 - 12) != &dword_28898C0 )
              v219 = (unsigned int *)((char *)v364 - 4);
                  v220 = __ldrex(v219);
                while ( __strex(v220 - 1, v219) );
                v220 = (*v219)--;
              if ( v220 <= 0 )
                j_j_j_j__ZdlPv_9(v223);
            ++v216;
          while ( v216 < ((char *)v316 - (_BYTE *)v315) >> 2 );
        v224 = v284;
        v225 = *(void (__fastcall **)(leveldb::Status **, unsigned int, void **, leveldb::Status **))(*(_DWORD *)v284 + 48);
        j_leveldb::DescriptorFileName((int *)&v362, (int *)&v283);
        v225(&v363, v224, &v338, &v362);
        v226 = v363;
        v227 = v327;
        if ( v327 == v363 )
          v189 = v275;
            v226 = v363;
          if ( v226 )
            v228 = (leveldb::Status *)j_leveldb::Status::CopyState(v226, (const char *)v226);
            v227 = v363;
            v227 = 0;
            v228 = 0;
          v327 = v228;
        if ( v227 )
          j_operator delete[]((void *)v227);
        v229 = (char *)v362 - 12;
        if ( (int *)((char *)v362 - 12) != &dword_28898C0 )
          v270 = (unsigned int *)((char *)v362 - 4);
              v271 = __ldrex(v270);
            while ( __strex(v271 - 1, v270) );
            v271 = (*v270)--;
          if ( v271 <= 0 )
            j_j_j_j__ZdlPv_9(v229);
        HIDWORD(v230) = v284;
          (*(void (__fastcall **)(leveldb::Status **))(*(_DWORD *)v284 + 32))(&v360);
          v215 = v360;
          v272 = 1;
          LODWORD(v230) = &v361;
          j_leveldb::SetCurrentFile(v230, (int *)&v283);
          v231 = v361;
          v215 = v327;
          if ( v327 != v361 )
            if ( v327 )
              j_operator delete[]((void *)v327);
              v231 = v361;
            if ( v231 )
              v232 = (leveldb::Status *)j_leveldb::Status::CopyState(v231, (const char *)v231);
              v215 = v361;
              v327 = v232;
              v215 = 0;
              v327 = 0;
      if ( v215 )
        j_operator delete[]((void *)v215);
    v6 = v278;
    v17 = (signed int)&dword_28898C0;
    v236 = (char *)v338 - 12;
    if ( (int *)((char *)v338 - 12) != &dword_28898C0 )
      v17 = (signed int)v338 - 4;
          v269 = __ldrex((unsigned int *)v17);
          v18 = v269 - 1;
        while ( __strex(v269 - 1, (unsigned int *)v17) );
        v269 = *(_DWORD *)v17;
        v18 = *(_DWORD *)v17 - 1;
        *(_DWORD *)v17 = v18;
      if ( v269 <= 0 )
        j_j_j_j__ZdlPv_9(v236);
    v237 = *v189;
    v238 = v327;
    if ( *v189 == v327 )
      v239 = *v189;
      if ( v237 )
        j_operator delete[]((void *)v237);
        v238 = v327;
      if ( v238 )
        v237 = (leveldb::Status *)j_leveldb::Status::CopyState(v238, (const char *)v238);
        v239 = v327;
        v239 = 0;
        v237 = 0;
      *v189 = v237;
    if ( v239 )
      j_operator delete[]((void *)v239);
      v237 = *v189;
    if ( !v237 )
      HIDWORD(v240) = -858993459 * ((v325 - (_BYTE *)v324) >> 3);
        v241 = 0;
        v242 = 0;
        v243 = (char *)v324 + 16;
        v244 = 0;
          v245 = *(_QWORD *)v243;
          v243 += 40;
          ++v244;
          v246 = __PAIR__(v242, v241) + v245;
          v242 = (__PAIR__(v242, v241) + v245) >> 32;
          v241 = v246;
        while ( v244 < HIDWORD(v240) );
      LODWORD(v240) = v283;
        v291,
        (leveldb::Logger *)"**** Repaired leveldb %s; recovered %d files; %llu bytes. Some data may have been lost. ****",
        v240,
        v241,
        v242,
        v273,
        v274);
  if ( v294 )
    v247 = j_leveldb::TableCache::~TableCache(v294);
    j_operator delete((void *)v247);
  v248 = (leveldb *)v293;
  v249 = (unsigned __int8)v293 == 0;
  v250 = (unsigned int)v293 >> 8;
  if ( (_BYTE)v293 )
    v248 = v291;
    v249 = v291 == 0;
  if ( !v249 )
    (*(void (__cdecl **)(leveldb *, _DWORD, signed int, int, signed int))(*(_DWORD *)v248 + 4))(
      v248,
      *(_DWORD *)(*(_DWORD *)v248 + 4),
      v17,
      v18,
      v272);
    v250 = HIBYTE(v293);
  if ( v250 && v292 )
    (*(void (__cdecl **)(int, _DWORD, signed int, int, signed int))(*(_DWORD *)v292 + 4))(
      v292,
      *(_DWORD *)(*(_DWORD *)v292 + 4),
  v251 = v324;
  v252 = v325;
  if ( v324 != v325 )
      v257 = *((_DWORD *)v251 + 7);
      v258 = (void *)(v257 - 12);
      if ( (int *)(v257 - 12) != &dword_28898C0 )
        v253 = (unsigned int *)(v257 - 4);
            v254 = __ldrex(v253);
          while ( __strex(v254 - 1, v253) );
          v254 = (*v253)--;
        if ( v254 <= 0 )
          j_j_j_j__ZdlPv_9(v258);
      v259 = *((_DWORD *)v251 + 6);
      v260 = (void *)(v259 - 12);
      if ( (int *)(v259 - 12) != &dword_28898C0 )
        v255 = (unsigned int *)(v259 - 4);
            v256 = __ldrex(v255);
          while ( __strex(v256 - 1, v255) );
          v256 = (*v255)--;
        if ( v256 <= 0 )
          j_j_j_j__ZdlPv_9(v260);
      v251 = (char *)v251 + 40;
    while ( v251 != v252 );
    v251 = v324;
  if ( v251 )
    j_operator delete(v251);
  if ( v321 )
    j_operator delete(v321);
  if ( v318 )
    j_operator delete(v318);
  v261 = (int *)v315;
  v262 = v316;
  if ( v315 != v316 )
      v265 = (int *)(*v261 - 12);
      if ( v265 != &dword_28898C0 )
        v263 = (unsigned int *)(*v261 - 4);
            v264 = __ldrex(v263);
          while ( __strex(v264 - 1, v263) );
          v264 = (*v263)--;
        if ( v264 <= 0 )
          j_j_j_j__ZdlPv_9(v265);
      ++v261;
    while ( v261 != v262 );
    v261 = (int *)v315;
  if ( v261 )
    j_operator delete(v261);
  j_leveldb::VersionEdit::~VersionEdit(v276);
  j_leveldb::FilterPolicy::~FilterPolicy(v6);
  j_leveldb::Comparator::~Comparator((leveldb::Comparator *)&v285);
  v266 = v283 - 12;
  if ( (int *)(v283 - 12) != &dword_28898C0 )
    v267 = (unsigned int *)(v283 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v268 = __ldrex(v267);
      while ( __strex(v268 - 1, v267) );
      v268 = (*v267)--;
    if ( v268 <= 0 )
      j_j_j_j__ZdlPv_9(v266);
}


char *__fastcall leveldb::WriteBatch::WriteBatch(leveldb::WriteBatch *this)
{
  char *v1; // r4@1

  v1 = (char *)this;
  *(_DWORD *)this = &unk_28898CC;
  sub_21E7EE0((const void **)this, 0, (_BYTE *)dword_28898C0, 0);
  sub_21E849C(v1, 0xCu, 0);
  return v1;
}


void __fastcall leveldb::DBImpl::Write(void **a1, int a2, char *a3, int a4)
{
  int v4; // r7@1
  leveldb::port::Mutex *v5; // r8@1
  leveldb::port::CondVar *v6; // r5@1
  void **v7; // r10@1
  int v8; // r6@1
  char *v9; // r9@1
  leveldb::Status ***v10; // r0@1
  const char *v11; // r1@1
  int v12; // r0@2
  int v13; // r0@5
  char v14; // r2@10
  leveldb::Status *v15; // r5@12
  int *v16; // r6@14
  int v17; // r2@14
  int v18; // r3@14
  int v19; // r6@14
  int v20; // t1@14
  unsigned int v21; // r10@14
  __int64 v22; // r0@14
  leveldb::Status **v23; // r9@16
  int v24; // t1@17
  int v25; // t1@33
  int v26; // r8@24
  int v27; // r4@28
  int v28; // r5@29
  int v29; // r9@30
  const leveldb::WriteBatch *v30; // r1@34
  int v31; // r5@34
  int v32; // r1@34
  signed int v33; // r6@39
  const char *v34; // r1@41
  const char *v35; // r1@49
  const char *v36; // r1@54
  bool v37; // zf@54
  __int64 v38; // r1@63
  const char *v39; // r0@64
  int v40; // r4@64
  const char *v41; // r1@64
  int v42; // r0@65
  int v43; // r0@66
  leveldb::Status *v44; // r0@68
  void *v45; // r0@72
  const char *v46; // r0@77
  const char *v47; // r1@77
  char *v48; // [sp+4h] [bp-3Ch]@16
  void **v49; // [sp+8h] [bp-38h]@14
  leveldb::port::Mutex *v50; // [sp+Ch] [bp-34h]@16
  __int64 v51; // [sp+10h] [bp-30h]@14
  unsigned int v52; // [sp+1Ch] [bp-24h]@16
  int v53; // [sp+1Ch] [bp-24h]@35
  int v54; // [sp+20h] [bp-20h]@14
  int v55; // [sp+20h] [bp-20h]@35
  leveldb::WriteBatch *v56; // [sp+24h] [bp-1Ch]@14
  leveldb::Status *v57; // [sp+28h] [bp-18h]@49
  leveldb::Status *v58; // [sp+2Ch] [bp-14h]@41
  int v59; // [sp+30h] [bp-10h]@34
  int v60; // [sp+34h] [bp-Ch]@34
  void *ptr; // [sp+38h] [bp-8h]@34
  leveldb::Status *v62; // [sp+3Ch] [bp-4h]@12
  leveldb::Status *v63; // [sp+40h] [bp+0h]@1
  int v64; // [sp+44h] [bp+4h]@1
  char v65; // [sp+48h] [bp+8h]@1
  char v66; // [sp+49h] [bp+9h]@1
  int v67; // [sp+4Ch] [bp+Ch]@1

  v4 = a2;
  v5 = (leveldb::port::Mutex *)(a2 + 1112);
  v6 = (leveldb::port::CondVar *)&v67;
  v7 = a1;
  v8 = a4;
  v9 = a3;
  v63 = 0;
  j_leveldb::port::CondVar::CondVar((leveldb::port::CondVar *)&v67, (leveldb::port::Mutex *)(a2 + 1112));
  v64 = v8;
  v65 = *v9;
  v66 = 0;
  j_leveldb::port::Mutex::Lock(v5);
  v10 = *(leveldb::Status ****)(v4 + 1184);
  v11 = (const char *)(*(_DWORD *)(v4 + 1192) - 4);
  if ( (const char *)v10 == v11 )
  {
    if ( (unsigned int)(*(_DWORD *)(v4 + 1164) - ((*(_DWORD *)(v4 + 1196) - *(_DWORD *)(v4 + 1160)) >> 2)) <= 1 )
      j_std::deque<leveldb::DBImpl::Writer *,std::allocator<leveldb::DBImpl::Writer *>>::_M_reallocate_map(
        v4 + 1160,
        1u,
        0);
    *(_DWORD *)(*(_DWORD *)(v4 + 1196) + 4) = j_operator new(0x200u);
    **(_DWORD **)(v4 + 1184) = &v63;
    v13 = *(_DWORD *)(v4 + 1196);
    *(_DWORD *)(v4 + 1196) = v13 + 4;
    v12 = *(_DWORD *)(v13 + 4);
    *(_DWORD *)(v4 + 1188) = v12;
    v11 = (const char *)(v12 + 512);
    *(_DWORD *)(v4 + 1192) = v12 + 512;
  }
  else
    *v10 = &v63;
    v12 = *(_DWORD *)(v4 + 1184) + 4;
  *(_DWORD *)(v4 + 1184) = v12;
  while ( 1 )
    if ( v66 )
    {
      if ( v63 )
        *v7 = j_leveldb::Status::CopyState(v63, v11);
      else
        *v7 = 0;
      goto LABEL_83;
    }
    if ( &v63 == **(leveldb::Status ****)(v4 + 1168) )
      break;
    j_leveldb::port::CondVar::Wait((leveldb::port::CondVar *)&v67);
  v14 = 0;
  if ( !v8 )
    v14 = 1;
  j_leveldb::DBImpl::MakeRoomForWrite((leveldb::DBImpl *)&v62, v4, v14);
  v15 = v62;
  if ( !v8 || v62 )
    v23 = &v63;
    v16 = *(int **)(v4 + 1168);
    v22 = *(_QWORD *)(*(_DWORD *)(v4 + 1276) + 40);
    v49 = v7;
    v54 = *(_DWORD *)(v4 + 1176);
    v17 = *(_DWORD *)(v4 + 1180);
    LODWORD(v51) = *(_QWORD *)(*(_DWORD *)(v4 + 1276) + 40);
    v20 = *v16;
    v19 = (int)(v16 + 1);
    v18 = v20;
    LODWORD(v22) = *(_DWORD *)(v20 + 4);
    v56 = (leveldb::WriteBatch *)v22;
    v21 = *(_DWORD *)(*(_DWORD *)v22 - 12);
    LODWORD(v22) = 0x100000;
    if ( v21 <= 0x20000 )
      LODWORD(v22) = v21 + 0x20000;
    v48 = v9;
    v23 = (leveldb::Status **)v18;
    HIDWORD(v51) = HIDWORD(v22);
    v52 = v22;
    v50 = v5;
    if ( v19 == *(_DWORD *)(v4 + 1176) )
      v24 = *(_DWORD *)(v17 + 4);
      v17 += 4;
      v19 = v24;
      v54 = v24 + 512;
    while ( v19 != *(_DWORD *)(v4 + 1184) )
      v26 = *(_DWORD *)v19;
      if ( *(_BYTE *)(*(_DWORD *)v19 + 8) )
      {
        if ( !*(_BYTE *)(v18 + 8) )
          break;
      }
      HIDWORD(v22) = *(_DWORD *)(v26 + 4);
      if ( HIDWORD(v22) )
        v21 += *(_DWORD *)(*(_DWORD *)HIDWORD(v22) - 12);
        if ( v21 > v52 )
        LODWORD(v22) = v56;
        v27 = v18;
        if ( v56 == *(leveldb::WriteBatch **)(v18 + 4) )
        {
          v29 = *(_DWORD *)(v4 + 1200);
          v28 = v17;
          j_leveldb::WriteBatchInternal::Append(
            *(leveldb::WriteBatchInternal **)(v4 + 1200),
            v56,
            (const leveldb::WriteBatch *)v17);
          HIDWORD(v22) = *(_DWORD *)(v26 + 4);
          LODWORD(v22) = v29;
        }
        else
        v56 = (leveldb::WriteBatch *)v22;
        j_leveldb::WriteBatchInternal::Append(
          (leveldb::WriteBatchInternal *)v22,
          (leveldb::WriteBatch *)HIDWORD(v22),
          (const leveldb::WriteBatch *)v17);
        v17 = v28;
        v18 = v27;
      v19 += 4;
      v23 = (leveldb::Status **)v26;
      if ( v54 == v19 )
        v25 = *(_DWORD *)(v17 + 4);
        v17 += 4;
        v19 = v25;
        v23 = (leveldb::Status **)v26;
        v54 = v25 + 512;
    j_leveldb::WriteBatchInternal::SetSequence(v56, (leveldb::WriteBatch *)HIDWORD(v22), v51 + 1);
    v5 = v50;
    v31 = j_leveldb::WriteBatchInternal::Count(v56, v30);
    j_leveldb::port::Mutex::Unlock(v50);
    v32 = *(_DWORD *)(v4 + 1152);
    v59 = *(_DWORD *)v56;
    v60 = *(_DWORD *)(v59 - 12);
    j_leveldb::log::Writer::AddRecord(&ptr, v32, (unsigned __int64 *)&v59);
    if ( ptr )
      v53 = (unsigned __int64)(v31 + v51) >> 32;
      v55 = v31 + v51;
      v15 = (leveldb::Status *)j_leveldb::Status::CopyState((leveldb::Status *)ptr, (const char *)(v31 + v51));
      v62 = v15;
      if ( ptr )
        j_operator delete[](ptr);
    else
      v15 = 0;
    v7 = v49;
    v33 = 0;
    if ( !v15 && *v48 )
      (*(void (__fastcall **)(leveldb::Status **))(**(_DWORD **)(v4 + 1140) + 20))(&v58);
      if ( v58 )
        v15 = (leveldb::Status *)j_leveldb::Status::CopyState(v58, v34);
        v62 = v15;
        if ( v58 )
          j_operator delete[]((void *)v58);
        v15 = 0;
      v33 = (signed int)v15;
      if ( v15 )
        v33 = 1;
    if ( !v15 )
      j_leveldb::WriteBatchInternal::InsertInto(
        (leveldb::WriteBatchInternal *)&v57,
        v56,
        *(leveldb::MemTable **)(v4 + 1128));
      if ( v57 )
        v15 = (leveldb::Status *)j_leveldb::Status::CopyState(v57, v35);
        if ( v57 )
          j_operator delete[]((void *)v57);
    j_leveldb::port::Mutex::Lock(v50);
    v37 = v33 == 1;
    if ( v33 == 1 )
      v37 = *(_DWORD *)(v4 + 1280) == 0;
    if ( v37 )
        *(_DWORD *)(v4 + 1280) = j_leveldb::Status::CopyState(v15, v36);
      j_leveldb::port::CondVar::SignalAll((leveldb::port::CondVar *)(v4 + 1120));
    if ( v56 == *(leveldb::WriteBatch **)(v4 + 1200) )
      j_leveldb::WriteBatch::Clear(v56);
    LODWORD(v38) = v55;
    HIDWORD(v38) = v53;
    *(_QWORD *)(*(_DWORD *)(v4 + 1276) + 40) = v38;
  do
    v39 = *(const char **)(v4 + 1168);
    v40 = *(_DWORD *)v39;
    v41 = (const char *)(*(_DWORD *)(v4 + 1176) - 4);
    if ( v39 == v41 )
      j_operator delete(*(void **)(v4 + 1172));
      v43 = *(_DWORD *)(v4 + 1180);
      *(_DWORD *)(v4 + 1180) = v43 + 4;
      v42 = *(_DWORD *)(v43 + 4);
      *(_DWORD *)(v4 + 1172) = v42;
      v41 = (const char *)(v42 + 512);
      *(_DWORD *)(v4 + 1176) = v42 + 512;
      v42 = (int)(v39 + 4);
    *(_DWORD *)(v4 + 1168) = v42;
    if ( (leveldb::Status **)v40 != &v63 )
      v44 = *(leveldb::Status **)v40;
      if ( *(leveldb::Status **)v40 != v15 )
        if ( v44 )
          j_operator delete[]((void *)v44);
        if ( v15 )
          v45 = j_leveldb::Status::CopyState(v15, v41);
          v45 = 0;
        *(_DWORD *)v40 = v45;
      *(_BYTE *)(v40 + 9) = 1;
      j_leveldb::port::CondVar::Signal((leveldb::port::CondVar *)(v40 + 12));
  while ( (leveldb::Status **)v40 != v23 );
  v46 = *(const char **)(v4 + 1168);
  v47 = *(const char **)(v4 + 1184);
  if ( v47 != v46 )
    j_leveldb::port::CondVar::Signal((leveldb::port::CondVar *)(*(_DWORD *)v46 + 12));
  if ( v15 )
    *v7 = j_leveldb::Status::CopyState(v15, v47);
    j_operator delete[]((void *)v15);
    *v7 = 0;
LABEL_83:
  j_leveldb::port::Mutex::Unlock(v5);
  j_leveldb::port::CondVar::~CondVar(v6);
  if ( v63 )
    j_operator delete[]((void *)v63);
}


void __fastcall leveldb::DBImpl::Write(void **a1, int a2, char *a3, int a4)
{
  leveldb::DBImpl::Write(a1, a2, a3, a4);
}


signed int __fastcall leveldb::Compaction::IsTrivialMove(leveldb::Compaction *this)
{
  int v1; // r1@1
  bool v2; // zf@1
  signed int result; // r0@4
  int v4; // r12@5
  int v5; // r1@5
  int v6; // lr@5
  unsigned int v7; // r1@6
  signed int v8; // r3@6
  unsigned int v9; // r4@7
  unsigned int v10; // r2@7
  int v11; // r5@8
  unsigned __int64 v12; // kr08_8@8
  bool v13; // cf@9
  signed int v14; // r1@9
  signed int v15; // r2@9

  v1 = (*((_QWORD *)this + 15) >> 32) - *((_QWORD *)this + 15);
  v2 = v1 == 4;
  if ( v1 == 4 )
    v2 = *(_QWORD *)((char *)this + 132) >> 32 == (unsigned int)*(_QWORD *)((char *)this + 132);
  if ( v2 )
  {
    v4 = **((_DWORD **)this + 4);
    v5 = *((_QWORD *)this + 18) >> 32;
    v6 = *((_QWORD *)this + 18);
    result = 0;
    if ( v5 == v6 )
    {
      v7 = 0;
      v8 = 0;
    }
    else
      v9 = 0;
      v10 = (v5 - v6) >> 2;
      do
      {
        v11 = *(_DWORD *)(v6 + 4 * v9++);
        v12 = __PAIR__(v8, v7) + *(_QWORD *)(v11 + 16);
        v8 = (__PAIR__((unsigned int)v8, v7) + *(_QWORD *)(v11 + 16)) >> 32;
        v7 = v12;
      }
      while ( v9 < v10 );
    v13 = v7 >= 10 * *(_DWORD *)(*(_DWORD *)(v4 + 8) + 36);
    v2 = v7 == 10 * *(_DWORD *)(*(_DWORD *)(v4 + 8) + 36);
    v14 = 0;
    v15 = 10 * *(_DWORD *)(*(_DWORD *)(v4 + 8) + 36);
    if ( v2 || !v13 )
      v14 = 1;
    if ( v8 <= v15 >> 31 )
      result = 1;
    if ( v8 == v15 >> 31 )
      result = v14;
  }
  else
  return result;
}


int __fastcall leveldb::Block::Block(int result, int a2)
{
  int v2; // r2@1
  unsigned int v3; // r3@1
  unsigned int v4; // r1@2

  v2 = *(_DWORD *)a2;
  *(_DWORD *)result = *(_DWORD *)a2;
  v3 = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 4) = v3;
  *(_BYTE *)(result + 12) = *(_BYTE *)(a2 + 9);
  if ( v3 <= 3 || (v4 = *(_DWORD *)(v2 + v3 - 4), v4 > (v3 - 4) >> 2) )
    *(_DWORD *)(result + 4) = 0;
  else
    *(_DWORD *)(result + 8) = v3 - 4 - 4 * v4;
  return result;
}


char *__fastcall leveldb::log::Writer::EmitPhysicalRecord(int a1, int a2, int a3, unsigned int a4, char *a5)
{
  char *v5; // r8@1 OVERLAPPED
  leveldb::Status **v6; // r6@1
  int v7; // r4@1
  unsigned int v8; // r7@1 OVERLAPPED
  int v9; // off@1
  unsigned int v10; // r2@1
  void (__fastcall *v11)(leveldb::Status **); // r3@1
  void (__fastcall *v12)(leveldb::Status **); // r3@2
  leveldb::Status *v13; // r0@2
  leveldb::Status *v14; // r1@2
  leveldb::Status *v15; // r1@6
  leveldb::Status *v16; // r0@13
  leveldb::Status *v17; // r1@13
  leveldb::Status *v18; // r1@17
  char *result; // r0@22
  leveldb::Status *v20; // [sp+0h] [bp-38h]@13
  __int64 v21; // [sp+4h] [bp-34h]@2
  leveldb::Status *v22; // [sp+Ch] [bp-2Ch]@2
  char *v23; // [sp+10h] [bp-28h]@1
  int v24; // [sp+14h] [bp-24h]@1
  char v25; // [sp+19h] [bp-1Fh]@1
  __int16 v26; // [sp+1Dh] [bp-1Bh]@1
  char v27; // [sp+1Fh] [bp-19h]@1

  v5 = a5;
  v6 = (leveldb::Status **)a1;
  v7 = a2;
  v26 = (signed __int16)a5;
  v8 = a4;
  v27 = a3;
  v9 = __ROR4__(j_leveldb::crc32c::Extend(*(leveldb::crc32c **)(a2 + 4 * a3 + 8), a4, a5, a4), 15);
  j_leveldb::EncodeFixed32((leveldb *)&v25, (char *)(v9 - 1568478504), v10);
  v11 = *(void (__fastcall **)(leveldb::Status **))(**(_DWORD **)v7 + 8);
  v23 = &v25;
  v24 = 7;
  v11(v6);
  if ( !*v6 )
  {
    v12 = *(void (__fastcall **)(leveldb::Status **))(**(_DWORD **)v7 + 8);
    v21 = *(_QWORD *)&v8;
    v12(&v22);
    v13 = *v6;
    v14 = v22;
    if ( *v6 == v22 )
    {
      v15 = *v6;
    }
    else
      if ( v13 )
      {
        j_operator delete[]((void *)v13);
        v14 = v22;
      }
      if ( v14 )
        v13 = (leveldb::Status *)j_leveldb::Status::CopyState(v14, (const char *)v14);
        v15 = v22;
      else
        v15 = 0;
        v13 = 0;
      *v6 = v13;
    if ( v15 )
      j_operator delete[]((void *)v15);
      v13 = *v6;
    if ( !v13 )
      (*(void (__fastcall **)(leveldb::Status **))(**(_DWORD **)v7 + 16))(&v20);
      v16 = *v6;
      v17 = v20;
      if ( *v6 != v20 )
        if ( v16 )
        {
          j_operator delete[]((void *)v16);
          v17 = v20;
        }
        if ( v17 )
          v18 = (leveldb::Status *)j_leveldb::Status::CopyState(v17, (const char *)v17);
          v16 = v20;
        else
          v16 = 0;
          v18 = 0;
        *v6 = v18;
      if ( v16 )
        j_operator delete[]((void *)v16);
  }
  result = &a5[*(_DWORD *)(v7 + 4) + 7];
  *(_DWORD *)(v7 + 4) = result;
  return result;
}


int __fastcall leveldb::WriteBatchInternal::SetCount(leveldb::WriteBatchInternal *this, leveldb::WriteBatch *a2, int a3)
{
  const void **v3; // r5@1
  char *v4; // r4@1
  const void *v5; // r0@1

  v3 = (const void **)this;
  v4 = (char *)a2;
  v5 = *(const void **)this;
  if ( *((_DWORD *)v5 - 1) >= 0 )
  {
    sub_21E8010(v3);
    v5 = *v3;
  }
  return j_j_j__ZN7leveldb13EncodeFixed32EPcj_0((leveldb *)((char *)v5 + 8), v4, a3);
}


void __fastcall leveldb::InternalKeyComparator::FindShortestSeparator(int a1, unsigned int *a2, __int64 *a3)
{
  int *v3; // r4@1
  int v4; // r5@1
  int v5; // r1@1
  int v6; // r0@1
  unsigned int v7; // r6@1
  __int64 v8; // kr00_8@1
  int v9; // r0@2
  int (__cdecl *v10)(int, int *); // r3@2
  int v11; // r1@2
  void *v12; // r0@4
  unsigned int *v13; // r2@6
  signed int v14; // r1@8
  int v15; // [sp+0h] [bp-Ch]@2
  int v16; // [sp+4h] [bp-8h]@2
  int v17; // [sp+Ch] [bp+0h]@1
  int v18; // [sp+10h] [bp+4h]@1
  int v19; // [sp+14h] [bp+8h]@1
  int v20; // [sp+18h] [bp+Ch]@1
  int v21; // [sp+1Ch] [bp+10h]@1

  v3 = (int *)a2;
  v4 = a1;
  v5 = *a2;
  v6 = *(_DWORD *)(v5 - 12);
  v20 = v5;
  v7 = v6 - 8;
  v21 = v6 - 8;
  v8 = *a3;
  v18 = *a3;
  v19 = HIDWORD(v8) - 8;
  sub_21E91E0((void **)&v17, v5, v6 - 8);
  (*(void (**)(void))(**(_DWORD **)(v4 + 4) + 16))();
  if ( *(_DWORD *)(v17 - 12) < v7 )
  {
    v9 = *(_DWORD *)(v4 + 4);
    v10 = *(int (__cdecl **)(int, int *))(*(_DWORD *)v9 + 8);
    v15 = v17;
    v16 = *(_DWORD *)(v17 - 12);
    if ( v10(v9, &v20) <= -1 )
    {
      j_leveldb::PutFixed64((const void **)&v17, v11, -255LL);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(v3, &v17);
    }
  }
  v12 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
      __dmb();
      do
      {
        v14 = __ldrex(v13);
        __strex(v14 - 1, v13);
      }
      while ( &v17 );
    else
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
}


signed int __fastcall leveldb::Block::Iter::Valid(int a1)
{
  unsigned int v1; // r1@1
  unsigned int v2; // r2@1
  signed int result; // r0@1

  v1 = *(_DWORD *)(a1 + 28);
  v2 = *(_DWORD *)(a1 + 36);
  result = 0;
  if ( v2 < v1 )
    result = 1;
  return result;
}


_BOOL4 __fastcall leveldb::MemTableIterator::Valid(leveldb::MemTableIterator *this)
{
  return *((_DWORD *)this + 6) != 0;
}


void *__fastcall leveldb::VersionSet::CompactRange(leveldb::VersionSet *this, int a2, const leveldb::InternalKey *a3, const leveldb::InternalKey *a4)
{
  void *v4; // r5@1
  leveldb::VersionSet *v5; // r8@1
  int v6; // r9@1
  void *v7; // r0@1
  unsigned int v8; // r5@3
  unsigned int v9; // r4@3
  unsigned int v10; // r1@3
  signed int v11; // r3@3
  unsigned int v12; // r2@3
  int v13; // r7@5
  unsigned int v14; // r6@5
  unsigned int v15; // kr00_4@5
  signed int v16; // r7@5
  unsigned int v17; // kr10_4@5
  signed int v18; // r6@5
  int v19; // r0@16
  signed int v20; // r0@16
  int v21; // r0@16
  __int64 v22; // r0@16
  void *ptr; // [sp+8h] [bp-28h]@1
  char *v25; // [sp+Ch] [bp-24h]@1
  int v26; // [sp+10h] [bp-20h]@1

  v4 = 0;
  v5 = this;
  ptr = 0;
  v25 = 0;
  v6 = a2;
  v26 = 0;
  j_leveldb::Version::GetOverlappingInputs(*((int **)this + 50), a2, (int *)a3, (void **)a4, (int)&ptr);
  v7 = ptr;
  if ( ptr != v25 )
  {
    if ( v6 >= 1 )
    {
      v8 = 0;
      v9 = 0;
      v10 = (v25 - (_BYTE *)ptr) >> 2;
      v11 = *(_DWORD *)(*((_DWORD *)v5 + 2) + 36);
      v12 = 0;
      while ( v12 < v10 )
      {
        v13 = *((_DWORD *)ptr + v12++);
        v14 = *(_QWORD *)(v13 + 16) >> 32;
        v15 = *(_QWORD *)(v13 + 16);
        v16 = 0;
        v17 = v8 + v15;
        v9 = (__PAIR__(v9, v8) + __PAIR__(v14, v15)) >> 32;
        v8 += v15;
        v18 = 0;
        if ( v9 < v11 >> 31 )
          v16 = 1;
        if ( v17 < v11 )
          v18 = 1;
        if ( v9 != v11 >> 31 )
          v18 = v16;
        if ( !v18 )
        {
          if ( v12 <= v10 )
          {
            if ( v12 < v10 )
              v25 = (char *)ptr + 4 * v12;
          }
          else
            j_std::vector<leveldb::FileMetaData *,std::allocator<leveldb::FileMetaData *>>::_M_default_append(
              (int)&ptr,
              v12 - v10);
          break;
        }
      }
    }
    v4 = j_operator new(0xD0u);
    v19 = *((_DWORD *)v5 + 2);
    *(_DWORD *)v4 = v6;
    v20 = *(_DWORD *)(v19 + 36);
    *((_DWORD *)v4 + 2) = v20;
    *((_DWORD *)v4 + 3) = v20 >> 31;
    *((_DWORD *)v4 + 4) = 0;
    *((_DWORD *)v4 + 6) = &unk_28898CC;
    *((_DWORD *)v4 + 18) = 0;
    *((_DWORD *)v4 + 19) = 0;
    *((_DWORD *)v4 + 20) = 0;
    *((_DWORD *)v4 + 23) = 0;
    *((_DWORD *)v4 + 24) = 0;
    *((_DWORD *)v4 + 25) = 0;
    *((_DWORD *)v4 + 26) = 0;
    *((_DWORD *)v4 + 22) = 0;
    *((_DWORD *)v4 + 24) = (char *)v4 + 88;
    *((_DWORD *)v4 + 25) = (char *)v4 + 88;
    *((_DWORD *)v4 + 27) = 0;
    *((_DWORD *)v4 + 28) = 0;
    *((_DWORD *)v4 + 29) = 0;
    j_leveldb::VersionEdit::Clear((leveldb::VersionEdit *)((char *)v4 + 24));
    j___aeabi_memclr8_0((int)v4 + 168, 36);
    j___aeabi_memclr4_0((int)v4 + 120, 41);
    v21 = *((_DWORD *)v5 + 50);
    *((_DWORD *)v4 + 4) = v21;
    ++*(_DWORD *)(v21 + 12);
    HIDWORD(v22) = &ptr;
    LODWORD(v22) = (char *)v4 + 120;
    j_std::vector<leveldb::FileMetaData *,std::allocator<leveldb::FileMetaData *>>::operator=(v22);
    j_leveldb::VersionSet::SetupOtherInputs(v5, (leveldb::Compaction *)v4);
    v7 = ptr;
  }
  if ( v7 )
    j_operator delete(v7);
  return v4;
}


int __fastcall leveldb::DBImpl::RecordReadSample(int a1, int a2, unsigned int a3)
{
  int v3; // r5@1
  leveldb::port::Mutex *v4; // r4@1
  unsigned int v5; // r6@1
  int v6; // r7@1
  signed int v7; // r0@1
  int v9; // r7@5
  int v10; // r7@7
  int v11; // r0@9
  bool v12; // zf@9

  v3 = a1;
  v4 = (leveldb::port::Mutex *)(a1 + 1112);
  v5 = a3;
  v6 = a2;
  j_leveldb::port::Mutex::Lock((leveldb::port::Mutex *)(a1 + 1112));
  v7 = j_leveldb::Version::RecordReadSample(*(_DWORD *)(*(_DWORD *)(v3 + 1276) + 200), v6, v5);
  _ZF = v7 == 1;
  if ( v7 == 1 )
    _ZF = *(_BYTE *)(v3 + 1264) == 0;
  if ( _ZF )
  {
    v9 = *(_DWORD *)(v3 + 1116);
    vFFFF0FA0();
    if ( !v9 )
    {
      if ( *(_DWORD *)(v3 + 1132) || (v10 = *(_DWORD *)(v3 + 1268), vFFFF0FA0(), !v10) )
      {
        if ( !*(_DWORD *)(v3 + 1280) )
        {
          v11 = *(_DWORD *)(v3 + 1132);
          v12 = v11 == 0;
          if ( !v11 )
            v12 = *(_DWORD *)(v3 + 1272) == 0;
          if ( !v12 )
            goto LABEL_20;
          __asm { VMOV.F64        D0, #1.0 }
          _R0 = *(_DWORD *)(*(_DWORD *)(v3 + 1276) + 200);
          __asm
          {
            VLDR            D1, [R0,#0x70]
            VCMPE.F64       D1, D0
            VMRS            APSR_nzcv, FPSCR
          }
          if ( !(_NF ^ _VF) || *(_DWORD *)(_R0 + 100) )
LABEL_20:
            *(_BYTE *)(v3 + 1264) = 1;
            (*(void (**)(void))(**(_DWORD **)(v3 + 4) + 60))();
        }
      }
    }
  }
  return j_j_j__ZN7leveldb4port5Mutex6UnlockEv_0(v4);
}


_DWORD *__fastcall leveldb::Status::Status(_DWORD *a1, char a2, int a3, int a4)
{
  int *v4; // r11@1
  int *v5; // r8@1
  int v6; // r4@1
  _DWORD *v7; // r9@1
  int v8; // r5@1
  char v9; // r10@1
  int v10; // r6@1
  _BYTE *v11; // r7@3

  v4 = (int *)a3;
  v5 = (int *)a4;
  v6 = *(_DWORD *)(a3 + 4);
  v7 = a1;
  v8 = *(_DWORD *)(a4 + 4);
  v9 = a2;
  v10 = *(_DWORD *)(a3 + 4);
  if ( v8 )
    v10 = v8 + v6 + 2;
  v11 = j_operator new[](v10 + 5);
  *(_DWORD *)v11 = v10;
  v11[4] = v9;
  j___aeabi_memcpy_0((int)(v11 + 5), *v4, v6);
  {
    *(_WORD *)&v11[v6 + 5] = 8250;
    j___aeabi_memcpy_0((int)&v11[v6 + 7], *v5, v8);
  }
  *v7 = v11;
  return v7;
}


const void **__fastcall leveldb::LockFileName(int *a1, int *a2)
{
  int *v2; // r0@1

  v2 = sub_21E8AF4(a1, a2);
  return sub_21E7408((const void **)v2, "/LOCK", 5u);
}


const void **__fastcall leveldb::OldInfoLogFileName(int *a1, int *a2)
{
  int *v2; // r0@1

  v2 = sub_21E8AF4(a1, a2);
  return sub_21E7408((const void **)v2, "/LOG.old", 8u);
}


int __fastcall leveldb::MemTableIterator::value(leveldb::MemTableIterator *this, int a2, int a3, unsigned int *a4)
{
  leveldb::MemTableIterator *v4; // r4@1
  int v5; // r0@1
  int v6; // r2@1
  char *v7; // r0@2
  __int64 v8; // r0@4
  int v10; // [sp+0h] [bp-10h]@5
  char v11[4]; // [sp+4h] [bp-Ch]@2

  v4 = this;
  v5 = **(_DWORD **)(a2 + 24);
  v6 = *(_BYTE *)v5;
  if ( v6 & 0x80 )
  {
    v7 = j_leveldb::GetVarint32PtrFallback((leveldb *)v5, (const char *)(v5 + 5), v11, a4);
    v6 = *(_DWORD *)v11;
  }
  else
    *(_DWORD *)v11 = *(_BYTE *)v5;
    v7 = (char *)(v5 + 1);
  HIDWORD(v8) = (unsigned __int8)v7[v6];
  LODWORD(v8) = &v7[v6];
  if ( BYTE4(v8) & 0x80 )
    LODWORD(v8) = j_leveldb::GetVarint32PtrFallback((leveldb *)v8, (const char *)(v8 + 5), (const char *)&v10, a4);
    HIDWORD(v8) = v10;
    v10 = HIDWORD(v8);
    LODWORD(v8) = v8 + 1;
  *(_QWORD *)v4 = v8;
  return v8;
}


RakNet *__fastcall leveldb::BlockHandle::EncodeTo(signed __int64 *a1, const void **a2)
{
  signed __int64 *v2; // r5@1
  const void **v3; // r4@1
  int v4; // r1@1

  v2 = a1;
  v3 = a2;
  j_leveldb::PutVarint64(a2, (int)a2, *a1);
  return j_j_j__ZN7leveldb11PutVarint64EPSsy_0(v3, v4, v2[1]);
}


_DWORD *__fastcall leveldb::RandomAccessFileEncrypted::Read(_DWORD *a1, int a2, unsigned int a3, int a4, unsigned int a5, _QWORD *a6, int a7)
{
  _DWORD *v7; // r4@1
  int v8; // r0@1
  signed int v9; // r6@1
  unsigned int v10; // r7@1
  int v11; // r6@6 OVERLAPPED
  int v12; // r5@6 OVERLAPPED
  _DWORD *result; // r0@8
  int v14; // r0@9
  const char *v15; // [sp+4h] [bp-2Ch]@9
  int v16; // [sp+8h] [bp-28h]@9
  int v17; // [sp+Ch] [bp-24h]@9
  int v18; // [sp+10h] [bp-20h]@9

  v7 = a1;
  v8 = *(_DWORD *)(a2 + 8);
  v9 = 0;
  v10 = *(_DWORD *)(v8 - 12);
  if ( v10 <= a3 )
    v9 = 1;
  if ( a4 )
  if ( v9 )
  {
    v14 = *(_DWORD *)(a2 + 4);
    v17 = v14;
    v18 = *(_DWORD *)(v14 - 12);
    v15 = "Offset > buffer size";
    v16 = 20;
    result = j_leveldb::Status::Status(v7, 5, (int)&v17, (int)&v15);
  }
  else
    v11 = a5;
    v12 = a7;
    if ( v10 - a3 < a5 )
      v11 = v10 - a3;
    result = (_DWORD *)j___aeabi_memcpy_0(a7, v8 + a3, v11);
    *a6 = *(_QWORD *)&v12;
    *v7 = 0;
  return result;
}


int __fastcall leveldb::DBImpl::RecordBackgroundError(leveldb::DBImpl *this, const leveldb::Status *a2)
{
  leveldb::DBImpl *v2; // r4@1
  int result; // r0@1

  v2 = this;
  result = *((_DWORD *)this + 320);
  if ( !result )
  {
    if ( *(_DWORD *)a2 )
      *((_DWORD *)v2 + 320) = j_leveldb::Status::CopyState(*(leveldb::Status **)a2, (const char *)a2);
    result = j_j_j__ZN7leveldb4port7CondVar9SignalAllEv_0((leveldb::DBImpl *)((char *)v2 + 1120));
  }
  return result;
}


signed int __fastcall leveldb::ZlibCompressorBase::decompress(int a1, int a2, int a3, const void **a4)
{
  signed int v4; // r0@1
  signed int v5; // r1@1

  v4 = j_leveldb::ZlibCompressorBase::inflate(a1, a2, a3, a4);
  v5 = 0;
  if ( !v4 )
    v5 = 1;
  return v5;
}


signed int __fastcall leveldb::Block::Iter::SeekToLast(int a1)
{
  int v1; // r4@1
  int v2; // r5@1
  int v3; // r7@1
  signed int result; // r0@2
  signed int v5; // r1@3

  v1 = a1;
  v2 = a1 + 44;
  v3 = *(_DWORD *)(a1 + 32);
  sub_21E7EE0((const void **)(a1 + 44), 0, *(_BYTE **)(*(_DWORD *)(a1 + 44) - 12), 0);
  *(_DWORD *)(v2 - 4) = v3 - 1;
  *(_DWORD *)(v2 + 4) = *(_DWORD *)((*(_QWORD *)(v2 - 20) >> 32) + *(_QWORD *)(v2 - 20) + 4 * (v3 - 1))
                      + *(_QWORD *)(v2 - 20);
  *(_DWORD *)(v2 + 8) = 0;
  do
  {
    result = j_leveldb::Block::Iter::ParseNextKey(v1);
    if ( result != 1 )
      break;
    v5 = *(_QWORD *)(v1 + 48) + (*(_QWORD *)(v1 + 48) >> 32) - *(_QWORD *)(v1 + 24);
    result = 0;
    if ( v5 < (unsigned int)(*(_QWORD *)(v1 + 24) >> 32) )
      result = 1;
    if ( 0 != v5 >> 31 )
      result = 0;
  }
  while ( result );
  return result;
}


signed int __fastcall leveldb::GetLengthPrefixedSlice(int a1, int a2)
{
  signed int v2; // r2@1
  unsigned int v3; // lr@2
  _BYTE *v4; // r7@2
  unsigned int v5; // r12@2
  int v6; // r4@3
  int v7; // r5@3
  signed int v8; // r2@4
  char v9; // r6@5
  int v10; // r2@6
  int v11; // t1@6

  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 < 1 )
    return 0;
  v3 = *(_DWORD *)a1 + v2;
  v4 = (_BYTE *)(*(_DWORD *)a1 + 1);
  v5 = **(_BYTE **)a1;
  if ( v5 & 0x80 )
  {
    v6 = 0;
    v7 = 0;
    while ( 1 )
    {
      v8 = 0;
      if ( (unsigned int)v4 >= v3 )
        return v8;
      v9 = v7 + 7;
      if ( (unsigned int)(v7 + 7) > 0x1C )
      v11 = *v4++;
      v10 = v11;
      v6 |= (v5 & 0x7F) << v7;
      LOBYTE(v5) = v11;
      v7 += 7;
      if ( !(v11 & 0x80) )
      {
        v5 = (v10 << v9) | v6;
        break;
      }
    }
  }
  *(_DWORD *)a1 = v4;
  *(_DWORD *)(a1 + 4) = v3 - (_DWORD)v4;
  if ( v3 - (unsigned int)v4 < v5 )
  *(_DWORD *)a2 = v4;
  *(_DWORD *)(a2 + 4) = v5;
  v8 = 1;
  *(_DWORD *)a1 += v5;
  *(_DWORD *)(a1 + 4) -= v5;
  return v8;
}


char *__fastcall leveldb::Arena::AllocateAligned(leveldb::Arena *this, unsigned int a2)
{
  leveldb::Arena *v2; // r4@1
  unsigned int v3; // r5@1
  __int64 v4; // kr00_8@1
  int v5; // r1@1
  int v6; // r3@3
  char *result; // r0@5
  __int64 v8; // r1@7

  v2 = this;
  v3 = a2;
  v4 = *(_QWORD *)this;
  v5 = *(_QWORD *)this & 7;
  if ( v5 )
    v5 = 8 - v5;
  v6 = v5 + v3;
  if ( HIDWORD(v4) >= v5 + v3 )
  {
    result = (char *)(v4 + v5);
    *(_DWORD *)v2 = v4 + v6;
    *((_DWORD *)v2 + 1) = HIDWORD(v4) - v6;
  }
  else if ( v3 <= 0x400 )
    result = (char *)j_leveldb::Arena::AllocateNewBlock(this, 0x1000u);
    HIDWORD(v8) = 4096 - v3;
    LODWORD(v8) = &result[v3];
    *(_QWORD *)v2 = v8;
  else
    result = (char *)j_j_j__ZN7leveldb5Arena16AllocateNewBlockEj_0(this, v3);
  return result;
}


void __fastcall leveldb::DBImpl::~DBImpl(leveldb::DBImpl *this)
{
  leveldb::DBImpl::~DBImpl(this);
}


int __fastcall leveldb::TableBuilder::Abandon(leveldb::TableBuilder *this)
{
  int result; // r0@1

  result = *(_DWORD *)this;
  *(_BYTE *)(result + 2240) = 1;
  return result;
}


leveldb::TableCache *__fastcall leveldb::TableCache::~TableCache(leveldb::TableCache *this)
{
  leveldb::TableCache *v1; // r5@1
  int v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7

  v1 = this;
  v2 = *((_DWORD *)this + 3);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  v3 = *((_DWORD *)v1 + 1);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v3 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  return v1;
}


int __fastcall leveldb::DBImpl::ResumeCompaction(leveldb::DBImpl *this, int a2, __int64 a3)
{
  leveldb::DBImpl *v3; // r4@1
  __int64 v4; // r2@1

  v3 = this;
  j_leveldb::Log(*((leveldb **)this + 9), (leveldb::Logger *)"BG resume compaction\n", a3);
  j_leveldb::port::Mutex::Lock((leveldb::DBImpl *)((char *)v3 + 1112));
  vFFFF0FA0();
  *((_DWORD *)v3 + 317) = 0;
  j_leveldb::port::Mutex::Unlock((leveldb::DBImpl *)((char *)v3 + 1112));
  return j_leveldb::Log(*((leveldb **)v3 + 9), (leveldb::Logger *)"db BG resumed\n", v4);
}


const void **__fastcall leveldb::WriteBatch::Put(const void **a1, int a2, int a3)
{
  const void **v3; // r5@1
  int v4; // r6@1
  const void *v5; // r0@1
  int v6; // r4@1
  signed int v7; // r2@1
  char *v8; // r7@1
  _DWORD *v9; // r0@3
  int v10; // r1@3 OVERLAPPED
  int v11; // r7@3
  unsigned int v12; // r2@3
  _DWORD *v13; // r0@6

  v3 = a1;
  v4 = a2;
  v5 = *a1;
  v6 = a3;
  v7 = *((_DWORD *)v5 - 1);
  v8 = (char *)(*((_DWORD *)v5 + 2) + 1);
  if ( v7 >= 0 )
  {
    sub_21E8010(v3);
    v5 = *v3;
  }
  j_leveldb::EncodeFixed32((leveldb *)((char *)v5 + 8), v8, v7);
  v9 = *v3;
  *(_QWORD *)&v10 = *(_QWORD *)((char *)*v3 - 12);
  v11 = v10 + 1;
  if ( v10 + 1 > v12 || *(v9 - 1) >= 1 )
    sub_21E6FCC(v3, v10 + 1);
    v9 = *v3;
    v10 = *((_DWORD *)*v3 - 3);
  *((_BYTE *)v9 + v10) = 1;
  v13 = *v3;
  if ( (int *)((char *)*v3 - 12) != &dword_28898C0 )
    *(v13 - 1) = 0;
    *(v13 - 3) = v11;
    *((_BYTE *)v13 + v11) = byte_26C67B8[0];
  j_leveldb::PutLengthPrefixedSlice(v3, v4);
  return j_j_j__ZN7leveldb22PutLengthPrefixedSliceEPSsRKNS_5SliceE_0(v3, v6);
}


const char *__fastcall leveldb::InternalKeyComparator::Name(leveldb::InternalKeyComparator *this)
{
  return "leveldb.InternalKeyComparator";
}


void __fastcall leveldb::DBImpl::CleanupCompaction(int a1, int a2)
{
  leveldb::DBImpl::CleanupCompaction(a1, a2);
}


RakNet *__fastcall leveldb::SequentialFileEncrypted::init(_DWORD *a1, int a2, const void **a3)
{
  _DWORD *v3; // r7@1
  const void **v4; // r5@1
  const char *v5; // r1@4
  void *v6; // r1@5
  void *v7; // r0@5
  const char *v8; // r1@6
  const char *v9; // r1@8
  const char *v10; // r1@11
  RakNet *result; // r0@17
  void *v12; // [sp+8h] [bp-178h]@11
  int v13; // [sp+Ch] [bp-174h]@11
  const char *v14; // [sp+10h] [bp-170h]@11
  int v15; // [sp+14h] [bp-16Ch]@11
  void *ptr; // [sp+18h] [bp-168h]@11
  void *v17; // [sp+1Ch] [bp-164h]@4
  int v18; // [sp+20h] [bp-160h]@4
  const char *v19; // [sp+24h] [bp-15Ch]@4
  int v20; // [sp+28h] [bp-158h]@4
  leveldb::Status *v21; // [sp+2Ch] [bp-154h]@4
  void *v22; // [sp+30h] [bp-150h]@8
  int v23; // [sp+34h] [bp-14Ch]@8
  const char *v24; // [sp+38h] [bp-148h]@8
  int v25; // [sp+3Ch] [bp-144h]@8
  leveldb::Status *v26; // [sp+40h] [bp-140h]@8
  void *v27; // [sp+44h] [bp-13Ch]@6
  int v28; // [sp+48h] [bp-138h]@6
  const char *v29; // [sp+4Ch] [bp-134h]@6
  int v30; // [sp+50h] [bp-130h]@6
  leveldb::Status *v31; // [sp+54h] [bp-12Ch]@6
  void *v32; // [sp+58h] [bp-128h]@1
  char *v33; // [sp+5Ch] [bp-124h]@1
  int v34; // [sp+60h] [bp-120h]@1
  char v35; // [sp+64h] [bp-11Ch]@1
  int v36; // [sp+68h] [bp-118h]@2
  _BYTE v37[3]; // [sp+75h] [bp-10Bh]@10
  RakNet *v38; // [sp+168h] [bp-18h]@1

  v3 = a1;
  v4 = a3;
  v38 = _stack_chk_guard;
  *a1 = 0;
  v33 = &v35;
  v34 = 256;
  (*(void (__fastcall **)(void **))(**(_DWORD **)(a2 + 4) + 8))(&v32);
  if ( v34 == 256 )
  {
    if ( v36 == -1680885252 )
    {
      if ( v35 )
      {
        v19 = "Failed encrypted file header version";
        v20 = 36;
        v17 = &unk_257BC67;
        v18 = 0;
        j_leveldb::Status::Status(&v21, 5, (int)&v19, (int)&v17);
        if ( !v21 )
          goto LABEL_15;
        v6 = j_leveldb::Status::CopyState(v21, v5);
        v7 = (void *)v21;
      }
      else
        if ( !sub_21E7D6C(v4, v37) )
        v14 = "Failed encrypted file productId comparison";
        v15 = 42;
        v12 = &unk_257BC67;
        v13 = 0;
        j_leveldb::Status::Status(&ptr, 5, (int)&v14, (int)&v12);
        if ( !ptr )
        v6 = j_leveldb::Status::CopyState((leveldb::Status *)ptr, v10);
        v7 = ptr;
    }
    else
      v24 = "Failed encrypted file signature check";
      v25 = 37;
      v22 = &unk_257BC67;
      v23 = 0;
      j_leveldb::Status::Status(&v26, 5, (int)&v24, (int)&v22);
      if ( !v26 )
        goto LABEL_15;
      v6 = j_leveldb::Status::CopyState(v26, v9);
      v7 = (void *)v26;
  }
  else
    v29 = "Failed encrypted file header size check";
    v30 = 39;
    v27 = &unk_257BC67;
    v28 = 0;
    j_leveldb::Status::Status(&v31, 5, (int)&v29, (int)&v27);
    if ( !v31 )
      goto LABEL_15;
    v6 = j_leveldb::Status::CopyState(v31, v8);
    v7 = (void *)v31;
  *v3 = v6;
  if ( v7 )
    j_operator delete[](v7);
LABEL_15:
  if ( v32 )
    j_operator delete[](v32);
  result = (RakNet *)(_stack_chk_guard - v38);
  if ( _stack_chk_guard != v38 )
    j___stack_chk_fail_0((int)result);
  return result;
}


leveldb::Status *__fastcall leveldb::ReadFileToString(leveldb::Status **a1, int a2, int a3, const void **a4)
{
  const void **v4; // r4@1
  leveldb::Status **v5; // r5@1
  int v6; // r8@1
  int v7; // r7@1
  leveldb::Status *result; // r0@1
  void *v9; // r6@2
  leveldb::Status *v10; // r0@3
  leveldb::Status *v11; // r1@3
  leveldb::Status *v12; // r1@7
  leveldb::Status *v13; // [sp+4h] [bp-34h]@3
  char *v14; // [sp+8h] [bp-30h]@3
  unsigned int v15; // [sp+Ch] [bp-2Ch]@3
  leveldb::Status *v16; // [sp+10h] [bp-28h]@1

  v4 = a4;
  v5 = a1;
  v6 = a3;
  v7 = a2;
  sub_21E7EE0(a4, 0, *((_BYTE **)*a4 - 3), 0);
  (*(void (__fastcall **)(leveldb::Status **, int, int, leveldb::Status **))(*(_DWORD *)v7 + 8))(v5, v7, v6, &v16);
  result = *v5;
  if ( !*v5 )
  {
    v9 = j_operator new[](0x2000u);
    do
    {
      v14 = (char *)&unk_257BC67;
      v15 = 0;
      (*(void (__fastcall **)(leveldb::Status **))(*(_DWORD *)v16 + 8))(&v13);
      v10 = *v5;
      v11 = v13;
      if ( *v5 == v13 )
      {
        v12 = *v5;
      }
      else
        if ( v10 )
        {
          j_operator delete[]((void *)v10);
          v11 = v13;
        }
        if ( v11 )
          v10 = (leveldb::Status *)j_leveldb::Status::CopyState(v11, (const char *)v11);
          v12 = v13;
        else
          v12 = 0;
          v10 = 0;
        *v5 = v10;
      if ( v12 )
        j_operator delete[]((void *)v12);
        v10 = *v5;
      if ( v10 )
        break;
      sub_21E7408(v4, v14, v15);
    }
    while ( v15 );
    j_operator delete[](v9);
    result = v16;
    if ( v16 )
      result = (leveldb::Status *)(*(int (__cdecl **)(leveldb::Status *))(*(_DWORD *)v16 + 4))(v16);
  }
  return result;
}


int __fastcall leveldb::TableCache::Get(int *a1, char *a2, int a3, int a4, unsigned __int64 a5, __int64 a6, int a7, int a8, void (__fastcall *a9)(int, char *, char *))
{
  int v9; // r6@1
  char *v10; // r4@1
  int *v11; // r5@1
  int result; // r0@1
  int v13; // r0@2
  const char *v14; // r1@2
  void *v15; // r1@3
  void *v16; // r0@3
  void *ptr; // [sp+10h] [bp-4h]@2
  int v18; // [sp+14h] [bp+0h]@1

  v9 = a3;
  v10 = a2;
  v11 = a1;
  v18 = 0;
  j_leveldb::TableCache::FindTable(a1, a2, a5, a6, &v18);
  result = *v11;
  if ( !*v11 )
  {
    v13 = (*(int (**)(void))(**((_DWORD **)v10 + 3) + 20))();
    j_leveldb::Table::InternalGet(&ptr, *(int ***)(v13 + 4), v9, a7, a8, a9);
    if ( ptr )
    {
      v15 = j_leveldb::Status::CopyState((leveldb::Status *)ptr, v14);
      v16 = ptr;
      *v11 = (int)v15;
      if ( v16 )
        j_operator delete[](v16);
    }
    result = (*(int (**)(void))(**((_DWORD **)v10 + 3) + 16))();
  }
  return result;
}


void __fastcall leveldb::VersionSet::Recover(leveldb::VersionSet *this, bool *a2, _BYTE *a3)
{
  leveldb::VersionSet::Recover(this, a2, a3);
}


_DWORD *__fastcall leveldb::TableBuilder::ChangeOptions(_DWORD *a1, int *a2, _DWORD *a3)
{
  int *v3; // r5@1
  _DWORD *v4; // r4@1
  int v5; // r6@1
  _DWORD *result; // r0@2
  void *v7; // [sp+0h] [bp-20h]@2
  int v8; // [sp+4h] [bp-1Ch]@2
  const char *v9; // [sp+8h] [bp-18h]@2
  int v10; // [sp+Ch] [bp-14h]@2

  v3 = a2;
  v4 = a1;
  v5 = (int)a3;
  if ( *a3 == *(_DWORD *)*a2 )
  {
    j___aeabi_memcpy4_0(*a2, (int)a3, 1072);
    j___aeabi_memcpy4_0(*v3 + 1072, v5, 1072);
    *(_DWORD *)(*v3 + 1104) = 1;
    result = 0;
    *v4 = 0;
  }
  else
    v9 = "changing comparator while building table";
    v10 = 40;
    v7 = &unk_257BC67;
    v8 = 0;
    result = j_leveldb::Status::Status(a1, 4, (int)&v9, (int)&v7);
  return result;
}


int (**__fastcall leveldb::DecompressAllocator::get(leveldb::DecompressAllocator *this, int a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  int v2; // r5@1
  int *v3; // r6@1
  pthread_mutex_t *v4; // r4@1
  int v5; // r0@2
  __int64 v6; // kr00_8@3
  int v7; // r0@4
  int v8; // r1@4
  void *v9; // r0@4
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@5
  unsigned int *v11; // r2@8
  signed int v12; // r1@10

  v2 = a2;
  v3 = (int *)this;
  v4 = (pthread_mutex_t *)(a2 + 4);
  *(_DWORD *)this = &unk_28898CC;
  if ( &pthread_create )
  {
    v5 = j_pthread_mutex_lock_0(v4);
    if ( v5 )
      sub_21E5E14(v5);
  }
  v6 = *(_QWORD *)(v2 + 8);
  if ( (_DWORD)v6 != HIDWORD(v6) )
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      v3,
      (int *)(HIDWORD(v6) - 4));
    sub_21E7EE0((const void **)v3, 0, *(_BYTE **)(*v3 - 12), 0);
    v7 = *(_DWORD *)(v2 + 12);
    *(_DWORD *)(v2 + 12) = v7 - 4;
    v8 = *(_DWORD *)(v7 - 4);
    v9 = (void *)(v8 - 12);
    if ( (int *)(v8 - 12) != &dword_28898C0 )
    {
      v11 = (unsigned int *)(v8 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
    }
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))j_pthread_mutex_unlock_0(v4);
  return result;
}


_QWORD *__fastcall leveldb::DBImpl::GetSnapshot(leveldb::DBImpl *this)
{
  leveldb::DBImpl *v1; // r4@1
  leveldb::port::Mutex *v2; // r5@1
  __int64 v3; // kr00_8@1
  _QWORD *v4; // r0@1
  _QWORD *v5; // r6@1
  int v6; // r0@1

  v1 = this;
  v2 = (leveldb::DBImpl *)((char *)this + 1112);
  j_leveldb::port::Mutex::Lock((leveldb::DBImpl *)((char *)this + 1112));
  v3 = *(_QWORD *)(*((_DWORD *)v1 + 319) + 40);
  v4 = j_operator new(0x20u);
  v5 = v4;
  *(_DWORD *)v4 = &off_2725BE0;
  v4[1] = v3;
  *((_DWORD *)v4 + 5) = (char *)v1 + 1208;
  *((_DWORD *)v4 + 6) = (char *)v1 + 1208;
  v6 = *((_DWORD *)v1 + 306);
  *((_DWORD *)v5 + 4) = v6;
  *(_DWORD *)(v6 + 20) = v5;
  *(_DWORD *)(*((_DWORD *)v5 + 5) + 16) = v5;
  j_leveldb::port::Mutex::Unlock(v2);
  return v5;
}


void __fastcall leveldb::log::Reader::ReportCorruption(leveldb::log::Reader *this, int a2, unsigned __int64 a3, const char *s)
{
  leveldb::log::Reader *v4; // r6@1
  unsigned int v5; // r5@1
  unsigned int v6; // r8@1
  signed int v7; // r7@1
  int v8; // r0@1
  unsigned int v9; // r1@2
  int v10; // r6@2
  __int64 v11; // r2@2
  unsigned int v12; // r4@2
  unsigned int v13; // r6@2
  unsigned __int64 v14; // kr00_8@2
  signed int v15; // r3@2
  void *v16; // [sp+4h] [bp-2Ch]@1
  int v17; // [sp+8h] [bp-28h]@1
  const char *v18; // [sp+Ch] [bp-24h]@1
  size_t v19; // [sp+10h] [bp-20h]@1
  void *ptr; // [sp+14h] [bp-1Ch]@1

  v4 = this;
  v5 = HIDWORD(a3);
  v6 = a3;
  v18 = s;
  v19 = j_strlen_0(s);
  v16 = &unk_257BC67;
  v7 = 0;
  v17 = 0;
  j_leveldb::Status::Status(&ptr, 2, (int)&v18, (int)&v16);
  v8 = *((_DWORD *)v4 + 1);
  if ( v8 )
  {
    v9 = *((_DWORD *)v4 + 5);
    v10 = (int)v4 + 40;
    v11 = *(_QWORD *)v10;
    v12 = *(_DWORD *)(v10 + 8);
    v13 = *(_DWORD *)(v10 + 12);
    v14 = v11 - __PAIR__(v5, v6) - v9;
    v15 = 0;
    if ( HIDWORD(v14) < v13 )
      v15 = 1;
    if ( (unsigned int)v14 < v12 )
      v7 = 1;
    if ( HIDWORD(v14) != v13 )
      v7 = v15;
    if ( !v7 )
      (*(void (**)(void))(*(_DWORD *)v8 + 8))();
  }
  if ( ptr )
    j_operator delete[](ptr);
}


int __fastcall leveldb::Version::LevelFileNumIterator::Prev(int result)
{
  int v1; // r1@1

  v1 = *(_DWORD *)(result + 32);
  if ( v1 )
    *(_DWORD *)(result + 32) = v1 - 1;
  else
    *(_DWORD *)(result + 32) = (signed int)((*(_QWORD *)*(_DWORD *)(result + 28) >> 32)
                                          - *(_QWORD *)*(_DWORD *)(result + 28)) >> 2;
  return result;
}


int __fastcall leveldb::SequentialFileEncrypted::SequentialFileEncrypted(int a1, int a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r5@1
  __int64 v5; // r0@1
  int v6; // r6@1
  unsigned int *v7; // r1@2
  unsigned int v8; // r0@4
  unsigned int *v9; // r7@8
  unsigned int v10; // r0@10
  int v11; // r6@15
  unsigned int *v12; // r1@16
  unsigned int v13; // r0@18
  unsigned int *v14; // r7@22
  unsigned int v15; // r0@24
  int v16; // r6@29
  void (__fastcall *v17)(int, int *, int *); // r7@29
  unsigned int v18; // r0@29
  unsigned int v19; // r0@29
  void *v20; // r0@29
  void *v21; // r0@30
  unsigned int *v23; // r2@32
  signed int v24; // r1@34
  unsigned int *v25; // r2@36
  signed int v26; // r1@38
  int v27; // [sp+4h] [bp-34h]@29
  int v28; // [sp+8h] [bp-30h]@29
  int v29; // [sp+Ch] [bp-2Ch]@1
  int v30; // [sp+10h] [bp-28h]@1
  char v31; // [sp+14h] [bp-24h]@1
  int v32; // [sp+18h] [bp-20h]@1
  char v33; // [sp+1Ch] [bp-1Ch]@1

  v3 = a1;
  v4 = a3;
  *(_DWORD *)a1 = &off_2724CA0;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  v30 = 1;
  v29 = 2;
  j_std::__shared_ptr<Crypto::Symmetric::Symmetric,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<Crypto::Symmetric::Symmetric>,Crypto::Symmetric::System,Crypto::Symmetric::OperationMode>(
    (int)&v31,
    (int)&v33,
    &v30,
    &v29);
  v5 = *(_QWORD *)&v31;
  *(_DWORD *)&v31 = 0;
  v32 = 0;
  *(_DWORD *)(v3 + 8) = v5;
  v6 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v3 + 12) = HIDWORD(v5);
  if ( v6 )
  {
    v7 = (unsigned int *)(v6 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 == 1 )
      v9 = (unsigned int *)(v6 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 12))(v6);
  }
  v11 = v32;
  if ( v32 )
    v12 = (unsigned int *)(v32 + 4);
        v13 = __ldrex(v12);
      while ( __strex(v13 - 1, v12) );
      v13 = (*v12)--;
    if ( v13 == 1 )
      v14 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 8))(v11);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 12))(v11);
  v16 = *(_DWORD *)(v3 + 8);
  v17 = *(void (__fastcall **)(int, int *, int *))(*(_DWORD *)v16 + 8);
  v18 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v16 + 20))(*(_DWORD *)(v3 + 8));
  sub_21E9040((void **)&v28, v4, 0, v18);
  v19 = (*(int (**)(void))(**(_DWORD **)(v3 + 8) + 24))();
  sub_21E9040((void **)&v27, v4, 0, v19);
  v17(v16, &v28, &v27);
  v20 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v27 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v28 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  return v3;
}


leveldb::MemTable *__fastcall leveldb::MemTable::MemTable(leveldb::MemTable *this, const leveldb::InternalKeyComparator *a2)
{
  leveldb::MemTable *v2; // r4@1
  leveldb::Arena *v3; // r0@1
  int v4; // r1@1
  char *v5; // r0@1
  char *v6; // r5@1
  int v7; // r0@1
  int v8; // r5@1
  int v9; // r0@1
  int v10; // r5@1
  int v11; // r0@1
  int v12; // r5@1
  int v13; // r0@1
  int v14; // r5@1
  int v15; // r0@1
  int v16; // r5@1
  int v17; // r0@1
  int v18; // r5@1
  int v19; // r0@1
  int v20; // r5@1
  int v21; // r0@1
  int v22; // r5@1
  int v23; // r0@1
  int v24; // r5@1
  int v25; // r0@1
  int v26; // r5@1
  int v27; // r0@1
  int v28; // r5@1
  void **v30; // [sp+4h] [bp-1Ch]@1
  int v31; // [sp+8h] [bp-18h]@1

  v2 = this;
  *(_DWORD *)this = &off_2726110;
  *((_DWORD *)this + 1) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 2) = 0;
  v3 = (leveldb::Arena *)j_leveldb::Arena::Arena((leveldb::MemTable *)((char *)this + 12));
  v30 = &off_2726110;
  v31 = *((_DWORD *)v2 + 1);
  v4 = v31;
  *((_DWORD *)v2 + 9) = &off_2726110;
  *((_DWORD *)v2 + 10) = v4;
  *((_DWORD *)v2 + 11) = v3;
  v5 = j_leveldb::Arena::AllocateAligned(v3, 0x34u);
  v6 = v5;
  *(_DWORD *)v5 = 0;
  *((_DWORD *)v2 + 12) = v5;
  *((_DWORD *)v2 + 13) = 1;
  *((_DWORD *)v2 + 14) = 1588444911;
  v7 = vFFFF0FA0();
  *((_DWORD *)v6 + 1) = 0;
  v8 = *((_DWORD *)v2 + 12);
  v9 = vFFFF0FA0(v7);
  *(_DWORD *)(v8 + 8) = 0;
  v10 = *((_DWORD *)v2 + 12);
  v11 = vFFFF0FA0(v9);
  *(_DWORD *)(v10 + 12) = 0;
  v12 = *((_DWORD *)v2 + 12);
  v13 = vFFFF0FA0(v11);
  *(_DWORD *)(v12 + 16) = 0;
  v14 = *((_DWORD *)v2 + 12);
  v15 = vFFFF0FA0(v13);
  *(_DWORD *)(v14 + 20) = 0;
  v16 = *((_DWORD *)v2 + 12);
  v17 = vFFFF0FA0(v15);
  *(_DWORD *)(v16 + 24) = 0;
  v18 = *((_DWORD *)v2 + 12);
  v19 = vFFFF0FA0(v17);
  *(_DWORD *)(v18 + 28) = 0;
  v20 = *((_DWORD *)v2 + 12);
  v21 = vFFFF0FA0(v19);
  *(_DWORD *)(v20 + 32) = 0;
  v22 = *((_DWORD *)v2 + 12);
  v23 = vFFFF0FA0(v21);
  *(_DWORD *)(v22 + 36) = 0;
  v24 = *((_DWORD *)v2 + 12);
  v25 = vFFFF0FA0(v23);
  *(_DWORD *)(v24 + 40) = 0;
  v26 = *((_DWORD *)v2 + 12);
  v27 = vFFFF0FA0(v25);
  *(_DWORD *)(v26 + 44) = 0;
  v28 = *((_DWORD *)v2 + 12);
  vFFFF0FA0(v27);
  *(_DWORD *)(v28 + 48) = 0;
  j_leveldb::Comparator::~Comparator((leveldb::Comparator *)&v30);
  return v2;
}


_DWORD *__fastcall leveldb::Block::NewIterator(int a1, int a2)
{
  __int64 v2; // r6@1
  int v3; // r8@1
  unsigned int v4; // r0@1
  leveldb *v5; // r0@2
  const leveldb::Status *v6; // r1@2
  void *v7; // r4@2
  int v8; // r5@4
  leveldb *v9; // r0@4
  void *v11; // [sp+4h] [bp-2Ch]@2
  int v12; // [sp+8h] [bp-28h]@2
  const char *v13; // [sp+Ch] [bp-24h]@2
  int v14; // [sp+10h] [bp-20h]@2
  void *ptr; // [sp+14h] [bp-1Ch]@2

  LODWORD(v2) = a1;
  v3 = a2;
  v4 = *(_DWORD *)(a1 + 4);
  if ( v4 <= 3 )
  {
    v13 = "bad block contents";
    v14 = 18;
    v11 = &unk_257BC67;
    v12 = 0;
    v5 = (leveldb *)j_leveldb::Status::Status(&ptr, 2, (int)&v13, (int)&v11);
    v7 = j_leveldb::NewErrorIterator(v5, v6);
    if ( ptr )
      j_operator delete[](ptr);
    return v7;
  }
  v8 = *(_DWORD *)v2;
  v9 = (leveldb *)(v4 + *(_DWORD *)v2);
  HIDWORD(v2) = *((_DWORD *)v9 - 1);
  if ( HIDWORD(v2) )
    v7 = j_operator new(0x3Cu);
    LODWORD(v2) = *(_DWORD *)(v2 + 8);
    j_leveldb::Iterator::Iterator((leveldb::Iterator *)v7);
    *(_DWORD *)v7 = &off_272614C;
    *((_DWORD *)v7 + 5) = v3;
    *((_DWORD *)v7 + 6) = v8;
    *(_QWORD *)((char *)v7 + 28) = v2;
    *(_QWORD *)((char *)v7 + 36) = v2;
    *((_DWORD *)v7 + 11) = &unk_28898CC;
    *((_DWORD *)v7 + 12) = &unk_257BC67;
    *((_DWORD *)v7 + 13) = 0;
    *((_DWORD *)v7 + 14) = 0;
  return j_j_j__ZN7leveldb16NewEmptyIteratorEv(v9);
}


void __fastcall leveldb::RandomAccessFileEncrypted::~RandomAccessFileEncrypted(leveldb::RandomAccessFileEncrypted *this)
{
  leveldb::RandomAccessFileEncrypted *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_2724CD4;
  v2 = *((_DWORD *)this + 2);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 1);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  j_leveldb::RandomAccessFile::~RandomAccessFile(v1);
  j_operator delete((void *)v1);
}


int __fastcall leveldb::port::CondVar::SignalAll(leveldb::port::CondVar *this)
{
  int result; // r0@1
  char *v2; // r0@2

  result = j_pthread_cond_broadcast((pthread_cond_t *)this);
  if ( result )
  {
    v2 = j_strerror(result);
    j_fprintf((FILE *)((char *)&_sF + 168), "pthread %s: %s\n", "broadcast", v2);
    j_abort();
  }
  return result;
}


int __fastcall leveldb::port::InitOnce(pthread_once_t *a1, void (*a2)(void))
{
  int result; // r0@1
  char *v3; // r0@2

  result = j_pthread_once(a1, a2);
  if ( result )
  {
    v3 = j_strerror(result);
    j_fprintf((FILE *)((char *)&_sF + 168), "pthread %s: %s\n", "once", v3);
    j_abort();
  }
  return result;
}


__int64 __fastcall leveldb::VersionSet::NumLevelBytes(leveldb::VersionSet *this, int a2)
{
  int v2; // r0@1
  __int64 v3; // kr00_8@1
  __int64 result; // r0@2
  unsigned int v5; // r3@3
  unsigned int v6; // r12@3
  int v7; // r2@4

  v3 = *(_QWORD *)(*((_DWORD *)this + 50) + 12 * a2 + 16);
  v2 = *(_QWORD *)(*((_DWORD *)this + 50) + 12 * a2 + 16) >> 32;
  if ( v2 == (_DWORD)v3 )
  {
    result = 0LL;
  }
  else
    v5 = 0;
    v6 = (v2 - (signed int)v3) >> 2;
    do
    {
      v7 = *(_DWORD *)(v3 + 4 * v5++);
      result += *(_QWORD *)(v7 + 16);
    }
    while ( v5 < v6 );
  return result;
}


void __fastcall leveldb::WritableFileEncrypted::~WritableFileEncrypted(leveldb::WritableFileEncrypted *this)
{
  leveldb::WritableFileEncrypted::~WritableFileEncrypted(this);
}


_DWORD *__fastcall leveldb::NewMergingIterator(leveldb *this, const leveldb::Comparator *a2, leveldb::Iterator **a3, int a4)
{
  __int64 v4; // r4@1
  const leveldb::Comparator *v5; // r11@1
  leveldb *v6; // r7@1
  void *v8; // r10@4
  signed __int64 v9; // kr00_8@5
  unsigned int v10; // r0@5
  _QWORD *v11; // r0@9
  int v12; // r6@9
  int v13; // r0@9
  void *v14; // r1@9 OVERLAPPED
  int v15; // r2@9 OVERLAPPED
  int v16; // r3@9
  int v17; // r4@12
  int v18; // r0@14
  int v19; // r7@14
  int v20; // r0@17
  int v21; // [sp+0h] [bp-30h]@18

  HIDWORD(v4) = a3;
  v5 = a2;
  v6 = this;
  if ( a3 == (leveldb::Iterator **)1 )
  {
    v8 = *(void **)a2;
  }
  else
    if ( !a3 )
      return j_j_j__ZN7leveldb16NewEmptyIteratorEv(this);
    v8 = j_operator new(0x28u);
    j_leveldb::Iterator::Iterator((leveldb::Iterator *)v8);
    LODWORD(v4) = 16;
    v9 = 16LL * HIDWORD(v4);
    *(_DWORD *)v8 = &off_2725DA8;
    *((_DWORD *)v8 + 5) = v6;
    v10 = v9 + 8;
    if ( (signed int)v9 + 8 < (unsigned int)v9 )
      v10 = -1;
    if ( HIDWORD(v9) != 0 )
    v11 = j_operator new[](v10);
    v12 = (int)(v11 + 1);
    *v11 = v4;
    v13 = (int)&v11[2 * HIDWORD(v4) + 1];
    v14 = &unk_257BC67;
    v15 = 0;
    v16 = v12;
    do
    {
      *(_DWORD *)v16 = 0;
      *(_BYTE *)(v16 + 4) = 0;
      *(_QWORD *)(v16 + 8) = *(_QWORD *)&v14;
      v16 += 16;
    }
    while ( v16 != v13 );
    *((_DWORD *)v8 + 6) = v12;
    *((_DWORD *)v8 + 7) = HIDWORD(v4);
    *((_DWORD *)v8 + 8) = 0;
    *((_DWORD *)v8 + 9) = 0;
    if ( SHIDWORD(v4) >= 1 )
      v17 = 0;
      while ( 1 )
      {
        v18 = *(_DWORD *)(v12 + v17);
        v19 = *(_DWORD *)v5;
        if ( v18 )
          (*(void (**)(void))(*(_DWORD *)v18 + 4))();
        *(_DWORD *)(v12 + v17) = v19;
        if ( v19 )
        {
          v20 = (*(int (__fastcall **)(int))(*(_DWORD *)v19 + 8))(v19);
          *(_BYTE *)(v12 + v17 + 4) = v20;
          if ( v20 )
          {
            (*(void (__fastcall **)(int *))(**(_DWORD **)(v12 + v17) + 32))(&v21);
            *(_QWORD *)(v12 + v17 + 8) = *(_QWORD *)&v21;
          }
        }
        else
          *(_BYTE *)(v12 + v17 + 4) = 0;
        if ( !--HIDWORD(v4) )
          break;
        v5 = (const leveldb::Comparator *)((char *)v5 + 4);
        v17 += 16;
        v12 = *((_DWORD *)v8 + 6);
      }
  return v8;
}


int (**__fastcall leveldb::DecompressAllocator::release(int a1, _DWORD *a2))(pthread_t *newthread, const pthread_attr_t *attr, void *(*start_routine)(void *), void *arg)
{
  int v2; // r6@1
  pthread_mutex_t *v3; // r4@1
  _DWORD *v4; // r5@1
  int v5; // r0@2
  __int64 v6; // r0@3
  int (**result)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *); // r0@6

  v2 = a1;
  v3 = (pthread_mutex_t *)(a1 + 4);
  v4 = a2;
  if ( &pthread_create )
  {
    v5 = j_pthread_mutex_lock_0(v3);
    if ( v5 )
      sub_21E5E14(v5);
  }
  v6 = *(_QWORD *)(v2 + 12);
  if ( (_DWORD)v6 == HIDWORD(v6) )
    j_std::vector<std::string,std::allocator<std::string>>::_M_emplace_back_aux<std::string>(
      (unsigned __int64 *)(v2 + 8),
      v4);
  else
    *(_DWORD *)v6 = *v4;
    *v4 = &unk_28898CC;
    *(_DWORD *)(v2 + 12) = v6 + 4;
  result = &pthread_create;
    result = (int (**)(pthread_t *, const pthread_attr_t *, void *(*)(void *), void *))j_pthread_mutex_unlock_0(v3);
  return result;
}


int __fastcall leveldb::log::Reader::ReportDrop(leveldb::log::Reader *this, int a2, unsigned __int64 a3, const leveldb::Status *a4)
{
  leveldb::log::Reader *v4; // r1@1
  int result; // r0@1
  signed int v6; // r6@2
  __int64 v7; // kr08_8@2
  unsigned __int64 v8; // kr10_8@2
  signed int v9; // r4@2

  v4 = this;
  result = *((_DWORD *)this + 1);
  if ( result )
  {
    v6 = 0;
    v7 = *((_QWORD *)v4 + 6);
    v8 = *((_QWORD *)v4 + 5) - a3 - *((_DWORD *)v4 + 5);
    v9 = 0;
    if ( HIDWORD(v8) < HIDWORD(v7) )
      v6 = 1;
    if ( (unsigned int)v8 < (unsigned int)v7 )
      v9 = 1;
    if ( HIDWORD(v8) != HIDWORD(v7) )
      v9 = v6;
    if ( !v9 )
      result = (*(int (**)(void))(*(_DWORD *)result + 8))();
  }
  return result;
}


int __fastcall leveldb::DBImpl::TEST_MaxNextLevelOverlappingBytes(leveldb::DBImpl *this)
{
  leveldb::DBImpl *v1; // r4@1
  leveldb::port::Mutex *v2; // r5@1
  int v3; // r4@1

  v1 = this;
  v2 = (leveldb::DBImpl *)((char *)this + 1112);
  j_leveldb::port::Mutex::Lock((leveldb::DBImpl *)((char *)this + 1112));
  v3 = j_leveldb::VersionSet::MaxNextLevelOverlappingBytes((leveldb::VersionSet *)*((_DWORD *)v1 + 319));
  j_leveldb::port::Mutex::Unlock(v2);
  return v3;
}


leveldb::port::CondVar *__fastcall leveldb::port::CondVar::CondVar(leveldb::port::CondVar *this, leveldb::port::Mutex *a2)
{
  leveldb::port::CondVar *v2; // r4@1
  int v3; // r0@1
  char *v5; // r0@3

  v2 = this;
  *((_DWORD *)this + 1) = a2;
  v3 = j_pthread_cond_init((pthread_cond_t *)this, 0);
  if ( v3 )
  {
    v5 = j_strerror(v3);
    j_fprintf((FILE *)((char *)&_sF + 168), "pthread %s: %s\n", "init cv", v5);
    j_abort();
  }
  return v2;
}


void __fastcall leveldb::InternalKey::DebugString(leveldb::InternalKey *this, int *a2)
{
  void **v2; // r4@1
  int *v3; // r6@1
  char *v4; // r0@1
  unsigned int v5; // r1@1
  unsigned int v6; // r3@2
  unsigned int v7; // r2@2
  void *v8; // r0@3
  unsigned int *v9; // r2@4
  signed int v10; // r1@6
  int v11; // [sp+0h] [bp-40h]@8
  int v12; // [sp+4h] [bp-3Ch]@8
  int v13; // [sp+8h] [bp-38h]@8
  int v14; // [sp+Ch] [bp-34h]@3
  char *v15; // [sp+10h] [bp-30h]@1
  unsigned int v16; // [sp+14h] [bp-2Ch]@1
  unsigned int v17; // [sp+18h] [bp-28h]@2
  unsigned int v18; // [sp+1Ch] [bp-24h]@2
  int v19; // [sp+20h] [bp-20h]@2

  v2 = (void **)this;
  v3 = a2;
  v15 = (char *)&unk_257BC67;
  *(_DWORD *)this = &unk_28898CC;
  v16 = 0;
  v4 = (char *)*a2;
  v5 = *(_DWORD *)(*a2 - 12);
  if ( v5 < 8
    || (v6 = *(_DWORD *)&v4[v5 - 8],
        v7 = *(_DWORD *)&v4[v5 - 4],
        v17 = (v6 >> 8) | (v7 << 24),
        v18 = v7 >> 8,
        v19 = (unsigned __int8)v6,
        v15 = v4,
        v16 = v5 - 8,
        (unsigned __int8)v6 > 1u) )
  {
    sub_21E8190(v2, "(bad)", (_BYTE *)5);
    v11 = *v3;
    v12 = *(_DWORD *)(v11 - 12);
    j_leveldb::EscapeString((const void **)&v13, (int)&v11);
    sub_21E72F0((const void **)v2, (const void **)&v13);
    v8 = (void *)(v13 - 12);
    if ( (int *)(v13 - 12) == &dword_28898C0 )
      return;
    v9 = (unsigned int *)(v13 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      goto LABEL_15;
    }
  }
  else
    j_leveldb::ParsedInternalKey::DebugString((leveldb::ParsedInternalKey *)&v14, (int)&v15);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)v2,
      &v14);
    v8 = (void *)(v14 - 12);
    if ( (int *)(v14 - 12) == &dword_28898C0 )
    v9 = (unsigned int *)(v14 - 4);
  v10 = (*v9)--;
LABEL_15:
  if ( v10 <= 0 )
    j_j_j_j__ZdlPv_9(v8);
}


leveldb::Arena *__fastcall leveldb::Arena::~Arena(leveldb::Arena *this)
{
  leveldb::Arena *v1; // r4@1
  void **v2; // r0@1
  void **v3; // r2@1
  unsigned int v4; // r5@3

  v1 = this;
  v3 = (void **)(*((_QWORD *)this + 1) >> 32);
  v2 = (void **)*((_QWORD *)this + 1);
  if ( v3 == v2 )
  {
    v2 = v3;
  }
  else
    v4 = 0;
    do
    {
      if ( v2[v4] )
      {
        j_operator delete[](v2[v4]);
        v3 = (void **)(*((_QWORD *)v1 + 1) >> 32);
        v2 = (void **)*((_QWORD *)v1 + 1);
      }
      ++v4;
    }
    while ( v4 < v3 - v2 );
  if ( v2 )
    j_operator delete(v2);
  return v1;
}


leveldb::TableBuilder::Rep *__fastcall leveldb::TableBuilder::Rep::~Rep(leveldb::TableBuilder::Rep *this)
{
  leveldb::TableBuilder::Rep *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  int v6; // r1@3
  void *v7; // r0@3
  void *v8; // r0@4
  int v9; // r1@6
  void *v10; // r0@6
  int v11; // r1@7
  void *v12; // r0@7
  void *v13; // r0@8
  int v14; // r1@10
  void *v15; // r0@10
  void *v16; // r0@11
  unsigned int *v18; // r2@14
  signed int v19; // r1@16
  unsigned int *v20; // r2@18
  signed int v21; // r1@20
  unsigned int *v22; // r2@22
  signed int v23; // r1@24
  unsigned int *v24; // r2@26
  signed int v25; // r1@28
  unsigned int *v26; // r2@30
  signed int v27; // r1@32
  unsigned int *v28; // r2@34
  signed int v29; // r1@36

  v1 = this;
  v2 = *((_DWORD *)this + 568);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v18 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  v4 = *((_DWORD *)v1 + 557);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v4 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  v6 = *((_DWORD *)v1 + 556);
  v7 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v6 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  v8 = (void *)*((_DWORD *)v1 + 551);
  if ( v8 )
    j_operator delete(v8);
  v9 = *((_DWORD *)v1 + 550);
  v10 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
    v24 = (unsigned int *)(v9 - 4);
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = *((_DWORD *)v1 + 548);
  v12 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v11 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = (void *)*((_DWORD *)v1 + 543);
  if ( v13 )
    j_operator delete(v13);
  v14 = *((_DWORD *)v1 + 542);
  v15 = (void *)(v14 - 12);
  if ( (int *)(v14 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v14 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = (void *)*((_DWORD *)v1 + 540);
  if ( v16 )
    j_operator delete[](v16);
  return v1;
}


void __fastcall leveldb::WritableFileEncrypted::~WritableFileEncrypted(leveldb::WritableFileEncrypted *this)
{
  leveldb::WritableFileEncrypted *v1; // r0@1

  v1 = j_leveldb::WritableFileEncrypted::~WritableFileEncrypted(this);
  j_j_j__ZdlPv_7((void *)v1);
}


RakNet *__fastcall leveldb::AppendNumberTo(const void **a1)
{
  const void **v1; // r4@1
  unsigned int v2; // r0@1
  RakNet *result; // r0@1
  char s; // [sp+Eh] [bp-32h]@1
  RakNet *v5; // [sp+2Ch] [bp-14h]@1

  v1 = a1;
  v5 = _stack_chk_guard;
  j_snprintf(&s, 0x1Eu, "%llu");
  v2 = j_strlen_0(&s);
  sub_21E7408(v1, &s, v2);
  result = (RakNet *)(_stack_chk_guard - v5);
  if ( _stack_chk_guard != v5 )
    j___stack_chk_fail_0((int)result);
  return result;
}


void __fastcall leveldb::VersionEdit::AddFile(leveldb::VersionEdit *this, int a2, unsigned __int64 a3, unsigned __int64 a4, const leveldb::InternalKey *a5, const leveldb::InternalKey *a6)
{
  int v6; // r5@1
  __int64 v7; // r0@1
  int v8; // r2@2
  signed int v9; // r3@2
  unsigned __int64 v10; // r4@2
  unsigned __int64 v11; // r6@2
  int v12; // r1@2
  void *v13; // r0@4
  char *v14; // r0@5
  char *v15; // r0@6
  char *v16; // r0@7
  unsigned int *v17; // r2@9
  signed int v18; // r1@11
  unsigned int *v19; // r2@13
  signed int v20; // r1@15
  unsigned int *v21; // r2@17
  signed int v22; // r1@19
  unsigned int *v23; // r2@21
  signed int v24; // r1@23
  leveldb::VersionEdit *v25; // [sp+4h] [bp-74h]@1
  int v26; // [sp+8h] [bp-70h]@1
  int v27; // [sp+10h] [bp-68h]@1
  signed int v28; // [sp+14h] [bp-64h]@1
  unsigned __int64 v29; // [sp+18h] [bp-60h]@1
  unsigned __int64 v30; // [sp+20h] [bp-58h]@1
  char *v31; // [sp+28h] [bp-50h]@1
  void *v32; // [sp+2Ch] [bp-4Ch]@1
  int v33; // [sp+30h] [bp-48h]@1
  int v34; // [sp+34h] [bp-44h]@1
  unsigned __int64 v35; // [sp+38h] [bp-40h]@1
  unsigned __int64 v36; // [sp+40h] [bp-38h]@1
  char *v37; // [sp+48h] [bp-30h]@1
  char *v38; // [sp+4Ch] [bp-2Ch]@1

  v25 = this;
  v6 = a2;
  v33 = 0;
  v34 = 0x40000000;
  v38 = (char *)&unk_28898CC;
  v37 = (char *)&unk_28898CC;
  v35 = a3;
  v36 = a4;
  EntityInteraction::setInteractText((int *)&v37, (int *)a5);
  EntityInteraction::setInteractText((int *)&v38, (int *)a6);
  v26 = v6;
  v27 = 0;
  v28 = 0x40000000;
  v29 = v35;
  v30 = a4;
  sub_21E8AF4((int *)&v31, (int *)&v37);
  sub_21E8AF4((int *)&v32, (int *)&v38);
  v7 = *((_QWORD *)v25 + 11);
  if ( (_DWORD)v7 == HIDWORD(v7) )
  {
    j_std::vector<std::pair<int,leveldb::FileMetaData>,std::allocator<std::pair<int,leveldb::FileMetaData>>>::_M_emplace_back_aux<std::pair<int,leveldb::FileMetaData>>(
      (unsigned __int64 *)((char *)v25 + 84),
      (int)&v26);
    v12 = (int)v32;
  }
  else
    *(_DWORD *)v7 = v26;
    v8 = v7 + 8;
    v9 = v28;
    v10 = v29;
    v11 = v30;
    *(_DWORD *)v8 = v27;
    *(_DWORD *)(v8 + 4) = v9;
    *(_QWORD *)(v8 + 8) = v10;
    *(_QWORD *)(v8 + 16) = v11;
    *(_DWORD *)(v7 + 32) = v31;
    HIDWORD(v7) = &unk_28898CC;
    v31 = (char *)&unk_28898CC;
    *(_DWORD *)(v7 + 36) = v32;
    v32 = &unk_28898CC;
    *((_DWORD *)v25 + 22) += 40;
  v13 = (void *)(v12 - 12);
  if ( (int *)(v12 - 12) != &dword_28898C0 )
    v17 = (unsigned int *)(v12 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v18 = __ldrex(v17);
      while ( __strex(v18 - 1, v17) );
    }
    else
      v18 = (*v17)--;
    if ( v18 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = v31 - 12;
  if ( (int *)(v31 - 12) != &dword_28898C0 )
    v19 = (unsigned int *)(v31 - 4);
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      v20 = (*v19)--;
    if ( v20 <= 0 )
      j_j_j_j__ZdlPv_9(v14);
  v15 = v38 - 12;
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v38 - 4);
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = v37 - 12;
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v37 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
}


char *__fastcall leveldb::EncodeVarint64(leveldb *this, char *a2, unsigned __int64 a3)
{
  signed int v3; // r1@1
  char *result; // r0@6
  int v5; // r1@7
  bool v6; // zf@7

  v3 = 0;
  if ( (unsigned int)a3 < 0x80 )
    v3 = 1;
  if ( HIDWORD(a3) )
    v3 = 0;
  if ( v3 )
  {
    *(_BYTE *)this = a3;
    result = (char *)this + 1;
  }
  else
    do
    {
      *(_BYTE *)this = a3 | 0x80;
      this = (leveldb *)((char *)this + 1);
      v5 = (signed __int64)a3 >> 7;
      LODWORD(a3) = (unsigned __int64)((signed __int64)a3 >> 14) | (HIDWORD(a3) >> 14);
      HIDWORD(a3) >>= 7;
      v6 = (_DWORD)a3 == 0;
      LODWORD(a3) = v5;
    }
    while ( !v6 );
    *(_BYTE *)this = v5;
  return result;
}


int __fastcall leveldb::DBImpl::MaybeIgnoreError(int result, leveldb::Status *a2)
{
  leveldb::Status *v2; // r4@1
  leveldb *v3; // r5@3
  __int64 v4; // r2@3
  char *v5; // r0@3
  unsigned int *v6; // r2@7
  signed int v7; // r1@9
  char *v8; // [sp+0h] [bp-18h]@3

  v2 = a2;
  if ( *(_DWORD *)a2 && !*(_BYTE *)(result + 30) )
  {
    v3 = *(leveldb **)(result + 36);
    j_leveldb::Status::ToString((leveldb::Status *)&v8, (unsigned int **)a2);
    LODWORD(v4) = v8;
    j_leveldb::Log(v3, (leveldb::Logger *)"Ignoring error %s", v4);
    v5 = v8 - 12;
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
    result = *(_DWORD *)v2;
    if ( *(_DWORD *)v2 )
      j_operator delete[]((void *)result);
      result = 0;
      *(_DWORD *)v2 = 0;
  }
  return result;
}


_DWORD *__fastcall leveldb::NewErrorIterator(leveldb *this, const leveldb::Status *a2)
{
  leveldb *v2; // r5@1
  _DWORD *v3; // r4@1
  leveldb::Status *v4; // r1@1
  void *v5; // r0@1

  v2 = this;
  v3 = j_operator new(0x18u);
  v4 = *(leveldb::Status **)v2;
  v5 = 0;
  v3[4] = 0;
  *v3 = &off_2725D74;
  v3[1] = 0;
  if ( v4 )
    v5 = j_leveldb::Status::CopyState(v4, (const char *)v4);
  v3[5] = v5;
  return v3;
}


leveldb::VersionEdit *__fastcall leveldb::DBImpl::NewDB(leveldb::DBImpl *this, int a2)
{
  leveldb::DBImpl *v2; // r8@1
  int v3; // r9@1
  const char *v4; // r0@1
  unsigned int v5; // r7@1
  int v6; // r0@1
  void *v7; // r0@1
  int v8; // r2@2
  unsigned int v9; // r3@2
  leveldb::Status *v10; // r0@3
  leveldb::Status *v11; // r1@3
  leveldb::Status *v12; // r1@7
  leveldb::Status *v13; // r0@14
  leveldb::Status *v14; // r1@14
  void *v15; // r1@18
  unsigned int *v16; // r2@19
  signed int v17; // r1@21
  char *v18; // r0@27
  __int64 v19; // r0@30
  leveldb::Status *v20; // r0@31
  leveldb::Status *v21; // r1@32
  void *v22; // r1@36
  void *v23; // r0@40
  unsigned int *v25; // r2@42
  signed int v26; // r1@44
  unsigned int *v27; // r2@54
  signed int v28; // r1@56
  leveldb::Status *v29; // [sp+8h] [bp-40h]@31
  leveldb::Status *v30; // [sp+Ch] [bp-3Ch]@32
  leveldb::Status *v31; // [sp+10h] [bp-38h]@14
  void *v32; // [sp+14h] [bp-34h]@3
  int v33; // [sp+18h] [bp-30h]@3
  leveldb::Status *v34; // [sp+1Ch] [bp-2Ch]@3
  void *v35; // [sp+20h] [bp-28h]@3
  int v36; // [sp+24h] [bp-24h]@1
  leveldb::WritableFile *v37; // [sp+40h] [bp-8h]@3
  int v38; // [sp+44h] [bp-4h]@2
  void *v39; // [sp+48h] [bp+0h]@1
  int v40; // [sp+50h] [bp+8h]@2
  int v41; // [sp+54h] [bp+Ch]@2
  int v42; // [sp+60h] [bp+18h]@2
  int v43; // [sp+64h] [bp+1Ch]@2
  int v44; // [sp+68h] [bp+20h]@2
  int v45; // [sp+6Ch] [bp+24h]@2
  char v46; // [sp+70h] [bp+28h]@1
  char v47; // [sp+71h] [bp+29h]@2
  char v48; // [sp+73h] [bp+2Bh]@2
  char v49; // [sp+74h] [bp+2Ch]@2
  int v50; // [sp+78h] [bp+30h]@1
  int v51; // [sp+7Ch] [bp+34h]@1
  int v52; // [sp+80h] [bp+38h]@1
  int v53; // [sp+88h] [bp+40h]@1
  int v54; // [sp+8Ch] [bp+44h]@1
  int *v55; // [sp+90h] [bp+48h]@1
  int *v56; // [sp+94h] [bp+4Ch]@1
  int v57; // [sp+98h] [bp+50h]@1
  int v58; // [sp+9Ch] [bp+54h]@1
  int v59; // [sp+A0h] [bp+58h]@1
  int v60; // [sp+A4h] [bp+5Ch]@1

  v2 = this;
  v3 = a2;
  v39 = &unk_28898CC;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v57 = 0;
  v53 = 0;
  v54 = 0;
  v55 = &v53;
  v56 = &v53;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  j_leveldb::VersionEdit::Clear((leveldb::VersionEdit *)&v39);
  v4 = (const char *)(*(int (**)(void))(**(_DWORD **)(v3 + 12) + 12))();
  v5 = (unsigned int)v4;
  v6 = j_strlen_0(v4);
  v46 = 1;
  sub_21E91E0((void **)&v36, v5, v6);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&v39,
    &v36);
  v7 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v36 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  v47 = 1;
  v40 = 0;
  v41 = 0;
  v48 = 1;
  v43 = 0;
  v42 = 2;
  v49 = 1;
  v44 = 0;
  v45 = 0;
  j_leveldb::DescriptorFileName(&v38, (int *)(v3 + 1100));
  (*(void (__fastcall **)(leveldb::DBImpl *))(**(_DWORD **)(v3 + 4) + 16))(v2);
  if ( !*(_DWORD *)v2 )
    j_leveldb::log::Writer::Writer((leveldb::log::Writer *)&v36, v37, v8, v9);
    v35 = &unk_28898CC;
    j_leveldb::VersionEdit::EncodeTo((int)&v39, (const void **)&v35);
    v32 = v35;
    v33 = *((_DWORD *)v35 - 3);
    j_leveldb::log::Writer::AddRecord(&v34, (int)&v36, (unsigned __int64 *)&v32);
    v10 = *(leveldb::Status **)v2;
    v11 = v34;
    if ( *(leveldb::Status **)v2 == v34 )
      v12 = *(leveldb::Status **)v2;
      if ( v10 )
      {
        j_operator delete[]((void *)v10);
        v11 = v34;
      }
      if ( v11 )
        v10 = (leveldb::Status *)j_leveldb::Status::CopyState(v11, (const char *)v11);
        v12 = v34;
      else
        v12 = 0;
        v10 = 0;
      *(_DWORD *)v2 = v10;
    if ( v12 )
      j_operator delete[]((void *)v12);
      v10 = *(leveldb::Status **)v2;
    if ( !v10 )
      (*(void (__fastcall **)(leveldb::Status **))(*(_DWORD *)v37 + 12))(&v31);
      v13 = *(leveldb::Status **)v2;
      v14 = v31;
      if ( *(leveldb::Status **)v2 != v31 )
        if ( v13 )
        {
          j_operator delete[]((void *)v13);
          v14 = v31;
        }
        if ( v14 )
          v15 = j_leveldb::Status::CopyState(v14, (const char *)v14);
          v13 = v31;
        else
          v13 = 0;
          v15 = 0;
        *(_DWORD *)v2 = v15;
      if ( v13 )
        j_operator delete[]((void *)v13);
    v18 = (char *)v35 - 12;
    if ( (int *)((char *)v35 - 12) != &dword_28898C0 )
      v27 = (unsigned int *)((char *)v35 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v28 = __ldrex(v27);
        while ( __strex(v28 - 1, v27) );
        v28 = (*v27)--;
      if ( v28 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    j_leveldb::log::Writer::~Writer((leveldb::log::Writer *)&v36);
    if ( v37 )
      (*(void (**)(void))(*(_DWORD *)v37 + 4))();
    HIDWORD(v19) = *(_DWORD *)(v3 + 4);
    if ( *(_DWORD *)v2 )
      (*(void (__fastcall **)(leveldb::Status **))(*(_DWORD *)HIDWORD(v19) + 32))(&v29);
      v20 = v29;
      LODWORD(v19) = &v30;
      j_leveldb::SetCurrentFile(v19, (int *)(v3 + 1100));
      v20 = *(leveldb::Status **)v2;
      v21 = v30;
      if ( *(leveldb::Status **)v2 != v30 )
        if ( v20 )
          j_operator delete[]((void *)v20);
          v21 = v30;
        if ( v21 )
          v22 = j_leveldb::Status::CopyState(v21, (const char *)v21);
          v20 = v30;
          *(_DWORD *)v2 = v22;
          v20 = 0;
          *(_DWORD *)v2 = 0;
    if ( v20 )
      j_operator delete[]((void *)v20);
  v23 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v38 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  return j_leveldb::VersionEdit::~VersionEdit((leveldb::VersionEdit *)&v39);
}


void __fastcall leveldb::VersionSet::LogAndApply(leveldb::VersionSet *this, leveldb::VersionEdit *a2, leveldb::port::Mutex *a3, leveldb::port::Mutex *a4)
{
  leveldb::VersionSet::LogAndApply(this, a2, a3, a4);
}


int __fastcall leveldb::port::CondVar::Signal(leveldb::port::CondVar *this)
{
  int result; // r0@1
  char *v2; // r0@2

  result = j_pthread_cond_signal((pthread_cond_t *)this);
  if ( result )
  {
    v2 = j_strerror(result);
    j_fprintf((FILE *)((char *)&_sF + 168), "pthread %s: %s\n", "signal", v2);
    j_abort();
  }
  return result;
}


void __fastcall leveldb::log::Writer::AddRecord(_DWORD *a1, int a2, unsigned __int64 *a3)
{
  leveldb::log::Writer::AddRecord(a1, a2, a3);
}


int __fastcall leveldb::BlockBuilder::BlockBuilder(int a1, int a2)
{
  int v2; // r4@1
  char *v3; // r5@1
  __int64 v4; // kr00_8@1

  v2 = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  *(_BYTE *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 28) = &unk_28898CC;
  v3 = (char *)j_operator new(4u);
  v4 = *(_QWORD *)(v2 + 8);
  *(_DWORD *)&v3[HIDWORD(v4) - v4] = 0;
  if ( 0 != (HIDWORD(v4) - (signed int)v4) >> 2 )
    j___aeabi_memmove4_0((int)v3, v4);
  if ( (_DWORD)v4 )
    j_operator delete((void *)v4);
  *(_DWORD *)(v2 + 8) = v3;
  *(_DWORD *)(v2 + 12) = &v3[HIDWORD(v4) - v4 + 4];
  *(_DWORD *)(v2 + 16) = v3 + 4;
  return v2;
}


int __fastcall leveldb::Version::LevelFileNumIterator::SeekToFirst(int result)
{
  *(_DWORD *)(result + 32) = 0;
  return result;
}


void __fastcall leveldb::DBImpl::WriteLevel0Table(leveldb::DBImpl *this, leveldb::MemTable *a2, leveldb::VersionEdit *a3, leveldb::Version *a4, int a5)
{
  leveldb::DBImpl *v5; // r7@1
  int *v6; // r5@1
  int v7; // r11@1
  int v8; // r0@1
  __int64 v9; // kr00_8@1
  __int64 v10; // r1@1
  int v11; // r2@1
  signed int v12; // r2@2
  __int64 v13; // kr10_8@2
  signed int v14; // r3@2
  int *v15; // r2@8
  signed int v16; // r1@11
  signed int v17; // r2@13
  int v18; // r0@13
  signed int v19; // r2@20
  bool v20; // cf@20
  __int64 v21; // r0@20
  leveldb::DBImpl *v22; // r5@28
  int v23; // r7@29
  __int64 v24; // r0@29
  _QWORD *v25; // r0@37
  int v26; // r11@38
  const char *v27; // r1@38
  void *v28; // r1@39
  void *v29; // r0@39
  unsigned int **v30; // r1@41
  __int64 v31; // r4@41
  __int64 v32; // kr18_8@41
  leveldb *v33; // r7@41
  void *v34; // r0@41
  int v35; // r5@44
  int *v36; // r6@45
  unsigned int v37; // r1@45
  int v38; // r7@45
  unsigned int v39; // r9@45
  unsigned int v40; // r11@45
  int v41; // r3@46
  int v42; // r3@46
  const leveldb::InternalKey *v43; // r12@46
  signed int v44; // r0@47
  __int64 v45; // r0@51
  unsigned __int64 v46; // r0@51
  __int64 v47; // kr40_8@51
  int v48; // r2@51
  int v49; // r3@51
  int v50; // r7@51
  char *v51; // r0@51
  char *v52; // r0@52
  unsigned int *v53; // r2@54
  signed int v54; // r1@56
  unsigned int *v55; // r2@58
  signed int v56; // r1@60
  unsigned int *v57; // r2@62
  signed int v58; // r1@64
  leveldb::Version *v59; // [sp+14h] [bp-7Ch]@1
  signed __int64 v60; // [sp+18h] [bp-78h]@1
  leveldb::VersionEdit *v61; // [sp+20h] [bp-70h]@1
  leveldb::DBImpl *v62; // [sp+28h] [bp-68h]@41
  void *v63; // [sp+30h] [bp-60h]@46
  int v64; // [sp+34h] [bp-5Ch]@46
  void *v65; // [sp+38h] [bp-58h]@46
  int v66; // [sp+3Ch] [bp-54h]@46
  int v67; // [sp+40h] [bp-50h]@41
  void *ptr; // [sp+44h] [bp-4Ch]@38
  int v69; // [sp+48h] [bp-48h]@1
  int v70; // [sp+4Ch] [bp-44h]@1
  unsigned __int64 v71; // [sp+50h] [bp-40h]@1
  int v72; // [sp+58h] [bp-38h]@1
  unsigned int v73; // [sp+5Ch] [bp-34h]@1
  _DWORD *v74; // [sp+60h] [bp-30h]@1
  _DWORD *v75; // [sp+64h] [bp-2Ch]@1

  v5 = this;
  v59 = a4;
  v61 = a3;
  v60 = __PAIR__((*(int (**)(void))(**((_DWORD **)a2 + 1) + 76))(), (unsigned int)a2);
  v69 = 0;
  v70 = 0x40000000;
  v72 = 0;
  v73 = 0;
  v6 = &v69;
  v7 = v60 + 1244;
  v74 = &unk_28898CC;
  v75 = &unk_28898CC;
  v8 = *(_DWORD *)(v60 + 1276);
  v9 = *(_QWORD *)(v8 + 24);
  HIDWORD(v10) = (unsigned __int64)(*(_QWORD *)(v8 + 24) + 1LL) >> 32;
  LODWORD(v10) = *(_DWORD *)(v8 + 24) + 1;
  *(_QWORD *)(v8 + 24) = v10;
  v71 = v9;
  v11 = *(_DWORD *)(v60 + 1248);
  if ( !v11 )
    goto LABEL_80;
  do
  {
    v7 = v11;
    v12 = 0;
    v13 = *(_QWORD *)(v7 + 16);
    v14 = 0;
    if ( (unsigned int)v9 < (unsigned int)v13 )
      v12 = 1;
    if ( HIDWORD(v9) < HIDWORD(v13) )
      v14 = 1;
    if ( HIDWORD(v9) == HIDWORD(v13) )
      v14 = v12;
    v15 = (int *)(v7 + 12);
    if ( v14 )
      v15 = (int *)(v7 + 8);
    v11 = *v15;
  }
  while ( v11 );
  v16 = 0;
  if ( (unsigned int)v9 >= (unsigned int)v13 )
    v16 = 1;
  v17 = 0;
  v18 = v7;
  if ( HIDWORD(v9) >= HIDWORD(v13) )
    v17 = 1;
  if ( HIDWORD(v9) == HIDWORD(v13) )
    v17 = v16;
  if ( !v17 )
LABEL_80:
    if ( v7 == *(_DWORD *)(v60 + 1252) )
    {
LABEL_27:
      if ( v7 )
      {
        v22 = v5;
        if ( (_DWORD)v60 + 1244 == v7 )
        {
          v23 = 1;
        }
        else
          v24 = *(_QWORD *)(v7 + 16);
          v23 = 0;
          v20 = (unsigned int)v9 >= (unsigned int)v24;
          LODWORD(v24) = 0;
          if ( !v20 )
            LODWORD(v24) = 1;
          if ( HIDWORD(v9) < HIDWORD(v24) )
            v23 = 1;
          if ( HIDWORD(v9) == HIDWORD(v24) )
            v23 = v24;
        v25 = j_operator new(0x18u);
        v25[2] = v9;
        sub_21D4928(v23, (int)v25, v7, v60 + 1244);
        v5 = v22;
        v6 = &v69;
        ++*(_DWORD *)(v60 + 1260);
      }
      goto LABEL_38;
    }
    v18 = sub_21D4858(v7);
  v21 = *(_QWORD *)(v18 + 16);
  v19 = 0;
  v20 = (unsigned int)v21 >= (unsigned int)v9;
  LODWORD(v21) = 0;
  if ( v20 )
    LODWORD(v21) = 1;
  if ( HIDWORD(v21) >= HIDWORD(v9) )
    v19 = 1;
  if ( HIDWORD(v21) == HIDWORD(v9) )
    v19 = v21;
  if ( !v19 )
    goto LABEL_27;
LABEL_38:
  v26 = j_leveldb::MemTable::NewIterator(v61);
  j_leveldb::Log(*(leveldb **)(v60 + 36), (leveldb::Logger *)"Level-0 table #%llu: started", v9);
  *(_DWORD *)v5 = 0;
  j_leveldb::port::Mutex::Unlock((leveldb::port::Mutex *)(v60 + 1112));
  j_leveldb::BuildTable(
    (leveldb::Status **)&ptr,
    (int *)(v60 + 1100),
    *(_DWORD *)(v60 + 4),
    v60 + 24,
    *(char **)(v60 + 1104),
    v26,
    (int)v6);
  if ( ptr )
    v28 = j_leveldb::Status::CopyState((leveldb::Status *)ptr, v27);
    v29 = ptr;
    *(_DWORD *)v5 = v28;
    if ( v29 )
      j_operator delete[](v29);
  j_leveldb::port::Mutex::Lock((leveldb::port::Mutex *)(v60 + 1112));
  v30 = (unsigned int **)v5;
  v31 = *(_QWORD *)&v72;
  v32 = v71;
  v62 = v5;
  v33 = *(leveldb **)(v60 + 36);
  j_leveldb::Status::ToString((leveldb::Status *)&v67, v30);
  j_leveldb::Log(v33, (leveldb::Logger *)"Level-0 table #%llu: %lld bytes %s", v32, v31, v67);
  v34 = (void *)(v67 - 12);
  if ( (int *)(v67 - 12) != &dword_28898C0 )
    v53 = (unsigned int *)(v67 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v54 = __ldrex(v53);
      while ( __strex(v54 - 1, v53) );
    else
      v54 = (*v53)--;
    if ( v54 <= 0 )
      j_j_j_j__ZdlPv_9(v34);
  if ( v26 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v26 + 4))(v26);
  j_std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::erase(
    v60 + 1240,
    (__int64 *)&v71);
  v35 = 0;
  if ( *(_DWORD *)v62 )
    v40 = HIDWORD(v60);
    v39 = v60;
    v36 = &v72;
  else
    v37 = v73;
    v38 = v72;
    if ( *(_QWORD *)&v72 )
      v41 = *(v74 - 3);
      v65 = v74;
      v66 = v41 - 8;
      v42 = *(v75 - 3);
      v63 = v75;
      v64 = v42 - 8;
      v43 = (const leveldb::InternalKey *)&v74;
      if ( a5 )
        v44 = j_leveldb::Version::PickLevelForMemTableOutput(a5, (__int64 *)&v65, (int)&v63);
        v37 = v73;
        v38 = v72;
        v43 = (const leveldb::InternalKey *)&v74;
        v35 = v44;
      else
        v35 = 0;
      j_leveldb::VersionEdit::AddFile(v59, v35, v71, __PAIR__(v37, v38), v43, (const leveldb::InternalKey *)&v75);
  LODWORD(v45) = (*(int (**)(void))(**(_DWORD **)(v60 + 4) + 76))();
  v46 = v45 - __PAIR__(v39, v40);
  v47 = *(_QWORD *)v36;
  v48 = v60 + 24 * v35;
  v49 = *(_DWORD *)(v48 + 1288);
  v50 = *(_DWORD *)(v48 + 1292);
  *(_DWORD *)(v48 + 1288) = v46 + v49;
  *(_DWORD *)(v48 + 1292) = v50 + __CFADD__((_DWORD)v46, v49) + HIDWORD(v46);
  *(_QWORD *)(v48 + 1304) += v47;
  v51 = (char *)(v75 - 3);
  if ( v75 - 3 != &dword_28898C0 )
    v55 = v75 - 1;
        v56 = __ldrex(v55);
      while ( __strex(v56 - 1, v55) );
      v56 = (*v55)--;
    if ( v56 <= 0 )
      j_j_j_j__ZdlPv_9(v51);
  v52 = (char *)(v74 - 3);
  if ( v74 - 3 != &dword_28898C0 )
    v57 = v74 - 1;
        v58 = __ldrex(v57);
      while ( __strex(v58 - 1, v57) );
      v58 = (*v57)--;
    if ( v58 <= 0 )
      j_j_j_j__ZdlPv_9(v52);
}


int __fastcall leveldb::MemTableIterator::Next(leveldb::MemTableIterator *this)
{
  leveldb::MemTableIterator *v1; // r4@1
  int v2; // r5@1
  int result; // r0@1

  v1 = this;
  v2 = *(_DWORD *)(*((_DWORD *)this + 6) + 4);
  result = vFFFF0FA0();
  *((_DWORD *)v1 + 6) = v2;
  return result;
}


void __fastcall leveldb::MemTableIterator::~MemTableIterator(leveldb::MemTableIterator *this)
{
  leveldb::Iterator *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_2725C4C;
  v2 = *((_DWORD *)this + 7);
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
  j_leveldb::Iterator::~Iterator(v1);
  j_operator delete((void *)v1);
}


int __fastcall leveldb::Iterator::Iterator(int result)
{
  *(_DWORD *)(result + 16) = 0;
  *(_QWORD *)result = (unsigned int)&off_2725D40;
  return result;
}


void __fastcall leveldb::Version::Unref(leveldb::Version *this)
{
  leveldb::Version::Unref(this);
}


const void **__fastcall leveldb::PutFixed32(const void **a1, int a2)
{
  int v3; // [sp+4h] [bp-Ch]@1

  v3 = a2;
  return sub_21E7408(a1, (char *)&v3, 4u);
}


_DWORD *__fastcall leveldb::Version::LevelFileNumIterator::status(_DWORD *result)
{
  *result = 0;
  return result;
}


int __fastcall leveldb::Version::LevelFileNumIterator::SeekToLast(int result)
{
  int v1; // r1@1 OVERLAPPED
  int v2; // r2@1 OVERLAPPED
  int v3; // r1@2

  *(_QWORD *)&v1 = *(_QWORD *)*(_DWORD *)(result + 28);
  if ( v1 == v2 )
    v3 = 0;
  else
    v3 = ((v2 - v1) >> 2) - 1;
  *(_DWORD *)(result + 32) = v3;
  return result;
}


RakNet *__fastcall leveldb::TableCache::Evict(leveldb::TableCache *this, char *a2, unsigned __int64 a3)
{
  leveldb::TableCache *v3; // r4@1
  void (*v4)(void); // r2@1
  RakNet *result; // r0@1
  char *v6; // [sp+4h] [bp-24h]@1
  int v7; // [sp+8h] [bp-20h]@1
  char v8; // [sp+Ch] [bp-1Ch]@1
  RakNet *v9; // [sp+14h] [bp-14h]@1

  v3 = this;
  v9 = _stack_chk_guard;
  j_leveldb::EncodeFixed64((leveldb *)&v8, a2, a3);
  v4 = *(void (**)(void))(**((_DWORD **)v3 + 3) + 24);
  v6 = &v8;
  v7 = 8;
  v4();
  result = (RakNet *)(_stack_chk_guard - v9);
  if ( _stack_chk_guard != v9 )
    j___stack_chk_fail_0((int)result);
  return result;
}


leveldb::DecompressAllocator *__fastcall leveldb::DecompressAllocator::~DecompressAllocator(leveldb::DecompressAllocator *this)
{
  leveldb::DecompressAllocator *v1; // r10@1
  void *v2; // r5@1
  void *v3; // r7@1
  unsigned int *v4; // r2@3
  signed int v5; // r1@5
  int *v6; // r0@11

  v1 = this;
  *(_DWORD *)this = &off_2725D24;
  v3 = (void *)(*((_QWORD *)this + 1) >> 32);
  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 != v3 )
  {
    do
    {
      v6 = (int *)(*(_DWORD *)v2 - 12);
      if ( v6 != &dword_28898C0 )
      {
        v4 = (unsigned int *)(*(_DWORD *)v2 - 4);
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
          j_j_j_j__ZdlPv_9(v6);
      }
      v2 = (char *)v2 + 4;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 2);
  }
  if ( v2 )
    j_operator delete(v2);
  return v1;
}


void __fastcall leveldb::VersionEdit::DecodeFrom(_DWORD *a1, leveldb::VersionEdit *a2, __int64 *a3)
{
  leveldb::VersionEdit::DecodeFrom(a1, a2, a3);
}


_DWORD *__fastcall leveldb::DBImpl::MakeRoomForWrite(leveldb::DBImpl *this, int a2, char a3)
{
  leveldb::DBImpl *v3; // r4@1
  int v4; // r5@1
  leveldb::Status *v5; // r0@1
  char v6; // r8@1
  int v10; // r6@3
  int v11; // r6@5
  int v12; // r0@7
  unsigned int *v14; // r2@11
  signed int v15; // r1@13
  _DWORD *result; // r0@26
  int v18; // r6@27
  __int64 v19; // r2@27
  leveldb *v20; // r0@29
  const char *v21; // r1@29
  int v22; // r6@35
  __int64 v23; // r2@35
  leveldb *v24; // r0@37
  const char *v25; // r1@37
  int v26; // r6@43
  __int64 v27; // r2@43
  leveldb *v28; // r0@45
  const char *v29; // r1@45
  int v30; // r0@51
  __int64 v31; // r2@51
  int v32; // r10@51
  void (__fastcall *v33)(void **, int, int *, leveldb::WritableFile **); // r8@51
  const char *v34; // r1@51
  void *v35; // r1@52
  void *v36; // r0@52
  void *v37; // r0@54
  leveldb::log::Writer *v38; // r0@56
  void *v39; // r0@57
  int v40; // r0@58
  leveldb::WritableFile *v41; // r6@60
  __int64 v42; // r1@60
  leveldb::log::Writer *v43; // r0@60
  int v44; // r2@60
  unsigned int v45; // r3@60
  int v46; // r6@60
  leveldb::MemTable *v47; // r0@60
  leveldb::MemTable *v48; // r0@60
  int v49; // r6@60
  bool v50; // zf@60
  int v51; // r0@67
  unsigned int v52; // t1@67
  __int64 v53; // r1@68
  __int64 v54; // [sp+8h] [bp-70h]@51
  int v55; // [sp+10h] [bp-68h]@51
  int v56; // [sp+14h] [bp-64h]@51
  _QWORD *v57; // [sp+20h] [bp-58h]@2
  leveldb::InternalKeyComparator *v58; // [sp+24h] [bp-54h]@2
  int *v59; // [sp+2Ch] [bp-4Ch]@2
  leveldb::port::Mutex *v60; // [sp+30h] [bp-48h]@2
  char v61; // [sp+34h] [bp-44h]@2
  int v62; // [sp+38h] [bp-40h]@11
  void *ptr; // [sp+3Ch] [bp-3Ch]@51
  leveldb::WritableFile *v64; // [sp+40h] [bp-38h]@51

  v3 = this;
  v4 = a2;
  *(_DWORD *)this = 0;
  v5 = *(leveldb::Status **)(a2 + 1280);
  v6 = a3;
  if ( v5 )
  {
LABEL_65:
    result = j_leveldb::Status::CopyState(v5, (const char *)a2);
    *(_DWORD *)v3 = result;
  }
  else
    v60 = (leveldb::port::Mutex *)(a2 + 1112);
    v58 = (leveldb::InternalKeyComparator *)(a2 + 8);
    v57 = (_QWORD *)(a2 + 1144);
    v59 = (int *)(a2 + 1100);
    v61 = a3 ^ 1;
    __asm { VMOV.F64        D8, #1.0 }
    while ( v61 & 1 )
    {
      while ( j_leveldb::VersionSet::NumLevelFiles(*(leveldb::VersionSet **)(v4 + 1276), 0) <= 15 )
      {
        if ( !(v6 & 1) )
        {
          result = (_DWORD *)j_leveldb::MemTable::ApproximateMemoryUsage(*(leveldb::MemTable **)(v4 + 1128));
          if ( (unsigned int)result <= *(_DWORD *)(v4 + 40) )
            return result;
        }
        v18 = *(_DWORD *)(v4 + 1268);
        result = (_DWORD *)vFFFF0FA0();
        if ( v18 )
          return result;
        if ( *(_DWORD *)(v4 + 1132) )
          v20 = *(leveldb **)(v4 + 36);
          v21 = "Current memtable full; waiting...\n";
        else
          if ( j_leveldb::VersionSet::NumLevelFiles(*(leveldb::VersionSet **)(v4 + 1276), 0) < 64 )
            goto LABEL_51;
          v21 = "Too many L0 files; waiting...\n";
        j_leveldb::Log(v20, (leveldb::Logger *)v21, v19);
        j_leveldb::port::CondVar::Wait((leveldb::port::CondVar *)(v4 + 1120));
        v5 = *(leveldb::Status **)(v4 + 1280);
        if ( v5 )
          goto LABEL_65;
      }
      j_leveldb::port::Mutex::Unlock(v60);
      (*(void (**)(void))(**(_DWORD **)(v4 + 4) + 80))();
      j_leveldb::port::Mutex::Lock(v60);
      a2 = 0;
      v5 = *(leveldb::Status **)(v4 + 1280);
      v61 = 0;
LABEL_64:
      if ( v5 )
        goto LABEL_65;
    }
    if ( v6 & 1 )
      while ( 1 )
        v22 = *(_DWORD *)(v4 + 1268);
        if ( v22 )
          break;
          v24 = *(leveldb **)(v4 + 36);
          v25 = "Current memtable full; waiting...\n";
          v25 = "Too many L0 files; waiting...\n";
        j_leveldb::Log(v24, (leveldb::Logger *)v25, v23);
    else
        result = (_DWORD *)j_leveldb::MemTable::ApproximateMemoryUsage(*(leveldb::MemTable **)(v4 + 1128));
        if ( (unsigned int)result <= *(_DWORD *)(v4 + 40) )
        v26 = *(_DWORD *)(v4 + 1268);
        if ( v26 )
          v28 = *(leveldb **)(v4 + 36);
          v29 = "Current memtable full; waiting...\n";
          {
LABEL_51:
            v30 = *(_DWORD *)(v4 + 1276);
            v31 = *(_QWORD *)(v30 + 24);
            v55 = *(_QWORD *)(v30 + 24) >> 32;
            v56 = v31;
            HIDWORD(v54) = v31 + 1;
            *(_QWORD *)(v30 + 24) = v31 + 1;
            v64 = 0;
            v32 = *(_DWORD *)(v4 + 4);
            LODWORD(v54) = (unsigned __int64)(v31 + 1) >> 32;
            v33 = *(void (__fastcall **)(void **, int, int *, leveldb::WritableFile **))(*(_DWORD *)v32 + 16);
            j_leveldb::LogFileName(&v62, v59);
            v33(&ptr, v32, &v62, &v64);
            if ( ptr )
            {
              v35 = j_leveldb::Status::CopyState((leveldb::Status *)ptr, v34);
              v36 = ptr;
              *(_DWORD *)v3 = v35;
              if ( v36 )
                j_operator delete[](v36);
            }
            v37 = (void *)(v62 - 12);
            if ( (int *)(v62 - 12) != &dword_28898C0 )
              v14 = (unsigned int *)(v62 - 4);
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
                j_j_j_j__ZdlPv_9(v37);
            if ( !*(_DWORD *)v3 )
              v38 = *(leveldb::log::Writer **)(v4 + 1152);
              if ( v38 )
                v39 = (void *)j_leveldb::log::Writer::~Writer(v38);
                j_operator delete(v39);
              v40 = *(_DWORD *)(v4 + 1140);
              if ( v40 )
                (*(void (**)(void))(*(_DWORD *)v40 + 4))();
              v41 = v64;
              *(_DWORD *)(v4 + 1140) = v64;
              LODWORD(v42) = v56;
              HIDWORD(v42) = v55;
              *v57 = v42;
              v43 = (leveldb::log::Writer *)j_operator new(0x1Cu);
              *(_DWORD *)(v4 + 1152) = j_leveldb::log::Writer::Writer(v43, v41, v44, v45);
              v46 = *(_DWORD *)(v4 + 1128);
              *(_DWORD *)(v4 + 1132) = v46;
              vFFFF0FA0();
              *(_DWORD *)(v4 + 1136) = v46;
              v47 = (leveldb::MemTable *)j_operator new(0x3Cu);
              v48 = j_leveldb::MemTable::MemTable(v47, v58);
              *(_DWORD *)(v4 + 1128) = v48;
              ++*((_DWORD *)v48 + 2);
              v49 = *(_DWORD *)(v4 + 1268);
              v50 = v49 == 0;
              if ( !v49 )
                v50 = *(_BYTE *)(v4 + 1264) == 0;
              if ( v50 )
                v10 = *(_DWORD *)(v4 + 1116);
                vFFFF0FA0();
                if ( !v10 )
                {
                  if ( *(_DWORD *)(v4 + 1132) || (v11 = *(_DWORD *)(v4 + 1268), vFFFF0FA0(), !v11) )
                  {
                    if ( !*(_DWORD *)(v4 + 1280) )
                    {
                      v12 = *(_DWORD *)(v4 + 1132);
                      _ZF = v12 == 0;
                      if ( !v12 )
                        _ZF = *(_DWORD *)(v4 + 1272) == 0;
                      if ( !_ZF )
                        goto LABEL_72;
                      _R0 = *(_DWORD *)(*(_DWORD *)(v4 + 1276) + 200);
                      __asm
                      {
                        VLDR            D0, [R0,#0x70]
                        VCMPE.F64       D0, D8
                        VMRS            APSR_nzcv, FPSCR
                      }
                      if ( !(_NF ^ _VF) || *(_DWORD *)(_R0 + 100) )
LABEL_72:
                        *(_BYTE *)(v4 + 1264) = 1;
                        (*(void (**)(void))(**(_DWORD **)(v4 + 4) + 60))();
                    }
                  }
                }
              v5 = *(leveldb::Status **)(v4 + 1280);
              v6 = 0;
              goto LABEL_64;
            v51 = *(_DWORD *)(v4 + 1276);
            v52 = *(_DWORD *)(v51 + 24);
            result = (_DWORD *)(v51 + 24);
            if ( v54 == __PAIR__(v52, result[1]) )
              LODWORD(v53) = v56;
              HIDWORD(v53) = v55;
              *(_QWORD *)result = v53;
          }
          v29 = "Too many L0 files; waiting...\n";
        j_leveldb::Log(v28, (leveldb::Logger *)v29, v27);
  return result;
}


char *__fastcall leveldb::WriteBatch::Clear(leveldb::WriteBatch *this)
{
  char *v1; // r4@1

  v1 = (char *)this;
  sub_21E7EE0((const void **)this, 0, *(_BYTE **)(*(_DWORD *)this - 12), 0);
  return sub_21E849C(v1, 0xCu, 0);
}


void __fastcall leveldb::TableBuilder::Add(leveldb::TableBuilder *a1, const char *a2, int a3)
{
  leveldb::TableBuilder *v3; // r4@1
  int v4; // r8@1
  int v5; // r5@1
  __int64 *v6; // r6@1
  leveldb::Status *v7; // r0@1
  void *v8; // r0@2
  char *v9; // r0@5
  int v10; // r0@6
  unsigned int v11; // r0@8
  const char *v12; // r1@8
  unsigned int *v13; // r2@11
  signed int v14; // r1@13
  void *v15; // [sp+4h] [bp-34h]@5
  int v16; // [sp+8h] [bp-30h]@5
  int v17; // [sp+Ch] [bp-2Ch]@5
  int v18; // [sp+10h] [bp-28h]@5
  void *v19; // [sp+14h] [bp-24h]@5

  v3 = a1;
  v4 = a3;
  v5 = *(_DWORD *)a1;
  v6 = (__int64 *)a2;
  v7 = *(leveldb::Status **)(*(_DWORD *)a1 + 2160);
  if ( v7 && (v8 = j_leveldb::Status::CopyState(v7, a2)) != 0 )
  {
    j_j_j__ZdaPv_4(v8);
  }
  else
    if ( *(_BYTE *)(v5 + 2248) )
    {
      (*(void (**)(void))(**(_DWORD **)v5 + 16))();
      v19 = &unk_28898CC;
      j_leveldb::BlockHandle::EncodeTo((signed __int64 *)(v5 + 2256), (const void **)&v19);
      v17 = *(_DWORD *)(v5 + 2228);
      v18 = *(_DWORD *)(v17 - 12);
      v15 = v19;
      v16 = *((_DWORD *)v19 - 3);
      j_leveldb::BlockBuilder::Add(v5 + 2196, (int)&v17, (int)&v15);
      *(_BYTE *)(v5 + 2248) = 0;
      v9 = (char *)v19 - 12;
      if ( (int *)((char *)v19 - 12) != &dword_28898C0 )
      {
        v13 = (unsigned int *)((char *)v19 - 4);
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
          j_j_j_j__ZdlPv_9(v9);
      }
    }
    v10 = *(_DWORD *)(v5 + 2244);
    if ( v10 )
      j_leveldb::FilterBlockBuilder::AddKey(v10, v6);
    sub_21E8190((void **)(v5 + 2228), (char *)*v6, (_BYTE *)((unsigned __int64)*v6 >> 32));
    ++*(_QWORD *)(v5 + 2232);
    j_leveldb::BlockBuilder::Add(v5 + 2164, (int)v6, v4);
    v11 = j_leveldb::BlockBuilder::CurrentSizeEstimate((leveldb::BlockBuilder *)(v5 + 2164));
    v12 = *(const char **)(v5 + 28);
    if ( v11 >= (unsigned int)v12 )
      j_leveldb::TableBuilder::Flush(v3, v12);
}


int __fastcall leveldb::EnvPosixTestHelper::SetReadOnlyFDLimit(int result, int a2)
{
  dword_27B57CC = result;
  return result;
}


int __fastcall leveldb::DBImpl::GetApproximateSizes(int a1, int a2, signed int a3, int a4)
{
  int v4; // r4@1
  leveldb::port::Mutex *v5; // r5@1
  signed int v6; // r6@1
  int v7; // r8@2
  int *v8; // r4@2
  unsigned int *v9; // r2@3
  signed int v10; // r1@5
  unsigned int *v11; // r2@7
  signed int v12; // r1@9
  int v13; // r6@19
  __int64 v14; // r0@19
  unsigned int v15; // r9@19
  unsigned int v16; // r1@19
  unsigned int v17; // r10@19
  __int64 v18; // r0@19
  signed int v19; // r2@19
  signed int v20; // r3@21
  unsigned __int64 v21; // r0@25
  int *v22; // r0@29
  int *v23; // r0@30
  leveldb::port::Mutex *v25; // [sp+Ch] [bp-6Ch]@1
  int v26; // [sp+1Ch] [bp-5Ch]@1
  int v27; // [sp+20h] [bp-58h]@1
  signed int v28; // [sp+24h] [bp-54h]@1
  int v29; // [sp+28h] [bp-50h]@1
  leveldb::Version *v30; // [sp+2Ch] [bp-4Ch]@1
  int *v31; // [sp+30h] [bp-48h]@3
  int *v32; // [sp+34h] [bp-44h]@7
  __int64 v33; // [sp+38h] [bp-40h]@19
  signed int v34; // [sp+40h] [bp-38h]@19
  signed int v35; // [sp+44h] [bp-34h]@19
  int v36; // [sp+48h] [bp-30h]@19

  v4 = a1;
  v5 = (leveldb::port::Mutex *)(a1 + 1112);
  v6 = a3;
  v29 = a4;
  v27 = a2;
  v28 = a3;
  v26 = a1;
  v25 = (leveldb::port::Mutex *)(a1 + 1112);
  j_leveldb::port::Mutex::Lock((leveldb::port::Mutex *)(a1 + 1112));
  j_leveldb::Version::Ref(*(leveldb::Version **)(*(_DWORD *)(v4 + 1276) + 200));
  v30 = *(leveldb::Version **)(*(_DWORD *)(v4 + 1276) + 200);
  j_leveldb::port::Mutex::Unlock(v5);
  if ( v6 >= 1 )
  {
    v7 = 0;
    v8 = &dword_28898C0;
    do
    {
      v32 = v8 + 3;
      v13 = v27 + 16 * v7;
      LODWORD(v14) = *(_DWORD *)(v27 + 16 * v7);
      HIDWORD(v14) = *(_DWORD *)(v13 + 4);
      v33 = v14;
      v34 = -1;
      v35 = 0xFFFFFF;
      v36 = 1;
      j_leveldb::AppendInternalKey((const void **)&v32, (unsigned __int64 *)&v33);
      v31 = v8 + 3;
      v33 = *(_QWORD *)(v13 + 8);
      j_leveldb::AppendInternalKey((const void **)&v31, (unsigned __int64 *)&v33);
      v15 = j_leveldb::VersionSet::ApproximateOffsetOf(
              *(leveldb::VersionSet **)(v26 + 1276),
              v30,
              (const leveldb::InternalKey *)&v32);
      v17 = v16;
      v8 = &dword_28898C0;
      LODWORD(v18) = j_leveldb::VersionSet::ApproximateOffsetOf(
                       *(leveldb::VersionSet **)(v26 + 1276),
                       v30,
                       (const leveldb::InternalKey *)&v31);
      v19 = 0;
      if ( (unsigned int)v18 < v15 )
        v19 = 1;
      v20 = 0;
      if ( HIDWORD(v18) < v17 )
        v20 = 1;
      if ( HIDWORD(v18) == v17 )
        v20 = v19;
      v21 = v18 - __PAIR__(v17, v15);
      if ( v20 )
        LODWORD(v21) = 0;
      *(_DWORD *)(v29 + 8 * v7) = v21;
        HIDWORD(v21) = 0;
      *(_DWORD *)(v29 + 8 * v7 + 4) = HIDWORD(v21);
      v22 = v31 - 3;
      if ( v31 - 3 != &dword_28898C0 )
      {
        v9 = (unsigned int *)(v31 - 1);
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
          j_j_j_j__ZdlPv_9(v22);
      }
      v23 = v32 - 3;
      if ( v32 - 3 != &dword_28898C0 )
        v11 = (unsigned int *)(v32 - 1);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v23);
      ++v7;
    }
    while ( v7 != v28 );
  }
  j_leveldb::port::Mutex::Lock(v25);
  j_leveldb::Version::Unref(v30);
  return j_leveldb::port::Mutex::Unlock(v25);
}


void *__fastcall leveldb::TableBuilder::Finish(leveldb::TableBuilder *this, leveldb::TableBuilder *a2)
{
  int *v2; // r6@1
  leveldb::TableBuilder *v3; // r8@1
  int v4; // r5@1
  const char *v5; // r1@1
  leveldb::Status *v6; // r0@1
  void *v7; // r0@2
  const char *v8; // r1@3
  leveldb::Status *v9; // r0@6
  void *v10; // r0@7
  char *v11; // r1@8
  const char *v12; // r0@10
  char *v13; // r4@10
  unsigned int v14; // r0@10
  char *v15; // r0@10
  char *v16; // r0@11
  void *v17; // r0@12
  char *v18; // r0@15
  leveldb::Status *v19; // r0@16
  void *v20; // r0@17
  const char *v21; // r1@18
  int v22; // r7@20
  char *v23; // r0@20
  unsigned int *v24; // r2@21
  signed int v25; // r1@23
  leveldb::Status *v26; // r0@27
  void *v27; // r0@28
  char *v28; // r1@29
  leveldb::Status **v29; // r4@29
  void (__fastcall *v30)(leveldb::Status **); // r3@30
  leveldb::Status *v31; // r0@30
  leveldb::Status *v32; // r1@30
  leveldb::Status *v33; // r1@35
  char *v34; // r0@42
  void *result; // r0@44
  unsigned int *v36; // r2@47
  signed int v37; // r1@49
  unsigned int *v38; // r2@51
  unsigned int *v39; // r2@55
  unsigned int *v40; // r2@59
  signed int v41; // r1@61
  unsigned int *v42; // r2@63
  signed int v43; // r1@65
  char *v44; // [sp+0h] [bp-B0h]@30
  int v45; // [sp+4h] [bp-ACh]@30
  leveldb::Status *v46; // [sp+8h] [bp-A8h]@30
  void *v47; // [sp+Ch] [bp-A4h]@20
  int v48; // [sp+10h] [bp-A0h]@20
  int v49; // [sp+14h] [bp-9Ch]@20
  int v50; // [sp+18h] [bp-98h]@20
  void *v51; // [sp+1Ch] [bp-94h]@10
  int v52; // [sp+20h] [bp-90h]@10
  char *v53; // [sp+24h] [bp-8Ch]@10
  int v54; // [sp+28h] [bp-88h]@10
  void *v55; // [sp+2Ch] [bp-84h]@10
  char *v56; // [sp+34h] [bp-7Ch]@10
  void *v57; // [sp+38h] [bp-78h]@9
  char *v58; // [sp+3Ch] [bp-74h]@15
  void *ptr; // [sp+40h] [bp-70h]@13
  signed int v60; // [sp+44h] [bp-6Ch]@30
  int v61; // [sp+48h] [bp-68h]@30
  signed int v62; // [sp+4Ch] [bp-64h]@30
  signed int v63; // [sp+50h] [bp-60h]@30
  int v64; // [sp+54h] [bp-5Ch]@12
  char v65; // [sp+58h] [bp-58h]@5
  int v66; // [sp+60h] [bp-50h]@1
  signed int v67; // [sp+64h] [bp-4Ch]@1
  signed int v68; // [sp+68h] [bp-48h]@1
  signed int v69; // [sp+6Ch] [bp-44h]@1
  void *v70; // [sp+70h] [bp-40h]@1
  char *v71; // [sp+74h] [bp-3Ch]@1
  void *v72; // [sp+78h] [bp-38h]@1
  signed int v73; // [sp+7Ch] [bp-34h]@1
  signed int v74[5]; // [sp+80h] [bp-30h]@1

  v2 = (int *)a2;
  v3 = this;
  v4 = *(_DWORD *)a2;
  j_leveldb::TableBuilder::Flush(a2, (const char *)a2);
  *(_BYTE *)(v4 + 2240) = 1;
  v74[2] = -1;
  v74[3] = -1;
  v74[0] = -1;
  v74[1] = -1;
  v72 = (void *)-1;
  v73 = -1;
  v70 = (void *)-1;
  v71 = (char *)-1;
  v68 = -1;
  v69 = -1;
  v66 = -1;
  v67 = -1;
  v6 = *(leveldb::Status **)(*v2 + 2160);
  if ( v6 && (v7 = j_leveldb::Status::CopyState(v6, v5)) != 0 )
  {
    j_operator delete[](v7);
  }
  else
    v8 = *(const char **)(v4 + 2244);
    if ( v8 )
    {
      j_leveldb::FilterBlockBuilder::Finish((leveldb::FilterBlockBuilder *)&v65, (int)v8);
      j_leveldb::TableBuilder::WriteRawBlock((int)v2, (int)&v65, 0, (int)v74);
    }
  v9 = *(leveldb::Status **)(*v2 + 2160);
  if ( v9 && (v10 = j_leveldb::Status::CopyState(v9, v8)) != 0 )
    j_operator delete[](v10);
    j_leveldb::BlockBuilder::BlockBuilder((int)&v57, v4);
    if ( *(_DWORD *)(v4 + 2244) )
      sub_21E94B4((void **)&v56, "filter.");
      v12 = (const char *)(*(int (**)(void))(**(_DWORD **)(v4 + 1068) + 8))();
      v13 = (char *)v12;
      v14 = j_strlen_0(v12);
      sub_21E7408((const void **)&v56, v13, v14);
      v55 = &unk_28898CC;
      j_leveldb::BlockHandle::EncodeTo((signed __int64 *)v74, (const void **)&v55);
      v53 = v56;
      v54 = *((_DWORD *)v56 - 3);
      v51 = v55;
      v52 = *((_DWORD *)v55 - 3);
      j_leveldb::BlockBuilder::Add((int)&v57, (int)&v53, (int)&v51);
      v15 = (char *)v55 - 12;
      if ( (int *)((char *)v55 - 12) != &dword_28898C0 )
      {
        v40 = (unsigned int *)((char *)v55 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v41 = __ldrex(v40);
          while ( __strex(v41 - 1, v40) );
        }
        else
          v41 = (*v40)--;
        if ( v41 <= 0 )
          j_j_j_j__ZdlPv_9(v15);
      }
      v16 = v56 - 12;
      if ( (int *)(v56 - 12) != &dword_28898C0 )
        v42 = (unsigned int *)(v56 - 4);
            v43 = __ldrex(v42);
          while ( __strex(v43 - 1, v42) );
          v43 = (*v42)--;
        if ( v43 <= 0 )
          j_j_j_j__ZdlPv_9(v16);
    j_leveldb::TableBuilder::WriteBlock(v2, (int)&v57, (int)&v70);
    v17 = (void *)(v64 - 12);
    if ( (int *)(v64 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v64 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
      else
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
    if ( ptr )
      j_operator delete(ptr);
    v11 = v58;
    v18 = v58 - 12;
    if ( (int *)(v58 - 12) != &dword_28898C0 )
      v38 = (unsigned int *)(v58 - 4);
          v11 = (char *)__ldrex(v38);
        while ( __strex((unsigned int)(v11 - 1), v38) );
        v11 = (char *)(*v38)--;
      if ( (signed int)v11 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
  v19 = *(leveldb::Status **)(*v2 + 2160);
  if ( v19 && (v20 = j_leveldb::Status::CopyState(v19, v11)) != 0 )
    j_operator delete[](v20);
    if ( *(_BYTE *)(v4 + 2248) )
      (*(void (**)(void))(**(_DWORD **)v4 + 20))();
      v57 = &unk_28898CC;
      j_leveldb::BlockHandle::EncodeTo((signed __int64 *)(v4 + 2256), (const void **)&v57);
      v22 = v4 + 2196;
      v49 = *(_DWORD *)(v4 + 2228);
      v50 = *(_DWORD *)(v49 - 12);
      v47 = v57;
      v48 = *((_DWORD *)v57 - 3);
      j_leveldb::BlockBuilder::Add(v4 + 2196, (int)&v49, (int)&v47);
      *(_BYTE *)(v4 + 2248) = 0;
      v23 = (char *)v57 - 12;
      if ( (int *)((char *)v57 - 12) != &dword_28898C0 )
        v24 = (unsigned int *)((char *)v57 - 4);
            v25 = __ldrex(v24);
          while ( __strex(v25 - 1, v24) );
          v25 = (*v24)--;
        if ( v25 <= 0 )
          j_j_j_j__ZdlPv_9(v23);
    else
    j_leveldb::TableBuilder::WriteBlock(v2, v22, (int)&v66);
  v26 = *(leveldb::Status **)(*v2 + 2160);
  if ( v26 && (v27 = j_leveldb::Status::CopyState(v26, v21)) != 0 )
    j_operator delete[](v27);
    v29 = (leveldb::Status **)(v4 + 2160);
    v57 = v70;
    v58 = v71;
    ptr = v72;
    v60 = v73;
    v61 = v66;
    v62 = v67;
    v63 = v68;
    v64 = v69;
    v56 = (char *)&unk_28898CC;
    j_leveldb::Footer::EncodeTo((signed __int64 *)&v57, (const void **)&v56);
    v30 = *(void (__fastcall **)(leveldb::Status **))(**(_DWORD **)(v4 + 2144) + 8);
    v44 = v56;
    v45 = *((_DWORD *)v56 - 3);
    v30(&v46);
    v31 = *(leveldb::Status **)(v4 + 2160);
    v32 = v46;
    if ( v31 == v46 )
      v33 = *(leveldb::Status **)(v4 + 2160);
      if ( v31 )
        j_operator delete[]((void *)v31);
        v32 = v46;
      if ( v32 )
        v31 = (leveldb::Status *)j_leveldb::Status::CopyState(v32, (const char *)v32);
        v31 = 0;
      *v29 = v31;
      v33 = v46;
    if ( v33 )
      j_operator delete[]((void *)v33);
      v31 = *v29;
    v28 = v56;
    if ( !v31 )
      *(_QWORD *)(v4 + 2152) += *((_DWORD *)v56 - 3);
    v34 = v28 - 12;
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v39 = (unsigned int *)(v28 - 4);
          v28 = (char *)__ldrex(v39);
        while ( __strex((unsigned int)(v28 - 1), v39) );
        v28 = (char *)(*v39)--;
      if ( (signed int)v28 <= 0 )
        j_j_j_j__ZdlPv_9(v34);
  if ( *v29 )
    result = j_leveldb::Status::CopyState(*v29, v28);
    result = 0;
  *(_DWORD *)v3 = result;
  return result;
}


void *__fastcall leveldb::Block::Iter::status(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4@1
  leveldb::Status *v3; // r0@1
  void *result; // r0@2

  v2 = a1;
  v3 = *(leveldb::Status **)(a2 + 56);
  if ( v3 )
  {
    result = j_leveldb::Status::CopyState(v3, (const char *)a2);
    *v2 = result;
  }
  else
    result = 0;
    *v2 = 0;
  return result;
}


void __fastcall leveldb::BuildTable(leveldb::Status **a1, int *a2, unsigned int a3, int a4, char *a5, int a6, int a7)
{
  leveldb::Status *v7; // r7@1
  int *v8; // r4@1
  int v9; // r9@1
  _QWORD *v10; // r5@1
  unsigned int v11; // r10@1
  int v12; // r3@1
  int v13; // r2@1
  const char *v14; // r1@2
  leveldb::Status *v15; // r4@3
  void *v16; // r0@3
  bool v17; // zf@3
  void *v18; // r0@6
  unsigned int *v19; // r2@7
  signed int v20; // r1@9
  leveldb::TableBuilder *v21; // r10@11
  const char *v22; // r1@13
  leveldb::Status *v23; // r0@14
  __int64 v24; // r0@17
  const char *v25; // r1@19
  leveldb::Status *v26; // r0@20
  const char *v27; // r1@23
  leveldb::Status *v28; // r0@24
  leveldb::Status *v29; // r4@30
  leveldb::Iterator *v30; // r7@31
  const char *v31; // r1@31
  leveldb::Status *v32; // r0@32
  const char *v33; // r1@38
  leveldb::Status *v34; // r0@38
  leveldb::Status *v35; // r0@42
  unsigned __int64 v36; // [sp+Ch] [bp-7Ch]@11
  leveldb::Status **v37; // [sp+14h] [bp-74h]@1
  void *v38; // [sp+18h] [bp-70h]@55
  leveldb::Status *v39; // [sp+1Ch] [bp-6Ch]@38
  void *v40; // [sp+20h] [bp-68h]@37
  leveldb::Status *v41; // [sp+24h] [bp-64h]@31
  char v42; // [sp+28h] [bp-60h]@31
  char v43; // [sp+29h] [bp-5Fh]@31
  int v44; // [sp+2Ch] [bp-5Ch]@31
  int v45; // [sp+30h] [bp-58h]@31
  leveldb::Status *v46; // [sp+34h] [bp-54h]@23
  leveldb::Status *v47; // [sp+38h] [bp-50h]@19
  leveldb::Status *v48; // [sp+3Ch] [bp-4Ch]@13
  char v49; // [sp+40h] [bp-48h]@12
  char *v50; // [sp+48h] [bp-40h]@12
  _BYTE *v51; // [sp+4Ch] [bp-3Ch]@12
  char *v52; // [sp+50h] [bp-38h]@11
  _BYTE *v53; // [sp+54h] [bp-34h]@11
  void *ptr; // [sp+58h] [bp-30h]@2
  int v55; // [sp+5Ch] [bp-2Ch]@2
  int v56; // [sp+60h] [bp-28h]@1

  v37 = a1;
  v7 = 0;
  v8 = a2;
  *a1 = 0;
  *(_DWORD *)(a7 + 20) = 0;
  v9 = a4;
  *(_DWORD *)(a7 + 16) = 0;
  v10 = (_QWORD *)(a7 + 16);
  v11 = a3;
  (*(void (__fastcall **)(int))(*(_DWORD *)a6 + 12))(a6);
  v12 = *(_DWORD *)(a7 + 12);
  v13 = *(_DWORD *)(a7 + 8);
  j_leveldb::TableFileName(&v56, v8);
  if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a6 + 8))(a6) == 1 )
  {
    (*(void (__fastcall **)(void **, unsigned int, int *, int *))(*(_DWORD *)v11 + 16))(&ptr, v11, &v56, &v55);
    if ( ptr )
    {
      v15 = (leveldb::Status *)j_leveldb::Status::CopyState((leveldb::Status *)ptr, v14);
      v16 = ptr;
      v17 = ptr == 0;
      *v37 = v15;
      if ( !v17 )
        j_operator delete[](v16);
      if ( v15 )
      {
        v18 = (void *)(v56 - 12);
        if ( (int *)(v56 - 12) == &dword_28898C0 )
          return;
        v19 = (unsigned int *)(v56 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v20 = __ldrex(v19);
          while ( __strex(v20 - 1, v19) );
          goto LABEL_64;
        }
LABEL_63:
        v20 = (*v19)--;
LABEL_64:
        if ( v20 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
        return;
      }
    }
    v36 = __PAIR__((unsigned int)v10, v11);
    v21 = (leveldb::TableBuilder *)j_operator new(4u);
    j_leveldb::TableBuilder::TableBuilder(v21, v9, v55);
    (*(void (__fastcall **)(char **, int))(*(_DWORD *)a6 + 32))(&v52, a6);
    sub_21E8190((void **)(a7 + 24), v52, v53);
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)a6 + 8))(a6) == 1 )
      do
        (*(void (__fastcall **)(char **, int))(*(_DWORD *)a6 + 32))(&v50, a6);
        sub_21E8190((void **)(a7 + 28), v50, v51);
        (*(void (__fastcall **)(char *, int))(*(_DWORD *)a6 + 36))(&v49, a6);
        j_leveldb::TableBuilder::Add(v21, (const char *)&v50, (int)&v49);
        (*(void (__fastcall **)(int))(*(_DWORD *)a6 + 24))(a6);
      while ( (*(int (__fastcall **)(int))(*(_DWORD *)a6 + 8))(a6) );
    j_leveldb::TableBuilder::Finish((leveldb::TableBuilder *)&v48, v21);
    if ( !v48 )
      goto LABEL_69;
    v7 = (leveldb::Status *)j_leveldb::Status::CopyState(v48, v22);
    v23 = v48;
    v17 = v48 == 0;
    *v37 = v7;
    if ( !v17 )
      j_operator delete[]((void *)v23);
    if ( !v7 )
LABEL_69:
      LODWORD(v24) = j_leveldb::TableBuilder::FileSize(v21);
      v7 = 0;
      *(_QWORD *)HIDWORD(v36) = v24;
    j_leveldb::TableBuilder::~TableBuilder(v21);
    j_operator delete((void *)v21);
      (*(void (__fastcall **)(leveldb::Status **))(*(_DWORD *)v55 + 20))(&v47);
      if ( !v47 )
        goto LABEL_70;
      v7 = (leveldb::Status *)j_leveldb::Status::CopyState(v47, v25);
      v26 = v47;
      v17 = v47 == 0;
      *v37 = v7;
        j_operator delete[]((void *)v26);
      if ( !v7 )
LABEL_70:
        (*(void (__fastcall **)(leveldb::Status **))(*(_DWORD *)v55 + 12))(&v46);
        if ( v46 )
          v7 = (leveldb::Status *)j_leveldb::Status::CopyState(v46, v27);
          v28 = v46;
          v17 = v46 == 0;
          *v37 = v7;
          if ( !v17 )
            j_operator delete[]((void *)v28);
        else
          v7 = 0;
    v10 = (_QWORD *)HIDWORD(v36);
    v11 = v36;
    if ( v55 )
      (*(void (**)(void))(*(_DWORD *)v55 + 4))();
    v29 = 0;
    v55 = 0;
      v42 = 0;
      v43 = 1;
      v44 = 0;
      v45 = 0;
      v30 = j_leveldb::TableCache::NewIterator(a5, (int)&v42, *(_QWORD *)(a7 + 8), *(_QWORD *)HIDWORD(v36), 0);
      (*(void (__fastcall **)(leveldb::Status **, leveldb::Iterator *))(*(_DWORD *)v30 + 40))(&v41, v30);
      if ( v41 )
        v29 = (leveldb::Status *)j_leveldb::Status::CopyState(v41, v31);
        v32 = v41;
        v17 = v41 == 0;
        *v37 = v29;
        if ( !v17 )
          j_operator delete[]((void *)v32);
      if ( v30 )
        (*(void (__fastcall **)(leveldb::Iterator *))(*(_DWORD *)v30 + 4))(v30);
      v7 = v29;
  }
  (*(void (__fastcall **)(void **, int))(*(_DWORD *)a6 + 40))(&v40, a6);
  if ( v40 )
    j_operator delete[](v40);
    (*(void (__fastcall **)(leveldb::Status **, int))(*(_DWORD *)a6 + 40))(&v39, a6);
    v34 = v39;
    if ( v7 == v39 )
      v35 = v7;
    else
      if ( v7 )
        j_operator delete[]((void *)v7);
        v34 = v39;
      if ( v34 )
        v7 = (leveldb::Status *)j_leveldb::Status::CopyState(v34, v33);
        v35 = v39;
      else
        v35 = 0;
        v7 = 0;
    if ( v35 )
      j_operator delete[]((void *)v35);
  if ( !v7 && *v10 )
    v18 = (void *)(v56 - 12);
    if ( (int *)(v56 - 12) == &dword_28898C0 )
      return;
    v19 = (unsigned int *)(v56 - 4);
    if ( &pthread_create )
      __dmb();
        v20 = __ldrex(v19);
      while ( __strex(v20 - 1, v19) );
      goto LABEL_64;
    goto LABEL_63;
  (*(void (__fastcall **)(void **, unsigned int, int *))(*(_DWORD *)v11 + 32))(&v38, v11, &v56);
  if ( v38 )
    j_operator delete[](v38);
  v18 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
}


int __fastcall leveldb::VersionSet::Builder::Apply(__int64 this)
{
  __int64 v1; // kr00_8@1
  unsigned int v2; // r4@2
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  int v5; // r6@11
  int v6; // r5@11
  void *v7; // r0@11
  int i; // r6@13
  __int64 v9; // kr10_8@16
  int v10; // r10@16
  int v11; // r2@16
  int v12; // r5@16
  signed int v13; // r2@17
  __int64 v14; // kr18_8@17
  signed int v15; // r3@17
  int *v16; // r2@23
  signed int v17; // r1@26
  signed int v18; // r0@28
  int v19; // r0@32
  bool v20; // cf@36
  __int64 v21; // r0@36
  bool v22; // zf@38
  signed int v23; // r1@38
  int v24; // r11@45
  __int64 v25; // r0@45
  _QWORD *v26; // r0@53
  __int64 v27; // r0@54
  int v28; // r2@55
  unsigned int v29; // r9@55
  int v30; // r7@56
  int v31; // r11@56
  int *v32; // r8@56
  void *v33; // r0@56
  int v34; // r2@56
  int v35; // r3@56
  int v36; // r4@56
  int v37; // r5@56
  int v38; // r6@56
  int v39; // r10@56
  __int64 *v40; // r6@56
  signed int v41; // r0@56
  int v42; // r4@58
  int v43; // r5@58
  int v44; // r8@58
  int v45; // r7@59
  int v46; // r7@61
  int (*v47)(void); // r3@61
  unsigned int v48; // r0@61
  __int64 v49; // r2@63
  __int64 v50; // r0@63
  _DWORD *v51; // r0@69
  int v53; // [sp+8h] [bp-50h]@56
  int v54; // [sp+Ch] [bp-4Ch]@56
  int v55; // [sp+14h] [bp-44h]@56
  int v56; // [sp+18h] [bp-40h]@3
  int v57; // [sp+1Ch] [bp-3Ch]@58
  int v58; // [sp+20h] [bp-38h]@58
  int v59; // [sp+24h] [bp-34h]@61
  int v60; // [sp+28h] [bp-30h]@61
  int v61; // [sp+2Ch] [bp-2Ch]@61
  int v62; // [sp+30h] [bp-28h]@61

  v1 = this;
  LODWORD(this) = *(_QWORD *)(HIDWORD(this) + 48);
  if ( *(_QWORD *)(HIDWORD(this) + 48) >> 32 != (_DWORD)this )
  {
    v2 = 0;
    do
    {
      v5 = *(_DWORD *)(this + 8 * v2);
      v6 = *(_DWORD *)v1;
      sub_21E91E0((void **)&v56, *(_DWORD *)(this + 8 * v2 + 4), *(_DWORD *)(*(_DWORD *)(this + 8 * v2 + 4) - 12));
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)(v6 + 4 * v5 + 204),
        &v56);
      v7 = (void *)(v56 - 12);
      if ( (int *)(v56 - 12) != &dword_28898C0 )
      {
        v3 = (unsigned int *)(v56 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v4 = __ldrex(v3);
          while ( __strex(v4 - 1, v3) );
        }
        else
          v4 = (*v3)--;
        if ( v4 <= 0 )
          j_j_j_j__ZdlPv_9(v7);
      }
      this = *(_QWORD *)(HIDWORD(v1) + 48);
      ++v2;
    }
    while ( v2 < (HIDWORD(this) - (signed int)this) >> 3 );
  }
  for ( i = *(_DWORD *)(HIDWORD(v1) + 72); i != HIDWORD(v1) + 64; i = sub_21D4820(i) )
    v9 = *(_QWORD *)(i + 24);
    v10 = v1 + 28 * *(_DWORD *)(i + 16);
    v11 = *(_DWORD *)(v10 + 16);
    v12 = v10 + 12;
    if ( !v11 )
      goto LABEL_74;
      v12 = v11;
      v13 = 0;
      v14 = *(_QWORD *)(v12 + 16);
      v15 = 0;
      if ( (unsigned int)v9 < (unsigned int)v14 )
        v13 = 1;
      if ( HIDWORD(v9) < HIDWORD(v14) )
        v15 = 1;
      if ( HIDWORD(v9) == HIDWORD(v14) )
        v15 = v13;
      v16 = (int *)(v12 + 12);
      if ( v15 )
        v16 = (int *)(v12 + 8);
      v11 = *v16;
    while ( v11 );
    v17 = 0;
    if ( (unsigned int)v9 >= (unsigned int)v14 )
      v17 = 1;
    v18 = 0;
    if ( HIDWORD(v9) >= HIDWORD(v14) )
      v18 = 1;
    if ( HIDWORD(v9) == HIDWORD(v14) )
      v18 = v17;
    v22 = v18 == 0;
    v19 = v12;
    if ( v22 )
LABEL_74:
      if ( v12 == *(_DWORD *)(v10 + 20) )
        goto LABEL_43;
      v19 = sub_21D4858(v12);
    v21 = *(_QWORD *)(v19 + 16);
    v20 = (unsigned int)v21 >= (unsigned int)v9;
    LODWORD(v21) = 0;
    if ( v20 )
      LODWORD(v21) = 1;
    v20 = HIDWORD(v21) >= HIDWORD(v9);
    v22 = HIDWORD(v21) == HIDWORD(v9);
    v23 = 0;
      v23 = 1;
      v23 = v21;
    if ( !v23 )
LABEL_43:
      if ( v12 )
        if ( v10 + 12 == v12 )
          v24 = 1;
          v25 = *(_QWORD *)(v12 + 16);
          v24 = 0;
          v20 = (unsigned int)v9 >= (unsigned int)v25;
          LODWORD(v25) = 0;
          if ( !v20 )
            LODWORD(v25) = 1;
          if ( HIDWORD(v9) < HIDWORD(v25) )
            v24 = 1;
          if ( HIDWORD(v9) == HIDWORD(v25) )
            v24 = v25;
        v26 = j_operator new(0x18u);
        v26[2] = v9;
        sub_21D4928(v24, (int)v26, v12, v10 + 12);
        ++*(_DWORD *)(v10 + 28);
      continue;
  v27 = *(_QWORD *)(HIDWORD(v1) + 84);
  if ( HIDWORD(v27) != (_DWORD)v27 )
    v28 = 0;
    v29 = 0;
      v30 = v27 + v28;
      v54 = v28;
      v31 = v27 + v28 + 8;
      v32 = (int *)(v27 + v28 + 36);
      v53 = *(_DWORD *)(v27 + v28);
      v33 = j_operator new(0x20u);
      v34 = *(_DWORD *)(v31 + 4);
      v35 = *(_DWORD *)(v31 + 8);
      v36 = *(_DWORD *)(v31 + 12);
      v37 = *(_DWORD *)(v31 + 16);
      v38 = *(_DWORD *)(v31 + 20);
      v39 = (int)v33;
      *(_DWORD *)v33 = *(_DWORD *)v31;
      *((_DWORD *)v33 + 1) = v34;
      *((_DWORD *)v33 + 2) = v35;
      *((_DWORD *)v33 + 3) = v36;
      *((_DWORD *)v33 + 4) = v37;
      *((_DWORD *)v33 + 5) = v38;
      sub_21E8AF4((int *)v33 + 6, (int *)(v30 + 32));
      sub_21E8AF4((int *)(v39 + 28), v32);
      v55 = v39;
      *(_DWORD *)v39 = 1;
      v40 = (__int64 *)(v39 + 8);
      v41 = *(_QWORD *)(v39 + 16) >> 14;
      *(_DWORD *)(v39 + 4) = v41;
      if ( v41 <= 99 )
        *(_DWORD *)(v39 + 4) = 100;
      v42 = v1 + 28 * v53;
      j_std::_Rb_tree<unsigned long long,unsigned long long,std::_Identity<unsigned long long>,std::less<unsigned long long>,std::allocator<unsigned long long>>::erase(
        v42 + 8,
        (__int64 *)(v39 + 8));
      v43 = *(_DWORD *)(v42 + 32);
      j_std::_Rb_tree<leveldb::FileMetaData *,leveldb::FileMetaData *,std::_Identity<leveldb::FileMetaData *>,leveldb::VersionSet::Builder::BySmallestKey,std::allocator<leveldb::FileMetaData *>>::_M_get_insert_unique_pos(
        (int)&v57,
        *(_DWORD *)(v42 + 32),
        (int)&v55);
      v44 = v58;
      if ( v58 )
        v45 = 1;
        if ( v43 + 4 != v58 && !v57 )
          v46 = *(_DWORD *)(v58 + 16);
          v47 = *(int (**)(void))(**(_DWORD **)v43 + 8);
          v61 = *(_DWORD *)(v39 + 24);
          v62 = *(_DWORD *)(v61 - 12);
          v59 = *(_DWORD *)(v46 + 24);
          v60 = *(_DWORD *)(v59 - 12);
          v48 = v47();
          if ( v48 )
          {
            v45 = v48 >> 31;
          }
          else
            v50 = *(_QWORD *)(v46 + 8);
            v45 = 0;
            v49 = *v40;
            v20 = (unsigned int)*v40 >= (unsigned int)v50;
            LODWORD(v50) = 0;
            if ( !v20 )
              LODWORD(v50) = 1;
            if ( HIDWORD(v49) < HIDWORD(v50) )
              v45 = 1;
            if ( HIDWORD(v49) == HIDWORD(v50) )
              v45 = v50;
        v51 = j_operator new(0x14u);
        v51[4] = v39;
        sub_21D4928(v45, (int)v51, v44, v43 + 4);
        ++*(_DWORD *)(v43 + 20);
      ++v29;
      v27 = *(_QWORD *)(HIDWORD(v1) + 84);
      v28 = v54 + 40;
    while ( v29 < -858993459 * ((HIDWORD(v27) - (signed int)v27) >> 3) );
  return v27;
}


void __fastcall leveldb::Table::ReadMeta(int a1, int a2)
{
  leveldb::Table::ReadMeta(a1, a2);
}


void __fastcall leveldb::MemTableIterator::~MemTableIterator(leveldb::MemTableIterator *this)
{
  leveldb::MemTableIterator::~MemTableIterator(this);
}


char *__fastcall leveldb::Arena::AllocateFallback(leveldb::Arena *this, unsigned int a2)
{
  unsigned int v2; // r5@1
  leveldb::Arena *v3; // r4@1
  char *result; // r0@2
  __int64 v5; // r1@3

  v2 = a2;
  v3 = this;
  if ( a2 <= 0x400 )
  {
    result = (char *)j_leveldb::Arena::AllocateNewBlock(this, 0x1000u);
    HIDWORD(v5) = 4096 - v2;
    LODWORD(v5) = &result[v2];
    *(_QWORD *)v3 = v5;
  }
  else
    result = (char *)j_j_j__ZN7leveldb5Arena16AllocateNewBlockEj_0(this, a2);
  return result;
}


int __fastcall leveldb::Version::AddIterators(int a1, int a2, int a3)
{
  int v3; // r9@1
  int v4; // r10@1
  int v5; // r4@1
  __int64 v6; // r0@1
  unsigned int v7; // r6@2
  leveldb::Iterator *v8; // r8@3
  __int64 v9; // r0@3
  int v10; // r11@5
  void *v11; // r9@5
  char *v12; // r7@5 OVERLAPPED
  signed int v13; // r1@5
  unsigned int v14; // r2@5
  unsigned int v15; // r1@7
  unsigned int v16; // r5@7
  char *v17; // r8@14
  int v18; // r8@16 OVERLAPPED
  unsigned __int64 *v19; // r11@20
  signed int v20; // r8@20
  void **v21; // r7@20
  unsigned __int64 v22; // r0@21
  leveldb::Iterator *v23; // r0@22
  int v24; // r5@22
  int v25; // r0@22
  void *v26; // r6@22
  __int64 v27; // r0@22
  void *v28; // r5@24
  char *v29; // r7@24
  signed int v30; // r1@24
  unsigned int v31; // r2@24
  unsigned int v32; // r1@26
  unsigned int v33; // r9@26
  char *v34; // r6@33
  int v35; // r6@35
  int v37; // [sp+14h] [bp-2Ch]@1

  v3 = a2;
  v4 = a1;
  v37 = a2;
  v5 = a3;
  v6 = *(_QWORD *)(a1 + 16);
  if ( HIDWORD(v6) != (_DWORD)v6 )
  {
    v7 = 0;
    do
    {
      v8 = j_leveldb::TableCache::NewIterator(
             *(char **)(*(_DWORD *)v4 + 12),
             v3,
             *(_QWORD *)(*(_DWORD *)(v6 + 4 * v7) + 8),
             *(_QWORD *)(*(_DWORD *)(v6 + 4 * v7) + 16),
             0);
      v9 = *(_QWORD *)(v5 + 4);
      if ( (_DWORD)v9 == HIDWORD(v9) )
      {
        v10 = v3;
        v11 = *(void **)v5;
        v12 = 0;
        v13 = v9 - *(_DWORD *)v5;
        v14 = v13 >> 2;
        if ( !(v13 >> 2) )
          v14 = 1;
        v15 = v14 + (v13 >> 2);
        v16 = v15;
        if ( 0 != v15 >> 30 )
          v16 = 0x3FFFFFFF;
        if ( v15 < v14 )
        if ( v16 )
        {
          if ( v16 >= 0x40000000 )
LABEL_40:
            sub_21E57F4();
          v12 = (char *)j_operator new(4 * v16);
          LODWORD(v9) = *(_QWORD *)v5 >> 32;
          v11 = (void *)*(_QWORD *)v5;
        }
        *(_DWORD *)&v12[v9 - (_DWORD)v11] = v8;
        v17 = &v12[v9 - (_DWORD)v11];
        if ( ((signed int)v9 - (signed int)v11) >> 2 )
          j___aeabi_memmove4_0((int)v12, (int)v11);
        v18 = (int)(v17 + 4);
        if ( v11 )
          j_operator delete(v11);
        v3 = v10;
        *(_QWORD *)v5 = *(_QWORD *)&v12;
        *(_DWORD *)(v5 + 8) = &v12[4 * v16];
      }
      else
        *(_DWORD *)v9 = v8;
        *(_DWORD *)(v5 + 4) += 4;
      v6 = *(_QWORD *)(v4 + 16);
      ++v7;
    }
    while ( v7 < (HIDWORD(v6) - (signed int)v6) >> 2 );
  }
  v19 = (unsigned __int64 *)(v4 + 28);
  v20 = 1;
  v21 = &off_2725C94;
  do
    v22 = *v19;
    if ( (_DWORD)v22 != HIDWORD(v22) )
      v23 = (leveldb::Iterator *)j_operator new(0x34u);
      v24 = *(_DWORD *)v4;
      v25 = j_leveldb::Iterator::Iterator(v23);
      *(_DWORD *)v25 = v21;
      *(_DWORD *)(v25 + 20) = &off_2726110;
      *(_DWORD *)(v25 + 24) = *(_DWORD *)(v24 + 20);
      *(_DWORD *)(v25 + 28) = v19;
      *(_DWORD *)(v25 + 32) = (signed int)((*v19 >> 32) - *v19) >> 2;
      v26 = j_leveldb::NewTwoLevelIterator(v25, (int)sub_1B3EE40, *(_DWORD *)(*(_DWORD *)v4 + 12), v3);
      v27 = *(_QWORD *)(v5 + 4);
      if ( (_DWORD)v27 == HIDWORD(v27) )
        v28 = *(void **)v5;
        v29 = 0;
        v30 = v27 - *(_DWORD *)v5;
        v31 = v30 >> 2;
        if ( !(v30 >> 2) )
          v31 = 1;
        v32 = v31 + (v30 >> 2);
        v33 = v32;
        if ( 0 != v32 >> 30 )
          v33 = 0x3FFFFFFF;
        if ( v32 < v31 )
        if ( v33 )
          if ( v33 >= 0x40000000 )
            goto LABEL_40;
          v29 = (char *)j_operator new(4 * v33);
          LODWORD(v27) = *(_QWORD *)v5 >> 32;
          v28 = (void *)*(_QWORD *)v5;
        *(_DWORD *)&v29[v27 - (_DWORD)v28] = v26;
        v34 = &v29[v27 - (_DWORD)v28];
        if ( ((signed int)v27 - (signed int)v28) >> 2 )
          j___aeabi_memmove4_0((int)v29, (int)v28);
        v35 = (int)(v34 + 4);
        if ( v28 )
          j_operator delete(v28);
        LODWORD(v22) = &v29[4 * v33];
        *(_DWORD *)v5 = v29;
        *(_DWORD *)(v5 + 4) = v35;
        *(_DWORD *)(v5 + 8) = v22;
        v3 = v37;
        v21 = &off_2725C94;
        *(_DWORD *)v22 = v26;
        LODWORD(v22) = *(_DWORD *)(v5 + 4) + 4;
        *(_DWORD *)(v5 + 4) = v22;
    ++v20;
    v19 = (unsigned __int64 *)((char *)v19 + 12);
  while ( v20 < 7 );
  return v22;
}


signed int __fastcall leveldb::VersionSet::Finalize(leveldb::VersionSet *this, leveldb::Version *a2)
{
  leveldb::Version *v6; // r8@1
  signed int v7; // r6@1
  signed int v8; // r9@1
  int v10; // r0@5
  int v11; // r2@5
  __int64 v12; // r0@7
  unsigned int v13; // r4@8
  unsigned int v14; // r3@8
  int v15; // r7@9
  signed int result; // r0@10

  __asm { VMOV.F64        D8, #-1.0 }
  v6 = a2;
  v7 = 0;
  v8 = -1;
  __asm
  {
    VMOV.F64        D9, #0.25
    VMOV.F64        D11, #10.0
    VLDR            D10, =1.048576e7
  }
  do
    while ( 1 )
    {
      v10 = *(_QWORD *)((char *)v6 + 12 * v7 + 16) >> 32;
      v11 = *(_QWORD *)((char *)v6 + 12 * v7 + 16);
      if ( v7 )
        break;
      _R0 = (v10 - v11) >> 2;
      __asm
      {
        VMOV            S0, R0
        VCVT.F64.U32    D0, S0
        VMUL.F64        D0, D0, D9
        VCMPE.F64       D0, D8
        VMRS            APSR_nzcv, FPSCR
      }
      if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
        v8 = 0;
        __asm { VMOVGT.F64      D8, D0 }
      v7 = 1;
    }
    if ( v10 == v11 )
      v12 = 0LL;
    else
      v13 = 0;
      v14 = (v10 - v11) >> 2;
      do
        v15 = *(_DWORD *)(v11 + 4 * v13++);
        v12 += *(_QWORD *)(v15 + 16);
      while ( v13 < v14 );
    _R0 = j___aeabi_ul2d(v12, SHIDWORD(v12));
    __asm
      VMOV.F64        D1, D10
      VMOV            D0, R0, R1
    result = v7;
    if ( !(_NF ^ _VF) )
        __asm { VMUL.F64        D1, D1, D11 }
        --result;
      while ( result > 1 );
      VDIV.F64        D0, D0, D1
      VCMPE.F64       D0, D8
      VMRS            APSR_nzcv, FPSCR
    if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
      v8 = v7;
      __asm { VMOVGT.F64      D8, D0 }
    ++v7;
  while ( v7 != 6 );
  *((_DWORD *)v6 + 30) = v8;
  __asm { VSTR            D8, [R8,#0x70] }
  return result;
}


signed int __fastcall leveldb::VarintLength(leveldb *this, unsigned int a2, unsigned __int64 a3)
{
  unsigned int v3; // r2@1
  signed int v4; // r3@1
  signed int result; // r0@5
  unsigned int v6; // r3@6
  bool v7; // zf@6

  v3 = (unsigned int)this;
  v4 = 0;
  if ( (unsigned int)this < 0x80 )
    v4 = 1;
  if ( a2 )
    v4 = 0;
  result = 1;
  if ( !v4 )
  {
    do
    {
      v6 = (v3 >> 7) | (a2 << 25);
      ++result;
      v7 = ((v3 >> 14) | (a2 << 18) | (a2 >> 14)) == 0;
      a2 >>= 7;
      v3 = v6;
    }
    while ( !v7 );
  }
  return result;
}


int __fastcall leveldb::WritableFileEncrypted::WritableFileEncrypted(int a1, int a2, int *a3, int *a4)
{
  int v4; // r4@1
  int *v5; // r8@1
  int *v6; // r6@1
  __int64 v7; // r0@1
  int v8; // r7@1
  unsigned int *v9; // r1@2
  unsigned int v10; // r0@4
  unsigned int *v11; // r5@8
  unsigned int v12; // r0@10
  int v13; // r7@15
  unsigned int *v14; // r1@16
  unsigned int v15; // r0@18
  unsigned int *v16; // r5@22
  unsigned int v17; // r0@24
  int v18; // r7@29
  void (__fastcall *v19)(int, int *, int *); // r5@29
  unsigned int v20; // r0@29
  unsigned int v21; // r0@29
  void *v22; // r0@29
  void *v23; // r0@30
  int v24; // r1@31
  int v25; // r2@31
  unsigned int *v27; // r2@36
  signed int v28; // r1@38
  unsigned int *v29; // r2@40
  signed int v30; // r1@42
  void *ptr; // [sp+4h] [bp-14Ch]@31
  char *v32; // [sp+8h] [bp-148h]@31
  signed int v33; // [sp+Ch] [bp-144h]@31
  int v34; // [sp+10h] [bp-140h]@29
  int v35; // [sp+14h] [bp-13Ch]@29
  int v36; // [sp+18h] [bp-138h]@1
  int v37; // [sp+1Ch] [bp-134h]@1
  char v38; // [sp+20h] [bp-130h]@1
  int v39; // [sp+24h] [bp-12Ch]@1
  char v40; // [sp+28h] [bp-128h]@1
  char v41; // [sp+30h] [bp-120h]@31
  int v42; // [sp+34h] [bp-11Ch]@31
  char v43; // [sp+40h] [bp-110h]@31
  _BYTE v44[3]; // [sp+41h] [bp-10Fh]@31
  RakNet *v45; // [sp+134h] [bp-1Ch]@1

  v4 = a1;
  v5 = a3;
  v6 = a4;
  v45 = _stack_chk_guard;
  *(_DWORD *)a1 = &off_2724CE8;
  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  v37 = 1;
  v36 = 2;
  j_std::__shared_ptr<Crypto::Symmetric::Symmetric,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<Crypto::Symmetric::Symmetric>,Crypto::Symmetric::System,Crypto::Symmetric::OperationMode>(
    (int)&v38,
    (int)&v40,
    &v37,
    &v36);
  v7 = *(_QWORD *)&v38;
  *(_DWORD *)&v38 = 0;
  v39 = 0;
  *(_DWORD *)(v4 + 8) = v7;
  v8 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v4 + 12) = HIDWORD(v7);
  if ( v8 )
  {
    v9 = (unsigned int *)(v8 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
    }
    else
      v10 = (*v9)--;
    if ( v10 == 1 )
      v11 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
      }
      else
        v12 = (*v11)--;
      if ( v12 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  }
  v13 = v39;
  if ( v39 )
    v14 = (unsigned int *)(v39 + 4);
        v15 = __ldrex(v14);
      while ( __strex(v15 - 1, v14) );
      v15 = (*v14)--;
    if ( v15 == 1 )
      v16 = (unsigned int *)(v13 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 8))(v13);
          v17 = __ldrex(v16);
        while ( __strex(v17 - 1, v16) );
        v17 = (*v16)--;
      if ( v17 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 12))(v13);
  v18 = *(_DWORD *)(v4 + 8);
  v19 = *(void (__fastcall **)(int, int *, int *))(*(_DWORD *)v18 + 8);
  v20 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v18 + 20))(*(_DWORD *)(v4 + 8));
  sub_21E9040((void **)&v35, v6, 0, v20);
  v21 = (*(int (**)(void))(**(_DWORD **)(v4 + 8) + 24))();
  sub_21E9040((void **)&v34, v6, 0, v21);
  v19(v18, &v35, &v34);
  v22 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v34 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  v23 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v35 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
  j___aeabi_memclr8_0((int)&v41, 256);
  v42 = -1680885252;
  v24 = *v5;
  v25 = *(_DWORD *)(*v5 - 12);
  v43 = *(_DWORD *)(*v5 - 12);
  j___aeabi_memcpy_0((int)v44, v24, v25);
  v32 = &v41;
  v33 = 256;
  (*(void (__fastcall **)(void **))(**(_DWORD **)(v4 + 4) + 8))(&ptr);
  if ( ptr )
    j_operator delete[](ptr);
  if ( _stack_chk_guard != v45 )
    j___stack_chk_fail_0(_stack_chk_guard - v45);
  return v4;
}


RakNet *__fastcall leveldb::TableCache::FindTable(_DWORD *a1, char *a2, unsigned __int64 a3, __int64 a4, int *a5)
{
  _DWORD *v5; // r8@1
  char *v6; // r11@1
  int v7; // r0@1
  const char *v8; // r1@2
  void *v9; // r9@3
  void *v10; // r0@3
  void *v11; // r0@9
  const char *v12; // r1@11
  void *v13; // r5@12
  leveldb::Status *v14; // r0@12
  _DWORD *v15; // r0@17
  void *v16; // r0@18
  RakNet *result; // r0@19
  unsigned int *v18; // r2@21
  signed int v19; // r1@23
  unsigned int *v20; // r2@29
  signed int v21; // r1@31
  leveldb::Status *v22; // [sp+10h] [bp-58h]@11
  void *v23; // [sp+14h] [bp-54h]@6
  int v24; // [sp+18h] [bp-50h]@6
  void *ptr; // [sp+1Ch] [bp-4Ch]@2
  int v26; // [sp+20h] [bp-48h]@2
  int v27; // [sp+24h] [bp-44h]@2
  int v28; // [sp+28h] [bp-40h]@2
  char *v29; // [sp+2Ch] [bp-3Ch]@1
  int v30; // [sp+30h] [bp-38h]@1
  char v31; // [sp+38h] [bp-30h]@1
  RakNet *v32; // [sp+40h] [bp-28h]@1

  v5 = a1;
  v6 = a2;
  v32 = _stack_chk_guard;
  *a1 = 0;
  j_leveldb::EncodeFixed64((leveldb *)&v31, a2, a3);
  v29 = &v31;
  v30 = 8;
  v7 = (*(int (**)(void))(**((_DWORD **)v6 + 3) + 12))();
  *a5 = v7;
  if ( !v7 )
  {
    j_leveldb::TableFileName(&v28, (int *)v6 + 1);
    v26 = 0;
    v27 = 0;
    (*(void (__fastcall **)(void **))(**(_DWORD **)v6 + 12))(&ptr);
    if ( ptr )
    {
      v9 = j_leveldb::Status::CopyState((leveldb::Status *)ptr, v8);
      v10 = ptr;
      *v5 = v9;
      if ( v10 )
        j_operator delete[](v10);
      if ( v9 )
      {
        j_leveldb::SSTTableFileName(&v24, (int *)v6 + 1);
        (*(void (__fastcall **)(void **))(**(_DWORD **)v6 + 12))(&v23);
        if ( v23 )
        {
          j_operator delete[](v23);
        }
        else
          j_operator delete[](v9);
          *v5 = 0;
        v11 = (void *)(v24 - 12);
        if ( (int *)(v24 - 12) != &dword_28898C0 )
          v20 = (unsigned int *)(v24 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v21 = __ldrex(v20);
            while ( __strex(v21 - 1, v20) );
          }
          else
            v21 = (*v20)--;
          if ( v21 <= 0 )
            j_j_j_j__ZdlPv_9(v11);
        if ( *v5 )
          goto LABEL_39;
      }
    }
    j_leveldb::Table::Open(&v22, *((_DWORD *)v6 + 2), v27, a4, a4, &v26);
    if ( !v22 )
      goto LABEL_40;
    v13 = j_leveldb::Status::CopyState(v22, v12);
    v14 = v22;
    *v5 = v13;
    if ( v14 )
      j_operator delete[]((void *)v14);
    if ( v13 )
LABEL_39:
      if ( v27 )
        (*(void (**)(void))(*(_DWORD *)v27 + 4))();
    else
LABEL_40:
      v15 = j_operator new(8u);
      *v15 = v27;
      v15[1] = v26;
      *a5 = (*(int (__cdecl **)(_DWORD))(**((_DWORD **)v6 + 3) + 8))(*((_DWORD *)v6 + 3));
    v16 = (void *)(v28 - 12);
    if ( (int *)(v28 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v28 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
      else
        v19 = (*v18)--;
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
  }
  result = (RakNet *)(_stack_chk_guard - v32);
  if ( _stack_chk_guard != v32 )
    j___stack_chk_fail_0((int)result);
  return result;
}


void __fastcall leveldb::WriteStringToFileSync(leveldb::Status **a1, int a2, int a3, int a4)
{
  sub_1B48CD6(a1, a2, a3, a4, 1);
}


char *__fastcall leveldb::GetVarint64Ptr(leveldb *this, const char *a2, const char *a3, unsigned __int64 *a4)
{
  char *result; // r0@2
  char *v5; // r12@3
  unsigned int v6; // r3@3
  int v7; // r4@3
  int v8; // lr@3
  unsigned int v9; // r0@4
  unsigned int v10; // r5@5
  unsigned int v11; // r6@5
  bool v12; // cf@7
  int v13; // r1@12
  int v14; // r4@12
  unsigned int v15; // r3@12

  if ( this < (leveldb *)a2 )
  {
    v5 = (char *)this + 1;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    while ( 1 )
    {
      v9 = (unsigned __int8)*(v5 - 1);
      if ( !(v9 & 0x80) )
        break;
      v10 = v9 & 0x7F;
      v11 = v10 >> (32 - v6);
      if ( ((v6 - 32) & 0x80000000) == 0 )
        v11 = v10 << (v6 - 32);
      v12 = v5 >= a2;
      if ( v5 < a2 )
      {
        v8 |= v11;
        v7 |= v10 << v6;
        ++v5;
        v6 += 7;
        v12 = v6 >= 0x40;
      }
      result = 0;
      if ( v12 )
        return result;
    }
    v13 = (v9 << v6) | v7;
    v14 = v6 - 32;
    v15 = v9 >> (32 - v6);
    if ( v14 >= 0 )
      v15 = v9 << v14;
    *(_DWORD *)a3 = v13;
    *((_DWORD *)a3 + 1) = v15 | v8;
    result = v5;
  }
  else
    result = 0;
  return result;
}


void __fastcall leveldb::WritableFileEncrypted::Append(int a1, int a2, unsigned __int64 *a3)
{
  leveldb::WritableFileEncrypted::Append(a1, a2, a3);
}


void *__fastcall leveldb::TableBuilder::status(_DWORD *a1, const char *a2)
{
  _DWORD *v2; // r4@1
  leveldb::Status *v3; // r0@1
  void *result; // r0@2

  v2 = a1;
  v3 = *(leveldb::Status **)(*(_DWORD *)a2 + 2160);
  if ( v3 )
  {
    result = j_leveldb::Status::CopyState(v3, a2);
    *v2 = result;
  }
  else
    result = 0;
    *v2 = 0;
  return result;
}


leveldb::VersionEdit *__fastcall leveldb::VersionSet::WriteSnapshot(leveldb::VersionSet *this, leveldb::log::Writer *a2, int a3)
{
  leveldb::log::Writer *v3; // r10@1
  const char *v4; // r0@1
  unsigned int v5; // r5@1
  int v6; // r0@1
  void *v7; // r0@1
  int v8; // r11@2
  unsigned int *v9; // r2@3
  signed int v10; // r1@5
  unsigned int *v11; // r2@7
  signed int v12; // r1@9
  char *v13; // r1@19
  _BYTE *v14; // r2@19
  int v15; // r0@20
  char *v16; // r1@21
  char *v17; // r0@23
  char *v18; // r0@24
  int v19; // r9@26
  int v20; // r7@27
  int v21; // r0@27
  int v22; // r7@27
  int v23; // t1@27
  unsigned int v24; // r5@28
  void *v25; // r0@31
  unsigned int *v27; // r2@33
  signed int v28; // r1@35
  unsigned int *v29; // r2@37
  signed int v30; // r1@39
  leveldb::VersionSet *v31; // [sp+10h] [bp-A8h]@1
  int v32; // [sp+14h] [bp-A4h]@1
  int v33; // [sp+1Ch] [bp-9Ch]@31
  int v34; // [sp+20h] [bp-98h]@31
  char *v35; // [sp+24h] [bp-94h]@7
  void *v36; // [sp+28h] [bp-90h]@1
  char v37; // [sp+50h] [bp-68h]@1
  int v38; // [sp+58h] [bp-60h]@1
  _QWORD *v39; // [sp+5Ch] [bp-5Ch]@1
  _QWORD *v40; // [sp+60h] [bp-58h]@1
  int v41; // [sp+68h] [bp-50h]@1
  int v42; // [sp+6Ch] [bp-4Ch]@1
  int *v43; // [sp+70h] [bp-48h]@1
  int *v44; // [sp+74h] [bp-44h]@1
  int v45; // [sp+78h] [bp-40h]@1
  int v46; // [sp+7Ch] [bp-3Ch]@1
  int v47; // [sp+80h] [bp-38h]@1
  int v48; // [sp+84h] [bp-34h]@1
  __int64 v49; // [sp+88h] [bp-30h]@1

  v31 = this;
  v3 = a2;
  v32 = a3;
  v36 = &unk_28898CC;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v45 = 0;
  v41 = 0;
  v42 = 0;
  v43 = &v41;
  v44 = &v41;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  j_leveldb::VersionEdit::Clear((leveldb::VersionEdit *)&v36);
  v4 = (const char *)(*(int (**)(void))(**((_DWORD **)v3 + 5) + 12))();
  v5 = (unsigned int)v4;
  v6 = j_strlen_0(v4);
  v37 = 1;
  sub_21E91E0((void **)&v49, v5, v6);
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&v36,
    (int *)&v49);
  v7 = (void *)(v49 - 12);
  if ( (int *)(v49 - 12) != &dword_28898C0 )
  {
    v27 = (unsigned int *)(v49 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
    }
    else
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = 0;
  do
    v13 = (char *)*((_DWORD *)v3 + v8 + 51);
    v14 = (_BYTE *)*((_DWORD *)v13 - 3);
    if ( v14 )
      v35 = (char *)&unk_28898CC;
      sub_21E8190((void **)&v35, v13, v14);
      LODWORD(v49) = v8;
      sub_21E8AF4((int *)&v49 + 1, (int *)&v35);
      v15 = (int)v39;
      if ( v39 == v40 )
      {
        j_std::vector<std::pair<int,leveldb::InternalKey>,std::allocator<std::pair<int,leveldb::InternalKey>>>::_M_emplace_back_aux<std::pair<int,leveldb::InternalKey>>(
          (unsigned __int64 *)&v38,
          (int)&v49);
        v16 = (char *)HIDWORD(v49);
      }
      else
        *v39 = v49;
        HIDWORD(v49) = &unk_28898CC;
        v16 = (char *)&unk_28898CC;
        v39 = (_QWORD *)(v15 + 8);
      v17 = v16 - 12;
      if ( (int *)(v16 - 12) != &dword_28898C0 )
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
          j_j_j_j__ZdlPv_9(v17);
      v18 = v35 - 12;
      if ( (int *)(v35 - 12) != &dword_28898C0 )
        v11 = (unsigned int *)(v35 - 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v18);
    ++v8;
  while ( v8 != 7 );
  v19 = 0;
    v20 = *((_DWORD *)v3 + 50) + 12 * v19;
    v23 = *(_DWORD *)(v20 + 16);
    v22 = v20 + 16;
    v21 = v23;
    if ( *(_DWORD *)(v22 + 4) != v23 )
      v24 = 0;
        j_leveldb::VersionEdit::AddFile(
          (leveldb::VersionEdit *)&v36,
          v19,
          *(_QWORD *)(*(_DWORD *)(v21 + 4 * v24) + 8),
          *(_QWORD *)(*(_DWORD *)(v21 + 4 * v24) + 16),
          (const leveldb::InternalKey *)(*(_DWORD *)(v21 + 4 * v24) + 24),
          (const leveldb::InternalKey *)(*(_DWORD *)(v21 + 4 * v24) + 28));
        v21 = *(_DWORD *)v22;
        ++v24;
      while ( v24 < (*(_DWORD *)(v22 + 4) - *(_DWORD *)v22) >> 2 );
    ++v19;
  while ( v19 != 7 );
  LODWORD(v49) = &unk_28898CC;
  j_leveldb::VersionEdit::EncodeTo((int)&v36, (const void **)&v49);
  v33 = v49;
  v34 = *(_DWORD *)(v49 - 12);
  j_leveldb::log::Writer::AddRecord(v31, v32, (unsigned __int64 *)&v33);
  v25 = (void *)(v49 - 12);
    v29 = (unsigned int *)(v49 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v25);
  return j_leveldb::VersionEdit::~VersionEdit((leveldb::VersionEdit *)&v36);
}


void __fastcall leveldb::DecompressAllocator::~DecompressAllocator(leveldb::DecompressAllocator *this)
{
  leveldb::DecompressAllocator::~DecompressAllocator(this);
}


int __fastcall leveldb::Block::Iter::~Iter(int a1)
{
  int v1; // r4@1
  void *v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  unsigned int *v6; // r12@5
  signed int v7; // r1@7

  v1 = a1;
  *(_DWORD *)a1 = &off_272614C;
  v2 = *(void **)(a1 + 56);
  if ( v2 )
    j_operator delete[](v2);
  v3 = *(_DWORD *)(v1 + 44);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v3 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  j_leveldb::Iterator::~Iterator((leveldb::Iterator *)v1);
  return v1;
}


int __fastcall leveldb::VersionSet::AppendVersion(leveldb::VersionSet *this, leveldb::Version *a2)
{
  leveldb::VersionSet *v2; // r5@1
  leveldb::Version *v3; // r4@1
  int v4; // r0@1
  int v5; // r1@2
  leveldb::Version *v6; // r0@3
  int v7; // r0@4
  int result; // r0@4

  v2 = this;
  v3 = a2;
  v4 = *((_DWORD *)this + 50);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 12) - 1;
    *(_DWORD *)(v4 + 12) = v5;
    if ( !v5 )
    {
      v6 = j_leveldb::Version::~Version((leveldb::Version *)v4);
      j_operator delete((void *)v6);
    }
  }
  *((_DWORD *)v2 + 50) = v3;
  ++*((_DWORD *)v3 + 3);
  v7 = *((_DWORD *)v2 + 20);
  *((_DWORD *)v3 + 2) = v7;
  *((_DWORD *)v3 + 1) = (char *)v2 + 72;
  *(_DWORD *)(v7 + 4) = v3;
  result = *((_DWORD *)v3 + 1);
  *(_DWORD *)(result + 8) = v3;
  return result;
}


_DWORD *__fastcall leveldb::MemTableIterator::status(_DWORD *result)
{
  *result = 0;
  return result;
}


void __fastcall leveldb::TableBuilder::Add(leveldb::TableBuilder *a1, const char *a2, int a3)
{
  leveldb::TableBuilder::Add(a1, a2, a3);
}


void __fastcall leveldb::RepairDB(leveldb::Status **a1, int *a2, int a3)
{
  leveldb::RepairDB(a1, a2, a3);
}


int __fastcall leveldb::InternalFilterPolicy::CreateFilter(int a1, unsigned __int64 *a2, int a3)
{
  int v3; // r12@2
  unsigned __int64 *v4; // lr@2
  unsigned __int64 v5; // r4@3

  if ( a3 > 0 )
  {
    v3 = a3;
    v4 = a2;
    do
    {
      v5 = *v4;
      --v3;
      HIDWORD(v5) = (*v4 >> 32) - 8;
      *v4 = v5;
      ++v4;
    }
    while ( v3 );
  }
  return (*(int (**)(void))(**(_DWORD **)(a1 + 4) + 12))();
}


char *__fastcall leveldb::VersionSet::LevelSummary(int a1, char *a2)
{
  int v2; // r2@1
  char *v3; // r11@1

  v2 = *(_DWORD *)(a1 + 200);
  v3 = a2;
  j_snprintf(
    a2,
    0x64u,
    "files[ %d %d %d %d %d %d %d ]",
    (signed int)((*(_QWORD *)(v2 + 16) >> 32) - *(_QWORD *)(v2 + 16)) >> 2,
    (signed int)((*(_QWORD *)(v2 + 28) >> 32) - *(_QWORD *)(v2 + 28)) >> 2,
    (signed int)((*(_QWORD *)(v2 + 40) >> 32) - *(_QWORD *)(v2 + 40)) >> 2,
    (signed int)((*(_QWORD *)(v2 + 52) >> 32) - *(_QWORD *)(v2 + 52)) >> 2,
    (signed int)((*(_QWORD *)(v2 + 64) >> 32) - *(_QWORD *)(v2 + 64)) >> 2,
    (signed int)((*(_QWORD *)(v2 + 76) >> 32) - *(_QWORD *)(v2 + 76)) >> 2,
    (signed int)((*(_QWORD *)(v2 + 88) >> 32) - *(_QWORD *)(v2 + 88)) >> 2);
  return v3;
}


leveldb::VersionSet::Builder *__fastcall leveldb::VersionSet::Builder::Builder(leveldb::VersionSet::Builder *this, int r1_0, __int64 a2)
{
  leveldb::VersionSet::Builder *v3; // r4@1
  char *v4; // r0@1
  int v5; // r6@1
  _DWORD *v6; // r0@1
  _DWORD *v7; // r0@1
  _DWORD *v8; // r0@1
  _DWORD *v9; // r0@1
  _DWORD *v10; // r0@1
  _DWORD *v11; // r0@1
  _DWORD *v12; // r0@1

  v3 = this;
  *(_QWORD *)this = *(__int64 *)((char *)&a2 - 4);
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 3) = 0;
  v4 = (char *)this + 12;
  *((_DWORD *)v3 + 5) = v4;
  *((_DWORD *)v3 + 6) = v4;
  *((_DWORD *)v3 + 11) = 0;
  *((_DWORD *)v3 + 12) = 0;
  *((_DWORD *)v3 + 13) = 0;
  *((_DWORD *)v3 + 14) = 0;
  *((_DWORD *)v3 + 10) = 0;
  *((_DWORD *)v3 + 12) = (char *)v3 + 40;
  *((_DWORD *)v3 + 13) = (char *)v3 + 40;
  *((_DWORD *)v3 + 18) = 0;
  *((_DWORD *)v3 + 19) = 0;
  *((_DWORD *)v3 + 20) = 0;
  *((_DWORD *)v3 + 21) = 0;
  *((_DWORD *)v3 + 17) = 0;
  *((_DWORD *)v3 + 19) = (char *)v3 + 68;
  *((_DWORD *)v3 + 20) = (char *)v3 + 68;
  *((_DWORD *)v3 + 25) = 0;
  *((_DWORD *)v3 + 26) = 0;
  *((_DWORD *)v3 + 27) = 0;
  *((_DWORD *)v3 + 28) = 0;
  *((_DWORD *)v3 + 24) = 0;
  *((_DWORD *)v3 + 26) = (char *)v3 + 96;
  *((_DWORD *)v3 + 27) = (char *)v3 + 96;
  *((_DWORD *)v3 + 32) = 0;
  *((_DWORD *)v3 + 33) = 0;
  *((_DWORD *)v3 + 34) = 0;
  *((_DWORD *)v3 + 35) = 0;
  *((_DWORD *)v3 + 31) = 0;
  *((_DWORD *)v3 + 33) = (char *)v3 + 124;
  *((_DWORD *)v3 + 34) = (char *)v3 + 124;
  *((_DWORD *)v3 + 39) = 0;
  *((_DWORD *)v3 + 40) = 0;
  *((_DWORD *)v3 + 41) = 0;
  *((_DWORD *)v3 + 42) = 0;
  *((_DWORD *)v3 + 38) = 0;
  *((_DWORD *)v3 + 40) = (char *)v3 + 152;
  *((_DWORD *)v3 + 41) = (char *)v3 + 152;
  *((_DWORD *)v3 + 46) = 0;
  *((_DWORD *)v3 + 47) = 0;
  *((_DWORD *)v3 + 48) = 0;
  *((_DWORD *)v3 + 49) = 0;
  *((_DWORD *)v3 + 45) = 0;
  *((_DWORD *)v3 + 47) = (char *)v3 + 180;
  *((_DWORD *)v3 + 48) = (char *)v3 + 180;
  ++*(_DWORD *)(*((_DWORD *)v3 + 1) + 12);
  v5 = *(_DWORD *)v3 + 16;
  v6 = j_operator new(0x18u);
  *v6 = v5;
  v6[2] = 0;
  v6[3] = 0;
  v6[4] = 0;
  v6[5] = 0;
  v6[1] = 0;
  v6[3] = v6 + 1;
  v6[4] = v6 + 1;
  *((_DWORD *)v3 + 8) = v6;
  v7 = j_operator new(0x18u);
  *v7 = v5;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[1] = 0;
  v7[3] = v7 + 1;
  v7[4] = v7 + 1;
  *((_DWORD *)v3 + 15) = v7;
  v8 = j_operator new(0x18u);
  *v8 = v5;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[1] = 0;
  v8[3] = v8 + 1;
  v8[4] = v8 + 1;
  *((_DWORD *)v3 + 22) = v8;
  v9 = j_operator new(0x18u);
  *v9 = v5;
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 0;
  v9[5] = 0;
  v9[1] = 0;
  v9[3] = v9 + 1;
  v9[4] = v9 + 1;
  *((_DWORD *)v3 + 29) = v9;
  v10 = j_operator new(0x18u);
  *v10 = v5;
  v10[2] = 0;
  v10[3] = 0;
  v10[4] = 0;
  v10[5] = 0;
  v10[1] = 0;
  v10[3] = v10 + 1;
  v10[4] = v10 + 1;
  *((_DWORD *)v3 + 36) = v10;
  v11 = j_operator new(0x18u);
  *v11 = v5;
  v11[2] = 0;
  v11[3] = 0;
  v11[4] = 0;
  v11[5] = 0;
  v11[1] = 0;
  v11[3] = v11 + 1;
  v11[4] = v11 + 1;
  *((_DWORD *)v3 + 43) = v11;
  v12 = j_operator new(0x18u);
  *v12 = v5;
  v12[2] = 0;
  v12[3] = 0;
  v12[4] = 0;
  v12[5] = 0;
  v12[1] = 0;
  v12[3] = v12 + 1;
  v12[4] = v12 + 1;
  *((_DWORD *)v3 + 50) = v12;
  return v3;
}


unsigned int __fastcall leveldb::VersionSet::ApproximateOffsetOf(leveldb::VersionSet *this, leveldb::Version *a2, const leveldb::InternalKey *a3)
{
  char *v3; // r7@1
  int *v4; // r10@1
  const leveldb::InternalKey *v5; // r9@1
  unsigned int v6; // r8@1
  int v7; // r2@1
  int v8; // r11@2
  int v9; // r1@2
  int v10; // r11@2
  int v11; // t1@2
  _DWORD *v12; // r5@2
  unsigned int v13; // r6@4
  int (__fastcall *v14)(char *, int ***, int *); // r3@5
  int v15; // r0@5
  int v16; // r2@5
  int (__fastcall *v17)(char *, int ***, int *); // r3@6
  char *v18; // r0@7
  leveldb::Iterator *v19; // r10@7
  int v20; // ST24_4@8
  __int64 v21; // r0@8
  unsigned int v22; // kr00_4@8
  unsigned __int64 v23; // kr20_8@12
  int (__fastcall *v24)(char *, int ***, int *); // r3@15
  int v25; // r0@15
  int v26; // r1@15
  int (__fastcall *v27)(char *, int ***, int *); // r3@16
  char *v28; // r0@17
  leveldb::Iterator *v29; // r5@17
  int v30; // ST24_4@18
  __int64 v31; // r0@18
  unsigned int v32; // kr10_4@18
  unsigned int v33; // r0@22
  leveldb::Version *v35; // [sp+Ch] [bp-5Ch]@1
  int v36; // [sp+10h] [bp-58h]@3
  leveldb::VersionSet *v37; // [sp+14h] [bp-54h]@1
  unsigned int v38; // [sp+1Ch] [bp-4Ch]@1
  char v39; // [sp+28h] [bp-40h]@7
  char v40; // [sp+29h] [bp-3Fh]@7
  int v41; // [sp+2Ch] [bp-3Ch]@7
  int v42; // [sp+30h] [bp-38h]@7
  int v43; // [sp+34h] [bp-34h]@1
  int v44; // [sp+38h] [bp-30h]@5
  int **v45; // [sp+3Ch] [bp-2Ch]@5
  int v46; // [sp+40h] [bp-28h]@5

  v3 = (char *)this + 16;
  v4 = &v43;
  v5 = a3;
  v37 = this;
  v6 = 0;
  v7 = 0;
  v35 = a2;
  v38 = 0;
  do
  {
    v8 = (int)v35 + 12 * v7;
    v11 = *(_DWORD *)(v8 + 16);
    v10 = v8 + 16;
    v9 = v11;
    v12 = (_DWORD *)(v10 + 4);
    if ( *(_DWORD *)(v10 + 4) == v11 )
    {
      v36 = v7;
    }
    else
      v13 = 0;
      if ( v7 < 1 )
      {
        do
        {
          v24 = *(int (__fastcall **)(char *, int ***, int *))(*(_DWORD *)v3 + 8);
          v45 = *(int ***)(*(_DWORD *)(v9 + 4 * v13) + 28);
          v46 = (int)*(v45 - 3);
          v43 = *(_DWORD *)v5;
          v44 = *(_DWORD *)(v43 - 12);
          v25 = v24(v3, &v45, v4);
          v26 = *(_DWORD *)(*(_DWORD *)v10 + 4 * v13);
          if ( v25 <= 0 )
          {
            v33 = (__PAIR__(v38, v6) + *(_QWORD *)(v26 + 16)) >> 32;
            v6 += *(_DWORD *)(v26 + 16);
            v38 = v33;
          }
          else
            v27 = *(int (__fastcall **)(char *, int ***, int *))(*(_DWORD *)v3 + 8);
            v45 = *(int ***)(v26 + 24);
            v46 = (int)*(v45 - 3);
            v43 = *(_DWORD *)v5;
            v44 = *(_DWORD *)(v43 - 12);
            if ( v27(v3, &v45, v4) <= 0 )
            {
              v28 = (char *)*((_DWORD *)v37 + 3);
              v39 = 0;
              v40 = 1;
              v41 = 0;
              v42 = 0;
              v29 = j_leveldb::TableCache::NewIterator(
                      v28,
                      (int)&v39,
                      *(_QWORD *)(*(_DWORD *)(*(_DWORD *)v10 + 4 * v13) + 8),
                      *(_QWORD *)(*(_DWORD *)(*(_DWORD *)v10 + 4 * v13) + 16),
                      &v45);
              if ( v45 )
              {
                v30 = *(_DWORD *)(*(_DWORD *)v5 - 12);
                LODWORD(v31) = j_leveldb::Table::ApproximateOffsetOf(v45);
                v32 = v6 + v31;
                LODWORD(v31) = (__PAIR__(v38, v6) + v31) >> 32;
                v6 = v32;
                v38 = v31;
              }
              if ( v29 )
                (*(void (__fastcall **)(leveldb::Iterator *))(*(_DWORD *)v29 + 4))(v29);
              v12 = (_DWORD *)(v10 + 4);
            }
          v9 = *(_DWORD *)v10;
          ++v13;
        }
        while ( v13 < (*v12 - *(_DWORD *)v10) >> 2 );
      }
      else
          v14 = *(int (__fastcall **)(char *, int ***, int *))(*(_DWORD *)v3 + 8);
          v15 = v14(v3, &v45, v4);
          v16 = *(_DWORD *)(*(_DWORD *)v10 + 4 * v13);
          if ( v15 < 1 )
            v23 = __PAIR__(v38, v6) + *(_QWORD *)(v16 + 16);
            v38 = v23 >> 32;
            v6 = v23;
            v17 = *(int (__fastcall **)(char *, int ***, int *))(*(_DWORD *)v3 + 8);
            v45 = *(int ***)(v16 + 24);
            if ( v17(v3, &v45, v4) > 0 )
              break;
            v18 = (char *)*((_DWORD *)v37 + 3);
            v39 = 0;
            v40 = 1;
            v41 = 0;
            v42 = 0;
            v19 = j_leveldb::TableCache::NewIterator(
                    v18,
                    (int)&v39,
                    *(_QWORD *)(*(_DWORD *)(*(_DWORD *)v10 + 4 * v13) + 8),
                    *(_QWORD *)(*(_DWORD *)(*(_DWORD *)v10 + 4 * v13) + 16),
                    &v45);
            if ( v45 )
              v20 = *(_DWORD *)(*(_DWORD *)v5 - 12);
              LODWORD(v21) = j_leveldb::Table::ApproximateOffsetOf(v45);
              v22 = v6 + v21;
              LODWORD(v21) = (__PAIR__(v38, v6) + v21) >> 32;
              v6 = v22;
              v38 = v21;
            if ( v19 )
              (*(void (__fastcall **)(leveldb::Iterator *))(*(_DWORD *)v19 + 4))(v19);
            v9 = *(_DWORD *)v10;
            v4 = &v43;
            v12 = (_DWORD *)(v10 + 4);
        while ( v13 < (*v12 - v9) >> 2 );
    v7 = v36 + 1;
  }
  while ( v36 != 6 );
  return v6;
}


int __fastcall leveldb::PosixLogger::~PosixLogger(leveldb::PosixLogger *this)
{
  leveldb::Logger *v1; // r4@1

  v1 = this;
  *(_DWORD *)this = &off_27260C0;
  j_fclose(*((FILE **)this + 1));
  return j_j_j__ZN7leveldb6LoggerD2Ev_0(v1);
}


int __fastcall leveldb::LookupKey::LookupKey(int a1, int a2, unsigned int a3, int a4)
{
  int *v4; // r6@1
  int v5; // r4@1
  int v6; // r7@1
  int v7; // r8@1
  unsigned int v8; // r9@1
  leveldb *v9; // r0@2
  char *v10; // r0@4
  char *v11; // r5@4
  leveldb *v12; // r5@4
  unsigned __int64 v13; // r2@4
  char *v14; // r1@4

  v4 = (int *)a2;
  v5 = a1;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = a4;
  v8 = a3;
  if ( (unsigned int)(v6 + 13) > 0xC8 )
    v9 = (leveldb *)j_operator new[](v6 + 13);
  else
    v9 = (leveldb *)(a1 + 12);
  *(_DWORD *)v5 = v9;
  v10 = j_leveldb::EncodeVarint32(v9, (char *)(v6 + 8), a3);
  v11 = v10;
  *(_DWORD *)(v5 + 4) = v10;
  j___aeabi_memcpy_0((int)v10, *v4, v6);
  v12 = (leveldb *)&v11[v6];
  LODWORD(v13) = (v8 << 8) | 1;
  HIDWORD(v13) = (v7 << 8) | (v8 >> 24);
  j_leveldb::EncodeFixed64(v12, v14, v13);
  *(_DWORD *)(v5 + 8) = (char *)v12 + 8;
  return v5;
}
