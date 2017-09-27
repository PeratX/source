

signed int __fastcall HellSpringFeature::place(HellSpringFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  const BlockPos *v4; // r4@1
  BlockSource *v5; // r5@1
  HellSpringFeature *v6; // r6@1
  int v7; // r0@1
  int v8; // r1@1
  int v9; // r2@1
  int *v10; // r0@2
  int v11; // r1@4
  int v12; // r2@4
  int v13; // r2@4
  int v14; // r3@4
  int v15; // r7@4
  int v16; // r8@4
  int v17; // r2@4
  int v18; // r2@4
  int v19; // r1@4
  int v20; // r2@4
  int v21; // r1@4
  int v22; // r2@4
  signed int v23; // r11@4
  int v24; // r1@4
  int v25; // r2@4
  int v26; // r2@4
  signed int v27; // r10@4
  int v28; // r2@4
  signed int v29; // r9@4
  int v30; // r1@4
  int v31; // r2@4
  signed int v32; // r0@4
  signed int v33; // r8@4
  signed int v34; // r6@6
  signed int v35; // r0@14
  signed int v36; // r1@14
  signed int v37; // r3@14
  signed int v38; // r2@16
  bool v39; // zf@30
  signed int v41; // [sp+0h] [bp-F0h]@4
  int v42; // [sp+4h] [bp-ECh]@4
  int v43; // [sp+8h] [bp-E8h]@4
  int v44; // [sp+Ch] [bp-E4h]@4
  int v45; // [sp+10h] [bp-E0h]@4
  int v46; // [sp+14h] [bp-DCh]@4
  int v47; // [sp+18h] [bp-D8h]@4
  int v48; // [sp+1Ch] [bp-D4h]@4
  int v49; // [sp+20h] [bp-D0h]@4
  Feature *v50; // [sp+24h] [bp-CCh]@2
  char v51; // [sp+28h] [bp-C8h]@34
  char v52; // [sp+29h] [bp-C7h]@34
  int v53; // [sp+2Ch] [bp-C4h]@4
  int v54; // [sp+30h] [bp-C0h]@4
  int v55; // [sp+34h] [bp-BCh]@4
  __int64 v56; // [sp+38h] [bp-B8h]@4
  int v57; // [sp+40h] [bp-B0h]@4
  __int64 v58; // [sp+44h] [bp-ACh]@4
  int v59; // [sp+4Ch] [bp-A4h]@4
  int v60; // [sp+50h] [bp-A0h]@4
  int v61; // [sp+54h] [bp-9Ch]@4
  int v62; // [sp+58h] [bp-98h]@4
  int v63; // [sp+5Ch] [bp-94h]@4
  int v64; // [sp+60h] [bp-90h]@4
  int v65; // [sp+64h] [bp-8Ch]@4
  unsigned __int8 v66; // [sp+68h] [bp-88h]@4
  int v67; // [sp+6Ch] [bp-84h]@4
  int v68; // [sp+70h] [bp-80h]@4
  int v69; // [sp+74h] [bp-7Ch]@4
  unsigned __int8 v70; // [sp+78h] [bp-78h]@4
  __int64 v71; // [sp+7Ch] [bp-74h]@4
  int v72; // [sp+84h] [bp-6Ch]@4
  unsigned __int8 v73; // [sp+88h] [bp-68h]@4
  __int64 v74; // [sp+8Ch] [bp-64h]@4
  int v75; // [sp+94h] [bp-5Ch]@4
  unsigned __int8 v76; // [sp+98h] [bp-58h]@4
  int v77; // [sp+9Ch] [bp-54h]@4
  int v78; // [sp+A0h] [bp-50h]@4
  int v79; // [sp+A4h] [bp-4Ch]@4
  unsigned __int8 v80; // [sp+A8h] [bp-48h]@4
  int v81; // [sp+ACh] [bp-44h]@4
  int v82; // [sp+B0h] [bp-40h]@4
  int v83; // [sp+B4h] [bp-3Ch]@4
  unsigned __int8 v84; // [sp+B8h] [bp-38h]@3
  unsigned __int8 v85; // [sp+BCh] [bp-34h]@1
  int v86; // [sp+C0h] [bp-30h]@1
  int v87; // [sp+C4h] [bp-2Ch]@1
  int v88; // [sp+C8h] [bp-28h]@1

  v4 = a3;
  v5 = a2;
  v6 = this;
  v7 = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 2);
  v86 = v7;
  v87 = v8 + 1;
  v88 = v9;
  j_BlockSource::getBlockID((BlockSource *)&v85, v5, (int)&v86);
  if ( v85 == *(_BYTE *)(Block::mNetherrack + 4) )
  {
    v50 = v6;
    v10 = (int *)j_BlockSource::getMaterial(v5, v4);
    if ( j_Material::isType(v10, 0)
      || (j_BlockSource::getBlockID((BlockSource *)&v84, v5, (int)v4), v84 == *(_BYTE *)(Block::mNetherrack + 4)) )
    {
      v11 = *((_DWORD *)v4 + 1);
      v12 = *((_DWORD *)v4 + 2);
      v81 = *(_DWORD *)v4 - 1;
      v82 = v11;
      v83 = v12;
      j_BlockSource::getBlockID((BlockSource *)&v80, v5, (int)&v81);
      v13 = *((_DWORD *)v4 + 1);
      v14 = *((_DWORD *)v4 + 2);
      v15 = *(_BYTE *)(Block::mNetherrack + 4);
      v16 = v80;
      v77 = *(_DWORD *)v4 + 1;
      v78 = v13;
      v79 = v14;
      j_BlockSource::getBlockID((BlockSource *)&v76, v5, (int)&v77);
      v49 = *(_BYTE *)(Block::mNetherrack + 4);
      v17 = *((_DWORD *)v4 + 2);
      v48 = v76;
      v74 = *(_QWORD *)v4;
      v75 = v17 - 1;
      j_BlockSource::getBlockID((BlockSource *)&v73, v5, (int)&v74);
      v47 = *(_BYTE *)(Block::mNetherrack + 4);
      v18 = *((_DWORD *)v4 + 2);
      v46 = v73;
      v71 = *(_QWORD *)v4;
      v72 = v18 + 1;
      j_BlockSource::getBlockID((BlockSource *)&v70, v5, (int)&v71);
      v45 = *(_BYTE *)(Block::mNetherrack + 4);
      v19 = *((_DWORD *)v4 + 1);
      v20 = *((_DWORD *)v4 + 2);
      v67 = *(_DWORD *)v4;
      v44 = v70;
      v68 = v19 - 1;
      v69 = v20;
      j_BlockSource::getBlockID((BlockSource *)&v66, v5, (int)&v67);
      v43 = *(_BYTE *)(Block::mNetherrack + 4);
      v21 = *((_DWORD *)v4 + 1);
      v22 = *((_DWORD *)v4 + 2);
      v42 = v66;
      v63 = *(_DWORD *)v4 - 1;
      v64 = v21;
      v65 = v22;
      v23 = j_BlockSource::isEmptyBlock(v5, (const BlockPos *)&v63);
      v24 = *((_DWORD *)v4 + 1);
      v25 = *((_DWORD *)v4 + 2);
      v60 = *(_DWORD *)v4 + 1;
      v61 = v24;
      v62 = v25;
      v41 = j_BlockSource::isEmptyBlock(v5, (const BlockPos *)&v60);
      v26 = *((_DWORD *)v4 + 2);
      v58 = *(_QWORD *)v4;
      v59 = v26 - 1;
      v27 = j_BlockSource::isEmptyBlock(v5, (const BlockPos *)&v58);
      v28 = *((_DWORD *)v4 + 2);
      v56 = *(_QWORD *)v4;
      v57 = v28 + 1;
      v29 = j_BlockSource::isEmptyBlock(v5, (const BlockPos *)&v56);
      v30 = *((_DWORD *)v4 + 1);
      v31 = *((_DWORD *)v4 + 2);
      v39 = v16 == v15;
      v53 = *(_DWORD *)v4;
      v54 = v30 - 1;
      v55 = v31;
      v32 = 1;
      v33 = 0;
      if ( v39 )
      {
        v32 = 2;
        v33 = 1;
      }
      v34 = 1;
      if ( v48 == v49 )
        v33 = v32;
      if ( v46 == v47 )
        ++v33;
      if ( v44 == v45 )
      if ( v42 == v43 )
      v35 = j_BlockSource::isEmptyBlock(v5, (const BlockPos *)&v53);
      v36 = 0;
      v37 = 0;
      if ( v33 == 4 )
        v36 = 1;
      v38 = 1;
      if ( !*((_BYTE *)v50 + 13) )
        v37 = 1;
      if ( v23 )
        v38 = 2;
      if ( !v41 )
        v38 = v23;
      if ( v27 )
        ++v38;
      if ( v29 )
      if ( v35 )
      if ( v38 != 1 )
        v38 = 0;
      v39 = v33 == 5;
      if ( v33 != 5 )
        v39 = (v36 & v37 & v38) == 1;
        v51 = *((_BYTE *)v50 + 12);
        v52 = 0;
        j_Feature::_setBlockAndData(v50, v5, v4, (const FullBlock *)&v51);
        v34 = 1;
    }
    else
      v34 = 0;
  }
  else
    v34 = 0;
  return v34;
}


void __fastcall HellSpringFeature::~HellSpringFeature(HellSpringFeature *this)
{
  HellSpringFeature::~HellSpringFeature(this);
}


void __fastcall HellSpringFeature::~HellSpringFeature(HellSpringFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)j_Feature::~Feature(this);
  j_j_j__ZdlPv_7(v1);
}


int __fastcall HellSpringFeature::HellSpringFeature(Feature *a1, _BYTE *a2, char a3)
{
  _BYTE *v3; // r5@1
  char v4; // r4@1
  int result; // r0@1

  v3 = a2;
  v4 = a3;
  result = j_Feature::Feature(a1, 0);
  *(_DWORD *)result = &off_2723674;
  *(_BYTE *)(result + 12) = *v3;
  *(_BYTE *)(result + 13) = v4;
  return result;
}
