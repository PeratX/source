

void __fastcall EmptyRenderer::~EmptyRenderer(EmptyRenderer *this)
{
  EmptyRenderer::~EmptyRenderer(this);
}


void __fastcall EmptyRenderer::~EmptyRenderer(EmptyRenderer *this)
{
  BaseEntityRenderer *v1; // r0@1

  v1 = EntityRenderer::~EntityRenderer(this);
  j_j_j__ZdlPv_5((void *)v1);
}


BaseEntityRenderer *__fastcall EmptyRenderer::EmptyRenderer(BaseEntityRenderer *a1, mce::TextureGroup *a2)
{
  BaseEntityRenderer *result; // r0@1

  result = EntityRenderer::EntityRenderer(a1, a2, 0);
  *(_DWORD *)result = &off_26E6B50;
  return result;
}
