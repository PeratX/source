

int __fastcall UITextureInfoPtr::UITextureInfoPtr(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r6@1
  UIRepository *v4; // r0@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_26D90B8;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  sub_119C854((int *)(a1 + 12), (int *)(a2 + 12));
  *(_DWORD *)(v2 + 16) = *(_DWORD *)(v3 + 16);
  v4 = *(UIRepository **)(v2 + 8);
  if ( v4 )
    UIRepository::_addRef(v4, (UITextureInfoPtr *)v2);
  return v2;
}


char *__fastcall UITextureInfoPtr::clone(UITextureInfoPtr *this, int a2)
{
  int v2; // r7@1
  UITextureInfoPtr *v3; // r4@1
  UIRepository *v4; // r6@1
  char *result; // r0@2

  v2 = a2;
  v3 = this;
  v4 = *(UIRepository **)(a2 + 8);
  if ( v4 )
  {
    *(_DWORD *)this = &off_26D90B8;
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = v4;
    sub_119C854((int *)this + 3, (int *)(a2 + 12));
    *((_DWORD *)v3 + 4) = *(_DWORD *)(v2 + 16);
    UIRepository::_addRef(v4, v3);
    result = UIRepository::_getUITextureInfo(*((UIRepository **)v3 + 2), (UITextureInfoPtr *)((char *)v3 + 12), 0, 1);
    *((_DWORD *)v3 + 1) = result;
  }
  else
    *(_DWORD *)this = 0;
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 3) = 0;
    result = (char *)&off_26D90B8;
    *(_DWORD *)v3 = &off_26D90B8;
    *((_DWORD *)v3 + 1) = 0;
    *((_DWORD *)v3 + 2) = 0;
    *((_DWORD *)v3 + 3) = &unk_28898CC;
    *((_DWORD *)v3 + 4) = 0;
  return result;
}


UITextureInfoPtr *__fastcall UITextureInfoPtr::~UITextureInfoPtr(UITextureInfoPtr *this)
{
  UITextureInfoPtr *v1; // r4@1
  UIRepository *v2; // r0@1
  int v3; // r1@3
  void *v4; // r0@3
  unsigned int *v6; // r2@5
  signed int v7; // r1@7

  v1 = this;
  *(_DWORD *)this = &off_26D90B8;
  v2 = (UIRepository *)*((_DWORD *)this + 2);
  if ( v2 )
  {
    UIRepository::_removeRef(v2, v1);
    *((_DWORD *)v1 + 2) = 0;
  }
  *((_DWORD *)v1 + 1) = 0;
  v3 = *((_DWORD *)v1 + 3);
  v4 = (void *)(v3 - 12);
  if ( (int *)(v3 - 12) != &dword_28898C0 )
    v6 = (unsigned int *)(v3 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
    else
      v7 = (*v6)--;
    if ( v7 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v4);
  return v1;
}


char *__fastcall UITextureInfoPtr::onGroupReloaded(UITextureInfoPtr *this, int a2, int a3)
{
  UITextureInfoPtr *v3; // r4@1
  char *result; // r0@1

  v3 = this;
  result = UIRepository::_getUITextureInfo(
             *((UIRepository **)this + 2),
             (UITextureInfoPtr *)((char *)this + 12),
             a2,
             a3);
  *((_DWORD *)v3 + 1) = result;
  return result;
}


int __fastcall UITextureInfoPtr::UITextureInfoPtr(int a1, UIRepository *a2, int *a3, int a4)
{
  int v4; // r4@1
  const ResourceLocation *v5; // r6@1
  UIRepository *v6; // r5@1
  int *v7; // r7@1
  int v8; // r8@1

  v4 = a1;
  v5 = (const ResourceLocation *)(a1 + 12);
  v6 = a2;
  v7 = a3;
  v8 = a4;
  *(_DWORD *)a1 = &off_26D90B8;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = a2;
  sub_119C854((int *)(a1 + 12), a3);
  *(_DWORD *)(v4 + 16) = v7[1];
  UIRepository::_addRef(v6, (UITextureInfoPtr *)v4);
  *(_DWORD *)(v4 + 4) = UIRepository::_getUITextureInfo(*(UIRepository **)(v4 + 8), v5, v8, 1);
  return v4;
}


UITextureInfoPtr *__fastcall UITextureInfoPtr::_move(UITextureInfoPtr *a1, int a2)
{
  UITextureInfoPtr *v2; // r4@1
  int v3; // r5@1
  UIRepository *v4; // r0@1
  UIRepository *v5; // r0@3

  v2 = a1;
  v3 = a2;
  v4 = (UIRepository *)*((_DWORD *)a1 + 2);
  if ( v4 )
  {
    UIRepository::_removeRef(v4, v2);
    *((_DWORD *)v2 + 2) = 0;
  }
  *((_DWORD *)v2 + 1) = 0;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v2 + 3,
    (int *)(v3 + 12));
  *((_DWORD *)v2 + 4) = *(_DWORD *)(v3 + 16);
  *((_DWORD *)v2 + 1) = *(_DWORD *)(v3 + 4);
  v5 = *(UIRepository **)(v3 + 8);
  *((_DWORD *)v2 + 2) = v5;
  if ( *(_DWORD *)(v3 + 8) )
    UIRepository::_removeRef(*(UIRepository **)(v3 + 8), (UITextureInfoPtr *)v3);
    *(_DWORD *)(v3 + 8) = 0;
    v5 = (UIRepository *)*((_DWORD *)v2 + 2);
  *(_DWORD *)(v3 + 4) = 0;
  if ( v5 )
    UIRepository::_addRef(v5, v2);
  return v2;
}


