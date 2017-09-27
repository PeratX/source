

RakNet *__fastcall TestResourcePackStack::loadAllVersionsOf(TestResourcePackStack *this, const ResourceLocation *a2, int *a3)
{
  TestResourcePackStack *v3; // r11@1
  int v4; // r0@1
  int v5; // r1@1
  int v6; // r2@1
  int v7; // r3@1
  char v8; // r0@1
  char v9; // r0@2
  int v10; // r6@3
  unsigned __int64 v11; // r2@3
  char v12; // r0@3
  int v13; // r10@4
  int v14; // r7@5
  unsigned int *v15; // r2@6
  signed int v16; // r1@8
  unsigned int *v17; // r2@10
  signed int v18; // r1@12
  int v19; // r1@22
  void *v20; // r0@22
  int *v21; // r0@23
  RakNet *result; // r0@32
  char v23; // [sp+8h] [bp-4A0h]@3
  void (*v24)(void); // [sp+10h] [bp-498h]@26
  char v25; // [sp+18h] [bp-490h]@3
  char v26; // [sp+1Ch] [bp-48Ch]@2
  void (__cdecl *v27)(char *); // [sp+24h] [bp-484h]@28
  char v28; // [sp+2Ch] [bp-47Ch]@2
  size_t v29; // [sp+30h] [bp-478h]@2
  int v30; // [sp+34h] [bp-474h]@2
  __int64 v31; // [sp+3Ch] [bp-46Ch]@1
  char v32; // [sp+44h] [bp-464h]@1
  void (__cdecl *v33)(char *); // [sp+4Ch] [bp-45Ch]@30
  char v34; // [sp+54h] [bp-454h]@1
  unsigned __int64 *v35; // [sp+58h] [bp-450h]@1
  int v36; // [sp+5Ch] [bp-44Ch]@1
  int v37; // [sp+60h] [bp-448h]@1
  int v38; // [sp+64h] [bp-444h]@1
  int v39; // [sp+68h] [bp-440h]@1
  int v40; // [sp+6Ch] [bp-43Ch]@1
  char v41; // [sp+78h] [bp-430h]@1
  int v42; // [sp+7Ch] [bp-42Ch]@1
  int v43; // [sp+47Ch] [bp-2Ch]@1
  RakNet *v44; // [sp+480h] [bp-28h]@1

  v3 = this;
  v44 = _stack_chk_guard;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v35 = 0;
  v36 = 0;
  v4 = *a3;
  v5 = *((_DWORD *)a2 + 5);
  v6 = *(_DWORD *)(*a3 - 12);
  v7 = *(_DWORD *)(v5 - 12);
  v37 = v5;
  v38 = v7;
  v39 = v4;
  v40 = v6;
  Core::PathBuffer<Core::StackString<char,1024u>>::_join<Core::PathPart>((unsigned int *)&v41, (int)&v37, 2);
  LODWORD(v31) = &v42;
  HIDWORD(v31) = v43;
  Core::File::open((int)&v32, (int)&v35, &v31, 33);
  v8 = v34;
  v34 |= 2u;
  if ( v8 & 1 )
  {
    v29 = 0;
    v30 = 0;
    Core::FileImpl::getRemainingSize((Core::FileImpl *)&v26, v35);
    v9 = v28;
    v28 |= 2u;
    if ( v9 & 1 )
    {
      j__ZNSt6vectorI12ResourcePathSaIS0_EE19_M_emplace_back_auxIJEEEvDpOT_((__int64 *)v3);
      v10 = *((_DWORD *)v3 + 1);
      sub_119E388((char *)(v10 - 4), v29, 0);
      LODWORD(v11) = *(_DWORD *)(v10 - 4);
      Core::FileImpl::readExactly((Core::FileImpl *)&v23, v35, v11, *(_DWORD *)(v11 - 12));
      v12 = v25;
      v25 |= 2u;
      if ( !(v12 & 1) )
      {
        v13 = *(_DWORD *)v3;
        if ( v10 != *(_DWORD *)v3 )
        {
          v14 = *(_DWORD *)v3;
          do
          {
            v19 = *(_DWORD *)(v14 + 4);
            v20 = (void *)(v19 - 12);
            if ( (int *)(v19 - 12) != &dword_28898C0 )
            {
              v15 = (unsigned int *)(v19 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v16 = __ldrex(v15);
                while ( __strex(v16 - 1, v15) );
              }
              else
                v16 = (*v15)--;
              if ( v16 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v20);
            }
            v21 = (int *)(*(_DWORD *)v14 - 12);
            if ( v21 != &dword_28898C0 )
              v17 = (unsigned int *)(*(_DWORD *)v14 - 4);
                  v18 = __ldrex(v17);
                while ( __strex(v18 - 1, v17) );
                v18 = (*v17)--;
              if ( v18 <= 0 )
                j_j_j_j_j__ZdlPv_9_1(v21);
            v14 += 8;
          }
          while ( v14 != v10 );
        }
        *((_DWORD *)v3 + 1) = v13;
      }
      if ( v24 )
        v24();
    }
    if ( v27 )
      v27(&v26);
  }
  if ( v33 )
    v33(&v32);
  Core::File::~File((Core::File *)&v35);
  result = (RakNet *)(_stack_chk_guard - v44);
  if ( _stack_chk_guard != v44 )
    _stack_chk_fail(result);
  return result;
}


