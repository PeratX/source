

int __fastcall HopperContainerManagerModel::HopperContainerManagerModel(double a1, int a2, __int64 *a3)
{
  int v3; // r4@1

  v3 = LODWORD(a1);
  LevelContainerManagerModel::LevelContainerManagerModel(a1, a2, (unsigned __int64)*a3 >> 32, *a3);
  *(_DWORD *)v3 = &off_26ED27C;
  ContainerManagerModel::setContainerType(v3, 8);
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 44))(v3);
  return v3;
}


void __fastcall HopperContainerManagerModel::init(HopperContainerManagerModel *this)
{
  HopperContainerManagerModel *v1; // r4@1
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
  Entity *v21; // r5@45
  int v22; // r5@45
  unsigned int *v23; // r1@46
  unsigned int v24; // r0@48
  Entity *v25; // r5@50
  char *v26; // r0@50
  unsigned int *v27; // r1@51
  unsigned int v28; // r0@53
  unsigned int *v29; // r6@57
  unsigned int v30; // r0@59
  int v31; // [sp+Ch] [bp-84h]@50
  int v32; // [sp+10h] [bp-80h]@50
  int v33; // [sp+14h] [bp-7Ch]@50
  char v34; // [sp+18h] [bp-78h]@50
  int v35; // [sp+1Ch] [bp-74h]@50
  __int64 v36; // [sp+20h] [bp-70h]@45
  int v37; // [sp+28h] [bp-68h]@45
  int v38; // [sp+2Ch] [bp-64h]@45
  char v39; // [sp+30h] [bp-60h]@45
  int v40; // [sp+34h] [bp-5Ch]@45
  int v41; // [sp+38h] [bp-58h]@44
  int v42; // [sp+3Ch] [bp-54h]@44
  int v43; // [sp+40h] [bp-50h]@44
  int v44; // [sp+44h] [bp-4Ch]@29
  int v45; // [sp+48h] [bp-48h]@29
  int v46; // [sp+4Ch] [bp-44h]@29
  char v47; // [sp+50h] [bp-40h]@29
  int v48; // [sp+54h] [bp-3Ch]@29
  int v49; // [sp+58h] [bp-38h]@15
  int v50; // [sp+5Ch] [bp-34h]@15
  int v51; // [sp+60h] [bp-30h]@15
  char v52; // [sp+64h] [bp-2Ch]@15
  int v53; // [sp+68h] [bp-28h]@15
  int v54; // [sp+6Ch] [bp-24h]@1
  int v55; // [sp+70h] [bp-20h]@1
  int v56; // [sp+74h] [bp-1Ch]@1
  char v57; // [sp+78h] [bp-18h]@1
  int v58; // [sp+7Ch] [bp-14h]@1

  v1 = this;
  v56 = 24;
  v55 = 9;
  v2 = *((_DWORD *)this + 1);
  v54 = 9;
  ContainerFactory::createModel<InventoryContainerModel,ContainerEnumName,int,Player &,int>(
    (int)&v57,
    (unsigned int *)&v56,
    (unsigned int *)&v55,
    v2,
    &v54);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v57);
  v3 = v58;
  if ( v58 )
  {
    v4 = (unsigned int *)(v58 + 4);
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
  v51 = 26;
  v50 = 27;
  v8 = *((_DWORD *)v1 + 1);
  v49 = 18;
    (int)&v52,
    (unsigned int *)&v51,
    (unsigned int *)&v50,
    v8,
    &v49);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v52);
  v9 = v53;
  if ( v53 )
    v10 = (unsigned int *)(v53 + 4);
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
  v45 = 36;
  v46 = 9;
  v14 = *((_DWORD *)v1 + 1);
  v44 = 9;
    (int)&v47,
    (unsigned int *)&v46,
    (unsigned int *)&v45,
    v14,
    &v44);
  ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v47);
  v15 = v48;
  if ( v48 )
    v16 = (unsigned int *)(v48 + 4);
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
    v43 = (*(int (**)(void))(*(_DWORD *)v20 + 44))();
    LevelContainerManagerModel::getEntityUniqueID((LevelContainerManagerModel *)&v41, (int)v1);
    if ( (v41 & v42) == -1 )
      v33 = 4;
      v25 = (Entity *)*((_DWORD *)v1 + 1);
      v32 = 0;
      v31 = 15;
      v26 = LevelContainerManagerModel::getBlockPos(v1);
      ContainerFactory::createModel<LevelContainerModel,ContainerEnumName,int &,Player &,int,BlockEntityType,BlockPos const&>(
        (int)&v34,
        (unsigned int *)&v33,
        (unsigned int *)&v43,
        v25,
        &v32,
        &v31,
        (int)v26);
      ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v34);
      v22 = v35;
      if ( v35 )
        v27 = (unsigned int *)(v35 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v28 = __ldrex(v27);
          while ( __strex(v28 - 1, v27) );
        }
        else
          v28 = (*v27)--;
        if ( v28 == 1 )
          v29 = (unsigned int *)(v22 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 8))(v22);
          if ( &pthread_create )
          {
            __dmb();
            do
              v30 = __ldrex(v29);
            while ( __strex(v30 - 1, v29) );
LABEL_68:
            if ( v30 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v22 + 12))(v22);
            goto LABEL_70;
          }
LABEL_67:
          v30 = (*v29)--;
          goto LABEL_68;
      v38 = 4;
      v21 = (Entity *)*((_DWORD *)v1 + 1);
      v37 = 0;
      LevelContainerManagerModel::getEntityUniqueID((LevelContainerManagerModel *)&v36, (int)v1);
      ContainerFactory::createModel<LevelContainerModel,ContainerEnumName,int &,Player &,int,EntityUniqueID>(
        (int)&v39,
        (unsigned int *)&v38,
        v21,
        &v37,
        &v36);
      ContainerManagerModel::_addContainer((int)v1, (ContainerModel **)&v39);
      v22 = v40;
      if ( v40 )
        v23 = (unsigned int *)(v40 + 4);
            v24 = __ldrex(v23);
          while ( __strex(v24 - 1, v23) );
          v24 = (*v23)--;
        if ( v24 == 1 )
            goto LABEL_68;
          goto LABEL_67;
LABEL_70:
  LevelContainerManagerModel::init(v1);
}


void __fastcall HopperContainerManagerModel::~HopperContainerManagerModel(HopperContainerManagerModel *this)
{
  HopperContainerManagerModel::~HopperContainerManagerModel(this);
}


int __fastcall HopperContainerManagerModel::HopperContainerManagerModel(double a1, int a2, int a3)
{
  int v3; // r4@1

  v3 = LODWORD(a1);
  LevelContainerManagerModel::LevelContainerManagerModel(a1, a2, a3, 15);
  *(_DWORD *)v3 = &off_26ED27C;
  ContainerManagerModel::setContainerType(v3, 8);
  (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 44))(v3);
  return v3;
}


void __fastcall HopperContainerManagerModel::~HopperContainerManagerModel(HopperContainerManagerModel *this)
{
  void *v1; // r0@1

  v1 = (void *)LevelContainerManagerModel::~LevelContainerManagerModel(this);
  j_j_j__ZdlPv_6(v1);
}


void __fastcall HopperContainerManagerModel::init(HopperContainerManagerModel *this)
{
  HopperContainerManagerModel::init(this);
}
