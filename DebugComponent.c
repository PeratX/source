

void __fastcall DebugComponent::~DebugComponent(DebugComponent *this)
{
  DebugComponent::~DebugComponent(this);
}


int __fastcall DebugComponent::DebugComponent(UIComponent *a1, UIControl *a2)
{
  int result; // r0@1

  result = UIComponent::UIComponent(a1, a2);
  *(_DWORD *)result = &off_26DFE30;
  *(_DWORD *)(result + 8) = &unk_28898CC;
  return result;
}


char *__fastcall DebugComponent::getDescription(DebugComponent *this)
{
  return (char *)this + 8;
}


UIComponent *__fastcall DebugComponent::~DebugComponent(DebugComponent *this)
{
  UIComponent *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v5; // r12@3
  signed int v6; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26DFE30;
  v2 = *((_DWORD *)this + 2);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v5 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v6 = __ldrex(v5);
      while ( __strex(v6 - 1, v5) );
    }
    else
      v6 = (*v5)--;
    if ( v6 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  UIComponent::~UIComponent(v1);
  return v1;
}


void __fastcall DebugComponent::~DebugComponent(DebugComponent *this)
{
  UIComponent *v1; // r4@1
  int v2; // r1@1
  void *v3; // r0@1
  unsigned int *v4; // r12@3
  signed int v5; // r1@5

  v1 = this;
  *(_DWORD *)this = &off_26DFE30;
  v2 = *((_DWORD *)this + 2);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_28898C0 )
  {
    v4 = (unsigned int *)(v2 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v5 = __ldrex(v4);
      while ( __strex(v5 - 1, v4) );
    }
    else
      v5 = (*v4)--;
    if ( v5 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v3);
  }
  UIComponent::~UIComponent(v1);
  operator delete((void *)v1);
}


int *__fastcall DebugComponent::clone(DebugComponent *this, UIControl *a2, UIControl *a3)
{
  DebugComponent *v3; // r5@1
  UIControl *v4; // r7@1
  UIControl *v5; // r6@1
  void *v6; // r4@1
  int *result; // r0@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = operator new(0xCu);
  UIComponent::UIComponent((UIComponent *)v6, v4);
  *(_DWORD *)v6 = &off_26DFE30;
  *((_DWORD *)v6 + 2) = &unk_28898CC;
  result = EntityInteraction::setInteractText((int *)v6 + 2, (int *)v5 + 2);
  *(_DWORD *)v3 = v6;
  return result;
}
