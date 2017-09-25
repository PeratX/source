

char *__fastcall Material::addMaterial(int *a1)
{
  int *v1; // r1@1
  int *v2; // r0@1
  int v3; // r12@2
  char *result; // r0@2

  v1 = a1;
  v2 = (int *)dword_28200C8;
  if ( dword_28200C8 == unk_28200CC )
  {
    result = j_j_j__ZNSt6vectorISt10unique_ptrI8MaterialSt14default_deleteIS1_EESaIS4_EE19_M_emplace_back_auxIJS4_EEEvDpOT_(
               &Material::mMaterials,
               v1);
  }
  else
    v3 = *v1;
    *v1 = 0;
    *v2 = v3;
    result = (char *)(dword_28200C8 + 4);
    dword_28200C8 += 4;
  return result;
}


int __fastcall Material::getColor(int result, int a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int v4; // r12@1
  int v5; // r1@1

  v2 = *(_DWORD *)(a2 + 20);
  v3 = *(_DWORD *)(a2 + 24);
  v4 = *(_DWORD *)(a2 + 28);
  v5 = *(_DWORD *)(a2 + 32);
  *(_DWORD *)result = v2;
  *(_DWORD *)(result + 4) = v3;
  *(_DWORD *)(result + 8) = v4;
  *(_DWORD *)(result + 12) = v5;
  return result;
}


