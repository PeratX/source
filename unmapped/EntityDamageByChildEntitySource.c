

EntityDamageByChildEntitySource *__fastcall EntityDamageByChildEntitySource::~EntityDamageByChildEntitySource(EntityDamageByChildEntitySource *this)
{
  EntityDamageByChildEntitySource *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26F14B8;
  v2 = *((_DWORD *)this + 14);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  *(_DWORD *)v1 = &off_26F1470;
  v4 = *((_DWORD *)v1 + 8);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v9 = (unsigned int *)(v4 - 4);
        v10 = __ldrex(v9);
      while ( __strex(v10 - 1, v9) );
      v10 = (*v9)--;
    if ( v10 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  return v1;
}


void __fastcall EntityDamageByChildEntitySource::getDeathMessage(int a1, int a2, int *a3, int a4)
{
  EntityDamageByChildEntitySource::getDeathMessage(a1, a2, a3, a4);
}


void __fastcall EntityDamageByChildEntitySource::~EntityDamageByChildEntitySource(EntityDamageByChildEntitySource *this)
{
  EntityDamageByChildEntitySource::~EntityDamageByChildEntitySource(this);
}


signed int __fastcall EntityDamageByChildEntitySource::isChildEntitySource(EntityDamageByChildEntitySource *this)
{
  return 1;
}


void __fastcall EntityDamageByChildEntitySource::~EntityDamageByChildEntitySource(EntityDamageByChildEntitySource *this)
{
  EntityDamageByChildEntitySource *v1; // r5@1
  int v2; // r1@1
  void *v3; // r0@1
  int v4; // r1@2
  void *v5; // r0@2
  unsigned int *v6; // r2@4
  signed int v7; // r1@6
  unsigned int *v8; // r2@8
  signed int v9; // r1@10

  v1 = this;
  *(_DWORD *)this = &off_26F14B8;
  v2 = *((_DWORD *)this + 14);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v2 - 4);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  *(_DWORD *)v1 = &off_26F1470;
  v4 = *((_DWORD *)v1 + 8);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
    v8 = (unsigned int *)(v4 - 4);
        v9 = __ldrex(v8);
      while ( __strex(v9 - 1, v8) );
      v9 = (*v8)--;
    if ( v9 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  operator delete((void *)v1);
}


void __fastcall EntityDamageByChildEntitySource::getDeathMessage(int a1, int a2, int *a3, int a4)
{
  int v4; // r7@1
  int v5; // r4@1
  int v6; // r6@1
  int *v7; // r8@1
  int v8; // r0@3
  int v9; // r6@3
  char *v10; // r0@6
  unsigned int *v11; // r2@7
  signed int v12; // r1@9
  int (__fastcall *v13)(int, int *); // r5@12
  const void **v14; // r0@13
  int v15; // r7@13
  void *v16; // r0@13
  int *v17; // r0@15
  void *v18; // r0@16
  unsigned int v19; // r0@17
  const void **v20; // r0@17
  const void **v21; // r0@17
  char *v22; // r0@17
  char *v23; // r0@18
  void *v24; // r0@19
  __int64 v25; // r5@20
  int v26; // r1@20
  void *v27; // r0@20
  void *v28; // r0@21
  unsigned int *v29; // r2@24
  signed int v30; // r1@26
  unsigned int *v31; // r2@28
  signed int v32; // r1@30
  unsigned int *v33; // r2@47
  signed int v34; // r1@49
  unsigned int *v35; // r2@51
  signed int v36; // r1@53
  unsigned int *v37; // r2@55
  signed int v38; // r1@57
  unsigned int *v39; // r2@59
  signed int v40; // r1@61
  unsigned int *v41; // r2@63
  signed int v42; // r1@65
  int v43; // [sp+8h] [bp-50h]@6
  int v44; // [sp+Ch] [bp-4Ch]@20
  int v45; // [sp+10h] [bp-48h]@20
  int v46; // [sp+14h] [bp-44h]@17
  char *v47; // [sp+18h] [bp-40h]@17
  char *v48; // [sp+1Ch] [bp-3Ch]@17
  int v49; // [sp+24h] [bp-34h]@12
  char *v50; // [sp+28h] [bp-30h]@3

  v4 = a2;
  v5 = a1;
  v6 = a4;
  v7 = a3;
  if ( *(_DWORD *)(a2 + 4) != 3 || EntityClassTree::isOfType(*(_DWORD *)(a2 + 48), 4194384) != 1 )
  {
    sub_21E8AF4(&v43, v7);
    EntityDamageByEntitySource::getDeathMessage(v5, v4, &v43, v6);
    v10 = (char *)(v43 - 12);
    if ( (int *)(v43 - 12) == &dword_28898C0 )
      return;
    v11 = (unsigned int *)(v43 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v12 = __ldrex(v11);
      while ( __strex(v12 - 1, v11) );
      goto LABEL_37;
    }
    goto LABEL_36;
  }
  v50 = (char *)&unk_28898CC;
  v8 = BlockSource::getLevel(*(BlockSource **)(v4 + 8));
  v9 = Level::fetchEntity(v8, 0, *(_QWORD *)(v4 + 40), *(_QWORD *)(v4 + 40) >> 32, 0);
  if ( v9 )
    if ( EntityClassTree::hasCategory((_DWORD *)(v4 + 52), 1) == 1 )
      EntityInteraction::setInteractText((int *)&v50, (int *)(v9 + 4316));
    else
      v13 = *(int (__fastcall **)(int, int *))(*(_DWORD *)v9 + 16);
      sub_21E94B4((void **)&v49, "minecraft:nameable");
      if ( v13(v9, &v49) == 1 )
      {
        v14 = (const void **)(*(int (__fastcall **)(int))(*(_DWORD *)v9 + 188))(v9);
        v15 = sub_21E7D6C(v14, (const char *)&unk_257BC67);
        v16 = (void *)(v49 - 12);
        if ( (int *)(v49 - 12) != &dword_28898C0 )
        {
          v41 = (unsigned int *)(v49 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v42 = __ldrex(v41);
            while ( __strex(v42 - 1, v41) );
          }
          else
            v42 = (*v41)--;
          if ( v42 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
        }
        if ( v15 )
          v17 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v9 + 188))(v9);
          EntityInteraction::setInteractText((int *)&v50, v17);
          goto LABEL_20;
      }
      else
        v18 = (void *)(v49 - 12);
          v39 = (unsigned int *)(v49 - 4);
              v40 = __ldrex(v39);
            while ( __strex(v40 - 1, v39) );
            v40 = (*v39)--;
          if ( v40 <= 0 )
            j_j_j_j__ZdlPv_9(v18);
      v19 = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 488))(v9);
      EntityTypeToString((void **)&v46, v19, 0);
      v20 = sub_21E82D8((const void **)&v46, 0, (unsigned int)"%entity.", (_BYTE *)8);
      v47 = (char *)*v20;
      *v20 = &unk_28898CC;
      v21 = sub_21E7408((const void **)&v47, ".name", 5u);
      v48 = (char *)*v21;
      *v21 = &unk_28898CC;
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
        (int *)&v50,
        (int *)&v48);
      v22 = v48 - 12;
      if ( (int *)(v48 - 12) != &dword_28898C0 )
        v33 = (unsigned int *)(v48 - 4);
        if ( &pthread_create )
          __dmb();
          do
            v34 = __ldrex(v33);
          while ( __strex(v34 - 1, v33) );
        else
          v34 = (*v33)--;
        if ( v34 <= 0 )
          j_j_j_j__ZdlPv_9(v22);
      v23 = v47 - 12;
      if ( (int *)(v47 - 12) != &dword_28898C0 )
        v35 = (unsigned int *)(v47 - 4);
            v36 = __ldrex(v35);
          while ( __strex(v36 - 1, v35) );
          v36 = (*v35)--;
        if ( v36 <= 0 )
          j_j_j_j__ZdlPv_9(v23);
      v24 = (void *)(v46 - 12);
      if ( (int *)(v46 - 12) != &dword_28898C0 )
        v37 = (unsigned int *)(v46 - 4);
            v38 = __ldrex(v37);
          while ( __strex(v38 - 1, v37) );
          v38 = (*v37)--;
        if ( v38 <= 0 )
          j_j_j_j__ZdlPv_9(v24);
  else
    EntityInteraction::setInteractText((int *)&v50, (int *)(v4 + 56));
