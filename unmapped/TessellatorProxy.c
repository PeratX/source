

_DWORD *__fastcall TessellatorProxy::TessellatorProxy(_DWORD *result, int a2)
{
  *result = a2;
  return result;
}


int __fastcall TessellatorProxy::getVertexFormat(TessellatorProxy *this)
{
  return *(_DWORD *)this + 52;
}


int __fastcall TessellatorProxy::getPrimitiveMode(TessellatorProxy *this)
{
  return *(_DWORD *)this + 267;
}


int __fastcall TessellatorProxy::getVertexArrayRef(TessellatorProxy *this)
{
  return *(_DWORD *)this + 28;
}
