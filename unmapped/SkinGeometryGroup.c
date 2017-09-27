

void __fastcall SkinGeometryGroup::~SkinGeometryGroup(SkinGeometryGroup *this)
{
  SkinGeometryGroup::~SkinGeometryGroup(this);
}


BackgroundTask *__fastcall SkinGeometryGroup::loadModelPackFromString(int a1, int *a2, int a3)
{
  int *v3; // r6@1
  int v4; // r5@1
  int v5; // r4@1
  __int64 v6; // r0@1
  BackgroundTask *result; // r0@1
  int v8; // r4@1
  unsigned int *v9; // r1@2
  unsigned int *v10; // r5@8
  unsigned int v11; // r4@15
  unsigned int *v12; // r1@16
  unsigned int *v13; // r5@22
  int v14; // [sp+4h] [bp-24h]@1
  __int64 v15; // [sp+8h] [bp-20h]@1
  unsigned int v16; // [sp+10h] [bp-18h]@1

  v3 = a2;
  v4 = a1;
  v5 = a3;
  j__ZNSt12__shared_ptrI15InheritanceTreeIN13GeometryGroup11ModelParentEELN9__gnu_cxx12_Lock_policyE2EEC2ISaIS3_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v15 + 4);
  GeometryGroup::buildInheritanceTree(v4, v3, (unsigned __int64 *)HIDWORD(v15));
  v14 = HIDWORD(v15);
  v6 = v16;
  v16 = 0;
  v15 = v6;
  result = GeometryGroup::loadModels(v4, (unsigned __int64 *)&v14, v5);
  v8 = v15;
  if ( (_DWORD)v15 )
  {
    v9 = (unsigned int *)(v15 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        result = (BackgroundTask *)__ldrex(v9);
      while ( __strex((unsigned int)result - 1, v9) );
    }
    else
      result = (BackgroundTask *)(*v9)--;
    if ( result == (BackgroundTask *)1 )
      v10 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          result = (BackgroundTask *)__ldrex(v10);
        while ( __strex((unsigned int)result - 1, v10) );
      }
      else
        result = (BackgroundTask *)(*v10)--;
      if ( result == (BackgroundTask *)1 )
        result = (BackgroundTask *)(*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  }
  v11 = v16;
  if ( v16 )
    v12 = (unsigned int *)(v16 + 4);
        result = (BackgroundTask *)__ldrex(v12);
      while ( __strex((unsigned int)result - 1, v12) );
      result = (BackgroundTask *)(*v12)--;
      v13 = (unsigned int *)(v11 + 8);
      (*(void (__fastcall **)(unsigned int))(*(_DWORD *)v11 + 8))(v11);
          result = (BackgroundTask *)__ldrex(v13);
        while ( __strex((unsigned int)result - 1, v13) );
        result = (BackgroundTask *)(*v13)--;
        result = (BackgroundTask *)(*(int (__fastcall **)(unsigned int))(*(_DWORD *)v11 + 12))(v11);
  return result;
}


void __fastcall SkinGeometryGroup::~SkinGeometryGroup(SkinGeometryGroup *this)
{
  GeometryGroup *v1; // r0@1

  v1 = GeometryGroup::~GeometryGroup(this);
  j_j_j__ZdlPv_4((void *)v1);
}


_DWORD *__fastcall SkinGeometryGroup::SkinGeometryGroup(int a1, int a2, int a3)
{
  _DWORD *result; // r0@1

  result = (_DWORD *)GeometryGroup::GeometryGroup(a1, a2, a3);
  *result = &off_26D95CC;
  return result;
}
