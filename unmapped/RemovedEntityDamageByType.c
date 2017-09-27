

int __fastcall RemovedEntityDamageByType::RemovedEntityDamageByType(int result, int a2, int a3)
{
  *(_DWORD *)result = &off_26F1428;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = a3;
  return result;
}


void __fastcall RemovedEntityDamageByType::getDeathMessage(int a1, int a2, int *a3, int a4)
{
  RemovedEntityDamageByType::getDeathMessage(a1, a2, a3, a4);
}


void __fastcall RemovedEntityDamageByType::getDeathMessage(int a1, int a2, int *a3, int a4)
{
  int v4; // r4@1
  int v5; // r7@1
  int v6; // r8@1
  int *v7; // r5@1
  const void **v8; // r0@1
  const void **v9; // r0@1
  char *v10; // r0@1
  char *v11; // r0@2
  void *v12; // r0@3
  int v13; // r0@4
  __int64 v14; // r5@6
  int v15; // r1@6
  void *v16; // r0@6
  void *v17; // r0@7
  unsigned int *v18; // r2@8
  signed int v19; // r1@10
  __int64 v20; // r5@12
  int v21; // r1@12
  void *v22; // r0@12
  char *v23; // r0@19
  unsigned int *v24; // r2@21
  signed int v25; // r1@23
  unsigned int *v26; // r2@25
  signed int v27; // r1@27
  unsigned int *v28; // r2@29
  signed int v29; // r1@31
  unsigned int *v30; // r2@33
  signed int v31; // r1@35
  unsigned int *v32; // r2@61
  signed int v33; // r1@63
  unsigned int *v34; // r2@65
  signed int v35; // r1@67
  int v36; // [sp+4h] [bp-54h]@18
  int v37; // [sp+8h] [bp-50h]@6
  int v38; // [sp+Ch] [bp-4Ch]@6
  int v39; // [sp+10h] [bp-48h]@6
  int v40; // [sp+14h] [bp-44h]@12
  int v41; // [sp+18h] [bp-40h]@1
  char *v42; // [sp+1Ch] [bp-3Ch]@1
  char *v43; // [sp+20h] [bp-38h]@1
  char *v44; // [sp+24h] [bp-34h]@1

  v4 = a1;
  v5 = a2;
  v6 = a4;
  v7 = a3;
  v44 = (char *)&unk_28898CC;
  EntityTypeToString((void **)&v41, *(_DWORD *)(a2 + 8), 0);
  v8 = sub_21E82D8((const void **)&v41, 0, (unsigned int)"%entity.", (_BYTE *)8);
  v42 = (char *)*v8;
  *v8 = &unk_28898CC;
  v9 = sub_21E7408((const void **)&v42, ".name", 5u);
  v43 = (char *)*v9;
  *v9 = &unk_28898CC;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)&v44,
    (int *)&v43);
  v10 = v43 - 12;
  if ( (int *)(v43 - 12) != &dword_28898C0 )
  {
    v24 = (unsigned int *)(v43 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v25 = __ldrex(v24);
      while ( __strex(v25 - 1, v24) );
    }
    else
      v25 = (*v24)--;
    if ( v25 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  }
  v11 = v42 - 12;
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v26 = (unsigned int *)(v42 - 4);
        v27 = __ldrex(v26);
      while ( __strex(v27 - 1, v26) );
      v27 = (*v26)--;
    if ( v27 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  v12 = (void *)(v41 - 12);
  if ( (int *)(v41 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v41 - 4);
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = *(_DWORD *)(v5 + 4);
  if ( v13 == 2 )
    sub_21E8AF4(&v39, v7);
    sub_21E8AF4(&v40, (int *)&v44);
    LODWORD(v20) = operator new(8u);
    HIDWORD(v20) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                     (int)&v39,
                     (int)&v41,
                     v20);
    sub_21E94B4((void **)v4, "death.attack.mob");
    *(_QWORD *)(v4 + 4) = v20;
    v21 = v40;
    *(_DWORD *)(v4 + 12) = v20 + 8;
    v22 = (void *)(v21 - 12);
    if ( (int *)(v21 - 12) != &dword_28898C0 )
      v34 = (unsigned int *)(v21 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v35 = __ldrex(v34);
        while ( __strex(v35 - 1, v34) );
      }
      else
        v35 = (*v34)--;
      if ( v35 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    v17 = (void *)(v39 - 12);
    if ( (int *)(v39 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v39 - 4);
          v19 = __ldrex(v18);
        while ( __strex(v19 - 1, v18) );
        goto LABEL_56;
      goto LABEL_57;
  else
    if ( v13 != 11 )
      sub_21E8AF4(&v36, v7);
      EntityDamageSource::getDeathMessage(v4, v5, &v36, v6);
      v17 = (void *)(v36 - 12);
      if ( (int *)(v36 - 12) == &dword_28898C0 )
        goto LABEL_19;
      v18 = (unsigned int *)(v36 - 4);
LABEL_57:
      v19 = (*v18)--;
LABEL_58:
      if ( v19 <= 0 )
        j_j_j_j__ZdlPv_9(v17);
      goto LABEL_19;
    sub_21E8AF4(&v37, v7);
    sub_21E8AF4(&v38, (int *)&v44);
    LODWORD(v14) = operator new(8u);
    HIDWORD(v14) = std::__uninitialized_copy<false>::__uninit_copy<std::string const*,std::string *>(
                     (int)&v37,
                     v14);
    sub_21E94B4((void **)v4, "death.attack.explosion.player");
    *(_QWORD *)(v4 + 4) = v14;
    v15 = v38;
    *(_DWORD *)(v4 + 12) = v14 + 8;
    v16 = (void *)(v15 - 12);
    if ( (int *)(v15 - 12) != &dword_28898C0 )
      v32 = (unsigned int *)(v15 - 4);
          v33 = __ldrex(v32);
        while ( __strex(v33 - 1, v32) );
        v33 = (*v32)--;
      if ( v33 <= 0 )
        j_j_j_j__ZdlPv_9(v16);
    v17 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v18 = (unsigned int *)(v37 - 4);
LABEL_56:
        goto LABEL_58;
LABEL_19:
  v23 = v44 - 12;
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v30 = (unsigned int *)(v44 - 4);
        v31 = __ldrex(v30);
      while ( __strex(v31 - 1, v30) );
      v31 = (*v30)--;
    if ( v31 <= 0 )
      j_j_j_j__ZdlPv_9(v23);
}