_DWORD *__fastcall Material::_setupSurfaceMaterials(Material *this)
{
  __int64 v1; // r5@1
  char *v2; // r0@1
  void *v3; // r0@1
  _BYTE *v4; // r0@1
  _BYTE *v5; // r0@1
  _BYTE *v6; // r0@1
  _BYTE *v7; // r0@1
  _BYTE *v8; // r0@1
  _DWORD *v9; // r0@1
  _BYTE *v10; // r0@1
  _DWORD *v11; // r0@1
  _BYTE *v12; // r0@1
  _DWORD *v13; // r0@1
  _BYTE *v14; // r0@1
  char *v15; // r0@1
  _BYTE *v16; // r0@1
  _BYTE *v17; // r0@1
  _DWORD *v18; // r0@1
  _BYTE *v19; // r0@1
  _BYTE *v20; // r0@1
  _BYTE *v21; // r0@1
  char *v22; // r0@1
  _DWORD *v23; // r0@1
  _BYTE *v24; // r0@1
  _BYTE *v25; // r0@1
  _BYTE *v26; // r0@1
  _DWORD *v27; // r0@1
  _DWORD *result; // r0@1
  int v29; // [sp+4h] [bp-154h]@1
  int v30; // [sp+8h] [bp-150h]@1
  int v31; // [sp+Ch] [bp-14Ch]@1
  int v32; // [sp+10h] [bp-148h]@1
  int v33; // [sp+14h] [bp-144h]@1
  int v34; // [sp+18h] [bp-140h]@1
  int v35; // [sp+1Ch] [bp-13Ch]@1
  int v36; // [sp+20h] [bp-138h]@1
  int v37; // [sp+24h] [bp-134h]@1
  int v38; // [sp+28h] [bp-130h]@1
  int v39; // [sp+2Ch] [bp-12Ch]@1
  int v40; // [sp+30h] [bp-128h]@1
  int v41; // [sp+34h] [bp-124h]@1
  int v42; // [sp+38h] [bp-120h]@1
  int v43; // [sp+3Ch] [bp-11Ch]@1
  int v44; // [sp+40h] [bp-118h]@1
  int v45; // [sp+44h] [bp-114h]@1
  int v46; // [sp+48h] [bp-110h]@1
  int v47; // [sp+4Ch] [bp-10Ch]@1
  int v48; // [sp+50h] [bp-108h]@1
  int v49; // [sp+54h] [bp-104h]@1
  int v50; // [sp+58h] [bp-100h]@1
  int v51; // [sp+5Ch] [bp-FCh]@1
  int v52; // [sp+60h] [bp-F8h]@1
  int v53; // [sp+64h] [bp-F4h]@1
  int v54; // [sp+68h] [bp-F0h]@1
  int v55; // [sp+6Ch] [bp-ECh]@1
  int v56; // [sp+70h] [bp-E8h]@1
  int v57; // [sp+74h] [bp-E4h]@1
  int v58; // [sp+78h] [bp-E0h]@1
  int v59; // [sp+7Ch] [bp-DCh]@1
  int v60; // [sp+80h] [bp-D8h]@1
  int v61; // [sp+84h] [bp-D4h]@1
  int v62; // [sp+88h] [bp-D0h]@1
  int v63; // [sp+8Ch] [bp-CCh]@1
  int v64; // [sp+90h] [bp-C8h]@1
  int v65; // [sp+94h] [bp-C4h]@1
  int v66; // [sp+98h] [bp-C0h]@1
  int v67; // [sp+9Ch] [bp-BCh]@1
  int v68; // [sp+A0h] [bp-B8h]@1
  int v69; // [sp+A4h] [bp-B4h]@1
  int v70; // [sp+A8h] [bp-B0h]@1
  int v71; // [sp+ACh] [bp-ACh]@1
  int v72; // [sp+B0h] [bp-A8h]@1
  __int64 v73; // [sp+B4h] [bp-A4h]@1
  int v74; // [sp+BCh] [bp-9Ch]@1
  int v75; // [sp+C0h] [bp-98h]@1
  int v76; // [sp+C4h] [bp-94h]@1
  int v77; // [sp+C8h] [bp-90h]@1
  int v78; // [sp+CCh] [bp-8Ch]@1
  int v79; // [sp+D0h] [bp-88h]@1
  int v80; // [sp+D4h] [bp-84h]@1
  int v81; // [sp+D8h] [bp-80h]@1
  int v82; // [sp+DCh] [bp-7Ch]@1
  int v83; // [sp+E0h] [bp-78h]@1
  int v84; // [sp+E4h] [bp-74h]@1
  int v85; // [sp+E8h] [bp-70h]@1
  int v86; // [sp+ECh] [bp-6Ch]@1
  int v87; // [sp+F0h] [bp-68h]@1
  int v88; // [sp+F4h] [bp-64h]@1
  int v89; // [sp+F8h] [bp-60h]@1
  int v90; // [sp+FCh] [bp-5Ch]@1
  int v91; // [sp+100h] [bp-58h]@1
  int v92; // [sp+104h] [bp-54h]@1
  int v93; // [sp+108h] [bp-50h]@1
  int v94; // [sp+10Ch] [bp-4Ch]@1
  int v95; // [sp+110h] [bp-48h]@1
  int v96; // [sp+114h] [bp-44h]@1
  int v97; // [sp+118h] [bp-40h]@1
  int v98; // [sp+11Ch] [bp-3Ch]@1
  int v99; // [sp+120h] [bp-38h]@1
  int v100; // [sp+124h] [bp-34h]@1
  int v101; // [sp+128h] [bp-30h]@1
  int v102; // [sp+12Ch] [bp-2Ch]@1
  int v103; // [sp+130h] [bp-28h]@1

  HIDWORD(v1) = 1;
  LODWORD(v1) = 1065353216;
  v103 = 0;
  v102 = 1;
  v101 = 1065353216;
  registerMaterial<MaterialType,Material::Settings,float>(&v103, &v102, &v101);
  v100 = 1;
  v2 = (char *)registerMaterial<MaterialType>(&v100) + 20;
  *(_DWORD *)v2 = 1058510744;
  *((_DWORD *)v2 + 1) = 1054530268;
  *((_DWORD *)v2 + 2) = 1050319515;
  *((_DWORD *)v2 + 3) = 0;
  v99 = 2;
  v3 = registerMaterial<MaterialType>(&v99);
  *((_BYTE *)v3 + 4) = 1;
  v3 = (char *)v3 + 20;
  *(_DWORD *)v3 = 1057984400;
  *((_DWORD *)v3 + 1) = 1055846128;
  *((_DWORD *)v3 + 2) = 1049661585;
  *((_DWORD *)v3 + 3) = 0;
  v98 = 3;
  v4 = registerMaterial<MaterialType>(&v98);
  v4[6] = 0;
  *((_DWORD *)v4 + 5) = 1054925026;
  *((_DWORD *)v4 + 6) = 1054925026;
  *((_DWORD *)v4 + 7) = 1054925026;
  *((_DWORD *)v4 + 8) = 0;
  v97 = 4;
  v5 = registerMaterial<MaterialType>(&v97);
  v5[6] = 0;
  *((_DWORD *)v5 + 5) = 1059563432;
  *((_DWORD *)v5 + 6) = 1059563432;
  *((_DWORD *)v5 + 7) = 1059563432;
  *((_DWORD *)v5 + 8) = 0;
  v96 = 5;
  v94 = 1065353216;
  v95 = 2;
  v6 = registerMaterial<MaterialType,Material::Settings,float>(&v96, &v95, &v94);
  v6[7] = 1;
  *((_DWORD *)v6 + 5) = 1048608897;
  *((_DWORD *)v6 + 6) = 1048608897;
  *((_DWORD *)v6 + 7) = 1065353216;
  *((_DWORD *)v6 + 8) = 0;
  v93 = 6;
  v91 = 1065353216;
  v92 = 2;
  v7 = registerMaterial<MaterialType,Material::Settings,float>(&v93, &v92, &v91);
  v7[7] = 1;
  v7[18] = 1;
  *((_DWORD *)v7 + 5) = 1065353216;
  *((_DWORD *)v7 + 6) = 0;
  *((_DWORD *)v7 + 7) = 0;
  *((_DWORD *)v7 + 8) = 0;
  v89 = 0;
  v90 = 7;
  v88 = 1056964608;
  v8 = registerMaterial<MaterialType,Material::Settings,float>(&v90, &v89, &v88);
  v8[5] = 1;
  v8[4] = 1;
  *((_DWORD *)v8 + 5) = 0;
  *((_DWORD *)v8 + 6) = 1056504058;
  *((_DWORD *)v8 + 7) = 0;
  *((_DWORD *)v8 + 8) = 0;
  v87 = 8;
  v85 = 1065353216;
  v86 = 3;
  v9 = registerMaterial<MaterialType,Material::Settings,float>(&v87, &v86, &v85);
  v9[5] = 0;
  v9[6] = 1056504058;
  v9[7] = 0;
  v9[8] = 0;
  v84 = 9;
  v82 = 1065353216;
  v83 = 3;
  v10 = registerMaterial<MaterialType,Material::Settings,float>(&v84, &v83, &v82);
  v10[4] = 1;
  v10[7] = 1;
  *((_DWORD *)v10 + 5) = 0;
  *((_DWORD *)v10 + 6) = 1056504058;
  *((_DWORD *)v10 + 7) = 0;
  *((_DWORD *)v10 + 8) = 0;
  v81 = 10;
  v11 = registerMaterial<MaterialType>(&v81);
  v11[5] = 1063642599;
  v11[6] = 1063642599;
  v11[7] = 1045220558;
  v11[8] = 0;
  v79 = 0;
  v80 = 11;
  v78 = 1061997773;
  v12 = registerMaterial<MaterialType,Material::Settings,float>(&v80, &v79, &v78);
  v12[4] = 1;
  *((_DWORD *)v12 + 5) = 1061668809;
  *((_DWORD *)v12 + 6) = 1061668809;
  *((_DWORD *)v12 + 7) = 1061668809;
  *((_DWORD *)v12 + 8) = 0;
  v76 = 0;
  v77 = 12;
  v75 = 1036831949;
  v13 = registerMaterial<MaterialType,Material::Settings,float>(&v77, &v76, &v75);
  v13[5] = 1058642330;
  v13[6] = 1045220558;
  v13[7] = 1045220558;
  v13[8] = 0;
  v74 = 13;
  v73 = v1;
  v14 = registerMaterial<MaterialType,Material::Settings,float>(&v74, (int *)&v73 + 1, (int *)&v73);
  v14[18] = 1;
  *((_DWORD *)v14 + 5) = 1065353216;
  *((_DWORD *)v14 + 6) = 0;
  *((_DWORD *)v14 + 7) = 0;
  *((_DWORD *)v14 + 8) = 0;
  v72 = 14;
  v15 = (char *)registerMaterial<MaterialType>(&v72) + 20;
  *(_DWORD *)v15 = 1064826873;
  *((_DWORD *)v15 + 1) = 1063905771;
  *((_DWORD *)v15 + 2) = 1059300260;
  *((_DWORD *)v15 + 3) = 0;
  v71 = 15;
  v69 = 1065353216;
  v70 = 3;
  registerMaterial<MaterialType,Material::Settings,float>(&v71, &v70, &v69);
  v68 = 16;
  v66 = 1065353216;
  v67 = 0;
  *((_BYTE *)registerMaterial<MaterialType,Material::Settings,float>(&v68, &v67, &v66) + 5) = 1;
  v65 = 17;
  v16 = registerMaterial<MaterialType>(&v65);
  v16[4] = 1;
  v16[5] = 1;
  *((_DWORD *)v16 + 5) = 1065353216;
  *((_DWORD *)v16 + 6) = 0;
  *((_DWORD *)v16 + 7) = 0;
  *((_DWORD *)v16 + 8) = 0;
  v64 = 18;
  v17 = registerMaterial<MaterialType>(&v64);
  v17[5] = 1;
  *((_DWORD *)v17 + 5) = 1059102881;
  *((_DWORD *)v17 + 6) = 1059102881;
  *((_DWORD *)v17 + 7) = 1065353216;
  *((_DWORD *)v17 + 8) = 0;
  v63 = 19;
  v18 = registerMaterial<MaterialType>(&v63);
  v18[5] = 1059102881;
  v18[6] = 1059102881;
  v18[7] = 1065353216;
  v18[8] = 0;
  v61 = 3;
  v62 = 20;
  v60 = 1063507722;
  v19 = registerMaterial<MaterialType,Material::Settings,float>(&v62, &v61, &v60);
  v19[7] = 1;
  v19[5] = 1;
  v19[6] = 0;
  *((_DWORD *)v19 + 5) = 1065353216;
  *((_DWORD *)v19 + 6) = 1065353216;
  *((_DWORD *)v19 + 7) = 1065353216;
  *((_DWORD *)v19 + 8) = 0;
  v59 = 21;
  v20 = registerMaterial<MaterialType>(&v59);
  v20[6] = 0;
  *((_DWORD *)v20 + 5) = 1065353216;
  *((_DWORD *)v20 + 6) = 1065353216;
  *((_DWORD *)v20 + 7) = 1065353216;
  *((_DWORD *)v20 + 8) = 0;
  v57 = 0;
  v58 = 22;
  v56 = 1056964608;
  v21 = registerMaterial<MaterialType,Material::Settings,float>(&v58, &v57, &v56);
  v21[5] = 1;
  *((_DWORD *)v21 + 5) = 0;
  *((_DWORD *)v21 + 6) = 1056504058;
  *((_DWORD *)v21 + 7) = 0;
  *((_DWORD *)v21 + 8) = 0;
  v55 = 23;
  v22 = (char *)registerMaterial<MaterialType>(&v55) + 20;
  *(_DWORD *)v22 = 1059366053;
  *((_DWORD *)v22 + 1) = 1059629225;
  *((_DWORD *)v22 + 2) = 1060681913;
  *((_DWORD *)v22 + 3) = 0;
  v54 = 24;
  v23 = registerMaterial<MaterialType>(&v54);
  v23[5] = 0;
  v23[6] = 1056504058;
  v23[7] = 0;
  v23[8] = 0;
  v53 = 25;
  v52 = 4;
  registerMaterial<MaterialType,Material::Settings>(&v53, &v52);
  v51 = 26;
  v49 = 1061997773;
  v50 = 0;
  registerMaterial<MaterialType,Material::Settings,float>(&v51, &v50, &v49);
  v48 = 27;
  v46 = 1061997773;
  v47 = 0;
  v24 = registerMaterial<MaterialType,Material::Settings,float>(&v48, &v47, &v46);
  v24[16] = 0;
  v24[6] = 0;
  v24[17] = 0;
  *((_DWORD *)v24 + 5) = 1061668809;
  *((_DWORD *)v24 + 6) = 1061668809;
  *((_DWORD *)v24 + 7) = 1061668809;
  *((_DWORD *)v24 + 8) = 0;
  v45 = 28;
  v43 = 1061997773;
  v44 = 0;
  v25 = registerMaterial<MaterialType,Material::Settings,float>(&v45, &v44, &v43);
  v25[16] = 0;
  v25[17] = 0;
  v42 = 29;
  v40 = 1061997773;
  v41 = 0;
  v26 = registerMaterial<MaterialType,Material::Settings,float>(&v42, &v41, &v40);
  v26[4] = 1;
  v26[17] = 0;
  v26[16] = 0;
  *((_DWORD *)v26 + 5) = 1061668809;
  *((_DWORD *)v26 + 6) = 1061668809;
  *((_DWORD *)v26 + 7) = 1061668809;
  *((_DWORD *)v26 + 8) = 0;
  v39 = 30;
  v37 = 1065353216;
  v38 = 0;
  registerMaterial<MaterialType,Material::Settings,float>(&v39, &v38, &v37);
  v35 = 0;
  v36 = 31;
  v34 = 1036831949;
  registerMaterial<MaterialType,Material::Settings,float>(&v36, &v35, &v34);
  v32 = 0;
  v33 = 32;
  v27 = registerMaterial<MaterialType,Material::Settings>(&v33, &v32);
  v27[5] = 1054925026;
  v27[6] = 1054925026;
  v27[7] = 1054925026;
  v27[8] = 0;
  v31 = 33;
  registerMaterial<MaterialType>(&v31);
  v30 = 34;
  registerMaterial<MaterialType>(&v30);
  v29 = 35;
  result = registerMaterial<MaterialType>(&v29);
  result[5] = 1057984400;
  result[6] = 1055846128;
  result[7] = 1049661585;
  result[8] = 0;
  return result;
}


