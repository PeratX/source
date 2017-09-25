

int __fastcall MatrixStack::push(MatrixStack *this, int a2)
{
  MatrixStack *v2; // r5@1
  int v3; // r4@1
  int result; // r0@1

  v2 = this;
  v3 = a2;
  *(_BYTE *)(a2 + 12) = 1;
  result = MatrixStack::_push((MatrixStack *)a2);
  *(_DWORD *)v2 = v3;
  *((_DWORD *)v2 + 1) = result;
  return result;
}


int __fastcall MatrixStack::getTop(MatrixStack *this)
{
  *((_BYTE *)this + 12) = 1;
  return *((_DWORD *)this + 1) - 64;
}


_QWORD *__fastcall MatrixStack::MatrixStackRef::MatrixStackRef(_QWORD *result, __int64 a2)
{
  *result = a2;
  return result;
}


int __fastcall MatrixStack::MatrixStackRef::~MatrixStackRef(int result)
{
  int v1; // r1@1

  v1 = *(_DWORD *)result;
  if ( *(_DWORD *)result )
  {
    *(_BYTE *)(v1 + 12) = 1;
    *(_DWORD *)(v1 + 4) -= 64;
  }
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  return result;
}


int __fastcall MatrixStack::_pushIdentity(MatrixStack *this)
{
  MatrixStack *v1; // r4@1
  __int64 v2; // r0@1
  int v3; // r0@2
  int result; // r0@2

  v1 = this;
  v2 = *(_QWORD *)((char *)this + 4);
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
    j__ZNSt6vectorI6MatrixSaIS0_EE19_M_emplace_back_auxIJEEEvDpOT_((unsigned __int64 *)v1);
    result = *((_DWORD *)v1 + 1) - 64;
  }
  else
    *(_DWORD *)v2 = 1065353216;
    *(_DWORD *)(v2 + 12) = 0;
    *(_DWORD *)(v2 + 16) = 0;
    *(_DWORD *)(v2 + 4) = 0;
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 28) = 0;
    *(_DWORD *)(v2 + 32) = 0;
    *(_QWORD *)(v2 + 20) = 1065353216LL;
    *(_DWORD *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 40) = 1065353216;
    *(_DWORD *)(v2 + 52) = 0;
    *(_DWORD *)(v2 + 56) = 0;
    *(_DWORD *)(v2 + 44) = 0;
    *(_DWORD *)(v2 + 48) = 0;
    *(_DWORD *)(v2 + 60) = 1065353216;
    v3 = *((_DWORD *)v1 + 1) + 64;
    *((_DWORD *)v1 + 1) = v3;
    result = v3 - 64;
  return result;
}


int __fastcall MatrixStack::MatrixStackRef::_move(int result, MatrixStack::MatrixStackRef *a2)
{
  int v2; // r2@2

  if ( (MatrixStack::MatrixStackRef *)result != a2 )
  {
    v2 = *(_DWORD *)result;
    if ( *(_DWORD *)result )
    {
      *(_BYTE *)(v2 + 12) = 1;
      *(_DWORD *)(v2 + 4) -= 64;
    }
    *(_DWORD *)result = 0;
    *(_DWORD *)(result + 4) = 0;
    *(_DWORD *)(result + 4) = *((_DWORD *)a2 + 1);
    *(_DWORD *)result = *(_DWORD *)a2;
    *(_DWORD *)a2 = 0;
  }
  return result;
}


signed int __fastcall MatrixStack::size(MatrixStack *this)
{
  return (signed int)((*(_QWORD *)this >> 32) - *(_QWORD *)this) >> 6;
}


int __fastcall MatrixStack::top(MatrixStack *this)
{
  return *((_DWORD *)this + 1) - 64;
}


