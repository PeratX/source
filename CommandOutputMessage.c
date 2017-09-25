

int __fastcall CommandOutputMessage::CommandOutputMessage(int result, int a2)
{
  int v2; // r2@1
  int v3; // r2@1

  *(_DWORD *)result = *(_DWORD *)a2;
  *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = &unk_28898CC;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = 0;
  v2 = *(_DWORD *)(result + 12);
  *(_DWORD *)(result + 12) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = v2;
  v3 = *(_DWORD *)(result + 16);
  *(_DWORD *)(result + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a2 + 16) = v3;
  return result;
}


void __fastcall CommandOutputMessage::getUserMessage(CommandOutputMessage *this, int a2)
{
  I18n::get((int *)this, (int *)(a2 + 4), (unsigned __int64 *)(a2 + 8));
}


int __fastcall CommandOutputMessage::CommandOutputMessage(int a1, int a2, int *a3, int a4)
{
  int v4; // r5@1
  int v5; // r4@1
  int v6; // r0@1
  int v7; // r0@1

  v4 = a1;
  *(_DWORD *)a1 = a2;
  v5 = a4;
  sub_21E8AF4((int *)(a1 + 4), a3);
  *(_DWORD *)(v4 + 8) = 0;
  *(_DWORD *)(v4 + 12) = 0;
  *(_DWORD *)(v4 + 16) = 0;
  *(_DWORD *)(v4 + 8) = *(_DWORD *)v5;
  *(_DWORD *)v5 = 0;
  v6 = *(_DWORD *)(v4 + 12);
  *(_DWORD *)(v4 + 12) = *(_DWORD *)(v5 + 4);
  *(_DWORD *)(v5 + 4) = v6;
  v7 = *(_DWORD *)(v4 + 16);
  *(_DWORD *)(v4 + 16) = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = v7;
  return v4;
}


int __fastcall CommandOutputMessage::CommandOutputMessage(int a1, int a2)
{
  int v2; // r4@1
  unsigned __int64 *v3; // r6@1

  v2 = a1;
  v3 = (unsigned __int64 *)(a2 + 8);
  *(_DWORD *)a1 = *(_DWORD *)a2;
  sub_21E8AF4((int *)(a1 + 4), (int *)(a2 + 4));
  std::vector<std::string,std::allocator<std::string>>::vector(v2 + 8, v3);
  return v2;
}


int __fastcall CommandOutputMessage::getType(CommandOutputMessage *this)
{
  return *(_DWORD *)this;
}


char *__fastcall CommandOutputMessage::getParams(CommandOutputMessage *this)
{
  return (char *)this + 8;
}


char *__fastcall CommandOutputMessage::getMessageId(CommandOutputMessage *this)
{
  return (char *)this + 4;
}


void __fastcall CommandOutputMessage::getUserMessage(CommandOutputMessage *this, int a2)
{
  CommandOutputMessage::getUserMessage(this, a2);
}
