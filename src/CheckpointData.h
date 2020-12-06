
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
    {15191,  "8d0d7a9328e8b4f2ba8764a6a9fc9908df5d10c5ea59f3a753861c3589809aa0"}
	};
} // namespace CryptoNote