void __fastcall TestResourcePackStack::~TestResourcePackStack(TestResourcePackStack *this)
{
  ResourcePackStack *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26DF29C;
  v2 = *((_DWORD *)this + 5);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  ResourcePackStack::~ResourcePackStack(v1);
  operator delete((void *)v1);
}


void __fastcall TestResourcePackStack::~TestResourcePackStack(TestResourcePackStack *this)
{
  TestResourcePackStack::~TestResourcePackStack(this);
}


ResourcePackStack *__fastcall TestResourcePackStack::~TestResourcePackStack(TestResourcePackStack *this)
{
  ResourcePackStack *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26DF29C;
  v2 = *((_DWORD *)this + 5);
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
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  ResourcePackStack::~ResourcePackStack(v1);
  return v1;
}


signed int __fastcall TestResourcePackStack::loadAllVersionsOf(int a1, int a2, int a3)
{
  int v3; // r6@1
  int *v4; // r5@1
  signed int v5; // r10@1
  int v6; // r7@2
  unsigned int *v7; // r2@6
  signed int v8; // r1@8
  unsigned int *v9; // r2@10
  signed int v10; // r1@12
  int v11; // r1@22
  void *v12; // r0@22
  int *v13; // r0@23
  int v14; // r5@28
  int v15; // r7@28
  unsigned int *v16; // r2@30
  signed int v17; // r1@32
  int v18; // r1@38
  void *v19; // r0@38
  int v21; // [sp+0h] [bp-40h]@2
  int *v22; // [sp+4h] [bp-3Ch]@1
  int *v23; // [sp+8h] [bp-38h]@1
  unsigned __int64 v24; // [sp+10h] [bp-30h]@1
  int v25; // [sp+18h] [bp-28h]@1

  v3 = a3;
  v24 = 0LL;
  v25 = 0;
  (*(void (__fastcall **)(int **))(*(_DWORD *)a1 + 8))(&v22);
  v4 = v22;
  v5 = 0;
  if ( v22 != v23 )
  {
    v21 = 0;
    std::vector<LoadedResourceData,std::allocator<LoadedResourceData>>::_M_emplace_back_aux<int,std::string &>(
      &v24,
      &v21,
      v23 - 1);
    (*(void (__fastcall **)(int, unsigned __int64 *))(*(_DWORD *)v3 + 8))(v3, &v24);
    v5 = 0;
    v4 = v23;
    v6 = (int)v22;
    if ( (_DWORD)v24 != HIDWORD(v24) )
      v5 = 1;
    if ( v22 != v23 )
    {
      do
      {
        v11 = *(_DWORD *)(v6 + 4);
        v12 = (void *)(v11 - 12);
        if ( (int *)(v11 - 12) != &dword_28898C0 )
        {
          v7 = (unsigned int *)(v11 - 4);
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
            j_j_j_j_j__ZdlPv_9_1(v12);
        }
        v13 = (int *)(*(_DWORD *)v6 - 12);
        if ( v13 != &dword_28898C0 )
          v9 = (unsigned int *)(*(_DWORD *)v6 - 4);
              v10 = __ldrex(v9);
            while ( __strex(v10 - 1, v9) );
            v10 = (*v9)--;
          if ( v10 <= 0 )
            j_j_j_j_j__ZdlPv_9_1(v13);
        v6 += 8;
      }
      while ( (int *)v6 != v4 );
      v4 = v22;
    }
  }
  if ( v4 )
    operator delete(v4);
  v15 = HIDWORD(v24);
  v14 = v24;
  if ( (_DWORD)v24 != HIDWORD(v24) )
    do
      v18 = *(_DWORD *)(v14 + 4);
      v19 = (void *)(v18 - 12);
      if ( (int *)(v18 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v18 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
        else
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j_j__ZdlPv_9_1(v19);
      v14 += 8;
    while ( v14 != v15 );
    v14 = v24;
  if ( v14 )
    operator delete((void *)v14);
  return v5;
}
