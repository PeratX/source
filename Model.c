

_QWORD *__fastcall Model::Model(_QWORD *a1)
{
  _QWORD *result; // r0@1

  result = AppPlatformListener::AppPlatformListener(a1);
  *(_DWORD *)result = &off_26E592C;
  *((_DWORD *)result + 4) = 0;
  *((_DWORD *)result + 5) = 0;
  *((_DWORD *)result + 2) = 0;
  *((_DWORD *)result + 3) = 0;
  *((_WORD *)result + 12) = 1;
  *((_DWORD *)result + 7) = 0;
  *((_DWORD *)result + 8) = 0;
  *((_DWORD *)result + 9) = 0;
  *((_DWORD *)result + 10) = 0;
  *((_DWORD *)result + 11) = 0;
  return result;
}


int __fastcall Model::copyModelPart(Model *this, const ModelPart *a2, ModelPart *a3)
{
  int result; // r0@1

  *((_DWORD *)a2 + 9) = *((_DWORD *)this + 9);
  *((_DWORD *)a2 + 10) = *((_DWORD *)this + 10);
  *((_DWORD *)a2 + 11) = *((_DWORD *)this + 11);
  *(_DWORD *)a2 = *(_DWORD *)this;
  *((_DWORD *)a2 + 1) = *((_DWORD *)this + 1);
  *((_DWORD *)a2 + 2) = *((_DWORD *)this + 2);
  *((_DWORD *)a2 + 6) = *((_DWORD *)this + 6);
  *((_DWORD *)a2 + 7) = *((_DWORD *)this + 7);
  result = *((_DWORD *)this + 8);
  *((_DWORD *)a2 + 8) = result;
  return result;
}


int __fastcall Model::getLeashOffsetPosition(int result, int a2)
{
  __int64 v2; // r2@1
  int v3; // r1@1

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_DWORD *)(a2 + 16);
  *(_QWORD *)result = v2;
  *(_DWORD *)(result + 8) = v3;
  return result;
}


int __fastcall Model::getHeightAdjustment(Model *this)
{
  return 0;
}


int __fastcall Model::buildAABB(Model *this, int a2)
{
  int v2; // r5@1
  Model *v3; // r4@1
  int result; // r0@1
  ModelPart **v5; // r5@1
  ModelPart **i; // r6@1
  __int64 v7; // kr00_8@1
  ModelPart *v8; // t1@2

  v2 = a2;
  v3 = this;
  AABB::AABB(this);
  result = 2139095039;
  *(_DWORD *)v3 = 2139095039;
  *((_DWORD *)v3 + 1) = 2139095039;
  *((_QWORD *)v3 + 1) = -36028799174836225LL;
  *((_DWORD *)v3 + 4) = -8388609;
  *((_DWORD *)v3 + 5) = -8388609;
  v7 = *(_QWORD *)(v2 + 36);
  v5 = (ModelPart **)(*(_QWORD *)(v2 + 36) >> 32);
  for ( i = (ModelPart **)v7; v5 != i; result = ModelPart::expandAABB(v8, v3) )
  {
    v8 = *i;
    ++i;
  }
  return result;
}


AppPlatformListener *__fastcall Model::~Model(Model *this)
{
  AppPlatformListener *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E592C;
  v2 = (void *)*((_DWORD *)this + 9);
  if ( v2 )
    operator delete(v2);
  return j_j_j__ZN19AppPlatformListenerD2Ev_1(v1);
}


char *__fastcall Model::registerParts(Model *this, ModelPart *a2)
{
  Model *v2; // r4@1
  ModelPart *v3; // r8@1
  __int64 v4; // r0@1
  char *result; // r0@2
  void *v6; // r5@3
  unsigned int v7; // r2@3
  unsigned int v8; // r1@5
  unsigned int v9; // r6@5
  char *v10; // r7@11 OVERLAPPED
  char *v11; // r8@13
  int v12; // r8@15 OVERLAPPED

  v2 = this;
  v3 = a2;
  v4 = *((_QWORD *)this + 5);
  if ( (_DWORD)v4 == HIDWORD(v4) )
  {
    v6 = (void *)*((_DWORD *)v2 + 9);
    v7 = ((signed int)v4 - (signed int)v6) >> 2;
    if ( !v7 )
      v7 = 1;
    HIDWORD(v4) = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    v9 = v7 + (((signed int)v4 - (signed int)v6) >> 2);
    if ( 0 != HIDWORD(v4) >> 30 )
      v9 = 0x3FFFFFFF;
    if ( v8 < v7 )
    if ( v9 )
    {
      if ( v9 >= 0x40000000 )
        sub_21E57F4();
      v10 = (char *)operator new(4 * v9);
      LODWORD(v4) = *(_QWORD *)((char *)v2 + 36) >> 32;
      v6 = (void *)*(_QWORD *)((char *)v2 + 36);
    }
    else
      v10 = 0;
    *(_DWORD *)&v10[v4 - (_DWORD)v6] = v3;
    v11 = &v10[v4 - (_DWORD)v6];
    if ( 0 != ((signed int)v4 - (signed int)v6) >> 2 )
      _aeabi_memmove4(v10, v6);
    v12 = (int)(v11 + 4);
    if ( v6 )
      operator delete(v6);
    result = &v10[4 * v9];
    *(_QWORD *)((char *)v2 + 36) = *(_QWORD *)&v10;
    *((_DWORD *)v2 + 11) = result;
  }
  else
    *(_DWORD *)v4 = v3;
    result = (char *)(*((_DWORD *)v2 + 10) + 4);
    *((_DWORD *)v2 + 10) = result;
  return result;
}


void __fastcall Model::~Model(Model *this)
{
  Model::~Model(this);
}


int __fastcall Model::clear(int result)
{
  __int64 i; // r4@1
  int v2; // t1@2

  for ( i = *(_QWORD *)(result + 36); HIDWORD(i) != (_DWORD)i; result = mce::Mesh::reset((mce::Mesh *)(v2 + 104)) )
  {
    v2 = *(_DWORD *)i;
    LODWORD(i) = i + 4;
  }
  return result;
}


void __fastcall Model::~Model(Model *this)
{
  AppPlatformListener *v1; // r4@1
  void *v2; // r0@1

  v1 = this;
  *(_DWORD *)this = &off_26E592C;
  v2 = (void *)*((_DWORD *)this + 9);
  if ( v2 )
    operator delete(v2);
  AppPlatformListener::~AppPlatformListener(v1);
  j_j_j__ZdlPv_5((void *)v1);
}
