

void __fastcall WoodlandMansionPieces::SecondFloorRoomCollection::get2x2(WoodlandMansionPieces::SecondFloorRoomCollection *this, Random *a2, Random *a3)
{
  WoodlandMansionPieces::SecondFloorRoomCollection *v3; // r4@1
  unsigned int v4; // kr00_4@1
  const void **v5; // r0@1
  void *v6; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  v4 = j_Random::_genRandInt32(a3);
  j_Util::toString<int,(void *)0,(void *)0>((void **)&v9, v4 % 5 + 1);
  v5 = sub_21E82D8((const void **)&v9, 0, (unsigned int)"2x2_b", (_BYTE *)5);
  *(_DWORD *)v3 = *v5;
  *v5 = &unk_28898CC;
  v6 = (void *)(v9 - 12);
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
      j_j_j_j__ZdlPv_9(v6);
  }
}


void __fastcall WoodlandMansionPieces::FirstFloorRoomCollection::get1x2FrontEntrance(WoodlandMansionPieces::FirstFloorRoomCollection *this, Random *a2, int a3)
{
  WoodlandMansionPieces::FirstFloorRoomCollection *v3; // r4@1
  unsigned int v4; // kr00_4@1
  const void **v5; // r0@1
  void *v6; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  v4 = j_Random::_genRandInt32((Random *)a3);
  j_Util::toString<int,(void *)0,(void *)0>((void **)&v9, v4 % 5 + 1);
  v5 = sub_21E82D8((const void **)&v9, 0, (unsigned int)"1x2_b", (_BYTE *)5);
  *(_DWORD *)v3 = *v5;
  *v5 = &unk_28898CC;
  v6 = (void *)(v9 - 12);
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
      j_j_j_j__ZdlPv_9(v6);
  }
}


int __fastcall WoodlandMansionPieces::SimpleGrid::get(WoodlandMansionPieces::SimpleGrid *this, int a2, int a3)
{
  bool v3; // nf@1
  int v4; // r3@4
  bool v5; // zf@4
  bool v6; // nf@4
  unsigned __int8 v7; // vf@4
  int v8; // r3@5
  int result; // r0@7

  v3 = a2 < 0;
  if ( a2 >= 0 )
    v3 = a3 < 0;
  if ( v3 )
    goto LABEL_11;
  v4 = *((_DWORD *)this + 3);
  v7 = __OFSUB__(v4, a2);
  v5 = v4 == a2;
  v6 = v4 - a2 < 0;
  if ( v4 > a2 )
  {
    v8 = *((_DWORD *)this + 4);
    v7 = __OFSUB__(v8, a3);
    v5 = v8 == a3;
    v6 = v8 - a3 < 0;
  }
  if ( (unsigned __int8)(v6 ^ v7) | v5 )
LABEL_11:
    result = *((_DWORD *)this + 5);
  else
    result = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)this + 12 * a2) + 4 * a3);
  return result;
}


void __fastcall WoodlandMansionPieces::MansionPiecePlacer::_addRoom1x2(int a1, int a2, int a3, RotationUtil *this, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63)
{
  WoodlandMansionPieces::MansionPiecePlacer::_addRoom1x2(
    a1,
    a2,
    a3,
    this,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15,
    a16,
    a17,
    a18,
    a19,
    a20,
    a21,
    a22,
    a23,
    a24,
    a25,
    a26,
    a27,
    a28,
    a29,
    a30,
    a31,
    a32,
    a33,
    a34,
    a35,
    a36,
    a37,
    a38,
    a39,
    a40,
    a41,
    a42,
    a43,
    a44,
    a45,
    a46,
    a47,
    a48,
    a49,
    a50,
    a51,
    a52,
    a53,
    a54,
    a55,
    a56,
    a57,
    a58,
    a59,
    a60,
    a61,
    a62,
    a63);
}


signed int __fastcall WoodlandMansionPieces::SimpleGrid::edgesTo(WoodlandMansionPieces::SimpleGrid *this, int a2, int a3, int a4)
{
  bool v4; // nf@1
  unsigned __int8 v5; // vf@1
  int v6; // r12@4
  bool v7; // zf@4
  bool v8; // nf@4
  unsigned __int8 v9; // vf@4
  int v10; // r12@5
  char *v11; // r12@7
  bool v12; // nf@10
  unsigned __int8 v13; // vf@10
  int v14; // lr@13
  bool v15; // zf@13
  bool v16; // nf@13
  unsigned __int8 v17; // vf@13
  int v18; // lr@14
  char *v19; // r12@16
  bool v20; // nf@19
  unsigned __int8 v21; // vf@19
  int v22; // r12@22
  bool v23; // zf@22
  bool v24; // nf@22
  unsigned __int8 v25; // vf@22
  int v26; // lr@23
  char *v27; // r12@25
  signed int result; // r0@28
  bool v29; // zf@30
  bool v30; // nf@30
  unsigned __int8 v31; // vf@30
  int v32; // r4@31
  char *v33; // r0@34
  int v34; // r1@36

  v5 = __OFSUB__(a2, 1);
  v4 = a2 - 1 < 0;
  if ( a2 >= 1 )
  {
    v5 = 0;
    v4 = a3 < 0;
  }
  if ( v4 ^ v5 )
    goto LABEL_40;
  v6 = *((_DWORD *)this + 3);
  v9 = __OFSUB__(v6, a2);
  v7 = v6 == a2;
  v8 = v6 - a2 < 0;
  if ( v6 >= a2 )
    v10 = *((_DWORD *)this + 4);
    v9 = __OFSUB__(v10, a3);
    v7 = v10 == a3;
    v8 = v10 - a3 < 0;
  if ( (unsigned __int8)(v8 ^ v9) | v7 )
LABEL_40:
    v11 = (char *)this + 20;
  else
    v11 = (char *)(*(_DWORD *)(*(_DWORD *)this + 12 * (a2 - 1)) + 4 * a3);
  if ( *(_DWORD *)v11 == a4 )
    goto LABEL_41;
  v13 = __OFSUB__(a2, -1);
  v12 = a2 + 1 < 0;
  if ( a2 >= -1 )
    v13 = 0;
    v12 = a3 < 0;
  if ( v12 ^ v13 )
    goto LABEL_43;
  v14 = *((_DWORD *)this + 3);
  v17 = __OFSUB__(v14, a2 + 1);
  v15 = v14 == a2 + 1;
  v16 = v14 - (a2 + 1) < 0;
  if ( v14 > a2 + 1 )
    v18 = *((_DWORD *)this + 4);
    v17 = __OFSUB__(v18, a3);
    v15 = v18 == a3;
    v16 = v18 - a3 < 0;
  if ( (unsigned __int8)(v16 ^ v17) | v15 )
LABEL_43:
    v19 = (char *)this + 20;
    v19 = (char *)(*(_DWORD *)(*(_DWORD *)this + 12 * (a2 + 1)) + 4 * a3);
  if ( *(_DWORD *)v19 == a4 )
  v21 = 0;
  v20 = a2 < 0;
  if ( a2 >= 0 )
    v21 = __OFSUB__(a3, -1);
    v20 = a3 + 1 < 0;
  if ( v20 ^ v21 )
    goto LABEL_44;
  v22 = *((_DWORD *)this + 3);
  v25 = __OFSUB__(v22, a2);
  v23 = v22 == a2;
  v24 = v22 - a2 < 0;
  if ( v22 > a2 )
    v22 = a3 + 1;
    v26 = *((_DWORD *)this + 4);
    v25 = __OFSUB__(v26, a3 + 1);
    v23 = v26 == a3 + 1;
    v24 = v26 - (a3 + 1) < 0;
  if ( (unsigned __int8)(v24 ^ v25) | v23 )
LABEL_44:
    v27 = (char *)this + 20;
    v27 = (char *)(*(_DWORD *)(*(_DWORD *)this + 12 * a2) + 4 * v22);
  if ( *(_DWORD *)v27 != a4 )
    if ( a2 < 0 )
      goto LABEL_42;
    v31 = __OFSUB__(a3, 1);
    v29 = a3 == 1;
    v30 = a3 - 1 < 0;
    if ( a3 >= 1 )
    {
      v32 = *((_DWORD *)this + 3);
      v31 = __OFSUB__(v32, a2);
      v29 = v32 == a2;
      v30 = v32 - a2 < 0;
    }
    if ( (unsigned __int8)(v30 ^ v31) | v29 || *((_DWORD *)this + 4) < a3 )
LABEL_42:
      v33 = (char *)this + 20;
    else
      v33 = (char *)(*(_DWORD *)(*(_DWORD *)this + 12 * a2) + 4 * (a3 - 1));
    v34 = *(_DWORD *)v33;
    result = 0;
    if ( v34 == a4 )
      result = 1;
LABEL_41:
    result = 1;
  return result;
}


void __fastcall WoodlandMansionPieces::SecondFloorRoomCollection::get1x2Secret(WoodlandMansionPieces::SecondFloorRoomCollection *this, Random *a2, Random *a3)
{
  WoodlandMansionPieces::SecondFloorRoomCollection *v3; // r4@1
  const void **v4; // r0@1
  void *v5; // r0@1
  unsigned int *v6; // r2@3
  signed int v7; // r1@5
  int v8; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  j_Random::_genRandInt32(a3);
  j_Util::toString<int,(void *)0,(void *)0>((void **)&v8, 1);
  v4 = sub_21E82D8((const void **)&v8, 0, (unsigned int)"1x2_se", (_BYTE *)6);
  *(_DWORD *)v3 = *v4;
  *v4 = &unk_28898CC;
  v5 = (void *)(v8 - 12);
  if ( (int *)(v8 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v8 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
}


WoodlandMansionPieces::WoodlandMansionPiece *__fastcall WoodlandMansionPieces::WoodlandMansionPiece::~WoodlandMansionPiece(WoodlandMansionPieces::WoodlandMansionPiece *this)
{
  WoodlandMansionPieces::WoodlandMansionPiece *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r1@5
  void *v5; // r0@5
  unsigned int *v7; // r12@7
  signed int v8; // r1@9

  v1 = this;
  *(_DWORD *)this = &off_2724740;
  v2 = (void *)*((_DWORD *)this + 37);
  if ( v2 )
    j_operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 34);
  if ( v3 )
    j_operator delete(v3);
  v4 = *((_DWORD *)v1 + 28);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v4 - 4);
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
  return v1;
}


void __fastcall WoodlandMansionPieces::MansionPiecePlacer::_addRoom1x1(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r8@1
  int v7; // r6@1
  int v8; // r7@1
  int v9; // r4@1
  Rotation v10; // r2@1
  RotationUtil *v11; // r5@1
  void *v12; // r0@5
  Rotation v13; // r2@7
  __int16 v14; // r5@7
  int v15; // r3@7
  int v16; // r7@7
  int v17; // r7@7
  TemplateStructurePiece *v18; // r6@7
  __int64 v19; // r0@7
  void *v20; // r0@11
  unsigned int *v21; // r2@13
  signed int v22; // r1@15
  unsigned int *v23; // r2@21
  signed int v24; // r1@23
  TemplateStructurePiece *v25; // [sp+8h] [bp-58h]@7
  int v26; // [sp+Ch] [bp-54h]@7
  int v27; // [sp+10h] [bp-50h]@7
  int v28; // [sp+14h] [bp-4Ch]@7
  int v29; // [sp+18h] [bp-48h]@7
  int v30; // [sp+1Ch] [bp-44h]@7
  int v31; // [sp+20h] [bp-40h]@7
  int v32; // [sp+24h] [bp-3Ch]@7
  int v33; // [sp+28h] [bp-38h]@7
  int v34; // [sp+2Ch] [bp-34h]@7
  int v35; // [sp+30h] [bp-30h]@7
  int v36; // [sp+34h] [bp-2Ch]@7
  int v37; // [sp+38h] [bp-28h]@7
  int v38; // [sp+3Ch] [bp-24h]@5
  int v39; // [sp+40h] [bp-20h]@1

  v6 = a1;
  v7 = a3;
  v8 = a4;
  v9 = a2;
  (*(void (__fastcall **)(int *, int, _DWORD))(*(_DWORD *)a6 + 8))(&v39, a6, *(_DWORD *)(a1 + 4));
  v11 = 0;
  switch ( a5 )
  {
    case 2:
      v11 = (RotationUtil *)j_RotationUtil::getRotated(0, 3, v10);
      break;
    case 3:
      v11 = (RotationUtil *)j_RotationUtil::getRotated(0, 1, v10);
    case 4:
      v11 = (RotationUtil *)j_RotationUtil::getRotated(0, 2, v10);
    case 5:
    default:
      (*(void (__fastcall **)(int *, _DWORD, _DWORD))(v0 + 12))(&v38, 0, *(_DWORD *)(v6 + 4));
      xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(&v39, &v38);
      v12 = (void *)(v38 - 12);
      if ( (int *)(v38 - 12) != &dword_28898C0 )
      {
        v23 = (unsigned int *)(v38 - 4);
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
          j_j_j_j__ZdlPv_9(v12);
      }
      v11 = 0;
  }
  v32 = 1;
  v33 = 0;
  v34 = 0;
  j_StructureTemplate::getZeroPositionWithTransform((int)&v35, (int)&v32, 0, (int)v11, 7, 7);
  v14 = j_RotationUtil::getRotated(v11, v8, v13);
  j_RotationUtil::rotate((RotationUtil *)&v29, (const BlockPos *)&v35, v8);
  v35 = v29;
  v36 = v30;
  v37 = v31;
  v15 = *(_DWORD *)(v7 + 4);
  v16 = *(_DWORD *)(v7 + 8);
  v26 = v29 + *(_DWORD *)v7;
  v27 = v15;
  v28 = v16 + v31;
  v17 = *(_DWORD *)v6;
  v18 = (TemplateStructurePiece *)j_operator new(0xA0u);
  j_WoodlandMansionPieces::WoodlandMansionPiece::WoodlandMansionPiece(v18, v17, &v39, (int)&v26, v14, 0);
  v25 = v18;
  v19 = *(_QWORD *)(v9 + 4);
  if ( (_DWORD)v19 == HIDWORD(v19) )
    j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
      (_QWORD *)v9,
      (int *)&v25);
    if ( v25 )
      (*(void (**)(void))(*(_DWORD *)v25 + 4))();
  else
    v25 = 0;
    *(_DWORD *)v19 = v18;
    *(_DWORD *)(v9 + 4) = v19 + 4;
  v25 = 0;
  v20 = (void *)(v39 - 12);
  if ( (int *)(v39 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v39 - 4);
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
      j_j_j_j__ZdlPv_9(v20);
}


void __fastcall WoodlandMansionPieces::FirstFloorRoomCollection::get2x2(WoodlandMansionPieces::FirstFloorRoomCollection *this, Random *a2, Random *a3)
{
  WoodlandMansionPieces::FirstFloorRoomCollection *v3; // r4@1
  char v4; // r0@1
  const void **v5; // r0@1
  void *v6; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  v4 = j_Random::_genRandInt32(a3);
  j_Util::toString<int,(void *)0,(void *)0>((void **)&v9, (v4 & 3) + 1);
  v5 = sub_21E82D8((const void **)&v9, 0, (unsigned int)"2x2_a", (_BYTE *)5);
  *(_DWORD *)v3 = *v5;
  *v5 = &unk_28898CC;
  v6 = (void *)(v9 - 12);
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
      j_j_j_j__ZdlPv_9(v6);
  }
}


int __fastcall WoodlandMansionPieces::WoodlandMansionPiece::_loadTemplate(WoodlandMansionPieces::WoodlandMansionPiece *this)
{
  WoodlandMansionPieces::WoodlandMansionPiece *v1; // r4@1
  pthread_mutex_t *v2; // r5@1
  const void **v3; // r6@1
  StructureTemplate *v4; // r5@1
  char *v5; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+0h] [bp-50h]@2
  char *v10; // [sp+3Ch] [bp-14h]@1

  v1 = this;
  v2 = (pthread_mutex_t *)*((_DWORD *)this + 27);
  v10 = (char *)&unk_28898CC;
  v3 = (const void **)((char *)this + 112);
  sub_21E6FCC((const void **)&v10, *(_DWORD *)(*((_DWORD *)this + 28) - 12) + 8);
  sub_21E7408((const void **)&v10, "mansion/", 8u);
  sub_21E72F0((const void **)&v10, v3);
  v4 = (StructureTemplate *)j_StructureManager::getOrCreate(v2, (int **)&v10);
  v5 = v10 - 12;
  if ( (int *)(v10 - 12) != &dword_28898C0 )
  {
    v7 = (unsigned int *)(v10 - 4);
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
  j_StructureSettings::StructureSettings((int)&v9);
  j_StructureSettings::setRotation((StructureSettings *)&v9, *((_WORD *)v1 + 58));
  j_StructureSettings::setIgnoreEntities((StructureSettings *)&v9, 1);
  j_StructureSettings::setMirror((int)&v9, *((_DWORD *)v1 + 30));
  return j_TemplateStructurePiece::_setup(
           v1,
           v4,
           (const StructureSettings *)&v9,
           (WoodlandMansionPieces::WoodlandMansionPiece *)((char *)v1 + 124));
}


int __fastcall WoodlandMansionPieces::MansionPiecePlacer::_entrance(int *a1, int a2, __int16 *a3)
{
  __int16 *v3; // r4@1
  int *v4; // r7@1
  int v5; // r6@1
  __int16 *v6; // r5@1
  Facing *v7; // r0@1
  int v8; // r7@1
  __int64 v9; // r0@1
  signed __int8 v10; // r2@2
  Facing *v11; // r0@5
  int result; // r0@5
  int v13; // [sp+4h] [bp-34h]@5
  int v14; // [sp+8h] [bp-30h]@5
  int v15; // [sp+Ch] [bp-2Ch]@5
  char v16; // [sp+10h] [bp-28h]@1
  int v17; // [sp+1Ch] [bp-1Ch]@1

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = a3 + 2;
  v7 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)*a3, 4, (signed __int8)a3);
  v8 = *v4;
  j_BlockPos::relative((BlockPos *)&v16, (int)v6, (int)v7, 9);
  j_std::make_unique<WoodlandMansionPieces::WoodlandMansionPiece,StructureManager &,char const(&)[9],BlockPos,Rotation &>(
    (TemplateStructurePiece **)&v17,
    v8,
    "entrance",
    (int)&v16,
    v3);
  v9 = *(_QWORD *)(v5 + 4);
  if ( (_DWORD)v9 == HIDWORD(v9) )
  {
    j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
      (_QWORD *)v5,
      &v17);
    if ( v17 )
      (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  }
  else
    HIDWORD(v9) = v17;
    v10 = 0;
    v17 = 0;
    *(_DWORD *)v9 = HIDWORD(v9);
    *(_DWORD *)(v5 + 4) = v9 + 4;
  v11 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)*v3, 3, v10);
  j_BlockPos::relative((BlockPos *)&v13, (int)v6, (int)v11, 16);
  *((_DWORD *)v3 + 1) = v13;
  *((_DWORD *)v3 + 2) = v14;
  result = v15;
  *((_DWORD *)v3 + 3) = v15;
  return result;
}


void __fastcall WoodlandMansionPieces::WoodlandMansionPiece::_addChest(Random *a1, int a2, int a3, const BlockPos *a4, Random *a5, int a6)
{
  StructureSettings *v6; // r7@1
  const BlockPos *v7; // r8@1
  int v8; // r4@1
  const void **v9; // r6@1
  int v10; // r5@1
  int v11; // r7@1
  signed int v12; // r1@4
  int v13; // r2@8
  int v14; // r6@12
  unsigned int v15; // r1@16
  int v16; // r1@20
  int v17; // r1@22
  int v18; // r0@24
  int v19; // r4@25
  unsigned int v20; // r0@26
  void *v21; // r0@26
  unsigned int *v22; // r2@28
  signed int v23; // r1@30
  int v24; // [sp+Ch] [bp-2Ch]@26
  char v25; // [sp+10h] [bp-28h]@25
  unsigned __int8 v26; // [sp+14h] [bp-24h]@24

  v6 = (Random *)((char *)a1 + 40);
  v7 = a4;
  v8 = a3;
  v9 = (const void **)a2;
  v10 = *(_WORD *)j_StructureSettings::getRotation((Random *)((char *)a1 + 40));
  v11 = *(_DWORD *)j_StructureSettings::getMirror(v6);
  if ( sub_21E7D6C(v9, "ChestWest") )
  {
    if ( sub_21E7D6C(v9, "ChestEast") )
    {
      if ( sub_21E7D6C(v9, "ChestSouth") )
      {
        sub_21E7D6C(v9, "ChestNorth");
        v12 = 0;
      }
      else
        v12 = 2;
    }
    else
      v12 = 1;
  }
  else
    v12 = 3;
  v13 = v12;
  if ( (v12 | 2) == 3 )
    v13 = v12 + 2;
  if ( v11 != 2 )
    v13 = v12;
  v14 = v13;
  if ( (v13 | 2) == 2 )
    v14 = v13 + 2;
  if ( v11 != 1 )
    v14 = v13;
  v15 = (v14 + v10) % 4;
  if ( v15 <= 3 )
    v14 = dword_2610B4C[v15];
  if ( *(_DWORD *)v8 >= *(_DWORD *)a6 && *(_DWORD *)v8 <= *(_DWORD *)(a6 + 12) )
    v16 = *(_DWORD *)(v8 + 8);
    if ( v16 >= *(_DWORD *)(a6 + 8) && v16 <= *(_DWORD *)(a6 + 20) )
      v17 = *(_DWORD *)(v8 + 4);
      if ( v17 >= *(_DWORD *)(a6 + 4) && v17 <= *(_DWORD *)(a6 + 16) )
        j_BlockSource::getBlockID((BlockSource *)&v26, v7, v8);
        v18 = *(_BYTE *)(Block::mChest + 4);
        if ( v26 != v18 )
        {
          v25 = *(_BYTE *)(Block::mChest + 4);
          j_BlockSource::setBlockAndData((int)v7, (BlockPos *)v8, &v25, v14, 4, 0);
          v19 = j_BlockSource::getBlockEntity(v7, (const BlockPos *)v8);
          if ( v19 )
          {
            sub_21E94B4((void **)&v24, "loot_tables/chests/woodland_mansion.json");
            v20 = j_Random::_genRandInt32(a5);
            j_RandomizableBlockEntityContainerBase::setLootTable(v19, &v24, v20 >> 1);
            v21 = (void *)(v24 - 12);
            if ( (int *)(v24 - 12) != &dword_28898C0 )
            {
              v22 = (unsigned int *)(v24 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v23 = __ldrex(v22);
                while ( __strex(v23 - 1, v22) );
              }
              else
                v23 = (*v22)--;
              if ( v23 <= 0 )
                j_j_j_j__ZdlPv_9(v21);
            }
          }
        }
}


void __fastcall WoodlandMansionPieces::MansionGrid::_identifyRooms(WoodlandMansionPieces::MansionGrid *this, WoodlandMansionPieces::SimpleGrid *a2, WoodlandMansionPieces::SimpleGrid *a3)
{
  WoodlandMansionPieces::SimpleGrid *v3; // r10@1
  WoodlandMansionPieces::SimpleGrid *v4; // r3@1
  int v5; // r6@1
  unsigned __int64 *v6; // r12@1
  signed int v7; // r1@1
  _DWORD v8; // r0@2
  int v9; // r11@2
  signed int v10; // r9@2
  int v11; // r5@2
  _DWORD v12; // r7@4
  _DWORD *v13; // r2@5
  signed int v14; // r0@11
  WoodlandMansionPieces::SimpleGrid *v15; // r10@11
  int v16; // r6@11
  unsigned int v17; // r1@11
  unsigned int v18; // r0@13
  unsigned int v19; // r8@13
  unsigned __int64 *v20; // r4@18
  unsigned __int64 *v21; // r1@18
  unsigned int v22; // r2@18
  unsigned __int64 *v23; // r6@18
  unsigned __int64 v24; // r2@19
  WoodlandMansionPieces::MansionGrid *v25; // r9@28
  unsigned int v26; // r4@28
  WoodlandMansionPieces::SimpleGrid *v27; // r8@28
  unsigned __int64 *v28; // r11@28
  Random *v29; // r7@29
  char *v30; // r5@29
  unsigned int v31; // r1@31
  int v32; // r3@33
  _DWORD v33; // r0@33
  _DWORD v34; // r6@33
  unsigned __int64 *v35; // r2@34
  WoodlandMansionPieces::SimpleGrid *v36; // lr@34
  int v37; // r6@35
  int v38; // r4@35
  unsigned __int64 *v39; // r5@35
  int v40; // r9@36
  int v41; // r7@36
  int v42; // r4@38
  signed int v43; // r0@40
  signed int v44; // r1@40
  signed int v45; // r7@46
  signed int v46; // r8@46
  _DWORD *v47; // r0@46
  _DWORD v48; // r0@48
  _DWORD v49; // r0@49
  int v50; // r0@52
  _DWORD *v51; // r1@52
  _DWORD v52; // r1@54
  _DWORD v53; // r1@55
  int v54; // r1@58
  _DWORD *v55; // r2@58
  _DWORD v56; // r2@60
  _DWORD v57; // r2@61
  _DWORD *v58; // r2@64
  _DWORD v59; // r2@66
  _DWORD v60; // r2@67
  _DWORD *v61; // r2@70
  _DWORD v62; // r2@72
  _DWORD v63; // r2@73
  _DWORD *v64; // r2@76
  _DWORD v65; // r2@78
  _DWORD v66; // r2@79
  _DWORD *v67; // r2@82
  _DWORD v68; // r2@84
  _DWORD v69; // r2@85
  WoodlandMansionPieces::SimpleGrid *v70; // r5@88
  _DWORD *v71; // r1@89
  _DWORD v72; // r1@91
  _DWORD v73; // r1@92
  _DWORD *v74; // r2@95
  _DWORD v75; // r2@97
  _DWORD v76; // r2@98
  _DWORD *v77; // r2@101
  _DWORD v78; // r2@103
  _DWORD v79; // r2@104
  _DWORD *v80; // r2@107
  _DWORD v81; // r2@109
  _DWORD v82; // r2@110
  _DWORD *v83; // r2@113
  _DWORD v84; // r2@115
  _DWORD v85; // r2@116
  _DWORD *v86; // r2@119
  _DWORD v87; // r2@121
  _DWORD v88; // r2@122
  int v89; // r11@126
  int v90; // r6@126
  _DWORD *v91; // r1@127
  _DWORD v92; // r1@129
  _DWORD v93; // r1@130
  _DWORD *v94; // r1@133
  _DWORD v95; // r1@134
  _DWORD v96; // r1@136
  _DWORD *v97; // r1@139
  _DWORD v98; // r1@140
  _DWORD v99; // r1@142
  _DWORD *v100; // r1@145
  _DWORD v101; // r1@147
  _DWORD v102; // r1@148
  _DWORD *v103; // r1@151
  _DWORD v104; // r1@153
  _DWORD v105; // r1@154
  _DWORD *v106; // r1@157
  _DWORD v107; // r1@159
  _DWORD v108; // r1@160
  _DWORD *v109; // r1@164
  _DWORD v110; // r1@166
  _DWORD v111; // r1@167
  _DWORD *v112; // r1@170
  _DWORD v113; // r1@172
  _DWORD v114; // r1@173
  int v115; // r0@177
  _DWORD *v116; // r1@177
  _DWORD v117; // r1@179
  _DWORD v118; // r1@180
  _DWORD *v119; // r1@183
  _DWORD v120; // r1@185
  _DWORD v121; // r1@186
  _DWORD *v122; // r0@190
  _DWORD v123; // r0@192
  _DWORD v124; // r0@193
  _DWORD *v125; // r0@196
  _DWORD v126; // r0@198
  _DWORD v127; // r0@199
  _DWORD *v128; // r0@203
  _DWORD v129; // r0@204
  _DWORD v130; // r0@206
  _DWORD *v131; // r0@211
  _DWORD v132; // r0@213
  _DWORD v133; // r0@214
  signed int v134; // r0@216
  int v135; // r0@235
  int v136; // r12@235
  _DWORD *v137; // r3@235
  int v138; // r5@236
  _DWORD *v139; // r2@238
  int v140; // r6@238
  int v141; // r1@238
  int v142; // r1@239
  bool v143; // zf@240
  bool v144; // nf@240
  unsigned __int8 v145; // vf@240
  _DWORD v146; // r6@241
  bool v147; // zf@246
  bool v148; // nf@246
  unsigned __int8 v149; // vf@246
  _DWORD v150; // r6@247
  _DWORD *v151; // r2@255
  int v152; // r1@255
  int v153; // r6@256
  bool v154; // zf@256
  bool v155; // nf@256
  unsigned __int8 v156; // vf@256
  _DWORD v157; // r1@257
  int v158; // [sp+4h] [bp-54h]@35
  unsigned __int64 v159; // [sp+Ch] [bp-4Ch]@34
  WoodlandMansionPieces::MansionGrid *v160; // [sp+14h] [bp-44h]@1
  unsigned __int64 *v161; // [sp+18h] [bp-40h]@88
  signed int v162; // [sp+1Ch] [bp-3Ch]@35
  int v163; // [sp+24h] [bp-34h]@88
  signed int v164; // [sp+28h] [bp-30h]@88
  int v165; // [sp+28h] [bp-30h]@235
  WoodlandMansionPieces::SimpleGrid *v166; // [sp+2Ch] [bp-2Ch]@1
  unsigned __int64 *ptr; // [sp+30h] [bp-28h]@11
  unsigned __int64 *ptra; // [sp+30h] [bp-28h]@28

  v3 = a3;
  v4 = a2;
  v166 = a3;
  v5 = 0;
  v160 = this;
  v6 = 0;
  v7 = *((_DWORD *)a2 + 4);
  if ( v7 >= 1 )
  {
    v8 = *((_DWORD *)v4 + 3);
    v9 = (int)v4 + 20;
    v10 = 0;
    v11 = 0;
    v5 = 0;
    v6 = 0;
    do
    {
      if ( v8 > 0 )
      {
        v12 = 0;
        do
        {
          v13 = (_DWORD *)v9;
          if ( (v12 | v10) >= 0 )
          {
            v13 = (_DWORD *)v9;
            if ( v7 > v10 )
              v13 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v4 + 12 * v12) + 4 * v10);
          }
          if ( *v13 == 2 )
            if ( v5 == v11 )
            {
              v14 = v5 - (_DWORD)v6;
              ptr = v6;
              v15 = v4;
              v16 = (v5 - (signed int)v6) >> 3;
              v17 = v16;
              if ( !(v14 >> 3) )
                v17 = 1;
              v18 = v17 + (v14 >> 3);
              v19 = v18;
              if ( 0 != v18 >> 29 )
                v19 = 0x1FFFFFFF;
              if ( v18 < v17 )
              if ( v19 >= 0x20000000 )
                sub_21E57F4();
              v20 = j_operator new(8 * v19);
              v20[2 * v16] = v12;
              v21 = (unsigned __int64 *)v20;
              v20[2 * v16 + 1] = v10;
              v22 = (unsigned int)v20;
              v23 = ptr;
              if ( ptr != (unsigned __int64 *)v11 )
              {
                do
                {
                  v24 = *v23;
                  ++v23;
                  *v21 = v24;
                  ++v21;
                }
                while ( (unsigned __int64 *)v11 != v23 );
                v22 = (unsigned int)v20 + ((v11 - 8 - (_DWORD)ptr) & 0xFFFFFFF8) + 8;
              }
              v5 = v22 + 8;
              if ( ptr )
                j_operator delete(ptr);
              v4 = v15;
              v11 = (int)&v20[2 * v19];
              v8 = *((_DWORD *)v15 + 3);
              v6 = (unsigned __int64 *)v20;
              v3 = v166;
            }
            else
              *(_DWORD *)v5 = v12;
              *(_DWORD *)(v5 + 4) = v10;
              v5 += 8;
          v7 = *((_DWORD *)v4 + 4);
          ++v12;
        }
        while ( v12 < v8 );
      }
      ++v10;
    }
    while ( v10 < v7 );
  }
  ptra = v6;
  v25 = v160;
  v26 = ((v5 - (signed int)v6) >> 3) - 1;
  v27 = v4;
  v28 = (unsigned __int64 *)v5;
  if ( (v5 - (signed int)v6) >> 3 != 1 )
    v29 = (Random *)*((_DWORD *)v160 + 7);
    v30 = (char *)&v6[(v5 - (signed int)v6) >> 3] - 4;
      if ( (signed int)v26 < 1 )
        v31 = 0;
      else
        v31 = j_Random::_genRandInt32(v29) % v26;
        v6 = ptra;
      v32 = (int)&v6[v31];
      v33 = v6[v31];
      --v26;
      v34 = *(_DWORD *)(v32 + 4);
      LODWORD(v6[v31]) = *((_DWORD *)v30 - 1);
      *(_DWORD *)(v32 + 4) = *(_DWORD *)v30;
      *((_DWORD *)v30 - 1) = v33;
      *(_DWORD *)v30 = v34;
      v30 -= 8;
    while ( v26 );
  v35 = v28;
  v36 = v27;
  v159 = __PAIR__((unsigned int)v27, (unsigned int)v28);
  if ( v6 != v28 )
    v37 = (int)v3 + 20;
    v38 = (int)v27 + 20;
    v39 = v6;
    v158 = (int)v27 + 20;
    v162 = 10;
    while ( 1 )
      v45 = *v39 >> 32;
      v46 = *v39;
      v47 = (_DWORD *)v37;
      if ( v46 >= 0 )
        v47 = (_DWORD *)v37;
        if ( v45 >= 0 )
          v48 = *((_DWORD *)v3 + 3);
          v145 = __OFSUB__(v48, v46);
          v143 = v48 == v46;
          v144 = v48 - v46 < 0;
          v47 = (_DWORD *)v37;
          if ( !((unsigned __int8)(v144 ^ v145) | v143) )
            v49 = *((_DWORD *)v3 + 4);
            v145 = __OFSUB__(v49, v45);
            v143 = v49 == v45;
            v144 = v49 - v45 < 0;
            v47 = (_DWORD *)v37;
            if ( !((unsigned __int8)(v144 ^ v145) | v143) )
              v47 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 12 * v46) + 4 * v45);
      if ( *v47 )
        goto LABEL_264;
      v50 = v46 + 1;
      v51 = (_DWORD *)v37;
      if ( v46 >= -1 )
        v51 = (_DWORD *)v37;
          v52 = *((_DWORD *)v3 + 3);
          v145 = __OFSUB__(v52, v50);
          v143 = v52 == v50;
          v144 = v52 - v50 < 0;
          v51 = (_DWORD *)v37;
            v53 = *((_DWORD *)v3 + 4);
            v145 = __OFSUB__(v53, v45);
            v143 = v53 == v45;
            v144 = v53 - v45 < 0;
            v51 = (_DWORD *)v37;
              v51 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 12 * v50) + 4 * v45);
      if ( !*v51 )
        v54 = v45 + 1;
        v55 = (_DWORD *)v37;
        if ( v46 >= 0 )
          v55 = (_DWORD *)v37;
          if ( v45 >= -1 )
            v56 = *((_DWORD *)v3 + 3);
            v145 = __OFSUB__(v56, v46);
            v143 = v56 == v46;
            v144 = v56 - v46 < 0;
            v55 = (_DWORD *)v37;
              v57 = *((_DWORD *)v3 + 4);
              v145 = __OFSUB__(v57, v54);
              v143 = v57 == v54;
              v144 = v57 - v54 < 0;
              v55 = (_DWORD *)v37;
              if ( !((unsigned __int8)(v144 ^ v145) | v143) )
                v55 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 12 * v46) + 4 * v54);
        if ( !*v55 )
          v58 = (_DWORD *)v37;
          if ( v46 >= -1 )
            v58 = (_DWORD *)v37;
            if ( v45 >= -1 )
              v59 = *((_DWORD *)v3 + 3);
              v145 = __OFSUB__(v59, v50);
              v143 = v59 == v50;
              v144 = v59 - v50 < 0;
              v58 = (_DWORD *)v37;
                v60 = *((_DWORD *)v3 + 4);
                v145 = __OFSUB__(v60, v54);
                v143 = v60 == v54;
                v144 = v60 - v54 < 0;
                v58 = (_DWORD *)v37;
                if ( !((unsigned __int8)(v144 ^ v145) | v143) )
                  v58 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 12 * v50) + 4 * v54);
          if ( !*v58 )
            v61 = (_DWORD *)v38;
            if ( v46 >= -1 )
              v61 = (_DWORD *)v38;
              if ( v45 >= 0 )
                v62 = *((_DWORD *)v36 + 3);
                v145 = __OFSUB__(v62, v50);
                v143 = v62 == v50;
                v144 = v62 - v50 < 0;
                v61 = (_DWORD *)v38;
                  v63 = *((_DWORD *)v36 + 4);
                  v145 = __OFSUB__(v63, v45);
                  v143 = v63 == v45;
                  v144 = v63 - v45 < 0;
                  v61 = (_DWORD *)v38;
                  if ( !((unsigned __int8)(v144 ^ v145) | v143) )
                    v61 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v36 + 12 * v50) + 4 * v45);
            if ( *v61 == 2 )
              v64 = (_DWORD *)v38;
              if ( v46 >= 0 )
                v64 = (_DWORD *)v38;
                if ( v45 >= -1 )
                  v65 = *((_DWORD *)v36 + 3);
                  v145 = __OFSUB__(v65, v46);
                  v143 = v65 == v46;
                  v144 = v65 - v46 < 0;
                  v64 = (_DWORD *)v38;
                  {
                    v66 = *((_DWORD *)v36 + 4);
                    v145 = __OFSUB__(v66, v54);
                    v143 = v66 == v54;
                    v144 = v66 - v54 < 0;
                    v64 = (_DWORD *)v38;
                    if ( !((unsigned __int8)(v144 ^ v145) | v143) )
                      v64 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v36 + 12 * v46) + 4 * v54);
                  }
              if ( *v64 == 2 )
                v67 = (_DWORD *)v38;
                if ( v46 >= -1 )
                  v67 = (_DWORD *)v38;
                  if ( v45 >= -1 )
                    v68 = *((_DWORD *)v36 + 3);
                    v145 = __OFSUB__(v68, v50);
                    v143 = v68 == v50;
                    v144 = v68 - v50 < 0;
                    v67 = (_DWORD *)v38;
                    {
                      v69 = *((_DWORD *)v36 + 4);
                      v145 = __OFSUB__(v69, v54);
                      v143 = v69 == v54;
                      v144 = v69 - v54 < 0;
                      v67 = (_DWORD *)v38;
                      if ( !((unsigned __int8)(v144 ^ v145) | v143) )
                        v67 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v36 + 12 * v50) + 4 * v54);
                    }
                if ( *v67 == 2 )
                  break;
      v163 = v46 - 1;
      v71 = (_DWORD *)v37;
      if ( v46 >= 1 )
        v71 = (_DWORD *)v37;
          v72 = *((_DWORD *)v3 + 3);
          v145 = __OFSUB__(v72, v46);
          v144 = v72 - v46 < 0;
          v71 = (_DWORD *)v37;
          if ( !(v144 ^ v145) )
            v73 = *((_DWORD *)v3 + 4);
            v145 = __OFSUB__(v73, v45);
            v143 = v73 == v45;
            v144 = v73 - v45 < 0;
            v71 = (_DWORD *)v37;
              v71 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 12 * v163) + 4 * v45);
      if ( !*v71 )
        v74 = (_DWORD *)v37;
          v74 = (_DWORD *)v37;
            v75 = *((_DWORD *)v3 + 3);
            v145 = __OFSUB__(v75, v46);
            v143 = v75 == v46;
            v144 = v75 - v46 < 0;
            v74 = (_DWORD *)v37;
              v76 = *((_DWORD *)v3 + 4);
              v145 = __OFSUB__(v76, v54);
              v143 = v76 == v54;
              v144 = v76 - v54 < 0;
              v74 = (_DWORD *)v37;
                v74 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 12 * v46) + 4 * v54);
        if ( !*v74 )
          v77 = (_DWORD *)v37;
          if ( v46 >= 1 )
            v77 = (_DWORD *)v37;
              v78 = *((_DWORD *)v3 + 3);
              v145 = __OFSUB__(v78, v46);
              v144 = v78 - v46 < 0;
              v77 = (_DWORD *)v37;
              if ( !(v144 ^ v145) )
                v79 = *((_DWORD *)v3 + 4);
                v145 = __OFSUB__(v79, v54);
                v143 = v79 == v54;
                v144 = v79 - v54 < 0;
                v77 = (_DWORD *)v37;
                  v77 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 12 * v163) + 4 * v54);
          if ( !*v77 )
            v80 = (_DWORD *)v38;
            if ( v46 >= 1 )
              v80 = (_DWORD *)v38;
                v81 = *((_DWORD *)v36 + 3);
                v145 = __OFSUB__(v81, v46);
                v144 = v81 - v46 < 0;
                v80 = (_DWORD *)v38;
                if ( !(v144 ^ v145) )
                  v82 = *((_DWORD *)v36 + 4);
                  v145 = __OFSUB__(v82, v45);
                  v143 = v82 == v45;
                  v144 = v82 - v45 < 0;
                  v80 = (_DWORD *)v38;
                    v80 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v36 + 12 * v163) + 4 * v45);
            if ( *v80 == 2 )
              v83 = (_DWORD *)v38;
                v83 = (_DWORD *)v38;
                  v84 = *((_DWORD *)v36 + 3);
                  v145 = __OFSUB__(v84, v46);
                  v143 = v84 == v46;
                  v144 = v84 - v46 < 0;
                  v83 = (_DWORD *)v38;
                    v85 = *((_DWORD *)v36 + 4);
                    v145 = __OFSUB__(v85, v54);
                    v143 = v85 == v54;
                    v144 = v85 - v54 < 0;
                    v83 = (_DWORD *)v38;
                      v83 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v36 + 12 * v46) + 4 * v54);
              if ( *v83 == 2 )
                v86 = (_DWORD *)v38;
                if ( v46 >= 1 )
                  v86 = (_DWORD *)v38;
                    v87 = *((_DWORD *)v36 + 3);
                    v145 = __OFSUB__(v87, v46);
                    v144 = v87 - v46 < 0;
                    v86 = (_DWORD *)v38;
                    if ( !(v144 ^ v145) )
                      v88 = *((_DWORD *)v36 + 4);
                      v145 = __OFSUB__(v88, v54);
                      v143 = v88 == v54;
                      v144 = v88 - v54 < 0;
                      v86 = (_DWORD *)v38;
                        v86 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v36 + 12 * v163) + 4 * v54);
                if ( *v86 == 2 )
                  v161 = v39;
                  v70 = v36;
                  v164 = 0x40000;
                  goto LABEL_126;
      v91 = (_DWORD *)v37;
        v91 = (_DWORD *)v37;
          v92 = *((_DWORD *)v3 + 3);
          v145 = __OFSUB__(v92, v46);
          v144 = v92 - v46 < 0;
          v91 = (_DWORD *)v37;
            v93 = *((_DWORD *)v3 + 4);
            v145 = __OFSUB__(v93, v45);
            v143 = v93 == v45;
            v144 = v93 - v45 < 0;
            v91 = (_DWORD *)v37;
              v91 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 12 * v163) + 4 * v45);
      if ( *v91 )
        goto LABEL_269;
      v89 = v45 - 1;
      v94 = (_DWORD *)v37;
        v95 = *((_DWORD *)v3 + 3);
        v145 = __OFSUB__(v95, v46);
        v143 = v95 == v46;
        v144 = v95 - v46 < 0;
        v94 = (_DWORD *)v37;
        if ( !((unsigned __int8)(v144 ^ v145) | v143) )
          v94 = (_DWORD *)v37;
          if ( v45 >= 1 )
            v96 = *((_DWORD *)v3 + 4);
            v145 = __OFSUB__(v96, v45);
            v144 = v96 - v45 < 0;
            v94 = (_DWORD *)v37;
            if ( !(v144 ^ v145) )
              v94 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 12 * v46) + 4 * v89);
      if ( *v94 )
      v97 = (_DWORD *)v37;
        v98 = *((_DWORD *)v3 + 3);
        v145 = __OFSUB__(v98, v46);
        v144 = v98 - v46 < 0;
        v97 = (_DWORD *)v37;
        if ( !(v144 ^ v145) )
          v97 = (_DWORD *)v37;
            v99 = *((_DWORD *)v3 + 4);
            v145 = __OFSUB__(v99, v45);
            v144 = v99 - v45 < 0;
            v97 = (_DWORD *)v37;
              v97 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 12 * v163) + 4 * v89);
      if ( *v97 )
      v100 = (_DWORD *)v38;
        v100 = (_DWORD *)v38;
          v101 = *((_DWORD *)v36 + 3);
          v145 = __OFSUB__(v101, v46);
          v144 = v101 - v46 < 0;
          v100 = (_DWORD *)v38;
            v102 = *((_DWORD *)v36 + 4);
            v145 = __OFSUB__(v102, v45);
            v143 = v102 == v45;
            v144 = v102 - v45 < 0;
            v100 = (_DWORD *)v38;
              v100 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v36 + 12 * v163) + 4 * v45);
      if ( *v100 != 2 )
      v103 = (_DWORD *)v38;
        v103 = (_DWORD *)v38;
        if ( v45 >= 1 )
          v104 = *((_DWORD *)v36 + 3);
          v145 = __OFSUB__(v104, v46);
          v143 = v104 == v46;
          v144 = v104 - v46 < 0;
          v103 = (_DWORD *)v38;
            v105 = *((_DWORD *)v36 + 4);
            v145 = __OFSUB__(v105, v45);
            v144 = v105 - v45 < 0;
            v103 = (_DWORD *)v38;
              v103 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v36 + 12 * v46) + 4 * v89);
      if ( *v103 != 2 )
      v106 = (_DWORD *)v38;
        v106 = (_DWORD *)v38;
          v107 = *((_DWORD *)v36 + 3);
          v145 = __OFSUB__(v107, v46);
          v144 = v107 - v46 < 0;
          v106 = (_DWORD *)v38;
            v108 = *((_DWORD *)v36 + 4);
            v145 = __OFSUB__(v108, v45);
            v144 = v108 - v45 < 0;
            v106 = (_DWORD *)v38;
              v106 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v36 + 12 * v163) + 4 * v89);
      if ( *v106 != 2 )
LABEL_269:
        v109 = (_DWORD *)v37;
        if ( v46 >= -1 )
          v109 = (_DWORD *)v37;
          if ( v45 >= 0 )
            v110 = *((_DWORD *)v3 + 3);
            v145 = __OFSUB__(v110, v50);
            v143 = v110 == v50;
            v144 = v110 - v50 < 0;
            v109 = (_DWORD *)v37;
              v111 = *((_DWORD *)v3 + 4);
              v145 = __OFSUB__(v111, v45);
              v143 = v111 == v45;
              v144 = v111 - v45 < 0;
              v109 = (_DWORD *)v37;
                v109 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 12 * v50) + 4 * v45);
        if ( !*v109 )
          v112 = (_DWORD *)v38;
            v112 = (_DWORD *)v38;
            if ( v45 >= 0 )
              v113 = *((_DWORD *)v36 + 3);
              v145 = __OFSUB__(v113, v50);
              v143 = v113 == v50;
              v144 = v113 - v50 < 0;
              v112 = (_DWORD *)v38;
                v114 = *((_DWORD *)v36 + 4);
                v145 = __OFSUB__(v114, v45);
                v143 = v114 == v45;
                v144 = v114 - v45 < 0;
                v112 = (_DWORD *)v38;
                  v112 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v36 + 12 * v50) + 4 * v45);
          if ( *v112 == 2 )
            v161 = v39;
            v163 = *v39;
            v164 = 0x20000;
            v70 = v36;
            ++v46;
LABEL_210:
            v89 = v45;
            v90 = v45;
            goto LABEL_220;
        v115 = v45 + 1;
        v116 = (_DWORD *)v37;
          v116 = (_DWORD *)v37;
            v117 = *((_DWORD *)v3 + 3);
            v145 = __OFSUB__(v117, v46);
            v143 = v117 == v46;
            v144 = v117 - v46 < 0;
            v116 = (_DWORD *)v37;
              v118 = *((_DWORD *)v3 + 4);
              v145 = __OFSUB__(v118, v115);
              v143 = v118 == v115;
              v144 = v118 - v115 < 0;
              v116 = (_DWORD *)v37;
                v116 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 12 * v46) + 4 * v115);
        if ( *v116 )
          goto LABEL_270;
        v119 = (_DWORD *)v38;
          v119 = (_DWORD *)v38;
            v120 = *((_DWORD *)v36 + 3);
            v145 = __OFSUB__(v120, v46);
            v143 = v120 == v46;
            v144 = v120 - v46 < 0;
            v119 = (_DWORD *)v38;
              v121 = *((_DWORD *)v36 + 4);
              v145 = __OFSUB__(v121, v115);
              v143 = v121 == v115;
              v144 = v121 - v115 < 0;
              v119 = (_DWORD *)v38;
                v119 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v36 + 12 * v46) + 4 * v115);
        if ( *v119 != 2 )
LABEL_270:
          v122 = (_DWORD *)v37;
            v122 = (_DWORD *)v37;
              v123 = *((_DWORD *)v3 + 3);
              v145 = __OFSUB__(v123, v46);
              v144 = v123 - v46 < 0;
              v122 = (_DWORD *)v37;
                v124 = *((_DWORD *)v3 + 4);
                v145 = __OFSUB__(v124, v45);
                v143 = v124 == v45;
                v144 = v124 - v45 < 0;
                v122 = (_DWORD *)v37;
                  v122 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 12 * v163) + 4 * v45);
          v161 = v39;
          if ( *v122 )
            goto LABEL_271;
          v125 = (_DWORD *)v38;
            v125 = (_DWORD *)v38;
              v126 = *((_DWORD *)v36 + 3);
              v145 = __OFSUB__(v126, v46);
              v144 = v126 - v46 < 0;
              v125 = (_DWORD *)v38;
                v127 = *((_DWORD *)v36 + 4);
                v145 = __OFSUB__(v127, v45);
                v143 = v127 == v45;
                v144 = v127 - v45 < 0;
                v125 = (_DWORD *)v38;
                  v125 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v36 + 12 * v163) + 4 * v45);
          if ( *v125 != 2 )
LABEL_271:
            v89 = v45 - 1;
            v128 = (_DWORD *)v37;
            if ( v46 >= 0 )
              v129 = *((_DWORD *)v3 + 3);
              v145 = __OFSUB__(v129, v46);
              v143 = v129 == v46;
              v144 = v129 - v46 < 0;
              v128 = (_DWORD *)v37;
                v128 = (_DWORD *)v37;
                if ( v45 >= 1 )
                  v130 = *((_DWORD *)v3 + 4);
                  v145 = __OFSUB__(v130, v45);
                  v144 = v130 - v45 < 0;
                  v128 = (_DWORD *)v37;
                  if ( !(v144 ^ v145) )
                    v128 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v3 + 12 * v46) + 4 * v89);
            if ( !*v128 )
              v131 = (_DWORD *)v38;
                v131 = (_DWORD *)v38;
                  v132 = *((_DWORD *)v36 + 3);
                  v145 = __OFSUB__(v132, v46);
                  v143 = v132 == v46;
                  v144 = v132 - v46 < 0;
                  v131 = (_DWORD *)v38;
                    v133 = *((_DWORD *)v36 + 4);
                    v145 = __OFSUB__(v133, v45);
                    v144 = v133 - v45 < 0;
                    v131 = (_DWORD *)v38;
                      v131 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v36 + 12 * v46) + 4 * v89);
              v90 = v45;
              v143 = *v131 == 2;
              v134 = 0x10000;
              if ( v143 )
                v134 = 0x20000;
              else
                v89 = v45;
              v163 = v46;
              v164 = v134;
              goto LABEL_220;
            v163 = v46;
            v164 = 0x10000;
          else
          goto LABEL_210;
        v161 = v39;
        v70 = v36;
        v163 = v46;
        v164 = 0x20000;
        v89 = v45;
        v90 = v45 + 1;
        v90 = *v39 >> 32;
        v164 = 0x40000;
LABEL_220:
      v41 = v46;
      if ( j_Random::_genRandInt32(*((Random **)v25 + 7)) & 0x8000000 )
        v41 = v163;
      v42 = v90;
        v42 = v89;
      if ( j_WoodlandMansionPieces::SimpleGrid::edgesTo(v70, v41, v42, 1) )
        goto LABEL_272;
      v143 = v41 == v163;
      if ( !v143 )
      v143 = v42 == v89;
LABEL_272:
        v40 = v90;
        v44 = 3145728;
        v143 = v41 == v163;
        v41 = v46;
        if ( !v143 )
          v41 = v163;
        v143 = v42 == v89;
        v42 = v90;
          v42 = v89;
        v43 = j_WoodlandMansionPieces::SimpleGrid::edgesTo(v70, v41, v42, 1);
        v44 = 0x100000;
        if ( !v43 )
        if ( v43 )
          v44 = 3145728;
        else
      if ( v89 <= v40 )
        v135 = v162 | v164;
        v136 = v162 | v164 | v44;
        v165 = *(_DWORD *)v3 + 12 * v163;
        v137 = (_DWORD *)(*(_DWORD *)v3 + 12 * v41);
          v138 = v89;
          if ( v163 <= v46 )
            if ( v89 == v42 )
              v139 = (_DWORD *)v165;
              v140 = v163;
              v141 = v163 - 1;
              if ( v89 < 0 )
                  ++v141;
                while ( v141 < v46 );
                  v142 = v140;
                  if ( v41 == v140 )
                    v145 = 0;
                    v143 = v140 == 0;
                    v144 = v140 < 0;
                    if ( v140 >= 0 )
                      v146 = *((_DWORD *)v3 + 3);
                      v145 = __OFSUB__(v146, v41);
                      v143 = v146 == v41;
                      v144 = v146 - v41 < 0;
                    if ( !((unsigned __int8)(v144 ^ v145) | v143) && *((_DWORD *)v3 + 4) > v42 )
                      *(_DWORD *)(*v137 + 4 * v42) = v136;
                  else
                    v149 = 0;
                    v147 = v140 == 0;
                    v148 = v140 < 0;
                      v150 = *((_DWORD *)v3 + 3);
                      v149 = __OFSUB__(v150, v142);
                      v147 = v150 == v142;
                      v148 = v150 - v142 < 0;
                    if ( !((unsigned __int8)(v148 ^ v149) | v147) && *((_DWORD *)v3 + 4) > v42 )
                      *(_DWORD *)(*v139 + 4 * v42) = v135;
                  v139 += 3;
                  v140 = v142 + 1;
                while ( v142 < v46 );
              v151 = (_DWORD *)v165;
              v152 = v163;
              if ( v89 >= 0 )
                  v153 = v152;
                  v156 = 0;
                  v154 = v152 == 0;
                  v155 = v152 < 0;
                  if ( v152 >= 0 )
                    v157 = *((_DWORD *)v3 + 3);
                    v156 = __OFSUB__(v157, v153);
                    v154 = v157 == v153;
                    v155 = v157 - v153 < 0;
                  if ( !((unsigned __int8)(v155 ^ v156) | v154) && *((_DWORD *)v3 + 4) > v89 )
                    *(_DWORD *)(*v151 + 4 * v89) = v135;
                  v151 += 3;
                  v152 = v153 + 1;
                while ( v153 < v46 );
          ++v89;
        while ( v138 < v40 );
      ++v162;
      v6 = ptra;
      v36 = (WoodlandMansionPieces::SimpleGrid *)HIDWORD(v159);
      v35 = (unsigned __int64 *)v159;
      v37 = (int)v3 + 20;
      v38 = v158;
      v39 = v161;
      v25 = v160;
LABEL_264:
      ++v39;
      if ( v39 == v35 )
        goto LABEL_265;
    v161 = v39;
    v163 = *v39;
    v164 = 0x40000;
    v70 = v36;
    ++v46;
LABEL_126:
    v89 = v45;
    v90 = v54;
    goto LABEL_220;
LABEL_265:
  if ( v6 )
    j_j_j__ZdlPv_7(v6);
}


signed int __fastcall WoodlandMansionPieces::MansionPiecePlacer::_createRoof(int a1, int a2, int a3, __int16 a4, __int64 a5)
{
  int v5; // r10@1
  int v6; // r5@1
  int v7; // r7@1
  signed int result; // r0@1
  signed int v9; // r1@2
  signed int v10; // r9@2
  signed __int8 v11; // r2@2
  signed int v12; // r11@4
  Facing *v13; // r0@5
  signed __int8 v14; // r2@5
  Facing *v15; // r0@5
  int v16; // r1@6
  bool v17; // zf@6
  bool v18; // nf@6
  unsigned __int8 v19; // vf@6
  _DWORD *v20; // r1@6
  int v21; // r1@7
  bool v22; // cf@9
  signed int v23; // r1@9
  int v24; // r4@13
  _DWORD *v25; // r5@13
  int v26; // r6@16
  unsigned int v27; // r7@16
  signed int v28; // r7@16
  int v29; // r1@20
  __int64 v30; // kr08_8@20
  int v31; // r1@21
  int v32; // r0@24
  _DWORD *v33; // r0@24
  int v34; // r0@25
  Facing *v35; // r0@28
  __int64 v36; // kr10_8@28
  int v37; // r1@29
  _DWORD *v38; // r0@33
  int v39; // r0@34
  int v40; // r0@35
  int v41; // r5@38
  Facing *v42; // r0@38
  signed __int8 v43; // r2@38
  Facing *v44; // r0@38
  int v45; // r10@38
  Rotation v46; // r2@38
  __int64 v47; // kr18_8@38
  int v48; // r1@39
  _DWORD *v49; // r0@43
  int v50; // r0@44
  int v51; // r0@45
  Facing *v52; // r0@48
  int v53; // r7@48
  Rotation v54; // r2@48
  __int64 v55; // kr20_8@48
  int v56; // r1@49
  int v57; // r0@53
  _DWORD *v58; // r0@53
  int v59; // r0@54
  int v60; // r4@57
  Facing *v61; // r0@57
  signed __int8 v62; // r2@57
  Facing *v63; // r0@57
  int v64; // r7@57
  Rotation v65; // r2@57
  __int64 v66; // kr28_8@57
  int v67; // r1@58
  int v68; // r1@69
  int v69; // r11@69
  signed int v70; // r2@69
  int v71; // r4@71
  int v72; // r0@71
  signed int v73; // r10@71
  signed int v74; // r5@71
  int v75; // r9@71
  int v76; // r2@71
  _DWORD *v77; // r8@72
  int v78; // r11@72
  Facing *v79; // r0@72
  signed int v80; // r4@72
  signed __int8 v81; // r2@72
  Facing *v82; // r0@72
  int v83; // r3@72
  signed int v84; // r9@72
  signed int v85; // r3@72
  int v86; // r0@72
  _DWORD *v87; // r0@72
  int v88; // r0@73
  int v89; // r1@75
  int v90; // r0@75
  _DWORD *v91; // r1@75
  int v92; // r1@76
  int v93; // r10@78
  int v94; // r0@79
  _DWORD *v95; // r0@79
  int v96; // r0@80
  Facing *v97; // r0@83
  __int64 v98; // kr30_8@83
  int v99; // r1@84
  _DWORD *v100; // r0@88
  int v101; // r0@89
  int v102; // r0@90
  Facing *v103; // r0@93
  signed __int8 v104; // r2@93
  Facing *v105; // r0@93
  int v106; // r10@93
  Rotation v107; // r2@93
  __int64 v108; // kr38_8@93
  int v109; // r1@94
  _DWORD *v110; // r0@98
  int v111; // r0@99
  int v112; // r0@100
  int v113; // r10@103
  int v114; // r9@103
  Facing *v115; // r0@103
  signed __int8 v116; // r2@103
  Facing *v117; // r0@103
  int v118; // r7@103
  Rotation v119; // r2@103
  __int64 v120; // kr40_8@103
  int v121; // r1@104
  int v122; // r0@108
  _DWORD *v123; // r0@108
  int v124; // r0@109
  int v125; // r8@112
  int v126; // r4@112
  Facing *v127; // r0@112
  signed __int8 v128; // r2@112
  Facing *v129; // r0@112
  int v130; // r7@112
  Rotation v131; // r2@112
  __int64 v132; // kr48_8@112
  int v133; // r1@113
  int v134; // r0@117
  _DWORD *v135; // r0@117
  int v136; // r0@118
  _DWORD *v137; // r0@121
  int v138; // r0@122
  int v139; // r0@123
  int v140; // r10@126
  Facing *v141; // r0@126
  signed __int8 v142; // r2@126
  Facing *v143; // r0@126
  __int64 v144; // kr60_8@126
  int v145; // r1@127
  int v146; // r0@131
  _DWORD *v147; // r0@131
  int v148; // r0@132
  int v149; // r4@135
  Facing *v150; // r0@135
  signed __int8 v151; // r2@135
  Facing *v152; // r0@135
  int v153; // r8@135
  Rotation v154; // r2@135
  __int64 v155; // kr68_8@135
  int v156; // r1@136
  _DWORD *v157; // r0@140
  int v158; // r0@141
  int v159; // r0@142
  _DWORD *v160; // r0@145
  int v161; // r0@146
  int v162; // r0@147
  int v163; // r4@150
  Facing *v164; // r0@150
  signed __int8 v165; // r2@150
  Facing *v166; // r0@150
  int v167; // r8@150
  Rotation v168; // r2@150
  __int64 v169; // kr70_8@150
  int v170; // r1@151
  int v171; // r0@155
  _DWORD *v172; // r0@155
  int v173; // r0@156
  signed int v174; // r9@159
  int v175; // r8@159
  Facing *v176; // r0@159
  signed __int8 v177; // r2@159
  Facing *v178; // r0@159
  int v179; // r7@159
  Rotation v180; // r2@159
  __int64 v181; // kr78_8@159
  int v182; // r1@160
  signed int v183; // r1@169
  int v184; // r6@169
  int v185; // r2@169
  signed int v186; // r5@169
  __int16 v187; // r2@170
  signed int v188; // r8@171
  int v189; // r10@171
  int v190; // r11@171
  int v191; // r4@172
  signed int v192; // r9@172
  Facing *v193; // r0@172
  signed __int8 v194; // r2@172
  Facing *v195; // r0@172
  int v196; // r0@173
  _DWORD *v197; // r0@173
  int v198; // r0@174
  __int64 v199; // r0@176
  int v200; // r1@180
  int v201; // r1@180
  int v202; // r1@181
  int v203; // r0@186
  _DWORD *v204; // r0@186
  int v205; // r0@187
  Facing *v206; // r0@190
  int v207; // r0@190
  _DWORD *v208; // r0@190
  int v209; // r0@191
  int v210; // r0@194
  _DWORD *v211; // r0@194
  int v212; // r0@195
  int v213; // r6@198
  Facing *v214; // r0@198
  __int64 v215; // kr80_8@198
  int v216; // r1@199
  Facing *v217; // r0@200
  __int64 v218; // kr88_8@200
  int v219; // r1@201
  _DWORD *v220; // r0@209
  int v221; // r0@210
  int v222; // r0@211
  _DWORD *v223; // r0@214
  int v224; // r0@215
  int v225; // r0@216
  Facing *v226; // r0@219
  signed __int8 v227; // r2@219
  Facing *v228; // r0@219
  int v229; // r7@219
  Rotation v230; // r2@219
  __int64 v231; // kr90_8@219
  int v232; // r1@220
  int v233; // r6@221
  int v234; // r11@221
  __int64 v235; // kr98_8@221
  int v236; // r1@222
  _DWORD *v237; // r0@229
  int v238; // r0@230
  int v239; // r0@231
  Facing *v240; // r0@234
  signed __int8 v241; // r2@234
  Facing *v242; // r0@234
  int v243; // r0@234
  _DWORD *v244; // r0@234
  int v245; // r0@235
  _DWORD *v246; // r0@238
  int v247; // r0@239
  int v248; // r0@240
  int v249; // r6@243
  Facing *v250; // r0@243
  signed __int8 v251; // r2@243
  Facing *v252; // r0@243
  int v253; // r11@243
  Rotation v254; // r2@243
  __int64 v255; // krA0_8@243
  int v256; // r1@244
  Facing *v257; // r0@245
  int v258; // r7@245
  Rotation v259; // r2@245
  __int64 v260; // krA8_8@245
  int v261; // r1@246
  _DWORD *v262; // r0@253
  int v263; // r0@254
  int v264; // r0@255
  _DWORD *v265; // r0@258
  int v266; // r0@260
  int v267; // r0@261
  int v268; // r6@264
  int v269; // r11@264
  Facing *v270; // r0@264
  int v271; // r7@264
  Rotation v272; // r2@264
  __int64 v273; // krB0_8@264
  int v274; // r1@265
  int v275; // r4@266
  int v276; // r7@266
  __int64 v277; // krB8_8@266
  int v278; // r1@267
  int v279; // [sp+48h] [bp-2F0h]@71
  signed int v280; // [sp+50h] [bp-2E8h]@71
  signed int v281; // [sp+50h] [bp-2E8h]@170
  int v282; // [sp+54h] [bp-2E4h]@93
  signed int v283; // [sp+54h] [bp-2E4h]@103
  int v284; // [sp+54h] [bp-2E4h]@159
  int v285; // [sp+54h] [bp-2E4h]@171
  int v286; // [sp+58h] [bp-2E0h]@4
  int v287; // [sp+58h] [bp-2E0h]@71
  int v288; // [sp+58h] [bp-2E0h]@169
  int v289; // [sp+5Ch] [bp-2DCh]@69
  _DWORD *v290; // [sp+5Ch] [bp-2DCh]@169
  int v291; // [sp+60h] [bp-2D8h]@72
  int v292; // [sp+60h] [bp-2D8h]@170
  int v293; // [sp+64h] [bp-2D4h]@1
  int v294; // [sp+68h] [bp-2D0h]@1
  int v295; // [sp+6Ch] [bp-2CCh]@1
  __int16 v296; // [sp+72h] [bp-2C6h]@264
  int v297; // [sp+74h] [bp-2C4h]@264
  char v298; // [sp+78h] [bp-2C0h]@264
  __int16 v299; // [sp+86h] [bp-2B2h]@266
  int v300; // [sp+88h] [bp-2B0h]@266
  int v301; // [sp+8Ch] [bp-2ACh]@266
  int v302; // [sp+90h] [bp-2A8h]@266
  int v303; // [sp+94h] [bp-2A4h]@266
  __int16 v304; // [sp+9Ah] [bp-29Eh]@243
  int v305; // [sp+9Ch] [bp-29Ch]@243
  int v306; // [sp+A0h] [bp-298h]@243
  int v307; // [sp+A4h] [bp-294h]@243
  int v308; // [sp+A8h] [bp-290h]@243
  int v309; // [sp+ACh] [bp-28Ch]@243
  int v310; // [sp+B0h] [bp-288h]@243
  int v311; // [sp+B4h] [bp-284h]@243
  __int16 v312; // [sp+BAh] [bp-27Eh]@245
  int v313; // [sp+BCh] [bp-27Ch]@245
  char v314; // [sp+C0h] [bp-278h]@245
  int v315; // [sp+CCh] [bp-26Ch]@234
  int v316; // [sp+D0h] [bp-268h]@234
  int v317; // [sp+D4h] [bp-264h]@234
  int v318; // [sp+D8h] [bp-260h]@234
  int v319; // [sp+DCh] [bp-25Ch]@234
  int v320; // [sp+E0h] [bp-258h]@234
  __int16 v321; // [sp+E6h] [bp-252h]@219
  int v322; // [sp+E8h] [bp-250h]@219
  int v323; // [sp+ECh] [bp-24Ch]@219
  int v324; // [sp+F0h] [bp-248h]@219
  int v325; // [sp+F4h] [bp-244h]@219
  int v326; // [sp+F8h] [bp-240h]@219
  int v327; // [sp+FCh] [bp-23Ch]@219
  int v328; // [sp+100h] [bp-238h]@219
  __int16 v329; // [sp+106h] [bp-232h]@221
  int v330; // [sp+108h] [bp-230h]@221
  int v331; // [sp+10Ch] [bp-22Ch]@221
  int v332; // [sp+110h] [bp-228h]@221
  int v333; // [sp+114h] [bp-224h]@221
  int v334; // [sp+118h] [bp-220h]@198
  char v335; // [sp+11Ch] [bp-21Ch]@198
  int v336; // [sp+128h] [bp-210h]@200
  char v337; // [sp+12Ch] [bp-20Ch]@200
  int v338; // [sp+138h] [bp-200h]@190
  int v339; // [sp+13Ch] [bp-1FCh]@221
  int v340; // [sp+140h] [bp-1F8h]@221
  int v341; // [sp+144h] [bp-1F4h]@172
  int v342; // [sp+148h] [bp-1F0h]@172
  int v343; // [sp+14Ch] [bp-1ECh]@172
  int v344; // [sp+150h] [bp-1E8h]@172
  int v345; // [sp+154h] [bp-1E4h]@172
  int v346; // [sp+158h] [bp-1E0h]@172
  int v347; // [sp+15Ch] [bp-1DCh]@172
  int v348; // [sp+160h] [bp-1D8h]@172
  int v349; // [sp+164h] [bp-1D4h]@172
  __int16 v350; // [sp+16Ah] [bp-1CEh]@159
  int v351; // [sp+16Ch] [bp-1CCh]@159
  int v352; // [sp+170h] [bp-1C8h]@159
  int v353; // [sp+174h] [bp-1C4h]@159
  int v354; // [sp+178h] [bp-1C0h]@159
  int v355; // [sp+17Ch] [bp-1BCh]@159
  int v356; // [sp+180h] [bp-1B8h]@159
  int v357; // [sp+184h] [bp-1B4h]@159
  __int16 v358; // [sp+18Ah] [bp-1AEh]@150
  int v359; // [sp+18Ch] [bp-1ACh]@150
  int v360; // [sp+190h] [bp-1A8h]@150
  int v361; // [sp+194h] [bp-1A4h]@150
  int v362; // [sp+198h] [bp-1A0h]@150
  int v363; // [sp+19Ch] [bp-19Ch]@150
  int v364; // [sp+1A0h] [bp-198h]@150
  int v365; // [sp+1A4h] [bp-194h]@150
  __int16 v366; // [sp+1AAh] [bp-18Eh]@135
  int v367; // [sp+1ACh] [bp-18Ch]@135
  int v368; // [sp+1B0h] [bp-188h]@135
  int v369; // [sp+1B4h] [bp-184h]@135
  int v370; // [sp+1B8h] [bp-180h]@135
  int v371; // [sp+1BCh] [bp-17Ch]@135
  int v372; // [sp+1C0h] [bp-178h]@135
  int v373; // [sp+1C4h] [bp-174h]@135
  int v374; // [sp+1C8h] [bp-170h]@126
  int v375; // [sp+1CCh] [bp-16Ch]@126
  int v376; // [sp+1D0h] [bp-168h]@126
  int v377; // [sp+1D4h] [bp-164h]@126
  int v378; // [sp+1D8h] [bp-160h]@126
  int v379; // [sp+1DCh] [bp-15Ch]@126
  int v380; // [sp+1E0h] [bp-158h]@126
  __int16 v381; // [sp+1E6h] [bp-152h]@112
  int v382; // [sp+1E8h] [bp-150h]@112
  int v383; // [sp+1ECh] [bp-14Ch]@112
  int v384; // [sp+1F0h] [bp-148h]@112
  int v385; // [sp+1F4h] [bp-144h]@112
  int v386; // [sp+1F8h] [bp-140h]@112
  int v387; // [sp+1FCh] [bp-13Ch]@112
  int v388; // [sp+200h] [bp-138h]@112
  __int16 v389; // [sp+206h] [bp-132h]@103
  int v390; // [sp+208h] [bp-130h]@103
  int v391; // [sp+20Ch] [bp-12Ch]@103
  int v392; // [sp+210h] [bp-128h]@103
  int v393; // [sp+214h] [bp-124h]@103
  int v394; // [sp+218h] [bp-120h]@103
  int v395; // [sp+21Ch] [bp-11Ch]@103
  int v396; // [sp+220h] [bp-118h]@103
  __int16 v397; // [sp+226h] [bp-112h]@93
  int v398; // [sp+228h] [bp-110h]@93
  int v399; // [sp+22Ch] [bp-10Ch]@93
  int v400; // [sp+230h] [bp-108h]@93
  int v401; // [sp+234h] [bp-104h]@93
  int v402; // [sp+238h] [bp-100h]@93
  int v403; // [sp+23Ch] [bp-FCh]@93
  int v404; // [sp+240h] [bp-F8h]@93
  int v405; // [sp+244h] [bp-F4h]@83
  char v406; // [sp+248h] [bp-F0h]@83
  int v407; // [sp+254h] [bp-E4h]@72
  int v408; // [sp+258h] [bp-E0h]@72
  int v409; // [sp+25Ch] [bp-DCh]@72
  int v410; // [sp+260h] [bp-D8h]@72
  int v411; // [sp+264h] [bp-D4h]@72
  int v412; // [sp+268h] [bp-D0h]@72
  int v413; // [sp+26Ch] [bp-CCh]@72
  int v414; // [sp+270h] [bp-C8h]@72
  int v415; // [sp+274h] [bp-C4h]@72
  __int16 v416; // [sp+27Ah] [bp-BEh]@57
  int v417; // [sp+27Ch] [bp-BCh]@57
  int v418; // [sp+280h] [bp-B8h]@57
  int v419; // [sp+284h] [bp-B4h]@57
  int v420; // [sp+288h] [bp-B0h]@57
  int v421; // [sp+28Ch] [bp-ACh]@57
  int v422; // [sp+290h] [bp-A8h]@57
  int v423; // [sp+294h] [bp-A4h]@57
  __int16 v424; // [sp+29Ah] [bp-9Eh]@48
  int v425; // [sp+29Ch] [bp-9Ch]@48
  char v426; // [sp+2A0h] [bp-98h]@48
  __int16 v427; // [sp+2AEh] [bp-8Ah]@38
  int v428; // [sp+2B0h] [bp-88h]@38
  int v429; // [sp+2B4h] [bp-84h]@38
  int v430; // [sp+2B8h] [bp-80h]@38
  int v431; // [sp+2BCh] [bp-7Ch]@38
  int v432; // [sp+2C0h] [bp-78h]@38
  int v433; // [sp+2C4h] [bp-74h]@38
  int v434; // [sp+2C8h] [bp-70h]@38
  int v435; // [sp+2CCh] [bp-6Ch]@28
  char v436; // [sp+2D0h] [bp-68h]@28
  int v437; // [sp+2DCh] [bp-5Ch]@20
  int v438; // [sp+2E0h] [bp-58h]@20
  int v439; // [sp+2E4h] [bp-54h]@20
  int v440; // [sp+2E8h] [bp-50h]@20
  int v441; // [sp+2ECh] [bp-4Ch]@5
  int v442; // [sp+2F0h] [bp-48h]@5
  int v443; // [sp+2F4h] [bp-44h]@5
  int v444; // [sp+2F8h] [bp-40h]@5
  int v445; // [sp+2FCh] [bp-3Ch]@5
  int v446; // [sp+300h] [bp-38h]@5
  int v447; // [sp+304h] [bp-34h]@5
  int v448; // [sp+308h] [bp-30h]@5
  int v449; // [sp+30Ch] [bp-2Ch]@5
  RotationUtil *v450; // [sp+312h] [bp-26h]@1

  v5 = a3;
  v293 = a3;
  v294 = a2;
  v295 = a1;
  v6 = HIDWORD(a5);
  v7 = a5;
  LOWORD(v450) = a4;
  result = *(_DWORD *)(a5 + 16);
  if ( result >= 1 )
  {
    v9 = *(_DWORD *)(a5 + 12);
    v10 = 0;
    v11 = BYTE4(a5) + 20;
    do
    {
      if ( v9 <= 0 )
      {
        ++v10;
      }
      else
        v12 = 0;
        v286 = v10 + 1;
        do
        {
          v447 = *(_DWORD *)v5;
          v448 = *(_DWORD *)(v5 + 4);
          v449 = *(_DWORD *)(v5 + 8);
          v13 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 3, v11);
          j_BlockPos::relative((BlockPos *)&v444, (int)&v447, (int)v13, 8 * (v10 - *(_DWORD *)(v295 + 12)) + 8);
          v447 = v444;
          v448 = v445;
          v449 = v446;
          v15 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 5, v14);
          j_BlockPos::relative((BlockPos *)&v441, (int)&v447, (int)v15, 8 * (v12 - *(_DWORD *)(v295 + 8)));
          v11 = v442;
          v447 = v441;
          v448 = v442;
          v449 = v443;
          if ( HIDWORD(a5) )
          {
            v16 = *(_DWORD *)(HIDWORD(a5) + 12);
            v19 = __OFSUB__(v16, v12);
            v17 = v16 == v12;
            v18 = v16 - v12 < 0;
            v20 = (_DWORD *)(HIDWORD(a5) + 20);
            if ( !((unsigned __int8)(v18 ^ v19) | v17) )
            {
              v21 = *(_DWORD *)(HIDWORD(a5) + 16);
              v19 = __OFSUB__(v21, v10);
              v17 = v21 == v10;
              v18 = v21 - v10 < 0;
              v20 = (_DWORD *)(HIDWORD(a5) + 20);
              if ( !((unsigned __int8)(v18 ^ v19) | v17) )
                v20 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)HIDWORD(a5) + 12 * v12) + 4 * v10);
            }
            v22 = (unsigned int)(*v20 - 1) >= 4;
            v23 = 0;
            if ( !v22 )
              v23 = 1;
          }
          else
          v24 = v7;
          v25 = (_DWORD *)(a5 + 20);
          if ( *(_DWORD *)(v7 + 12) > v12 )
            v25 = (_DWORD *)(a5 + 20);
            if ( *(_DWORD *)(v7 + 16) > v10 )
              v25 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + 12 * v12) + 4 * v10);
          v26 = v7;
          v27 = *v25 - 1;
          v22 = v27 >= 3;
          v17 = v27 == 3;
          v28 = 0;
          if ( !v17 && v22 )
            v28 = 1;
          if ( v23 | v28 )
            ++v12;
            v7 = v24;
            v29 = *(_DWORD *)v295;
            v437 = v441;
            v438 = v442 + 3;
            v439 = v443;
            j_std::make_unique<WoodlandMansionPieces::WoodlandMansionPiece,StructureManager &,char const(&)[5],BlockPos,Rotation &>(
              (TemplateStructurePiece **)&v440,
              v29,
              "roof",
              (int)&v437,
              (__int16 *)&v450);
            v30 = *(_QWORD *)(v294 + 4);
            if ( (_DWORD)v30 == HIDWORD(v30) )
              j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
                (_QWORD *)v294,
                &v440);
              if ( v440 )
                (*(void (**)(void))(*(_DWORD *)v440 + 4))();
            else
              v31 = v440;
              v440 = 0;
              *(_DWORD *)v30 = v31;
              v11 = v30 + 4;
              *(_DWORD *)(v294 + 4) = v30 + 4;
            v440 = 0;
            v32 = *(_DWORD *)(v24 + 12);
            v19 = __OFSUB__(v32, v12 + 1);
            v17 = v32 == v12 + 1;
            v18 = v32 - (v12 + 1) < 0;
            v33 = (_DWORD *)(a5 + 20);
              v34 = *(_DWORD *)(v24 + 16);
              v19 = __OFSUB__(v34, v10);
              v17 = v34 == v10;
              v18 = v34 - v10 < 0;
              v33 = (_DWORD *)(a5 + 20);
                v33 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v24 + 12 * (v12 + 1)) + 4 * v10);
            if ( (unsigned int)(*v33 - 1) >= 4 )
              v35 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 5, v11);
              j_BlockPos::relative((BlockPos *)&v436, (int)&v447, (int)v35, 6);
              j_std::make_unique<WoodlandMansionPieces::WoodlandMansionPiece,StructureManager &,char const(&)[11],BlockPos &,Rotation &>(
                (TemplateStructurePiece **)&v435,
                *(_DWORD *)v295,
                "roof_front",
                (int)&v436,
                (__int16 *)&v450);
              v36 = *(_QWORD *)(v294 + 4);
              if ( (_DWORD)v36 == HIDWORD(v36) )
              {
                j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
                  (_QWORD *)v294,
                  &v435);
                if ( v435 )
                  (*(void (**)(void))(*(_DWORD *)v435 + 4))();
              }
              else
                v37 = v435;
                v435 = 0;
                *(_DWORD *)v36 = v37;
                v11 = v36 + 4;
                *(_DWORD *)(v294 + 4) = v36 + 4;
              v435 = 0;
            v38 = (_DWORD *)(a5 + 20);
            if ( v12 >= 1 )
              v39 = *(_DWORD *)(v24 + 12);
              v19 = __OFSUB__(v39, v12);
              v18 = v39 - v12 < 0;
              v38 = (_DWORD *)(a5 + 20);
              if ( !(v18 ^ v19) )
                v40 = *(_DWORD *)(v24 + 16);
                v19 = __OFSUB__(v40, v10);
                v17 = v40 == v10;
                v18 = v40 - v10 < 0;
                v38 = (_DWORD *)(a5 + 20);
                if ( !((unsigned __int8)(v18 ^ v19) | v17) )
                  v38 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v24 + 12 * (v12 - 1)) + 4 * v10);
            if ( (unsigned int)(*v38 - 1) >= 4 )
              v41 = v5;
              v42 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 5, v11);
              j_BlockPos::relative((BlockPos *)&v432, (int)&v447, (int)v42, 0);
              v44 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 3, v43);
              j_BlockPos::relative((BlockPos *)&v429, (int)&v432, (int)v44, 7);
              v432 = v429;
              v433 = v430;
              v434 = v431;
              v45 = *(_DWORD *)v295;
              v427 = j_RotationUtil::getRotated((RotationUtil *)(unsigned __int16)v450, 2, v46);
              j_std::make_unique<WoodlandMansionPieces::WoodlandMansionPiece,StructureManager &,char const(&)[11],BlockPos &,Rotation>(
                (TemplateStructurePiece **)&v428,
                v45,
                (int)&v432,
                &v427);
              v47 = *(_QWORD *)(v294 + 4);
              if ( (_DWORD)v47 == HIDWORD(v47) )
                  &v428);
                v5 = v41;
                if ( v428 )
                  (*(void (**)(void))(*(_DWORD *)v428 + 4))();
                v48 = v428;
                v428 = 0;
                *(_DWORD *)v47 = v48;
                v11 = v47 + 4;
                *(_DWORD *)(v294 + 4) = v47 + 4;
              v428 = 0;
            v49 = (_DWORD *)(a5 + 20);
            if ( v10 >= 1 )
              v50 = *(_DWORD *)(v26 + 12);
              v19 = __OFSUB__(v50, v12);
              v17 = v50 == v12;
              v18 = v50 - v12 < 0;
              v49 = (_DWORD *)(a5 + 20);
                v51 = *(_DWORD *)(v26 + 16);
                v19 = __OFSUB__(v51, v10);
                v18 = v51 - v10 < 0;
                v49 = (_DWORD *)(a5 + 20);
                if ( !(v18 ^ v19) )
                  v49 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v26 + 12 * v12) + 4 * (v10 - 1));
            if ( (unsigned int)(*v49 - 1) >= 4 )
              v52 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 4, v11);
              j_BlockPos::relative((BlockPos *)&v426, (int)&v447, (int)v52, 1);
              v53 = *(_DWORD *)v295;
              v424 = j_RotationUtil::getRotated((RotationUtil *)(unsigned __int16)v450, 3, v54);
                (TemplateStructurePiece **)&v425,
                v53,
                (int)&v426,
                &v424);
              v55 = *(_QWORD *)(v294 + 4);
              if ( (_DWORD)v55 == HIDWORD(v55) )
                  &v425);
                v7 = v26;
                if ( v425 )
                  (*(void (**)(void))(*(_DWORD *)v425 + 4))();
                v56 = v425;
                v425 = 0;
                *(_DWORD *)v55 = v56;
                v11 = v55 + 4;
                *(_DWORD *)(v294 + 4) = v55 + 4;
              v425 = 0;
            v57 = *(_DWORD *)(v7 + 12);
            v19 = __OFSUB__(v57, v12);
            v17 = v57 == v12;
            v18 = v57 - v12 < 0;
            v58 = (_DWORD *)(a5 + 20);
              v59 = *(_DWORD *)(v7 + 16);
              v19 = __OFSUB__(v59, v286);
              v17 = v59 == v286;
              v18 = v59 - v286 < 0;
              v58 = (_DWORD *)(a5 + 20);
                v58 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + 12 * v12) + 4 * v286);
            if ( (unsigned int)(*v58 - 1) >= 4 )
              v60 = v7;
              v61 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 5, v11);
              j_BlockPos::relative((BlockPos *)&v421, (int)&v447, (int)v61, 6);
              v63 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 3, v62);
              j_BlockPos::relative((BlockPos *)&v418, (int)&v421, (int)v63, 6);
              v421 = v418;
              v422 = v419;
              v423 = v420;
              v64 = *(_DWORD *)v295;
              v416 = j_RotationUtil::getRotated((RotationUtil *)(unsigned __int16)v450, 1, v65);
                (TemplateStructurePiece **)&v417,
                v64,
                (int)&v421,
                &v416);
              v66 = *(_QWORD *)(v294 + 4);
              if ( (_DWORD)v66 == HIDWORD(v66) )
                  &v417);
                v7 = v60;
                if ( v417 )
                  (*(void (**)(void))(*(_DWORD *)v417 + 4))();
                v67 = v417;
                v417 = 0;
                *(_DWORD *)v66 = v67;
                v11 = v66 + 4;
                *(_DWORD *)(v294 + 4) = v66 + 4;
              v417 = 0;
          v9 = *(_DWORD *)(v7 + 12);
        }
        while ( v12 < v9 );
        result = *(_DWORD *)(v7 + 16);
        v6 = HIDWORD(a5);
    }
    while ( v10 < result );
  }
  if ( v6 )
    if ( result < 1 )
      return result;
    v68 = *(_DWORD *)(v7 + 12);
    v69 = v7 + 20;
    v289 = v6 + 20;
    v70 = 0;
      if ( v68 <= 0 )
        ++v70;
        v71 = v5;
        v287 = v70 + 1;
        v72 = v70 - 1;
        v73 = v70;
        v74 = 12;
        v75 = 0;
        v76 = 0;
        v280 = v73;
        v279 = v72;
          v413 = *(_DWORD *)v71;
          v77 = (_DWORD *)v69;
          v414 = *(_DWORD *)(v71 + 4);
          v78 = v76;
          v415 = *(_DWORD *)(v71 + 8);
          v291 = v75;
          v79 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 3, v76);
          v80 = v73;
          j_BlockPos::relative((BlockPos *)&v410, (int)&v413, (int)v79, 8 * (v73 - *(_DWORD *)(v295 + 12)) + 8);
          v413 = v410;
          v414 = v411;
          v415 = v412;
          v82 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 5, v81);
          v83 = v75 - 8 * *(_DWORD *)(v295 + 8);
          v84 = v78;
          j_BlockPos::relative((BlockPos *)&v407, (int)&v413, (int)v82, v83);
          v85 = v73;
          v413 = v407;
          v414 = v408;
          v415 = v409;
          v86 = *(_DWORD *)(HIDWORD(a5) + 12);
          v19 = __OFSUB__(v86, v78);
          v17 = v86 == v78;
          v18 = v86 - v78 < 0;
          v87 = (_DWORD *)v289;
          if ( !((unsigned __int8)(v18 ^ v19) | v17) )
            v88 = *(_DWORD *)(HIDWORD(a5) + 16);
            v19 = __OFSUB__(v88, v73);
            v17 = v88 == v73;
            v18 = v88 - v73 < 0;
            v87 = (_DWORD *)v289;
              v87 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)HIDWORD(a5) + v74 - 12) + 4 * v73);
          v89 = *(_DWORD *)(v7 + 12);
          v69 = (int)v77;
          v90 = *v87 - 1;
          v19 = __OFSUB__(v89, v84);
          v17 = v89 == v84;
          v18 = v89 - v84 < 0;
          v91 = v77;
            v92 = *(_DWORD *)(v7 + 16);
            v19 = __OFSUB__(v92, v73);
            v17 = v92 == v73;
            v18 = v92 - v73 < 0;
            v91 = v77;
              v91 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + v74 - 12) + 4 * v73);
          v76 = v84 + 1;
          v93 = v293;
          if ( (v90 | (unsigned int)(*v91 - 1)) <= 3 )
            v94 = *(_DWORD *)(v7 + 12);
            v19 = __OFSUB__(v94, v76);
            v17 = v94 == v76;
            v18 = v94 - v76 < 0;
            v95 = v77;
              v96 = *(_DWORD *)(v7 + 16);
              v19 = __OFSUB__(v96, v80);
              v17 = v96 == v80;
              v18 = v96 - v80 < 0;
              v95 = v77;
                v95 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + v74) + 4 * v80);
            if ( (unsigned int)(*v95 - 1) >= 4 )
              v97 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 5, v76);
              j_BlockPos::relative((BlockPos *)&v406, (int)&v413, (int)v97, 7);
                (TemplateStructurePiece **)&v405,
                "small_wall",
                (int)&v406,
              v98 = *(_QWORD *)(v294 + 4);
              if ( (_DWORD)v98 == HIDWORD(v98) )
                  &v405);
                v85 = v80;
                if ( v405 )
                {
                  (*(void (**)(void))(*(_DWORD *)v405 + 4))();
                  v85 = v80;
                }
                v99 = v405;
                v405 = 0;
                *(_DWORD *)v98 = v99;
                *(_DWORD *)(v294 + 4) = v98 + 4;
              v76 = v84 + 1;
              v405 = 0;
            v100 = v77;
            if ( v84 >= 1 )
              v101 = *(_DWORD *)(v7 + 12);
              v19 = __OFSUB__(v101, v84);
              v18 = v101 - v84 < 0;
              v100 = v77;
                v102 = *(_DWORD *)(v7 + 16);
                v19 = __OFSUB__(v102, v85);
                v17 = v102 == v85;
                v18 = v102 - v85 < 0;
                v100 = v77;
                  v100 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + v74 - 24) + 4 * v85);
            if ( (unsigned int)(*v100 - 1) >= 4 )
              v282 = v76;
              v103 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 4, v76);
              j_BlockPos::relative((BlockPos *)&v402, (int)&v413, (int)v103, 1);
              v105 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 3, v104);
              j_BlockPos::relative((BlockPos *)&v399, (int)&v402, (int)v105, 6);
              v402 = v399;
              v403 = v400;
              v404 = v401;
              v106 = *(_DWORD *)v295;
              v397 = j_RotationUtil::getRotated((RotationUtil *)(unsigned __int16)v450, 2, v107);
                (TemplateStructurePiece **)&v398,
                v106,
                (int)&v402,
                &v397);
              v108 = *(_QWORD *)(v294 + 4);
              if ( (_DWORD)v108 == HIDWORD(v108) )
                  &v398);
                v93 = v293;
                v85 = v280;
                if ( v398 )
                  (*(void (**)(void))(*(_DWORD *)v398 + 4))();
                  v85 = v280;
                v109 = v398;
                v398 = 0;
                *(_DWORD *)v108 = v109;
                *(_DWORD *)(v294 + 4) = v108 + 4;
              v76 = v282;
              v398 = 0;
            v110 = v77;
            if ( v85 >= 1 )
              v111 = *(_DWORD *)(v7 + 12);
              v19 = __OFSUB__(v111, v84);
              v17 = v111 == v84;
              v18 = v111 - v84 < 0;
              v110 = v77;
                v112 = *(_DWORD *)(v7 + 16);
                v19 = __OFSUB__(v112, v85);
                v18 = v112 - v85 < 0;
                v110 = v77;
                  v110 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + v74 - 12) + 4 * v279);
            if ( (unsigned int)(*v110 - 1) >= 4 )
              v283 = v84;
              v113 = v76;
              v114 = v7;
              v115 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 4, v76);
              j_BlockPos::relative((BlockPos *)&v394, (int)&v413, (int)v115, 0);
              v117 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 2, v116);
              j_BlockPos::relative((BlockPos *)&v391, (int)&v394, (int)v117, 1);
              v394 = v391;
              v395 = v392;
              v396 = v393;
              v118 = *(_DWORD *)v295;
              v389 = j_RotationUtil::getRotated((RotationUtil *)(unsigned __int16)v450, 3, v119);
                (TemplateStructurePiece **)&v390,
                v118,
                (int)&v394,
                &v389);
              v120 = *(_QWORD *)(v294 + 4);
              if ( (_DWORD)v120 == HIDWORD(v120) )
                  &v390);
                v7 = v114;
                v84 = v283;
                if ( v390 )
                  (*(void (**)(void))(*(_DWORD *)v390 + 4))();
                v121 = v390;
                v390 = 0;
                *(_DWORD *)v120 = v121;
                *(_DWORD *)(v294 + 4) = v120 + 4;
              v76 = v113;
              v390 = 0;
              v85 = v280;
              v93 = v293;
            v122 = *(_DWORD *)(v7 + 12);
            v19 = __OFSUB__(v122, v84);
            v17 = v122 == v84;
            v18 = v122 - v84 < 0;
            v123 = v77;
              v124 = *(_DWORD *)(v7 + 16);
              v19 = __OFSUB__(v124, v287);
              v17 = v124 == v287;
              v18 = v124 - v287 < 0;
              v123 = v77;
                v123 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + v74 - 12) + 4 * v287);
            if ( (unsigned int)(*v123 - 1) >= 4 )
              v125 = v76;
              v126 = v7;
              v127 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 5, v76);
              j_BlockPos::relative((BlockPos *)&v386, (int)&v413, (int)v127, 6);
              v129 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 3, v128);
              j_BlockPos::relative((BlockPos *)&v383, (int)&v386, (int)v129, 7);
              v386 = v383;
              v387 = v384;
              v388 = v385;
              v130 = *(_DWORD *)v295;
              v381 = j_RotationUtil::getRotated((RotationUtil *)(unsigned __int16)v450, 1, v131);
                (TemplateStructurePiece **)&v382,
                v130,
                (int)&v386,
                &v381);
              v132 = *(_QWORD *)(v294 + 4);
              if ( (_DWORD)v132 == HIDWORD(v132) )
                  &v382);
                v7 = v126;
                if ( v382 )
                  (*(void (**)(void))(*(_DWORD *)v382 + 4))();
                v133 = v382;
                v382 = 0;
                *(_DWORD *)v132 = v133;
                *(_DWORD *)(v294 + 4) = v132 + 4;
              v76 = v125;
              v382 = 0;
            v134 = *(_DWORD *)(v7 + 12);
            v19 = __OFSUB__(v134, v76);
            v17 = v134 == v76;
            v18 = v134 - v76 < 0;
            v135 = (_DWORD *)v69;
              v136 = *(_DWORD *)(v7 + 16);
              v19 = __OFSUB__(v136, v85);
              v17 = v136 == v85;
              v18 = v136 - v85 < 0;
              v135 = (_DWORD *)v69;
                v135 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + v74) + 4 * v85);
            if ( (unsigned int)(*v135 - 1) >= 4 )
              v137 = (_DWORD *)v69;
              if ( v85 >= 1 )
                v138 = *(_DWORD *)(v7 + 12);
                v19 = __OFSUB__(v138, v84);
                v17 = v138 == v84;
                v18 = v138 - v84 < 0;
                v137 = (_DWORD *)v69;
                  v139 = *(_DWORD *)(v7 + 16);
                  v19 = __OFSUB__(v139, v85);
                  v18 = v139 - v85 < 0;
                  v137 = (_DWORD *)v69;
                  if ( !(v18 ^ v19) )
                    v137 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + v74 - 12) + 4 * v279);
              if ( (unsigned int)(*v137 - 1) >= 4 )
                v140 = v76;
                v141 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 5, v76);
                j_BlockPos::relative((BlockPos *)&v378, (int)&v413, (int)v141, 7);
                v143 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 2, v142);
                j_BlockPos::relative((BlockPos *)&v375, (int)&v378, (int)v143, 2);
                v378 = v375;
                v379 = v376;
                v380 = v377;
                j_std::make_unique<WoodlandMansionPieces::WoodlandMansionPiece,StructureManager &,char const(&)[18],BlockPos &,Rotation &>(
                  (TemplateStructurePiece **)&v374,
                  *(_DWORD *)v295,
                  "small_wall_corner",
                  (int)&v378,
                  (__int16 *)&v450);
                v144 = *(_QWORD *)(v294 + 4);
                if ( (_DWORD)v144 == HIDWORD(v144) )
                  j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
                    (_QWORD *)v294,
                    &v374);
                  if ( v374 )
                    (*(void (**)(void))(*(_DWORD *)v374 + 4))();
                else
                  v145 = v374;
                  v374 = 0;
                  *(_DWORD *)v144 = v145;
                  *(_DWORD *)(v294 + 4) = v144 + 4;
                v76 = v140;
                v374 = 0;
              v146 = *(_DWORD *)(v7 + 12);
              v19 = __OFSUB__(v146, v84);
              v17 = v146 == v84;
              v18 = v146 - v84 < 0;
              v147 = (_DWORD *)v69;
                v148 = *(_DWORD *)(v7 + 16);
                v19 = __OFSUB__(v148, v287);
                v17 = v148 == v287;
                v18 = v148 - v287 < 0;
                v147 = (_DWORD *)v69;
                  v147 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + v74 - 12) + 4 * v287);
              if ( (unsigned int)(*v147 - 1) >= 4 )
                v149 = v76;
                v150 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 5, v76);
                j_BlockPos::relative((BlockPos *)&v371, (int)&v413, (int)v150, 8);
                v152 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 3, v151);
                j_BlockPos::relative((BlockPos *)&v368, (int)&v371, (int)v152, 7);
                v371 = v368;
                v372 = v369;
                v373 = v370;
                v153 = *(_DWORD *)v295;
                v366 = j_RotationUtil::getRotated((RotationUtil *)(unsigned __int16)v450, 1, v154);
                j_std::make_unique<WoodlandMansionPieces::WoodlandMansionPiece,StructureManager &,char const(&)[18],BlockPos &,Rotation>(
                  (TemplateStructurePiece **)&v367,
                  v153,
                  (int)&v371,
                  &v366);
                v155 = *(_QWORD *)(v294 + 4);
                if ( (_DWORD)v155 == HIDWORD(v155) )
                    &v367);
                  v7 = a5;
                  if ( v367 )
                    (*(void (**)(void))(*(_DWORD *)v367 + 4))();
                  v156 = v367;
                  v367 = 0;
                  *(_DWORD *)v155 = v156;
                  *(_DWORD *)(v294 + 4) = v155 + 4;
                v76 = v149;
                v367 = 0;
            v157 = (_DWORD *)v69;
              v158 = *(_DWORD *)(v7 + 12);
              v19 = __OFSUB__(v158, v84);
              v18 = v158 - v84 < 0;
              v157 = (_DWORD *)v69;
                v159 = *(_DWORD *)(v7 + 16);
                v19 = __OFSUB__(v159, v85);
                v17 = v159 == v85;
                v18 = v159 - v85 < 0;
                v157 = (_DWORD *)v69;
                  v157 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + v74 - 24) + 4 * v85);
            if ( (unsigned int)(*v157 - 1) >= 4 )
              v160 = (_DWORD *)v69;
                v161 = *(_DWORD *)(v7 + 12);
                v19 = __OFSUB__(v161, v84);
                v17 = v161 == v84;
                v18 = v161 - v84 < 0;
                v160 = (_DWORD *)v69;
                  v162 = *(_DWORD *)(v7 + 16);
                  v19 = __OFSUB__(v162, v85);
                  v18 = v162 - v85 < 0;
                  v160 = (_DWORD *)v69;
                    v160 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + v74 - 12) + 4 * v279);
              if ( (unsigned int)(*v160 - 1) >= 4 )
                v163 = v76;
                v164 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 4, v76);
                j_BlockPos::relative((BlockPos *)&v363, (int)&v413, (int)v164, 2);
                v166 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 2, v165);
                j_BlockPos::relative((BlockPos *)&v360, (int)&v363, (int)v166, 1);
                v363 = v360;
                v364 = v361;
                v365 = v362;
                v167 = *(_DWORD *)v295;
                v358 = j_RotationUtil::getRotated((RotationUtil *)(unsigned __int16)v450, 3, v168);
                  (TemplateStructurePiece **)&v359,
                  v167,
                  (int)&v363,
                  &v358);
                v169 = *(_QWORD *)(v294 + 4);
                if ( (_DWORD)v169 == HIDWORD(v169) )
                    &v359);
                  if ( v359 )
                    (*(void (**)(void))(*(_DWORD *)v359 + 4))();
                  v170 = v359;
                  v359 = 0;
                  *(_DWORD *)v169 = v170;
                  *(_DWORD *)(v294 + 4) = v169 + 4;
                v76 = v163;
                v359 = 0;
              v171 = *(_DWORD *)(v7 + 12);
              v19 = __OFSUB__(v171, v84);
              v17 = v171 == v84;
              v18 = v171 - v84 < 0;
              v172 = (_DWORD *)v69;
                v173 = *(_DWORD *)(v7 + 16);
                v19 = __OFSUB__(v173, v287);
                v17 = v173 == v287;
                v18 = v173 - v287 < 0;
                v172 = (_DWORD *)v69;
                  v172 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + v74 - 12) + 4 * v287);
              if ( (unsigned int)(*v172 - 1) >= 4 )
                v284 = v76;
                v174 = v85;
                v175 = v7;
                v176 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 4, v76);
                j_BlockPos::relative((BlockPos *)&v355, (int)&v413, (int)v176, 1);
                v178 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 3, v177);
                j_BlockPos::relative((BlockPos *)&v352, (int)&v355, (int)v178, 8);
                v355 = v352;
                v356 = v353;
                v357 = v354;
                v179 = *(_DWORD *)v295;
                v350 = j_RotationUtil::getRotated((RotationUtil *)(unsigned __int16)v450, 2, v180);
                  (TemplateStructurePiece **)&v351,
                  v179,
                  (int)&v355,
                  &v350);
                v181 = *(_QWORD *)(v294 + 4);
                if ( (_DWORD)v181 == HIDWORD(v181) )
                    &v351);
                  v7 = v175;
                  v85 = v174;
                  if ( v351 )
                  {
                    (*(void (**)(void))(*(_DWORD *)v351 + 4))();
                    v85 = v174;
                  }
                  v182 = v351;
                  v351 = 0;
                  *(_DWORD *)v181 = v182;
                  *(_DWORD *)(v294 + 4) = v181 + 4;
                v351 = 0;
                v76 = v284;
          v74 += 12;
          v68 = *(_DWORD *)(v7 + 12);
          v71 = v93;
          v75 = v291 + 8;
          v73 = v85;
        while ( v76 < v68 );
        v5 = v71;
        v70 = v287;
    while ( v70 < result );
    v183 = *(_DWORD *)(v7 + 12);
    v184 = v7 + 20;
    v185 = v6 + 20;
    v186 = 0;
    v288 = v7 + 20;
    v290 = (_DWORD *)v185;
      LOBYTE(v187) = v186 + 1;
      v281 = v186;
      v292 = v186 + 1;
      if ( v183 < 1 )
        goto LABEL_276;
      v188 = 12;
      v189 = 0;
      v190 = 0;
      v285 = v186 - 1;
      do
        v191 = v7;
        v192 = v190;
        v347 = *(_DWORD *)v293;
        v348 = *(_DWORD *)(v293 + 4);
        v349 = *(_DWORD *)(v293 + 8);
        v193 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 3, v187);
        j_BlockPos::relative((BlockPos *)&v344, (int)&v347, (int)v193, 8 * (v186 - *(_DWORD *)(v295 + 12)) + 8);
        v347 = v344;
        v348 = v345;
        v349 = v346;
        v195 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 5, v194);
        j_BlockPos::relative((BlockPos *)&v341, (int)&v347, (int)v195, v189 - 8 * *(_DWORD *)(v295 + 8));
        v347 = v341;
        v348 = v342;
        v349 = v343;
        if ( HIDWORD(a5) )
          v196 = *(_DWORD *)(HIDWORD(a5) + 12);
          v19 = __OFSUB__(v196, v190);
          v17 = v196 == v190;
          v18 = v196 - v190 < 0;
          v197 = v290;
            v198 = *(_DWORD *)(HIDWORD(a5) + 16);
            v19 = __OFSUB__(v198, v186);
            v17 = v198 == v186;
            v18 = v198 - v186 < 0;
            v197 = v290;
              v197 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)HIDWORD(a5) + v188 - 12) + 4 * v186);
          v22 = (unsigned int)(*v197 - 1) >= 4;
          LODWORD(v199) = 0;
          if ( !v22 )
            LODWORD(v199) = 1;
        else
        v200 = *(_DWORD *)(v7 + 12);
        v19 = __OFSUB__(v200, v190);
        v17 = v200 == v190;
        v18 = v200 - v190 < 0;
        v201 = v184;
        if ( !((unsigned __int8)(v18 ^ v19) | v17) )
          v202 = *(_DWORD *)(v7 + 16);
          v19 = __OFSUB__(v202, v186);
          v17 = v202 == v186;
          v18 = v202 - v186 < 0;
          v201 = v184;
            v201 = *(_DWORD *)(*(_DWORD *)v7 + v188 - 12) + 4 * v186;
        ++v190;
        HIDWORD(v199) = *(_DWORD *)HIDWORD(v199) - 1;
        v22 = HIDWORD(v199) >= 3;
        v17 = HIDWORD(v199) == 3;
        HIDWORD(v199) = 0;
        if ( !v17 && v22 )
          HIDWORD(v199) = 1;
        if ( !v199 )
          v203 = *(_DWORD *)(v7 + 12);
          v19 = __OFSUB__(v203, v190);
          v17 = v203 == v190;
          v18 = v203 - v190 < 0;
          v204 = (_DWORD *)v184;
            v205 = *(_DWORD *)(v7 + 16);
            v19 = __OFSUB__(v205, v186);
            v17 = v205 == v186;
            v18 = v205 - v186 < 0;
            v204 = (_DWORD *)v184;
              v204 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + v188) + 4 * v186);
          if ( (unsigned int)(*v204 - 1) >= 4 )
            v206 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 5, v187);
            j_BlockPos::relative((BlockPos *)&v338, (int)&v347, (int)v206, 6);
            v207 = *(_DWORD *)(v7 + 12);
            v19 = __OFSUB__(v207, v192);
            v17 = v207 == v192;
            v18 = v207 - v192 < 0;
            v208 = (_DWORD *)v184;
              v209 = *(_DWORD *)(v7 + 16);
              v19 = __OFSUB__(v209, v292);
              v17 = v209 == v292;
              v18 = v209 - v292 < 0;
              v208 = (_DWORD *)v184;
                v208 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + v188 - 12) + 4 * v292);
            if ( (unsigned int)(*v208 - 1) >= 4 )
              v213 = v192 + 1;
              v217 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 3, v187);
              j_BlockPos::relative((BlockPos *)&v337, (int)&v338, (int)v217, 6);
              j_std::make_unique<WoodlandMansionPieces::WoodlandMansionPiece,StructureManager &,char const(&)[12],BlockPos &,Rotation &>(
                (TemplateStructurePiece **)&v336,
                "roof_corner",
                (int)&v337,
              v218 = *(_QWORD *)(v294 + 4);
              if ( (_DWORD)v218 == HIDWORD(v218) )
                  &v336);
                if ( v336 )
                  (*(void (**)(void))(*(_DWORD *)v336 + 4))();
                v219 = v336;
                v336 = 0;
                *(_DWORD *)v218 = v219;
                v187 = v218 + 4;
                *(_DWORD *)(v294 + 4) = v218 + 4;
              v336 = 0;
LABEL_208:
              v190 = v213;
              v184 = v288;
              v210 = *(_DWORD *)(v7 + 12);
              v19 = __OFSUB__(v210, v190);
              v17 = v210 == v190;
              v18 = v210 - v190 < 0;
              v211 = (_DWORD *)v184;
                v212 = *(_DWORD *)(v7 + 16);
                v19 = __OFSUB__(v212, v292);
                v17 = v212 == v292;
                v18 = v212 - v292 < 0;
                v211 = (_DWORD *)v184;
                  v211 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + v188) + 4 * v292);
              if ( (unsigned int)(*v211 - 1) <= 3 )
                v213 = v192 + 1;
                v214 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 3, v187);
                j_BlockPos::relative((BlockPos *)&v335, (int)&v338, (int)v214, 5);
                  (TemplateStructurePiece **)&v334,
                  "roof_inner_corner",
                  (int)&v335,
                v215 = *(_QWORD *)(v294 + 4);
                if ( (_DWORD)v215 == HIDWORD(v215) )
                    &v334);
                  if ( v334 )
                    (*(void (**)(void))(*(_DWORD *)v334 + 4))();
                  v216 = v334;
                  v334 = 0;
                  *(_DWORD *)v215 = v216;
                  v187 = v215 + 4;
                  *(_DWORD *)(v294 + 4) = v215 + 4;
                v334 = 0;
                goto LABEL_208;
            v220 = (_DWORD *)v184;
            if ( v186 >= 1 )
              v221 = *(_DWORD *)(v7 + 12);
              v19 = __OFSUB__(v221, v192);
              v17 = v221 == v192;
              v18 = v221 - v192 < 0;
              v220 = (_DWORD *)v184;
                v222 = *(_DWORD *)(v7 + 16);
                v19 = __OFSUB__(v222, v186);
                v18 = v222 - v186 < 0;
                v220 = (_DWORD *)v184;
                  v220 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + v188 - 12) + 4 * v285);
            if ( (unsigned int)(*v220 - 1) >= 4 )
              v233 = v190;
              v331 = v338;
              v332 = v339;
              v333 = v340;
              v234 = *(_DWORD *)v295;
              v329 = j_RotationUtil::getRotated((RotationUtil *)(unsigned __int16)v450, 3, v187);
              j_std::make_unique<WoodlandMansionPieces::WoodlandMansionPiece,StructureManager &,char const(&)[12],BlockPos &,Rotation>(
                (TemplateStructurePiece **)&v330,
                v234,
                (int)&v331,
                &v329);
              v235 = *(_QWORD *)(v294 + 4);
              if ( (_DWORD)v235 == HIDWORD(v235) )
                  &v330);
                v190 = v233;
                v184 = v288;
                if ( v330 )
                  (*(void (**)(void))(*(_DWORD *)v330 + 4))();
                v236 = v330;
                v330 = 0;
                *(_DWORD *)v235 = v236;
                LOBYTE(v187) = v235 + 4;
                *(_DWORD *)(v294 + 4) = v235 + 4;
              v330 = 0;
              v223 = (_DWORD *)v184;
              if ( v186 >= 1 )
                v224 = *(_DWORD *)(v7 + 12);
                v19 = __OFSUB__(v224, v190);
                v17 = v224 == v190;
                v18 = v224 - v190 < 0;
                v223 = (_DWORD *)v184;
                  v225 = *(_DWORD *)(v7 + 16);
                  v19 = __OFSUB__(v225, v186);
                  v18 = v225 - v186 < 0;
                  v223 = (_DWORD *)v184;
                    v223 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + v188) + 4 * v285);
              if ( (unsigned int)(*v223 - 1) <= 3 )
                v226 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 5, v187);
                j_BlockPos::relative((BlockPos *)&v326, (int)&v347, (int)v226, 9);
                v228 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 2, v227);
                j_BlockPos::relative((BlockPos *)&v323, (int)&v326, (int)v228, 2);
                v326 = v323;
                v327 = v324;
                v328 = v325;
                v229 = *(_DWORD *)v295;
                v321 = j_RotationUtil::getRotated((RotationUtil *)(unsigned __int16)v450, 1, v230);
                  (TemplateStructurePiece **)&v322,
                  v229,
                  (int)&v326,
                  &v321);
                v231 = *(_QWORD *)(v294 + 4);
                if ( (_DWORD)v231 == HIDWORD(v231) )
                    &v322);
                  v186 = v281;
                  v7 = v191;
                  v184 = v288;
                  if ( v322 )
                    (*(void (**)(void))(*(_DWORD *)v322 + 4))();
                  v232 = v322;
                  v322 = 0;
                  *(_DWORD *)v231 = v232;
                  LOBYTE(v187) = v231 + 4;
                  *(_DWORD *)(v294 + 4) = v231 + 4;
                v322 = 0;
          v237 = (_DWORD *)v184;
          if ( v192 >= 1 )
            v238 = *(_DWORD *)(v7 + 12);
            v19 = __OFSUB__(v238, v192);
            v18 = v238 - v192 < 0;
            v237 = (_DWORD *)v184;
            if ( !(v18 ^ v19) )
              v239 = *(_DWORD *)(v7 + 16);
              v19 = __OFSUB__(v239, v186);
              v17 = v239 == v186;
              v18 = v239 - v186 < 0;
              v237 = (_DWORD *)v184;
                v237 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + v188 - 24) + 4 * v186);
          if ( (unsigned int)(*v237 - 1) >= 4 )
            v240 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 5, v187);
            j_BlockPos::relative((BlockPos *)&v318, (int)&v347, (int)v240, 0);
            v242 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 3, v241);
            j_BlockPos::relative((BlockPos *)&v315, (int)&v318, (int)v242, 0);
            v318 = v315;
            v319 = v316;
            v320 = v317;
            v243 = *(_DWORD *)(v7 + 12);
            v19 = __OFSUB__(v243, v192);
            v17 = v243 == v192;
            v18 = v243 - v192 < 0;
            v244 = (_DWORD *)v184;
              v245 = *(_DWORD *)(v7 + 16);
              v19 = __OFSUB__(v245, v292);
              v17 = v245 == v292;
              v18 = v245 - v292 < 0;
              v244 = (_DWORD *)v184;
                v244 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + v188 - 12) + 4 * v292);
            if ( (unsigned int)(*v244 - 1) >= 4 )
              v257 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 3, v187);
              j_BlockPos::relative((BlockPos *)&v314, (int)&v318, (int)v257, 6);
              v258 = *(_DWORD *)v295;
              v312 = j_RotationUtil::getRotated((RotationUtil *)(unsigned __int16)v450, 1, v259);
                (TemplateStructurePiece **)&v313,
                v258,
                (int)&v314,
                &v312);
              v260 = *(_QWORD *)(v294 + 4);
              if ( (_DWORD)v260 == HIDWORD(v260) )
                  &v313);
                v7 = a5;
                if ( v313 )
                  (*(void (**)(void))(*(_DWORD *)v313 + 4))();
                v261 = v313;
                v313 = 0;
                *(_DWORD *)v260 = v261;
                v187 = v260 + 4;
                *(_DWORD *)(v294 + 4) = v260 + 4;
              v313 = 0;
              v246 = (_DWORD *)v184;
              if ( v192 >= 1 )
                v247 = *(_DWORD *)(v7 + 12);
                v19 = __OFSUB__(v247, v192);
                v18 = v247 - v192 < 0;
                v246 = (_DWORD *)v184;
                  v248 = *(_DWORD *)(v7 + 16);
                  v19 = __OFSUB__(v248, v292);
                  v17 = v248 == v292;
                  v18 = v248 - v292 < 0;
                  v246 = (_DWORD *)v184;
                  if ( !((unsigned __int8)(v18 ^ v19) | v17) )
                    v246 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + v188 - 24) + 4 * v292);
              if ( (unsigned int)(*v246 - 1) <= 3 )
                v249 = v190;
                v250 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 3, v187);
                j_BlockPos::relative((BlockPos *)&v309, (int)&v318, (int)v250, 8);
                v252 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 4, v251);
                j_BlockPos::relative((BlockPos *)&v306, (int)&v309, (int)v252, 3);
                v309 = v306;
                v310 = v307;
                v311 = v308;
                v253 = *(_DWORD *)v295;
                v304 = j_RotationUtil::getRotated((RotationUtil *)(unsigned __int16)v450, 3, v254);
                  (TemplateStructurePiece **)&v305,
                  v253,
                  (int)&v309,
                  &v304);
                v255 = *(_QWORD *)(v294 + 4);
                if ( (_DWORD)v255 == HIDWORD(v255) )
                    &v305);
                  v190 = v249;
                  if ( v305 )
                    (*(void (**)(void))(*(_DWORD *)v305 + 4))();
                  v256 = v305;
                  v305 = 0;
                  *(_DWORD *)v255 = v256;
                  v187 = v255 + 4;
                  *(_DWORD *)(v294 + 4) = v255 + 4;
                v305 = 0;
            v262 = (_DWORD *)v184;
              v263 = *(_DWORD *)(v7 + 12);
              v19 = __OFSUB__(v263, v192);
              v17 = v263 == v192;
              v18 = v263 - v192 < 0;
              v262 = (_DWORD *)v184;
                v264 = *(_DWORD *)(v7 + 16);
                v19 = __OFSUB__(v264, v186);
                v18 = v264 - v186 < 0;
                v262 = (_DWORD *)v184;
                  v262 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + v188 - 12) + 4 * v285);
            if ( (unsigned int)(*v262 - 1) >= 4 )
              v275 = v7;
              v301 = v318;
              v302 = v319;
              v303 = v320;
              v276 = *(_DWORD *)v295;
              v299 = j_RotationUtil::getRotated((RotationUtil *)(unsigned __int16)v450, 2, v187);
                (TemplateStructurePiece **)&v300,
                v276,
                (int)&v301,
                &v299);
              v277 = *(_QWORD *)(v294 + 4);
              if ( (_DWORD)v277 == HIDWORD(v277) )
                  &v300);
                v7 = v275;
                if ( v300 )
                  (*(void (**)(void))(*(_DWORD *)v300 + 4))();
                v278 = v300;
                v300 = 0;
                *(_DWORD *)v277 = v278;
                LOBYTE(v187) = v277 + 4;
                *(_DWORD *)(v294 + 4) = v277 + 4;
              v300 = 0;
              v265 = (_DWORD *)v184;
                v265 = (_DWORD *)v184;
                if ( v186 >= 1 )
                  v266 = *(_DWORD *)(v7 + 12);
                  v19 = __OFSUB__(v266, v192);
                  v18 = v266 - v192 < 0;
                  v265 = (_DWORD *)v184;
                    v267 = *(_DWORD *)(v7 + 16);
                    v19 = __OFSUB__(v267, v186);
                    v18 = v267 - v186 < 0;
                    v265 = (_DWORD *)v184;
                    if ( !(v18 ^ v19) )
                      v265 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + v188 - 24) + 4 * v285);
              if ( (unsigned int)(*v265 - 1) <= 3 )
                v268 = v190;
                v269 = v7;
                v270 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v450, 3, v187);
                j_BlockPos::relative((BlockPos *)&v298, (int)&v318, (int)v270, 1);
                v271 = *(_DWORD *)v295;
                v296 = j_RotationUtil::getRotated((RotationUtil *)(unsigned __int16)v450, 2, v272);
                  (TemplateStructurePiece **)&v297,
                  v271,
                  (int)&v298,
                  &v296);
                v273 = *(_QWORD *)(v294 + 4);
                if ( (_DWORD)v273 == HIDWORD(v273) )
                    &v297);
                  v7 = v269;
                  v190 = v268;
                  if ( v297 )
                    (*(void (**)(void))(*(_DWORD *)v297 + 4))();
                  v274 = v297;
                  v297 = 0;
                  *(_DWORD *)v273 = v274;
                  LOBYTE(v187) = v273 + 4;
                  *(_DWORD *)(v294 + 4) = v273 + 4;
                v297 = 0;
        v183 = *(_DWORD *)(v7 + 12);
        v189 += 8;
        v188 += 12;
      while ( v190 < v183 );
      result = *(_DWORD *)(v7 + 16);
LABEL_276:
      v186 = v292;
    while ( v292 < result );
  return result;
}


void __fastcall WoodlandMansionPieces::FirstFloorRoomCollection::get1x1Secret(WoodlandMansionPieces::FirstFloorRoomCollection *this, Random *a2, Random *a3)
{
  WoodlandMansionPieces::FirstFloorRoomCollection *v3; // r4@1
  char v4; // r0@1
  const void **v5; // r0@1
  void *v6; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  v4 = j_Random::_genRandInt32(a3);
  j_Util::toString<int,(void *)0,(void *)0>((void **)&v9, (v4 & 3) + 1);
  v5 = sub_21E82D8((const void **)&v9, 0, (unsigned int)"1x1_as", (_BYTE *)6);
  *(_DWORD *)v3 = *v5;
  *v5 = &unk_28898CC;
  v6 = (void *)(v9 - 12);
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
      j_j_j_j__ZdlPv_9(v6);
  }
}


void __fastcall WoodlandMansionPieces::WoodlandMansionPiece::~WoodlandMansionPiece(WoodlandMansionPieces::WoodlandMansionPiece *this)
{
  WoodlandMansionPieces::WoodlandMansionPiece *v1; // r4@1
  void *v2; // r0@1
  void *v3; // r0@3
  int v4; // r1@5
  void *v5; // r0@5
  unsigned int *v6; // r12@7
  signed int v7; // r1@9

  v1 = this;
  *(_DWORD *)this = &off_2724740;
  v2 = (void *)*((_DWORD *)this + 37);
  if ( v2 )
    j_operator delete(v2);
  v3 = (void *)*((_DWORD *)v1 + 34);
  if ( v3 )
    j_operator delete(v3);
  v4 = *((_DWORD *)v1 + 28);
  v5 = (void *)(v4 - 12);
  if ( (int *)(v4 - 12) != &dword_28898C0 )
  {
    v6 = (unsigned int *)(v4 - 4);
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
      j_j_j_j__ZdlPv_9(v5);
  }
  j_operator delete((void *)v1);
}


WoodlandMansionPieces::MansionGrid *__fastcall WoodlandMansionPieces::MansionGrid::MansionGrid(WoodlandMansionPieces::MansionGrid *this, Random *a2)
{
  WoodlandMansionPieces::MansionGrid *v2; // r11@1
  char *v3; // r8@1
  WoodlandMansionPieces::SimpleGrid *v4; // r6@1
  WoodlandMansionPieces::SimpleGrid *v5; // r7@1
  void **v6; // r4@2
  void **v7; // r6@2
  __int64 v8; // r0@10
  int v9; // r7@10
  int v10; // r2@11
  int v11; // r4@11
  signed int v12; // r5@12
  bool v13; // zf@12
  bool v14; // nf@12
  unsigned __int8 v15; // vf@12
  int v16; // r4@13
  __int64 v17; // r0@19
  int v18; // r7@19
  int v19; // r5@20
  bool v20; // nf@20
  unsigned __int8 v21; // vf@20
  int v22; // r7@23
  bool v23; // zf@23
  bool v24; // nf@23
  unsigned __int8 v25; // vf@23
  int v26; // r7@24
  int v27; // r0@28
  int v28; // r3@28
  int v29; // r2@28
  int v30; // r1@28
  int v31; // r3@28
  int v32; // r5@29
  int v33; // r4@31
  bool v34; // zf@31
  bool v35; // nf@31
  unsigned __int8 v36; // vf@31
  int v37; // r4@32
  bool v38; // zf@35
  bool v39; // nf@35
  unsigned __int8 v40; // vf@35
  int v41; // r7@36
  __int64 v42; // kr10_8@41
  int v43; // r2@41
  bool v44; // nf@41
  unsigned __int8 v45; // vf@41
  int v46; // r7@44
  bool v47; // zf@44
  bool v48; // nf@44
  unsigned __int8 v49; // vf@44
  int v50; // r7@45
  __int64 v51; // r0@53
  int v52; // r2@53
  int v53; // r7@55
  bool v54; // zf@55
  bool v55; // nf@55
  unsigned __int8 v56; // vf@55
  int v57; // r7@56
  int v58; // r1@59
  int v59; // r2@61
  int v60; // r0@61
  bool v61; // zf@61
  bool v62; // nf@61
  unsigned __int8 v63; // vf@61
  int v64; // r2@62
  signed int v65; // r0@65
  signed int v66; // r1@66
  int v67; // r2@67
  bool v68; // nf@67
  unsigned __int8 v69; // vf@67
  int v70; // r2@68
  int v71; // r1@72
  int v72; // r2@73
  bool v73; // zf@73
  bool v74; // nf@73
  unsigned __int8 v75; // vf@73
  int v76; // r2@74
  int i; // r0@77
  int v78; // r2@80
  signed int j; // r3@80
  signed int k; // r0@88
  int v81; // r2@91
  signed int l; // r3@91
  WoodlandMansionPieces::MansionGrid *v83; // r0@99
  WoodlandMansionPieces::SimpleGrid *v84; // r6@101
  __int64 v85; // r0@101
  void ***v86; // r6@103
  void **v87; // r4@104
  void **v88; // r7@104
  WoodlandMansionPieces::SimpleGrid *v89; // r6@112
  __int64 v90; // r0@112
  void ***v91; // r6@114
  void **v92; // r4@115
  void **v93; // r7@115
  WoodlandMansionPieces::SimpleGrid *v94; // r6@123
  __int64 v95; // r0@123
  void ***v96; // r6@125
  void **v97; // r4@126
  void **v98; // r7@126
  int v99; // r0@134
  int v100; // r1@134 OVERLAPPED
  int v101; // r2@134 OVERLAPPED
  int v102; // r5@134
  int v103; // r3@134
  int v104; // r7@134
  int v105; // r4@135
  bool v106; // nf@135
  unsigned __int8 v107; // vf@135
  int v108; // r5@138
  bool v109; // zf@138
  bool v110; // nf@138
  unsigned __int8 v111; // vf@138
  int v112; // r5@139
  int v113; // r1@143 OVERLAPPED
  int v114; // r2@143 OVERLAPPED
  int v115; // r0@143
  int v116; // r6@143
  int v117; // r3@143
  int v118; // r5@144
  bool v119; // nf@144
  unsigned __int8 v120; // vf@144
  int v121; // r6@147
  bool v122; // zf@147
  bool v123; // nf@147
  unsigned __int8 v124; // vf@147
  int v125; // r6@148
  WoodlandMansionPieces::SimpleGrid *v126; // r4@152
  WoodlandMansionPieces::SimpleGrid *v127; // r7@152
  void ***v128; // r6@152
  void **v129; // r4@153
  void **v130; // r7@153
  unsigned __int64 *v132; // [sp+10h] [bp-30h]@123
  unsigned __int64 *v133; // [sp+14h] [bp-2Ch]@112
  unsigned __int64 *v134; // [sp+18h] [bp-28h]@101

  v2 = this;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v3 = (char *)this + 8;
  *((_DWORD *)this + 7) = a2;
  *((_DWORD *)this + 5) = 7;
  *((_DWORD *)this + 6) = 4;
  v4 = (WoodlandMansionPieces::SimpleGrid *)j_operator new(0x18u);
  j_WoodlandMansionPieces::SimpleGrid::SimpleGrid(v4, 11, 11, 5);
  v5 = *(WoodlandMansionPieces::SimpleGrid **)v2;
  *(_DWORD *)v2 = v4;
  if ( v5 )
  {
    v6 = (void **)(*(_QWORD *)v5 >> 32);
    v7 = (void **)*(_QWORD *)v5;
    if ( v7 != v6 )
    {
      do
      {
        if ( *v7 )
          j_operator delete(*v7);
        v7 += 3;
      }
      while ( v6 != v7 );
      v7 = *(void ***)v5;
    }
    if ( v7 )
      j_operator delete(v7);
    j_operator delete((void *)v5);
    v4 = *(WoodlandMansionPieces::SimpleGrid **)v2;
  }
  v8 = *(_QWORD *)((char *)v2 + 20);
  v9 = *(_QWORD *)((char *)v2 + 20) >> 32;
  do
    v10 = 12 * v8;
    v11 = v8;
    if ( v9 >= 0 )
        v12 = v11;
        v15 = 0;
        v13 = v11 == 0;
        v14 = v11 < 0;
        if ( v11 >= 0 )
        {
          v16 = *((_DWORD *)v4 + 3);
          v15 = __OFSUB__(v16, v12);
          v13 = v16 == v12;
          v14 = v16 - v12 < 0;
        }
        if ( !((unsigned __int8)(v14 ^ v15) | v13) && *((_DWORD *)v4 + 4) > v9 )
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v4 + v10) + 4 * v9) = 3;
        v10 += 12;
        v11 = v12 + 1;
      while ( v12 <= (signed int)v8 );
    v15 = __OFSUB__(v9, HIDWORD(v8));
    v13 = v9 == HIDWORD(v8);
    v14 = v9++ - HIDWORD(v8) < 0;
  while ( (unsigned __int8)(v14 ^ v15) | v13 );
  v17 = *(_QWORD *)((char *)v2 + 20);
  v18 = *(_QWORD *)((char *)v2 + 20) >> 32;
    v19 = v18;
    v21 = 0;
    v20 = v18 < 0;
    if ( v18 >= 0 )
      v21 = __OFSUB__((_DWORD)v17, 1);
      v20 = (signed int)v17 - 1 < 0;
    if ( !(v20 ^ v21) )
      v22 = *((_DWORD *)v4 + 3);
      v25 = __OFSUB__(v22, (_DWORD)v17);
      v23 = v22 == (_DWORD)v17;
      v24 = v22 - (signed int)v17 < 0;
      if ( v22 >= (signed int)v17 )
        v26 = *((_DWORD *)v4 + 4);
        v25 = __OFSUB__(v26, v19);
        v23 = v26 == v19;
        v24 = v26 - v19 < 0;
      if ( !((unsigned __int8)(v24 ^ v25) | v23) )
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v4 + 12 * (v17 - 1)) + 4 * v19) = 2;
    v18 = v19 + 1;
  while ( v19 <= SHIDWORD(v17) );
  v27 = *(_QWORD *)((char *)v2 + 20) >> 32;
  v28 = *(_QWORD *)((char *)v2 + 20);
  v29 = v27 + 3;
  v30 = v28 + 3;
  v31 = v28 + 2;
    v32 = v27 - 2;
    if ( v27 - 2 >= 0 )
      if ( v31 >= 0 )
        v33 = *((_DWORD *)v4 + 3);
        v36 = __OFSUB__(v33, v31);
        v34 = v33 == v31;
        v35 = v33 - v31 < 0;
        if ( v33 > v31 )
          v37 = *((_DWORD *)v4 + 4);
          v36 = __OFSUB__(v37, v32);
          v34 = v37 == v32;
          v35 = v37 - v32 < 0;
        if ( !((unsigned __int8)(v35 ^ v36) | v34) )
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v4 + 12 * v31) + 4 * v27 - 8) = 5;
      v40 = __OFSUB__(v30, -1);
      v38 = v30 == -1;
      v39 = v30 + 1 < 0;
      if ( v30 > -1 )
        v41 = *((_DWORD *)v4 + 3);
        v40 = __OFSUB__(v41, v30);
        v38 = v41 == v30;
        v39 = v41 - v30 < 0;
      if ( !((unsigned __int8)(v39 ^ v40) | v38) && *((_DWORD *)v4 + 4) > v32 )
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v4 + 12 * v30) + 4 * v27 - 8) = 5;
    ++v27;
  while ( v32 < v29 );
  v42 = *(_QWORD *)((char *)v2 + 20);
  v43 = HIDWORD(v42) - 2;
  v45 = 0;
  v44 = HIDWORD(v42) - 2 < 0;
  if ( HIDWORD(v42) - 2 >= 0 )
    v45 = __OFSUB__((_DWORD)v42, -1);
    v44 = (signed int)v42 + 1 < 0;
  if ( !(v44 ^ v45) )
    v46 = *((_DWORD *)v4 + 3);
    v49 = __OFSUB__(v46, v42 + 1);
    v47 = v46 == (_DWORD)v42 + 1;
    v48 = v46 - ((signed int)v42 + 1) < 0;
    if ( v46 > (signed int)v42 + 1 )
      v50 = *((_DWORD *)v4 + 4);
      v49 = __OFSUB__(v50, v43);
      v47 = v50 == v43;
      v48 = v50 - v43 < 0;
    if ( !((unsigned __int8)(v48 ^ v49) | v47) )
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v4 + 12 * (v42 + 1)) + 4 * v43) = 1;
  if ( v42 > 0
    && (signed int)v42 >= -1
    && *((_DWORD *)v4 + 3) > (signed int)v42 + 1
    && *((_DWORD *)v4 + 4) >= SHIDWORD(v42) )
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v4 + 12 * v42) + 4 * (HIDWORD(v42) - 1)) = 1;
  v51 = *(_QWORD *)((char *)v2 + 20);
  v52 = HIDWORD(v51) + 2;
  if ( HIDWORD(v51) + 2 > -1 && (signed int)v51 >= -1 )
    v53 = *((_DWORD *)v4 + 3);
    v56 = __OFSUB__(v53, v51 + 1);
    v54 = v53 == (_DWORD)v51 + 1;
    v55 = v53 - ((signed int)v51 + 1) < 0;
    if ( v53 > (signed int)v51 + 1 )
      v57 = *((_DWORD *)v4 + 4);
      v56 = __OFSUB__(v57, v52);
      v54 = v57 == v52;
      v55 = v57 - v52 < 0;
    if ( !((unsigned __int8)(v55 ^ v56) | v54) )
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v4 + 12 * (v51 + 1)) + 4 * v52) = 1;
  v58 = HIDWORD(v51) + 3;
  if ( v58 > -1 && (signed int)v51 >= -1 )
    v59 = *((_DWORD *)v4 + 3);
    v60 = v51 + 1;
    v63 = __OFSUB__(v59, v60);
    v61 = v59 == v60;
    v62 = v59 - v60 < 0;
    if ( v59 > v60 )
      v64 = *((_DWORD *)v4 + 4);
      v63 = __OFSUB__(v64, v58);
      v61 = v64 == v58;
      v62 = v64 - v58 < 0;
    if ( !((unsigned __int8)(v62 ^ v63) | v61) )
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v4 + 12 * v60) + 4 * v58) = 1;
  v65 = *((_DWORD *)v2 + 5);
  if ( v65 > 0 )
    v66 = *((_DWORD *)v2 + 6);
    if ( v66 >= 1 )
      v67 = *((_DWORD *)v4 + 3);
      v69 = __OFSUB__(v67, v65);
      v68 = v67 - v65 < 0;
      if ( v67 >= v65 )
        v70 = *((_DWORD *)v4 + 4);
        v69 = __OFSUB__(v70, v66);
        v68 = v70 - v66 < 0;
      if ( !(v68 ^ v69) )
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v4 + 12 * (v65 - 1)) + 4 * (v66 - 1)) = 1;
        v65 = *((_DWORD *)v2 + 5);
        if ( v65 < 1 )
          goto LABEL_77;
        v66 = *((_DWORD *)v2 + 6);
    v71 = v66 + 2;
    if ( v71 >= 0 )
      v72 = *((_DWORD *)v4 + 3);
      v75 = __OFSUB__(v72, v65);
      v73 = v72 == v65;
      v74 = v72 - v65 < 0;
      if ( v72 >= v65 )
        v76 = *((_DWORD *)v4 + 4);
        v75 = __OFSUB__(v76, v71);
        v73 = v76 == v71;
        v74 = v76 - v71 < 0;
      if ( !((unsigned __int8)(v74 ^ v75) | v73) )
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v4 + 12 * (v65 - 1)) + 4 * v71) = 1;
LABEL_77:
  for ( i = 0; ; ++i )
    if ( i >= 0 )
      v78 = 0;
      for ( j = 0; ; ++j )
        if ( j >= 0 )
          if ( *((_DWORD *)v4 + 3) > j && *((_DWORD *)v4 + 4) > i )
            *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v4 + v78) + 4 * i) = 5;
          if ( j > 10 )
            break;
        v78 += 12;
      if ( i > 0 )
        break;
  for ( k = 9; ; ++k )
    if ( k >= 0 )
      v81 = 0;
      for ( l = 0; ; ++l )
        if ( l >= 0 )
          if ( *((_DWORD *)v4 + 3) > l && *((_DWORD *)v4 + 4) > k )
            *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v4 + v81) + 4 * k) = 5;
          if ( l > 10 )
        v81 += 12;
      if ( k > 10 )
  j_WoodlandMansionPieces::MansionGrid::_recursiveCorridor(
    v2,
    v4,
    *(_QWORD *)((char *)v2 + 20),
    (*(_QWORD *)((char *)v2 + 20) >> 32) - 2,
    4,
    6);
    *(WoodlandMansionPieces::SimpleGrid **)v2,
    (*(_QWORD *)((char *)v2 + 20) >> 32) + 3,
    *(_QWORD *)((char *)v2 + 20) - 2,
    (*(_QWORD *)((char *)v2 + 20) >> 32) - 1,
    3);
  v83 = (WoodlandMansionPieces::MansionGrid *)j_WoodlandMansionPieces::MansionGrid::_recursiveCorridor(
                                                v2,
                                                *(WoodlandMansionPieces::SimpleGrid **)v2,
                                                *(_QWORD *)((char *)v2 + 20) - 2,
                                                (*(_QWORD *)((char *)v2 + 20) >> 32) + 2,
                                                4,
                                                3);
    v83 = (WoodlandMansionPieces::MansionGrid *)j_WoodlandMansionPieces::MansionGrid::_cleanEdges(
                                                  v83,
                                                  *(WoodlandMansionPieces::SimpleGrid **)v2);
  while ( v83 );
  v84 = (WoodlandMansionPieces::SimpleGrid *)j_operator new(0x18u);
  j_WoodlandMansionPieces::SimpleGrid::SimpleGrid(v84, 11, 11, 5);
  v134 = (unsigned __int64 *)v84;
  v85 = *(_QWORD *)((char *)v2 + 12);
  if ( (_DWORD)v85 == HIDWORD(v85) )
    j_std::vector<std::unique_ptr<WoodlandMansionPieces::SimpleGrid,std::default_delete<WoodlandMansionPieces::SimpleGrid>>,std::allocator<std::unique_ptr<WoodlandMansionPieces::SimpleGrid,std::default_delete<WoodlandMansionPieces::SimpleGrid>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::SimpleGrid,std::default_delete<WoodlandMansionPieces::SimpleGrid>>>(
      v3,
      (int *)&v134);
    v86 = (void ***)v134;
    if ( v134 )
      v87 = (void **)(*v134 >> 32);
      v88 = (void **)*v134;
      if ( v88 != v87 )
        do
          if ( *v88 )
            j_operator delete(*v88);
          v88 += 3;
        while ( v87 != v88 );
        v88 = *v86;
      if ( v88 )
        j_operator delete(v88);
      j_operator delete(v86);
  else
    v134 = 0;
    *(_DWORD *)v85 = v84;
    *((_DWORD *)v2 + 3) = v85 + 4;
  v134 = 0;
  v89 = (WoodlandMansionPieces::SimpleGrid *)j_operator new(0x18u);
  j_WoodlandMansionPieces::SimpleGrid::SimpleGrid(v89, 11, 11, 5);
  v133 = (unsigned __int64 *)v89;
  v90 = *(_QWORD *)((char *)v2 + 12);
  if ( (_DWORD)v90 == HIDWORD(v90) )
      (int *)&v133);
    v91 = (void ***)v133;
    if ( v133 )
      v92 = (void **)(*v133 >> 32);
      v93 = (void **)*v133;
      if ( v93 != v92 )
          if ( *v93 )
            j_operator delete(*v93);
          v93 += 3;
        while ( v92 != v93 );
        v93 = *v91;
      if ( v93 )
        j_operator delete(v93);
      j_operator delete(v91);
    v133 = 0;
    *(_DWORD *)v90 = v89;
    *((_DWORD *)v2 + 3) = v90 + 4;
  v133 = 0;
  v94 = (WoodlandMansionPieces::SimpleGrid *)j_operator new(0x18u);
  j_WoodlandMansionPieces::SimpleGrid::SimpleGrid(v94, 11, 11, 5);
  v132 = (unsigned __int64 *)v94;
  v95 = *(_QWORD *)((char *)v2 + 12);
  if ( (_DWORD)v95 == HIDWORD(v95) )
      (int *)&v132);
    v96 = (void ***)v132;
    if ( v132 )
      v97 = (void **)(*v132 >> 32);
      v98 = (void **)*v132;
      if ( v98 != v97 )
          if ( *v98 )
            j_operator delete(*v98);
          v98 += 3;
        while ( v97 != v98 );
        v98 = *v96;
      if ( v98 )
        j_operator delete(v98);
      j_operator delete(v96);
    v132 = 0;
    *(_DWORD *)v95 = v94;
    *((_DWORD *)v2 + 3) = v95 + 4;
  v132 = 0;
  j_WoodlandMansionPieces::MansionGrid::_identifyRooms(
    **((WoodlandMansionPieces::SimpleGrid ***)v2 + 2));
    *(WoodlandMansionPieces::SimpleGrid **)(*((_DWORD *)v2 + 2) + 4));
  v99 = *((_DWORD *)v2 + 2);
  *(_QWORD *)&v100 = *(_QWORD *)((char *)v2 + 20);
  v102 = *(_QWORD *)((char *)v2 + 20) >> 32;
  v103 = *(_DWORD *)v99;
  v104 = v100 + 1;
    v105 = v102;
    v107 = 0;
    v106 = v102 < 0;
    if ( v102 >= 0 )
      v107 = __OFSUB__(v100, -1);
      v106 = v100 + 1 < 0;
    if ( !(v106 ^ v107) )
      v108 = *(_DWORD *)(v103 + 12);
      v111 = __OFSUB__(v108, v104);
      v109 = v108 == v104;
      v110 = v108 - v104 < 0;
      if ( v108 > v104 )
        v112 = *(_DWORD *)(v103 + 16);
        v111 = __OFSUB__(v112, v105);
        v109 = v112 == v105;
        v110 = v112 - v105 < 0;
      if ( !((unsigned __int8)(v110 ^ v111) | v109) )
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v103 + 12 * v104) + 4 * v105) = 0x800000;
    v102 = v105 + 1;
  while ( v105 <= v101 );
  *(_QWORD *)&v113 = *(_QWORD *)((char *)v2 + 20);
  v115 = *(_DWORD *)(v99 + 4);
  v116 = *(_QWORD *)((char *)v2 + 20) >> 32;
  v117 = v113 + 1;
    v118 = v116;
    v120 = 0;
    v119 = v116 < 0;
    if ( v116 >= 0 )
      v120 = __OFSUB__(v113, -1);
      v119 = v113 + 1 < 0;
    if ( !(v119 ^ v120) )
      v121 = *(_DWORD *)(v115 + 12);
      v124 = __OFSUB__(v121, v117);
      v122 = v121 == v117;
      v123 = v121 - v117 < 0;
      if ( v121 > v117 )
        v125 = *(_DWORD *)(v115 + 16);
        v124 = __OFSUB__(v125, v118);
        v122 = v125 == v118;
        v123 = v125 - v118 < 0;
      if ( !((unsigned __int8)(v123 ^ v124) | v122) )
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v115 + 12 * v117) + 4 * v118) = 0x800000;
    v116 = v118 + 1;
  while ( v118 <= v114 );
  v126 = *(WoodlandMansionPieces::SimpleGrid **)v2;
  v127 = (WoodlandMansionPieces::SimpleGrid *)j_operator new(0x18u);
  j_WoodlandMansionPieces::SimpleGrid::SimpleGrid(
    v127,
    *(_QWORD *)((char *)v126 + 12),
    *(_QWORD *)((char *)v126 + 12) >> 32,
    5);
  v128 = (void ***)*((_DWORD *)v2 + 1);
  *((_DWORD *)v2 + 1) = v127;
  if ( v128 )
    v129 = (void **)(*(_QWORD *)v128 >> 32);
    v130 = (void **)*(_QWORD *)v128;
    if ( v130 != v129 )
        if ( *v130 )
          j_operator delete(*v130);
        v130 += 3;
      while ( v129 != v130 );
      v130 = *v128;
    if ( v130 )
      j_operator delete(v130);
    j_operator delete(v128);
  j_WoodlandMansionPieces::MansionGrid::_setupThirdFloor(v2);
    (WoodlandMansionPieces::SimpleGrid *)*(_QWORD *)((char *)v2 + 4),
    *(WoodlandMansionPieces::SimpleGrid **)((*(_QWORD *)((char *)v2 + 4) >> 32) + 8));
  return v2;
}


void __fastcall WoodlandMansionPieces::FirstFloorRoomCollection::get2x2(WoodlandMansionPieces::FirstFloorRoomCollection *this, Random *a2, Random *a3)
{
  WoodlandMansionPieces::FirstFloorRoomCollection::get2x2(this, a2, a3);
}


int __fastcall WoodlandMansionPieces::SimpleGrid::set(int result, int a2, int a3, int a4, int a5, int a6)
{
  bool v6; // zf@1
  bool v7; // nf@1
  unsigned __int8 v8; // vf@1
  int v9; // r5@5
  int v10; // r7@5
  int v11; // r6@6
  bool v12; // zf@6
  bool v13; // nf@6
  unsigned __int8 v14; // vf@6
  int v15; // r7@7

  v8 = __OFSUB__(a3, a5);
  v6 = a3 == a5;
  v7 = a3 - a5 < 0;
  if ( a3 <= a5 )
  {
    v8 = __OFSUB__(a2, a4);
    v6 = a2 == a4;
    v7 = a2 - a4 < 0;
  }
  if ( (unsigned __int8)(v7 ^ v8) | v6 )
    do
    {
      v9 = 12 * a2;
      v10 = a2;
      if ( a3 >= 0 )
      {
        do
        {
          v11 = v10;
          v14 = 0;
          v12 = v10 == 0;
          v13 = v10 < 0;
          if ( v10 >= 0 )
          {
            v15 = *(_DWORD *)(result + 12);
            v14 = __OFSUB__(v15, v11);
            v12 = v15 == v11;
            v13 = v15 - v11 < 0;
          }
          if ( !((unsigned __int8)(v13 ^ v14) | v12) && *(_DWORD *)(result + 16) > a3 )
            *(_DWORD *)(*(_DWORD *)(*(_DWORD *)result + v9) + 4 * a3) = a6;
          v9 += 12;
          v10 = v11 + 1;
        }
        while ( v11 < a4 );
      }
      v8 = __OFSUB__(a3, a5);
      v7 = a3++ - a5 < 0;
    }
    while ( v7 ^ v8 );
  return result;
}


void __fastcall WoodlandMansionPieces::SecondFloorRoomCollection::get1x2SideEntrance(WoodlandMansionPieces::SecondFloorRoomCollection *this, Random *a2, int a3, int a4)
{
  WoodlandMansionPieces::SecondFloorRoomCollection::get1x2SideEntrance(this, a2, a3, a4);
}


signed int __fastcall WoodlandMansionPieces::WoodlandMansionPiece::getType(WoodlandMansionPieces::WoodlandMansionPiece *this)
{
  return 1464618320;
}


void __fastcall WoodlandMansionPieces::MansionPiecePlacer::createMansion(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, void *a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63)
{
  int v63; // r11@1
  int v64; // r9@1
  int v65; // r8@1
  __int64 v66; // r6@1
  __int64 v67; // r4@1
  __int64 v68; // r2@1
  __int64 v69; // r2@1
  int v70; // r4@2
  int v71; // r10@3
  char v72; // r9@3
  int v73; // r0@5
  int v74; // r1@6
  int v75; // r2@7
  _DWORD *v76; // r1@7
  int v77; // r1@8
  Facing *v78; // r0@11
  signed __int8 v79; // r2@11
  Facing *v80; // r0@11
  __int64 v81; // r2@11
  int v82; // r5@13
  int v83; // r1@13
  int v84; // r2@13
  int v85; // r6@13
  int v86; // r11@13
  int v87; // r1@13
  int v88; // r2@13
  int v89; // r4@13
  _DWORD *v90; // r0@13
  int v91; // r1@13
  _DWORD *v92; // r0@15
  int v93; // r1@15
  _DWORD *v94; // r0@17
  int v95; // r1@17
  int v96; // r10@19
  const char *v97; // r6@19
  const char *v98; // r9@19
  const char *v99; // r3@19
  const char *v100; // lr@19
  const char *v101; // r8@19
  const char *v102; // r4@19
  int v103; // r1@20
  int v104; // r2@20
  int v105; // r0@20
  int v106; // r0@22
  int v107; // r0@24
  int v108; // r0@26
  int v109; // r5@28
  signed int v110; // r1@30
  signed int v111; // r0@31
  int v112; // r9@31
  signed int v113; // r6@31
  signed int v114; // r10@33
  _DWORD *v115; // r1@34
  int v116; // r1@35
  Facing *v117; // r0@38
  signed __int8 v118; // r2@38
  Facing *v119; // r0@38
  __int64 v120; // r0@38
  _DWORD *v121; // r0@43
  int v122; // r0@44
  int v123; // r0@45
  int v124; // r0@48
  int v125; // r0@49
  int v126; // r0@50
  int v127; // r4@53
  Facing *v128; // r0@53
  __int64 v129; // r0@53
  int v130; // r0@58
  _DWORD *v131; // r0@58
  int v132; // r0@59
  int v133; // r0@62
  int v134; // r0@62
  int v135; // r0@63
  int v136; // r4@66
  int v137; // r5@66
  Facing *v138; // r0@66
  signed __int8 v139; // r2@66
  Facing *v140; // r0@66
  __int64 v141; // r0@66
  int v142; // r0@71
  _DWORD *v143; // r0@71
  int v144; // r0@72
  int v145; // r0@75
  int v146; // r0@75
  int v147; // r0@76
  int v148; // r4@79
  int v149; // r5@79
  Facing *v150; // r0@79
  signed __int8 v151; // r2@79
  Facing *v152; // r0@79
  __int64 v153; // r0@79
  int v154; // r0@84
  _DWORD *v155; // r1@84
  int v156; // r1@85
  int v157; // r1@86
  int v158; // r1@89
  int v159; // r1@90
  int v160; // r1@91
  int v161; // r4@94
  int v162; // r5@94
  Facing *v163; // r0@94
  signed __int8 v164; // r2@94
  Facing *v165; // r0@94
  __int64 v166; // r0@94
  int v167; // r10@104
  const char *v168; // r0@104
  signed int v169; // r2@106
  const char *v170; // r0@106
  int v171; // r3@109
  int v172; // r4@109
  signed int v173; // r6@109
  int v174; // lr@109
  int v175; // r8@109
  char *v176; // r0@109
  signed int v177; // r11@111
  __int64 v178; // r0@113
  int v179; // r1@120
  int v180; // r1@121
  int v181; // r0@126
  char *v182; // r12@126
  int *v183; // r0@126
  int v184; // r0@127
  char *v185; // r10@130
  int i; // lr@130
  unsigned __int64 v187; // r6@132
  int v188; // r0@133
  signed int v189; // r1@133
  _DWORD *v190; // r3@133
  int v191; // r1@141
  int v192; // r3@143
  int v193; // r3@144
  int v194; // r8@149
  int v195; // r9@149
  unsigned int v196; // r1@150
  unsigned int v197; // r5@152
  char *v198; // r10@155
  char *v199; // r4@155
  int v200; // r10@157
  char *v201; // r8@158
  unsigned int v202; // r1@167
  signed int v203; // r0@168
  char *v204; // r9@171
  Facing *v205; // r0@173
  signed __int8 v206; // r2@173
  Facing *v207; // r0@173
  signed int v208; // r6@173
  _DWORD *v209; // r1@173
  int v210; // r3@173
  signed int v211; // r12@173
  int v212; // r0@173
  int v213; // r1@174
  int v214; // r1@175
  int v215; // r5@177
  int v216; // r1@178
  bool v217; // zf@179
  bool v218; // nf@179
  unsigned __int8 v219; // vf@179
  _WORD *v220; // r0@182
  int v221; // r5@185
  int v222; // r4@185
  int *v223; // r2@185
  __int64 v224; // kr00_8@187
  int v225; // r1@188
  unsigned int v226; // r8@192
  int v227; // r0@192
  _DWORD *v228; // r0@192
  int v229; // r0@193
  signed int v230; // r0@195
  int v231; // r5@198
  signed int v232; // r9@198
  int v233; // r4@198
  Facing *v234; // r0@198
  int *v235; // r2@198
  __int64 v236; // kr08_8@200
  int v237; // r1@201
  int v238; // r0@205
  _DWORD *v239; // r0@205
  int v240; // r0@206
  int v241; // r0@209
  _WORD *v242; // r0@211
  signed int v243; // r10@214
  int v244; // r9@214
  int v245; // r5@214
  Facing *v246; // r0@214
  signed __int8 v247; // r2@214
  Facing *v248; // r0@214
  int v249; // r4@214
  Rotation v250; // r2@214
  int *v251; // r2@214
  __int64 v252; // kr10_8@216
  int v253; // r1@217
  _DWORD *v254; // r0@221
  int v255; // r0@222
  int v256; // r0@223
  signed int v257; // r10@225
  signed int v258; // r9@225
  signed int v259; // r0@225
  Facing *v260; // r0@228
  signed __int8 v261; // r2@228
  Facing *v262; // r0@228
  int v263; // r4@228
  Rotation v264; // r2@228
  int *v265; // r2@228
  __int64 v266; // kr18_8@230
  int v267; // r1@231
  int v268; // r0@235
  _BYTE *v269; // r0@239
  _BYTE *v270; // r2@239
  int v271; // r8@240
  int v272; // r12@240
  int v273; // r1@241
  signed int v274; // r6@241
  signed int v275; // r5@241
  _WORD *v276; // r4@241
  int v277; // r5@249
  int v278; // r6@250
  int v279; // r4@251
  int v280; // r4@252
  bool v281; // zf@258
  signed int v282; // r0@261
  signed int v283; // r3@264
  signed int v284; // r6@264
  int v285; // r1@264
  int v286; // r2@272
  bool v287; // nf@272
  int v288; // r6@275
  bool v289; // zf@275
  bool v290; // nf@275
  unsigned __int8 v291; // vf@275
  int v292; // r6@276
  _WORD *v293; // r1@278
  __int64 v294; // r4@291
  char *v295; // r0@298
  char *v296; // r0@299
  char *v297; // r0@300
  unsigned int *v298; // r2@302
  signed int v299; // r1@304
  unsigned int *v300; // r2@306
  signed int v301; // r1@308
  unsigned int *v302; // r2@310
  signed int v303; // r1@312
  int v304; // [sp+10h] [bp-220h]@1
  int v305; // [sp+14h] [bp-21Ch]@0
  int v306; // [sp+18h] [bp-218h]@111
  int v307; // [sp+1Ch] [bp-214h]@109
  _BYTE *v308; // [sp+20h] [bp-210h]@19
  int v309; // [sp+24h] [bp-20Ch]@110
  unsigned __int64 *v310; // [sp+28h] [bp-208h]@19
  int v311; // [sp+2Ch] [bp-204h]@126
  int v312; // [sp+2Ch] [bp-204h]@225
  int v313; // [sp+30h] [bp-200h]@110
  int v314; // [sp+34h] [bp-1FCh]@109
  int v315; // [sp+38h] [bp-1F8h]@110
  int v316; // [sp+3Ch] [bp-1F4h]@109
  int v317; // [sp+40h] [bp-1F0h]@170
  int v318; // [sp+44h] [bp-1ECh]@33
  int v319; // [sp+44h] [bp-1ECh]@129
  int v320; // [sp+44h] [bp-1ECh]@177
  int v321; // [sp+48h] [bp-1E8h]@1
  int v322; // [sp+4Ch] [bp-1E4h]@33
  int v323; // [sp+4Ch] [bp-1E4h]@112
  int v324; // [sp+50h] [bp-1E0h]@58
  int v325; // [sp+50h] [bp-1E0h]@129
  int v326; // [sp+50h] [bp-1E0h]@192
  char *ptr; // [sp+54h] [bp-1DCh]@110
  int v328; // [sp+58h] [bp-1D8h]@1
  int v329; // [sp+5Ch] [bp-1D4h]@20
  int v330; // [sp+60h] [bp-1D0h]@22
  int v331; // [sp+64h] [bp-1CCh]@17
  int v332; // [sp+68h] [bp-1C8h]@281
  int v333; // [sp+6Ch] [bp-1C4h]@230
  int v334; // [sp+70h] [bp-1C0h]@228
  int v335; // [sp+74h] [bp-1BCh]@228
  int v336; // [sp+78h] [bp-1B8h]@228
  int v337; // [sp+7Ch] [bp-1B4h]@228
  int v338; // [sp+80h] [bp-1B0h]@228
  int v339; // [sp+84h] [bp-1ACh]@228
  int v340; // [sp+88h] [bp-1A8h]@281
  __int16 v341; // [sp+8Ah] [bp-1A6h]@214
  int v342; // [sp+8Ch] [bp-1A4h]@216
  int v343; // [sp+90h] [bp-1A0h]@214
  int v344; // [sp+94h] [bp-19Ch]@214
  int v345; // [sp+98h] [bp-198h]@214
  int v346; // [sp+9Ch] [bp-194h]@214
  int v347; // [sp+A0h] [bp-190h]@214
  int v348; // [sp+A4h] [bp-18Ch]@214
  int v349; // [sp+A8h] [bp-188h]@200
  int v350[3]; // [sp+ACh] [bp-184h]@198
  int v351; // [sp+B8h] [bp-178h]@187
  int v352; // [sp+BCh] [bp-174h]@173
  int v353; // [sp+C0h] [bp-170h]@173
  int v354; // [sp+C4h] [bp-16Ch]@173
  int v355; // [sp+C8h] [bp-168h]@173
  int v356; // [sp+CCh] [bp-164h]@173
  int v357; // [sp+D0h] [bp-160h]@173
  int v358; // [sp+D4h] [bp-15Ch]@108
  int v359; // [sp+D8h] [bp-158h]@106
  int v360[3]; // [sp+DCh] [bp-154h]@94
  int v361[3]; // [sp+E8h] [bp-148h]@94
  int v362; // [sp+F4h] [bp-13Ch]@94
  char v363; // [sp+F8h] [bp-138h]@79
  char v364; // [sp+104h] [bp-12Ch]@79
  int v365; // [sp+110h] [bp-120h]@79
  char v366; // [sp+114h] [bp-11Ch]@66
  int v367; // [sp+118h] [bp-118h]@66
  int v368; // [sp+11Ch] [bp-114h]@66
  char v369; // [sp+120h] [bp-110h]@66
  int v370; // [sp+12Ch] [bp-104h]@66
  int v371; // [sp+130h] [bp-100h]@66
  int v372; // [sp+134h] [bp-FCh]@66
  int v373; // [sp+138h] [bp-F8h]@66
  char v374; // [sp+13Ch] [bp-F4h]@53
  int v375; // [sp+140h] [bp-F0h]@53
  int v376; // [sp+144h] [bp-ECh]@53
  int v377; // [sp+148h] [bp-E8h]@53
  int v378; // [sp+14Ch] [bp-E4h]@53
  int v379; // [sp+150h] [bp-E0h]@53
  int v380; // [sp+154h] [bp-DCh]@53
  int v381; // [sp+158h] [bp-D8h]@38
  int v382; // [sp+15Ch] [bp-D4h]@38
  int v383; // [sp+160h] [bp-D0h]@38
  int v384; // [sp+164h] [bp-CCh]@38
  int v385; // [sp+168h] [bp-C8h]@38
  int v386; // [sp+16Ch] [bp-C4h]@38
  int v387; // [sp+170h] [bp-C0h]@38
  int v388; // [sp+174h] [bp-BCh]@28
  int v389; // [sp+178h] [bp-B8h]@26
  int v390; // [sp+17Ch] [bp-B4h]@24
  int v391; // [sp+180h] [bp-B0h]@20
  int v392; // [sp+184h] [bp-ACh]@22
  int v393; // [sp+188h] [bp-A8h]@22
  int v394; // [sp+18Ch] [bp-A4h]@13
  int v395; // [sp+190h] [bp-A0h]@13
  int v396; // [sp+194h] [bp-9Ch]@13
  int v397; // [sp+198h] [bp-98h]@13
  int v398; // [sp+19Ch] [bp-94h]@13
  int v399; // [sp+1A0h] [bp-90h]@13
  int v400; // [sp+1A4h] [bp-8Ch]@13
  int v401; // [sp+1A8h] [bp-88h]@13
  int v402; // [sp+1ACh] [bp-84h]@13
  int v403; // [sp+1B0h] [bp-80h]@11
  int v404; // [sp+1B4h] [bp-7Ch]@11
  int v405; // [sp+1B8h] [bp-78h]@11
  int v406; // [sp+1BCh] [bp-74h]@11
  int v407; // [sp+1C0h] [bp-70h]@11
  int v408; // [sp+1C4h] [bp-6Ch]@11
  __int16 v409; // [sp+1C8h] [bp-68h]@1
  int v410; // [sp+1CCh] [bp-64h]@1
  int v411; // [sp+1D0h] [bp-60h]@1
  int v412; // [sp+1D4h] [bp-5Ch]@1
  char *v413; // [sp+1D8h] [bp-58h]@1
  __int16 v414; // [sp+1DCh] [bp-54h]@1
  int v415; // [sp+1E0h] [bp-50h]@1
  int v416; // [sp+1E4h] [bp-4Ch]@1
  int v417; // [sp+1E8h] [bp-48h]@1
  char *v418; // [sp+1ECh] [bp-44h]@1
  __int16 v419; // [sp+1F0h] [bp-40h]@1
  int v420; // [sp+1F4h] [bp-3Ch]@1
  int v421; // [sp+1F8h] [bp-38h]@1
  int v422; // [sp+1FCh] [bp-34h]@1
  char *v423; // [sp+200h] [bp-30h]@1
  RotationUtil *v424; // [sp+206h] [bp-2Ah]@1

  v63 = a1;
  v64 = a2;
  LOWORD(v424) = a3;
  v65 = a4;
  v423 = (char *)&unk_28898CC;
  v420 = *(_DWORD *)a2;
  v421 = *(_DWORD *)(a2 + 4);
  v422 = *(_DWORD *)(a2 + 8);
  v419 = a3;
  sub_21E8190((void **)&v423, "wall_flat", (_BYTE *)9);
  v418 = (char *)&unk_28898CC;
  j_WoodlandMansionPieces::MansionPiecePlacer::_entrance((int *)v63, v65, &v419);
  v415 = v420;
  v416 = v421 + 8;
  v417 = v422;
  v414 = v419;
  sub_21E8190((void **)&v418, "wall_window", (_BYTE *)0xB);
  v66 = *(_QWORD *)a5;
  LODWORD(v67) = *(_DWORD *)(a5 + 20) + 1;
  *(_DWORD *)(v63 + 8) = v67;
  HIDWORD(v67) = *(_DWORD *)(a5 + 24);
  *(_DWORD *)(v63 + 12) = HIDWORD(v67) + 1;
  LODWORD(v68) = &v419;
  HIDWORD(v68) = v66;
  j_WoodlandMansionPieces::MansionPiecePlacer::_traverseOuterWalls(
    __PAIR__(v65, v63),
    v68,
    3,
    v67,
    (unsigned __int64)(v67 + 0x100000000LL) >> 32,
    SHIDWORD(v67));
  LODWORD(v69) = &v414;
  HIDWORD(v69) = v66;
    v69,
    *(_QWORD *)(v63 + 8),
    *(_QWORD *)(v63 + 8) >> 32,
  v328 = v66;
  v413 = (char *)&unk_28898CC;
  v410 = v420;
  v411 = v421 + 19;
  v412 = v422;
  v409 = v419;
  sub_21E8190((void **)&v413, "wall_window", (_BYTE *)0xB);
  v321 = v64;
  if ( *(_DWORD *)(HIDWORD(v66) + 16) >= 1 )
  {
    v70 = 0;
    do
    {
      v71 = *(_DWORD *)(HIDWORD(v66) + 12);
      v72 = 0;
LABEL_4:
      if ( v72 & 1 )
        break;
      v73 = 12 * v71 - 12;
      while ( 1 )
      {
        v74 = v71;
        if ( v71 < 1 )
          break;
        v75 = *(_DWORD *)(HIDWORD(v66) + 12);
        --v71;
        v219 = __OFSUB__(v75, v74);
        v218 = v75 - v74 < 0;
        v76 = (_DWORD *)(HIDWORD(v66) + 20);
        if ( !(v218 ^ v219) )
        {
          v77 = *(_DWORD *)(HIDWORD(v66) + 16);
          v219 = __OFSUB__(v77, v70);
          v217 = v77 == v70;
          v218 = v77 - v70 < 0;
          v76 = (_DWORD *)(HIDWORD(v66) + 20);
          if ( !((unsigned __int8)(v218 ^ v219) | v217) )
            v76 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)HIDWORD(v66) + v73) + 4 * v70);
        }
        v73 -= 12;
        if ( (unsigned int)(*v76 - 1) < 4 )
          v78 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v424, 3, v75);
          j_BlockPos::relative((BlockPos *)&v406, (int)&v410, (int)v78, 8 * (v70 - *(_DWORD *)(v63 + 12)) + 8);
          v410 = v406;
          v411 = v407;
          v412 = v408;
          v80 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v424, 5, v79);
          j_BlockPos::relative((BlockPos *)&v403, (int)&v410, (int)v80, 8 * (v71 - *(_DWORD *)(v63 + 8)));
          v410 = v403;
          v411 = v404;
          v412 = v405;
          j_WoodlandMansionPieces::MansionPiecePlacer::_traverseWallPiece((int *)v63, v65, &v409);
          v72 = 1;
          LODWORD(v81) = &v409;
          HIDWORD(v81) = HIDWORD(v66);
          j_WoodlandMansionPieces::MansionPiecePlacer::_traverseOuterWalls(
            __PAIR__(v65, v63),
            v81,
            3,
            v71,
            v70,
            v70);
          goto LABEL_4;
      }
      ++v70;
    }
    while ( v70 < *(_DWORD *)(HIDWORD(v66) + 16) );
  }
  v82 = v321;
  v83 = *(_DWORD *)(v321 + 4);
  v84 = *(_DWORD *)(v321 + 8);
  v400 = *(_DWORD *)v321;
  v401 = v83 + 16;
  v402 = v84;
  LODWORD(v66) = v63;
  v86 = v65;
  j_WoodlandMansionPieces::MansionPiecePlacer::_createRoof(
    v66,
    v65,
    (int)&v400,
    (__int16)v424,
    __PAIR__(HIDWORD(v66), v328));
  v87 = *(_DWORD *)(v321 + 4);
  v88 = *(_DWORD *)(v321 + 8);
  v397 = *(_DWORD *)v321;
  v398 = v87 + 27;
  v399 = v88;
  j_WoodlandMansionPieces::MansionPiecePlacer::_createRoof(v66, v65, (int)&v397, (__int16)v424, HIDWORD(v66));
  v394 = 0;
  v395 = 0;
  v396 = 0;
  j_std::vector<std::unique_ptr<WoodlandMansionPieces::FloorRoomCollection,std::default_delete<WoodlandMansionPieces::FloorRoomCollection>>,std::allocator<std::unique_ptr<WoodlandMansionPieces::FloorRoomCollection,std::default_delete<WoodlandMansionPieces::FloorRoomCollection>>>>::_M_default_append(
    (int)&v394,
    3u);
  v89 = v394;
  v90 = j_operator new(4u);
  *v90 = &off_272478C;
  v91 = *(_DWORD *)v89;
  *(_DWORD *)v89 = v90;
  if ( v91 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v91 + 4))(v91);
  v92 = j_operator new(4u);
  *v92 = &off_27247B8;
  v93 = *(_DWORD *)(v89 + 4);
  *(_DWORD *)(v89 + 4) = v92;
  if ( v93 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v93 + 4))(v93);
  v94 = j_operator new(4u);
  v331 = v85;
  *v94 = &off_27247E4;
  v95 = *(_DWORD *)(v89 + 8);
  *(_DWORD *)(v89 + 8) = v94;
  if ( v95 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v95 + 4))(v95);
  v96 = 0;
  v97 = "carpet_south_2";
  v98 = "carpet_west_2";
  v310 = (unsigned __int64 *)&Facing::Plane::HORIZONTAL;
  v99 = "carpet_south";
  v100 = "corridor_floor_2";
  v101 = "corridor_floor";
  v102 = "carpet_west";
  v308 = Facing::OPPOSITE_FACING;
  do
    v329 = v96;
    v103 = *(_DWORD *)(v82 + 4);
    v104 = *(_DWORD *)(v82 + 8);
    v391 = *(_DWORD *)v82;
    v105 = 8 * v96;
    if ( v96 == 2 )
      v105 = 19;
    v392 = v105 + v103;
    v393 = v104;
    v330 = *(_DWORD *)(*(_DWORD *)(a5 + 8) + 4 * v96);
    v106 = (int)v97;
    if ( !v96 )
      v106 = (int)v99;
    v390 = v106;
    v107 = (int)v98;
      v107 = (int)v102;
    v389 = v107;
    v108 = (int)v100;
      v108 = (int)v101;
    v109 = v328;
    v388 = v108;
      v109 = HIDWORD(v66);
    v110 = *(_DWORD *)(v109 + 16);
    if ( v110 >= 1 )
      v111 = *(_DWORD *)(v109 + 12);
      v112 = v109 + 20;
      v113 = 0;
      do
        if ( v111 <= 0 )
          ++v113;
        else
          v114 = 0;
          v322 = v113 + 1;
          v318 = v113 - 1;
          do
          {
            v115 = (_DWORD *)v112;
            if ( (v114 | v113) >= 0 )
            {
              v116 = *(_DWORD *)(v109 + 16);
              v219 = __OFSUB__(v116, v113);
              v217 = v116 == v113;
              v218 = v116 - v113 < 0;
              v115 = (_DWORD *)v112;
              if ( !((unsigned __int8)(v218 ^ v219) | v217) )
              {
                LOBYTE(v104) = 3 * v114;
                v115 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v109 + 12 * v114) + 4 * v113);
              }
            }
            if ( *v115 == 1 )
              v117 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v424, 3, v104);
              j_BlockPos::relative((BlockPos *)&v385, (int)&v391, (int)v117, 8 * (v113 - *(_DWORD *)(v331 + 12)) + 8);
              v119 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v424, 5, v118);
              j_BlockPos::relative((BlockPos *)&v382, (int)&v385, (int)v119, 8 * (v114 - *(_DWORD *)(v331 + 8)));
              v385 = v382;
              v386 = v383;
              v387 = v384;
              j_std::make_unique<WoodlandMansionPieces::WoodlandMansionPiece,StructureManager &,char const*&,BlockPos &,Rotation &>(
                (TemplateStructurePiece **)&v381,
                *(_DWORD *)v331,
                (const char **)&v388,
                (int)&v385,
                (__int16 *)&v424);
              v120 = *(_QWORD *)(v86 + 4);
              if ( (_DWORD)v120 == HIDWORD(v120) )
                j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
                  (_QWORD *)v86,
                  &v381);
                if ( v381 )
                  (*(void (**)(void))(*(_DWORD *)v381 + 4))();
              else
                HIDWORD(v120) = v381;
                LOBYTE(v104) = 0;
                v381 = 0;
                *(_DWORD *)v120 = HIDWORD(v120);
                *(_DWORD *)(v86 + 4) = v120 + 4;
              v381 = 0;
              v121 = (_DWORD *)v112;
              if ( v113 >= 1 )
                v122 = *(_DWORD *)(v109 + 12);
                v219 = __OFSUB__(v122, v114);
                v217 = v122 == v114;
                v218 = v122 - v114 < 0;
                v121 = (_DWORD *)v112;
                if ( !((unsigned __int8)(v218 ^ v219) | v217) )
                {
                  v123 = *(_DWORD *)(v109 + 16);
                  v219 = __OFSUB__(v123, v113);
                  v218 = v123 - v113 < 0;
                  v121 = (_DWORD *)v112;
                  if ( !(v218 ^ v219) )
                    v121 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v109 + 12 * v114) + 4 * v318);
                }
              if ( *v121 == 1 )
                goto LABEL_328;
              v124 = v330 + 20;
                v125 = *(_DWORD *)(v330 + 12);
                v219 = __OFSUB__(v125, v114);
                v217 = v125 == v114;
                v218 = v125 - v114 < 0;
                v124 = v330 + 20;
                  v126 = *(_DWORD *)(v330 + 16);
                  v219 = __OFSUB__(v126, v113);
                  v218 = v126 - v113 < 0;
                  v124 = v330 + 20;
                    v124 = *(_DWORD *)(*(_DWORD *)v330 + 12 * v114) + 4 * v318;
              if ( *(_BYTE *)(v124 + 2) & 0x80 )
LABEL_328:
                v127 = *(_DWORD *)v331;
                v128 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v424, 5, v104);
                j_BlockPos::relative((BlockPos *)&v374, (int)&v385, (int)v128, 1);
                v377 = *(_DWORD *)&v374;
                v378 = v375 + 1;
                v379 = v376;
                j_std::make_unique<WoodlandMansionPieces::WoodlandMansionPiece,StructureManager &,char const(&)[13],BlockPos,Rotation &>(
                  (TemplateStructurePiece **)&v380,
                  v127,
                  "carpet_north",
                  (int)&v377,
                  (__int16 *)&v424);
                v129 = *(_QWORD *)(v86 + 4);
                if ( (_DWORD)v129 == HIDWORD(v129) )
                  j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
                    (_QWORD *)v86,
                    &v380);
                  if ( v380 )
                    (*(void (**)(void))(*(_DWORD *)v380 + 4))();
                else
                  HIDWORD(v129) = v380;
                  LOBYTE(v104) = 0;
                  v380 = 0;
                  *(_DWORD *)v129 = HIDWORD(v129);
                  *(_DWORD *)(v86 + 4) = v129 + 4;
                v380 = 0;
              v130 = *(_DWORD *)(v109 + 12);
              v324 = v114 + 1;
              v219 = __OFSUB__(v130, v114 + 1);
              v217 = v130 == v114 + 1;
              v218 = v130 - (v114 + 1) < 0;
              v131 = (_DWORD *)v112;
                v132 = *(_DWORD *)(v109 + 16);
                v219 = __OFSUB__(v132, v113);
                v217 = v132 == v113;
                v218 = v132 - v113 < 0;
                v131 = (_DWORD *)v112;
                  v131 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v109 + 12 * v324) + 4 * v113);
              if ( *v131 == 1 )
                goto LABEL_329;
              LOBYTE(v104) = v114 + 1;
              v133 = *(_DWORD *)(v330 + 12);
              v219 = __OFSUB__(v133, v324);
              v217 = v133 == v324;
              v218 = v133 - v324 < 0;
              v134 = v330 + 20;
                v135 = *(_DWORD *)(v330 + 16);
                v219 = __OFSUB__(v135, v113);
                v217 = v135 == v113;
                v218 = v135 - v113 < 0;
                v134 = v330 + 20;
                  v134 = *(_DWORD *)(*(_DWORD *)v330 + 12 * v324) + 4 * v113;
              if ( *(_BYTE *)(v134 + 2) & 0x80 )
LABEL_329:
                v136 = v109;
                v137 = *(_DWORD *)v331;
                v138 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v424, 3, v104);
                j_BlockPos::relative((BlockPos *)&v369, (int)&v385, (int)v138, 1);
                v140 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v424, 5, v139);
                j_BlockPos::relative((BlockPos *)&v366, (int)&v369, (int)v140, 5);
                v370 = *(_DWORD *)&v366;
                v371 = v367 + 1;
                v372 = v368;
                j_std::make_unique<WoodlandMansionPieces::WoodlandMansionPiece,StructureManager &,char const(&)[12],BlockPos,Rotation &>(
                  (TemplateStructurePiece **)&v373,
                  v137,
                  "carpet_east",
                  (int)&v370,
                v141 = *(_QWORD *)(v86 + 4);
                if ( (_DWORD)v141 == HIDWORD(v141) )
                    &v373);
                  v109 = v136;
                  if ( v373 )
                    (*(void (**)(void))(*(_DWORD *)v373 + 4))();
                  HIDWORD(v141) = v373;
                  v373 = 0;
                  *(_DWORD *)v141 = HIDWORD(v141);
                  *(_DWORD *)(v86 + 4) = v141 + 4;
                v373 = 0;
              v142 = *(_DWORD *)(v109 + 12);
              v219 = __OFSUB__(v142, v114);
              v217 = v142 == v114;
              v218 = v142 - v114 < 0;
              v143 = (_DWORD *)v112;
                v144 = *(_DWORD *)(v109 + 16);
                v219 = __OFSUB__(v144, v322);
                v217 = v144 == v322;
                v218 = v144 - v322 < 0;
                v143 = (_DWORD *)v112;
                  v143 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v109 + 12 * v114) + 4 * v322);
              if ( *v143 == 1 )
                goto LABEL_330;
              v145 = *(_DWORD *)(v330 + 12);
              v219 = __OFSUB__(v145, v114);
              v217 = v145 == v114;
              v218 = v145 - v114 < 0;
              v146 = v330 + 20;
                v147 = *(_DWORD *)(v330 + 16);
                LOBYTE(v104) = v113 + 1;
                v219 = __OFSUB__(v147, v322);
                v217 = v147 == v322;
                v218 = v147 - v322 < 0;
                v146 = v330 + 20;
                  v146 = *(_DWORD *)(*(_DWORD *)v330 + 12 * v114) + 4 * v322;
              if ( *(_BYTE *)(v146 + 2) & 0x80 )
LABEL_330:
                v148 = v109;
                v149 = *(_DWORD *)v331;
                v150 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v424, 3, v104);
                j_BlockPos::relative((BlockPos *)&v363, (int)&v385, (int)v150, 5);
                v152 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v424, 4, v151);
                j_BlockPos::relative((BlockPos *)&v364, (int)&v363, (int)v152, 1);
                j_std::make_unique<WoodlandMansionPieces::WoodlandMansionPiece,StructureManager &,char const*&,BlockPos,Rotation &>(
                  (TemplateStructurePiece **)&v365,
                  v149,
                  (const char **)&v390,
                  (int)&v364,
                v153 = *(_QWORD *)(v86 + 4);
                if ( (_DWORD)v153 == HIDWORD(v153) )
                    &v365);
                  v109 = v148;
                  if ( v365 )
                    (*(void (**)(void))(*(_DWORD *)v365 + 4))();
                  HIDWORD(v153) = v365;
                  v365 = 0;
                  *(_DWORD *)v153 = HIDWORD(v153);
                  *(_DWORD *)(v86 + 4) = v153 + 4;
                v365 = 0;
              v154 = v114 - 1;
              v155 = (_DWORD *)v112;
              if ( v114 >= 1 )
                v156 = *(_DWORD *)(v109 + 12);
                v219 = __OFSUB__(v156, v114);
                v218 = v156 - v114 < 0;
                v155 = (_DWORD *)v112;
                if ( !(v218 ^ v219) )
                  v157 = *(_DWORD *)(v109 + 16);
                  v219 = __OFSUB__(v157, v113);
                  v217 = v157 == v113;
                  v218 = v157 - v113 < 0;
                  v155 = (_DWORD *)v112;
                  if ( !((unsigned __int8)(v218 ^ v219) | v217) )
                  {
                    LOBYTE(v104) = 3 * v154;
                    v155 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v109 + 12 * v154) + 4 * v113);
                  }
              if ( *v155 == 1 )
                goto LABEL_331;
              LOBYTE(v104) = v330 + 20;
              v158 = v330 + 20;
                v159 = *(_DWORD *)(v330 + 12);
                v219 = __OFSUB__(v159, v114);
                v218 = v159 - v114 < 0;
                v158 = v330 + 20;
                  v160 = *(_DWORD *)(v330 + 16);
                  v219 = __OFSUB__(v160, v113);
                  v217 = v160 == v113;
                  v218 = v160 - v113 < 0;
                  v158 = v330 + 20;
                    v158 = *(_DWORD *)(*(_DWORD *)v330 + 12 * v154) + 4 * v113;
              if ( *(_BYTE *)(v158 + 2) & 0x80 )
LABEL_331:
                v161 = v109;
                v162 = *(_DWORD *)v331;
                v163 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v424, 4, v104);
                j_BlockPos::relative((BlockPos *)v360, (int)&v385, (int)v163, 1);
                v165 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v424, 2, v164);
                j_BlockPos::relative((BlockPos *)v361, (int)v360, (int)v165, 1);
                  (TemplateStructurePiece **)&v362,
                  v162,
                  (const char **)&v389,
                  (int)v361,
                v166 = *(_QWORD *)(v86 + 4);
                if ( (_DWORD)v166 == HIDWORD(v166) )
                    &v362);
                  v109 = v161;
                  if ( v362 )
                    (*(void (**)(void))(*(_DWORD *)v362 + 4))();
                  HIDWORD(v166) = v362;
                  v362 = 0;
                  *(_DWORD *)v166 = HIDWORD(v166);
                  *(_DWORD *)(v86 + 4) = v166 + 4;
                v362 = 0;
              v111 = *(_DWORD *)(v109 + 12);
              ++v114;
            else
          }
          while ( v114 < v111 );
        v110 = *(_DWORD *)(v109 + 16);
      while ( v113 < v110 );
    v167 = v329;
    v168 = "indoors_wall_2";
    if ( !v329 )
      v168 = "indoors_wall";
    v359 = (int)v168;
    v169 = (signed int)"indoors_door";
    v170 = "indoors_door_2";
      v170 = "indoors_door";
    v358 = (int)v170;
      v171 = v330;
      v172 = v109 + 20;
      v173 = *(_DWORD *)(v109 + 12);
      v174 = v330 + 20;
      v175 = 0;
      v176 = 0;
      v307 = v330 + 20;
      v316 = v109 + 20;
      v314 = 0;
        ptr = v176;
        v313 = v175;
        v315 = v86;
        v309 = v175 + 1;
        if ( v173 >= 1 )
          v177 = 0;
          v306 = v175 - 1;
            v323 = v177;
            if ( v329 == 2 )
              HIDWORD(v178) = v172;
              if ( (v177 | v175) >= 0 )
                HIDWORD(v178) = *(_DWORD *)(v109 + 16);
                v219 = __OFSUB__(HIDWORD(v178), v175);
                v217 = HIDWORD(v178) == v175;
                v218 = HIDWORD(v178) - v175 < 0;
                HIDWORD(v178) = v172;
                  LOBYTE(v169) = 3 * v177;
                  HIDWORD(v178) = *(_DWORD *)(*(_DWORD *)v109 + 12 * v177) + 4 * v175;
              LODWORD(v178) = 0;
              if ( *(_DWORD *)HIDWORD(v178) == 3 )
                LODWORD(v178) = 1;
            v179 = v172;
            if ( v173 > v177 )
              v180 = *(_DWORD *)(v109 + 16);
              v219 = __OFSUB__(v180, v175);
              v217 = v180 == v175;
              v218 = v180 - v175 < 0;
              v179 = v172;
                LOBYTE(v169) = 3 * v177;
                v179 = *(_DWORD *)(*(_DWORD *)v109 + 12 * v177) + 4 * v175;
            v217 = *(_DWORD *)HIDWORD(v178) == 2;
            HIDWORD(v178) = 0;
            if ( v217 )
              HIDWORD(v178) = 1;
            if ( v178 )
              v311 = v178;
              v181 = *(_DWORD *)(v171 + 12);
              v182 = ptr;
              v219 = __OFSUB__(v181, v177);
              v217 = v181 == v177;
              v218 = v181 - v177 < 0;
              v183 = (int *)v174;
                v184 = *(_DWORD *)(v171 + 16);
                v219 = __OFSUB__(v184, v175);
                v217 = v184 == v175;
                v218 = v184 - v175 < 0;
                v183 = (int *)v174;
                  v183 = (int *)(*(_DWORD *)(*(_DWORD *)v171 + 12 * v177) + 4 * v175);
              v319 = HIDWORD(v66);
              v325 = *v183;
              if ( *v183 & 0x200000 )
                v185 = ptr;
                v187 = *v310;
                for ( i = v314; HIDWORD(v187) != (_DWORD)v187; LODWORD(v187) = v187 + 1 )
                  v188 = *(_BYTE *)v187;
                  v169 = 0;
                  v189 = 0;
                  v190 = (_DWORD *)v172;
                  if ( v188 == 3 )
                    v169 = 1;
                  if ( v188 == 2 )
                    v169 = -1;
                  if ( v188 == 5 )
                    v189 = 1;
                  if ( v188 == 4 )
                    v189 = -1;
                  v191 = v189 + v177;
                  if ( v191 >= 0 )
                    v169 += v175;
                    v190 = (_DWORD *)v172;
                    if ( v169 >= 0 )
                    {
                      v192 = *(_DWORD *)(v109 + 12);
                      v219 = __OFSUB__(v192, v191);
                      v217 = v192 == v191;
                      v218 = v192 - v191 < 0;
                      v190 = (_DWORD *)v172;
                      if ( !((unsigned __int8)(v218 ^ v219) | v217) )
                      {
                        v193 = *(_DWORD *)(v109 + 16);
                        v219 = __OFSUB__(v193, v169);
                        v217 = v193 == v169;
                        v218 = v193 - v169 < 0;
                        v190 = (_DWORD *)v172;
                        if ( !((unsigned __int8)(v218 ^ v219) | v217) )
                          v190 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v109 + 12 * v191) + 4 * v169);
                      }
                    }
                  if ( *v190 == 1 )
                    if ( v185 == (char *)i )
                      v194 = v185 - v182;
                      v195 = v109;
                      if ( v185 - v182 == -1 )
                        sub_21E5A04("vector::_M_emplace_back_aux");
                      v196 = v185 - v182;
                      if ( v185 == v182 )
                        v196 = 1;
                      v197 = v196 + v194;
                      if ( v196 + v194 < v196 )
                        v197 = -1;
                      if ( v197 )
                        v198 = v182;
                        v199 = (char *)j_operator new(v197);
                        LOBYTE(v188) = *(_BYTE *)v187;
                        v182 = v198;
                      else
                        v199 = 0;
                      v200 = (int)&v199[v194];
                      v199[v194] = v188;
                      if ( (char *)i != v182 )
                        v201 = v182;
                        j___aeabi_memmove_0((int)v199, (int)v182);
                        v182 = v201;
                      v185 = (char *)(v200 + 1);
                      if ( v182 )
                        j_operator delete(v182);
                      i = (int)&v199[v197];
                      v182 = v199;
                      v172 = v316;
                      v109 = v195;
                      v175 = v313;
                      v177 = v323;
                    else
                      *v185++ = v188;
                i = v314;
              if ( v182 == v185 )
                v314 = i;
                v203 = 1;
                ptr = v182;
                if ( !(v325 & 0x100000) )
                  v203 = 6;
                HIDWORD(v66) = v319;
                v317 = v203;
                if ( v185 == v182 )
                  v202 = 0;
                  v204 = v182;
                  v202 = j_Random::_genRandInt32(*(Random **)(v331 + 4)) % (v185 - v182);
                  v182 = v204;
                v317 = (unsigned __int8)v182[v202];
              v205 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v424, 3, v169);
              j_BlockPos::relative((BlockPos *)&v355, (int)&v391, (int)v205, 8 * (v175 - *(_DWORD *)(v331 + 12)) + 8);
              v207 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v424, 5, v206);
              j_BlockPos::relative((BlockPos *)&v352, (int)&v355, (int)v207, 8 * (v177 - *(_DWORD *)(v331 + 8)) - 1);
              v208 = v177;
              v355 = v352;
              v209 = (_DWORD *)v172;
              v210 = v109;
              v356 = v353;
              v211 = v175;
              v357 = v354;
              v212 = v177 - 1;
              if ( v177 >= 1 )
                v213 = *(_DWORD *)(v109 + 12);
                v219 = __OFSUB__(v213, v177);
                v218 = v213 - v177 < 0;
                v209 = (_DWORD *)v172;
                  v214 = *(_DWORD *)(v109 + 16);
                  v219 = __OFSUB__(v214, v175);
                  v217 = v214 == v175;
                  v218 = v214 - v175 < 0;
                  v209 = (_DWORD *)v172;
                    v209 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v109 + 12 * v212) + 4 * v175);
              v215 = v325;
              LOBYTE(v169) = v325;
              v320 = (unsigned __int16)v325;
              if ( (unsigned int)(*v209 - 1) <= 3 )
                LOBYTE(v169) = v329;
                v216 = *(_DWORD *)(*(_DWORD *)(a5 + 8) + 4 * v329);
                if ( v177 < 1 )
                  goto LABEL_332;
                v169 = *(_DWORD *)(v216 + 12);
                v219 = __OFSUB__(v169, v177);
                v217 = v169 == v177;
                v218 = v169 - v177 < 0;
                if ( v169 >= v177 )
                  v169 = *(_DWORD *)(v216 + 16);
                  v219 = __OFSUB__(v169, v175);
                  v217 = v169 == v175;
                  v218 = v169 - v175 < 0;
                if ( (unsigned __int8)(v218 ^ v219) | v217 )
LABEL_332:
                  v220 = (_WORD *)(v216 + 20);
                  v220 = (_WORD *)(*(_DWORD *)(*(_DWORD *)v216 + 12 * v212) + 4 * v175);
                if ( *v220 != (unsigned __int16)v325 )
                  v221 = v172;
                  v222 = v210;
                  v223 = &v359;
                  if ( v317 == 4 )
                    v223 = &v358;
                  j_std::make_unique<WoodlandMansionPieces::WoodlandMansionPiece,StructureManager &,char const*&,BlockPos &,Rotation &>(
                    (TemplateStructurePiece **)&v351,
                    *(_DWORD *)v331,
                    (const char **)v223,
                    (int)&v355,
                    (__int16 *)&v424);
                  v224 = *(_QWORD *)(v315 + 4);
                  if ( (_DWORD)v224 == HIDWORD(v224) )
                    j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
                      (_QWORD *)v315,
                      &v351);
                    if ( v351 )
                      (*(void (**)(void))(*(_DWORD *)v351 + 4))();
                  else
                    v225 = v351;
                    v351 = 0;
                    *(_DWORD *)v224 = v225;
                    LOBYTE(v169) = v224 + 4;
                    *(_DWORD *)(v315 + 4) = v224 + 4;
                  v210 = v222;
                  v172 = v221;
                  v211 = v175;
                  v215 = v325;
                  v351 = 0;
              ++v177;
              v326 = v215;
              v226 = v311 & ((v215 & 0x800000u) >> 23);
              v227 = *(_DWORD *)(v210 + 12);
              v219 = __OFSUB__(v227, v208 + 1);
              v217 = v227 == v208 + 1;
              v218 = v227 - (v208 + 1) < 0;
              v228 = (_DWORD *)v172;
                v229 = *(_DWORD *)(v210 + 16);
                v219 = __OFSUB__(v229, v211);
                v217 = v229 == v211;
                v218 = v229 - v211 < 0;
                v228 = (_DWORD *)v172;
                  v228 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v210 + 12 * v177) + 4 * v211);
              v217 = *v228 == 1;
              v230 = 0;
              if ( !v217 )
                v230 = 1;
              if ( !(v230 | v226) )
                v231 = v172;
                v232 = v211;
                v233 = v210;
                v234 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v424, 5, v169);
                j_BlockPos::relative((BlockPos *)v350, (int)&v355, (int)v234, 8);
                v235 = &v359;
                if ( v317 == 5 )
                  v235 = &v358;
                j_std::make_unique<WoodlandMansionPieces::WoodlandMansionPiece,StructureManager &,char const*&,BlockPos &,Rotation &>(
                  (TemplateStructurePiece **)&v349,
                  *(_DWORD *)v331,
                  (const char **)v235,
                  (int)v350,
                v236 = *(_QWORD *)(v315 + 4);
                if ( (_DWORD)v236 == HIDWORD(v236) )
                    (_QWORD *)v315,
                    &v349);
                  if ( v349 )
                    (*(void (**)(void))(*(_DWORD *)v349 + 4))();
                  v237 = v349;
                  v349 = 0;
                  *(_DWORD *)v236 = v237;
                  LOBYTE(v169) = v236 + 4;
                  *(_DWORD *)(v315 + 4) = v236 + 4;
                v210 = v233;
                v172 = v231;
                v211 = v232;
                v349 = 0;
              v238 = *(_DWORD *)(v210 + 12);
              v219 = __OFSUB__(v238, v208);
              v217 = v238 == v208;
              v218 = v238 - v208 < 0;
              v239 = (_DWORD *)v172;
                v240 = *(_DWORD *)(v210 + 16);
                v219 = __OFSUB__(v240, v309);
                v217 = v240 == v309;
                v218 = v240 - v309 < 0;
                v239 = (_DWORD *)v172;
                  v239 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v210 + 12 * v208) + 4 * v309);
              if ( (unsigned int)(*v239 - 1) <= 3 )
                v241 = *(_DWORD *)(*(_DWORD *)(a5 + 8) + 4 * v329);
                if ( *(_DWORD *)(v241 + 12) <= v208 || (LOBYTE(v169) = v309, *(_DWORD *)(v241 + 16) <= v309) )
                  v242 = (_WORD *)(v241 + 20);
                  v242 = (_WORD *)(*(_DWORD *)(*(_DWORD *)v241 + 12 * v208) + 4 * v309);
                if ( *v242 != v320 )
                  v243 = v211;
                  v244 = v172;
                  v245 = v210;
                  v246 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v424, 3, v169);
                  j_BlockPos::relative((BlockPos *)&v346, (int)&v355, (int)v246, 7);
                  v248 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v424, 5, v247);
                  j_BlockPos::relative((BlockPos *)&v343, (int)&v346, (int)v248, 7);
                  v346 = v343;
                  v347 = v344;
                  v348 = v345;
                  v249 = *(_DWORD *)v331;
                  v341 = j_RotationUtil::getRotated((RotationUtil *)(unsigned __int16)v424, 1, v250);
                  v251 = &v359;
                  if ( v317 == 3 )
                    v251 = &v358;
                  j_std::make_unique<WoodlandMansionPieces::WoodlandMansionPiece,StructureManager &,char const*&,BlockPos &,Rotation>(
                    (TemplateStructurePiece **)&v342,
                    v249,
                    (const char **)v251,
                    (int)&v346,
                    &v341);
                  v252 = *(_QWORD *)(v315 + 4);
                  if ( (_DWORD)v252 == HIDWORD(v252) )
                      &v342);
                    if ( v342 )
                      (*(void (**)(void))(*(_DWORD *)v342 + 4))();
                    v253 = v342;
                    v342 = 0;
                    *(_DWORD *)v252 = v253;
                    LOBYTE(v169) = v252 + 4;
                    *(_DWORD *)(v315 + 4) = v252 + 4;
                  v210 = v245;
                  v172 = v244;
                  v211 = v243;
                  v342 = 0;
              v254 = (_DWORD *)v172;
              if ( v211 >= 1 )
                v255 = *(_DWORD *)(v210 + 12);
                v219 = __OFSUB__(v255, v208);
                v217 = v255 == v208;
                v218 = v255 - v208 < 0;
                v254 = (_DWORD *)v172;
                  v256 = *(_DWORD *)(v210 + 16);
                  v219 = __OFSUB__(v256, v211);
                  v218 = v256 - v211 < 0;
                  v254 = (_DWORD *)v172;
                    v254 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v210 + 12 * v208) + 4 * v306);
              v257 = v208;
              v258 = v211;
              v312 = v210;
              v217 = *v254 == 1;
              v259 = 0;
                v259 = 1;
              if ( !(v259 | v226) )
                v260 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v424, 2, v169);
                j_BlockPos::relative((BlockPos *)&v337, (int)&v355, (int)v260, 1);
                v262 = j_RotationUtil::rotate((RotationUtil *)(unsigned __int16)v424, 5, v261);
                j_BlockPos::relative((BlockPos *)&v334, (int)&v337, (int)v262, 7);
                v337 = v334;
                v338 = v335;
                v339 = v336;
                v263 = *(_DWORD *)v331;
                HIWORD(v332) = j_RotationUtil::getRotated((RotationUtil *)(unsigned __int16)v424, 1, v264);
                v265 = &v359;
                if ( v317 == 2 )
                  v265 = &v358;
                j_std::make_unique<WoodlandMansionPieces::WoodlandMansionPiece,StructureManager &,char const*&,BlockPos &,Rotation>(
                  (TemplateStructurePiece **)&v333,
                  v263,
                  (const char **)v265,
                  (int)&v337,
                  (__int16 *)&v332 + 1);
                v266 = *(_QWORD *)(v315 + 4);
                if ( (_DWORD)v266 == HIDWORD(v266) )
                    &v333);
                  if ( v333 )
                    (*(void (**)(void))(*(_DWORD *)v333 + 4))();
                  v267 = v333;
                  v333 = 0;
                  *(_DWORD *)v266 = v267;
                  LOBYTE(v169) = v266 + 4;
                  *(_DWORD *)(v315 + 4) = v266 + 4;
                v333 = 0;
              v268 = v326 & 0xF0000;
              if ( (v326 & 0xF0000) == 0x20000 )
                if ( v317 != 6 )
                  v270 = (_BYTE *)(*v310 >> 32);
                  v269 = (_BYTE *)*v310;
                  if ( v269 == v270 )
                    LOBYTE(v273) = 6;
                    v271 = v326;
                    v272 = *(_DWORD *)(*(_DWORD *)(a5 + 8) + 4 * v329);
                    while ( 1 )
                      v273 = *v269;
                      v274 = 0;
                      v275 = 0;
                      v276 = (_WORD *)(v272 + 20);
                      if ( v273 == 3 )
                        v274 = 1;
                      if ( v273 == 2 )
                        v274 = -1;
                      if ( v273 == 5 )
                        v275 = 1;
                      if ( v273 == 4 )
                        v275 = -1;
                      v277 = v275 + v257;
                      if ( v277 >= 0 )
                        v278 = v274 + v258;
                        v276 = (_WORD *)(v272 + 20);
                        if ( v278 >= 0 )
                        {
                          v279 = *(_DWORD *)(v272 + 12);
                          v219 = __OFSUB__(v279, v277);
                          v217 = v279 == v277;
                          v218 = v279 - v277 < 0;
                          v276 = (_WORD *)(v272 + 20);
                          if ( !((unsigned __int8)(v218 ^ v219) | v217) )
                          {
                            v280 = *(_DWORD *)(v272 + 16);
                            v219 = __OFSUB__(v280, v278);
                            v217 = v280 == v278;
                            v218 = v280 - v278 < 0;
                            v276 = (_WORD *)(v272 + 20);
                            if ( !((unsigned __int8)(v218 ^ v219) | v217) )
                              v276 = (_WORD *)(*(_DWORD *)(*(_DWORD *)v272 + 12 * v277) + 4 * v278);
                          }
                        }
                      if ( *v276 == v320 )
                        break;
                      if ( v270 == ++v269 )
                        LOBYTE(v273) = 6;
                  j_WoodlandMansionPieces::MansionPiecePlacer::_addRoom1x2(
                    v331,
                    v315,
                    (RotationUtil *)(unsigned __int16)v424,
                    (char)v273,
                    (char)v317,
                    *(_DWORD *)(v394 + 4 * v329),
                    (v271 & 0x400000u) >> 22,
                    v304,
                    v305,
                    v306,
                    v307,
                    (int)v308,
                    v309,
                    (int)v310,
                    v312,
                    v313,
                    v314,
                    v316,
                    v317,
                    v320,
                    v321,
                    v323,
                    v326,
                    (int)ptr,
                    v328,
                    v329,
                    v330,
                    v332,
                    v333,
                    v334,
                    v335,
                    v336,
                    v337,
                    v338,
                    v339,
                    v340,
                    v342,
                    v343,
                    v344,
                    v345,
                    v346,
                    v347,
                    v348,
                    v349,
                    v350[0],
                    v350[1],
                    v350[2],
                    v351,
                    v352,
                    v353,
                    v354,
                    v355,
                    v356,
                    v357,
                    v358,
                    v359,
                    v360[0],
                    v360[1],
                    v360[2],
                    v361[0]);
              else if ( v268 == 0x10000 )
                j_WoodlandMansionPieces::MansionPiecePlacer::_addRoom1x1(
                  v331,
                  v315,
                  (int)&v355,
                  (unsigned __int16)v424,
                  (char)v317,
                  *(_DWORD *)(v394 + 4 * v329));
              else if ( v268 == 0x40000 )
                v281 = v317 == 1;
                if ( v317 != 1 )
                  v281 = v317 == 6;
                if ( v281 )
                  if ( v317 == 1 )
                    j_WoodlandMansionPieces::MansionPiecePlacer::_addRoom2x2Secret(
                      v331,
                      v315,
                      (int)&v355,
                      (RotationUtil *)(unsigned __int16)v424,
                      *(_DWORD *)(v394 + 4 * v329));
                  v282 = j_Facing::getClockWise((Facing *)(char)v317, v317);
                  v283 = 0;
                  v284 = 0;
                  v285 = *(_DWORD *)(*(_DWORD *)(a5 + 8) + 4 * v329);
                  if ( (unsigned __int8)v282 == 3 )
                    v283 = 1;
                  if ( (unsigned __int8)v282 == 2 )
                    v283 = -1;
                  if ( (unsigned __int8)v282 == 5 )
                    v284 = 1;
                  if ( (unsigned __int8)v282 == 4 )
                    v284 = -1;
                  v286 = v284 + v257;
                  v287 = v284 + v257 < 0;
                  if ( v284 + v257 >= 0 )
                    v283 += v258;
                    v287 = v283 < 0;
                  if ( v287 )
                    goto LABEL_333;
                  v288 = *(_DWORD *)(v285 + 12);
                  v291 = __OFSUB__(v288, v286);
                  v289 = v288 == v286;
                  v290 = v288 - v286 < 0;
                  if ( v288 > v286 )
                    v292 = *(_DWORD *)(v285 + 16);
                    v291 = __OFSUB__(v292, v283);
                    v289 = v292 == v283;
                    v290 = v292 - v283 < 0;
                  if ( (unsigned __int8)(v290 ^ v291) | v289 )
LABEL_333:
                    v293 = (_WORD *)(v285 + 20);
                    v293 = (_WORD *)(*(_DWORD *)(*(_DWORD *)v285 + 12 * v286) + 4 * v283);
                  if ( *v293 != v320 )
                    LOBYTE(v282) = v308[v282];
                  j_WoodlandMansionPieces::MansionPiecePlacer::_addRoom2x2(
                    (char)v282,
                    *(_DWORD *)(v394 + 4 * v329));
              v109 = v312;
              v175 = v258;
              v171 = v330;
              v174 = v307;
              v173 = *(_DWORD *)(v312 + 12);
              v172 = v316;
          while ( v177 < v173 );
        v86 = v315;
        v175 = v309;
        v176 = ptr;
      while ( v309 < *(_DWORD *)(v109 + 16) );
      v167 = v329;
      if ( ptr )
        j_operator delete(ptr);
    v96 = v167 + 1;
    v97 = "carpet_south_2";
    v98 = "carpet_west_2";
    v99 = "carpet_south";
    v82 = v321;
    v100 = "corridor_floor_2";
    v101 = "corridor_floor";
    v102 = "carpet_west";
  while ( v96 < 3 );
  v294 = *(_QWORD *)&v394;
  if ( v394 != v395 )
      if ( *(_DWORD *)v294 )
        (*(void (**)(void))(**(_DWORD **)v294 + 4))();
      *(_DWORD *)v294 = 0;
      LODWORD(v294) = v294 + 4;
    while ( HIDWORD(v294) != (_DWORD)v294 );
    LODWORD(v294) = v394;
  if ( (_DWORD)v294 )
    j_operator delete((void *)v294);
  v295 = v413 - 12;
  if ( (int *)(v413 - 12) != &dword_28898C0 )
    v298 = (unsigned int *)(v413 - 4);
    if ( &pthread_create )
      __dmb();
        v299 = __ldrex(v298);
      while ( __strex(v299 - 1, v298) );
    else
      v299 = (*v298)--;
    if ( v299 <= 0 )
      j_j_j_j__ZdlPv_9(v295);
  v296 = v418 - 12;
  if ( (int *)(v418 - 12) != &dword_28898C0 )
    v300 = (unsigned int *)(v418 - 4);
        v301 = __ldrex(v300);
      while ( __strex(v301 - 1, v300) );
      v301 = (*v300)--;
    if ( v301 <= 0 )
      j_j_j_j__ZdlPv_9(v296);
  v297 = v423 - 12;
  if ( (int *)(v423 - 12) != &dword_28898C0 )
    v302 = (unsigned int *)(v423 - 4);
        v303 = __ldrex(v302);
      while ( __strex(v303 - 1, v302) );
      v303 = (*v302)--;
    if ( v303 <= 0 )
      j_j_j_j__ZdlPv_9(v297);
}


TemplateStructurePiece *__fastcall WoodlandMansionPieces::WoodlandMansionPiece::WoodlandMansionPiece(TemplateStructurePiece *a1, int a2, int *a3, int a4, __int16 a5, int a6)
{
  int v6; // r5@1
  int v7; // r4@1
  int *v8; // r8@1
  TemplateStructurePiece *v9; // r6@1

  v6 = a2;
  v7 = a4;
  v8 = a3;
  v9 = a1;
  j_TemplateStructurePiece::TemplateStructurePiece(a1, 0);
  *(_DWORD *)v9 = &off_2724740;
  *((_DWORD *)v9 + 27) = v6;
  sub_21E8AF4((int *)v9 + 28, v8);
  *((_WORD *)v9 + 58) = a5;
  *((_DWORD *)v9 + 30) = a6;
  *((_DWORD *)v9 + 31) = *(_DWORD *)v7;
  *((_DWORD *)v9 + 32) = *(_DWORD *)(v7 + 4);
  *((_DWORD *)v9 + 33) = *(_DWORD *)(v7 + 8);
  *((_DWORD *)v9 + 35) = 0;
  *((_DWORD *)v9 + 36) = 0;
  *((_DWORD *)v9 + 37) = 0;
  *((_DWORD *)v9 + 38) = 0;
  *((_DWORD *)v9 + 39) = 0;
  *((_DWORD *)v9 + 34) = 0;
  j_WoodlandMansionPieces::WoodlandMansionPiece::_loadTemplate(v9);
  return v9;
}


void __fastcall WoodlandMansionPieces::FirstFloorRoomCollection::get1x1Secret(WoodlandMansionPieces::FirstFloorRoomCollection *this, Random *a2, Random *a3)
{
  WoodlandMansionPieces::FirstFloorRoomCollection::get1x1Secret(this, a2, a3);
}


void __fastcall WoodlandMansionPieces::MansionPiecePlacer::_addRoom2x2(int a1, int a2, int a3, RotationUtil *this, int a5, int a6, int a7)
{
  WoodlandMansionPieces::MansionPiecePlacer::_addRoom2x2(a1, a2, a3, this, a5, a6, a7);
}


void __fastcall WoodlandMansionPieces::WoodlandMansionPiece::_handleDataMarker(int a1, const void **a2, int a3, const BlockPos *a4, Random *a5, int a6)
{
  const void **v6; // r6@1
  const BlockPos *v7; // r8@1
  int v8; // r9@1
  int v9; // r5@1
  signed int v10; // r7@1
  void *v11; // r0@1
  __int64 v12; // r0@6
  __int64 v13; // r0@8
  unsigned __int64 *v14; // r0@10
  unsigned int *v15; // r2@11
  signed int v16; // r1@13
  int v17; // [sp+10h] [bp-28h]@1

  v6 = a2;
  v7 = a4;
  v8 = a3;
  v9 = a1;
  sub_21E94B4((void **)&v17, "Chest");
  v10 = j_Util::startsWith(v6, &v17);
  v11 = (void *)(v17 - 12);
  if ( (int *)(v17 - 12) != &dword_28898C0 )
  {
    v15 = (unsigned int *)(v17 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v16 = __ldrex(v15);
      while ( __strex(v16 - 1, v15) );
    }
    else
      v16 = (*v15)--;
    if ( v16 <= 0 )
      j_j_j_j__ZdlPv_9(v11);
  }
  if ( v10 == 1 )
    j_WoodlandMansionPieces::WoodlandMansionPiece::_addChest((Random *)v9, (int)v6, v8, v7, a5, a6);
    return;
  if ( sub_21E7D6C(v6, "Mage") )
    if ( sub_21E7D6C(v6, "Warrior") )
      return;
    v12 = *(_QWORD *)(v9 + 140);
    if ( (_DWORD)v12 != HIDWORD(v12) )
      *(_QWORD *)v12 = *(_QWORD *)v8;
      *(_DWORD *)(v12 + 8) = *(_DWORD *)(v8 + 8);
      *(_DWORD *)(v9 + 140) = v12 + 12;
    v14 = (unsigned __int64 *)(v9 + 136);
  else
    v13 = *(_QWORD *)(v9 + 152);
    if ( (_DWORD)v13 != HIDWORD(v13) )
      *(_QWORD *)v13 = *(_QWORD *)v8;
      *(_DWORD *)(v13 + 8) = *(_DWORD *)(v8 + 8);
      *(_DWORD *)(v9 + 152) = v13 + 12;
    v14 = (unsigned __int64 *)(v9 + 148);
  j_std::vector<BlockPos,std::allocator<BlockPos>>::_M_emplace_back_aux<BlockPos const&>(v14, v8);
}


WoodlandMansionPieces::MansionGrid *__fastcall WoodlandMansionPieces::MansionGrid::~MansionGrid(WoodlandMansionPieces::MansionGrid *this)
{
  WoodlandMansionPieces::MansionGrid *v1; // r8@1
  void *v2; // r5@1
  void *v3; // r10@1
  void ***v4; // r6@2
  void **v5; // r4@3
  void **v6; // r7@3
  void ***v7; // r5@15
  void **v8; // r4@16
  void **v9; // r6@16
  void *v10; // r5@24
  __int64 v11; // r6@25
  WoodlandMansionPieces::MansionGrid *result; // r0@33

  v1 = this;
  v3 = (void *)(*((_QWORD *)this + 1) >> 32);
  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 != v3 )
  {
    do
    {
      v4 = *(void ****)v2;
      if ( *(_DWORD *)v2 )
      {
        v5 = (void **)(*(_QWORD *)v4 >> 32);
        v6 = (void **)*(_QWORD *)v4;
        if ( v6 != v5 )
        {
          do
          {
            if ( *v6 )
              j_operator delete(*v6);
            v6 += 3;
          }
          while ( v5 != v6 );
          v6 = *v4;
        }
        if ( v6 )
          j_operator delete(v6);
        j_operator delete(v4);
      }
      *(_DWORD *)v2 = 0;
      v2 = (char *)v2 + 4;
    }
    while ( v2 != v3 );
    v2 = (void *)*((_DWORD *)v1 + 2);
  }
  if ( v2 )
    j_operator delete(v2);
  v7 = (void ***)*((_DWORD *)v1 + 1);
  if ( v7 )
    v8 = (void **)(*(_QWORD *)v7 >> 32);
    v9 = (void **)*(_QWORD *)v7;
    if ( v9 != v8 )
      do
        if ( *v9 )
          j_operator delete(*v9);
        v9 += 3;
      while ( v8 != v9 );
      v9 = *v7;
    if ( v9 )
      j_operator delete(v9);
    j_operator delete(v7);
  *((_DWORD *)v1 + 1) = 0;
  v10 = *(void **)v1;
  if ( *(_DWORD *)v1 )
    v11 = *(_QWORD *)v10;
    if ( (_DWORD)v11 != HIDWORD(v11) )
        if ( *(_DWORD *)v11 )
          j_operator delete(*(void **)v11);
        LODWORD(v11) = v11 + 12;
      while ( HIDWORD(v11) != (_DWORD)v11 );
      LODWORD(v11) = *(_DWORD *)v10;
    if ( (_DWORD)v11 )
      j_operator delete((void *)v11);
    j_operator delete(v10);
  result = v1;
  *(_DWORD *)v1 = 0;
  return result;
}


int __fastcall WoodlandMansionPieces::SimpleGrid::setIf(int result, int a2, int a3, int a4, int a5)
{
  bool v5; // nf@1
  int v6; // r12@4
  bool v7; // zf@4
  bool v8; // nf@4
  unsigned __int8 v9; // vf@4
  int v10; // r12@5
  int *v11; // r12@7
  int v12; // r12@9
  bool v13; // zf@9
  int v14; // r3@14
  bool v15; // zf@14
  bool v16; // nf@14
  unsigned __int8 v17; // vf@14
  int v18; // r3@15

  v5 = a2 < 0;
  if ( a2 >= 0 )
    v5 = a3 < 0;
  if ( v5 )
    goto LABEL_20;
  v6 = *(_DWORD *)(result + 12);
  v9 = __OFSUB__(v6, a2);
  v7 = v6 == a2;
  v8 = v6 - a2 < 0;
  if ( v6 > a2 )
  {
    v10 = *(_DWORD *)(result + 16);
    v9 = __OFSUB__(v10, a3);
    v7 = v10 == a3;
    v8 = v10 - a3 < 0;
  }
  if ( (unsigned __int8)(v8 ^ v9) | v7 )
LABEL_20:
    v11 = (int *)(result + 20);
  else
    v11 = (int *)(*(_DWORD *)(*(_DWORD *)result + 12 * a2) + 4 * a3);
  v12 = *v11;
  v13 = v12 == a4;
  if ( v12 == a4 )
    v13 = (unsigned int)a2 >> 31 == 0;
  if ( v13 && a3 >= 0 )
    v14 = *(_DWORD *)(result + 12);
    v17 = __OFSUB__(v14, a2);
    v15 = v14 == a2;
    v16 = v14 - a2 < 0;
    if ( v14 > a2 )
    {
      v18 = *(_DWORD *)(result + 16);
      v17 = __OFSUB__(v18, a3);
      v15 = v18 == a3;
      v16 = v18 - a3 < 0;
    }
    if ( !((unsigned __int8)(v16 ^ v17) | v15) )
      result = *(_DWORD *)(*(_DWORD *)result + 12 * a2);
      *(_DWORD *)(result + 4 * a3) = a5;
  return result;
}


void __fastcall WoodlandMansionPieces::MansionPiecePlacer::_addRoom2x2(int a1, int a2, int a3, RotationUtil *this, int a5, int a6, int a7)
{
  int v7; // r4@1
  __int64 *v8; // r10@1
  RotationUtil *v9; // r7@1
  bool v10; // zf@1
  signed int v11; // r5@5
  signed int v12; // r9@5
  __int16 v13; // r11@5
  int v14; // r6@5
  bool v15; // zf@6
  bool v16; // zf@12
  bool v17; // zf@17
  bool v18; // zf@22
  bool v19; // zf@27
  bool v20; // zf@32
  Facing *v21; // r0@37
  signed __int8 v22; // r2@37
  Facing *v23; // r0@37
  __int64 v24; // kr00_8@37
  TemplateStructurePiece *v25; // r5@37
  __int64 v26; // r0@37
  void *v27; // r0@41
  unsigned int *v28; // r2@43
  signed int v29; // r1@45
  signed int v30; // r1@51
  signed int v31; // r0@53
  int v32; // [sp+Ch] [bp-4Ch]@5
  int v33; // [sp+10h] [bp-48h]@37
  TemplateStructurePiece *v34; // [sp+14h] [bp-44h]@37
  int v35; // [sp+18h] [bp-40h]@37
  int v36; // [sp+1Ch] [bp-3Ch]@37
  int v37; // [sp+20h] [bp-38h]@37
  int v38; // [sp+24h] [bp-34h]@37
  int v39; // [sp+28h] [bp-30h]@37
  int v40; // [sp+2Ch] [bp-2Ch]@37

  v7 = a2;
  v8 = (__int64 *)a1;
  v9 = this;
  v10 = (unsigned __int8)a5 == 3;
  if ( (unsigned __int8)a5 == 3 )
    v10 = (unsigned __int8)a6 == 5;
  if ( v10 )
  {
    v32 = a3;
    v11 = -7;
    v12 = 0;
    v13 = (signed __int16)this;
    v14 = 0;
    goto LABEL_37;
  }
  v15 = (unsigned __int8)a5 == 2;
  if ( (unsigned __int8)a5 == 2 )
    v15 = (unsigned __int8)a6 == 5;
  if ( v15 )
    v14 = 6;
    v12 = 1;
LABEL_11:
  v16 = (unsigned __int8)a5 == 5;
  if ( (unsigned __int8)a5 == 5 )
    v16 = (unsigned __int8)a6 == 2;
  if ( v16 )
    v13 = j_RotationUtil::getRotated(this, 3, a3);
    v14 = 14;
    v11 = 1;
  else
    v17 = (unsigned __int8)a5 == 4;
    if ( (unsigned __int8)a5 == 4 )
      v17 = (unsigned __int8)a6 == 2;
    if ( v17 )
    {
      v32 = a3;
      v13 = j_RotationUtil::getRotated(this, 3, a3);
      v14 = 14;
      v11 = 7;
      v12 = 1;
    }
    else
      v18 = (unsigned __int8)a5 == 4;
      if ( (unsigned __int8)a5 == 4 )
        v18 = (unsigned __int8)a6 == 3;
      if ( v18 )
      {
        v32 = a3;
        v13 = j_RotationUtil::getRotated(this, 1, a3);
        v14 = -8;
        v11 = 7;
        v12 = 0;
      }
      else
        v19 = (unsigned __int8)a5 == 5;
        if ( (unsigned __int8)a5 == 5 )
          v19 = (unsigned __int8)a6 == 3;
        if ( v19 )
        {
          v32 = a3;
          v12 = 1;
          v13 = j_RotationUtil::getRotated(this, 1, a3);
          v14 = -8;
          v11 = 1;
        }
        else
          v20 = (unsigned __int8)a5 == 2;
          if ( (unsigned __int8)a5 == 2 )
          {
            LOWORD(a3) = (unsigned __int8)a6;
            v20 = (unsigned __int8)a6 == 4;
          }
          if ( !v20 )
            v30 = 0;
            v14 = 0;
            if ( (unsigned __int8)a6 == 4 )
              v30 = 1;
            v31 = 0;
            if ( (unsigned __int8)a5 == 3 )
              v31 = 1;
            v12 = v31 & v30;
            v11 = v31 & v30;
            if ( v31 & v30 )
            {
              v11 = 15;
              v12 = 2;
            }
            goto LABEL_11;
          v13 = j_RotationUtil::getRotated(this, 2, a3);
          v14 = 6;
          v11 = 15;
          v12 = 0;
LABEL_37:
  v21 = j_RotationUtil::rotate(v9, 5, a3);
  j_BlockPos::relative((BlockPos *)&v38, v32, (int)v21, v11);
  v23 = j_RotationUtil::rotate(v9, 3, v22);
  j_BlockPos::relative((BlockPos *)&v35, (int)&v38, (int)v23, v14);
  v38 = v35;
  v39 = v36;
  v40 = v37;
  v24 = *v8;
  (*(void (__fastcall **)(int *))(*(_DWORD *)a7 + 28))(&v33);
  v25 = (TemplateStructurePiece *)j_operator new(0xA0u);
  j_WoodlandMansionPieces::WoodlandMansionPiece::WoodlandMansionPiece(v25, v24, &v33, (int)&v38, v13, v12);
  v34 = v25;
  v26 = *(_QWORD *)(v7 + 4);
  if ( (_DWORD)v26 == HIDWORD(v26) )
    j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
      (_QWORD *)v7,
      (int *)&v34);
    if ( v34 )
      (*(void (**)(void))(*(_DWORD *)v34 + 4))();
    v34 = 0;
    *(_DWORD *)v26 = v25;
    *(_DWORD *)(v7 + 4) = v26 + 4;
  v34 = 0;
  v27 = (void *)(v33 - 12);
  if ( (int *)(v33 - 12) != &dword_28898C0 )
    v28 = (unsigned int *)(v33 - 4);
    if ( &pthread_create )
      __dmb();
      do
        v29 = __ldrex(v28);
      while ( __strex(v29 - 1, v28) );
      v29 = (*v28)--;
    if ( v29 <= 0 )
      j_j_j_j__ZdlPv_9(v27);
}


void __fastcall WoodlandMansionPieces::SecondFloorRoomCollection::get1x2FrontEntrance(WoodlandMansionPieces::SecondFloorRoomCollection *this, Random *a2, int a3, int a4)
{
  WoodlandMansionPieces::SecondFloorRoomCollection *v4; // r4@1
  unsigned int v5; // kr00_4@3
  const void **v6; // r0@3
  void *v7; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  int v10; // [sp+0h] [bp-20h]@3

  v4 = this;
  if ( a4 == 1 )
  {
    sub_21E94B4((void **)this, "1x2_d_stairs");
  }
  else
    v5 = j_Random::_genRandInt32((Random *)a3);
    j_Util::toString<int,(void *)0,(void *)0>((void **)&v10, v5 % 5 + 1);
    v6 = sub_21E82D8((const void **)&v10, 0, (unsigned int)"1x2_d", (_BYTE *)5);
    *(_DWORD *)v4 = *v6;
    *v6 = &unk_28898CC;
    v7 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v10 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
}


void __fastcall WoodlandMansionPieces::MansionGrid::_setupThirdFloor(WoodlandMansionPieces::MansionGrid *this)
{
  WoodlandMansionPieces::MansionGrid::_setupThirdFloor(this);
}


void __fastcall WoodlandMansionPieces::MansionGrid::_setupThirdFloor(WoodlandMansionPieces::MansionGrid *this)
{
  int v1; // r1@1
  int v2; // r3@1
  int v3; // r0@1
  _DWORD *v4; // r0@1
  signed int v5; // r2@1
  signed int v6; // t1@1
  int v7; // r11@1
  int v8; // r6@2
  signed int v9; // r5@2
  int v10; // r7@2
  int v11; // r10@2
  _DWORD *v12; // r3@2
  int v13; // r9@4
  int v14; // r0@5
  _DWORD *v15; // r0@5
  int v16; // r0@6
  int v17; // r4@11
  unsigned int v18; // r1@11
  unsigned int v19; // r0@13
  unsigned int v20; // r8@13
  _DWORD *v21; // r6@18
  _QWORD *v22; // r1@18
  unsigned int v23; // r2@18
  __int64 *v24; // r4@18
  __int64 v25; // r2@19
  unsigned int v26; // r1@29
  _DWORD *v27; // ST28_4@30
  int v28; // r10@31
  int v29; // r8@31
  bool v30; // zf@32
  bool v31; // nf@32
  unsigned __int8 v32; // vf@32
  int v33; // r0@33
  int v34; // lr@36
  int *v35; // r0@39
  _BYTE *v36; // r5@44
  int v37; // r9@44
  signed int v38; // r0@45
  signed int v39; // r4@45
  signed int v40; // r2@45
  int v41; // r7@53
  _DWORD *v42; // r2@53
  int v43; // r4@54
  int v44; // r2@55
  int v45; // r2@56
  signed int v46; // r2@62
  int v47; // r3@64
  signed int v48; // r1@66
  int v49; // r9@66
  __int64 v50; // r2@66
  int v51; // r8@70
  int v52; // r1@71
  int v53; // r12@73
  int v54; // lr@73
  _DWORD *v55; // r0@73
  int v56; // r5@74
  _DWORD *v57; // r5@74
  int v58; // r5@75
  bool v59; // zf@78
  bool v60; // zf@81
  int v61; // r5@85
  int v62; // r5@88
  int v63; // r5@91
  int v64; // r11@91
  bool v65; // zf@91
  bool v66; // nf@91
  unsigned __int8 v67; // vf@91
  int v68; // r4@92
  int v69; // r5@95
  int v70; // r4@95
  bool v71; // zf@95
  bool v72; // nf@95
  unsigned __int8 v73; // vf@95
  int v74; // r4@96
  _BYTE *v75; // r5@101
  _BYTE *v76; // r12@101
  _BYTE *v77; // r11@102
  int v78; // lr@102
  int v79; // r9@102
  _BYTE *v80; // r7@102
  int v81; // r0@103
  int v82; // r1@103
  bool v83; // nf@111
  int v84; // r4@114
  bool v85; // zf@114
  bool v86; // nf@114
  unsigned __int8 v87; // vf@114
  int v88; // r4@115
  _DWORD *v89; // r1@117
  void *v90; // r1@122
  unsigned int v91; // r10@125
  void *v92; // r11@128
  int v93; // r4@128
  char *v94; // r4@130
  void *v95; // r9@131
  signed int v96; // r5@140
  unsigned int v97; // r1@140
  int v98; // r0@142
  void *v99; // r6@142
  signed int v100; // r2@142
  WoodlandMansionPieces::MansionGrid *v101; // r0@150
  int v102; // r0@153
  int v103; // r12@153
  bool v104; // nf@153
  int v105; // r2@156
  int v106; // r3@156
  int v107; // r5@157
  int v108; // r4@157
  bool v109; // nf@164
  int v110; // r0@167
  bool v111; // zf@167
  bool v112; // nf@167
  unsigned __int8 v113; // vf@167
  int v114; // r0@168
  bool v115; // nf@175
  int v116; // r3@178
  int v117; // r7@178
  int v118; // r5@179
  int v119; // r4@179
  int v120; // [sp+8h] [bp-48h]@43
  int v121; // [sp+Ch] [bp-44h]@101
  _BYTE *v122; // [sp+10h] [bp-40h]@44
  int v123; // [sp+14h] [bp-3Ch]@62
  int v124; // [sp+18h] [bp-38h]@43
  int v125; // [sp+1Ch] [bp-34h]@64
  int v126; // [sp+1Ch] [bp-34h]@102
  WoodlandMansionPieces::MansionGrid *v127; // [sp+20h] [bp-30h]@1
  int v128; // [sp+24h] [bp-2Ch]@66
  __int64 *ptr; // [sp+28h] [bp-28h]@11
  void *ptra; // [sp+28h] [bp-28h]@43

  v127 = this;
  v2 = *(_QWORD *)((char *)this + 4) >> 32;
  v1 = *(_QWORD *)((char *)this + 4);
  v3 = *(_QWORD *)((char *)this + 4);
  v6 = *(_DWORD *)(v3 + 16);
  v4 = (_DWORD *)(v3 + 16);
  v5 = v6;
  v7 = *(_DWORD *)(v2 + 4);
  if ( v6 < 1 )
  {
    v11 = 0;
    v12 = 0;
  }
  else
    v8 = v7 + 20;
    v9 = 0;
    v10 = 0;
    do
    {
      if ( *(_DWORD *)(v1 + 12) >= 1 )
      {
        v13 = 0;
        do
        {
          v14 = *(_DWORD *)(v7 + 12);
          v32 = __OFSUB__(v14, v13);
          v30 = v14 == v13;
          v31 = v14 - v13 < 0;
          v15 = (_DWORD *)v8;
          if ( !((unsigned __int8)(v31 ^ v32) | v30) )
          {
            v16 = *(_DWORD *)(v7 + 16);
            v32 = __OFSUB__(v16, v9);
            v30 = v16 == v9;
            v31 = v16 - v9 < 0;
            v15 = (_DWORD *)v8;
            if ( !((unsigned __int8)(v31 ^ v32) | v30) )
              v15 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + 12 * v13) + 4 * v9);
          }
          if ( (*v15 & 0x2F0000) == 2228224 )
            if ( v11 == v10 )
            {
              ptr = (__int64 *)v12;
              v17 = (v11 - (signed int)v12) >> 3;
              v18 = (v11 - (signed int)v12) >> 3;
              if ( !v17 )
                v18 = 1;
              v19 = v18 + ((v11 - (signed int)v12) >> 3);
              v20 = v18 + ((v11 - (signed int)v12) >> 3);
              if ( 0 != v19 >> 29 )
                v20 = 0x1FFFFFFF;
              if ( v19 < v18 )
              if ( 0 != v20 >> 29 )
                sub_21E57F4();
              v21 = j_operator new(8 * v20);
              v21[2 * v17] = v13;
              v22 = v21;
              v21[2 * v17 + 1] = v9;
              v23 = (unsigned int)v21;
              v24 = ptr;
              if ( ptr != (__int64 *)v10 )
              {
                do
                {
                  v25 = *v24;
                  ++v24;
                  *v22 = v25;
                  ++v22;
                }
                while ( (__int64 *)v10 != v24 );
                v23 = (unsigned int)v21 + ((v10 - 8 - (_DWORD)ptr) & 0xFFFFFFF8) + 8;
              }
              v11 = v23 + 8;
              if ( ptr )
                j_operator delete(ptr);
              v10 = (int)&v21[2 * v20];
              v12 = v21;
              v8 = v7 + 20;
              v1 = *((_DWORD *)v127 + 1);
            }
            else
              *(_DWORD *)v11 = v13;
              *(_DWORD *)(v11 + 4) = v9;
              v11 += 8;
          ++v13;
        }
        while ( v13 < *(_DWORD *)(v1 + 12) );
      }
      ++v9;
      v4 = (_DWORD *)(v1 + 16);
      v5 = *(_DWORD *)(v1 + 16);
    }
    while ( v9 < v5 );
  if ( v12 == (_DWORD *)v11 )
    ptra = v12;
    v115 = v5 < 0;
    if ( v5 >= 0 )
      v12 = *(_DWORD **)(v1 + 12);
      v115 = (signed int)v12 < 0;
    if ( !v115 )
      v116 = (int)v12 + 1;
      v117 = 0;
      do
        v118 = 0;
        v119 = 0;
          if ( *(_DWORD *)(v1 + 12) > v119 && *v4 > v117 )
            *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v1 + v118) + 4 * v117) = 5;
          ++v119;
          v118 += 12;
        while ( v116 != v119 );
        v30 = v117++ == v5;
      while ( !v30 );
    v26 = 0;
    if ( (v11 - (signed int)v12) >> 3 )
      v27 = v12;
      v26 = j_Random::_genRandInt32(*((Random **)v127 + 7)) % ((v11 - (signed int)v12) >> 3);
      v12 = v27;
    v28 = v12[2 * v26];
    v29 = v12[2 * v26 + 1];
    if ( v28 < 0 )
      v34 = *(_DWORD *)(v7 + 20);
    else
      v32 = 0;
      v30 = v29 == 0;
      v31 = v29 < 0;
      if ( v29 >= 0 )
        v33 = *(_DWORD *)(v7 + 12);
        v32 = __OFSUB__(v33, v28);
        v30 = v33 == v28;
        v31 = v33 - v28 < 0;
      if ( (unsigned __int8)(v31 ^ v32) | v30 )
        v34 = *(_DWORD *)(v7 + 20);
      else
        if ( *(_DWORD *)(v7 + 16) <= v29 )
          v35 = (int *)(v7 + 20);
        else
          v35 = (int *)(*(_DWORD *)(*(_DWORD *)v7 + 12 * v28) + 4 * v29);
        v34 = *v35;
        if ( *(_DWORD *)(v7 + 16) > v29 )
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v7 + 12 * v28) + 4 * v29) = v34 | 0x400000;
    v120 = v7;
    v124 = dword_2803214;
    if ( Facing::Plane::HORIZONTAL == dword_2803214 )
      v122 = (_BYTE *)Facing::Plane::HORIZONTAL;
      v38 = 6;
      v36 = (_BYTE *)Facing::Plane::HORIZONTAL;
      v37 = *(_DWORD *)(*((_DWORD *)v127 + 2) + 4);
      while ( 1 )
        v38 = *v36;
        v39 = 0;
        v40 = 0;
        if ( v38 == 3 )
          v39 = 1;
        if ( v38 == 2 )
          v39 = -1;
        if ( v38 == 5 )
          v40 = 1;
        if ( v38 == 4 )
          v40 = -1;
        v41 = v40 + v28;
        v42 = (_DWORD *)(v37 + 20);
        if ( v41 >= 0 )
          v43 = v39 + v29;
          v42 = (_DWORD *)(v37 + 20);
          if ( v43 >= 0 )
            v44 = *(_DWORD *)(v37 + 12);
            v32 = __OFSUB__(v44, v41);
            v30 = v44 == v41;
            v31 = v44 - v41 < 0;
            v42 = (_DWORD *)(v37 + 20);
              v45 = *(_DWORD *)(v37 + 16);
              v32 = __OFSUB__(v45, v43);
              v30 = v45 == v43;
              v31 = v45 - v43 < 0;
              v42 = (_DWORD *)(v37 + 20);
              if ( !((unsigned __int8)(v31 ^ v32) | v30) )
                v42 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v37 + 12 * v41) + 4 * v43);
        if ( !((*v42 ^ v34) & 0xFFFF) )
          break;
        if ( (_BYTE *)dword_2803214 == ++v36 )
          v38 = 6;
    v46 = 0;
    v123 = v34;
    if ( v38 == 3 )
      v46 = 1;
    v47 = *((_DWORD *)v127 + 1);
    v125 = *((_DWORD *)v127 + 1);
    if ( v38 == 2 )
      v46 = -1;
    v48 = 0;
    v49 = v29;
    LODWORD(v50) = v46 + v29;
    v128 = v50;
    if ( v38 == 5 )
      v48 = 1;
    if ( v38 == 4 )
      v48 = -1;
    v51 = v48 + v28;
    if ( *(_DWORD *)(v47 + 16) >= 1 )
      v52 = 0;
        if ( *(_DWORD *)(v47 + 12) >= 1 )
          v50 = *(_QWORD *)v127;
          v53 = 0;
          v54 = 0;
          v55 = (_DWORD *)(*(_QWORD *)v127 + 20);
          do
            v56 = *(_DWORD *)(v50 + 12);
            v32 = __OFSUB__(v56, v54);
            v30 = v56 == v54;
            v31 = v56 - v54 < 0;
            v57 = v55;
              v58 = *(_DWORD *)(v50 + 16);
              v32 = __OFSUB__(v58, v52);
              v30 = v58 == v52;
              v31 = v58 - v52 < 0;
              v57 = v55;
                v57 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v50 + v53) + 4 * v52);
            if ( (unsigned int)(*v57 - 1) >= 4 )
              v63 = *((_DWORD *)v127 + 1);
              v64 = *(_DWORD *)(v63 + 12);
              v67 = __OFSUB__(v64, v54);
              v65 = v64 == v54;
              v66 = v64 - v54 < 0;
              if ( v64 > v54 )
                v68 = *(_DWORD *)(v63 + 16);
                v67 = __OFSUB__(v68, v52);
                v65 = v68 == v52;
                v66 = v68 - v52 < 0;
              if ( !((unsigned __int8)(v66 ^ v67) | v65) )
                *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v63 + v53) + 4 * v52) = 5;
              v59 = v52 == v49;
              if ( v52 == v49 )
                v59 = v28 == v54;
              if ( v59 )
                v69 = *((_DWORD *)v127 + 1);
                v70 = *(_DWORD *)(v69 + 12);
                v73 = __OFSUB__(v70, v28);
                v71 = v70 == v28;
                v72 = v70 - v28 < 0;
                if ( v70 > v28 )
                  v74 = *(_DWORD *)(v69 + 16);
                  v73 = __OFSUB__(v74, v49);
                  v71 = v74 == v49;
                  v72 = v74 - v49 < 0;
                if ( !((unsigned __int8)(v72 ^ v73) | v71) )
                  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v69 + 12 * v28) + 4 * v49) = 3;
              else
                v60 = v52 == v128;
                if ( v52 == v128 )
                  v60 = v51 == v54;
                if ( v60 )
                  v61 = *((_DWORD *)v127 + 1);
                  if ( *(_DWORD *)(v61 + 12) > v51 && *(_DWORD *)(v61 + 16) > v128 )
                    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v61 + 12 * v51) + 4 * v128) = 3;
                  v62 = *(_DWORD *)(*((_DWORD *)v127 + 2) + 8);
                  if ( *(_DWORD *)(v62 + 12) > v51 && *(_DWORD *)(v62 + 16) > v128 )
                    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v62 + 12 * v51) + 4 * v128) = 0x800000;
            v53 += 12;
            ++v54;
          while ( v54 < *(_DWORD *)(HIDWORD(v50) + 12) );
        v47 = v125;
        ++v52;
      while ( v52 < *(_DWORD *)(v125 + 16) );
    v121 = v28;
    v75 = v122;
    v76 = (_BYTE *)v124;
    if ( v122 == (_BYTE *)v124 )
      v126 = v49;
      v77 = 0;
      v78 = v123;
      v80 = 0;
      v79 = 0;
        v81 = *v75;
        v82 = *((_DWORD *)v127 + 1);
        v50 = 0LL;
        if ( v81 == 3 )
          HIDWORD(v50) = 1;
        if ( v81 == 2 )
          HIDWORD(v50) = -1;
        if ( v81 == 5 )
          LODWORD(v50) = 1;
        if ( v81 == 4 )
          LODWORD(v50) = -1;
        LODWORD(v50) = v50 + v51;
        v83 = (signed int)v50 < 0;
        if ( (signed int)v50 >= 0 )
          HIDWORD(v50) += v128;
          v83 = SHIDWORD(v50) < 0;
        if ( v83 )
          goto LABEL_190;
        v84 = *(_DWORD *)(v82 + 12);
        v87 = __OFSUB__(v84, (_DWORD)v50);
        v85 = v84 == (_DWORD)v50;
        v86 = v84 - (signed int)v50 < 0;
        if ( v84 > (signed int)v50 )
          v88 = *(_DWORD *)(v82 + 16);
          v87 = __OFSUB__(v88, HIDWORD(v50));
          v85 = v88 == HIDWORD(v50);
          v86 = v88 - HIDWORD(v50) < 0;
        if ( (unsigned __int8)(v86 ^ v87) | v85 )
LABEL_190:
          v89 = (_DWORD *)(v82 + 20);
          LODWORD(v50) = 3 * v50;
          v89 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)v82 + 4 * v50) + 4 * HIDWORD(v50));
        if ( !*v89 )
          if ( v77 == (_BYTE *)v79 )
            v90 = v80;
            LODWORD(v50) = v77 - v80;
            if ( v77 - v80 == -1 )
              sub_21E5A04("vector::_M_emplace_back_aux");
            HIDWORD(v50) = v77 - v80;
            if ( v77 == v80 )
              HIDWORD(v50) = 1;
            v91 = HIDWORD(v50) + v50;
            if ( (unsigned int)(HIDWORD(v50) + v50) < HIDWORD(v50) )
              v91 = -1;
            if ( v91 )
              v92 = v80;
              v93 = v50;
              v80 = j_operator new(v91);
              LOBYTE(v81) = *v75;
              LODWORD(v50) = v93;
              v90 = v92;
              v80 = 0;
            v94 = &v80[v50];
            v80[v50] = v81;
            if ( (void *)v79 != v90 )
              v95 = v90;
              j___aeabi_memmove_0((int)v80, (int)v90);
              v90 = v95;
            v77 = v94 + 1;
            if ( v90 )
              j_operator delete(v90);
            v79 = (int)&v80[v91];
            v76 = (_BYTE *)v124;
            v78 = v123;
          else
            *v77++ = v81;
        ++v75;
      while ( v76 != v75 );
    if ( v80 == v77 )
      v102 = *((_DWORD *)v127 + 1);
      v103 = *(_DWORD *)(v102 + 16);
      v104 = v103 < 0;
      if ( v103 >= 0 )
        LODWORD(v50) = *(_DWORD *)(v102 + 12);
        v104 = (signed int)v50 < 0;
      if ( !v104 )
        v105 = v50 + 1;
        v106 = 0;
          v107 = 0;
          v108 = 0;
            if ( *(_DWORD *)(v102 + 12) > v108 && *(_DWORD *)(v102 + 16) > v106 )
              *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v102 + v107) + 4 * v106) = 5;
            ++v108;
            v107 += 12;
          while ( v105 != v108 );
          v30 = v106++ == v103;
        while ( !v30 );
      v99 = v80;
      v109 = v121 < 0;
      if ( v121 >= 0 )
        v109 = v126 < 0;
      if ( !v109 )
        v110 = *(_DWORD *)(v120 + 12);
        v113 = __OFSUB__(v110, v121);
        v111 = v110 == v121;
        v112 = v110 - v121 < 0;
        if ( v110 > v121 )
          v114 = *(_DWORD *)(v120 + 16);
          v113 = __OFSUB__(v114, v126);
          v111 = v114 == v126;
          v112 = v114 - v126 < 0;
        if ( !((unsigned __int8)(v112 ^ v113) | v111) )
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v120 + 12 * v121) + 4 * v126) = v78;
      v96 = 0;
      v97 = 0;
      if ( v77 != v80 )
        v97 = j_Random::_genRandInt32(*((Random **)v127 + 7)) % (v77 - v80);
      v98 = v80[v97];
      v100 = 0;
      if ( v98 == 5 )
        v100 = 1;
      if ( v98 == 4 )
        v100 = -1;
      if ( v98 == 3 )
        v96 = 1;
      if ( v98 == 2 )
        v96 = -1;
      v101 = (WoodlandMansionPieces::MansionGrid *)j_WoodlandMansionPieces::MansionGrid::_recursiveCorridor(
                                                     v127,
                                                     *((WoodlandMansionPieces::SimpleGrid **)v127 + 1),
                                                     v100 + v51,
                                                     v96 + v128,
                                                     v98,
                                                     4);
        v101 = (WoodlandMansionPieces::MansionGrid *)j_WoodlandMansionPieces::MansionGrid::_cleanEdges(
                                                       v101,
                                                       *((WoodlandMansionPieces::SimpleGrid **)v127 + 1));
      while ( v101 );
    if ( v99 )
      j_operator delete(v99);
  if ( ptra )
    j_j_j__ZdlPv_7(ptra);
}


int __fastcall WoodlandMansionPieces::MansionPiecePlacer::_traverseWallPiece(int *a1, int a2, _WORD *a3)
{
  _WORD *v3; // r4@1
  int v4; // r8@1
  int v5; // r6@1
  _WORD *v6; // r5@1
  Facing *v7; // r0@1
  TemplateStructurePiece *v8; // r7@1
  signed __int8 v9; // r2@1
  __int64 v10; // r0@1
  Facing *v11; // r0@5
  int result; // r0@5
  int v13; // [sp+8h] [bp-38h]@5
  int v14; // [sp+Ch] [bp-34h]@5
  int v15; // [sp+10h] [bp-30h]@5
  char v16; // [sp+14h] [bp-2Ch]@1
  TemplateStructurePiece *v17; // [sp+20h] [bp-20h]@1

  v3 = a3;
  v4 = *a1;
  v5 = a2;
  v6 = a3 + 2;
  v7 = j_RotationUtil::rotate((RotationUtil *)*a3, 5, (signed __int8)a3);
  j_BlockPos::relative((BlockPos *)&v16, (int)v6, (int)v7, 7);
  v8 = (TemplateStructurePiece *)j_operator new(0xA0u);
  j_WoodlandMansionPieces::WoodlandMansionPiece::WoodlandMansionPiece(v8, v4, (int *)v3 + 4, (int)&v16, *v3, 0);
  v17 = v8;
  v10 = *(_QWORD *)(v5 + 4);
  if ( (_DWORD)v10 == HIDWORD(v10) )
  {
    j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
      (_QWORD *)v5,
      (int *)&v17);
    if ( v17 )
      (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  }
  else
    v17 = 0;
    *(_DWORD *)v10 = v8;
    *(_DWORD *)(v5 + 4) = v10 + 4;
  v11 = j_RotationUtil::rotate((RotationUtil *)*v3, 3, v9);
  j_BlockPos::relative((BlockPos *)&v13, (int)v6, (int)v11, 8);
  *((_DWORD *)v3 + 1) = v13;
  *((_DWORD *)v3 + 2) = v14;
  result = v15;
  *((_DWORD *)v3 + 3) = v15;
  return result;
}


void __fastcall WoodlandMansionPieces::SecondFloorRoomCollection::get1x2FrontEntrance(WoodlandMansionPieces::SecondFloorRoomCollection *this, Random *a2, int a3, int a4)
{
  WoodlandMansionPieces::SecondFloorRoomCollection::get1x2FrontEntrance(this, a2, a3, a4);
}


void __fastcall WoodlandMansionPieces::MansionGrid::_identifyRooms(WoodlandMansionPieces::MansionGrid *this, WoodlandMansionPieces::SimpleGrid *a2, WoodlandMansionPieces::SimpleGrid *a3)
{
  WoodlandMansionPieces::MansionGrid::_identifyRooms(this, a2, a3);
}


void __fastcall WoodlandMansionPieces::WoodlandMansionPiece::_handleDataMarker(int a1, const void **a2, int a3, const BlockPos *a4, Random *a5, int a6)
{
  WoodlandMansionPieces::WoodlandMansionPiece::_handleDataMarker(a1, a2, a3, a4, a5, a6);
}


void __fastcall WoodlandMansionPieces::FirstFloorRoomCollection::get1x2Secret(WoodlandMansionPieces::FirstFloorRoomCollection *this, Random *a2, Random *a3)
{
  WoodlandMansionPieces::FirstFloorRoomCollection::get1x2Secret(this, a2, a3);
}


void __fastcall WoodlandMansionPieces::MansionPiecePlacer::createMansion(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, void *a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63)
{
  WoodlandMansionPieces::MansionPiecePlacer::createMansion(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15,
    a16,
    a17,
    a18,
    a19,
    a20,
    a21,
    a22,
    a23,
    a24,
    a25,
    a26,
    a27,
    a28,
    a29,
    a30,
    a31,
    a32,
    a33,
    a34,
    a35,
    a36,
    a37,
    a38,
    a39,
    a40,
    a41,
    a42,
    a43,
    a44,
    a45,
    a46,
    a47,
    a48,
    a49,
    a50,
    a51,
    a52,
    a53,
    a54,
    a55,
    a56,
    a57,
    a58,
    a59,
    a60,
    a61,
    a62,
    a63);
}


void __fastcall WoodlandMansionPieces::MansionPiecePlacer::_addRoom1x1(int a1, int a2, int a3, int a4, int a5, int a6)
{
  WoodlandMansionPieces::MansionPiecePlacer::_addRoom1x1(a1, a2, a3, a4, a5, a6);
}


unsigned int __fastcall WoodlandMansionPieces::MansionPiecePlacer::_traverseTurn(int *a1, int a2, _WORD *a3)
{
  _WORD *v3; // r4@1
  int *v4; // r7@1
  int v5; // r6@1
  Facing *v6; // r0@1
  __int64 v7; // r0@1
  signed __int8 v8; // r2@2
  Facing *v9; // r0@5
  signed __int8 v10; // r2@5
  Facing *v11; // r0@5
  Rotation v12; // r2@5
  unsigned int result; // r0@5
  int v14; // [sp+4h] [bp-3Ch]@5
  int v15; // [sp+8h] [bp-38h]@5
  int v16; // [sp+Ch] [bp-34h]@5
  int v17; // [sp+10h] [bp-30h]@5
  int v18; // [sp+14h] [bp-2Ch]@5
  int v19; // [sp+18h] [bp-28h]@5
  int v20; // [sp+1Ch] [bp-24h]@1
  int v21; // [sp+20h] [bp-20h]@1
  int v22; // [sp+24h] [bp-1Ch]@1
  int v23; // [sp+28h] [bp-18h]@1

  v3 = a3;
  v4 = a1;
  v5 = a2;
  v6 = j_RotationUtil::rotate((RotationUtil *)*a3, 3, (signed __int8)a3);
  j_BlockPos::relative((BlockPos *)&v21, (int)(v3 + 2), (int)v6, -1);
  *((_DWORD *)v3 + 1) = v21;
  *((_DWORD *)v3 + 2) = v22;
  *((_DWORD *)v3 + 3) = v23;
  j_std::make_unique<WoodlandMansionPieces::WoodlandMansionPiece,StructureManager &,char const(&)[12],BlockPos &,Rotation &>(
    (TemplateStructurePiece **)&v20,
    *v4,
    "wall_corner",
    (int)(v3 + 2),
    v3);
  v7 = *(_QWORD *)(v5 + 4);
  if ( (_DWORD)v7 == HIDWORD(v7) )
  {
    j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
      (_QWORD *)v5,
      &v20);
    if ( v20 )
      (*(void (**)(void))(*(_DWORD *)v20 + 4))();
  }
  else
    HIDWORD(v7) = v20;
    v8 = 0;
    v20 = 0;
    *(_DWORD *)v7 = HIDWORD(v7);
    *(_DWORD *)(v5 + 4) = v7 + 4;
  v9 = j_RotationUtil::rotate((RotationUtil *)*v3, 3, v8);
  j_BlockPos::relative((BlockPos *)&v17, (int)(v3 + 2), (int)v9, -7);
  *((_DWORD *)v3 + 1) = v17;
  *((_DWORD *)v3 + 2) = v18;
  *((_DWORD *)v3 + 3) = v19;
  v11 = j_RotationUtil::rotate((RotationUtil *)*v3, 4, v10);
  j_BlockPos::relative((BlockPos *)&v14, (int)(v3 + 2), (int)v11, -6);
  *((_DWORD *)v3 + 1) = v14;
  *((_DWORD *)v3 + 2) = v15;
  *((_DWORD *)v3 + 3) = v16;
  result = j_RotationUtil::getRotated((RotationUtil *)*v3, 1, v12);
  *v3 = result;
  return result;
}


void __fastcall WoodlandMansionPieces::MansionPiecePlacer::_addRoom2x2Secret(int a1, int a2, int a3, RotationUtil *this, int a5)
{
  WoodlandMansionPieces::MansionPiecePlacer::_addRoom2x2Secret(a1, a2, a3, this, a5);
}


void __fastcall WoodlandMansionPieces::FirstFloorRoomCollection::get1x2Secret(WoodlandMansionPieces::FirstFloorRoomCollection *this, Random *a2, Random *a3)
{
  WoodlandMansionPieces::FirstFloorRoomCollection *v3; // r4@1
  char v4; // r0@1
  const void **v5; // r0@1
  void *v6; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  v4 = j_Random::_genRandInt32(a3);
  j_Util::toString<int,(void *)0,(void *)0>((void **)&v9, (v4 & 1) + 1);
  v5 = sub_21E82D8((const void **)&v9, 0, (unsigned int)"1x2_s", (_BYTE *)5);
  *(_DWORD *)v3 = *v5;
  *v5 = &unk_28898CC;
  v6 = (void *)(v9 - 12);
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
      j_j_j_j__ZdlPv_9(v6);
  }
}


void __fastcall WoodlandMansionPieces::FirstFloorRoomCollection::get1x2SideEntrance(WoodlandMansionPieces::FirstFloorRoomCollection *this, Random *a2, int a3)
{
  WoodlandMansionPieces::FirstFloorRoomCollection::get1x2SideEntrance(this, a2, a3);
}


Facing *__fastcall WoodlandMansionPieces::MansionPiecePlacer::_traverseOuterWalls(__int64 a1, __int64 a2, signed int a3, int a4, int a5, int a6, int a7)
{
  Facing *result; // r0@1
  int v8; // r1@1
  int v9; // r5@1
  Facing *v10; // r9@2
  signed int v11; // r0@2
  int v12; // r11@6
  int v13; // r6@6
  signed int v14; // r0@6
  int v15; // r4@6
  int v16; // r8@10
  bool v17; // nf@10
  _DWORD *v18; // r0@10
  int v19; // r0@12
  unsigned __int8 v20; // vf@12
  int v21; // r0@13
  _DWORD *v22; // r0@16
  int v23; // r0@18
  int v24; // r0@19
  int v25; // r0@22
  signed int v26; // r1@22
  int v27; // r4@26
  unsigned __int8 v28; // r0@26
  signed __int8 v29; // r2@26
  int v30; // r1@26
  signed int v31; // r0@26
  _DWORD *v32; // r1@30
  int v33; // r0@31
  int v34; // r1@32
  int v35; // r1@33
  Facing *v36; // r0@36
  signed __int8 v37; // r2@36
  Facing *v38; // r0@36
  Rotation v39; // r2@36
  signed __int8 v40; // r1@36
  int v41; // r7@36
  signed __int8 v42; // r1@37
  signed int v43; // r6@37
  bool v44; // zf@37
  bool v45; // zf@43
  bool v46; // zf@50
  int v47; // [sp+Ch] [bp-54h]@1
  __int64 v48; // [sp+10h] [bp-50h]@1
  int v49; // [sp+18h] [bp-48h]@1
  __int64 v50; // [sp+1Ch] [bp-44h]@1
  int v51; // [sp+24h] [bp-3Ch]@36
  int v52; // [sp+28h] [bp-38h]@36
  int v53; // [sp+2Ch] [bp-34h]@36
  int v54; // [sp+30h] [bp-30h]@36
  int v55; // [sp+34h] [bp-2Ch]@36
  int v56; // [sp+38h] [bp-28h]@36

  v50 = a2;
  v48 = a1;
  result = (Facing *)a3;
  v8 = a4;
  v9 = a5;
  v49 = HIDWORD(a2) + 20;
  v47 = a2 + 4;
  while ( 1 )
  {
    v10 = result;
    v11 = 0;
    if ( v10 == (Facing *)3 )
      v11 = 1;
    if ( v10 == (Facing *)2 )
      v11 = -1;
    v12 = v9;
    v13 = v11 + v9;
    v14 = 0;
    v15 = v8;
    if ( v10 == (Facing *)5 )
      v14 = 1;
    if ( v10 == (Facing *)4 )
      v14 = -1;
    v16 = v14 + v8;
    v17 = v14 + v8 < 0;
    v18 = (_DWORD *)v49;
    if ( !v17 )
    {
      v18 = (_DWORD *)v49;
      if ( v13 >= 0 )
      {
        v19 = *(_DWORD *)(HIDWORD(v50) + 12);
        v20 = __OFSUB__(v19, v16);
        v44 = v19 == v16;
        v17 = v19 - v16 < 0;
        v18 = (_DWORD *)v49;
        if ( !((unsigned __int8)(v17 ^ v20) | v44) )
        {
          v21 = *(_DWORD *)(HIDWORD(v50) + 16);
          v20 = __OFSUB__(v21, v13);
          v44 = v21 == v13;
          v17 = v21 - v13 < 0;
          v18 = (_DWORD *)v49;
          if ( !((unsigned __int8)(v17 ^ v20) | v44) )
          {
            LOBYTE(v8) = 3 * v16;
            v18 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)HIDWORD(v50) + 12 * v16) + 4 * v13);
          }
        }
      }
    }
    if ( (unsigned int)(*v18 - 1) >= 4 )
      j_WoodlandMansionPieces::MansionPiecePlacer::_traverseTurn((int *)v48, SHIDWORD(v48), (_WORD *)v50);
      v41 = a6;
      v43 = j_Facing::getClockWise(v10, v42);
      v44 = v15 == a6;
      if ( v15 == a6 )
        v44 = v9 == a7;
      if ( !v44 || (result = (Facing *)a3, v8 = a6, v9 = a7, v43 != a3) )
        j_WoodlandMansionPieces::MansionPiecePlacer::_traverseWallPiece((int *)v48, SHIDWORD(v48), (_WORD *)v50);
        v8 = v15;
        v9 = v12;
        result = (Facing *)v43;
    else
      v22 = (_DWORD *)v49;
      if ( v16 >= 0 )
        v22 = (_DWORD *)v49;
        if ( v13 >= 0 )
          v23 = *(_DWORD *)(HIDWORD(v50) + 12);
          v20 = __OFSUB__(v23, v16);
          v44 = v23 == v16;
          v17 = v23 - v16 < 0;
          v22 = (_DWORD *)v49;
            v24 = *(_DWORD *)(HIDWORD(v50) + 16);
            v20 = __OFSUB__(v24, v13);
            v44 = v24 == v13;
            v17 = v24 - v13 < 0;
            v22 = (_DWORD *)v49;
            if ( !((unsigned __int8)(v17 ^ v20) | v44) )
            {
              LOBYTE(v8) = 3 * v16;
              v22 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)HIDWORD(v50) + 12 * v16) + 4 * v13);
            }
      if ( (unsigned int)(*v22 - 1) > 3 )
        goto LABEL_56;
      v25 = (unsigned __int8)j_Facing::getCounterClockWise(v10, v8);
      v26 = 0;
      if ( (unsigned __int8)v25 == 5 )
        v26 = 1;
      if ( v25 == 4 )
        v26 = -1;
      v27 = v26 + v16;
      v28 = j_Facing::getCounterClockWise(v10, v26);
      v30 = v28;
      v44 = v28 == 3;
      v31 = 0;
      if ( v44 )
        v31 = 1;
      if ( v30 == 2 )
        v31 = -1;
      v32 = (_DWORD *)v49;
      if ( v27 >= 0 )
        v33 = v31 + v13;
        v32 = (_DWORD *)v49;
        if ( v33 >= 0 )
          v34 = *(_DWORD *)(HIDWORD(v50) + 12);
          v20 = __OFSUB__(v34, v27);
          v44 = v34 == v27;
          v17 = v34 - v27 < 0;
          v32 = (_DWORD *)v49;
            v35 = *(_DWORD *)(HIDWORD(v50) + 16);
            v20 = __OFSUB__(v35, v33);
            v44 = v35 == v33;
            v17 = v35 - v33 < 0;
            v32 = (_DWORD *)v49;
              v29 = 3 * v27;
              v32 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)HIDWORD(v50) + 12 * v27) + 4 * v33);
      if ( (unsigned int)(*v32 - 1) > 3 )
LABEL_56:
        v41 = a6;
        v45 = v10 == (Facing *)(unsigned __int8)a3;
        if ( v10 == (Facing *)(unsigned __int8)a3 )
          v45 = v16 == a6;
        if ( !v45 || (v8 = a6, v9 = a7, result = (Facing *)a3, v13 != a7) )
          j_WoodlandMansionPieces::MansionPiecePlacer::_traverseWallPiece((int *)v48, SHIDWORD(v48), (_WORD *)v50);
          v8 = v16;
          v9 = v13;
          result = v10;
      else
        v36 = j_RotationUtil::rotate((RotationUtil *)*(_WORD *)v50, 3, v29);
        j_BlockPos::relative((BlockPos *)&v54, v47, (int)v36, 6);
        *(_DWORD *)(v50 + 4) = v54;
        *(_DWORD *)(v50 + 8) = v55;
        *(_DWORD *)(v50 + 12) = v56;
        v38 = j_RotationUtil::rotate((RotationUtil *)*(_WORD *)v50, 5, v37);
        j_BlockPos::relative((BlockPos *)&v51, v47, (int)v38, 8);
        *(_DWORD *)(v50 + 4) = v51;
        *(_DWORD *)(v50 + 8) = v52;
        *(_DWORD *)(v50 + 12) = v53;
        *(_WORD *)v50 = j_RotationUtil::getRotated((RotationUtil *)*(_WORD *)v50, 3, v39);
        result = (Facing *)j_Facing::getCounterClockWise(v10, v40);
        v8 = v16;
        v9 = v13;
    if ( v8 == v41 )
      v46 = v9 == a7;
      if ( v9 == a7 )
        v46 = (unsigned __int8)result == (unsigned __int8)a3;
      if ( v46 )
        return result;
  }
}


WoodlandMansionPieces::SimpleGrid *__fastcall WoodlandMansionPieces::SimpleGrid::SimpleGrid(WoodlandMansionPieces::SimpleGrid *this, int a2, int a3, int a4)
{
  WoodlandMansionPieces::SimpleGrid *v4; // r4@1
  char *v5; // r12@1
  int v6; // r12@2
  int v7; // r5@3
  int v8; // r6@3
  unsigned int v9; // r2@4
  int v10; // r3@4
  int v11; // r0@4
  unsigned int v12; // r7@4

  v4 = this;
  v5 = (char *)this + 8;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *(_DWORD *)v5 = 0;
  *((_DWORD *)v5 + 1) = a2;
  *((_DWORD *)v5 + 2) = a3;
  *((_DWORD *)v5 + 3) = a4;
  if ( a2 )
  {
    j_std::vector<std::vector<int,std::allocator<int>>,std::allocator<std::vector<int,std::allocator<int>>>>::_M_default_append(
      (int)this,
      a2);
    v6 = *((_DWORD *)v4 + 3);
    if ( v6 > 0 )
    {
      v7 = 0;
      v8 = 0;
      do
      {
        v9 = *((_DWORD *)v4 + 4);
        v10 = *(_DWORD *)(*(_DWORD *)v4 + v7);
        v11 = *(_DWORD *)v4 + v7;
        v12 = (*(_DWORD *)(v11 + 4) - v10) >> 2;
        if ( v9 <= v12 )
        {
          if ( v9 < v12 )
            *(_DWORD *)(v11 + 4) = v10 + 4 * v9;
        }
        else
          j_std::vector<int,std::allocator<int>>::_M_default_append(v11, v9 - v12);
          v6 = *((_DWORD *)v4 + 3);
        ++v8;
        v7 += 12;
      }
      while ( v8 < v6 );
    }
  }
  return v4;
}


signed int __fastcall WoodlandMansionPieces::MansionGrid::get1x2RoomDirection(WoodlandMansionPieces::MansionGrid *this, const WoodlandMansionPieces::SimpleGrid *a2, int a3, int a4, int a5, int a6)
{
  _BYTE *v6; // r1@1
  int v7; // r8@2
  int v8; // r5@3
  signed int v9; // r7@3
  signed int v10; // r4@3
  int v11; // r6@11
  _WORD *v12; // r4@11
  int v13; // r7@12
  int v14; // r4@13
  bool v15; // zf@13
  bool v16; // nf@13
  unsigned __int8 v17; // vf@13
  int v18; // r4@14
  signed int result; // r0@18

  v6 = (_BYTE *)Facing::Plane::HORIZONTAL;
  if ( Facing::Plane::HORIZONTAL == dword_2803214 )
  {
LABEL_18:
    result = 6;
  }
  else
    v7 = *(_DWORD *)(*((_DWORD *)this + 2) + 4 * a5);
    while ( 1 )
    {
      v8 = *v6;
      v9 = 0;
      v10 = 0;
      if ( v8 == 3 )
        v9 = 1;
      if ( v8 == 2 )
        v9 = -1;
      if ( v8 == 5 )
        v10 = 1;
      if ( v8 == 4 )
        v10 = -1;
      v11 = v10 + a3;
      v12 = (_WORD *)(v7 + 20);
      if ( v11 >= 0 )
      {
        v13 = v9 + a4;
        v12 = (_WORD *)(v7 + 20);
        if ( v13 >= 0 )
        {
          v14 = *(_DWORD *)(v7 + 12);
          v17 = __OFSUB__(v14, v11);
          v15 = v14 == v11;
          v16 = v14 - v11 < 0;
          v12 = (_WORD *)(v7 + 20);
          if ( !((unsigned __int8)(v16 ^ v17) | v15) )
          {
            v18 = *(_DWORD *)(v7 + 16);
            v17 = __OFSUB__(v18, v13);
            v15 = v18 == v13;
            v16 = v18 - v13 < 0;
            v12 = (_WORD *)(v7 + 20);
            if ( !((unsigned __int8)(v16 ^ v17) | v15) )
              v12 = (_WORD *)(*(_DWORD *)(*(_DWORD *)v7 + 12 * v11) + 4 * v13);
          }
        }
      }
      if ( *v12 == a6 )
        break;
      if ( (_BYTE *)dword_2803214 == ++v6 )
        goto LABEL_18;
    }
    result = (char)v8;
  return result;
}


signed int __fastcall WoodlandMansionPieces::MansionGrid::isRoomId(WoodlandMansionPieces::MansionGrid *this, const WoodlandMansionPieces::SimpleGrid *a2, int a3, int a4, int a5, int a6)
{
  bool v6; // nf@1
  int v7; // r0@1
  int v8; // r1@4
  bool v9; // zf@4
  bool v10; // nf@4
  unsigned __int8 v11; // vf@4
  int v12; // r1@5
  _WORD *v13; // r0@7
  int v14; // r1@9
  signed int result; // r0@9

  v6 = a3 < 0;
  v7 = *(_DWORD *)(*((_DWORD *)this + 2) + 4 * a5);
  if ( a3 >= 0 )
    v6 = a4 < 0;
  if ( v6 )
    goto LABEL_13;
  v8 = *(_DWORD *)(v7 + 12);
  v11 = __OFSUB__(v8, a3);
  v9 = v8 == a3;
  v10 = v8 - a3 < 0;
  if ( v8 > a3 )
  {
    v12 = *(_DWORD *)(v7 + 16);
    v11 = __OFSUB__(v12, a4);
    v9 = v12 == a4;
    v10 = v12 - a4 < 0;
  }
  if ( (unsigned __int8)(v10 ^ v11) | v9 )
LABEL_13:
    v13 = (_WORD *)(v7 + 20);
  else
    v13 = (_WORD *)(*(_DWORD *)(*(_DWORD *)v7 + 12 * a3) + 4 * a4);
  v14 = *v13;
  result = 0;
  if ( v14 == a6 )
    result = 1;
  return result;
}


void __fastcall WoodlandMansionPieces::SecondFloorRoomCollection::get1x2SideEntrance(WoodlandMansionPieces::SecondFloorRoomCollection *this, Random *a2, int a3, int a4)
{
  WoodlandMansionPieces::SecondFloorRoomCollection *v4; // r4@1
  char v5; // r0@3
  const void **v6; // r0@3
  void *v7; // r0@3
  unsigned int *v8; // r2@5
  signed int v9; // r1@7
  int v10; // [sp+0h] [bp-20h]@3

  v4 = this;
  if ( a4 == 1 )
  {
    sub_21E94B4((void **)this, "1x2_c_stairs");
  }
  else
    v5 = j_Random::_genRandInt32((Random *)a3);
    j_Util::toString<int,(void *)0,(void *)0>((void **)&v10, (v5 & 3) + 1);
    v6 = sub_21E82D8((const void **)&v10, 0, (unsigned int)"1x2_c", (_BYTE *)5);
    *(_DWORD *)v4 = *v6;
    *v6 = &unk_28898CC;
    v7 = (void *)(v10 - 12);
    if ( (int *)(v10 - 12) != &dword_28898C0 )
    {
      v8 = (unsigned int *)(v10 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 <= 0 )
        j_j_j_j__ZdlPv_9(v7);
    }
}


void __fastcall WoodlandMansionPieces::SecondFloorRoomCollection::get1x1(WoodlandMansionPieces::SecondFloorRoomCollection *this, Random *a2, Random *a3)
{
  WoodlandMansionPieces::SecondFloorRoomCollection::get1x1(this, a2, a3);
}


void __fastcall WoodlandMansionPieces::MansionPiecePlacer::_addRoom1x2(int a1, int a2, int a3, RotationUtil *this, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, int a36, int a37, int a38, int a39, int a40, int a41, int a42, int a43, int a44, int a45, int a46, int a47, int a48, int a49, int a50, int a51, int a52, int a53, int a54, int a55, int a56, int a57, int a58, int a59, int a60, int a61, int a62, int a63)
{
  int v63; // r10@1
  unsigned __int64 *v64; // r7@1
  RotationUtil *v65; // r5@1
  int v66; // r6@1
  bool v67; // zf@1
  Facing *v68; // r0@5
  unsigned __int64 v69; // kr00_8@5
  TemplateStructurePiece *v70; // r6@5
  __int64 v71; // r0@5
  bool v72; // zf@7
  Facing *v73; // r0@11
  signed __int8 v74; // r2@11
  Facing *v75; // r0@11
  unsigned __int64 v76; // kr08_8@11
  TemplateStructurePiece *v77; // r6@11
  __int64 v78; // r0@11
  void *v79; // r0@15
  unsigned int *v80; // r2@16
  signed int v81; // r1@18
  bool v82; // zf@20
  Facing *v83; // r0@24
  signed __int8 v84; // r2@24
  Facing *v85; // r0@24
  unsigned __int64 v86; // kr10_8@24
  Rotation v87; // r2@24
  __int16 v88; // r4@24
  TemplateStructurePiece *v89; // r5@24
  __int64 v90; // r0@24
  bool v91; // zf@33
  Facing *v92; // r0@37
  unsigned __int64 v93; // kr18_8@37
  TemplateStructurePiece *v94; // r6@37
  __int64 v95; // r0@37
  bool v96; // zf@46
  Facing *v97; // r0@50
  unsigned __int64 v98; // kr20_8@50
  Rotation v99; // r2@50
  __int16 v100; // r4@50
  TemplateStructurePiece *v101; // r5@50
  __int64 v102; // r0@50
  bool v103; // zf@59
  Facing *v104; // r0@63
  unsigned __int64 v105; // kr28_8@63
  Rotation v106; // r2@63
  __int16 v107; // r4@63
  TemplateStructurePiece *v108; // r5@63
  __int64 v109; // r0@63
  bool v110; // zf@72
  Facing *v111; // r0@76
  signed __int8 v112; // r2@76
  Facing *v113; // r0@76
  unsigned __int64 v114; // kr30_8@76
  Rotation v115; // r2@76
  __int16 v116; // r4@76
  TemplateStructurePiece *v117; // r5@76
  __int64 v118; // r0@76
  bool v119; // zf@85
  Facing *v120; // r0@89
  signed __int8 v121; // r2@89
  Facing *v122; // r0@89
  unsigned __int64 v123; // kr38_8@89
  Rotation v124; // r2@89
  __int16 v125; // r4@89
  TemplateStructurePiece *v126; // r5@89
  __int64 v127; // r0@89
  bool v128; // zf@98
  Facing *v129; // r0@102
  signed __int8 v130; // r2@102
  Facing *v131; // r0@102
  unsigned __int64 v132; // kr40_8@102
  TemplateStructurePiece *v133; // r6@102
  __int64 v134; // r0@102
  bool v135; // zf@111
  Facing *v136; // r0@115
  signed __int8 v137; // r2@115
  Facing *v138; // r0@115
  unsigned __int64 v139; // kr48_8@115
  Rotation v140; // r2@115
  __int16 v141; // r4@115
  TemplateStructurePiece *v142; // r5@115
  __int64 v143; // r0@115
  bool v144; // zf@124
  Facing *v145; // r0@128
  unsigned __int64 v146; // kr50_8@128
  Rotation v147; // r2@128
  __int16 v148; // r4@128
  TemplateStructurePiece *v149; // r5@128
  __int64 v150; // r0@128
  bool v151; // zf@137
  Facing *v152; // r0@141
  signed __int8 v153; // r2@141
  Facing *v154; // r0@141
  unsigned __int64 v155; // kr58_8@141
  Rotation v156; // r2@141
  __int16 v157; // r4@141
  TemplateStructurePiece *v158; // r5@141
  __int64 v159; // r0@141
  bool v160; // zf@150
  Facing *v161; // r0@154
  unsigned __int64 v162; // kr60_8@154
  Rotation v163; // r2@154
  __int16 v164; // r4@154
  TemplateStructurePiece *v165; // r5@154
  __int64 v166; // r0@154
  bool v167; // zf@163
  Facing *v168; // r0@167
  signed __int8 v169; // r2@167
  Facing *v170; // r0@167
  unsigned __int64 v171; // kr68_8@167
  TemplateStructurePiece *v172; // r6@167
  __int64 v173; // r0@167
  int v174; // [sp+8h] [bp-1A0h]@167
  TemplateStructurePiece *v175; // [sp+Ch] [bp-19Ch]@167
  int v176; // [sp+10h] [bp-198h]@167
  int v177; // [sp+14h] [bp-194h]@167
  int v178; // [sp+18h] [bp-190h]@167
  int v179; // [sp+1Ch] [bp-18Ch]@167
  int v180; // [sp+20h] [bp-188h]@167
  int v181; // [sp+24h] [bp-184h]@167
  int v182; // [sp+28h] [bp-180h]@154
  TemplateStructurePiece *v183; // [sp+2Ch] [bp-17Ch]@154
  char v184; // [sp+30h] [bp-178h]@154
  int v185; // [sp+3Ch] [bp-16Ch]@141
  TemplateStructurePiece *v186; // [sp+40h] [bp-168h]@141
  int v187; // [sp+44h] [bp-164h]@141
  int v188; // [sp+48h] [bp-160h]@141
  int v189; // [sp+4Ch] [bp-15Ch]@141
  int v190; // [sp+50h] [bp-158h]@141
  int v191; // [sp+54h] [bp-154h]@141
  int v192; // [sp+58h] [bp-150h]@141
  int v193; // [sp+5Ch] [bp-14Ch]@128
  TemplateStructurePiece *v194; // [sp+60h] [bp-148h]@128
  char v195; // [sp+64h] [bp-144h]@128
  int v196; // [sp+70h] [bp-138h]@115
  TemplateStructurePiece *v197; // [sp+74h] [bp-134h]@115
  int v198; // [sp+78h] [bp-130h]@115
  int v199; // [sp+7Ch] [bp-12Ch]@115
  int v200; // [sp+80h] [bp-128h]@115
  int v201; // [sp+84h] [bp-124h]@115
  int v202; // [sp+88h] [bp-120h]@115
  int v203; // [sp+8Ch] [bp-11Ch]@115
  int v204; // [sp+90h] [bp-118h]@102
  TemplateStructurePiece *v205; // [sp+94h] [bp-114h]@102
  int v206; // [sp+98h] [bp-110h]@102
  int v207; // [sp+9Ch] [bp-10Ch]@102
  int v208; // [sp+A0h] [bp-108h]@102
  int v209; // [sp+A4h] [bp-104h]@102
  int v210; // [sp+A8h] [bp-100h]@102
  int v211; // [sp+ACh] [bp-FCh]@102
  int v212; // [sp+B0h] [bp-F8h]@89
  TemplateStructurePiece *v213; // [sp+B4h] [bp-F4h]@89
  int v214; // [sp+B8h] [bp-F0h]@89
  int v215; // [sp+BCh] [bp-ECh]@89
  int v216; // [sp+C0h] [bp-E8h]@89
  int v217; // [sp+C4h] [bp-E4h]@89
  int v218; // [sp+C8h] [bp-E0h]@89
  int v219; // [sp+CCh] [bp-DCh]@89
  int v220; // [sp+D0h] [bp-D8h]@76
  TemplateStructurePiece *v221; // [sp+D4h] [bp-D4h]@76
  int v222; // [sp+D8h] [bp-D0h]@76
  int v223; // [sp+DCh] [bp-CCh]@76
  int v224; // [sp+E0h] [bp-C8h]@76
  int v225; // [sp+E4h] [bp-C4h]@76
  int v226; // [sp+E8h] [bp-C0h]@76
  int v227; // [sp+ECh] [bp-BCh]@76
  int v228; // [sp+F0h] [bp-B8h]@63
  TemplateStructurePiece *v229; // [sp+F4h] [bp-B4h]@63
  char v230; // [sp+F8h] [bp-B0h]@63
  int v231; // [sp+104h] [bp-A4h]@50
  TemplateStructurePiece *v232; // [sp+108h] [bp-A0h]@50
  char v233; // [sp+10Ch] [bp-9Ch]@50
  int v234; // [sp+118h] [bp-90h]@37
  TemplateStructurePiece *v235; // [sp+11Ch] [bp-8Ch]@37
  char v236; // [sp+120h] [bp-88h]@37
  int v237; // [sp+12Ch] [bp-7Ch]@24
  TemplateStructurePiece *v238; // [sp+130h] [bp-78h]@24
  int v239; // [sp+134h] [bp-74h]@24
  int v240; // [sp+138h] [bp-70h]@24
  int v241; // [sp+13Ch] [bp-6Ch]@24
  int v242; // [sp+140h] [bp-68h]@24
  int v243; // [sp+144h] [bp-64h]@24
  int v244; // [sp+148h] [bp-60h]@24
  int v245; // [sp+14Ch] [bp-5Ch]@11
  TemplateStructurePiece *v246; // [sp+150h] [bp-58h]@11
  int v247; // [sp+154h] [bp-54h]@11
  int v248; // [sp+158h] [bp-50h]@11
  int v249; // [sp+15Ch] [bp-4Ch]@11
  int v250; // [sp+160h] [bp-48h]@11
  int v251; // [sp+164h] [bp-44h]@11
  int v252; // [sp+168h] [bp-40h]@11
  int v253; // [sp+16Ch] [bp-3Ch]@5
  TemplateStructurePiece *v254; // [sp+170h] [bp-38h]@5
  char v255; // [sp+174h] [bp-34h]@5

  v63 = a2;
  v64 = (unsigned __int64 *)a1;
  v65 = this;
  v66 = a3;
  v67 = (unsigned __int8)a5 == 3;
  if ( (unsigned __int8)a5 == 3 )
  {
    LOBYTE(a3) = a6;
    v67 = (unsigned __int8)a6 == 5;
  }
  if ( v67 )
    v68 = j_RotationUtil::rotate(this, 5, a3);
    j_BlockPos::relative((BlockPos *)&v255, v66, (int)v68, 1);
    v69 = *v64;
    (*(void (__fastcall **)(int *, int, _DWORD, int))(*(_DWORD *)a7 + 16))(&v253, a7, *v64 >> 32, a8);
    v70 = (TemplateStructurePiece *)j_operator new(0xA0u);
    j_WoodlandMansionPieces::WoodlandMansionPiece::WoodlandMansionPiece(v70, v69, &v253, (int)&v255, (__int16)v65, 0);
    v254 = v70;
    v71 = *(_QWORD *)(v63 + 4);
    if ( (_DWORD)v71 == HIDWORD(v71) )
    {
      j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
        (_QWORD *)v63,
        (int *)&v254);
      if ( v254 )
        (*(void (**)(void))(*(_DWORD *)v254 + 4))();
    }
    else
      v254 = 0;
      *(_DWORD *)v71 = v70;
      *(_DWORD *)(v63 + 4) = v71 + 4;
    v254 = 0;
    v79 = (void *)(v253 - 12);
    if ( (int *)(v253 - 12) != &dword_28898C0 )
      v80 = (unsigned int *)(v253 - 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v81 = __ldrex(v80);
        while ( __strex(v81 - 1, v80) );
        goto LABEL_184;
      }
      goto LABEL_183;
  else
    v72 = (unsigned __int8)a5 == 2;
    if ( (unsigned __int8)a5 == 2 )
      LOBYTE(a3) = a6;
      v72 = (unsigned __int8)a6 == 5;
    if ( v72 )
      v73 = j_RotationUtil::rotate(this, 5, a3);
      j_BlockPos::relative((BlockPos *)&v250, v66, (int)v73, 1);
      v75 = j_RotationUtil::rotate(v65, 3, v74);
      j_BlockPos::relative((BlockPos *)&v247, (int)&v250, (int)v75, 6);
      v250 = v247;
      v251 = v248;
      v252 = v249;
      v76 = *v64;
      (*(void (__fastcall **)(int *, int, _DWORD, int))(*(_DWORD *)a7 + 16))(&v245, a7, *v64 >> 32, a8);
      v77 = (TemplateStructurePiece *)j_operator new(0xA0u);
      j_WoodlandMansionPieces::WoodlandMansionPiece::WoodlandMansionPiece(v77, v76, &v245, (int)&v250, (__int16)v65, 1);
      v246 = v77;
      v78 = *(_QWORD *)(v63 + 4);
      if ( (_DWORD)v78 == HIDWORD(v78) )
        j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
          (_QWORD *)v63,
          (int *)&v246);
        if ( v246 )
          (*(void (**)(void))(*(_DWORD *)v246 + 4))();
      else
        v246 = 0;
        *(_DWORD *)v78 = v77;
        *(_DWORD *)(v63 + 4) = v78 + 4;
      v246 = 0;
      v79 = (void *)(v245 - 12);
      if ( (int *)(v245 - 12) != &dword_28898C0 )
        v80 = (unsigned int *)(v245 - 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v81 = __ldrex(v80);
          while ( __strex(v81 - 1, v80) );
          goto LABEL_184;
        }
        goto LABEL_183;
      v82 = (unsigned __int8)a5 == 2;
      if ( (unsigned __int8)a5 == 2 )
        LOBYTE(a3) = a6;
        v82 = (unsigned __int8)a6 == 4;
      if ( v82 )
        v83 = j_RotationUtil::rotate(this, 5, a3);
        j_BlockPos::relative((BlockPos *)&v242, v66, (int)v83, 7);
        v85 = j_RotationUtil::rotate(v65, 3, v84);
        j_BlockPos::relative((BlockPos *)&v239, (int)&v242, (int)v85, 6);
        v242 = v239;
        v243 = v240;
        v244 = v241;
        v86 = *v64;
        (*(void (__fastcall **)(int *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a7 + 16))(&v237, a7, *v64 >> 32, a8);
        v88 = j_RotationUtil::getRotated(v65, 2, v87);
        v89 = (TemplateStructurePiece *)j_operator new(0xA0u);
        j_WoodlandMansionPieces::WoodlandMansionPiece::WoodlandMansionPiece(v89, v86, &v237, (int)&v242, v88, 0);
        v238 = v89;
        v90 = *(_QWORD *)(v63 + 4);
        if ( (_DWORD)v90 == HIDWORD(v90) )
          j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
            (_QWORD *)v63,
            (int *)&v238);
          if ( v238 )
            (*(void (**)(void))(*(_DWORD *)v238 + 4))();
        else
          v238 = 0;
          *(_DWORD *)v90 = v89;
          *(_DWORD *)(v63 + 4) = v90 + 4;
        v238 = 0;
        v79 = (void *)(v237 - 12);
        if ( (int *)(v237 - 12) != &dword_28898C0 )
          v80 = (unsigned int *)(v237 - 4);
          if ( &pthread_create )
          {
            __dmb();
            do
              v81 = __ldrex(v80);
            while ( __strex(v81 - 1, v80) );
            goto LABEL_184;
          }
          goto LABEL_183;
        v91 = (unsigned __int8)a5 == 3;
        if ( (unsigned __int8)a5 == 3 )
          LOBYTE(a3) = a6;
          v91 = (unsigned __int8)a6 == 4;
        if ( v91 )
          v92 = j_RotationUtil::rotate(this, 5, a3);
          j_BlockPos::relative((BlockPos *)&v236, v66, (int)v92, 7);
          v93 = *v64;
          (*(void (__fastcall **)(int *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a7 + 16))(&v234, a7, *v64 >> 32, a8);
          v94 = (TemplateStructurePiece *)j_operator new(0xA0u);
          j_WoodlandMansionPieces::WoodlandMansionPiece::WoodlandMansionPiece(
            v94,
            v93,
            &v234,
            (int)&v236,
            (__int16)v65,
            2);
          v235 = v94;
          v95 = *(_QWORD *)(v63 + 4);
          if ( (_DWORD)v95 == HIDWORD(v95) )
            j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
              (_QWORD *)v63,
              (int *)&v235);
            if ( v235 )
              (*(void (**)(void))(*(_DWORD *)v235 + 4))();
          else
            v235 = 0;
            *(_DWORD *)v95 = v94;
            *(_DWORD *)(v63 + 4) = v95 + 4;
          v235 = 0;
          v79 = (void *)(v234 - 12);
          if ( (int *)(v234 - 12) != &dword_28898C0 )
            v80 = (unsigned int *)(v234 - 4);
            if ( &pthread_create )
            {
              __dmb();
              do
                v81 = __ldrex(v80);
              while ( __strex(v81 - 1, v80) );
              goto LABEL_184;
            }
            goto LABEL_183;
          v96 = (unsigned __int8)a5 == 5;
          if ( (unsigned __int8)a5 == 5 )
            LOBYTE(a3) = a6;
            v96 = (unsigned __int8)a6 == 3;
          if ( v96 )
            v97 = j_RotationUtil::rotate(this, 5, a3);
            j_BlockPos::relative((BlockPos *)&v233, v66, (int)v97, 1);
            v98 = *v64;
            (*(void (__fastcall **)(int *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a7 + 16))(&v231, a7, *v64 >> 32, a8);
            v100 = j_RotationUtil::getRotated(v65, 1, v99);
            v101 = (TemplateStructurePiece *)j_operator new(0xA0u);
            j_WoodlandMansionPieces::WoodlandMansionPiece::WoodlandMansionPiece(v101, v98, &v231, (int)&v233, v100, 1);
            v232 = v101;
            v102 = *(_QWORD *)(v63 + 4);
            if ( (_DWORD)v102 == HIDWORD(v102) )
              j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
                (_QWORD *)v63,
                (int *)&v232);
              if ( v232 )
                (*(void (**)(void))(*(_DWORD *)v232 + 4))();
            else
              v232 = 0;
              *(_DWORD *)v102 = v101;
              *(_DWORD *)(v63 + 4) = v102 + 4;
            v232 = 0;
            v79 = (void *)(v231 - 12);
            if ( (int *)(v231 - 12) != &dword_28898C0 )
              v80 = (unsigned int *)(v231 - 4);
              if ( &pthread_create )
              {
                __dmb();
                do
                  v81 = __ldrex(v80);
                while ( __strex(v81 - 1, v80) );
                goto LABEL_184;
              }
              goto LABEL_183;
            v103 = (unsigned __int8)a5 == 4;
            if ( (unsigned __int8)a5 == 4 )
              LOBYTE(a3) = a6;
              v103 = (unsigned __int8)a6 == 3;
            if ( v103 )
              v104 = j_RotationUtil::rotate(this, 5, a3);
              j_BlockPos::relative((BlockPos *)&v230, v66, (int)v104, 7);
              v105 = *v64;
              (*(void (__fastcall **)(int *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a7 + 16))(&v228, a7, *v64 >> 32, a8);
              v107 = j_RotationUtil::getRotated(v65, 1, v106);
              v108 = (TemplateStructurePiece *)j_operator new(0xA0u);
              j_WoodlandMansionPieces::WoodlandMansionPiece::WoodlandMansionPiece(
                v108,
                v105,
                &v228,
                (int)&v230,
                v107,
                0);
              v229 = v108;
              v109 = *(_QWORD *)(v63 + 4);
              if ( (_DWORD)v109 == HIDWORD(v109) )
                j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
                  (_QWORD *)v63,
                  (int *)&v229);
                if ( v229 )
                  (*(void (**)(void))(*(_DWORD *)v229 + 4))();
              else
                v229 = 0;
                *(_DWORD *)v109 = v108;
                *(_DWORD *)(v63 + 4) = v109 + 4;
              v229 = 0;
              v79 = (void *)(v228 - 12);
              if ( (int *)(v228 - 12) != &dword_28898C0 )
                v80 = (unsigned int *)(v228 - 4);
                if ( &pthread_create )
                {
                  __dmb();
                  do
                    v81 = __ldrex(v80);
                  while ( __strex(v81 - 1, v80) );
                  goto LABEL_184;
                }
                goto LABEL_183;
              v110 = (unsigned __int8)a5 == 4;
              if ( (unsigned __int8)a5 == 4 )
                LOBYTE(a3) = a6;
                v110 = (unsigned __int8)a6 == 2;
              if ( v110 )
                v111 = j_RotationUtil::rotate(this, 5, a3);
                j_BlockPos::relative((BlockPos *)&v225, v66, (int)v111, 7);
                v113 = j_RotationUtil::rotate(v65, 3, v112);
                j_BlockPos::relative((BlockPos *)&v222, (int)&v225, (int)v113, 6);
                v225 = v222;
                v226 = v223;
                v227 = v224;
                v114 = *v64;
                (*(void (__fastcall **)(int *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a7 + 16))(&v220, a7, *v64 >> 32, a8);
                v116 = j_RotationUtil::getRotated(v65, 1, v115);
                v117 = (TemplateStructurePiece *)j_operator new(0xA0u);
                j_WoodlandMansionPieces::WoodlandMansionPiece::WoodlandMansionPiece(
                  v117,
                  v114,
                  &v220,
                  (int)&v225,
                  v116,
                  2);
                v221 = v117;
                v118 = *(_QWORD *)(v63 + 4);
                if ( (_DWORD)v118 == HIDWORD(v118) )
                  j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
                    (_QWORD *)v63,
                    (int *)&v221);
                  if ( v221 )
                    (*(void (**)(void))(*(_DWORD *)v221 + 4))();
                else
                  v221 = 0;
                  *(_DWORD *)v118 = v117;
                  *(_DWORD *)(v63 + 4) = v118 + 4;
                v221 = 0;
                v79 = (void *)(v220 - 12);
                if ( (int *)(v220 - 12) != &dword_28898C0 )
                  v80 = (unsigned int *)(v220 - 4);
                  if ( &pthread_create )
                  {
                    __dmb();
                    do
                      v81 = __ldrex(v80);
                    while ( __strex(v81 - 1, v80) );
                    goto LABEL_184;
                  }
                  goto LABEL_183;
                v119 = (unsigned __int8)a5 == 5;
                if ( (unsigned __int8)a5 == 5 )
                  LOBYTE(a3) = a6;
                  v119 = (unsigned __int8)a6 == 2;
                if ( v119 )
                  v120 = j_RotationUtil::rotate(this, 5, a3);
                  j_BlockPos::relative((BlockPos *)&v217, v66, (int)v120, 1);
                  v122 = j_RotationUtil::rotate(v65, 3, v121);
                  j_BlockPos::relative((BlockPos *)&v214, (int)&v217, (int)v122, 6);
                  v217 = v214;
                  v218 = v215;
                  v219 = v216;
                  v123 = *v64;
                  (*(void (__fastcall **)(int *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a7 + 16))(
                    &v212,
                    a7,
                    *v64 >> 32,
                    a8);
                  v125 = j_RotationUtil::getRotated(v65, 3, v124);
                  v126 = (TemplateStructurePiece *)j_operator new(0xA0u);
                  j_WoodlandMansionPieces::WoodlandMansionPiece::WoodlandMansionPiece(
                    v126,
                    v123,
                    (int)&v217,
                    v125,
                    0);
                  v213 = v126;
                  v127 = *(_QWORD *)(v63 + 4);
                  if ( (_DWORD)v127 == HIDWORD(v127) )
                    j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
                      (_QWORD *)v63,
                      (int *)&v213);
                    if ( v213 )
                      (*(void (**)(void))(*(_DWORD *)v213 + 4))();
                  else
                    v213 = 0;
                    *(_DWORD *)v127 = v126;
                    *(_DWORD *)(v63 + 4) = v127 + 4;
                  v213 = 0;
                  v79 = (void *)(v212 - 12);
                  if ( (int *)(v212 - 12) != &dword_28898C0 )
                    v80 = (unsigned int *)(v212 - 4);
                    if ( &pthread_create )
                    {
                      __dmb();
                      do
                        v81 = __ldrex(v80);
                      while ( __strex(v81 - 1, v80) );
                      goto LABEL_184;
                    }
                    goto LABEL_183;
                  v128 = (unsigned __int8)a5 == 2;
                  if ( (unsigned __int8)a5 == 2 )
                    LOBYTE(a3) = a6;
                    v128 = (unsigned __int8)a6 == 3;
                  if ( v128 )
                    v129 = j_RotationUtil::rotate(this, 5, a3);
                    j_BlockPos::relative((BlockPos *)&v209, v66, (int)v129, 1);
                    v131 = j_RotationUtil::rotate(v65, 2, v130);
                    j_BlockPos::relative((BlockPos *)&v206, (int)&v209, (int)v131, 8);
                    v209 = v206;
                    v210 = v207;
                    v211 = v208;
                    v132 = *v64;
                    (*(void (__fastcall **)(int *, int, _DWORD, int))(*(_DWORD *)a7 + 20))(&v204, a7, *v64 >> 32, a8);
                    v133 = (TemplateStructurePiece *)j_operator new(0xA0u);
                    j_WoodlandMansionPieces::WoodlandMansionPiece::WoodlandMansionPiece(
                      v133,
                      v132,
                      &v204,
                      (int)&v209,
                      (__int16)v65,
                      0);
                    v205 = v133;
                    v134 = *(_QWORD *)(v63 + 4);
                    if ( (_DWORD)v134 == HIDWORD(v134) )
                      j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
                        (_QWORD *)v63,
                        (int *)&v205);
                      if ( v205 )
                        (*(void (**)(void))(*(_DWORD *)v205 + 4))();
                    else
                      v205 = 0;
                      *(_DWORD *)v134 = v133;
                      *(_DWORD *)(v63 + 4) = v134 + 4;
                    v205 = 0;
                    v79 = (void *)(v204 - 12);
                    if ( (int *)(v204 - 12) != &dword_28898C0 )
                      v80 = (unsigned int *)(v204 - 4);
                      if ( &pthread_create )
                      {
                        __dmb();
                        do
                          v81 = __ldrex(v80);
                        while ( __strex(v81 - 1, v80) );
                        goto LABEL_184;
                      }
                      goto LABEL_183;
                    v135 = (unsigned __int8)a5 == 3;
                    if ( (unsigned __int8)a5 == 3 )
                      LOBYTE(a3) = a6;
                      v135 = (unsigned __int8)a6 == 2;
                    if ( v135 )
                      v136 = j_RotationUtil::rotate(this, 5, a3);
                      j_BlockPos::relative((BlockPos *)&v201, v66, (int)v136, 7);
                      v138 = j_RotationUtil::rotate(v65, 3, v137);
                      j_BlockPos::relative((BlockPos *)&v198, (int)&v201, (int)v138, 14);
                      v201 = v198;
                      v202 = v199;
                      v203 = v200;
                      v139 = *v64;
                      (*(void (__fastcall **)(int *, int, _DWORD, int))(*(_DWORD *)a7 + 20))(&v196, a7, *v64 >> 32, a8);
                      v141 = j_RotationUtil::getRotated(v65, 2, v140);
                      v142 = (TemplateStructurePiece *)j_operator new(0xA0u);
                      j_WoodlandMansionPieces::WoodlandMansionPiece::WoodlandMansionPiece(
                        v142,
                        v139,
                        &v196,
                        (int)&v201,
                        v141,
                        0);
                      v197 = v142;
                      v143 = *(_QWORD *)(v63 + 4);
                      if ( (_DWORD)v143 == HIDWORD(v143) )
                        j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
                          (_QWORD *)v63,
                          (int *)&v197);
                        if ( v197 )
                          (*(void (**)(void))(*(_DWORD *)v197 + 4))();
                      else
                        v197 = 0;
                        *(_DWORD *)v143 = v142;
                        *(_DWORD *)(v63 + 4) = v143 + 4;
                      v197 = 0;
                      v79 = (void *)(v196 - 12);
                      if ( (int *)(v196 - 12) != &dword_28898C0 )
                        v80 = (unsigned int *)(v196 - 4);
                        if ( &pthread_create )
                        {
                          __dmb();
                          do
                            v81 = __ldrex(v80);
                          while ( __strex(v81 - 1, v80) );
                          goto LABEL_184;
                        }
                        goto LABEL_183;
                      v144 = (unsigned __int8)a5 == 5;
                      if ( (unsigned __int8)a5 == 5 )
                        LOBYTE(a3) = a6;
                        v144 = (unsigned __int8)a6 == 4;
                      if ( v144 )
                        v145 = j_RotationUtil::rotate(this, 5, a3);
                        j_BlockPos::relative((BlockPos *)&v195, v66, (int)v145, 15);
                        v146 = *v64;
                        (*(void (__fastcall **)(int *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a7 + 20))(
                          &v193,
                          a7,
                          *v64 >> 32,
                          a8);
                        v148 = j_RotationUtil::getRotated(v65, 1, v147);
                        v149 = (TemplateStructurePiece *)j_operator new(0xA0u);
                        j_WoodlandMansionPieces::WoodlandMansionPiece::WoodlandMansionPiece(
                          v149,
                          v146,
                          (int)&v195,
                          v148,
                          0);
                        v194 = v149;
                        v150 = *(_QWORD *)(v63 + 4);
                        if ( (_DWORD)v150 == HIDWORD(v150) )
                          j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
                            (_QWORD *)v63,
                            (int *)&v194);
                          if ( v194 )
                            (*(void (**)(void))(*(_DWORD *)v194 + 4))();
                        else
                          v194 = 0;
                          *(_DWORD *)v150 = v149;
                          *(_DWORD *)(v63 + 4) = v150 + 4;
                        v194 = 0;
                        v79 = (void *)(v193 - 12);
                        if ( (int *)(v193 - 12) != &dword_28898C0 )
                          v80 = (unsigned int *)(v193 - 4);
                          if ( &pthread_create )
                          {
                            __dmb();
                            do
                              v81 = __ldrex(v80);
                            while ( __strex(v81 - 1, v80) );
                            goto LABEL_184;
                          }
                          goto LABEL_183;
                        v151 = (unsigned __int8)a5 == 4;
                        if ( (unsigned __int8)a5 == 4 )
                          LOBYTE(a3) = a6;
                          v151 = (unsigned __int8)a6 == 5;
                        if ( v151 )
                          v152 = j_RotationUtil::rotate(this, 4, a3);
                          j_BlockPos::relative((BlockPos *)&v190, v66, (int)v152, 7);
                          v154 = j_RotationUtil::rotate(v65, 3, v153);
                          j_BlockPos::relative((BlockPos *)&v187, (int)&v190, (int)v154, 6);
                          v190 = v187;
                          v191 = v188;
                          v192 = v189;
                          v155 = *v64;
                          (*(void (__fastcall **)(int *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a7 + 20))(
                            &v185,
                            a7,
                            *v64 >> 32,
                            a8);
                          v157 = j_RotationUtil::getRotated(v65, 3, v156);
                          v158 = (TemplateStructurePiece *)j_operator new(0xA0u);
                          j_WoodlandMansionPieces::WoodlandMansionPiece::WoodlandMansionPiece(
                            v158,
                            v155,
                            (int)&v190,
                            v157,
                            0);
                          v186 = v158;
                          v159 = *(_QWORD *)(v63 + 4);
                          if ( (_DWORD)v159 == HIDWORD(v159) )
                            j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
                              (_QWORD *)v63,
                              (int *)&v186);
                            if ( v186 )
                              (*(void (**)(void))(*(_DWORD *)v186 + 4))();
                          else
                            v186 = 0;
                            *(_DWORD *)v159 = v158;
                            *(_DWORD *)(v63 + 4) = v159 + 4;
                          v186 = 0;
                          v79 = (void *)(v185 - 12);
                          if ( (int *)(v185 - 12) != &dword_28898C0 )
                            v80 = (unsigned int *)(v185 - 4);
                            if ( &pthread_create )
                            {
                              __dmb();
                              do
                                v81 = __ldrex(v80);
                              while ( __strex(v81 - 1, v80) );
                              goto LABEL_184;
                            }
                            goto LABEL_183;
                          v160 = (unsigned __int8)a5 == 5;
                          if ( (unsigned __int8)a5 == 5 )
                            LOBYTE(a3) = a6;
                            v160 = (unsigned __int8)a6 == 1;
                          if ( v160 )
                            v161 = j_RotationUtil::rotate(this, 5, a3);
                            j_BlockPos::relative((BlockPos *)&v184, v66, (int)v161, 15);
                            v162 = *v64;
                            (*(void (__fastcall **)(int *, int, _DWORD))(*(_DWORD *)a7 + 24))(&v182, a7, *v64 >> 32);
                            v164 = j_RotationUtil::getRotated(v65, 1, v163);
                            v165 = (TemplateStructurePiece *)j_operator new(0xA0u);
                            j_WoodlandMansionPieces::WoodlandMansionPiece::WoodlandMansionPiece(
                              v165,
                              v162,
                              &v182,
                              (int)&v184,
                              v164,
                              0);
                            v183 = v165;
                            v166 = *(_QWORD *)(v63 + 4);
                            if ( (_DWORD)v166 == HIDWORD(v166) )
                              j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
                                (_QWORD *)v63,
                                (int *)&v183);
                              if ( v183 )
                                (*(void (**)(void))(*(_DWORD *)v183 + 4))();
                            else
                              v183 = 0;
                              *(_DWORD *)v166 = v165;
                              *(_DWORD *)(v63 + 4) = v166 + 4;
                            v183 = 0;
                            v79 = (void *)(v182 - 12);
                            if ( (int *)(v182 - 12) != &dword_28898C0 )
                              v80 = (unsigned int *)(v182 - 4);
                              if ( &pthread_create )
                              {
                                __dmb();
                                do
                                  v81 = __ldrex(v80);
                                while ( __strex(v81 - 1, v80) );
                                goto LABEL_184;
                              }
                              goto LABEL_183;
                            v167 = (unsigned __int8)a5 == 3;
                            if ( (unsigned __int8)a5 == 3 )
                              v167 = (unsigned __int8)a6 == 1;
                            if ( v167 )
                              v168 = j_RotationUtil::rotate(this, 5, a3);
                              j_BlockPos::relative((BlockPos *)&v179, v66, (int)v168, 1);
                              v170 = j_RotationUtil::rotate(v65, 2, v169);
                              j_BlockPos::relative((BlockPos *)&v176, (int)&v179, (int)v170, 0);
                              v179 = v176;
                              v180 = v177;
                              v181 = v178;
                              v171 = *v64;
                              (*(void (__fastcall **)(int *, int, _DWORD))(*(_DWORD *)a7 + 24))(&v174, a7, *v64 >> 32);
                              v172 = (TemplateStructurePiece *)j_operator new(0xA0u);
                              j_WoodlandMansionPieces::WoodlandMansionPiece::WoodlandMansionPiece(
                                v172,
                                v171,
                                &v174,
                                (int)&v179,
                                (__int16)v65,
                                0);
                              v175 = v172;
                              v173 = *(_QWORD *)(v63 + 4);
                              if ( (_DWORD)v173 == HIDWORD(v173) )
                                j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
                                  (_QWORD *)v63,
                                  (int *)&v175);
                                if ( v175 )
                                  (*(void (**)(void))(*(_DWORD *)v175 + 4))();
                              else
                                v175 = 0;
                                *(_DWORD *)v173 = v172;
                                *(_DWORD *)(v63 + 4) = v173 + 4;
                              v175 = 0;
                              v79 = (void *)(v174 - 12);
                              if ( (int *)(v174 - 12) != &dword_28898C0 )
                                v80 = (unsigned int *)(v174 - 4);
                                if ( &pthread_create )
                                {
                                  __dmb();
                                  do
                                    v81 = __ldrex(v80);
                                  while ( __strex(v81 - 1, v80) );
                                  goto LABEL_184;
                                }
LABEL_183:
                                v81 = (*v80)--;
LABEL_184:
                                if ( v81 <= 0 )
                                  j_j_j_j__ZdlPv_9(v79);
                                return;
}


int __fastcall WoodlandMansionPieces::MansionGrid::_cleanEdges(WoodlandMansionPieces::MansionGrid *this, WoodlandMansionPieces::SimpleGrid *a2)
{
  signed int v2; // r5@1
  char v3; // r9@1
  signed int v4; // r6@2
  signed int v5; // r4@2
  int v6; // r10@3
  _DWORD *v7; // r7@4
  int v8; // r8@4
  signed int v9; // r12@4
  signed int v10; // r0@5
  char *v11; // r2@5
  char *v12; // r2@9
  unsigned int v13; // r3@12
  bool v14; // cf@12
  char *v15; // r2@12
  char *v16; // r2@18
  char *v17; // r2@23
  char *v18; // r2@33
  unsigned int v19; // r11@36
  char *v20; // r2@36
  char *v21; // r2@42
  char *v22; // r3@48
  char v23; // r2@55
  int v25; // [sp+0h] [bp-28h]@2

  v2 = *((_DWORD *)a2 + 4);
  v3 = 0;
  if ( v2 >= 1 )
  {
    v4 = *((_DWORD *)a2 + 3);
    v5 = 0;
    v25 = *(_DWORD *)a2 + 12;
    while ( 1 )
    {
      v6 = v5 + 1;
      if ( v4 >= 1 )
        break;
LABEL_65:
      ++v5;
      if ( v6 >= v2 )
        return v3 & 1;
    }
    v7 = (_DWORD *)v25;
    v8 = v5 - 1;
    v9 = 0;
      v10 = v9;
      v11 = (char *)a2 + 20;
      if ( (v9 | v5) >= 0 )
      {
        v11 = (char *)a2 + 20;
        if ( v2 > v5 )
          v11 = (char *)(*(v7 - 3) + 4 * v5);
      }
      ++v9;
      if ( *(_DWORD *)v11 )
        goto LABEL_64;
      v12 = (char *)a2 + 20;
      if ( v4 > v9 )
        v12 = (char *)a2 + 20;
          v12 = (char *)(*v7 + 4 * v5);
      v13 = 0;
      v14 = (unsigned int)(*(_DWORD *)v12 - 1) >= 4;
      v15 = (char *)a2 + 20;
      if ( !v14 )
        v13 = 1;
      if ( v10 >= 1 )
        v15 = (char *)a2 + 20;
        if ( v4 >= v10 )
        {
          v15 = (char *)a2 + 20;
          if ( v2 > v5 )
            v15 = (char *)(*(v7 - 6) + 4 * v5);
        }
      v14 = (unsigned int)(*(_DWORD *)v15 - 1) >= 4;
      v16 = (char *)a2 + 20;
        ++v13;
      if ( v4 > v10 )
        v16 = (char *)a2 + 20;
        if ( v2 > v6 )
          v16 = (char *)(*(v7 - 3) + 4 * v6);
      v14 = (unsigned int)(*(_DWORD *)v16 - 1) >= 4;
      v17 = (char *)a2 + 20;
      if ( v5 >= 1 )
        v17 = (char *)a2 + 20;
        if ( v4 > v10 )
          v17 = (char *)a2 + 20;
          if ( v2 >= v5 )
            v17 = (char *)(*(v7 - 3) + 4 * v8);
      if ( (unsigned int)(*(_DWORD *)v17 - 1) < 4 )
      if ( v13 >= 3 )
      if ( v13 == 2 )
        v18 = (char *)a2 + 20;
        if ( v4 > v9 )
          v18 = (char *)a2 + 20;
          if ( v2 > v6 )
            v18 = (char *)(*v7 + 4 * v6);
        v19 = 0;
        v14 = (unsigned int)(*(_DWORD *)v18 - 1) >= 4;
        v20 = (char *)a2 + 20;
        if ( !v14 )
          v19 = 1;
        if ( v10 >= 1 )
          v20 = (char *)a2 + 20;
          if ( v4 >= v10 )
          {
            v20 = (char *)a2 + 20;
            if ( v2 > v6 )
              v20 = (char *)(*(v7 - 6) + 4 * v6);
          }
        v14 = (unsigned int)(*(_DWORD *)v20 - 1) >= 4;
        v21 = (char *)a2 + 20;
          ++v19;
        if ( v5 >= 1 )
          v21 = (char *)a2 + 20;
          if ( v4 > v9 )
            v21 = (char *)a2 + 20;
            if ( v2 >= v5 )
              v21 = (char *)(*v7 + 4 * v8);
        v22 = (char *)a2 + 20;
        if ( (unsigned int)(*(_DWORD *)v21 - 1) < 4 )
          v22 = (char *)a2 + 20;
          if ( v5 >= 1 )
            v22 = (char *)a2 + 20;
            if ( v4 >= v10 )
            {
              v22 = (char *)a2 + 20;
              if ( v2 >= v5 )
                v22 = (char *)(*(v7 - 6) + 4 * v8);
            }
        v23 = 0;
        if ( (unsigned int)(*(_DWORD *)v22 - 1) < 4 )
        if ( v19 < 2 )
          v23 = 1;
        if ( v19 <= 1 )
          break;
        v3 |= v23;
LABEL_64:
      v2 = *(_QWORD *)((char *)a2 + 12) >> 32;
      v4 = *(_QWORD *)((char *)a2 + 12);
      v7 += 3;
      if ( v9 >= v4 )
        goto LABEL_65;
    v3 = 1;
    if ( v4 > v10 && v2 > v5 )
      *(_DWORD *)(*(v7 - 3) + 4 * v5) = 2;
      v3 = 1;
    goto LABEL_64;
  }
  return v3 & 1;
}


void __fastcall WoodlandMansionPieces::MansionPiecePlacer::_addRoom2x2Secret(int a1, int a2, int a3, RotationUtil *this, int a5)
{
  __int16 v5; // r5@1
  int v6; // r4@1
  __int64 *v7; // r7@1
  int v8; // r6@1
  Facing *v9; // r0@1
  __int64 v10; // kr00_8@1
  TemplateStructurePiece *v11; // r6@1
  __int64 v12; // r0@1
  void *v13; // r0@5
  unsigned int *v14; // r2@7
  signed int v15; // r1@9
  int v16; // [sp+8h] [bp-30h]@1
  TemplateStructurePiece *v17; // [sp+Ch] [bp-2Ch]@1
  char v18; // [sp+10h] [bp-28h]@1

  v5 = (signed __int16)this;
  v6 = a2;
  v7 = (__int64 *)a1;
  v8 = a3;
  v9 = j_RotationUtil::rotate(this, 5, a3);
  j_BlockPos::relative((BlockPos *)&v18, v8, (int)v9, 1);
  v10 = *v7;
  (*(void (__fastcall **)(int *))(*(_DWORD *)a5 + 32))(&v16);
  v11 = (TemplateStructurePiece *)j_operator new(0xA0u);
  j_WoodlandMansionPieces::WoodlandMansionPiece::WoodlandMansionPiece(v11, v10, &v16, (int)&v18, v5, 0);
  v17 = v11;
  v12 = *(_QWORD *)(v6 + 4);
  if ( (_DWORD)v12 == HIDWORD(v12) )
  {
    j_std::vector<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>,std::allocator<std::unique_ptr<StructurePiece,std::default_delete<StructurePiece>>>>::_M_emplace_back_aux<std::unique_ptr<WoodlandMansionPieces::WoodlandMansionPiece,std::default_delete<WoodlandMansionPieces::WoodlandMansionPiece>>>(
      (_QWORD *)v6,
      (int *)&v17);
    if ( v17 )
      (*(void (**)(void))(*(_DWORD *)v17 + 4))();
  }
  else
    v17 = 0;
    *(_DWORD *)v12 = v11;
    *(_DWORD *)(v6 + 4) = v12 + 4;
  v17 = 0;
  v13 = (void *)(v16 - 12);
  if ( (int *)(v16 - 12) != &dword_28898C0 )
    v14 = (unsigned int *)(v16 - 4);
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
      j_j_j_j__ZdlPv_9(v13);
}


int __fastcall WoodlandMansionPieces::MansionPiecePlacer::MansionPiecePlacer(int result, __int64 a2)
{
  *(_QWORD *)result = a2;
  return result;
}


void __fastcall WoodlandMansionPieces::SecondFloorRoomCollection::get1x1Secret(WoodlandMansionPieces::SecondFloorRoomCollection *this, Random *a2, Random *a3)
{
  WoodlandMansionPieces::SecondFloorRoomCollection *v3; // r4@1
  char v4; // r0@1
  const void **v5; // r0@1
  void *v6; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  v4 = j_Random::_genRandInt32(a3);
  j_Util::toString<int,(void *)0,(void *)0>((void **)&v9, (v4 & 3) + 1);
  v5 = sub_21E82D8((const void **)&v9, 0, (unsigned int)"1x1_as", (_BYTE *)6);
  *(_DWORD *)v3 = *v5;
  *v5 = &unk_28898CC;
  v6 = (void *)(v9 - 12);
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
      j_j_j_j__ZdlPv_9(v6);
  }
}


void __fastcall WoodlandMansionPieces::FirstFloorRoomCollection::get1x2FrontEntrance(WoodlandMansionPieces::FirstFloorRoomCollection *this, Random *a2, int a3)
{
  WoodlandMansionPieces::FirstFloorRoomCollection::get1x2FrontEntrance(this, a2, a3);
}


WoodlandMansionPieces::WoodlandMansionPiece *__fastcall WoodlandMansionPieces::WoodlandMansionPiece::WoodlandMansionPiece(WoodlandMansionPieces::WoodlandMansionPiece *this, StructureManager *a2)
{
  StructureManager *v2; // r4@1
  WoodlandMansionPieces::WoodlandMansionPiece *v3; // r5@1

  v2 = a2;
  v3 = this;
  j_TemplateStructurePiece::TemplateStructurePiece(this, 0);
  *(_DWORD *)v3 = &off_2724740;
  *((_DWORD *)v3 + 27) = v2;
  *((_DWORD *)v3 + 28) = &unk_28898CC;
  j___aeabi_memclr4_0((int)v3 + 124, 36);
  return v3;
}


int __fastcall WoodlandMansionPieces::MansionGrid::_recursiveCorridor(int result, WoodlandMansionPieces::SimpleGrid *a2, int a3, int a4, int a5, int a6)
{
  bool v6; // nf@2
  int v7; // r12@2
  int v8; // r0@5
  bool v9; // zf@5
  bool v10; // nf@5
  unsigned __int8 v11; // vf@5
  int v12; // r0@6
  signed int v13; // r7@9
  signed int v14; // r6@9
  bool v15; // nf@17
  int v16; // r0@20
  bool v17; // zf@20
  bool v18; // nf@20
  unsigned __int8 v19; // vf@20
  int v20; // r0@21
  char *v21; // r0@23
  int v22; // r0@25
  bool v23; // zf@25
  int v24; // r0@30
  bool v25; // zf@30
  bool v26; // nf@30
  unsigned __int8 v27; // vf@30
  int v28; // r0@31
  char *v29; // r6@34
  WoodlandMansionPieces::SimpleGrid *v30; // r9@34
  int v31; // r4@34
  int v32; // r10@34
  WoodlandMansionPieces::MansionGrid *v33; // r5@34
  int v34; // r1@35
  int v35; // r8@35
  signed int v36; // r0@38
  WoodlandMansionPieces::MansionGrid *v37; // r12@42
  int v38; // r3@42
  char *v39; // r5@46
  int v40; // r2@46
  int v41; // r5@48
  int v42; // r5@49
  int v43; // r7@51
  char *v44; // r5@52
  int v45; // r0@53
  int v46; // r0@57
  int v47; // r0@59
  signed __int8 v48; // r1@59
  signed int v49; // r10@59
  signed int v50; // r11@59
  signed int v51; // r7@67
  unsigned int v52; // r4@67
  unsigned __int8 v53; // r0@67
  char *v54; // r5@67
  int v55; // r1@68
  char *v56; // r2@68
  int v57; // r2@69
  int v58; // r2@70
  int v59; // r2@72
  bool v60; // zf@72
  bool v61; // zf@76
  bool v62; // nf@76
  unsigned __int8 v63; // vf@76
  int v64; // r2@77
  int v65; // r1@81
  unsigned int v66; // r1@89
  int v67; // r2@90
  char *v68; // r3@90
  int v69; // r3@91
  int v70; // r3@92
  int v71; // r3@94
  bool v72; // zf@94
  bool v73; // zf@98
  bool v74; // nf@98
  unsigned __int8 v75; // vf@98
  int v76; // r3@99
  unsigned int v77; // r1@103
  char *v78; // r3@104
  int v79; // r2@104
  int v80; // r3@105
  int v81; // r3@106
  int v82; // r3@108
  bool v83; // zf@108
  bool v84; // zf@112
  bool v85; // nf@112
  unsigned __int8 v86; // vf@112
  int v87; // r3@113
  unsigned int v88; // r1@117
  char *v89; // r3@118
  int v90; // r2@118
  int v91; // r3@119
  int v92; // r3@120
  int v93; // r3@122
  bool v94; // zf@122
  bool v95; // zf@126
  bool v96; // nf@126
  unsigned __int8 v97; // vf@126
  int v98; // r3@127
  unsigned int v99; // r1@131
  char *v100; // r3@132
  int v101; // r2@132
  int v102; // r3@133
  int v103; // r3@134
  int v104; // r3@136
  bool v105; // zf@136
  bool v106; // zf@140
  bool v107; // nf@140
  unsigned __int8 v108; // vf@140
  int v109; // r3@141
  unsigned int v110; // r1@145
  int v111; // r2@146
  char *v112; // r3@146
  int v113; // r3@147
  int v114; // r3@148
  int v115; // r3@150
  bool v116; // zf@150
  bool v117; // zf@154
  bool v118; // nf@154
  unsigned __int8 v119; // vf@154
  int v120; // r3@155
  unsigned int v121; // r1@159
  bool v122; // zf@160
  bool v123; // nf@160
  unsigned __int8 v124; // vf@160
  int v125; // r2@161
  bool v126; // zf@165
  bool v127; // zf@169
  bool v128; // nf@169
  unsigned __int8 v129; // vf@169
  int v130; // r2@170
  signed int v131; // [sp+Ch] [bp-3Ch]@13
  signed int v132; // [sp+10h] [bp-38h]@17
  int v133; // [sp+14h] [bp-34h]@23
  int v134; // [sp+18h] [bp-30h]@34
  int v135; // [sp+1Ch] [bp-2Ch]@13
  signed int v136; // [sp+20h] [bp-28h]@17

  if ( a6 >= 1 )
  {
    v6 = a3 < 0;
    v7 = result;
    if ( a3 >= 0 )
      v6 = a4 < 0;
    if ( !v6 )
    {
      v8 = *((_DWORD *)a2 + 3);
      v11 = __OFSUB__(v8, a3);
      v9 = v8 == a3;
      v10 = v8 - a3 < 0;
      if ( v8 > a3 )
      {
        v12 = *((_DWORD *)a2 + 4);
        v11 = __OFSUB__(v12, a4);
        v9 = v12 == a4;
        v10 = v12 - a4 < 0;
      }
      if ( !((unsigned __int8)(v10 ^ v11) | v9) )
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 12 * a3) + 4 * a4) = 1;
    }
    v13 = 0;
    v14 = 0;
    if ( (unsigned __int8)a5 == 3 )
      v13 = 1;
    if ( (unsigned __int8)a5 == 2 )
      v13 = -1;
    v131 = v13;
    v135 = v13 + a4;
    if ( (unsigned __int8)a5 == 5 )
      v14 = 1;
    if ( (unsigned __int8)a5 == 4 )
      v14 = -1;
    v132 = v14;
    v15 = v14 + a3 < 0;
    v136 = v14 + a3;
    if ( v14 + a3 >= 0 )
      v15 = v135 < 0;
    if ( v15 )
      goto LABEL_178;
    v16 = *((_DWORD *)a2 + 3);
    v19 = __OFSUB__(v16, v136);
    v17 = v16 == v136;
    v18 = v16 - v136 < 0;
    if ( v16 > v136 )
      v20 = *((_DWORD *)a2 + 4);
      v19 = __OFSUB__(v20, v135);
      v17 = v20 == v135;
      v18 = v20 - v135 < 0;
    if ( (unsigned __int8)(v18 ^ v19) | v17 )
LABEL_178:
      v21 = (char *)a2 + 20;
      v133 = a3;
    else
      v21 = (char *)(*(_DWORD *)(*(_DWORD *)a2 + 12 * v136) + 4 * v135);
    v22 = *(_DWORD *)v21;
    v23 = v22 == 0;
    if ( !v22 )
      v23 = (unsigned int)v136 >> 31 == 0;
    if ( v23 && v135 >= 0 )
      v24 = *((_DWORD *)a2 + 3);
      v27 = __OFSUB__(v24, v136);
      v25 = v24 == v136;
      v26 = v24 - v136 < 0;
      if ( v24 > v136 )
        v28 = *((_DWORD *)a2 + 4);
        v27 = __OFSUB__(v28, v135);
        v25 = v28 == v135;
        v26 = v28 - v135 < 0;
      if ( !((unsigned __int8)(v26 ^ v27) | v25) )
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 12 * v136) + 4 * v135) = 1;
    v29 = (char *)a2 + 20;
    v30 = a2;
    v31 = 0;
    v134 = a4;
    v32 = Facing::OPPOSITE_FACING[a5];
    v33 = (WoodlandMansionPieces::MansionGrid *)v7;
    while ( 1 )
      v35 = Facing::BY2DDATA[j_Random::_genRandInt32(*((Random **)v33 + 7)) & 3];
      if ( v35 != v32 && (v35 != 5 || !(j_Random::_genRandInt32(*((Random **)v33 + 7)) & 0x8000000)) )
        v36 = 0;
        if ( v35 == 3 )
          v36 = 1;
        if ( v35 == 2 )
          v36 = -1;
        v37 = v33;
        v38 = v36 + v135;
        v34 = 0;
        if ( v35 == 5 )
          v34 = 1;
        if ( v35 == 4 )
          v34 = -1;
        v39 = v29;
        v40 = v136 + v34;
        if ( v136 + v34 >= 0 )
        {
          v39 = v29;
          if ( v38 >= 0 )
          {
            v41 = *((_DWORD *)v30 + 3);
            v11 = __OFSUB__(v41, v40);
            v9 = v41 == v40;
            v6 = v41 - v40 < 0;
            v39 = v29;
            if ( !((unsigned __int8)(v6 ^ v11) | v9) )
            {
              v42 = *((_DWORD *)v30 + 4);
              v11 = __OFSUB__(v42, v38);
              v9 = v42 == v38;
              v6 = v42 - v38 < 0;
              v39 = v29;
              if ( !((unsigned __int8)(v6 ^ v11) | v9) )
                v39 = (char *)(*(_DWORD *)(*(_DWORD *)v30 + 12 * v40) + 4 * v38);
            }
          }
        }
        v43 = *(_DWORD *)v39;
        v33 = v37;
        if ( !v43 )
          v44 = v29;
          v34 = v136 + 2 * v34;
          if ( v34 >= 0 )
            v44 = v29;
            v45 = v135 + 2 * v36;
            if ( v45 >= 0 )
              v44 = v29;
              if ( *((_DWORD *)v30 + 3) > v34 )
              {
                v44 = v29;
                if ( *((_DWORD *)v30 + 4) > v45 )
                {
                  v34 = *(_DWORD *)(*(_DWORD *)v30 + 12 * v34);
                  v44 = (char *)(v34 + 4 * v45);
                }
              }
          v46 = *(_DWORD *)v44;
          v33 = v37;
          if ( !v46 )
            break;
      if ( ++v31 >= 8 )
        goto LABEL_59;
    j_WoodlandMansionPieces::MansionGrid::_recursiveCorridor(v37, v30, v40, v38, v35, a6 - 1);
LABEL_59:
    v47 = (unsigned __int8)j_Facing::getClockWise((Facing *)a5, v34);
    v49 = 0;
    v50 = 0;
    if ( (unsigned __int8)v47 == 3 )
      v49 = 1;
    if ( v47 == 2 )
      v49 = -1;
    if ( v47 == 5 )
      v50 = 1;
    if ( v47 == 4 )
      v50 = -1;
    v51 = 0;
    v52 = v50 + v133;
    v53 = j_Facing::getCounterClockWise((Facing *)a5, v48);
    v54 = v29;
    if ( v50 + v133 >= 0 )
      v55 = v49 + v134;
      v56 = v29;
      if ( v49 + v134 >= 0 )
        v57 = *((_DWORD *)v30 + 3);
        v11 = __OFSUB__(v57, v52);
        v9 = v57 == v52;
        v6 = ((v57 - v52) & 0x80000000) != 0;
        v56 = v29;
        if ( !((unsigned __int8)(v6 ^ v11) | v9) )
          v58 = *((_DWORD *)v30 + 4);
          v11 = __OFSUB__(v58, v55);
          v9 = v58 == v55;
          v6 = v58 - v55 < 0;
          v56 = v29;
          if ( !((unsigned __int8)(v6 ^ v11) | v9) )
            v56 = (char *)(*(_DWORD *)(*(_DWORD *)v30 + 12 * v52) + 4 * v55);
      v59 = *(_DWORD *)v56;
      v60 = v59 == 0;
      if ( !v59 )
        v60 = v52 >> 31 == 0;
      if ( v60 )
        v63 = 0;
        v61 = v55 == 0;
        v62 = v55 < 0;
        if ( v55 >= 0 )
          v64 = *((_DWORD *)v30 + 3);
          v63 = __OFSUB__(v64, v52);
          v61 = v64 == v52;
          v62 = ((v64 - v52) & 0x80000000) != 0;
        if ( !((unsigned __int8)(v62 ^ v63) | v61) && *((_DWORD *)v30 + 4) > v55 )
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v30 + 12 * v52) + 4 * v55) = 2;
    v65 = v53;
    v9 = v53 == 3;
    result = 0;
    if ( v9 )
      result = 1;
    if ( v65 == 2 )
      result = -1;
    if ( v65 == 5 )
      v51 = 1;
    if ( v65 == 4 )
      v51 = -1;
    v66 = v51 + v133;
    if ( v51 + v133 >= 0 )
      v67 = result + v134;
      v68 = v29;
      if ( result + v134 >= 0 )
        v69 = *((_DWORD *)v30 + 3);
        v11 = __OFSUB__(v69, v66);
        v9 = v69 == v66;
        v6 = ((v69 - v66) & 0x80000000) != 0;
        v68 = v29;
          v70 = *((_DWORD *)v30 + 4);
          v11 = __OFSUB__(v70, v67);
          v9 = v70 == v67;
          v6 = v70 - v67 < 0;
          v68 = v29;
            v68 = (char *)(*(_DWORD *)(*(_DWORD *)v30 + 12 * v66) + 4 * v67);
      v71 = *(_DWORD *)v68;
      v72 = v71 == 0;
      if ( !v71 )
        v72 = v66 >> 31 == 0;
      if ( v72 )
        v75 = 0;
        v73 = v67 == 0;
        v74 = v67 < 0;
        if ( v67 >= 0 )
          v76 = *((_DWORD *)v30 + 3);
          v75 = __OFSUB__(v76, v66);
          v73 = v76 == v66;
          v74 = ((v76 - v66) & 0x80000000) != 0;
        if ( !((unsigned __int8)(v74 ^ v75) | v73) && *((_DWORD *)v30 + 4) > v67 )
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v30 + 12 * v66) + 4 * v67) = 2;
    v77 = v136 + v50;
    if ( v136 + v50 >= 0 )
      v78 = v29;
      v79 = v135 + v49;
      if ( v135 + v49 >= 0 )
        v80 = *((_DWORD *)v30 + 3);
        v11 = __OFSUB__(v80, v77);
        v9 = v80 == v77;
        v6 = ((v80 - v77) & 0x80000000) != 0;
        v78 = v29;
          v81 = *((_DWORD *)v30 + 4);
          v11 = __OFSUB__(v81, v79);
          v9 = v81 == v79;
          v6 = v81 - v79 < 0;
          v78 = v29;
            v78 = (char *)(*(_DWORD *)(*(_DWORD *)v30 + 12 * v77) + 4 * v79);
      v82 = *(_DWORD *)v78;
      v83 = v82 == 0;
      if ( !v82 )
        v83 = v77 >> 31 == 0;
      if ( v83 )
        v86 = 0;
        v84 = v79 == 0;
        v85 = v79 < 0;
        if ( v79 >= 0 )
          v87 = *((_DWORD *)v30 + 3);
          v86 = __OFSUB__(v87, v77);
          v84 = v87 == v77;
          v85 = ((v87 - v77) & 0x80000000) != 0;
        if ( !((unsigned __int8)(v85 ^ v86) | v84) && *((_DWORD *)v30 + 4) > v79 )
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v30 + 12 * v77) + 4 * v79) = 2;
    v88 = v136 + v51;
    if ( v136 + v51 >= 0 )
      v89 = v29;
      v90 = v135 + result;
      if ( v135 + result >= 0 )
        v91 = *((_DWORD *)v30 + 3);
        v11 = __OFSUB__(v91, v88);
        v9 = v91 == v88;
        v6 = ((v91 - v88) & 0x80000000) != 0;
        v89 = v29;
          v92 = *((_DWORD *)v30 + 4);
          v11 = __OFSUB__(v92, v90);
          v9 = v92 == v90;
          v6 = v92 - v90 < 0;
          v89 = v29;
            v89 = (char *)(*(_DWORD *)(*(_DWORD *)v30 + 12 * v88) + 4 * v90);
      v93 = *(_DWORD *)v89;
      v94 = v93 == 0;
      if ( !v93 )
        v94 = v88 >> 31 == 0;
      if ( v94 )
        v97 = 0;
        v95 = v90 == 0;
        v96 = v90 < 0;
        if ( v90 >= 0 )
          v98 = *((_DWORD *)v30 + 3);
          v97 = __OFSUB__(v98, v88);
          v95 = v98 == v88;
          v96 = ((v98 - v88) & 0x80000000) != 0;
        if ( !((unsigned __int8)(v96 ^ v97) | v95) && *((_DWORD *)v30 + 4) > v90 )
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v30 + 12 * v88) + 4 * v90) = 2;
    v99 = v133 + 2 * v132;
    if ( (v99 & 0x80000000) == 0 )
      v100 = v29;
      v101 = v134 + 2 * v131;
      if ( v101 >= 0 )
        v102 = *((_DWORD *)v30 + 3);
        v11 = __OFSUB__(v102, v99);
        v9 = v102 == v99;
        v6 = ((v102 - v99) & 0x80000000) != 0;
        v100 = v29;
          v103 = *((_DWORD *)v30 + 4);
          v11 = __OFSUB__(v103, v101);
          v9 = v103 == v101;
          v6 = v103 - v101 < 0;
          v100 = v29;
            v100 = (char *)(*(_DWORD *)(*(_DWORD *)v30 + 12 * v99) + 4 * v101);
      v104 = *(_DWORD *)v100;
      v105 = v104 == 0;
      if ( !v104 )
        v105 = v99 >> 31 == 0;
      if ( v105 )
        v108 = 0;
        v106 = v101 == 0;
        v107 = v101 < 0;
        if ( v101 >= 0 )
          v109 = *((_DWORD *)v30 + 3);
          v108 = __OFSUB__(v109, v99);
          v106 = v109 == v99;
          v107 = ((v109 - v99) & 0x80000000) != 0;
        if ( !((unsigned __int8)(v107 ^ v108) | v106) && *((_DWORD *)v30 + 4) > v101 )
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v30 + 12 * v99) + 4 * v101) = 2;
    v110 = v133 + 2 * v50;
    if ( (v110 & 0x80000000) == 0 )
      v111 = v134 + 2 * v49;
      v112 = v29;
      if ( v111 >= 0 )
        v113 = *((_DWORD *)v30 + 3);
        v11 = __OFSUB__(v113, v110);
        v9 = v113 == v110;
        v6 = ((v113 - v110) & 0x80000000) != 0;
        v112 = v29;
          v114 = *((_DWORD *)v30 + 4);
          v11 = __OFSUB__(v114, v111);
          v9 = v114 == v111;
          v6 = v114 - v111 < 0;
          v112 = v29;
            v112 = (char *)(*(_DWORD *)(*(_DWORD *)v30 + 12 * v110) + 4 * v111);
      v115 = *(_DWORD *)v112;
      v116 = v115 == 0;
      if ( !v115 )
        v116 = v110 >> 31 == 0;
      if ( v116 )
        v119 = 0;
        v117 = v111 == 0;
        v118 = v111 < 0;
        if ( v111 >= 0 )
          v120 = *((_DWORD *)v30 + 3);
          v119 = __OFSUB__(v120, v110);
          v117 = v120 == v110;
          v118 = ((v120 - v110) & 0x80000000) != 0;
        if ( !((unsigned __int8)(v118 ^ v119) | v117) && *((_DWORD *)v30 + 4) > v111 )
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v30 + 12 * v110) + 4 * v111) = 2;
    v121 = v133 + 2 * v51;
    if ( (v121 & 0x80000000) == 0 )
      result = v134 + 2 * result;
      v124 = 0;
      v122 = result == 0;
      v123 = result < 0;
      if ( result >= 0 )
        v125 = *((_DWORD *)v30 + 3);
        v124 = __OFSUB__(v125, v121);
        v122 = v125 == v121;
        v123 = ((v125 - v121) & 0x80000000) != 0;
      if ( !((unsigned __int8)(v123 ^ v124) | v122) && *((_DWORD *)v30 + 4) > result )
        v54 = (char *)(*(_DWORD *)(*(_DWORD *)v30 + 12 * v121) + 4 * result);
      v126 = *(_DWORD *)v54 == 0;
      if ( !*(_DWORD *)v54 )
        v126 = v121 >> 31 == 0;
      if ( v126 )
        v129 = 0;
        v127 = result == 0;
        v128 = result < 0;
        if ( result >= 0 )
          v130 = *((_DWORD *)v30 + 3);
          v129 = __OFSUB__(v130, v121);
          v127 = v130 == v121;
          v128 = ((v130 - v121) & 0x80000000) != 0;
        if ( !((unsigned __int8)(v128 ^ v129) | v127) && *((_DWORD *)v30 + 4) > result )
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v30 + 12 * v121) + 4 * result) = 2;
  }
  return result;
}


void __fastcall WoodlandMansionPieces::WoodlandMansionPiece::postProcessMobsAt(WoodlandMansionPieces::WoodlandMansionPiece *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  const BoundingBox *v4; // r9@1
  int v5; // r6@1
  int v6; // r11@1
  void **v7; // r8@2
  char *v8; // r7@2
  int v9; // r4@2
  int v10; // r5@2
  int v11; // r0@3
  int v12; // r1@5
  int v13; // r1@7
  int *v14; // r2@9
  void *v15; // r0@9
  void *v16; // r0@10
  void *v17; // r0@11
  void *v18; // r0@12
  void *v19; // r0@13
  void *v20; // r0@14
  int v21; // r0@15
  int v22; // r2@15
  void (*v23)(void); // r3@15
  int v24; // r10@21
  void **v25; // r9@21
  int v26; // r8@21
  int v27; // r0@21
  int v28; // r6@21
  unsigned int v29; // r1@21
  unsigned int v30; // r2@23
  unsigned int v31; // r0@23
  bool v32; // cf@25
  int v33; // r7@28
  _DWORD *v34; // r11@28
  int v35; // r0@28
  int v36; // r0@28
  _DWORD *v37; // r0@28
  void *i; // r1@28
  int v39; // r2@29
  unsigned int *v40; // r2@35
  signed int v41; // r1@37
  int *v42; // lr@39
  unsigned int *v43; // r2@39
  signed int v44; // r1@41
  int *v45; // lr@43
  unsigned int *v46; // r2@43
  signed int v47; // r1@45
  int *v48; // lr@47
  unsigned int *v49; // r2@47
  signed int v50; // r1@49
  int *v51; // lr@51
  unsigned int *v52; // r2@51
  signed int v53; // r1@53
  unsigned int *v54; // r2@55
  signed int v55; // r1@57
  void *v56; // r2@34
  int v57; // r5@80
  int v58; // r10@80
  void **v59; // r4@81
  char *v60; // r7@81
  _DWORD *v61; // r11@81
  int v62; // r8@81
  int v63; // r6@81
  int v64; // r0@82
  int v65; // r1@84
  int v66; // r1@86
  int *v67; // r2@88
  void *v68; // r0@88
  void *v69; // r0@89
  void *v70; // r0@90
  void *v71; // r0@91
  void *v72; // r0@92
  void *v73; // r0@93
  int v74; // r0@94
  Entity *v75; // r2@94
  void (*v76)(void); // r3@94
  const BoundingBox *v77; // r4@101
  int v78; // r0@101
  int v79; // r6@101
  void *v80; // r9@101
  unsigned int v81; // r1@101
  unsigned int v82; // r2@103
  unsigned int v83; // r0@103
  int v84; // r7@108
  _DWORD *v85; // r0@108
  _DWORD *v86; // r3@108
  int v87; // r0@108
  void *v88; // r0@108
  void *j; // r1@108
  int v90; // r2@109
  unsigned int *v91; // r2@115
  signed int v92; // r1@117
  int *v93; // lr@119
  unsigned int *v94; // r2@119
  signed int v95; // r1@121
  int *v96; // lr@123
  unsigned int *v97; // r2@123
  signed int v98; // r1@125
  int *v99; // lr@127
  unsigned int *v100; // r2@127
  signed int v101; // r1@129
  int *v102; // lr@131
  unsigned int *v103; // r2@131
  signed int v104; // r1@133
  unsigned int *v105; // r2@135
  signed int v106; // r1@137
  void *v107; // [sp+14h] [bp-ACh]@80
  WoodlandMansionPieces::WoodlandMansionPiece *v108; // [sp+18h] [bp-A8h]@2
  WoodlandMansionPieces::WoodlandMansionPiece *v109; // [sp+18h] [bp-A8h]@81
  int *v110; // [sp+20h] [bp-A0h]@2
  BlockSource *v111; // [sp+24h] [bp-9Ch]@2
  BlockSource *v112; // [sp+24h] [bp-9Ch]@81
  const BoundingBox *v113; // [sp+28h] [bp-98h]@1
  void *v114; // [sp+2Ch] [bp-94h]@2
  int *v115; // [sp+2Ch] [bp-94h]@81
  Entity *v116; // [sp+30h] [bp-90h]@94
  char v117; // [sp+34h] [bp-8Ch]@81
  int v118; // [sp+44h] [bp-7Ch]@81
  int v119; // [sp+48h] [bp-78h]@88
  int v120; // [sp+50h] [bp-70h]@88
  int v121; // [sp+54h] [bp-6Ch]@88
  int v122; // [sp+58h] [bp-68h]@89
  int v123; // [sp+5Ch] [bp-64h]@88
  Entity *v124; // [sp+60h] [bp-60h]@88
  int v125; // [sp+64h] [bp-5Ch]@15
  char v126; // [sp+68h] [bp-58h]@2
  int v127; // [sp+78h] [bp-48h]@2
  int v128; // [sp+7Ch] [bp-44h]@9
  int v129; // [sp+84h] [bp-3Ch]@9
  int v130; // [sp+88h] [bp-38h]@9
  int v131; // [sp+8Ch] [bp-34h]@10
  int v132; // [sp+90h] [bp-30h]@9
  int v133; // [sp+94h] [bp-2Ch]@9

  v4 = a4;
  v113 = a4;
  v6 = *(_QWORD *)((char *)this + 148) >> 32;
  v5 = *(_QWORD *)((char *)this + 148);
  if ( v5 == v6 )
  {
    v9 = 0;
    v10 = 0;
    v56 = 0;
  }
  else
    v108 = this;
    v7 = (void **)&v127;
    v8 = &v126;
    v111 = a2;
    v110 = &dword_28898C0;
    v114 = 0;
    do
    {
      v11 = *(_DWORD *)v5;
      if ( *(_DWORD *)v5 < *(_DWORD *)v4
        || v11 > *((_DWORD *)v4 + 3)
        || (v12 = *(_DWORD *)(v5 + 8), v12 < *((_DWORD *)v4 + 2))
        || v12 > *((_DWORD *)v4 + 5)
        || (v13 = *(_DWORD *)(v5 + 4), v13 < *((_DWORD *)v4 + 1))
        || v13 > *((_DWORD *)v4 + 4) )
      {
        if ( v10 == v9 )
        {
          v24 = v5;
          v25 = v7;
          v26 = v6;
          v27 = (v10 - (signed int)v114) >> 2;
          v28 = -1431655765 * v27;
          v29 = -1431655765 * v27;
          if ( (void *)v10 == v114 )
            v29 = 1;
          v31 = v29 + -1431655765 * v27;
          v30 = v31;
          if ( v31 > 0x15555555 )
            v31 = 357913941;
          v32 = v30 >= v29;
          LOWORD(v29) = 21846;
          if ( !v32 )
          HIWORD(v29) = 5461;
          if ( v31 >= v29 )
            sub_21E57F4();
          v33 = 3 * v31;
          v34 = j_operator new(12 * v31);
          v35 = 3 * v28;
          v5 = v24;
          v34[v35] = *(_DWORD *)v24;
          v36 = (int)&v34[v35];
          *(_DWORD *)(v36 + 4) = *(_DWORD *)(v24 + 4);
          *(_DWORD *)(v36 + 8) = *(_DWORD *)(v24 + 8);
          v37 = v34;
          for ( i = v114; i != (void *)v10; v37 += 3 )
          {
            *v37 = *(_DWORD *)i;
            v37[1] = *((_DWORD *)i + 1);
            v39 = *((_DWORD *)i + 2);
            i = (char *)i + 12;
            v37[2] = v39;
          }
          v10 = (int)(v37 + 3);
          if ( v114 )
            j_operator delete(v114);
          v9 = (int)&v34[v33];
          v114 = v34;
          v6 = v26;
          v7 = v25;
          v4 = v113;
          v8 = &v126;
        }
        else
          *(_DWORD *)v10 = v11;
          *(_DWORD *)(v10 + 4) = *(_DWORD *)(v5 + 4);
          *(_DWORD *)(v10 + 8) = *(_DWORD *)(v5 + 8);
          v10 += 12;
      }
      else
        sub_21E94B4((void **)&v129, "minecraft");
        j_EntityTypeToString((void **)&v128, 0xB68u, 0);
        sub_21E94B4(v7, "minecraft:evocation_illager");
        j_EntityDefinitionIdentifier::EntityDefinitionIdentifier(&v130, &v129, &v128, (int *)v7);
        j_Vec3::Vec3((int)v8, v5);
        j_EntityFactory::createSpawnedEntity((Entity **)&v133, (const void **)&v130, 0, (int)v8, &Vec2::ZERO);
        v14 = v110;
        v15 = (void *)(v132 - 12);
        if ( (int *)(v132 - 12) != v110 )
          v40 = (unsigned int *)(v132 - 4);
          if ( &pthread_create )
            __dmb();
            do
              v41 = __ldrex(v40);
            while ( __strex(v41 - 1, v40) );
          else
            v41 = (*v40)--;
          v14 = v110;
          if ( v41 <= 0 )
            j_j_j_j__ZdlPv_9(v15);
            v14 = v110;
        v16 = (void *)(v131 - 12);
        if ( (int *)(v131 - 12) != v14 )
          v42 = v14;
          v43 = (unsigned int *)(v131 - 4);
              v44 = __ldrex(v43);
            while ( __strex(v44 - 1, v43) );
            v44 = (*v43)--;
          v14 = v42;
          if ( v44 <= 0 )
            j_j_j_j__ZdlPv_9(v16);
            v14 = v42;
        v17 = (void *)(v130 - 12);
        if ( (int *)(v130 - 12) != v14 )
          v45 = v14;
          v46 = (unsigned int *)(v130 - 4);
              v47 = __ldrex(v46);
            while ( __strex(v47 - 1, v46) );
            v47 = (*v46)--;
          v14 = v45;
          if ( v47 <= 0 )
            j_j_j_j__ZdlPv_9(v17);
            v14 = v45;
        v18 = (void *)(v127 - 12);
        if ( (int *)(v127 - 12) != v14 )
          v48 = v14;
          v49 = (unsigned int *)(v127 - 4);
              v50 = __ldrex(v49);
            while ( __strex(v50 - 1, v49) );
            v50 = (*v49)--;
          v14 = v48;
          if ( v50 <= 0 )
            j_j_j_j__ZdlPv_9(v18);
            v14 = v48;
        v19 = (void *)(v128 - 12);
        if ( (int *)(v128 - 12) != v14 )
          v51 = v14;
          v52 = (unsigned int *)(v128 - 4);
              v53 = __ldrex(v52);
            while ( __strex(v53 - 1, v52) );
            v53 = (*v52)--;
          v14 = v51;
          if ( v53 <= 0 )
            j_j_j_j__ZdlPv_9(v19);
            v14 = v51;
        v110 = v14;
        v20 = (void *)(v129 - 12);
        if ( (int *)(v129 - 12) != v14 )
          v54 = (unsigned int *)(v129 - 4);
              v55 = __ldrex(v54);
            while ( __strex(v55 - 1, v54) );
            v55 = (*v54)--;
          if ( v55 <= 0 )
            j_j_j_j__ZdlPv_9(v20);
        v21 = j_BlockSource::getLevel(v111);
        v22 = v133;
        v23 = *(void (**)(void))(*(_DWORD *)v21 + 44);
        v133 = 0;
        v125 = v22;
        v23();
        if ( v125 )
          (*(void (**)(void))(*(_DWORD *)v125 + 32))();
        v125 = 0;
        if ( v133 )
          (*(void (**)(void))(*(_DWORD *)v133 + 32))();
      v5 += 12;
    }
    while ( v5 != v6 );
    this = v108;
    a2 = v111;
    v56 = v114;
    v5 = *((_DWORD *)v108 + 37);
  v107 = (void *)v5;
  *((_DWORD *)this + 37) = v56;
  *((_DWORD *)this + 38) = v10;
  *((_DWORD *)this + 39) = v9;
  v58 = *((_QWORD *)this + 17) >> 32;
  v57 = *((_QWORD *)this + 17);
  if ( v57 == v58 )
    v61 = 0;
    v62 = 0;
    v63 = 0;
    v109 = this;
    v59 = (void **)&v118;
    v60 = &v117;
    v112 = a2;
    v115 = &dword_28898C0;
      v64 = *(_DWORD *)v57;
      if ( *(_DWORD *)v57 < *(_DWORD *)v4
        || v64 > *((_DWORD *)v4 + 3)
        || (v65 = *(_DWORD *)(v57 + 8), v65 < *((_DWORD *)v4 + 2))
        || v65 > *((_DWORD *)v4 + 5)
        || (v66 = *(_DWORD *)(v57 + 4), v66 < *((_DWORD *)v4 + 1))
        || v66 > *((_DWORD *)v4 + 4) )
        if ( v62 == v63 )
          v77 = v4;
          v78 = (v62 - (signed int)v61) >> 2;
          v79 = -1431655765 * v78;
          v80 = v61;
          v81 = -1431655765 * v78;
          if ( (_DWORD *)v62 == v61 )
            v81 = 1;
          v83 = v81 + -1431655765 * v78;
          v82 = v83;
          if ( v83 > 0x15555555 )
            v83 = 357913941;
          v32 = v82 >= v81;
          LOWORD(v81) = 21846;
          HIWORD(v81) = 5461;
          if ( v83 >= v81 )
          v84 = 3 * v83;
          v85 = j_operator new(12 * v83);
          v61 = v85;
          v86 = v85;
          v85[3 * v79] = *(_DWORD *)v57;
          v87 = (int)&v85[3 * v79];
          *(_DWORD *)(v87 + 4) = *(_DWORD *)(v57 + 4);
          *(_DWORD *)(v87 + 8) = *(_DWORD *)(v57 + 8);
          v88 = v80;
          for ( j = v80; j != (void *)v62; v86 += 3 )
            *v86 = *(_DWORD *)j;
            v86[1] = *((_DWORD *)j + 1);
            v90 = *((_DWORD *)j + 2);
            j = (char *)j + 12;
            v86[2] = v90;
          v62 = (int)(v86 + 3);
          v4 = v77;
          if ( v88 )
            j_operator delete(v88);
          v63 = (int)&v61[v84];
          v59 = (void **)&v118;
          v60 = &v117;
          *(_DWORD *)v62 = v64;
          *(_DWORD *)(v62 + 4) = *(_DWORD *)(v57 + 4);
          *(_DWORD *)(v62 + 8) = *(_DWORD *)(v57 + 8);
          v62 += 12;
        sub_21E94B4((void **)&v120, "minecraft");
        j_EntityTypeToString((void **)&v119, 0xB39u, 0);
        sub_21E94B4(v59, "minecraft:vindicator");
        j_EntityDefinitionIdentifier::EntityDefinitionIdentifier(&v121, &v120, &v119, (int *)v59);
        j_Vec3::Vec3((int)v60, v57);
        j_EntityFactory::createSpawnedEntity(&v124, (const void **)&v121, 0, (int)v60, &Vec2::ZERO);
        v67 = v115;
        v68 = (void *)(v123 - 12);
        if ( (int *)(v123 - 12) != v115 )
          v91 = (unsigned int *)(v123 - 4);
              v92 = __ldrex(v91);
            while ( __strex(v92 - 1, v91) );
            v92 = (*v91)--;
          v67 = v115;
          if ( v92 <= 0 )
            j_j_j_j__ZdlPv_9(v68);
            v67 = v115;
        v69 = (void *)(v122 - 12);
        if ( (int *)(v122 - 12) != v67 )
          v93 = v67;
          v94 = (unsigned int *)(v122 - 4);
              v95 = __ldrex(v94);
            while ( __strex(v95 - 1, v94) );
            v95 = (*v94)--;
          v67 = v93;
          if ( v95 <= 0 )
            j_j_j_j__ZdlPv_9(v69);
            v67 = v93;
        v70 = (void *)(v121 - 12);
        if ( (int *)(v121 - 12) != v67 )
          v96 = v67;
          v97 = (unsigned int *)(v121 - 4);
              v98 = __ldrex(v97);
            while ( __strex(v98 - 1, v97) );
            v98 = (*v97)--;
          v67 = v96;
          if ( v98 <= 0 )
            j_j_j_j__ZdlPv_9(v70);
            v67 = v96;
        v71 = (void *)(v118 - 12);
        if ( (int *)(v118 - 12) != v67 )
          v99 = v67;
          v100 = (unsigned int *)(v118 - 4);
              v101 = __ldrex(v100);
            while ( __strex(v101 - 1, v100) );
            v101 = (*v100)--;
          v67 = v99;
          if ( v101 <= 0 )
            j_j_j_j__ZdlPv_9(v71);
            v67 = v99;
        v72 = (void *)(v119 - 12);
        if ( (int *)(v119 - 12) != v67 )
          v102 = v67;
          v103 = (unsigned int *)(v119 - 4);
              v104 = __ldrex(v103);
            while ( __strex(v104 - 1, v103) );
            v104 = (*v103)--;
          v67 = v102;
          if ( v104 <= 0 )
            j_j_j_j__ZdlPv_9(v72);
            v67 = v102;
        v115 = v67;
        v73 = (void *)(v120 - 12);
        if ( (int *)(v120 - 12) != v67 )
          v105 = (unsigned int *)(v120 - 4);
              v106 = __ldrex(v105);
            while ( __strex(v106 - 1, v105) );
            v106 = (*v105)--;
          if ( v106 <= 0 )
            j_j_j_j__ZdlPv_9(v73);
        j_Entity::setPersistent(v124);
        v74 = j_BlockSource::getLevel(v112);
        v75 = v124;
        v76 = *(void (**)(void))(*(_DWORD *)v74 + 44);
        v124 = 0;
        v116 = v75;
        v76();
        if ( v116 )
          (*(void (**)(void))(*(_DWORD *)v116 + 32))();
        v116 = 0;
        if ( v124 )
          (*(void (**)(void))(*(_DWORD *)v124 + 32))();
      v57 += 12;
    while ( v57 != v58 );
    this = v109;
    v57 = *((_DWORD *)v109 + 34);
  *((_DWORD *)this + 34) = v61;
  *((_DWORD *)this + 35) = v62;
  *((_DWORD *)this + 36) = v63;
  if ( v57 )
    j_operator delete((void *)v57);
  if ( v107 )
    j_operator delete(v107);
}


void __fastcall WoodlandMansionPieces::FirstFloorRoomCollection::get1x1(WoodlandMansionPieces::FirstFloorRoomCollection *this, Random *a2, Random *a3)
{
  WoodlandMansionPieces::FirstFloorRoomCollection *v3; // r4@1
  unsigned int v4; // kr00_4@1
  const void **v5; // r0@1
  void *v6; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  v4 = j_Random::_genRandInt32(a3);
  j_Util::toString<int,(void *)0,(void *)0>((void **)&v9, v4 % 5 + 1);
  v5 = sub_21E82D8((const void **)&v9, 0, (unsigned int)"1x1_a", (_BYTE *)5);
  *(_DWORD *)v3 = *v5;
  *v5 = &unk_28898CC;
  v6 = (void *)(v9 - 12);
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
      j_j_j_j__ZdlPv_9(v6);
  }
}


void __fastcall WoodlandMansionPieces::WoodlandMansionPiece::~WoodlandMansionPiece(WoodlandMansionPieces::WoodlandMansionPiece *this)
{
  WoodlandMansionPieces::WoodlandMansionPiece::~WoodlandMansionPiece(this);
}


signed int __fastcall WoodlandMansionPieces::MansionGrid::isHouse(WoodlandMansionPieces::MansionGrid *this, const WoodlandMansionPieces::SimpleGrid *a2, int a3, int a4)
{
  bool v4; // nf@1
  int v5; // r3@4
  bool v6; // zf@4
  bool v7; // nf@4
  unsigned __int8 v8; // vf@4
  int v9; // r3@5
  char *v10; // r0@7
  unsigned int v11; // r1@9
  signed int result; // r0@9

  v4 = (signed int)a2 < 0;
  if ( (signed int)a2 >= 0 )
    v4 = a3 < 0;
  if ( v4 )
    goto LABEL_13;
  v5 = *((_DWORD *)this + 3);
  v8 = __OFSUB__(v5, a2);
  v6 = v5 == (_DWORD)a2;
  v7 = v5 - (signed int)a2 < 0;
  if ( v5 > (signed int)a2 )
  {
    v9 = *((_DWORD *)this + 4);
    v8 = __OFSUB__(v9, a3);
    v6 = v9 == a3;
    v7 = v9 - a3 < 0;
  }
  if ( (unsigned __int8)(v7 ^ v8) | v6 )
LABEL_13:
    v10 = (char *)this + 20;
  else
    v10 = (char *)(*(_DWORD *)(*(_DWORD *)this + 12 * (_DWORD)a2) + 4 * a3);
  v11 = *(_DWORD *)v10 - 1;
  result = 0;
  if ( v11 < 4 )
    result = 1;
  return result;
}


void __fastcall WoodlandMansionPieces::FirstFloorRoomCollection::get1x2SideEntrance(WoodlandMansionPieces::FirstFloorRoomCollection *this, Random *a2, int a3)
{
  WoodlandMansionPieces::FirstFloorRoomCollection *v3; // r4@1
  unsigned int v4; // kr00_4@1
  const void **v5; // r0@1
  void *v6; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  v4 = j_Random::_genRandInt32((Random *)a3);
  j_Util::toString<int,(void *)0,(void *)0>((void **)&v9, v4 % 9 + 1);
  v5 = sub_21E82D8((const void **)&v9, 0, (unsigned int)"1x2_a", (_BYTE *)5);
  *(_DWORD *)v3 = *v5;
  *v5 = &unk_28898CC;
  v6 = (void *)(v9 - 12);
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
      j_j_j_j__ZdlPv_9(v6);
  }
}


void __fastcall WoodlandMansionPieces::SecondFloorRoomCollection::get2x2(WoodlandMansionPieces::SecondFloorRoomCollection *this, Random *a2, Random *a3)
{
  WoodlandMansionPieces::SecondFloorRoomCollection::get2x2(this, a2, a3);
}


int __fastcall WoodlandMansionPieces::SimpleGrid::set(int result, int a2, int a3, int a4)
{
  bool v4; // nf@1
  int v5; // r12@4
  bool v6; // zf@4
  bool v7; // nf@4
  unsigned __int8 v8; // vf@4
  int v9; // r12@5

  v4 = a2 < 0;
  if ( a2 >= 0 )
    v4 = a3 < 0;
  if ( !v4 )
  {
    v5 = *(_DWORD *)(result + 12);
    v8 = __OFSUB__(v5, a2);
    v6 = v5 == a2;
    v7 = v5 - a2 < 0;
    if ( v5 > a2 )
    {
      v9 = *(_DWORD *)(result + 16);
      v8 = __OFSUB__(v9, a3);
      v6 = v9 == a3;
      v7 = v9 - a3 < 0;
    }
    if ( !((unsigned __int8)(v7 ^ v8) | v6) )
      result = *(_DWORD *)(*(_DWORD *)result + 12 * a2);
      *(_DWORD *)(result + 4 * a3) = a4;
  }
  return result;
}


void __fastcall WoodlandMansionPieces::SecondFloorRoomCollection::get1x1Secret(WoodlandMansionPieces::SecondFloorRoomCollection *this, Random *a2, Random *a3)
{
  WoodlandMansionPieces::SecondFloorRoomCollection::get1x1Secret(this, a2, a3);
}


void __fastcall WoodlandMansionPieces::SecondFloorRoomCollection::get1x1(WoodlandMansionPieces::SecondFloorRoomCollection *this, Random *a2, Random *a3)
{
  WoodlandMansionPieces::SecondFloorRoomCollection *v3; // r4@1
  unsigned int v4; // kr00_4@1
  const void **v5; // r0@1
  void *v6; // r0@1
  unsigned int *v7; // r2@3
  signed int v8; // r1@5
  int v9; // [sp+4h] [bp-1Ch]@1

  v3 = this;
  v4 = j_Random::_genRandInt32(a3);
  j_Util::toString<int,(void *)0,(void *)0>((void **)&v9, v4 % 5 + 1);
  v5 = sub_21E82D8((const void **)&v9, 0, (unsigned int)"1x1_b", (_BYTE *)5);
  *(_DWORD *)v3 = *v5;
  *v5 = &unk_28898CC;
  v6 = (void *)(v9 - 12);
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
      j_j_j_j__ZdlPv_9(v6);
  }
}


unsigned int __fastcall WoodlandMansionPieces::MansionPiecePlacer::_traverseInnerTurn(int a1, int a2, _WORD *a3)
{
  _WORD *v3; // r4@1
  Facing *v4; // r0@1
  signed __int8 v5; // r2@1
  Facing *v6; // r0@1
  Rotation v7; // r2@1
  unsigned int result; // r0@1
  int v9; // [sp+0h] [bp-28h]@1
  int v10; // [sp+4h] [bp-24h]@1
  int v11; // [sp+8h] [bp-20h]@1
  int v12; // [sp+Ch] [bp-1Ch]@1
  int v13; // [sp+10h] [bp-18h]@1
  int v14; // [sp+14h] [bp-14h]@1

  v3 = a3;
  v4 = j_RotationUtil::rotate((RotationUtil *)*a3, 3, (signed __int8)a3);
  j_BlockPos::relative((BlockPos *)&v12, (int)(v3 + 2), (int)v4, 6);
  *((_DWORD *)v3 + 1) = v12;
  *((_DWORD *)v3 + 2) = v13;
  *((_DWORD *)v3 + 3) = v14;
  v6 = j_RotationUtil::rotate((RotationUtil *)*v3, 5, v5);
  j_BlockPos::relative((BlockPos *)&v9, (int)(v3 + 2), (int)v6, 8);
  *((_DWORD *)v3 + 1) = v9;
  *((_DWORD *)v3 + 2) = v10;
  *((_DWORD *)v3 + 3) = v11;
  result = j_RotationUtil::getRotated((RotationUtil *)*v3, 3, v7);
  *v3 = result;
  return result;
}


void __fastcall WoodlandMansionPieces::WoodlandMansionPiece::postProcessMobsAt(WoodlandMansionPieces::WoodlandMansionPiece *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  WoodlandMansionPieces::WoodlandMansionPiece::postProcessMobsAt(this, a2, a3, a4);
}


void __fastcall WoodlandMansionPieces::SecondFloorRoomCollection::get1x2Secret(WoodlandMansionPieces::SecondFloorRoomCollection *this, Random *a2, Random *a3)
{
  WoodlandMansionPieces::SecondFloorRoomCollection::get1x2Secret(this, a2, a3);
}


void __fastcall WoodlandMansionPieces::WoodlandMansionPiece::_addChest(Random *a1, int a2, int a3, const BlockPos *a4, Random *a5, int a6)
{
  WoodlandMansionPieces::WoodlandMansionPiece::_addChest(a1, a2, a3, a4, a5, a6);
}


void __fastcall WoodlandMansionPieces::FirstFloorRoomCollection::get1x1(WoodlandMansionPieces::FirstFloorRoomCollection *this, Random *a2, Random *a3)
{
  WoodlandMansionPieces::FirstFloorRoomCollection::get1x1(this, a2, a3);
}
