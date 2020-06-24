#pragma once

#include <string>

namespace cqasm {
namespace utils {

/**
 * Makes a string lowercase.
 */
std::string lowercase(const std::string &name);

/**
 * Case-insensitive string compare.
 */
bool case_insensitive_equals(const std::string &lhs, const std::string &rhs);

} // namespace utils
} // namespace cqasm
