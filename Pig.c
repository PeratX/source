

signed int __fastcall Pig::useNewAi(Pig *this)
{
  return 1;
}


void __fastcall Pig::~Pig(Pig *this)
{
  Pig::~Pig(this);
}


int __fastcall Pig::_hurt(Pig *this, const EntityDamageSource *a2, __int64 a3, bool a4)
{
  const EntityDamageSource *v4; // r6@1
  Pig *v5; // r7@1
  Level *v6; // r0@2
  Entity **v7; // r9@3
  Entity **i; // r10@3
  unsigned int *v9; // r2@5
  signed int v10; // r1@7
  unsigned int *v11; // r2@9
  signed int v12; // r1@11
  unsigned int *v13; // r2@13
  signed int v14; // r1@15
  Entity *v15; // r5@30
  void *v16; // r0@30
  void *v17; // r0@31
  void *v18; // r0@32
  __int64 v20; // [sp+8h] [bp-98h]@1
  void **v21; // [sp+10h] [bp-90h]@30
  int v22; // [sp+48h] [bp-58h]@13
  int v23; // [sp+4Ch] [bp-54h]@9
  int v24; // [sp+50h] [bp-50h]@5
  int v25; // [sp+58h] [bp-48h]@30
  char v26; // [sp+5Ch] [bp-44h]@30
  int v27; // [sp+60h] [bp-40h]@30

  v4 = a2;
  v5 = this;
  v20 = a3;
  if ( j_EntityDamageSource::getCause(a2) == 5 )
  {
    v6 = (Level *)j_Entity::getLevel(v5);
    if ( !j_Level::isClientSide(v6) )
    {
      v7 = (Entity **)(*(_QWORD *)((char *)v5 + 476) >> 32);
      for ( i = (Entity **)*(_QWORD *)((char *)v5 + 476); i != v7; ++i )
      {
        if ( j_Entity::hasCategory((int)*i, 1) == 1 )
        {
          v26 = 1;
          v25 = 0;
          v27 = 56;
          v15 = *i;
          j_EventPacket::EventPacket((int)&v21, *i, (int)&v25);
          (*(void (__fastcall **)(Entity *, void ***))(*(_DWORD *)v15 + 1448))(v15, &v21);
          v21 = &off_26E9D30;
          v16 = (void *)(v24 - 12);
          if ( (int *)(v24 - 12) != &dword_28898C0 )
          {
            v9 = (unsigned int *)(v24 - 4);
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
              j_j_j_j__ZdlPv_9(v16);
          }
          v17 = (void *)(v23 - 12);
          if ( (int *)(v23 - 12) != &dword_28898C0 )
            v11 = (unsigned int *)(v23 - 4);
                v12 = __ldrex(v11);
              while ( __strex(v12 - 1, v11) );
              v12 = (*v11)--;
            if ( v12 <= 0 )
              j_j_j_j__ZdlPv_9(v17);
          v18 = (void *)(v22 - 12);
          if ( (int *)(v22 - 12) != &dword_28898C0 )
            v13 = (unsigned int *)(v22 - 4);
                v14 = __ldrex(v13);
              while ( __strex(v14 - 1, v13) );
              v14 = (*v13)--;
            if ( v14 <= 0 )
              j_j_j_j__ZdlPv_9(v18);
        }
      }
    }
  }
  return j_Animal::_hurt(v5, v4, v20, SHIDWORD(v20), a4);
}


signed int __fastcall Pig::getEntityTypeId(Pig *this)
{
  return 4876;
}


int __fastcall Pig::_playStepSound(Pig *this, const BlockPos *a2, int a3)
{
  Pig *v3; // r4@1
  char v5; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  j_Entity::getAttachPos((AABB *)&v5, (int)this, 0, 0);
  return j_Entity::playSound((int)v3, 2, (int)&v5);
}


int __fastcall Pig::Pig(int a1, int a2, int *a3)
{
  int result; // r0@1

  result = j_Animal::Animal(a1, a2, a3);
  *(_DWORD *)result = &off_271D430;
  *(_DWORD *)(result + 248) = 8;
  *(_DWORD *)(result + 3984) = 1072064102;
  return result;
}


void __fastcall Pig::~Pig(Pig *this)
{
  Entity *v1; // r0@1

  v1 = j_Mob::~Mob(this);
  j_j_j__ZdlPv_7((void *)v1);
}
