

void __fastcall NullLogger::~NullLogger(NullLogger *this)
{
  NullLogger::~NullLogger(this);
}


void __fastcall NullLogger::~NullLogger(NullLogger *this)
{
  void *v1; // r0@1

  v1 = (void *)j_leveldb::Logger::~Logger(this);
  j_j_j__ZdlPv_7(v1);
}
