

int __fastcall Cubemap::createCubemapRotation(Cubemap *this, float _R1)
{
  Cubemap *v2; // r4@1
  __int64 v10; // r7@1 OVERLAPPED
  float v12; // r6@1
  float v13; // r0@1
  float v15; // r0@1
  float v16; // r0@1
  int result; // r0@1
  __int64 v18; // [sp+0h] [bp-E0h]@1
  unsigned int v19; // [sp+8h] [bp-D8h]@1
  int v20; // [sp+Ch] [bp-D4h]@1
  __int64 v21; // [sp+10h] [bp-D0h]@1
  int v22; // [sp+18h] [bp-C8h]@1
  int v23; // [sp+1Ch] [bp-C4h]@1
  float v24; // [sp+20h] [bp-C0h]@1
  int v25; // [sp+24h] [bp-BCh]@1
  __int64 v26; // [sp+28h] [bp-B8h]@1
  int v27; // [sp+30h] [bp-B0h]@1
  int v28; // [sp+34h] [bp-ACh]@1
  __int64 v29; // [sp+38h] [bp-A8h]@1
  int v30; // [sp+40h] [bp-A0h]@1
  int v31; // [sp+44h] [bp-9Ch]@1
  int v32; // [sp+48h] [bp-98h]@1
  int v33; // [sp+4Ch] [bp-94h]@1
  int v34; // [sp+50h] [bp-90h]@1
  float v35; // [sp+54h] [bp-8Ch]@1
  float v36; // [sp+58h] [bp-88h]@1
  int v37; // [sp+5Ch] [bp-84h]@1
  int v38; // [sp+60h] [bp-80h]@1
  unsigned int v39; // [sp+64h] [bp-7Ch]@1
  float v40; // [sp+68h] [bp-78h]@1
  int v41; // [sp+6Ch] [bp-74h]@1
  int v42; // [sp+70h] [bp-70h]@1
  int v43; // [sp+74h] [bp-6Ch]@1
  __int64 v44; // [sp+78h] [bp-68h]@1
  int v45; // [sp+80h] [bp-60h]@1
  int v46; // [sp+84h] [bp-5Ch]@1
  int v47; // [sp+88h] [bp-58h]@1
  int v48; // [sp+8Ch] [bp-54h]@1
  int v49; // [sp+90h] [bp-50h]@1
  int v50; // [sp+94h] [bp-4Ch]@1
  int v51; // [sp+98h] [bp-48h]@1
  int v52; // [sp+9Ch] [bp-44h]@1
  int v53; // [sp+A0h] [bp-40h]@1
  int v54; // [sp+A4h] [bp-3Ch]@1
  int v55; // [sp+A8h] [bp-38h]@1
  int v56; // [sp+ACh] [bp-34h]@1
  int v57; // [sp+B0h] [bp-30h]@1
  int v58; // [sp+B4h] [bp-2Ch]@1
  int v59; // [sp+B8h] [bp-28h]@1
  int v60; // [sp+BCh] [bp-24h]@1

  v2 = this;
  __asm { VMOV            S16, R1 }
  _R0 = &mce::Math::DEGRAD;
  __asm
  {
    VLDR            S0, [R0]
    VMUL.F32        S0, S0, S16
    VMOV            R0, S0
  }
  _R0 = sinf(_R0);
    VLDR            S0, =0.12217
    VMOV            S2, R0
  LODWORD(v10) = 0;
  HIDWORD(v10) = 1065353216;
    VMUL.F32        S0, S2, S0
    VLDR            S2, =0.34907
  v34 = 0;
  v32 = 0;
  v33 = 0;
  v30 = 1065353216;
  v31 = 0;
    VADD.F32        S0, S0, S2
    VMOV            R5, S0
  v12 = cosf(_R5);
  v13 = sinf(_R5);
  __asm { VLDR            S0, =-0.02618 }
  v35 = v12;
  v36 = v13;
  __asm { VMUL.F32        S0, S16, S0 }
  v37 = 0;
  v38 = 0;
  v42 = 0;
  v43 = 0;
  v39 = LODWORD(v13) ^ 0x80000000;
  v40 = v12;
  v41 = 0;
  v44 = v10;
  __asm { VMOV            R5, S0 }
  v15 = cosf(_R5);
  *(__int64 *)((char *)&v10 - 4) = LODWORD(v15);
  v18 = LODWORD(v15);
  v16 = sinf(_R5);
  v19 = LODWORD(v16) ^ 0x80000000;
  v20 = 0;
  v21 = v10;
  v22 = 0;
  v23 = 0;
  v24 = v16;
  v25 = 0;
  v27 = 0;
  v28 = 0;
  v26 = *(__int64 *)((char *)&v10 - 4);
  v29 = v10;
  glm::detail::operator*<float>((int)&v45, (int)&v30, (int)&v18);
  _aeabi_memclr4(v2, 56);
  *(_DWORD *)v2 = v45;
  *((_DWORD *)v2 + 1) = v46;
  *((_DWORD *)v2 + 2) = v47;
  *((_DWORD *)v2 + 3) = v48;
  *((_DWORD *)v2 + 4) = v49;
  *((_DWORD *)v2 + 5) = v50;
  *((_DWORD *)v2 + 6) = v51;
  *((_DWORD *)v2 + 7) = v52;
  *((_DWORD *)v2 + 8) = v53;
  *((_DWORD *)v2 + 9) = v54;
  *((_DWORD *)v2 + 10) = v55;
  *((_DWORD *)v2 + 11) = v56;
  *((_DWORD *)v2 + 12) = v57;
  *((_DWORD *)v2 + 13) = v58;
  *((_DWORD *)v2 + 14) = v59;
  result = v60;
  *((_DWORD *)v2 + 15) = v60;
  return result;
}


