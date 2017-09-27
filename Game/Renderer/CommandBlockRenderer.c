

_DWORD *__fastcall CommandBlockRenderer::CommandBlockRenderer(BaseEntityRenderer *a1)
{
  _DWORD *result; // r0@1

  result = BaseEntityRenderer::BaseEntityRenderer(a1);
  *result = &off_26DAFB0;
  return result;
}


void __fastcall CommandBlockRenderer::~CommandBlockRenderer(CommandBlockRenderer *this)
{
  void *v1; // r0@1

  v1 = (void *)BlockEntityRenderer::~BlockEntityRenderer(this);
  j_j_j__ZdlPv_4(v1);
}


void __fastcall CommandBlockRenderer::~CommandBlockRenderer(CommandBlockRenderer *this)
{
  CommandBlockRenderer::~CommandBlockRenderer(this);
}
