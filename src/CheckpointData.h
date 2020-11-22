
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
    {5000,   "5dba2f5aa014540551388b22d9d127e2596362b35e624f99872db5200344780c"}
	};
} // namespace CryptoNote