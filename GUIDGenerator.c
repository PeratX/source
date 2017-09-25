

void __fastcall GUIDGenerator::InitOnceImpl(GUIDGenerator *this)
{
  __int32 v1; // r0@1

  v1 = time(0);
  srand48(v1);
}
