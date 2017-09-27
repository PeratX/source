

void __fastcall DispenserContainerManagerModel::init(DispenserContainerManagerModel *this)
{
  DispenserContainerManagerModel::init(this);
}


void __fastcall DispenserContainerManagerModel::~DispenserContainerManagerModel(DispenserContainerManagerModel *this)
{
  void *v1; // r0@1

  v1 = (void *)LevelContainerManagerModel::~LevelContainerManagerModel(this);
  j_j_j__ZdlPv_6(v1);
}


int __fastcall DispenserContainerManagerModel::DispenserContainerManagerModel(double a1, int a2, int a3)
{
  int v3; // r4@1

  v3 = LODWORD(a1);
  LevelContainerManagerModel::LevelContainerManagerModel(a1, a2, a3, 13);
  *(_DWORD *)v3 = &off_26ED18C;
  ContainerManagerModel::setContainerType(v3, 6);
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 44))(v3);
  return v3;
}


void __fastcall DispenserContainerManagerModel::~DispenserContainerManagerModel(DispenserContainerManagerModel *this)
{
  DispenserContainerManagerModel::~DispenserContainerManagerModel(this);
}


void __fastcall DispenserContainerManagerModel::init(DispenserContainerManagerModel *this)
{
  DispenserContainerManagerModel *v1; // r4@1
  int v2; // r3@1
  int v3; // r5@1
  unsigned int *v4; // r1@2
  unsigned int v5; // r0@4
  unsigned int *v6; // r6@8
  unsigned int v7; // r0@10
  int v8; // r3@15
  int v9; // r5@15
  unsigned int *v10; // r1@16
  unsigned int v11; // r0@18
  unsigned int *v12; // r6@22
  unsigned int v13; // r0@24
  int v14; // r3@29
  int v15; // r5@29
  unsigned int *v16; // r1@30
  unsigned int v17; // r0@32
  unsigned int *v18; // r6@36
  unsigned int v19; // r0@38
  int v20; // r0@43
  Entity *v21; // r5@44
  char *v22; // r0@44
  int v23; // r5@44
  unsigned int *v24; // r1@45
  unsigned int v25; // r0@47
  unsigned int *v26; // r6@51
  unsigned int v27; // r0@53
  int v28; // [sp+Ch] [bp-64h]@44
  int v29; // [sp+10h] [bp-60h]@44
  int v30; // [sp+14h] [bp-5Ch]@44
  char v31; // [sp+18h] [bp-58h]@44
  int v32; // [sp+1Ch] [bp-54h]@44
  int v33; // [sp+20h] [bp-50h]@44
  int v34; // [sp+24h] [bp-4Ch]@29
  int v35; // [sp+28h] [bp-48h]@29
  int v36; // [sp+2Ch] [bp-44h]@29
  char v37; // [sp+30h] [bp-40h]@29
  int v38; // [sp+34h] [bp-3Ch]@29
  int v39; // [sp+38h] [bp-38h]@15
  int v40; // [sp+3Ch] [bp-34h]@15
  int v41; // [sp+40h] [bp-30h]@15
  char v42; // [sp+44h] [bp-2Ch]@15
  int v43; // [sp+48h] [bp-28h]@15
  int v44; // [sp+4Ch] [bp-24h]@1
  int v45; // [sp+50h] [bp-20h]@1
  int v46; // [sp+54h] [bp-1Ch]@1
  char v47; // [sp+58h] [bp-18h]@1
  int v48; // [sp+5Ch] [bp-14h]@1

  v1 = this;
  v46 = 24;
  v45 = 9;
  v2 = *((_DWORD *)this + 1);
  v44 = 9;
  ContainerFactory::createModel<InventoryContainerModel,ContainerEnumName,int,Player &,int>(
    (int)&v47,
    (unsigned int *)&v46,
    (unsigned int *)&v45,
    v2,
    &v44);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v47);
  v3 = v48;
  if ( v48 )
  {
    v4 = (unsigned int *)(v48 + 4);
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
  v41 = 26;
  v40 = 27;
  v8 = *((_DWORD *)v1 + 1);
  v39 = 18;
    (int)&v42,
    (unsigned int *)&v41,
    (unsigned int *)&v40,
    v8,
    &v39);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v42);
  v9 = v43;
  if ( v43 )
    v10 = (unsigned int *)(v43 + 4);
        v11 = __ldrex(v10);
      while ( __strex(v11 - 1, v10) );
      v11 = (*v10)--;
    if ( v11 == 1 )
      v12 = (unsigned int *)(v9 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 8))(v9);
          v13 = __ldrex(v12);
        while ( __strex(v13 - 1, v12) );
        v13 = (*v12)--;
      if ( v13 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 12))(v9);
  v35 = 36;
  v36 = 9;
  v14 = *((_DWORD *)v1 + 1);
  v34 = 9;
    (int)&v37,
    (unsigned int *)&v36,
    (unsigned int *)&v35,
    v14,
    &v34);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v37);
  v15 = v38;
  if ( v38 )
    v16 = (unsigned int *)(v38 + 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 == 1 )
      v18 = (unsigned int *)(v15 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        v19 = (*v18)--;
      if ( v19 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
  v20 = LevelContainerManagerModel::_getContainer(v1);
  if ( v20 )
    v33 = (*(int (**)(void))(*(_DWORD *)v20 + 44))();
    v30 = 4;
    v21 = (Entity *)*((_DWORD *)v1 + 1);
    v29 = 0;
    v28 = 13;
    v22 = LevelContainerManagerModel::getBlockPos(v1);
    ContainerFactory::createModel<LevelContainerModel,ContainerEnumName,int &,Player &,int,BlockEntityType,BlockPos const&>(
      (int)&v31,
      (unsigned int *)&v30,
      (unsigned int *)&v33,
      v21,
      &v29,
      &v28,
      (int)v22);
    ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v31);
    v23 = v32;
    if ( v32 )
      v24 = (unsigned int *)(v32 + 4);
          v25 = __ldrex(v24);
        while ( __strex(v25 - 1, v24) );
        v25 = (*v24)--;
      if ( v25 == 1 )
        v26 = (unsigned int *)(v23 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 8))(v23);
        if ( &pthread_create )
        {
          __dmb();
          do
            v27 = __ldrex(v26);
          while ( __strex(v27 - 1, v26) );
        }
        else
          v27 = (*v26)--;
        if ( v27 == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v23 + 12))(v23);
  LevelContainerManagerModel::init(v1);
}
