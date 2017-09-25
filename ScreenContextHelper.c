

int __fastcall ScreenContextHelper::makeScreenContext(ScreenContextHelper *this, ClientInstance *a2, float a3)
{
  GameRenderer *v3; // r5@1
  int v4; // r4@1
  int v5; // r0@1

  v3 = this;
  v4 = LODWORD(a3);
  v5 = ClientInstance::getGameRenderer(a2);
  return GameRenderer::makeScreenContext(v3, *(float *)&v5, v4);
}


int __fastcall ScreenContextHelper::makeScreenContextAlphaOverride(UIScreenContext *a1, int a2, float a3)
{
  int v3; // ST04_4@1
  int v4; // ST08_4@1
  int v5; // ST0C_4@1
  int v6; // ST10_4@1
  int v7; // r7@1
  int v8; // r8@1
  int v9; // r9@1
  int v10; // r10@1
  int v11; // r4@1
  int v12; // r5@1
  int v13; // r6@1
  int v14; // r11@1
  int result; // r0@1
  int v16; // r1@1
  int v17; // r1@1

  v3 = *(_DWORD *)(a2 + 44);
  v4 = *(_DWORD *)(a2 + 48);
  v5 = *(_DWORD *)(a2 + 52);
  v6 = *(_DWORD *)(a2 + 56);
  v7 = *(_DWORD *)(a2 + 28);
  v8 = *(_DWORD *)(a2 + 32);
  v9 = *(_DWORD *)(a2 + 36);
  v10 = *(_DWORD *)(a2 + 40);
  v11 = *(_DWORD *)(a2 + 12);
  v12 = *(_DWORD *)(a2 + 16);
  v13 = *(_DWORD *)(a2 + 20);
  v14 = *(_DWORD *)(a2 + 24);
  result = UIScreenContext::UIScreenContext(a1, *(_QWORD *)a2, *(_QWORD *)a2 >> 32, a3);
  v16 = result + 12;
  *(_DWORD *)v16 = v11;
  *(_DWORD *)(v16 + 4) = v12;
  *(_DWORD *)(v16 + 8) = v13;
  *(_DWORD *)(v16 + 12) = v14;
  v17 = result + 28;
  *(_DWORD *)v17 = v7;
  *(_DWORD *)(v17 + 4) = v8;
  *(_DWORD *)(v17 + 8) = v9;
  *(_DWORD *)(v17 + 12) = v10;
  *(_DWORD *)(result + 44) = v3;
  *(_DWORD *)(result + 48) = v4;
  *(_DWORD *)(result + 52) = v5;
  *(_DWORD *)(result + 56) = v6;
  return result;
}
