

char *__fastcall TitleMessage::getSubtitle(TitleMessage *this)
{
  return (char *)this + 4;
}


int __fastcall TitleMessage::setTitleAnimationTimes(int result, int a2, int a3, int a4)
{
  if ( a2 >= 0 )
    *(_DWORD *)(result + 8) = a2;
  if ( a3 >= 0 )
    *(_DWORD *)(result + 12) = a3;
  if ( a4 >= 0 )
    *(_DWORD *)(result + 16) = a4;
  return result;
}


int __fastcall TitleMessage::TitleMessage(int a1)
{
  int v1; // r4@1
  void **v2; // r6@1
  void **v3; // r7@1
  int v4; // r3@1

  v1 = a1;
  *(_DWORD *)a1 = &unk_28898CC;
  *(_DWORD *)(a1 + 4) = &unk_28898CC;
  v2 = (void **)(a1 + 4);
  *(_DWORD *)(a1 + 20) = &unk_28898CC;
  v3 = (void **)(a1 + 20);
  sub_DA78A4((void **)a1, (char *)&unk_257BC67, 0);
  sub_DA78A4(v2, (char *)&unk_257BC67, 0);
  sub_DA78A4(v3, (char *)&unk_257BC67, 0);
  v4 = v1 + 8;
  *(_DWORD *)v4 = 10;
  *(_DWORD *)(v4 + 4) = 70;
  *(_DWORD *)(v4 + 8) = 20;
  return v1;
}


char *__fastcall TitleMessage::getActionBarMessage(TitleMessage *this)
{
  return (char *)this + 20;
}


signed int __fastcall TitleMessage::resetTitle(TitleMessage *this)
{
  TitleMessage *v1; // r4@1
  signed int result; // r0@1
  int v3; // r3@1

  v1 = this;
  sub_DA78A4((void **)this, (char *)&unk_257BC67, 0);
  sub_DA78A4((void **)v1 + 1, (char *)&unk_257BC67, 0);
  sub_DA78A4((void **)v1 + 5, (char *)&unk_257BC67, 0);
  result = 10;
  v3 = (int)v1 + 8;
  *(_DWORD *)v3 = 10;
  *(_DWORD *)(v3 + 4) = 70;
  *(_DWORD *)(v3 + 8) = 20;
  return result;
}


const void **__fastcall TitleMessage::clearTitleMessages(TitleMessage *this)
{
  TitleMessage *v1; // r4@1

  v1 = this;
  sub_DA78A4((void **)this, (char *)&unk_257BC67, 0);
  return sub_DA8660((void **)v1 + 1, (char *)&unk_257BC67, 0);
}
