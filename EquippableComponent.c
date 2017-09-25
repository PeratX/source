

void __fastcall EquippableComponent::onItemChanged(EquippableComponent *this, unsigned int a2, const Item *a3)
{
  EquippableComponent::onItemChanged(this, a2, a3);
}


void __fastcall EquippableComponent::createTag(EquippableComponent *this, int a2)
{
  EquippableComponent *v2; // r6@1
  int v3; // r5@1
  void *v4; // r4@1
  int v5; // r5@1
  void *v6; // r8@2
  int v7; // r9@2
  void **v8; // r6@3
  void **v9; // r7@3
  const char *v10; // r4@3
  unsigned int *v11; // r2@4
  signed int v12; // r1@6
  unsigned int *v13; // r2@8
  signed int v14; // r1@10
  unsigned int *v15; // r2@12
  signed int v16; // r1@14
  void *v17; // r5@28
  void *v18; // r0@28
  int v19; // r0@29
  void *v20; // r0@39
  void *v21; // r8@40
  ItemInstance *v22; // r6@40
  ItemInstance *i; // r7@40
  void *v24; // r4@45
  int v25; // r0@45
  void *v26; // r0@49
  unsigned int *v27; // r2@51
  signed int v28; // r1@53
  void *v29; // r0@61
  void *v30; // r0@68
  unsigned int *v31; // r2@70
  signed int v32; // r1@72
  int v33; // [sp+Ch] [bp-C4h]@2
  void **v34; // [sp+10h] [bp-C0h]@2
  int v35; // [sp+14h] [bp-BCh]@2
  void *v36; // [sp+18h] [bp-B8h]@66
  int v37; // [sp+20h] [bp-B0h]@66
  void *v38; // [sp+24h] [bp-ACh]@62
  void *v39; // [sp+28h] [bp-A8h]@59
  int v40; // [sp+30h] [bp-A0h]@12
  void *v41; // [sp+34h] [bp-9Ch]@41
  int v42; // [sp+38h] [bp-98h]@45
  int v43; // [sp+3Ch] [bp-94h]@45
  int v44; // [sp+44h] [bp-8Ch]@45
  char v45; // [sp+48h] [bp-88h]@29
  int v46; // [sp+50h] [bp-80h]@37
  void *v47; // [sp+6Ch] [bp-64h]@35
  void *ptr; // [sp+7Ch] [bp-54h]@33
  int v49; // [sp+90h] [bp-40h]@29
  int v50; // [sp+94h] [bp-3Ch]@29
  int v51; // [sp+9Ch] [bp-34h]@3
  int v52; // [sp+A4h] [bp-2Ch]@3

  v2 = this;
  v3 = a2;
  v4 = operator new(0x1Cu);
  CompoundTag::CompoundTag((int)v4);
  *(_DWORD *)v2 = v4;
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 48);
  if ( *(_DWORD *)(v5 + 316) )
  {
    v6 = operator new(0x14u);
    v35 = (int)v6;
    v34 = (void **)v2;
    ListTag::ListTag((int)v6);
    v7 = *(_QWORD *)(*(_DWORD *)(v5 + 316) + 4);
    v33 = *(_QWORD *)(*(_DWORD *)(v5 + 316) + 4) >> 32;
    if ( v7 != v33 )
    {
      v8 = (void **)&v52;
      v9 = (void **)&v51;
      v10 = "slotNumber";
      do
      {
        v17 = operator new(0x1Cu);
        CompoundTag::CompoundTag((int)v17);
        sub_21E94B4(v8, v10);
        CompoundTag::putInt((int)v17, (const void **)v8, *(_DWORD *)v7);
        v18 = (void *)(v52 - 12);
        if ( (int *)(v52 - 12) != &dword_28898C0 )
        {
          v11 = (unsigned int *)(v52 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v12 = __ldrex(v11);
            while ( __strex(v12 - 1, v11) );
          }
          else
            v12 = (*v11)--;
          if ( v12 <= 0 )
            j_j_j_j__ZdlPv_9(v18);
        }
        sub_21E94B4(v9, "item");
        ItemInstance::ItemInstance((ItemInstance *)&v45, *(_DWORD *)(v7 + 16));
        ItemInstance::save((ItemInstance *)&v49, (ItemInstance *)&v45);
        v19 = v49;
        v49 = 0;
        v50 = v19;
        CompoundTag::put((int)v17, (const void **)v9, &v50);
        if ( v50 )
          (*(void (**)(void))(*(_DWORD *)v50 + 4))();
        v50 = 0;
        if ( v49 )
          (*(void (**)(void))(*(_DWORD *)v49 + 4))();
        if ( ptr )
          operator delete(ptr);
        if ( v47 )
          operator delete(v47);
        if ( v46 )
          (*(void (**)(void))(*(_DWORD *)v46 + 4))();
        v46 = 0;
        v20 = (void *)(v51 - 12);
        if ( (int *)(v51 - 12) != &dword_28898C0 )
          v13 = (unsigned int *)(v51 - 4);
              v14 = __ldrex(v13);
            while ( __strex(v14 - 1, v13) );
            v14 = (*v13)--;
          if ( v14 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        v21 = operator new(0x14u);
        ListTag::ListTag((int)v21);
        v22 = (ItemInstance *)(*(_QWORD *)(v7 + 4) >> 32);
        for ( i = (ItemInstance *)*(_QWORD *)(v7 + 4); i != v22; i = (ItemInstance *)((char *)i + 72) )
          v24 = operator new(0x1Cu);
          CompoundTag::CompoundTag((int)v24);
          sub_21E94B4((void **)&v44, "slotItem");
          ItemInstance::save((ItemInstance *)&v42, i);
          v25 = v42;
          v42 = 0;
          v43 = v25;
          CompoundTag::put((int)v24, (const void **)&v44, &v43);
          if ( v43 )
            (*(void (**)(void))(*(_DWORD *)v43 + 4))();
          v43 = 0;
          if ( v42 )
            (*(void (**)(void))(*(_DWORD *)v42 + 4))();
          v26 = (void *)(v44 - 12);
          if ( (int *)(v44 - 12) != &dword_28898C0 )
            v27 = (unsigned int *)(v44 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v28 = __ldrex(v27);
              while ( __strex(v28 - 1, v27) );
            }
            else
              v28 = (*v27)--;
            if ( v28 <= 0 )
              j_j_j_j__ZdlPv_9(v26);
          v41 = v24;
          ListTag::add((int)v21, (int *)&v41);
          if ( v41 )
            (*(void (**)(void))(*(_DWORD *)v41 + 4))();
          v41 = 0;
        sub_21E94B4((void **)&v40, "acceptedItems");
        v39 = v21;
        CompoundTag::put((int)v17, (const void **)&v40, (int *)&v39);
        v8 = (void **)&v52;
        v9 = (void **)&v51;
        v10 = "slotNumber";
        if ( v39 )
          (*(void (**)(void))(*(_DWORD *)v39 + 4))();
        v6 = (void *)v35;
        v29 = (void *)(v40 - 12);
        v39 = 0;
        if ( (int *)(v40 - 12) != &dword_28898C0 )
          v15 = (unsigned int *)(v40 - 4);
              v16 = __ldrex(v15);
            while ( __strex(v16 - 1, v15) );
            v9 = (void **)&v51;
            v16 = (*v15)--;
          if ( v16 <= 0 )
            j_j_j_j__ZdlPv_9(v29);
        v38 = v17;
        ListTag::add(v35, (int *)&v38);
        if ( v38 )
          (*(void (**)(void))(*(_DWORD *)v38 + 4))();
        v7 += 104;
        v38 = 0;
      }
      while ( v7 != v33 );
      v4 = *v34;
    }
    sub_21E94B4((void **)&v37, "slots");
    v36 = v6;
    CompoundTag::put((int)v4, (const void **)&v37, (int *)&v36);
    if ( v36 )
      (*(void (**)(void))(*(_DWORD *)v36 + 4))();
    v36 = 0;
    v30 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v31 = (unsigned int *)(v37 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v32 = __ldrex(v31);
        while ( __strex(v32 - 1, v31) );
      else
        v32 = (*v31)--;
      if ( v32 <= 0 )
        j_j_j_j__ZdlPv_9(v30);
  }
}


void __fastcall EquippableComponent::onItemChanged(EquippableComponent *this, unsigned int a2, const Item *a3)
{
  Entity **v3; // r4@1
  const Item *v4; // r9@1
  unsigned int v5; // r6@1
  int v6; // r5@1
  int v7; // r0@1
  __int64 v8; // kr00_8@2
  double v9; // r0@2
  int v10; // r11@3
  const Item **v11; // r11@3
  int v12; // t1@3
  unsigned int v13; // r0@4
  int v14; // r7@6
  int *v15; // r8@6
  const Entity *v16; // r1@7
  int v17; // r6@10
  unsigned int *v18; // r2@12
  signed int v19; // r1@14
  void *v20; // r5@20
  int v21; // r1@20
  void *v22; // r0@20
  void *ptr; // [sp+4h] [bp-44h]@7
  unsigned int v24; // [sp+8h] [bp-40h]@4
  int v25; // [sp+Ch] [bp-3Ch]@4
  int v26; // [sp+10h] [bp-38h]@4
  signed int v27; // [sp+14h] [bp-34h]@4
  int v28; // [sp+18h] [bp-30h]@4
  int v29; // [sp+1Ch] [bp-2Ch]@23

  v3 = (Entity **)this;
  v4 = a3;
  v5 = a2;
  v6 = *(_DWORD *)(*(_DWORD *)this + 48);
  v7 = *(_DWORD *)(v6 + 316);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 4);
    HIDWORD(v9) = -991146299;
    if ( -991146299 * ((HIDWORD(v8) - (signed int)v8) >> 3) > v5 )
    {
      v10 = v8 + 104 * v5;
      v12 = *(_DWORD *)(v10 + 16);
      v11 = (const Item **)(v10 + 16);
      if ( v12 )
      {
        v25 = 0;
        v26 = 0;
        v27 = 1065353216;
        v28 = 0;
        LODWORD(v9) = &v27;
        v13 = sub_21E6254(v9);
        v24 = v13;
        if ( v13 == 1 )
        {
          v29 = 0;
          v15 = &v29;
        }
        else
          if ( v13 >= 0x40000000 )
            sub_21E57F4();
          v14 = 4 * v13;
          v15 = (int *)operator new(4 * v13);
          _aeabi_memclr4(v15, v14);
        ptr = v15;
        Entity::initParams(*v3, (VariantParameterList *)&ptr);
        v16 = *v3;
        if ( *v11 == v4 )
          EntityDefinitionDescriptor::executeTrigger(
            v6,
            v16,
            (DefinitionTrigger *)(v8 + 104 * v5 + 24),
            (const VariantParameterList *)&ptr);
            (DefinitionTrigger *)(v8 + 104 * v5 + 64),
        v17 = v25;
        while ( v17 )
          v20 = (void *)v17;
          v21 = *(_DWORD *)(v17 + 8);
          v17 = *(_DWORD *)v17;
          v22 = (void *)(v21 - 12);
          if ( (int *)(v21 - 12) != &dword_28898C0 )
          {
            v18 = (unsigned int *)(v21 - 4);
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
              j_j_j_j__ZdlPv_9(v22);
          }
          operator delete(v20);
        _aeabi_memclr4(ptr, 4 * v24);
        if ( ptr )
          if ( &v29 != ptr )
            operator delete(ptr);
      }
    }
  }
}


