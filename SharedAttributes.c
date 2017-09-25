

void __fastcall SharedAttributes::_saveAttribute(SharedAttributes *this, const AttributeInstance *a2)
{
  SharedAttributes::_saveAttribute(this, a2);
}


void __fastcall SharedAttributes::_loadAttribute(SharedAttributes *this, AttributeInstance *a2, const CompoundTag *a3)
{
  AttributeInstance *v3; // r4@1
  AttributeInstance *v4; // r9@1
  signed int v5; // r5@1
  void *v6; // r0@1
  int v7; // r0@3
  void *v8; // r0@3
  signed int v9; // r5@4
  void *v10; // r0@4
  int v11; // r5@6
  int v12; // r0@6
  void *v13; // r0@6
  unsigned int *v14; // r2@7
  signed int v15; // r1@9
  int v16; // r5@11
  int v17; // r0@11
  signed int v18; // r5@12
  void *v19; // r0@12
  int v20; // r5@14
  int v21; // r0@14
  void *v22; // r0@14
  unsigned int *v23; // r2@15
  signed int v24; // r1@17
  int v25; // r5@19
  int v26; // r0@19
  signed int v27; // r5@20
  void *v28; // r0@20
  ListTag *v29; // r6@22
  void *v30; // r0@22
  signed int v31; // r7@24
  const CompoundTag *v32; // r0@25
  unsigned int *v33; // r0@27
  unsigned int v34; // r1@29
  signed int v35; // r10@32
  int v36; // r11@32
  unsigned int *v37; // r1@33
  unsigned int v38; // r0@35
  unsigned int *v39; // r5@39
  unsigned int v40; // r0@41
  unsigned int *v41; // r0@48
  unsigned int v42; // r1@50
  int v43; // r4@53
  unsigned int *v44; // r1@54
  unsigned int v45; // r0@56
  unsigned int *v46; // r5@60
  unsigned int v47; // r0@62
  unsigned int *v48; // r0@68
  unsigned int v49; // r1@70
  int v50; // r5@73
  unsigned int *v51; // r1@74
  unsigned int v52; // r0@76
  unsigned int *v53; // r4@80
  unsigned int v54; // r0@82
  int v55; // r5@87
  unsigned int *v56; // r1@88
  unsigned int v57; // r0@90
  unsigned int *v58; // r4@94
  unsigned int v59; // r0@96
  signed int v60; // r5@102
  void *v61; // r0@102
  ListTag *v62; // r5@104
  void *v63; // r0@104
  signed int v64; // r6@106
  const CompoundTag *v65; // r0@107
  unsigned int *v66; // r2@109
  signed int v67; // r1@111
  unsigned int *v68; // r2@113
  signed int v69; // r1@115
  unsigned int *v70; // r2@117
  signed int v71; // r1@119
  unsigned int *v72; // r2@121
  signed int v73; // r1@123
  unsigned int *v74; // r2@125
  signed int v75; // r1@127
  unsigned int *v76; // r2@133
  signed int v77; // r1@135
  unsigned int *v78; // r2@149
  signed int v79; // r1@151
  unsigned int *v80; // r2@157
  signed int v81; // r1@159
  int v82; // [sp+4h] [bp-E4h]@21
  char v83; // [sp+8h] [bp-E0h]@107
  int v84; // [sp+54h] [bp-94h]@104
  int v85; // [sp+5Ch] [bp-8Ch]@102
  int v86; // [sp+60h] [bp-88h]@67
  int v87; // [sp+64h] [bp-84h]@67
  int v88; // [sp+68h] [bp-80h]@47
  int v89; // [sp+6Ch] [bp-7Ch]@47
  int v90; // [sp+70h] [bp-78h]@26
  int v91; // [sp+74h] [bp-74h]@26
  int v92; // [sp+78h] [bp-70h]@25
  int v93; // [sp+7Ch] [bp-6Ch]@26
  int v94; // [sp+84h] [bp-64h]@22
  int v95; // [sp+8Ch] [bp-5Ch]@20
  int v96; // [sp+94h] [bp-54h]@14
  int v97; // [sp+9Ch] [bp-4Ch]@12
  int v98; // [sp+A4h] [bp-44h]@6
  int v99; // [sp+ACh] [bp-3Ch]@4
  int v100; // [sp+B4h] [bp-34h]@3
  int v101; // [sp+BCh] [bp-2Ch]@1

  v3 = a2;
  v4 = this;
  sub_21E94B4((void **)&v101, "Base");
  v5 = CompoundTag::contains((int)v3, (const void **)&v101);
  v6 = (void *)(v101 - 12);
  if ( (int *)(v101 - 12) != &dword_28898C0 )
  {
    v66 = (unsigned int *)(v101 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v67 = __ldrex(v66);
      while ( __strex(v67 - 1, v66) );
    }
    else
      v67 = (*v66)--;
    if ( v67 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  if ( v5 == 1 )
    sub_21E94B4((void **)&v100, "Base");
    v7 = CompoundTag::getFloat((int)v3, (const void **)&v100);
    AttributeInstance::setDefaultValue(v4, *(float *)&v7, 2);
    v8 = (void *)(v100 - 12);
    if ( (int *)(v100 - 12) != &dword_28898C0 )
      v76 = (unsigned int *)(v100 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v77 = __ldrex(v76);
        while ( __strex(v77 - 1, v76) );
      }
      else
        v77 = (*v76)--;
      if ( v77 <= 0 )
        j_j_j_j__ZdlPv_9(v8);
  sub_21E94B4((void **)&v99, "Current");
  v9 = CompoundTag::contains((int)v3, (const void **)&v99);
  v10 = (void *)(v99 - 12);
  if ( (int *)(v99 - 12) != &dword_28898C0 )
    v68 = (unsigned int *)(v99 - 4);
        v69 = __ldrex(v68);
      while ( __strex(v69 - 1, v68) );
      v69 = (*v68)--;
    if ( v69 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  if ( v9 == 1 )
    sub_21E94B4((void **)&v98, "Current");
    v11 = CompoundTag::getFloat((int)v3, (const void **)&v98);
    v12 = AttributeInstance::getMaxValue(v4);
    AttributeInstance::serializationSetValue(v4, *(float *)&v11, 2, *(float *)&v12);
    v13 = (void *)(v98 - 12);
    if ( (int *)(v98 - 12) != &dword_28898C0 )
      v14 = (unsigned int *)(v98 - 4);
          v15 = __ldrex(v14);
        while ( __strex(v15 - 1, v14) );
        v15 = (*v14)--;
      if ( v15 <= 0 )
        j_j_j_j__ZdlPv_9(v13);
  else
    v16 = AttributeInstance::getDefaultValue(v4, 2);
    v17 = AttributeInstance::getMaxValue(v4);
    AttributeInstance::serializationSetValue(v4, *(float *)&v16, 2, *(float *)&v17);
  sub_21E94B4((void **)&v97, "Max");
  v18 = CompoundTag::contains((int)v3, (const void **)&v97);
  v19 = (void *)(v97 - 12);
  if ( (int *)(v97 - 12) != &dword_28898C0 )
    v70 = (unsigned int *)(v97 - 4);
        v71 = __ldrex(v70);
      while ( __strex(v71 - 1, v70) );
      v71 = (*v70)--;
    if ( v71 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  if ( v18 == 1 )
    sub_21E94B4((void **)&v96, "Max");
    v20 = CompoundTag::getFloat((int)v3, (const void **)&v96);
    v21 = AttributeInstance::getMaxValue(v4);
    AttributeInstance::serializationSetValue(v4, *(float *)&v20, 1, *(float *)&v21);
    v22 = (void *)(v96 - 12);
    if ( (int *)(v96 - 12) != &dword_28898C0 )
      v23 = (unsigned int *)(v96 - 4);
          v24 = __ldrex(v23);
        while ( __strex(v24 - 1, v23) );
        v24 = (*v23)--;
      if ( v24 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
    v25 = AttributeInstance::getDefaultValue(v4, 1);
    v26 = AttributeInstance::getMaxValue(v4);
    AttributeInstance::serializationSetValue(v4, *(float *)&v25, 1, *(float *)&v26);
  sub_21E94B4((void **)&v95, "Modifiers");
  v27 = CompoundTag::contains((int)v3, (const void **)&v95, 9);
  v28 = (void *)(v95 - 12);
  if ( (int *)(v95 - 12) != &dword_28898C0 )
    v72 = (unsigned int *)(v95 - 4);
        v73 = __ldrex(v72);
      while ( __strex(v73 - 1, v72) );
      v73 = (*v72)--;
    if ( v73 <= 0 )
      j_j_j_j__ZdlPv_9(v28);
  v82 = (int)v3;
  if ( v27 == 1 )
    sub_21E94B4((void **)&v94, "Modifiers");
    v29 = (ListTag *)CompoundTag::getList((int)v3, (const void **)&v94);
    v30 = (void *)(v94 - 12);
    if ( (int *)(v94 - 12) != &dword_28898C0 )
      v78 = (unsigned int *)(v94 - 4);
          v79 = __ldrex(v78);
        while ( __strex(v79 - 1, v78) );
        v79 = (*v78)--;
      if ( v79 <= 0 )
        j_j_j_j__ZdlPv_9(v30);
    if ( ListTag::size(v29) >= 1 )
      v31 = 0;
        v32 = (const CompoundTag *)ListTag::getCompound(v29, v31);
        SharedAttributes::loadAttributeModifier((SharedAttributes *)&v92, v32);
        if ( v92 )
        {
          v90 = v92;
          v91 = v93;
          if ( v93 )
          {
            v33 = (unsigned int *)(v93 + 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v34 = __ldrex(v33);
              while ( __strex(v34 + 1, v33) );
            }
            else
              ++*v33;
          }
          v35 = AttributeInstance::hasModifier((int)v4, &v90);
          v36 = v91;
          if ( v91 )
            v37 = (unsigned int *)(v91 + 4);
                v38 = __ldrex(v37);
              while ( __strex(v38 - 1, v37) );
              v38 = (*v37)--;
            if ( v38 == 1 )
              v39 = (unsigned int *)(v36 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v36 + 8))(v36);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v40 = __ldrex(v39);
                while ( __strex(v40 - 1, v39) );
              }
              else
                v40 = (*v39)--;
              if ( v40 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v36 + 12))(v36);
          if ( v35 == 1 )
            v88 = v92;
            v89 = v93;
            if ( v93 )
              v41 = (unsigned int *)(v93 + 4);
                  v42 = __ldrex(v41);
                while ( __strex(v42 + 1, v41) );
                ++*v41;
            AttributeInstance::removeModifier(v4, (const AttributeModifier **)&v88);
            v43 = v89;
            if ( v89 )
              v44 = (unsigned int *)(v89 + 4);
                  v45 = __ldrex(v44);
                while ( __strex(v45 - 1, v44) );
                v45 = (*v44)--;
              if ( v45 == 1 )
                v46 = (unsigned int *)(v43 + 8);
                (*(void (__fastcall **)(int))(*(_DWORD *)v43 + 8))(v43);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v47 = __ldrex(v46);
                  while ( __strex(v47 - 1, v46) );
                }
                else
                  v47 = (*v46)--;
                if ( v47 == 1 )
                  (*(void (__fastcall **)(int))(*(_DWORD *)v43 + 12))(v43);
          v86 = v92;
          v87 = v93;
            v48 = (unsigned int *)(v93 + 4);
                v49 = __ldrex(v48);
              while ( __strex(v49 + 1, v48) );
              ++*v48;
          AttributeInstance::addModifier(v4, (const AttributeModifier **)&v86);
          v50 = v87;
          if ( v87 )
            v51 = (unsigned int *)(v87 + 4);
                v52 = __ldrex(v51);
              while ( __strex(v52 - 1, v51) );
              v52 = (*v51)--;
            if ( v52 == 1 )
              v53 = (unsigned int *)(v50 + 8);
              (*(void (__fastcall **)(int))(*(_DWORD *)v50 + 8))(v50);
                  v54 = __ldrex(v53);
                while ( __strex(v54 - 1, v53) );
                v54 = (*v53)--;
              if ( v54 == 1 )
                (*(void (__fastcall **)(int))(*(_DWORD *)v50 + 12))(v50);
        }
        v55 = v93;
        if ( v93 )
          v56 = (unsigned int *)(v93 + 4);
          if ( &pthread_create )
            __dmb();
            do
              v57 = __ldrex(v56);
            while ( __strex(v57 - 1, v56) );
          else
            v57 = (*v56)--;
          if ( v57 == 1 )
            v58 = (unsigned int *)(v55 + 8);
            (*(void (__fastcall **)(int))(*(_DWORD *)v55 + 8))(v55);
                v59 = __ldrex(v58);
              while ( __strex(v59 - 1, v58) );
              v59 = (*v58)--;
            if ( v59 == 1 )
              (*(void (__fastcall **)(int))(*(_DWORD *)v55 + 12))(v55);
        ++v31;
      while ( v31 < ListTag::size(v29) );
  sub_21E94B4((void **)&v85, "TemporalBuffs");
  v60 = CompoundTag::contains(v82, (const void **)&v85, 9);
  v61 = (void *)(v85 - 12);
  if ( (int *)(v85 - 12) != &dword_28898C0 )
    v74 = (unsigned int *)(v85 - 4);
        v75 = __ldrex(v74);
      while ( __strex(v75 - 1, v74) );
      v75 = (*v74)--;
    if ( v75 <= 0 )
      j_j_j_j__ZdlPv_9(v61);
  if ( v60 == 1 )
    sub_21E94B4((void **)&v84, "TemporalBuffs");
    v62 = (ListTag *)CompoundTag::getList(v82, (const void **)&v84);
    v63 = (void *)(v84 - 12);
    if ( (int *)(v84 - 12) != &dword_28898C0 )
      v80 = (unsigned int *)(v84 - 4);
          v81 = __ldrex(v80);
        while ( __strex(v81 - 1, v80) );
        v81 = (*v80)--;
      if ( v81 <= 0 )
        j_j_j_j__ZdlPv_9(v63);
    if ( ListTag::size(v62) >= 1 )
      v64 = 0;
        v65 = (const CompoundTag *)ListTag::getCompound(v62, v64);
        SharedAttributes::loadAttributeBuff((SharedAttributes *)&v83, v65);
        AttributeInstance::addBuff(v4, (const AttributeBuff *)&v83);
        InstantaneousAttributeBuff::~InstantaneousAttributeBuff((InstantaneousAttributeBuff *)&v83);
        ++v64;
      while ( v64 < ListTag::size(v62) );
}


int __fastcall SharedAttributes::saveAttributes(SharedAttributes *this, BaseAttributeMap *a2)
{
  SharedAttributes *v2; // r8@1
  BaseAttributeMap *v3; // r4@1
  void *v4; // r5@1
  int v5; // r6@1
  int result; // r0@1
  int i; // r7@1
  int v8; // r0@2
  int v9; // [sp+0h] [bp-28h]@2
  int v10; // [sp+4h] [bp-24h]@2

  v2 = this;
  v3 = a2;
  v4 = operator new(0x14u);
  ListTag::ListTag((int)v4);
  *(_DWORD *)v2 = v4;
  v5 = BaseAttributeMap::begin(v3);
  result = BaseAttributeMap::end(v3);
  for ( i = result; v5 != i; v5 = *(_DWORD *)v5 )
  {
    SharedAttributes::_saveAttribute((SharedAttributes *)&v9, (const AttributeInstance *)(v5 + 8));
    v8 = v9;
    v9 = 0;
    v10 = v8;
    ListTag::add((int)v4, &v10);
    result = v10;
    if ( v10 )
      result = (*(int (**)(void))(*(_DWORD *)v10 + 4))();
    v10 = 0;
  }
  return result;
}


void __fastcall SharedAttributes::loadAttributeBuff(SharedAttributes *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  TemporalAttributeBuff *v3; // r8@1
  int v4; // r6@1
  int v5; // r7@1
  int v6; // r4@1
  void **v7; // r0@1
  void *v8; // r0@1
  void *v9; // r0@2
  void *v10; // r0@3
  void *v11; // r0@4
  int v12; // r0@5
  void *v13; // r0@5
  unsigned int *v14; // r2@7
  signed int v15; // r1@9
  unsigned int *v16; // r2@11
  signed int v17; // r1@13
  unsigned int *v18; // r2@15
  signed int v19; // r1@17
  unsigned int *v20; // r2@19
  signed int v21; // r1@21
  unsigned int *v22; // r2@23
  signed int v23; // r1@25
  int v24; // [sp+10h] [bp-40h]@5
  int v25; // [sp+18h] [bp-38h]@1
  int v26; // [sp+20h] [bp-30h]@1
  int v27; // [sp+28h] [bp-28h]@1
  int v28; // [sp+30h] [bp-20h]@1

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v28, "Amount");
  v4 = CompoundTag::getFloat((int)v2, (const void **)&v28);
  sub_21E94B4((void **)&v27, "Duration");
  v5 = CompoundTag::getInt((int)v2, (const void **)&v27);
  sub_21E94B4((void **)&v26, "Type");
  v6 = CompoundTag::getInt((int)v2, (const void **)&v26);
  v7 = sub_21E94B4((void **)&v25, (const char *)&unk_257BC67);
  TemporalAttributeBuff::TemporalAttributeBuff((int)v3, v4, __PAIR__(v6, v5), 1, (int **)v7);
  v8 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
  {
    v14 = (unsigned int *)(v25 - 4);
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
      j_j_j_j__ZdlPv_9(v8);
  }
  v9 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v16 = (unsigned int *)(v26 - 4);
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v27 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = (void *)(v28 - 12);
  if ( (int *)(v28 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v28 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  sub_21E94B4((void **)&v24, "LifeTime");
  v12 = CompoundTag::getInt((int)v2, (const void **)&v24);
  TemporalAttributeBuff::serializationSetLifeTime(v3, v12);
  v13 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v24 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
}


void __fastcall SharedAttributes::_saveAttributeModifier(SharedAttributes *this, const AttributeModifier *a2)
{
  SharedAttributes::_saveAttributeModifier(this, a2);
}


signed int __fastcall SharedAttributes::loadAttributes(SharedAttributes *this, BaseAttributeMap *a2, const ListTag *a3)
{
  ListTag *v3; // r4@1
  signed int result; // r0@1
  signed int v5; // r6@2
  void *v6; // r0@3
  unsigned int *v7; // r2@4
  signed int v8; // r1@6
  unsigned int *v9; // r2@8
  signed int v10; // r1@10
  unsigned int *v11; // r2@12
  signed int v12; // r1@14
  AttributeInstance *v13; // r11@27
  int *v14; // r0@27
  void *v15; // r0@27
  int *v16; // r0@28
  SharedAttributes *v17; // r0@28
  const CompoundTag *v18; // r2@28
  const Attribute *v19; // r0@29
  void *v20; // r0@31
  unsigned __int64 *v21; // [sp+8h] [bp-40h]@1
  int v22; // [sp+10h] [bp-38h]@3
  int v23; // [sp+18h] [bp-30h]@8
  int v24; // [sp+1Ch] [bp-2Ch]@12

  v3 = a2;
  v21 = (unsigned __int64 *)this;
  result = ListTag::size(a2);
  if ( result >= 1 )
  {
    v5 = 0;
    do
    {
      v13 = (AttributeInstance *)ListTag::getCompound(v3, v5);
      sub_21E94B4((void **)&v23, "Name");
      v14 = (int *)CompoundTag::getString((int)v13, (const void **)&v23);
      sub_21E8AF4(&v24, v14);
      v15 = (void *)(v23 - 12);
      if ( (int *)(v23 - 12) != &dword_28898C0 )
      {
        v9 = (unsigned int *)(v23 - 4);
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
          j_j_j_j__ZdlPv_9(v15);
      }
      v16 = (int *)SharedAttributes::_legacyGetName((int **)&v24);
      EntityInteraction::setInteractText(&v24, v16);
      v17 = (SharedAttributes *)SharedAttributes::_legacyGetInstance(v21, (int **)&v24);
      if ( v17
        || (v19 = (const Attribute *)Attribute::getByName((AttributeCollection *)&v24),
            BaseAttributeMap::registerAttribute((BaseAttributeMap *)v21, v19),
            (v17 = (SharedAttributes *)SharedAttributes::_legacyGetInstance(v21, (int **)&v24)) != 0) )
        SharedAttributes::_loadAttribute(v17, v13, v18);
      else
        sub_21E94B4((void **)&v22, "Name");
        CompoundTag::getString((int)v13, (const void **)&v22);
        v6 = (void *)(v22 - 12);
        if ( (int *)(v22 - 12) != &dword_28898C0 )
          v7 = (unsigned int *)(v22 - 4);
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
            j_j_j_j__ZdlPv_9(v6);
      v20 = (void *)(v24 - 12);
      if ( (int *)(v24 - 12) != &dword_28898C0 )
        v11 = (unsigned int *)(v24 - 4);
            v12 = __ldrex(v11);
          while ( __strex(v12 - 1, v11) );
          v12 = (*v11)--;
        if ( v12 <= 0 )
          j_j_j_j__ZdlPv_9(v20);
      ++v5;
      result = ListTag::size(v3);
    }
    while ( v5 < result );
  }
  return result;
}


void __fastcall SharedAttributes::_saveAttributeModifier(SharedAttributes *this, const AttributeModifier *a2)
{
  SharedAttributes *v2; // r8@1
  AttributeModifier *v3; // r5@1
  void *v4; // r6@1
  int *v5; // r0@1
  void *v6; // r0@1
  int v7; // r6@2
  int v8; // r0@2
  void *v9; // r0@2
  int v10; // r6@3
  int v11; // r0@3
  void *v12; // r0@3
  int v13; // r6@4
  int v14; // r0@4
  void *v15; // r0@4
  char *v16; // r0@5
  __int64 v17; // kr00_8@5
  __int64 v18; // kr08_8@5
  int v19; // r5@5
  void *v20; // r0@5
  int v21; // r4@6
  void *v22; // r0@6
  unsigned int *v23; // r2@8
  signed int v24; // r1@10
  unsigned int *v25; // r2@12
  signed int v26; // r1@14
  unsigned int *v27; // r2@16
  signed int v28; // r1@18
  unsigned int *v29; // r2@20
  signed int v30; // r1@22
  unsigned int *v31; // r2@24
  signed int v32; // r1@26
  unsigned int *v33; // r2@28
  signed int v34; // r1@30
  int v35; // [sp+4h] [bp-4Ch]@6
  int v36; // [sp+Ch] [bp-44h]@5
  int v37; // [sp+14h] [bp-3Ch]@4
  int v38; // [sp+1Ch] [bp-34h]@3
  int v39; // [sp+24h] [bp-2Ch]@2
  int v40; // [sp+2Ch] [bp-24h]@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0x1Cu);
  CompoundTag::CompoundTag((int)v4);
  *(_DWORD *)v2 = v4;
  sub_21E94B4((void **)&v40, "Name");
  v5 = (int *)AttributeModifier::getName(v3);
  CompoundTag::putString((int)v4, (const void **)&v40, v5);
  v6 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v40 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    }
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  v7 = *(_DWORD *)v2;
  sub_21E94B4((void **)&v39, "Amount");
  v8 = AttributeModifier::getAmount(v3);
  CompoundTag::putFloat(v7, (const void **)&v39, v8);
  v9 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v39 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = *(_DWORD *)v2;
  sub_21E94B4((void **)&v38, "Operation");
  v11 = AttributeModifier::getOperation(v3);
  CompoundTag::putInt(v10, (const void **)&v38, v11);
  v12 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v38 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = *(_DWORD *)v2;
  sub_21E94B4((void **)&v37, "Operand");
  v14 = AttributeModifier::getOperand(v3);
  CompoundTag::putInt(v13, (const void **)&v37, v14);
  v15 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v37 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
  v16 = AttributeModifier::getId(v3);
  v17 = *(_QWORD *)v16;
  v18 = *((_QWORD *)v16 + 1);
  v19 = *(_DWORD *)v2;
  sub_21E94B4((void **)&v36, "UUIDMost");
  CompoundTag::putInt64(v19, (const void **)&v36, v17, SHIDWORD(v17));
  v20 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v36 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = *(_DWORD *)v2;
  sub_21E94B4((void **)&v35, "UUIDLeast");
  CompoundTag::putInt64(v21, (const void **)&v35, v18, SHIDWORD(v18));
  v22 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v35 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
}


void __fastcall SharedAttributes::_saveAttribute(SharedAttributes *this, const AttributeInstance *a2)
{
  SharedAttributes *v2; // r8@1
  AttributeInstance *v3; // r9@1
  void *v4; // r4@1
  Attribute *v5; // r5@1
  int *v6; // r0@1
  void *v7; // r0@1
  int v8; // r4@2
  int v9; // r0@2
  void *v10; // r0@2
  int v11; // r4@3
  int v12; // r0@3
  void *v13; // r0@3
  int v14; // r4@4
  int v15; // r0@4
  void *v16; // r0@4
  void *v17; // r6@6
  const AttributeModifier *v18; // r5@6
  const AttributeModifier *v19; // r7@6
  int v20; // r0@8
  int v21; // r4@12
  void *v22; // r0@14
  char *v23; // r4@16
  void *v24; // r6@16
  const TemporalAttributeBuff *v25; // r4@16
  const TemporalAttributeBuff *i; // r5@16
  __int64 v27; // kr08_8@16
  int v28; // r0@18
  int v29; // r4@22
  void *v30; // r0@24
  char *v31; // r0@25
  const AttributeModifier *v32; // r4@25
  int v33; // r5@26
  unsigned int *v34; // r2@31
  signed int v35; // r1@33
  unsigned int *v36; // r2@35
  signed int v37; // r1@37
  unsigned int *v38; // r2@39
  signed int v39; // r1@41
  unsigned int *v40; // r2@43
  signed int v41; // r1@45
  unsigned int *v42; // r2@63
  signed int v43; // r1@65
  unsigned int *v44; // r2@67
  signed int v45; // r1@69
  void *v46; // [sp+4h] [bp-7Ch]@22
  int v47; // [sp+Ch] [bp-74h]@22
  int v48; // [sp+10h] [bp-70h]@18
  int v49; // [sp+14h] [bp-6Ch]@18
  void *v50; // [sp+18h] [bp-68h]@12
  int v51; // [sp+20h] [bp-60h]@12
  int v52; // [sp+24h] [bp-5Ch]@8
  int v53; // [sp+28h] [bp-58h]@8
  void *ptr; // [sp+2Ch] [bp-54h]@5
  const AttributeModifier *v55; // [sp+30h] [bp-50h]@5
  int v56; // [sp+3Ch] [bp-44h]@4
  int v57; // [sp+44h] [bp-3Ch]@3
  int v58; // [sp+4Ch] [bp-34h]@2
  int v59; // [sp+54h] [bp-2Ch]@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0x1Cu);
  CompoundTag::CompoundTag((int)v4);
  *(_DWORD *)v2 = v4;
  v5 = (Attribute *)AttributeInstance::getAttribute(v3);
  sub_21E94B4((void **)&v59, "Name");
  v6 = (int *)Attribute::getName(v5);
  CompoundTag::putString((int)v4, (const void **)&v59, v6);
  v7 = (void *)(v59 - 12);
  if ( (int *)(v59 - 12) != &dword_28898C0 )
  {
    v34 = (unsigned int *)(v59 - 4);
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
      j_j_j_j__ZdlPv_9(v7);
  }
  v8 = *(_DWORD *)v2;
  sub_21E94B4((void **)&v58, "Base");
  v9 = AttributeInstance::getDefaultValue(v3, 2);
  CompoundTag::putFloat(v8, (const void **)&v58, v9);
  v10 = (void *)(v58 - 12);
  if ( (int *)(v58 - 12) != &dword_28898C0 )
    v36 = (unsigned int *)(v58 - 4);
        v37 = __ldrex(v36);
      while ( __strex(v37 - 1, v36) );
      v37 = (*v36)--;
    if ( v37 <= 0 )
      j_j_j_j__ZdlPv_9(v10);
  v11 = *(_DWORD *)v2;
  sub_21E94B4((void **)&v57, "Current");
  v12 = AttributeInstance::getCurrentValue(v3);
  CompoundTag::putFloat(v11, (const void **)&v57, v12);
  v13 = (void *)(v57 - 12);
  if ( (int *)(v57 - 12) != &dword_28898C0 )
    v38 = (unsigned int *)(v57 - 4);
        v39 = __ldrex(v38);
      while ( __strex(v39 - 1, v38) );
      v39 = (*v38)--;
    if ( v39 <= 0 )
      j_j_j_j__ZdlPv_9(v13);
  v14 = *(_DWORD *)v2;
  sub_21E94B4((void **)&v56, "Max");
  v15 = AttributeInstance::getMaxValue(v3);
  CompoundTag::putFloat(v14, (const void **)&v56, v15);
  v16 = (void *)(v56 - 12);
  if ( (int *)(v56 - 12) != &dword_28898C0 )
    v40 = (unsigned int *)(v56 - 4);
        v41 = __ldrex(v40);
      while ( __strex(v41 - 1, v40) );
      v41 = (*v40)--;
    if ( v41 <= 0 )
      j_j_j_j__ZdlPv_9(v16);
  AttributeInstance::getModifiers((AttributeInstance *)&ptr, (int)v3);
  if ( ptr != (void *)v55 )
    v17 = operator new(0x14u);
    ListTag::ListTag((int)v17);
    v18 = v55;
    v19 = (const AttributeModifier *)ptr;
    if ( ptr != (void *)v55 )
      {
        if ( AttributeModifier::isSerializable(v19) == 1 )
        {
          SharedAttributes::_saveAttributeModifier((SharedAttributes *)&v52, v19);
          v20 = v52;
          v52 = 0;
          v53 = v20;
          ListTag::add((int)v17, &v53);
          if ( v53 )
            (*(void (**)(void))(*(_DWORD *)v53 + 4))();
          v53 = 0;
        }
        v19 = (const AttributeModifier *)((char *)v19 + 48);
      }
      while ( v18 != v19 );
    v21 = *(_DWORD *)v2;
    sub_21E94B4((void **)&v51, "Modifiers");
    v50 = v17;
    CompoundTag::put(v21, (const void **)&v51, (int *)&v50);
    if ( v50 )
      (*(void (**)(void))(*(_DWORD *)v50 + 4))();
    v50 = 0;
    v22 = (void *)(v51 - 12);
    if ( (int *)(v51 - 12) != &dword_28898C0 )
      v42 = (unsigned int *)(v51 - 4);
      if ( &pthread_create )
        __dmb();
        do
          v43 = __ldrex(v42);
        while ( __strex(v43 - 1, v42) );
      else
        v43 = (*v42)--;
      if ( v43 <= 0 )
        j_j_j_j__ZdlPv_9(v22);
  if ( AttributeInstance::hasTemporalBuffs(v3) == 1 )
    v23 = AttributeInstance::getBuffs(v3);
    v24 = operator new(0x14u);
    ListTag::ListTag((int)v24);
    v27 = *(_QWORD *)v23;
    v25 = (const TemporalAttributeBuff *)(*(_QWORD *)v23 >> 32);
    for ( i = (const TemporalAttributeBuff *)v27; v25 != i; i = (const TemporalAttributeBuff *)((char *)i + 72) )
      if ( (*(int (__fastcall **)(const TemporalAttributeBuff *))(*(_DWORD *)i + 12))(i) == 1 )
        SharedAttributes::_saveAttributeBuff((SharedAttributes *)&v48, i);
        v28 = v48;
        v48 = 0;
        v49 = v28;
        ListTag::add((int)v24, &v49);
        if ( v49 )
          (*(void (**)(void))(*(_DWORD *)v49 + 4))();
        v49 = 0;
    v29 = *(_DWORD *)v2;
    sub_21E94B4((void **)&v47, "TemporalBuffs");
    v46 = v24;
    CompoundTag::put(v29, (const void **)&v47, (int *)&v46);
    if ( v46 )
      (*(void (**)(void))(*(_DWORD *)v46 + 4))();
    v46 = 0;
    v30 = (void *)(v47 - 12);
    if ( (int *)(v47 - 12) != &dword_28898C0 )
      v44 = (unsigned int *)(v47 - 4);
          v45 = __ldrex(v44);
        while ( __strex(v45 - 1, v44) );
        v45 = (*v44)--;
      if ( v45 <= 0 )
        j_j_j_j__ZdlPv_9(v30);
  v32 = v55;
  v31 = (char *)ptr;
    do
      v33 = (int)(v31 + 48);
      (**(void (***)(void))v31)();
      v31 = (char *)v33;
    while ( v32 != (const AttributeModifier *)v33 );
    v31 = (char *)ptr;
  if ( v31 )
    operator delete(v31);
}


void __fastcall SharedAttributes::loadAttributeModifier(SharedAttributes *this, const CompoundTag *a2)
{
  SharedAttributes::loadAttributeModifier(this, a2);
}


void __fastcall SharedAttributes::_saveAttributeBuff(SharedAttributes *this, const TemporalAttributeBuff *a2)
{
  SharedAttributes::_saveAttributeBuff(this, a2);
}


int **__fastcall SharedAttributes::_legacyGetName(int **a1)
{
  int **v1; // r9@1
  char v2; // r0@1
  char *v3; // r5@3
  double v4; // r0@3
  unsigned int *v5; // r2@4
  signed int v6; // r1@6
  unsigned int *v7; // r2@8
  signed int v8; // r1@10
  int v9; // r1@20
  void *v10; // r0@20
  int *v11; // r0@21
  int v12; // r0@24
  char v14; // [sp+28h] [bp-160h]@3
  int v15; // [sp+2Ch] [bp-15Ch]@3
  int v16; // [sp+30h] [bp-158h]@3
  int v17; // [sp+34h] [bp-154h]@3
  int v18; // [sp+38h] [bp-150h]@3
  int v19; // [sp+3Ch] [bp-14Ch]@3
  int v20; // [sp+40h] [bp-148h]@3
  int v21; // [sp+44h] [bp-144h]@3
  int v22; // [sp+48h] [bp-140h]@3
  int v23; // [sp+4Ch] [bp-13Ch]@3
  int v24; // [sp+50h] [bp-138h]@3
  int v25; // [sp+54h] [bp-134h]@3
  int v26; // [sp+58h] [bp-130h]@3
  int v27; // [sp+5Ch] [bp-12Ch]@3
  int v28; // [sp+60h] [bp-128h]@3
  int v29; // [sp+64h] [bp-124h]@3
  int v30; // [sp+68h] [bp-120h]@3
  int v31; // [sp+6Ch] [bp-11Ch]@3
  int v32; // [sp+70h] [bp-118h]@3
  int v33; // [sp+74h] [bp-114h]@3
  int v34; // [sp+78h] [bp-110h]@3
  int v35; // [sp+7Ch] [bp-10Ch]@3
  int v36; // [sp+80h] [bp-108h]@3
  int v37; // [sp+84h] [bp-104h]@3
  int v38; // [sp+88h] [bp-100h]@3
  int v39; // [sp+8Ch] [bp-FCh]@3
  int v40; // [sp+90h] [bp-F8h]@3
  int v41; // [sp+94h] [bp-F4h]@3
  int v42; // [sp+98h] [bp-F0h]@3
  int v43; // [sp+9Ch] [bp-ECh]@3
  int v44; // [sp+A0h] [bp-E8h]@3
  int v45; // [sp+A4h] [bp-E4h]@3
  int v46; // [sp+A8h] [bp-E0h]@3
  int v47; // [sp+ACh] [bp-DCh]@3
  int v48; // [sp+B0h] [bp-D8h]@3
  int v49; // [sp+B4h] [bp-D4h]@3
  int v50; // [sp+B8h] [bp-D0h]@3
  int v51; // [sp+BCh] [bp-CCh]@3
  char v52; // [sp+C0h] [bp-C8h]@3

  v1 = a1;
  v2 = byte_27F8300;
  __dmb();
  if ( !(v2 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27F8300) )
  {
    sub_21E94B4((void **)&v14, "absorption");
    sub_21E94B4((void **)&v15, "minecraft:absorption");
    sub_21E94B4((void **)&v16, "attackDamage");
    sub_21E94B4((void **)&v17, "minecraft:attack_damage");
    sub_21E94B4((void **)&v18, "followRange");
    sub_21E94B4((void **)&v19, "minecraft:follow_range");
    sub_21E94B4((void **)&v20, "generic.absorption");
    sub_21E94B4((void **)&v21, "minecraft:absorption");
    sub_21E94B4((void **)&v22, "generic.attackDamage");
    sub_21E94B4((void **)&v23, "minecraft:attack_damage");
    sub_21E94B4((void **)&v24, "generic.followRange");
    sub_21E94B4((void **)&v25, "minecraft:follow_range");
    sub_21E94B4((void **)&v26, "generic.health");
    sub_21E94B4((void **)&v27, "minecraft:health");
    sub_21E94B4((void **)&v28, "generic.knockbackResistance");
    sub_21E94B4((void **)&v29, "minecraft:knockback_resistance");
    sub_21E94B4((void **)&v30, "generic.movementSpeed");
    sub_21E94B4((void **)&v31, "minecraft:movement");
    sub_21E94B4((void **)&v32, "health");
    sub_21E94B4((void **)&v33, "minecraft:health");
    sub_21E94B4((void **)&v34, "horse.jumpStrength");
    sub_21E94B4((void **)&v35, "minecraft:horse.jump_strength");
    sub_21E94B4((void **)&v36, "knockbackResistance");
    sub_21E94B4((void **)&v37, "minecraft:knockback_resistance");
    sub_21E94B4((void **)&v38, "movementSpeed");
    sub_21E94B4((void **)&v39, "minecraft:movement");
    sub_21E94B4((void **)&v40, "player.exhaustion");
    sub_21E94B4((void **)&v41, "minecraft:player.exhaustion");
    sub_21E94B4((void **)&v42, "player.experience");
    sub_21E94B4((void **)&v43, "minecraft:player.experience");
    sub_21E94B4((void **)&v44, "player.hunger");
    sub_21E94B4((void **)&v45, "minecraft:player.hunger");
    sub_21E94B4((void **)&v46, "player.level");
    sub_21E94B4((void **)&v47, "minecraft:player.level");
    sub_21E94B4((void **)&v48, "player.saturation");
    sub_21E94B4((void **)&v49, "minecraft:player.saturation");
    sub_21E94B4((void **)&v50, "zombie.spawnReinforcements");
    sub_21E94B4((void **)&v51, "minecraft:zombie.spawn_reinforcements");
    v3 = &v52;
    LODWORD(v4) = &algn_27F8301[3];
    std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::_Hashtable<std::pair<std::string const,std::string> const*>(
      v4,
      (int **)&v52,
      0);
    do
    {
      v9 = *((_DWORD *)v3 - 1);
      v3 -= 8;
      v10 = (void *)(v9 - 12);
      if ( (int *)(v9 - 12) != &dword_28898C0 )
      {
        v5 = (unsigned int *)(v9 - 4);
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
          j_j_j_j__ZdlPv_9(v10);
      }
      v11 = (int *)(*(_DWORD *)v3 - 12);
      if ( v11 != &dword_28898C0 )
        v7 = (unsigned int *)(*(_DWORD *)v3 - 4);
            v8 = __ldrex(v7);
          while ( __strex(v8 - 1, v7) );
          v8 = (*v7)--;
        if ( v8 <= 0 )
          j_j_j_j__ZdlPv_9(v11);
    }
    while ( v3 != &v14 );
    _cxa_atexit(std::unordered_map<std::string,std::string,std::hash<std::string>,std::equal_to<std::string>,std::allocator<std::pair<std::string const,std::string>>>::~unordered_map);
    j___cxa_guard_release((unsigned int *)&byte_27F8300);
  }
  v12 = std::_Hashtable<std::string,std::pair<std::string const,std::string>,std::allocator<std::pair<std::string const,std::string>>,std::__detail::_Select1st,std::equal_to<std::string>,std::hash<std::string>,std::__detail::_Mod_range_hashing,std::__detail::_Default_ranged_hash,std::__detail::_Prime_rehash_policy,std::__detail::_Hashtable_traits<true,false,true>>::find(
          (unsigned __int64 *)&algn_27F8301[3],
          v1);
  if ( v12 )
    v1 = (int **)(v12 + 8);
  return v1;
}


void __fastcall SharedAttributes::loadAttributeModifier(SharedAttributes *this, const CompoundTag *a2)
{
  const CompoundTag *v2; // r5@1
  SharedAttributes *v3; // r8@1
  int v4; // r9@1 OVERLAPPED
  int v5; // r10@1 OVERLAPPED
  __int64 v6; // kr00_8@1
  void *v7; // r0@1
  __int64 v8; // kr08_8@2
  void *v9; // r0@2
  const void **v10; // r6@3
  int v16; // r0@4
  signed int v17; // r5@4
  void *v18; // r0@7
  void *v19; // r0@8
  void *v20; // r0@9
  void *v21; // r0@10
  void *v22; // r0@11
  unsigned int *v23; // r2@13
  signed int v24; // r1@15
  unsigned int *v25; // r2@17
  signed int v26; // r1@19
  unsigned int *v27; // r2@21
  signed int v28; // r1@23
  unsigned int *v29; // r2@25
  signed int v30; // r1@27
  unsigned int *v31; // r2@29
  signed int v32; // r1@31
  unsigned int *v33; // r2@33
  signed int v34; // r1@35
  unsigned int *v35; // r2@45
  signed int v36; // r1@47
  int v37; // [sp+10h] [bp-78h]@4
  int v38; // [sp+18h] [bp-70h]@3
  int v39; // [sp+1Ch] [bp-6Ch]@6
  int v40; // [sp+24h] [bp-64h]@3
  int v41; // [sp+28h] [bp-60h]@3
  int v42; // [sp+30h] [bp-58h]@3
  float v43; // [sp+34h] [bp-54h]@6
  int v44; // [sp+3Ch] [bp-4Ch]@3
  __int64 v45; // [sp+40h] [bp-48h]@3
  __int64 v46; // [sp+48h] [bp-40h]@3
  int v47; // [sp+54h] [bp-34h]@2
  int v48; // [sp+5Ch] [bp-2Ch]@1
  char v49; // [sp+64h] [bp-24h]@6

  v2 = a2;
  v3 = this;
  sub_21E94B4((void **)&v48, "UUIDMost");
  v6 = CompoundTag::getInt64((int)v2, (const void **)&v48);
  v5 = HIDWORD(v6);
  v4 = v6;
  v7 = (void *)(v48 - 12);
  if ( (int *)(v48 - 12) != &dword_28898C0 )
  {
    v23 = (unsigned int *)(v48 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
    }
    else
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j__ZdlPv_9(v7);
  }
  sub_21E94B4((void **)&v47, "UUIDLeast");
  v8 = CompoundTag::getInt64((int)v2, (const void **)&v47);
  v9 = (void *)(v47 - 12);
  if ( (int *)(v47 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v47 - 4);
        v26 = __ldrex(v25);
      while ( __strex(v26 - 1, v25) );
      v26 = (*v25)--;
    if ( v26 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v45 = *(_QWORD *)&v4;
  v46 = v8;
  sub_21E94B4((void **)&v44, "Name");
  v10 = CompoundTag::getString((int)v2, (const void **)&v44);
  sub_21E94B4((void **)&v42, "Amount");
  _R0 = CompoundTag::getFloat((int)v2, (const void **)&v42);
  __asm
    VMOV            S0, R0
    VSTR            S0, [SP,#0x88+var_54]
  sub_21E94B4((void **)&v40, "Operation");
  v41 = CompoundTag::getInt((int)v2, (const void **)&v40);
  sub_21E94B4((void **)&v38, "Operand");
  if ( CompoundTag::contains((int)v2, (const void **)&v38) == 1 )
    sub_21E94B4((void **)&v37, "Operand");
    v16 = CompoundTag::getInt((int)v2, (const void **)&v37);
    v17 = 1;
  else
    v16 = 2;
    v17 = 0;
  v39 = v16;
  std::__shared_ptr<AttributeModifier,(__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<AttributeModifier>,mce::UUID &,std::string const&,float,int,int>(
    (int)v3,
    (int)&v49,
    (int)&v45,
    (int)v10,
    (int)&v43,
    &v41,
    &v39);
  if ( v17 == 1 )
    v18 = (void *)(v37 - 12);
    if ( (int *)(v37 - 12) != &dword_28898C0 )
      v35 = (unsigned int *)(v37 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v36 = __ldrex(v35);
        while ( __strex(v36 - 1, v35) );
      }
      else
        v36 = (*v35)--;
      if ( v36 <= 0 )
        j_j_j_j__ZdlPv_9(v18);
  v19 = (void *)(v38 - 12);
  if ( (int *)(v38 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v38 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v40 - 12);
  if ( (int *)(v40 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v40 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v42 - 12);
  if ( (int *)(v42 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v42 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v44 - 12);
  if ( (int *)(v44 - 12) != &dword_28898C0 )
    v33 = (unsigned int *)(v44 - 4);
        v34 = __ldrex(v33);
      while ( __strex(v34 - 1, v33) );
      v34 = (*v33)--;
    if ( v34 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
}


void __fastcall SharedAttributes::_saveAttributeBuff(SharedAttributes *this, const TemporalAttributeBuff *a2)
{
  SharedAttributes *v2; // r4@1
  TemporalAttributeBuff *v3; // r5@1
  void *v4; // r6@1
  int v5; // r0@1
  void *v6; // r0@1
  int v7; // r6@2
  int v8; // r0@2
  void *v9; // r0@2
  int v10; // r6@3
  int v11; // r0@3
  void *v12; // r0@3
  int v13; // r6@4
  int v14; // r0@4
  void *v15; // r0@4
  unsigned int *v16; // r2@6
  signed int v17; // r1@8
  unsigned int *v18; // r2@10
  signed int v19; // r1@12
  unsigned int *v20; // r2@14
  signed int v21; // r1@16
  unsigned int *v22; // r2@18
  signed int v23; // r1@20
  int v24; // [sp+8h] [bp-30h]@4
  int v25; // [sp+10h] [bp-28h]@3
  int v26; // [sp+18h] [bp-20h]@2
  int v27; // [sp+20h] [bp-18h]@1

  v2 = this;
  v3 = a2;
  v4 = operator new(0x1Cu);
  CompoundTag::CompoundTag((int)v4);
  *(_DWORD *)v2 = v4;
  sub_21E94B4((void **)&v27, "Amount");
  v5 = TemporalAttributeBuff::getBaseAmount(v3);
  CompoundTag::putFloat((int)v4, (const void **)&v27, v5);
  v6 = (void *)(v27 - 12);
  if ( (int *)(v27 - 12) != &dword_28898C0 )
  {
    v16 = (unsigned int *)(v27 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v17 = __ldrex(v16);
      while ( __strex(v17 - 1, v16) );
    }
    else
      v17 = (*v16)--;
    if ( v17 <= 0 )
      j_j_j_j__ZdlPv_9(v6);
  }
  v7 = *(_DWORD *)v2;
  sub_21E94B4((void **)&v26, "Duration");
  v8 = TemporalAttributeBuff::getDuration(v3);
  CompoundTag::putInt(v7, (const void **)&v26, v8);
  v9 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v18 = (unsigned int *)(v26 - 4);
        v19 = __ldrex(v18);
      while ( __strex(v19 - 1, v18) );
      v19 = (*v18)--;
    if ( v19 <= 0 )
      j_j_j_j__ZdlPv_9(v9);
  v10 = *(_DWORD *)v2;
  sub_21E94B4((void **)&v25, "LifeTime");
  v11 = TemporalAttributeBuff::getLifeTimer(v3);
  CompoundTag::putInt(v10, (const void **)&v25, v11);
  v12 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v20 = (unsigned int *)(v25 - 4);
        v21 = __ldrex(v20);
      while ( __strex(v21 - 1, v20) );
      v21 = (*v20)--;
    if ( v21 <= 0 )
      j_j_j_j__ZdlPv_9(v12);
  v13 = *(_DWORD *)v2;
  sub_21E94B4((void **)&v24, "Type");
  v14 = AttributeBuff::getType(v3);
  CompoundTag::putInt(v13, (const void **)&v24, v14);
  v15 = (void *)(v24 - 12);
  if ( (int *)(v24 - 12) != &dword_28898C0 )
    v22 = (unsigned int *)(v24 - 4);
        v23 = __ldrex(v22);
      while ( __strex(v23 - 1, v22) );
      v23 = (*v22)--;
    if ( v23 <= 0 )
      j_j_j_j__ZdlPv_9(v15);
}


void __fastcall SharedAttributes::_loadAttribute(SharedAttributes *this, AttributeInstance *a2, const CompoundTag *a3)
{
  SharedAttributes::_loadAttribute(this, a2, a3);
}


void __fastcall SharedAttributes::loadAttributeBuff(SharedAttributes *this, const CompoundTag *a2)
{
  SharedAttributes::loadAttributeBuff(this, a2);
}


int __fastcall SharedAttributes::_legacyGetInstance(unsigned __int64 *a1, int **a2)
{
  unsigned __int64 *v2; // r4@1
  int *v3; // r0@1
  int v4; // r4@1
  void *v5; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@1

  v2 = a1;
  v3 = (int *)SharedAttributes::_legacyGetName(a2);
  sub_21E8AF4(&v9, v3);
  v4 = BaseAttributeMap::getMutableInstance(v2, (int **)&v9);
  v5 = (void *)(v9 - 12);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  return v4;
}
