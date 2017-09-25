

void __fastcall EmoticonManager::_readEmoticonList(EmoticonManager *this, const ResourceLocation *a2)
{
  EmoticonManager::_readEmoticonList(this, a2);
}


int __fastcall EmoticonManager::_validEmoticonTextChar(EmoticonManager *this, int a2)
{
  signed int v2; // r2@1

  v2 = 0;
  if ( a2 == 95 )
    v2 = 1;
  return ((*(_BYTE *)(ctype_ + a2 + 1) & 7) != 0) | v2;
}


void __fastcall EmoticonManager::resetEmoticonData(EmoticonManager *this)
{
  EmoticonManager *v1; // r10@1
  unsigned __int64 *v2; // r7@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  unsigned __int64 *v5; // r6@11
  int v6; // r1@11
  void *v7; // r0@11
  int *v8; // r0@13
  char *v9; // r0@13
  char *v10; // r0@14
  unsigned int *v11; // r2@16
  signed int v12; // r1@18
  unsigned int *v13; // r2@20
  signed int v14; // r1@22
  char *v15; // [sp+0h] [bp-30h]@13
  char *v16; // [sp+4h] [bp-2Ch]@13
  int v17; // [sp+8h] [bp-28h]@13

  v1 = this;
  v2 = (unsigned __int64 *)*((_DWORD *)this + 3);
  while ( v2 )
  {
    v5 = v2;
    v6 = *v2 >> 32;
    v2 = (unsigned __int64 *)*v2;
    v7 = (void *)(v6 - 12);
    if ( (int *)(v6 - 12) != &dword_28898C0 )
    {
      v3 = (unsigned int *)(v6 - 4);
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
        j_j_j_j_j__ZdlPv_9(v7);
    }
    operator delete(v5);
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 4), 4 * (*(_QWORD *)((char *)v1 + 4) >> 32));
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = 0;
  v8 = sub_DA73B4((int *)&v15, (int *)v1);
  sub_DA73D4((const void **)v8, ".json", 5u);
  v16 = v15;
  v17 = 0;
  v15 = (char *)&unk_28898CC;
  EmoticonManager::_readEmoticonList(v1, (const ResourceLocation *)&v16);
  v9 = v16 - 12;
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v16 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  v10 = v15 - 12;
  if ( (int *)(v15 - 12) != &dword_28898C0 )
    v13 = (unsigned int *)(v15 - 4);
        v14 = __ldrex(v13);
      while ( __strex(v14 - 1, v13) );
      v14 = (*v13)--;
    if ( v14 <= 0 )
      j_j_j_j_j__ZdlPv_9(v10);
}


