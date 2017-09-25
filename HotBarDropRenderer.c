

void __fastcall HotBarDropRenderer::~HotBarDropRenderer(HotBarDropRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)HotBarWipeRenderer::~HotBarWipeRenderer(this);
  j_j_j__ZdlPv_4(v1);
}


int __fastcall HotBarDropRenderer::clone(HotBarDropRenderer *this)
{
  HotBarDropRenderer *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v1 = this;
  j__ZNSt12__shared_ptrI18HotBarDropRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v3);
  *(_DWORD *)v1 = v3;
  result = v4;
  *((_DWORD *)v1 + 1) = v4;
  return result;
}


int __fastcall HotBarDropRenderer::_renderDropProgress(int a1, int a2, ClientInstance *this, int a4, int a5)
{
  ClientInstance *v5; // r5@1
  int v6; // r6@1
  UIControl *v7; // r4@1
  int v8; // r8@1
  GuiData *v9; // r7@1
  Player *v10; // r0@1
  int v11; // r5@1
  int result; // r0@1
  int v13; // r0@2
  int v14; // r5@2
  Json::Value *v16; // r5@7
  Json::Value *v17; // r5@10
  int (__fastcall *v21)(int, int, UIControl *, int); // r5@17
  int v25; // [sp+Ch] [bp-34h]@17
  signed int v26; // [sp+10h] [bp-30h]@17
  int v27; // [sp+14h] [bp-2Ch]@17
  int v28; // [sp+18h] [bp-28h]@17
  char v29; // [sp+1Ch] [bp-24h]@1
  int v30; // [sp+20h] [bp-20h]@1

  v5 = this;
  v6 = a1;
  v7 = (UIControl *)a4;
  v8 = a2;
  v9 = (GuiData *)ClientInstance::getGuiData(this);
  v10 = (Player *)ClientInstance::getLocalPlayer(v5);
  v11 = Player::getSupplies(v10);
  result = GuiData::getCurrentDropSlot((GuiData *)&v29, (int)v9);
  if ( v30 >= 0 )
  {
    v13 = PlayerInventoryProxy::getItem(v11, v30, v29);
    v14 = v13;
    result = *(_BYTE *)(v13 + 15);
    _ZF = result == 0;
    if ( result )
    {
      result = *(_DWORD *)v14;
      _ZF = *(_DWORD *)v14 == 0;
    }
    if ( !_ZF )
      result = ItemInstance::isNull((ItemInstance *)v14);
      if ( !result )
      {
        result = *(_BYTE *)(v14 + 14);
        if ( *(_BYTE *)(v14 + 14) )
        {
          v16 = (Json::Value *)(UIControl::getPropertyBag(v7) + 8);
          if ( Json::Value::isNull(v16) )
          {
            result = -1;
          }
          else if ( Json::Value::isObject(v16) == 1 )
            v17 = (Json::Value *)Json::Value::operator[]((int)v16, "#collection_index");
            if ( Json::Value::isInt(v17) || Json::Value::isUInt(v17) == 1 )
              result = Json::Value::asInt(v17, 0);
            else
              result = -1;
          else
          if ( result == v30 )
            result = GuiData::getCurrentDropTicks(v9);
            __asm
            {
              VMOV            S0, R0
              VCMPE.F32       S0, #0.0
              VMRS            APSR_nzcv, FPSCR
            }
            if ( !((unsigned __int8)(_NF ^ _VF) | _ZF) )
              v21 = *(int (__fastcall **)(int, int, UIControl *, int))(*(_DWORD *)v6 + 56);
              _R0 = GuiData::getCurrentDropTicks(v9);
              __asm { VMOV            S2, R0 }
              v25 = 0;
              _R1 = &GuiData::DropTicks;
              __asm { VLDR            S0, [R1] }
              v26 = 1065353216;
              v27 = 0;
              __asm { VDIV.F32        S0, S2, S0 }
              v28 = 1056997505;
              __asm { VMOV            R3, S0 }
              result = v21(v6, v8, v7, _R3);
        }
      }
  }
  return result;
}


