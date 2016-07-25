#include <cstddef>
#include <cstdint>
#include <string>

// library.cc
void checkString(std::string s);

extern "C" int LLVMFuzzerTestOneInput(const uint8_t *data, size_t size) {
  std::string str(reinterpret_cast<const char *>(data), size);
  checkString(str);
  return 0;
}