int __fastcall Cubemap::renderCubemap(int a1, __int64 *a2, int a3, float a4)
{
  int v4; // r7@1
  __int64 *v5; // r6@1
  int v7; // r5@1
  int v12; // r9@1
  int v13; // r10@1
  Tessellator *v14; // r5@1
  __int64 v16; // r0@2
  int v18; // [sp+8h] [bp-90h]@1
  int v19; // [sp+Ch] [bp-8Ch]@1
  char v20; // [sp+10h] [bp-88h]@1
  int v21; // [sp+18h] [bp-80h]@1
  int v22; // [sp+1Ch] [bp-7Ch]@1
  int v23; // [sp+20h] [bp-78h]@1
  int v24; // [sp+24h] [bp-74h]@1
  int v25; // [sp+28h] [bp-70h]@1
  int v26; // [sp+2Ch] [bp-6Ch]@1
  int v27; // [sp+30h] [bp-68h]@1
  int v28; // [sp+34h] [bp-64h]@1
  int v29; // [sp+38h] [bp-60h]@1
  int v30; // [sp+3Ch] [bp-5Ch]@1
  int v31; // [sp+40h] [bp-58h]@1
  int v32; // [sp+44h] [bp-54h]@1
  int v33; // [sp+48h] [bp-50h]@1
  int v34; // [sp+4Ch] [bp-4Ch]@1
  int v35; // [sp+50h] [bp-48h]@1
  int v36; // [sp+54h] [bp-44h]@1
  int v37; // [sp+58h] [bp-40h]@1
  int v38; // [sp+5Ch] [bp-3Ch]@1
  int v39; // [sp+60h] [bp-38h]@1
  int v40; // [sp+64h] [bp-34h]@1

  v4 = a1;
  v5 = a2;
  _R4 = a4;
  v19 = a3;
  MatrixStack::push((MatrixStack *)&v20, *(_DWORD *)(a1 + 16) + 16);
  v7 = MatrixStack::MatrixStackRef::operator->((int)&v20);
  v21 = 1065353216;
  v22 = 0;
  v23 = 0;
  v40 = 1127481344;
  __asm { VMOV            S16, R4 }
  glm::rotate<float>((int)&v24, v7, (int)&v40, (int)&v21);
  __asm { VNEG.F32        S0, S16 }
  *(_DWORD *)v7 = v24;
  v12 = 0;
  v13 = 0;
  *(_DWORD *)(v7 + 4) = v25;
  *(_DWORD *)(v7 + 8) = v26;
  *(_DWORD *)(v7 + 12) = v27;
  *(_DWORD *)(v7 + 16) = v28;
  *(_DWORD *)(v7 + 20) = v29;
  *(_DWORD *)(v7 + 24) = v30;
  *(_DWORD *)(v7 + 28) = v31;
  *(_DWORD *)(v7 + 32) = v32;
  *(_DWORD *)(v7 + 36) = v33;
  *(_DWORD *)(v7 + 40) = v34;
  *(_DWORD *)(v7 + 44) = v35;
  *(_DWORD *)(v7 + 48) = v36;
  *(_DWORD *)(v7 + 52) = v37;
  *(_DWORD *)(v7 + 56) = v38;
  *(_DWORD *)(v7 + 60) = v39;
  v14 = *(Tessellator **)(v4 + 40);
  v18 = v4;
  __asm { VMOV            R7, S0 }
  do
  {
    v16 = *v5;
    if ( -1431655765 * ((HIDWORD(v16) - (signed int)v16) >> 3) > v13 && mce::TexturePtr::operator bool(v16 + v12) == 1 )
    {
      Tessellator::begin(v14, 4, 0);
      switch ( v13 )
      {
        case 0:
          Tessellator::vertexUV(v14, _R7, _R7, _R4, 0.0, 0.0);
          Tessellator::vertexUV(v14, _R7, _R4, _R4, 0.0, 1.0);
          Tessellator::vertexUV(v14, _R4, _R4, _R4, 1.0, 1.0);
          Tessellator::vertexUV(v14, _R4, _R7, _R4, 1.0, 0.0);
          break;
        case 1:
          Tessellator::vertexUV(v14, _R4, _R7, _R4, 0.0, 0.0);
          Tessellator::vertexUV(v14, _R4, _R4, _R4, 0.0, 1.0);
          Tessellator::vertexUV(v14, _R4, _R4, _R7, 1.0, 1.0);
          Tessellator::vertexUV(v14, _R4, _R7, _R7, 1.0, 0.0);
        case 2:
          Tessellator::vertexUV(v14, _R4, _R7, _R7, 0.0, 0.0);
          Tessellator::vertexUV(v14, _R4, _R4, _R7, 0.0, 1.0);
          Tessellator::vertexUV(v14, _R7, _R4, _R7, 1.0, 1.0);
          Tessellator::vertexUV(v14, _R7, _R7, _R7, 1.0, 0.0);
        case 3:
          Tessellator::vertexUV(v14, _R7, _R7, _R7, 0.0, 0.0);
          Tessellator::vertexUV(v14, _R7, _R4, _R7, 0.0, 1.0);
          Tessellator::vertexUV(v14, _R7, _R4, _R4, 1.0, 1.0);
          Tessellator::vertexUV(v14, _R7, _R7, _R4, 1.0, 0.0);
        case 4:
          Tessellator::vertexUV(v14, _R7, _R7, _R4, 0.0, 1.0);
          Tessellator::vertexUV(v14, _R4, _R7, _R4, 1.0, 1.0);
        case 5:
          Tessellator::vertexUV(v14, _R7, _R4, _R4, 0.0, 0.0);
          Tessellator::vertexUV(v14, _R4, _R4, _R4, 1.0, 0.0);
        default:
      }
      Tessellator::draw((char *)v14, v18, v19, *(_DWORD *)v5 + v12);
    }
    ++v13;
    v12 += 24;
  }
  while ( v13 < 6 );
  return MatrixStack::MatrixStackRef::~MatrixStackRef((MatrixStack::MatrixStackRef *)&v20);
}
