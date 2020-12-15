#include "DepositCommand.h"

using namespace Logging;

namespace CryptoNote
{
  DepositCommand::DepositCommand(const CryptoNote::Currency& currency) :
      m_currency(currency), fake_outs_count(0), fee(currency.minimumFee()) {
  }
  
  bool DepositCommand::pAwithdrawDeposit(LoggerRef& logger, const std::vector<std::string> &args) {
    CryptoNote::DArgumentReader<std::vector<std::string>::const_iterator> ar(args.begin(), args.end());

    try {
      auto idStr = ar.next();
    } catch (const std::exception& e) {
      logger(ERROR, BRIGHT_RED) << e.what();
      return false;
    }

    return true;
  }

  bool DepositCommand::parseArguments(LoggerRef& logger, const std::vector<std::string> &args) {

    CryptoNote::DArgumentReader<std::vector<std::string>::const_iterator> ar(args.begin(), args.end());

    try {

        auto term_str = ar.next();

        if (!Common::fromString(term_str, term)) {
            logger(ERROR, BRIGHT_RED) << "Term should not be negative integer. Got: " << term_str;
            return false;
        }

        uint32_t maxDepositTerm = 12;
        if (Common::fromString(term_str, term) > maxDepositTerm) {
            logger(ERROR, BRIGHT_RED) << "Term should be less than 12. Got: " << term_str;
            return false;
        }

        auto value = ar.next();
        bool ok = m_currency.parseAmount(value, amount);
        if (!ok || 0 == amount) {
            logger(ERROR, BRIGHT_RED) << "amount is wrong: " << ' ' << value <<
                ", expected number from 0 to " << m_currency.formatAmount(std::numeric_limits<uint64_t>::max());
            return false;
        }
    } catch (const std::exception& e) {
      logger(ERROR, BRIGHT_RED) << e.what();
      return false;
    }

    return true;
  }
}