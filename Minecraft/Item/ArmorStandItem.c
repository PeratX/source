

void __fastcall ArmorStandItem::~ArmorStandItem(ArmorStandItem *this)
{
  ArmorStandItem::~ArmorStandItem(this);
}


void *__fastcall ArmorStandItem::_useOn(int a1, int a2, Entity *this, int a4, int a5, int a6, int a7, int a8, int a9)
{
  Entity *v10; // r5@1
  int v11; // r11@1
  BlockSource *v12; // r0@2
  BlockSource *v13; // r10@2
  int v14; // r0@2
  int v15; // r0@3
  int v17; // r2@3
  int v19; // r1@3
  void *v20; // r8@4
  int v21; // r7@7
  int v22; // r0@8
  int v23; // r0@10
  int v24; // r0@11
  char *v28; // r0@13
  char *v29; // r7@13
  int v30; // r1@13 OVERLAPPED
  int v31; // r2@13 OVERLAPPED
  signed int v32; // r0@13
  void *v33; // r0@15
  ItemInstance *v35; // r7@17
  Level *v36; // r11@17
  Block *v37; // r0@18
  Material *v38; // r0@18
  Block *v39; // r0@19
  Block *v40; // r0@21
  Material *v41; // r0@21
  float v42; // r1@21
  Block *v43; // r0@22
  float v47; // r1@24
  void *v49; // r0@24
  void *v50; // r0@25
  void *v51; // r0@26
  signed int v52; // r4@34
  int v53; // r1@35
  int (__fastcall *v54)(Level *, BlockSource *, int *); // r3@35
  int v55; // r6@35
  int v57; // r0@43
  unsigned int *v59; // r2@48
  signed int v60; // r1@50
  unsigned int *v61; // r2@52
  signed int v62; // r1@54
  unsigned int *v63; // r2@56
  signed int v64; // r1@58
  Entity *v65; // [sp+Ch] [bp-CCh]@3
  int v66; // [sp+10h] [bp-C8h]@35
  int v67; // [sp+14h] [bp-C4h]@28
  int v68; // [sp+1Ch] [bp-BCh]@24
  int v69; // [sp+20h] [bp-B8h]@24
  int v70; // [sp+24h] [bp-B4h]@24
  int v71; // [sp+28h] [bp-B0h]@25
  int v72; // [sp+2Ch] [bp-ACh]@24
  int v73; // [sp+30h] [bp-A8h]@24
  int v74; // [sp+34h] [bp-A4h]@21
  int v75; // [sp+38h] [bp-A0h]@21
  int v76; // [sp+3Ch] [bp-9Ch]@21
  int v77; // [sp+40h] [bp-98h]@18
  int v78; // [sp+44h] [bp-94h]@18
  int v79; // [sp+48h] [bp-90h]@18
  float v80; // [sp+4Ch] [bp-8Ch]@24
  float v81; // [sp+58h] [bp-80h]@13
  char v82; // [sp+64h] [bp-74h]@13
  float v83; // [sp+80h] [bp-58h]@13
  int v86; // [sp+8Ch] [bp-4Ch]@6
  int v87; // [sp+90h] [bp-48h]@6
  int v88; // [sp+94h] [bp-44h]@6
  int v89; // [sp+98h] [bp-40h]@5
  int v90; // [sp+9Ch] [bp-3Ch]@5
  int v91; // [sp+A0h] [bp-38h]@5

  _R6 = a4;
  v10 = this;
  v11 = a2;
  if ( !(_BYTE)a5 )
    return 0;
  v12 = (BlockSource *)j_Entity::getRegion(this);
  v13 = v12;
  v14 = j_BlockSource::getBlock(v12, (const BlockPos *)_R6);
  if ( (*(int (**)(void))(*(_DWORD *)v14 + 332))() == 1 )
  {
    v65 = v10;
    _R5 = (int *)(_R6 + 8);
    v15 = *(_DWORD *)(_R6 + 8);
    _R9 = (int *)(_R6 + 4);
    v17 = *(_DWORD *)(_R6 + 4);
    v19 = *(_DWORD *)_R6;
  }
  else
    j_BlockPos::relative((BlockPos *)&v89, _R6, a5, 1);
    v19 = v89;
    *(_DWORD *)_R6 = v89;
    v17 = v90;
    *(_DWORD *)(_R6 + 4) = v90;
    v15 = v91;
    *(_DWORD *)(_R6 + 8) = v91;
  v86 = v19;
  v87 = v17 + 1;
  v88 = v15;
  if ( j_BlockSource::isEmptyBlock(v13, (const BlockPos *)_R6) )
    v21 = 0;
    v22 = j_BlockSource::getBlock(v13, (const BlockPos *)_R6);
    v21 = (*(int (**)(void))(*(_DWORD *)v22 + 332))() ^ 1;
  if ( j_BlockSource::isEmptyBlock(v13, (const BlockPos *)&v86) )
    v23 = 0;
    v24 = j_BlockSource::getBlock(v13, (const BlockPos *)&v86);
    v23 = (*(int (**)(void))(*(_DWORD *)v24 + 332))() ^ 1;
  v20 = 0;
  if ( !(v23 | v21) )
    j_Vec3::Vec3((int)&v83, _R6);
    __asm
    {
      VMOV.F32        S0, #1.0
      VLDR            S4, [SP,#0xD8+var_58]
      VMOV.F32        S2, #2.0
      VLDR            S6, [SP,#0xD8+var_54]
      VLDR            S8, [SP,#0xD8+var_50]
      VADD.F32        S4, S4, S0
      VADD.F32        S2, S6, S2
      VADD.F32        S0, S8, S0
      VSTR            S4, [SP,#0xD8+var_80]
      VSTR            S2, [SP,#0xD8+var_7C]
      VSTR            S0, [SP,#0xD8+var_78]
    }
    j_AABB::AABB((int)&v82, (int)&v83, (int)&v81);
    v28 = j_BlockSource::fetchEntities(v13, 0, (const AABB *)&v82);
    v29 = v28;
    *(_QWORD *)&v30 = *(_QWORD *)v28;
    v32 = v31 - v30;
    if ( 0 != (v31 - v30) >> 2 )
      if ( (unsigned int)(v32 >> 2) >= 0x40000000 )
        sub_21E57F4();
      v33 = j_operator new(v32);
      *(_QWORD *)&v30 = *(_QWORD *)v29;
      v20 = v33;
    if ( v31 == v30 )
      _R4 = v65;
      v35 = (ItemInstance *)v11;
      v36 = (Level *)j_Entity::getLevel(v65);
      __asm
      {
        VLDR            S0, [R6]
        VMOV.F32        S2, #0.5
        VLDR            S4, [R5]
        VCVT.F32.S32    S0, S0
        VCVT.F32.S32    S4, S4
        VLDR            S6, [R9]
        VCVT.F32.S32    S6, S6
        VADD.F32        S0, S0, S2
        VADD.F32        S2, S4, S2
        VSTR            S0, [SP,#0xD8+var_8C]
        VSTR            S6, [SP,#0xD8+var_88]
        VSTR            S2, [SP,#0xD8+var_84]
      }
      if ( !j_Level::isClientSide(v36) )
        v77 = *(_DWORD *)_R6;
        v78 = *_R9;
        v79 = *_R5;
        v37 = (Block *)j_BlockSource::getBlock(v13, (const BlockPos *)&v77);
        v38 = (Material *)j_Block::getMaterial(v37);
        if ( !j_Material::isLiquid(v38) )
        {
          v39 = (Block *)j_BlockSource::getBlock(v13, (const BlockPos *)&v77);
          if ( !j_Block::isType(v39, (const Block *)Block::mTopSnow) )
            j_BlockSource::removeBlock(v13, (const BlockPos *)_R6);
        }
        v74 = v86;
        v75 = v87;
        v76 = v88;
        v40 = (Block *)j_BlockSource::getBlock(v13, (const BlockPos *)&v74);
        v41 = (Material *)j_Block::getMaterial(v40);
        if ( !j_Material::isLiquid(v41) )
          v43 = (Block *)j_BlockSource::getBlock(v13, (const BlockPos *)&v74);
          if ( !j_Block::isType(v43, (const Block *)Block::mTopSnow) )
            j_BlockSource::removeBlock(v13, (const BlockPos *)&v86);
        __asm
          VLDR            S0, =-180.0
          VLDR            S2, [R4,#0x7C]
          VADD.F32        S0, S2, S0
          VMOV            R0, S0
        _R0 = j_mce::Math::wrapDegrees(_R0, v42);
          VMOV            S0, R0
          VLDR            S2, =22.5
          VADD.F32        S0, S0, S2
          VLDR            S2, =0.022222
          VMUL.F32        S0, S0, S2
        _R0 = j_mce::Math::floor(_R0, v47);
          VCVT.F32.S32    S16, S0
        j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v70, 317);
        v68 = 0;
        v69 = 0;
        j_EntityFactory::createSpawnedEntity((Entity **)&v73, (const void **)&v70, (int)v65, (int)&v80, &v68);
        v49 = (void *)(v72 - 12);
        if ( (int *)(v72 - 12) != &dword_28898C0 )
          v59 = (unsigned int *)(v72 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v60 = __ldrex(v59);
            while ( __strex(v60 - 1, v59) );
          }
          else
            v60 = (*v59)--;
          if ( v60 <= 0 )
            j_j_j_j__ZdlPv_9(v49);
        v50 = (void *)(v71 - 12);
        if ( (int *)(v71 - 12) != &dword_28898C0 )
          v61 = (unsigned int *)(v71 - 4);
              v62 = __ldrex(v61);
            while ( __strex(v62 - 1, v61) );
            v62 = (*v61)--;
          if ( v62 <= 0 )
            j_j_j_j__ZdlPv_9(v50);
        v51 = (void *)(v70 - 12);
        if ( (int *)(v70 - 12) != &dword_28898C0 )
          v63 = (unsigned int *)(v70 - 4);
              v64 = __ldrex(v63);
            while ( __strex(v64 - 1, v63) );
            v64 = (*v63)--;
          if ( v64 <= 0 )
            j_j_j_j__ZdlPv_9(v51);
        if ( v73 )
          __asm { VLDR            S0, =45.0 }
          v67 = 0;
          __asm
            VMUL.F32        S0, S16, S0
            VSTR            S0, [SP,#0xD8+var_C0]
          j_Entity::moveTo(v73, (int)&v80);
          if ( a9 && (*(int (__fastcall **)(int, int))(*(_DWORD *)a9 + 24))(a9, v73) )
            if ( v73 )
              (*(void (**)(void))(*(_DWORD *)v73 + 32))();
            goto LABEL_34;
          v53 = v73;
          v54 = *(int (__fastcall **)(Level *, BlockSource *, int *))(*(_DWORD *)v36 + 44);
          v73 = 0;
          v66 = v53;
          v55 = v54(v36, v13, &v66);
          if ( v66 )
            (*(void (**)(void))(*(_DWORD *)v66 + 32))();
          _ZF = a9 == 0;
          v66 = 0;
          if ( a9 )
            _ZF = v55 == 0;
          if ( !_ZF )
            (*(void (__fastcall **)(int, int))(*(_DWORD *)a9 + 28))(a9, v55);
          if ( v73 )
            (*(void (**)(void))(*(_DWORD *)v73 + 32))();
      j_MinecraftEventing::fireEventItemUsed((int)v65, v35, 6);
      (*(void (__fastcall **)(Entity *, ItemInstance *))(*(_DWORD *)v65 + 612))(v65, v35);
      v57 = j_BlockSource::getLevel(v13);
      j_Level::broadcastDimensionEvent(v57, v13, 1063, (int)&v80, 0);
      v52 = 1;
      goto LABEL_44;
    j___aeabi_memmove4_0((int)v20, v30);
LABEL_34:
    v52 = 0;
LABEL_44:
    if ( v20 )
      j_operator delete(v20);
    v20 = (void *)v52;
  return v20;
}


_DWORD *__fastcall ArmorStandItem::ArmorStandItem(int a1, const void **a2, __int16 a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)j_Item::Item(a1, a2, a3);
  *result = &off_271FD50;
  return result;
}


void __fastcall ArmorStandItem::~ArmorStandItem(ArmorStandItem *this)
{
  Item *v1; // r0@1

  v1 = j_Item::~Item(this);
  j_j_j__ZdlPv_7((void *)v1);
}


int __fastcall ArmorStandItem::_shouldRemove(int a1, BlockSource *a2, const BlockPos *a3)
{
  BlockSource *v3; // r5@1
  const BlockPos *v4; // r4@1
  Block *v5; // r0@1
  Material *v6; // r0@1
  int result; // r0@2
  Block *v8; // r0@3

  v3 = a2;
  v4 = a3;
  v5 = (Block *)j_BlockSource::getBlock(a2, a3);
  v6 = (Material *)j_Block::getMaterial(v5);
  if ( j_Material::isLiquid(v6) )
  {
    result = 0;
  }
  else
    v8 = (Block *)j_BlockSource::getBlock(v3, v4);
    result = j_Block::isType(v8, (const Block *)Block::mTopSnow) ^ 1;
  return result;
}
