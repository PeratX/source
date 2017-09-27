

int __fastcall BaseEntityRenderContext::setCameraPosition(int result, const Vec3 *a2)
{
  *(_DWORD *)(result + 56) = *(_DWORD *)a2;
  *(_DWORD *)(result + 60) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 64) = *((_DWORD *)a2 + 2);
  return result;
}


int __fastcall BaseEntityRenderContext::isFancy(BaseEntityRenderContext *this)
{
  Options *v1; // r0@1

  v1 = (Options *)ClientInstance::getOptions(*((ClientInstance **)this + 3));
  return j_j_j__ZNK7Options16getFancyGraphicsEv(v1);
}


char *__fastcall BaseEntityRenderContext::getCameraPosition(BaseEntityRenderContext *this)
{
  return (char *)this + 56;
}


int __fastcall BaseEntityRenderContext::overrideScreenContext(int a1, int a2, int a3)
{
  return BaseEntityRenderContext::BaseEntityRenderContext(
           a1,
           a3,
           (ClientInstance *)*(_QWORD *)(a2 + 12),
           *(_QWORD *)(a2 + 12) >> 32);
}


char *__fastcall BaseEntityRenderContext::getCameraTargetPosition(BaseEntityRenderContext *this)
{
  return (char *)this + 44;
}


int __fastcall BaseEntityRenderContext::setCameraTargetPosition(int result, const Vec3 *a2)
{
  *(_DWORD *)(result + 44) = *(_DWORD *)a2;
  *(_DWORD *)(result + 48) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 52) = *((_DWORD *)a2 + 2);
  return result;
}


char *__fastcall BaseEntityRenderContext::getHitResult(BaseEntityRenderContext *this)
{
  Entity *v1; // r0@1
  Level *v2; // r0@1

  v1 = (Entity *)ClientInstance::getLocalPlayer(*((ClientInstance **)this + 3));
  v2 = (Level *)Entity::getLevel(v1);
  return Level::getHitResult(v2);
}


int __fastcall BaseEntityRenderContext::getWorldMatrix(BaseEntityRenderContext *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 5) + 16) + 16;
}


int __fastcall BaseEntityRenderContext::BaseEntityRenderContext(int a1, int a2, ClientInstance *a3, int a4)
{
  int v4; // r4@1
  ClientInstance *v5; // r7@1
  int v6; // lr@1
  int v7; // r2@1
  int v8; // r3@1
  int v9; // r1@1
  int v10; // r0@1
  int v11; // r2@1
  int v12; // r5@1
  int v13; // r0@1
  int v14; // r2@1
  int v15; // r5@1
  int v16; // r6@1
  LevelRenderer *v17; // r0@1
  LevelRenderer *v18; // r5@1
  char *v19; // r0@2
  char *v20; // r0@2
  char *v21; // r0@2
  char *v22; // r0@2

  v4 = a1;
  v5 = a3;
  *(_DWORD *)a1 = &off_26DCC40;
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 12) = a3;
  *(_DWORD *)(a1 + 16) = a4;
  *(_DWORD *)(a1 + 20) = a2;
  *(_DWORD *)(a1 + 24) = ClientInstance::getBlockEntityRenderDispatcher(a3);
  *(_DWORD *)(v4 + 28) = ClientInstance::getEntityRenderDispatcher(v5);
  *(_DWORD *)(v4 + 32) = ClientInstance::getEntityBlockRenderer(v5);
  *(_DWORD *)(v4 + 36) = ClientInstance::getItemInHandRenderer(v5);
  v6 = v4 + 44;
  *(_DWORD *)(v4 + 40) = ClientInstance::getItemRenderer(v5);
  v7 = *(&Vec3::ZERO + 1);
  v8 = dword_2822498;
  *(_DWORD *)v6 = Vec3::ZERO;
  *(_DWORD *)(v6 + 4) = v7;
  *(_DWORD *)(v6 + 8) = v8;
  v9 = dword_2822498;
  *(_QWORD *)(v4 + 56) = *(_QWORD *)&Vec3::ZERO;
  v10 = v4 + 68;
  *(_DWORD *)(v4 + 64) = v9;
  v11 = *(&AABB::EMPTY + 1);
  v12 = unk_2822118;
  *(_DWORD *)v10 = AABB::EMPTY;
  *(_DWORD *)(v10 + 4) = v11;
  *(_DWORD *)(v10 + 8) = v12;
  v13 = v4 + 80;
  v14 = unk_2822120;
  v15 = unk_2822124;
  v16 = unk_2822128;
  *(_DWORD *)v13 = unk_282211C;
  *(_DWORD *)(v13 + 4) = v14;
  *(_DWORD *)(v13 + 8) = v15;
  *(_DWORD *)(v13 + 12) = v16;
  *(_BYTE *)(v4 + 96) = 0;
  v17 = (LevelRenderer *)ClientInstance::getLevelRenderer(v5);
  v18 = v17;
  if ( v17 )
  {
    v19 = LevelRenderer::getLevelRendererPlayer(v17);
    v20 = LevelRendererCamera::getCameraPos((LevelRendererCamera *)v19);
    *(_DWORD *)(v4 + 56) = *(_DWORD *)v20;
    *(_DWORD *)(v4 + 60) = *((_DWORD *)v20 + 1);
    *(_DWORD *)(v4 + 64) = *((_DWORD *)v20 + 2);
    v21 = LevelRenderer::getLevelRendererPlayer(v18);
    v22 = LevelRendererCamera::getCameraTargetPos((LevelRendererCamera *)v21);
    *(_DWORD *)(v4 + 44) = *(_DWORD *)v22;
    *(_DWORD *)(v4 + 48) = *((_DWORD *)v22 + 1);
    *(_DWORD *)(v4 + 52) = *((_DWORD *)v22 + 2);
  }
  return v4;
}


char *__fastcall BaseEntityRenderContext::getWorldClipRegion(BaseEntityRenderContext *this)
{
  return (char *)this + 68;
}


int __fastcall BaseEntityRenderContext::setWorldClipRegion(int result, const AABB *a2)
{
  *(_DWORD *)(result + 68) = *(_DWORD *)a2;
  *(_DWORD *)(result + 72) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(result + 76) = *((_DWORD *)a2 + 2);
  *(_DWORD *)(result + 80) = *((_DWORD *)a2 + 3);
  *(_DWORD *)(result + 84) = *((_DWORD *)a2 + 4);
  *(_DWORD *)(result + 88) = *((_DWORD *)a2 + 5);
  *(_BYTE *)(result + 92) = *((_BYTE *)a2 + 24);
  return result;
}


float __fastcall BaseEntityRenderContext::getCameraRotation(BaseEntityRenderContext *this, float a2, float a3)
{
  float v3; // r5@1
  BaseEntityRenderContext *v4; // r6@1
  float v5; // r4@1
  const Options *v6; // r7@1
  const Entity *v7; // r0@1

  v3 = a2;
  v4 = this;
  v5 = a3;
  v6 = (const Options *)ClientInstance::getOptions(*(ClientInstance **)(LODWORD(a2) + 12));
  v7 = (const Entity *)ClientInstance::getCameraEntity(*(ClientInstance **)(LODWORD(v3) + 12));
  return BaseEntityRenderContextHelper::getEntityDispatcherRotation(v4, v6, v7, v5);
}


int __fastcall BaseEntityRenderContext::getProjectionMatrix(BaseEntityRenderContext *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 5) + 16) + 32;
}


int __fastcall BaseEntityRenderContext::setIgnoreLighting(int result, bool a2)
{
  *(_BYTE *)(result + 96) = a2;
  return result;
}
