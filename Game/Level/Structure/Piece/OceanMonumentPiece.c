

void __fastcall OceanMonumentPiece::spawnElder(OceanMonumentPiece *this, BlockSource *a2, const BoundingBox *a3, int a4, int a5, int a6)
{
  StructurePiece *v6; // r7@1
  int v7; // r5@1
  BlockSource *v8; // r4@1
  Level *v12; // r0@1
  Spawner *v13; // r7@1
  Guardian *v18; // r4@1
  void *v19; // r0@1
  void *v20; // r0@2
  void *v21; // r0@3
  void *v22; // r0@4
  void (__fastcall *v23)(Guardian *, int); // r5@6
  int v24; // r0@6
  unsigned int *v25; // r2@8
  signed int v26; // r1@10
  unsigned int *v27; // r2@12
  signed int v28; // r1@14
  unsigned int *v29; // r2@16
  signed int v30; // r1@18
  unsigned int *v31; // r2@20
  signed int v32; // r1@22
  float v33; // [sp+10h] [bp-40h]@1
  int v34; // [sp+1Ch] [bp-34h]@1
  int v35; // [sp+20h] [bp-30h]@1
  int v36; // [sp+24h] [bp-2Ch]@2
  int v37; // [sp+28h] [bp-28h]@1

  v6 = this;
  v7 = a4;
  v8 = a2;
  _R8 = (*(int (**)(void))(*(_DWORD *)this + 28))();
  _R9 = StructurePiece::getWorldY(v6, a5);
  _R5 = (*(int (__fastcall **)(StructurePiece *, int, int))(*(_DWORD *)v6 + 32))(v6, v7, a6);
  v12 = (Level *)BlockSource::getLevel(v8);
  v13 = (Spawner *)Level::getSpawner(v12);
  EntityTypeToString((void **)&v34, 0xB32u, 1);
  EntityDefinitionIdentifier::EntityDefinitionIdentifier((int)&v35, &v34);
  __asm
  {
    VMOV            S2, R8
    VMOV            S4, R5
    VCVT.F32.S32    S2, S2
    VMOV.F32        S0, #0.5
    VCVT.F32.S32    S4, S4
    VMOV            S6, R9
    VCVT.F32.S32    S6, S6
    VADD.F32        S2, S2, S0
    VADD.F32        S0, S4, S0
    VSTR            S2, [SP,#0x50+var_40]
    VSTR            S6, [SP,#0x50+var_3C]
    VSTR            S0, [SP,#0x50+var_38]
  }
  v18 = (Guardian *)Spawner::spawnMob(v13, v8, (const EntityDefinitionIdentifier *)&v35, 0, (const Vec3 *)&v33, 0, 1, 0);
  v19 = (void *)(v37 - 12);
  if ( (int *)(v37 - 12) != &dword_28898C0 )
    v25 = (unsigned int *)(v37 - 4);
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
      j_j_j_j__ZdlPv_9(v19);
  v20 = (void *)(v36 - 12);
  if ( (int *)(v36 - 12) != &dword_28898C0 )
    v27 = (unsigned int *)(v36 - 4);
        v28 = __ldrex(v27);
      while ( __strex(v28 - 1, v27) );
      v28 = (*v27)--;
    if ( v28 <= 0 )
      j_j_j_j__ZdlPv_9(v20);
  v21 = (void *)(v35 - 12);
  if ( (int *)(v35 - 12) != &dword_28898C0 )
    v29 = (unsigned int *)(v35 - 4);
        v30 = __ldrex(v29);
      while ( __strex(v30 - 1, v29) );
      v30 = (*v29)--;
    if ( v30 <= 0 )
      j_j_j_j__ZdlPv_9(v21);
  v22 = (void *)(v34 - 12);
  if ( (int *)(v34 - 12) != &dword_28898C0 )
    v31 = (unsigned int *)(v34 - 4);
        v32 = __ldrex(v31);
      while ( __strex(v32 - 1, v31) );
      v32 = (*v31)--;
    if ( v32 <= 0 )
      j_j_j_j__ZdlPv_9(v22);
  if ( v18 )
    Guardian::setElder(v18, 1);
    v23 = *(void (__fastcall **)(Guardian *, int))(*(_DWORD *)v18 + 832);
    v24 = Mob::getMaxHealth(v18);
    v23(v18, v24);
}


void __fastcall OceanMonumentPiece::spawnElder(OceanMonumentPiece *this, BlockSource *a2, const BoundingBox *a3, int a4, int a5, int a6)
{
  OceanMonumentPiece::spawnElder(this, a2, a3, a4, a5, a6);
}


int __fastcall OceanMonumentPiece::OceanMonumentPiece(int result, _DWORD *a2, int a3)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 1;
  *(_DWORD *)result = &off_2718D84;
  *(_BYTE *)(result + 36) = 1;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  *(_DWORD *)(result + 28) = *a2;
  *(_DWORD *)(result + 4) = *(_DWORD *)a3;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a3 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(result + 20) = *(_DWORD *)(a3 + 16);
  *(_DWORD *)(result + 24) = *(_DWORD *)(a3 + 20);
  byte_281EAF1 = *(_BYTE *)(Block::mPrismarine + 4);
  byte_281EAF2 = 0;
  byte_281EAF3 = byte_281EAF1;
  byte_281EAF4 = 2;
  byte_281EAF5 = byte_281EAF1;
  byte_281EAF6 = 1;
  byte_281EAF7 = byte_281EAF1;
  byte_281EAF8 = 2;
  byte_281EAF9 = *(_BYTE *)(Block::mSeaLantern + 4);
  byte_281EAFA = 0;
  LOBYTE(word_281EAFB) = *(_BYTE *)(Block::mStillWater + 4);
  word_281EAFB = (unsigned __int8)word_281EAFB;
  return result;
}


int __fastcall OceanMonumentPiece::generateDefaultFloor(OceanMonumentPiece *this, BlockSource *a2, const BoundingBox *a3, int a4, int a5, int a6)
{
  OceanMonumentPiece *v6; // r6@1
  BlockSource *v7; // r8@1
  int v8; // r7@1
  const BoundingBox *v9; // r10@1
  void (__cdecl *v10)(OceanMonumentPiece *, BlockSource *, const BoundingBox *, int, _DWORD, int, int, _DWORD, int); // lr@1
  void (__fastcall *v11)(OceanMonumentPiece *, BlockSource *, const BoundingBox *); // r12@2
  void (__fastcall *v12)(OceanMonumentPiece *, BlockSource *, const BoundingBox *, int); // r5@2
  int v13; // r7@2
  void (__fastcall *v14)(OceanMonumentPiece *, BlockSource *, const BoundingBox *, int); // r12@2
  void (__fastcall *v15)(OceanMonumentPiece *, BlockSource *, const BoundingBox *, int); // r12@2
  void (__fastcall *v16)(OceanMonumentPiece *, BlockSource *, const BoundingBox *, int); // r12@2
  void (__fastcall *v17)(OceanMonumentPiece *, BlockSource *, const BoundingBox *); // r12@2
  int (__fastcall *v18)(OceanMonumentPiece *, BlockSource *, const BoundingBox *); // r12@2
  int result; // r0@2
  char v20; // [sp+2Ch] [bp-6Ch]@3
  char v21; // [sp+2Dh] [bp-6Bh]@3
  char v22; // [sp+30h] [bp-68h]@3
  char v23; // [sp+31h] [bp-67h]@3
  char v24; // [sp+34h] [bp-64h]@2
  char v25; // [sp+35h] [bp-63h]@2
  char v26; // [sp+38h] [bp-60h]@2
  char v27; // [sp+39h] [bp-5Fh]@2
  char v28; // [sp+3Ch] [bp-5Ch]@2
  char v29; // [sp+3Dh] [bp-5Bh]@2
  char v30; // [sp+40h] [bp-58h]@2
  char v31; // [sp+41h] [bp-57h]@2
  char v32; // [sp+44h] [bp-54h]@2
  char v33; // [sp+45h] [bp-53h]@2
  char v34; // [sp+48h] [bp-50h]@2
  char v35; // [sp+49h] [bp-4Fh]@2
  char v36; // [sp+4Ch] [bp-4Ch]@2
  char v37; // [sp+4Dh] [bp-4Bh]@2
  char v38; // [sp+50h] [bp-48h]@2
  char v39; // [sp+51h] [bp-47h]@2
  char v40; // [sp+54h] [bp-44h]@2
  char v41; // [sp+55h] [bp-43h]@2
  char v42; // [sp+58h] [bp-40h]@2
  char v43; // [sp+59h] [bp-3Fh]@2
  char v44; // [sp+5Ch] [bp-3Ch]@2
  char v45; // [sp+5Dh] [bp-3Bh]@2
  char v46; // [sp+60h] [bp-38h]@2
  char v47; // [sp+61h] [bp-37h]@2
  char v48; // [sp+64h] [bp-34h]@2
  char v49; // [sp+65h] [bp-33h]@2
  char v50; // [sp+68h] [bp-30h]@2
  char v51; // [sp+69h] [bp-2Fh]@2
  char v52; // [sp+6Ch] [bp-2Ch]@2
  char v53; // [sp+6Dh] [bp-2Bh]@2
  char v54; // [sp+70h] [bp-28h]@2
  char v55; // [sp+71h] [bp-27h]@2

  v6 = this;
  v7 = a2;
  v8 = a4;
  v9 = a3;
  v10 = *(void (__cdecl **)(OceanMonumentPiece *, BlockSource *, const BoundingBox *, int, _DWORD, int, int, _DWORD, int))(*(_DWORD *)this + 40);
  if ( a6 == 1 )
  {
    v54 = byte_281EAF1;
    v52 = byte_281EAF1;
    v55 = byte_281EAF2;
    v53 = byte_281EAF2;
    v10(this, a2, a3, a4, 0, a5, a4 + 2, 0, a5 + 7);
    v11 = *(void (__fastcall **)(OceanMonumentPiece *, BlockSource *, const BoundingBox *))(*(_DWORD *)v6 + 40);
    v50 = byte_281EAF1;
    v48 = byte_281EAF1;
    v51 = byte_281EAF2;
    v49 = byte_281EAF2;
    v11(v6, v7, v9);
    v12 = *(void (__fastcall **)(OceanMonumentPiece *, BlockSource *, const BoundingBox *, int))(*(_DWORD *)v6 + 40);
    v46 = byte_281EAF1;
    v13 = v8 + 3;
    v44 = byte_281EAF1;
    v47 = byte_281EAF2;
    v45 = byte_281EAF2;
    v12(v6, v7, v9, v13);
    v14 = *(void (__fastcall **)(OceanMonumentPiece *, BlockSource *, const BoundingBox *, int))(*(_DWORD *)v6 + 40);
    v42 = byte_281EAF1;
    v40 = byte_281EAF1;
    v43 = byte_281EAF2;
    v41 = byte_281EAF2;
    v14(v6, v7, v9, v13);
    v15 = *(void (__fastcall **)(OceanMonumentPiece *, BlockSource *, const BoundingBox *, int))(*(_DWORD *)v6 + 40);
    v38 = byte_281EAF3;
    v36 = byte_281EAF3;
    v39 = byte_281EAF4;
    v37 = byte_281EAF4;
    v15(v6, v7, v9, v13);
    v16 = *(void (__fastcall **)(OceanMonumentPiece *, BlockSource *, const BoundingBox *, int))(*(_DWORD *)v6 + 40);
    v34 = byte_281EAF3;
    v32 = byte_281EAF3;
    v35 = byte_281EAF4;
    v33 = byte_281EAF4;
    v16(v6, v7, v9, v13);
    v17 = *(void (__fastcall **)(OceanMonumentPiece *, BlockSource *, const BoundingBox *))(*(_DWORD *)v6 + 40);
    v30 = byte_281EAF3;
    v28 = byte_281EAF3;
    v31 = byte_281EAF4;
    v29 = byte_281EAF4;
    v17(v6, v7, v9);
    v18 = *(int (__fastcall **)(OceanMonumentPiece *, BlockSource *, const BoundingBox *))(*(_DWORD *)v6 + 40);
    v26 = byte_281EAF3;
    v24 = byte_281EAF3;
    v27 = byte_281EAF4;
    v25 = byte_281EAF4;
    result = v18(v6, v7, v9);
  }
  else
    v22 = byte_281EAF1;
    v20 = byte_281EAF1;
    v23 = byte_281EAF2;
    v21 = byte_281EAF2;
    result = ((int (__cdecl *)(OceanMonumentPiece *, BlockSource *, const BoundingBox *, int, _DWORD, int, int, _DWORD))v10)(
               this,
               a2,
               a3,
               a4,
               0,
               a5,
               a4 + 7,
               0);
  return result;
}


int __fastcall OceanMonumentPiece::getWorldZ(OceanMonumentPiece *this, int a2, int a3)
{
  int v3; // r12@1

  v3 = *((_DWORD *)this + 7);
  if ( (unsigned int)(v3 - 4) < 2 )
    return *((_DWORD *)this + 3) + a2;
  if ( v3 != 3 )
  {
    if ( v3 == 2 )
      return *((_DWORD *)this + 6) - a3;
    return a3;
  }
  return a3 + *((_DWORD *)this + 3);
}


int __fastcall OceanMonumentPiece::generateWaterBox(OceanMonumentPiece *this, BlockSource *a2, const BoundingBox *a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // r11@1
  BlockSource *v11; // r7@1
  int result; // r0@1
  const BoundingBox *v13; // r10@1
  BlockSource *v14; // r9@1
  int v15; // r0@2
  int v16; // r8@3
  const BoundingBox *v17; // r0@4
  int v18; // r6@4
  int v19; // r5@5
  const BoundingBox *v20; // r6@6
  int v21; // r10@6
  char *v22; // r2@7
  void (__fastcall *v23)(BlockSource *, BlockSource *, char *, int); // r12@7
  BlockSource *v24; // r1@7
  BlockSource *v25; // r0@7
  int v26; // r5@12
  char *v27; // r2@13
  void (__fastcall *v28)(BlockSource *, BlockSource *, char *, int); // r5@13
  BlockSource *v29; // r1@13
  BlockSource *v30; // r0@13
  bool v31; // nf@15
  unsigned __int8 v32; // vf@15
  int v33; // [sp+14h] [bp-3Ch]@1
  unsigned __int8 v34; // [sp+20h] [bp-30h]@5
  char v35; // [sp+24h] [bp-2Ch]@7
  char v36; // [sp+25h] [bp-2Bh]@7
  char v37; // [sp+28h] [bp-28h]@8
  char v38; // [sp+29h] [bp-27h]@8

  v10 = a5;
  v11 = this;
  result = a8;
  v13 = a3;
  v14 = a2;
  v33 = a4;
  if ( a5 <= a8 )
  {
    do
    {
      v15 = v33;
      if ( v33 <= a7 )
      {
        do
        {
          v16 = v15;
          if ( a6 <= a9 )
          {
            v17 = (const BoundingBox *)a6;
            v18 = a6;
            if ( a10 == 1 )
            {
              do
              {
                v19 = (int)v17;
                StructurePiece::getBlock((StructurePiece *)&v34, v11, (int)v14, v16, v10, v17, (int)v13);
                if ( v34 != BlockID::AIR )
                {
                  v20 = v13;
                  v21 = StructurePiece::getWorldY(v11, v10);
                  if ( v21 >= *(_WORD *)(BlockSource::getDimension(v14) + 20) )
                  {
                    v13 = v20;
                    v22 = &v37;
                    v23 = *(void (__fastcall **)(BlockSource *, BlockSource *, char *, int))(*(_DWORD *)v11 + 36);
                    v24 = v14;
                    v37 = *(_BYTE *)(Block::mAir + 4);
                    v38 = 0;
                    v25 = v11;
                  }
                  else
                    v22 = &v35;
                    v35 = word_281EAFB;
                    v36 = 0;
                  v23(v25, v24, v22, v16);
                }
                v17 = (const BoundingBox *)(v19 + 1);
              }
              while ( v19 < a9 );
            }
            else
                v26 = StructurePiece::getWorldY(v11, v10);
                if ( v26 >= *(_WORD *)(BlockSource::getDimension(v14) + 20) )
                  v27 = &v37;
                  v28 = *(void (__fastcall **)(BlockSource *, BlockSource *, char *, int))(*(_DWORD *)v11 + 36);
                  v29 = v14;
                  v37 = *(_BYTE *)(Block::mAir + 4);
                  v38 = 0;
                  v30 = v11;
                else
                  v27 = &v35;
                  v35 = word_281EAFB;
                  v36 = 0;
                v28(v30, v29, v27, v16);
                v32 = __OFSUB__(v18, a9);
                v31 = v18++ - a9 < 0;
              while ( v31 ^ v32 );
          }
          v15 = v16 + 1;
        }
        while ( v16 < a7 );
      }
      result = v10 + 1;
      v32 = __OFSUB__(v10, a8);
      v31 = v10++ - a8 < 0;
    }
    while ( v31 ^ v32 );
  }
  return result;
}


int __fastcall OceanMonumentPiece::OceanMonumentPiece(int result, int a2)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = a2;
  *(_DWORD *)result = &off_2718D84;
  *(_BYTE *)(result + 36) = 1;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  byte_281EAF1 = *(_BYTE *)(Block::mPrismarine + 4);
  byte_281EAF2 = 0;
  byte_281EAF3 = byte_281EAF1;
  byte_281EAF4 = 2;
  byte_281EAF5 = byte_281EAF1;
  byte_281EAF6 = 1;
  byte_281EAF7 = byte_281EAF1;
  byte_281EAF8 = 2;
  byte_281EAF9 = *(_BYTE *)(Block::mSeaLantern + 4);
  byte_281EAFA = 0;
  LOBYTE(word_281EAFB) = *(_BYTE *)(Block::mStillWater + 4);
  word_281EAFB = (unsigned __int8)word_281EAFB;
  return result;
}


int __fastcall OceanMonumentPiece::generateBoxOnFillOnly(BlockSource *a1, int a2, int a3, int a4, int a5, const BoundingBox *a6, int a7, int a8, signed int a9, int a10)
{
  BlockSource *v10; // r11@1
  int result; // r0@1
  int v12; // r4@3
  const BoundingBox *v13; // r9@4
  void (__fastcall *v14)(BlockSource *, int, char *, int); // r5@6
  bool v15; // nf@7
  unsigned __int8 v16; // vf@7
  int v17; // r2@9
  int v18; // [sp+Ch] [bp-3Ch]@1
  int v19; // [sp+10h] [bp-38h]@1
  int v20; // [sp+14h] [bp-34h]@1
  int v21; // [sp+18h] [bp-30h]@1
  char v22; // [sp+1Ch] [bp-2Ch]@6
  char v23; // [sp+1Dh] [bp-2Bh]@6
  unsigned __int8 v24; // [sp+20h] [bp-28h]@5

  v10 = a1;
  v20 = a3;
  v18 = a4;
  v19 = a2;
  result = a8;
  v21 = a5;
  if ( a5 <= a8 )
  {
    result = a4;
    if ( a4 <= a7 )
    {
      do
      {
        v12 = v18;
        if ( (signed int)a6 <= a9 )
        {
          do
          {
            v13 = a6;
            do
            {
              StructurePiece::getBlock((StructurePiece *)&v24, v10, v19, v12, v21, v13, v20);
              if ( v24 == (unsigned __int8)word_281EAFB )
              {
                v14 = *(void (__fastcall **)(BlockSource *, int, char *, int))(*(_DWORD *)v10 + 36);
                v22 = *(_BYTE *)a10;
                v23 = *(_BYTE *)(a10 + 1);
                v14(v10, v19, &v22, v12);
              }
              v16 = __OFSUB__(v13, a9);
              v15 = (signed int)v13 - a9 < 0;
              v13 = (const BoundingBox *)((char *)v13 + 1);
            }
            while ( v15 ^ v16 );
            v16 = __OFSUB__(v12, a7);
            v15 = v12++ - a7 < 0;
          }
          while ( v15 ^ v16 );
        }
        v17 = v21;
        result = v21++ + 1;
      }
      while ( v17 < a8 );
    }
  }
  return result;
}


int __fastcall OceanMonumentPiece::OceanMonumentPiece(int a1, int a2, int *a3, int a4, int a5, int a6, int a7)
{
  int v7; // r4@1
  int *v8; // r11@1
  int v9; // r6@1
  int v10; // r10@1
  int v11; // r9@1
  int v12; // r5@1
  unsigned int *v13; // r0@2
  unsigned int v14; // r1@4
  int v15; // r7@5
  unsigned int *v16; // r1@6
  unsigned int v17; // r0@8
  unsigned int *v18; // r9@13
  unsigned int v19; // r0@15
  int v22; // r1@21
  int v28; // r12@23
  int v29; // lr@25
  int v34; // r2@25
  int v35; // r0@25
  int v36; // r5@25
  int v37; // r3@25
  int v38; // r7@25
  int v39; // r1@28
  int v40; // r2@28
  int v41; // r5@28
  int v42; // r3@28
  int v43; // r12@28
  int v44; // r0@29
  int v45; // r1@29
  int v46; // r12@29
  int v47; // r1@30
  int v48; // r12@30
  int v49; // r1@31
  int v50; // r12@31
  char v51; // r0@32
  int result; // r0@32

  v7 = a1;
  v8 = a3;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  v9 = a4;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 28) = 255;
  *(_DWORD *)(a1 + 32) = a2;
  *(_DWORD *)a1 = &off_2718D84;
  *(_BYTE *)(a1 + 36) = 1;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 28) = *a3;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)a4;
  v10 = *(_DWORD *)(a4 + 4);
  v11 = a7;
  v12 = a5;
  if ( v10 )
  {
    v13 = (unsigned int *)(v10 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v14 = __ldrex(v13);
      while ( __strex(v14 + 1, v13) );
      v15 = *(_DWORD *)(v7 + 44);
      if ( v15 )
      {
        v16 = (unsigned int *)(v15 + 4);
        if ( &pthread_create )
        {
          __dmb();
          do
            v17 = __ldrex(v16);
          while ( __strex(v17 - 1, v16) );
        }
        else
          v17 = (*v16)--;
        if ( v17 == 1 )
          v18 = (unsigned int *)(v15 + 8);
          (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 8))(v15);
          if ( &pthread_create )
          {
            __dmb();
            do
              v19 = __ldrex(v18);
            while ( __strex(v19 - 1, v18) );
          }
          else
            v19 = (*v18)--;
          v11 = a7;
          if ( v19 == 1 )
            (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 12))(v15);
      }
    }
    else
      ++*v13;
    *(_DWORD *)(v7 + 44) = v10;
  }
  _R3 = 1717986919;
  _R6 = *(_DWORD *)(*(_DWORD *)v9 + 8);
  v22 = a5;
  if ( (*v8 & 0xFFFFFFFE) == 2 )
    v22 = v11;
  __asm { SMMUL.W         R7, R6, R3 }
  v28 = 8 * v22 - 1;
  if ( !_ZF )
    v12 = v11;
  *(_DWORD *)(v7 + 4) = 0;
  *(_DWORD *)(v7 + 8) = 0;
  v29 = 8 * v12 - 1;
  *(_DWORD *)(v7 + 12) = 0;
  *(_DWORD *)(v7 + 16) = v29;
  _R7 = ((signed int)_R7 >> 1) + (_R7 >> 31);
  _R0 = 1374389535;
  __asm
    SMMUL.W         R3, R7, R3
    SMMUL.W         R1, R6, R0
  v34 = 4 * a6 - 1;
  *(_DWORD *)(v7 + 20) = v34;
  *(_DWORD *)(v7 + 24) = v28;
  v35 = *v8;
  v36 = _R7 - 5 * (((signed int)_R3 >> 1) + (_R3 >> 31));
  v37 = ((signed int)_R1 >> 3) + (_R1 >> 31);
  v38 = _R6 - 5 * _R7;
  if ( *v8 == 4 )
    v40 = v34 + 4 * v37;
    v44 = -8 * (v36 + v11) | 1;
    v45 = 4 * v37;
    v42 = v28 + 8 * v38;
    v46 = v7 + 4;
    *(_DWORD *)v46 = v44;
    *(_DWORD *)(v46 + 4) = v45;
    *(_DWORD *)(v46 + 8) = 8 * v38;
    *(_DWORD *)(v46 + 12) = v29 + v44;
  else if ( v35 == 3 )
    v47 = 4 * v37;
    v42 = v28 + 8 * v36;
    v48 = v7 + 4;
    *(_DWORD *)v48 = 8 * v38;
    *(_DWORD *)(v48 + 4) = v47;
    *(_DWORD *)(v48 + 8) = 8 * v36;
    *(_DWORD *)(v7 + 16) = v29 + 8 * v38;
  else if ( v35 == 2 )
    v39 = 4 * v37;
    v41 = -8 * (v36 + v11) | 1;
    v42 = v28 + v41;
    v43 = v7 + 4;
    *(_DWORD *)v43 = 8 * v38;
    *(_DWORD *)(v43 + 4) = v39;
    *(_DWORD *)(v43 + 8) = v41;
  else
    v49 = 4 * v37;
    v50 = v7 + 4;
    *(_DWORD *)v50 = 8 * v36;
    *(_DWORD *)(v50 + 4) = v49;
    *(_DWORD *)(v50 + 8) = 8 * v38;
    *(_DWORD *)(v7 + 16) = v29 + 8 * v36;
  *(_DWORD *)(v7 + 20) = v40;
  *(_DWORD *)(v7 + 24) = v42;
  v51 = *(_BYTE *)(Block::mPrismarine + 4);
  byte_281EAF1 = v51;
  byte_281EAF2 = 0;
  byte_281EAF3 = v51;
  byte_281EAF4 = 2;
  byte_281EAF5 = v51;
  byte_281EAF6 = 1;
  byte_281EAF7 = v51;
  byte_281EAF8 = 2;
  byte_281EAF9 = *(_BYTE *)(Block::mSeaLantern + 4);
  byte_281EAFA = 0;
  LOBYTE(word_281EAFB) = *(_BYTE *)(Block::mStillWater + 4);
  result = v7;
  word_281EAFB = (unsigned __int8)word_281EAFB;
  return result;
}


