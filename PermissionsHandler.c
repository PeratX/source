

void __fastcall PermissionsHandler::addSaveData(PermissionsHandler *this, CompoundTag *a2)
{
  CompoundTag *v2; // r6@1
  PermissionsHandler *v3; // r5@1
  void *v4; // r0@1
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10
  int v10; // [sp+4h] [bp-2Ch]@2
  int v11; // [sp+Ch] [bp-24h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v11, "permissionsLevel");
  CompoundTag::putInt((int)v2, (const void **)&v11, *(_BYTE *)v3);
  v4 = (void *)(v11 - 12);
  if ( (int *)(v11 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v11 - 4);
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
  sub_21E94B4((void **)&v10, "playerPermissionsLevel");
  CompoundTag::putInt((int)v2, (const void **)&v10, *((_BYTE *)v3 + 1));
  v5 = (void *)(v10 - 12);
  if ( (int *)(v10 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v10 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
}


int __fastcall PermissionsHandler::setPlayerPermissions(int result, char a2)
{
  *(_BYTE *)(result + 1) = a2;
  return result;
}


void __fastcall PermissionsHandler::addSaveData(PermissionsHandler *this, CompoundTag *a2)
{
  PermissionsHandler::addSaveData(this, a2);
}


int __fastcall PermissionsHandler::PermissionsHandler(int result, int a2)
{
  *(_BYTE *)result = *(_BYTE *)a2;
  *(_BYTE *)(result + 1) = *(_BYTE *)(a2 + 1);
  return result;
}


_WORD *__fastcall PermissionsHandler::PermissionsHandler(_WORD *result)
{
  *result = 256;
  return result;
}


_BYTE *__fastcall PermissionsHandler::setCommandPermissions(_BYTE *result, char a2)
{
  *result = a2;
  return result;
}


int __fastcall PermissionsHandler::getCommandPermissions(PermissionsHandler *this)
{
  return *(_BYTE *)this;
}


signed int __fastcall PermissionsHandler::loadSaveData(PermissionsHandler *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  PermissionsHandler *v3; // r8@1
  signed int v4; // r6@1
  void *v5; // r0@1
  void *v6; // r0@3
  signed int v7; // r6@4
  signed int v8; // r7@6
  void *v9; // r0@6
  void *v10; // r0@8
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  unsigned int *v14; // r2@15
  signed int v15; // r1@17
  unsigned int *v16; // r2@19
  signed int v17; // r1@21
  unsigned int *v18; // r2@27
  signed int v19; // r1@29
  int v20; // [sp+8h] [bp-38h]@8
  int v21; // [sp+10h] [bp-30h]@6
  int v22; // [sp+18h] [bp-28h]@3
  int v23; // [sp+20h] [bp-20h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v23, "permissionsLevel");
  v4 = CompoundTag::contains((int)v2, (const void **)&v23);
  v5 = (void *)(v23 - 12);
  if ( (int *)(v23 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v23 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  if ( v4 == 1 )
    sub_21E94B4((void **)&v22, "permissionsLevel");
    *(_BYTE *)v3 = CompoundTag::getInt((int)v2, (const void **)&v22);
    v6 = (void *)(v22 - 12);
    if ( (int *)(v22 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v22 - 4);
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
        j_j_j_j__ZdlPv_9(v6);
    v7 = 1;
  else
    v7 = 0;
  sub_21E94B4((void **)&v21, "playerPermissionsLevel");
  v8 = CompoundTag::contains((int)v2, (const void **)&v21);
  v9 = (void *)(v21 - 12);
  if ( (int *)(v21 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v21 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  if ( v8 == 1 )
    sub_21E94B4((void **)&v20, "playerPermissionsLevel");
    *((_BYTE *)v3 + 1) = CompoundTag::getInt((int)v2, (const void **)&v20);
    v10 = (void *)(v20 - 12);
    if ( (int *)(v20 - 12) != &dword_28898C0 )
      v11 = (unsigned int *)(v20 - 4);
          v12 = __ldrex(v11);
        while ( __strex(v12 - 1, v11) );
        v12 = (*v11)--;
      if ( v12 <= 0 )
        j_j_j_j__ZdlPv_9(v10);
  return v7;
}
