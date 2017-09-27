

_DWORD *__fastcall TeleportToSubcomponent::TeleportToSubcomponent(_DWORD *result)
{
  *result = &off_271EC18;
  return result;
}


int __fastcall TeleportToSubcomponent::doOnHitEffect(TeleportToSubcomponent *this, ProjectileComponent *a2)
{
  ProjectileComponent *v2; // r5@1
  int v3; // r7@1
  BlockSource *v4; // r0@1
  BlockSource *v5; // r8@1
  int v6; // r0@1
  Player *v7; // r6@1
  int v8; // r1@1
  int result; // r0@1
  int v10; // r4@1
  int v11; // r0@4
  __int64 v12; // r1@4
  int v13; // r5@5
  int v14; // r0@8
  __int64 v15; // r1@8
  void (__fastcall *v16)(int, int *, signed int, int); // r5@8
  int v17; // r0@8
  int v18; // r10@9
  int v19; // r0@9
  __int64 v20; // r1@9
  int v21; // r1@9
  int v22; // r0@12
  int v23; // r0@13
  char v24; // [sp+8h] [bp-128h]@14
  void **v25; // [sp+10h] [bp-120h]@9
  signed int v26; // [sp+14h] [bp-11Ch]@9
  signed int v27; // [sp+18h] [bp-118h]@9
  char v28; // [sp+1Ch] [bp-114h]@9
  int v29; // [sp+20h] [bp-110h]@9
  __int64 v30; // [sp+28h] [bp-108h]@9
  int v31; // [sp+30h] [bp-100h]@9
  __int64 v32; // [sp+34h] [bp-FCh]@9
  int v33; // [sp+3Ch] [bp-F4h]@9
  char v34; // [sp+40h] [bp-F0h]@9
  char v35; // [sp+41h] [bp-EFh]@9
  int v36; // [sp+48h] [bp-E8h]@10
  int v37; // [sp+4Ch] [bp-E4h]@11
  signed int v38; // [sp+50h] [bp-E0h]@12
  int v39; // [sp+54h] [bp-DCh]@12
  __int64 v40; // [sp+58h] [bp-D8h]@8
  int v41; // [sp+60h] [bp-D0h]@8
  int v42; // [sp+68h] [bp-C8h]@8
  int v43; // [sp+6Ch] [bp-C4h]@8
  int v44; // [sp+70h] [bp-C0h]@8
  __int64 v45; // [sp+78h] [bp-B8h]@4
  int v46; // [sp+80h] [bp-B0h]@4
  char v47; // [sp+88h] [bp-A8h]@3
  char v48; // [sp+CCh] [bp-64h]@2
  int v49; // [sp+E0h] [bp-50h]@8
  int v50; // [sp+E4h] [bp-4Ch]@8
  int v51; // [sp+E8h] [bp-48h]@8
  Entity *v52; // [sp+ECh] [bp-44h]@2

  v2 = a2;
  v3 = *((_DWORD *)a2 + 4);
  v4 = (BlockSource *)j_Entity::getRegion(*((Entity **)a2 + 4));
  v5 = v4;
  v6 = j_BlockSource::getLevel(v4);
  v7 = (Player *)v6;
  result = j_Level::fetchEntity(v6, v8, *((_QWORD *)v2 + 1), *((_QWORD *)v2 + 1) >> 32, 0);
  v10 = result;
  if ( result )
  {
    j_HitResult::HitResult((int)&v48, (int)v2 + 108);
    if ( v52 )
    {
      j_EntityDamageByChildEntitySource::EntityDamageByChildEntitySource((int)&v47, v3, (Entity *)v10, 3);
      j_Entity::hurt(v52, (const EntityDamageSource *)&v47, 0, 1, 0);
      j_EntityDamageByChildEntitySource::~EntityDamageByChildEntitySource((EntityDamageByChildEntitySource *)&v47);
    }
    v11 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 52))(v3);
    v12 = *(_QWORD *)v11;
    v46 = *(_DWORD *)(v11 + 8);
    v45 = v12;
    j_Level::broadcastLevelEvent(v7, 2013, (unsigned int)&v45, 0);
    result = j_Level::isClientSide(v7);
    if ( !result )
      v13 = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 524))(v10);
      result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 524))(v3);
      if ( v13 == result )
      {
        if ( j_Entity::isRiding((Entity *)v10) == 1 )
          (*(void (__fastcall **)(int, signed int, _DWORD))(*(_DWORD *)v10 + 596))(v10, 1, 0);
        v42 = v49;
        v43 = v50;
        v44 = v51;
        v14 = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 52))(v10);
        v15 = *(_QWORD *)v14;
        v41 = *(_DWORD *)(v14 + 8);
        v40 = v15;
        v16 = *(void (__fastcall **)(int, int *, signed int, int))(*(_DWORD *)v10 + 104);
        v17 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 488))(v3);
        v16(v10, &v42, 1, v17);
        if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v10 + 1408))(v10) )
        {
          v18 = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 488))(v3);
          v26 = 2;
          v27 = 1;
          v28 = 0;
          v25 = &off_26DA5F8;
          j_Entity::getRuntimeID((Entity *)&v29, v10);
          v19 = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 52))(v10);
          v20 = *(_QWORD *)v19;
          v31 = *(_DWORD *)(v19 + 8);
          v30 = v20;
          v32 = *(_QWORD *)(v10 + 120);
          v33 = *(_DWORD *)(v10 + 3420);
          v34 = 2;
          v35 = *(_BYTE *)(v10 + 216);
          v21 = *(_DWORD *)(v10 + 512);
          if ( v21 )
          {
            j_Entity::getRuntimeID((Entity *)&v36, v21);
          }
          else
            v36 = 0;
            v37 = 0;
          v38 = 1;
          v39 = v18;
          v22 = j_Level::getPacketSender(v7);
          (*(void (**)(void))(*(_DWORD *)v22 + 8))();
        }
        j_Level::broadcastDimensionEvent((int)v7, v5, 1032, (int)&v40, 0);
        v23 = (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v10 + 52))(v10);
        j_Level::broadcastDimensionEvent((int)v7, v5, 1032, v23, 0);
        result = j_Abilities::getBool(v10 + 4320, (int **)&Abilities::INSTABUILD);
        if ( !result )
          j_EntityDamageSource::EntityDamageSource((int)&v24, 5);
          j_Entity::hurt((Entity *)v10, (const EntityDamageSource *)&v24, 5, 1, 0);
          result = j_EntityDamageByBlockSource::~EntityDamageByBlockSource((EntityDamageByBlockSource *)&v24);
      }
  }
  return result;
}