int __fastcall Material::Material(int result, int a2, int a3, int a4)
{
  int v4; // r3@1
  __int64 v5; // kr00_8@1

  *(_DWORD *)result = a2;
  *(_BYTE *)(result + 4) = 0;
  *(_BYTE *)(result + 5) = 0;
  *(_BYTE *)(result + 6) = 1;
  *(_BYTE *)(result + 7) = 0;
  *(_BYTE *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = a4;
  *(_WORD *)(result + 16) = 257;
  *(_BYTE *)(result + 18) = 0;
  v4 = *(&Color::NIL + 1);
  v5 = qword_283E6B8;
  *(_DWORD *)(result + 20) = Color::NIL;
  *(_DWORD *)(result + 24) = v4;
  *(_QWORD *)(result + 28) = v5;
  if ( (unsigned int)(a3 - 3) < 2 )
  {
    *(_WORD *)(result + 16) = 0;
  }
  else if ( a3 == 2 )
    *(_BYTE *)(result + 17) = 0;
    *(_BYTE *)(result + 16) = 0;
    *(_WORD *)(result + 7) = 257;
  else if ( a3 == 1 )
    *(_BYTE *)(result + 7) = 1;
  return result;
}


int __fastcall Material::_setSuperHot(int result)
{
  *(_BYTE *)(result + 18) = 1;
  return result;
}


int __fastcall Material::_setNeverBuildable(int result)
{
  *(_BYTE *)(result + 5) = 1;
  return result;
}


int __fastcall Material::_setReplaceable(int result)
{
  *(_BYTE *)(result + 7) = 1;
  return result;
}


int __fastcall Material::_setNotAlwaysDestroyable(int result)
{
  *(_BYTE *)(result + 6) = 0;
  return result;
}


int __fastcall Material::_setMapColor(int result, const Color *a2)
{
  int v2; // r2@1
  int v3; // r3@1
  int v4; // r12@1
  int v5; // r1@1

  v2 = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)a2 + 2);
  v5 = *((_DWORD *)a2 + 3);
  *(_DWORD *)(result + 20) = v2;
  *(_DWORD *)(result + 24) = v3;
  *(_DWORD *)(result + 28) = v4;
  *(_DWORD *)(result + 32) = v5;
  return result;
}