int __fastcall OceanMonumentPiece::OceanMonumentPiece(int result)
{
  *(_DWORD *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 28) = 255;
  *(_DWORD *)(result + 32) = 0;
  *(_DWORD *)result = &off_2718D84;
  *(_BYTE *)(result + 36) = 1;
  *(_DWORD *)(result + 40) = 0;
  *(_DWORD *)(result + 44) = 0;
  byte_281EAF1 = *(_BYTE *)(Block::mPrismarine + 4);
  byte_281EAF2 = 0;
  byte_281EAF3 = byte_281EAF1;
  byte_281EAF4 = 2;
  byte_281EAF5 = byte_281EAF1;
  byte_281EAF6 = 1;
  byte_281EAF7 = byte_281EAF1;
  byte_281EAF8 = 2;
  byte_281EAF9 = *(_BYTE *)(Block::mSeaLantern + 4);
  byte_281EAFA = 0;
  LOBYTE(word_281EAFB) = *(_BYTE *)(Block::mStillWater + 4);
  word_281EAFB = (unsigned __int8)word_281EAFB;
  return result;
}


OceanMonumentPiece *__fastcall OceanMonumentPiece::~OceanMonumentPiece(OceanMonumentPiece *this)
{
  OceanMonumentPiece *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_2718D84;
  v2 = *((_DWORD *)this + 11);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  return v1;
}


