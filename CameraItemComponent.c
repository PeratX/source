

int __fastcall CameraItemComponent::takePictureNow(CameraItemComponent *this, Player *a2, Entity *a3, Entity *a4)
{
  void (***v4)(void); // r0@1
  Player *v5; // r4@1
  int result; // r0@3
  MinecraftEventing *v7; // r0@4

  v4 = (void (***)(void))*((_DWORD *)this + 8);
  v5 = a2;
  if ( v4 )
    (**v4)();
  result = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v5 + 1408))(v5);
  if ( result == 1 )
  {
    v7 = (MinecraftEventing *)(*(int (__fastcall **)(_DWORD))(*(_DWORD *)v5 + 1440))(v5);
    result = j_j_j__ZN17MinecraftEventing19fireEventCameraUsedEb_0(v7, 1);
  }
  return result;
}


int __fastcall CameraItemComponent::use(CameraItemComponent *this, ItemInstance *a2, Player *a3)
{
  CameraItemComponent *v3; // r4@1
  Player *v4; // r5@1
  ItemInstance *v5; // r6@1
  int v6; // r0@2
  int v7; // r0@2
  int result; // r0@4

  v3 = this;
  v4 = a3;
  v5 = a2;
  if ( !*((_BYTE *)this + 28) )
  {
    v6 = j_ItemInstance::getMaxUseDuration(a2);
    j_Player::startUsingItem(v4, v5, v6);
    v7 = *((_DWORD *)v3 + 8);
    if ( v7 )
      (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  }
  result = 0;
  *((_BYTE *)v3 + 28) = 0;
  return result;
}


int __fastcall CameraItemComponent::releaseUsing(CameraItemComponent *this, ItemInstance *a2, Player *a3, int a4)
{
  Entity *v4; // r5@1
  CameraItemComponent *v5; // r4@1
  ItemInstance *v6; // r6@1
  int result; // r0@1
  int v8; // r0@3
  __int16 v9; // r0@5
  int v10; // r7@5
  int v11; // r0@5
  MinecraftEventing *v12; // r0@5
  char v13; // [sp+14h] [bp-24h]@5

  v4 = a3;
  v5 = this;
  v6 = a2;
  result = (*(int (__fastcall **)(Player *))(*(_DWORD *)a3 + 1408))(a3);
  if ( result == 1 )
  {
    if ( !*((_BYTE *)v5 + 28) )
    {
      v8 = *((_DWORD *)v5 + 8);
      if ( v8 )
        (*(void (**)(void))(*(_DWORD *)v8 + 8))();
      v9 = j_ItemInstance::getAuxValue(v6);
      j_ItemInstance::setAuxValue(v6, (signed __int16)(v9 + 1));
      (*(void (__fastcall **)(Entity *, ItemInstance *))(*(_DWORD *)v4 + 612))(v4, v6);
      j_Entity::getAttachPos((AABB *)&v13, (int)v4, 3, 0);
      v10 = j_Entity::getLevel(v4);
      v11 = j_Entity::getRegion(v4);
      j_Level::playSynchronizedSound(v10, v11, 123, (int)&v13, -1, 1, 0, 0);
      v12 = (MinecraftEventing *)(*(int (__fastcall **)(Entity *))(*(_DWORD *)v4 + 1440))(v4);
      j_MinecraftEventing::fireEventCameraUsed(v12, 0);
    }
    result = 0;
    *((_BYTE *)v5 + 28) = 0;
  }
  return result;
}


signed int __fastcall CameraItemComponent::init(CameraItemComponent *this, Json::Value *a2)
{
  Json::Value *v2; // r5@1
  CameraItemComponent *v3; // r4@1
  Json::Value *v4; // r0@1
  Json::Value *v5; // r0@1
  Json::Value *v6; // r0@1
  Json::Value *v7; // r0@1
  Json::Value *v8; // r0@1

  v2 = a2;
  v3 = this;
  v4 = (Json::Value *)j_Json::Value::operator[](a2, "black_bars_duration");
  *((_DWORD *)v3 + 1) = j_Json::Value::asFloat(v4, 5.0);
  v5 = (Json::Value *)j_Json::Value::operator[](v2, "black_bars_screen_ratio");
  *((_DWORD *)v3 + 2) = j_Json::Value::asFloat(v5, 0.08);
  v6 = (Json::Value *)j_Json::Value::operator[](v2, "shutter_duration");
  *((_DWORD *)v3 + 4) = j_Json::Value::asFloat(v6, 3.33);
  v7 = (Json::Value *)j_Json::Value::operator[](v2, "picture_duration");
  *((_DWORD *)v3 + 5) = j_Json::Value::asFloat(v7, 20.0);
  v8 = (Json::Value *)j_Json::Value::operator[](v2, "slide_away_duration");
  *((_DWORD *)v3 + 6) = j_Json::Value::asFloat(v8, 5.0);
  return 1;
}


signed int __fastcall CameraItemComponent::useOn(CameraItemComponent *this, ItemInstance *a2, Entity *a3, const BlockPos *a4, signed __int8 a5, const Vec3 *a6, ItemUseCallback *a7)
{
  Entity *v7; // r8@1
  ItemInstance *v8; // r6@1
  CameraItemComponent *v9; // r5@1
  const BlockPos *v10; // r7@1
  int v11; // r4@2
  int v12; // r0@2
  signed int v13; // r7@4
  int v14; // r0@9
  int v15; // r0@9
  BlockSource *v16; // r6@13
  int v17; // r4@13
  int (*v22)(void); // r5@19
  unsigned __int64 *v23; // r0@20
  Level *v24; // r5@21
  void *v25; // r0@22
  void *v26; // r0@23
  void *v27; // r0@24
  int (__fastcall *v28)(Level *, int, int *); // r4@26
  int v29; // r1@26
  int v30; // r0@26
  TripodCamera *v31; // r5@26
  unsigned int *v33; // r2@37
  signed int v34; // r1@39
  unsigned int *v35; // r2@41
  signed int v36; // r1@43
  unsigned int *v37; // r2@45
  signed int v38; // r1@47
  int v39; // [sp+10h] [bp-98h]@26
  int v40; // [sp+14h] [bp-94h]@22
  int v41; // [sp+18h] [bp-90h]@22
  int v42; // [sp+1Ch] [bp-8Ch]@22
  int v43; // [sp+20h] [bp-88h]@23
  int v44; // [sp+24h] [bp-84h]@22
  int v45; // [sp+28h] [bp-80h]@22
  float v46; // [sp+2Ch] [bp-7Ch]@20
  float v47; // [sp+38h] [bp-70h]@20
  char v48; // [sp+44h] [bp-64h]@20
  int v49; // [sp+60h] [bp-48h]@19
  int v50; // [sp+64h] [bp-44h]@19
  int v51; // [sp+68h] [bp-40h]@19
  float v52; // [sp+6Ch] [bp-3Ch]@13
  int v55; // [sp+78h] [bp-30h]@13
  int v56; // [sp+7Ch] [bp-2Ch]@13
  int v57; // [sp+80h] [bp-28h]@13

  v7 = a3;
  v8 = a2;
  v9 = this;
  v10 = a4;
  if ( j_Entity::hasCategory((int)a3, 1) == 1 )
  {
    v11 = (*(int (__fastcall **)(Entity *))(*(_DWORD *)v7 + 312))(v7);
    v12 = j_Player::isUsingItem(v7);
    if ( v11 == 1 )
    {
      if ( v12 )
      {
        v13 = 0;
      }
      else
        if ( !*((_BYTE *)v9 + 28) )
        {
          v14 = j_ItemInstance::getMaxUseDuration(v8);
          j_Player::startUsingItem(v7, v8, v14);
          v15 = *((_DWORD *)v9 + 8);
          if ( v15 )
            (*(void (**)(void))(*(_DWORD *)v15 + 4))();
        }
        *((_BYTE *)v9 + 28) = 0;
    }
    else if ( v12 )
      v13 = 0;
    else
      *((_BYTE *)v9 + 28) = 1;
      if ( a5 == 1 )
        v16 = (BlockSource *)j_Entity::getRegion(v7);
        v17 = j_BlockSource::getBlock(v16, v10);
        v55 = *(_DWORD *)v10;
        v56 = *((_DWORD *)v10 + 1);
        v57 = *((_DWORD *)v10 + 2);
        j_Vec3::Vec3((int)&v52, (int)v10);
        if ( (*(int (__fastcall **)(int, BlockSource *, int *))(*(_DWORD *)v17 + 332))(v17, v16, &v55) == 1 )
          __asm
          {
            VLDR            S0, [SP,#0xA8+var_3C]
            VLDR            S2, [SP,#0xA8+var_34]
          }
        else
          ++v56;
          if ( j_BlockSource::isEmptyBlock(v16, (const BlockPos *)&v55) != 1 )
            return 0;
            VLDR            S0, [SP,#0xA8+var_30]
            VCVT.F32.S32    S0, S0
            VLDR            S2, [SP,#0xA8+var_28]
            VSTR            S0, [SP,#0xA8+var_3C]
            VCVT.F32.S32    S2, S2
            VSTR            S2, [SP,#0xA8+var_34]
        __asm
          VMOV.F32        S4, #0.5
          VADD.F32        S0, S0, S4
          VADD.F32        S2, S2, S4
          VSTR            S0, [SP,#0xA8+var_3C]
          VSTR            S2, [SP,#0xA8+var_34]
        if ( (*(int (**)(void))(*Block::mCameraBlock + 224))() == 1 )
          v22 = *(int (**)(void))(*Block::mCameraBlock + 224);
          v49 = v55;
          v50 = v56 + 1;
          v51 = v57;
          if ( v22() == 1 )
            __asm
            {
              VLDR            S0, [SP,#0xA8+var_30]
              VMOV.F32        S16, #1.0
              VLDR            S2, [SP,#0xA8+var_2C]
              VMOV.F32        S6, #2.0
              VLDR            S4, [SP,#0xA8+var_28]
              VCVT.F32.S32    S0, S0
              VCVT.F32.S32    S2, S2
              VCVT.F32.S32    S4, S4
              VADD.F32        S8, S0, S16
              VSTR            S0, [SP,#0xA8+var_70]
              VADD.F32        S6, S2, S6
              VSTR            S2, [SP,#0xA8+var_6C]
              VADD.F32        S10, S4, S16
              VSTR            S4, [SP,#0xA8+var_68]
              VSTR            S8, [SP,#0xA8+var_7C]
              VSTR            S6, [SP,#0xA8+var_78]
              VSTR            S10, [SP,#0xA8+var_74]
            }
            j_AABB::AABB((int)&v48, (int)&v47, (int)&v46);
            v13 = 0;
            v23 = (unsigned __int64 *)j_BlockSource::fetchEntities2((int)v16, 256, (const AABB *)&v48, 0);
            if ( (unsigned int)*v23 == *v23 >> 32 )
              __asm
              {
                VLDR            S0, [SP,#0xA8+var_38]
                VADD.F32        S0, S0, S16
                VSTR            S0, [SP,#0xA8+var_38]
              }
              v24 = (Level *)j_Entity::getLevel(v7);
              j_Level::broadcastSoundEvent(v24, (int)v16, 74, (int)&v52, -1, 1, 0, 0);
              v13 = 1;
              if ( !j_Level::isClientSide(v24) )
                j_EntityDefinitionIdentifier::EntityDefinitionIdentifier((void **)&v42, 318);
                v40 = 0;
                v41 = 0;
                j_EntityFactory::createSpawnedEntity((Entity **)&v45, (const void **)&v42, (int)v7, (int)&v52, &v40);
                v25 = (void *)(v44 - 12);
                if ( (int *)(v44 - 12) != &dword_28898C0 )
                {
                  v33 = (unsigned int *)(v44 - 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v34 = __ldrex(v33);
                    while ( __strex(v34 - 1, v33) );
                  }
                  else
                    v34 = (*v33)--;
                  if ( v34 <= 0 )
                    j_j_j_j__ZdlPv_9(v25);
                }
                v26 = (void *)(v43 - 12);
                if ( (int *)(v43 - 12) != &dword_28898C0 )
                  v35 = (unsigned int *)(v43 - 4);
                      v36 = __ldrex(v35);
                    while ( __strex(v36 - 1, v35) );
                    v36 = (*v35)--;
                  if ( v36 <= 0 )
                    j_j_j_j__ZdlPv_9(v26);
                v27 = (void *)(v42 - 12);
                if ( (int *)(v42 - 12) != &dword_28898C0 )
                  v37 = (unsigned int *)(v42 - 4);
                      v38 = __ldrex(v37);
                    while ( __strex(v38 - 1, v37) );
                    v38 = (*v37)--;
                  if ( v38 <= 0 )
                    j_j_j_j__ZdlPv_9(v27);
                if ( v45 )
                  v28 = *(int (__fastcall **)(Level *, int, int *))(*(_DWORD *)v24 + 44);
                  v29 = j_Entity::getRegion(v7);
                  v30 = v45;
                  v45 = 0;
                  v39 = v30;
                  v31 = (TripodCamera *)v28(v24, v29, &v39);
                  if ( v39 )
                    (*(void (**)(void))(*(_DWORD *)v39 + 32))();
                  v13 = 0;
                  v39 = 0;
                  if ( v31 )
                    j_TripodCamera::setPlayerOwner(v31, v7);
                    v13 = 1;
                  if ( v45 )
                    (*(void (**)(void))(*(_DWORD *)v45 + 32))();
                else
                  v13 = 1;
          else
          v13 = 0;
  }
  else
    v13 = 0;
  return v13;
}


int __fastcall CameraItemComponent::CameraItemComponent(int result)
{
  *(_DWORD *)result = &off_2720868;
  *(_DWORD *)(result + 4) = 1084227584;
  *(_DWORD *)(result + 8) = 1034147594;
  *(_DWORD *)(result + 12) = 1056964608;
  *(_DWORD *)(result + 16) = 1079320248;
  *(_DWORD *)(result + 20) = 1101004800;
  *(_BYTE *)(result + 28) = 0;
  *(_DWORD *)(result + 32) = 0;
  return result;
}