void __fastcall EquippableComponent::setDataFromPacket(EquippableComponent *this, const UpdateEquipPacket *a2)
{
  EquippableComponent::setDataFromPacket(this, a2);
}


int __fastcall EquippableComponent::createDataPacket(int a1, int a2, char a3)
{
  int v3; // r5@1
  char v4; // r6@1
  Entity **v5; // r7@1
  int v6; // r4@1
  char *v7; // r0@1
  int result; // r0@1
  int v9; // [sp+0h] [bp-18h]@1

  v3 = a1;
  v4 = a3;
  v5 = (Entity **)a2;
  EquippableComponent::createTag((EquippableComponent *)&v9, a2);
  v6 = v9;
  v7 = Entity::getUniqueID(*v5);
  *(_DWORD *)(v3 + 4) = 2;
  *(_DWORD *)(v3 + 8) = 1;
  *(_BYTE *)(v3 + 12) = 0;
  *(_DWORD *)v3 = &off_26E9954;
  *(_BYTE *)(v3 + 13) = v4;
  *(_BYTE *)(v3 + 14) = 12;
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 24) = *(_QWORD *)v7;
  result = CompoundTag::CompoundTag(v3 + 32, v6);
  if ( v6 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
  return result;
}


int __fastcall EquippableComponent::getSlot(int result, int a2, int a3)
{
  int v3; // r3@1
  int v4; // r12@1

  v4 = *(_QWORD *)(a2 + 4) >> 32;
  v3 = *(_QWORD *)(a2 + 4);
  if ( v3 == v4 )
  {
LABEL_4:
    *(_DWORD *)result = 0;
    *(_DWORD *)(result + 4) = 0;
    *(_DWORD *)(result + 8) = 0;
  }
  else
    while ( *(_DWORD *)v3 != a3 )
    {
      v3 += 104;
      if ( v4 == v3 )
        goto LABEL_4;
    }
    result = std::vector<ItemInstance,std::allocator<ItemInstance>>::vector(result, (unsigned __int64 *)(v3 + 4));
  return result;
}


