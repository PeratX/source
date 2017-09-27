

        if ( PackIdVersion::operator<((int)(v5 + 18), v40) == 1 )
{
          v8 = *v6;
LABEL_18:
          v43 = v8;
          *v6 = &unk_28898CC;
          v16 = v42;
          v44 = v5[17];
          v17 = v5[19];
          v18 = v5[20];
          v19 = v5[21];
          v45 = v5[18];
          v46 = v17;
          v47 = v18;
          v48 = v19;
          v20 = v5[22];
          v50 = *((_WORD *)v5 + 46);
          v49 = v20;
          sub_21E8AF4(&v51, (int *)v5 + 24);
          sub_21E8AF4(&v52, (int *)v5 + 25);
          sub_21E8AF4(&v53, (int *)v5 + 26);
          v21 = *((_WORD *)v5 + 54);
          v55 = *((_BYTE *)v5 + 110);
          v54 = v21;
          v56 = *((_BYTE *)v5 + 112);
          v57 = v5[30];
          if ( (char *)v6 - (char *)v2 >= 1 )
          {
            v22 = (((char *)v6 - (char *)v2) >> 6) + 1;
            v23 = v42;
            do
            {
              xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
                v23 - 14,
                v23 - 30);
              *(v23 - 13) = *(v23 - 29);
              v24 = (int)(v23 - 12);
              v25 = *(v23 - 27);
              v26 = *(v23 - 26);
              v27 = *(v23 - 25);
              *(_DWORD *)v24 = *(v23 - 28);
              *(_DWORD *)(v24 + 4) = v25;
              *(_DWORD *)(v24 + 8) = v26;
              *(_DWORD *)(v24 + 12) = v27;
              v28 = *(v23 - 24);
              *((_WORD *)v23 - 14) = *((_WORD *)v23 - 46);
              *(v23 - 8) = v28;
              EntityInteraction::setInteractText(v23 - 6, v23 - 22);
              EntityInteraction::setInteractText(v23 - 5, v23 - 21);
              EntityInteraction::setInteractText(v23 - 4, v23 - 20);
              --v22;
              v29 = *((_WORD *)v23 - 38);
              *((_BYTE *)v23 - 10) = *((_BYTE *)v23 - 74);
              *((_WORD *)v23 - 6) = v29;
              *((_BYTE *)v23 - 8) = *((_BYTE *)v23 - 72);
              *v23 = *(v23 - 16);
              v23 -= 16;
            }
            while ( v22 > 1 );
          }
          xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
            (int *)v2,
            (int *)&v43);
          v2[1] = v44;
          v30 = v46;
          v31 = v47;
          v32 = v48;
          *(_DWORD *)v40 = v45;
          *(_DWORD *)(v40 + 4) = v30;
          *(_DWORD *)(v40 + 8) = v31;
          *(_DWORD *)(v40 + 12) = v32;
          v33 = v49;
          *(_WORD *)(v35 + 4) = v50;
          *(_DWORD *)v35 = v33;
          EntityInteraction::setInteractText(v36, &v51);
          EntityInteraction::setInteractText(v37, &v52);
          EntityInteraction::setInteractText(v38, &v53);
          v34 = v54;
          *(_BYTE *)(v39 + 2) = v55;
          *(_WORD *)v39 = v34;
          *((_BYTE *)v2 + 48) = v56;
          v2[14] = v57;
          ResourceLocationPair::~ResourceLocationPair((ResourceLocationPair *)&v43);
          goto LABEL_24;
        }
        PackIdVersion::operator<(v40, (int)(v5 + 18));
      }
      std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<ResourceLocationPair *,std::vector<ResourceLocationPair,std::allocator<ResourceLocationPair>>>,__gnu_cxx::__ops::_Val_less_iter>((int)v6);
      v16 = v42;