int __fastcall Material::_setFlammable(int result)
{
  *(_BYTE *)(result + 4) = 1;
  return result;
}


int __fastcall Material::_setNotSolid(int result)
{
  *(_BYTE *)(result + 17) = 0;
  return result;
}


int __fastcall Material::isSolidBlocking(Material *this)
{
  int result; // r0@2

  if ( *((_BYTE *)this + 5) )
    result = 0;
  else
    result = *((_BYTE *)this + 16) != 0;
  return result;
}


      if ( v5 == 1 && Material::isType(v3, 5) )
{
      v4 = Material::getBlocksMotion((Material *)v3);
    }
    result = v4;
  }
  else
  {
    result = 0;
  return result;
}


_DWORD *__fastcall Material::initMaterials(Material *this)
{
  Material::mInitialized = 1;
  return j_j_j__ZN8Material22_setupSurfaceMaterialsEv((Material *)&Material::mInitialized);
}


int __fastcall Material::_setNotBlockingMotion(int result)
{
  *(_BYTE *)(result + 16) = 0;
  return result;
}


_DWORD *__fastcall Material::teardownMaterials(Material *this)
{
  __int64 v1; // r4@1
  void **v2; // r7@2
  _DWORD *result; // r0@6

  v1 = *(_QWORD *)&Material::mMaterials;
  if ( dword_28200C8 != Material::mMaterials )
  {
    v2 = (void **)Material::mMaterials;
    do
    {
      if ( *v2 )
        j_operator delete(*v2);
      *v2 = 0;
      ++v2;
    }
    while ( (void **)HIDWORD(v1) != v2 );
  }
  result = &Material::mMaterials;
  dword_28200C8 = v1;
  return result;
}


signed int __fastcall Material::isType(int *a1, int a2)
{
  signed int result; // r0@2
  int v3; // r2@3

  if ( a2 == 37 )
  {
    result = 1;
  }
  else
    v3 = *a1;
    result = 0;
    if ( v3 == a2 )
      result = 1;
  return result;
}
