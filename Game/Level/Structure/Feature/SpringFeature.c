

signed int __fastcall SpringFeature::place(SpringFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  const BlockPos *v4; // r5@1
  BlockSource *v5; // r6@1
  SpringFeature *v6; // r9@1
  int v7; // r0@1
  int v8; // r1@1
  int v9; // r2@1
  int v10; // r1@2
  int v11; // r2@2
  int v12; // r1@5
  int v13; // r2@5
  int v14; // r2@5
  int v15; // r3@5
  int v16; // ST1C_4@5
  int v17; // r11@5
  int v18; // r2@5
  int v19; // r2@5
  int v20; // r1@5
  int v21; // r2@5
  int v22; // r7@5
  signed int v23; // r8@5
  int v24; // r1@5
  int v25; // r2@5
  signed int v26; // r10@5
  int v27; // r2@5
  signed int v28; // r0@5
  __int64 v29; // r1@5
  int v30; // r3@5
  signed int v31; // r4@5
  signed int v32; // r1@5
  signed int v33; // r11@5
  signed int v34; // r7@11
  bool v35; // zf@21
  int v37; // [sp+8h] [bp-D8h]@5
  int v38; // [sp+Ch] [bp-D4h]@5
  int v39; // [sp+10h] [bp-D0h]@5
  int v40; // [sp+14h] [bp-CCh]@5
  int v41; // [sp+18h] [bp-C8h]@5
  char v42; // [sp+20h] [bp-C0h]@25
  char v43; // [sp+21h] [bp-BFh]@25
  __int64 v44; // [sp+24h] [bp-BCh]@5
  int v45; // [sp+2Ch] [bp-B4h]@5
  __int64 v46; // [sp+30h] [bp-B0h]@5
  int v47; // [sp+38h] [bp-A8h]@5
  int v48; // [sp+3Ch] [bp-A4h]@5
  int v49; // [sp+40h] [bp-A0h]@5
  int v50; // [sp+44h] [bp-9Ch]@5
  int v51; // [sp+48h] [bp-98h]@5
  int v52; // [sp+4Ch] [bp-94h]@5
  int v53; // [sp+50h] [bp-90h]@5
  unsigned __int8 v54; // [sp+54h] [bp-8Ch]@5
  __int64 v55; // [sp+58h] [bp-88h]@5
  int v56; // [sp+60h] [bp-80h]@5
  unsigned __int8 v57; // [sp+64h] [bp-7Ch]@5
  __int64 v58; // [sp+68h] [bp-78h]@5
  int v59; // [sp+70h] [bp-70h]@5
  unsigned __int8 v60; // [sp+74h] [bp-6Ch]@5
  int v61; // [sp+78h] [bp-68h]@5
  int v62; // [sp+7Ch] [bp-64h]@5
  int v63; // [sp+80h] [bp-60h]@5
  unsigned __int8 v64; // [sp+84h] [bp-5Ch]@5
  int v65; // [sp+88h] [bp-58h]@5
  int v66; // [sp+8Ch] [bp-54h]@5
  int v67; // [sp+90h] [bp-50h]@5
  unsigned __int8 v68; // [sp+94h] [bp-4Ch]@4
  char v69; // [sp+98h] [bp-48h]@3
  unsigned __int8 v70; // [sp+9Ch] [bp-44h]@2
  int v71; // [sp+A0h] [bp-40h]@2
  int v72; // [sp+A4h] [bp-3Ch]@2
  int v73; // [sp+A8h] [bp-38h]@2
  unsigned __int8 v74; // [sp+ACh] [bp-34h]@1
  int v75; // [sp+B0h] [bp-30h]@1
  int v76; // [sp+B4h] [bp-2Ch]@1
  int v77; // [sp+B8h] [bp-28h]@1

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 2);
  v75 = v7;
  v76 = v8 + 1;
  v77 = v9;
  BlockSource::getBlockID((BlockSource *)&v74, v5, (int)&v75);
  if ( v74 == *(_BYTE *)(Block::mStone + 4) )
  {
    v10 = *((_DWORD *)v4 + 1);
    v11 = *((_DWORD *)v4 + 2);
    v71 = *(_DWORD *)v4;
    v72 = v10 - 1;
    v73 = v11;
    BlockSource::getBlockID((BlockSource *)&v70, v5, (int)&v71);
    if ( v70 == *(_BYTE *)(Block::mStone + 4) )
    {
      BlockSource::getBlockID((BlockSource *)&v69, v5, (int)v4);
      if ( v69 && (BlockSource::getBlockID((BlockSource *)&v68, v5, (int)v4), v68 != *(_BYTE *)(Block::mStone + 4)) )
      {
        v31 = 0;
      }
      else
        v12 = *((_DWORD *)v4 + 1);
        v13 = *((_DWORD *)v4 + 2);
        v65 = *(_DWORD *)v4 - 1;
        v66 = v12;
        v67 = v13;
        BlockSource::getBlockID((BlockSource *)&v64, v5, (int)&v65);
        v14 = *((_DWORD *)v4 + 1);
        v15 = *((_DWORD *)v4 + 2);
        v16 = *(_BYTE *)(Block::mStone + 4);
        v17 = v64;
        v61 = *(_DWORD *)v4 + 1;
        v62 = v14;
        v63 = v15;
        BlockSource::getBlockID((BlockSource *)&v60, v5, (int)&v61);
        v41 = *(_BYTE *)(Block::mStone + 4);
        v18 = *((_DWORD *)v4 + 2);
        v40 = v60;
        v58 = *(_QWORD *)v4;
        v59 = v18 - 1;
        BlockSource::getBlockID((BlockSource *)&v57, v5, (int)&v58);
        v39 = *(_BYTE *)(Block::mStone + 4);
        v19 = *((_DWORD *)v4 + 2);
        v38 = v57;
        v55 = *(_QWORD *)v4;
        v56 = v19 + 1;
        BlockSource::getBlockID((BlockSource *)&v54, v5, (int)&v55);
        v37 = *(_BYTE *)(Block::mStone + 4);
        v20 = *((_DWORD *)v4 + 1);
        v21 = *((_DWORD *)v4 + 2);
        v22 = v54;
        v51 = *(_DWORD *)v4 - 1;
        v52 = v20;
        v53 = v21;
        v23 = BlockSource::isEmptyBlock(v5, (const BlockPos *)&v51);
        v24 = *((_DWORD *)v4 + 1);
        v25 = *((_DWORD *)v4 + 2);
        v48 = *(_DWORD *)v4 + 1;
        v49 = v24;
        v50 = v25;
        v26 = BlockSource::isEmptyBlock(v5, (const BlockPos *)&v48);
        v27 = *((_DWORD *)v4 + 2);
        v46 = *(_QWORD *)v4;
        v47 = v27 - 1;
        v28 = BlockSource::isEmptyBlock(v5, (const BlockPos *)&v46);
        LODWORD(v29) = *(_DWORD *)v4;
        HIDWORD(v29) = *((_DWORD *)v4 + 1);
        v30 = *((_DWORD *)v4 + 2);
        v31 = 1;
        v44 = v29;
        v45 = v30 + 1;
        v35 = v17 == v16;
        v32 = 1;
        v33 = 0;
        if ( v35 )
        {
          v32 = 2;
          v33 = 1;
        }
        if ( v40 == v41 )
          v33 = v32;
        if ( v38 == v39 )
          ++v33;
        v35 = v22 == v37;
        v34 = 1;
        if ( v23 )
          v34 = 2;
        if ( !v26 )
          v34 = v23;
        if ( v28 )
          ++v34;
        if ( BlockSource::isEmptyBlock(v5, (const BlockPos *)&v44) )
        v35 = v33 == 3;
        if ( v33 == 3 )
          v35 = v34 == 1;
          v42 = *((_BYTE *)v6 + 12);
          v43 = 0;
          if ( Feature::_setBlockAndData(v6, v5, v4, (const FullBlock *)&v42) == 1 )
            (*(void (**)(void))(*(_DWORD *)Block::mBlocks[*((_BYTE *)v6 + 12)] + 8))();
          v31 = 1;
    }
    else
      v31 = 0;
  }
  else
    v31 = 0;
  return v31;
}


int __fastcall SpringFeature::SpringFeature(Feature *a1, _BYTE *a2)
{
  _BYTE *v2; // r4@1
  int result; // r0@1

  v2 = a2;
  result = Feature::Feature(a1, 0);
  *(_DWORD *)result = &off_2718C1C;
  *(_BYTE *)(result + 12) = *v2;
  return result;
}


void __fastcall SpringFeature::~SpringFeature(SpringFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


void __fastcall SpringFeature::~SpringFeature(SpringFeature *this)
{
  SpringFeature::~SpringFeature(this);
}
