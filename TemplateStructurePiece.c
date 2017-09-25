

signed int __fastcall TemplateStructurePiece::postProcess(TemplateStructurePiece *this, BlockSource *a2, Random *a3, const BoundingBox *a4)
{
  TemplateStructurePiece *v4; // r4@1
  BlockSource *v5; // r7@1
  __int64 v6; // r0@2
  int v7; // r5@2
  unsigned int *v8; // r2@7
  signed int v9; // r1@9
  void *v10; // r6@15
  int v11; // r1@15
  void *v12; // r0@15
  signed int result; // r0@20
  void *ptr; // [sp+Ch] [bp-44h]@2
  int v15; // [sp+10h] [bp-40h]@17
  int v16; // [sp+14h] [bp-3Ch]@2
  int v17; // [sp+18h] [bp-38h]@17
  int v18; // [sp+24h] [bp-2Ch]@18

  v4 = this;
  v5 = a2;
  if ( *((_DWORD *)this + 9) )
  {
    j_StructureSettings::setBoundingBox((TemplateStructurePiece *)((char *)this + 40), a4);
    j_StructureTemplate::placeInWorld(
      *((StructureTemplate **)v4 + 9),
      v5,
      (TemplateStructurePiece *)((char *)v4 + 96),
      (TemplateStructurePiece *)((char *)v4 + 40));
    HIDWORD(v6) = *((_DWORD *)v4 + 9);
    LODWORD(v6) = &ptr;
    j_StructureTemplate::getMarkers(
      v6,
    v7 = v16;
    if ( v16 )
    {
      do
      {
        (*(void (__fastcall **)(TemplateStructurePiece *, int, int, BlockSource *))(*(_DWORD *)v4 + 64))(
          v4,
          v7 + 16,
          v7 + 4,
          v5);
        v7 = *(_DWORD *)v7;
      }
      while ( v7 );
      v7 = v16;
    }
    while ( v7 )
      v10 = (void *)v7;
      v11 = *(_DWORD *)(v7 + 16);
      v7 = *(_DWORD *)v7;
      v12 = (void *)(v11 - 12);
      if ( (int *)(v11 - 12) != &dword_28898C0 )
        v8 = (unsigned int *)(v11 - 4);
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
          j_j_j_j__ZdlPv_9(v12);
      j_operator delete(v10);
    j___aeabi_memclr4_0((int)ptr, 4 * v15);
    v16 = 0;
    v17 = 0;
    if ( ptr )
      if ( &v18 != ptr )
        j_operator delete(ptr);
    result = 1;
  }
  else
    result = 0;
  return result;
}


int __fastcall TemplateStructurePiece::_setup(TemplateStructurePiece *this, StructureTemplate *a2, const StructureSettings *a3, const BlockPos *a4)
{
  char *v4; // r12@1
  int v5; // r5@1
  int v6; // r6@1
  int v7; // r7@1
  int v8; // lr@1

  *((_DWORD *)this + 9) = a2;
  v4 = (char *)this + 40;
  v5 = *((_DWORD *)a3 + 1);
  v6 = *((_DWORD *)a3 + 2);
  v7 = *((_DWORD *)a3 + 3);
  v8 = *((_DWORD *)a3 + 4);
  *(_DWORD *)v4 = *(_DWORD *)a3;
  *((_DWORD *)v4 + 1) = v5;
  *((_DWORD *)v4 + 2) = v6;
  *((_DWORD *)v4 + 3) = v7;
  *((_DWORD *)v4 + 4) = v8;
  *((_QWORD *)this + 8) = *((_QWORD *)a3 + 3);
  *((_DWORD *)this + 18) = *((_DWORD *)a3 + 8);
  *((_DWORD *)this + 19) = *((_DWORD *)a3 + 9);
  *((_DWORD *)this + 20) = *((_DWORD *)a3 + 10);
  *((_DWORD *)this + 21) = *((_DWORD *)a3 + 11);
  *((_DWORD *)this + 22) = *((_DWORD *)a3 + 12);
  *((_DWORD *)this + 23) = *((_DWORD *)a3 + 13);
  *((_DWORD *)this + 24) = *(_DWORD *)a4;
  *((_DWORD *)this + 25) = *((_DWORD *)a4 + 1);
  *((_DWORD *)this + 26) = *((_DWORD *)a4 + 2);
  *((_DWORD *)this + 7) = 2;
  return j_j_j__ZN22TemplateStructurePiece27_setBoundingBoxFromTemplateEv(this);
}


int __fastcall TemplateStructurePiece::TemplateStructurePiece(int a1, int a2)
{
  int v2; // r4@1
  StructureSettings *v3; // r5@1

  v2 = a1;
  v3 = (StructureSettings *)(a1 + 40);
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 28) = 255;
  *(_DWORD *)(a1 + 32) = a2;
  *(_DWORD *)a1 = &off_2724220;
  *(_DWORD *)(a1 + 36) = 0;
  j_StructureSettings::StructureSettings(a1 + 40);
  *(_DWORD *)(v2 + 96) = 0;
  *(_DWORD *)(v2 + 100) = 0;
  *(_DWORD *)(v2 + 104) = 0;
  j_StructureSettings::setIgnoreEntities(v3, 1);
  j_StructureSettings::setIgnoreBlock(v3, (const Block *)Block::mAir);
  return v2;
}


