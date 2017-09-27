

int __fastcall MinimumCoveringRectangles::getRectangles(int a1, _DWORD *a2, unsigned int a3, unsigned int a4)
{
  _DWORD *v4; // r5@1
  int v5; // lr@1
  unsigned int v6; // r10@1
  int v7; // r7@1
  int v8; // r9@1
  int v9; // r4@1
  int v10; // r8@1
  int v11; // r6@1
  unsigned int v12; // r0@1
  int v13; // r2@1
  int v14; // r11@1
  int result; // r0@1
  int v16; // r1@2
  unsigned int v17; // r3@2
  unsigned int v18; // r0@4
  int v19; // r0@6
  unsigned int v20; // r7@7
  int v21; // lr@7
  int v22; // r12@7
  int v23; // r11@14
  unsigned int v24; // r6@14
  int v25; // r8@14
  int v26; // r9@14
  int v27; // r0@14
  int v28; // r5@15
  int v29; // r4@16
  int v30; // r1@16
  int v31; // r7@17
  int v32; // r2@17
  unsigned int v33; // r0@17
  unsigned int v34; // r12@17
  int v35; // r1@18
  unsigned int v36; // r3@18
  int v37; // r3@22
  _BYTE *v38; // r11@22
  int v39; // r1@23
  _BYTE *v40; // lr@23
  _BYTE *v41; // r6@36
  int v42; // r0@36
  unsigned int v43; // r1@36
  unsigned int v44; // r2@38
  unsigned int v45; // r0@38
  bool v46; // cf@40
  int v47; // r7@43
  char *v48; // r3@43
  _BYTE *v49; // r0@43
  int v50; // r2@43
  char *v51; // lr@43
  char *v52; // r11@43
  _DWORD *v53; // r12@44
  char *v54; // r2@44
  int v55; // r3@44
  int v56; // r4@44
  int v57; // r5@44
  int v58; // r6@44
  int v59; // r7@44
  int v60; // r2@51
  int v61; // r1@51
  int v62; // r3@52
  int v63; // r7@52
  unsigned int v64; // [sp+Ch] [bp-A4h]@1
  unsigned int v65; // [sp+10h] [bp-A0h]@1
  int v66; // [sp+14h] [bp-9Ch]@2
  int v67; // [sp+18h] [bp-98h]@2
  unsigned int v68; // [sp+1Ch] [bp-94h]@1
  unsigned int v69; // [sp+20h] [bp-90h]@1
  unsigned int v70; // [sp+24h] [bp-8Ch]@1
  int v71; // [sp+28h] [bp-88h]@2
  int v72; // [sp+30h] [bp-80h]@10
  _DWORD *v73; // [sp+34h] [bp-7Ch]@1
  int v74; // [sp+38h] [bp-78h]@13
  int v75; // [sp+3Ch] [bp-74h]@1
  int v76; // [sp+40h] [bp-70h]@6
  int v77; // [sp+44h] [bp-6Ch]@1
  int v78; // [sp+48h] [bp-68h]@14
  _BYTE *v79; // [sp+4Ch] [bp-64h]@13
  int v80; // [sp+50h] [bp-60h]@6
  int v81; // [sp+54h] [bp-5Ch]@6
  int v82; // [sp+58h] [bp-58h]@15
  unsigned int v83; // [sp+5Ch] [bp-54h]@9
  unsigned int v84; // [sp+60h] [bp-50h]@4
  int v85; // [sp+68h] [bp-48h]@15
  unsigned int v86; // [sp+6Ch] [bp-44h]@1
  int v87; // [sp+70h] [bp-40h]@17
  int v88; // [sp+74h] [bp-3Ch]@15
  unsigned __int64 v89; // [sp+78h] [bp-38h]@22
  int v90; // [sp+7Ch] [bp-34h]@43
  int v91; // [sp+80h] [bp-30h]@43
  int v92; // [sp+84h] [bp-2Ch]@22
  int v93; // [sp+84h] [bp-2Ch]@36
  int v94; // [sp+88h] [bp-28h]@2

  v4 = a2;
  v86 = a4;
  v5 = -1;
  v70 = a3;
  v6 = -17;
  v73 = a2;
  v7 = 0;
  v77 = a1;
  v8 = 0;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  v9 = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v65 = ~a4;
  v69 = 16 * a4;
  v10 = 0;
  v11 = 0;
  v12 = (a3 - 1) >> 4;
  v13 = 0;
  v68 = v12;
  v14 = 0;
  v64 = (a4 - 1) >> 4;
  v75 = 0;
  result = 0;
  do
  {
    v94 = v14;
    v16 = result;
    v71 = v7;
    v66 = result;
    v67 = v5;
    v17 = 16 * result + 16;
    if ( v17 >= v86 )
      v17 = v86;
    v18 = v65;
    v84 = v17;
    if ( v6 > v65 )
      v18 = v6;
    v76 = v7;
    v80 = v5 - v18;
    v81 = 16 * v16;
    v19 = 0;
    do
    {
      v20 = 16 * v19 + 16;
      v21 = v13;
      v22 = v11;
      if ( v20 >= v70 )
        v20 = v70;
      v83 = v20;
      if ( v20 == 16 * v19 )
      {
        v72 = v19;
      }
      else if ( v81 == v17 )
      else
        v79 = (_BYTE *)v8;
        v8 = v9;
        v74 = 16 * v19;
        while ( 1 )
        {
          v23 = v10;
          v24 = 0;
          v78 = v8;
          v25 = v22;
          v26 = v74;
          v27 = *v4 + v76;
          do
          {
            v28 = v81;
            v82 = v27;
            v85 = v80;
            v88 = v27;
            if ( v26 - 1 != v20 )
            {
              do
              {
                v29 = v28 - 1;
                v30 = v20;
                if ( v28 - 1 != v17 )
                {
                  do
                  {
                    v31 = v85;
                    v32 = v30 - v26;
                    v33 = v17;
                    v34 = v17;
                    v87 = v30;
                    if ( v30 == v26 )
                    {
                      while ( 1 )
                      {
                        v35 = v33 - v28;
                        v36 = (v33 - v28) * v32;
                        if ( v36 < v24 )
                          break;
                        --v33;
                        v21 = v28;
                        v25 = v32;
                        v23 = v35;
                        v24 = v36;
                        v94 = v26;
                        if ( v33 == v29 )
                        {
                          v94 = v26;
                          v21 = v28;
                          v25 = v32;
                          v23 = v35;
                          v24 = v36;
                        }
                      }
                    }
                    else
                      do
                        if ( (v34 - v28) * v32 < v24 )
                        v89 = __PAIR__(v23, v24);
                        v37 = v26;
                        v92 = v21;
                        v38 = (_BYTE *)v88;
                        if ( v34 != v28 )
                          while ( 2 )
                          {
                            v39 = v31;
                            v40 = v38;
                            do
                            {
                              if ( !*v40 )
                              {
                                v21 = v92;
                                v23 = HIDWORD(v89);
                                v24 = v89;
                                goto LABEL_29;
                              }
                              --v39;
                              ++v40;
                            }
                            while ( v39 );
                            ++v37;
                            v38 += v86;
                            if ( v37 != v87 )
                              continue;
                            break;
                          }
                        v23 = v34 - v28;
                        v24 = (v34 - v28) * v32;
LABEL_29:
                        --v34;
                        --v31;
                      while ( v34 != v29 );
                    v17 = v84;
                    v30 = v87 - 1;
                  }
                  while ( v87 - 1 != v26 - 1 );
                }
                ++v28;
                v20 = v83;
                --v85;
                ++v88;
              }
              while ( v28 != v17 );
            }
            ++v26;
            v27 = v82 + v86;
          }
          while ( v26 != v20 );
          if ( !v24 )
            break;
          if ( v78 == *(_DWORD *)(v77 + 8) )
            v41 = *(_BYTE **)v77;
            v93 = v21;
            v42 = (v75 - *(_DWORD *)v77) >> 3;
            v43 = -1431655765 * v42;
            if ( v75 == *(_DWORD *)v77 )
              v43 = 1;
            v44 = v43 + -1431655765 * v42;
            v45 = v44;
            if ( v44 > 0xAAAAAAA )
              v45 = 178956970;
            v46 = v44 >= v43;
            LOWORD(v43) = -21845;
            if ( !v46 )
            HIWORD(v43) = 2730;
            if ( v45 >= v43 )
              sub_119C874();
            v47 = 3 * v45;
            v48 = (char *)operator new(24 * v45);
            v49 = v41;
            v50 = (int)&v48[v79 - v41];
            v90 = v47;
            *(_DWORD *)v50 = v94;
            v51 = v48;
            *(_DWORD *)(v50 + 4) = v93;
            *(_DWORD *)(v50 + 8) = v25;
            v91 = v25;
            v10 = v23;
            *(_DWORD *)(v50 + 12) = v23;
            v52 = v48;
            *(_DWORD *)(v50 + 16) = 0;
            *(_DWORD *)(v50 + 20) = 0;
            if ( v79 != v41 )
                v53 = v49;
                v54 = v51;
                v49 += 24;
                v51 += 24;
                v55 = v53[1];
                v56 = v53[2];
                v57 = v53[3];
                v58 = v53[4];
                v59 = v53[5];
                *(_DWORD *)v54 = *v53;
                *((_DWORD *)v54 + 1) = v55;
                *((_DWORD *)v54 + 2) = v56;
                *((_DWORD *)v54 + 3) = v57;
                *((_DWORD *)v54 + 4) = v58;
                *((_DWORD *)v54 + 5) = v59;
              while ( v79 != v49 );
              v49 = *(_BYTE **)v77;
            v8 = (int)(v51 + 24);
            if ( v49 )
              operator delete(v49);
            *(_DWORD *)v77 = v52;
            *(_DWORD *)(v77 + 4) = v8;
            *(_DWORD *)(v77 + 8) = &v52[8 * v90];
            v4 = v73;
            v21 = v93;
            v22 = v91;
            v17 = v84;
            v20 = v83;
          else
            *(_DWORD *)v78 = v94;
            *(_DWORD *)(v78 + 4) = v21;
            v22 = v25;
            *(_DWORD *)(v78 + 8) = v25;
            *(_DWORD *)(v78 + 12) = v23;
            *(_DWORD *)(v78 + 16) = 0;
            *(_DWORD *)(v78 + 20) = 0;
            v8 = *(_DWORD *)(v77 + 4) + 24;
          if ( v22 )
            if ( v10 )
              v60 = v94;
              v61 = v21 + v86 * v94;
                v62 = v61;
                v63 = v10;
                do
                  --v63;
                  *(_BYTE *)(*v4 + v62++) = 0;
                while ( v63 );
                ++v60;
                v61 += v86;
              while ( v60 != v22 + v94 );
              v17 = v84;
              v20 = v83;
            else
              v10 = 0;
            v22 = 0;
          v9 = v8;
          v75 = v8;
          v79 = (_BYTE *)v8;
          if ( v81 == v17 )
            goto LABEL_62;
        }
        v22 = v25;
        v10 = v23;
        v8 = (int)v79;
        v4 = v73;
        v9 = v78;
LABEL_62:
      v11 = v22;
      v13 = v21;
      v76 += v69;
      v19 = v72 + 1;
    }
    while ( v72 != v68 );
    v6 -= 16;
    v7 = v71 + 16;
    v14 = v94;
    v5 = v67 - 16;
    result = v66 + 1;
  }
  while ( v66 != v64 );
  return result;
}
