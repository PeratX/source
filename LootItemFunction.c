

void __fastcall LootItemFunction::~LootItemFunction(LootItemFunction *this)
{
  LootItemFunction::~LootItemFunction(this);
}


void __fastcall LootItemFunction::deserialize(int *a1, Json::Value *a2)
{
  LootItemFunction::deserialize(a1, a2);
}


void __fastcall LootItemFunction::~LootItemFunction(LootItemFunction *this)
{
  LootItemFunction *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED

  v1 = this;
  *(_DWORD *)this = &off_2719858;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
    {
      if ( *(_DWORD *)v2 )
        (*(void (**)(void))(**(_DWORD **)v2 + 4))();
      *(_DWORD *)v2 = 0;
      v2 += 4;
    }
    while ( v3 != v2 );
    v2 = (char *)*((_DWORD *)v1 + 1);
  }
  if ( v2 )
    j_operator delete(v2);
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall LootItemFunction::apply(LootItemFunction *this, ItemInstance *a2, Random *a3, const Trade *a4, LootTableContext *a5)
{
  (*(void (**)(void))(*(_DWORD *)this + 8))();
  return 0;
}


LootItemFunction *__fastcall LootItemFunction::~LootItemFunction(LootItemFunction *this)
{
  LootItemFunction *v1; // r4@1
  char *v2; // r5@1 OVERLAPPED
  char *v3; // r6@1 OVERLAPPED

  v1 = this;
  *(_DWORD *)this = &off_2719858;
  *(_QWORD *)&v2 = *(_QWORD *)((char *)this + 4);
  if ( v2 != v3 )
  {
    do
    {
      if ( *(_DWORD *)v2 )
        (*(void (**)(void))(**(_DWORD **)v2 + 4))();
      *(_DWORD *)v2 = 0;
      v2 += 4;
    }
    while ( v3 != v2 );
    v2 = (char *)*((_DWORD *)v1 + 1);
  }
  if ( v2 )
    j_operator delete(v2);
  return v1;
}


