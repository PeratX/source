

void __fastcall StructureStart::~StructureStart(StructureStart *this)
{
  StructureStart::~StructureStart(this);
}


signed int __fastcall StructureStart::isValid(StructureStart *this)
{
  return 1;
}


void __fastcall StructureStart::~StructureStart(StructureStart *this)
{
  StructureStart *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED

  v1 = this;
  *(_DWORD *)this = &off_271946C;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 36);
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
    v2 = (char *)*((_DWORD *)v1 + 9);
  }
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_6((void *)v1);
}


int *__fastcall StructureStart::postProcessMobsAt(StructureStart *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  StructureStart *v4; // r7@1
  int *v5; // r4@1
  int v6; // t1@2
  int *result; // r0@3

  v4 = this;
  v5 = (int *)*((_DWORD *)this + 9);
  while ( 1 )
  {
    result = (int *)*((_DWORD *)v4 + 10);
    if ( v5 == result )
      break;
    v6 = *v5;
    ++v5;
    (*(void (**)(void))(*(_DWORD *)v6 + 24))();
  }
  return result;
}


int __fastcall StructureStart::moveToLevel(StructureStart *this, Random *a2, int a3)
{
  StructureStart *v3; // r4@1
  int v4; // r3@1
  int v5; // r0@1
  int v6; // r6@1
  unsigned int v7; // r1@3
  __int64 v8; // r0@6
  unsigned int v9; // r6@7

  v3 = this;
  v4 = *((_DWORD *)this + 5);
  v5 = *((_DWORD *)this + 2);
  v6 = v4 + 2 - v5;
  if ( v6 < a3 )
  {
    if ( v6 == a3 )
    {
      v7 = 0;
    }
    else
      v7 = j_Random::_genRandInt32(a2) % (a3 - v6);
      v5 = *((_DWORD *)v3 + 2);
      v4 = *((_DWORD *)v3 + 5);
    v6 += v7;
  }
  *((_DWORD *)v3 + 2) = v5 + v6 - v4;
  *((_DWORD *)v3 + 5) = v6;
  v8 = *(_QWORD *)((char *)v3 + 36);
  if ( HIDWORD(v8) != (_DWORD)v8 )
    v9 = 0;
    do
      (*(void (**)(void))(**(_DWORD **)(v8 + 4 * v9) + 8))();
      v8 = *(_QWORD *)((char *)v3 + 36);
      ++v9;
    while ( v9 < (HIDWORD(v8) - (signed int)v8) >> 2 );
  return v8;
}


int __fastcall StructureStart::moveInsideHeights(StructureStart *this, Random *a2, int a3, int a4)
{
  StructureStart *v4; // r4@1
  int v5; // r5@1
  int v6; // r2@1
  int v7; // r0@1
  unsigned int v8; // r6@1
  unsigned int v9; // r1@2
  __int64 v10; // r0@3
  unsigned int v11; // r6@4

  v4 = this;
  v5 = a3;
  v6 = *((_DWORD *)this + 5);
  v7 = *((_DWORD *)this + 2);
  v8 = a4 - v5 - v6 + v7;
  if ( (signed int)v8 >= 2 )
  {
    v9 = j_Random::_genRandInt32(a2) % v8;
    v7 = *((_DWORD *)v4 + 2);
    v5 += v9;
    v6 = *((_DWORD *)v4 + 5);
  }
  *((_DWORD *)v4 + 2) = v5;
  *((_DWORD *)v4 + 5) = v6 + v5 - v7;
  v10 = *(_QWORD *)((char *)v4 + 36);
  if ( HIDWORD(v10) != (_DWORD)v10 )
    v11 = 0;
    do
    {
      (*(void (**)(void))(**(_DWORD **)(v10 + 4 * v11) + 8))();
      v10 = *(_QWORD *)((char *)v4 + 36);
      ++v11;
    }
    while ( v11 < (HIDWORD(v10) - (signed int)v10) >> 2 );
  return v10;
}


