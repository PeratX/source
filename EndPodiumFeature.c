

void __fastcall EndPodiumFeature::~EndPodiumFeature(EndPodiumFeature *this)
{
  void *v1; // r0@1

  v1 = (void *)Feature::~Feature(this);
  j_j_j__ZdlPv_6(v1);
}


void __fastcall EndPodiumFeature::~EndPodiumFeature(EndPodiumFeature *this)
{
  EndPodiumFeature::~EndPodiumFeature(this);
}


signed int __fastcall EndPodiumFeature::place(EndPodiumFeature *this, BlockSource *a2, const BlockPos *a3, Random *a4)
{
  EndPodiumFeature *v4; // r5@1
  const BlockPos *v9; // r6@1
  BlockSource *v10; // r4@1
  signed int v12; // r8@2
  int v14; // r0@4
  int v15; // r1@4
  int v16; // r2@4
  BlockSource *v17; // r1@8
  int *v18; // r2@8
  char *v19; // r3@8
  Feature *v20; // r0@8
  int v21; // r2@21
  int v22; // r3@21
  int v23; // r1@21
  int v24; // r2@21
  int v25; // r1@21
  int v26; // r2@21
  int v27; // r1@21
  int v28; // r2@21
  int v29; // r1@21
  int v30; // r2@21
  char v32; // [sp+Ch] [bp-DCh]@21
  char v33; // [sp+Dh] [bp-DBh]@21
  char v34; // [sp+10h] [bp-D8h]@21
  char v35; // [sp+1Ch] [bp-CCh]@21
  char v36; // [sp+1Dh] [bp-CBh]@21
  char v37; // [sp+20h] [bp-C8h]@21
  char v38; // [sp+2Ch] [bp-BCh]@21
  char v39; // [sp+2Dh] [bp-BBh]@21
  char v40; // [sp+30h] [bp-B8h]@21
  char v41; // [sp+3Ch] [bp-ACh]@21
  char v42; // [sp+3Dh] [bp-ABh]@21
  char v43; // [sp+40h] [bp-A8h]@21
  char v44; // [sp+4Ch] [bp-9Ch]@21
  char v45; // [sp+4Dh] [bp-9Bh]@21
  int v46; // [sp+50h] [bp-98h]@21
  int v47; // [sp+54h] [bp-94h]@21
  int v48; // [sp+58h] [bp-90h]@21
  char v49; // [sp+5Ch] [bp-8Ch]@16
  char v50; // [sp+5Dh] [bp-8Bh]@16
  int v51; // [sp+60h] [bp-88h]@16
  int v52; // [sp+64h] [bp-84h]@16
  int v53; // [sp+68h] [bp-80h]@16
  char v54; // [sp+6Ch] [bp-7Ch]@15
  char v55; // [sp+6Dh] [bp-7Bh]@15
  int v56; // [sp+70h] [bp-78h]@15
  int v57; // [sp+74h] [bp-74h]@15
  int v58; // [sp+78h] [bp-70h]@15
  char v59; // [sp+7Ch] [bp-6Ch]@15
  char v60; // [sp+7Dh] [bp-6Bh]@15
  int v61; // [sp+80h] [bp-68h]@15
  int v62; // [sp+84h] [bp-64h]@15
  int v63; // [sp+88h] [bp-60h]@15
  char v64; // [sp+8Ch] [bp-5Ch]@12
  char v65; // [sp+8Dh] [bp-5Bh]@12
  char v66; // [sp+90h] [bp-58h]@8
  char v67; // [sp+91h] [bp-57h]@8
  char v68; // [sp+94h] [bp-54h]@10
  char v69; // [sp+95h] [bp-53h]@10
  char v70; // [sp+98h] [bp-50h]@13
  char v71; // [sp+99h] [bp-4Fh]@13
  int v72; // [sp+9Ch] [bp-4Ch]@4
  int v73; // [sp+A0h] [bp-48h]@4
  int v74; // [sp+A4h] [bp-44h]@4

  v4 = this;
  __asm
  {
    VMOV.F32        S18, #6.25
    VLDR            S16, =12.25
  }
  v9 = a3;
  v10 = a2;
  _R11 = -4;
  do
    __asm { VMOV            S0, R11 }
    v12 = -1;
    __asm
    {
      VCVT.F32.S32    S0, S0
      VMUL.F32        S20, S0, S0
    }
    do
      _R9 = -4;
      do
      {
        __asm
        {
          VMOV            S0, R9
          VCVT.F32.S32    S0, S0
        }
        v14 = *(_DWORD *)v9 + _R11;
        v15 = *((_DWORD *)v9 + 1) + v12;
        v16 = *((_DWORD *)v9 + 2) + _R9;
        v72 = *(_DWORD *)v9 + _R11;
        v73 = v15;
        v74 = v16;
          VMUL.F32        S0, S0, S0
          VADD.F32        S0, S20, S0
          VCMPE.F32       S0, S16
          VMRS            APSR_nzcv, FPSCR
        if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
          if ( v12 <= -1 )
          {
            __asm
            {
              VCMPE.F32       S0, S18
              VMRS            APSR_nzcv, FPSCR
            }
            if ( (unsigned __int8)(_NF ^ _VF) | _ZF )
              v17 = v10;
              v18 = &v72;
              v19 = &v70;
              v70 = *(_BYTE *)(Block::mBedrock + 4);
              v71 = 1;
              v20 = v4;
            else
              v19 = &v68;
              v68 = *(_BYTE *)(Block::mEndStone + 4);
              v69 = 0;
          }
          else if ( v12 < 1 )
              if ( *((_BYTE *)v4 + 12) )
              {
                v61 = v14;
                v62 = v15;
                v63 = v16;
                v59 = *(_BYTE *)(Block::mAir + 4);
                v60 = 0;
                Feature::_setBlockAndData(v4, v10, (const BlockPos *)&v61, (const FullBlock *)&v59);
                v17 = v10;
                v56 = v72;
                v18 = &v56;
                v19 = &v54;
                v57 = v73;
                v58 = v74;
                v54 = *(_BYTE *)(Block::mEndPortal + 4);
                v20 = v4;
                v55 = 0;
              }
              else
                v51 = v14;
                v52 = v15;
                v53 = v16;
                v18 = &v51;
                v19 = &v49;
                v49 = *(_BYTE *)(Block::mAir + 4);
                v50 = 0;
              v19 = &v64;
              v64 = *(_BYTE *)(Block::mBedrock + 4);
              v65 = 1;
          else
            v17 = v10;
            v18 = &v72;
            v19 = &v66;
            v66 = *(_BYTE *)(Block::mAir + 4);
            v20 = v4;
            v67 = 0;
          Feature::_setBlockAndData(v20, v17, (const BlockPos *)v18, (const FullBlock *)v19);
        ++_R9;
      }
      while ( _R9 != 5 );
      ++v12;
    while ( v12 != 33 );
    ++_R11;
  while ( _R11 != 5 );
  v21 = *((_DWORD *)v9 + 1);
  v22 = *((_DWORD *)v9 + 2);
  v46 = *(_DWORD *)v9;
  v47 = v21;
  v48 = v22;
  v44 = *(_BYTE *)(Block::mBedrock + 4);
  v45 = 1;
  Feature::_setBlockAndData(v4, v10, (const BlockPos *)&v46, (const FullBlock *)&v44);
  v23 = *((_DWORD *)v9 + 1);
  v24 = *((_DWORD *)v9 + 2);
  v47 = v23 + 1;
  v48 = v24;
  v25 = *((_DWORD *)v9 + 1);
  v26 = *((_DWORD *)v9 + 2);
  v47 = v25 + 2;
  v48 = v26;
  v27 = *((_DWORD *)v9 + 1);
  v28 = *((_DWORD *)v9 + 2);
  v47 = v27 + 3;
  v48 = v28;
  v29 = *((_DWORD *)v9 + 1);
  v30 = *((_DWORD *)v9 + 2);
  v72 = *(_DWORD *)v9;
  v73 = v29 + 2;
  v74 = v30;
  BlockPos::relative((BlockPos *)&v43, (int)&v72, 2, 1);
  v41 = *(_BYTE *)(Block::mTorch + 4);
  v42 = 4;
  Feature::_setBlockAndData(v4, v10, (const BlockPos *)&v43, (const FullBlock *)&v41);
  BlockPos::relative((BlockPos *)&v40, (int)&v72, 3, 1);
  v38 = *(_BYTE *)(Block::mTorch + 4);
  v39 = 3;
  Feature::_setBlockAndData(v4, v10, (const BlockPos *)&v40, (const FullBlock *)&v38);
  BlockPos::relative((BlockPos *)&v37, (int)&v72, 5, 1);
  v35 = *(_BYTE *)(Block::mTorch + 4);
  v36 = 1;
  Feature::_setBlockAndData(v4, v10, (const BlockPos *)&v37, (const FullBlock *)&v35);
  BlockPos::relative((BlockPos *)&v34, (int)&v72, 4, 1);
  v32 = *(_BYTE *)(Block::mTorch + 4);
  v33 = 2;
  Feature::_setBlockAndData(v4, v10, (const BlockPos *)&v34, (const FullBlock *)&v32);
  return 1;
}


int __fastcall EndPodiumFeature::EndPodiumFeature(Feature *a1, char a2)
{
  char v2; // r4@1
  int result; // r0@1

  v2 = a2;
  result = Feature::Feature(a1, 0);
  *(_DWORD *)result = &off_2718A64;
  *(_BYTE *)(result + 12) = v2;
  return result;
}
