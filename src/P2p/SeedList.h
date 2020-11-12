/* Copyright (c) 2020 - The Cache Developers */

#pragma once

#include <cstdint>
#include <initializer_list>

namespace CryptoNote {
  const std::initializer_list<const char *> SEED_NODES = {
    "51.79.100.195:39999", /* Blockchain Explorer Node */
    "51.79.26.4:39999",
    "51.79.101.48:39999",
    "51.79.30.158:39999",
    "139.99.218.77:39999",
    "139.99.218.60:39999",
    "139.99.217.178:39999"
  };
}