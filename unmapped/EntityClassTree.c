

signed int __fastcall EntityClassTree::isOfType(int a1, int a2)
{
  signed int result; // r0@2
  char v3; // r1@3

  if ( a1 == a2 )
  {
    result = 1;
  }
  else
    v3 = a2 ^ a1;
    result = 0;
    if ( !v3 )
      result = 1;
  return result;
}


      if ( EntityClassTree::isOfType(*(_DWORD *)(i + 4), v3) )
{
        EntityMapping::getMappingName(v5, i + 8, v4);
        return;
      }
    }
  }
  sub_21E94B4((void **)v5, "unknown");
}


  if ( EntityClassTree::isInstanceOf(a3, 319) == 1 )
{
    v6 = Player::getPlayerLevel(v3);
    result = 0;
    if ( v6 >= *(_DWORD *)v4 && v6 <= *(_DWORD *)(v4 + 4) )
      result = 1;
  }
  else
  {
  return result;
}


  if ( EntityClassTree::isInstanceOf(a2, 64) == 1 )
{
    ItemInstance::getName(v3, v2 + 3416);
  }
  else
  {
    v4 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v2 + 188))(v2);
    sub_21E8AF4((int *)v3, v4);
    if ( !*(_DWORD *)(*(_DWORD *)v3 - 12) )
    {
      v5 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 488))(v2);
      EntityTypeToString((void **)&v20, v5, 0);
      v6 = sub_21E82D8((const void **)&v20, 0, (unsigned int)"entity.", (_BYTE *)7);
      v21 = (char *)*v6;
      *v6 = &unk_28898CC;
      v7 = sub_21E7408((const void **)&v21, ".name", 5u);
      v22 = (char *)*v7;
      *v7 = &unk_28898CC;
      I18n::get(&v23, (int **)&v22);
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)v3,
        &v23);
      v8 = (void *)(v23 - 12);
      if ( (int *)(v23 - 12) != &dword_28898C0 )
      {
        v12 = (unsigned int *)(v23 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v13 = __ldrex(v12);
          while ( __strex(v13 - 1, v12) );
        }
        else
          v13 = (*v12)--;
        if ( v13 <= 0 )
          j_j_j_j__ZdlPv_9(v8);
      }
      v9 = v22 - 12;
      if ( (int *)(v22 - 12) != &dword_28898C0 )
        v14 = (unsigned int *)(v22 - 4);
            v15 = __ldrex(v14);
          while ( __strex(v15 - 1, v14) );
          v15 = (*v14)--;
        if ( v15 <= 0 )
          j_j_j_j__ZdlPv_9(v9);
      v10 = v21 - 12;
      if ( (int *)(v21 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v21 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v10);
      v11 = (void *)(v20 - 12);
      if ( (int *)(v20 - 12) != &dword_28898C0 )
        v18 = (unsigned int *)(v20 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
    }
}


unsigned int __fastcall EntityClassTree::isMob(__int16 a1)
{
  return (a1 & 0x100u) >> 8;
}


int __fastcall EntityClassTree::getMobCategory(__int16 a1)
{
  int result; // r0@2

  if ( (a1 & 0x1300) == 4864 )
  {
    result = 4864;
  }
  else if ( (a1 & 0xB00) == 2816 )
    result = 2816;
  else if ( (a1 & 0x2300) == 8960 )
    result = 8960;
  else if ( (unsigned __int8)a1 == 63 )
    result = 319;
  else if ( (unsigned __int8)a1 == 15 )
    result = 783;
  else
    result = a1 & 0x8100;
    if ( result != 33024 )
      result = 64;
  return result;
}


signed int __fastcall EntityClassTree::hasCategory(_DWORD *a1, int a2)
{
  int v2; // r2@1
  signed int result; // r0@1

  v2 = *a1 & a2;
  result = 0;
  if ( v2 == a2 )
    result = 1;
  return result;
}


int __fastcall EntityClassTree::getEntityTypeIdLegacy(int result)
{
  return (unsigned __int8)result;
}


signed int __fastcall EntityClassTree::isInstanceOf(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r0@1
  unsigned int v4; // r1@1
  int v5; // r2@3
  signed int result; // r0@3
  int v7; // r1@6

  v2 = a2;
  v3 = (*(int (**)(void))(*(_DWORD *)a1 + 488))();
  v4 = v2 & 0xFFFFFF00;
  if ( !(v2 & 0xFFFFFF00) || (_BYTE)v2 )
  {
    v7 = (unsigned __int8)v3;
    result = 0;
    if ( v7 == (unsigned __int8)v2 )
      result = 1;
  }
  else
    v5 = v4 & v3;
    if ( v5 == v4 )
  return result;
}


unsigned int __fastcall EntityClassTree::isMobLegacy(int a1)
{
  signed int v1; // r2@1
  bool v2; // cf@1
  unsigned int v3; // r0@1

  v1 = 0;
  v2 = (unsigned int)(a1 - 10) >= 0x36;
  v3 = a1 & 0x100;
  if ( !v2 )
    v1 = 1;
  return v1 | (v3 >> 8);
}


      if ( EntityClassTree::isOfType(*(_DWORD *)(i + 4), v1) )
{
    }
  }
  return 1;
}


signed int __fastcall EntityClassTree::isTypeInstanceOf(int a1, int a2)
{
  unsigned int v2; // r2@1
  int v3; // r3@1
  unsigned int v4; // r1@3
  signed int result; // r0@3
  int v6; // r1@6

  v2 = a2 & 0xFFFFFF00;
  v3 = (unsigned __int8)a2;
  if ( !(a2 & 0xFFFFFF00) || (_BYTE)a2 )
  {
    v6 = (unsigned __int8)a1;
    result = 0;
    if ( v6 == v3 )
      result = 1;
  }
  else
    v4 = a1 & a2 & 0xFFFFFF00;
    if ( v4 == v2 )
  return result;
}


int __fastcall EntityClassTree::isHangingEntity(EntityClassTree *this, const Entity *a2)
{
  int v2; // r0@1
  signed int v3; // r1@1
  signed int v4; // r2@1

  v2 = (*(int (**)(void))(*(_DWORD *)this + 488))();
  v3 = 0;
  v4 = 0;
  if ( (unsigned __int8)v2 == 83 )
    v3 = 1;
  if ( v2 == 83 )
    v4 = 1;
  return v4 | v3;
}