void __fastcall EmoticonManager::_readEmoticonList(EmoticonManager *this, const ResourceLocation *a2)
{
  EmoticonManager *v2; // r4@1
  signed int v3; // r5@1
  Json::Value *v4; // r7@3
  const Json::Value *v5; // r8@3
  Json::Value *v6; // r6@3
  const Json::Value *v7; // r10@3
  unsigned int i; // r5@3
  const char *v9; // r4@6
  const Json::Value *v10; // r10@9
  signed int v11; // r8@9
  void *v12; // r0@9
  void *v13; // r0@10
  void *v14; // r0@12
  void *v15; // r0@13
  unsigned int *v16; // r2@16
  signed int v17; // r1@18
  unsigned int *v18; // r2@20
  signed int v19; // r1@22
  unsigned int *v20; // r2@32
  signed int v21; // r1@34
  unsigned int *v22; // r2@36
  signed int v23; // r1@38
  char *v24; // r0@48
  unsigned int *v25; // r2@50
  signed int v26; // r1@52
  unsigned __int64 *v27; // [sp+18h] [bp-F8h]@3
  char v28; // [sp+1Ch] [bp-F4h]@12
  int v29; // [sp+28h] [bp-E8h]@12
  int v30; // [sp+2Ch] [bp-E4h]@12
  int v31; // [sp+34h] [bp-DCh]@9
  int v32; // [sp+38h] [bp-D8h]@9
  char v33; // [sp+3Ch] [bp-D4h]@9
  char v34; // [sp+40h] [bp-D0h]@3
  char v35; // [sp+50h] [bp-C0h]@7
  char v36; // [sp+60h] [bp-B0h]@1
  char v37; // [sp+D0h] [bp-40h]@1
  char *v38; // [sp+E4h] [bp-2Ch]@1

  v2 = this;
  v38 = (char *)&unk_28898CC;
  Resource::load((int)a2);
  Json::Value::Value(&v37, 0);
  Json::Reader::Reader((Json::Reader *)&v36);
  v3 = Json::Reader::parse((int)&v36, (int *)&v38, (int)&v37, 1);
  Json::Reader::~Reader((Json::Reader *)&v36);
  if ( v3 == 1 && Json::Value::isArray((Json::Value *)&v37) == 1 )
  {
    v27 = (unsigned __int64 *)((char *)v2 + 4);
    v4 = (Json::Value *)&v37;
    v5 = (const Json::Value *)"name";
    v6 = (Json::Value *)&v34;
    v7 = (const Json::Value *)"code";
    for ( i = 0; i < Json::Value::size(v4); ++i )
    {
      v9 = (const char *)Json::Value::operator[]((int)v4, i);
      if ( Json::Value::isObject((Json::Value *)v9) == 1 )
      {
        Json::Value::get((Json::Value *)&v35, v9, v5, (const Json::Value *)&Json::Value::null);
        Json::Value::get(v6, v9, v7, (const Json::Value *)&Json::Value::null);
        if ( Json::Value::isString((Json::Value *)&v35) == 1 && Json::Value::isString(v6) == 1 )
        {
          sub_DA7364((void **)&v31, (const char *)&unk_257BC67);
          Json::Value::asString(&v32, (int)v6, &v31);
          v10 = v5;
          v11 = Util::toHexInt<int,(void *)0>((unsigned int *)&v32, &v33);
          v12 = (void *)(v32 - 12);
          if ( (int *)(v32 - 12) != &dword_28898C0 )
          {
            v16 = (unsigned int *)(v32 - 4);
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
              j_j_j_j_j__ZdlPv_9(v12);
          }
          v13 = (void *)(v31 - 12);
          if ( (int *)(v31 - 12) != &dword_28898C0 )
            v18 = (unsigned int *)(v31 - 4);
                v19 = __ldrex(v18);
              while ( __strex(v19 - 1, v18) );
              v19 = (*v18)--;
            if ( v19 <= 0 )
              j_j_j_j_j__ZdlPv_9(v13);
          if ( !v11 )
            sub_DA7364((void **)&v29, (const char *)&unk_257BC67);
            Json::Value::asString(&v30, (int)&v35, &v29);
            std::_Hashtable<std::string,std::pair<std::string const,int>,std::allocator<std::pair<std::string const,int>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_M_emplace<std::string,int &>(
              &v28,
              v27,
              (int **)&v30,
              &v33);
            v14 = (void *)(v30 - 12);
            if ( (int *)(v30 - 12) != &dword_28898C0 )
              v20 = (unsigned int *)(v30 - 4);
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
                j_j_j_j_j__ZdlPv_9(v14);
            v15 = (void *)(v29 - 12);
            if ( (int *)(v29 - 12) != &dword_28898C0 )
              v22 = (unsigned int *)(v29 - 4);
                  v23 = __ldrex(v22);
                while ( __strex(v23 - 1, v22) );
                v23 = (*v22)--;
              if ( v23 <= 0 )
                j_j_j_j_j__ZdlPv_9(v15);
          v5 = v10;
          v6 = (Json::Value *)&v34;
          v7 = (const Json::Value *)"code";
          v4 = (Json::Value *)&v37;
        }
        Json::Value::~Value(v6);
        Json::Value::~Value((Json::Value *)&v35);
      }
    }
  }
  Json::Value::~Value((Json::Value *)&v37);
  v24 = v38 - 12;
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v38 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
    else
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j_j__ZdlPv_9(v24);
}


void __fastcall EmoticonManager::switchEmoticonList(int *a1, int *a2)
{
  int *v2; // r4@1

  v2 = a1;
  EntityInteraction::setInteractText(a1, a2);
  j_j_j__ZN15EmoticonManager17resetEmoticonDataEv((EmoticonManager *)v2);
}


_DWORD *__fastcall EmoticonManager::emoticonifyText(int *a1, int a2, int *a3)
{
  int v3; // r4@1
  int *v4; // r5@1

  v3 = a2;
  v4 = a1;
  sub_DA73B4(a1, a3);
  return EmoticonManager::emoticonifyTextInPlace(v3, (const void **)v4);
}