int __fastcall MatrixStack::MatrixStack(int a1)
{
  int v1; // r4@1
  __int64 v2; // r0@1
  int result; // r0@2

  v1 = a1;
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 12) = 1;
  std::vector<Matrix,std::allocator<Matrix>>::reserve(a1, 0x10u);
  v2 = *(_QWORD *)(v1 + 4);
  if ( (_DWORD)v2 == HIDWORD(v2) )
  {
    j__ZNSt6vectorI6MatrixSaIS0_EE19_M_emplace_back_auxIJEEEvDpOT_((unsigned __int64 *)v1);
    result = v1;
  }
  else
    *(_DWORD *)(v2 + 8) = 0;
    *(_DWORD *)(v2 + 12) = 0;
    *(_DWORD *)v2 = 1065353216;
    *(_DWORD *)(v2 + 4) = 0;
    *(_DWORD *)(v2 + 16) = 0;
    *(_DWORD *)(v2 + 20) = 1065353216;
    *(_DWORD *)(v2 + 32) = 0;
    *(_DWORD *)(v2 + 36) = 0;
    *(_DWORD *)(v2 + 24) = 0;
    *(_DWORD *)(v2 + 28) = 0;
    *(_DWORD *)(v2 + 48) = 0;
    *(_DWORD *)(v2 + 52) = 0;
    *(_DWORD *)(v2 + 40) = 1065353216;
    *(_DWORD *)(v2 + 44) = 0;
    *(_DWORD *)(v2 + 56) = 0;
    *(_DWORD *)(v2 + 60) = 1065353216;
    *(_DWORD *)(v1 + 4) += 64;
  return result;
}


int __fastcall MatrixStack::push(int a1, int a2, int a3)
{
  int v3; // r4@1
  int v4; // r5@1
  int v5; // r6@1
  __int64 v6; // kr00_8@1
  int v7; // r0@2
  int result; // r0@4

  v3 = a1;
  v4 = a2;
  v5 = a3;
  *(_BYTE *)(a2 + 12) = 1;
  v6 = *(_QWORD *)(a2 + 4);
  if ( (_DWORD)v6 == HIDWORD(v6) )
  {
    std::vector<Matrix,std::allocator<Matrix>>::_M_emplace_back_aux<Matrix const&>((unsigned __int64 *)a2, a3);
    v7 = *(_DWORD *)(v4 + 4);
  }
  else
    _aeabi_memclr4(v6, 64);
    *(_DWORD *)v6 = *(_DWORD *)v5;
    *(_DWORD *)(v6 + 4) = *(_DWORD *)(v5 + 4);
    *(_DWORD *)(v6 + 8) = *(_DWORD *)(v5 + 8);
    *(_DWORD *)(v6 + 12) = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(v6 + 16) = *(_DWORD *)(v5 + 16);
    *(_DWORD *)(v6 + 20) = *(_DWORD *)(v5 + 20);
    *(_DWORD *)(v6 + 24) = *(_DWORD *)(v5 + 24);
    *(_DWORD *)(v6 + 28) = *(_DWORD *)(v5 + 28);
    *(_DWORD *)(v6 + 32) = *(_DWORD *)(v5 + 32);
    *(_DWORD *)(v6 + 36) = *(_DWORD *)(v5 + 36);
    *(_DWORD *)(v6 + 40) = *(_DWORD *)(v5 + 40);
    *(_DWORD *)(v6 + 44) = *(_DWORD *)(v5 + 44);
    *(_DWORD *)(v6 + 48) = *(_DWORD *)(v5 + 48);
    *(_DWORD *)(v6 + 52) = *(_DWORD *)(v5 + 52);
    *(_DWORD *)(v6 + 56) = *(_DWORD *)(v5 + 56);
    *(_DWORD *)(v6 + 60) = *(_DWORD *)(v5 + 60);
    v7 = *(_DWORD *)(v4 + 4) + 64;
    *(_DWORD *)(v4 + 4) = v7;
  result = v7 - 64;
  *(_DWORD *)v3 = v4;
  *(_DWORD *)(v3 + 4) = result;
  return result;
}


int __fastcall MatrixStack::MatrixStackRef::MatrixStackRef(int result, int a2)
{
  int v2; // r2@2

  if ( result != a2 )
  {
    v2 = *(_DWORD *)result;
    if ( *(_DWORD *)result )
    {
      *(_BYTE *)(v2 + 12) = 1;
      *(_DWORD *)(v2 + 4) -= 64;
    }
    *(_DWORD *)result = 0;
    *(_DWORD *)(result + 4) = 0;
    *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)result = *(_DWORD *)a2;
    *(_DWORD *)a2 = 0;
  }
  return result;
}


