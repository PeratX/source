

int __fastcall HotBarWipeRenderer::drawRectangle(int a1, int a2, UIControl *this, int a4, int a5, RectangleArea *a6)
{
  UIControl *v6; // r6@1
  int v8; // r4@1
  void *v16; // r0@1
  int v25; // ST00_4@1
  int v27; // [sp+4h] [bp-54h]@0
  char v28; // [sp+10h] [bp-48h]@1
  char v29; // [sp+20h] [bp-38h]@1

  v6 = this;
  _R5 = a4;
  v8 = a2;
  _R0 = UIControl::getPosition(this);
  __asm { VLDR            S16, [R0] }
  _R0 = UIControl::getPosition(v6);
  __asm
  {
    VMOV.F32        S0, #-2.0
    VLDR            S2, [R0,#4]
    VADD.F32        S18, S2, S0
  }
  _R0 = UIControl::getSize(v6);
    VMOV.F32        S2, #2.0
    VLDR            S4, [R0,#4]
    VMOV.F32        S0, #17.0
    VADD.F32        S18, S18, S4
    VMOV            S4, R5
    VADD.F32        S16, S16, S2
    VMUL.F32        S20, S4, S0
  v16 = ScreenRenderer::singleton((ScreenRenderer *)_R0);
    VCVTR.S32.F32   S0, S18
    VCVTR.S32.F32   S16, S16
    VCVTR.S32.F32   S2, S20
    VMOV            R2, S16
    VMOV            R1, S2
  _R6 = _R2 + 16;
    VCVTR.S32.F32   S18, S18
    VSTR            S0, [SP,#0x58+var_54]
    VMOV            R3, S18
  _R5 = _R3 - _R1;
  ScreenRenderer::fill(*(float *)&v16, *(float *)&v8, _R2, _R3 - _R1, _R2 + 16, v27, (const Color *)a5);
    VMOV            S2, R6
    VCVT.F32.S32    S0, S16
    VCVT.F32.S32    S2, S2
    VCVT.F32.S32    S4, S4
    VMOV            R1, S0
    VMOV            R3, S2
    VMOV            R2, S4
    VCVT.F32.S32    S0, S18
    VSTR            S0, [SP,#0x58+var_58]
  RectangleArea::RectangleArea(COERCE_FLOAT(&v29), _R1, _R2, _R3, v25);
  RectangleArea::unionRects((RectangleArea *)&v28, a6, (int)&v29);
  return RectangleArea::operator=((int)a6, (int)&v28);
}


int __fastcall HotBarWipeRenderer::getHotBarIndex(HotBarWipeRenderer *this, UIControl *a2)
{
  __int64 v2; // kr00_8@1
  char v3; // r0@1
  int v4; // r6@4
  GridItemComponent *v5; // r0@5
  int v6; // r5@7
  unsigned int *v7; // r1@8
  unsigned int v8; // r0@10
  unsigned int *v9; // r6@14
  unsigned int v10; // r0@16
  int v12; // [sp+0h] [bp-18h]@1
  int v13; // [sp+4h] [bp-14h]@1

  UIControl::getParent((UIControl *)&v12, (int)a2);
  v2 = *(_QWORD *)&v12;
  v12 = 0;
  v13 = 0;
  v3 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id[0];
  __dmb();
  if ( !(v3 & 1)
    && j___cxa_guard_acquire(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id) )
  {
    type_id<UIComponent,GridItemComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(`guard variable for'typeid_t<UIComponent> type_id<UIComponent,GridItemComponent>(void)::id);
  }
  v4 = type_id<UIComponent,GridItemComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v2, type_id<UIComponent,GridItemComponent>(void)::id[0]) == 1 )
    v5 = *(GridItemComponent **)(*(_DWORD *)(v2 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v2, v4));
  else
    v5 = 0;
  v6 = GridItemComponent::getCollectionIndex(v5);
  if ( HIDWORD(v2) )
    v7 = (unsigned int *)(HIDWORD(v2) + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 - 1, v7) );
    }
    else
      v8 = (*v7)--;
    if ( v8 == 1 )
      v9 = (unsigned int *)(HIDWORD(v2) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 8))(HIDWORD(v2));
      if ( &pthread_create )
      {
        __dmb();
        do
          v10 = __ldrex(v9);
        while ( __strex(v10 - 1, v9) );
      }
      else
        v10 = (*v9)--;
      if ( v10 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  return v6;
}


_QWORD *__fastcall HotBarWipeRenderer::HotBarWipeRenderer(MinecraftUICustomRenderer *a1)
{
  _QWORD *result; // r0@1

  result = MinecraftUICustomRenderer::MinecraftUICustomRenderer(a1);
  *(_DWORD *)result = &off_26E0208;
  return result;
}


signed int __fastcall HotBarWipeRenderer::getHotBarContainerID(HotBarWipeRenderer *this, UIControl *a2)
{
  __int64 v2; // kr00_8@1
  Json::Value *v3; // r5@1
  signed int v4; // r5@2
  Json::Value *v5; // r5@4
  unsigned int *v6; // r1@11
  unsigned int v7; // r0@13
  unsigned int *v8; // r6@17
  unsigned int v9; // r0@19
  int v11; // [sp+0h] [bp-18h]@1
  int v12; // [sp+4h] [bp-14h]@1

  UIControl::getParent((UIControl *)&v11, (int)a2);
  v2 = *(_QWORD *)&v11;
  v11 = 0;
  v12 = 0;
  v3 = (Json::Value *)(UIControl::getPropertyBag((UIControl *)v2) + 8);
  if ( Json::Value::isNull(v3) )
  {
    v4 = 0;
  }
  else if ( Json::Value::isObject(v3) == 1 )
    v5 = (Json::Value *)Json::Value::operator[]((int)v3, "is_fixed_inventory");
    if ( Json::Value::isBool(v5) == 1 )
      v4 = Json::Value::asBool(v5, 0);
    else
      v4 = 0;
  else
  if ( v4 )
    v4 = 123;
  if ( HIDWORD(v2) )
    v6 = (unsigned int *)(HIDWORD(v2) + 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v7 = __ldrex(v6);
      while ( __strex(v7 - 1, v6) );
    }
      v7 = (*v6)--;
    if ( v7 == 1 )
      v8 = (unsigned int *)(HIDWORD(v2) + 8);
      (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 8))(HIDWORD(v2));
      if ( &pthread_create )
      {
        __dmb();
        do
          v9 = __ldrex(v8);
        while ( __strex(v9 - 1, v8) );
      }
      else
        v9 = (*v8)--;
      if ( v9 == 1 )
        (*(void (__fastcall **)(_DWORD))(*(_DWORD *)HIDWORD(v2) + 12))(HIDWORD(v2));
  return v4;
}


void __fastcall HotBarWipeRenderer::~HotBarWipeRenderer(HotBarWipeRenderer *this)
{
  HotBarWipeRenderer::~HotBarWipeRenderer(this);
}


void __fastcall HotBarWipeRenderer::~HotBarWipeRenderer(HotBarWipeRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)MinecraftUICustomRenderer::~MinecraftUICustomRenderer(this);
  j_j_j__ZdlPv_4(v1);
}