int __fastcall StructureStart::calculateBoundingBox(int result)
{
  signed __int64 v1; // r8@1
  int *v2; // r12@1
  int *v3; // lr@1
  signed int v4; // r2@2
  signed int v5; // r4@2
  signed int v6; // r5@2
  signed int v7; // r6@2
  int v8; // t1@3
  int v9; // r7@3
  signed int v10; // r1@3
  signed int v11; // r3@3
  signed int v12; // r10@3
  signed int v13; // r1@9
  signed int v14; // r3@9
  int v15; // r7@9

  v1 = -9223372030412324865LL;
  *(_DWORD *)(result + 4) = 0x7FFFFFFF;
  *(_DWORD *)(result + 8) = 0x7FFFFFFF;
  *(_QWORD *)(result + 12) = -9223372030412324865LL;
  *(_DWORD *)(result + 20) = -2147483647;
  *(_DWORD *)(result + 24) = -2147483647;
  v2 = (int *)(*(_QWORD *)(result + 36) >> 32);
  v3 = (int *)*(_QWORD *)(result + 36);
  if ( v3 != v2 )
  {
    v4 = -2147483647;
    v5 = -2147483647;
    v6 = 0x7FFFFFFF;
    v7 = 0x7FFFFFFF;
    do
    {
      v8 = *v3;
      ++v3;
      v9 = v8 + 16;
      v10 = *(_DWORD *)(v8 + 4);
      v11 = *(_DWORD *)(v8 + 8);
      v12 = *(_DWORD *)(v8 + 12);
      if ( v10 < v7 )
        v7 = v10;
      *(_DWORD *)(result + 4) = v7;
      if ( v11 < v6 )
        v6 = v11;
      *(_DWORD *)(result + 8) = v6;
      if ( v12 < (signed int)v1 )
        LODWORD(v1) = v12;
      *(_DWORD *)(result + 12) = v1;
      v13 = *(_DWORD *)v9;
      v14 = *(_DWORD *)(v9 + 4);
      v15 = *(_DWORD *)(v9 + 8);
      if ( v5 < v13 )
        v5 = v13;
      *(_DWORD *)(result + 16) = v5;
      if ( v4 < v14 )
        v4 = v14;
      *(_DWORD *)(result + 20) = v4;
      if ( SHIDWORD(v1) < v15 )
        HIDWORD(v1) = v15;
      *(_DWORD *)(result + 24) = HIDWORD(v1);
    }
    while ( v2 != v3 );
  }
  return result;
}


int __fastcall StructureStart::postProcess(StructureStart *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  StructureStart *v4; // r7@1
  int *v5; // r1@1
  int *v6; // r11@1
  const BoundingBox *v7; // r4@1
  int v8; // r0@3
  char *v9; // r1@11
  int v10; // r0@11
  signed int v11; // r2@12
  int v12; // r10@13
  int *v13; // r5@13
  int v14; // r1@14
  int v15; // r0@14
  _DWORD *v16; // r5@18
  int v17; // r0@18
  char v19; // [sp+0h] [bp-28h]@1

  v4 = this;
  v5 = (int *)(*(_QWORD *)((char *)this + 36) >> 32);
  v6 = (int *)*(_QWORD *)((char *)this + 36);
  v7 = a4;
  v19 = 0;
  if ( v6 != v5 )
  {
    v19 = 0;
    do
    {
      v8 = *v6;
      if ( *v6
        && *(_DWORD *)(v8 + 16) >= *(_DWORD *)v7
        && *(_DWORD *)(v8 + 4) <= *((_DWORD *)v7 + 3)
        && *(_DWORD *)(v8 + 24) >= *((_DWORD *)v7 + 2)
        && *(_DWORD *)(v8 + 12) <= *((_DWORD *)v7 + 5)
        && *(_DWORD *)(v8 + 20) >= *((_DWORD *)v7 + 1)
        && *(_DWORD *)(v8 + 8) <= *((_DWORD *)v7 + 4) )
      {
        if ( (*(int (**)(void))(*(_DWORD *)v8 + 20))() != 1 )
        {
          v9 = (char *)*((_DWORD *)v4 + 10);
          v10 = (int)(v6 + 1);
          if ( (char *)(v6 + 1) != v9 )
          {
            v11 = (signed int)&v9[-v10];
            v10 = *((_DWORD *)v4 + 10);
            if ( v11 >= 1 )
            {
              v12 = (v11 >> 2) + 1;
              v13 = v6;
              do
              {
                v14 = v13[1];
                v13[1] = 0;
                v15 = *v13;
                *v13 = v14;
                if ( v15 )
                  (*(void (**)(void))(*(_DWORD *)v15 + 4))();
                --v12;
                ++v13;
              }
              while ( v12 > 1 );
              v10 = *((_DWORD *)v4 + 10);
            }
          }
          v16 = (_DWORD *)(v10 - 4);
          *((_DWORD *)v4 + 10) = v10 - 4;
          v17 = *(_DWORD *)(v10 - 4);
          if ( v17 )
            (*(void (**)(void))(*(_DWORD *)v17 + 4))();
          *v16 = 0;
          v5 = (int *)*((_DWORD *)v4 + 10);
          continue;
        }
        v5 = (int *)*((_DWORD *)v4 + 10);
        v19 = 1;
      }
      ++v6;
    }
    while ( v6 != v5 );
  }
  return v19 & 1;
}


StructureStart *__fastcall StructureStart::~StructureStart(StructureStart *this)
{
  StructureStart *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED

  v1 = this;
  *(_DWORD *)this = &off_271946C;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 36);
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
    v2 = (char *)*((_DWORD *)v1 + 9);
  }
  if ( v2 )
    j_operator delete(v2);
  return v1;
}