int __fastcall MatrixStack::pop(int result)
{
  *(_BYTE *)(result + 12) = 1;
  *(_DWORD *)(result + 4) -= 64;
  return result;
}


signed int __fastcall MatrixStack::empty(MatrixStack *this)
{
  __int64 v1; // r1@1
  signed int result; // r0@1

  v1 = *(_QWORD *)this;
  result = 0;
  if ( (_DWORD)v1 == HIDWORD(v1) )
    result = 1;
  return result;
}


int __fastcall MatrixStack::pushIdentity(MatrixStack *this, int a2)
{
  MatrixStack *v2; // r4@1
  int v3; // r5@1
  __int64 v4; // r0@1
  int v5; // r0@2
  int result; // r0@4

  v2 = this;
  v3 = a2;
  *(_BYTE *)(a2 + 12) = 1;
  v4 = *(_QWORD *)(a2 + 4);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    j__ZNSt6vectorI6MatrixSaIS0_EE19_M_emplace_back_auxIJEEEvDpOT_((unsigned __int64 *)v3);
    v5 = *(_DWORD *)(v3 + 4);
  }
  else
    *(_DWORD *)v4 = 1065353216;
    *(_DWORD *)(v4 + 12) = 0;
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 4) = 0;
    *(_DWORD *)(v4 + 8) = 0;
    *(_DWORD *)(v4 + 28) = 0;
    *(_DWORD *)(v4 + 32) = 0;
    *(_QWORD *)(v4 + 20) = 1065353216LL;
    *(_DWORD *)(v4 + 36) = 0;
    *(_DWORD *)(v4 + 40) = 1065353216;
    *(_DWORD *)(v4 + 52) = 0;
    *(_DWORD *)(v4 + 56) = 0;
    *(_DWORD *)(v4 + 44) = 0;
    *(_DWORD *)(v4 + 48) = 0;
    *(_DWORD *)(v4 + 60) = 1065353216;
    v5 = *(_DWORD *)(v3 + 4) + 64;
    *(_DWORD *)(v3 + 4) = v5;
  result = v5 - 64;
  *(_DWORD *)v2 = v3;
  *((_DWORD *)v2 + 1) = result;
  return result;
}


