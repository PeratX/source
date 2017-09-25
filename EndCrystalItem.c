

int __fastcall EndCrystalItem::EndCrystalItem(int a1, const void **a2, __int16 a3)
{
  int result; // r0@1

  result = j_Item::Item(a1, a2, a3);
  *(_DWORD *)result = &off_2720EA8;
  *(_BYTE *)(result + 43) = 1;
  return result;
}


int __fastcall EndCrystalItem::_useOn(int a1, int a2, Entity *this, int a4, int a5, int a6, int a7, int a8, int a9)
{
  Entity *v9; // r6@1
  int v10; // r4@1
  ItemInstance *v11; // r10@1
  const BlockPos *v12; // r7@1
  signed int v13; // r5@3
  int v14; // r1@3
  void *v19; // r11@7
  char *v20; // r0@7
  char *v21; // r5@7
  int v22; // r1@7 OVERLAPPED
  int v23; // r2@7 OVERLAPPED
  signed int v24; // r0@7
  void *v25; // r0@9
  Level *v26; // r8@11
  void *v27; // r0@12
  void *v28; // r0@13
  void *v29; // r0@14
  int v30; // r1@23
  int (__fastcall *v31)(Level *, const BlockPos *, int *); // r3@23
  int v32; // r5@23
  bool v33; // zf@25
  int v34; // r0@33
  unsigned int *v36; // r2@39
  signed int v37; // r1@41
  unsigned int *v38; // r2@43
  signed int v39; // r1@45
  unsigned int *v40; // r2@47
  signed int v41; // r1@49
  int v42; // [sp+8h] [bp-88h]@23
  float v43; // [sp+Ch] [bp-84h]@12
  int v44; // [sp+18h] [bp-78h]@12
  int v45; // [sp+1Ch] [bp-74h]@13
  int v46; // [sp+20h] [bp-70h]@12
  int v47; // [sp+24h] [bp-6Ch]@12
  char v48; // [sp+28h] [bp-68h]@7
  float v49; // [sp+44h] [bp-4Ch]@7
  float v50; // [sp+50h] [bp-40h]@7
  unsigned __int8 v53; // [sp+5Ch] [bp-34h]@3
  unsigned __int8 v54; // [sp+60h] [bp-30h]@3
  unsigned __int8 v55; // [sp+64h] [bp-2Ch]@1

  v9 = this;
  v10 = a4;
  v11 = (ItemInstance *)a2;
  v12 = (const BlockPos *)j_Entity::getRegion(this);
  j_BlockSource::getBlockID((BlockSource *)&v55, v12, v10);
  if ( v55 != *(_BYTE *)(Block::mObsidian + 4) && v55 != *(_BYTE *)(Block::mBedrock + 4) )
    return 0;
  j_BlockSource::getBlockID(
    (BlockSource *)&v54,
    (int)v12,
    *(_QWORD *)v10,
    (*(_QWORD *)v10 >> 32) + 1,
    *(_DWORD *)(v10 + 8));
    (BlockSource *)&v53,
    (*(_QWORD *)v10 >> 32) + 2,
  v13 = 0;
  v14 = *(_BYTE *)(Block::mAir + 4);
  _ZF = v54 == v14;
  if ( v54 == v14 )
    _ZF = v53 == v54;
  if ( _ZF )
  {
    j_Vec3::Vec3((int)&v50, v10);
    __asm
    {
      VMOV.F32        S0, #1.0
      VLDR            S4, [SP,#0x90+var_40]
      VMOV.F32        S2, #2.0
      VLDR            S6, [SP,#0x90+var_3C]
      VLDR            S8, [SP,#0x90+var_38]
      VADD.F32        S4, S4, S0
      VADD.F32        S2, S6, S2
      VADD.F32        S0, S8, S0
      VSTR            S4, [SP,#0x90+var_4C]
      VSTR            S2, [SP,#0x90+var_48]
      VSTR            S0, [SP,#0x90+var_44]
    }
    j_AABB::AABB((int)&v48, (int)&v50, (int)&v49);
    v19 = 0;
    v20 = j_BlockSource::fetchEntities(v12, 0, (const AABB *)&v48);
    v21 = v20;
    *(_QWORD *)&v22 = *(_QWORD *)v20;
    v24 = v23 - v22;
    if ( 0 != (v23 - v22) >> 2 )
      if ( (unsigned int)(v24 >> 2) >= 0x40000000 )
        sub_21E57F4();
      v25 = j_operator new(v24);
      *(_QWORD *)&v22 = *(_QWORD *)v21;
      v19 = v25;
    if ( v23 == v22 )
      v26 = (Level *)j_Entity::getLevel(v9);
      if ( !j_Level::isClientSide(v26) )
      {
        j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v44, 71);
        __asm
        {
          VMOV.F32        S0, #0.5
          VLDR            S4, [SP,#0x90+var_40]
          VMOV.F32        S2, #1.5
          VLDR            S6, [SP,#0x90+var_3C]
          VLDR            S8, [SP,#0x90+var_38]
          VADD.F32        S4, S4, S0
          VADD.F32        S2, S6, S2
          VADD.F32        S0, S8, S0
          VSTR            S4, [SP,#0x90+var_84]
          VSTR            S2, [SP,#0x90+var_80]
          VSTR            S0, [SP,#0x90+var_7C]
        }
        j_EntityFactory::createSpawnedEntity((Entity **)&v47, (const void **)&v44, (int)v9, (int)&v43, &Vec2::ZERO);
        v27 = (void *)(v46 - 12);
        if ( (int *)(v46 - 12) != &dword_28898C0 )
          v36 = (unsigned int *)(v46 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v37 = __ldrex(v36);
            while ( __strex(v37 - 1, v36) );
          }
          else
            v37 = (*v36)--;
          if ( v37 <= 0 )
            j_j_j_j__ZdlPv_9(v27);
        v28 = (void *)(v45 - 12);
        if ( (int *)(v45 - 12) != &dword_28898C0 )
          v38 = (unsigned int *)(v45 - 4);
              v39 = __ldrex(v38);
            while ( __strex(v39 - 1, v38) );
            v39 = (*v38)--;
          if ( v39 <= 0 )
            j_j_j_j__ZdlPv_9(v28);
        v29 = (void *)(v44 - 12);
        if ( (int *)(v44 - 12) != &dword_28898C0 )
          v40 = (unsigned int *)(v44 - 4);
              v41 = __ldrex(v40);
            while ( __strex(v41 - 1, v40) );
            v41 = (*v40)--;
          if ( v41 <= 0 )
            j_j_j_j__ZdlPv_9(v29);
        if ( a9 && (*(int (__fastcall **)(int, int))(*(_DWORD *)a9 + 24))(a9, v47) )
          if ( v47 )
            (*(void (**)(void))(*(_DWORD *)v47 + 32))();
          goto LABEL_22;
        v30 = v47;
        v31 = *(int (__fastcall **)(Level *, const BlockPos *, int *))(*(_DWORD *)v26 + 44);
        v47 = 0;
        v42 = v30;
        v32 = v31(v26, v12, &v42);
        if ( v42 )
          (*(void (**)(void))(*(_DWORD *)v42 + 32))();
        v33 = a9 == 0;
        v42 = 0;
        if ( a9 )
          v33 = v32 == 0;
        if ( !v33 )
          (*(void (__fastcall **)(int, int))(*(_DWORD *)a9 + 28))(a9, v47);
        if ( v47 )
          (*(void (**)(void))(*(_DWORD *)v47 + 32))();
      }
      if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)v9 + 524))(v9) == 2 )
        v34 = j_Entity::getDimension(v9);
        j_EndDragonFight::tryRespawn(*(EndDragonFight **)(v34 + 320));
      v13 = 1;
      if ( !(*(int (__fastcall **)(Entity *))(*(_DWORD *)v9 + 652))(v9) )
        j_ItemInstance::remove(v11, 1);
      goto LABEL_36;
    j___aeabi_memmove4_0((int)v19, v22);
LABEL_22:
    v13 = 0;
LABEL_36:
    if ( v19 )
      j_operator delete(v19);
  }
  return v13;
}


void __fastcall EndCrystalItem::~EndCrystalItem(EndCrystalItem *this)
{
  Item *v1; // r0@1

  v1 = j_Item::~Item(this);
  j_j_j__ZdlPv_7((void *)v1);
}


void __fastcall EndCrystalItem::~EndCrystalItem(EndCrystalItem *this)
{
  EndCrystalItem::~EndCrystalItem(this);
}
