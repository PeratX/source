

char *__fastcall Palette::getColor(int a1)
{
  int v1; // r6@1
  char v2; // r0@1

  v1 = a1;
  v2 = byte_27F3B40;
  __dmb();
  if ( !(v2 & 1) && j___cxa_guard_acquire((unsigned int *)&byte_27F3B40) )
  {
    unk_27F3A40 = Palette::WHITE;
    unk_27F3A44 = unk_27F3B4C;
    unk_27F3A48 = unk_27F3B50;
    unk_27F3A4C = unk_27F3B54;
    dword_27F3A5C = dword_27F3B64;
    unk_27F3A50 = Palette::ORANGE;
    unk_27F3A54 = dword_27F3B5C;
    unk_27F3A58 = dword_27F3B60;
    dword_27F3A6C = dword_27F3B74;
    unk_27F3A60 = Palette::MAGENTA;
    unk_27F3A64 = dword_27F3B6C;
    unk_27F3A68 = unk_27F3B70;
    dword_27F3A7C = dword_27F3B84;
    unk_27F3A70 = Palette::LIGHT_BLUE;
    unk_27F3A74 = dword_27F3B7C;
    unk_27F3A78 = unk_27F3B80;
    dword_27F3A8C = dword_27F3B94;
    unk_27F3A80 = Palette::YELLOW;
    unk_27F3A84 = dword_27F3B8C;
    unk_27F3A88 = unk_27F3B90;
    dword_27F3A9C = dword_27F3BA4;
    unk_27F3A90 = Palette::LIGHT_GREEN;
    unk_27F3A94 = unk_27F3B9C;
    unk_27F3A98 = unk_27F3BA0;
    dword_27F3AAC = dword_27F3BB4;
    unk_27F3AA0 = Palette::PINK;
    unk_27F3AA4 = unk_27F3BAC;
    unk_27F3AA8 = unk_27F3BB0;
    dword_27F3ABC = dword_27F3BC4;
    unk_27F3AB0 = Palette::GRAY;
    unk_27F3AB4 = dword_27F3BBC;
    unk_27F3AB8 = unk_27F3BC0;
    dword_27F3ACC = dword_27F3BD4;
    unk_27F3AC0 = Palette::SILVER;
    unk_27F3AC4 = unk_27F3BCC;
    unk_27F3AC8 = unk_27F3BD0;
    dword_27F3ADC = dword_27F3BE4;
    unk_27F3AD0 = Palette::CYAN;
    unk_27F3AD4 = unk_27F3BDC;
    unk_27F3AD8 = unk_27F3BE0;
    dword_27F3AEC = dword_27F3BF4;
    unk_27F3AE0 = Palette::PURPLE;
    unk_27F3AE4 = dword_27F3BEC;
    unk_27F3AE8 = unk_27F3BF0;
    dword_27F3AFC = dword_27F3C04;
    unk_27F3AF0 = Palette::BLUE;
    unk_27F3AF4 = unk_27F3BFC;
    unk_27F3AF8 = unk_27F3C00;
    dword_27F3B0C = dword_27F3C14;
    unk_27F3B00 = Palette::BROWN;
    unk_27F3B04 = unk_27F3C0C;
    unk_27F3B08 = unk_27F3C10;
    dword_27F3B1C = dword_27F3C24;
    unk_27F3B10 = Palette::GREEN;
    unk_27F3B14 = unk_27F3C1C;
    unk_27F3B18 = unk_27F3C20;
    unk_27F3B20 = Palette::RED;
    unk_27F3B24 = unk_27F3C2C;
    unk_27F3B28 = unk_27F3C30;
    unk_27F3B2C = unk_27F3C34;
    dword_27F3B3C = dword_27F3C44;
    unk_27F3B30 = Palette::BLACK;
    unk_27F3B34 = unk_27F3C3C;
    unk_27F3B38 = unk_27F3C40;
    j___cxa_guard_release((unsigned int *)&byte_27F3B40);
  }
  return (char *)&unk_27F3A40 + 16 * v1;
}


int __fastcall Palette::fromByte(int result, unsigned __int8 a2)
{
  if ( (unsigned int)result >= 0x10 )
    result = 10;
  return result;
}


char *__fastcall Palette::getColorString(int a1)
{
  int v1; // r4@1
  char v2; // r0@1

  v1 = a1;
  v2 = byte_27F3C50[0];
  __dmb();
  if ( !(v2 & 1) && j___cxa_guard_acquire((unsigned int *)byte_27F3C50) )
  {
    sub_21E94B4((void **)&dword_27F3C54, "white");
    sub_21E94B4((void **)&unk_27F3C58, "orange");
    sub_21E94B4((void **)&unk_27F3C5C, "magenta");
    sub_21E94B4((void **)&unk_27F3C60, "light_blue");
    sub_21E94B4((void **)&unk_27F3C64, "yellow");
    sub_21E94B4((void **)&unk_27F3C68, "lime");
    sub_21E94B4((void **)&unk_27F3C6C, "pink");
    sub_21E94B4((void **)&unk_27F3C70, "gray");
    sub_21E94B4((void **)&unk_27F3C74, "silver");
    sub_21E94B4((void **)&unk_27F3C78, "cyan");
    sub_21E94B4((void **)&unk_27F3C7C, "purple");
    sub_21E94B4((void **)&unk_27F3C80, "blue");
    sub_21E94B4((void **)&unk_27F3C84, "brown");
    sub_21E94B4((void **)&unk_27F3C88, "green");
    sub_21E94B4((void **)&unk_27F3C8C, "red");
    sub_21E94B4((void **)&dword_27F3C90, "black");
    _cxa_atexit(sub_A39034);
    j___cxa_guard_release((unsigned int *)byte_27F3C50);
  }
  return &byte_27F3C50[4 * v1 + 4];
}
