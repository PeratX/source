

void __fastcall EntityDamageByEntitySource::~EntityDamageByEntitySource(EntityDamageByEntitySource *this)
{
  EntityDamageByEntitySource::~EntityDamageByEntitySource(this);
}


void __fastcall EntityDamageByEntitySource::~EntityDamageByEntitySource(EntityDamageByEntitySource *this)
{
  EntityDamageByEntitySource *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26F1470;
  v2 = *((_DWORD *)this + 8);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  operator delete((void *)v1);
}


int __fastcall EntityDamageByEntitySource::getEntityUniqueID(int result, int a2)
{
  *(_QWORD *)result = *(_QWORD *)(a2 + 16);
  return result;
}


void __fastcall EntityDamageByEntitySource::getDeathMessage(int a1, int a2, int *a3, int a4)
{
  int v4; // r4@1
  int v5; // r7@1
  int v6; // r8@1
  int *v7; // r5@1
  int v8; // r0@2
  int v9; // r0@2
  const void **v10; // r0@6
  const void **v11; // r0@6
  char *v12; // r0@6
  char *v13; // r0@7
  void *v14; // r0@8
  int v15; // r0@9
  __int64 v16; // r5@12
  int v17; // r1@12
  void *v18; // r0@12
  void *v19; // r0@13
  unsigned int *v20; // r2@14
  signed int v21; // r1@16
  __int64 v22; // r5@19
  int v23; // r1@19
  void *v24; // r0@19
  __int64 v25; // r5@25
  int v26; // r1@25
  void *v27; // r0@25
  __int64 v28; // r5@36
  int v29; // r1@36
  void *v30; // r0@36
  char *v31; // r0@45
  unsigned int *v32; // r2@47
  signed int v33; // r1@49
  unsigned int *v34; // r2@55
  signed int v35; // r1@57
  unsigned int *v36; // r2@59
  signed int v37; // r1@61
  unsigned int *v38; // r2@63
  signed int v39; // r1@65
  unsigned int *v40; // r2@67
  signed int v41; // r1@69
  unsigned int *v42; // r2@71
  signed int v43; // r1@73
  unsigned int *v44; // r2@75
  signed int v45; // r1@77
  unsigned int *v46; // r2@79
  signed int v47; // r1@81
  int v48; // [sp+4h] [bp-6Ch]@31
  int v49; // [sp+8h] [bp-68h]@12
  int v50; // [sp+Ch] [bp-64h]@12
  int v51; // [sp+10h] [bp-60h]@12
  int v52; // [sp+14h] [bp-5Ch]@25
  int v53; // [sp+18h] [bp-58h]@25
  int v54; // [sp+1Ch] [bp-54h]@36
  int v55; // [sp+20h] [bp-50h]@19
  int v56; // [sp+24h] [bp-4Ch]@19
  int v57; // [sp+28h] [bp-48h]@6
  char *v58; // [sp+2Ch] [bp-44h]@6
  char *v59; // [sp+30h] [bp-40h]@6
  char *v60; // [sp+34h] [bp-3Ch]@1

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  v60 = (char *)&unk_28898CC;
  if ( EntityClassTree::isOfType(*(_DWORD *)(a2 + 24), 319) == 1 )
  {
    v8 = BlockSource::getLevel(*(BlockSource **)(v5 + 8));
    v9 = Level::fetchEntity(v8, 0, *(_QWORD *)(v5 + 16), *(_QWORD *)(v5 + 16) >> 32, 0);
    if ( v9 )
      EntityInteraction::setInteractText((int *)&v60, (int *)(v9 + 4316));
  }
  else if ( *(_DWORD *)(*(_DWORD *)(v5 + 32) - 12) )
    EntityInteraction::setInteractText((int *)&v60, (int *)(v5 + 32));
  else
    EntityTypeToString((void **)&v57, *(_DWORD *)(v5 + 24), 0);
    v10 = sub_21E82D8((const void **)&v57, 0, (unsigned int)"%entity.", (_BYTE *)8);
    v58 = (char *)*v10;
    *v10 = &unk_28898CC;
    v11 = sub_21E7408((const void **)&v58, ".name", 5u);
    v59 = (char *)*v11;
    *v11 = &unk_28898CC;
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
      (int *)&v60,
      (int *)&v59);
    v12 = v59 - 12;
    if ( (int *)(v59 - 12) != &dword_28898C0 )
    {
      v42 = (unsigned int *)(v59 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
      }
      else
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j__ZdlPv_9(v12);
    }
    v13 = v58 - 12;
    if ( (int *)(v58 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v58 - 4);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
    v14 = (void *)(v57 - 12);
    if ( (int *)(v57 - 12) != &dword_28898C0 )
      v46 = (unsigned int *)(v57 - 4);
          v47 = __ldrex(v46);
        while ( __strex(v47 - 1, v46) );
        v47 = (*v46)--;
      if ( v47 <= 0 )
        j_j_j_j__ZdlPv_9(v14);
  v15 = *(_DWORD *)(v5 + 4);
  if ( (unsigned int)(v15 - 2) < 2 )
    if ( EntityClassTree::hasCategory((_DWORD *)(v5 + 28), 1) == 1 )
      sub_21E8AF4(&v55, v7);
      sub_21E8AF4(&v56, (int *)&v60);
      LODWORD(v22) = operator new(8u);
      HIDWORD(v22) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                       (int)&v55,
                       (int)&v57,
                       v22);
      sub_21E94B4((void **)v4, "death.attack.player");
      *(_QWORD *)(v4 + 4) = v22;
      v23 = v56;
      *(_DWORD *)(v4 + 12) = v22 + 8;
      v24 = (void *)(v23 - 12);
      if ( (int *)(v23 - 12) != &dword_28898C0 )
        v38 = (unsigned int *)(v23 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v39 = __ldrex(v38);
          while ( __strex(v39 - 1, v38) );
        }
        else
          v39 = (*v38)--;
        if ( v39 <= 0 )
          j_j_j_j__ZdlPv_9(v24);
      v19 = (void *)(v55 - 12);
      if ( (int *)(v55 - 12) != &dword_28898C0 )
        v20 = (unsigned int *)(v55 - 4);
            v21 = __ldrex(v20);
          while ( __strex(v21 - 1, v20) );
          goto LABEL_41;
        goto LABEL_42;
    else
      sub_21E8AF4(&v53, v7);
      sub_21E8AF4(&v54, (int *)&v60);
      LODWORD(v28) = operator new(8u);
      HIDWORD(v28) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                       (int)&v53,
                       v28);
      sub_21E94B4((void **)v4, "death.attack.mob");
      *(_QWORD *)(v4 + 4) = v28;
      v29 = v54;
      *(_DWORD *)(v4 + 12) = v28 + 8;
      v30 = (void *)(v29 - 12);
      if ( (int *)(v29 - 12) != &dword_28898C0 )
        v40 = (unsigned int *)(v29 - 4);
            v41 = __ldrex(v40);
          while ( __strex(v41 - 1, v40) );
          v41 = (*v40)--;
        if ( v41 <= 0 )
          j_j_j_j__ZdlPv_9(v30);
      v19 = (void *)(v53 - 12);
      if ( (int *)(v53 - 12) != &dword_28898C0 )
        v20 = (unsigned int *)(v53 - 4);
  else if ( v15 == 11 )
    sub_21E8AF4(&v51, v7);
    sub_21E8AF4(&v52, (int *)&v60);
    LODWORD(v25) = operator new(8u);
    HIDWORD(v25) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                     (int)&v51,
                     (int)&v53,
                     v25);
    sub_21E94B4((void **)v4, "death.attack.explosion.player");
    *(_QWORD *)(v4 + 4) = v25;
    v26 = v52;
    *(_DWORD *)(v4 + 12) = v25 + 8;
    v27 = (void *)(v26 - 12);
    if ( (int *)(v26 - 12) != &dword_28898C0 )
      v36 = (unsigned int *)(v26 - 4);
          v37 = __ldrex(v36);
        while ( __strex(v37 - 1, v36) );
        v37 = (*v36)--;
      if ( v37 <= 0 )
        j_j_j_j__ZdlPv_9(v27);
    v19 = (void *)(v51 - 12);
    if ( (int *)(v51 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v51 - 4);
          v21 = __ldrex(v20);
        while ( __strex(v21 - 1, v20) );
        goto LABEL_41;
      goto LABEL_42;
    if ( v15 != 14 )
      sub_21E8AF4(&v48, v7);
      EntityDamageSource::getDeathMessage(v4, v5, &v48, v6);
      v19 = (void *)(v48 - 12);
      if ( (int *)(v48 - 12) == &dword_28898C0 )
        goto LABEL_45;
      v20 = (unsigned int *)(v48 - 4);
LABEL_42:
      v21 = (*v20)--;
LABEL_43:
      if ( v21 <= 0 )
        j_j_j_j__ZdlPv_9(v19);
      goto LABEL_45;
    sub_21E8AF4(&v49, v7);
    sub_21E8AF4(&v50, (int *)&v60);
    LODWORD(v16) = operator new(8u);
    HIDWORD(v16) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                     (int)&v49,
                     v16);
    sub_21E94B4((void **)v4, "death.attack.indirectMagic");
    *(_QWORD *)(v4 + 4) = v16;
    v17 = v50;
    *(_DWORD *)(v4 + 12) = v16 + 8;
    v18 = (void *)(v17 - 12);
    if ( (int *)(v17 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v17 - 4);
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
    v19 = (void *)(v49 - 12);
    if ( (int *)(v49 - 12) != &dword_28898C0 )
      v20 = (unsigned int *)(v49 - 4);
LABEL_41:
        goto LABEL_43;
LABEL_45:
  v31 = v60 - 12;
  if ( (int *)(v60 - 12) != &dword_28898C0 )
    v32 = (unsigned int *)(v60 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v33 = __ldrex(v32);
      while ( __strex(v33 - 1, v32) );
      v33 = (*v32)--;
    if ( v33 <= 0 )
      j_j_j_j__ZdlPv_9(v31);
}


signed int __fastcall EntityDamageByEntitySource::isEntitySource(EntityDamageByEntitySource *this)
{
  return 1;
}


EntityDamageByEntitySource *__fastcall EntityDamageByEntitySource::~EntityDamageByEntitySource(EntityDamageByEntitySource *this)
{
  EntityDamageByEntitySource *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26F1470;
  v2 = *((_DWORD *)this + 8);
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
      j_j_j_j__ZdlPv_9(v3);
  }
  return v1;
}


int __fastcall EntityDamageByEntitySource::EntityDamageByEntitySource(int a1, Entity *a2, int a3)
{
  int v3; // r4@1
  Entity *v4; // r5@1
  int *v5; // r0@1

  v3 = a1;
  v4 = a2;
  *(_DWORD *)a1 = &off_26F1470;
  *(_DWORD *)(a1 + 4) = a3;
  *(_DWORD *)(a1 + 8) = Entity::getRegion(a2);
  *(_BYTE *)(v3 + 12) = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v4 + 648))(v4);
  *(_BYTE *)(v3 + 13) = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v4 + 652))(v4);
  *(_QWORD *)(v3 + 16) = *(_QWORD *)Entity::getUniqueID(v4);
  *(_DWORD *)(v3 + 24) = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v4 + 488))(v4);
  *(_DWORD *)(v3 + 28) = *((_DWORD *)v4 + 43);
  v5 = (int *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v4 + 188))(v4);
  sub_21E8AF4((int *)(v3 + 32), v5);
  return v3;
}


void __fastcall EntityDamageByEntitySource::getDeathMessage(int a1, int a2, int *a3, int a4)
{
  EntityDamageByEntitySource::getDeathMessage(a1, a2, a3, a4);
}
