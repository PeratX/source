

_BYTE *__fastcall VirtualCommandOrigin::toCommandOriginData(VirtualCommandOrigin *this)
{
  _BYTE *result; // r0@1

  result = (_BYTE *)CommandOriginData::CommandOriginData((int)this);
  *result = 8;
  return result;
}


signed int __fastcall VirtualCommandOrigin::getOriginType(VirtualCommandOrigin *this)
{
  return 8;
}


void __fastcall VirtualCommandOrigin::getWorldPosition(VirtualCommandOrigin *this, int a2)
{
  VirtualCommandOrigin::getWorldPosition(this, a2);
}


int __fastcall VirtualCommandOrigin::VirtualCommandOrigin(int a1, int a2, Entity *a3, int a4)
{
  int v4; // r4@1
  Entity *v5; // r6@1
  _QWORD *v6; // r7@2
  int v7; // r0@4

  v4 = a1;
  v5 = a3;
  *(_DWORD *)a1 = &off_26EB000;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)a4;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(a1 + 16) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 40))(a1 + 20);
  if ( (*(int (__fastcall **)(Entity *))(*(_DWORD *)v5 + 488))(v5) == 319 )
  {
    v6 = operator new(0x18u);
    *(_DWORD *)v6 = &off_26EADE0;
    v6[1] = *(_QWORD *)Entity::getUniqueID(v5);
    *((_DWORD *)v6 + 4) = Entity::getLevel(v5);
    *((_BYTE *)v6 + 20) = 0;
  }
  else
    *(_DWORD *)v6 = &off_26EB058;
  v7 = *(_DWORD *)(v4 + 16);
  *(_DWORD *)(v4 + 16) = v6;
  if ( v7 )
    (*(void (**)(void))(*(_DWORD *)v7 + 4))();
  return v4;
}


VirtualCommandOrigin *__fastcall VirtualCommandOrigin::~VirtualCommandOrigin(VirtualCommandOrigin *this)
{
  VirtualCommandOrigin *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@3
  VirtualCommandOrigin *result; // r0@5

  v1 = this;
  *(_DWORD *)this = &off_26EB000;
  v2 = *((_DWORD *)this + 5);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 5) = 0;
  v3 = *((_DWORD *)v1 + 4);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  result = v1;
  *((_DWORD *)v1 + 4) = 0;
  return result;
}


void __fastcall VirtualCommandOrigin::~VirtualCommandOrigin(VirtualCommandOrigin *this)
{
  VirtualCommandOrigin *v1; // r4@1
  int v2; // r0@1
  int v3; // r0@3

  v1 = this;
  *(_DWORD *)this = &off_26EB000;
  v2 = *((_DWORD *)this + 5);
  if ( v2 )
    (*(void (**)(void))(*(_DWORD *)v2 + 4))();
  *((_DWORD *)v1 + 5) = 0;
  v3 = *((_DWORD *)v1 + 4);
  if ( v3 )
    (*(void (**)(void))(*(_DWORD *)v3 + 4))();
  j_j_j__ZdlPv_6((void *)v1);
}


int __fastcall VirtualCommandOrigin::VirtualCommandOrigin(int result, int *a2, int *a3, int a4)
{
  int v4; // r3@1
  int v5; // r2@1

  *(_DWORD *)result = &off_26EB000;
  *(_DWORD *)(result + 4) = *(_DWORD *)a4;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a4 + 8);
  v4 = *a3;
  *a3 = 0;
  *(_DWORD *)(result + 16) = v4;
  v5 = *a2;
  *a2 = 0;
  *(_DWORD *)(result + 20) = v5;
  return result;
}


int __fastcall VirtualCommandOrigin::getBlockPosition(int result, int a2)
{
  *(_DWORD *)result = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 12);
  return result;
}


void __fastcall VirtualCommandOrigin::~VirtualCommandOrigin(VirtualCommandOrigin *this)
{
  VirtualCommandOrigin::~VirtualCommandOrigin(this);
}


int __fastcall VirtualCommandOrigin::VirtualCommandOrigin(int a1, int a2, int a3, int a4)
{
  int v4; // r4@1
  int v5; // r6@1
  int v6; // r1@2
  int v7; // r0@2
  int v8; // r1@6
  int v9; // r0@6
  int v11; // [sp+0h] [bp-18h]@6
  int v12; // [sp+4h] [bp-14h]@2

  v4 = a1;
  v5 = a3;
  *(_DWORD *)a1 = &off_26EB000;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)a4;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a4 + 4);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a4 + 8);
  *(_DWORD *)(a1 + 16) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 40))(a1 + 20);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 72))(v5) == 8 )
  {
    (*(void (__fastcall **)(int *))(**(_DWORD **)(v5 + 16) + 40))(&v12);
    v6 = v12;
    v12 = 0;
    v7 = *(_DWORD *)(v4 + 16);
    *(_DWORD *)(v4 + 16) = v6;
    if ( v7 )
    {
      (*(void (**)(void))(*(_DWORD *)v7 + 4))();
      if ( v12 )
        (*(void (**)(void))(*(_DWORD *)v12 + 4))();
    }
  }
  else
    (*(void (__fastcall **)(int *, int))(*(_DWORD *)v5 + 40))(&v11, v5);
    v8 = v11;
    v11 = 0;
    v9 = *(_DWORD *)(v4 + 16);
    *(_DWORD *)(v4 + 16) = v8;
    if ( v9 )
      (*(void (**)(void))(*(_DWORD *)v9 + 4))();
      if ( v11 )
        (*(void (**)(void))(*(_DWORD *)v11 + 4))();
  return v4;
}


int __fastcall VirtualCommandOrigin::clone(VirtualCommandOrigin *this, int a2)
{
  int v2; // r6@1
  VirtualCommandOrigin *v3; // r8@1
  __int64 v4; // kr00_8@1
  void *v5; // r5@1
  int result; // r0@1

  v2 = a2;
  v3 = this;
  v4 = *(_QWORD *)(a2 + 16);
  v5 = operator new(0x18u);
  result = VirtualCommandOrigin::VirtualCommandOrigin((int)v5, SHIDWORD(v4), v4, v2 + 4);
  *(_DWORD *)v3 = v5;
  return result;
}


void __fastcall VirtualCommandOrigin::getWorldPosition(VirtualCommandOrigin *this, int a2)
{
  Vec3::Vec3((int)this, a2 + 4);
}