int __fastcall MatrixStack::_push(MatrixStack *this)
{
  MatrixStack *v1; // r4@1
  int v2; // r5@1
  int v3; // r1@1
  int v4; // r12@1
  int v5; // lr@1
  int v6; // r2@1
  int v7; // r3@1
  int v8; // r6@1
  int v9; // r7@1
  int v10; // r8@1
  int v11; // r9@1
  int v12; // r10@1
  int v13; // r11@1
  int v14; // ST04_4@2
  int v15; // ST00_4@2
  int v16; // ST0C_4@2
  int v17; // ST10_4@2
  int v18; // r1@2
  int v19; // r0@2
  int v21; // [sp+14h] [bp-7Ch]@1
  int v22; // [sp+18h] [bp-78h]@1
  int v23; // [sp+1Ch] [bp-74h]@1
  int v24; // [sp+20h] [bp-70h]@1
  int v25; // [sp+24h] [bp-6Ch]@1
  int v26; // [sp+28h] [bp-68h]@1
  int v27; // [sp+2Ch] [bp-64h]@1
  int v28; // [sp+30h] [bp-60h]@1
  int v29; // [sp+34h] [bp-5Ch]@1
  int v30; // [sp+38h] [bp-58h]@1
  int v31; // [sp+3Ch] [bp-54h]@1
  int v32; // [sp+40h] [bp-50h]@1
  int v33; // [sp+44h] [bp-4Ch]@1
  int v34; // [sp+48h] [bp-48h]@1
  int v35; // [sp+4Ch] [bp-44h]@1
  int v36; // [sp+50h] [bp-40h]@1
  int v37; // [sp+54h] [bp-3Ch]@1
  int v38; // [sp+58h] [bp-38h]@1
  int v39; // [sp+5Ch] [bp-34h]@1
  int v40; // [sp+60h] [bp-30h]@1
  int v41; // [sp+64h] [bp-2Ch]@1

  v1 = this;
  v2 = *((_DWORD *)this + 1);
  _aeabi_memclr8(&v26, 60);
  v3 = *(_DWORD *)(v2 - 64);
  v26 = *(_DWORD *)(v2 - 64);
  v4 = *(_DWORD *)(v2 - 60);
  v27 = *(_DWORD *)(v2 - 60);
  v5 = *(_DWORD *)(v2 - 56);
  v28 = *(_DWORD *)(v2 - 56);
  v6 = *(_DWORD *)(v2 - 52);
  v29 = *(_DWORD *)(v2 - 52);
  v7 = *(_DWORD *)(v2 - 48);
  v30 = *(_DWORD *)(v2 - 48);
  v31 = *(_DWORD *)(v2 - 44);
  v25 = v31;
  v32 = *(_DWORD *)(v2 - 40);
  v24 = v32;
  v33 = *(_DWORD *)(v2 - 36);
  v23 = v33;
  v34 = *(_DWORD *)(v2 - 32);
  v22 = v34;
  v35 = *(_DWORD *)(v2 - 28);
  v8 = *(_DWORD *)(v2 - 24);
  v36 = *(_DWORD *)(v2 - 24);
  v9 = *(_DWORD *)(v2 - 20);
  v37 = *(_DWORD *)(v2 - 20);
  v10 = *(_DWORD *)(v2 - 16);
  v38 = *(_DWORD *)(v2 - 16);
  v11 = *(_DWORD *)(v2 - 12);
  v39 = *(_DWORD *)(v2 - 12);
  v12 = *(_DWORD *)(v2 - 8);
  v40 = *(_DWORD *)(v2 - 8);
  v13 = *(_DWORD *)(v2 - 4);
  v41 = *(_DWORD *)(v2 - 4);
  v21 = v35;
  if ( v2 == *((_DWORD *)v1 + 2) )
  {
    std::vector<Matrix,std::allocator<Matrix>>::_M_emplace_back_aux<Matrix const&>((unsigned __int64 *)v1, (int)&v26);
    v19 = *((_DWORD *)v1 + 1);
  }
  else
    v14 = v3;
    v15 = v4;
    v16 = v6;
    v17 = v7;
    _aeabi_memclr4(v2, 60);
    v18 = v2 + 36;
    *(_DWORD *)v2 = v14;
    *(_DWORD *)(v2 + 4) = v15;
    *(_DWORD *)(v2 + 8) = v5;
    *(_DWORD *)(v2 + 12) = v16;
    *(_DWORD *)(v2 + 16) = v17;
    *(_DWORD *)(v2 + 20) = v25;
    *(_DWORD *)(v2 + 24) = v24;
    *(_DWORD *)(v2 + 28) = v23;
    *(_DWORD *)(v2 + 32) = v22;
    *(_DWORD *)v18 = v21;
    *(_DWORD *)(v18 + 4) = v8;
    *(_DWORD *)(v18 + 8) = v9;
    *(_DWORD *)(v18 + 12) = v10;
    *(_DWORD *)(v18 + 16) = v11;
    *(_DWORD *)(v18 + 20) = v12;
    *(_DWORD *)(v18 + 24) = v13;
    v19 = *((_DWORD *)v1 + 1) + 64;
    *((_DWORD *)v1 + 1) = v19;
  return v19 - 64;
}


int __fastcall MatrixStack::makeClean(int result)
{
  *(_BYTE *)(result + 12) = 0;
  return result;
}


int __fastcall MatrixStack::MatrixStackRef::release(int result)
{
  int v1; // r1@1

  v1 = *(_DWORD *)result;
  if ( *(_DWORD *)result )
  {
    *(_BYTE *)(v1 + 12) = 1;
    *(_DWORD *)(v1 + 4) -= 64;
  }
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  return result;
}


int __fastcall MatrixStack::MatrixStackRef::MatrixStackRef(int result)
{
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 4) = 0;
  return result;
}