void __fastcall UITextureInfoPtr::~UITextureInfoPtr(UITextureInfoPtr *this)
{
  UITextureInfoPtr::~UITextureInfoPtr(this);
}


void __fastcall UITextureInfoPtr::~UITextureInfoPtr(UITextureInfoPtr *this)
{
  UITextureInfoPtr *v1; // r0@1

  v1 = UITextureInfoPtr::~UITextureInfoPtr(this);
  j_j_j__ZdlPv_4((void *)v1);
}


int __fastcall UITextureInfoPtr::onGroupDestroyed(int result)
{
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


int __fastcall UITextureInfoPtr::_deref(UITextureInfoPtr *this)
{
  UITextureInfoPtr *v1; // r4@1
  UIRepository *v2; // r0@1
  int result; // r0@3

  v1 = this;
  v2 = (UIRepository *)*((_DWORD *)this + 2);
  if ( v2 )
  {
    UIRepository::_removeRef(v2, v1);
    *((_DWORD *)v1 + 2) = 0;
  }
  result = 0;
  *((_DWORD *)v1 + 1) = 0;
  return result;
}


int __fastcall UITextureInfoPtr::UITextureInfoPtr(int a1, int a2)
{
  int v2; // r4@1
  int v3; // r5@1
  int v4; // r0@1
  UIRepository *v5; // r0@1

  v2 = a1;
  v3 = a2;
  *(_DWORD *)a1 = &off_26D90B8;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = &unk_28898CC;
  v4 = a1 + 12;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 - 8) = 0;
  xbox::services::user_statistics::service_configuration_statistic::_Set_input_service_configuration_id(
    (int *)v4,
    (int *)(a2 + 12));
  *(_DWORD *)(v2 + 16) = *(_DWORD *)(v3 + 16);
  *(_DWORD *)(v2 + 4) = *(_DWORD *)(v3 + 4);
  v5 = *(UIRepository **)(v3 + 8);
  *(_DWORD *)(v2 + 8) = v5;
  if ( *(_DWORD *)(v3 + 8) )
  {
    UIRepository::_removeRef(*(UIRepository **)(v3 + 8), (UITextureInfoPtr *)v3);
    *(_DWORD *)(v3 + 8) = 0;
    v5 = *(UIRepository **)(v2 + 8);
  }
  *(_DWORD *)(v3 + 4) = 0;
  if ( v5 )
    UIRepository::_addRef(v5, (UITextureInfoPtr *)v2);
  return v2;
}