LABEL_24:
      v4 = (int)(v16 + 16);
      result = v6 + 16;
      v5 = v6;
      if ( v6 + 16 == v41 )
        return result;
    }
    v2 = v9;
    goto LABEL_18;
  }
  return result;
}


      if ( PackIdVersion::operator<((int)v5, (int)v9) == 1 )
{
        v50 = (int)v5;
        v18 = v4;
        v8 = *v4;
        v12 = *((_DWORD *)*v4 - 3);
        goto LABEL_14;
      }
      PackIdVersion::operator<((int)v9, (int)v5);
      v6 = *(const void **)v52;
      v10 = *(_DWORD *)(*(_DWORD *)v52 - 12);
    }
    v49 = v7;
    v51 = v4;
    v27 = v10;
    v30 = *v7;
    v29 = (int)(v7 + 2);
    v28 = v30;
    v31 = *((_DWORD *)v30 - 3);
    v32 = v30;
    if ( v10 > v31 )
      v27 = v31;
    v33 = memcmp(v6, v32, v27);
    if ( !v33 )
      v33 = v10 - v31;
    if ( v33 < 0 )
      goto LABEL_65;
    v34 = v31;
    if ( v31 > v10 )
      v34 = v10;
    v35 = memcmp(v28, v6, v34);
    if ( !v35 )
      v35 = v31 - v10;
    if ( v35 >= 0 )
    {
      if ( PackIdVersion::operator<((int)v5, v29) )
        goto LABEL_65;
      PackIdVersion::operator<(v29, (int)v5);
      v28 = *v49;
      v31 = *((_DWORD *)*v49 - 3);
    v36 = *v51;
    v37 = *((_DWORD *)*v51 - 3);
    v38 = *((_DWORD *)*v51 - 3);
    if ( v37 > v31 )
      v38 = v31;
    v39 = memcmp(*v51, v28, v38);
    if ( !v39 )
      v39 = v37 - v31;
    if ( v39 >= 0 )
      v40 = v31;
      if ( v31 > v37 )
        v40 = v37;
      v41 = memcmp(v28, v36, v40);
      if ( !v41 )
        v41 = v31 - v37;
      if ( v41 >= 0 )
      {
        if ( PackIdVersion::operator<((int)v9, v29) )
          goto LABEL_50;
        PackIdVersion::operator<(v29, (int)v9);
      v25 = HIDWORD(v52);
      v26 = (int)v51;
      return j_j_j__ZSt4swapI20ResourceLocationPairEvRT_S2_(v25, v26);
LABEL_50:
    v25 = HIDWORD(v52);
    v26 = (int)v49;
    return j_j_j__ZSt4swapI20ResourceLocationPairEvRT_S2_(v25, v26);
  }
  v50 = (int)v5;
  v18 = v4;
LABEL_14:
  v19 = v12;
  v20 = *v7;
  v21 = *((_DWORD *)*v7 - 3);
  if ( v12 > v21 )
    v19 = *((_DWORD *)*v7 - 3);
  v22 = memcmp(v8, *v7, v19);
  if ( !v22 )
    v22 = v12 - v21;
  if ( v22 < 0 )
    goto LABEL_25;
  v23 = v21;
  if ( v21 > v12 )
    v23 = v12;
  v24 = memcmp(v20, v8, v23);
  if ( !v24 )
    v24 = v21 - v12;
  if ( v24 < 0 )
  {
LABEL_52:
    v42 = *(const void **)v52;
    v43 = *(_DWORD *)(*(_DWORD *)v52 - 12);
    v44 = *(_DWORD *)(*(_DWORD *)v52 - 12);
    if ( v43 > v21 )
      v44 = v21;
    v45 = memcmp(*(const void **)v52, v20, v44);
    if ( !v45 )
      v45 = v43 - v21;
    if ( v45 < 0 )
      goto LABEL_63;
    v46 = v21;
    if ( v21 > v43 )
      v46 = v43;
    v47 = memcmp(v20, v42, v46);
    if ( !v47 )
      v47 = v21 - v43;
    if ( v47 >= 0 )
      if ( PackIdVersion::operator<(v50, (int)(v7 + 2)) )
LABEL_63:
        v25 = HIDWORD(v52);
        v26 = (int)v7;
        return j_j_j__ZSt4swapI20ResourceLocationPairEvRT_S2_(v25, v26);
      PackIdVersion::operator<((int)(v7 + 2), v50);
LABEL_65:
    v26 = v52;
  if ( !PackIdVersion::operator<((int)v9, (int)(v7 + 2)) )
    PackIdVersion::operator<((int)(v7 + 2), (int)v9);
    v20 = *v7;
    v21 = *((_DWORD *)*v7 - 3);
    goto LABEL_52;
LABEL_25:
  v25 = HIDWORD(v52);
  v26 = (int)v18;
  return j_j_j__ZSt4swapI20ResourceLocationPairEvRT_S2_(v25, v26);
}


int __fastcall PackIdVersion::PackIdVersion(int a1)
{
  int v1; // r4@1
  int result; // r0@1

  v1 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  j_SemVersion::SemVersion((SemVersion *)(a1 + 16));
  result = v1;
  *(_BYTE *)(v1 + 40) = 0;
  return result;
}


signed int __fastcall PackIdVersion::operator<(int a1, int a2)
{
  __int64 v2; // kr00_8@1
  signed int v3; // r6@1
  __int64 v4; // kr08_8@1
  signed int v5; // r3@1
  signed int v6; // r7@1
  signed int v7; // r3@8
  __int64 v8; // kr10_8@10
  __int64 v9; // kr18_8@10
  signed int v10; // r7@15
  signed int v11; // r3@17
  signed int v12; // r2@22
  signed int v13; // r3@24
  signed int v14; // r2@29
  signed int v15; // r3@31
  int v16; // r5@36
  int v17; // r4@36

  v2 = *(_QWORD *)a2;
  v3 = 0;
  v4 = *(_QWORD *)a1;
  v5 = 0;
  v6 = 0;
  if ( (unsigned int)*(_QWORD *)a1 < (unsigned int)*(_QWORD *)a2 )
    v3 = 1;
  if ( HIDWORD(v4) < HIDWORD(v2) )
    v5 = 1;
  if ( HIDWORD(v4) == HIDWORD(v2) )
    v5 = v3;
  if ( v5 )
    return 1;
  v7 = 0;
  if ( (unsigned int)v2 < (unsigned int)v4 )
    v7 = 1;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(_QWORD *)(a2 + 8);
  if ( HIDWORD(v2) < HIDWORD(v4) )
    v6 = 1;
  if ( HIDWORD(v2) == HIDWORD(v4) )
    v6 = v7;
  if ( !v6 )
  {
    v10 = 0;
    if ( (unsigned int)v8 < (unsigned int)v9 )
      v10 = 1;
    v11 = 0;
    if ( HIDWORD(v8) < HIDWORD(v9) )
      v11 = 1;
    if ( HIDWORD(v8) == HIDWORD(v9) )
      v11 = v10;
    if ( v11 )
      return 1;
  }
  v12 = 0;
    v12 = 1;
  v13 = 0;
    v13 = 1;
    v13 = v12;
  if ( !v13 )
    v14 = 0;
    if ( (unsigned int)v9 < (unsigned int)v8 )
      v14 = 1;
    v15 = 0;
    if ( HIDWORD(v9) < HIDWORD(v8) )
      v15 = 1;
    if ( HIDWORD(v9) == HIDWORD(v8) )
      v15 = v14;
    if ( !v15 )
    {
      v16 = a2 + 16;
      v17 = a1 + 16;
      if ( j_SemVersion::operator<(a1 + 16, a2 + 16) )
        return 1;
      j_SemVersion::operator<(v16, v17);
    }
  return 0;
}


int __fastcall PackIdVersion::PackIdVersion(int a1, int a2, int a3, char a4)
{
  char v4; // r4@1
  int v5; // r6@1
  int v6; // r5@1
  int v7; // r0@1
  int v8; // r2@1
  int v9; // r3@1
  int v10; // r1@1
  __int16 v11; // r1@1
  int result; // r0@1

  v4 = a4;
  v5 = a3;
  v6 = a1;
  v7 = *(_DWORD *)a2;
  v8 = *(_DWORD *)(a2 + 4);
  v9 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(v6 + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)v6 = v7;
  *(_DWORD *)(v6 + 4) = v8;
  *(_DWORD *)(v6 + 8) = v9;
  v10 = *(_DWORD *)v5;
  *(_WORD *)(v6 + 20) = *(_WORD *)(v5 + 4);
  *(_DWORD *)(v6 + 16) = v10;
  sub_21E8AF4((int *)(v6 + 24), (int *)(v5 + 8));
  sub_21E8AF4((int *)(v6 + 28), (int *)(v5 + 12));
  sub_21E8AF4((int *)(v6 + 32), (int *)(v5 + 16));
  v11 = *(_WORD *)(v5 + 20);
  *(_BYTE *)(v6 + 38) = *(_BYTE *)(v5 + 22);
  result = v6;
  *(_WORD *)(v6 + 36) = v11;
  *(_BYTE *)(v6 + 40) = v4;
  return result;
}


int __fastcall PackIdVersion::PackIdVersion(int a1, int *a2, const void **a3, char a4)
{
  int v4; // r4@1
  int v5; // r6@1
  char v6; // r5@1
  const void **v7; // r8@1
  int *v8; // r7@1
  int v9; // r1@1
  int v10; // r2@1
  int v11; // r3@1
  int v13; // [sp+0h] [bp-28h]@1
  int v14; // [sp+4h] [bp-24h]@1
  int v15; // [sp+8h] [bp-20h]@1
  int v16; // [sp+Ch] [bp-1Ch]@1

  v4 = a1;
  v5 = a1 + 16;
  v6 = a4;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v7 = a3;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  v8 = a2;
  j_SemVersion::SemVersion((SemVersion *)(a1 + 16));
  *(_BYTE *)(v4 + 40) = v6;
  j_mce::UUID::fromString((int)&v13, v8);
  v9 = v14;
  v10 = v15;
  v11 = v16;
  *(_DWORD *)v4 = v13;
  *(_DWORD *)(v4 + 4) = v9;
  *(_DWORD *)(v4 + 8) = v10;
  *(_DWORD *)(v4 + 12) = v11;
  j_SemVersion::fromString(v7, v5);
  return v4;
}


signed int __fastcall PackIdVersion::satisfies(PackIdVersion *this, const PackIdVersion *a2)
{
  signed int result; // r0@3

  if ( *(_QWORD *)this != *(_QWORD *)a2 || *((_QWORD *)this + 1) != *((_QWORD *)a2 + 1) )
    result = 0;
  else
    result = j_SemVersion::satisfies((PackIdVersion *)((char *)this + 16), (const PackIdVersion *)((char *)a2 + 16));
  return result;
}