void __fastcall LootItemFunction::deserialize(int *a1, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  int *v3; // r4@1
  int v4; // r6@1
  void *v5; // r0@1
  _BYTE *v6; // r0@2
  int v7; // r2@3
  unsigned int v8; // r3@3
  void *v9; // r0@4
  int v10; // r0@17
  int v11; // r1@17
  char *v12; // r0@20
  int v13; // r0@21
  int v14; // r1@21
  int v15; // r0@25
  int v16; // r1@25
  int v17; // r0@29
  int v18; // r1@29
  int v19; // r0@33
  int v20; // r1@33
  unsigned int *v21; // r2@37
  signed int v22; // r1@39
  int v23; // r0@41
  int v24; // r1@41
  unsigned int *v25; // r2@45
  signed int v26; // r1@47
  int v27; // r0@49
  int v28; // r1@49
  int v29; // r0@57
  int v30; // r1@57
  int v31; // r0@65
  int v32; // r1@65
  _DWORD *v33; // r0@69
  int v34; // r3@69
  int v35; // r1@69
  int v36; // r0@72
  int v37; // r1@72
  int v38; // r0@76
  int v39; // r1@76
  void *v40; // r0@81
  __int64 v41; // r4@82
  unsigned int *v42; // r2@90
  signed int v43; // r1@92
  int v44; // [sp+0h] [bp-148h]@17
  int v45; // [sp+14h] [bp-134h]@17
  char v46; // [sp+18h] [bp-130h]@76
  int v47; // [sp+2Ch] [bp-11Ch]@76
  char v48; // [sp+30h] [bp-118h]@72
  int v49; // [sp+44h] [bp-104h]@72
  char v50; // [sp+48h] [bp-100h]@69
  char v51; // [sp+58h] [bp-F0h]@65
  int v52; // [sp+6Ch] [bp-DCh]@65
  char v53; // [sp+70h] [bp-D8h]@57
  int v54; // [sp+84h] [bp-C4h]@57
  char v55; // [sp+88h] [bp-C0h]@49
  int v56; // [sp+9Ch] [bp-ACh]@49
  char v57; // [sp+A0h] [bp-A8h]@41
  int v58; // [sp+B4h] [bp-94h]@41
  char v59; // [sp+B8h] [bp-90h]@33
  int v60; // [sp+CCh] [bp-7Ch]@33
  char v61; // [sp+D0h] [bp-78h]@29
  int v62; // [sp+E4h] [bp-64h]@29
  char v63; // [sp+E8h] [bp-60h]@25
  int v64; // [sp+FCh] [bp-4Ch]@25
  char v65; // [sp+100h] [bp-48h]@21
  int v66; // [sp+110h] [bp-38h]@21
  int v67; // [sp+114h] [bp-34h]@4
  int v68; // [sp+11Ch] [bp-2Ch]@1
  int v69; // [sp+120h] [bp-28h]@1
  int v70; // [sp+124h] [bp-24h]@1
  int v71; // [sp+128h] [bp-20h]@1
  int v72; // [sp+12Ch] [bp-1Ch]@1

  v2 = a2;
  v3 = a1;
  v70 = 0;
  v71 = 0;
  v72 = 0;
  *a1 = 0;
  v4 = j_Json::Value::operator[](a2, "function");
  sub_21E94B4((void **)&v68, (const char *)&unk_257BC67);
  j_Json::Value::asString(&v69, v4, &v68);
  v5 = (void *)(v68 - 12);
  if ( (int *)(v68 - 12) != &dword_28898C0 )
  {
    v21 = (unsigned int *)(v68 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j__ZdlPv_9(v5);
  }
  v6 = sub_21E78D0(&v69, 58, 0xFFFFFFFF);
  if ( v6 != (_BYTE *)-1 )
    v7 = (int)(v6 + 1);
    v8 = *(_DWORD *)(v69 - 12);
    if ( v8 < (unsigned int)(v6 + 1) )
      sub_21E5B04("%s: __pos (which is %zu) > this->size() (which is %zu)", (int)"basic_string::substr", v7, v8);
    sub_21E9040((void **)&v67, &v69, v7, 0xFFFFFFFF);
    xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v69, &v67);
    v9 = (void *)(v67 - 12);
    if ( (int *)(v67 - 12) != &dword_28898C0 )
      v25 = (unsigned int *)(v67 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v26 = __ldrex(v25);
        while ( __strex(v26 - 1, v25) );
      }
      else
        v26 = (*v25)--;
      if ( v26 <= 0 )
        j_j_j_j__ZdlPv_9(v9);
  if ( !sub_21E7D6C((const void **)&v69, "set_count") )
    j_Json::Value::Value((Json::Value *)&v65, v2);
    SetItemCountFunction::deserialize(&v66, (Json::Value *)&v65, (int)&v70);
    v13 = *v3;
    v14 = v66;
    v66 = 0;
    *v3 = v14;
    if ( v13 )
      (*(void (**)(void))(*(_DWORD *)v13 + 4))();
      if ( v66 )
        (*(void (**)(void))(*(_DWORD *)v66 + 4))();
    v12 = &v65;
    goto LABEL_80;
  if ( !sub_21E7D6C((const void **)&v69, "set_data") )
    j_Json::Value::Value((Json::Value *)&v63, v2);
    SetItemDataFunction::deserialize(&v64, (Json::Value *)&v63, (int)&v70);
    v15 = *v3;
    v16 = v64;
    v64 = 0;
    *v3 = v16;
    if ( v15 )
      (*(void (**)(void))(*(_DWORD *)v15 + 4))();
      if ( v64 )
        (*(void (**)(void))(*(_DWORD *)v64 + 4))();
    v12 = &v63;
  if ( !sub_21E7D6C((const void **)&v69, "set_damage") )
    j_Json::Value::Value((Json::Value *)&v61, v2);
    SetItemDamageFunction::deserialize(&v62, (Json::Value *)&v61, (int)&v70);
    v17 = *v3;
    v18 = v62;
    v62 = 0;
    *v3 = v18;
    if ( v17 )
      (*(void (**)(void))(*(_DWORD *)v17 + 4))();
      if ( v62 )
        (*(void (**)(void))(*(_DWORD *)v62 + 4))();
    v12 = &v61;
  if ( !sub_21E7D6C((const void **)&v69, "looting_enchant") )
    j_Json::Value::Value((Json::Value *)&v59, v2);
    LootingEnchantFunction::deserialize(&v60, (Json::Value *)&v59, (int)&v70);
    v19 = *v3;
    v20 = v60;
    v60 = 0;
    *v3 = v20;
    if ( v19 )
      (*(void (**)(void))(*(_DWORD *)v19 + 4))();
      if ( v60 )
        (*(void (**)(void))(*(_DWORD *)v60 + 4))();
    v12 = &v59;
  if ( !sub_21E7D6C((const void **)&v69, "enchant_with_levels") )
    j_Json::Value::Value((Json::Value *)&v57, v2);
    EnchantWithLevelsFunction::deserialize(&v58, (Json::Value *)&v57, (int)&v70);
    v23 = *v3;
    v24 = v58;
    v58 = 0;
    *v3 = v24;
    if ( v23 )
      (*(void (**)(void))(*(_DWORD *)v23 + 4))();
      if ( v58 )
        (*(void (**)(void))(*(_DWORD *)v58 + 4))();
    v12 = &v57;
  if ( !sub_21E7D6C((const void **)&v69, "enchant_book_for_trading") )
    j_Json::Value::Value((Json::Value *)&v55, v2);
    EnchantBookForTradingFunction::deserialize(&v56, (Json::Value *)&v55, (int)&v70);
    v27 = *v3;
    v28 = v56;
    v56 = 0;
    *v3 = v28;
    if ( v27 )
      (*(void (**)(void))(*(_DWORD *)v27 + 4))();
      if ( v56 )
        (*(void (**)(void))(*(_DWORD *)v56 + 4))();
    v12 = &v55;
  if ( !sub_21E7D6C((const void **)&v69, "enchant_randomly") )
    j_Json::Value::Value((Json::Value *)&v53, v2);
    EnchantRandomlyFunction::deserialize(&v54, (Json::Value *)&v53, (int)&v70);
    v29 = *v3;
    v30 = v54;
    v54 = 0;
    *v3 = v30;
    if ( v29 )
      (*(void (**)(void))(*(_DWORD *)v29 + 4))();
      if ( v54 )
        (*(void (**)(void))(*(_DWORD *)v54 + 4))();
    v12 = &v53;
  if ( !sub_21E7D6C((const void **)&v69, "furnace_smelt") )
    j_Json::Value::Value((Json::Value *)&v51, v2);
    SmeltItemFunction::deserialize(&v52, (int)&v51, (int)&v70);
    v31 = *v3;
    v32 = v52;
    v52 = 0;
    *v3 = v32;
    if ( v31 )
      (*(void (**)(void))(*(_DWORD *)v31 + 4))();
      if ( v52 )
        (*(void (**)(void))(*(_DWORD *)v52 + 4))();
    v12 = &v51;
  if ( !sub_21E7D6C((const void **)&v69, "set_data_from_color_index") )
    j_Json::Value::Value((Json::Value *)&v50, v2);
    v33 = j_operator new(0x10u);
    v33[1] = v70;
    v70 = 0;
    v34 = v71;
    v71 = 0;
    v33[2] = v34;
    v33[3] = v72;
    *v33 = &off_2719840;
    v35 = *v3;
    v72 = 0;
    *v3 = (int)v33;
    if ( v35 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v35 + 4))(v35);
    v12 = &v50;
  if ( !sub_21E7D6C((const void **)&v69, "enchant_random_gear") )
    j_Json::Value::Value((Json::Value *)&v48, v2);
    EnchantRandomEquipmentFunction::deserialize(&v49, (Json::Value *)&v48, (int)&v70);
    v36 = *v3;
    v37 = v49;
    v49 = 0;
    *v3 = v37;
    if ( v36 )
      (*(void (**)(void))(*(_DWORD *)v36 + 4))();
      if ( v49 )
        (*(void (**)(void))(*(_DWORD *)v49 + 4))();
    v12 = &v48;
  if ( !sub_21E7D6C((const void **)&v69, "random_aux_value") )
    j_Json::Value::Value((Json::Value *)&v46, v2);
    RandomAuxValueFunction::deserialize(&v47, (Json::Value *)&v46, (int)&v70);
    v38 = *v3;
    v39 = v47;
    v47 = 0;
    *v3 = v39;
    if ( v38 )
      (*(void (**)(void))(*(_DWORD *)v38 + 4))();
      if ( v47 )
        (*(void (**)(void))(*(_DWORD *)v47 + 4))();
    v12 = &v46;
  if ( !sub_21E7D6C((const void **)&v69, "exploration_map") )
    j_Json::Value::Value((Json::Value *)&v44, v2);
    ExplorationMapFunction::deserialize(&v45, (Json::Value *)&v44, (int)&v70);
    v10 = *v3;
    v11 = v45;
    v45 = 0;
    *v3 = v11;
    if ( v10 )
      (*(void (**)(void))(*(_DWORD *)v10 + 4))();
      if ( v45 )
        (*(void (**)(void))(*(_DWORD *)v45 + 4))();
    v12 = (char *)&v44;
LABEL_80:
    j_Json::Value::~Value((Json::Value *)v12);
  v40 = (void *)(v69 - 12);
  if ( (int *)(v69 - 12) != &dword_28898C0 )
    v42 = (unsigned int *)(v69 - 4);
        v43 = __ldrex(v42);
      while ( __strex(v43 - 1, v42) );
      v43 = (*v42)--;
    if ( v43 <= 0 )
      j_j_j_j__ZdlPv_9(v40);
  v41 = *(_QWORD *)&v70;
  if ( v70 != v71 )
    do
      if ( *(_DWORD *)v41 )
        (*(void (**)(void))(**(_DWORD **)v41 + 4))();
      *(_DWORD *)v41 = 0;
      LODWORD(v41) = v41 + 4;
    while ( HIDWORD(v41) != (_DWORD)v41 );
    LODWORD(v41) = v70;
  if ( (_DWORD)v41 )
    j_operator delete((void *)v41);
}


char *__fastcall LootItemFunction::getConditions(LootItemFunction *this)
{
  return (char *)this + 4;
}
