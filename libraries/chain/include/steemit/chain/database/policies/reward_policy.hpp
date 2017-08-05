#ifndef GOLOS_REWARD_POLICY_HPP
#define GOLOS_REWARD_POLICY_HPP

#include "steemit/chain/database/generic_policy.hpp"
#include <steemit/chain/steem_objects.hpp>

namespace steemit {
namespace chain {
struct reward_policy : public generic_policy {
    reward_policy(const reward_policy &) = default;

    reward_policy &operator=(const reward_policy &) = default;

    reward_policy(reward_policy &&) = default;

    reward_policy &operator=(reward_policy &&) = default;

    virtual ~reward_policy() = default;

    reward_policy(database_basic &ref,int);

    asset get_pow_reward() const;

    void pay_liquidity_reward();

    void retally_liquidity_weight();


    //void adjust_liquidity_reward(const account_object &owner, const asset &volume, bool is_sdb) {}

};


}}
#endif //GOLOS_REWARD_POLICY_HPP