

int __fastcall UICustomRenderer::getCustomId(UICustomRenderer *this)
{
  return 0;
}


signed int __fastcall UICustomRenderer::getNumRenderPasses(UICustomRenderer *this)
{
  return 1;
}


int __fastcall UICustomRenderer::getBatchType(UICustomRenderer *this)
{
  return 0;
}


int __fastcall UICustomRenderer::getRequiresPreRenderSetup(UICustomRenderer *this, int a2)
{
  return 0;
}


void *__fastcall UICustomRenderer::getMaterialName(UICustomRenderer *this, int a2)
{
  return &unk_257BC67;
}


int __fastcall UICustomRenderer::getResourceLocation(int result, int a2, int a3)
{
  *(_QWORD *)result = (unsigned int)&unk_28898CC;
  return result;
}


_QWORD *__fastcall UICustomRenderer::UICustomRenderer(_QWORD *result)
{
  __int64 v1; // r1@1

  HIDWORD(v1) = 1065353216;
  LODWORD(v1) = &off_26D6D1C;
  *result = v1;
  return result;
}


signed int __fastcall UICustomRenderer::update(UICustomRenderer *this, ClientInstance *a2, UIControl *a3)
{
  return 1;
}
