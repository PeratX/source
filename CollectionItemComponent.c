

void __fastcall CollectionItemComponent::~CollectionItemComponent(CollectionItemComponent *this)
{
  void *v1; // r0@1

  v1 = (void *)UIComponent::~UIComponent(this);
  j_j_j__ZdlPv_4(v1);
}


int __fastcall CollectionItemComponent::clone(CollectionItemComponent *this, UIControl *a2, UIControl *a3)
{
  CollectionItemComponent *v3; // r4@1
  UIControl *v4; // r7@1
  UIControl *v5; // r5@1
  UIComponent *v6; // r6@1
  int result; // r0@1

  v3 = this;
  v4 = a3;
  v5 = a2;
  v6 = (UIComponent *)operator new(0xCu);
  UIComponent::UIComponent(v6, v4);
  *(_DWORD *)v6 = &off_26DFD84;
  result = *((_DWORD *)v5 + 2);
  *((_DWORD *)v6 + 2) = result;
  *(_DWORD *)v3 = v6;
  return result;
}


void __fastcall CollectionItemComponent::~CollectionItemComponent(CollectionItemComponent *this)
{
  CollectionItemComponent::~CollectionItemComponent(this);
}


int __fastcall CollectionItemComponent::CollectionItemComponent(UIComponent *a1, UIControl *a2)
{
  int result; // r0@1

  result = UIComponent::UIComponent(a1, a2);
  *(_DWORD *)result = &off_26DFD84;
  *(_DWORD *)(result + 8) = -1;
  return result;
}


int __fastcall CollectionItemComponent::setCollectionIndex(int result, int a2)
{
  *(_DWORD *)(result + 8) = a2;
  return result;
}
