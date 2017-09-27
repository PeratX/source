

void **__fastcall GameTypeConv::gameTypeToNonLocString(void **a1, int a2)
{
  void **result; // r0@4

  if ( a2 == 2 )
  {
    result = sub_21E94B4(a1, "Adventure");
  }
  else if ( a2 == 1 )
    result = sub_21E94B4(a1, "Creative");
  else if ( a2 )
    result = sub_21E94B4(a1, (const char *)&unk_257BC67);
  else
    result = sub_21E94B4(a1, "Survival");
  return result;
}


void **__fastcall GameTypeConv::gameTypeToString(void **a1, int a2)
{
  void **result; // r0@4

  if ( a2 == 2 )
  {
    result = sub_21E94B4(a1, "createWorldScreen.gameMode.adventure");
  }
  else if ( a2 == 1 )
    result = sub_21E94B4(a1, "createWorldScreen.gameMode.creative");
  else if ( a2 )
    result = sub_21E94B4(a1, (const char *)&unk_257BC67);
  else
    result = sub_21E94B4(a1, "createWorldScreen.gameMode.survival");
  return result;
}


signed int __fastcall GameTypeConv::stringToGameType(unsigned int *a1)
{
  signed int v1; // r4@3
  void *v2; // r0@8
  unsigned int *v4; // r2@10
  signed int v5; // r1@12
  int v6; // [sp+4h] [bp-1Ch]@1

  Util::toLower((void **)&v6, *(_DWORD *)(*a1 - 12), *a1);
  if ( sub_21E7D6C((const void **)&v6, "survival") )
  {
    if ( sub_21E7D6C((const void **)&v6, "creative") )
    {
      v1 = -1;
      if ( !sub_21E7D6C((const void **)&v6, "adventure") )
        v1 = 2;
    }
    else
      v1 = 1;
  }
  else
    v1 = 0;
  v2 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v4 = (unsigned int *)(v6 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  return v1;
}


signed int __fastcall GameTypeConv::stringToIndividualGameType(unsigned int *a1)
{
  signed int v1; // r4@6
  void *v2; // r0@14
  unsigned int *v4; // r2@16
  signed int v5; // r1@18
  int v6; // [sp+4h] [bp-1Ch]@1

  Util::toLower((void **)&v6, *(_DWORD *)(*a1 - 12), *a1);
  if ( sub_21E7D6C((const void **)&v6, "survival") )
  {
    if ( sub_21E7D6C((const void **)&v6, "s") )
    {
      if ( sub_21E7D6C((const void **)&v6, "creative") )
      {
        if ( sub_21E7D6C((const void **)&v6, "c") )
        {
          if ( sub_21E7D6C((const void **)&v6, "adventure") )
          {
            v1 = -1;
            if ( !sub_21E7D6C((const void **)&v6, "a") )
              v1 = 2;
          }
          else
            v1 = 2;
        }
        else
          v1 = 1;
      }
      else
        v1 = 1;
    }
    else
      v1 = 0;
  }
  else
    v1 = 0;
  v2 = (void *)(v6 - 12);
  if ( (int *)(v6 - 12) != &dword_28898C0 )
    v4 = (unsigned int *)(v6 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j__ZdlPv_9(v2);
  return v1;
}


int __fastcall GameTypeConv::intToGameType(int result, int a2)
{
  if ( (unsigned int)result >= 3 )
    result = -1;
  return result;
}