void __fastcall EmoticonManager::resetEmoticonData(EmoticonManager *this)
{
  EmoticonManager::resetEmoticonData(this);
}


int __fastcall EmoticonManager::_findEmoticon(int a1, int **a2)
{
  int v2; // r0@1
  int result; // r0@2

  v2 = std::_Hashtable<std::string,std::pair<std::string const,int>,std::allocator<std::pair<std::string const,int>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
         (unsigned __int64 *)(a1 + 4),
         a2);
  if ( v2 )
    result = *(_DWORD *)(v2 + 8);
  else
    result = 0;
  return result;
}


EmoticonManager *__fastcall EmoticonManager::~EmoticonManager(EmoticonManager *this)
{
  EmoticonManager *v1; // r10@1
  unsigned __int64 *v2; // r7@1
  unsigned int *v3; // r2@3
  signed int v4; // r1@5
  unsigned __int64 *v5; // r6@11
  int v6; // r1@11
  void *v7; // r0@11
  char *v8; // r0@13
  int *v9; // r0@16
  unsigned int *v11; // r2@18
  signed int v12; // r1@20

  v1 = this;
  v2 = (unsigned __int64 *)*((_DWORD *)this + 3);
  while ( v2 )
  {
    v5 = v2;
    v6 = *v2 >> 32;
    v2 = (unsigned __int64 *)*v2;
    v7 = (void *)(v6 - 12);
    if ( (int *)(v6 - 12) != &dword_28898C0 )
    {
      v3 = (unsigned int *)(v6 - 4);
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
        j_j_j_j_j__ZdlPv_9(v7);
    }
    operator delete(v5);
  }
  _aeabi_memclr4(*(_QWORD *)((char *)v1 + 4), 4 * (*(_QWORD *)((char *)v1 + 4) >> 32));
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = 0;
  v8 = (char *)*((_DWORD *)v1 + 1);
  if ( v8 && (char *)v1 + 28 != v8 )
    operator delete(v8);
  v9 = (int *)(*(_DWORD *)v1 - 12);
  if ( v9 != &dword_28898C0 )
    v11 = (unsigned int *)(*(_DWORD *)v1 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
    else
      v12 = (*v11)--;
    if ( v12 <= 0 )
      j_j_j_j_j__ZdlPv_9(v9);
  return v1;
}


int *__fastcall EmoticonManager::EmoticonManager(int *a1, int *a2)
{
  int *v2; // r4@1
  double v3; // r0@1
  unsigned int v4; // r0@1
  int v5; // r6@3
  void *v6; // r5@3

  v2 = a1;
  sub_DA73B4(a1, a2);
  v2[3] = 0;
  v2[4] = 0;
  v2[5] = 1065353216;
  LODWORD(v3) = v2 + 5;
  *(_DWORD *)(LODWORD(v3) + 4) = 0;
  v4 = sub_DA7744(v3);
  v2[2] = v4;
  if ( v4 == 1 )
  {
    v2[7] = 0;
    v6 = v2 + 7;
  }
  else
    if ( v4 >= 0x40000000 )
      sub_DA7414();
    v5 = 4 * v4;
    v6 = operator new(4 * v4);
    _aeabi_memclr4(v6, v5);
  v2[1] = (int)v6;
  EmoticonManager::resetEmoticonData((EmoticonManager *)v2);
  return v2;
}


_DWORD *__fastcall EmoticonManager::emoticonifyTextInPlace(int a1, const void **a2)
{
  const void **v2; // r8@1
  _DWORD *result; // r0@1
  signed int v4; // r1@2
  unsigned int v5; // r9@2
  size_t v6; // r6@4
  unsigned int v7; // r5@5
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  int v10; // r2@19
  unsigned int v11; // r3@21
  int v12; // r2@21
  unsigned int v13; // r5@22
  __int64 v14; // kr00_8@22
  unsigned int v15; // r7@22
  int v16; // r11@22
  int v17; // r8@23
  int v18; // r6@23
  _DWORD *v19; // r1@25
  size_t v20; // r2@25
  int v21; // r2@30
  void *v22; // r0@42
  const void **v23; // [sp+Ch] [bp-4Ch]@1
  int v24; // [sp+18h] [bp-40h]@1
  size_t v25; // [sp+1Ch] [bp-3Ch]@23
  int v26; // [sp+20h] [bp-38h]@22
  int *s1; // [sp+24h] [bp-34h]@23
  int v28; // [sp+28h] [bp-30h]@44
  int *v29; // [sp+2Ch] [bp-2Ch]@22

  v2 = a2;
  v24 = a1;
  result = *a2;
  v23 = a2;
  if ( *((_DWORD *)*a2 - 3) )
  {
    v4 = -1;
    v5 = 0;
    do
    {
      v6 = v4;
      if ( *(result - 1) >= 0 )
      {
        sub_DA73C4(v2);
        result = *v2;
      }
      v10 = *((_BYTE *)result + v5);
      if ( v10 == 58 )
        if ( v6 == -1 )
        {
          v4 = v5;
        }
        else
          v11 = *(result - 3);
          v12 = v6 + 1;
          if ( v11 < v6 + 1 )
            sub_DA7584("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v12, v11);
          v26 = v5 - v6;
          sub_DA7574((void **)&v29, (int *)v2, v12, v5 - v6 - 1);
          v13 = sub_DA7754(v29, *(v29 - 3), -955291385);
          v14 = *(_QWORD *)(v24 + 4);
          v15 = v13 % (unsigned int)(*(_QWORD *)(v24 + 4) >> 32);
          v16 = *(_DWORD *)(v14 + 4 * v15);
          if ( v16 )
          {
            v17 = *(_DWORD *)v16;
            v25 = v6;
            v18 = *(_DWORD *)(*(_DWORD *)v16 + 12);
            s1 = v29;
            while ( 1 )
            {
              if ( v18 == v13 )
              {
                v19 = *(_DWORD **)(v17 + 4);
                v20 = *(s1 - 3);
                if ( v20 == *(v19 - 3) && !memcmp(s1, v19, v20) )
                  break;
              }
              if ( *(_DWORD *)v17 )
                v18 = *(_DWORD *)(v14 + 12);
                v16 = v17;
                v17 = *(_DWORD *)v17;
                if ( *(_DWORD *)(v14 + 12) % HIDWORD(v14) == v15 )
                  continue;
              v7 = 0;
              v2 = v23;
              v6 = v25;
              goto LABEL_30;
            }
            v2 = v23;
            if ( v16 )
              if ( *(_DWORD *)v16 )
                v7 = *(_DWORD *)(*(_DWORD *)v16 + 8);
              else
                v7 = 0;
            else
LABEL_30:
            v21 = (int)s1;
          }
          else
            v21 = (int)v29;
            v7 = 0;
          v22 = (void *)(v21 - 12);
          if ( (int *)(v21 - 12) != &dword_28898C0 )
            v8 = (unsigned int *)(v21 - 4);
            if ( &pthread_create )
              __dmb();
              do
                v9 = __ldrex(v8);
              while ( __strex(v9 - 1, v8) );
              v9 = (*v8)--;
            if ( v9 <= 0 )
              j_j_j_j_j__ZdlPv_9(v22);
          if ( v7 )
            v28 = 0;
            j_utf8proc_encode_char(v7, (int)&v28);
            sub_DA8934(v2, v6, v26 + 1, (char *)&v28, (_BYTE *)3);
            v5 = v6 + 2;
            v4 = -1;
      else if ( v6 == -1 )
        v4 = -1;
      else
        if ( *(result - 1) >= 0 )
          sub_DA73C4(v2);
          v10 = *((_BYTE *)*v2 + v5);
        if ( *(_BYTE *)(ctype_ + v10 + 1) & 7 )
          v4 = v6;
        if ( v10 == 95 )
      result = *v2;
      ++v5;
    }
    while ( v5 < *((_DWORD *)*v2 - 3) );
  }
  return result;
}


unsigned int __fastcall EmoticonManager::_findEndColon(int a1, int *a2, unsigned int a3)
{
  int v3; // r0@1
  unsigned int v4; // r1@1
  int v5; // r3@2

  v3 = *a2;
  v4 = *(_DWORD *)(*a2 - 12);
  if ( v4 <= a3 )
  {
LABEL_6:
    a3 = -1;
  }
  else
    while ( 1 )
    {
      v5 = *(_BYTE *)(v3 + a3);
      if ( v5 == 58 )
        break;
      if ( (v5 == 95 || *(_BYTE *)(ctype_ + 1 + v5) & 7) && ++a3 < v4 )
        continue;
      goto LABEL_6;
    }
  return a3;
}