int __fastcall TemplateStructurePiece::_setBoundingBoxFromTemplate(TemplateStructurePiece *this)
{
  TemplateStructurePiece *v1; // r4@1
  StructureSettings *v2; // r6@1
  int v3; // r5@1
  char *v4; // r0@1
  int v5; // r3@1
  int v6; // lr@1
  int v7; // r0@1
  int v8; // r12@1
  int v9; // r1@1
  int v10; // r2@3
  int v11; // r6@3
  int v12; // r8@3
  Facing *v13; // r0@10
  unsigned int v14; // r2@10
  unsigned int v15; // r3@10
  Facing *v16; // r0@12
  int v17; // r1@20
  int v18; // r3@20
  int v19; // r7@20
  int result; // r0@20
  unsigned int v21; // [sp+0h] [bp-78h]@18
  int v22; // [sp+4h] [bp-74h]@18
  unsigned int v23; // [sp+8h] [bp-70h]@18
  unsigned int v24; // [sp+Ch] [bp-6Ch]@16
  int v25; // [sp+10h] [bp-68h]@16
  unsigned int v26; // [sp+14h] [bp-64h]@16
  unsigned int v27; // [sp+18h] [bp-60h]@12
  int v28; // [sp+1Ch] [bp-5Ch]@12
  unsigned int v29; // [sp+20h] [bp-58h]@12
  unsigned int v30; // [sp+24h] [bp-54h]@17
  int v31; // [sp+28h] [bp-50h]@17
  unsigned int v32; // [sp+2Ch] [bp-4Ch]@17
  unsigned int v33; // [sp+30h] [bp-48h]@14
  int v34; // [sp+34h] [bp-44h]@14
  unsigned int v35; // [sp+38h] [bp-40h]@14
  unsigned int v36; // [sp+3Ch] [bp-3Ch]@10
  int v37; // [sp+40h] [bp-38h]@10
  unsigned int v38; // [sp+44h] [bp-34h]@10
  unsigned int v39; // [sp+48h] [bp-30h]@7
  int v40; // [sp+4Ch] [bp-2Ch]@7
  unsigned int v41; // [sp+50h] [bp-28h]@7
  int v42; // [sp+54h] [bp-24h]@1
  int v43; // [sp+58h] [bp-20h]@1
  int v44; // [sp+5Ch] [bp-1Ch]@1

  v1 = this;
  v2 = (TemplateStructurePiece *)((char *)this + 40);
  v3 = *(_WORD *)j_StructureSettings::getRotation((TemplateStructurePiece *)((char *)this + 40));
  j_StructureTemplate::getSize((StructureTemplate *)&v42, *((_DWORD *)v1 + 9), v3);
  v4 = j_StructureSettings::getMirror(v2);
  v5 = v42;
  v6 = *(_DWORD *)v4;
  v7 = 0;
  v8 = v44;
  v9 = v43 - 1;
  *((_DWORD *)v1 + 1) = 0;
  *((_DWORD *)v1 + 2) = 0;
  *((_DWORD *)v1 + 3) = 0;
  *((_DWORD *)v1 + 4) = v5;
  *((_DWORD *)v1 + 5) = v9;
  *((_DWORD *)v1 + 6) = v8;
  if ( v3 == 3 )
  {
    *((_DWORD *)v1 + 3) = -v8;
    *((_DWORD *)v1 + 6) = 0;
    v10 = 0;
    v11 = v5;
    v7 = -v8;
    v12 = 0;
  }
  else if ( v3 == 2 )
    v12 = -v5;
    v11 = 0;
    *((_DWORD *)v1 + 1) = -v5;
    *((_DWORD *)v1 + 4) = 0;
  else
    v10 = v8;
    if ( v3 == 1 )
    {
      v11 = 0;
      v12 = -v5;
      *((_DWORD *)v1 + 1) = -v5;
      v10 = v8;
      *((_DWORD *)v1 + 4) = 0;
      v7 = 0;
    }
  v39 = BlockPos::ZERO;
  v40 = unk_2816278;
  v41 = dword_281627C;
  if ( v6 == 1 )
    if ( (v3 | 2) == 3 )
      v16 = j_RotationUtil::rotate((RotationUtil *)v3, 2, v10);
      j_BlockPos::relative((BlockPos *)&v27, (int)&v39, (int)v16, v42);
      v14 = v27;
      v39 = v27;
      v40 = v28;
      v15 = v29;
    else if ( v3 == 2 )
      j_BlockPos::relative((BlockPos *)&v24, (int)&v39, 3, v8);
      v14 = v24;
      v39 = v24;
      v40 = v25;
      v15 = v26;
    else
      j_BlockPos::relative((BlockPos *)&v21, (int)&v39, 2, v8);
      v14 = v21;
      v15 = v23;
      v39 = v21;
      v40 = v22;
    goto LABEL_19;
  if ( v6 == 2 )
      v13 = j_RotationUtil::rotate((RotationUtil *)v3, 4, v10);
      j_BlockPos::relative((BlockPos *)&v36, (int)&v39, (int)v13, v44);
      v14 = v36;
      v39 = v36;
      v40 = v37;
      v15 = v38;
      j_BlockPos::relative((BlockPos *)&v33, (int)&v39, 5, v5);
      v14 = v33;
      v39 = v33;
      v40 = v34;
      v15 = v35;
      j_BlockPos::relative((BlockPos *)&v30, (int)&v39, 4, v5);
      v14 = v30;
      v39 = v30;
      v40 = v31;
      v15 = v32;
LABEL_19:
    v41 = v15;
    v12 = *((_DWORD *)v1 + 1) + v14;
    *((_DWORD *)v1 + 1) = v12;
    v7 = *((_DWORD *)v1 + 3) + v15;
    *((_DWORD *)v1 + 3) = v7;
    v11 = *((_DWORD *)v1 + 4) + v14;
    *((_DWORD *)v1 + 4) = v11;
    v10 = *((_DWORD *)v1 + 6) + v15;
    *((_DWORD *)v1 + 6) = v10;
  v17 = *((_DWORD *)v1 + 24);
  v18 = *((_DWORD *)v1 + 25);
  v19 = *((_DWORD *)v1 + 26);
  *((_DWORD *)v1 + 1) = v12 + v17;
  *((_DWORD *)v1 + 2) += v18;
  *((_DWORD *)v1 + 3) = v7 + v19;
  *((_DWORD *)v1 + 4) = v11 + v17;
  *((_DWORD *)v1 + 5) += v18;
  result = v10 + v19;
  *((_DWORD *)v1 + 6) = v10 + v19;
  return result;
}


char *__fastcall TemplateStructurePiece::moveBoundingBox(TemplateStructurePiece *this, int a2, int a3, int a4)
{
  __int64 v4; // kr00_8@1
  int v5; // r4@1
  char *v6; // r0@1

  *((_DWORD *)this + 1) += a2;
  *((_DWORD *)this + 2) += a3;
  *((_DWORD *)this + 3) += a4;
  *((_DWORD *)this + 4) += a2;
  *((_DWORD *)this + 5) += a3;
  *((_DWORD *)this + 6) += a4;
  v4 = *((_QWORD *)this + 12);
  v5 = *((_DWORD *)this + 26);
  v6 = (char *)this + 96;
  *(_DWORD *)v6 = a2 + v4;
  *((_DWORD *)v6 + 1) = a3 + HIDWORD(v4);
  *((_DWORD *)v6 + 2) = a4 + v5;
  return v6 + 12;
}
