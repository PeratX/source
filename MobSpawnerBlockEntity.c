

CompoundTag *__fastcall MobSpawnerBlockEntity::getUpdatePacket(MobSpawnerBlockEntity *this, BlockSource *a2, BlockSource *a3)
{
  BlockSource *v3; // r6@1
  MobSpawnerBlockEntity *v4; // r4@1
  _DWORD *v5; // r5@1
  int v6; // r3@1
  int v7; // r1@1
  int v8; // r2@1
  int v10; // [sp+0h] [bp-48h]@1
  char v11; // [sp+1Ch] [bp-2Ch]@1

  v3 = a2;
  v4 = this;
  BaseMobSpawner::getDisplayEntity(*((BaseMobSpawner **)a2 + 26), a3);
  CompoundTag::CompoundTag((int)&v10);
  (*(void (__fastcall **)(BlockSource *, int *))(*(_DWORD *)v3 + 12))(v3, &v10);
  v5 = operator new(0x38u);
  CompoundTag::CompoundTag((int)&v11, (int)&v10);
  v5[1] = 2;
  v5[2] = 1;
  v6 = (int)(v5 + 4);
  *((_BYTE *)v5 + 12) = 0;
  *v5 = &off_26E97EC;
  v7 = *((_DWORD *)v3 + 9);
  v8 = *((_DWORD *)v3 + 10);
  *(_DWORD *)v6 = *((_DWORD *)v3 + 8);
  *(_DWORD *)(v6 + 4) = v7;
  *(_DWORD *)(v6 + 8) = v8;
  CompoundTag::CompoundTag((int)(v5 + 7), (int)&v11);
  CompoundTag::~CompoundTag((CompoundTag *)&v11);
  *(_DWORD *)v4 = v5;
  return CompoundTag::~CompoundTag((CompoundTag *)&v10);
}


void __fastcall MobSpawnerBlockEntity::~MobSpawnerBlockEntity(MobSpawnerBlockEntity *this)
{
  MobSpawnerBlockEntity::~MobSpawnerBlockEntity(this);
}


signed int __fastcall MobSpawnerBlockEntity::save(MobSpawnerBlockEntity *this, CompoundTag *a2)
{
  MobSpawnerBlockEntity *v2; // r5@1
  signed int result; // r0@2

  v2 = this;
  if ( BlockEntity::save(this, a2) == 1 )
  {
    (*(void (**)(void))(**((_DWORD **)v2 + 26) + 16))();
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall MobSpawnerBlockEntity::tick(MobSpawnerBlockEntity *this, BlockSource *a2)
{
  MobSpawnerBlockEntity *v2; // r5@1

  v2 = this;
  BlockEntity::tick(this, a2);
  return (*(int (**)(void))(**((_DWORD **)v2 + 26) + 8))();
}


int __fastcall MobSpawnerBlockEntity::load(MobSpawnerBlockEntity *this, const CompoundTag *a2)
{
  MobSpawnerBlockEntity *v2; // r5@1

  v2 = this;
  BlockEntity::load(this, a2);
  return (*(int (**)(void))(**((_DWORD **)v2 + 26) + 12))();
}


BlockEntity *__fastcall MobSpawnerBlockEntity::~MobSpawnerBlockEntity(MobSpawnerBlockEntity *this)
{
  MobSpawnerBlockEntity *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2709FF4;
  v2 = *((_DWORD *)this + 26);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 26) = 0;
  return j_j_j__ZN11BlockEntityD2Ev_0(v1);
}


int __fastcall MobSpawnerBlockEntity::MobSpawnerBlockEntity(int a1, int a2)
{
  int v2; // r5@1
  int v3; // r4@1
  void *v4; // r0@1
  _DWORD *v5; // r6@2
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  sub_21E94B4((void **)&v9, "MobSpawner");
  BlockEntity::BlockEntity(v3, 5, v2);
  v4 = (void *)(v9 - 12);
  if ( (int *)(v9 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v9 - 4);
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
      j_j_j_j__ZdlPv_9(v4);
  }
  *(_DWORD *)v3 = &off_2709FF4;
  v5 = operator new(0x50u);
  BaseMobSpawner::BaseMobSpawner((int)v5, 1);
  *v5 = &off_270A070;
  v5[19] = v3;
  *(_DWORD *)(v3 + 104) = v5;
  *(_DWORD *)(v3 + 84) = 3;
  return v3;
}


void __fastcall MobSpawnerBlockEntity::~MobSpawnerBlockEntity(MobSpawnerBlockEntity *this)
{
  MobSpawnerBlockEntity *v1; // r4@1
  int v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_2709FF4;
  v2 = *((_DWORD *)this + 26);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 26) = 0;
  BlockEntity::~BlockEntity(v1);
  j_j_j__ZdlPv_6((void *)v1);
}
