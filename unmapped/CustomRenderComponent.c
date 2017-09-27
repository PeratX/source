

int __fastcall CustomRenderComponent::getRequiresPreRenderSetup(CustomRenderComponent *this, int a2)
{
  int v2; // r0@1
  int result; // r0@2

  v2 = *((_DWORD *)this + 3);
  if ( v2 )
    result = (*(int (**)(void))(*(_DWORD *)v2 + 44))();
  else
    result = 0;
  return result;
}


int __fastcall CustomRenderComponent::update(CustomRenderComponent *this, UIMeasureStrategy *a2)
{
  return 0;
}


int __fastcall CustomRenderComponent::CustomRenderComponent(RenderableComponent *a1, UIControl *a2)
{
  int result; // r0@1

  result = RenderableComponent::RenderableComponent(a1, a2);
  *(_DWORD *)result = &off_26DFDC8;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  return result;
}


int __fastcall CustomRenderComponent::renderCustom(int result, int a2, int a3)
{
  int v3; // r7@1
  int v4; // r4@1
  int v5; // r5@1
  int (__fastcall *v6)(int, int, int, int); // r9@2
  int v7; // r0@2

  v3 = *(_DWORD *)(result + 12);
  v4 = a3;
  v5 = a2;
  if ( v3 )
  {
    v6 = *(int (__fastcall **)(int, int, int, int))(*(_DWORD *)v3 + 20);
    v7 = UIComponent::getOwner((UIComponent *)result);
    result = v6(v3, v5, v4, v7);
  }
  return result;
}


void __fastcall CustomRenderComponent::~CustomRenderComponent(CustomRenderComponent *this)
{
  RenderableComponent *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_26DFDC8;
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  RenderableComponent::~RenderableComponent(v1);
  j_j_j__ZdlPv_4((void *)v1);
}


void __fastcall CustomRenderComponent::~CustomRenderComponent(CustomRenderComponent *this)
{
  CustomRenderComponent::~CustomRenderComponent(this);
}


int __fastcall CustomRenderComponent::clone(CustomRenderComponent *this, UIControl *a2, UIControl *a3)
{
  CustomRenderComponent *v3; // r5@1
  UIControl *v4; // r7@1
  UIControl *v5; // r6@1
  RenderableComponent *v6; // r4@1
  __int64 v7; // r0@1
  int v8; // r6@1
  unsigned int *v9; // r7@8
  int v10; // r6@15
  unsigned int *v11; // r7@22
  char v13; // [sp+4h] [bp-1Ch]@1
  int v14; // [sp+8h] [bp-18h]@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (RenderableComponent *)operator new(0x14u);
  RenderableComponent::RenderableComponent(v6, v4);
  *(_DWORD *)v6 = &off_26DFDC8;
  *((_DWORD *)v6 + 3) = 0;
  *((_DWORD *)v6 + 4) = 0;
  (*(void (__fastcall **)(char *))(**((_DWORD **)v5 + 3) + 12))(&v13);
  v7 = *(_QWORD *)&v13;
  *(_DWORD *)&v13 = 0;
  v14 = 0;
  *((_DWORD *)v6 + 3) = v7;
  v8 = *((_DWORD *)v6 + 4);
  *((_DWORD *)v6 + 4) = HIDWORD(v7);
  if ( v8 )
  {
    HIDWORD(v7) = v8 + 4;
    if ( &pthread_create )
    {
      __dmb();
      do
        LODWORD(v7) = __ldrex((unsigned int *)HIDWORD(v7));
      while ( __strex(v7 - 1, (unsigned int *)HIDWORD(v7)) );
    }
    else
      LODWORD(v7) = (*(_DWORD *)HIDWORD(v7))--;
    if ( (_DWORD)v7 == 1 )
      v9 = (unsigned int *)(v8 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 8))(v8);
      if ( &pthread_create )
      {
        __dmb();
        do
          LODWORD(v7) = __ldrex(v9);
        while ( __strex(v7 - 1, v9) );
      }
      else
        LODWORD(v7) = (*v9)--;
      if ( (_DWORD)v7 == 1 )
        LODWORD(v7) = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 12))(v8);
  }
  v10 = v14;
  if ( v14 )
    HIDWORD(v7) = v14 + 4;
      v11 = (unsigned int *)(v10 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 8))(v10);
          LODWORD(v7) = __ldrex(v11);
        while ( __strex(v7 - 1, v11) );
        LODWORD(v7) = (*v11)--;
        LODWORD(v7) = (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  *(_DWORD *)v3 = v6;
  return v7;
}


signed int __fastcall CustomRenderComponent::getInvalidCustomId(CustomRenderComponent *this)
{
  return -1;
}


