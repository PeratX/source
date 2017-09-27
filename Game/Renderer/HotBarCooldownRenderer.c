

int __fastcall HotBarCooldownRenderer::_renderCooldownProgress(int a1, int a2, ClientInstance *this, int a4, int a5)
{
  int v5; // r6@1
  int v6; // r4@1
  int v7; // r8@1
  Player *v8; // r7@1
  int v9; // r5@1
  int v10; // r0@1
  int v11; // r0@1
  int v12; // r5@1
  int result; // r0@1
  int v15; // r5@6
  int (__fastcall *v21)(int, int, int, int); // r7@8
  int v23; // [sp+Ch] [bp-2Ch]@8
  signed int v24; // [sp+10h] [bp-28h]@8
  signed int v25; // [sp+14h] [bp-24h]@8
  signed int v26; // [sp+18h] [bp-20h]@8

  v5 = a1;
  v6 = a4;
  v7 = a2;
  v8 = (Player *)ClientInstance::getLocalPlayer(this);
  v9 = Player::getSupplies(v8);
  v10 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v5 + 60))(v5, v6);
  v11 = PlayerInventoryProxy::getItem(v9, v10, 0);
  v12 = v11;
  result = *(_BYTE *)(v11 + 15);
  _ZF = result == 0;
  if ( result )
  {
    result = *(_DWORD *)v12;
    _ZF = *(_DWORD *)v12 == 0;
  }
  if ( !_ZF )
    result = ItemInstance::isNull((ItemInstance *)v12);
    if ( !result )
    {
      result = *(_BYTE *)(v12 + 14);
      if ( *(_BYTE *)(v12 + 14) )
      {
        v15 = *(_DWORD *)v12;
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 224))(v15);
        if ( result != -1 )
        {
          result = (*(int (__fastcall **)(Player *))(*(_DWORD *)v8 + 1508))(v8);
          _R7 = result;
          if ( result >= 1 )
          {
            _R0 = (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 228))(v15);
            __asm
            {
              VMOV            S0, R7
              VMOV            S2, R0
              VCVT.F32.S32    S0, S0
              VCVT.F32.S32    S2, S2
            }
            v21 = *(int (__fastcall **)(int, int, int, int))(*(_DWORD *)v5 + 56);
            v23 = 1065353216;
            v24 = 1065353216;
            v25 = 1065353216;
            v26 = 1065353216;
              VDIV.F32        S0, S0, S2
              VMOV            R3, S0
            result = v21(v5, v7, v6, _R3);
          }
        }
      }
    }
  return result;
}


_QWORD *__fastcall HotBarCooldownRenderer::HotBarCooldownRenderer(HotBarWipeRenderer *a1)
{
  _QWORD *result; // r0@1

  result = HotBarWipeRenderer::HotBarWipeRenderer(a1);
  *(_DWORD *)result = &off_26E0178;
  return result;
}


void __fastcall HotBarCooldownRenderer::~HotBarCooldownRenderer(HotBarCooldownRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)HotBarWipeRenderer::~HotBarWipeRenderer(this);
  j_j_j__ZdlPv_4(v1);
}


int __fastcall HotBarCooldownRenderer::render(HotBarCooldownRenderer *this, MinecraftUIRenderContext *a2, ClientInstance *a3, UIControl *a4, int a5, RectangleArea *a6)
{
  HotBarCooldownRenderer *v6; // r6@1
  UIControl *v7; // r4@1
  ClientInstance *v8; // r5@1
  int v9; // r0@1

  v6 = this;
  v7 = a4;
  v8 = a3;
  v9 = MinecraftUIRenderContext::getScreenContext(a2);
  return HotBarCooldownRenderer::_renderCooldownProgress((int)v6, v9, v8, (int)v7, (int)a6);
}


int __fastcall HotBarCooldownRenderer::clone(HotBarCooldownRenderer *this)
{
  HotBarCooldownRenderer *v1; // r4@1
  int result; // r0@1
  int v3; // [sp+4h] [bp-14h]@1
  int v4; // [sp+8h] [bp-10h]@1

  v1 = this;
  j__ZNSt12__shared_ptrI22HotBarCooldownRendererLN9__gnu_cxx12_Lock_policyE2EEC2ISaIS0_EJEEESt19_Sp_make_shared_tagRKT_DpOT0_((int)&v3);
  *(_DWORD *)v1 = v3;
  result = v4;
  *((_DWORD *)v1 + 1) = v4;
  return result;
}


void __fastcall HotBarCooldownRenderer::~HotBarCooldownRenderer(HotBarCooldownRenderer *this)
{
  HotBarCooldownRenderer::~HotBarCooldownRenderer(this);
}