_QWORD *__fastcall HotBarDropRenderer::HotBarDropRenderer(HotBarWipeRenderer *a1)
{
  _QWORD *result; // r0@1

  result = HotBarWipeRenderer::HotBarWipeRenderer(a1);
  *(_DWORD *)result = &off_26E01C0;
  return result;
}


void __fastcall HotBarDropRenderer::~HotBarDropRenderer(HotBarDropRenderer *this)
{
  HotBarDropRenderer::~HotBarDropRenderer(this);
}


int __fastcall HotBarDropRenderer::render(HotBarDropRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  UIControl *v6; // r10@1
  HotBarDropRenderer *v7; // r6@1
  ClientInstance *v8; // r8@1
  MinecraftUIRenderContext *v9; // r9@1
  int v10; // r5@1
  char v11; // r0@1
  int v12; // r7@4
  SpriteComponent *v13; // r5@5
  signed int v14; // r0@7
  const void **v15; // r0@7
  int v16; // r2@7
  void *v17; // r0@7
  void *v18; // r0@8
  int v19; // r0@9
  unsigned int *v21; // r2@10
  signed int v22; // r1@12
  unsigned int *v23; // r2@14
  signed int v24; // r1@16
  int v25; // [sp+8h] [bp-30h]@7
  int v26; // [sp+Ch] [bp-2Ch]@7
  int v27; // [sp+10h] [bp-28h]@7

  v6 = a4;
  v7 = this;
  v8 = a3;
  v9 = a2;
  v10 = *(_DWORD *)(*((_DWORD *)UIControl::getChildren(a4) + 1) - 8);
  v11 = `guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id;
  __dmb();
  if ( !(v11 & 1)
    && j___cxa_guard_acquire(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id) )
  {
    type_id<UIComponent,SpriteComponent>(void)::id[0] = typeid_t<UIComponent>::count[0]++;
    j___cxa_guard_release(&`guard variable for'typeid_t<UIComponent> type_id<UIComponent,SpriteComponent>(void)::id);
  }
  v12 = type_id<UIComponent,SpriteComponent>(void)::id[0];
  if ( UIControl::_hasComponent((UIControl *)v10, type_id<UIComponent,SpriteComponent>(void)::id[0]) == 1 )
    v13 = *(SpriteComponent **)(*(_DWORD *)(v10 + 108) + 4 * UIControl::_getComponentIndex((UIControl *)v10, v12));
  else
    v13 = 0;
  v14 = (*(int (__fastcall **)(HotBarDropRenderer *, UIControl *))(*(_DWORD *)v7 + 60))(v7, v6);
  Util::toString<int,(void *)0,(void *)0>((void **)&v25, v14);
  v15 = sub_119C984((const void **)&v25, 0, (unsigned int)"textures/ui/hotbar_", (_BYTE *)0x13);
  v16 = (int)*v15;
  *v15 = &unk_28898CC;
  v26 = v16;
  v27 = 0;
  SpriteComponent::setResourceLocation(v13, (const ResourceLocation *)&v26);
  v17 = (void *)(v26 - 12);
  if ( (int *)(v26 - 12) != &dword_28898C0 )
    v21 = (unsigned int *)(v26 - 4);
    if ( &pthread_create )
    {
      __dmb();
      do
        v22 = __ldrex(v21);
      while ( __strex(v22 - 1, v21) );
    }
    else
      v22 = (*v21)--;
    if ( v22 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v17);
  v18 = (void *)(v25 - 12);
  if ( (int *)(v25 - 12) != &dword_28898C0 )
    v23 = (unsigned int *)(v25 - 4);
        v24 = __ldrex(v23);
      while ( __strex(v24 - 1, v23) );
      v24 = (*v23)--;
    if ( v24 <= 0 )
      j_j_j_j_j__ZdlPv_9_1(v18);
  v19 = MinecraftUIRenderContext::getScreenContext(v9);
  return HotBarDropRenderer::_renderDropProgress((int)v7, v19, v8, (int)v6, (int)a6);
}
