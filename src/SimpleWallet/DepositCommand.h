#pragma once

#include "CryptoNoteCore/Currency.h"
#include "WalletLegacy/WalletLegacy.h"
#include "Common/StringTools.h"

#include <Logging/LoggerRef.h>

using namespace Logging;

namespace CryptoNote
{
  class DepositCommand
  {
    public:
      const CryptoNote::Currency& m_currency;
      size_t fake_outs_count;

      /* deposit */
      uint64_t fee;
      uint64_t mixin;
      uint64_t amount;
      uint64_t term;

      /* withdraw */
      std::vector<DepositId> dId;

      DepositCommand(const CryptoNote::Currency& currency);

      bool parseArguments(LoggerRef& logger, const std::vector<std::string> &args);
      bool pAwithdrawDeposit(LoggerRef& logger, const std::vector<std::string> &args);
  };

  template <typename IterT, typename ValueT = typename IterT::value_type>
  class DArgumentReader {
  public:

    DArgumentReader(IterT begin, IterT end) :
      m_begin(begin), m_end(end), m_cur(begin) {
    }

    bool eof() const {
      return m_cur == m_end;
    }

    ValueT next() {
      if (eof()) {
        throw std::runtime_error("unexpected end of arguments");
      }

      return *m_cur++;
    }

  private:

    IterT m_cur;
    IterT m_begin;
    IterT m_end;
  };
}