

signed int __fastcall SelectedSlotData::clear(SelectedSlotData *this)
{
  SelectedSlotData *v1; // r4@1
  signed int result; // r0@1

  v1 = this;
  sub_119CA68((const void **)this, 0, *(_BYTE **)(*(_DWORD *)this - 12), 0);
  result = -1;
  *((_DWORD *)v1 + 1) = -1;
  *((_BYTE *)v1 + 8) = 0;
  return result;
}