int __fastcall OceanMonumentPiece::getWorldX(OceanMonumentPiece *this, int a2, int a3)
{
  int v3; // r12@1
  int result; // r0@4

  v3 = *((_DWORD *)this + 7);
  if ( (unsigned int)(v3 - 2) < 2 )
  {
    result = a2 + *((_DWORD *)this + 1);
  }
  else
    if ( v3 == 4 )
    {
      a2 = *((_DWORD *)this + 4) - a3;
    }
    else if ( v3 == 5 )
      return *((_DWORD *)this + 1) + a3;
    result = a2;
  return result;
}


char *__fastcall OceanMonumentPiece::addHardcodedSpawnAreas(OceanMonumentPiece *this, LevelChunk *a2)
{
  return j_j_j__ZN10LevelChunk24addHardcodedSpawningAreaERK11BoundingBox22HardcodedSpawnAreaType(
           (int)a2,
           (int)this + 4,
           3);
}


signed int __fastcall OceanMonumentPiece::chunkIntersects(OceanMonumentPiece *this, const BoundingBox *a2, int a3, int a4, int a5, int a6)
{
  OceanMonumentPiece *v6; // r6@1
  int v7; // r7@1
  int v8; // r4@1
  const BoundingBox *v9; // r8@1
  int v10; // r11@1
  int v11; // r4@1
  int v12; // r5@1
  int v13; // r7@1
  int v14; // r0@3
  int v15; // r1@3
  int v16; // r2@3
  signed int result; // r0@11

  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  v10 = (*(int (**)(void))(*(_DWORD *)this + 28))();
  v11 = (*(int (__fastcall **)(OceanMonumentPiece *, int, int))(*(_DWORD *)v6 + 32))(v6, v8, v7);
  v12 = (*(int (__fastcall **)(OceanMonumentPiece *, int, int))(*(_DWORD *)v6 + 28))(v6, a5, a6);
  v13 = v12;
  if ( v10 < v12 )
    v13 = v10;
  v14 = (*(int (__fastcall **)(OceanMonumentPiece *, int, int))(*(_DWORD *)v6 + 32))(v6, a5, a6);
  v15 = v14;
  v16 = v14;
  if ( v11 > v14 )
    v16 = v11;
  if ( v11 < v14 )
    v15 = v11;
  if ( *((_DWORD *)v9 + 3) < v13 )
    goto LABEL_17;
  if ( v10 > v12 )
    v12 = v10;
  if ( *(_DWORD *)v9 <= v12 )
  {
    result = 0;
    if ( *((_DWORD *)v9 + 5) >= v15 && *((_DWORD *)v9 + 2) <= v16 )
      result = 1;
  }
  else
LABEL_17:
  return result;
}


void __fastcall OceanMonumentPiece::~OceanMonumentPiece(OceanMonumentPiece *this)
{
  OceanMonumentPiece::~OceanMonumentPiece(this);
}


void __fastcall OceanMonumentPiece::~OceanMonumentPiece(OceanMonumentPiece *this)
{
  OceanMonumentPiece *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_2718D84;
  v2 = *((_DWORD *)this + 11);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  j_j_j__ZdlPv_6((void *)v1);
}