void __fastcall EquippableComponent::setDataFromPacket(EquippableComponent *this, const UpdateEquipPacket *a2)
{
  EquippableComponent *v2; // r7@1
  SlotDescriptor *v3; // r5@1
  const UpdateEquipPacket *v4; // r4@1
  SlotDescriptor *v5; // r6@1
  SlotDescriptor *v6; // r0@2
  ListTag *v7; // r9@4
  void *v8; // r0@4
  int *v9; // r6@7
  void **v10; // r4@7
  unsigned int v11; // r1@7
  unsigned int *v12; // r2@8
  signed int v13; // r1@10
  unsigned int *v14; // r2@12
  signed int v15; // r1@14
  unsigned int *v16; // r2@16
  signed int v17; // r1@18
  unsigned int *v18; // r2@20
  signed int v19; // r1@22
  int v20; // r9@36
  const CompoundTag *v21; // r0@36
  void *v22; // r0@42
  void *v23; // r0@43
  ListTag *v24; // r6@44
  void *v25; // r0@44
  signed int i; // r4@46
  int v27; // r5@49
  const CompoundTag *v28; // r0@49
  void *v29; // r0@58
  unsigned int *v30; // r2@59
  signed int v31; // r1@61
  __int64 v32; // r0@67
  SlotDescriptor *v33; // r6@68
  signed int v34; // r0@70
  unsigned int v35; // [sp+18h] [bp-170h]@36
  ListTag *v36; // [sp+1Ch] [bp-16Ch]@36
  unsigned __int64 *v37; // [sp+2Ch] [bp-15Ch]@1
  int v38; // [sp+3Ch] [bp-14Ch]@49
  char v39; // [sp+40h] [bp-148h]@49
  int v40; // [sp+48h] [bp-140h]@56
  void *v41; // [sp+64h] [bp-124h]@54
  void *v42; // [sp+74h] [bp-114h]@52
  int v43; // [sp+8Ch] [bp-FCh]@20
  int v44; // [sp+94h] [bp-F4h]@16
  int v45; // [sp+9Ch] [bp-ECh]@12
  int v46; // [sp+A0h] [bp-E8h]@36
  int v47; // [sp+A8h] [bp-E0h]@40
  void *v48; // [sp+C4h] [bp-C4h]@38
  void *ptr; // [sp+D4h] [bp-B4h]@36
  int v50; // [sp+ECh] [bp-9Ch]@43
  int v51; // [sp+F0h] [bp-98h]@36
  ItemInstance *v52; // [sp+F4h] [bp-94h]@36
  ItemInstance *v53; // [sp+F8h] [bp-90h]@36
  int v54; // [sp+FCh] [bp-8Ch]@36
  int v55; // [sp+100h] [bp-88h]@7
  void *v56; // [sp+104h] [bp-84h]@36
  void *v57; // [sp+108h] [bp-80h]@36
  void **v58; // [sp+10Ch] [bp-7Ch]@36
  int v59; // [sp+110h] [bp-78h]@36
  int v60; // [sp+114h] [bp-74h]@36
  int v61; // [sp+118h] [bp-70h]@36
  int v62; // [sp+11Ch] [bp-6Ch]@36
  int v63; // [sp+120h] [bp-68h]@36
  int v64; // [sp+124h] [bp-64h]@36
  int v65; // [sp+128h] [bp-60h]@36
  void *v66; // [sp+12Ch] [bp-5Ch]@36
  void *v67; // [sp+130h] [bp-58h]@36
  void **v68; // [sp+134h] [bp-54h]@36
  int v69; // [sp+138h] [bp-50h]@7
  int v70; // [sp+158h] [bp-30h]@4

  v2 = this;
  v3 = (SlotDescriptor *)*((_DWORD *)this + 1);
  v4 = a2;
  v37 = (unsigned __int64 *)((char *)this + 4);
  v5 = (SlotDescriptor *)*((_DWORD *)this + 2);
  if ( v5 != v3 )
  {
    v6 = (SlotDescriptor *)*((_DWORD *)this + 1);
    do
      v6 = (SlotDescriptor *)((char *)SlotDescriptor::~SlotDescriptor(v6) + 104);
    while ( v5 != v6 );
  }
  *((_DWORD *)v2 + 2) = v3;
  sub_21E94B4((void **)&v70, "slots");
  v7 = (ListTag *)CompoundTag::getList((int)v4 + 32, (const void **)&v70);
  v8 = (void *)(v70 - 12);
  if ( (int *)(v70 - 12) != &dword_28898C0 )
    v12 = (unsigned int *)(v70 - 4);
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
  if ( v7 && ListTag::size(v7) >= 1 )
    v9 = &v69;
    v10 = (void **)&v55;
    v11 = 0;
      v35 = v11;
      v36 = v7;
      v20 = ListTag::getCompound(v7, v11);
      v51 = 0;
      v52 = 0;
      v53 = 0;
      v54 = 0;
      sub_21E94B4(v10, (const char *)&unk_257BC67);
      v56 = &unk_28898CC;
      v57 = &unk_28898CC;
      v59 = 0;
      v60 = 0;
      v61 = 0;
      v62 = 0;
      v63 = 0;
      v64 = 0;
      v65 = 0;
      v58 = &off_26F1930;
      v66 = &unk_28898CC;
      v67 = &unk_28898CC;
      *v9 = 0;
      v9[1] = 0;
      v9[2] = 0;
      v9[3] = 0;
      v9[4] = 0;
      v9[5] = 0;
      v9[6] = 0;
      v68 = &off_26F1930;
      sub_21E94B4((void **)&v45, "item");
      v21 = (const CompoundTag *)CompoundTag::getCompound(v20, (const void **)&v45);
      ItemInstance::fromTag((ItemInstance *)&v46, v21);
      v54 = v46;
      if ( ptr )
        operator delete(ptr);
      if ( v48 )
        operator delete(v48);
      if ( v47 )
        (*(void (**)(void))(*(_DWORD *)v47 + 4))();
      v22 = (void *)(v45 - 12);
      v47 = 0;
      if ( (int *)(v45 - 12) != &dword_28898C0 )
      {
        v14 = (unsigned int *)(v45 - 4);
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
          j_j_j_j__ZdlPv_9(v22);
      }
      sub_21E94B4((void **)&v44, "slotNumber");
      v50 = CompoundTag::getInt(v20, (const void **)&v44);
      v23 = (void *)(v44 - 12);
      if ( (int *)(v44 - 12) != &dword_28898C0 )
        v16 = (unsigned int *)(v44 - 4);
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
          v17 = (*v16)--;
        if ( v17 <= 0 )
          j_j_j_j__ZdlPv_9(v23);
      sub_21E94B4((void **)&v43, "acceptedItems");
      v24 = (ListTag *)CompoundTag::getList(v20, (const void **)&v43);
      v25 = (void *)(v43 - 12);
      if ( (int *)(v43 - 12) != &dword_28898C0 )
        v18 = (unsigned int *)(v43 - 4);
            v19 = __ldrex(v18);
          while ( __strex(v19 - 1, v18) );
          v19 = (*v18)--;
        if ( v19 <= 0 )
          j_j_j_j__ZdlPv_9(v25);
      if ( v24 )
        for ( i = 0; i < ListTag::size(v24); ++i )
          v27 = ListTag::getCompound(v24, i);
          sub_21E94B4((void **)&v38, "slotItem");
          v28 = (const CompoundTag *)CompoundTag::getCompound(v27, (const void **)&v38);
          ItemInstance::fromTag((ItemInstance *)&v39, v28);
          if ( v52 == v53 )
          {
            std::vector<ItemInstance,std::allocator<ItemInstance>>::_M_emplace_back_aux<ItemInstance>(
              (unsigned __int64 *)&v51,
              (int)&v39);
          }
          else
            ItemInstance::ItemInstance(v52, (int)&v39);
            v52 = (ItemInstance *)((char *)v52 + 72);
          if ( v42 )
            operator delete(v42);
          if ( v41 )
            operator delete(v41);
          if ( v40 )
            (*(void (**)(void))(*(_DWORD *)v40 + 4))();
          v40 = 0;
          v29 = (void *)(v38 - 12);
          if ( (int *)(v38 - 12) != &dword_28898C0 )
            v30 = (unsigned int *)(v38 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v31 = __ldrex(v30);
              while ( __strex(v31 - 1, v30) );
            }
            else
              v31 = (*v30)--;
            if ( v31 <= 0 )
              j_j_j_j__ZdlPv_9(v29);
      v32 = *((_QWORD *)v2 + 1);
      if ( (_DWORD)v32 == HIDWORD(v32) )
        v33 = (SlotDescriptor *)&v50;
        std::vector<SlotDescriptor,std::allocator<SlotDescriptor>>::_M_emplace_back_aux<SlotDescriptor const&>(
          v37,
          (int)&v50);
        v7 = v36;
      else
        SlotDescriptor::SlotDescriptor((_DWORD *)v32, (int)&v50);
        *((_DWORD *)v2 + 2) += 104;
      SlotDescriptor::~SlotDescriptor(v33);
      v34 = ListTag::size(v7);
      v11 = v35 + 1;
      v9 = &v69;
      v10 = (void **)&v55;
    while ( (signed int)(v35 + 1) < v34 );
}


int __fastcall EquippableComponent::EquippableComponent(int a1, int a2)
{
  int v2; // r6@1
  int v3; // r4@1
  int v4; // r0@1
  bool v5; // zf@1

  v2 = a1;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  v3 = a1 + 4;
  *(_DWORD *)(v3 + 4) = 0;
  *(_DWORD *)(v3 + 8) = 0;
  v4 = *(_DWORD *)(a2 + 48);
  v5 = v4 == 0;
  if ( v4 )
  {
    v4 = *(_DWORD *)(v4 + 316);
    v5 = v4 == 0;
  }
  if ( !v5 )
    std::vector<SlotDescriptor,std::allocator<SlotDescriptor>>::operator=(v3, (unsigned __int64 *)(v4 + 4));
  return v2;
}


void __fastcall EquippableComponent::createTag(EquippableComponent *this, int a2)
{
  EquippableComponent::createTag(this, a2);
}
