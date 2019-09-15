#pragma once
#include <xdr/Stellar-types.h>

namespace std
{
template <> struct hash<acg::uint256>
{
    size_t operator()(acg::uint256 const& x) const noexcept;
};
}
