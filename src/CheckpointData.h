// Copyright (c) 2020 - The Cache Developers
//
// Distributed under the GNU Lesser General Public License v3.0.
// Please read Cache/License.md

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
        {0,  "f204990ad47bf5cfa8ead24383ebfc99c099bfff446f272cffbc169ab3de1e0d"},
 	  {15191,  "983ccab3bc1dbd67d2f7caef25571e91f2ab1f3f7fbfb9437033c2c01e1440a1"},
 	  {17257,  "4956c42d234d6baf7d0230af5fd34375ca25dd539d9e812e004b63a28364a62d"},
 	 {20103,  "7f0a160f28003e5e051b61a74e56ffec403d1b847bf907744807d87c9fe35a45"},
  	  {20988,  "4fbbd656dbddc7460e9de8888b3f67686b863783ca70258af758f5fc447484f7"},
	 {25205,  "ad0d6b9b3e84340bdbec63099ff047bced8d9971b48ec7d790cf833490b7f2e2"}
  };
} // namespace CryptoNote