LABEL_20:
  sub_21E8AF4(&v44, v7);
  sub_21E8AF4(&v45, (int *)&v50);
  LODWORD(v25) = operator new(8u);
  HIDWORD(v25) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                   (int)&v44,
                   (int)&v46,
                   v25);
  sub_21E94B4((void **)v5, "death.attack.arrow");
  *(_QWORD *)(v5 + 4) = v25;
  v26 = v45;
  *(_DWORD *)(v5 + 12) = v25 + 8;
  v27 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v26 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
  v28 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v44 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v10 = v50 - 12;
  if ( (int *)(v50 - 12) != &dword_28898C0 )
    v11 = (unsigned int *)(v50 - 4);
LABEL_36:
    v12 = (*v11)--;
LABEL_37:
    if ( v12 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
}


int __fastcall EntityDamageByChildEntitySource::getDamagingEntityUniqueID(int result, int a2)
{
  *(_QWORD *)result = *(_QWORD *)(a2 + 40);
  return result;
}


int __fastcall EntityDamageByChildEntitySource::EntityDamageByChildEntitySource(int a1, int a2, Entity *a3, int a4)
{
  int v4; // r4@1
  Entity *v5; // r6@1
  int v6; // r5@1
  int *v7; // r0@1
  int *v8; // r0@1

  v4 = a1;
  v5 = a3;
  v6 = a2;
  *(_DWORD *)a1 = &off_26F1470;
  *(_DWORD *)(a1 + 4) = a4;
  *(_DWORD *)(a1 + 8) = Entity::getRegion(a3);
  *(_BYTE *)(v4 + 12) = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v5 + 648))(v5);
  *(_BYTE *)(v4 + 13) = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v5 + 652))(v5);
  *(_QWORD *)(v4 + 16) = *(_QWORD *)Entity::getUniqueID(v5);
  *(_DWORD *)(v4 + 24) = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v5 + 488))(v5);
  *(_DWORD *)(v4 + 28) = *((_DWORD *)v5 + 43);
  v7 = (int *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v5 + 188))(v5);
  sub_21E8AF4((int *)(v4 + 32), v7);
  *(_DWORD *)v4 = &off_26F14B8;
  *(_BYTE *)(v4 + 36) = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 648))(v6);
  *(_BYTE *)(v4 + 37) = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 652))(v6);
  *(_QWORD *)(v4 + 40) = *(_QWORD *)Entity::getUniqueID((Entity *)v6);
  *(_DWORD *)(v4 + 48) = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 488))(v6);
  *(_DWORD *)(v4 + 52) = *(_DWORD *)(v6 + 172);
  v8 = (int *)(*(int (__fastcall **)(int))(*(_DWORD *)v6 + 188))(v6);
  sub_21E8AF4((int *)(v4 + 56), v8);
  return v4;
}