unsigned int *__fastcall CustomRenderComponent::setRenderer(int a1, int a2)
{
  int v2; // r4@1
  unsigned int *result; // r0@1
  int v4; // r5@1
  int v5; // r6@1
  unsigned int v6; // r1@5
  unsigned int *v7; // r1@9
  unsigned int *v8; // r7@15

  v2 = a1;
  result = *(unsigned int **)a2;
  *(_DWORD *)(v2 + 12) = *(_DWORD *)a2;
  v4 = *(_DWORD *)(v2 + 16);
  v5 = *(_DWORD *)(a2 + 4);
  if ( v5 != v4 )
  {
    if ( v5 )
    {
      result = (unsigned int *)(v5 + 4);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(result);
        while ( __strex(v6 + 1, result) );
        v4 = *(_DWORD *)(v2 + 16);
      }
      else
        ++*result;
    }
    if ( v4 )
      v7 = (unsigned int *)(v4 + 4);
          result = (unsigned int *)__ldrex(v7);
        while ( __strex((unsigned int)result - 1, v7) );
        result = (unsigned int *)(*v7)--;
      if ( result == (unsigned int *)1 )
        v8 = (unsigned int *)(v4 + 8);
        (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
        if ( &pthread_create )
        {
          __dmb();
          do
            result = (unsigned int *)__ldrex(v8);
          while ( __strex((unsigned int)result - 1, v8) );
        }
        else
          result = (unsigned int *)(*v8)--;
        if ( result == (unsigned int *)1 )
          result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
    *(_DWORD *)(v2 + 16) = v5;
  }
  return result;
}


int __fastcall CustomRenderComponent::updateCustom(CustomRenderComponent *this, ClientInstance *a2)
{
  CustomRenderComponent *v2; // r5@1
  ClientInstance *v3; // r4@1
  int v4; // r0@2
  int v5; // r6@2
  int (__fastcall *v6)(int, ClientInstance *, int); // r7@2
  int v7; // r0@2
  int result; // r0@2

  v2 = this;
  v3 = a2;
  if ( *((_DWORD *)this + 3) )
  {
    v4 = RenderableComponent::getPropagatedAlpha(this);
    v5 = *((_DWORD *)v2 + 3);
    *(_DWORD *)(v5 + 4) = v4;
    v6 = *(int (__fastcall **)(int, ClientInstance *, int))(*(_DWORD *)v5 + 16);
    v7 = UIComponent::getOwner(v2);
    result = v6(v5, v3, v7);
  }
  else
    result = 1;
  return result;
}


int __fastcall CustomRenderComponent::~CustomRenderComponent(CustomRenderComponent *this)
{
  RenderableComponent *v1; // r4@1
  int v2; // r5@1
  unsigned int *v3; // r1@2
  unsigned int v4; // r0@4
  unsigned int *v5; // r6@8
  unsigned int v6; // r0@10

  v1 = this;
  *(_DWORD *)this = &off_26DFDC8;
  v2 = *((_DWORD *)this + 4);
  if ( v2 )
  {
    v3 = (unsigned int *)(v2 + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v4 = __ldrex(v3);
      while ( __strex(v4 - 1, v3) );
    }
    else
      v4 = (*v3)--;
    if ( v4 == 1 )
      v5 = (unsigned int *)(v2 + 8);
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 8))(v2);
      if ( &pthread_create )
      {
        __dmb();
        do
          v6 = __ldrex(v5);
        while ( __strex(v6 - 1, v5) );
      }
      else
        v6 = (*v5)--;
      if ( v6 == 1 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
  }
  return j_j_j__ZN19RenderableComponentD2Ev(v1);
}


int __fastcall CustomRenderComponent::getNumRenderPasses(CustomRenderComponent *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *((_DWORD *)this + 3);
  if ( v1 )
    result = (*(int (**)(void))(*(_DWORD *)v1 + 32))();
  else
    result = 1;
  return result;
}


int __fastcall CustomRenderComponent::getCustomId(CustomRenderComponent *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *((_DWORD *)this + 3);
  if ( v1 )
    result = (*(int (**)(void))(*(_DWORD *)v1 + 28))();
  else
    result = -1;
  return result;
}


int __fastcall CustomRenderComponent::getBatchType(CustomRenderComponent *this)
{
  int v1; // r0@1
  int result; // r0@2

  v1 = *((_DWORD *)this + 3);
  if ( v1 )
    result = (*(int (**)(void))(*(_DWORD *)v1 + 24))();
  else
    result = 0;
  return result;
}


int __fastcall CustomRenderComponent::getResourceLocation(int result, int a2, int a3)
{
  int v3; // r1@1

  v3 = *(_DWORD *)(a2 + 12);
  if ( v3 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 36))(result);
  else
    *(_QWORD *)result = (unsigned int)&unk_28898CC;
  return result;
}


void *__fastcall CustomRenderComponent::getMaterialName(CustomRenderComponent *this, int a2)
{
  int v2; // r0@1
  void *result; // r0@2

  v2 = *((_DWORD *)this + 3);
  if ( v2 )
    result = (void *)(*(int (**)(void))(*(_DWORD *)v2 + 40))();
  else
    result = &unk_257BC67;
  return result;
}


int __fastcall CustomRenderComponent::preRenderSetup(int a1)
{
  int result; // r0@1

  result = *(_DWORD *)(a1 + 12);
  if ( result )
    result = (*(int (**)(void))(*(_DWORD *)result + 8))();
  return result;
}
