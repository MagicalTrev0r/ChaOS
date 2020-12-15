
#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {
	struct CheckpointData {
    uint32_t height;
    const char *blockId;
	};

#ifdef __GNUC__
  __attribute__((unused))
#endif

  /**
   * @param CheckpointData Uses data to help sync with the network quicker and to avoid split-chains.
   */

  const std::initializer_list<CheckpointData> CHECKPOINTS = {  
    {0,      "b2606e524141479e3c47fd5c57e998b579d04a08d74dcbfe298b883b42865c75"},
    {2500,   "85ed4b0c79a6241f807890d9e317cf5059bb72b75d77f96ca7bc0cb3353766b3"},
    {5000,   "5dba2f5aa014540551388b22d9d127e2596362b35e624f99872db5200344780c"},
    {7500,   "5c3f75a71b35916a57ec69999a45bd65e49735f669646a870ff5633a2301e2dc"},
    {10000,  "05ca89f788dad5f291692af348fb2566eac5e8a2e284d3ff12cc13c775e2270d"},
    {12500,  "5a4a8a35945e4f7fda3ab0f69aa7ca1f505ba299eb602dc40b450c0c81a5e888"},
    {15000,  "477109839fdb419d0d8b0d826cff85d0b3a60083b557545ea53b9c48755d2b34"},
    {17500,  "50a74a92b34ab6d153d6287f9fff13bc1684ba276a23f3a38ce09856027867ca"},
    {20000,  "26c5bae8a1c69da6fc0768fbb5621edf23cc969606298112f55cf423cec50e23"}
	};
} // namespace CryptoNote